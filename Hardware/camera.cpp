#include"camera.h"

void runBasler(const std::string& folderPath)
{
    int wrong = 0;
    int grabbedlmages = 0;
    double m_exposure = CameraExposure;
    size_t m_countOfImagesToGrab = ImagesToGrab;
    double m_gain = CameraGain; // 相机增益
    Basler_UsbCameraParams::TriggerSourceEnums triggerSource = theChosenTriggerLine;

    Pylon::PylonInitialize();
    Pylon::CBaslerUsbInstantCamera* camera_t = NULL;
    Pylon::CDeviceInfo* info = new Pylon::CDeviceInfo;

    //========调试用===========
    // 诊断：列出可用的 Transport Layers 和设备
    /*TlInfoList_t tls;
    CTlFactory::GetInstance().EnumerateTls(tls);
    std::cout << "Available TLs: " << tls.size() << std::endl;
    for (const auto& t : tls) {
        std::cout << " - " << t.GetFriendlyName()
            << " (" << t.GetFullName() << ")\n";
    }*/

    /*DeviceInfoList_t devices;
    CTlFactory::GetInstance().EnumerateDevices(devices);
    std::cout << "Found devices: " << devices.size() << std::endl;
    for (const auto& d : devices) {
        std::cout << " - " << d.GetFriendlyName() << " ["
            << d.GetModelName() << "] via " << d.GetDeviceClass() << "\n";
    }*/
    //========调试用===========

    try
    {
        if (camera_t == NULL)
        {
            info->SetDeviceClass(Pylon::CBaslerUsbInstantCamera::DeviceClass());
            camera_t = new Pylon::CBaslerUsbInstantCamera(Pylon::CTlFactory::GetInstance().CreateFirstDevice(*info));
            camera_t->GrabCameraEvents = true;
        }
        camera_t->Open();
        // std::cout << "Open Basler Camera successfully!" << std::endl;

        // 等待1秒，确保相机完全初始化
        std::this_thread::sleep_for(std::chrono::seconds(1));

        GenApi::INodeMap& nodemap = camera_t->GetNodeMap();
        const GenApi::CEnumerationPtr pixelFormat(nodemap.GetNode("PixelFormat"));
        if (GenApi::IsAvailable(pixelFormat->GetEntryByName("Mono8")))
        {
            pixelFormat->FromString("Mono8");
        }

        if (GenApi::IsAvailable(camera_t->TriggerSource.GetEntry(theChosenTriggerLine)))
        {
            camera_t->TriggerSource.SetValue(theChosenTriggerLine);
        }
        else
        {
            std::cerr << "错误：请求的触发源不可用;可以尝试设置其他触发源或退出;" << std::endl;
        }

        camera_t->MaxNumBuffer = 10;

        // 设置图像大小
        GenApi::CIntegerPtr width = nodemap.GetNode("Width");
        GenApi::CIntegerPtr height = nodemap.GetNode("Height");
        GenApi::CIntegerPtr offsetX = nodemap.GetNode("OffsetX");
        GenApi::CIntegerPtr offsetY = nodemap.GetNode("OffsetY");
        offsetX->SetValue(offsetX->GetMin());
        offsetY->SetValue(offsetY->GetMin());
        width->SetValue(width->GetMax());
        height->SetValue(height->GetMax());
        camera_t->TriggerSelector.SetValue(Basler_UsbCameraParams::TriggerSelector_FrameStart);
        camera_t->TriggerActivation.SetValue(Basler_UsbCameraParams::TriggerActivation_RisingEdge);
        camera_t->TriggerSource.SetValue(triggerSource);

        // 设置触发延时
        camera_t->TriggerDelay.SetValue(0.0);
        camera_t->LineDebouncerTime.SetValue(10.0);
        camera_t->TriggerMode.SetValue(Basler_UsbCameraParams::TriggerMode_On);

        camera_t->ExposureTime.SetValue(m_exposure);

        Pylon::CBaslerUsbInstantCamera& camera = *camera_t;

        // 设置增益
        camera.GainAuto.SetValue(Basler_UsbCameraParams::GainAuto_Off);
        camera.Gain.SetValue(m_gain);

        // 新建Pylon ImageFormatConverter对象
        Pylon::CImageFormatConverter formatConverter;
        Pylon::CPylonImage pylonImage;
        cv::Mat openCvImage;

        // 开始抓取
        camera.StartGrabbing(Pylon::GrabStrategy_OneByOne, Pylon::GrabLoop_ProvidedByUser);
        // 抓取结果数据指针
        Pylon::CGrabResultPtr ptrGrabResult;

        // 确保相机已经准备好，拍摄延时
        std::this_thread::sleep_for(std::chrono::milliseconds(500));

        // ===== 等待相机进入“可接收下一次外部触发”的状态 =====
        gCamTriggerReady = false;
        if (!camera.WaitForFrameTriggerReady(5000, Pylon::TimeoutHandling_Return))
        {
            std::cerr << "[Camera] Not trigger-ready within 5s.\n";
            gCamTriggerReady = false;
        }
        else
        {
            gCamTriggerReady = true;
        }

        size_t saved = 0;                 // 已经存储的图片数量
        const size_t need = ImagesToGrab; // 需要拍摄的图片数量

        while (camera.IsGrabbing() && saved < need)
        {
            // 建议：不抛异常的等待，没触发就继续等
            bool got = camera.RetrieveResult(5000, ptrGrabResult, Pylon::TimeoutHandling_Return);
            if (!got)
                continue;

            if (ptrGrabResult->GrabSucceeded())
            {
                // 将抓取的缓冲数据转化成Pylon image
                formatConverter.Convert(pylonImage, ptrGrabResult);

                // 将Pylon image转成OpenCV image
                openCvImage = cv::Mat(ptrGrabResult->GetHeight(), ptrGrabResult->GetWidth(),
                    CV_8UC1, (uint8_t*)pylonImage.GetBuffer());

                // 文件名
                int fname_index = imagecount + static_cast<int>(saved);

                std::ostringstream s;
                s << folderPath << "/" << std::setw(4) << std::setfill('0') << fname_index << ".bmp";
                std::string imageName = s.str();

                if (cv::imwrite(imageName, openCvImage))
                {
                    std::cout << "Image saved: " << imageName << std::endl;
                }
                else
                {
                    std::cout << "Failed to save image: " << imageName << std::endl;
                }

                ++saved;

                // 每n张提示一次
                if (saved % 13 == 0)
                {
                    std::cout << "[Info] 本组已保存 " << saved << " / " << need << " 张\n";
                }
            }
            else
            {
                std::cerr << "Grab failed: " << ptrGrabResult->GetErrorDescription() << std::endl;
            }
        }

        // 停止抓取
        camera.StopGrabbing();
        // 关闭相机
        camera.Close();
    }
    catch (const Pylon::GenericException& e)
    {
        std::cerr << "An exception occurred: " << e.GetDescription() << std::endl;
        wrong = 1;
        //std::cerr << "if Grab timed out Please choose your trigger line again" << std::endl;
    }

    if (wrong) {
        system("pause");
        return;
    }

    // 释放Pylon库
    Pylon::PylonTerminate();
}