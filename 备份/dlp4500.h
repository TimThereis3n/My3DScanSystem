#ifndef DLP4500_H
#define DLP4500_H

#include "dlpc350_common.h"
#include "dlpc350_error.h"
#include "dlpc350_usb.h"
#include "dlpc350_api.h"
#include "dlpc350_flashDevice.h"
#include "dlpc350_BMPParser.h"
#include "dlpc350_firmware.h"
#include "dlpc350_version.h"

#include<thread>
#include<chrono>
#include<iostream>

#define MAX_NUM_RETRIES 5

class ControlDLP4500
{
public:
    //¹¹Ôìº¯Êý
    ControlDLP4500();
    ~ControlDLP4500();
    void runDLP();
    void PatSeqCtrlStop();
    void SetDLPC350CInPatternMode();

private:
    unsigned int API_ver, APP_ver, SWConfig_ver, SeqConfig_ver;
    char versionStr[255];
};

#endif
