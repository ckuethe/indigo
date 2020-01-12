// Copyright (c) 2019 CloudMakers, s. r. o.
// All rights reserved.
//
// You can use this software under the terms of 'INDIGO Astronomy
// open-source license' (see LICENSE.md).
//
// THIS SOFTWARE IS PROVIDED BY THE AUTHORS 'AS IS' AND ANY EXPRESS
// OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
// WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
// ARE DISCLAIMED. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY
// DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
// DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
// GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
// WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
// NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
// SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

// version history
// 2.0 by Peter Polakovic <peter.polakovic@cloudmakers.eu>

/** INDIGO PTP Nikon implementation
 \file indigo_ptp_nikon.h
 */

#ifndef indigo_ptp_nikon_h
#define indigo_ptp_nikon_h

#include <indigo/indigo_driver.h>

typedef enum {
	ptp_operation_nikon_GetProfileAllData = 0x9006,
	ptp_operation_nikon_SendProfileData = 0x9007,
	ptp_operation_nikon_DeleteProfile = 0x9008,
	ptp_operation_nikon_SetProfileData = 0x9009,
	ptp_operation_nikon_AdvancedTransfer = 0x9010,
	ptp_operation_nikon_GetFileInfoInBlock = 0x9011,
	ptp_operation_nikon_Capture = 0x90C0,
	ptp_operation_nikon_AfDrive = 0x90C1,
	ptp_operation_nikon_SetControlMode = 0x90C2,
	ptp_operation_nikon_DelImageSDRAM = 0x90C3,
	ptp_operation_nikon_GetLargeThumb = 0x90C4,
	ptp_operation_nikon_CurveDownload = 0x90C5,
	ptp_operation_nikon_CurveUpload = 0x90C6,
	ptp_operation_nikon_CheckEvent = 0x90C7,
	ptp_operation_nikon_DeviceReady = 0x90C8,
	ptp_operation_nikon_SetPreWBData = 0x90C9,
	ptp_operation_nikon_GetVendorPropCodes = 0x90CA,
	ptp_operation_nikon_AfCaptureSDRAM = 0x90CB,
	ptp_operation_nikon_GetPictCtrlData = 0x90CC,
	ptp_operation_nikon_SetPictCtrlData = 0x90CD,
	ptp_operation_nikon_DelCstPicCtrl = 0x90CE,
	ptp_operation_nikon_GetPicCtrlCapability = 0x90CF,
	ptp_operation_nikon_GetPreviewImg = 0x9200,
	ptp_operation_nikon_StartLiveView = 0x9201,
	ptp_operation_nikon_EndLiveView = 0x9202,
	ptp_operation_nikon_GetLiveViewImg = 0x9203,
	ptp_operation_nikon_MfDrive = 0x9204,
	ptp_operation_nikon_ChangeAfArea = 0x9205,
	ptp_operation_nikon_AfDriveCancel = 0x9206,
	ptp_operation_nikon_InitiateCaptureRecInMedia = 0x9207,
	ptp_operation_nikon_GetVendorStorageIDs = 0x9209,
	ptp_operation_nikon_StartMovieRecInCard = 0x920a,
	ptp_operation_nikon_EndMovieRec = 0x920b,
	ptp_operation_nikon_TerminateCapture = 0x920c,
	ptp_operation_nikon_GetDevicePTPIPInfo = 0x90E0,
	ptp_operation_nikon_GetPartialObjectHiSpeed = 0x9400
} ptp_operation_nikon_code;

typedef enum {
	ptp_response_nikon_HardwareError = 0xA001,
	ptp_response_nikon_OutOfFocus = 0xA002,
	ptp_response_nikon_ChangeCameraModeFailed = 0xA003,
	ptp_response_nikon_InvalidStatus = 0xA004,
	ptp_response_nikon_SetPropertyNotSupported = 0xA005,
	ptp_response_nikon_WbResetError = 0xA006,
	ptp_response_nikon_DustReferenceError = 0xA007,
	ptp_response_nikon_ShutterSpeedBulb = 0xA008,
	ptp_response_nikon_MirrorUpSequence = 0xA009,
	ptp_response_nikon_CameraModeNotAdjustFNumber = 0xA00A,
	ptp_response_nikon_NotLiveView = 0xA00B,
	ptp_response_nikon_MfDriveStepEnd = 0xA00C,
	ptp_response_nikon_MfDriveStepInsufficiency = 0xA00E,
	ptp_response_nikon_AdvancedTransferCancel = 0xA022
} ptp_response_nikon_code;

