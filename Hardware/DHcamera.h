#pragma once
#include "parameters.h"
#include <thread>
#include <iostream>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/core/core.hpp>

class DHcamera {
public:
	void runDHcamera(const std::string& folderPath);
	void sign();
};