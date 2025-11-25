#pragma once
#include <opencv2/opencv.hpp>
#include <string>
#include <vector>

class GrayDecoder
{
public:
    // 输入: folder_base = "D:/test2/ob5"
    //      direction   = 'h' or 'v'
    //      num_bits    = gray code 位数
    // 输出: decoded_result: CV_32S
    bool decode(const std::string& folder_base,char direction,int num_bits,cv::Mat& decoded_result);

private:
    bool loadGrayImages(const std::string& gray_folder,const std::string& prefix, int num_bits, std::vector<cv::Mat>& grayImgs, int& H, int& W);

    bool computeThreshold(const std::string& sin_folder,const std::string& prefix, int H, int W,cv::Mat& threshold);

    cv::Mat performGrayDecode(const std::vector<cv::Mat>& grayImgs, const cv::Mat& threshold);
};