typedef enum {
	ptp_event_nikon_ObjectAddedInSDRAM = 0xC101,
	ptp_event_nikon_CaptureCompleteRecInSdram = 0xC102,
	ptp_event_nikon_AdvancedTransfer = 0xC103,
	ptp_event_nikon_PreviewImageAdded = 0xC104
} ptp_event_nikon_code;

typedef enum {
	ptp_property_nikon_ShootingBank = 0xD010,
	ptp_property_nikon_ShootingBankNameA = 0xD011,
	ptp_property_nikon_ShootingBankNameB = 0xD012,
	ptp_property_nikon_ShootingBankNameC = 0xD013,
	ptp_property_nikon_ShootingBankNameD = 0xD014,
	ptp_property_nikon_ResetBank0 = 0xD015,
	ptp_property_nikon_RawCompression = 0xD016,
	ptp_property_nikon_WhiteBalanceAutoBias = 0xD017,
	ptp_property_nikon_WhiteBalanceTungstenBias = 0xD018,
	ptp_property_nikon_WhiteBalanceFluorescentBias = 0xD019,
	ptp_property_nikon_WhiteBalanceDaylightBias = 0xD01A,
	ptp_property_nikon_WhiteBalanceFlashBias = 0xD01B,
	ptp_property_nikon_WhiteBalanceCloudyBias = 0xD01C,
	ptp_property_nikon_WhiteBalanceShadeBias = 0xD01D,
	ptp_property_nikon_WhiteBalanceColorTemperature = 0xD01E,
	ptp_property_nikon_WhiteBalancePresetNo = 0xD01F,
	ptp_property_nikon_WhiteBalancePresetName0 = 0xD020,
	ptp_property_nikon_WhiteBalancePresetName1 = 0xD021,
	ptp_property_nikon_WhiteBalancePresetName2 = 0xD022,
	ptp_property_nikon_WhiteBalancePresetName3 = 0xD023,
	ptp_property_nikon_WhiteBalancePresetName4 = 0xD024,
	ptp_property_nikon_WhiteBalancePresetVal0 = 0xD025,
	ptp_property_nikon_WhiteBalancePresetVal1 = 0xD026,
	ptp_property_nikon_WhiteBalancePresetVal2 = 0xD027,
	ptp_property_nikon_WhiteBalancePresetVal3 = 0xD028,
	ptp_property_nikon_WhiteBalancePresetVal4 = 0xD029,
	ptp_property_nikon_ImageSharpening = 0xD02A,
	ptp_property_nikon_ToneCompensation = 0xD02B,
	ptp_property_nikon_ColorModel = 0xD02C,
	ptp_property_nikon_HueAdjustment = 0xD02D,
	ptp_property_nikon_NonCPULensDataFocalLength = 0xD02E,
	ptp_property_nikon_NonCPULensDataMaximumAperture = 0xD02F,
	ptp_property_nikon_ShootingMode = 0xD030,
	ptp_property_nikon_JPEGCompressionPolicy = 0xD031,
	ptp_property_nikon_ColorSpace = 0xD032,
	ptp_property_nikon_AutoDXCrop = 0xD033,
	ptp_property_nikon_FlickerReduction = 0xD034,
	ptp_property_nikon_RemoteMode = 0xD035,
	ptp_property_nikon_VideoMode = 0xD036,
	ptp_property_nikon_EffectMode = 0xD037,
	ptp_property_nikon_1Mode = 0xD038,
	ptp_property_nikon_CSMMenuBankSelect = 0xD040,
	ptp_property_nikon_MenuBankNameA = 0xD041,
	ptp_property_nikon_MenuBankNameB = 0xD042,
	ptp_property_nikon_MenuBankNameC = 0xD043,
	ptp_property_nikon_MenuBankNameD = 0xD044,
	ptp_property_nikon_ResetBank = 0xD045,
	ptp_property_nikon_AFCModePriority = 0xD048,
	ptp_property_nikon_AFSModePriority = 0xD049,
	ptp_property_nikon_GroupDynamicAF = 0xD04A,
	ptp_property_nikon_AFActivation = 0xD04B,
	ptp_property_nikon_FocusAreaIllumManualFocus = 0xD04C,
	ptp_property_nikon_FocusAreaIllumContinuous = 0xD04D,
	ptp_property_nikon_FocusAreaIllumWhenSelected = 0xD04E,
	ptp_property_nikon_FocusAreaWrap = 0xD04F,
	ptp_property_nikon_VerticalAFON = 0xD050,
	ptp_property_nikon_AFLockOn = 0xD051,
	ptp_property_nikon_FocusAreaZone = 0xD052,
	ptp_property_nikon_EnableCopyright = 0xD053,
	ptp_property_nikon_ISOAutoTime = 0xD054,
	ptp_property_nikon_EVISOStep = 0xD055,
	ptp_property_nikon_EVStep = 0xD056,
	ptp_property_nikon_EVStepExposureComp = 0xD057,
	ptp_property_nikon_ExposureCompensation = 0xD058,
	ptp_property_nikon_CenterWeightArea = 0xD059,
	ptp_property_nikon_ExposureBaseMatrix = 0xD05A,
	ptp_property_nikon_ExposureBaseCenter = 0xD05B,
	ptp_property_nikon_ExposureBaseSpot = 0xD05C,
	ptp_property_nikon_LiveViewAFArea = 0xD05D,
	ptp_property_nikon_AELockMode = 0xD05E,
	ptp_property_nikon_AELAFLMode = 0xD05F,
	ptp_property_nikon_LiveViewAFFocus = 0xD061,
	ptp_property_nikon_MeterOff = 0xD062,
	ptp_property_nikon_SelfTimer = 0xD063,
	ptp_property_nikon_MonitorOff = 0xD064,
	ptp_property_nikon_ImgConfTime = 0xD065,
	ptp_property_nikon_AutoOffTimers = 0xD066,
	ptp_property_nikon_AngleLevel = 0xD067,
	ptp_property_nikon_ShootingSpeed = 0xD068,
	ptp_property_nikon_MaximumShots = 0xD069,
	ptp_property_nikon_ExposureDelayMode = 0xD06A,
	ptp_property_nikon_LongExposureNoiseReduction = 0xD06B,
	ptp_property_nikon_FileNumberSequence = 0xD06C,
	ptp_property_nikon_ControlPanelFinderRearControl = 0xD06D,
	ptp_property_nikon_ControlPanelFinderViewfinder = 0xD06E,
	ptp_property_nikon_Illumination = 0xD06F,
	ptp_property_nikon_NrHighISO = 0xD070,
	ptp_property_nikon_SHSETCHGUIDDISP = 0xD071,
	ptp_property_nikon_ArtistName = 0xD072,
	ptp_property_nikon_CopyrightInfo = 0xD073,
	ptp_property_nikon_FlashSyncSpeed = 0xD074,
	ptp_property_nikon_FlashShutterSpeed = 0xD075,
	ptp_property_nikon_AAFlashMode = 0xD076,
	ptp_property_nikon_ModelingFlash = 0xD077,
	ptp_property_nikon_BracketSet = 0xD078,
	ptp_property_nikon_ManualModeBracketing = 0xD079,
	ptp_property_nikon_BracketOrder = 0xD07A,
	ptp_property_nikon_AutoBracketSelection = 0xD07B,
	ptp_property_nikon_BracketingSet = 0xD07C,
	ptp_property_nikon_CenterButtonShootingMode = 0xD080,
	ptp_property_nikon_CenterButtonPlaybackMode = 0xD081,
	ptp_property_nikon_Multiselector = 0xD082,
	ptp_property_nikon_PhotoInfoPlayback = 0xD083,
	ptp_property_nikon_AssignFuncButton = 0xD084,
	ptp_property_nikon_CustomizeCommDials = 0xD085,
	ptp_property_nikon_ReverseCommandDial = 0xD086,
	ptp_property_nikon_ApertureSetting = 0xD087,
	ptp_property_nikon_MenusAndPlayback = 0xD088,
	ptp_property_nikon_ButtonsAndDials = 0xD089,
	ptp_property_nikon_NoCFCard = 0xD08A,
	ptp_property_nikon_CenterButtonZoomRatio = 0xD08B,
	ptp_property_nikon_FunctionButton2 = 0xD08C,
	ptp_property_nikon_AFAreaPoint = 0xD08D,
	ptp_property_nikon_NormalAFOn = 0xD08E,
	ptp_property_nikon_CleanImageSensor = 0xD08F,
	ptp_property_nikon_ImageCommentString = 0xD090,
	ptp_property_nikon_ImageCommentEnable = 0xD091,
	ptp_property_nikon_ImageRotation = 0xD092,
	ptp_property_nikon_ManualSetLensNo = 0xD093,
	ptp_property_nikon_MovScreenSize = 0xD0A0,
	ptp_property_nikon_MovVoice = 0xD0A1,
	ptp_property_nikon_MovMicrophone = 0xD0A2,
	ptp_property_nikon_MovFileSlot = 0xD0A3,
	ptp_property_nikon_MovRecProhibitCondition = 0xD0A4,
	ptp_property_nikon_ManualMovieSetting = 0xD0A6,
	ptp_property_nikon_MovHiQuality = 0xD0A7,
	ptp_property_nikon_MovMicSensitivity = 0xD0A8,
	ptp_property_nikon_MovWindNoiceReduction = 0xD0AA,
	ptp_property_nikon_LiveViewScreenDisplaySetting = 0xD0B2,
	ptp_property_nikon_MonitorOffDelay = 0xD0B3,
	ptp_property_nikon_ISOSensitivity = 0xD0B5,
	ptp_property_nikon_Bracketing = 0xD0C0,
	ptp_property_nikon_AutoExposureBracketStep = 0xD0C1,
	ptp_property_nikon_AutoExposureBracketProgram = 0xD0C2,
	ptp_property_nikon_AutoExposureBracketCount = 0xD0C3,
	ptp_property_nikon_WhiteBalanceBracketStep = 0xD0C4,
	ptp_property_nikon_WhiteBalanceBracketProgram = 0xD0C5,
	ptp_property_nikon_LensID = 0xD0E0,
	ptp_property_nikon_LensSort = 0xD0E1,
	ptp_property_nikon_LensType = 0xD0E2,
	ptp_property_nikon_FocalLengthMin = 0xD0E3,
	ptp_property_nikon_FocalLengthMax = 0xD0E4,
	ptp_property_nikon_MaxApAtMinFocalLength = 0xD0E5,
	ptp_property_nikon_MaxApAtMaxFocalLength = 0xD0E6,
	ptp_property_nikon_FinderISODisp = 0xD0F0,
	ptp_property_nikon_AutoOffPhoto = 0xD0F2,
	ptp_property_nikon_AutoOffMenu = 0xD0F3,
	ptp_property_nikon_AutoOffInfo = 0xD0F4,
	ptp_property_nikon_SelfTimerShootNum = 0xD0F5,
	ptp_property_nikon_VignetteCtrl = 0xD0F7,
	ptp_property_nikon_AutoDistortionControl = 0xD0F8,
	ptp_property_nikon_SceneMode = 0xD0F9,
	ptp_property_nikon_SceneMode2 = 0xD0FD,
	ptp_property_nikon_SelfTimerInterval = 0xD0FE,
	ptp_property_nikon_ExposureTime = 0xD100,
	ptp_property_nikon_ACPower = 0xD101,
	ptp_property_nikon_WarningStatus = 0xD102,
	ptp_property_nikon_RemainingShots = 0xD103,
	ptp_property_nikon_AFLockStatus = 0xD104,
	ptp_property_nikon_AELockStatus = 0xD105,
	ptp_property_nikon_FVLockStatus = 0xD106,
	ptp_property_nikon_AutofocusLCDTopMode2 = 0xD107,
	ptp_property_nikon_AutofocusSensor = 0xD108,
	ptp_property_nikon_FlexibleProgram = 0xD109,
	ptp_property_nikon_LightMeter = 0xD10A,
	ptp_property_nikon_SaveMedia = 0xD10B,
	ptp_property_nikon_USBSpeed = 0xD10C,
	ptp_property_nikon_CCDNumber = 0xD10D,
	ptp_property_nikon_CameraInclination = 0xD10E,
	ptp_property_nikon_GroupPtnType = 0xD10F,
	ptp_property_nikon_FNumberLock = 0xD110,
	ptp_property_nikon_ExposureApertureLock = 0xD111,
	ptp_property_nikon_TVLockSetting = 0xD112,
	ptp_property_nikon_AVLockSetting = 0xD113,
	ptp_property_nikon_IllumSetting = 0xD114,
	ptp_property_nikon_FocusPointBright = 0xD115,
	ptp_property_nikon_ExternalFlashAttached = 0xD120,
	ptp_property_nikon_ExternalFlashStatus = 0xD121,
	ptp_property_nikon_ExternalFlashSort = 0xD122,
	ptp_property_nikon_ExternalFlashMode = 0xD123,
	ptp_property_nikon_ExternalFlashCompensation = 0xD124,
	ptp_property_nikon_NewExternalFlashMode = 0xD125,
	ptp_property_nikon_FlashExposureCompensation = 0xD126,
	ptp_property_nikon_HDRMode = 0xD130,
	ptp_property_nikon_HDRHighDynamic = 0xD131,
	ptp_property_nikon_HDRSmoothing = 0xD132,
	ptp_property_nikon_OptimizeImage = 0xD140,
	ptp_property_nikon_Saturation = 0xD142,
	ptp_property_nikon_BWFillerEffect = 0xD143,
	ptp_property_nikon_BWSharpness = 0xD144,
	ptp_property_nikon_BWContrast = 0xD145,
	ptp_property_nikon_BWSettingType = 0xD146,
	ptp_property_nikon_Slot2SaveMode = 0xD148,
	ptp_property_nikon_RawBitMode = 0xD149,
	ptp_property_nikon_ActiveDLighting = 0xD14E,
	ptp_property_nikon_FlourescentType = 0xD14F,
	ptp_property_nikon_TuneColourTemperature = 0xD150,
	ptp_property_nikon_TunePreset0 = 0xD151,
	ptp_property_nikon_TunePreset1 = 0xD152,
	ptp_property_nikon_TunePreset2 = 0xD153,
	ptp_property_nikon_TunePreset3 = 0xD154,
	ptp_property_nikon_TunePreset4 = 0xD155,
	ptp_property_nikon_BeepOff = 0xD160,
	ptp_property_nikon_AutofocusMode = 0xD161,
	ptp_property_nikon_AFAssist = 0xD163,
	ptp_property_nikon_PADVPMode = 0xD164,
	ptp_property_nikon_ImageReview = 0xD165,
	ptp_property_nikon_AFAreaIllumination = 0xD166,
	ptp_property_nikon_FlashMode = 0xD167,
	ptp_property_nikon_FlashCommanderMode = 0xD168,
	ptp_property_nikon_FlashSign = 0xD169,
	ptp_property_nikon_ISOAuto = 0xD16A,
	ptp_property_nikon_RemoteTimeout = 0xD16B,
	ptp_property_nikon_GridDisplay = 0xD16C,
	ptp_property_nikon_FlashModeManualPower = 0xD16D,
	ptp_property_nikon_FlashModeCommanderPower = 0xD16E,
	ptp_property_nikon_AutoFP = 0xD16F,
	ptp_property_nikon_DateImprintSetting = 0xD170,
	ptp_property_nikon_DateCounterSelect = 0xD171,
	ptp_property_nikon_DateCountData = 0xD172,
	ptp_property_nikon_DateCountDisplaySetting = 0xD173,
	ptp_property_nikon_RangeFinderSetting = 0xD174,
	ptp_property_nikon_CSMMenu = 0xD180,
	ptp_property_nikon_WarningDisplay = 0xD181,
	ptp_property_nikon_BatteryCellKind = 0xD182,
	ptp_property_nikon_ISOAutoHiLimit = 0xD183,
	ptp_property_nikon_DynamicAFArea = 0xD184,
	ptp_property_nikon_ContinuousSpeedHigh = 0xD186,
	ptp_property_nikon_InfoDispSetting = 0xD187,
	ptp_property_nikon_PreviewButton = 0xD189,
	ptp_property_nikon_PreviewButton2 = 0xD18A,
	ptp_property_nikon_AEAFLockButton2 = 0xD18B,
	ptp_property_nikon_IndicatorDisp = 0xD18D,
	ptp_property_nikon_CellKindPriority = 0xD18E,
	ptp_property_nikon_BracketingFramesAndSteps = 0xD190,
	ptp_property_nikon_LiveViewMode = 0xD1A0,
	ptp_property_nikon_LiveViewDriveMode = 0xD1A1,
	ptp_property_nikon_LiveViewStatus = 0xD1A2,
	ptp_property_nikon_LiveViewImageZoomRatio = 0xD1A3,
	ptp_property_nikon_LiveViewProhibitCondition = 0xD1A4,
	ptp_property_nikon_MovieShutterSpeed = 0xD1A8,
	ptp_property_nikon_MovieFNumber = 0xD1A9,
	ptp_property_nikon_MovieISO = 0xD1AA,
	ptp_property_nikon_LiveViewImageSize = 0xD1AC,
	ptp_property_nikon_BlinkingStatus = 0xD1B0,
	ptp_property_nikon_ExposureIndicateStatus = 0xD1B1,
	ptp_property_nikon_InfoDispErrStatus = 0xD1B2,
	ptp_property_nikon_ExposureIndicateLightup = 0xD1B3,
	ptp_property_nikon_FlashOpen = 0xD1C0,
	ptp_property_nikon_FlashCharged = 0xD1C1,
	ptp_property_nikon_FlashMRepeatValue = 0xD1D0,
	ptp_property_nikon_FlashMRepeatCount = 0xD1D1,
	ptp_property_nikon_FlashMRepeatInterval = 0xD1D2,
	ptp_property_nikon_FlashCommandChannel = 0xD1D3,
	ptp_property_nikon_FlashCommandSelfMode = 0xD1D4,
	ptp_property_nikon_FlashCommandSelfCompensation = 0xD1D5,
	ptp_property_nikon_FlashCommandSelfValue = 0xD1D6,
	ptp_property_nikon_FlashCommandAMode = 0xD1D7,
	ptp_property_nikon_FlashCommandACompensation = 0xD1D8,
	ptp_property_nikon_FlashCommandAValue = 0xD1D9,
	ptp_property_nikon_FlashCommandBMode = 0xD1DA,
	ptp_property_nikon_FlashCommandBCompensation = 0xD1DB,
	ptp_property_nikon_FlashCommandBValue = 0xD1DC,
	ptp_property_nikon_ApplicationMode = 0xD1F0,
	ptp_property_nikon_ActiveSlot = 0xD1F2,
	ptp_property_nikon_ActivePicCtrlItem = 0xD200,
	ptp_property_nikon_ChangePicCtrlItem = 0xD201,
	ptp_property_nikon_MovieNrHighISO = 0xD236
} ptp_property_nikon_code;

