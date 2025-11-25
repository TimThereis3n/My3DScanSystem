#include "graydecode.h"
#include <filesystem>
#include <algorithm>

namespace fs = std::filesystem;

bool GrayDecoder::decode(const std::string& folder_base,
    char direction,
    int num_bits,
    cv::Mat& decoded_result)
{
    bool isH = (direction == 'h' || direction == 'H');

    std::string gray_folder, sin_folder, gray_prefix, sin_prefix;

    if (isH) {
        gray_folder = folder_base + "/horizontal_folder/gray";
        sin_folder = folder_base + "/horizontal_folder";
        gray_prefix = "gray_h_";
        sin_prefix = "sin_h_";
    }
    else {
        gray_folder = folder_base + "/vertical_folder/gray";
        sin_folder = folder_base + "/vertical_folder";
        gray_prefix = "gray_v_";
        sin_prefix = "sin_v_";
    }

    // ---- 读取 Gray 图像 ----
    std::vector<cv::Mat> grayImgs;
    int H = 0, W = 0;
    if (!loadGrayImages(gray_folder, gray_prefix, num_bits, grayImgs, H, W))
        return false;

    // ---- 动态阈值（前4张 sin 图像） ----
    cv::Mat threshold;
    if (!computeThreshold(sin_folder, sin_prefix, H, W, threshold))
        return false;

    // ---- 解码 Gray Code ----
    decoded_result = performGrayDecode(grayImgs, threshold);
    return true;
}


// =======================================================
// 加载 Gray code 图像
// =======================================================
bool GrayDecoder::loadGrayImages(const std::string& gray_folder,
    const std::string& prefix,
    int num_bits,
    std::vector<cv::Mat>& grayImgs,
    int& H, int& W)
{
    grayImgs.clear();
    for (int i = 0; i < num_bits; i++) {
        char name[256];
        sprintf(name, "%s%02d.bmp", prefix.c_str(), i);

        std::string filename = gray_folder + "/" + name;
        if (!fs::exists(filename)) {
            printf("Gray file missing: %s\n", filename.c_str());
            return false;
        }

        cv::Mat img = cv::imread(filename, cv::IMREAD_UNCHANGED);

        if (img.empty()) {
            printf("Failed to load %s\n", filename.c_str());
            return false;
        }

        if (img.channels() == 4)
            cv::cvtColor(img, img, cv::COLOR_BGRA2GRAY);
        else if (img.channels() == 3)
            cv::cvtColor(img, img, cv::COLOR_BGR2GRAY);

        img.convertTo(img, CV_64F, 1.0 / 255.0);

        if (i == 0) {
            H = img.rows;
            W = img.cols;
        }
        else if (img.rows != H || img.cols != W) {
            cv::resize(img, img, cv::Size(W, H));
        }

        grayImgs.push_back(img.clone());
    }

    return true;
}


// =======================================================
// 计算动态阈值 = 前 4 张 sin 图像的平均值
// =======================================================
bool GrayDecoder::computeThreshold(const std::string& sin_folder,
    const std::string& prefix,
    int H, int W,
    cv::Mat& threshold)
{
    std::vector<std::string> fileList;
    for (auto& p : fs::directory_iterator(sin_folder)) {
        if (p.path().extension() == ".bmp")
            fileList.push_back(p.path().string());
    }

    if (fileList.empty()) {
        printf("No sin images in %s\n", sin_folder.c_str());
        return false;
    }

    std::sort(fileList.begin(), fileList.end());

    cv::Mat sinImgs = cv::Mat::zeros(H, W, CV_64F);
    int got = 0;

    for (auto& file : fileList) {
        std::string fname = fs::path(file).filename().string();
        if (fname.rfind(prefix, 0) != 0)
            continue;

        cv::Mat img = cv::imread(file, cv::IMREAD_UNCHANGED);

        if (img.channels() == 4)
            cv::cvtColor(img, img, cv::COLOR_BGRA2GRAY);
        else if (img.channels() == 3)
            cv::cvtColor(img, img, cv::COLOR_BGR2GRAY);

        img.convertTo(img, CV_64F, 1.0 / 255.0);
        if (img.rows != H || img.cols != W)
            cv::resize(img, img, cv::Size(W, H));

        sinImgs += img;
        got++;

        if (got >= 4)
            break;
    }

    if (got < 4) {
        printf("Not enough sin images\n");
        return false;
    }

    threshold = sinImgs / 4.0;
    return true;
}


// =======================================================
// Gray code → Binary 解码
// =======================================================
cv::Mat GrayDecoder::performGrayDecode(const std::vector<cv::Mat>& grayImgs,
    const cv::Mat& threshold)
{
    int H = grayImgs[0].rows;
    int W = grayImgs[0].cols;

    cv::Mat decoded = cv::Mat::zeros(H, W, CV_32S);

    // 第 1 bit
    decoded = (grayImgs[0] > threshold);

    // 后续 bits
    for (int i = 1; i < grayImgs.size(); i++) {
        cv::Mat grayBit = (grayImgs[i] > threshold);

        for (int r = 0; r < H; r++) {
            const uchar* pGray = grayBit.ptr<uchar>(r);
            int* pOut = decoded.ptr<int>(r);

            for (int c = 0; c < W; c++) {
                int lastBit = pOut[c] & 1;
                int newBit = lastBit ^ pGray[c];

                pOut[c] = (pOut[c] << 1) | newBit;
            }
        }
    }

    return decoded;
}
