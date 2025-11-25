#include"platform.h"

bool GCD040101M::SendRaw(const std::vector<uint8_t>&frame)
{
    DWORD written = 0;
    bool ok = WriteFile(hSerial, frame.data(), 10, &written, NULL) && written == 10;
    return ok;
}
bool GCD040101M::Open(const std::string& port)
{
    hSerial = CreateFileA(port.c_str(), GENERIC_READ | GENERIC_WRITE, 0, NULL, OPEN_EXISTING, 0, NULL);
    if (hSerial == INVALID_HANDLE_VALUE)
        return false;

    DCB dcb = { 0 };
    dcb.DCBlength = sizeof(dcb);
    GetCommState(hSerial, &dcb);
    dcb.BaudRate = CBR_9600;
    dcb.ByteSize = 8;
    dcb.Parity = NOPARITY;
    dcb.StopBits = ONESTOPBIT;
    SetCommState(hSerial, &dcb);

    COMMTIMEOUTS to = { 50, 50, 10, 50, 10 };
    SetCommTimeouts(hSerial, &to);

    std::cout << "===== 串口已打开 =====" << std::endl;
    return true;
}
void GCD040101M::Close()
{
    if (hSerial != INVALID_HANDLE_VALUE)
        CloseHandle(hSerial);
}
bool GCD040101M::Move(uint8_t deviceID, uint16_t speed, bool direction)
{
    std::vector<uint8_t> frames[4] = {
        {0x00, 0x00, 0x40, deviceID, 'P', 0x00, 0x00, 0x14, 0x00, 0x00},// 单次移动距离：0x14*20*0.065
        {0x00, 0x00, 0x40, deviceID, 'S', 0x00, 0x05, 0x00, 0x00, 0x00},// 速度
        {0x00, 0x00, 0x40, deviceID, 'D', 0x00, static_cast<uint8_t>(direction ? 0x01 : 0x00), 0x00, 0x00, 0x00}, // 方向
        {0x00, 0x00, 0x40, deviceID, 'G', 0x00, 0x00, 0x00, 0x00, 0x00} };
    for (const auto& f : frames)
    {
        if (!SendRaw(f))
            return false;
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
    return true;
}