typedef struct {
	int steps;
	bool is_dual_compression;
} nikon_private_data;

extern char *ptp_operation_nikon_code_label(uint16_t code);
extern char *ptp_response_nikon_code_label(uint16_t code);
extern char *ptp_event_nikon_code_label(uint16_t code);
extern char *ptp_property_nikon_code_name(uint16_t code);
extern char *ptp_property_nikon_code_label(uint16_t code);
extern char *ptp_property_nikon_value_code_label(indigo_device *device, uint16_t property, uint64_t code);

extern bool ptp_nikon_initialise(indigo_device *device);
extern bool ptp_nikon_handle_event(indigo_device *device, ptp_event_code code, uint32_t *params);
extern bool ptp_nikon_fix_property(indigo_device *device, ptp_property *property);
extern bool ptp_nikon_set_property(indigo_device *device, ptp_property *property);
extern bool ptp_nikon_exposure(indigo_device *device);
extern bool ptp_nikon_liveview(indigo_device *device);
extern bool ptp_nikon_lock(indigo_device *device);
extern bool ptp_nikon_zoom(indigo_device *device);
extern bool ptp_nikon_focus(indigo_device *device, int steps);
extern bool ptp_nikon_check_dual_compression(indigo_device *device);

#endif /* indigo_ptp_nikon_h */
