#include "PhaseShiftSolver.h"
#include <filesystem>
#include <algorithm>

namespace fs = std::filesystem;

// ===================================================
// 主流程：读取 4 张相移图 → 滤波 → mask → wrapped
// ===================================================
bool PhaseShiftSolver::computeWrappedPhase(const std::string& folder,
    cv::Mat& wrapped,
    cv::Mat& mask)
{
    std::vector<cv::Mat> imgs;
    if (!loadImageStack(folder, imgs))
        return false;

    cv::Mat I1 = gaussianSmooth(imgs[0]);
    cv::Mat I2 = gaussianSmooth(imgs[1]);
    cv::Mat I3 = gaussianSmooth(imgs[2]);
    cv::Mat I4 = gaussianSmooth(imgs[3]);

    // wrapped phase
    cv::Mat num = I4 - I2;
    cv::Mat den = I3 - I1;

    cv::phase(den, num, wrapped, false);  // atan2(num, den)

    // mask
    mask = computeMask(I1, I2, I3, I4);

    wrapped = wrapped.mul(mask);

    return true;
}


// ===================================================
// 读取相移图堆栈（自然排序）
// ===================================================
bool PhaseShiftSolver::loadImageStack(const std::string& folder,
    std::vector<cv::Mat>& imgs)
{
    imgs.clear();
    std::vector<std::string> fileList;

    for (auto& p : fs::directory_iterator(folder)) {
        if (p.path().extension() == ".bmp")
            fileList.push_back(p.path().string());
    }

    if (fileList.size() < 4) {
        printf("Need at least 4 images in %s\n", folder.c_str());
        return false;
    }

    std::sort(fileList.begin(), fileList.end());

    for (int i = 0; i < 4; i++) {
        cv::Mat img = cv::imread(fileList[i], cv::IMREAD_GRAYSCALE);
        if (img.empty()) return false;
        img.convertTo(img, CV_64F);
        imgs.push_back(img.clone());
    }
    return true;
}


// ===================================================
// 高斯平滑（kernel=8, sigma=1.2）
// ===================================================
cv::Mat PhaseShiftSolver::gaussianSmooth(const cv::Mat& img)
{
    cv::Mat out;
    cv::GaussianBlur(img, out, cv::Size(8, 8), 1.2);
    return out;
}


// ===================================================
// mask = imopen(M>3, ones(7))
// ===================================================
cv::Mat PhaseShiftSolver::computeMask(const cv::Mat& I1,
    const cv::Mat& I2,
    const cv::Mat& I3,
    const cv::Mat& I4)
{
    cv::Mat S = I1 * sin(CV_PI / 2) +
        I2 * sin(CV_PI) +
        I3 * sin(3 * CV_PI / 2) +
        I4 * sin(2 * CV_PI);

    cv::Mat C = I1 * cos(CV_PI / 2) +
        I2 * cos(CV_PI) +
        I3 * cos(3 * CV_PI / 2) +
        I4 * cos(2 * CV_PI);

    cv::Mat M;
    cv::magnitude(S, C, M);

    cv::Mat mask = (M > 3);

    // imopen = erode + dilate
    cv::Mat kernel = cv::Mat::ones(7, 7, CV_8U);
    cv::erode(mask, mask, kernel);
    cv::dilate(mask, mask, kernel);

    return mask;
}
