#pragma once
#include <iostream>
#include <vector>
#include <direct.h>
#include <Windows.h>
#include <chrono>
#include <thread>

class GCD040101M
{
private:
    HANDLE hSerial = INVALID_HANDLE_VALUE;
    bool SendRaw(const std::vector<uint8_t>& frame);

public:
    bool Open(const std::string& port);

    void Close();

    bool Move(uint8_t deviceID, uint16_t speed, bool direction);

};