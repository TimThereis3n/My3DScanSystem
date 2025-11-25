#pragma once
#include <pylon\PylonIncludes.h>
#include <pylon\usb\BaslerUsbInstantCamera.h>
#include <atomic>

#define SAVE_PATH "D:/measure/new/usingforsave"
static const int imagecount = 1;//起拍摄始照片序号
static const double CameraExposure = 40000.0;//相机曝光
static const size_t ImagesToGrab = 26;//单组拍摄图片数
static const int max_group = 1;//拍摄组数
static const Basler_UsbCameraParams::TriggerSourceEnums theChosenTriggerLine = Basler_UsbCameraParams::TriggerSourceEnums::TriggerSource_Line1;//触发源
static const int NumOfFirstGroup =   14   ;//起拍组号
static const double CameraGain = 0.0;//相机增益
extern std::atomic_bool gCamTriggerReady;//相机进入触发模式标志
