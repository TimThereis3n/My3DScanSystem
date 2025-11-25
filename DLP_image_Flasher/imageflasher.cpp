#include "imageflasher.h"
#include "dlpc350_api.h"
#include <filesystem>
#include <iostream>
#include <chrono>
#include <thread>
#include <fstream>
namespace fs = std::filesystem;

ImageFlasher::ImageFlasher()
{
    if (DLPC350_USB_Init() != 0)
    {
        std::cout << "[ERROR] USB Init failed!" << std::endl;
    }

    DLPC350_USB_Open();

    if (!DLPC350_USB_IsConnected())
    {
        std::cout << "[ERROR] DLP4500 not connected!" << std::endl;
    }
}

ImageFlasher::~ImageFlasher()
{
    DLPC350_USB_Close();
    DLPC350_USB_Exit();
}

bool ImageFlasher::ScanBMPFolder(const std::string& folder)
{
    bmpFiles.clear();

    for (auto& p : fs::directory_iterator(folder))
    {
        if (p.path().extension() == ".bmp" || p.path().extension() == ".BMP")
            bmpFiles.push_back(p.path().string());
    }

    if (bmpFiles.empty())
    {
        std::cout << "[ERROR] No bmp files found!" << std::endl;
        return false;
    }

    // 自动按照文件名排序
    std::sort(bmpFiles.begin(), bmpFiles.end());

    std::cout << "[OK] Found " << bmpFiles.size() << " BMP images." << std::endl;

    return true;
}

bool ImageFlasher::CheckAlreadyFlashed()
{
    unsigned int numImages = 0;
    DLPC350_GetNumImagesInFlash(&numImages);

    if (numImages == bmpFiles.size())
    {
        std::cout << "[INFO] Flash already contains all images. Skip flashing." << std::endl;
        return true;
    }

    std::cout << "[INFO] Flash image count = " << numImages
        << ", need = " << bmpFiles.size() << std::endl;

    return false;
}

bool ImageFlasher::UploadBMPRam(const std::string& path)
{
    std::ifstream fin(path, std::ios::binary);
    if (!fin.is_open())
    {
        std::cout << "[ERROR] cannot open BMP: " << path << std::endl;
        return false;
    }

    std::vector<unsigned char> buffer(std::istreambuf_iterator<char>(fin), {});

    unsigned int dataLen = buffer.size();

    DLPC350_SetUploadSize(dataLen);

    int rc = DLPC350_UploadData(buffer.data(), dataLen);
    if (rc != 0)
    {
        std::cout << "[ERROR] Upload BMP to RAM failed!" << std::endl;
        return false;
    }

    return true;
}

bool ImageFlasher::WaitFlashReady()
{
    DLPC350_WaitForFlashReady();
    return true;
}

bool ImageFlasher::WriteFlash()
{
    int rc = DLPC350_FlashSectorErase();
    if (rc != 0)
    {
        std::cout << "[ERROR] Sector erase failed." << std::endl;
        return false;
    }

    DLPC350_WaitForFlashReady();
    return true;
}

bool ImageFlasher::FlashImagesToDLP()
{
    std::cout << "\n===== Flashing images to DLP4500 =====" << std::endl;

    WriteFlash();

    unsigned int addr = 0;

    for (size_t i = 0; i < bmpFiles.size(); i++)
    {
        std::cout << "[FLASH] (" << i << "/" << bmpFiles.size() << "): "
            << bmpFiles[i] << std::endl;

        UploadBMPRam(bmpFiles[i]);

        DLPC350_SetFlashAddr(addr);
        DLPC350_FlashSectorErase();
        DLPC350_WaitForFlashReady();

        DLPC350_SetUploadSize(0);
        DLPC350_UploadData(nullptr, 0);

        addr += 0x20000;  // 每张图固定步进 128 KB（最安全）
    }

    std::cout << "[OK] Flash Completed." << std::endl;
    return true;
}


