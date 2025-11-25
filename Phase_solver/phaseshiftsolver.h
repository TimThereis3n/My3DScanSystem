#pragma once
#include <opencv2/opencv.hpp>
#include <string>
#include <vector>

class PhaseShiftSolver
{
public:
    // 读取 4 幅相移图像（按自然顺序）
    // 输入：folder = ".../horizontal_folder"
    // 输出：wrapped phase、mask
    bool computeWrappedPhase(const std::string& folder,cv::Mat& wrapped,cv::Mat& mask);

private:
    bool loadImageStack(const std::string& folder, std::vector<cv::Mat>& imgs);

    cv::Mat gaussianSmooth(const cv::Mat& img);

    cv::Mat computeMask(const cv::Mat& I1,const cv::Mat& I2,const cv::Mat& I3,const cv::Mat& I4);
};
