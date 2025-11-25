#include "platform.h"
#include "dlp4500.h"
#include "camera.h"
#include "DHcamera.h"
#include <errno.h> // for errno
#include <sstream>
#include <iomanip>
#include <string>
#include <fstream>
#include <chrono>
#include <conio.h> // _kbhit(), _getch()
#pragma comment(lib,"hidapi.lib")

std::atomic_bool gCamTriggerReady{ false };//重置触发模式标志

void takePictures(int group,std::shared_ptr<DHcamera> dc)
{
	std::string cur = SAVE_PATH + std::string("/") + std::to_string(group);
	
    runBasler(cur); // 将子文件夹路径传递给 runBasler
    
    dc->sign();
    //dc->runDHcamera(cur);
}

void readExposure() {
    // 读取并打印曝光&周期（单位：微秒us）
    std::cout << "===== Initial Settings =====" << std::endl;
    std::cout << "Camera Exposure  : " << CameraExposure << " us" << std::endl;
    unsigned int expo_us = 0, frame_us = 0;
    if (DLPC350_GetExposure_FramePeriod(&expo_us, &frame_us) == 0)
    {
        double expo_ms = expo_us / 1000.0;
        double frame_ms = frame_us / 1000.0;
        double fps = (frame_us > 0) ? (1e6 / frame_us) : 0.0;
        std::cout << "Pattern Exposure : " << expo_us << " us" << std::endl;  // (" << expo_ms << " ms), " << endl;
        std::cout << "Pattern period   : " << frame_us << " us" << std::endl; // (" << frame_ms << " ms), " << endl;

        //获取当前时间
        auto now = std::chrono::system_clock::now();
        auto time_t = std::chrono::system_clock::to_time_t(now);
        //格式化时间
        std::tm local_time;
        localtime_s(&local_time, &time_t);
        
        //写入日志
        std::ofstream ofs;
        ofs.open("ExposureTestingLog.txt", std::ios::app);
        ofs <<"["<<std::put_time(&local_time,"%Y.%m.%d %H:%M:%S")<<"] " << "Camera_Exposure:" << CameraExposure << "us Pattern_Exposure:" << expo_us << "us Pattern_Period:" << frame_us << "us" << std::endl;
        ofs.close();
        //写入结束
    }
    else
    {
        std::cerr << "[DLP] Read exposure/frame period failed\n";
    }
    std::cout << "============================" << std::endl;
}

void Capture(ControlDLP4500 &dlp, GCD040101M &stage,std::shared_ptr<DHcamera> dc) {
    if (!stage.Open("COM5"))
    {
        std::cerr << "无法打开串口 COM5，无法控制平移台移动\n";
        // system("pause");
        // return 0;直接中止程序
    }

    try
    {
        Pylon::PylonInitialize();
        Pylon::TlInfoList_t tls;
        Pylon::CTlFactory::GetInstance().EnumerateTls(tls);

        std::cout << "===== Pylon Transport Layers =====" << std::endl;
        std::cout << "Available TLs: " << tls.size() << std::endl;
        for (const auto& t : tls)
        {
            std::cout << " - " << t.GetFriendlyName()
                << " (" << t.GetFullName() << ")\n";
        }

        Pylon::PylonTerminate();
    }
    catch (const Pylon::GenericException& e)
    {
        std::cerr << "[Pylon] Enum TL failed: " << e.GetDescription() << std::endl;
    }

    int countofgroup = 0;        // 已经拍了几组
    int group = NumOfFirstGroup; // 照片序号从 1 开始

    readExposure();//读取并打印投影仪和相机的曝光时间

    int countofmove = 0; // 调试用，看平移台动了几次

    // 无限循环：先投影→再拍照→平移台移动
    while (countofgroup < max_group){
        std::string folder = SAVE_PATH + std::string("/") + std::to_string(group);

        int ret = _mkdir(folder.c_str());
        if (ret != 0 && errno != EEXIST){
            std::cerr << "创建目录失败: " << folder << '\n';
        }

        std::cout << "===== 第 " << group << " 组 =====" << std::endl;
        // 先开始相机线程
        gCamTriggerReady = false;
        std::thread camThread([dc,group](){
            takePictures(group,dc); });

        // 等相机设置为触发源模式
        std::cout << "等待相机触发准备..." << std::endl;
        bool cameraReady = false;
        int WaitingDeadline = 160;// 16秒超时
        for (int i = 0; i < WaitingDeadline; i++){
            if (gCamTriggerReady.load()){ // load加载相机线程中的标志
                cameraReady = true;
                break;
            }
            std::this_thread::sleep_for(std::chrono::milliseconds(100));

            // 每2秒输出状态
            if (i % 20 == 0){
                std::cout << "等待相机准备中... " << (i / 10) << "秒" << std::endl;
            }
        }

        if (!cameraReady){
            std::cerr << "错误: 相机在"<< WaitingDeadline%10 <<"秒内未准备就绪!" << std::endl;
            camThread.detach(); // 避免阻塞
            return;
        }
        std::cout << "相机准备就绪，启动DLP..." << std::endl;

        // 启动投影
        dlp.runDLP();
        // 等相机线程拍完
        camThread.join();
        // 停止投影
        dlp.PatSeqCtrlStop();
        std::this_thread::sleep_for(std::chrono::milliseconds(500)); // 确保投影停止

        countofgroup++; // 拍完了，已经拍摄组数加1
        if (countofgroup == max_group){
            std::cout << "===一共 " << max_group << " 组拍摄结束===" << std::endl;
            group++;
            break;
        }
        else{
            std::cout << "===第 " << countofgroup << " 组拍摄结束===" << std::endl;
            std::cout << "===平移台移动中===" << std::endl;
            stage.Move(0x02, 15, false); // false向左，true向右,从桌子往实验台看
            //========调试用===========
            /*countofmove++;
            std::cout << "移动次数：" << countofmove<<std::endl;*/
            //========调试用===========
            std::this_thread::sleep_for(std::chrono::milliseconds(3500)); // 3500ms = 3.5s
            group++;
        }
        //========调试用===========
        // std::cout << "调试信息: countofgroup=" << countofgroup << ", max_group=" << max_group << ", group=" << group << std::endl;
        //========调试用===========
    }
}

int main() {
    // 初始化硬件
    ControlDLP4500 dlp;
    // 创建平移台对象
    GCD040101M stage;
    //创建大恒相机对象
    auto dc = std::make_shared<DHcamera>();
    // 等1s投影仪初始化
    std::this_thread::sleep_for(std::chrono::seconds(1));

    Capture(dlp, stage,dc);
	system("pause");
	return 0;
}
