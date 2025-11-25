/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_19;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox_SystemCtrl;
    QGridLayout *gridLayout_31;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *pushButton_Connect;
    QPushButton *pushButton_Reset;
    QFormLayout *formLayout_2;
    QLabel *label_API;
    QLabel *label_ApiVersion;
    QFormLayout *formLayout_8;
    QLabel *label_firmwareTag;
    QLabel *label_firmwareTagInfo;
    QGridLayout *gridLayout_10;
    QLabel *label_statusSeqRun;
    QPushButton *indicatorButton_statusSeqRun;
    QPushButton *indicatorButton_statusSeqErr;
    QLabel *label_statusInitDone;
    QSpacerItem *horizontalSpacer;
    QPushButton *indicatorButton_statusForcedSwap;
    QLabel *label_statusForcedSwap;
    QPushButton *indicatorButton_statusInitDone;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_statusSeqErr;
    QPushButton *indicatorButton_statusDmdParked;
    QLabel *label_statusDrcErr;
    QLabel *label_statusDMDParked;
    QPushButton *indicatorButton_statusDrcErr;
    QLabel *label_statusBufSwap;
    QPushButton *indicatorButton_statusBufFreeze;
    QPushButton *indicatorButton_statusSeqAbort;
    QLabel *label_statusSeqAbort;
    QCheckBox *checkBox_updateStatus;
    QVBoxLayout *verticalLayout_16;
    QGroupBox *groupBox_modeControl;
    QGridLayout *gridLayout_11;
    QRadioButton *radioButton_SLMode;
    QRadioButton *radioButton_VideoMode;
    QRadioButton *radioButton_StandbyMode;
    QRadioButton *radioButton_VariableExpSLMode;
    QGroupBox *groupBox_ImageSetting;
    QVBoxLayout *verticalLayout_38;
    QHBoxLayout *horizontalLayout_13;
    QCheckBox *checkBox_shortAxisFlip;
    QCheckBox *checkBox_longAxisFlip;
    QHBoxLayout *horizontalLayout_18;
    QPushButton *pushButton_GetFlip;
    QPushButton *pushButton_SetFlip;
    QGroupBox *groupBox_LEDDriverCtrl;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox_LEDCurrentCtrl;
    QGridLayout *gridLayout_15;
    QFormLayout *formLayout;
    QLabel *label_LEDRed;
    QLineEdit *lineEdit_RedLEDCurrent;
    QLabel *label_LEDGreen;
    QLineEdit *lineEdit_GreenLEDCurrent;
    QLabel *label_LEDBlue;
    QLineEdit *lineEdit_BlueLEDCurrent;
    QCheckBox *checkBox_LedPwmInvert;
    QGroupBox *groupBox_LEDEnSelect;
    QGridLayout *gridLayout;
    QRadioButton *radioButton_ColorDisplayAuto;
    QRadioButton *radioButton_ColorDisplayManual;
    QCheckBox *checkBox_RedEnable;
    QCheckBox *checkBox_GreenEnable;
    QCheckBox *checkBox_BlueEnable;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_GetLEDConfiguration;
    QPushButton *pushButton_SetLEDConfiguration;
    QSpacerItem *horizontalSpacer_14;
    QHBoxLayout *horizontalLayout_26;
    QPushButton *pushButton_ApplySolution;
    QPushButton *pushButton_SaveSolution;
    QPushButton *pushButton_ApplyDefaultSolution;
    QTabWidget *tabWidget;
    QWidget *tab_Video_Mode;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_21;
    QGroupBox *groupBox_InputConfiguration;
    QGridLayout *gridLayout_12;
    QGroupBox *groupBox_ClockSelect;
    QVBoxLayout *verticalLayout_17;
    QComboBox *comboBox_PortClockList;
    QHBoxLayout *horizontalLayout_14;
    QPushButton *pushButton_GetPortClock;
    QPushButton *pushButton_SetPortClock;
    QGroupBox *groupBox_PixelFormat;
    QVBoxLayout *verticalLayout_13;
    QComboBox *comboBox_PixelFormatList;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *pushButton_GetPortPixelFormat;
    QPushButton *pushButton_SetPortPixelFormat;
    QGroupBox *groupBox_SourceSelect;
    QVBoxLayout *verticalLayout_30;
    QVBoxLayout *verticalLayout_20;
    QComboBox *comboBox_InputSourceList;
    QComboBox *comboBox_InputSourceOptionList;
    QSplitter *splitter;
    QPushButton *pushButton_GetPortSource;
    QPushButton *pushButton_SetPortSource;
    QGroupBox *groupBox_PortDataSwap;
    QVBoxLayout *verticalLayout_32;
    QComboBox *comboBox_SwapSelectList;
    QVBoxLayout *verticalLayout_14;
    QSplitter *splitter_2;
    QPushButton *pushButton_GetPortSwap;
    QPushButton *pushButton_SetPortSwap;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_23;
    QGroupBox *groupBox_DisplayDimension;
    QVBoxLayout *verticalLayout_8;
    QGridLayout *gridLayout_14;
    QLabel *label_DispLinesPerFrame;
    QLineEdit *lineEdit_CropAreaLinesPerFrame;
    QLineEdit *lineEdit_DispAreaPixPerFrame;
    QLabel *label_DispFirstPix;
    QLineEdit *lineEdit_DispAreaFirstLine;
    QLineEdit *lineEdit_DispAreaLinesPerFrame;
    QLineEdit *lineEdit_CropAreaPixelsPerLine;
    QLineEdit *lineEdit_CropAreaFirstLine;
    QLineEdit *lineEdit_CropAreaFirstPix;
    QLineEdit *lineEdit_DispAreaFirstPixel;
    QLabel *label_DispArea;
    QLabel *label_CropArea;
    QLabel *label_DispFirstLine;
    QLabel *label_DispPixPerLine;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *pushButton_GetDisplayConfiguration;
    QPushButton *pushButton_SetDisplayConfiguration;
    QGroupBox *groupBox_TPG;
    QVBoxLayout *verticalLayout_15;
    QGridLayout *gridLayout_9;
    QSpinBox *spinBox_TPGForegroundColorGreen;
    QSpinBox *spinBox_TPGBackgroundColorBlue;
    QSpinBox *spinBox_TPGBackgroundColorGreen;
    QSpinBox *spinBox_TPGForegroundColorRed;
    QLabel *label_TPGColorForeground;
    QLabel *label_TPGColorBlue;
    QLabel *label_TPGColorGreen;
    QLabel *label_TPGColorRed;
    QSpinBox *spinBox_TPGBackgroundColorRed;
    QLabel *label_TPGColorBackground;
    QSpinBox *spinBox_TPGForegroundColorBlue;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *pushButton_GetTPGColor;
    QPushButton *pushButton_SetTPGColor;
    QGroupBox *groupBox_FPDModeAndFieldSelect;
    QVBoxLayout *verticalLayout_18;
    QComboBox *comboBox_FPDFieldSelectList;
    QCheckBox *checkBox_FPDInvPol;
    QHBoxLayout *horizontalLayout_16;
    QSpinBox *spinBox_FPDPixMode;
    QLabel *label_FPDPixMode;
    QHBoxLayout *horizontalLayout_15;
    QPushButton *pushButton_GetFPDMode;
    QPushButton *pushButton_SetFPDMode;
    QSpacerItem *verticalSpacer_10;
    QVBoxLayout *verticalLayout_40;
    QGroupBox *groupBox_VideoSignalInfo;
    QFormLayout *formLayout_10;
    QGridLayout *gridLayout_25;
    QLineEdit *lineEdit_VidActvFirstPix;
    QLabel *label_VidRsvd;
    QLabel *label_VidActvFirstPix;
    QLabel *label_VidActvPxPerLineInPix;
    QLabel *label_VidHPol;
    QLineEdit *lineEdit_VidActvLinesPerFrame;
    QLineEdit *lineEdit_VidVFreq;
    QLabel *label_VidHResInPix;
    QLabel *label_VidPixPerLineInPix;
    QLabel *label_VidPixClkinMHz;
    QLabel *label_VidVFreInHz;
    QLineEdit *lineEdit_VidRsvd;
    QLineEdit *lineEdit_VidActvPixPerLine;
    QPushButton *pushButton_GetVideoSingalInfo;
    QLabel *label_VidActvPixPerLine;
    QLabel *label_VidActvPixPerFrameInPix;
    QLabel *label_VidActvFirstLine;
    QLabel *label_VidSigStatus;
    QLineEdit *lineEdit_VidLinesPerFrame;
    QLabel *label_VidVPol;
    QLabel *label_VidVFreq;
    QLabel *label_VidActvLinesPerFrame;
    QLabel *label_VidPixClk;
    QLabel *label_VidPixPerLine;
    QLabel *label_VidLinesPerFrame;
    QLineEdit *lineEdit_VidPixPerLine;
    QLabel *label_VidHFreq;
    QLabel *label_VidHFreInKHz;
    QLabel *label_VidStatus;
    QLineEdit *lineEdit_VidVRes;
    QComboBox *comboBox_VidLockSatus;
    QLabel *label_VidVRes;
    QLabel *label_VidHRes;
    QLabel *label_VidLinesPerFramInPix;
    QLineEdit *lineEdit_VidHRes;
    QLabel *label_VResInPix;
    QLineEdit *lineEdit_VidHFreq;
    QComboBox *comboBox_VidHPol;
    QLineEdit *lineEdit_VidActvFirstLine;
    QComboBox *comboBox_VidVPol;
    QLineEdit *lineEdit_VidPixClk;
    QLabel *label_VidActvFirstPixPos;
    QLabel *label_VidActvFirsLinePos;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_15;
    QWidget *tab_Pattern_Seq;
    QVBoxLayout *verticalLayout_25;
    QTabWidget *tabWidget_2;
    QWidget *tab_pat_seq_seq_settings;
    QHBoxLayout *horizontalLayout_36;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *groupBox_PatSeqSel;
    QVBoxLayout *verticalLayout_22;
    QHBoxLayout *horizontalLayout_21;
    QComboBox *comboBox_PatSeqSelPatColor;
    QComboBox *comboBox_PatSeqSelTrigType;
    QGroupBox *groupBox_PatSeqBitPlaneSel;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_PatSeqFrmOrImgIndex;
    QSpinBox *spinBox_PatSeqFrameImgIndex;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_PatSeqPatBitDepthSel;
    QComboBox *comboBox_PatSeqPatBitDepthSel;
    QSpacerItem *horizontalSpacer_10;
    QLabel *label_PatSeqBitPlaneNum;
    QComboBox *comboBox_PatSeqBitPlaneNum;
    QSpacerItem *horizontalSpacer_26;
    QHBoxLayout *horizontalLayout_22;
    QListWidget *listWidget_PatSeqBitPlanes;
    QHBoxLayout *horizontalLayout_39;
    QCheckBox *checkBox_PatSeqInvPatData;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *checkBox_PatSeqInsBlackPat;
    QSpacerItem *horizontalSpacer_28;
    QPushButton *pushButton_PatSeqAddPatToLut;
    QSpacerItem *horizontalSpacer_27;
    QGroupBox *groupBox_PatSeqDispLUT;
    QHBoxLayout *horizontalLayout_12;
    QListWidget *listWidget_PatSeqLUT;
    QVBoxLayout *verticalLayout_24;
    QPushButton *pushButton_PatSeqSendLUT;
    QPushButton *pushButton_PatSeqReadLUTFrmHW;
    QPushButton *pushButton_PatSeqClearLUTFrmGUI;
    QHBoxLayout *horizontalLayout_25;
    QRadioButton *radioButton_PatSeqDispRunOnce;
    QRadioButton *radioButton_PatSeqDispRunContinuous;
    QSpacerItem *verticalSpacer_4;
    QVBoxLayout *verticalLayout_12;
    QGroupBox *groupBox_PatSeqSourceAndTrigSel;
    QVBoxLayout *verticalLayout_19;
    QHBoxLayout *horizontalLayout_23;
    QGroupBox *groupBox_PatSeqPatSrc;
    QGridLayout *gridLayout_16;
    QRadioButton *radioButton_PatSeqSrcFrmFlash;
    QRadioButton *radioButton_PatSeqSrcFrmVideoPort;
    QGroupBox *groupBox_PatSeqTrigMode;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton_PatSeqTrigTypeIntExt;
    QRadioButton *radioButton_PatSeqTrigTypeVSync;
    QVBoxLayout *verticalLayout_44;
    QGroupBox *groupBox_PatSeqPatDispTiming;
    QFormLayout *formLayout_4;
    QLabel *label_PatSeqPatPeriod;
    QLineEdit *lineEdit_PatSeqPatPeriod;
    QLabel *label_PatSeqPatExpTime;
    QLineEdit *lineEdit_PatSeqPatExpTime;
    QLabel *label_PatSeqNote;
    QSpacerItem *verticalSpacer_11;
    QWidget *tab_8;
    QGridLayout *gridLayout_27;
    QVBoxLayout *verticalLayout_37;
    QGroupBox *groupBox_VarExpPatSeqSel;
    QVBoxLayout *verticalLayout_51;
    QHBoxLayout *horizontalLayout_49;
    QComboBox *comboBox_VarExpPatSeqSelPatColor;
    QSpacerItem *horizontalSpacer_21;
    QComboBox *comboBox_VarExpPatSeqSelTrigType;
    QSpacerItem *horizontalSpacer_22;
    QLabel *label_VarExpPatSeqFrmOrImgIndex;
    QSpinBox *spinBox_VarExpPatSeqFrameImgIndex;
    QSpacerItem *horizontalSpacer_20;
    QLabel *label_VarExpPatSeqPatBitDepthSel;
    QComboBox *comboBox_VarExpPatSeqPatBitDepthSel;
    QSpacerItem *horizontalSpacer_29;
    QHBoxLayout *horizontalLayout_33;
    QListWidget *listWidget_VarExpPatSeqBitPlanes;
    QHBoxLayout *horizontalLayout_48;
    QLabel *label_VarExpPatSeqPatExpTime;
    QLineEdit *lineEdit_VarExpPatSeqPatExpTime;
    QSpacerItem *horizontalSpacer_30;
    QLabel *label_VarExpPatSeqPatPeriod;
    QLineEdit *lineEdit_VarExpPatSeqPatPeriod;
    QSpacerItem *horizontalSpacer_31;
    QHBoxLayout *horizontalLayout_50;
    QCheckBox *checkBox_VarExpPatSeqInvPatData;
    QCheckBox *checkBox_VarExpPatSeqInsBlackPat;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButton_VarExpPatSeqAddPatToLut;
    QSpacerItem *horizontalSpacer_19;
    QGroupBox *seqGroupBox_4;
    QHBoxLayout *horizontalLayout_51;
    QListWidget *listWidget_VarExpPatSeqLUT;
    QVBoxLayout *verticalLayout_53;
    QPushButton *pushButton_VarExpPatSeqSendLUT;
    QPushButton *pushButton_VarExpPatSeqReadLUTFrmHW;
    QPushButton *pushButton_VarExpPatSeqClearLUTFrmGUI;
    QHBoxLayout *horizontalLayout_52;
    QRadioButton *radioButton_VarExpPatSeqDispRunOnce;
    QRadioButton *radioButton_VarExpPatSeqDispRunContinuous;
    QSpacerItem *verticalSpacer_16;
    QVBoxLayout *verticalLayout_33;
    QGroupBox *groupBox_VarExpPatSeqSourceAndTrigSel;
    QVBoxLayout *verticalLayout_48;
    QHBoxLayout *horizontalLayout_46;
    QGroupBox *groupBox_VarExpPatSeqPatSrc;
    QGridLayout *gridLayout_18;
    QRadioButton *radioButton_VarExpPatSeqSrcFrmFlash;
    QRadioButton *radioButton_VarExpPatSeqSrcFrmVideoPort;
    QGroupBox *groupBox_VarExpPatSeqTrigMode;
    QVBoxLayout *verticalLayout_49;
    QRadioButton *radioButton_VarExpPatSeqTrigTypeIntExt;
    QRadioButton *radioButton_VarExpPatSeqTrigTypeVSync;
    QLabel *label_VarExpPatSeqNote;
    QSpacerItem *verticalSpacer_6;
    QWidget *tab;
    QFormLayout *formLayout_14;
    QGroupBox *groupBox_PatSeqCtrl;
    QGridLayout *gridLayout_26;
    QFormLayout *formLayout_5;
    QPushButton *pushButton_PatSeqValIndExpOOR;
    QLabel *label_PatSeqValIndExpOOR;
    QPushButton *pushButton_PatSeqValIndPatNumOOR;
    QLabel *label_PatSeqValIndPatNumOOR;
    QPushButton *pushButton_PatSeqValIndTrigOutOverlap;
    QLabel *label_PatSeqValIndTrigOutOverlap;
    QPushButton *pushButton_PatSeqValIndBlkVecMiss;
    QLabel *label_PatSeqValIndBlkVecMiss;
    QPushButton *pushButton_PatSeqValPatPeriodShort;
    QLabel *label_PatSeqValPatPeriodShort;
    QLabel *label_PatSeqValStatus;
    QPushButton *pushButton_PatSeqValStatus;
    QPushButton *pushButton_ValidatePatSeq;
    QHBoxLayout *horizontalLayout_38;
    QPushButton *pushButton_PatSeqCtrlStart;
    QPushButton *pushButton_PatSeqCtrlPause;
    QPushButton *pushButton_PatSeqCtrlStop;
    QHBoxLayout *horizontalLayout_35;
    QCheckBox *checkBox_PatSeqCtrlGlobalDataInvert;
    QSpacerItem *horizontalSpacer_32;
    QWidget *tab_img_load_timing;
    QGridLayout *gridLayout_13;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_ImgLoadTiming;
    QGridLayout *gridLayout_28;
    QHBoxLayout *horizontalLayout_40;
    QLabel *label_ImgLdTmImgIndex;
    QSpinBox *spinBox_ImgLdTmImgIndex;
    QPushButton *pushButton_GetImgLoadTimingInfo;
    QHBoxLayout *horizontalLayout_31;
    QLineEdit *lineEdit_ImgLoadTmInMs;
    QLabel *label_ImgLdTmInMs;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer_18;
    QVBoxLayout *verticalLayout_34;
    QLabel *label_ImgLdTmNote1;
    QLabel *label_ImgLdTmNote2;
    QSpacerItem *horizontalSpacer_8;
    QWidget *tab_pat_seq_trig_ctrl;
    QFormLayout *formLayout_15;
    QGridLayout *gridLayout_21;
    QSlider *horizontalSlider_Trig1OutFDly;
    QLabel *label_TrigOut1FDly;
    QLabel *label_Trig1OutFDlyVal;
    QLabel *label_Trig2OutRDlyVal;
    QCheckBox *checkBox_InvertTrig2Out;
    QLabel *label_TrigOut2PulsePerNumPat;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_GetTrigConfig;
    QPushButton *pushButton_SetTrigConfig;
    QSpinBox *spinBox_TrigOut2PulsePerNumPat;
    QLabel *label_TrigOut2RDly;
    QSpinBox *spinBox_Trig1OutFDly;
    QSpacerItem *verticalSpacer_26;
    QSpinBox *spinBox_Trig2OutRDly;
    QSlider *horizontalSlider_Trig2OutRDly;
    QSpinBox *spinBox_Trig1OutRDly;
    QLabel *label_TrigIn1;
    QLabel *label_TrigOut1RDly;
    QLabel *label_TrigIn2Pol;
    QLabel *label_TrigIn1Value;
    QCheckBox *checkBox_InvertTrig1Out;
    QLabel *label_Trig1OutRDlyVal;
    QComboBox *comboBox_TrigIn2Pol;
    QSlider *horizontalSlider_TrigIn1;
    QSpinBox *spinBox_TrigIn1;
    QLabel *label_TrigIn2PolDesc;
    QSpacerItem *verticalSpacer_25;
    QSlider *horizontalSlider_Trig1OutRDly;
    QSpacerItem *horizontalSpacer_15;
    QTextEdit *textEdit_TriggerCtrlNote;
    QWidget *tab_pat_seq_led_dly;
    QFormLayout *formLayout_16;
    QGridLayout *gridLayout_3;
    QSpacerItem *verticalSpacer_27;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButton_GetLEDDlyCtrlConfig;
    QPushButton *pushButton_SetLedDlyCtrlConfig;
    QLabel *label_LedDlyCtrlRedREdgeDlyVal;
    QSpinBox *spinBox_LedDlyCtrlGreenREdgeDly;
    QSlider *horizontalSlider_LedDlyCtrlBlueREdgeDly;
    QLabel *label_LedDlyCtrlBlueREdgeDlyVal;
    QLabel *label_LedDlyCtrlGreenREdgeDlyVal;
    QSlider *horizontalSlider_LedDlyCtrlGreenREdgeDly;
    QLabel *label_LedDlyCtrlRedFEdgeDlyVal;
    QLabel *label_LedDlyCtrlRedREdgeDly;
    QSlider *horizontalSlider_LedDlyCtrlBlueFEdgeDly;
    QSpinBox *spinBox_LedDlyCtrlGreenFEdgeDly;
    QLabel *label_LedDlyCtrlGreenREdgeDly;
    QSpinBox *spinBox_LedDlyCtrlBlueFEdgeDly;
    QLabel *label_LedDlyCtrlBlueFEdgeDly;
    QSpinBox *spinBox_LedDlyCtrlBlueREdgeDly;
    QSpinBox *spinBox_LedDlyCtrlRedREdgeDly;
    QLabel *label_LedDlyCtrlRedFEdgeDly;
    QLabel *label_LedDlyCtrlGreenFEdgeDlyVal;
    QLabel *label_LedDlyCtrlBlueFEdgeDlyVal;
    QSlider *horizontalSlider_LedDlyCtrlRedREdgeDly;
    QSlider *horizontalSlider_LedDlyCtrlGreenFEdgeDly;
    QSpinBox *spinBox_LedDlyCtrlRedFEdgeDly;
    QLabel *label_LedDlyCtrlGreenFEdgeDly;
    QSlider *horizontalSlider_LedDlyCtrlRedFEdgeDly;
    QLabel *label_LedDlyCtrlBlueREdgeDly;
    QSpacerItem *verticalSpacer_28;
    QSpacerItem *horizontalSpacer_16;
    QSpacerItem *horizontalSpacer_17;
    QSpacerItem *verticalSpacer_14;
    QWidget *tab_Peripheral_Ctrl;
    QGridLayout *gridLayout_33;
    QGridLayout *gridLayout_8;
    QGroupBox *groupBox_I2C0_Master;
    QVBoxLayout *verticalLayout_42;
    QGridLayout *gridLayout_32;
    QLabel *label_i2cDevAddr;
    QLineEdit *lineEdit_i2cReadData;
    QLineEdit *lineEdit_i2cBytesToRead;
    QComboBox *comboBox_i2cAddrMode;
    QLineEdit *lineEdit_i2cClockRate;
    QLabel *label_i2cBytesToRead;
    QLabel *label_i2cAddrMode;
    QLabel *label_i2cWriteData;
    QLineEdit *lineEdit_i2cDevAddr;
    QLineEdit *lineEdit_i2cWriteData;
    QLabel *label_i2cReadData;
    QLabel *label_i2cClockRate;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_32;
    QPushButton *pushButton_i2cRead;
    QPushButton *pushButton_i2cWrite;
    QGroupBox *groupBox_PWMSetup;
    QVBoxLayout *verticalLayout_27;
    QGridLayout *gridLayout_22;
    QLineEdit *lineEdit_PWMPeriod;
    QLabel *label_PWMPulsePeriod;
    QLabel *label_PWMDutyCycle;
    QSpinBox *spinBox_PWMDutyCycle;
    QCheckBox *checkBox_PWMEnable;
    QComboBox *comboBox_PWMChannel;
    QSpacerItem *verticalSpacer_23;
    QHBoxLayout *horizontalLayout_27;
    QPushButton *pushButton_GetPWMConfig;
    QPushButton *pushButton_SetPWMConfig;
    QGroupBox *groupBox_GPIOConfig;
    QVBoxLayout *verticalLayout_29;
    QGridLayout *gridLayout_24;
    QCheckBox *checkBox_GPIOEnAltFun;
    QLabel *label_GPIOSelPin;
    QLabel *label_GPIOPinDir;
    QComboBox *comboBox_GPIOPinDir;
    QLabel *label_GPIOPinState;
    QComboBox *comboBox_GPIOPinState;
    QComboBox *comboBox_GPIOPin;
    QLabel *label_GPIOOutputType;
    QComboBox *comboBox_GPIOOutType;
    QSpacerItem *verticalSpacer_21;
    QHBoxLayout *horizontalLayout_29;
    QPushButton *pushBox_GetGPIOConfig;
    QPushButton *pushBox_SetGPIOConfig;
    QGroupBox *groupBox_PWMCapSetup;
    QVBoxLayout *verticalLayout_28;
    QGridLayout *gridLayout_23;
    QLabel *label_PWMCapSampleRate;
    QLineEdit *lineEdit_PWMCapSampleRate;
    QLabel *label_PWMCapDutyCycleReadback;
    QCheckBox *checkBox_PWMCapEnable;
    QComboBox *comboBox_PWMCapChannel;
    QLineEdit *lineEdit_PWMCapDutyCycleReadback;
    QPushButton *pushButton_PWMCapRead;
    QSpacerItem *verticalSpacer_19;
    QHBoxLayout *horizontalLayout_28;
    QPushButton *pushButton_GetPWMCapConfig;
    QPushButton *pushButton_SetPWMCapConfig;
    QGroupBox *groupBox_GPClk;
    QVBoxLayout *verticalLayout_26;
    QCheckBox *checkBox_GpClk;
    QComboBox *comboBox_GpClk;
    QGridLayout *gridLayout_20;
    QSpinBox *spinBox_GpClk;
    QLabel *label_GpClkDiv;
    QLabel *label_GpClkFreq;
    QLabel *label_GpClkFreqVal;
    QSpacerItem *verticalSpacer_8;
    QHBoxLayout *horizontalLayout_24;
    QPushButton *pushButton_GetGpClk;
    QPushButton *pushButton_SetGpClk;
    QTextEdit *textEdit_i2c0_port_usage;
    QWidget *tab_Image_Firmware;
    QVBoxLayout *verticalLayout_11;
    QTabWidget *tabWidget_3;
    QWidget *tab_Create_Splash;
    QGridLayout *gridLayout_6;
    QLabel *label_CreaImgInputBMPFileName;
    QSpacerItem *verticalSpacer_13;
    QSpacerItem *verticalSpacer_17;
    QLabel *label_CreaImgInputBMPFileImgPreview;
    QLabel *label_CreaImgOutImgPreview;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer_3;
    QPushButton *pushButton_CreaImgClearOutFileContents;
    QLabel *label_CreaImgOutputBMPFileName;
    QHBoxLayout *horizontalLayout_19;
    QLineEdit *lineEdit_CreaImgInputBmpFileName;
    QPushButton *pushButton_CreaImgSelectBMPFile;
    QGridLayout *gridLayout_29;
    QLabel *label_CreaImgPattPosition;
    QLabel *label_CreaImgBitDepth;
    QComboBox *comboBox_CreaImgFileBitDepth;
    QPushButton *pushButton_CreaImgAddToOutFile;
    QComboBox *comboBox_CreaImgFilePatPos;
    QSpacerItem *verticalSpacer_7;
    QHBoxLayout *horizontalLayout_20;
    QLineEdit *lineEdit_CreaImgOutputBmpFileName;
    QPushButton *pushButton_CreaImgSelectDestFileName;
    QWidget *tab_Create_Firmware;
    QFormLayout *formLayout_17;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_FWDwldLatFWLink;
    QGridLayout *gridLayout_4;
    QProgressBar *progressBar_FWFileParsing;
    QLabel *label_FWFileParseStatus;
    QLineEdit *lineEdit_FWFileSelected;
    QPushButton *pushButton_FWSelectFWBin;
    QLabel *label_FWSelectFWFile;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_FWIniFile;
    QLineEdit *lineEdit_FWIniFileSelected;
    QPushButton *pushButton_FWClearSelIniFile;
    QHBoxLayout *horizontalLayout_41;
    QLabel *label_add_fw_tag;
    QLineEdit *lineEdit_firmwareTagName;
    QPushButton *pushButton_FWClearFWTag;
    QLabel *label_NewFWBuildPath;
    QHBoxLayout *horizontalLayout_30;
    QVBoxLayout *verticalLayout_39;
    QLabel *label_FWOrgSplashImageCount;
    QLabel *label_FWNewSplashImageAddedCount;
    QLabel *label_FWSplashImageRemovedCount;
    QLabel *label_FWAvaSplashImageCount;
    QSpacerItem *verticalSpacer_9;
    QGridLayout *gridLayout_7;
    QPushButton *pushButton_FWRemoveSplashImage;
    QComboBox *comboBox_FWSplashImageIndex;
    QPushButton *pushButton_FWAddSplashImage;
    QPushButton *pushButton_FWChangeSplashImage;
    QPushButton *pushButton_FWSelectIniFile;
    QPushButton *pushButton_FWBuildNewFrmwImage;
    QPushButton *pushButton_FWSplashImageUpload;
    QLabel *label_FWPreviewSelImage;
    QGroupBox *groupBox_FWIllumModSelect;
    QVBoxLayout *verticalLayout_36;
    QVBoxLayout *verticalLayout_35;
    QRadioButton *radioButton_FWIllumSelColor;
    QRadioButton *radioButton_FWIllumSelMono;
    QHBoxLayout *horizontalLayout_42;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_41;
    QCheckBox *checkBox_FWIllumSelMonoRedCh;
    QCheckBox *checkBox_FWIllumSelMonoGreenCh;
    QCheckBox *checkBox_FWIllumSelMonoBlueCh;
    QSpacerItem *verticalSpacer_12;
    QWidget *tab_FirmwareUpload;
    QFormLayout *formLayout_12;
    QLabel *label_FWUploadLatestFWLink;
    QPushButton *pushButton_Connect_2;
    QTextEdit *textEdit_FWUpdate;
    QGroupBox *groupBox_FWUpload;
    QVBoxLayout *verticalLayout_31;
    QGridLayout *gridLayout_5;
    QLineEdit *FirmwareFile_2;
    QPushButton *pushButton_FWFileSelect;
    QProgressBar *prorgessBar_FWUpload;
    QLabel *label_FWUploadProgressBar;
    QPushButton *pushButton_FWUpload;
    QLabel *label_FWFileSelect;
    QCheckBox *checkBox_FastFlashUpdate;
    QCheckBox *checkBox_SkipBootLoader;
    QWidget *tab_Additional_Resources;
    QFormLayout *formLayout_11;
    QGridLayout *gridLayout_17;
    QLabel *label_AddResE2ELink;
    QLabel *label_AddResEVMLink;
    QLabel *label_AddResEVM;
    QLabel *label_AddResDHLink;
    QLabel *label_AddResDH;
    QLabel *label_AddResE2E;
    QSpacerItem *horizontalSpacer_11;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(956, 812);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/Icons/LCr4500.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_19 = new QGridLayout(centralWidget);
        gridLayout_19->setSpacing(6);
        gridLayout_19->setContentsMargins(11, 11, 11, 11);
        gridLayout_19->setObjectName(QString::fromUtf8("gridLayout_19"));
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setFrameShadow(QFrame::Plain);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1037, 865));
        verticalLayout_5 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        groupBox_SystemCtrl = new QGroupBox(scrollAreaWidgetContents);
        groupBox_SystemCtrl->setObjectName(QString::fromUtf8("groupBox_SystemCtrl"));
        sizePolicy.setHeightForWidth(groupBox_SystemCtrl->sizePolicy().hasHeightForWidth());
        groupBox_SystemCtrl->setSizePolicy(sizePolicy);
        gridLayout_31 = new QGridLayout(groupBox_SystemCtrl);
        gridLayout_31->setSpacing(6);
        gridLayout_31->setContentsMargins(11, 11, 11, 11);
        gridLayout_31->setObjectName(QString::fromUtf8("gridLayout_31"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(2);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        pushButton_Connect = new QPushButton(groupBox_SystemCtrl);
        pushButton_Connect->setObjectName(QString::fromUtf8("pushButton_Connect"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_Connect->sizePolicy().hasHeightForWidth());
        pushButton_Connect->setSizePolicy(sizePolicy1);
        pushButton_Connect->setAcceptDrops(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/Icons/Led_G.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon1.addFile(QString::fromUtf8(":/new/prefix1/Icons/Led_R.png"), QSize(), QIcon::Disabled, QIcon::Off);
        icon1.addFile(QString::fromUtf8(":/new/prefix1/Icons/Led_R.png"), QSize(), QIcon::Disabled, QIcon::On);
        pushButton_Connect->setIcon(icon1);

        horizontalLayout_8->addWidget(pushButton_Connect);

        pushButton_Reset = new QPushButton(groupBox_SystemCtrl);
        pushButton_Reset->setObjectName(QString::fromUtf8("pushButton_Reset"));
        sizePolicy1.setHeightForWidth(pushButton_Reset->sizePolicy().hasHeightForWidth());
        pushButton_Reset->setSizePolicy(sizePolicy1);

        horizontalLayout_8->addWidget(pushButton_Reset);


        gridLayout_31->addLayout(horizontalLayout_8, 0, 0, 1, 1);

        formLayout_2 = new QFormLayout();
        formLayout_2->setSpacing(6);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_API = new QLabel(groupBox_SystemCtrl);
        label_API->setObjectName(QString::fromUtf8("label_API"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_API);

        label_ApiVersion = new QLabel(groupBox_SystemCtrl);
        label_ApiVersion->setObjectName(QString::fromUtf8("label_ApiVersion"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, label_ApiVersion);


        gridLayout_31->addLayout(formLayout_2, 1, 0, 1, 1);

        formLayout_8 = new QFormLayout();
        formLayout_8->setSpacing(6);
        formLayout_8->setObjectName(QString::fromUtf8("formLayout_8"));
        formLayout_8->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_firmwareTag = new QLabel(groupBox_SystemCtrl);
        label_firmwareTag->setObjectName(QString::fromUtf8("label_firmwareTag"));

        formLayout_8->setWidget(0, QFormLayout::LabelRole, label_firmwareTag);

        label_firmwareTagInfo = new QLabel(groupBox_SystemCtrl);
        label_firmwareTagInfo->setObjectName(QString::fromUtf8("label_firmwareTagInfo"));

        formLayout_8->setWidget(0, QFormLayout::FieldRole, label_firmwareTagInfo);


        gridLayout_31->addLayout(formLayout_8, 2, 0, 1, 1);

        gridLayout_10 = new QGridLayout();
        gridLayout_10->setSpacing(2);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        gridLayout_10->setSizeConstraint(QLayout::SetDefaultConstraint);
        label_statusSeqRun = new QLabel(groupBox_SystemCtrl);
        label_statusSeqRun->setObjectName(QString::fromUtf8("label_statusSeqRun"));

        gridLayout_10->addWidget(label_statusSeqRun, 0, 4, 1, 1);

        indicatorButton_statusSeqRun = new QPushButton(groupBox_SystemCtrl);
        indicatorButton_statusSeqRun->setObjectName(QString::fromUtf8("indicatorButton_statusSeqRun"));
        indicatorButton_statusSeqRun->setEnabled(false);
        indicatorButton_statusSeqRun->setMaximumSize(QSize(28, 24));
        indicatorButton_statusSeqRun->setAcceptDrops(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1/Icons/Led_G.png"), QSize(), QIcon::Normal, QIcon::Off);
        indicatorButton_statusSeqRun->setIcon(icon2);

        gridLayout_10->addWidget(indicatorButton_statusSeqRun, 0, 3, 1, 1);

        indicatorButton_statusSeqErr = new QPushButton(groupBox_SystemCtrl);
        indicatorButton_statusSeqErr->setObjectName(QString::fromUtf8("indicatorButton_statusSeqErr"));
        indicatorButton_statusSeqErr->setEnabled(false);
        indicatorButton_statusSeqErr->setMaximumSize(QSize(28, 24));
        indicatorButton_statusSeqErr->setAcceptDrops(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/prefix1/Icons/Led_R.png"), QSize(), QIcon::Normal, QIcon::Off);
        indicatorButton_statusSeqErr->setIcon(icon3);

        gridLayout_10->addWidget(indicatorButton_statusSeqErr, 1, 3, 1, 1);

        label_statusInitDone = new QLabel(groupBox_SystemCtrl);
        label_statusInitDone->setObjectName(QString::fromUtf8("label_statusInitDone"));

        gridLayout_10->addWidget(label_statusInitDone, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(5, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_10->addItem(horizontalSpacer, 0, 2, 1, 1);

        indicatorButton_statusForcedSwap = new QPushButton(groupBox_SystemCtrl);
        indicatorButton_statusForcedSwap->setObjectName(QString::fromUtf8("indicatorButton_statusForcedSwap"));
        indicatorButton_statusForcedSwap->setEnabled(false);
        indicatorButton_statusForcedSwap->setMaximumSize(QSize(28, 24));
        indicatorButton_statusForcedSwap->setAcceptDrops(false);
        indicatorButton_statusForcedSwap->setIcon(icon3);

        gridLayout_10->addWidget(indicatorButton_statusForcedSwap, 1, 0, 1, 1);

        label_statusForcedSwap = new QLabel(groupBox_SystemCtrl);
        label_statusForcedSwap->setObjectName(QString::fromUtf8("label_statusForcedSwap"));

        gridLayout_10->addWidget(label_statusForcedSwap, 1, 1, 1, 1);

        indicatorButton_statusInitDone = new QPushButton(groupBox_SystemCtrl);
        indicatorButton_statusInitDone->setObjectName(QString::fromUtf8("indicatorButton_statusInitDone"));
        indicatorButton_statusInitDone->setEnabled(false);
        indicatorButton_statusInitDone->setMaximumSize(QSize(28, 24));
        indicatorButton_statusInitDone->setAcceptDrops(false);
        indicatorButton_statusInitDone->setIcon(icon2);

        gridLayout_10->addWidget(indicatorButton_statusInitDone, 0, 0, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(5, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_10->addItem(horizontalSpacer_6, 0, 5, 1, 1);

        label_statusSeqErr = new QLabel(groupBox_SystemCtrl);
        label_statusSeqErr->setObjectName(QString::fromUtf8("label_statusSeqErr"));

        gridLayout_10->addWidget(label_statusSeqErr, 1, 4, 1, 1);

        indicatorButton_statusDmdParked = new QPushButton(groupBox_SystemCtrl);
        indicatorButton_statusDmdParked->setObjectName(QString::fromUtf8("indicatorButton_statusDmdParked"));
        indicatorButton_statusDmdParked->setEnabled(false);
        indicatorButton_statusDmdParked->setMaximumSize(QSize(28, 24));
        indicatorButton_statusDmdParked->setAcceptDrops(false);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/prefix1/Icons/Led_Y.png"), QSize(), QIcon::Normal, QIcon::Off);
        indicatorButton_statusDmdParked->setIcon(icon4);

        gridLayout_10->addWidget(indicatorButton_statusDmdParked, 1, 6, 1, 1);

        label_statusDrcErr = new QLabel(groupBox_SystemCtrl);
        label_statusDrcErr->setObjectName(QString::fromUtf8("label_statusDrcErr"));

        gridLayout_10->addWidget(label_statusDrcErr, 0, 7, 1, 1);

        label_statusDMDParked = new QLabel(groupBox_SystemCtrl);
        label_statusDMDParked->setObjectName(QString::fromUtf8("label_statusDMDParked"));

        gridLayout_10->addWidget(label_statusDMDParked, 1, 7, 1, 1);

        indicatorButton_statusDrcErr = new QPushButton(groupBox_SystemCtrl);
        indicatorButton_statusDrcErr->setObjectName(QString::fromUtf8("indicatorButton_statusDrcErr"));
        indicatorButton_statusDrcErr->setEnabled(false);
        indicatorButton_statusDrcErr->setMaximumSize(QSize(28, 24));
        indicatorButton_statusDrcErr->setAcceptDrops(false);
        indicatorButton_statusDrcErr->setIcon(icon3);

        gridLayout_10->addWidget(indicatorButton_statusDrcErr, 0, 6, 1, 1);

        label_statusBufSwap = new QLabel(groupBox_SystemCtrl);
        label_statusBufSwap->setObjectName(QString::fromUtf8("label_statusBufSwap"));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        font.setStrikeOut(false);
        label_statusBufSwap->setFont(font);
        label_statusBufSwap->setAutoFillBackground(false);

        gridLayout_10->addWidget(label_statusBufSwap, 2, 1, 1, 1);

        indicatorButton_statusBufFreeze = new QPushButton(groupBox_SystemCtrl);
        indicatorButton_statusBufFreeze->setObjectName(QString::fromUtf8("indicatorButton_statusBufFreeze"));
        indicatorButton_statusBufFreeze->setEnabled(false);
        indicatorButton_statusBufFreeze->setMaximumSize(QSize(28, 24));
        indicatorButton_statusBufFreeze->setAcceptDrops(false);
        indicatorButton_statusBufFreeze->setIcon(icon4);

        gridLayout_10->addWidget(indicatorButton_statusBufFreeze, 2, 0, 1, 1);

        indicatorButton_statusSeqAbort = new QPushButton(groupBox_SystemCtrl);
        indicatorButton_statusSeqAbort->setObjectName(QString::fromUtf8("indicatorButton_statusSeqAbort"));
        indicatorButton_statusSeqAbort->setEnabled(false);
        indicatorButton_statusSeqAbort->setMaximumSize(QSize(28, 24));
        indicatorButton_statusSeqAbort->setAcceptDrops(false);
        indicatorButton_statusSeqAbort->setIcon(icon3);

        gridLayout_10->addWidget(indicatorButton_statusSeqAbort, 2, 3, 1, 1);

        label_statusSeqAbort = new QLabel(groupBox_SystemCtrl);
        label_statusSeqAbort->setObjectName(QString::fromUtf8("label_statusSeqAbort"));

        gridLayout_10->addWidget(label_statusSeqAbort, 2, 4, 1, 1);

        checkBox_updateStatus = new QCheckBox(groupBox_SystemCtrl);
        checkBox_updateStatus->setObjectName(QString::fromUtf8("checkBox_updateStatus"));
        checkBox_updateStatus->setChecked(true);

        gridLayout_10->addWidget(checkBox_updateStatus, 2, 6, 1, 2);

        gridLayout_10->setColumnStretch(0, 1);

        gridLayout_31->addLayout(gridLayout_10, 3, 0, 1, 1);


        horizontalLayout_3->addWidget(groupBox_SystemCtrl);

        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setSpacing(6);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        groupBox_modeControl = new QGroupBox(scrollAreaWidgetContents);
        groupBox_modeControl->setObjectName(QString::fromUtf8("groupBox_modeControl"));
        gridLayout_11 = new QGridLayout(groupBox_modeControl);
        gridLayout_11->setSpacing(2);
        gridLayout_11->setContentsMargins(11, 11, 11, 11);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        gridLayout_11->setContentsMargins(5, 5, 5, 5);
        radioButton_SLMode = new QRadioButton(groupBox_modeControl);
        radioButton_SLMode->setObjectName(QString::fromUtf8("radioButton_SLMode"));
        radioButton_SLMode->setChecked(false);

        gridLayout_11->addWidget(radioButton_SLMode, 0, 0, 1, 1);

        radioButton_VideoMode = new QRadioButton(groupBox_modeControl);
        radioButton_VideoMode->setObjectName(QString::fromUtf8("radioButton_VideoMode"));
        radioButton_VideoMode->setChecked(true);

        gridLayout_11->addWidget(radioButton_VideoMode, 2, 0, 1, 1);

        radioButton_StandbyMode = new QRadioButton(groupBox_modeControl);
        radioButton_StandbyMode->setObjectName(QString::fromUtf8("radioButton_StandbyMode"));

        gridLayout_11->addWidget(radioButton_StandbyMode, 3, 0, 1, 1);

        radioButton_VariableExpSLMode = new QRadioButton(groupBox_modeControl);
        radioButton_VariableExpSLMode->setObjectName(QString::fromUtf8("radioButton_VariableExpSLMode"));

        gridLayout_11->addWidget(radioButton_VariableExpSLMode, 1, 0, 1, 1);


        verticalLayout_16->addWidget(groupBox_modeControl);

        groupBox_ImageSetting = new QGroupBox(scrollAreaWidgetContents);
        groupBox_ImageSetting->setObjectName(QString::fromUtf8("groupBox_ImageSetting"));
        verticalLayout_38 = new QVBoxLayout(groupBox_ImageSetting);
        verticalLayout_38->setSpacing(2);
        verticalLayout_38->setContentsMargins(11, 11, 11, 11);
        verticalLayout_38->setObjectName(QString::fromUtf8("verticalLayout_38"));
        verticalLayout_38->setContentsMargins(5, 5, 5, 5);
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        checkBox_shortAxisFlip = new QCheckBox(groupBox_ImageSetting);
        checkBox_shortAxisFlip->setObjectName(QString::fromUtf8("checkBox_shortAxisFlip"));

        horizontalLayout_13->addWidget(checkBox_shortAxisFlip);

        checkBox_longAxisFlip = new QCheckBox(groupBox_ImageSetting);
        checkBox_longAxisFlip->setObjectName(QString::fromUtf8("checkBox_longAxisFlip"));

        horizontalLayout_13->addWidget(checkBox_longAxisFlip);


        verticalLayout_38->addLayout(horizontalLayout_13);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        pushButton_GetFlip = new QPushButton(groupBox_ImageSetting);
        pushButton_GetFlip->setObjectName(QString::fromUtf8("pushButton_GetFlip"));

        horizontalLayout_18->addWidget(pushButton_GetFlip);

        pushButton_SetFlip = new QPushButton(groupBox_ImageSetting);
        pushButton_SetFlip->setObjectName(QString::fromUtf8("pushButton_SetFlip"));

        horizontalLayout_18->addWidget(pushButton_SetFlip);


        verticalLayout_38->addLayout(horizontalLayout_18);


        verticalLayout_16->addWidget(groupBox_ImageSetting);


        horizontalLayout_3->addLayout(verticalLayout_16);

        groupBox_LEDDriverCtrl = new QGroupBox(scrollAreaWidgetContents);
        groupBox_LEDDriverCtrl->setObjectName(QString::fromUtf8("groupBox_LEDDriverCtrl"));
        sizePolicy.setHeightForWidth(groupBox_LEDDriverCtrl->sizePolicy().hasHeightForWidth());
        groupBox_LEDDriverCtrl->setSizePolicy(sizePolicy);
        verticalLayout_6 = new QVBoxLayout(groupBox_LEDDriverCtrl);
        verticalLayout_6->setSpacing(2);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(5, 5, 5, 5);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        groupBox_LEDCurrentCtrl = new QGroupBox(groupBox_LEDDriverCtrl);
        groupBox_LEDCurrentCtrl->setObjectName(QString::fromUtf8("groupBox_LEDCurrentCtrl"));
        sizePolicy.setHeightForWidth(groupBox_LEDCurrentCtrl->sizePolicy().hasHeightForWidth());
        groupBox_LEDCurrentCtrl->setSizePolicy(sizePolicy);
        gridLayout_15 = new QGridLayout(groupBox_LEDCurrentCtrl);
        gridLayout_15->setSpacing(2);
        gridLayout_15->setContentsMargins(11, 11, 11, 11);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        gridLayout_15->setContentsMargins(2, 2, 2, 2);
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setHorizontalSpacing(2);
        formLayout->setVerticalSpacing(2);
        formLayout->setContentsMargins(5, 5, 5, 5);
        label_LEDRed = new QLabel(groupBox_LEDCurrentCtrl);
        label_LEDRed->setObjectName(QString::fromUtf8("label_LEDRed"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_LEDRed);

        lineEdit_RedLEDCurrent = new QLineEdit(groupBox_LEDCurrentCtrl);
        lineEdit_RedLEDCurrent->setObjectName(QString::fromUtf8("lineEdit_RedLEDCurrent"));
        sizePolicy.setHeightForWidth(lineEdit_RedLEDCurrent->sizePolicy().hasHeightForWidth());
        lineEdit_RedLEDCurrent->setSizePolicy(sizePolicy);
        lineEdit_RedLEDCurrent->setMaximumSize(QSize(85, 16777215));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_RedLEDCurrent);

        label_LEDGreen = new QLabel(groupBox_LEDCurrentCtrl);
        label_LEDGreen->setObjectName(QString::fromUtf8("label_LEDGreen"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_LEDGreen);

        lineEdit_GreenLEDCurrent = new QLineEdit(groupBox_LEDCurrentCtrl);
        lineEdit_GreenLEDCurrent->setObjectName(QString::fromUtf8("lineEdit_GreenLEDCurrent"));
        sizePolicy.setHeightForWidth(lineEdit_GreenLEDCurrent->sizePolicy().hasHeightForWidth());
        lineEdit_GreenLEDCurrent->setSizePolicy(sizePolicy);
        lineEdit_GreenLEDCurrent->setMaximumSize(QSize(85, 16777215));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_GreenLEDCurrent);

        label_LEDBlue = new QLabel(groupBox_LEDCurrentCtrl);
        label_LEDBlue->setObjectName(QString::fromUtf8("label_LEDBlue"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_LEDBlue);

        lineEdit_BlueLEDCurrent = new QLineEdit(groupBox_LEDCurrentCtrl);
        lineEdit_BlueLEDCurrent->setObjectName(QString::fromUtf8("lineEdit_BlueLEDCurrent"));
        sizePolicy.setHeightForWidth(lineEdit_BlueLEDCurrent->sizePolicy().hasHeightForWidth());
        lineEdit_BlueLEDCurrent->setSizePolicy(sizePolicy);
        lineEdit_BlueLEDCurrent->setMaximumSize(QSize(85, 16777215));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_BlueLEDCurrent);

        checkBox_LedPwmInvert = new QCheckBox(groupBox_LEDCurrentCtrl);
        checkBox_LedPwmInvert->setObjectName(QString::fromUtf8("checkBox_LedPwmInvert"));

        formLayout->setWidget(3, QFormLayout::FieldRole, checkBox_LedPwmInvert);


        gridLayout_15->addLayout(formLayout, 0, 0, 1, 1);


        horizontalLayout_2->addWidget(groupBox_LEDCurrentCtrl);

        groupBox_LEDEnSelect = new QGroupBox(groupBox_LEDDriverCtrl);
        groupBox_LEDEnSelect->setObjectName(QString::fromUtf8("groupBox_LEDEnSelect"));
        sizePolicy.setHeightForWidth(groupBox_LEDEnSelect->sizePolicy().hasHeightForWidth());
        groupBox_LEDEnSelect->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(groupBox_LEDEnSelect);
        gridLayout->setSpacing(2);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(5, 5, 5, 5);
        radioButton_ColorDisplayAuto = new QRadioButton(groupBox_LEDEnSelect);
        radioButton_ColorDisplayAuto->setObjectName(QString::fromUtf8("radioButton_ColorDisplayAuto"));
        radioButton_ColorDisplayAuto->setChecked(true);

        gridLayout->addWidget(radioButton_ColorDisplayAuto, 0, 0, 1, 1, Qt::AlignLeft);

        radioButton_ColorDisplayManual = new QRadioButton(groupBox_LEDEnSelect);
        radioButton_ColorDisplayManual->setObjectName(QString::fromUtf8("radioButton_ColorDisplayManual"));

        gridLayout->addWidget(radioButton_ColorDisplayManual, 1, 0, 1, 1, Qt::AlignLeft);

        checkBox_RedEnable = new QCheckBox(groupBox_LEDEnSelect);
        checkBox_RedEnable->setObjectName(QString::fromUtf8("checkBox_RedEnable"));
        checkBox_RedEnable->setEnabled(false);

        gridLayout->addWidget(checkBox_RedEnable, 1, 1, 1, 1);

        checkBox_GreenEnable = new QCheckBox(groupBox_LEDEnSelect);
        checkBox_GreenEnable->setObjectName(QString::fromUtf8("checkBox_GreenEnable"));
        checkBox_GreenEnable->setEnabled(false);

        gridLayout->addWidget(checkBox_GreenEnable, 2, 1, 1, 1);

        checkBox_BlueEnable = new QCheckBox(groupBox_LEDEnSelect);
        checkBox_BlueEnable->setObjectName(QString::fromUtf8("checkBox_BlueEnable"));
        checkBox_BlueEnable->setEnabled(false);

        gridLayout->addWidget(checkBox_BlueEnable, 3, 1, 1, 1);


        horizontalLayout_2->addWidget(groupBox_LEDEnSelect, 0, Qt::AlignLeft);


        verticalLayout_6->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_GetLEDConfiguration = new QPushButton(groupBox_LEDDriverCtrl);
        pushButton_GetLEDConfiguration->setObjectName(QString::fromUtf8("pushButton_GetLEDConfiguration"));

        horizontalLayout->addWidget(pushButton_GetLEDConfiguration);

        pushButton_SetLEDConfiguration = new QPushButton(groupBox_LEDDriverCtrl);
        pushButton_SetLEDConfiguration->setObjectName(QString::fromUtf8("pushButton_SetLEDConfiguration"));

        horizontalLayout->addWidget(pushButton_SetLEDConfiguration);


        verticalLayout_6->addLayout(horizontalLayout);

        verticalLayout_6->setStretch(0, 1);

        horizontalLayout_3->addWidget(groupBox_LEDDriverCtrl);

        horizontalSpacer_14 = new QSpacerItem(0, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_14);

        horizontalLayout_3->setStretch(0, 3);
        horizontalLayout_3->setStretch(1, 2);
        horizontalLayout_3->setStretch(2, 2);

        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setSpacing(2);
        horizontalLayout_26->setObjectName(QString::fromUtf8("horizontalLayout_26"));
        pushButton_ApplySolution = new QPushButton(scrollAreaWidgetContents);
        pushButton_ApplySolution->setObjectName(QString::fromUtf8("pushButton_ApplySolution"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_ApplySolution->sizePolicy().hasHeightForWidth());
        pushButton_ApplySolution->setSizePolicy(sizePolicy2);

        horizontalLayout_26->addWidget(pushButton_ApplySolution);

        pushButton_SaveSolution = new QPushButton(scrollAreaWidgetContents);
        pushButton_SaveSolution->setObjectName(QString::fromUtf8("pushButton_SaveSolution"));
        sizePolicy2.setHeightForWidth(pushButton_SaveSolution->sizePolicy().hasHeightForWidth());
        pushButton_SaveSolution->setSizePolicy(sizePolicy2);

        horizontalLayout_26->addWidget(pushButton_SaveSolution);

        pushButton_ApplyDefaultSolution = new QPushButton(scrollAreaWidgetContents);
        pushButton_ApplyDefaultSolution->setObjectName(QString::fromUtf8("pushButton_ApplyDefaultSolution"));

        horizontalLayout_26->addWidget(pushButton_ApplyDefaultSolution);


        verticalLayout_3->addLayout(horizontalLayout_26);

        tabWidget = new QTabWidget(scrollAreaWidgetContents);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tab_Video_Mode = new QWidget();
        tab_Video_Mode->setObjectName(QString::fromUtf8("tab_Video_Mode"));
        verticalLayout_9 = new QVBoxLayout(tab_Video_Mode);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(2);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_21 = new QVBoxLayout();
        verticalLayout_21->setSpacing(6);
        verticalLayout_21->setObjectName(QString::fromUtf8("verticalLayout_21"));
        groupBox_InputConfiguration = new QGroupBox(tab_Video_Mode);
        groupBox_InputConfiguration->setObjectName(QString::fromUtf8("groupBox_InputConfiguration"));
        sizePolicy.setHeightForWidth(groupBox_InputConfiguration->sizePolicy().hasHeightForWidth());
        groupBox_InputConfiguration->setSizePolicy(sizePolicy);
        gridLayout_12 = new QGridLayout(groupBox_InputConfiguration);
        gridLayout_12->setSpacing(2);
        gridLayout_12->setContentsMargins(11, 11, 11, 11);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        gridLayout_12->setContentsMargins(5, 5, 5, 5);
        groupBox_ClockSelect = new QGroupBox(groupBox_InputConfiguration);
        groupBox_ClockSelect->setObjectName(QString::fromUtf8("groupBox_ClockSelect"));
        sizePolicy.setHeightForWidth(groupBox_ClockSelect->sizePolicy().hasHeightForWidth());
        groupBox_ClockSelect->setSizePolicy(sizePolicy);
        verticalLayout_17 = new QVBoxLayout(groupBox_ClockSelect);
        verticalLayout_17->setSpacing(2);
        verticalLayout_17->setContentsMargins(11, 11, 11, 11);
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        verticalLayout_17->setContentsMargins(5, 5, 5, 5);
        comboBox_PortClockList = new QComboBox(groupBox_ClockSelect);
        comboBox_PortClockList->addItem(QString());
        comboBox_PortClockList->addItem(QString());
        comboBox_PortClockList->addItem(QString());
        comboBox_PortClockList->setObjectName(QString::fromUtf8("comboBox_PortClockList"));
        sizePolicy2.setHeightForWidth(comboBox_PortClockList->sizePolicy().hasHeightForWidth());
        comboBox_PortClockList->setSizePolicy(sizePolicy2);

        verticalLayout_17->addWidget(comboBox_PortClockList);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        pushButton_GetPortClock = new QPushButton(groupBox_ClockSelect);
        pushButton_GetPortClock->setObjectName(QString::fromUtf8("pushButton_GetPortClock"));

        horizontalLayout_14->addWidget(pushButton_GetPortClock);

        pushButton_SetPortClock = new QPushButton(groupBox_ClockSelect);
        pushButton_SetPortClock->setObjectName(QString::fromUtf8("pushButton_SetPortClock"));

        horizontalLayout_14->addWidget(pushButton_SetPortClock);


        verticalLayout_17->addLayout(horizontalLayout_14);


        gridLayout_12->addWidget(groupBox_ClockSelect, 2, 0, 1, 1);

        groupBox_PixelFormat = new QGroupBox(groupBox_InputConfiguration);
        groupBox_PixelFormat->setObjectName(QString::fromUtf8("groupBox_PixelFormat"));
        sizePolicy.setHeightForWidth(groupBox_PixelFormat->sizePolicy().hasHeightForWidth());
        groupBox_PixelFormat->setSizePolicy(sizePolicy);
        verticalLayout_13 = new QVBoxLayout(groupBox_PixelFormat);
        verticalLayout_13->setSpacing(2);
        verticalLayout_13->setContentsMargins(11, 11, 11, 11);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(5, 5, 5, 5);
        comboBox_PixelFormatList = new QComboBox(groupBox_PixelFormat);
        comboBox_PixelFormatList->addItem(QString());
        comboBox_PixelFormatList->addItem(QString());
        comboBox_PixelFormatList->addItem(QString());
        comboBox_PixelFormatList->setObjectName(QString::fromUtf8("comboBox_PixelFormatList"));
        sizePolicy2.setHeightForWidth(comboBox_PixelFormatList->sizePolicy().hasHeightForWidth());
        comboBox_PixelFormatList->setSizePolicy(sizePolicy2);

        verticalLayout_13->addWidget(comboBox_PixelFormatList);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(2);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        pushButton_GetPortPixelFormat = new QPushButton(groupBox_PixelFormat);
        pushButton_GetPortPixelFormat->setObjectName(QString::fromUtf8("pushButton_GetPortPixelFormat"));

        horizontalLayout_9->addWidget(pushButton_GetPortPixelFormat);

        pushButton_SetPortPixelFormat = new QPushButton(groupBox_PixelFormat);
        pushButton_SetPortPixelFormat->setObjectName(QString::fromUtf8("pushButton_SetPortPixelFormat"));

        horizontalLayout_9->addWidget(pushButton_SetPortPixelFormat);


        verticalLayout_13->addLayout(horizontalLayout_9);


        gridLayout_12->addWidget(groupBox_PixelFormat, 3, 0, 1, 1);

        groupBox_SourceSelect = new QGroupBox(groupBox_InputConfiguration);
        groupBox_SourceSelect->setObjectName(QString::fromUtf8("groupBox_SourceSelect"));
        sizePolicy.setHeightForWidth(groupBox_SourceSelect->sizePolicy().hasHeightForWidth());
        groupBox_SourceSelect->setSizePolicy(sizePolicy);
        verticalLayout_30 = new QVBoxLayout(groupBox_SourceSelect);
        verticalLayout_30->setSpacing(6);
        verticalLayout_30->setContentsMargins(11, 11, 11, 11);
        verticalLayout_30->setObjectName(QString::fromUtf8("verticalLayout_30"));
        verticalLayout_20 = new QVBoxLayout();
        verticalLayout_20->setSpacing(6);
        verticalLayout_20->setObjectName(QString::fromUtf8("verticalLayout_20"));
        comboBox_InputSourceList = new QComboBox(groupBox_SourceSelect);
        comboBox_InputSourceList->addItem(QString());
        comboBox_InputSourceList->addItem(QString());
        comboBox_InputSourceList->addItem(QString());
        comboBox_InputSourceList->addItem(QString());
        comboBox_InputSourceList->setObjectName(QString::fromUtf8("comboBox_InputSourceList"));
        sizePolicy2.setHeightForWidth(comboBox_InputSourceList->sizePolicy().hasHeightForWidth());
        comboBox_InputSourceList->setSizePolicy(sizePolicy2);

        verticalLayout_20->addWidget(comboBox_InputSourceList);

        comboBox_InputSourceOptionList = new QComboBox(groupBox_SourceSelect);
        comboBox_InputSourceOptionList->addItem(QString());
        comboBox_InputSourceOptionList->addItem(QString());
        comboBox_InputSourceOptionList->addItem(QString());
        comboBox_InputSourceOptionList->addItem(QString());
        comboBox_InputSourceOptionList->addItem(QString());
        comboBox_InputSourceOptionList->addItem(QString());
        comboBox_InputSourceOptionList->setObjectName(QString::fromUtf8("comboBox_InputSourceOptionList"));
        sizePolicy2.setHeightForWidth(comboBox_InputSourceOptionList->sizePolicy().hasHeightForWidth());
        comboBox_InputSourceOptionList->setSizePolicy(sizePolicy2);

        verticalLayout_20->addWidget(comboBox_InputSourceOptionList);

        splitter = new QSplitter(groupBox_SourceSelect);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        sizePolicy.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy);
        splitter->setOrientation(Qt::Horizontal);
        pushButton_GetPortSource = new QPushButton(splitter);
        pushButton_GetPortSource->setObjectName(QString::fromUtf8("pushButton_GetPortSource"));
        splitter->addWidget(pushButton_GetPortSource);
        pushButton_SetPortSource = new QPushButton(splitter);
        pushButton_SetPortSource->setObjectName(QString::fromUtf8("pushButton_SetPortSource"));
        splitter->addWidget(pushButton_SetPortSource);

        verticalLayout_20->addWidget(splitter);


        verticalLayout_30->addLayout(verticalLayout_20);


        gridLayout_12->addWidget(groupBox_SourceSelect, 0, 0, 1, 1);

        groupBox_PortDataSwap = new QGroupBox(groupBox_InputConfiguration);
        groupBox_PortDataSwap->setObjectName(QString::fromUtf8("groupBox_PortDataSwap"));
        sizePolicy.setHeightForWidth(groupBox_PortDataSwap->sizePolicy().hasHeightForWidth());
        groupBox_PortDataSwap->setSizePolicy(sizePolicy);
        verticalLayout_32 = new QVBoxLayout(groupBox_PortDataSwap);
        verticalLayout_32->setSpacing(6);
        verticalLayout_32->setContentsMargins(11, 11, 11, 11);
        verticalLayout_32->setObjectName(QString::fromUtf8("verticalLayout_32"));
        comboBox_SwapSelectList = new QComboBox(groupBox_PortDataSwap);
        comboBox_SwapSelectList->addItem(QString());
        comboBox_SwapSelectList->addItem(QString());
        comboBox_SwapSelectList->addItem(QString());
        comboBox_SwapSelectList->addItem(QString());
        comboBox_SwapSelectList->addItem(QString());
        comboBox_SwapSelectList->addItem(QString());
        comboBox_SwapSelectList->setObjectName(QString::fromUtf8("comboBox_SwapSelectList"));
        sizePolicy2.setHeightForWidth(comboBox_SwapSelectList->sizePolicy().hasHeightForWidth());
        comboBox_SwapSelectList->setSizePolicy(sizePolicy2);

        verticalLayout_32->addWidget(comboBox_SwapSelectList);

        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setSpacing(2);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        splitter_2 = new QSplitter(groupBox_PortDataSwap);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        sizePolicy.setHeightForWidth(splitter_2->sizePolicy().hasHeightForWidth());
        splitter_2->setSizePolicy(sizePolicy);
        splitter_2->setOrientation(Qt::Horizontal);
        pushButton_GetPortSwap = new QPushButton(splitter_2);
        pushButton_GetPortSwap->setObjectName(QString::fromUtf8("pushButton_GetPortSwap"));
        sizePolicy.setHeightForWidth(pushButton_GetPortSwap->sizePolicy().hasHeightForWidth());
        pushButton_GetPortSwap->setSizePolicy(sizePolicy);
        splitter_2->addWidget(pushButton_GetPortSwap);
        pushButton_SetPortSwap = new QPushButton(splitter_2);
        pushButton_SetPortSwap->setObjectName(QString::fromUtf8("pushButton_SetPortSwap"));
        sizePolicy.setHeightForWidth(pushButton_SetPortSwap->sizePolicy().hasHeightForWidth());
        pushButton_SetPortSwap->setSizePolicy(sizePolicy);
        splitter_2->addWidget(pushButton_SetPortSwap);

        verticalLayout_14->addWidget(splitter_2);


        verticalLayout_32->addLayout(verticalLayout_14);


        gridLayout_12->addWidget(groupBox_PortDataSwap, 1, 0, 1, 1);


        verticalLayout_21->addWidget(groupBox_InputConfiguration);

        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_21->addItem(verticalSpacer_2);


        horizontalLayout_4->addLayout(verticalLayout_21);

        verticalLayout_23 = new QVBoxLayout();
        verticalLayout_23->setSpacing(6);
        verticalLayout_23->setObjectName(QString::fromUtf8("verticalLayout_23"));
        groupBox_DisplayDimension = new QGroupBox(tab_Video_Mode);
        groupBox_DisplayDimension->setObjectName(QString::fromUtf8("groupBox_DisplayDimension"));
        sizePolicy.setHeightForWidth(groupBox_DisplayDimension->sizePolicy().hasHeightForWidth());
        groupBox_DisplayDimension->setSizePolicy(sizePolicy);
        verticalLayout_8 = new QVBoxLayout(groupBox_DisplayDimension);
        verticalLayout_8->setSpacing(2);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(5, 5, 5, 5);
        gridLayout_14 = new QGridLayout();
        gridLayout_14->setSpacing(2);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        label_DispLinesPerFrame = new QLabel(groupBox_DisplayDimension);
        label_DispLinesPerFrame->setObjectName(QString::fromUtf8("label_DispLinesPerFrame"));

        gridLayout_14->addWidget(label_DispLinesPerFrame, 4, 0, 1, 1);

        lineEdit_CropAreaLinesPerFrame = new QLineEdit(groupBox_DisplayDimension);
        lineEdit_CropAreaLinesPerFrame->setObjectName(QString::fromUtf8("lineEdit_CropAreaLinesPerFrame"));
        lineEdit_CropAreaLinesPerFrame->setMaximumSize(QSize(40, 16777215));
        lineEdit_CropAreaLinesPerFrame->setMaxLength(4);

        gridLayout_14->addWidget(lineEdit_CropAreaLinesPerFrame, 4, 2, 1, 1, Qt::AlignHCenter);

        lineEdit_DispAreaPixPerFrame = new QLineEdit(groupBox_DisplayDimension);
        lineEdit_DispAreaPixPerFrame->setObjectName(QString::fromUtf8("lineEdit_DispAreaPixPerFrame"));
        lineEdit_DispAreaPixPerFrame->setMaximumSize(QSize(40, 16777215));
        lineEdit_DispAreaPixPerFrame->setMaxLength(4);

        gridLayout_14->addWidget(lineEdit_DispAreaPixPerFrame, 2, 1, 1, 1, Qt::AlignHCenter);

        label_DispFirstPix = new QLabel(groupBox_DisplayDimension);
        label_DispFirstPix->setObjectName(QString::fromUtf8("label_DispFirstPix"));

        gridLayout_14->addWidget(label_DispFirstPix, 1, 0, 1, 1);

        lineEdit_DispAreaFirstLine = new QLineEdit(groupBox_DisplayDimension);
        lineEdit_DispAreaFirstLine->setObjectName(QString::fromUtf8("lineEdit_DispAreaFirstLine"));
        lineEdit_DispAreaFirstLine->setMaximumSize(QSize(40, 16777215));
        lineEdit_DispAreaFirstLine->setMaxLength(4);

        gridLayout_14->addWidget(lineEdit_DispAreaFirstLine, 3, 1, 1, 1, Qt::AlignHCenter);

        lineEdit_DispAreaLinesPerFrame = new QLineEdit(groupBox_DisplayDimension);
        lineEdit_DispAreaLinesPerFrame->setObjectName(QString::fromUtf8("lineEdit_DispAreaLinesPerFrame"));
        lineEdit_DispAreaLinesPerFrame->setMaximumSize(QSize(40, 16777215));
        lineEdit_DispAreaLinesPerFrame->setMaxLength(4);

        gridLayout_14->addWidget(lineEdit_DispAreaLinesPerFrame, 4, 1, 1, 1, Qt::AlignHCenter);

        lineEdit_CropAreaPixelsPerLine = new QLineEdit(groupBox_DisplayDimension);
        lineEdit_CropAreaPixelsPerLine->setObjectName(QString::fromUtf8("lineEdit_CropAreaPixelsPerLine"));
        lineEdit_CropAreaPixelsPerLine->setMaximumSize(QSize(40, 16777215));
        lineEdit_CropAreaPixelsPerLine->setMaxLength(4);

        gridLayout_14->addWidget(lineEdit_CropAreaPixelsPerLine, 2, 2, 1, 1, Qt::AlignHCenter);

        lineEdit_CropAreaFirstLine = new QLineEdit(groupBox_DisplayDimension);
        lineEdit_CropAreaFirstLine->setObjectName(QString::fromUtf8("lineEdit_CropAreaFirstLine"));
        lineEdit_CropAreaFirstLine->setMaximumSize(QSize(40, 16777215));
        lineEdit_CropAreaFirstLine->setMaxLength(4);

        gridLayout_14->addWidget(lineEdit_CropAreaFirstLine, 3, 2, 1, 1, Qt::AlignHCenter);

        lineEdit_CropAreaFirstPix = new QLineEdit(groupBox_DisplayDimension);
        lineEdit_CropAreaFirstPix->setObjectName(QString::fromUtf8("lineEdit_CropAreaFirstPix"));
        lineEdit_CropAreaFirstPix->setMaximumSize(QSize(40, 16777215));
        lineEdit_CropAreaFirstPix->setInputMethodHints(Qt::ImhDigitsOnly);
        lineEdit_CropAreaFirstPix->setMaxLength(4);

        gridLayout_14->addWidget(lineEdit_CropAreaFirstPix, 1, 2, 1, 1, Qt::AlignHCenter);

        lineEdit_DispAreaFirstPixel = new QLineEdit(groupBox_DisplayDimension);
        lineEdit_DispAreaFirstPixel->setObjectName(QString::fromUtf8("lineEdit_DispAreaFirstPixel"));
        lineEdit_DispAreaFirstPixel->setMaximumSize(QSize(40, 16777215));
        lineEdit_DispAreaFirstPixel->setMaxLength(4);

        gridLayout_14->addWidget(lineEdit_DispAreaFirstPixel, 1, 1, 1, 1, Qt::AlignHCenter);

        label_DispArea = new QLabel(groupBox_DisplayDimension);
        label_DispArea->setObjectName(QString::fromUtf8("label_DispArea"));

        gridLayout_14->addWidget(label_DispArea, 0, 1, 1, 1);

        label_CropArea = new QLabel(groupBox_DisplayDimension);
        label_CropArea->setObjectName(QString::fromUtf8("label_CropArea"));

        gridLayout_14->addWidget(label_CropArea, 0, 2, 1, 1);

        label_DispFirstLine = new QLabel(groupBox_DisplayDimension);
        label_DispFirstLine->setObjectName(QString::fromUtf8("label_DispFirstLine"));

        gridLayout_14->addWidget(label_DispFirstLine, 3, 0, 1, 1);

        label_DispPixPerLine = new QLabel(groupBox_DisplayDimension);
        label_DispPixPerLine->setObjectName(QString::fromUtf8("label_DispPixPerLine"));

        gridLayout_14->addWidget(label_DispPixPerLine, 2, 0, 1, 1);


        verticalLayout_8->addLayout(gridLayout_14);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(2);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        pushButton_GetDisplayConfiguration = new QPushButton(groupBox_DisplayDimension);
        pushButton_GetDisplayConfiguration->setObjectName(QString::fromUtf8("pushButton_GetDisplayConfiguration"));

        horizontalLayout_10->addWidget(pushButton_GetDisplayConfiguration);

        pushButton_SetDisplayConfiguration = new QPushButton(groupBox_DisplayDimension);
        pushButton_SetDisplayConfiguration->setObjectName(QString::fromUtf8("pushButton_SetDisplayConfiguration"));

        horizontalLayout_10->addWidget(pushButton_SetDisplayConfiguration);


        verticalLayout_8->addLayout(horizontalLayout_10);


        verticalLayout_23->addWidget(groupBox_DisplayDimension);

        groupBox_TPG = new QGroupBox(tab_Video_Mode);
        groupBox_TPG->setObjectName(QString::fromUtf8("groupBox_TPG"));
        sizePolicy.setHeightForWidth(groupBox_TPG->sizePolicy().hasHeightForWidth());
        groupBox_TPG->setSizePolicy(sizePolicy);
        verticalLayout_15 = new QVBoxLayout(groupBox_TPG);
        verticalLayout_15->setSpacing(2);
        verticalLayout_15->setContentsMargins(11, 11, 11, 11);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(5, 5, 5, 5);
        gridLayout_9 = new QGridLayout();
        gridLayout_9->setSpacing(2);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        spinBox_TPGForegroundColorGreen = new QSpinBox(groupBox_TPG);
        spinBox_TPGForegroundColorGreen->setObjectName(QString::fromUtf8("spinBox_TPGForegroundColorGreen"));
        spinBox_TPGForegroundColorGreen->setEnabled(false);
        spinBox_TPGForegroundColorGreen->setMaximum(1023);

        gridLayout_9->addWidget(spinBox_TPGForegroundColorGreen, 1, 2, 1, 1);

        spinBox_TPGBackgroundColorBlue = new QSpinBox(groupBox_TPG);
        spinBox_TPGBackgroundColorBlue->setObjectName(QString::fromUtf8("spinBox_TPGBackgroundColorBlue"));
        spinBox_TPGBackgroundColorBlue->setEnabled(false);
        spinBox_TPGBackgroundColorBlue->setMaximum(1023);

        gridLayout_9->addWidget(spinBox_TPGBackgroundColorBlue, 2, 3, 1, 1);

        spinBox_TPGBackgroundColorGreen = new QSpinBox(groupBox_TPG);
        spinBox_TPGBackgroundColorGreen->setObjectName(QString::fromUtf8("spinBox_TPGBackgroundColorGreen"));
        spinBox_TPGBackgroundColorGreen->setEnabled(false);
        spinBox_TPGBackgroundColorGreen->setMaximum(1023);

        gridLayout_9->addWidget(spinBox_TPGBackgroundColorGreen, 2, 2, 1, 1);

        spinBox_TPGForegroundColorRed = new QSpinBox(groupBox_TPG);
        spinBox_TPGForegroundColorRed->setObjectName(QString::fromUtf8("spinBox_TPGForegroundColorRed"));
        spinBox_TPGForegroundColorRed->setEnabled(false);
        spinBox_TPGForegroundColorRed->setMaximum(1023);

        gridLayout_9->addWidget(spinBox_TPGForegroundColorRed, 1, 1, 1, 1);

        label_TPGColorForeground = new QLabel(groupBox_TPG);
        label_TPGColorForeground->setObjectName(QString::fromUtf8("label_TPGColorForeground"));

        gridLayout_9->addWidget(label_TPGColorForeground, 1, 0, 1, 1);

        label_TPGColorBlue = new QLabel(groupBox_TPG);
        label_TPGColorBlue->setObjectName(QString::fromUtf8("label_TPGColorBlue"));

        gridLayout_9->addWidget(label_TPGColorBlue, 0, 3, 1, 1);

        label_TPGColorGreen = new QLabel(groupBox_TPG);
        label_TPGColorGreen->setObjectName(QString::fromUtf8("label_TPGColorGreen"));

        gridLayout_9->addWidget(label_TPGColorGreen, 0, 2, 1, 1);

        label_TPGColorRed = new QLabel(groupBox_TPG);
        label_TPGColorRed->setObjectName(QString::fromUtf8("label_TPGColorRed"));

        gridLayout_9->addWidget(label_TPGColorRed, 0, 1, 1, 1);

        spinBox_TPGBackgroundColorRed = new QSpinBox(groupBox_TPG);
        spinBox_TPGBackgroundColorRed->setObjectName(QString::fromUtf8("spinBox_TPGBackgroundColorRed"));
        spinBox_TPGBackgroundColorRed->setEnabled(false);
        spinBox_TPGBackgroundColorRed->setMaximum(1023);

        gridLayout_9->addWidget(spinBox_TPGBackgroundColorRed, 2, 1, 1, 1);

        label_TPGColorBackground = new QLabel(groupBox_TPG);
        label_TPGColorBackground->setObjectName(QString::fromUtf8("label_TPGColorBackground"));

        gridLayout_9->addWidget(label_TPGColorBackground, 2, 0, 1, 1);

        spinBox_TPGForegroundColorBlue = new QSpinBox(groupBox_TPG);
        spinBox_TPGForegroundColorBlue->setObjectName(QString::fromUtf8("spinBox_TPGForegroundColorBlue"));
        spinBox_TPGForegroundColorBlue->setEnabled(false);
        spinBox_TPGForegroundColorBlue->setMaximum(1023);

        gridLayout_9->addWidget(spinBox_TPGForegroundColorBlue, 1, 3, 1, 1);


        verticalLayout_15->addLayout(gridLayout_9);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(2);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        pushButton_GetTPGColor = new QPushButton(groupBox_TPG);
        pushButton_GetTPGColor->setObjectName(QString::fromUtf8("pushButton_GetTPGColor"));
        pushButton_GetTPGColor->setEnabled(false);

        horizontalLayout_11->addWidget(pushButton_GetTPGColor);

        pushButton_SetTPGColor = new QPushButton(groupBox_TPG);
        pushButton_SetTPGColor->setObjectName(QString::fromUtf8("pushButton_SetTPGColor"));
        pushButton_SetTPGColor->setEnabled(false);

        horizontalLayout_11->addWidget(pushButton_SetTPGColor);


        verticalLayout_15->addLayout(horizontalLayout_11);


        verticalLayout_23->addWidget(groupBox_TPG);

        groupBox_FPDModeAndFieldSelect = new QGroupBox(tab_Video_Mode);
        groupBox_FPDModeAndFieldSelect->setObjectName(QString::fromUtf8("groupBox_FPDModeAndFieldSelect"));
        sizePolicy.setHeightForWidth(groupBox_FPDModeAndFieldSelect->sizePolicy().hasHeightForWidth());
        groupBox_FPDModeAndFieldSelect->setSizePolicy(sizePolicy);
        verticalLayout_18 = new QVBoxLayout(groupBox_FPDModeAndFieldSelect);
        verticalLayout_18->setSpacing(2);
        verticalLayout_18->setContentsMargins(11, 11, 11, 11);
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));
        verticalLayout_18->setContentsMargins(5, 5, 5, 5);
        comboBox_FPDFieldSelectList = new QComboBox(groupBox_FPDModeAndFieldSelect);
        comboBox_FPDFieldSelectList->addItem(QString());
        comboBox_FPDFieldSelectList->addItem(QString());
        comboBox_FPDFieldSelectList->addItem(QString());
        comboBox_FPDFieldSelectList->setObjectName(QString::fromUtf8("comboBox_FPDFieldSelectList"));
        comboBox_FPDFieldSelectList->setEnabled(false);

        verticalLayout_18->addWidget(comboBox_FPDFieldSelectList);

        checkBox_FPDInvPol = new QCheckBox(groupBox_FPDModeAndFieldSelect);
        checkBox_FPDInvPol->setObjectName(QString::fromUtf8("checkBox_FPDInvPol"));
        checkBox_FPDInvPol->setEnabled(false);

        verticalLayout_18->addWidget(checkBox_FPDInvPol);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        spinBox_FPDPixMode = new QSpinBox(groupBox_FPDModeAndFieldSelect);
        spinBox_FPDPixMode->setObjectName(QString::fromUtf8("spinBox_FPDPixMode"));
        spinBox_FPDPixMode->setEnabled(false);
        spinBox_FPDPixMode->setMinimum(1);
        spinBox_FPDPixMode->setMaximum(4);

        horizontalLayout_16->addWidget(spinBox_FPDPixMode);

        label_FPDPixMode = new QLabel(groupBox_FPDModeAndFieldSelect);
        label_FPDPixMode->setObjectName(QString::fromUtf8("label_FPDPixMode"));

        horizontalLayout_16->addWidget(label_FPDPixMode);


        verticalLayout_18->addLayout(horizontalLayout_16);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(2);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        pushButton_GetFPDMode = new QPushButton(groupBox_FPDModeAndFieldSelect);
        pushButton_GetFPDMode->setObjectName(QString::fromUtf8("pushButton_GetFPDMode"));
        pushButton_GetFPDMode->setEnabled(false);

        horizontalLayout_15->addWidget(pushButton_GetFPDMode);

        pushButton_SetFPDMode = new QPushButton(groupBox_FPDModeAndFieldSelect);
        pushButton_SetFPDMode->setObjectName(QString::fromUtf8("pushButton_SetFPDMode"));
        pushButton_SetFPDMode->setEnabled(false);

        horizontalLayout_15->addWidget(pushButton_SetFPDMode);


        verticalLayout_18->addLayout(horizontalLayout_15);


        verticalLayout_23->addWidget(groupBox_FPDModeAndFieldSelect);

        verticalSpacer_10 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_23->addItem(verticalSpacer_10);


        horizontalLayout_4->addLayout(verticalLayout_23);

        verticalLayout_40 = new QVBoxLayout();
        verticalLayout_40->setSpacing(6);
        verticalLayout_40->setObjectName(QString::fromUtf8("verticalLayout_40"));
        groupBox_VideoSignalInfo = new QGroupBox(tab_Video_Mode);
        groupBox_VideoSignalInfo->setObjectName(QString::fromUtf8("groupBox_VideoSignalInfo"));
        formLayout_10 = new QFormLayout(groupBox_VideoSignalInfo);
        formLayout_10->setSpacing(6);
        formLayout_10->setContentsMargins(11, 11, 11, 11);
        formLayout_10->setObjectName(QString::fromUtf8("formLayout_10"));
        formLayout_10->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        gridLayout_25 = new QGridLayout();
        gridLayout_25->setSpacing(6);
        gridLayout_25->setObjectName(QString::fromUtf8("gridLayout_25"));
        lineEdit_VidActvFirstPix = new QLineEdit(groupBox_VideoSignalInfo);
        lineEdit_VidActvFirstPix->setObjectName(QString::fromUtf8("lineEdit_VidActvFirstPix"));
        lineEdit_VidActvFirstPix->setReadOnly(true);

        gridLayout_25->addWidget(lineEdit_VidActvFirstPix, 13, 1, 1, 1);

        label_VidRsvd = new QLabel(groupBox_VideoSignalInfo);
        label_VidRsvd->setObjectName(QString::fromUtf8("label_VidRsvd"));

        gridLayout_25->addWidget(label_VidRsvd, 3, 0, 1, 1);

        label_VidActvFirstPix = new QLabel(groupBox_VideoSignalInfo);
        label_VidActvFirstPix->setObjectName(QString::fromUtf8("label_VidActvFirstPix"));

        gridLayout_25->addWidget(label_VidActvFirstPix, 13, 0, 1, 1);

        label_VidActvPxPerLineInPix = new QLabel(groupBox_VideoSignalInfo);
        label_VidActvPxPerLineInPix->setObjectName(QString::fromUtf8("label_VidActvPxPerLineInPix"));

        gridLayout_25->addWidget(label_VidActvPxPerLineInPix, 11, 2, 1, 1);

        label_VidHPol = new QLabel(groupBox_VideoSignalInfo);
        label_VidHPol->setObjectName(QString::fromUtf8("label_VidHPol"));

        gridLayout_25->addWidget(label_VidHPol, 4, 0, 1, 1);

        lineEdit_VidActvLinesPerFrame = new QLineEdit(groupBox_VideoSignalInfo);
        lineEdit_VidActvLinesPerFrame->setObjectName(QString::fromUtf8("lineEdit_VidActvLinesPerFrame"));
        lineEdit_VidActvLinesPerFrame->setReadOnly(true);

        gridLayout_25->addWidget(lineEdit_VidActvLinesPerFrame, 12, 1, 1, 1);

        lineEdit_VidVFreq = new QLineEdit(groupBox_VideoSignalInfo);
        lineEdit_VidVFreq->setObjectName(QString::fromUtf8("lineEdit_VidVFreq"));
        lineEdit_VidVFreq->setReadOnly(true);

        gridLayout_25->addWidget(lineEdit_VidVFreq, 8, 1, 1, 1);

        label_VidHResInPix = new QLabel(groupBox_VideoSignalInfo);
        label_VidHResInPix->setObjectName(QString::fromUtf8("label_VidHResInPix"));

        gridLayout_25->addWidget(label_VidHResInPix, 1, 2, 1, 1);

        label_VidPixPerLineInPix = new QLabel(groupBox_VideoSignalInfo);
        label_VidPixPerLineInPix->setObjectName(QString::fromUtf8("label_VidPixPerLineInPix"));

        gridLayout_25->addWidget(label_VidPixPerLineInPix, 9, 2, 1, 1);

        label_VidPixClkinMHz = new QLabel(groupBox_VideoSignalInfo);
        label_VidPixClkinMHz->setObjectName(QString::fromUtf8("label_VidPixClkinMHz"));

        gridLayout_25->addWidget(label_VidPixClkinMHz, 6, 2, 1, 1);

        label_VidVFreInHz = new QLabel(groupBox_VideoSignalInfo);
        label_VidVFreInHz->setObjectName(QString::fromUtf8("label_VidVFreInHz"));

        gridLayout_25->addWidget(label_VidVFreInHz, 8, 2, 1, 1);

        lineEdit_VidRsvd = new QLineEdit(groupBox_VideoSignalInfo);
        lineEdit_VidRsvd->setObjectName(QString::fromUtf8("lineEdit_VidRsvd"));
        lineEdit_VidRsvd->setReadOnly(true);

        gridLayout_25->addWidget(lineEdit_VidRsvd, 3, 1, 1, 1);

        lineEdit_VidActvPixPerLine = new QLineEdit(groupBox_VideoSignalInfo);
        lineEdit_VidActvPixPerLine->setObjectName(QString::fromUtf8("lineEdit_VidActvPixPerLine"));
        lineEdit_VidActvPixPerLine->setReadOnly(true);

        gridLayout_25->addWidget(lineEdit_VidActvPixPerLine, 11, 1, 1, 1);

        pushButton_GetVideoSingalInfo = new QPushButton(groupBox_VideoSignalInfo);
        pushButton_GetVideoSingalInfo->setObjectName(QString::fromUtf8("pushButton_GetVideoSingalInfo"));

        gridLayout_25->addWidget(pushButton_GetVideoSingalInfo, 15, 1, 1, 1);

        label_VidActvPixPerLine = new QLabel(groupBox_VideoSignalInfo);
        label_VidActvPixPerLine->setObjectName(QString::fromUtf8("label_VidActvPixPerLine"));

        gridLayout_25->addWidget(label_VidActvPixPerLine, 11, 0, 1, 1);

        label_VidActvPixPerFrameInPix = new QLabel(groupBox_VideoSignalInfo);
        label_VidActvPixPerFrameInPix->setObjectName(QString::fromUtf8("label_VidActvPixPerFrameInPix"));

        gridLayout_25->addWidget(label_VidActvPixPerFrameInPix, 12, 2, 1, 1);

        label_VidActvFirstLine = new QLabel(groupBox_VideoSignalInfo);
        label_VidActvFirstLine->setObjectName(QString::fromUtf8("label_VidActvFirstLine"));

        gridLayout_25->addWidget(label_VidActvFirstLine, 14, 0, 1, 1);

        label_VidSigStatus = new QLabel(groupBox_VideoSignalInfo);
        label_VidSigStatus->setObjectName(QString::fromUtf8("label_VidSigStatus"));

        gridLayout_25->addWidget(label_VidSigStatus, 0, 0, 1, 1);

        lineEdit_VidLinesPerFrame = new QLineEdit(groupBox_VideoSignalInfo);
        lineEdit_VidLinesPerFrame->setObjectName(QString::fromUtf8("lineEdit_VidLinesPerFrame"));
        lineEdit_VidLinesPerFrame->setReadOnly(true);

        gridLayout_25->addWidget(lineEdit_VidLinesPerFrame, 10, 1, 1, 1);

        label_VidVPol = new QLabel(groupBox_VideoSignalInfo);
        label_VidVPol->setObjectName(QString::fromUtf8("label_VidVPol"));

        gridLayout_25->addWidget(label_VidVPol, 5, 0, 1, 1);

        label_VidVFreq = new QLabel(groupBox_VideoSignalInfo);
        label_VidVFreq->setObjectName(QString::fromUtf8("label_VidVFreq"));

        gridLayout_25->addWidget(label_VidVFreq, 8, 0, 1, 1);

        label_VidActvLinesPerFrame = new QLabel(groupBox_VideoSignalInfo);
        label_VidActvLinesPerFrame->setObjectName(QString::fromUtf8("label_VidActvLinesPerFrame"));

        gridLayout_25->addWidget(label_VidActvLinesPerFrame, 12, 0, 1, 1);

        label_VidPixClk = new QLabel(groupBox_VideoSignalInfo);
        label_VidPixClk->setObjectName(QString::fromUtf8("label_VidPixClk"));

        gridLayout_25->addWidget(label_VidPixClk, 6, 0, 1, 1);

        label_VidPixPerLine = new QLabel(groupBox_VideoSignalInfo);
        label_VidPixPerLine->setObjectName(QString::fromUtf8("label_VidPixPerLine"));

        gridLayout_25->addWidget(label_VidPixPerLine, 9, 0, 1, 1);

        label_VidLinesPerFrame = new QLabel(groupBox_VideoSignalInfo);
        label_VidLinesPerFrame->setObjectName(QString::fromUtf8("label_VidLinesPerFrame"));

        gridLayout_25->addWidget(label_VidLinesPerFrame, 10, 0, 1, 1);

        lineEdit_VidPixPerLine = new QLineEdit(groupBox_VideoSignalInfo);
        lineEdit_VidPixPerLine->setObjectName(QString::fromUtf8("lineEdit_VidPixPerLine"));
        lineEdit_VidPixPerLine->setReadOnly(true);

        gridLayout_25->addWidget(lineEdit_VidPixPerLine, 9, 1, 1, 1);

        label_VidHFreq = new QLabel(groupBox_VideoSignalInfo);
        label_VidHFreq->setObjectName(QString::fromUtf8("label_VidHFreq"));

        gridLayout_25->addWidget(label_VidHFreq, 7, 0, 1, 1);

        label_VidHFreInKHz = new QLabel(groupBox_VideoSignalInfo);
        label_VidHFreInKHz->setObjectName(QString::fromUtf8("label_VidHFreInKHz"));

        gridLayout_25->addWidget(label_VidHFreInKHz, 7, 2, 1, 1);

        label_VidStatus = new QLabel(groupBox_VideoSignalInfo);
        label_VidStatus->setObjectName(QString::fromUtf8("label_VidStatus"));

        gridLayout_25->addWidget(label_VidStatus, 0, 2, 1, 1);

        lineEdit_VidVRes = new QLineEdit(groupBox_VideoSignalInfo);
        lineEdit_VidVRes->setObjectName(QString::fromUtf8("lineEdit_VidVRes"));
        lineEdit_VidVRes->setReadOnly(true);

        gridLayout_25->addWidget(lineEdit_VidVRes, 2, 1, 1, 1);

        comboBox_VidLockSatus = new QComboBox(groupBox_VideoSignalInfo);
        comboBox_VidLockSatus->addItem(QString());
        comboBox_VidLockSatus->addItem(QString());
        comboBox_VidLockSatus->addItem(QString());
        comboBox_VidLockSatus->addItem(QString());
        comboBox_VidLockSatus->setObjectName(QString::fromUtf8("comboBox_VidLockSatus"));
        comboBox_VidLockSatus->setLayoutDirection(Qt::LeftToRight);

        gridLayout_25->addWidget(comboBox_VidLockSatus, 0, 1, 1, 1);

        label_VidVRes = new QLabel(groupBox_VideoSignalInfo);
        label_VidVRes->setObjectName(QString::fromUtf8("label_VidVRes"));

        gridLayout_25->addWidget(label_VidVRes, 2, 0, 1, 1);

        label_VidHRes = new QLabel(groupBox_VideoSignalInfo);
        label_VidHRes->setObjectName(QString::fromUtf8("label_VidHRes"));

        gridLayout_25->addWidget(label_VidHRes, 1, 0, 1, 1);

        label_VidLinesPerFramInPix = new QLabel(groupBox_VideoSignalInfo);
        label_VidLinesPerFramInPix->setObjectName(QString::fromUtf8("label_VidLinesPerFramInPix"));

        gridLayout_25->addWidget(label_VidLinesPerFramInPix, 10, 2, 1, 1);

        lineEdit_VidHRes = new QLineEdit(groupBox_VideoSignalInfo);
        lineEdit_VidHRes->setObjectName(QString::fromUtf8("lineEdit_VidHRes"));
        lineEdit_VidHRes->setReadOnly(true);

        gridLayout_25->addWidget(lineEdit_VidHRes, 1, 1, 1, 1);

        label_VResInPix = new QLabel(groupBox_VideoSignalInfo);
        label_VResInPix->setObjectName(QString::fromUtf8("label_VResInPix"));

        gridLayout_25->addWidget(label_VResInPix, 2, 2, 1, 1);

        lineEdit_VidHFreq = new QLineEdit(groupBox_VideoSignalInfo);
        lineEdit_VidHFreq->setObjectName(QString::fromUtf8("lineEdit_VidHFreq"));
        lineEdit_VidHFreq->setReadOnly(true);

        gridLayout_25->addWidget(lineEdit_VidHFreq, 7, 1, 1, 1);

        comboBox_VidHPol = new QComboBox(groupBox_VideoSignalInfo);
        comboBox_VidHPol->addItem(QString());
        comboBox_VidHPol->addItem(QString());
        comboBox_VidHPol->setObjectName(QString::fromUtf8("comboBox_VidHPol"));

        gridLayout_25->addWidget(comboBox_VidHPol, 4, 1, 1, 1);

        lineEdit_VidActvFirstLine = new QLineEdit(groupBox_VideoSignalInfo);
        lineEdit_VidActvFirstLine->setObjectName(QString::fromUtf8("lineEdit_VidActvFirstLine"));
        lineEdit_VidActvFirstLine->setReadOnly(true);

        gridLayout_25->addWidget(lineEdit_VidActvFirstLine, 14, 1, 1, 1);

        comboBox_VidVPol = new QComboBox(groupBox_VideoSignalInfo);
        comboBox_VidVPol->addItem(QString());
        comboBox_VidVPol->addItem(QString());
        comboBox_VidVPol->setObjectName(QString::fromUtf8("comboBox_VidVPol"));

        gridLayout_25->addWidget(comboBox_VidVPol, 5, 1, 1, 1);

        lineEdit_VidPixClk = new QLineEdit(groupBox_VideoSignalInfo);
        lineEdit_VidPixClk->setObjectName(QString::fromUtf8("lineEdit_VidPixClk"));
        lineEdit_VidPixClk->setReadOnly(true);

        gridLayout_25->addWidget(lineEdit_VidPixClk, 6, 1, 1, 1);

        label_VidActvFirstPixPos = new QLabel(groupBox_VideoSignalInfo);
        label_VidActvFirstPixPos->setObjectName(QString::fromUtf8("label_VidActvFirstPixPos"));

        gridLayout_25->addWidget(label_VidActvFirstPixPos, 13, 2, 1, 1);

        label_VidActvFirsLinePos = new QLabel(groupBox_VideoSignalInfo);
        label_VidActvFirsLinePos->setObjectName(QString::fromUtf8("label_VidActvFirsLinePos"));

        gridLayout_25->addWidget(label_VidActvFirsLinePos, 14, 2, 1, 1);


        formLayout_10->setLayout(0, QFormLayout::LabelRole, gridLayout_25);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout_10->setItem(0, QFormLayout::FieldRole, horizontalSpacer_4);


        verticalLayout_40->addWidget(groupBox_VideoSignalInfo);

        verticalSpacer_15 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_40->addItem(verticalSpacer_15);


        horizontalLayout_4->addLayout(verticalLayout_40);


        verticalLayout_9->addLayout(horizontalLayout_4);

        tabWidget->addTab(tab_Video_Mode, QString());
        tab_Pattern_Seq = new QWidget();
        tab_Pattern_Seq->setObjectName(QString::fromUtf8("tab_Pattern_Seq"));
        verticalLayout_25 = new QVBoxLayout(tab_Pattern_Seq);
        verticalLayout_25->setSpacing(6);
        verticalLayout_25->setContentsMargins(11, 11, 11, 11);
        verticalLayout_25->setObjectName(QString::fromUtf8("verticalLayout_25"));
        tabWidget_2 = new QTabWidget(tab_Pattern_Seq);
        tabWidget_2->setObjectName(QString::fromUtf8("tabWidget_2"));
        sizePolicy.setHeightForWidth(tabWidget_2->sizePolicy().hasHeightForWidth());
        tabWidget_2->setSizePolicy(sizePolicy);
        tabWidget_2->setMinimumSize(QSize(0, 0));
        tab_pat_seq_seq_settings = new QWidget();
        tab_pat_seq_seq_settings->setObjectName(QString::fromUtf8("tab_pat_seq_seq_settings"));
        horizontalLayout_36 = new QHBoxLayout(tab_pat_seq_seq_settings);
        horizontalLayout_36->setSpacing(6);
        horizontalLayout_36->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_36->setObjectName(QString::fromUtf8("horizontalLayout_36"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        groupBox_PatSeqSel = new QGroupBox(tab_pat_seq_seq_settings);
        groupBox_PatSeqSel->setObjectName(QString::fromUtf8("groupBox_PatSeqSel"));
        sizePolicy.setHeightForWidth(groupBox_PatSeqSel->sizePolicy().hasHeightForWidth());
        groupBox_PatSeqSel->setSizePolicy(sizePolicy);
        verticalLayout_22 = new QVBoxLayout(groupBox_PatSeqSel);
        verticalLayout_22->setSpacing(2);
        verticalLayout_22->setContentsMargins(11, 11, 11, 11);
        verticalLayout_22->setObjectName(QString::fromUtf8("verticalLayout_22"));
        verticalLayout_22->setContentsMargins(5, 5, 5, 5);
        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setSpacing(2);
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        comboBox_PatSeqSelPatColor = new QComboBox(groupBox_PatSeqSel);
        comboBox_PatSeqSelPatColor->addItem(QString());
        comboBox_PatSeqSelPatColor->addItem(QString());
        comboBox_PatSeqSelPatColor->addItem(QString());
        comboBox_PatSeqSelPatColor->addItem(QString());
        comboBox_PatSeqSelPatColor->addItem(QString());
        comboBox_PatSeqSelPatColor->addItem(QString());
        comboBox_PatSeqSelPatColor->addItem(QString());
        comboBox_PatSeqSelPatColor->addItem(QString());
        comboBox_PatSeqSelPatColor->setObjectName(QString::fromUtf8("comboBox_PatSeqSelPatColor"));

        horizontalLayout_21->addWidget(comboBox_PatSeqSelPatColor);

        comboBox_PatSeqSelTrigType = new QComboBox(groupBox_PatSeqSel);
        comboBox_PatSeqSelTrigType->addItem(QString());
        comboBox_PatSeqSelTrigType->addItem(QString());
        comboBox_PatSeqSelTrigType->addItem(QString());
        comboBox_PatSeqSelTrigType->addItem(QString());
        comboBox_PatSeqSelTrigType->setObjectName(QString::fromUtf8("comboBox_PatSeqSelTrigType"));

        horizontalLayout_21->addWidget(comboBox_PatSeqSelTrigType);


        verticalLayout_22->addLayout(horizontalLayout_21);

        groupBox_PatSeqBitPlaneSel = new QGroupBox(groupBox_PatSeqSel);
        groupBox_PatSeqBitPlaneSel->setObjectName(QString::fromUtf8("groupBox_PatSeqBitPlaneSel"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(groupBox_PatSeqBitPlaneSel->sizePolicy().hasHeightForWidth());
        groupBox_PatSeqBitPlaneSel->setSizePolicy(sizePolicy3);
        groupBox_PatSeqBitPlaneSel->setMinimumSize(QSize(0, 0));
        groupBox_PatSeqBitPlaneSel->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout_10 = new QVBoxLayout(groupBox_PatSeqBitPlaneSel);
        verticalLayout_10->setSpacing(2);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setSizeConstraint(QLayout::SetMinimumSize);
        verticalLayout_10->setContentsMargins(5, 5, 5, 5);
        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(2);
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        label_PatSeqFrmOrImgIndex = new QLabel(groupBox_PatSeqBitPlaneSel);
        label_PatSeqFrmOrImgIndex->setObjectName(QString::fromUtf8("label_PatSeqFrmOrImgIndex"));

        horizontalLayout_17->addWidget(label_PatSeqFrmOrImgIndex);

        spinBox_PatSeqFrameImgIndex = new QSpinBox(groupBox_PatSeqBitPlaneSel);
        spinBox_PatSeqFrameImgIndex->setObjectName(QString::fromUtf8("spinBox_PatSeqFrameImgIndex"));
        spinBox_PatSeqFrameImgIndex->setMaximum(63);

        horizontalLayout_17->addWidget(spinBox_PatSeqFrameImgIndex);

        horizontalSpacer_9 = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_9);

        label_PatSeqPatBitDepthSel = new QLabel(groupBox_PatSeqBitPlaneSel);
        label_PatSeqPatBitDepthSel->setObjectName(QString::fromUtf8("label_PatSeqPatBitDepthSel"));

        horizontalLayout_17->addWidget(label_PatSeqPatBitDepthSel);

        comboBox_PatSeqPatBitDepthSel = new QComboBox(groupBox_PatSeqBitPlaneSel);
        comboBox_PatSeqPatBitDepthSel->addItem(QString());
        comboBox_PatSeqPatBitDepthSel->addItem(QString());
        comboBox_PatSeqPatBitDepthSel->addItem(QString());
        comboBox_PatSeqPatBitDepthSel->addItem(QString());
        comboBox_PatSeqPatBitDepthSel->addItem(QString());
        comboBox_PatSeqPatBitDepthSel->addItem(QString());
        comboBox_PatSeqPatBitDepthSel->addItem(QString());
        comboBox_PatSeqPatBitDepthSel->addItem(QString());
        comboBox_PatSeqPatBitDepthSel->setObjectName(QString::fromUtf8("comboBox_PatSeqPatBitDepthSel"));

        horizontalLayout_17->addWidget(comboBox_PatSeqPatBitDepthSel);

        horizontalSpacer_10 = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_10);

        label_PatSeqBitPlaneNum = new QLabel(groupBox_PatSeqBitPlaneSel);
        label_PatSeqBitPlaneNum->setObjectName(QString::fromUtf8("label_PatSeqBitPlaneNum"));

        horizontalLayout_17->addWidget(label_PatSeqBitPlaneNum);

        comboBox_PatSeqBitPlaneNum = new QComboBox(groupBox_PatSeqBitPlaneSel);
        comboBox_PatSeqBitPlaneNum->addItem(QString());
        comboBox_PatSeqBitPlaneNum->addItem(QString());
        comboBox_PatSeqBitPlaneNum->addItem(QString());
        comboBox_PatSeqBitPlaneNum->addItem(QString());
        comboBox_PatSeqBitPlaneNum->addItem(QString());
        comboBox_PatSeqBitPlaneNum->addItem(QString());
        comboBox_PatSeqBitPlaneNum->addItem(QString());
        comboBox_PatSeqBitPlaneNum->addItem(QString());
        comboBox_PatSeqBitPlaneNum->addItem(QString());
        comboBox_PatSeqBitPlaneNum->addItem(QString());
        comboBox_PatSeqBitPlaneNum->addItem(QString());
        comboBox_PatSeqBitPlaneNum->addItem(QString());
        comboBox_PatSeqBitPlaneNum->addItem(QString());
        comboBox_PatSeqBitPlaneNum->addItem(QString());
        comboBox_PatSeqBitPlaneNum->addItem(QString());
        comboBox_PatSeqBitPlaneNum->addItem(QString());
        comboBox_PatSeqBitPlaneNum->addItem(QString());
        comboBox_PatSeqBitPlaneNum->addItem(QString());
        comboBox_PatSeqBitPlaneNum->addItem(QString());
        comboBox_PatSeqBitPlaneNum->addItem(QString());
        comboBox_PatSeqBitPlaneNum->addItem(QString());
        comboBox_PatSeqBitPlaneNum->addItem(QString());
        comboBox_PatSeqBitPlaneNum->addItem(QString());
        comboBox_PatSeqBitPlaneNum->addItem(QString());
        comboBox_PatSeqBitPlaneNum->setObjectName(QString::fromUtf8("comboBox_PatSeqBitPlaneNum"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(comboBox_PatSeqBitPlaneNum->sizePolicy().hasHeightForWidth());
        comboBox_PatSeqBitPlaneNum->setSizePolicy(sizePolicy4);

        horizontalLayout_17->addWidget(comboBox_PatSeqBitPlaneNum);

        horizontalSpacer_26 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_26);


        verticalLayout_10->addLayout(horizontalLayout_17);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setSpacing(2);
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        listWidget_PatSeqBitPlanes = new QListWidget(groupBox_PatSeqBitPlaneSel);
        new QListWidgetItem(listWidget_PatSeqBitPlanes);
        new QListWidgetItem(listWidget_PatSeqBitPlanes);
        new QListWidgetItem(listWidget_PatSeqBitPlanes);
        new QListWidgetItem(listWidget_PatSeqBitPlanes);
        new QListWidgetItem(listWidget_PatSeqBitPlanes);
        new QListWidgetItem(listWidget_PatSeqBitPlanes);
        new QListWidgetItem(listWidget_PatSeqBitPlanes);
        new QListWidgetItem(listWidget_PatSeqBitPlanes);
        new QListWidgetItem(listWidget_PatSeqBitPlanes);
        new QListWidgetItem(listWidget_PatSeqBitPlanes);
        new QListWidgetItem(listWidget_PatSeqBitPlanes);
        new QListWidgetItem(listWidget_PatSeqBitPlanes);
        new QListWidgetItem(listWidget_PatSeqBitPlanes);
        new QListWidgetItem(listWidget_PatSeqBitPlanes);
        new QListWidgetItem(listWidget_PatSeqBitPlanes);
        new QListWidgetItem(listWidget_PatSeqBitPlanes);
        new QListWidgetItem(listWidget_PatSeqBitPlanes);
        new QListWidgetItem(listWidget_PatSeqBitPlanes);
        new QListWidgetItem(listWidget_PatSeqBitPlanes);
        new QListWidgetItem(listWidget_PatSeqBitPlanes);
        new QListWidgetItem(listWidget_PatSeqBitPlanes);
        new QListWidgetItem(listWidget_PatSeqBitPlanes);
        new QListWidgetItem(listWidget_PatSeqBitPlanes);
        new QListWidgetItem(listWidget_PatSeqBitPlanes);
        listWidget_PatSeqBitPlanes->setObjectName(QString::fromUtf8("listWidget_PatSeqBitPlanes"));
        QSizePolicy sizePolicy5(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(listWidget_PatSeqBitPlanes->sizePolicy().hasHeightForWidth());
        listWidget_PatSeqBitPlanes->setSizePolicy(sizePolicy5);
        listWidget_PatSeqBitPlanes->setMinimumSize(QSize(465, 0));
        listWidget_PatSeqBitPlanes->setMaximumSize(QSize(1655555, 35));
        listWidget_PatSeqBitPlanes->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 170, 170);\n"
"alternate-background-color: rgb(210, 210, 210);"));
        listWidget_PatSeqBitPlanes->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget_PatSeqBitPlanes->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget_PatSeqBitPlanes->setAlternatingRowColors(true);
        listWidget_PatSeqBitPlanes->setSelectionMode(QAbstractItemView::MultiSelection);
        listWidget_PatSeqBitPlanes->setFlow(QListView::LeftToRight);
        listWidget_PatSeqBitPlanes->setViewMode(QListView::ListMode);
        listWidget_PatSeqBitPlanes->setModelColumn(0);

        horizontalLayout_22->addWidget(listWidget_PatSeqBitPlanes);


        verticalLayout_10->addLayout(horizontalLayout_22);

        horizontalLayout_39 = new QHBoxLayout();
        horizontalLayout_39->setSpacing(6);
        horizontalLayout_39->setObjectName(QString::fromUtf8("horizontalLayout_39"));
        checkBox_PatSeqInvPatData = new QCheckBox(groupBox_PatSeqBitPlaneSel);
        checkBox_PatSeqInvPatData->setObjectName(QString::fromUtf8("checkBox_PatSeqInvPatData"));

        horizontalLayout_39->addWidget(checkBox_PatSeqInvPatData);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_39->addItem(horizontalSpacer_2);

        checkBox_PatSeqInsBlackPat = new QCheckBox(groupBox_PatSeqBitPlaneSel);
        checkBox_PatSeqInsBlackPat->setObjectName(QString::fromUtf8("checkBox_PatSeqInsBlackPat"));
        checkBox_PatSeqInsBlackPat->setChecked(true);

        horizontalLayout_39->addWidget(checkBox_PatSeqInsBlackPat);

        horizontalSpacer_28 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_39->addItem(horizontalSpacer_28);

        pushButton_PatSeqAddPatToLut = new QPushButton(groupBox_PatSeqBitPlaneSel);
        pushButton_PatSeqAddPatToLut->setObjectName(QString::fromUtf8("pushButton_PatSeqAddPatToLut"));

        horizontalLayout_39->addWidget(pushButton_PatSeqAddPatToLut);

        horizontalSpacer_27 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_39->addItem(horizontalSpacer_27);


        verticalLayout_10->addLayout(horizontalLayout_39);


        verticalLayout_22->addWidget(groupBox_PatSeqBitPlaneSel);


        verticalLayout_7->addWidget(groupBox_PatSeqSel);

        groupBox_PatSeqDispLUT = new QGroupBox(tab_pat_seq_seq_settings);
        groupBox_PatSeqDispLUT->setObjectName(QString::fromUtf8("groupBox_PatSeqDispLUT"));
        sizePolicy.setHeightForWidth(groupBox_PatSeqDispLUT->sizePolicy().hasHeightForWidth());
        groupBox_PatSeqDispLUT->setSizePolicy(sizePolicy);
        groupBox_PatSeqDispLUT->setMinimumSize(QSize(0, 0));
        horizontalLayout_12 = new QHBoxLayout(groupBox_PatSeqDispLUT);
        horizontalLayout_12->setSpacing(2);
        horizontalLayout_12->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(5, 5, 5, 5);
        listWidget_PatSeqLUT = new QListWidget(groupBox_PatSeqDispLUT);
        listWidget_PatSeqLUT->setObjectName(QString::fromUtf8("listWidget_PatSeqLUT"));
        sizePolicy1.setHeightForWidth(listWidget_PatSeqLUT->sizePolicy().hasHeightForWidth());
        listWidget_PatSeqLUT->setSizePolicy(sizePolicy1);
        listWidget_PatSeqLUT->setMinimumSize(QSize(0, 0));
        listWidget_PatSeqLUT->setMaximumSize(QSize(16777215, 16777215));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Courier"));
        font1.setBold(true);
        font1.setWeight(75);
        listWidget_PatSeqLUT->setFont(font1);
        listWidget_PatSeqLUT->setContextMenuPolicy(Qt::CustomContextMenu);
        listWidget_PatSeqLUT->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        listWidget_PatSeqLUT->setAlternatingRowColors(false);
        listWidget_PatSeqLUT->setSelectionMode(QAbstractItemView::SingleSelection);
        listWidget_PatSeqLUT->setTextElideMode(Qt::ElideMiddle);
        listWidget_PatSeqLUT->setFlow(QListView::LeftToRight);
        listWidget_PatSeqLUT->setSpacing(1);
        listWidget_PatSeqLUT->setViewMode(QListView::ListMode);
        listWidget_PatSeqLUT->setUniformItemSizes(false);
        listWidget_PatSeqLUT->setSelectionRectVisible(true);

        horizontalLayout_12->addWidget(listWidget_PatSeqLUT);

        verticalLayout_24 = new QVBoxLayout();
        verticalLayout_24->setSpacing(2);
        verticalLayout_24->setObjectName(QString::fromUtf8("verticalLayout_24"));
        pushButton_PatSeqSendLUT = new QPushButton(groupBox_PatSeqDispLUT);
        pushButton_PatSeqSendLUT->setObjectName(QString::fromUtf8("pushButton_PatSeqSendLUT"));

        verticalLayout_24->addWidget(pushButton_PatSeqSendLUT);

        pushButton_PatSeqReadLUTFrmHW = new QPushButton(groupBox_PatSeqDispLUT);
        pushButton_PatSeqReadLUTFrmHW->setObjectName(QString::fromUtf8("pushButton_PatSeqReadLUTFrmHW"));

        verticalLayout_24->addWidget(pushButton_PatSeqReadLUTFrmHW);

        pushButton_PatSeqClearLUTFrmGUI = new QPushButton(groupBox_PatSeqDispLUT);
        pushButton_PatSeqClearLUTFrmGUI->setObjectName(QString::fromUtf8("pushButton_PatSeqClearLUTFrmGUI"));

        verticalLayout_24->addWidget(pushButton_PatSeqClearLUTFrmGUI);

        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setSpacing(6);
        horizontalLayout_25->setObjectName(QString::fromUtf8("horizontalLayout_25"));
        radioButton_PatSeqDispRunOnce = new QRadioButton(groupBox_PatSeqDispLUT);
        radioButton_PatSeqDispRunOnce->setObjectName(QString::fromUtf8("radioButton_PatSeqDispRunOnce"));
        radioButton_PatSeqDispRunOnce->setMinimumSize(QSize(0, 17));
        radioButton_PatSeqDispRunOnce->setChecked(false);

        horizontalLayout_25->addWidget(radioButton_PatSeqDispRunOnce);

        radioButton_PatSeqDispRunContinuous = new QRadioButton(groupBox_PatSeqDispLUT);
        radioButton_PatSeqDispRunContinuous->setObjectName(QString::fromUtf8("radioButton_PatSeqDispRunContinuous"));
        radioButton_PatSeqDispRunContinuous->setMinimumSize(QSize(0, 17));
        radioButton_PatSeqDispRunContinuous->setChecked(true);

        horizontalLayout_25->addWidget(radioButton_PatSeqDispRunContinuous);


        verticalLayout_24->addLayout(horizontalLayout_25);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_24->addItem(verticalSpacer_4);


        horizontalLayout_12->addLayout(verticalLayout_24);

        horizontalLayout_12->setStretch(0, 5);
        horizontalLayout_12->setStretch(1, 2);

        verticalLayout_7->addWidget(groupBox_PatSeqDispLUT);


        horizontalLayout_36->addLayout(verticalLayout_7);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        groupBox_PatSeqSourceAndTrigSel = new QGroupBox(tab_pat_seq_seq_settings);
        groupBox_PatSeqSourceAndTrigSel->setObjectName(QString::fromUtf8("groupBox_PatSeqSourceAndTrigSel"));
        verticalLayout_19 = new QVBoxLayout(groupBox_PatSeqSourceAndTrigSel);
        verticalLayout_19->setSpacing(2);
        verticalLayout_19->setContentsMargins(11, 11, 11, 11);
        verticalLayout_19->setObjectName(QString::fromUtf8("verticalLayout_19"));
        verticalLayout_19->setContentsMargins(5, 5, 5, 5);
        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setSpacing(6);
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        horizontalLayout_23->setSizeConstraint(QLayout::SetMinimumSize);
        groupBox_PatSeqPatSrc = new QGroupBox(groupBox_PatSeqSourceAndTrigSel);
        groupBox_PatSeqPatSrc->setObjectName(QString::fromUtf8("groupBox_PatSeqPatSrc"));
        sizePolicy.setHeightForWidth(groupBox_PatSeqPatSrc->sizePolicy().hasHeightForWidth());
        groupBox_PatSeqPatSrc->setSizePolicy(sizePolicy);
        gridLayout_16 = new QGridLayout(groupBox_PatSeqPatSrc);
        gridLayout_16->setSpacing(2);
        gridLayout_16->setContentsMargins(11, 11, 11, 11);
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        gridLayout_16->setContentsMargins(5, 5, 5, 5);
        radioButton_PatSeqSrcFrmFlash = new QRadioButton(groupBox_PatSeqPatSrc);
        radioButton_PatSeqSrcFrmFlash->setObjectName(QString::fromUtf8("radioButton_PatSeqSrcFrmFlash"));
        radioButton_PatSeqSrcFrmFlash->setChecked(true);

        gridLayout_16->addWidget(radioButton_PatSeqSrcFrmFlash, 0, 0, 1, 1);

        radioButton_PatSeqSrcFrmVideoPort = new QRadioButton(groupBox_PatSeqPatSrc);
        radioButton_PatSeqSrcFrmVideoPort->setObjectName(QString::fromUtf8("radioButton_PatSeqSrcFrmVideoPort"));

        gridLayout_16->addWidget(radioButton_PatSeqSrcFrmVideoPort, 1, 0, 1, 1);


        horizontalLayout_23->addWidget(groupBox_PatSeqPatSrc);

        groupBox_PatSeqTrigMode = new QGroupBox(groupBox_PatSeqSourceAndTrigSel);
        groupBox_PatSeqTrigMode->setObjectName(QString::fromUtf8("groupBox_PatSeqTrigMode"));
        sizePolicy.setHeightForWidth(groupBox_PatSeqTrigMode->sizePolicy().hasHeightForWidth());
        groupBox_PatSeqTrigMode->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(groupBox_PatSeqTrigMode);
        verticalLayout->setSpacing(2);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        radioButton_PatSeqTrigTypeIntExt = new QRadioButton(groupBox_PatSeqTrigMode);
        radioButton_PatSeqTrigTypeIntExt->setObjectName(QString::fromUtf8("radioButton_PatSeqTrigTypeIntExt"));
        radioButton_PatSeqTrigTypeIntExt->setChecked(true);
        radioButton_PatSeqTrigTypeIntExt->setAutoExclusive(true);

        verticalLayout->addWidget(radioButton_PatSeqTrigTypeIntExt);

        radioButton_PatSeqTrigTypeVSync = new QRadioButton(groupBox_PatSeqTrigMode);
        radioButton_PatSeqTrigTypeVSync->setObjectName(QString::fromUtf8("radioButton_PatSeqTrigTypeVSync"));
        radioButton_PatSeqTrigTypeVSync->setAutoExclusive(true);

        verticalLayout->addWidget(radioButton_PatSeqTrigTypeVSync);


        horizontalLayout_23->addWidget(groupBox_PatSeqTrigMode);


        verticalLayout_19->addLayout(horizontalLayout_23);

        verticalLayout_44 = new QVBoxLayout();
        verticalLayout_44->setSpacing(6);
        verticalLayout_44->setObjectName(QString::fromUtf8("verticalLayout_44"));
        groupBox_PatSeqPatDispTiming = new QGroupBox(groupBox_PatSeqSourceAndTrigSel);
        groupBox_PatSeqPatDispTiming->setObjectName(QString::fromUtf8("groupBox_PatSeqPatDispTiming"));
        sizePolicy.setHeightForWidth(groupBox_PatSeqPatDispTiming->sizePolicy().hasHeightForWidth());
        groupBox_PatSeqPatDispTiming->setSizePolicy(sizePolicy);
        formLayout_4 = new QFormLayout(groupBox_PatSeqPatDispTiming);
        formLayout_4->setSpacing(6);
        formLayout_4->setContentsMargins(11, 11, 11, 11);
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        formLayout_4->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_4->setHorizontalSpacing(2);
        formLayout_4->setVerticalSpacing(2);
        formLayout_4->setContentsMargins(5, 5, 5, 5);
        label_PatSeqPatPeriod = new QLabel(groupBox_PatSeqPatDispTiming);
        label_PatSeqPatPeriod->setObjectName(QString::fromUtf8("label_PatSeqPatPeriod"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_PatSeqPatPeriod);

        lineEdit_PatSeqPatPeriod = new QLineEdit(groupBox_PatSeqPatDispTiming);
        lineEdit_PatSeqPatPeriod->setObjectName(QString::fromUtf8("lineEdit_PatSeqPatPeriod"));
        sizePolicy2.setHeightForWidth(lineEdit_PatSeqPatPeriod->sizePolicy().hasHeightForWidth());
        lineEdit_PatSeqPatPeriod->setSizePolicy(sizePolicy2);

        formLayout_4->setWidget(1, QFormLayout::FieldRole, lineEdit_PatSeqPatPeriod);

        label_PatSeqPatExpTime = new QLabel(groupBox_PatSeqPatDispTiming);
        label_PatSeqPatExpTime->setObjectName(QString::fromUtf8("label_PatSeqPatExpTime"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_PatSeqPatExpTime);

        lineEdit_PatSeqPatExpTime = new QLineEdit(groupBox_PatSeqPatDispTiming);
        lineEdit_PatSeqPatExpTime->setObjectName(QString::fromUtf8("lineEdit_PatSeqPatExpTime"));
        sizePolicy2.setHeightForWidth(lineEdit_PatSeqPatExpTime->sizePolicy().hasHeightForWidth());
        lineEdit_PatSeqPatExpTime->setSizePolicy(sizePolicy2);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, lineEdit_PatSeqPatExpTime);


        verticalLayout_44->addWidget(groupBox_PatSeqPatDispTiming);


        verticalLayout_19->addLayout(verticalLayout_44);


        verticalLayout_12->addWidget(groupBox_PatSeqSourceAndTrigSel);

        label_PatSeqNote = new QLabel(tab_pat_seq_seq_settings);
        label_PatSeqNote->setObjectName(QString::fromUtf8("label_PatSeqNote"));
        label_PatSeqNote->setWordWrap(true);

        verticalLayout_12->addWidget(label_PatSeqNote);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_12->addItem(verticalSpacer_11);


        horizontalLayout_36->addLayout(verticalLayout_12);

        tabWidget_2->addTab(tab_pat_seq_seq_settings, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QString::fromUtf8("tab_8"));
        gridLayout_27 = new QGridLayout(tab_8);
        gridLayout_27->setSpacing(6);
        gridLayout_27->setContentsMargins(11, 11, 11, 11);
        gridLayout_27->setObjectName(QString::fromUtf8("gridLayout_27"));
        verticalLayout_37 = new QVBoxLayout();
        verticalLayout_37->setSpacing(6);
        verticalLayout_37->setObjectName(QString::fromUtf8("verticalLayout_37"));
        groupBox_VarExpPatSeqSel = new QGroupBox(tab_8);
        groupBox_VarExpPatSeqSel->setObjectName(QString::fromUtf8("groupBox_VarExpPatSeqSel"));
        sizePolicy.setHeightForWidth(groupBox_VarExpPatSeqSel->sizePolicy().hasHeightForWidth());
        groupBox_VarExpPatSeqSel->setSizePolicy(sizePolicy);
        verticalLayout_51 = new QVBoxLayout(groupBox_VarExpPatSeqSel);
        verticalLayout_51->setSpacing(2);
        verticalLayout_51->setContentsMargins(11, 11, 11, 11);
        verticalLayout_51->setObjectName(QString::fromUtf8("verticalLayout_51"));
        verticalLayout_51->setContentsMargins(5, 5, 5, 5);
        horizontalLayout_49 = new QHBoxLayout();
        horizontalLayout_49->setSpacing(2);
        horizontalLayout_49->setObjectName(QString::fromUtf8("horizontalLayout_49"));
        comboBox_VarExpPatSeqSelPatColor = new QComboBox(groupBox_VarExpPatSeqSel);
        comboBox_VarExpPatSeqSelPatColor->addItem(QString());
        comboBox_VarExpPatSeqSelPatColor->addItem(QString());
        comboBox_VarExpPatSeqSelPatColor->addItem(QString());
        comboBox_VarExpPatSeqSelPatColor->addItem(QString());
        comboBox_VarExpPatSeqSelPatColor->addItem(QString());
        comboBox_VarExpPatSeqSelPatColor->addItem(QString());
        comboBox_VarExpPatSeqSelPatColor->addItem(QString());
        comboBox_VarExpPatSeqSelPatColor->addItem(QString());
        comboBox_VarExpPatSeqSelPatColor->setObjectName(QString::fromUtf8("comboBox_VarExpPatSeqSelPatColor"));

        horizontalLayout_49->addWidget(comboBox_VarExpPatSeqSelPatColor);

        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_49->addItem(horizontalSpacer_21);

        comboBox_VarExpPatSeqSelTrigType = new QComboBox(groupBox_VarExpPatSeqSel);
        comboBox_VarExpPatSeqSelTrigType->addItem(QString());
        comboBox_VarExpPatSeqSelTrigType->addItem(QString());
        comboBox_VarExpPatSeqSelTrigType->addItem(QString());
        comboBox_VarExpPatSeqSelTrigType->addItem(QString());
        comboBox_VarExpPatSeqSelTrigType->setObjectName(QString::fromUtf8("comboBox_VarExpPatSeqSelTrigType"));
        comboBox_VarExpPatSeqSelTrigType->setMaxVisibleItems(15);

        horizontalLayout_49->addWidget(comboBox_VarExpPatSeqSelTrigType);

        horizontalSpacer_22 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_49->addItem(horizontalSpacer_22);

        label_VarExpPatSeqFrmOrImgIndex = new QLabel(groupBox_VarExpPatSeqSel);
        label_VarExpPatSeqFrmOrImgIndex->setObjectName(QString::fromUtf8("label_VarExpPatSeqFrmOrImgIndex"));

        horizontalLayout_49->addWidget(label_VarExpPatSeqFrmOrImgIndex);

        spinBox_VarExpPatSeqFrameImgIndex = new QSpinBox(groupBox_VarExpPatSeqSel);
        spinBox_VarExpPatSeqFrameImgIndex->setObjectName(QString::fromUtf8("spinBox_VarExpPatSeqFrameImgIndex"));
        spinBox_VarExpPatSeqFrameImgIndex->setMaximum(63);

        horizontalLayout_49->addWidget(spinBox_VarExpPatSeqFrameImgIndex);

        horizontalSpacer_20 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_49->addItem(horizontalSpacer_20);

        label_VarExpPatSeqPatBitDepthSel = new QLabel(groupBox_VarExpPatSeqSel);
        label_VarExpPatSeqPatBitDepthSel->setObjectName(QString::fromUtf8("label_VarExpPatSeqPatBitDepthSel"));

        horizontalLayout_49->addWidget(label_VarExpPatSeqPatBitDepthSel);

        comboBox_VarExpPatSeqPatBitDepthSel = new QComboBox(groupBox_VarExpPatSeqSel);
        comboBox_VarExpPatSeqPatBitDepthSel->addItem(QString());
        comboBox_VarExpPatSeqPatBitDepthSel->addItem(QString());
        comboBox_VarExpPatSeqPatBitDepthSel->addItem(QString());
        comboBox_VarExpPatSeqPatBitDepthSel->addItem(QString());
        comboBox_VarExpPatSeqPatBitDepthSel->addItem(QString());
        comboBox_VarExpPatSeqPatBitDepthSel->addItem(QString());
        comboBox_VarExpPatSeqPatBitDepthSel->addItem(QString());
        comboBox_VarExpPatSeqPatBitDepthSel->addItem(QString());
        comboBox_VarExpPatSeqPatBitDepthSel->setObjectName(QString::fromUtf8("comboBox_VarExpPatSeqPatBitDepthSel"));

        horizontalLayout_49->addWidget(comboBox_VarExpPatSeqPatBitDepthSel);

        horizontalSpacer_29 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_49->addItem(horizontalSpacer_29);


        verticalLayout_51->addLayout(horizontalLayout_49);

        horizontalLayout_33 = new QHBoxLayout();
        horizontalLayout_33->setSpacing(6);
        horizontalLayout_33->setObjectName(QString::fromUtf8("horizontalLayout_33"));
        listWidget_VarExpPatSeqBitPlanes = new QListWidget(groupBox_VarExpPatSeqSel);
        new QListWidgetItem(listWidget_VarExpPatSeqBitPlanes);
        new QListWidgetItem(listWidget_VarExpPatSeqBitPlanes);
        new QListWidgetItem(listWidget_VarExpPatSeqBitPlanes);
        new QListWidgetItem(listWidget_VarExpPatSeqBitPlanes);
        new QListWidgetItem(listWidget_VarExpPatSeqBitPlanes);
        new QListWidgetItem(listWidget_VarExpPatSeqBitPlanes);
        new QListWidgetItem(listWidget_VarExpPatSeqBitPlanes);
        new QListWidgetItem(listWidget_VarExpPatSeqBitPlanes);
        new QListWidgetItem(listWidget_VarExpPatSeqBitPlanes);
        new QListWidgetItem(listWidget_VarExpPatSeqBitPlanes);
        new QListWidgetItem(listWidget_VarExpPatSeqBitPlanes);
        new QListWidgetItem(listWidget_VarExpPatSeqBitPlanes);
        new QListWidgetItem(listWidget_VarExpPatSeqBitPlanes);
        new QListWidgetItem(listWidget_VarExpPatSeqBitPlanes);
        new QListWidgetItem(listWidget_VarExpPatSeqBitPlanes);
        new QListWidgetItem(listWidget_VarExpPatSeqBitPlanes);
        new QListWidgetItem(listWidget_VarExpPatSeqBitPlanes);
        new QListWidgetItem(listWidget_VarExpPatSeqBitPlanes);
        new QListWidgetItem(listWidget_VarExpPatSeqBitPlanes);
        new QListWidgetItem(listWidget_VarExpPatSeqBitPlanes);
        new QListWidgetItem(listWidget_VarExpPatSeqBitPlanes);
        new QListWidgetItem(listWidget_VarExpPatSeqBitPlanes);
        new QListWidgetItem(listWidget_VarExpPatSeqBitPlanes);
        new QListWidgetItem(listWidget_VarExpPatSeqBitPlanes);
        listWidget_VarExpPatSeqBitPlanes->setObjectName(QString::fromUtf8("listWidget_VarExpPatSeqBitPlanes"));
        sizePolicy5.setHeightForWidth(listWidget_VarExpPatSeqBitPlanes->sizePolicy().hasHeightForWidth());
        listWidget_VarExpPatSeqBitPlanes->setSizePolicy(sizePolicy5);
        listWidget_VarExpPatSeqBitPlanes->setMinimumSize(QSize(465, 0));
        listWidget_VarExpPatSeqBitPlanes->setMaximumSize(QSize(1655555, 35));
        listWidget_VarExpPatSeqBitPlanes->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 170, 170);\n"
"alternate-background-color: rgb(210, 210, 210);"));
        listWidget_VarExpPatSeqBitPlanes->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget_VarExpPatSeqBitPlanes->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget_VarExpPatSeqBitPlanes->setAlternatingRowColors(true);
        listWidget_VarExpPatSeqBitPlanes->setSelectionMode(QAbstractItemView::MultiSelection);
        listWidget_VarExpPatSeqBitPlanes->setFlow(QListView::LeftToRight);
        listWidget_VarExpPatSeqBitPlanes->setViewMode(QListView::ListMode);
        listWidget_VarExpPatSeqBitPlanes->setModelColumn(0);

        horizontalLayout_33->addWidget(listWidget_VarExpPatSeqBitPlanes);


        verticalLayout_51->addLayout(horizontalLayout_33);

        horizontalLayout_48 = new QHBoxLayout();
        horizontalLayout_48->setSpacing(2);
        horizontalLayout_48->setObjectName(QString::fromUtf8("horizontalLayout_48"));
        label_VarExpPatSeqPatExpTime = new QLabel(groupBox_VarExpPatSeqSel);
        label_VarExpPatSeqPatExpTime->setObjectName(QString::fromUtf8("label_VarExpPatSeqPatExpTime"));

        horizontalLayout_48->addWidget(label_VarExpPatSeqPatExpTime);

        lineEdit_VarExpPatSeqPatExpTime = new QLineEdit(groupBox_VarExpPatSeqSel);
        lineEdit_VarExpPatSeqPatExpTime->setObjectName(QString::fromUtf8("lineEdit_VarExpPatSeqPatExpTime"));
        sizePolicy2.setHeightForWidth(lineEdit_VarExpPatSeqPatExpTime->sizePolicy().hasHeightForWidth());
        lineEdit_VarExpPatSeqPatExpTime->setSizePolicy(sizePolicy2);
        lineEdit_VarExpPatSeqPatExpTime->setFrame(true);

        horizontalLayout_48->addWidget(lineEdit_VarExpPatSeqPatExpTime);

        horizontalSpacer_30 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_48->addItem(horizontalSpacer_30);

        label_VarExpPatSeqPatPeriod = new QLabel(groupBox_VarExpPatSeqSel);
        label_VarExpPatSeqPatPeriod->setObjectName(QString::fromUtf8("label_VarExpPatSeqPatPeriod"));

        horizontalLayout_48->addWidget(label_VarExpPatSeqPatPeriod);

        lineEdit_VarExpPatSeqPatPeriod = new QLineEdit(groupBox_VarExpPatSeqSel);
        lineEdit_VarExpPatSeqPatPeriod->setObjectName(QString::fromUtf8("lineEdit_VarExpPatSeqPatPeriod"));
        sizePolicy2.setHeightForWidth(lineEdit_VarExpPatSeqPatPeriod->sizePolicy().hasHeightForWidth());
        lineEdit_VarExpPatSeqPatPeriod->setSizePolicy(sizePolicy2);

        horizontalLayout_48->addWidget(lineEdit_VarExpPatSeqPatPeriod);

        horizontalSpacer_31 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_48->addItem(horizontalSpacer_31);


        verticalLayout_51->addLayout(horizontalLayout_48);

        horizontalLayout_50 = new QHBoxLayout();
        horizontalLayout_50->setSpacing(2);
        horizontalLayout_50->setObjectName(QString::fromUtf8("horizontalLayout_50"));
        checkBox_VarExpPatSeqInvPatData = new QCheckBox(groupBox_VarExpPatSeqSel);
        checkBox_VarExpPatSeqInvPatData->setObjectName(QString::fromUtf8("checkBox_VarExpPatSeqInvPatData"));

        horizontalLayout_50->addWidget(checkBox_VarExpPatSeqInvPatData);

        checkBox_VarExpPatSeqInsBlackPat = new QCheckBox(groupBox_VarExpPatSeqSel);
        checkBox_VarExpPatSeqInsBlackPat->setObjectName(QString::fromUtf8("checkBox_VarExpPatSeqInsBlackPat"));
        checkBox_VarExpPatSeqInsBlackPat->setChecked(true);

        horizontalLayout_50->addWidget(checkBox_VarExpPatSeqInsBlackPat);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_50->addItem(horizontalSpacer_5);

        pushButton_VarExpPatSeqAddPatToLut = new QPushButton(groupBox_VarExpPatSeqSel);
        pushButton_VarExpPatSeqAddPatToLut->setObjectName(QString::fromUtf8("pushButton_VarExpPatSeqAddPatToLut"));

        horizontalLayout_50->addWidget(pushButton_VarExpPatSeqAddPatToLut);

        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_50->addItem(horizontalSpacer_19);


        verticalLayout_51->addLayout(horizontalLayout_50);

        seqGroupBox_4 = new QGroupBox(groupBox_VarExpPatSeqSel);
        seqGroupBox_4->setObjectName(QString::fromUtf8("seqGroupBox_4"));
        sizePolicy.setHeightForWidth(seqGroupBox_4->sizePolicy().hasHeightForWidth());
        seqGroupBox_4->setSizePolicy(sizePolicy);
        seqGroupBox_4->setMinimumSize(QSize(0, 0));
        horizontalLayout_51 = new QHBoxLayout(seqGroupBox_4);
        horizontalLayout_51->setSpacing(2);
        horizontalLayout_51->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_51->setObjectName(QString::fromUtf8("horizontalLayout_51"));
        horizontalLayout_51->setContentsMargins(5, 5, 5, 5);
        listWidget_VarExpPatSeqLUT = new QListWidget(seqGroupBox_4);
        listWidget_VarExpPatSeqLUT->setObjectName(QString::fromUtf8("listWidget_VarExpPatSeqLUT"));
        sizePolicy1.setHeightForWidth(listWidget_VarExpPatSeqLUT->sizePolicy().hasHeightForWidth());
        listWidget_VarExpPatSeqLUT->setSizePolicy(sizePolicy1);
        listWidget_VarExpPatSeqLUT->setMinimumSize(QSize(0, 0));
        listWidget_VarExpPatSeqLUT->setMaximumSize(QSize(16777215, 16777215));
        listWidget_VarExpPatSeqLUT->setFont(font1);
        listWidget_VarExpPatSeqLUT->setContextMenuPolicy(Qt::CustomContextMenu);
        listWidget_VarExpPatSeqLUT->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        listWidget_VarExpPatSeqLUT->setAlternatingRowColors(false);
        listWidget_VarExpPatSeqLUT->setSelectionMode(QAbstractItemView::SingleSelection);
        listWidget_VarExpPatSeqLUT->setTextElideMode(Qt::ElideMiddle);
        listWidget_VarExpPatSeqLUT->setFlow(QListView::LeftToRight);
        listWidget_VarExpPatSeqLUT->setSpacing(1);
        listWidget_VarExpPatSeqLUT->setViewMode(QListView::ListMode);
        listWidget_VarExpPatSeqLUT->setUniformItemSizes(false);
        listWidget_VarExpPatSeqLUT->setSelectionRectVisible(true);

        horizontalLayout_51->addWidget(listWidget_VarExpPatSeqLUT);

        verticalLayout_53 = new QVBoxLayout();
        verticalLayout_53->setSpacing(2);
        verticalLayout_53->setObjectName(QString::fromUtf8("verticalLayout_53"));
        pushButton_VarExpPatSeqSendLUT = new QPushButton(seqGroupBox_4);
        pushButton_VarExpPatSeqSendLUT->setObjectName(QString::fromUtf8("pushButton_VarExpPatSeqSendLUT"));

        verticalLayout_53->addWidget(pushButton_VarExpPatSeqSendLUT);

        pushButton_VarExpPatSeqReadLUTFrmHW = new QPushButton(seqGroupBox_4);
        pushButton_VarExpPatSeqReadLUTFrmHW->setObjectName(QString::fromUtf8("pushButton_VarExpPatSeqReadLUTFrmHW"));

        verticalLayout_53->addWidget(pushButton_VarExpPatSeqReadLUTFrmHW);

        pushButton_VarExpPatSeqClearLUTFrmGUI = new QPushButton(seqGroupBox_4);
        pushButton_VarExpPatSeqClearLUTFrmGUI->setObjectName(QString::fromUtf8("pushButton_VarExpPatSeqClearLUTFrmGUI"));

        verticalLayout_53->addWidget(pushButton_VarExpPatSeqClearLUTFrmGUI);

        horizontalLayout_52 = new QHBoxLayout();
        horizontalLayout_52->setSpacing(6);
        horizontalLayout_52->setObjectName(QString::fromUtf8("horizontalLayout_52"));
        radioButton_VarExpPatSeqDispRunOnce = new QRadioButton(seqGroupBox_4);
        radioButton_VarExpPatSeqDispRunOnce->setObjectName(QString::fromUtf8("radioButton_VarExpPatSeqDispRunOnce"));
        radioButton_VarExpPatSeqDispRunOnce->setMinimumSize(QSize(0, 17));
        radioButton_VarExpPatSeqDispRunOnce->setChecked(false);

        horizontalLayout_52->addWidget(radioButton_VarExpPatSeqDispRunOnce);

        radioButton_VarExpPatSeqDispRunContinuous = new QRadioButton(seqGroupBox_4);
        radioButton_VarExpPatSeqDispRunContinuous->setObjectName(QString::fromUtf8("radioButton_VarExpPatSeqDispRunContinuous"));
        radioButton_VarExpPatSeqDispRunContinuous->setMinimumSize(QSize(0, 17));
        radioButton_VarExpPatSeqDispRunContinuous->setChecked(true);

        horizontalLayout_52->addWidget(radioButton_VarExpPatSeqDispRunContinuous);


        verticalLayout_53->addLayout(horizontalLayout_52);

        verticalSpacer_16 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_53->addItem(verticalSpacer_16);


        horizontalLayout_51->addLayout(verticalLayout_53);

        horizontalLayout_51->setStretch(0, 5);
        horizontalLayout_51->setStretch(1, 2);

        verticalLayout_51->addWidget(seqGroupBox_4);


        verticalLayout_37->addWidget(groupBox_VarExpPatSeqSel);


        gridLayout_27->addLayout(verticalLayout_37, 0, 0, 1, 1);

        verticalLayout_33 = new QVBoxLayout();
        verticalLayout_33->setSpacing(6);
        verticalLayout_33->setObjectName(QString::fromUtf8("verticalLayout_33"));
        groupBox_VarExpPatSeqSourceAndTrigSel = new QGroupBox(tab_8);
        groupBox_VarExpPatSeqSourceAndTrigSel->setObjectName(QString::fromUtf8("groupBox_VarExpPatSeqSourceAndTrigSel"));
        verticalLayout_48 = new QVBoxLayout(groupBox_VarExpPatSeqSourceAndTrigSel);
        verticalLayout_48->setSpacing(2);
        verticalLayout_48->setContentsMargins(11, 11, 11, 11);
        verticalLayout_48->setObjectName(QString::fromUtf8("verticalLayout_48"));
        verticalLayout_48->setContentsMargins(5, 5, 5, 5);
        horizontalLayout_46 = new QHBoxLayout();
        horizontalLayout_46->setSpacing(6);
        horizontalLayout_46->setObjectName(QString::fromUtf8("horizontalLayout_46"));
        horizontalLayout_46->setSizeConstraint(QLayout::SetMinimumSize);
        groupBox_VarExpPatSeqPatSrc = new QGroupBox(groupBox_VarExpPatSeqSourceAndTrigSel);
        groupBox_VarExpPatSeqPatSrc->setObjectName(QString::fromUtf8("groupBox_VarExpPatSeqPatSrc"));
        sizePolicy.setHeightForWidth(groupBox_VarExpPatSeqPatSrc->sizePolicy().hasHeightForWidth());
        groupBox_VarExpPatSeqPatSrc->setSizePolicy(sizePolicy);
        gridLayout_18 = new QGridLayout(groupBox_VarExpPatSeqPatSrc);
        gridLayout_18->setSpacing(2);
        gridLayout_18->setContentsMargins(11, 11, 11, 11);
        gridLayout_18->setObjectName(QString::fromUtf8("gridLayout_18"));
        gridLayout_18->setContentsMargins(5, 5, 5, 5);
        radioButton_VarExpPatSeqSrcFrmFlash = new QRadioButton(groupBox_VarExpPatSeqPatSrc);
        radioButton_VarExpPatSeqSrcFrmFlash->setObjectName(QString::fromUtf8("radioButton_VarExpPatSeqSrcFrmFlash"));
        radioButton_VarExpPatSeqSrcFrmFlash->setChecked(true);

        gridLayout_18->addWidget(radioButton_VarExpPatSeqSrcFrmFlash, 0, 0, 1, 1);

        radioButton_VarExpPatSeqSrcFrmVideoPort = new QRadioButton(groupBox_VarExpPatSeqPatSrc);
        radioButton_VarExpPatSeqSrcFrmVideoPort->setObjectName(QString::fromUtf8("radioButton_VarExpPatSeqSrcFrmVideoPort"));

        gridLayout_18->addWidget(radioButton_VarExpPatSeqSrcFrmVideoPort, 1, 0, 1, 1);


        horizontalLayout_46->addWidget(groupBox_VarExpPatSeqPatSrc);

        groupBox_VarExpPatSeqTrigMode = new QGroupBox(groupBox_VarExpPatSeqSourceAndTrigSel);
        groupBox_VarExpPatSeqTrigMode->setObjectName(QString::fromUtf8("groupBox_VarExpPatSeqTrigMode"));
        sizePolicy.setHeightForWidth(groupBox_VarExpPatSeqTrigMode->sizePolicy().hasHeightForWidth());
        groupBox_VarExpPatSeqTrigMode->setSizePolicy(sizePolicy);
        verticalLayout_49 = new QVBoxLayout(groupBox_VarExpPatSeqTrigMode);
        verticalLayout_49->setSpacing(2);
        verticalLayout_49->setContentsMargins(11, 11, 11, 11);
        verticalLayout_49->setObjectName(QString::fromUtf8("verticalLayout_49"));
        verticalLayout_49->setContentsMargins(5, 5, 5, 5);
        radioButton_VarExpPatSeqTrigTypeIntExt = new QRadioButton(groupBox_VarExpPatSeqTrigMode);
        radioButton_VarExpPatSeqTrigTypeIntExt->setObjectName(QString::fromUtf8("radioButton_VarExpPatSeqTrigTypeIntExt"));
        radioButton_VarExpPatSeqTrigTypeIntExt->setChecked(true);
        radioButton_VarExpPatSeqTrigTypeIntExt->setAutoExclusive(true);

        verticalLayout_49->addWidget(radioButton_VarExpPatSeqTrigTypeIntExt);

        radioButton_VarExpPatSeqTrigTypeVSync = new QRadioButton(groupBox_VarExpPatSeqTrigMode);
        radioButton_VarExpPatSeqTrigTypeVSync->setObjectName(QString::fromUtf8("radioButton_VarExpPatSeqTrigTypeVSync"));
        radioButton_VarExpPatSeqTrigTypeVSync->setAutoExclusive(true);

        verticalLayout_49->addWidget(radioButton_VarExpPatSeqTrigTypeVSync);


        horizontalLayout_46->addWidget(groupBox_VarExpPatSeqTrigMode);


        verticalLayout_48->addLayout(horizontalLayout_46);

        label_VarExpPatSeqNote = new QLabel(groupBox_VarExpPatSeqSourceAndTrigSel);
        label_VarExpPatSeqNote->setObjectName(QString::fromUtf8("label_VarExpPatSeqNote"));
        label_VarExpPatSeqNote->setWordWrap(true);

        verticalLayout_48->addWidget(label_VarExpPatSeqNote);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_48->addItem(verticalSpacer_6);


        verticalLayout_33->addWidget(groupBox_VarExpPatSeqSourceAndTrigSel);


        gridLayout_27->addLayout(verticalLayout_33, 0, 1, 1, 1);

        tabWidget_2->addTab(tab_8, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        formLayout_14 = new QFormLayout(tab);
        formLayout_14->setSpacing(6);
        formLayout_14->setContentsMargins(11, 11, 11, 11);
        formLayout_14->setObjectName(QString::fromUtf8("formLayout_14"));
        groupBox_PatSeqCtrl = new QGroupBox(tab);
        groupBox_PatSeqCtrl->setObjectName(QString::fromUtf8("groupBox_PatSeqCtrl"));
        sizePolicy.setHeightForWidth(groupBox_PatSeqCtrl->sizePolicy().hasHeightForWidth());
        groupBox_PatSeqCtrl->setSizePolicy(sizePolicy);
        gridLayout_26 = new QGridLayout(groupBox_PatSeqCtrl);
        gridLayout_26->setSpacing(6);
        gridLayout_26->setContentsMargins(11, 11, 11, 11);
        gridLayout_26->setObjectName(QString::fromUtf8("gridLayout_26"));
        gridLayout_26->setContentsMargins(5, 5, 5, 5);
        formLayout_5 = new QFormLayout();
        formLayout_5->setSpacing(6);
        formLayout_5->setObjectName(QString::fromUtf8("formLayout_5"));
        formLayout_5->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_5->setHorizontalSpacing(2);
        formLayout_5->setVerticalSpacing(2);
        pushButton_PatSeqValIndExpOOR = new QPushButton(groupBox_PatSeqCtrl);
        pushButton_PatSeqValIndExpOOR->setObjectName(QString::fromUtf8("pushButton_PatSeqValIndExpOOR"));
        pushButton_PatSeqValIndExpOOR->setEnabled(false);
        pushButton_PatSeqValIndExpOOR->setAcceptDrops(false);
        pushButton_PatSeqValIndExpOOR->setIcon(icon3);

        formLayout_5->setWidget(0, QFormLayout::LabelRole, pushButton_PatSeqValIndExpOOR);

        label_PatSeqValIndExpOOR = new QLabel(groupBox_PatSeqCtrl);
        label_PatSeqValIndExpOOR->setObjectName(QString::fromUtf8("label_PatSeqValIndExpOOR"));

        formLayout_5->setWidget(0, QFormLayout::FieldRole, label_PatSeqValIndExpOOR);

        pushButton_PatSeqValIndPatNumOOR = new QPushButton(groupBox_PatSeqCtrl);
        pushButton_PatSeqValIndPatNumOOR->setObjectName(QString::fromUtf8("pushButton_PatSeqValIndPatNumOOR"));
        pushButton_PatSeqValIndPatNumOOR->setEnabled(false);
        pushButton_PatSeqValIndPatNumOOR->setAcceptDrops(false);
        pushButton_PatSeqValIndPatNumOOR->setIcon(icon3);

        formLayout_5->setWidget(1, QFormLayout::LabelRole, pushButton_PatSeqValIndPatNumOOR);

        label_PatSeqValIndPatNumOOR = new QLabel(groupBox_PatSeqCtrl);
        label_PatSeqValIndPatNumOOR->setObjectName(QString::fromUtf8("label_PatSeqValIndPatNumOOR"));

        formLayout_5->setWidget(1, QFormLayout::FieldRole, label_PatSeqValIndPatNumOOR);

        pushButton_PatSeqValIndTrigOutOverlap = new QPushButton(groupBox_PatSeqCtrl);
        pushButton_PatSeqValIndTrigOutOverlap->setObjectName(QString::fromUtf8("pushButton_PatSeqValIndTrigOutOverlap"));
        pushButton_PatSeqValIndTrigOutOverlap->setEnabled(false);
        pushButton_PatSeqValIndTrigOutOverlap->setAcceptDrops(false);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("../../../temp_files/LightCrafter4500_GUI_2.0_Source/GUI/Icons/Led_Y.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_PatSeqValIndTrigOutOverlap->setIcon(icon5);

        formLayout_5->setWidget(2, QFormLayout::LabelRole, pushButton_PatSeqValIndTrigOutOverlap);

        label_PatSeqValIndTrigOutOverlap = new QLabel(groupBox_PatSeqCtrl);
        label_PatSeqValIndTrigOutOverlap->setObjectName(QString::fromUtf8("label_PatSeqValIndTrigOutOverlap"));

        formLayout_5->setWidget(2, QFormLayout::FieldRole, label_PatSeqValIndTrigOutOverlap);

        pushButton_PatSeqValIndBlkVecMiss = new QPushButton(groupBox_PatSeqCtrl);
        pushButton_PatSeqValIndBlkVecMiss->setObjectName(QString::fromUtf8("pushButton_PatSeqValIndBlkVecMiss"));
        pushButton_PatSeqValIndBlkVecMiss->setEnabled(false);
        pushButton_PatSeqValIndBlkVecMiss->setAcceptDrops(false);
        pushButton_PatSeqValIndBlkVecMiss->setIcon(icon4);

        formLayout_5->setWidget(3, QFormLayout::LabelRole, pushButton_PatSeqValIndBlkVecMiss);

        label_PatSeqValIndBlkVecMiss = new QLabel(groupBox_PatSeqCtrl);
        label_PatSeqValIndBlkVecMiss->setObjectName(QString::fromUtf8("label_PatSeqValIndBlkVecMiss"));

        formLayout_5->setWidget(3, QFormLayout::FieldRole, label_PatSeqValIndBlkVecMiss);

        pushButton_PatSeqValPatPeriodShort = new QPushButton(groupBox_PatSeqCtrl);
        pushButton_PatSeqValPatPeriodShort->setObjectName(QString::fromUtf8("pushButton_PatSeqValPatPeriodShort"));
        pushButton_PatSeqValPatPeriodShort->setEnabled(false);
        pushButton_PatSeqValPatPeriodShort->setAcceptDrops(false);
        pushButton_PatSeqValPatPeriodShort->setIcon(icon4);

        formLayout_5->setWidget(4, QFormLayout::LabelRole, pushButton_PatSeqValPatPeriodShort);

        label_PatSeqValPatPeriodShort = new QLabel(groupBox_PatSeqCtrl);
        label_PatSeqValPatPeriodShort->setObjectName(QString::fromUtf8("label_PatSeqValPatPeriodShort"));

        formLayout_5->setWidget(4, QFormLayout::FieldRole, label_PatSeqValPatPeriodShort);

        label_PatSeqValStatus = new QLabel(groupBox_PatSeqCtrl);
        label_PatSeqValStatus->setObjectName(QString::fromUtf8("label_PatSeqValStatus"));

        formLayout_5->setWidget(5, QFormLayout::FieldRole, label_PatSeqValStatus);

        pushButton_PatSeqValStatus = new QPushButton(groupBox_PatSeqCtrl);
        pushButton_PatSeqValStatus->setObjectName(QString::fromUtf8("pushButton_PatSeqValStatus"));
        pushButton_PatSeqValStatus->setEnabled(false);
        pushButton_PatSeqValStatus->setAcceptDrops(false);
        pushButton_PatSeqValStatus->setIcon(icon1);

        formLayout_5->setWidget(5, QFormLayout::LabelRole, pushButton_PatSeqValStatus);


        gridLayout_26->addLayout(formLayout_5, 0, 0, 1, 1);

        pushButton_ValidatePatSeq = new QPushButton(groupBox_PatSeqCtrl);
        pushButton_ValidatePatSeq->setObjectName(QString::fromUtf8("pushButton_ValidatePatSeq"));

        gridLayout_26->addWidget(pushButton_ValidatePatSeq, 1, 0, 1, 1);

        horizontalLayout_38 = new QHBoxLayout();
        horizontalLayout_38->setSpacing(6);
        horizontalLayout_38->setObjectName(QString::fromUtf8("horizontalLayout_38"));
        pushButton_PatSeqCtrlStart = new QPushButton(groupBox_PatSeqCtrl);
        pushButton_PatSeqCtrlStart->setObjectName(QString::fromUtf8("pushButton_PatSeqCtrlStart"));

        horizontalLayout_38->addWidget(pushButton_PatSeqCtrlStart);

        pushButton_PatSeqCtrlPause = new QPushButton(groupBox_PatSeqCtrl);
        pushButton_PatSeqCtrlPause->setObjectName(QString::fromUtf8("pushButton_PatSeqCtrlPause"));

        horizontalLayout_38->addWidget(pushButton_PatSeqCtrlPause);

        pushButton_PatSeqCtrlStop = new QPushButton(groupBox_PatSeqCtrl);
        pushButton_PatSeqCtrlStop->setObjectName(QString::fromUtf8("pushButton_PatSeqCtrlStop"));

        horizontalLayout_38->addWidget(pushButton_PatSeqCtrlStop);


        gridLayout_26->addLayout(horizontalLayout_38, 2, 0, 1, 1);

        horizontalLayout_35 = new QHBoxLayout();
        horizontalLayout_35->setSpacing(6);
        horizontalLayout_35->setObjectName(QString::fromUtf8("horizontalLayout_35"));
        checkBox_PatSeqCtrlGlobalDataInvert = new QCheckBox(groupBox_PatSeqCtrl);
        checkBox_PatSeqCtrlGlobalDataInvert->setObjectName(QString::fromUtf8("checkBox_PatSeqCtrlGlobalDataInvert"));

        horizontalLayout_35->addWidget(checkBox_PatSeqCtrlGlobalDataInvert);

        horizontalSpacer_32 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_35->addItem(horizontalSpacer_32);


        gridLayout_26->addLayout(horizontalLayout_35, 3, 0, 1, 1);


        formLayout_14->setWidget(0, QFormLayout::LabelRole, groupBox_PatSeqCtrl);

        tabWidget_2->addTab(tab, QString());
        tab_img_load_timing = new QWidget();
        tab_img_load_timing->setObjectName(QString::fromUtf8("tab_img_load_timing"));
        gridLayout_13 = new QGridLayout(tab_img_load_timing);
        gridLayout_13->setSpacing(6);
        gridLayout_13->setContentsMargins(11, 11, 11, 11);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        groupBox_ImgLoadTiming = new QGroupBox(tab_img_load_timing);
        groupBox_ImgLoadTiming->setObjectName(QString::fromUtf8("groupBox_ImgLoadTiming"));
        gridLayout_28 = new QGridLayout(groupBox_ImgLoadTiming);
        gridLayout_28->setSpacing(6);
        gridLayout_28->setContentsMargins(11, 11, 11, 11);
        gridLayout_28->setObjectName(QString::fromUtf8("gridLayout_28"));
        horizontalLayout_40 = new QHBoxLayout();
        horizontalLayout_40->setSpacing(6);
        horizontalLayout_40->setObjectName(QString::fromUtf8("horizontalLayout_40"));
        label_ImgLdTmImgIndex = new QLabel(groupBox_ImgLoadTiming);
        label_ImgLdTmImgIndex->setObjectName(QString::fromUtf8("label_ImgLdTmImgIndex"));

        horizontalLayout_40->addWidget(label_ImgLdTmImgIndex);

        spinBox_ImgLdTmImgIndex = new QSpinBox(groupBox_ImgLoadTiming);
        spinBox_ImgLdTmImgIndex->setObjectName(QString::fromUtf8("spinBox_ImgLdTmImgIndex"));
        spinBox_ImgLdTmImgIndex->setMaximum(63);

        horizontalLayout_40->addWidget(spinBox_ImgLdTmImgIndex);

        pushButton_GetImgLoadTimingInfo = new QPushButton(groupBox_ImgLoadTiming);
        pushButton_GetImgLoadTimingInfo->setObjectName(QString::fromUtf8("pushButton_GetImgLoadTimingInfo"));

        horizontalLayout_40->addWidget(pushButton_GetImgLoadTimingInfo);


        gridLayout_28->addLayout(horizontalLayout_40, 0, 0, 1, 1);

        horizontalLayout_31 = new QHBoxLayout();
        horizontalLayout_31->setSpacing(6);
        horizontalLayout_31->setObjectName(QString::fromUtf8("horizontalLayout_31"));
        lineEdit_ImgLoadTmInMs = new QLineEdit(groupBox_ImgLoadTiming);
        lineEdit_ImgLoadTmInMs->setObjectName(QString::fromUtf8("lineEdit_ImgLoadTmInMs"));

        horizontalLayout_31->addWidget(lineEdit_ImgLoadTmInMs);

        label_ImgLdTmInMs = new QLabel(groupBox_ImgLoadTiming);
        label_ImgLdTmInMs->setObjectName(QString::fromUtf8("label_ImgLdTmInMs"));

        horizontalLayout_31->addWidget(label_ImgLdTmInMs);


        gridLayout_28->addLayout(horizontalLayout_31, 1, 0, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_28->addItem(horizontalSpacer_7, 0, 1, 1, 1);


        verticalLayout_4->addWidget(groupBox_ImgLoadTiming);


        gridLayout_13->addLayout(verticalLayout_4, 0, 0, 1, 1);

        verticalSpacer_18 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_13->addItem(verticalSpacer_18, 2, 0, 1, 1);

        verticalLayout_34 = new QVBoxLayout();
        verticalLayout_34->setSpacing(6);
        verticalLayout_34->setObjectName(QString::fromUtf8("verticalLayout_34"));
        label_ImgLdTmNote1 = new QLabel(tab_img_load_timing);
        label_ImgLdTmNote1->setObjectName(QString::fromUtf8("label_ImgLdTmNote1"));

        verticalLayout_34->addWidget(label_ImgLdTmNote1);

        label_ImgLdTmNote2 = new QLabel(tab_img_load_timing);
        label_ImgLdTmNote2->setObjectName(QString::fromUtf8("label_ImgLdTmNote2"));

        verticalLayout_34->addWidget(label_ImgLdTmNote2);


        gridLayout_13->addLayout(verticalLayout_34, 1, 0, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_13->addItem(horizontalSpacer_8, 1, 1, 1, 1);

        tabWidget_2->addTab(tab_img_load_timing, QString());
        tab_pat_seq_trig_ctrl = new QWidget();
        tab_pat_seq_trig_ctrl->setObjectName(QString::fromUtf8("tab_pat_seq_trig_ctrl"));
        formLayout_15 = new QFormLayout(tab_pat_seq_trig_ctrl);
        formLayout_15->setSpacing(6);
        formLayout_15->setContentsMargins(11, 11, 11, 11);
        formLayout_15->setObjectName(QString::fromUtf8("formLayout_15"));
        formLayout_15->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        gridLayout_21 = new QGridLayout();
        gridLayout_21->setSpacing(2);
        gridLayout_21->setObjectName(QString::fromUtf8("gridLayout_21"));
        horizontalSlider_Trig1OutFDly = new QSlider(tab_pat_seq_trig_ctrl);
        horizontalSlider_Trig1OutFDly->setObjectName(QString::fromUtf8("horizontalSlider_Trig1OutFDly"));
        horizontalSlider_Trig1OutFDly->setMaximum(255);
        horizontalSlider_Trig1OutFDly->setValue(187);
        horizontalSlider_Trig1OutFDly->setOrientation(Qt::Horizontal);

        gridLayout_21->addWidget(horizontalSlider_Trig1OutFDly, 4, 2, 1, 1);

        label_TrigOut1FDly = new QLabel(tab_pat_seq_trig_ctrl);
        label_TrigOut1FDly->setObjectName(QString::fromUtf8("label_TrigOut1FDly"));
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        QBrush brush2(QColor(236, 233, 216, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        label_TrigOut1FDly->setPalette(palette);

        gridLayout_21->addWidget(label_TrigOut1FDly, 4, 0, 1, 1);

        label_Trig1OutFDlyVal = new QLabel(tab_pat_seq_trig_ctrl);
        label_Trig1OutFDlyVal->setObjectName(QString::fromUtf8("label_Trig1OutFDlyVal"));
        label_Trig1OutFDlyVal->setMinimumSize(QSize(60, 0));
        label_Trig1OutFDlyVal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_21->addWidget(label_Trig1OutFDlyVal, 4, 3, 1, 1, Qt::AlignRight);

        label_Trig2OutRDlyVal = new QLabel(tab_pat_seq_trig_ctrl);
        label_Trig2OutRDlyVal->setObjectName(QString::fromUtf8("label_Trig2OutRDlyVal"));
        label_Trig2OutRDlyVal->setMinimumSize(QSize(60, 0));
        label_Trig2OutRDlyVal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_21->addWidget(label_Trig2OutRDlyVal, 6, 3, 1, 1, Qt::AlignRight);

        checkBox_InvertTrig2Out = new QCheckBox(tab_pat_seq_trig_ctrl);
        checkBox_InvertTrig2Out->setObjectName(QString::fromUtf8("checkBox_InvertTrig2Out"));

        gridLayout_21->addWidget(checkBox_InvertTrig2Out, 6, 4, 1, 1);

        label_TrigOut2PulsePerNumPat = new QLabel(tab_pat_seq_trig_ctrl);
        label_TrigOut2PulsePerNumPat->setObjectName(QString::fromUtf8("label_TrigOut2PulsePerNumPat"));

        gridLayout_21->addWidget(label_TrigOut2PulsePerNumPat, 7, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        pushButton_GetTrigConfig = new QPushButton(tab_pat_seq_trig_ctrl);
        pushButton_GetTrigConfig->setObjectName(QString::fromUtf8("pushButton_GetTrigConfig"));

        horizontalLayout_5->addWidget(pushButton_GetTrigConfig);

        pushButton_SetTrigConfig = new QPushButton(tab_pat_seq_trig_ctrl);
        pushButton_SetTrigConfig->setObjectName(QString::fromUtf8("pushButton_SetTrigConfig"));

        horizontalLayout_5->addWidget(pushButton_SetTrigConfig);


        gridLayout_21->addLayout(horizontalLayout_5, 8, 2, 1, 1);

        spinBox_TrigOut2PulsePerNumPat = new QSpinBox(tab_pat_seq_trig_ctrl);
        spinBox_TrigOut2PulsePerNumPat->setObjectName(QString::fromUtf8("spinBox_TrigOut2PulsePerNumPat"));
        spinBox_TrigOut2PulsePerNumPat->setMinimum(1);
        spinBox_TrigOut2PulsePerNumPat->setMaximum(128);

        gridLayout_21->addWidget(spinBox_TrigOut2PulsePerNumPat, 7, 1, 1, 1);

        label_TrigOut2RDly = new QLabel(tab_pat_seq_trig_ctrl);
        label_TrigOut2RDly->setObjectName(QString::fromUtf8("label_TrigOut2RDly"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Button, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush);
        label_TrigOut2RDly->setPalette(palette1);

        gridLayout_21->addWidget(label_TrigOut2RDly, 6, 0, 1, 1);

        spinBox_Trig1OutFDly = new QSpinBox(tab_pat_seq_trig_ctrl);
        spinBox_Trig1OutFDly->setObjectName(QString::fromUtf8("spinBox_Trig1OutFDly"));
        spinBox_Trig1OutFDly->setMaximum(213);
        spinBox_Trig1OutFDly->setValue(187);

        gridLayout_21->addWidget(spinBox_Trig1OutFDly, 4, 1, 1, 1);

        verticalSpacer_26 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_21->addItem(verticalSpacer_26, 5, 0, 1, 1);

        spinBox_Trig2OutRDly = new QSpinBox(tab_pat_seq_trig_ctrl);
        spinBox_Trig2OutRDly->setObjectName(QString::fromUtf8("spinBox_Trig2OutRDly"));
        spinBox_Trig2OutRDly->setMaximum(255);
        spinBox_Trig2OutRDly->setValue(187);

        gridLayout_21->addWidget(spinBox_Trig2OutRDly, 6, 1, 1, 1);

        horizontalSlider_Trig2OutRDly = new QSlider(tab_pat_seq_trig_ctrl);
        horizontalSlider_Trig2OutRDly->setObjectName(QString::fromUtf8("horizontalSlider_Trig2OutRDly"));
        horizontalSlider_Trig2OutRDly->setMaximum(255);
        horizontalSlider_Trig2OutRDly->setValue(187);
        horizontalSlider_Trig2OutRDly->setOrientation(Qt::Horizontal);

        gridLayout_21->addWidget(horizontalSlider_Trig2OutRDly, 6, 2, 1, 1);

        spinBox_Trig1OutRDly = new QSpinBox(tab_pat_seq_trig_ctrl);
        spinBox_Trig1OutRDly->setObjectName(QString::fromUtf8("spinBox_Trig1OutRDly"));
        spinBox_Trig1OutRDly->setMaximum(213);
        spinBox_Trig1OutRDly->setValue(187);

        gridLayout_21->addWidget(spinBox_Trig1OutRDly, 3, 1, 1, 1);

        label_TrigIn1 = new QLabel(tab_pat_seq_trig_ctrl);
        label_TrigIn1->setObjectName(QString::fromUtf8("label_TrigIn1"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Button, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush);
        label_TrigIn1->setPalette(palette2);

        gridLayout_21->addWidget(label_TrigIn1, 0, 0, 1, 1);

        label_TrigOut1RDly = new QLabel(tab_pat_seq_trig_ctrl);
        label_TrigOut1RDly->setObjectName(QString::fromUtf8("label_TrigOut1RDly"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Button, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush);
        label_TrigOut1RDly->setPalette(palette3);

        gridLayout_21->addWidget(label_TrigOut1RDly, 3, 0, 1, 1);

        label_TrigIn2Pol = new QLabel(tab_pat_seq_trig_ctrl);
        label_TrigIn2Pol->setObjectName(QString::fromUtf8("label_TrigIn2Pol"));

        gridLayout_21->addWidget(label_TrigIn2Pol, 1, 0, 1, 1);

        label_TrigIn1Value = new QLabel(tab_pat_seq_trig_ctrl);
        label_TrigIn1Value->setObjectName(QString::fromUtf8("label_TrigIn1Value"));
        label_TrigIn1Value->setMinimumSize(QSize(60, 0));
        label_TrigIn1Value->setLayoutDirection(Qt::LeftToRight);
        label_TrigIn1Value->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_21->addWidget(label_TrigIn1Value, 0, 3, 1, 1, Qt::AlignRight);

        checkBox_InvertTrig1Out = new QCheckBox(tab_pat_seq_trig_ctrl);
        checkBox_InvertTrig1Out->setObjectName(QString::fromUtf8("checkBox_InvertTrig1Out"));

        gridLayout_21->addWidget(checkBox_InvertTrig1Out, 3, 4, 1, 1);

        label_Trig1OutRDlyVal = new QLabel(tab_pat_seq_trig_ctrl);
        label_Trig1OutRDlyVal->setObjectName(QString::fromUtf8("label_Trig1OutRDlyVal"));
        label_Trig1OutRDlyVal->setMinimumSize(QSize(60, 0));
        label_Trig1OutRDlyVal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_21->addWidget(label_Trig1OutRDlyVal, 3, 3, 1, 1, Qt::AlignRight);

        comboBox_TrigIn2Pol = new QComboBox(tab_pat_seq_trig_ctrl);
        comboBox_TrigIn2Pol->addItem(QString());
        comboBox_TrigIn2Pol->addItem(QString());
        comboBox_TrigIn2Pol->setObjectName(QString::fromUtf8("comboBox_TrigIn2Pol"));

        gridLayout_21->addWidget(comboBox_TrigIn2Pol, 1, 1, 1, 1);

        horizontalSlider_TrigIn1 = new QSlider(tab_pat_seq_trig_ctrl);
        horizontalSlider_TrigIn1->setObjectName(QString::fromUtf8("horizontalSlider_TrigIn1"));
        horizontalSlider_TrigIn1->setMinimumSize(QSize(250, 0));
        horizontalSlider_TrigIn1->setMaximum(262143);
        horizontalSlider_TrigIn1->setValue(0);
        horizontalSlider_TrigIn1->setOrientation(Qt::Horizontal);

        gridLayout_21->addWidget(horizontalSlider_TrigIn1, 0, 2, 1, 1);

        spinBox_TrigIn1 = new QSpinBox(tab_pat_seq_trig_ctrl);
        spinBox_TrigIn1->setObjectName(QString::fromUtf8("spinBox_TrigIn1"));
        spinBox_TrigIn1->setMaximum(262143);
        spinBox_TrigIn1->setValue(0);

        gridLayout_21->addWidget(spinBox_TrigIn1, 0, 1, 1, 1);

        label_TrigIn2PolDesc = new QLabel(tab_pat_seq_trig_ctrl);
        label_TrigIn2PolDesc->setObjectName(QString::fromUtf8("label_TrigIn2PolDesc"));

        gridLayout_21->addWidget(label_TrigIn2PolDesc, 1, 2, 1, 2);

        verticalSpacer_25 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_21->addItem(verticalSpacer_25, 2, 0, 1, 1);

        horizontalSlider_Trig1OutRDly = new QSlider(tab_pat_seq_trig_ctrl);
        horizontalSlider_Trig1OutRDly->setObjectName(QString::fromUtf8("horizontalSlider_Trig1OutRDly"));
        horizontalSlider_Trig1OutRDly->setMaximum(255);
        horizontalSlider_Trig1OutRDly->setValue(187);
        horizontalSlider_Trig1OutRDly->setOrientation(Qt::Horizontal);

        gridLayout_21->addWidget(horizontalSlider_Trig1OutRDly, 3, 2, 1, 1);


        formLayout_15->setLayout(0, QFormLayout::LabelRole, gridLayout_21);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout_15->setItem(0, QFormLayout::FieldRole, horizontalSpacer_15);

        textEdit_TriggerCtrlNote = new QTextEdit(tab_pat_seq_trig_ctrl);
        textEdit_TriggerCtrlNote->setObjectName(QString::fromUtf8("textEdit_TriggerCtrlNote"));
        textEdit_TriggerCtrlNote->setReadOnly(true);
        textEdit_TriggerCtrlNote->setTextInteractionFlags(Qt::NoTextInteraction);

        formLayout_15->setWidget(1, QFormLayout::LabelRole, textEdit_TriggerCtrlNote);

        tabWidget_2->addTab(tab_pat_seq_trig_ctrl, QString());
        tab_pat_seq_led_dly = new QWidget();
        tab_pat_seq_led_dly->setObjectName(QString::fromUtf8("tab_pat_seq_led_dly"));
        formLayout_16 = new QFormLayout(tab_pat_seq_led_dly);
        formLayout_16->setSpacing(6);
        formLayout_16->setContentsMargins(11, 11, 11, 11);
        formLayout_16->setObjectName(QString::fromUtf8("formLayout_16"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_27 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_3->addItem(verticalSpacer_27, 2, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        pushButton_GetLEDDlyCtrlConfig = new QPushButton(tab_pat_seq_led_dly);
        pushButton_GetLEDDlyCtrlConfig->setObjectName(QString::fromUtf8("pushButton_GetLEDDlyCtrlConfig"));

        horizontalLayout_7->addWidget(pushButton_GetLEDDlyCtrlConfig);

        pushButton_SetLedDlyCtrlConfig = new QPushButton(tab_pat_seq_led_dly);
        pushButton_SetLedDlyCtrlConfig->setObjectName(QString::fromUtf8("pushButton_SetLedDlyCtrlConfig"));

        horizontalLayout_7->addWidget(pushButton_SetLedDlyCtrlConfig);


        gridLayout_3->addLayout(horizontalLayout_7, 8, 2, 1, 1);

        label_LedDlyCtrlRedREdgeDlyVal = new QLabel(tab_pat_seq_led_dly);
        label_LedDlyCtrlRedREdgeDlyVal->setObjectName(QString::fromUtf8("label_LedDlyCtrlRedREdgeDlyVal"));
        label_LedDlyCtrlRedREdgeDlyVal->setMinimumSize(QSize(60, 0));
        label_LedDlyCtrlRedREdgeDlyVal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_LedDlyCtrlRedREdgeDlyVal, 0, 3, 1, 1, Qt::AlignRight);

        spinBox_LedDlyCtrlGreenREdgeDly = new QSpinBox(tab_pat_seq_led_dly);
        spinBox_LedDlyCtrlGreenREdgeDly->setObjectName(QString::fromUtf8("spinBox_LedDlyCtrlGreenREdgeDly"));
        spinBox_LedDlyCtrlGreenREdgeDly->setMaximum(255);
        spinBox_LedDlyCtrlGreenREdgeDly->setValue(187);

        gridLayout_3->addWidget(spinBox_LedDlyCtrlGreenREdgeDly, 3, 1, 1, 1);

        horizontalSlider_LedDlyCtrlBlueREdgeDly = new QSlider(tab_pat_seq_led_dly);
        horizontalSlider_LedDlyCtrlBlueREdgeDly->setObjectName(QString::fromUtf8("horizontalSlider_LedDlyCtrlBlueREdgeDly"));
        horizontalSlider_LedDlyCtrlBlueREdgeDly->setMaximum(255);
        horizontalSlider_LedDlyCtrlBlueREdgeDly->setValue(187);
        horizontalSlider_LedDlyCtrlBlueREdgeDly->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(horizontalSlider_LedDlyCtrlBlueREdgeDly, 6, 2, 1, 1);

        label_LedDlyCtrlBlueREdgeDlyVal = new QLabel(tab_pat_seq_led_dly);
        label_LedDlyCtrlBlueREdgeDlyVal->setObjectName(QString::fromUtf8("label_LedDlyCtrlBlueREdgeDlyVal"));
        label_LedDlyCtrlBlueREdgeDlyVal->setMinimumSize(QSize(60, 0));
        label_LedDlyCtrlBlueREdgeDlyVal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_LedDlyCtrlBlueREdgeDlyVal, 6, 3, 1, 1, Qt::AlignRight);

        label_LedDlyCtrlGreenREdgeDlyVal = new QLabel(tab_pat_seq_led_dly);
        label_LedDlyCtrlGreenREdgeDlyVal->setObjectName(QString::fromUtf8("label_LedDlyCtrlGreenREdgeDlyVal"));
        label_LedDlyCtrlGreenREdgeDlyVal->setMinimumSize(QSize(60, 0));
        label_LedDlyCtrlGreenREdgeDlyVal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_LedDlyCtrlGreenREdgeDlyVal, 3, 3, 1, 1, Qt::AlignRight);

        horizontalSlider_LedDlyCtrlGreenREdgeDly = new QSlider(tab_pat_seq_led_dly);
        horizontalSlider_LedDlyCtrlGreenREdgeDly->setObjectName(QString::fromUtf8("horizontalSlider_LedDlyCtrlGreenREdgeDly"));
        horizontalSlider_LedDlyCtrlGreenREdgeDly->setMaximum(255);
        horizontalSlider_LedDlyCtrlGreenREdgeDly->setValue(187);
        horizontalSlider_LedDlyCtrlGreenREdgeDly->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(horizontalSlider_LedDlyCtrlGreenREdgeDly, 3, 2, 1, 1);

        label_LedDlyCtrlRedFEdgeDlyVal = new QLabel(tab_pat_seq_led_dly);
        label_LedDlyCtrlRedFEdgeDlyVal->setObjectName(QString::fromUtf8("label_LedDlyCtrlRedFEdgeDlyVal"));
        label_LedDlyCtrlRedFEdgeDlyVal->setMinimumSize(QSize(60, 0));
        label_LedDlyCtrlRedFEdgeDlyVal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_LedDlyCtrlRedFEdgeDlyVal, 1, 3, 1, 1, Qt::AlignRight);

        label_LedDlyCtrlRedREdgeDly = new QLabel(tab_pat_seq_led_dly);
        label_LedDlyCtrlRedREdgeDly->setObjectName(QString::fromUtf8("label_LedDlyCtrlRedREdgeDly"));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Button, brush);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush);
        label_LedDlyCtrlRedREdgeDly->setPalette(palette4);

        gridLayout_3->addWidget(label_LedDlyCtrlRedREdgeDly, 0, 0, 1, 1);

        horizontalSlider_LedDlyCtrlBlueFEdgeDly = new QSlider(tab_pat_seq_led_dly);
        horizontalSlider_LedDlyCtrlBlueFEdgeDly->setObjectName(QString::fromUtf8("horizontalSlider_LedDlyCtrlBlueFEdgeDly"));
        horizontalSlider_LedDlyCtrlBlueFEdgeDly->setMaximum(255);
        horizontalSlider_LedDlyCtrlBlueFEdgeDly->setValue(187);
        horizontalSlider_LedDlyCtrlBlueFEdgeDly->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(horizontalSlider_LedDlyCtrlBlueFEdgeDly, 7, 2, 1, 1);

        spinBox_LedDlyCtrlGreenFEdgeDly = new QSpinBox(tab_pat_seq_led_dly);
        spinBox_LedDlyCtrlGreenFEdgeDly->setObjectName(QString::fromUtf8("spinBox_LedDlyCtrlGreenFEdgeDly"));
        spinBox_LedDlyCtrlGreenFEdgeDly->setMaximum(255);
        spinBox_LedDlyCtrlGreenFEdgeDly->setValue(187);

        gridLayout_3->addWidget(spinBox_LedDlyCtrlGreenFEdgeDly, 4, 1, 1, 1);

        label_LedDlyCtrlGreenREdgeDly = new QLabel(tab_pat_seq_led_dly);
        label_LedDlyCtrlGreenREdgeDly->setObjectName(QString::fromUtf8("label_LedDlyCtrlGreenREdgeDly"));
        label_LedDlyCtrlGreenREdgeDly->setMinimumSize(QSize(152, 0));

        gridLayout_3->addWidget(label_LedDlyCtrlGreenREdgeDly, 3, 0, 1, 1);

        spinBox_LedDlyCtrlBlueFEdgeDly = new QSpinBox(tab_pat_seq_led_dly);
        spinBox_LedDlyCtrlBlueFEdgeDly->setObjectName(QString::fromUtf8("spinBox_LedDlyCtrlBlueFEdgeDly"));
        spinBox_LedDlyCtrlBlueFEdgeDly->setMaximum(255);
        spinBox_LedDlyCtrlBlueFEdgeDly->setValue(187);

        gridLayout_3->addWidget(spinBox_LedDlyCtrlBlueFEdgeDly, 7, 1, 1, 1);

        label_LedDlyCtrlBlueFEdgeDly = new QLabel(tab_pat_seq_led_dly);
        label_LedDlyCtrlBlueFEdgeDly->setObjectName(QString::fromUtf8("label_LedDlyCtrlBlueFEdgeDly"));

        gridLayout_3->addWidget(label_LedDlyCtrlBlueFEdgeDly, 7, 0, 1, 1);

        spinBox_LedDlyCtrlBlueREdgeDly = new QSpinBox(tab_pat_seq_led_dly);
        spinBox_LedDlyCtrlBlueREdgeDly->setObjectName(QString::fromUtf8("spinBox_LedDlyCtrlBlueREdgeDly"));
        spinBox_LedDlyCtrlBlueREdgeDly->setMaximum(255);
        spinBox_LedDlyCtrlBlueREdgeDly->setValue(187);

        gridLayout_3->addWidget(spinBox_LedDlyCtrlBlueREdgeDly, 6, 1, 1, 1);

        spinBox_LedDlyCtrlRedREdgeDly = new QSpinBox(tab_pat_seq_led_dly);
        spinBox_LedDlyCtrlRedREdgeDly->setObjectName(QString::fromUtf8("spinBox_LedDlyCtrlRedREdgeDly"));
        spinBox_LedDlyCtrlRedREdgeDly->setMaximum(255);
        spinBox_LedDlyCtrlRedREdgeDly->setValue(187);

        gridLayout_3->addWidget(spinBox_LedDlyCtrlRedREdgeDly, 0, 1, 1, 1);

        label_LedDlyCtrlRedFEdgeDly = new QLabel(tab_pat_seq_led_dly);
        label_LedDlyCtrlRedFEdgeDly->setObjectName(QString::fromUtf8("label_LedDlyCtrlRedFEdgeDly"));

        gridLayout_3->addWidget(label_LedDlyCtrlRedFEdgeDly, 1, 0, 1, 1);

        label_LedDlyCtrlGreenFEdgeDlyVal = new QLabel(tab_pat_seq_led_dly);
        label_LedDlyCtrlGreenFEdgeDlyVal->setObjectName(QString::fromUtf8("label_LedDlyCtrlGreenFEdgeDlyVal"));
        label_LedDlyCtrlGreenFEdgeDlyVal->setMinimumSize(QSize(60, 0));
        label_LedDlyCtrlGreenFEdgeDlyVal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_LedDlyCtrlGreenFEdgeDlyVal, 4, 3, 1, 1, Qt::AlignRight);

        label_LedDlyCtrlBlueFEdgeDlyVal = new QLabel(tab_pat_seq_led_dly);
        label_LedDlyCtrlBlueFEdgeDlyVal->setObjectName(QString::fromUtf8("label_LedDlyCtrlBlueFEdgeDlyVal"));
        label_LedDlyCtrlBlueFEdgeDlyVal->setMinimumSize(QSize(60, 0));
        label_LedDlyCtrlBlueFEdgeDlyVal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_LedDlyCtrlBlueFEdgeDlyVal, 7, 3, 1, 1, Qt::AlignRight);

        horizontalSlider_LedDlyCtrlRedREdgeDly = new QSlider(tab_pat_seq_led_dly);
        horizontalSlider_LedDlyCtrlRedREdgeDly->setObjectName(QString::fromUtf8("horizontalSlider_LedDlyCtrlRedREdgeDly"));
        horizontalSlider_LedDlyCtrlRedREdgeDly->setMinimumSize(QSize(250, 0));
        horizontalSlider_LedDlyCtrlRedREdgeDly->setMaximum(255);
        horizontalSlider_LedDlyCtrlRedREdgeDly->setValue(187);
        horizontalSlider_LedDlyCtrlRedREdgeDly->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(horizontalSlider_LedDlyCtrlRedREdgeDly, 0, 2, 1, 1);

        horizontalSlider_LedDlyCtrlGreenFEdgeDly = new QSlider(tab_pat_seq_led_dly);
        horizontalSlider_LedDlyCtrlGreenFEdgeDly->setObjectName(QString::fromUtf8("horizontalSlider_LedDlyCtrlGreenFEdgeDly"));
        horizontalSlider_LedDlyCtrlGreenFEdgeDly->setMaximum(255);
        horizontalSlider_LedDlyCtrlGreenFEdgeDly->setValue(187);
        horizontalSlider_LedDlyCtrlGreenFEdgeDly->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(horizontalSlider_LedDlyCtrlGreenFEdgeDly, 4, 2, 1, 1);

        spinBox_LedDlyCtrlRedFEdgeDly = new QSpinBox(tab_pat_seq_led_dly);
        spinBox_LedDlyCtrlRedFEdgeDly->setObjectName(QString::fromUtf8("spinBox_LedDlyCtrlRedFEdgeDly"));
        spinBox_LedDlyCtrlRedFEdgeDly->setMaximum(255);
        spinBox_LedDlyCtrlRedFEdgeDly->setValue(187);

        gridLayout_3->addWidget(spinBox_LedDlyCtrlRedFEdgeDly, 1, 1, 1, 1);

        label_LedDlyCtrlGreenFEdgeDly = new QLabel(tab_pat_seq_led_dly);
        label_LedDlyCtrlGreenFEdgeDly->setObjectName(QString::fromUtf8("label_LedDlyCtrlGreenFEdgeDly"));

        gridLayout_3->addWidget(label_LedDlyCtrlGreenFEdgeDly, 4, 0, 1, 1);

        horizontalSlider_LedDlyCtrlRedFEdgeDly = new QSlider(tab_pat_seq_led_dly);
        horizontalSlider_LedDlyCtrlRedFEdgeDly->setObjectName(QString::fromUtf8("horizontalSlider_LedDlyCtrlRedFEdgeDly"));
        horizontalSlider_LedDlyCtrlRedFEdgeDly->setMaximum(255);
        horizontalSlider_LedDlyCtrlRedFEdgeDly->setValue(187);
        horizontalSlider_LedDlyCtrlRedFEdgeDly->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(horizontalSlider_LedDlyCtrlRedFEdgeDly, 1, 2, 1, 1);

        label_LedDlyCtrlBlueREdgeDly = new QLabel(tab_pat_seq_led_dly);
        label_LedDlyCtrlBlueREdgeDly->setObjectName(QString::fromUtf8("label_LedDlyCtrlBlueREdgeDly"));

        gridLayout_3->addWidget(label_LedDlyCtrlBlueREdgeDly, 6, 0, 1, 1);

        verticalSpacer_28 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_3->addItem(verticalSpacer_28, 5, 0, 1, 1);

        horizontalSpacer_16 = new QSpacerItem(135, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_16, 0, 4, 1, 1);


        formLayout_16->setLayout(0, QFormLayout::LabelRole, gridLayout_3);

        horizontalSpacer_17 = new QSpacerItem(119, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout_16->setItem(0, QFormLayout::FieldRole, horizontalSpacer_17);

        verticalSpacer_14 = new QSpacerItem(20, 247, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_16->setItem(1, QFormLayout::LabelRole, verticalSpacer_14);

        tabWidget_2->addTab(tab_pat_seq_led_dly, QString());

        verticalLayout_25->addWidget(tabWidget_2);

        tabWidget->addTab(tab_Pattern_Seq, QString());
        tab_Peripheral_Ctrl = new QWidget();
        tab_Peripheral_Ctrl->setObjectName(QString::fromUtf8("tab_Peripheral_Ctrl"));
        gridLayout_33 = new QGridLayout(tab_Peripheral_Ctrl);
        gridLayout_33->setSpacing(6);
        gridLayout_33->setContentsMargins(11, 11, 11, 11);
        gridLayout_33->setObjectName(QString::fromUtf8("gridLayout_33"));
        gridLayout_8 = new QGridLayout();
        gridLayout_8->setSpacing(6);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        groupBox_I2C0_Master = new QGroupBox(tab_Peripheral_Ctrl);
        groupBox_I2C0_Master->setObjectName(QString::fromUtf8("groupBox_I2C0_Master"));
        verticalLayout_42 = new QVBoxLayout(groupBox_I2C0_Master);
        verticalLayout_42->setSpacing(6);
        verticalLayout_42->setContentsMargins(11, 11, 11, 11);
        verticalLayout_42->setObjectName(QString::fromUtf8("verticalLayout_42"));
        gridLayout_32 = new QGridLayout();
        gridLayout_32->setSpacing(6);
        gridLayout_32->setObjectName(QString::fromUtf8("gridLayout_32"));
        label_i2cDevAddr = new QLabel(groupBox_I2C0_Master);
        label_i2cDevAddr->setObjectName(QString::fromUtf8("label_i2cDevAddr"));

        gridLayout_32->addWidget(label_i2cDevAddr, 2, 0, 1, 1);

        lineEdit_i2cReadData = new QLineEdit(groupBox_I2C0_Master);
        lineEdit_i2cReadData->setObjectName(QString::fromUtf8("lineEdit_i2cReadData"));

        gridLayout_32->addWidget(lineEdit_i2cReadData, 4, 1, 1, 1);

        lineEdit_i2cBytesToRead = new QLineEdit(groupBox_I2C0_Master);
        lineEdit_i2cBytesToRead->setObjectName(QString::fromUtf8("lineEdit_i2cBytesToRead"));

        gridLayout_32->addWidget(lineEdit_i2cBytesToRead, 5, 1, 1, 1);

        comboBox_i2cAddrMode = new QComboBox(groupBox_I2C0_Master);
        comboBox_i2cAddrMode->addItem(QString());
        comboBox_i2cAddrMode->addItem(QString());
        comboBox_i2cAddrMode->setObjectName(QString::fromUtf8("comboBox_i2cAddrMode"));

        gridLayout_32->addWidget(comboBox_i2cAddrMode, 0, 1, 1, 1);

        lineEdit_i2cClockRate = new QLineEdit(groupBox_I2C0_Master);
        lineEdit_i2cClockRate->setObjectName(QString::fromUtf8("lineEdit_i2cClockRate"));

        gridLayout_32->addWidget(lineEdit_i2cClockRate, 1, 1, 1, 1);

        label_i2cBytesToRead = new QLabel(groupBox_I2C0_Master);
        label_i2cBytesToRead->setObjectName(QString::fromUtf8("label_i2cBytesToRead"));

        gridLayout_32->addWidget(label_i2cBytesToRead, 5, 0, 1, 1);

        label_i2cAddrMode = new QLabel(groupBox_I2C0_Master);
        label_i2cAddrMode->setObjectName(QString::fromUtf8("label_i2cAddrMode"));

        gridLayout_32->addWidget(label_i2cAddrMode, 0, 0, 1, 1);

        label_i2cWriteData = new QLabel(groupBox_I2C0_Master);
        label_i2cWriteData->setObjectName(QString::fromUtf8("label_i2cWriteData"));

        gridLayout_32->addWidget(label_i2cWriteData, 3, 0, 1, 1);

        lineEdit_i2cDevAddr = new QLineEdit(groupBox_I2C0_Master);
        lineEdit_i2cDevAddr->setObjectName(QString::fromUtf8("lineEdit_i2cDevAddr"));

        gridLayout_32->addWidget(lineEdit_i2cDevAddr, 2, 1, 1, 1);

        lineEdit_i2cWriteData = new QLineEdit(groupBox_I2C0_Master);
        lineEdit_i2cWriteData->setObjectName(QString::fromUtf8("lineEdit_i2cWriteData"));

        gridLayout_32->addWidget(lineEdit_i2cWriteData, 3, 1, 1, 1);

        label_i2cReadData = new QLabel(groupBox_I2C0_Master);
        label_i2cReadData->setObjectName(QString::fromUtf8("label_i2cReadData"));

        gridLayout_32->addWidget(label_i2cReadData, 4, 0, 1, 1);

        label_i2cClockRate = new QLabel(groupBox_I2C0_Master);
        label_i2cClockRate->setObjectName(QString::fromUtf8("label_i2cClockRate"));

        gridLayout_32->addWidget(label_i2cClockRate, 1, 0, 1, 1);


        verticalLayout_42->addLayout(gridLayout_32);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_42->addItem(verticalSpacer);

        horizontalLayout_32 = new QHBoxLayout();
        horizontalLayout_32->setSpacing(6);
        horizontalLayout_32->setObjectName(QString::fromUtf8("horizontalLayout_32"));
        pushButton_i2cRead = new QPushButton(groupBox_I2C0_Master);
        pushButton_i2cRead->setObjectName(QString::fromUtf8("pushButton_i2cRead"));

        horizontalLayout_32->addWidget(pushButton_i2cRead);

        pushButton_i2cWrite = new QPushButton(groupBox_I2C0_Master);
        pushButton_i2cWrite->setObjectName(QString::fromUtf8("pushButton_i2cWrite"));

        horizontalLayout_32->addWidget(pushButton_i2cWrite);


        verticalLayout_42->addLayout(horizontalLayout_32);


        gridLayout_8->addWidget(groupBox_I2C0_Master, 0, 2, 1, 1);

        groupBox_PWMSetup = new QGroupBox(tab_Peripheral_Ctrl);
        groupBox_PWMSetup->setObjectName(QString::fromUtf8("groupBox_PWMSetup"));
        verticalLayout_27 = new QVBoxLayout(groupBox_PWMSetup);
        verticalLayout_27->setSpacing(2);
        verticalLayout_27->setContentsMargins(11, 11, 11, 11);
        verticalLayout_27->setObjectName(QString::fromUtf8("verticalLayout_27"));
        verticalLayout_27->setContentsMargins(5, 5, 5, 5);
        gridLayout_22 = new QGridLayout();
        gridLayout_22->setSpacing(6);
        gridLayout_22->setObjectName(QString::fromUtf8("gridLayout_22"));
        lineEdit_PWMPeriod = new QLineEdit(groupBox_PWMSetup);
        lineEdit_PWMPeriod->setObjectName(QString::fromUtf8("lineEdit_PWMPeriod"));

        gridLayout_22->addWidget(lineEdit_PWMPeriod, 1, 1, 1, 1);

        label_PWMPulsePeriod = new QLabel(groupBox_PWMSetup);
        label_PWMPulsePeriod->setObjectName(QString::fromUtf8("label_PWMPulsePeriod"));

        gridLayout_22->addWidget(label_PWMPulsePeriod, 1, 0, 1, 1);

        label_PWMDutyCycle = new QLabel(groupBox_PWMSetup);
        label_PWMDutyCycle->setObjectName(QString::fromUtf8("label_PWMDutyCycle"));

        gridLayout_22->addWidget(label_PWMDutyCycle, 2, 0, 1, 1);

        spinBox_PWMDutyCycle = new QSpinBox(groupBox_PWMSetup);
        spinBox_PWMDutyCycle->setObjectName(QString::fromUtf8("spinBox_PWMDutyCycle"));

        gridLayout_22->addWidget(spinBox_PWMDutyCycle, 2, 1, 1, 1);

        checkBox_PWMEnable = new QCheckBox(groupBox_PWMSetup);
        checkBox_PWMEnable->setObjectName(QString::fromUtf8("checkBox_PWMEnable"));

        gridLayout_22->addWidget(checkBox_PWMEnable, 0, 1, 1, 1);

        comboBox_PWMChannel = new QComboBox(groupBox_PWMSetup);
        comboBox_PWMChannel->addItem(QString());
        comboBox_PWMChannel->addItem(QString());
        comboBox_PWMChannel->setObjectName(QString::fromUtf8("comboBox_PWMChannel"));

        gridLayout_22->addWidget(comboBox_PWMChannel, 0, 0, 1, 1);


        verticalLayout_27->addLayout(gridLayout_22);

        verticalSpacer_23 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_27->addItem(verticalSpacer_23);

        horizontalLayout_27 = new QHBoxLayout();
        horizontalLayout_27->setSpacing(6);
        horizontalLayout_27->setObjectName(QString::fromUtf8("horizontalLayout_27"));
        pushButton_GetPWMConfig = new QPushButton(groupBox_PWMSetup);
        pushButton_GetPWMConfig->setObjectName(QString::fromUtf8("pushButton_GetPWMConfig"));

        horizontalLayout_27->addWidget(pushButton_GetPWMConfig);

        pushButton_SetPWMConfig = new QPushButton(groupBox_PWMSetup);
        pushButton_SetPWMConfig->setObjectName(QString::fromUtf8("pushButton_SetPWMConfig"));

        horizontalLayout_27->addWidget(pushButton_SetPWMConfig);


        verticalLayout_27->addLayout(horizontalLayout_27);


        gridLayout_8->addWidget(groupBox_PWMSetup, 0, 1, 1, 1);

        groupBox_GPIOConfig = new QGroupBox(tab_Peripheral_Ctrl);
        groupBox_GPIOConfig->setObjectName(QString::fromUtf8("groupBox_GPIOConfig"));
        verticalLayout_29 = new QVBoxLayout(groupBox_GPIOConfig);
        verticalLayout_29->setSpacing(2);
        verticalLayout_29->setContentsMargins(11, 11, 11, 11);
        verticalLayout_29->setObjectName(QString::fromUtf8("verticalLayout_29"));
        verticalLayout_29->setContentsMargins(5, 5, 5, 5);
        gridLayout_24 = new QGridLayout();
        gridLayout_24->setSpacing(6);
        gridLayout_24->setObjectName(QString::fromUtf8("gridLayout_24"));
        checkBox_GPIOEnAltFun = new QCheckBox(groupBox_GPIOConfig);
        checkBox_GPIOEnAltFun->setObjectName(QString::fromUtf8("checkBox_GPIOEnAltFun"));

        gridLayout_24->addWidget(checkBox_GPIOEnAltFun, 1, 1, 1, 1);

        label_GPIOSelPin = new QLabel(groupBox_GPIOConfig);
        label_GPIOSelPin->setObjectName(QString::fromUtf8("label_GPIOSelPin"));

        gridLayout_24->addWidget(label_GPIOSelPin, 0, 1, 1, 1);

        label_GPIOPinDir = new QLabel(groupBox_GPIOConfig);
        label_GPIOPinDir->setObjectName(QString::fromUtf8("label_GPIOPinDir"));

        gridLayout_24->addWidget(label_GPIOPinDir, 2, 1, 1, 1);

        comboBox_GPIOPinDir = new QComboBox(groupBox_GPIOConfig);
        comboBox_GPIOPinDir->addItem(QString());
        comboBox_GPIOPinDir->addItem(QString());
        comboBox_GPIOPinDir->setObjectName(QString::fromUtf8("comboBox_GPIOPinDir"));

        gridLayout_24->addWidget(comboBox_GPIOPinDir, 2, 2, 1, 1);

        label_GPIOPinState = new QLabel(groupBox_GPIOConfig);
        label_GPIOPinState->setObjectName(QString::fromUtf8("label_GPIOPinState"));

        gridLayout_24->addWidget(label_GPIOPinState, 3, 1, 1, 1);

        comboBox_GPIOPinState = new QComboBox(groupBox_GPIOConfig);
        comboBox_GPIOPinState->addItem(QString());
        comboBox_GPIOPinState->addItem(QString());
        comboBox_GPIOPinState->setObjectName(QString::fromUtf8("comboBox_GPIOPinState"));

        gridLayout_24->addWidget(comboBox_GPIOPinState, 3, 2, 1, 1);

        comboBox_GPIOPin = new QComboBox(groupBox_GPIOConfig);
        comboBox_GPIOPin->addItem(QString());
        comboBox_GPIOPin->addItem(QString());
        comboBox_GPIOPin->addItem(QString());
        comboBox_GPIOPin->addItem(QString());
        comboBox_GPIOPin->addItem(QString());
        comboBox_GPIOPin->addItem(QString());
        comboBox_GPIOPin->addItem(QString());
        comboBox_GPIOPin->addItem(QString());
        comboBox_GPIOPin->addItem(QString());
        comboBox_GPIOPin->addItem(QString());
        comboBox_GPIOPin->addItem(QString());
        comboBox_GPIOPin->addItem(QString());
        comboBox_GPIOPin->addItem(QString());
        comboBox_GPIOPin->addItem(QString());
        comboBox_GPIOPin->addItem(QString());
        comboBox_GPIOPin->addItem(QString());
        comboBox_GPIOPin->addItem(QString());
        comboBox_GPIOPin->addItem(QString());
        comboBox_GPIOPin->addItem(QString());
        comboBox_GPIOPin->addItem(QString());
        comboBox_GPIOPin->addItem(QString());
        comboBox_GPIOPin->addItem(QString());
        comboBox_GPIOPin->addItem(QString());
        comboBox_GPIOPin->addItem(QString());
        comboBox_GPIOPin->addItem(QString());
        comboBox_GPIOPin->addItem(QString());
        comboBox_GPIOPin->addItem(QString());
        comboBox_GPIOPin->addItem(QString());
        comboBox_GPIOPin->addItem(QString());
        comboBox_GPIOPin->addItem(QString());
        comboBox_GPIOPin->addItem(QString());
        comboBox_GPIOPin->addItem(QString());
        comboBox_GPIOPin->addItem(QString());
        comboBox_GPIOPin->addItem(QString());
        comboBox_GPIOPin->addItem(QString());
        comboBox_GPIOPin->addItem(QString());
        comboBox_GPIOPin->addItem(QString());
        comboBox_GPIOPin->addItem(QString());
        comboBox_GPIOPin->setObjectName(QString::fromUtf8("comboBox_GPIOPin"));

        gridLayout_24->addWidget(comboBox_GPIOPin, 0, 2, 1, 1);

        label_GPIOOutputType = new QLabel(groupBox_GPIOConfig);
        label_GPIOOutputType->setObjectName(QString::fromUtf8("label_GPIOOutputType"));

        gridLayout_24->addWidget(label_GPIOOutputType, 4, 1, 1, 1);

        comboBox_GPIOOutType = new QComboBox(groupBox_GPIOConfig);
        comboBox_GPIOOutType->addItem(QString());
        comboBox_GPIOOutType->addItem(QString());
        comboBox_GPIOOutType->setObjectName(QString::fromUtf8("comboBox_GPIOOutType"));

        gridLayout_24->addWidget(comboBox_GPIOOutType, 4, 2, 1, 1);


        verticalLayout_29->addLayout(gridLayout_24);

        verticalSpacer_21 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_29->addItem(verticalSpacer_21);

        horizontalLayout_29 = new QHBoxLayout();
        horizontalLayout_29->setSpacing(6);
        horizontalLayout_29->setObjectName(QString::fromUtf8("horizontalLayout_29"));
        pushBox_GetGPIOConfig = new QPushButton(groupBox_GPIOConfig);
        pushBox_GetGPIOConfig->setObjectName(QString::fromUtf8("pushBox_GetGPIOConfig"));

        horizontalLayout_29->addWidget(pushBox_GetGPIOConfig);

        pushBox_SetGPIOConfig = new QPushButton(groupBox_GPIOConfig);
        pushBox_SetGPIOConfig->setObjectName(QString::fromUtf8("pushBox_SetGPIOConfig"));

        horizontalLayout_29->addWidget(pushBox_SetGPIOConfig);


        verticalLayout_29->addLayout(horizontalLayout_29);


        gridLayout_8->addWidget(groupBox_GPIOConfig, 1, 0, 1, 1);

        groupBox_PWMCapSetup = new QGroupBox(tab_Peripheral_Ctrl);
        groupBox_PWMCapSetup->setObjectName(QString::fromUtf8("groupBox_PWMCapSetup"));
        verticalLayout_28 = new QVBoxLayout(groupBox_PWMCapSetup);
        verticalLayout_28->setSpacing(2);
        verticalLayout_28->setContentsMargins(11, 11, 11, 11);
        verticalLayout_28->setObjectName(QString::fromUtf8("verticalLayout_28"));
        verticalLayout_28->setContentsMargins(5, 5, 5, 5);
        gridLayout_23 = new QGridLayout();
        gridLayout_23->setSpacing(6);
        gridLayout_23->setObjectName(QString::fromUtf8("gridLayout_23"));
        label_PWMCapSampleRate = new QLabel(groupBox_PWMCapSetup);
        label_PWMCapSampleRate->setObjectName(QString::fromUtf8("label_PWMCapSampleRate"));

        gridLayout_23->addWidget(label_PWMCapSampleRate, 1, 0, 1, 1);

        lineEdit_PWMCapSampleRate = new QLineEdit(groupBox_PWMCapSetup);
        lineEdit_PWMCapSampleRate->setObjectName(QString::fromUtf8("lineEdit_PWMCapSampleRate"));

        gridLayout_23->addWidget(lineEdit_PWMCapSampleRate, 1, 1, 1, 1);

        label_PWMCapDutyCycleReadback = new QLabel(groupBox_PWMCapSetup);
        label_PWMCapDutyCycleReadback->setObjectName(QString::fromUtf8("label_PWMCapDutyCycleReadback"));

        gridLayout_23->addWidget(label_PWMCapDutyCycleReadback, 2, 0, 1, 1);

        checkBox_PWMCapEnable = new QCheckBox(groupBox_PWMCapSetup);
        checkBox_PWMCapEnable->setObjectName(QString::fromUtf8("checkBox_PWMCapEnable"));

        gridLayout_23->addWidget(checkBox_PWMCapEnable, 0, 1, 1, 1);

        comboBox_PWMCapChannel = new QComboBox(groupBox_PWMCapSetup);
        comboBox_PWMCapChannel->addItem(QString());
        comboBox_PWMCapChannel->addItem(QString());
        comboBox_PWMCapChannel->setObjectName(QString::fromUtf8("comboBox_PWMCapChannel"));

        gridLayout_23->addWidget(comboBox_PWMCapChannel, 0, 0, 1, 1);

        lineEdit_PWMCapDutyCycleReadback = new QLineEdit(groupBox_PWMCapSetup);
        lineEdit_PWMCapDutyCycleReadback->setObjectName(QString::fromUtf8("lineEdit_PWMCapDutyCycleReadback"));
        lineEdit_PWMCapDutyCycleReadback->setReadOnly(true);

        gridLayout_23->addWidget(lineEdit_PWMCapDutyCycleReadback, 2, 1, 1, 1);


        verticalLayout_28->addLayout(gridLayout_23);

        pushButton_PWMCapRead = new QPushButton(groupBox_PWMCapSetup);
        pushButton_PWMCapRead->setObjectName(QString::fromUtf8("pushButton_PWMCapRead"));

        verticalLayout_28->addWidget(pushButton_PWMCapRead);

        verticalSpacer_19 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_28->addItem(verticalSpacer_19);

        horizontalLayout_28 = new QHBoxLayout();
        horizontalLayout_28->setSpacing(6);
        horizontalLayout_28->setObjectName(QString::fromUtf8("horizontalLayout_28"));
        pushButton_GetPWMCapConfig = new QPushButton(groupBox_PWMCapSetup);
        pushButton_GetPWMCapConfig->setObjectName(QString::fromUtf8("pushButton_GetPWMCapConfig"));

        horizontalLayout_28->addWidget(pushButton_GetPWMCapConfig);

        pushButton_SetPWMCapConfig = new QPushButton(groupBox_PWMCapSetup);
        pushButton_SetPWMCapConfig->setObjectName(QString::fromUtf8("pushButton_SetPWMCapConfig"));

        horizontalLayout_28->addWidget(pushButton_SetPWMCapConfig);


        verticalLayout_28->addLayout(horizontalLayout_28);


        gridLayout_8->addWidget(groupBox_PWMCapSetup, 1, 1, 1, 1);

        groupBox_GPClk = new QGroupBox(tab_Peripheral_Ctrl);
        groupBox_GPClk->setObjectName(QString::fromUtf8("groupBox_GPClk"));
        verticalLayout_26 = new QVBoxLayout(groupBox_GPClk);
        verticalLayout_26->setSpacing(2);
        verticalLayout_26->setContentsMargins(11, 11, 11, 11);
        verticalLayout_26->setObjectName(QString::fromUtf8("verticalLayout_26"));
        verticalLayout_26->setContentsMargins(5, 5, 5, 5);
        checkBox_GpClk = new QCheckBox(groupBox_GPClk);
        checkBox_GpClk->setObjectName(QString::fromUtf8("checkBox_GpClk"));

        verticalLayout_26->addWidget(checkBox_GpClk);

        comboBox_GpClk = new QComboBox(groupBox_GPClk);
        comboBox_GpClk->addItem(QString());
        comboBox_GpClk->addItem(QString());
        comboBox_GpClk->setObjectName(QString::fromUtf8("comboBox_GpClk"));

        verticalLayout_26->addWidget(comboBox_GpClk);

        gridLayout_20 = new QGridLayout();
        gridLayout_20->setSpacing(6);
        gridLayout_20->setObjectName(QString::fromUtf8("gridLayout_20"));
        spinBox_GpClk = new QSpinBox(groupBox_GPClk);
        spinBox_GpClk->setObjectName(QString::fromUtf8("spinBox_GpClk"));
        spinBox_GpClk->setMinimum(2);
        spinBox_GpClk->setMaximum(127);

        gridLayout_20->addWidget(spinBox_GpClk, 0, 1, 1, 1);

        label_GpClkDiv = new QLabel(groupBox_GPClk);
        label_GpClkDiv->setObjectName(QString::fromUtf8("label_GpClkDiv"));

        gridLayout_20->addWidget(label_GpClkDiv, 0, 0, 1, 1);

        label_GpClkFreq = new QLabel(groupBox_GPClk);
        label_GpClkFreq->setObjectName(QString::fromUtf8("label_GpClkFreq"));

        gridLayout_20->addWidget(label_GpClkFreq, 1, 0, 1, 1);

        label_GpClkFreqVal = new QLabel(groupBox_GPClk);
        label_GpClkFreqVal->setObjectName(QString::fromUtf8("label_GpClkFreqVal"));

        gridLayout_20->addWidget(label_GpClkFreqVal, 1, 1, 1, 1, Qt::AlignHCenter);


        verticalLayout_26->addLayout(gridLayout_20);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_26->addItem(verticalSpacer_8);

        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setSpacing(6);
        horizontalLayout_24->setObjectName(QString::fromUtf8("horizontalLayout_24"));
        pushButton_GetGpClk = new QPushButton(groupBox_GPClk);
        pushButton_GetGpClk->setObjectName(QString::fromUtf8("pushButton_GetGpClk"));

        horizontalLayout_24->addWidget(pushButton_GetGpClk);

        pushButton_SetGpClk = new QPushButton(groupBox_GPClk);
        pushButton_SetGpClk->setObjectName(QString::fromUtf8("pushButton_SetGpClk"));

        horizontalLayout_24->addWidget(pushButton_SetGpClk);


        verticalLayout_26->addLayout(horizontalLayout_24);


        gridLayout_8->addWidget(groupBox_GPClk, 0, 0, 1, 1);

        textEdit_i2c0_port_usage = new QTextEdit(tab_Peripheral_Ctrl);
        textEdit_i2c0_port_usage->setObjectName(QString::fromUtf8("textEdit_i2c0_port_usage"));

        gridLayout_8->addWidget(textEdit_i2c0_port_usage, 1, 2, 1, 1);


        gridLayout_33->addLayout(gridLayout_8, 0, 0, 1, 1);

        tabWidget->addTab(tab_Peripheral_Ctrl, QString());
        tab_Image_Firmware = new QWidget();
        tab_Image_Firmware->setObjectName(QString::fromUtf8("tab_Image_Firmware"));
        verticalLayout_11 = new QVBoxLayout(tab_Image_Firmware);
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setContentsMargins(11, 11, 11, 11);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        tabWidget_3 = new QTabWidget(tab_Image_Firmware);
        tabWidget_3->setObjectName(QString::fromUtf8("tabWidget_3"));
        sizePolicy.setHeightForWidth(tabWidget_3->sizePolicy().hasHeightForWidth());
        tabWidget_3->setSizePolicy(sizePolicy);
        tab_Create_Splash = new QWidget();
        tab_Create_Splash->setObjectName(QString::fromUtf8("tab_Create_Splash"));
        gridLayout_6 = new QGridLayout(tab_Create_Splash);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        label_CreaImgInputBMPFileName = new QLabel(tab_Create_Splash);
        label_CreaImgInputBMPFileName->setObjectName(QString::fromUtf8("label_CreaImgInputBMPFileName"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(label_CreaImgInputBMPFileName->sizePolicy().hasHeightForWidth());
        label_CreaImgInputBMPFileName->setSizePolicy(sizePolicy6);

        gridLayout_6->addWidget(label_CreaImgInputBMPFileName, 0, 0, 1, 1);

        verticalSpacer_13 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout_6->addItem(verticalSpacer_13, 4, 0, 1, 1);

        verticalSpacer_17 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_17, 4, 1, 1, 1);

        label_CreaImgInputBMPFileImgPreview = new QLabel(tab_Create_Splash);
        label_CreaImgInputBMPFileImgPreview->setObjectName(QString::fromUtf8("label_CreaImgInputBMPFileImgPreview"));
        label_CreaImgInputBMPFileImgPreview->setMinimumSize(QSize(300, 250));
        label_CreaImgInputBMPFileImgPreview->setMaximumSize(QSize(300, 250));
        label_CreaImgInputBMPFileImgPreview->setFrameShape(QFrame::Box);
        label_CreaImgInputBMPFileImgPreview->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_6->addWidget(label_CreaImgInputBMPFileImgPreview, 3, 0, 1, 1);

        label_CreaImgOutImgPreview = new QLabel(tab_Create_Splash);
        label_CreaImgOutImgPreview->setObjectName(QString::fromUtf8("label_CreaImgOutImgPreview"));
        label_CreaImgOutImgPreview->setMinimumSize(QSize(300, 250));
        label_CreaImgOutImgPreview->setMaximumSize(QSize(300, 250));
        label_CreaImgOutImgPreview->setFrameShape(QFrame::Box);

        gridLayout_6->addWidget(label_CreaImgOutImgPreview, 3, 1, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalSpacer_3 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout_2->addItem(verticalSpacer_3, 0, 0, 1, 1);

        pushButton_CreaImgClearOutFileContents = new QPushButton(tab_Create_Splash);
        pushButton_CreaImgClearOutFileContents->setObjectName(QString::fromUtf8("pushButton_CreaImgClearOutFileContents"));

        gridLayout_2->addWidget(pushButton_CreaImgClearOutFileContents, 1, 0, 1, 1);


        gridLayout_6->addLayout(gridLayout_2, 2, 1, 1, 1);

        label_CreaImgOutputBMPFileName = new QLabel(tab_Create_Splash);
        label_CreaImgOutputBMPFileName->setObjectName(QString::fromUtf8("label_CreaImgOutputBMPFileName"));

        gridLayout_6->addWidget(label_CreaImgOutputBMPFileName, 0, 1, 1, 1);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setSpacing(6);
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        lineEdit_CreaImgInputBmpFileName = new QLineEdit(tab_Create_Splash);
        lineEdit_CreaImgInputBmpFileName->setObjectName(QString::fromUtf8("lineEdit_CreaImgInputBmpFileName"));
        sizePolicy5.setHeightForWidth(lineEdit_CreaImgInputBmpFileName->sizePolicy().hasHeightForWidth());
        lineEdit_CreaImgInputBmpFileName->setSizePolicy(sizePolicy5);
        lineEdit_CreaImgInputBmpFileName->setReadOnly(true);

        horizontalLayout_19->addWidget(lineEdit_CreaImgInputBmpFileName);

        pushButton_CreaImgSelectBMPFile = new QPushButton(tab_Create_Splash);
        pushButton_CreaImgSelectBMPFile->setObjectName(QString::fromUtf8("pushButton_CreaImgSelectBMPFile"));

        horizontalLayout_19->addWidget(pushButton_CreaImgSelectBMPFile);


        gridLayout_6->addLayout(horizontalLayout_19, 1, 0, 1, 1);

        gridLayout_29 = new QGridLayout();
        gridLayout_29->setSpacing(2);
        gridLayout_29->setObjectName(QString::fromUtf8("gridLayout_29"));
        label_CreaImgPattPosition = new QLabel(tab_Create_Splash);
        label_CreaImgPattPosition->setObjectName(QString::fromUtf8("label_CreaImgPattPosition"));
        sizePolicy6.setHeightForWidth(label_CreaImgPattPosition->sizePolicy().hasHeightForWidth());
        label_CreaImgPattPosition->setSizePolicy(sizePolicy6);

        gridLayout_29->addWidget(label_CreaImgPattPosition, 1, 1, 1, 1);

        label_CreaImgBitDepth = new QLabel(tab_Create_Splash);
        label_CreaImgBitDepth->setObjectName(QString::fromUtf8("label_CreaImgBitDepth"));

        gridLayout_29->addWidget(label_CreaImgBitDepth, 1, 0, 1, 1);

        comboBox_CreaImgFileBitDepth = new QComboBox(tab_Create_Splash);
        comboBox_CreaImgFileBitDepth->addItem(QString());
        comboBox_CreaImgFileBitDepth->addItem(QString());
        comboBox_CreaImgFileBitDepth->addItem(QString());
        comboBox_CreaImgFileBitDepth->addItem(QString());
        comboBox_CreaImgFileBitDepth->addItem(QString());
        comboBox_CreaImgFileBitDepth->addItem(QString());
        comboBox_CreaImgFileBitDepth->addItem(QString());
        comboBox_CreaImgFileBitDepth->addItem(QString());
        comboBox_CreaImgFileBitDepth->setObjectName(QString::fromUtf8("comboBox_CreaImgFileBitDepth"));

        gridLayout_29->addWidget(comboBox_CreaImgFileBitDepth, 3, 0, 1, 1);

        pushButton_CreaImgAddToOutFile = new QPushButton(tab_Create_Splash);
        pushButton_CreaImgAddToOutFile->setObjectName(QString::fromUtf8("pushButton_CreaImgAddToOutFile"));

        gridLayout_29->addWidget(pushButton_CreaImgAddToOutFile, 3, 2, 1, 1);

        comboBox_CreaImgFilePatPos = new QComboBox(tab_Create_Splash);
        comboBox_CreaImgFilePatPos->addItem(QString());
        comboBox_CreaImgFilePatPos->addItem(QString());
        comboBox_CreaImgFilePatPos->addItem(QString());
        comboBox_CreaImgFilePatPos->addItem(QString());
        comboBox_CreaImgFilePatPos->addItem(QString());
        comboBox_CreaImgFilePatPos->addItem(QString());
        comboBox_CreaImgFilePatPos->addItem(QString());
        comboBox_CreaImgFilePatPos->addItem(QString());
        comboBox_CreaImgFilePatPos->addItem(QString());
        comboBox_CreaImgFilePatPos->addItem(QString());
        comboBox_CreaImgFilePatPos->addItem(QString());
        comboBox_CreaImgFilePatPos->addItem(QString());
        comboBox_CreaImgFilePatPos->addItem(QString());
        comboBox_CreaImgFilePatPos->addItem(QString());
        comboBox_CreaImgFilePatPos->addItem(QString());
        comboBox_CreaImgFilePatPos->addItem(QString());
        comboBox_CreaImgFilePatPos->addItem(QString());
        comboBox_CreaImgFilePatPos->addItem(QString());
        comboBox_CreaImgFilePatPos->addItem(QString());
        comboBox_CreaImgFilePatPos->addItem(QString());
        comboBox_CreaImgFilePatPos->addItem(QString());
        comboBox_CreaImgFilePatPos->addItem(QString());
        comboBox_CreaImgFilePatPos->addItem(QString());
        comboBox_CreaImgFilePatPos->addItem(QString());
        comboBox_CreaImgFilePatPos->setObjectName(QString::fromUtf8("comboBox_CreaImgFilePatPos"));

        gridLayout_29->addWidget(comboBox_CreaImgFilePatPos, 3, 1, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout_29->addItem(verticalSpacer_7, 0, 0, 1, 1);


        gridLayout_6->addLayout(gridLayout_29, 2, 0, 1, 1);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setSpacing(2);
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        lineEdit_CreaImgOutputBmpFileName = new QLineEdit(tab_Create_Splash);
        lineEdit_CreaImgOutputBmpFileName->setObjectName(QString::fromUtf8("lineEdit_CreaImgOutputBmpFileName"));
        sizePolicy5.setHeightForWidth(lineEdit_CreaImgOutputBmpFileName->sizePolicy().hasHeightForWidth());
        lineEdit_CreaImgOutputBmpFileName->setSizePolicy(sizePolicy5);

        horizontalLayout_20->addWidget(lineEdit_CreaImgOutputBmpFileName);

        pushButton_CreaImgSelectDestFileName = new QPushButton(tab_Create_Splash);
        pushButton_CreaImgSelectDestFileName->setObjectName(QString::fromUtf8("pushButton_CreaImgSelectDestFileName"));

        horizontalLayout_20->addWidget(pushButton_CreaImgSelectDestFileName);

        horizontalLayout_20->setStretch(0, 1);

        gridLayout_6->addLayout(horizontalLayout_20, 1, 1, 1, 1);

        tabWidget_3->addTab(tab_Create_Splash, QString());
        tab_Create_Firmware = new QWidget();
        tab_Create_Firmware->setObjectName(QString::fromUtf8("tab_Create_Firmware"));
        formLayout_17 = new QFormLayout(tab_Create_Firmware);
        formLayout_17->setSpacing(6);
        formLayout_17->setContentsMargins(11, 11, 11, 11);
        formLayout_17->setObjectName(QString::fromUtf8("formLayout_17"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_FWDwldLatFWLink = new QLabel(tab_Create_Firmware);
        label_FWDwldLatFWLink->setObjectName(QString::fromUtf8("label_FWDwldLatFWLink"));
        QSizePolicy sizePolicy7(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(label_FWDwldLatFWLink->sizePolicy().hasHeightForWidth());
        label_FWDwldLatFWLink->setSizePolicy(sizePolicy7);
        label_FWDwldLatFWLink->setFrameShape(QFrame::NoFrame);
        label_FWDwldLatFWLink->setFrameShadow(QFrame::Plain);
        label_FWDwldLatFWLink->setOpenExternalLinks(true);

        verticalLayout_2->addWidget(label_FWDwldLatFWLink);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(5, 5, 5, 5);
        progressBar_FWFileParsing = new QProgressBar(tab_Create_Firmware);
        progressBar_FWFileParsing->setObjectName(QString::fromUtf8("progressBar_FWFileParsing"));
        progressBar_FWFileParsing->setEnabled(true);
        progressBar_FWFileParsing->setValue(0);

        gridLayout_4->addWidget(progressBar_FWFileParsing, 2, 1, 1, 1);

        label_FWFileParseStatus = new QLabel(tab_Create_Firmware);
        label_FWFileParseStatus->setObjectName(QString::fromUtf8("label_FWFileParseStatus"));
        label_FWFileParseStatus->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_FWFileParseStatus, 1, 1, 1, 1);

        lineEdit_FWFileSelected = new QLineEdit(tab_Create_Firmware);
        lineEdit_FWFileSelected->setObjectName(QString::fromUtf8("lineEdit_FWFileSelected"));
        lineEdit_FWFileSelected->setReadOnly(true);

        gridLayout_4->addWidget(lineEdit_FWFileSelected, 0, 1, 1, 1);

        pushButton_FWSelectFWBin = new QPushButton(tab_Create_Firmware);
        pushButton_FWSelectFWBin->setObjectName(QString::fromUtf8("pushButton_FWSelectFWBin"));
        pushButton_FWSelectFWBin->setEnabled(true);

        gridLayout_4->addWidget(pushButton_FWSelectFWBin, 0, 2, 1, 1);

        label_FWSelectFWFile = new QLabel(tab_Create_Firmware);
        label_FWSelectFWFile->setObjectName(QString::fromUtf8("label_FWSelectFWFile"));

        gridLayout_4->addWidget(label_FWSelectFWFile, 0, 0, 1, 1);


        verticalLayout_2->addLayout(gridLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_FWIniFile = new QLabel(tab_Create_Firmware);
        label_FWIniFile->setObjectName(QString::fromUtf8("label_FWIniFile"));

        horizontalLayout_6->addWidget(label_FWIniFile);

        lineEdit_FWIniFileSelected = new QLineEdit(tab_Create_Firmware);
        lineEdit_FWIniFileSelected->setObjectName(QString::fromUtf8("lineEdit_FWIniFileSelected"));
        lineEdit_FWIniFileSelected->setReadOnly(true);

        horizontalLayout_6->addWidget(lineEdit_FWIniFileSelected);

        pushButton_FWClearSelIniFile = new QPushButton(tab_Create_Firmware);
        pushButton_FWClearSelIniFile->setObjectName(QString::fromUtf8("pushButton_FWClearSelIniFile"));

        horizontalLayout_6->addWidget(pushButton_FWClearSelIniFile);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_41 = new QHBoxLayout();
        horizontalLayout_41->setSpacing(6);
        horizontalLayout_41->setObjectName(QString::fromUtf8("horizontalLayout_41"));
        label_add_fw_tag = new QLabel(tab_Create_Firmware);
        label_add_fw_tag->setObjectName(QString::fromUtf8("label_add_fw_tag"));

        horizontalLayout_41->addWidget(label_add_fw_tag);

        lineEdit_firmwareTagName = new QLineEdit(tab_Create_Firmware);
        lineEdit_firmwareTagName->setObjectName(QString::fromUtf8("lineEdit_firmwareTagName"));

        horizontalLayout_41->addWidget(lineEdit_firmwareTagName);

        pushButton_FWClearFWTag = new QPushButton(tab_Create_Firmware);
        pushButton_FWClearFWTag->setObjectName(QString::fromUtf8("pushButton_FWClearFWTag"));

        horizontalLayout_41->addWidget(pushButton_FWClearFWTag);


        verticalLayout_2->addLayout(horizontalLayout_41);

        label_NewFWBuildPath = new QLabel(tab_Create_Firmware);
        label_NewFWBuildPath->setObjectName(QString::fromUtf8("label_NewFWBuildPath"));
        sizePolicy.setHeightForWidth(label_NewFWBuildPath->sizePolicy().hasHeightForWidth());
        label_NewFWBuildPath->setSizePolicy(sizePolicy);
        label_NewFWBuildPath->setMinimumSize(QSize(0, 0));
        label_NewFWBuildPath->setWordWrap(true);

        verticalLayout_2->addWidget(label_NewFWBuildPath);

        horizontalLayout_30 = new QHBoxLayout();
        horizontalLayout_30->setSpacing(6);
        horizontalLayout_30->setObjectName(QString::fromUtf8("horizontalLayout_30"));
        verticalLayout_39 = new QVBoxLayout();
        verticalLayout_39->setSpacing(2);
        verticalLayout_39->setObjectName(QString::fromUtf8("verticalLayout_39"));
        label_FWOrgSplashImageCount = new QLabel(tab_Create_Firmware);
        label_FWOrgSplashImageCount->setObjectName(QString::fromUtf8("label_FWOrgSplashImageCount"));
        sizePolicy.setHeightForWidth(label_FWOrgSplashImageCount->sizePolicy().hasHeightForWidth());
        label_FWOrgSplashImageCount->setSizePolicy(sizePolicy);

        verticalLayout_39->addWidget(label_FWOrgSplashImageCount);

        label_FWNewSplashImageAddedCount = new QLabel(tab_Create_Firmware);
        label_FWNewSplashImageAddedCount->setObjectName(QString::fromUtf8("label_FWNewSplashImageAddedCount"));
        sizePolicy.setHeightForWidth(label_FWNewSplashImageAddedCount->sizePolicy().hasHeightForWidth());
        label_FWNewSplashImageAddedCount->setSizePolicy(sizePolicy);

        verticalLayout_39->addWidget(label_FWNewSplashImageAddedCount);

        label_FWSplashImageRemovedCount = new QLabel(tab_Create_Firmware);
        label_FWSplashImageRemovedCount->setObjectName(QString::fromUtf8("label_FWSplashImageRemovedCount"));
        sizePolicy.setHeightForWidth(label_FWSplashImageRemovedCount->sizePolicy().hasHeightForWidth());
        label_FWSplashImageRemovedCount->setSizePolicy(sizePolicy);

        verticalLayout_39->addWidget(label_FWSplashImageRemovedCount);

        label_FWAvaSplashImageCount = new QLabel(tab_Create_Firmware);
        label_FWAvaSplashImageCount->setObjectName(QString::fromUtf8("label_FWAvaSplashImageCount"));
        sizePolicy.setHeightForWidth(label_FWAvaSplashImageCount->sizePolicy().hasHeightForWidth());
        label_FWAvaSplashImageCount->setSizePolicy(sizePolicy);

        verticalLayout_39->addWidget(label_FWAvaSplashImageCount);

        verticalSpacer_9 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_39->addItem(verticalSpacer_9);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setSpacing(2);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        pushButton_FWRemoveSplashImage = new QPushButton(tab_Create_Firmware);
        pushButton_FWRemoveSplashImage->setObjectName(QString::fromUtf8("pushButton_FWRemoveSplashImage"));
        pushButton_FWRemoveSplashImage->setEnabled(false);

        gridLayout_7->addWidget(pushButton_FWRemoveSplashImage, 1, 1, 1, 1);

        comboBox_FWSplashImageIndex = new QComboBox(tab_Create_Firmware);
        comboBox_FWSplashImageIndex->addItem(QString());
        comboBox_FWSplashImageIndex->setObjectName(QString::fromUtf8("comboBox_FWSplashImageIndex"));
        comboBox_FWSplashImageIndex->setEnabled(false);

        gridLayout_7->addWidget(comboBox_FWSplashImageIndex, 0, 0, 1, 1);

        pushButton_FWAddSplashImage = new QPushButton(tab_Create_Firmware);
        pushButton_FWAddSplashImage->setObjectName(QString::fromUtf8("pushButton_FWAddSplashImage"));
        pushButton_FWAddSplashImage->setEnabled(false);

        gridLayout_7->addWidget(pushButton_FWAddSplashImage, 2, 0, 1, 1);

        pushButton_FWChangeSplashImage = new QPushButton(tab_Create_Firmware);
        pushButton_FWChangeSplashImage->setObjectName(QString::fromUtf8("pushButton_FWChangeSplashImage"));
        pushButton_FWChangeSplashImage->setEnabled(false);

        gridLayout_7->addWidget(pushButton_FWChangeSplashImage, 0, 1, 1, 1);


        verticalLayout_39->addLayout(gridLayout_7);

        pushButton_FWSelectIniFile = new QPushButton(tab_Create_Firmware);
        pushButton_FWSelectIniFile->setObjectName(QString::fromUtf8("pushButton_FWSelectIniFile"));
        pushButton_FWSelectIniFile->setEnabled(false);
        pushButton_FWSelectIniFile->setMinimumSize(QSize(101, 0));

        verticalLayout_39->addWidget(pushButton_FWSelectIniFile);

        pushButton_FWBuildNewFrmwImage = new QPushButton(tab_Create_Firmware);
        pushButton_FWBuildNewFrmwImage->setObjectName(QString::fromUtf8("pushButton_FWBuildNewFrmwImage"));
        pushButton_FWBuildNewFrmwImage->setEnabled(false);
        sizePolicy2.setHeightForWidth(pushButton_FWBuildNewFrmwImage->sizePolicy().hasHeightForWidth());
        pushButton_FWBuildNewFrmwImage->setSizePolicy(sizePolicy2);

        verticalLayout_39->addWidget(pushButton_FWBuildNewFrmwImage);

        pushButton_FWSplashImageUpload = new QPushButton(tab_Create_Firmware);
        pushButton_FWSplashImageUpload->setObjectName(QString::fromUtf8("pushButton_FWSplashImageUpload"));
        pushButton_FWSplashImageUpload->setEnabled(false);

        verticalLayout_39->addWidget(pushButton_FWSplashImageUpload);


        horizontalLayout_30->addLayout(verticalLayout_39);

        label_FWPreviewSelImage = new QLabel(tab_Create_Firmware);
        label_FWPreviewSelImage->setObjectName(QString::fromUtf8("label_FWPreviewSelImage"));
        QSizePolicy sizePolicy8(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(label_FWPreviewSelImage->sizePolicy().hasHeightForWidth());
        label_FWPreviewSelImage->setSizePolicy(sizePolicy8);
        label_FWPreviewSelImage->setMinimumSize(QSize(300, 250));

        horizontalLayout_30->addWidget(label_FWPreviewSelImage);


        verticalLayout_2->addLayout(horizontalLayout_30);


        formLayout_17->setLayout(0, QFormLayout::LabelRole, verticalLayout_2);

        groupBox_FWIllumModSelect = new QGroupBox(tab_Create_Firmware);
        groupBox_FWIllumModSelect->setObjectName(QString::fromUtf8("groupBox_FWIllumModSelect"));
        verticalLayout_36 = new QVBoxLayout(groupBox_FWIllumModSelect);
        verticalLayout_36->setSpacing(6);
        verticalLayout_36->setContentsMargins(11, 11, 11, 11);
        verticalLayout_36->setObjectName(QString::fromUtf8("verticalLayout_36"));
        verticalLayout_35 = new QVBoxLayout();
        verticalLayout_35->setSpacing(6);
        verticalLayout_35->setObjectName(QString::fromUtf8("verticalLayout_35"));
        radioButton_FWIllumSelColor = new QRadioButton(groupBox_FWIllumModSelect);
        radioButton_FWIllumSelColor->setObjectName(QString::fromUtf8("radioButton_FWIllumSelColor"));
        radioButton_FWIllumSelColor->setChecked(true);

        verticalLayout_35->addWidget(radioButton_FWIllumSelColor);

        radioButton_FWIllumSelMono = new QRadioButton(groupBox_FWIllumModSelect);
        radioButton_FWIllumSelMono->setObjectName(QString::fromUtf8("radioButton_FWIllumSelMono"));

        verticalLayout_35->addWidget(radioButton_FWIllumSelMono);

        horizontalLayout_42 = new QHBoxLayout();
        horizontalLayout_42->setSpacing(6);
        horizontalLayout_42->setObjectName(QString::fromUtf8("horizontalLayout_42"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_42->addItem(horizontalSpacer_3);

        verticalLayout_41 = new QVBoxLayout();
        verticalLayout_41->setSpacing(6);
        verticalLayout_41->setObjectName(QString::fromUtf8("verticalLayout_41"));
        checkBox_FWIllumSelMonoRedCh = new QCheckBox(groupBox_FWIllumModSelect);
        checkBox_FWIllumSelMonoRedCh->setObjectName(QString::fromUtf8("checkBox_FWIllumSelMonoRedCh"));
        checkBox_FWIllumSelMonoRedCh->setEnabled(false);

        verticalLayout_41->addWidget(checkBox_FWIllumSelMonoRedCh);

        checkBox_FWIllumSelMonoGreenCh = new QCheckBox(groupBox_FWIllumModSelect);
        checkBox_FWIllumSelMonoGreenCh->setObjectName(QString::fromUtf8("checkBox_FWIllumSelMonoGreenCh"));
        checkBox_FWIllumSelMonoGreenCh->setEnabled(false);

        verticalLayout_41->addWidget(checkBox_FWIllumSelMonoGreenCh);

        checkBox_FWIllumSelMonoBlueCh = new QCheckBox(groupBox_FWIllumModSelect);
        checkBox_FWIllumSelMonoBlueCh->setObjectName(QString::fromUtf8("checkBox_FWIllumSelMonoBlueCh"));
        checkBox_FWIllumSelMonoBlueCh->setEnabled(false);

        verticalLayout_41->addWidget(checkBox_FWIllumSelMonoBlueCh);


        horizontalLayout_42->addLayout(verticalLayout_41);


        verticalLayout_35->addLayout(horizontalLayout_42);


        verticalLayout_36->addLayout(verticalLayout_35);

        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_36->addItem(verticalSpacer_12);


        formLayout_17->setWidget(0, QFormLayout::FieldRole, groupBox_FWIllumModSelect);

        tabWidget_3->addTab(tab_Create_Firmware, QString());
        tab_FirmwareUpload = new QWidget();
        tab_FirmwareUpload->setObjectName(QString::fromUtf8("tab_FirmwareUpload"));
        formLayout_12 = new QFormLayout(tab_FirmwareUpload);
        formLayout_12->setSpacing(6);
        formLayout_12->setContentsMargins(11, 11, 11, 11);
        formLayout_12->setObjectName(QString::fromUtf8("formLayout_12"));
        formLayout_12->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_FWUploadLatestFWLink = new QLabel(tab_FirmwareUpload);
        label_FWUploadLatestFWLink->setObjectName(QString::fromUtf8("label_FWUploadLatestFWLink"));
        label_FWUploadLatestFWLink->setFrameShape(QFrame::NoFrame);
        label_FWUploadLatestFWLink->setFrameShadow(QFrame::Plain);
        label_FWUploadLatestFWLink->setOpenExternalLinks(true);

        formLayout_12->setWidget(0, QFormLayout::LabelRole, label_FWUploadLatestFWLink);

        pushButton_Connect_2 = new QPushButton(tab_FirmwareUpload);
        pushButton_Connect_2->setObjectName(QString::fromUtf8("pushButton_Connect_2"));
        pushButton_Connect_2->setEnabled(true);

        formLayout_12->setWidget(2, QFormLayout::LabelRole, pushButton_Connect_2);

        textEdit_FWUpdate = new QTextEdit(tab_FirmwareUpload);
        textEdit_FWUpdate->setObjectName(QString::fromUtf8("textEdit_FWUpdate"));
        textEdit_FWUpdate->setReadOnly(true);
        textEdit_FWUpdate->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse);

        formLayout_12->setWidget(3, QFormLayout::SpanningRole, textEdit_FWUpdate);

        groupBox_FWUpload = new QGroupBox(tab_FirmwareUpload);
        groupBox_FWUpload->setObjectName(QString::fromUtf8("groupBox_FWUpload"));
        groupBox_FWUpload->setMinimumSize(QSize(504, 20));
        verticalLayout_31 = new QVBoxLayout(groupBox_FWUpload);
        verticalLayout_31->setSpacing(2);
        verticalLayout_31->setContentsMargins(11, 11, 11, 11);
        verticalLayout_31->setObjectName(QString::fromUtf8("verticalLayout_31"));
        verticalLayout_31->setContentsMargins(5, 5, 5, 5);
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(2);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(5, 5, 5, 5);
        FirmwareFile_2 = new QLineEdit(groupBox_FWUpload);
        FirmwareFile_2->setObjectName(QString::fromUtf8("FirmwareFile_2"));

        gridLayout_5->addWidget(FirmwareFile_2, 0, 1, 1, 1);

        pushButton_FWFileSelect = new QPushButton(groupBox_FWUpload);
        pushButton_FWFileSelect->setObjectName(QString::fromUtf8("pushButton_FWFileSelect"));
        pushButton_FWFileSelect->setEnabled(true);

        gridLayout_5->addWidget(pushButton_FWFileSelect, 0, 2, 1, 1);

        prorgessBar_FWUpload = new QProgressBar(groupBox_FWUpload);
        prorgessBar_FWUpload->setObjectName(QString::fromUtf8("prorgessBar_FWUpload"));
        prorgessBar_FWUpload->setEnabled(true);
        prorgessBar_FWUpload->setValue(0);

        gridLayout_5->addWidget(prorgessBar_FWUpload, 3, 1, 1, 1);

        label_FWUploadProgressBar = new QLabel(groupBox_FWUpload);
        label_FWUploadProgressBar->setObjectName(QString::fromUtf8("label_FWUploadProgressBar"));
        label_FWUploadProgressBar->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_FWUploadProgressBar, 2, 1, 1, 1);

        pushButton_FWUpload = new QPushButton(groupBox_FWUpload);
        pushButton_FWUpload->setObjectName(QString::fromUtf8("pushButton_FWUpload"));
        pushButton_FWUpload->setEnabled(false);

        gridLayout_5->addWidget(pushButton_FWUpload, 3, 2, 1, 1);

        label_FWFileSelect = new QLabel(groupBox_FWUpload);
        label_FWFileSelect->setObjectName(QString::fromUtf8("label_FWFileSelect"));

        gridLayout_5->addWidget(label_FWFileSelect, 0, 0, 1, 1);

        checkBox_FastFlashUpdate = new QCheckBox(groupBox_FWUpload);
        checkBox_FastFlashUpdate->setObjectName(QString::fromUtf8("checkBox_FastFlashUpdate"));

        gridLayout_5->addWidget(checkBox_FastFlashUpdate, 1, 2, 1, 1);

        checkBox_SkipBootLoader = new QCheckBox(groupBox_FWUpload);
        checkBox_SkipBootLoader->setObjectName(QString::fromUtf8("checkBox_SkipBootLoader"));
        checkBox_SkipBootLoader->setEnabled(true);
        checkBox_SkipBootLoader->setChecked(true);

        gridLayout_5->addWidget(checkBox_SkipBootLoader, 1, 1, 1, 1);


        verticalLayout_31->addLayout(gridLayout_5);


        formLayout_12->setWidget(1, QFormLayout::LabelRole, groupBox_FWUpload);

        tabWidget_3->addTab(tab_FirmwareUpload, QString());

        verticalLayout_11->addWidget(tabWidget_3);

        tabWidget->addTab(tab_Image_Firmware, QString());
        tab_Additional_Resources = new QWidget();
        tab_Additional_Resources->setObjectName(QString::fromUtf8("tab_Additional_Resources"));
        formLayout_11 = new QFormLayout(tab_Additional_Resources);
        formLayout_11->setSpacing(6);
        formLayout_11->setContentsMargins(11, 11, 11, 11);
        formLayout_11->setObjectName(QString::fromUtf8("formLayout_11"));
        formLayout_11->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        gridLayout_17 = new QGridLayout();
        gridLayout_17->setSpacing(6);
        gridLayout_17->setObjectName(QString::fromUtf8("gridLayout_17"));
        label_AddResE2ELink = new QLabel(tab_Additional_Resources);
        label_AddResE2ELink->setObjectName(QString::fromUtf8("label_AddResE2ELink"));
        QSizePolicy sizePolicy9(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(label_AddResE2ELink->sizePolicy().hasHeightForWidth());
        label_AddResE2ELink->setSizePolicy(sizePolicy9);
        label_AddResE2ELink->setFrameShape(QFrame::NoFrame);
        label_AddResE2ELink->setFrameShadow(QFrame::Plain);
        label_AddResE2ELink->setWordWrap(true);
        label_AddResE2ELink->setOpenExternalLinks(true);

        gridLayout_17->addWidget(label_AddResE2ELink, 1, 1, 1, 1);

        label_AddResEVMLink = new QLabel(tab_Additional_Resources);
        label_AddResEVMLink->setObjectName(QString::fromUtf8("label_AddResEVMLink"));
        sizePolicy9.setHeightForWidth(label_AddResEVMLink->sizePolicy().hasHeightForWidth());
        label_AddResEVMLink->setSizePolicy(sizePolicy9);
        label_AddResEVMLink->setFrameShape(QFrame::NoFrame);
        label_AddResEVMLink->setFrameShadow(QFrame::Plain);
        label_AddResEVMLink->setWordWrap(true);
        label_AddResEVMLink->setOpenExternalLinks(true);

        gridLayout_17->addWidget(label_AddResEVMLink, 0, 1, 1, 1);

        label_AddResEVM = new QLabel(tab_Additional_Resources);
        label_AddResEVM->setObjectName(QString::fromUtf8("label_AddResEVM"));
        sizePolicy9.setHeightForWidth(label_AddResEVM->sizePolicy().hasHeightForWidth());
        label_AddResEVM->setSizePolicy(sizePolicy9);
        label_AddResEVM->setFrameShape(QFrame::NoFrame);
        label_AddResEVM->setFrameShadow(QFrame::Plain);
        label_AddResEVM->setWordWrap(true);
        label_AddResEVM->setOpenExternalLinks(true);

        gridLayout_17->addWidget(label_AddResEVM, 0, 0, 1, 1);

        label_AddResDHLink = new QLabel(tab_Additional_Resources);
        label_AddResDHLink->setObjectName(QString::fromUtf8("label_AddResDHLink"));
        sizePolicy9.setHeightForWidth(label_AddResDHLink->sizePolicy().hasHeightForWidth());
        label_AddResDHLink->setSizePolicy(sizePolicy9);
        label_AddResDHLink->setFrameShape(QFrame::NoFrame);
        label_AddResDHLink->setFrameShadow(QFrame::Plain);
        label_AddResDHLink->setWordWrap(true);
        label_AddResDHLink->setOpenExternalLinks(true);

        gridLayout_17->addWidget(label_AddResDHLink, 2, 1, 1, 1);

        label_AddResDH = new QLabel(tab_Additional_Resources);
        label_AddResDH->setObjectName(QString::fromUtf8("label_AddResDH"));
        sizePolicy9.setHeightForWidth(label_AddResDH->sizePolicy().hasHeightForWidth());
        label_AddResDH->setSizePolicy(sizePolicy9);
        label_AddResDH->setFrameShape(QFrame::NoFrame);
        label_AddResDH->setFrameShadow(QFrame::Plain);
        label_AddResDH->setWordWrap(true);
        label_AddResDH->setOpenExternalLinks(true);

        gridLayout_17->addWidget(label_AddResDH, 2, 0, 1, 1);

        label_AddResE2E = new QLabel(tab_Additional_Resources);
        label_AddResE2E->setObjectName(QString::fromUtf8("label_AddResE2E"));
        sizePolicy9.setHeightForWidth(label_AddResE2E->sizePolicy().hasHeightForWidth());
        label_AddResE2E->setSizePolicy(sizePolicy9);
        label_AddResE2E->setFrameShape(QFrame::NoFrame);
        label_AddResE2E->setFrameShadow(QFrame::Plain);
        label_AddResE2E->setWordWrap(true);
        label_AddResE2E->setOpenExternalLinks(true);

        gridLayout_17->addWidget(label_AddResE2E, 1, 0, 1, 1);

        gridLayout_17->setColumnStretch(0, 2);

        formLayout_11->setLayout(0, QFormLayout::LabelRole, gridLayout_17);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout_11->setItem(0, QFormLayout::FieldRole, horizontalSpacer_11);

        tabWidget->addTab(tab_Additional_Resources, QString());

        verticalLayout_3->addWidget(tabWidget);


        verticalLayout_5->addLayout(verticalLayout_3);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_19->addWidget(scrollArea, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);
        tabWidget_2->setCurrentIndex(0);
        comboBox_PatSeqSelTrigType->setCurrentIndex(0);
        comboBox_VarExpPatSeqSelTrigType->setCurrentIndex(0);
        comboBox_i2cAddrMode->setCurrentIndex(0);
        tabWidget_3->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "DLP LightCrafter 4500 Control Software", nullptr));
        groupBox_SystemCtrl->setTitle(QCoreApplication::translate("MainWindow", "System Control", nullptr));
        pushButton_Connect->setText(QCoreApplication::translate("MainWindow", "Connected", nullptr));
        pushButton_Reset->setText(QCoreApplication::translate("MainWindow", "System Reset", nullptr));
        label_API->setText(QCoreApplication::translate("MainWindow", " Firmware Version:", nullptr));
        label_ApiVersion->setText(QCoreApplication::translate("MainWindow", "XX.XX.XX", nullptr));
        label_firmwareTag->setText(QCoreApplication::translate("MainWindow", " Firmware Tag:", nullptr));
        label_firmwareTagInfo->setText(QCoreApplication::translate("MainWindow", " XXX", nullptr));
        label_statusSeqRun->setText(QCoreApplication::translate("MainWindow", "Seq. Running", nullptr));
        indicatorButton_statusSeqRun->setText(QString());
        indicatorButton_statusSeqErr->setText(QString());
        label_statusInitDone->setText(QCoreApplication::translate("MainWindow", "Init Done", nullptr));
        indicatorButton_statusForcedSwap->setText(QString());
        label_statusForcedSwap->setText(QCoreApplication::translate("MainWindow", "Forced Swap", nullptr));
        indicatorButton_statusInitDone->setText(QString());
        label_statusSeqErr->setText(QCoreApplication::translate("MainWindow", "Seq. Error", nullptr));
        indicatorButton_statusDmdParked->setText(QString());
        label_statusDrcErr->setText(QCoreApplication::translate("MainWindow", "DRC Error", nullptr));
        label_statusDMDParked->setText(QCoreApplication::translate("MainWindow", "DMD Parked", nullptr));
        indicatorButton_statusDrcErr->setText(QString());
        label_statusBufSwap->setText(QCoreApplication::translate("MainWindow", "Buffer Freeze", nullptr));
        indicatorButton_statusBufFreeze->setText(QString());
        indicatorButton_statusSeqAbort->setText(QString());
        label_statusSeqAbort->setText(QCoreApplication::translate("MainWindow", "Seq Abort", nullptr));
        checkBox_updateStatus->setText(QCoreApplication::translate("MainWindow", "Auto Update Status", nullptr));
        groupBox_modeControl->setTitle(QCoreApplication::translate("MainWindow", "Operating Mode", nullptr));
        radioButton_SLMode->setText(QCoreApplication::translate("MainWindow", "Pattern Sequence", nullptr));
        radioButton_VideoMode->setText(QCoreApplication::translate("MainWindow", "Video Mode", nullptr));
        radioButton_StandbyMode->setText(QCoreApplication::translate("MainWindow", "Power Standby", nullptr));
        radioButton_VariableExpSLMode->setText(QCoreApplication::translate("MainWindow", "Pattern Sequence [Variable Exposure]", nullptr));
        groupBox_ImageSetting->setTitle(QCoreApplication::translate("MainWindow", "Image Orientation", nullptr));
        checkBox_shortAxisFlip->setText(QCoreApplication::translate("MainWindow", "North/South Flip", nullptr));
        checkBox_longAxisFlip->setText(QCoreApplication::translate("MainWindow", "East/West Flip", nullptr));
        pushButton_GetFlip->setText(QCoreApplication::translate("MainWindow", "Get", nullptr));
        pushButton_SetFlip->setText(QCoreApplication::translate("MainWindow", "Set", nullptr));
        groupBox_LEDDriverCtrl->setTitle(QCoreApplication::translate("MainWindow", "LED Driver Control", nullptr));
        groupBox_LEDCurrentCtrl->setTitle(QCoreApplication::translate("MainWindow", "LED Current (0-255)", nullptr));
        label_LEDRed->setText(QCoreApplication::translate("MainWindow", "Red", nullptr));
        lineEdit_RedLEDCurrent->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_LEDGreen->setText(QCoreApplication::translate("MainWindow", "Green", nullptr));
        lineEdit_GreenLEDCurrent->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_LEDBlue->setText(QCoreApplication::translate("MainWindow", "Blue", nullptr));
        lineEdit_BlueLEDCurrent->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_LedPwmInvert->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>This command is to compensate some LED design problem that PWM and current are swapped. PWM 0 corresponds to max current and PWM 255 corresponds to 0 current. The default behavior \342\200\234Not checked\342\200\235 means PWM and current are in correct order, PWM 0 corresponds to current 0. This command needs to be sent before power up the system or before set LED maximum DC or LED current controls. </p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        checkBox_LedPwmInvert->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-family:'Times New Roman'; font-size:7pt;\"/>This command is to compensate some LED design problem that PWM and current are swapped. PWM 0 corresponds to max current and PWM 255 corresponds to 0 current. The default behavior \342\200\234Pass through\342\200\235 means PWM and current are in correct order, PWM 0 corresponds to current 0. This command needs to be sent before power up the system or before set LED maximum DC or LED current controls. </p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        checkBox_LedPwmInvert->setText(QCoreApplication::translate("MainWindow", "Invert PWMs", nullptr));
        groupBox_LEDEnSelect->setTitle(QCoreApplication::translate("MainWindow", "LED Selection", nullptr));
        radioButton_ColorDisplayAuto->setText(QCoreApplication::translate("MainWindow", "Automatic", nullptr));
        radioButton_ColorDisplayManual->setText(QCoreApplication::translate("MainWindow", "Manual", nullptr));
        checkBox_RedEnable->setText(QCoreApplication::translate("MainWindow", "Red", nullptr));
        checkBox_GreenEnable->setText(QCoreApplication::translate("MainWindow", "Green", nullptr));
        checkBox_BlueEnable->setText(QCoreApplication::translate("MainWindow", "Blue", nullptr));
        pushButton_GetLEDConfiguration->setText(QCoreApplication::translate("MainWindow", "Get", nullptr));
        pushButton_SetLEDConfiguration->setText(QCoreApplication::translate("MainWindow", "Set", nullptr));
        pushButton_ApplySolution->setText(QCoreApplication::translate("MainWindow", "Apply Solution", nullptr));
        pushButton_SaveSolution->setText(QCoreApplication::translate("MainWindow", "Save Solution", nullptr));
        pushButton_ApplyDefaultSolution->setText(QCoreApplication::translate("MainWindow", "Apply Default Solution", nullptr));
        groupBox_InputConfiguration->setTitle(QCoreApplication::translate("MainWindow", "Input Configuration", nullptr));
        groupBox_ClockSelect->setTitle(QCoreApplication::translate("MainWindow", "Clock Select", nullptr));
        comboBox_PortClockList->setItemText(0, QCoreApplication::translate("MainWindow", "P1_CLKA", nullptr));
        comboBox_PortClockList->setItemText(1, QCoreApplication::translate("MainWindow", "P1_CLKB", nullptr));
        comboBox_PortClockList->setItemText(2, QCoreApplication::translate("MainWindow", "P1_CLKC", nullptr));

#if QT_CONFIG(tooltip)
        comboBox_PortClockList->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        comboBox_PortClockList->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
        pushButton_GetPortClock->setText(QCoreApplication::translate("MainWindow", "Get", nullptr));
        pushButton_SetPortClock->setText(QCoreApplication::translate("MainWindow", "Set", nullptr));
        groupBox_PixelFormat->setTitle(QCoreApplication::translate("MainWindow", "Pixel Data Format", nullptr));
        comboBox_PixelFormatList->setItemText(0, QCoreApplication::translate("MainWindow", "RGB 444", nullptr));
        comboBox_PixelFormatList->setItemText(1, QCoreApplication::translate("MainWindow", "YUV 444", nullptr));
        comboBox_PixelFormatList->setItemText(2, QCoreApplication::translate("MainWindow", "YUV 422", nullptr));

        pushButton_GetPortPixelFormat->setText(QCoreApplication::translate("MainWindow", "Get", nullptr));
        pushButton_SetPortPixelFormat->setText(QCoreApplication::translate("MainWindow", "Set", nullptr));
        groupBox_SourceSelect->setTitle(QCoreApplication::translate("MainWindow", "Source Select", nullptr));
        comboBox_InputSourceList->setItemText(0, QCoreApplication::translate("MainWindow", "Parallel RGB", nullptr));
        comboBox_InputSourceList->setItemText(1, QCoreApplication::translate("MainWindow", "Internal Test Pattern", nullptr));
        comboBox_InputSourceList->setItemText(2, QCoreApplication::translate("MainWindow", "Images from Flash", nullptr));
        comboBox_InputSourceList->setItemText(3, QCoreApplication::translate("MainWindow", "LVDS/FPDLink", nullptr));

        comboBox_InputSourceOptionList->setItemText(0, QCoreApplication::translate("MainWindow", "30 BITS", nullptr));
        comboBox_InputSourceOptionList->setItemText(1, QCoreApplication::translate("MainWindow", "24 BITS", nullptr));
        comboBox_InputSourceOptionList->setItemText(2, QCoreApplication::translate("MainWindow", "20 BITS", nullptr));
        comboBox_InputSourceOptionList->setItemText(3, QCoreApplication::translate("MainWindow", "16 BITS", nullptr));
        comboBox_InputSourceOptionList->setItemText(4, QCoreApplication::translate("MainWindow", "10 BITS", nullptr));
        comboBox_InputSourceOptionList->setItemText(5, QCoreApplication::translate("MainWindow", "8 BITS", nullptr));

        pushButton_GetPortSource->setText(QCoreApplication::translate("MainWindow", "Get", nullptr));
        pushButton_SetPortSource->setText(QCoreApplication::translate("MainWindow", "Set", nullptr));
        groupBox_PortDataSwap->setTitle(QCoreApplication::translate("MainWindow", "Input Port Data Swap", nullptr));
        comboBox_SwapSelectList->setItemText(0, QCoreApplication::translate("MainWindow", "ABC->ABC", nullptr));
        comboBox_SwapSelectList->setItemText(1, QCoreApplication::translate("MainWindow", "ABC->CAB", nullptr));
        comboBox_SwapSelectList->setItemText(2, QCoreApplication::translate("MainWindow", "ABC->BCA", nullptr));
        comboBox_SwapSelectList->setItemText(3, QCoreApplication::translate("MainWindow", "ABC->ACB", nullptr));
        comboBox_SwapSelectList->setItemText(4, QCoreApplication::translate("MainWindow", "ABC->BAC", nullptr));
        comboBox_SwapSelectList->setItemText(5, QCoreApplication::translate("MainWindow", "ABC->CBA", nullptr));

        pushButton_GetPortSwap->setText(QCoreApplication::translate("MainWindow", "Get", nullptr));
        pushButton_SetPortSwap->setText(QCoreApplication::translate("MainWindow", "Set", nullptr));
#if QT_CONFIG(tooltip)
        groupBox_DisplayDimension->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        groupBox_DisplayDimension->setTitle(QCoreApplication::translate("MainWindow", "Display Dimensions", nullptr));
        label_DispLinesPerFrame->setText(QCoreApplication::translate("MainWindow", "Lines Per Frame", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit_CropAreaLinesPerFrame->setToolTip(QCoreApplication::translate("MainWindow", "Range : 0 - Y Resolution", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEdit_CropAreaLinesPerFrame->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit_DispAreaPixPerFrame->setToolTip(QCoreApplication::translate("MainWindow", "Range :  0 - (Y Resolution - Start)", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEdit_DispAreaPixPerFrame->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_DispFirstPix->setText(QCoreApplication::translate("MainWindow", "Start Pixel", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit_DispAreaFirstLine->setToolTip(QCoreApplication::translate("MainWindow", "Range : 0 - (X Resolution - Start)", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEdit_DispAreaFirstLine->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit_DispAreaLinesPerFrame->setToolTip(QCoreApplication::translate("MainWindow", "Range : 0 - Y Resolution", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEdit_DispAreaLinesPerFrame->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit_CropAreaPixelsPerLine->setToolTip(QCoreApplication::translate("MainWindow", "Range :  0 - (Y Resolution - Start)", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEdit_CropAreaPixelsPerLine->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit_CropAreaFirstLine->setToolTip(QCoreApplication::translate("MainWindow", "Range : 0 - (X Resolution - Start)", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEdit_CropAreaFirstLine->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit_CropAreaFirstPix->setToolTip(QCoreApplication::translate("MainWindow", "Range : 0 - X Resolution", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEdit_CropAreaFirstPix->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit_DispAreaFirstPixel->setToolTip(QCoreApplication::translate("MainWindow", "Range : 0 - X Resolution", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEdit_DispAreaFirstPixel->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_DispArea->setText(QCoreApplication::translate("MainWindow", "Display Area", nullptr));
        label_CropArea->setText(QCoreApplication::translate("MainWindow", "Cropped Area", nullptr));
        label_DispFirstLine->setText(QCoreApplication::translate("MainWindow", "Start Line", nullptr));
        label_DispPixPerLine->setText(QCoreApplication::translate("MainWindow", "Pixels Per Line", nullptr));
        pushButton_GetDisplayConfiguration->setText(QCoreApplication::translate("MainWindow", "Get", nullptr));
        pushButton_SetDisplayConfiguration->setText(QCoreApplication::translate("MainWindow", "Set", nullptr));
#if QT_CONFIG(tooltip)
        groupBox_TPG->setToolTip(QCoreApplication::translate("MainWindow", "Fill Screen With Color (R,G,B)", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox_TPG->setTitle(QCoreApplication::translate("MainWindow", "Internal Test Pattern Color", nullptr));
        label_TPGColorForeground->setText(QCoreApplication::translate("MainWindow", "Foreground", nullptr));
        label_TPGColorBlue->setText(QCoreApplication::translate("MainWindow", "Blue", nullptr));
        label_TPGColorGreen->setText(QCoreApplication::translate("MainWindow", "Green", nullptr));
        label_TPGColorRed->setText(QCoreApplication::translate("MainWindow", "Red", nullptr));
        label_TPGColorBackground->setText(QCoreApplication::translate("MainWindow", "Background", nullptr));
        pushButton_GetTPGColor->setText(QCoreApplication::translate("MainWindow", "Get", nullptr));
        pushButton_SetTPGColor->setText(QCoreApplication::translate("MainWindow", "Set", nullptr));
        groupBox_FPDModeAndFieldSelect->setTitle(QCoreApplication::translate("MainWindow", "FPD Mode and Field Select", nullptr));
        comboBox_FPDFieldSelectList->setItemText(0, QCoreApplication::translate("MainWindow", "FIELD SIGNAL FROM CONT1", nullptr));
        comboBox_FPDFieldSelectList->setItemText(1, QCoreApplication::translate("MainWindow", "FIELD SIGNAL FROM CONT2", nullptr));
        comboBox_FPDFieldSelectList->setItemText(2, QCoreApplication::translate("MainWindow", "FIELD SIGNAL TO LOW", nullptr));

        checkBox_FPDInvPol->setText(QCoreApplication::translate("MainWindow", "Invert Data Polarity", nullptr));
        label_FPDPixMode->setText(QCoreApplication::translate("MainWindow", "Pixel Mode", nullptr));
        pushButton_GetFPDMode->setText(QCoreApplication::translate("MainWindow", "Get", nullptr));
        pushButton_SetFPDMode->setText(QCoreApplication::translate("MainWindow", "Set", nullptr));
        groupBox_VideoSignalInfo->setTitle(QCoreApplication::translate("MainWindow", "Video Signal Information", nullptr));
        lineEdit_VidActvFirstPix->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_VidRsvd->setText(QCoreApplication::translate("MainWindow", "RESERVED", nullptr));
        label_VidActvFirstPix->setText(QCoreApplication::translate("MainWindow", "First Active Pixel", nullptr));
        label_VidActvPxPerLineInPix->setText(QCoreApplication::translate("MainWindow", "in Pixels", nullptr));
        label_VidHPol->setText(QCoreApplication::translate("MainWindow", "HSYNC Polarity", nullptr));
        lineEdit_VidActvLinesPerFrame->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        lineEdit_VidVFreq->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_VidHResInPix->setText(QCoreApplication::translate("MainWindow", "in Pixels", nullptr));
        label_VidPixPerLineInPix->setText(QCoreApplication::translate("MainWindow", "in Pixels", nullptr));
        label_VidPixClkinMHz->setText(QCoreApplication::translate("MainWindow", "in MHz", nullptr));
        label_VidVFreInHz->setText(QCoreApplication::translate("MainWindow", "in Hz", nullptr));
        lineEdit_VidRsvd->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        lineEdit_VidActvPixPerLine->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_GetVideoSingalInfo->setText(QCoreApplication::translate("MainWindow", "Get Video Info", nullptr));
        label_VidActvPixPerLine->setText(QCoreApplication::translate("MainWindow", "Active Pixels Per Line", nullptr));
        label_VidActvPixPerFrameInPix->setText(QCoreApplication::translate("MainWindow", "in Pixels", nullptr));
        label_VidActvFirstLine->setText(QCoreApplication::translate("MainWindow", "First Active Line", nullptr));
        label_VidSigStatus->setText(QCoreApplication::translate("MainWindow", "Signal Status", nullptr));
        lineEdit_VidLinesPerFrame->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_VidVPol->setText(QCoreApplication::translate("MainWindow", "VSYNC Polarity", nullptr));
        label_VidVFreq->setText(QCoreApplication::translate("MainWindow", "Vertical Frequency", nullptr));
        label_VidActvLinesPerFrame->setText(QCoreApplication::translate("MainWindow", "Active Pixels Per Frame", nullptr));
        label_VidPixClk->setText(QCoreApplication::translate("MainWindow", "Pixel Clock", nullptr));
        label_VidPixPerLine->setText(QCoreApplication::translate("MainWindow", "Total Pixels Per Line", nullptr));
        label_VidLinesPerFrame->setText(QCoreApplication::translate("MainWindow", "Total Lines Per Frame", nullptr));
        lineEdit_VidPixPerLine->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_VidHFreq->setText(QCoreApplication::translate("MainWindow", "Horizontal Frequency", nullptr));
        label_VidHFreInKHz->setText(QCoreApplication::translate("MainWindow", "in KHz", nullptr));
        label_VidStatus->setText(QCoreApplication::translate("MainWindow", "Status", nullptr));
        lineEdit_VidVRes->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        comboBox_VidLockSatus->setItemText(0, QCoreApplication::translate("MainWindow", "Stopped", nullptr));
        comboBox_VidLockSatus->setItemText(1, QCoreApplication::translate("MainWindow", "Processing", nullptr));
        comboBox_VidLockSatus->setItemText(2, QCoreApplication::translate("MainWindow", "Detected", nullptr));
        comboBox_VidLockSatus->setItemText(3, QCoreApplication::translate("MainWindow", "Lock Failed", nullptr));

        label_VidVRes->setText(QCoreApplication::translate("MainWindow", "Vertical Resolution", nullptr));
        label_VidHRes->setText(QCoreApplication::translate("MainWindow", "Horizontal Resolution", nullptr));
        label_VidLinesPerFramInPix->setText(QCoreApplication::translate("MainWindow", "in Pixels", nullptr));
        lineEdit_VidHRes->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_VResInPix->setText(QCoreApplication::translate("MainWindow", "in Pixels", nullptr));
        lineEdit_VidHFreq->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        comboBox_VidHPol->setItemText(0, QCoreApplication::translate("MainWindow", "Negative", nullptr));
        comboBox_VidHPol->setItemText(1, QCoreApplication::translate("MainWindow", "Positive", nullptr));

        lineEdit_VidActvFirstLine->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        comboBox_VidVPol->setItemText(0, QCoreApplication::translate("MainWindow", "Negative", nullptr));
        comboBox_VidVPol->setItemText(1, QCoreApplication::translate("MainWindow", "Positive", nullptr));

        lineEdit_VidPixClk->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_VidActvFirstPixPos->setText(QCoreApplication::translate("MainWindow", "Pixel Position", nullptr));
        label_VidActvFirsLinePos->setText(QCoreApplication::translate("MainWindow", "Line Position", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_Video_Mode), QCoreApplication::translate("MainWindow", "Video Mode", nullptr));
        groupBox_PatSeqSel->setTitle(QCoreApplication::translate("MainWindow", "Individual Pattern Settings", nullptr));
        comboBox_PatSeqSelPatColor->setItemText(0, QCoreApplication::translate("MainWindow", "Choose Color", nullptr));
        comboBox_PatSeqSelPatColor->setItemText(1, QCoreApplication::translate("MainWindow", "Red", nullptr));
        comboBox_PatSeqSelPatColor->setItemText(2, QCoreApplication::translate("MainWindow", "Green", nullptr));
        comboBox_PatSeqSelPatColor->setItemText(3, QCoreApplication::translate("MainWindow", "Yellow", nullptr));
        comboBox_PatSeqSelPatColor->setItemText(4, QCoreApplication::translate("MainWindow", "Blue", nullptr));
        comboBox_PatSeqSelPatColor->setItemText(5, QCoreApplication::translate("MainWindow", "Magenta", nullptr));
        comboBox_PatSeqSelPatColor->setItemText(6, QCoreApplication::translate("MainWindow", "Cyan", nullptr));
        comboBox_PatSeqSelPatColor->setItemText(7, QCoreApplication::translate("MainWindow", "White", nullptr));

        comboBox_PatSeqSelTrigType->setItemText(0, QCoreApplication::translate("MainWindow", "Internal Trigger", nullptr));
        comboBox_PatSeqSelTrigType->setItemText(1, QCoreApplication::translate("MainWindow", "External Positive", nullptr));
        comboBox_PatSeqSelTrigType->setItemText(2, QCoreApplication::translate("MainWindow", "External Negative", nullptr));
        comboBox_PatSeqSelTrigType->setItemText(3, QCoreApplication::translate("MainWindow", "No Trigger", nullptr));

        groupBox_PatSeqBitPlaneSel->setTitle(QCoreApplication::translate("MainWindow", "Bit Plane Selection", nullptr));
        label_PatSeqFrmOrImgIndex->setText(QCoreApplication::translate("MainWindow", "Image Index", nullptr));
        label_PatSeqPatBitDepthSel->setText(QCoreApplication::translate("MainWindow", "Bit Depth", nullptr));
        comboBox_PatSeqPatBitDepthSel->setItemText(0, QCoreApplication::translate("MainWindow", "1", nullptr));
        comboBox_PatSeqPatBitDepthSel->setItemText(1, QCoreApplication::translate("MainWindow", "2", nullptr));
        comboBox_PatSeqPatBitDepthSel->setItemText(2, QCoreApplication::translate("MainWindow", "3", nullptr));
        comboBox_PatSeqPatBitDepthSel->setItemText(3, QCoreApplication::translate("MainWindow", "4", nullptr));
        comboBox_PatSeqPatBitDepthSel->setItemText(4, QCoreApplication::translate("MainWindow", "5", nullptr));
        comboBox_PatSeqPatBitDepthSel->setItemText(5, QCoreApplication::translate("MainWindow", "6", nullptr));
        comboBox_PatSeqPatBitDepthSel->setItemText(6, QCoreApplication::translate("MainWindow", "7", nullptr));
        comboBox_PatSeqPatBitDepthSel->setItemText(7, QCoreApplication::translate("MainWindow", "8", nullptr));

        label_PatSeqBitPlaneNum->setText(QCoreApplication::translate("MainWindow", "Bit Plane", nullptr));
        comboBox_PatSeqBitPlaneNum->setItemText(0, QCoreApplication::translate("MainWindow", "G0", nullptr));
        comboBox_PatSeqBitPlaneNum->setItemText(1, QCoreApplication::translate("MainWindow", "G1", nullptr));
        comboBox_PatSeqBitPlaneNum->setItemText(2, QCoreApplication::translate("MainWindow", "G2", nullptr));
        comboBox_PatSeqBitPlaneNum->setItemText(3, QCoreApplication::translate("MainWindow", "G3", nullptr));
        comboBox_PatSeqBitPlaneNum->setItemText(4, QCoreApplication::translate("MainWindow", "G4", nullptr));
        comboBox_PatSeqBitPlaneNum->setItemText(5, QCoreApplication::translate("MainWindow", "G5", nullptr));
        comboBox_PatSeqBitPlaneNum->setItemText(6, QCoreApplication::translate("MainWindow", "G6", nullptr));
        comboBox_PatSeqBitPlaneNum->setItemText(7, QCoreApplication::translate("MainWindow", "G7", nullptr));
        comboBox_PatSeqBitPlaneNum->setItemText(8, QCoreApplication::translate("MainWindow", "R0", nullptr));
        comboBox_PatSeqBitPlaneNum->setItemText(9, QCoreApplication::translate("MainWindow", "R1", nullptr));
        comboBox_PatSeqBitPlaneNum->setItemText(10, QCoreApplication::translate("MainWindow", "R2", nullptr));
        comboBox_PatSeqBitPlaneNum->setItemText(11, QCoreApplication::translate("MainWindow", "R3", nullptr));
        comboBox_PatSeqBitPlaneNum->setItemText(12, QCoreApplication::translate("MainWindow", "R4", nullptr));
        comboBox_PatSeqBitPlaneNum->setItemText(13, QCoreApplication::translate("MainWindow", "R5", nullptr));
        comboBox_PatSeqBitPlaneNum->setItemText(14, QCoreApplication::translate("MainWindow", "R6", nullptr));
        comboBox_PatSeqBitPlaneNum->setItemText(15, QCoreApplication::translate("MainWindow", "R7", nullptr));
        comboBox_PatSeqBitPlaneNum->setItemText(16, QCoreApplication::translate("MainWindow", "B0", nullptr));
        comboBox_PatSeqBitPlaneNum->setItemText(17, QCoreApplication::translate("MainWindow", "B1", nullptr));
        comboBox_PatSeqBitPlaneNum->setItemText(18, QCoreApplication::translate("MainWindow", "B2", nullptr));
        comboBox_PatSeqBitPlaneNum->setItemText(19, QCoreApplication::translate("MainWindow", "B3", nullptr));
        comboBox_PatSeqBitPlaneNum->setItemText(20, QCoreApplication::translate("MainWindow", "B4", nullptr));
        comboBox_PatSeqBitPlaneNum->setItemText(21, QCoreApplication::translate("MainWindow", "B5", nullptr));
        comboBox_PatSeqBitPlaneNum->setItemText(22, QCoreApplication::translate("MainWindow", "B6", nullptr));
        comboBox_PatSeqBitPlaneNum->setItemText(23, QCoreApplication::translate("MainWindow", "B7", nullptr));


        const bool __sortingEnabled = listWidget_PatSeqBitPlanes->isSortingEnabled();
        listWidget_PatSeqBitPlanes->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget_PatSeqBitPlanes->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("MainWindow", "G0", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget_PatSeqBitPlanes->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("MainWindow", "G1", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = listWidget_PatSeqBitPlanes->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("MainWindow", "G2", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = listWidget_PatSeqBitPlanes->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("MainWindow", "G3", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = listWidget_PatSeqBitPlanes->item(4);
        ___qlistwidgetitem4->setText(QCoreApplication::translate("MainWindow", "G4", nullptr));
        QListWidgetItem *___qlistwidgetitem5 = listWidget_PatSeqBitPlanes->item(5);
        ___qlistwidgetitem5->setText(QCoreApplication::translate("MainWindow", "G5", nullptr));
        QListWidgetItem *___qlistwidgetitem6 = listWidget_PatSeqBitPlanes->item(6);
        ___qlistwidgetitem6->setText(QCoreApplication::translate("MainWindow", "G6", nullptr));
        QListWidgetItem *___qlistwidgetitem7 = listWidget_PatSeqBitPlanes->item(7);
        ___qlistwidgetitem7->setText(QCoreApplication::translate("MainWindow", "G7", nullptr));
        QListWidgetItem *___qlistwidgetitem8 = listWidget_PatSeqBitPlanes->item(8);
        ___qlistwidgetitem8->setText(QCoreApplication::translate("MainWindow", "R0", nullptr));
        QListWidgetItem *___qlistwidgetitem9 = listWidget_PatSeqBitPlanes->item(9);
        ___qlistwidgetitem9->setText(QCoreApplication::translate("MainWindow", "R1", nullptr));
        QListWidgetItem *___qlistwidgetitem10 = listWidget_PatSeqBitPlanes->item(10);
        ___qlistwidgetitem10->setText(QCoreApplication::translate("MainWindow", "R2", nullptr));
        QListWidgetItem *___qlistwidgetitem11 = listWidget_PatSeqBitPlanes->item(11);
        ___qlistwidgetitem11->setText(QCoreApplication::translate("MainWindow", "R3", nullptr));
        QListWidgetItem *___qlistwidgetitem12 = listWidget_PatSeqBitPlanes->item(12);
        ___qlistwidgetitem12->setText(QCoreApplication::translate("MainWindow", "R4", nullptr));
        QListWidgetItem *___qlistwidgetitem13 = listWidget_PatSeqBitPlanes->item(13);
        ___qlistwidgetitem13->setText(QCoreApplication::translate("MainWindow", "R5", nullptr));
        QListWidgetItem *___qlistwidgetitem14 = listWidget_PatSeqBitPlanes->item(14);
        ___qlistwidgetitem14->setText(QCoreApplication::translate("MainWindow", "R6", nullptr));
        QListWidgetItem *___qlistwidgetitem15 = listWidget_PatSeqBitPlanes->item(15);
        ___qlistwidgetitem15->setText(QCoreApplication::translate("MainWindow", "R7", nullptr));
        QListWidgetItem *___qlistwidgetitem16 = listWidget_PatSeqBitPlanes->item(16);
        ___qlistwidgetitem16->setText(QCoreApplication::translate("MainWindow", "B0", nullptr));
        QListWidgetItem *___qlistwidgetitem17 = listWidget_PatSeqBitPlanes->item(17);
        ___qlistwidgetitem17->setText(QCoreApplication::translate("MainWindow", "B1", nullptr));
        QListWidgetItem *___qlistwidgetitem18 = listWidget_PatSeqBitPlanes->item(18);
        ___qlistwidgetitem18->setText(QCoreApplication::translate("MainWindow", "B2", nullptr));
        QListWidgetItem *___qlistwidgetitem19 = listWidget_PatSeqBitPlanes->item(19);
        ___qlistwidgetitem19->setText(QCoreApplication::translate("MainWindow", "B3", nullptr));
        QListWidgetItem *___qlistwidgetitem20 = listWidget_PatSeqBitPlanes->item(20);
        ___qlistwidgetitem20->setText(QCoreApplication::translate("MainWindow", "B4", nullptr));
        QListWidgetItem *___qlistwidgetitem21 = listWidget_PatSeqBitPlanes->item(21);
        ___qlistwidgetitem21->setText(QCoreApplication::translate("MainWindow", "B5", nullptr));
        QListWidgetItem *___qlistwidgetitem22 = listWidget_PatSeqBitPlanes->item(22);
        ___qlistwidgetitem22->setText(QCoreApplication::translate("MainWindow", "B6", nullptr));
        QListWidgetItem *___qlistwidgetitem23 = listWidget_PatSeqBitPlanes->item(23);
        ___qlistwidgetitem23->setText(QCoreApplication::translate("MainWindow", "B7", nullptr));
        listWidget_PatSeqBitPlanes->setSortingEnabled(__sortingEnabled);

#if QT_CONFIG(tooltip)
        listWidget_PatSeqBitPlanes->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Click on the desired group to add to sequence</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_PatSeqInvPatData->setText(QCoreApplication::translate("MainWindow", "Invert Pattern Data", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_PatSeqInsBlackPat->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>You can change this individually later by right clicking on the pattern in the Sequence box below.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_PatSeqInsBlackPat->setText(QCoreApplication::translate("MainWindow", "Clear DMD after exposure", nullptr));
        pushButton_PatSeqAddPatToLut->setText(QCoreApplication::translate("MainWindow", "Add Pattern to Sequence", nullptr));
        groupBox_PatSeqDispLUT->setTitle(QCoreApplication::translate("MainWindow", "Pattern Sequence", nullptr));
        pushButton_PatSeqSendLUT->setText(QCoreApplication::translate("MainWindow", "Send", nullptr));
        pushButton_PatSeqReadLUTFrmHW->setText(QCoreApplication::translate("MainWindow", "Read", nullptr));
        pushButton_PatSeqClearLUTFrmGUI->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        radioButton_PatSeqDispRunOnce->setText(QCoreApplication::translate("MainWindow", "Play Once", nullptr));
        radioButton_PatSeqDispRunContinuous->setText(QCoreApplication::translate("MainWindow", "Repeat", nullptr));
        groupBox_PatSeqSourceAndTrigSel->setTitle(QCoreApplication::translate("MainWindow", "Sequence Settings", nullptr));
        groupBox_PatSeqPatSrc->setTitle(QCoreApplication::translate("MainWindow", "Pattern Source", nullptr));
        radioButton_PatSeqSrcFrmFlash->setText(QCoreApplication::translate("MainWindow", "Flash", nullptr));
        radioButton_PatSeqSrcFrmVideoPort->setText(QCoreApplication::translate("MainWindow", "Video port", nullptr));
        groupBox_PatSeqTrigMode->setTitle(QCoreApplication::translate("MainWindow", "Trigger Mode [ 0 or 1 ]", nullptr));
        radioButton_PatSeqTrigTypeIntExt->setText(QCoreApplication::translate("MainWindow", "Internal/External", nullptr));
        radioButton_PatSeqTrigTypeVSync->setText(QCoreApplication::translate("MainWindow", "Vsync", nullptr));
        groupBox_PatSeqPatDispTiming->setTitle(QCoreApplication::translate("MainWindow", "Timing", nullptr));
        label_PatSeqPatPeriod->setText(QCoreApplication::translate("MainWindow", "Pattern Period (us)", nullptr));
        lineEdit_PatSeqPatPeriod->setPlaceholderText(QCoreApplication::translate("MainWindow", "10000", nullptr));
        label_PatSeqPatExpTime->setText(QCoreApplication::translate("MainWindow", "Pattern Exposure (us)", nullptr));
        lineEdit_PatSeqPatExpTime->setPlaceholderText(QCoreApplication::translate("MainWindow", "10000", nullptr));
        label_PatSeqNote->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Use Send to update hardware and Read to retrieve sequence settings</p></body></html>", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_pat_seq_seq_settings), QCoreApplication::translate("MainWindow", "Sequence Settings", nullptr));
        groupBox_VarExpPatSeqSel->setTitle(QCoreApplication::translate("MainWindow", "Individual Pattern Settings", nullptr));
        comboBox_VarExpPatSeqSelPatColor->setItemText(0, QCoreApplication::translate("MainWindow", "Pat Color", nullptr));
        comboBox_VarExpPatSeqSelPatColor->setItemText(1, QCoreApplication::translate("MainWindow", "Red", nullptr));
        comboBox_VarExpPatSeqSelPatColor->setItemText(2, QCoreApplication::translate("MainWindow", "Green", nullptr));
        comboBox_VarExpPatSeqSelPatColor->setItemText(3, QCoreApplication::translate("MainWindow", "Yellow", nullptr));
        comboBox_VarExpPatSeqSelPatColor->setItemText(4, QCoreApplication::translate("MainWindow", "Blue", nullptr));
        comboBox_VarExpPatSeqSelPatColor->setItemText(5, QCoreApplication::translate("MainWindow", "Magenta", nullptr));
        comboBox_VarExpPatSeqSelPatColor->setItemText(6, QCoreApplication::translate("MainWindow", "Cyan", nullptr));
        comboBox_VarExpPatSeqSelPatColor->setItemText(7, QCoreApplication::translate("MainWindow", "White", nullptr));

        comboBox_VarExpPatSeqSelPatColor->setCurrentText(QCoreApplication::translate("MainWindow", "Pat Color", nullptr));
        comboBox_VarExpPatSeqSelTrigType->setItemText(0, QCoreApplication::translate("MainWindow", "Internal Trigger", nullptr));
        comboBox_VarExpPatSeqSelTrigType->setItemText(1, QCoreApplication::translate("MainWindow", "External Positive", nullptr));
        comboBox_VarExpPatSeqSelTrigType->setItemText(2, QCoreApplication::translate("MainWindow", "External Negative", nullptr));
        comboBox_VarExpPatSeqSelTrigType->setItemText(3, QCoreApplication::translate("MainWindow", "No Trigger", nullptr));

        label_VarExpPatSeqFrmOrImgIndex->setText(QCoreApplication::translate("MainWindow", "Image Index", nullptr));
        label_VarExpPatSeqPatBitDepthSel->setText(QCoreApplication::translate("MainWindow", "Bit Depth", nullptr));
        comboBox_VarExpPatSeqPatBitDepthSel->setItemText(0, QCoreApplication::translate("MainWindow", "1", nullptr));
        comboBox_VarExpPatSeqPatBitDepthSel->setItemText(1, QCoreApplication::translate("MainWindow", "2", nullptr));
        comboBox_VarExpPatSeqPatBitDepthSel->setItemText(2, QCoreApplication::translate("MainWindow", "3", nullptr));
        comboBox_VarExpPatSeqPatBitDepthSel->setItemText(3, QCoreApplication::translate("MainWindow", "4", nullptr));
        comboBox_VarExpPatSeqPatBitDepthSel->setItemText(4, QCoreApplication::translate("MainWindow", "5", nullptr));
        comboBox_VarExpPatSeqPatBitDepthSel->setItemText(5, QCoreApplication::translate("MainWindow", "6", nullptr));
        comboBox_VarExpPatSeqPatBitDepthSel->setItemText(6, QCoreApplication::translate("MainWindow", "7", nullptr));
        comboBox_VarExpPatSeqPatBitDepthSel->setItemText(7, QCoreApplication::translate("MainWindow", "8", nullptr));


        const bool __sortingEnabled1 = listWidget_VarExpPatSeqBitPlanes->isSortingEnabled();
        listWidget_VarExpPatSeqBitPlanes->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem24 = listWidget_VarExpPatSeqBitPlanes->item(0);
        ___qlistwidgetitem24->setText(QCoreApplication::translate("MainWindow", "G0", nullptr));
        QListWidgetItem *___qlistwidgetitem25 = listWidget_VarExpPatSeqBitPlanes->item(1);
        ___qlistwidgetitem25->setText(QCoreApplication::translate("MainWindow", "G1", nullptr));
        QListWidgetItem *___qlistwidgetitem26 = listWidget_VarExpPatSeqBitPlanes->item(2);
        ___qlistwidgetitem26->setText(QCoreApplication::translate("MainWindow", "G2", nullptr));
        QListWidgetItem *___qlistwidgetitem27 = listWidget_VarExpPatSeqBitPlanes->item(3);
        ___qlistwidgetitem27->setText(QCoreApplication::translate("MainWindow", "G3", nullptr));
        QListWidgetItem *___qlistwidgetitem28 = listWidget_VarExpPatSeqBitPlanes->item(4);
        ___qlistwidgetitem28->setText(QCoreApplication::translate("MainWindow", "G4", nullptr));
        QListWidgetItem *___qlistwidgetitem29 = listWidget_VarExpPatSeqBitPlanes->item(5);
        ___qlistwidgetitem29->setText(QCoreApplication::translate("MainWindow", "G5", nullptr));
        QListWidgetItem *___qlistwidgetitem30 = listWidget_VarExpPatSeqBitPlanes->item(6);
        ___qlistwidgetitem30->setText(QCoreApplication::translate("MainWindow", "G6", nullptr));
        QListWidgetItem *___qlistwidgetitem31 = listWidget_VarExpPatSeqBitPlanes->item(7);
        ___qlistwidgetitem31->setText(QCoreApplication::translate("MainWindow", "G7", nullptr));
        QListWidgetItem *___qlistwidgetitem32 = listWidget_VarExpPatSeqBitPlanes->item(8);
        ___qlistwidgetitem32->setText(QCoreApplication::translate("MainWindow", "R0", nullptr));
        QListWidgetItem *___qlistwidgetitem33 = listWidget_VarExpPatSeqBitPlanes->item(9);
        ___qlistwidgetitem33->setText(QCoreApplication::translate("MainWindow", "R1", nullptr));
        QListWidgetItem *___qlistwidgetitem34 = listWidget_VarExpPatSeqBitPlanes->item(10);
        ___qlistwidgetitem34->setText(QCoreApplication::translate("MainWindow", "R2", nullptr));
        QListWidgetItem *___qlistwidgetitem35 = listWidget_VarExpPatSeqBitPlanes->item(11);
        ___qlistwidgetitem35->setText(QCoreApplication::translate("MainWindow", "R3", nullptr));
        QListWidgetItem *___qlistwidgetitem36 = listWidget_VarExpPatSeqBitPlanes->item(12);
        ___qlistwidgetitem36->setText(QCoreApplication::translate("MainWindow", "R4", nullptr));
        QListWidgetItem *___qlistwidgetitem37 = listWidget_VarExpPatSeqBitPlanes->item(13);
        ___qlistwidgetitem37->setText(QCoreApplication::translate("MainWindow", "R5", nullptr));
        QListWidgetItem *___qlistwidgetitem38 = listWidget_VarExpPatSeqBitPlanes->item(14);
        ___qlistwidgetitem38->setText(QCoreApplication::translate("MainWindow", "R6", nullptr));
        QListWidgetItem *___qlistwidgetitem39 = listWidget_VarExpPatSeqBitPlanes->item(15);
        ___qlistwidgetitem39->setText(QCoreApplication::translate("MainWindow", "R7", nullptr));
        QListWidgetItem *___qlistwidgetitem40 = listWidget_VarExpPatSeqBitPlanes->item(16);
        ___qlistwidgetitem40->setText(QCoreApplication::translate("MainWindow", "B0", nullptr));
        QListWidgetItem *___qlistwidgetitem41 = listWidget_VarExpPatSeqBitPlanes->item(17);
        ___qlistwidgetitem41->setText(QCoreApplication::translate("MainWindow", "B1", nullptr));
        QListWidgetItem *___qlistwidgetitem42 = listWidget_VarExpPatSeqBitPlanes->item(18);
        ___qlistwidgetitem42->setText(QCoreApplication::translate("MainWindow", "B2", nullptr));
        QListWidgetItem *___qlistwidgetitem43 = listWidget_VarExpPatSeqBitPlanes->item(19);
        ___qlistwidgetitem43->setText(QCoreApplication::translate("MainWindow", "B3", nullptr));
        QListWidgetItem *___qlistwidgetitem44 = listWidget_VarExpPatSeqBitPlanes->item(20);
        ___qlistwidgetitem44->setText(QCoreApplication::translate("MainWindow", "B4", nullptr));
        QListWidgetItem *___qlistwidgetitem45 = listWidget_VarExpPatSeqBitPlanes->item(21);
        ___qlistwidgetitem45->setText(QCoreApplication::translate("MainWindow", "B5", nullptr));
        QListWidgetItem *___qlistwidgetitem46 = listWidget_VarExpPatSeqBitPlanes->item(22);
        ___qlistwidgetitem46->setText(QCoreApplication::translate("MainWindow", "B6", nullptr));
        QListWidgetItem *___qlistwidgetitem47 = listWidget_VarExpPatSeqBitPlanes->item(23);
        ___qlistwidgetitem47->setText(QCoreApplication::translate("MainWindow", "B7", nullptr));
        listWidget_VarExpPatSeqBitPlanes->setSortingEnabled(__sortingEnabled1);

#if QT_CONFIG(tooltip)
        listWidget_VarExpPatSeqBitPlanes->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Click on the desired group to add to sequence</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_VarExpPatSeqPatExpTime->setText(QCoreApplication::translate("MainWindow", "Pat Exposure", nullptr));
        lineEdit_VarExpPatSeqPatExpTime->setPlaceholderText(QCoreApplication::translate("MainWindow", "10000", nullptr));
        label_VarExpPatSeqPatPeriod->setText(QCoreApplication::translate("MainWindow", "Pat Period", nullptr));
        lineEdit_VarExpPatSeqPatPeriod->setPlaceholderText(QCoreApplication::translate("MainWindow", "10000", nullptr));
        checkBox_VarExpPatSeqInvPatData->setText(QCoreApplication::translate("MainWindow", "Invert Pattern Data", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_VarExpPatSeqInsBlackPat->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>You can change this individually later by right clicking on the pattern in the Sequence box below.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_VarExpPatSeqInsBlackPat->setText(QCoreApplication::translate("MainWindow", "Clear DMD after exposure", nullptr));
        pushButton_VarExpPatSeqAddPatToLut->setText(QCoreApplication::translate("MainWindow", "Add Pattern to Sequence", nullptr));
        seqGroupBox_4->setTitle(QCoreApplication::translate("MainWindow", "Pattern Sequence", nullptr));
        pushButton_VarExpPatSeqSendLUT->setText(QCoreApplication::translate("MainWindow", "Send", nullptr));
        pushButton_VarExpPatSeqReadLUTFrmHW->setText(QCoreApplication::translate("MainWindow", "Read", nullptr));
        pushButton_VarExpPatSeqClearLUTFrmGUI->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        radioButton_VarExpPatSeqDispRunOnce->setText(QCoreApplication::translate("MainWindow", "Play Once", nullptr));
        radioButton_VarExpPatSeqDispRunContinuous->setText(QCoreApplication::translate("MainWindow", "Repeat", nullptr));
        groupBox_VarExpPatSeqSourceAndTrigSel->setTitle(QCoreApplication::translate("MainWindow", "Sequence Settings", nullptr));
        groupBox_VarExpPatSeqPatSrc->setTitle(QCoreApplication::translate("MainWindow", "Pattern Source", nullptr));
        radioButton_VarExpPatSeqSrcFrmFlash->setText(QCoreApplication::translate("MainWindow", "Flash", nullptr));
        radioButton_VarExpPatSeqSrcFrmVideoPort->setText(QCoreApplication::translate("MainWindow", "Video port", nullptr));
        groupBox_VarExpPatSeqTrigMode->setTitle(QCoreApplication::translate("MainWindow", "Trigger Mode [ 3 or 4 ]", nullptr));
        radioButton_VarExpPatSeqTrigTypeIntExt->setText(QCoreApplication::translate("MainWindow", "Internal/External", nullptr));
        radioButton_VarExpPatSeqTrigTypeVSync->setText(QCoreApplication::translate("MainWindow", "Vsync", nullptr));
        label_VarExpPatSeqNote->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Use Send to update hardware and Read to retrieve sequence settings</p></body></html>", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_8), QCoreApplication::translate("MainWindow", "Sequence Settings [Variable Exposure]", nullptr));
        groupBox_PatSeqCtrl->setTitle(QCoreApplication::translate("MainWindow", "Sequence Validation and Control", nullptr));
        pushButton_PatSeqValIndExpOOR->setText(QString());
        label_PatSeqValIndExpOOR->setText(QCoreApplication::translate("MainWindow", "Exposure/Period OOR", nullptr));
        pushButton_PatSeqValIndPatNumOOR->setText(QString());
        label_PatSeqValIndPatNumOOR->setText(QCoreApplication::translate("MainWindow", "Pattern Number OOR", nullptr));
        pushButton_PatSeqValIndTrigOutOverlap->setText(QString());
        label_PatSeqValIndTrigOutOverlap->setText(QCoreApplication::translate("MainWindow", "Cont trig out overlaps black", nullptr));
        pushButton_PatSeqValIndBlkVecMiss->setText(QString());
        label_PatSeqValIndBlkVecMiss->setText(QCoreApplication::translate("MainWindow", "Black vector missing", nullptr));
        pushButton_PatSeqValPatPeriodShort->setText(QString());
        label_PatSeqValPatPeriodShort->setText(QCoreApplication::translate("MainWindow", "Period, Exposure diff < 230", nullptr));
        label_PatSeqValStatus->setText(QCoreApplication::translate("MainWindow", "Sequence Validated", nullptr));
        pushButton_PatSeqValStatus->setText(QString());
        pushButton_ValidatePatSeq->setText(QCoreApplication::translate("MainWindow", "Validate Sequence", nullptr));
        pushButton_PatSeqCtrlStart->setText(QCoreApplication::translate("MainWindow", "Play", nullptr));
        pushButton_PatSeqCtrlPause->setText(QCoreApplication::translate("MainWindow", "Pause", nullptr));
        pushButton_PatSeqCtrlStop->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_PatSeqCtrlGlobalDataInvert->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>If set, will invert data for all patterns - i.e., data value 0 will turn ON the mirror and value 1 will turn off the mirror.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_PatSeqCtrlGlobalDataInvert->setText(QCoreApplication::translate("MainWindow", "Global Data Invert", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab), QCoreApplication::translate("MainWindow", "Pattern Sequence Start/Stop/Pause", nullptr));
        groupBox_ImgLoadTiming->setTitle(QCoreApplication::translate("MainWindow", "Image Load Timing", nullptr));
        label_ImgLdTmImgIndex->setText(QCoreApplication::translate("MainWindow", "Image Index", nullptr));
        pushButton_GetImgLoadTimingInfo->setText(QCoreApplication::translate("MainWindow", "Get Load Image Timing", nullptr));
        label_ImgLdTmInMs->setText(QCoreApplication::translate("MainWindow", "ms", nullptr));
        label_ImgLdTmNote1->setText(QCoreApplication::translate("MainWindow", "Use this option to determine approximate time (in ms) required to load an image from Flash to frame memory.", nullptr));
        label_ImgLdTmNote2->setText(QCoreApplication::translate("MainWindow", "Use this option when Pattern Sequence is NOT in not in running mode.", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_img_load_timing), QCoreApplication::translate("MainWindow", "Image Load Timing", nullptr));
        label_TrigOut1FDly->setText(QCoreApplication::translate("MainWindow", "Trigger 1 Out Falling Edge Delay", nullptr));
        label_Trig1OutFDlyVal->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>0.00 us</p></body></html>", nullptr));
        label_Trig2OutRDlyVal->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>0.00 us</p></body></html>", nullptr));
        checkBox_InvertTrig2Out->setText(QCoreApplication::translate("MainWindow", "Invert Trigger 2 Output", nullptr));
        label_TrigOut2PulsePerNumPat->setText(QCoreApplication::translate("MainWindow", "Trigger 2 Patterns per Pulse", nullptr));
        pushButton_GetTrigConfig->setText(QCoreApplication::translate("MainWindow", "Get", nullptr));
        pushButton_SetTrigConfig->setText(QCoreApplication::translate("MainWindow", "Set", nullptr));
        label_TrigOut2RDly->setText(QCoreApplication::translate("MainWindow", "Trigger 2 Out Rising Edge Delay", nullptr));
        label_TrigIn1->setText(QCoreApplication::translate("MainWindow", "Trigger 1 In Rising Edge Delay", nullptr));
        label_TrigOut1RDly->setText(QCoreApplication::translate("MainWindow", "Trigger 1 Out Rising Edge Delay", nullptr));
        label_TrigIn2Pol->setText(QCoreApplication::translate("MainWindow", "Trigger 2 In Polarity", nullptr));
        label_TrigIn1Value->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>0.00 us</p></body></html>", nullptr));
        checkBox_InvertTrig1Out->setText(QCoreApplication::translate("MainWindow", "Invert Trigger 1 Output", nullptr));
        label_Trig1OutRDlyVal->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>0.00 us</p></body></html>", nullptr));
        comboBox_TrigIn2Pol->setItemText(0, QCoreApplication::translate("MainWindow", "RISING", nullptr));
        comboBox_TrigIn2Pol->setItemText(1, QCoreApplication::translate("MainWindow", "FALLING", nullptr));

        label_TrigIn2PolDesc->setText(QCoreApplication::translate("MainWindow", "Applicable in Trigger Mode = 2; Advance pattern on set edge", nullptr));
        textEdit_TriggerCtrlNote->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8.25pt; font-weight:600;\">Trigger Control settings applicable ONLY in [Pattern Sequence Mode]; applying settings in [Video Mode] causes undesired effect.</span><span style=\" font-size:8.25pt;\"> </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8.25pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-siz"
                        "e:8.25pt;\">Before updating Trigger Settings in Pattern Sequence Mode, first, [Stop] Pattern Display Sequence if it is running, then [SET] new the trigger settings, validate the new settings via [Validate Sequence] option under Pattern Sequence Start/Stop/Pause tab, then start the Pattern Display Sequence.</span></p></body></html>", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_pat_seq_trig_ctrl), QCoreApplication::translate("MainWindow", "Trigger Controls", nullptr));
        pushButton_GetLEDDlyCtrlConfig->setText(QCoreApplication::translate("MainWindow", "Get", nullptr));
        pushButton_SetLedDlyCtrlConfig->setText(QCoreApplication::translate("MainWindow", "Set", nullptr));
        label_LedDlyCtrlRedREdgeDlyVal->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>0.00 us</p></body></html>", nullptr));
        label_LedDlyCtrlBlueREdgeDlyVal->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>0.00 us</p></body></html>", nullptr));
        label_LedDlyCtrlGreenREdgeDlyVal->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>0.00 us</p></body></html>", nullptr));
        label_LedDlyCtrlRedFEdgeDlyVal->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>0.00 us</p></body></html>", nullptr));
        label_LedDlyCtrlRedREdgeDly->setText(QCoreApplication::translate("MainWindow", "Red LED Rising Edge Delay", nullptr));
        label_LedDlyCtrlGreenREdgeDly->setText(QCoreApplication::translate("MainWindow", "Green LED Rising Edge Delay", nullptr));
        label_LedDlyCtrlBlueFEdgeDly->setText(QCoreApplication::translate("MainWindow", "Blue LED Falling Edge Delay", nullptr));
        label_LedDlyCtrlRedFEdgeDly->setText(QCoreApplication::translate("MainWindow", "Red LED Falling Edge Delay", nullptr));
        label_LedDlyCtrlGreenFEdgeDlyVal->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>0.00 us</p></body></html>", nullptr));
        label_LedDlyCtrlBlueFEdgeDlyVal->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>0.00 us</p></body></html>", nullptr));
        label_LedDlyCtrlGreenFEdgeDly->setText(QCoreApplication::translate("MainWindow", "Green LED Falling Edge Delay", nullptr));
        label_LedDlyCtrlBlueREdgeDly->setText(QCoreApplication::translate("MainWindow", "Blue LED Rising Edge Delay", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_pat_seq_led_dly), QCoreApplication::translate("MainWindow", "LED Delay Control", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_Pattern_Seq), QCoreApplication::translate("MainWindow", "Pattern Sequence", nullptr));
        groupBox_I2C0_Master->setTitle(QCoreApplication::translate("MainWindow", "I2C0 (Master) Read/Write Control", nullptr));
        label_i2cDevAddr->setText(QCoreApplication::translate("MainWindow", "Device Address (Hex)", nullptr));
        comboBox_i2cAddrMode->setItemText(0, QCoreApplication::translate("MainWindow", "7-Bit", nullptr));
        comboBox_i2cAddrMode->setItemText(1, QCoreApplication::translate("MainWindow", "10-Bit", nullptr));

        label_i2cBytesToRead->setText(QCoreApplication::translate("MainWindow", "Bytes to Read", nullptr));
        label_i2cAddrMode->setText(QCoreApplication::translate("MainWindow", "Addressing Mode", nullptr));
        label_i2cWriteData->setText(QCoreApplication::translate("MainWindow", "Write Data (Hex)", nullptr));
        label_i2cReadData->setText(QCoreApplication::translate("MainWindow", "Read Data (Hex)", nullptr));
        label_i2cClockRate->setText(QCoreApplication::translate("MainWindow", "Clock Rate (Hz)", nullptr));
        pushButton_i2cRead->setText(QCoreApplication::translate("MainWindow", "Read", nullptr));
        pushButton_i2cWrite->setText(QCoreApplication::translate("MainWindow", "Write", nullptr));
        groupBox_PWMSetup->setTitle(QCoreApplication::translate("MainWindow", "PWM Output Setup", nullptr));
        label_PWMPulsePeriod->setText(QCoreApplication::translate("MainWindow", "Pulse period (1=53.57 ns)", nullptr));
        label_PWMDutyCycle->setText(QCoreApplication::translate("MainWindow", "Duty Cycle", nullptr));
        checkBox_PWMEnable->setText(QCoreApplication::translate("MainWindow", "Enable", nullptr));
        comboBox_PWMChannel->setItemText(0, QCoreApplication::translate("MainWindow", "Channel 0 (GPIO_0)", nullptr));
        comboBox_PWMChannel->setItemText(1, QCoreApplication::translate("MainWindow", "Channel 2 (GPIO_2)", nullptr));

        pushButton_GetPWMConfig->setText(QCoreApplication::translate("MainWindow", "Get", nullptr));
        pushButton_SetPWMConfig->setText(QCoreApplication::translate("MainWindow", "Set", nullptr));
        groupBox_GPIOConfig->setTitle(QCoreApplication::translate("MainWindow", "GPIO Configuration", nullptr));
        checkBox_GPIOEnAltFun->setText(QCoreApplication::translate("MainWindow", "Enable Alt Function", nullptr));
        label_GPIOSelPin->setText(QCoreApplication::translate("MainWindow", "Select GPIO Pin", nullptr));
        label_GPIOPinDir->setText(QCoreApplication::translate("MainWindow", "Pin Direction", nullptr));
        comboBox_GPIOPinDir->setItemText(0, QCoreApplication::translate("MainWindow", "Input", nullptr));
        comboBox_GPIOPinDir->setItemText(1, QCoreApplication::translate("MainWindow", "Output", nullptr));

        label_GPIOPinState->setText(QCoreApplication::translate("MainWindow", "Pin State", nullptr));
        comboBox_GPIOPinState->setItemText(0, QCoreApplication::translate("MainWindow", "LOW", nullptr));
        comboBox_GPIOPinState->setItemText(1, QCoreApplication::translate("MainWindow", "HIGH", nullptr));

        comboBox_GPIOPin->setItemText(0, QCoreApplication::translate("MainWindow", "0", nullptr));
        comboBox_GPIOPin->setItemText(1, QCoreApplication::translate("MainWindow", "FAN PWM", nullptr));
        comboBox_GPIOPin->setItemText(2, QCoreApplication::translate("MainWindow", "2", nullptr));
        comboBox_GPIOPin->setItemText(3, QCoreApplication::translate("MainWindow", "LED STATUS RED", nullptr));
        comboBox_GPIOPin->setItemText(4, QCoreApplication::translate("MainWindow", "LED STATUS GRN", nullptr));
        comboBox_GPIOPin->setItemText(5, QCoreApplication::translate("MainWindow", "5", nullptr));
        comboBox_GPIOPin->setItemText(6, QCoreApplication::translate("MainWindow", "6", nullptr));
        comboBox_GPIOPin->setItemText(7, QCoreApplication::translate("MainWindow", "FAN LOCKED", nullptr));
        comboBox_GPIOPin->setItemText(8, QCoreApplication::translate("MainWindow", "I2C1 SCL", nullptr));
        comboBox_GPIOPin->setItemText(9, QCoreApplication::translate("MainWindow", "I2C1 SDA", nullptr));
        comboBox_GPIOPin->setItemText(10, QCoreApplication::translate("MainWindow", "TRIG OUT 1", nullptr));
        comboBox_GPIOPin->setItemText(11, QCoreApplication::translate("MainWindow", "11", nullptr));
        comboBox_GPIOPin->setItemText(12, QCoreApplication::translate("MainWindow", "12", nullptr));
        comboBox_GPIOPin->setItemText(13, QCoreApplication::translate("MainWindow", "13", nullptr));
        comboBox_GPIOPin->setItemText(14, QCoreApplication::translate("MainWindow", "14", nullptr));
        comboBox_GPIOPin->setItemText(15, QCoreApplication::translate("MainWindow", "15", nullptr));
        comboBox_GPIOPin->setItemText(16, QCoreApplication::translate("MainWindow", "FLASH ADDR 21", nullptr));
        comboBox_GPIOPin->setItemText(17, QCoreApplication::translate("MainWindow", "FLASH ADDR 22", nullptr));
        comboBox_GPIOPin->setItemText(18, QCoreApplication::translate("MainWindow", "USB ENZ", nullptr));
        comboBox_GPIOPin->setItemText(19, QCoreApplication::translate("MainWindow", "HOLD IN BOOT", nullptr));
        comboBox_GPIOPin->setItemText(20, QCoreApplication::translate("MainWindow", "20", nullptr));
        comboBox_GPIOPin->setItemText(21, QCoreApplication::translate("MainWindow", "21", nullptr));
        comboBox_GPIOPin->setItemText(22, QCoreApplication::translate("MainWindow", "PWR ON/OFF", nullptr));
        comboBox_GPIOPin->setItemText(23, QCoreApplication::translate("MainWindow", "EXT PWR ON", nullptr));
        comboBox_GPIOPin->setItemText(24, QCoreApplication::translate("MainWindow", "24", nullptr));
        comboBox_GPIOPin->setItemText(25, QCoreApplication::translate("MainWindow", "25", nullptr));
        comboBox_GPIOPin->setItemText(26, QCoreApplication::translate("MainWindow", "INIT DONE", nullptr));
        comboBox_GPIOPin->setItemText(27, QCoreApplication::translate("MainWindow", "27", nullptr));
        comboBox_GPIOPin->setItemText(28, QCoreApplication::translate("MainWindow", "28", nullptr));
        comboBox_GPIOPin->setItemText(29, QCoreApplication::translate("MainWindow", "29", nullptr));
        comboBox_GPIOPin->setItemText(30, QCoreApplication::translate("MainWindow", "I2C/USB ADDR CFG", nullptr));
        comboBox_GPIOPin->setItemText(31, QCoreApplication::translate("MainWindow", "TRIG IN 1", nullptr));
        comboBox_GPIOPin->setItemText(32, QCoreApplication::translate("MainWindow", "TRIG IN 2", nullptr));
        comboBox_GPIOPin->setItemText(33, QCoreApplication::translate("MainWindow", "33", nullptr));
        comboBox_GPIOPin->setItemText(34, QCoreApplication::translate("MainWindow", "34", nullptr));
        comboBox_GPIOPin->setItemText(35, QCoreApplication::translate("MainWindow", "35", nullptr));
        comboBox_GPIOPin->setItemText(36, QCoreApplication::translate("MainWindow", "36", nullptr));
        comboBox_GPIOPin->setItemText(37, QCoreApplication::translate("MainWindow", "TRIG OUT 2", nullptr));

        label_GPIOOutputType->setText(QCoreApplication::translate("MainWindow", "Output Type", nullptr));
        comboBox_GPIOOutType->setItemText(0, QCoreApplication::translate("MainWindow", "NORMAL", nullptr));
        comboBox_GPIOOutType->setItemText(1, QCoreApplication::translate("MainWindow", "OPEN DRAIN", nullptr));

        pushBox_GetGPIOConfig->setText(QCoreApplication::translate("MainWindow", "Get", nullptr));
        pushBox_SetGPIOConfig->setText(QCoreApplication::translate("MainWindow", "Set", nullptr));
        groupBox_PWMCapSetup->setTitle(QCoreApplication::translate("MainWindow", "PWM Capture Setup", nullptr));
        label_PWMCapSampleRate->setText(QCoreApplication::translate("MainWindow", "PWM Sample rate (285 Hz - 18.6 MHz)", nullptr));
        label_PWMCapDutyCycleReadback->setText(QCoreApplication::translate("MainWindow", "Duty Cycle", nullptr));
        checkBox_PWMCapEnable->setText(QCoreApplication::translate("MainWindow", "Enable", nullptr));
        comboBox_PWMCapChannel->setItemText(0, QCoreApplication::translate("MainWindow", "Channel 0 (GPIO_5)", nullptr));
        comboBox_PWMCapChannel->setItemText(1, QCoreApplication::translate("MainWindow", "Channel 1 (GPIO_6)", nullptr));

        pushButton_PWMCapRead->setText(QCoreApplication::translate("MainWindow", "PWM Capture Read", nullptr));
        pushButton_GetPWMCapConfig->setText(QCoreApplication::translate("MainWindow", "Get", nullptr));
        pushButton_SetPWMCapConfig->setText(QCoreApplication::translate("MainWindow", "Set", nullptr));
        groupBox_GPClk->setTitle(QCoreApplication::translate("MainWindow", "General Purpose Clock", nullptr));
        checkBox_GpClk->setText(QCoreApplication::translate("MainWindow", "Enable Clock", nullptr));
        comboBox_GpClk->setItemText(0, QCoreApplication::translate("MainWindow", "CLK_OUT1", nullptr));
        comboBox_GpClk->setItemText(1, QCoreApplication::translate("MainWindow", "CLK_OUT2", nullptr));

        label_GpClkDiv->setText(QCoreApplication::translate("MainWindow", "Divide Clock By", nullptr));
        label_GpClkFreq->setText(QCoreApplication::translate("MainWindow", "Clock Frequency", nullptr));
        label_GpClkFreqVal->setText(QCoreApplication::translate("MainWindow", "48 Mhz", nullptr));
        pushButton_GetGpClk->setText(QCoreApplication::translate("MainWindow", "Get", nullptr));
        pushButton_SetGpClk->setText(QCoreApplication::translate("MainWindow", "Set", nullptr));
        textEdit_i2c0_port_usage->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8.25pt; font-weight:600; text-decoration: underline;\">I2C0 Master Control usage</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8.25pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8.25pt; font-weight:600;\">Clock Rate:</span><span style=\" font-size:8.25pt;\"> </span></p>\n"
"<"
                        "p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8.25pt;\">Valid range &lt;18194 to 400000&gt;</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8.25pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8.25pt; font-weight:600;\">Device Address:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8.25pt;\">For 7-bit address, [b6:b0]</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8.25pt;\">Device Address must be set to [b6:b0] &lt;&lt; 1</span></p>\n"
"<p style=\" margin"
                        "-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8.25pt;\">For 10-bit address,[b9:b0]</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8.25pt;\">Device Address must be set to [b9:0] &lt;&lt; 1</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8.25pt;\">Note: The lsb Read/Write bit automatically appended by the controller</span></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_Peripheral_Ctrl), QCoreApplication::translate("MainWindow", "Peripheral Control", nullptr));
        label_CreaImgInputBMPFileName->setText(QCoreApplication::translate("MainWindow", "Input bmp File", nullptr));
        label_CreaImgInputBMPFileImgPreview->setText(QString());
        label_CreaImgOutImgPreview->setText(QString());
        pushButton_CreaImgClearOutFileContents->setText(QCoreApplication::translate("MainWindow", "Clear Output File", nullptr));
        label_CreaImgOutputBMPFileName->setText(QCoreApplication::translate("MainWindow", "Output bmp file", nullptr));
        pushButton_CreaImgSelectBMPFile->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        label_CreaImgPattPosition->setText(QCoreApplication::translate("MainWindow", "At bit(s) position in the destination file", nullptr));
        label_CreaImgBitDepth->setText(QCoreApplication::translate("MainWindow", "Bit depth", nullptr));
        comboBox_CreaImgFileBitDepth->setItemText(0, QCoreApplication::translate("MainWindow", "1", nullptr));
        comboBox_CreaImgFileBitDepth->setItemText(1, QCoreApplication::translate("MainWindow", "2", nullptr));
        comboBox_CreaImgFileBitDepth->setItemText(2, QCoreApplication::translate("MainWindow", "3", nullptr));
        comboBox_CreaImgFileBitDepth->setItemText(3, QCoreApplication::translate("MainWindow", "4", nullptr));
        comboBox_CreaImgFileBitDepth->setItemText(4, QCoreApplication::translate("MainWindow", "5", nullptr));
        comboBox_CreaImgFileBitDepth->setItemText(5, QCoreApplication::translate("MainWindow", "6", nullptr));
        comboBox_CreaImgFileBitDepth->setItemText(6, QCoreApplication::translate("MainWindow", "7", nullptr));
        comboBox_CreaImgFileBitDepth->setItemText(7, QCoreApplication::translate("MainWindow", "8", nullptr));

        pushButton_CreaImgAddToOutFile->setText(QCoreApplication::translate("MainWindow", "Add to Output File", nullptr));
        comboBox_CreaImgFilePatPos->setItemText(0, QCoreApplication::translate("MainWindow", "B0", nullptr));
        comboBox_CreaImgFilePatPos->setItemText(1, QCoreApplication::translate("MainWindow", "B1", nullptr));
        comboBox_CreaImgFilePatPos->setItemText(2, QCoreApplication::translate("MainWindow", "B2", nullptr));
        comboBox_CreaImgFilePatPos->setItemText(3, QCoreApplication::translate("MainWindow", "B3", nullptr));
        comboBox_CreaImgFilePatPos->setItemText(4, QCoreApplication::translate("MainWindow", "B4", nullptr));
        comboBox_CreaImgFilePatPos->setItemText(5, QCoreApplication::translate("MainWindow", "B5", nullptr));
        comboBox_CreaImgFilePatPos->setItemText(6, QCoreApplication::translate("MainWindow", "B6", nullptr));
        comboBox_CreaImgFilePatPos->setItemText(7, QCoreApplication::translate("MainWindow", "B7", nullptr));
        comboBox_CreaImgFilePatPos->setItemText(8, QCoreApplication::translate("MainWindow", "G0", nullptr));
        comboBox_CreaImgFilePatPos->setItemText(9, QCoreApplication::translate("MainWindow", "G1", nullptr));
        comboBox_CreaImgFilePatPos->setItemText(10, QCoreApplication::translate("MainWindow", "G2", nullptr));
        comboBox_CreaImgFilePatPos->setItemText(11, QCoreApplication::translate("MainWindow", "G3", nullptr));
        comboBox_CreaImgFilePatPos->setItemText(12, QCoreApplication::translate("MainWindow", "G4", nullptr));
        comboBox_CreaImgFilePatPos->setItemText(13, QCoreApplication::translate("MainWindow", "G5", nullptr));
        comboBox_CreaImgFilePatPos->setItemText(14, QCoreApplication::translate("MainWindow", "G6", nullptr));
        comboBox_CreaImgFilePatPos->setItemText(15, QCoreApplication::translate("MainWindow", "G7", nullptr));
        comboBox_CreaImgFilePatPos->setItemText(16, QCoreApplication::translate("MainWindow", "R0", nullptr));
        comboBox_CreaImgFilePatPos->setItemText(17, QCoreApplication::translate("MainWindow", "R1", nullptr));
        comboBox_CreaImgFilePatPos->setItemText(18, QCoreApplication::translate("MainWindow", "R2", nullptr));
        comboBox_CreaImgFilePatPos->setItemText(19, QCoreApplication::translate("MainWindow", "R3", nullptr));
        comboBox_CreaImgFilePatPos->setItemText(20, QCoreApplication::translate("MainWindow", "R4", nullptr));
        comboBox_CreaImgFilePatPos->setItemText(21, QCoreApplication::translate("MainWindow", "R5", nullptr));
        comboBox_CreaImgFilePatPos->setItemText(22, QCoreApplication::translate("MainWindow", "R6", nullptr));
        comboBox_CreaImgFilePatPos->setItemText(23, QCoreApplication::translate("MainWindow", "R7", nullptr));

        pushButton_CreaImgSelectDestFileName->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_Create_Splash), QCoreApplication::translate("MainWindow", "Create Images", nullptr));
        label_FWDwldLatFWLink->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Download the latest Firmware release from <a href=\"http://www.ti.com/tool/dlpr350\"><span style=\" font-family:'.HelveticaNeueUI,serif'; text-decoration: underline; color:#0000ff;\">http://www.ti.com/tool/dlpr350</span></a></p></body></html>", nullptr));
        label_FWFileParseStatus->setText(QCoreApplication::translate("MainWindow", "Not started", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit_FWFileSelected->setToolTip(QCoreApplication::translate("MainWindow", "BMP File path", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_FWSelectFWBin->setText(QCoreApplication::translate("MainWindow", "Browse", nullptr));
        label_FWSelectFWFile->setText(QCoreApplication::translate("MainWindow", "Firmware File:", nullptr));
        label_FWIniFile->setText(QCoreApplication::translate("MainWindow", "Selected INI file", nullptr));
        pushButton_FWClearSelIniFile->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        label_add_fw_tag->setText(QCoreApplication::translate("MainWindow", "Add Firmware Tag", nullptr));
        pushButton_FWClearFWTag->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        label_NewFWBuildPath->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
        label_FWOrgSplashImageCount->setText(QCoreApplication::translate("MainWindow", "# Original Images: ", nullptr));
        label_FWNewSplashImageAddedCount->setText(QCoreApplication::translate("MainWindow", "Images Added: ", nullptr));
        label_FWSplashImageRemovedCount->setText(QCoreApplication::translate("MainWindow", "Images Removed: ", nullptr));
        label_FWAvaSplashImageCount->setText(QCoreApplication::translate("MainWindow", "Total Images: ", nullptr));
        pushButton_FWRemoveSplashImage->setText(QCoreApplication::translate("MainWindow", "Remove", nullptr));
        comboBox_FWSplashImageIndex->setItemText(0, QCoreApplication::translate("MainWindow", "0", nullptr));

        pushButton_FWAddSplashImage->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        pushButton_FWChangeSplashImage->setText(QCoreApplication::translate("MainWindow", "Change", nullptr));
        pushButton_FWSelectIniFile->setText(QCoreApplication::translate("MainWindow", "Select .ini File", nullptr));
        pushButton_FWBuildNewFrmwImage->setText(QCoreApplication::translate("MainWindow", "Save Updates", nullptr));
        pushButton_FWSplashImageUpload->setText(QCoreApplication::translate("MainWindow", "Download Pattern", nullptr));
        label_FWPreviewSelImage->setText(QString());
        groupBox_FWIllumModSelect->setTitle(QCoreApplication::translate("MainWindow", "Illumination Control", nullptr));
        radioButton_FWIllumSelColor->setText(QCoreApplication::translate("MainWindow", "RGB Color", nullptr));
        radioButton_FWIllumSelMono->setText(QCoreApplication::translate("MainWindow", "Monochrome", nullptr));
        checkBox_FWIllumSelMonoRedCh->setText(QCoreApplication::translate("MainWindow", "Use Red Channel Only", nullptr));
        checkBox_FWIllumSelMonoGreenCh->setText(QCoreApplication::translate("MainWindow", "Use Green Channel Only", nullptr));
        checkBox_FWIllumSelMonoBlueCh->setText(QCoreApplication::translate("MainWindow", "Use Blue Channel Only", nullptr));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_Create_Firmware), QCoreApplication::translate("MainWindow", "Firmware Build", nullptr));
        label_FWUploadLatestFWLink->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Download the latest Firmware release from <a href=\"http://www.ti.com/tool/dlpr350\"><span style=\" font-family:'.HelveticaNeueUI,serif'; text-decoration: underline; color:#0000ff;\">http://www.ti.com/tool/dlpr350</span></a></p></body></html>", nullptr));
        pushButton_Connect_2->setText(QCoreApplication::translate("MainWindow", "Connection", nullptr));
        textEdit_FWUpdate->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8.25pt;\">DLPC350 firmware image contains two applications. </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8.25pt;\">1. </span><span style=\" font-size:8.25pt; font-weight:600;\">Bootloader Application</span><span style=\" font-size:8.25pt;\"> - Resides in first 128KB memory in the flash; this application checks for validity of Main Application and also allows programming the flash.</span></p>\n"
"<p style=\" margin-t"
                        "op:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8.25pt;\">2. </span><span style=\" font-size:8.25pt; font-weight:600;\">Main Application</span><span style=\" font-size:8.25pt;\"> - Controller jumps to Main Application from Boot Loader on Valid image; this is main application responisble configuration and control in various operating modes.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8.25pt; font-weight:600;\">Note</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8.25pt;\">If by any reason the bootloader area is corrupted; system will not boot, in such case you are required to use JTAG tools </span><a href=\"http://www.ti.com/dlp-lightcrafter4500-jtag-flash\"><span style=\" font-size:8pt; text-decoration: unde"
                        "rline; color:#0000ff;\">DLPC350 JTAG tools</span></a></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8.25pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8.25pt; font-weight:600;\">Skip Bootloader Update</span><span style=\" font-size:8.25pt;\"> - Checkbox option to skip erase and programming of fisrt 128KB of area where Bootloader Application reside in the flash.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8.25pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8.25pt; font-weight:600;\">Fast Flash Update</span><span style=\" font-size:8.25pt;\""
                        "> - Check box option enable faster programming of the flash, this option when selected, basically compare new Fimrware file with the last programmed content which is maintained as cached file on the PC; then selectively erase and program the mismatch areas on the flash. After updating the new Firmware file is stored as cached file on the PC.   </span></p></body></html>", nullptr));
        groupBox_FWUpload->setTitle(QCoreApplication::translate("MainWindow", "Firmware Upload", nullptr));
#if QT_CONFIG(tooltip)
        FirmwareFile_2->setToolTip(QCoreApplication::translate("MainWindow", "BMP File path", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_FWFileSelect->setText(QCoreApplication::translate("MainWindow", "Browse", nullptr));
        label_FWUploadProgressBar->setText(QCoreApplication::translate("MainWindow", "Not started", nullptr));
        pushButton_FWUpload->setText(QCoreApplication::translate("MainWindow", "Upload", nullptr));
        label_FWFileSelect->setText(QCoreApplication::translate("MainWindow", "Firmware File:", nullptr));
        checkBox_FastFlashUpdate->setText(QCoreApplication::translate("MainWindow", "Fast Flash Update", nullptr));
        checkBox_SkipBootLoader->setText(QCoreApplication::translate("MainWindow", "Skip Bootloader Update", nullptr));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_FirmwareUpload), QCoreApplication::translate("MainWindow", "Firmware Upload", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_Image_Firmware), QCoreApplication::translate("MainWindow", "Image / Firmware", nullptr));
        label_AddResE2ELink->setText(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"http://e2e.ti.com/support/dlp__mems_micro-electro-mechanical_systems/f/924.aspx\"><span style=\" text-decoration: underline; color:#0000ff;\">http://e2e.ti.com/support/dlp__mems_micro-electro-mechanical_systems/f/924.aspx</span></a></p></body></html>", nullptr));
        label_AddResEVMLink->setText(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"http://www.ti.com/tool/dlplcr4500evm\"><span style=\" font-family:'.HelveticaNeueUI,serif'; text-decoration: underline; color:#0000ff;\">http://www.ti.com/tool/dlplcr4500evm</span></a></p></body></html>", nullptr));
        label_AddResEVM->setText(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">For more infomation about the DLP LightCrafter 4500 EVM or GUI, please read the User's Guide available on the product page: </p></body></html>", nullptr));
        label_AddResDHLink->setText(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"http://www.ti.com/lsds/ti/analog/dlp/solutions-services.page\"><span style=\" text-decoration: underline; color:#0000ff;\">http://www.ti.com/lsds/ti/analog/dlp/solutions-services.page</span></a></p></body></html>", nullptr));
        label_AddResDH->setText(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">For infomation about TI approved design houses to develop new hardware, software, optics, or system integration, please visit the TI DLP Solutions &amp; Services page:</p></body></html>", nullptr));
        label_AddResE2E->setText(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">For questions or comments about the DLP LightCrafter 4500 EVM or GUI, please visit the TI E2E forum:</p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_Additional_Resources), QCoreApplication::translate("MainWindow", "Additional Resources", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
