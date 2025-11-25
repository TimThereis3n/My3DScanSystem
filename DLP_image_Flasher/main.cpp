#include "ImageFlasher.h"
#include <iostream>

int main()
{
    std::string folder = "D:\\DLPÉÕÂ¼\\originalImage\\Flahser";

    ImageFlasher flasher;

    flasher.ScanBMPFolder(folder);

    if (!flasher.CheckAlreadyFlashed())
    {
        flasher.FlashImagesToDLP();
    }

    std::cout << "\nDone. Press ENTER to exit.";
    std::cin.get();

    return 0;
}
