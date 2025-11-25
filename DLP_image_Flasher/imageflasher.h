#pragma once
#include <string>
#include <vector>

class ImageFlasher
{
public:
    ImageFlasher();
    ~ImageFlasher();

    bool ScanBMPFolder(const std::string& folder);
    bool FlashImagesToDLP();
    bool CheckAlreadyFlashed();

private:
    bool UploadBMPRam(const std::string& path);
    bool WriteFlash();
    bool WaitFlashReady();

private:
    std::vector<std::string> bmpFiles;
};
