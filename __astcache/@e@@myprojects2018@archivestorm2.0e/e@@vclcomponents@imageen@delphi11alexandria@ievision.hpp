// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'ievision.pas' rev: 35.00 (Windows)

#ifndef IevisionHPP
#define IevisionHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Types.hpp>
#include <Winapi.Windows.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <System.Math.hpp>
#include <Winapi.ActiveX.hpp>
#include <hyiedefs.hpp>

//-- user supplied -----------------------------------------------------------

namespace Ievision
{
//-- forward type declarations -----------------------------------------------
struct TIEVisionRect;
struct TIEVisionSize;
struct TIEVisionSize2f;
struct TIEVisionPoint;
struct TIEVisionPoint2f;
struct TIEVisionKeyPoint;
struct TIEVisionScalar;
struct TIEVisionScalarInt32;
struct TIEVisionFloatPair;
struct TIEVisionTermCriteria;
struct TIEVisionBox2D;
struct TIEVisionRotatedRect;
struct TIEVisionRGB8;
struct TIEVisionRGB16;
struct TIEVisionBGR8;
struct TIEVisionBGR16;
struct TIEVisionOCRBox;
__interface DELPHIINTERFACE TIEVisionBase;
typedef System::DelphiInterface<TIEVisionBase> _di_TIEVisionBase;
__interface DELPHIINTERFACE TIEVisionString;
typedef System::DelphiInterface<TIEVisionString> _di_TIEVisionString;
__interface DELPHIINTERFACE TIEVisionWString;
typedef System::DelphiInterface<TIEVisionWString> _di_TIEVisionWString;
__interface DELPHIINTERFACE TIEVisionBaseVector;
typedef System::DelphiInterface<TIEVisionBaseVector> _di_TIEVisionBaseVector;
__interface DELPHIINTERFACE TIEVisionVectorString;
typedef System::DelphiInterface<TIEVisionVectorString> _di_TIEVisionVectorString;
__interface DELPHIINTERFACE TIEVisionVectorInt32;
typedef System::DelphiInterface<TIEVisionVectorInt32> _di_TIEVisionVectorInt32;
__interface DELPHIINTERFACE TIEVisionVectorByte;
typedef System::DelphiInterface<TIEVisionVectorByte> _di_TIEVisionVectorByte;
__interface DELPHIINTERFACE TIEVisionVectorFloatPair;
typedef System::DelphiInterface<TIEVisionVectorFloatPair> _di_TIEVisionVectorFloatPair;
__interface DELPHIINTERFACE TIEVisionVectorScalarInt32;
typedef System::DelphiInterface<TIEVisionVectorScalarInt32> _di_TIEVisionVectorScalarInt32;
__interface DELPHIINTERFACE TIEVisionVectorPoint;
typedef System::DelphiInterface<TIEVisionVectorPoint> _di_TIEVisionVectorPoint;
__interface DELPHIINTERFACE TIEVisionVectorPoint2f;
typedef System::DelphiInterface<TIEVisionVectorPoint2f> _di_TIEVisionVectorPoint2f;
__interface DELPHIINTERFACE TIEVisionVectorRect;
typedef System::DelphiInterface<TIEVisionVectorRect> _di_TIEVisionVectorRect;
__interface DELPHIINTERFACE TIEVisionVectorDouble;
typedef System::DelphiInterface<TIEVisionVectorDouble> _di_TIEVisionVectorDouble;
__interface DELPHIINTERFACE TIEVisionVectorOCRBox;
typedef System::DelphiInterface<TIEVisionVectorOCRBox> _di_TIEVisionVectorOCRBox;
__interface DELPHIINTERFACE TIEVisionOCRWordBox;
typedef System::DelphiInterface<TIEVisionOCRWordBox> _di_TIEVisionOCRWordBox;
__interface DELPHIINTERFACE TIEVisionImage;
typedef System::DelphiInterface<TIEVisionImage> _di_TIEVisionImage;
__interface DELPHIINTERFACE TIEVisionVectorImageRef;
typedef System::DelphiInterface<TIEVisionVectorImageRef> _di_TIEVisionVectorImageRef;
__interface DELPHIINTERFACE TIEVisionVectorObjRef;
typedef System::DelphiInterface<TIEVisionVectorObjRef> _di_TIEVisionVectorObjRef;
__interface DELPHIINTERFACE TIEVisionVectorKeyPoint;
typedef System::DelphiInterface<TIEVisionVectorKeyPoint> _di_TIEVisionVectorKeyPoint;
__interface DELPHIINTERFACE TIEVisionStream;
typedef System::DelphiInterface<TIEVisionStream> _di_TIEVisionStream;
__interface DELPHIINTERFACE TIEVisionFileStream;
typedef System::DelphiInterface<TIEVisionFileStream> _di_TIEVisionFileStream;
__interface DELPHIINTERFACE TIEVisionTempFileStream;
typedef System::DelphiInterface<TIEVisionTempFileStream> _di_TIEVisionTempFileStream;
__interface DELPHIINTERFACE TIEVisionMemoryStream;
typedef System::DelphiInterface<TIEVisionMemoryStream> _di_TIEVisionMemoryStream;
__interface DELPHIINTERFACE TIEVisionExistingMemoryStream;
typedef System::DelphiInterface<TIEVisionExistingMemoryStream> _di_TIEVisionExistingMemoryStream;
__interface DELPHIINTERFACE TIEVisionTempFileName;
typedef System::DelphiInterface<TIEVisionTempFileName> _di_TIEVisionTempFileName;
__interface DELPHIINTERFACE TIEVisionTempDirName;
typedef System::DelphiInterface<TIEVisionTempDirName> _di_TIEVisionTempDirName;
__interface DELPHIINTERFACE TIEVisionPropertyTree;
typedef System::DelphiInterface<TIEVisionPropertyTree> _di_TIEVisionPropertyTree;
__interface DELPHIINTERFACE TIEVisionHistogram;
typedef System::DelphiInterface<TIEVisionHistogram> _di_TIEVisionHistogram;
__interface DELPHIINTERFACE TIEVisionCascadeClassifier;
typedef System::DelphiInterface<TIEVisionCascadeClassifier> _di_TIEVisionCascadeClassifier;
__interface DELPHIINTERFACE TIEVisionCascadeClassifierTrainer;
typedef System::DelphiInterface<TIEVisionCascadeClassifierTrainer> _di_TIEVisionCascadeClassifierTrainer;
__interface DELPHIINTERFACE TIEVisionImageList;
typedef System::DelphiInterface<TIEVisionImageList> _di_TIEVisionImageList;
__interface DELPHIINTERFACE TIEVisionMemoryImageList;
typedef System::DelphiInterface<TIEVisionMemoryImageList> _di_TIEVisionMemoryImageList;
__interface DELPHIINTERFACE TIEVisionMemorySharedImageList;
typedef System::DelphiInterface<TIEVisionMemorySharedImageList> _di_TIEVisionMemorySharedImageList;
__interface DELPHIINTERFACE TIEVisionTempFileImageList;
typedef System::DelphiInterface<TIEVisionTempFileImageList> _di_TIEVisionTempFileImageList;
__interface DELPHIINTERFACE TIEVisionInputOutput;
typedef System::DelphiInterface<TIEVisionInputOutput> _di_TIEVisionInputOutput;
__interface DELPHIINTERFACE TIEVisionMath;
typedef System::DelphiInterface<TIEVisionMath> _di_TIEVisionMath;
__interface DELPHIINTERFACE TIEVisionDrawing;
typedef System::DelphiInterface<TIEVisionDrawing> _di_TIEVisionDrawing;
__interface DELPHIINTERFACE TIEVisionObjectTracker;
typedef System::DelphiInterface<TIEVisionObjectTracker> _di_TIEVisionObjectTracker;
__interface DELPHIINTERFACE TIEVisionObjectsFinder;
typedef System::DelphiInterface<TIEVisionObjectsFinder> _di_TIEVisionObjectsFinder;
__interface DELPHIINTERFACE TIEVisionOCR;
typedef System::DelphiInterface<TIEVisionOCR> _di_TIEVisionOCR;
__interface DELPHIINTERFACE TIEVisionSearchablePDFGenerator;
typedef System::DelphiInterface<TIEVisionSearchablePDFGenerator> _di_TIEVisionSearchablePDFGenerator;
__interface DELPHIINTERFACE TIEVisionPeopleDetector;
typedef System::DelphiInterface<TIEVisionPeopleDetector> _di_TIEVisionPeopleDetector;
__interface DELPHIINTERFACE TIEVisionBarCodeSymbol;
typedef System::DelphiInterface<TIEVisionBarCodeSymbol> _di_TIEVisionBarCodeSymbol;
__interface DELPHIINTERFACE TIEVisionBarCodeScanner;
typedef System::DelphiInterface<TIEVisionBarCodeScanner> _di_TIEVisionBarCodeScanner;
__interface DELPHIINTERFACE TIEVisionStitcher;
typedef System::DelphiInterface<TIEVisionStitcher> _di_TIEVisionStitcher;
__interface DELPHIINTERFACE TIEVisionBackgroundSubtractor;
typedef System::DelphiInterface<TIEVisionBackgroundSubtractor> _di_TIEVisionBackgroundSubtractor;
__interface DELPHIINTERFACE TIEVisionFaceRecognizer;
typedef System::DelphiInterface<TIEVisionFaceRecognizer> _di_TIEVisionFaceRecognizer;
__interface DELPHIINTERFACE TIEVisionGrabCut;
typedef System::DelphiInterface<TIEVisionGrabCut> _di_TIEVisionGrabCut;
__interface DELPHIINTERFACE TIEVisionWatershed;
typedef System::DelphiInterface<TIEVisionWatershed> _di_TIEVisionWatershed;
__interface DELPHIINTERFACE TIEVisionBlobDetector;
typedef System::DelphiInterface<TIEVisionBlobDetector> _di_TIEVisionBlobDetector;
__interface DELPHIINTERFACE TIEVisionORBFeaturesDetector;
typedef System::DelphiInterface<TIEVisionORBFeaturesDetector> _di_TIEVisionORBFeaturesDetector;
__interface DELPHIINTERFACE TIEVisionExposureMerger;
typedef System::DelphiInterface<TIEVisionExposureMerger> _di_TIEVisionExposureMerger;
__interface DELPHIINTERFACE TIEVisionLibrary;
typedef System::DelphiInterface<TIEVisionLibrary> _di_TIEVisionLibrary;
struct TIEVisionLanguages;
__interface DELPHIINTERFACE TIEVisionCustomStreamProvider;
typedef System::DelphiInterface<TIEVisionCustomStreamProvider> _di_TIEVisionCustomStreamProvider;
__interface DELPHIINTERFACE TIEVisionCustomStream;
typedef System::DelphiInterface<TIEVisionCustomStream> _di_TIEVisionCustomStream;
__interface DELPHIINTERFACE TIELibJPEGErrorManager;
typedef System::DelphiInterface<TIELibJPEGErrorManager> _di_TIELibJPEGErrorManager;
__interface DELPHIINTERFACE TIELibJPEGMarker;
typedef System::DelphiInterface<TIELibJPEGMarker> _di_TIELibJPEGMarker;
__interface DELPHIINTERFACE TIELibJPEGDecompressor;
typedef System::DelphiInterface<TIELibJPEGDecompressor> _di_TIELibJPEGDecompressor;
__interface DELPHIINTERFACE TIELibJPEGCompressor;
typedef System::DelphiInterface<TIELibJPEGCompressor> _di_TIELibJPEGCompressor;
__interface DELPHIINTERFACE TIELibJPEGTransform;
typedef System::DelphiInterface<TIELibJPEGTransform> _di_TIELibJPEGTransform;
__interface DELPHIINTERFACE TIELibJPEGCopy;
typedef System::DelphiInterface<TIELibJPEGCopy> _di_TIELibJPEGCopy;
__interface DELPHIINTERFACE TIELibJPEG12ErrorManager;
typedef System::DelphiInterface<TIELibJPEG12ErrorManager> _di_TIELibJPEG12ErrorManager;
__interface DELPHIINTERFACE TIELibJPEG12Marker;
typedef System::DelphiInterface<TIELibJPEG12Marker> _di_TIELibJPEG12Marker;
__interface DELPHIINTERFACE TIELibJPEG12Decompressor;
typedef System::DelphiInterface<TIELibJPEG12Decompressor> _di_TIELibJPEG12Decompressor;
__interface DELPHIINTERFACE TIELibPNGText;
typedef System::DelphiInterface<TIELibPNGText> _di_TIELibPNGText;
__interface DELPHIINTERFACE TIELibPNGDecompressor;
typedef System::DelphiInterface<TIELibPNGDecompressor> _di_TIELibPNGDecompressor;
__interface DELPHIINTERFACE TIELibPNGTextList;
typedef System::DelphiInterface<TIELibPNGTextList> _di_TIELibPNGTextList;
__interface DELPHIINTERFACE TIELibPNGCompressor;
typedef System::DelphiInterface<TIELibPNGCompressor> _di_TIELibPNGCompressor;
__interface DELPHIINTERFACE TIELibJP2KComponentParamsList;
typedef System::DelphiInterface<TIELibJP2KComponentParamsList> _di_TIELibJP2KComponentParamsList;
__interface DELPHIINTERFACE TIELibJP2KMatrix;
typedef System::DelphiInterface<TIELibJP2KMatrix> _di_TIELibJP2KMatrix;
__interface DELPHIINTERFACE TIELibJP2KImage;
typedef System::DelphiInterface<TIELibJP2KImage> _di_TIELibJP2KImage;
__interface DELPHIINTERFACE TIELibDCRAWDecoder;
typedef System::DelphiInterface<TIELibDCRAWDecoder> _di_TIELibDCRAWDecoder;
struct TIELibRaw_iparams;
struct TIELibRaw_nikonlens;
struct TIELibRaw_dnglens;
struct TIELibRaw_makernotes_lens;
struct TIELibRaw_lensinfo;
struct TIELibRaw_shootinginfo;
struct TIELibRaw_gps_info;
struct TIELibRaw_imgother;
__interface DELPHIINTERFACE TIELibRawProcessedImage;
typedef System::DelphiInterface<TIELibRawProcessedImage> _di_TIELibRawProcessedImage;
__interface DELPHIINTERFACE TIELibRaw;
typedef System::DelphiInterface<TIELibRaw> _di_TIELibRaw;
__interface DELPHIINTERFACE TIELibOPJImage;
typedef System::DelphiInterface<TIELibOPJImage> _di_TIELibOPJImage;
__interface DELPHIINTERFACE TIELibOPJReader;
typedef System::DelphiInterface<TIELibOPJReader> _di_TIELibOPJReader;
__interface DELPHIINTERFACE TIELibOPJWriter;
typedef System::DelphiInterface<TIELibOPJWriter> _di_TIELibOPJWriter;
__interface DELPHIINTERFACE TIELib;
typedef System::DelphiInterface<TIELib> _di_TIELib;
//-- type declarations -------------------------------------------------------
typedef System::Byte uint8_t;

typedef System::Word uint16_t;

typedef unsigned uint32_t;

typedef System::Int8 int8_t;

typedef short int16_t;

typedef int int32_t;

typedef __int64 int64_t;

typedef System::LongBool bool32;

typedef System::Byte *uint8_p;

typedef System::Word *uint16_p;

typedef unsigned *uint32_p;

typedef System::Int8 *int8_p;

typedef short *int16_p;

typedef int *int32_p;

typedef __int64 *int64_p;

typedef System::LongBool *bool32_p;

typedef float *float_p;

typedef double *double_p;

enum DECLSPEC_DENUM TIEVisionLibraryInfo : unsigned int { ievLIBNAME, ievLIBVERSION, ievLIBPLATFORM, ievLIBFILENAME, ievISTRIAL };

enum DECLSPEC_DENUM TIEVisionChannelFormat: int { ievUINT8, ievSINT8, ievUINT16, ievSINT16, ievSINT32, ievFLOAT32, ievFLOAT64, ievUINT1 = -1610612735 };

enum DECLSPEC_DENUM TIEVisionCvtColorCode : unsigned int { ievBGR2BGRA, ievRGB2RGBA = 0, ievBGRA2BGR, ievRGBA2RGB = 1, ievBGR2RGBA, ievRGB2BGRA = 2, ievRGBA2BGR, ievBGRA2RGB = 3, ievBGR2RGB, ievRGB2BGR = 4, ievBGRA2RGBA, ievRGBA2BGRA = 5, ievBGR2GRAY, ievRGB2GRAY, ievGRAY2BGR, ievGRAY2RGB = 8, ievGRAY2BGRA, ievGRAY2RGBA = 9, ievBGRA2GRAY, ievRGBA2GRAY, ievBGR2BGR565, ievRGB2BGR565, ievBGR5652BGR, ievBGR5652RGB, ievBGRA2BGR565, ievRGBA2BGR565, ievBGR5652BGRA, ievBGR5652RGBA, ievGRAY2BGR565, ievBGR5652GRAY, ievBGR2BGR555, ievRGB2BGR555, ievBGR5552BGR, ievBGR5552RGB, ievBGRA2BGR555, ievRGBA2BGR555, ievBGR5552BGRA, ievBGR5552RGBA, ievGRAY2BGR555, ievBGR5552GRAY, ievBGR2XYZ, ievRGB2XYZ, ievXYZ2BGR, ievXYZ2RGB, ievBGR2YCrCb, ievRGB2YCrCb, ievYCrCb2BGR, 
	ievYCrCb2RGB, ievBGR2HSV, ievRGB2HSV, ievRGB2Lab = 45, ievBGR2Lab = 44, ievBayerBG2BGR = 46, ievBayerGB2BGR, ievBayerRG2BGR, ievBayerGR2BGR, ievBayerBG2RGB = 48, ievBayerGB2RGB, ievBayerRG2RGB = 46, ievBayerGR2RGB, ievBGR2Luv = 50, ievRGB2Luv, ievBGR2HLS, ievRGB2HLS, ievHSV2BGR, ievHSV2RGB, ievLab2BGR, ievLab2RGB, ievLuv2BGR, ievLuv2RGB, ievHLS2BGR, ievHLS2RGB };

enum DECLSPEC_DENUM TIEVisionInterpolation : unsigned int { ievNEAREST, ievLINEAR, ievCUBIC, ievAREA, ievLANCZOS4 };

enum DECLSPEC_DENUM TIEVisionFlipMode: int { ievX_AXIS, ievY_AXIS, ievXY_AXISES = -1 };

enum DECLSPEC_DENUM TIEVisionFileStreamMode : unsigned int { ievREAD, ievCREATE, ievREADWRITE };

enum DECLSPEC_DENUM TIEVisionSeekOffset : unsigned int { ievSET, ievCUR, ievEND };

enum DECLSPEC_DENUM TIEVisionFileFormat : unsigned int { ievTIFF = 1, ievJPEG = 3, ievBMP = 5, ievPNG = 8, ievPXM = 12, ievJ2K = 14, ievRAS = 30, ievHEX = 100 };

enum DECLSPEC_DENUM TIEVisionHaarInvert : unsigned int { ievNOINVERT, ievINVERT, ievRANDOM_INVERT = 2147483647 };

enum DECLSPEC_DENUM TIEVisionHaarMode : unsigned int { ievBASIC, ievCORE, ievALL };

enum DECLSPEC_DENUM TIEVisionHaarBoostType : unsigned int { ievDISCRETE_ADABOOST, ievREAL_ADABOOST, ievLOGITBOOST, ievGENTLE_ADABOOST };

enum DECLSPEC_DENUM TIEVisionHaarStumpError : unsigned int { ievMISCLASSIFICATION_ERROR, ievGINI_ERROR, ievENTROPY_ERROR };

enum DECLSPEC_DENUM TIEVisionPropertyTreeFormat : unsigned int { ievXML, ievINFO, ievINI, ievJSON };

enum DECLSPEC_DENUM TIEVisionBorderType : unsigned int { ievBORDER_CONSTANT, ievBORDER_REPLICATE, ievBORDER_REFLECT, ievBORDER_WRAP, ievBORDER_REFLECT_101, ievBORDER_TRANSPARENT, ievBORDER_ISOLATED = 16 };

enum DECLSPEC_DENUM TIEVisionSmoothType : unsigned int { ievBLUR_NO_SCALE, ievBLUR, ievGAUSSIAN, ievMEDIAN, ievBILATERAL };

enum DECLSPEC_DENUM TIEVisionHistogramType : unsigned int { ievARRAY, ievSPARSE };

enum DECLSPEC_DENUM TIEVisionSortOrder : unsigned int { ievASCENDING, ievDESCENDING };

enum DECLSPEC_DENUM TIEVisionCovarFlags : unsigned int { ievSCRAMBLED, ievNORMAL, ievUSE_AVG, ievSCALE = 0x4, ievROWS = 0x8, ievCOLS = 0x10 };

enum DECLSPEC_DENUM TIEVisionCmpOp : unsigned int { ievEQUAL, ievGREATER, ievGREATER_EQUAL, ievLESS, ievLESS_EQUAL, ievNOT_EQUAL };

enum DECLSPEC_DENUM TIEVisionHomographyMethod : unsigned int { ievREGULAR, ievLMEDS = 0x4, ievRANSAC = 0x8, ievRHO = 0x10 };

enum DECLSPEC_DENUM TIEVisionDCTFlags : unsigned int { ievDCT_FORWARD, ievDCT_INVERSE, ievDCT_ROWS = 0x4 };

enum DECLSPEC_DENUM TIEVisionDFTFlags : unsigned int { ievDFT_FORWARD, ievDFT_INVERSE, ievDFT_SCALE, ievDFT_INVERSE_SCALE, ievDFT_ROWS };

enum DECLSPEC_DENUM TIEVisionGEMMFlags : unsigned int { ievGEMM_NONE, ievGEMM_A_T, ievGEMM_B_T, ievGEMM_C_T = 0x4 };

enum DECLSPEC_DENUM TIEVisionInvertMethod : unsigned int { ievLU, ievSVD, ievSVD_SYM };

enum DECLSPEC_DENUM TIEVisionReduceOp : unsigned int { ievREDUCE_SUM, ievREDUCE_AVG, ievREDUCE_MAX, ievREDUCE_MIN };

enum DECLSPEC_DENUM TIEVisionSolveMethod : unsigned int { ievSOLVE_LU, ievSOLVE_SVD, ievSOLVE_SVD_SYM };

enum DECLSPEC_DENUM TIEVisionSVBFlags : unsigned int { ievSVB_NONE, ievSVB_MODIFY_A, ievSVB_U_T, ievSVB_V_T = 0x4 };

enum DECLSPEC_DENUM TIEVisionSVDFlags : unsigned int { ievSVD_NONE, ievSVD_MODIFY_A, ievSVD_U_T, ievSVD_V_T = 0x4 };

enum DECLSPEC_DENUM TIEVisionContourRetrMode : unsigned int { ievEXTERNAL, ievLIST, ievCCOMP, ievTREE };

enum DECLSPEC_DENUM TIEVisionContourApproxMethod : unsigned int { ievCHAIN_CODE, ievCHAIN_APPROX_NONE, ievCHAIN_APPROX_SIMPLE, ievCHAIN_APPROX_TC89_L1, ievCHAIN_APPROX_TC89_KCOS, ievLINK_RUNS };

enum DECLSPEC_DENUM TIEVisionInpaintMethod : unsigned int { ievINPAINT_NS, ievINPAINT_TELEA };

enum DECLSPEC_DENUM TIEVisionOCRPageSegmentationMode : unsigned int { ievOCROSD_Only, ievOCRAuto_OSD, ievOCRAuto_Only, ievOCRAuto, ievOCRSingle_Column, ievOCRSingle_Block_Vert_Text, ievOCRSingle_Block, ievOCRSingle_Line, ievOCRSingle_Word, ievOCRCircle_Word, ievOCRSingle_Char, ievOCRSparseText, ievOCRSparseText_OSD, ievOCRRawLine };

enum DECLSPEC_DENUM TIEVisionOCRScriptDirection : unsigned int { ievOCRDIR_NEUTRAL, ievOCRDIR_LEFT_TO_RIGHT, ievOCRDIR_RIGHT_TO_LEFT, ievOCRDIR_MIX };

enum DECLSPEC_DENUM TIEVisionOCROrientation : unsigned int { ievOCROrientPAGE_UP, ievOCROrientPAGE_RIGHT, ievOCROrientPAGE_DOWN, ievOCROrientPAGE_LEFT };

enum DECLSPEC_DENUM TIEVisionOCRWritingDirection : unsigned int { ievOCRWritDirLEFT_TO_RIGHT, ievOCRWritDirRIGHT_TO_LEFT, ievOCRWritDirTOP_TO_BOTTOM };

enum DECLSPEC_DENUM TIEVisionOCRTextlineOrder : unsigned int { ievOCRTxtlineOrderLEFT_TO_RIGHT, ievOCRTxtlineOrderRIGHT_TO_LEFT, ievOCRTxtlineOrderTOP_TO_BOTTOM };

enum DECLSPEC_DENUM TIEVisionOCREngine : unsigned int { ievOCRLegacy, ievOCRLTSM, ievOCRLTSMAndLegacy, ievOCRDefault };

typedef int TIEVisionTermCriteriaType;

typedef int TIEVisionMulSpectrumsFlags;

typedef int TIEVisionHaarDetectObjectsFlags;

enum DECLSPEC_DENUM TIEVisionStitchingStatus : unsigned int { ievSSOK, ievSSERR_NEED_MORE_IMGS, ievSSERR_HOMOGRAPHY_EST_FAIL, ievSSERR_CAMERA_PARAMS_ADJUST_FAIL };

typedef int TIEVisionThresholdType;

enum DECLSPEC_DENUM TIEVisionAdaptiveMethod : unsigned int { ievADAPTIVE_THRESH_MEAN_C, ievADAPTIVE_THRESH_GAUSSIAN_C };

enum DECLSPEC_DENUM TIEVisionStructuringElementShape : unsigned int { ievMORPH_RECT, ievMORPH_CROSS, ievMORPH_ELLIPSE };

enum DECLSPEC_DENUM TIEVisionTemplateMatchMethod : unsigned int { ievSQDIFF, ievSQDIFF_NORMED, ievCCORR, ievCCORR_NORMED, ievCCOEFF, ievCCOEFF_NORMED };

enum DECLSPEC_DENUM TIEVisionFeatureType : unsigned int { ievHAAR, ievLBP };

enum DECLSPEC_DENUM TIEVisionLinesDetector : unsigned int { ievBinaryDescriptor, ievLSDDetector };

#pragma pack(push,1)
struct DECLSPEC_DRECORD TIEVisionRect
{
public:
	int x;
	int y;
	int width;
	int height;
};
#pragma pack(pop)


typedef TIEVisionRect *PIEVisionRect;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TIEVisionSize
{
public:
	int width;
	int height;
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD TIEVisionSize2f
{
public:
	float width;
	float height;
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD TIEVisionPoint
{
public:
	int x;
	int y;
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD TIEVisionPoint2f
{
public:
	float x;
	float y;
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD TIEVisionKeyPoint
{
public:
	TIEVisionPoint2f pt;
	float size;
	float angle;
	float response;
	int octave;
	int class_id;
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD TIEVisionScalar
{
public:
	System::StaticArray<double, 4> val;
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD TIEVisionScalarInt32
{
public:
	System::StaticArray<int, 4> val;
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD TIEVisionFloatPair
{
public:
	float first;
	float second;
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD TIEVisionTermCriteria
{
public:
	int ctype;
	int maxIter;
	double epsilon;
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD TIEVisionBox2D
{
public:
	float centerX;
	float centerY;
	float width;
	float height;
	float angle;
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD TIEVisionRotatedRect
{
public:
	TIEVisionPoint2f center;
	TIEVisionSize2f size;
	float angle;
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD TIEVisionRGB8
{
public:
	System::Byte r;
	System::Byte g;
	System::Byte b;
};
#pragma pack(pop)


typedef TIEVisionRGB8 *PIEVisionRGB8;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TIEVisionRGB16
{
public:
	System::Word r;
	System::Word g;
	System::Word b;
};
#pragma pack(pop)


typedef TIEVisionRGB16 *PIEVisionRGB16;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TIEVisionBGR8
{
public:
	System::Byte b;
	System::Byte g;
	System::Byte r;
};
#pragma pack(pop)


typedef TIEVisionBGR8 *PIEVisionBGR8;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TIEVisionBGR16
{
public:
	System::Word b;
	System::Word g;
	System::Word r;
};
#pragma pack(pop)


typedef TIEVisionBGR16 *PIEVisionBGR16;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TIEVisionOCRBox
{
public:
	unsigned text;
	float cost;
	TIEVisionRect rect;
};
#pragma pack(pop)


typedef TIEVisionOCRBox *PIEVisionOCRBox;

__interface  INTERFACE_UUID("{1DECDC99-E370-4E33-B5E5-EB7F84AAFAE2}") TIEVisionBase  : public System::IInterface 
{
	virtual void __stdcall dispose() = 0 ;
	virtual int __stdcall getRefCount() = 0 ;
	virtual void __cdecl internal_destructor() = 0 ;
};

__interface TIEVisionString  : public TIEVisionBase 
{
	virtual HRESULT __safecall length(int &__length_result) = 0 ;
	virtual HRESULT __safecall operatorASSIGN(_di_TIEVisionString src) = 0 ;
	virtual HRESULT __safecall operatorEQUAL(_di_TIEVisionString src, System::LongBool &__operatorEQUAL_result) = 0 ;
	virtual HRESULT __safecall at(int pos, char &__at_result) = 0 ;
	virtual HRESULT __safecall append(_di_TIEVisionString src) = 0 /* overload */;
	virtual HRESULT __safecall append(char * src) = 0 /* overload */;
	virtual HRESULT __safecall c_str(char * &__c_str_result) = 0 ;
	virtual HRESULT __safecall saveToFile(char * filename) = 0 ;
};

__interface TIEVisionWString  : public TIEVisionBase 
{
	virtual HRESULT __safecall length(int &__length_result) = 0 ;
	virtual HRESULT __safecall operatorASSIGN(_di_TIEVisionWString src) = 0 ;
	virtual HRESULT __safecall operatorEQUAL(_di_TIEVisionWString src, System::LongBool &__operatorEQUAL_result) = 0 ;
	virtual HRESULT __safecall at(int pos, System::WideChar &__at_result) = 0 ;
	virtual HRESULT __safecall append(_di_TIEVisionWString src) = 0 /* overload */;
	virtual HRESULT __safecall append(System::WideChar * src) = 0 /* overload */;
	virtual HRESULT __safecall c_str(System::WideChar * &__c_str_result) = 0 ;
	virtual HRESULT __safecall saveToFile(char * filename) = 0 ;
	virtual HRESULT __safecall convertFromUTF8(char * src) = 0 ;
};

__interface TIEVisionBaseVector  : public TIEVisionBase 
{
	virtual HRESULT __safecall size(int &__size_result) = 0 ;
	virtual HRESULT __safecall operatorASSIGN(_di_TIEVisionBaseVector src) = 0 ;
	virtual HRESULT __safecall max_size(unsigned &__max_size_result) = 0 ;
	virtual HRESULT __safecall resize(unsigned sz) = 0 ;
	virtual HRESULT __safecall capacity(unsigned &__capacity_result) = 0 ;
	virtual HRESULT __safecall empty(System::LongBool &__empty_result) = 0 ;
	virtual HRESULT __safecall reserve(unsigned n) = 0 ;
	virtual HRESULT __safecall pop_back() = 0 ;
	virtual HRESULT __safecall erase(unsigned position, unsigned &__erase_result) = 0 /* overload */;
	virtual HRESULT __safecall erase(unsigned first, unsigned last, unsigned &__erase_result) = 0 /* overload */;
	virtual HRESULT __safecall swap(_di_TIEVisionBaseVector vec) = 0 ;
	virtual HRESULT __safecall clear() = 0 ;
	virtual HRESULT __safecall sort(TIEVisionSortOrder order = (TIEVisionSortOrder)(0x0)) = 0 ;
	virtual HRESULT __safecall data(void * &__data_result) = 0 ;
};

__interface TIEVisionVectorString  : public TIEVisionBaseVector 
{
	virtual HRESULT __safecall getString(int pos, _di_TIEVisionString &__getString_result) = 0 ;
	virtual HRESULT __safecall getCString(int pos, char * &__getCString_result) = 0 ;
	virtual HRESULT __safecall push_back(_di_TIEVisionString str) = 0 /* overload */;
	virtual HRESULT __safecall push_back(char * str) = 0 /* overload */;
	virtual HRESULT __safecall setString(int pos, _di_TIEVisionString value) = 0 /* overload */;
	virtual HRESULT __safecall setString(int pos, char * value) = 0 /* overload */;
};

__interface TIEVisionVectorInt32  : public TIEVisionBaseVector 
{
	virtual HRESULT __safecall getInt32(int pos, int &__getInt32_result) = 0 ;
	virtual HRESULT __safecall push_back(int value) = 0 ;
	virtual HRESULT __safecall setInt32(int pos, int value) = 0 ;
};

__interface TIEVisionVectorByte  : public TIEVisionBaseVector 
{
	virtual HRESULT __safecall getUInt8(int pos, System::Byte &__getUInt8_result) = 0 ;
	virtual HRESULT __safecall push_back(System::Byte value) = 0 ;
	virtual HRESULT __safecall setUInt8(int pos, System::Byte value) = 0 ;
};

__interface TIEVisionVectorFloatPair  : public TIEVisionBaseVector 
{
	virtual HRESULT __safecall getFloatPair(int pos, TIEVisionFloatPair &__getFloatPair_result) = 0 ;
	virtual HRESULT __safecall push_back(TIEVisionFloatPair value) = 0 ;
	virtual HRESULT __safecall setFloatPair(int pos, TIEVisionFloatPair value) = 0 ;
};

__interface TIEVisionVectorScalarInt32  : public TIEVisionBaseVector 
{
	virtual HRESULT __safecall getScalarInt32(int pos, TIEVisionScalarInt32 &__getScalarInt32_result) = 0 ;
	virtual HRESULT __safecall push_back(TIEVisionScalarInt32 value) = 0 ;
	virtual HRESULT __safecall setScalarInt32(int pos, TIEVisionScalarInt32 value) = 0 ;
};

__interface TIEVisionVectorPoint  : public TIEVisionBaseVector 
{
	virtual HRESULT __safecall getPoint(int pos, TIEVisionPoint &__getPoint_result) = 0 ;
	virtual HRESULT __safecall push_back(TIEVisionPoint value) = 0 ;
	virtual HRESULT __safecall setPoint(int pos, TIEVisionPoint value) = 0 ;
};

__interface TIEVisionVectorPoint2f  : public TIEVisionBaseVector 
{
	virtual HRESULT __safecall getPoint(int pos, TIEVisionPoint2f &__getPoint_result) = 0 ;
	virtual HRESULT __safecall push_back(TIEVisionPoint2f value) = 0 ;
	virtual HRESULT __safecall setPoint(int pos, TIEVisionPoint2f value) = 0 ;
};

__interface TIEVisionVectorRect  : public TIEVisionBaseVector 
{
	virtual HRESULT __safecall getRect(int pos, TIEVisionRect &__getRect_result) = 0 ;
	virtual HRESULT __safecall push_back(TIEVisionRect value) = 0 ;
	virtual HRESULT __safecall setRect(int pos, TIEVisionRect value) = 0 ;
};

__interface TIEVisionVectorDouble  : public TIEVisionBaseVector 
{
	virtual HRESULT __safecall getDouble(int pos, double &__getDouble_result) = 0 ;
	virtual HRESULT __safecall push_back(double value) = 0 ;
	virtual HRESULT __safecall setDouble(int pos, double value) = 0 ;
};

__interface TIEVisionVectorOCRBox  : public TIEVisionBaseVector 
{
	virtual HRESULT __safecall getOCRBox(int pos, TIEVisionOCRBox &__getOCRBox_result) = 0 ;
	virtual HRESULT __safecall push_back(TIEVisionOCRBox value) = 0 ;
	virtual HRESULT __safecall setOCRBox(int pos, TIEVisionOCRBox value) = 0 ;
};

__interface TIEVisionOCRWordBox  : public TIEVisionBase 
{
	virtual HRESULT __safecall getText(_di_TIEVisionWString &__getText_result) = 0 ;
	virtual HRESULT __safecall getBox(TIEVisionRect &__getBox_result) = 0 ;
	virtual HRESULT __safecall getConfidence(float &__getConfidence_result) = 0 ;
	virtual HRESULT __safecall isBold(System::LongBool &__isBold_result) = 0 ;
	virtual HRESULT __safecall isItalic(System::LongBool &__isItalic_result) = 0 ;
	virtual HRESULT __safecall isUnderlined(System::LongBool &__isUnderlined_result) = 0 ;
	virtual HRESULT __safecall isMonospace(System::LongBool &__isMonospace_result) = 0 ;
	virtual HRESULT __safecall isSerif(System::LongBool &__isSerif_result) = 0 ;
	virtual HRESULT __safecall isSmallCaps(System::LongBool &__isSmallCaps_result) = 0 ;
	virtual HRESULT __safecall getPointSize(int &__getPointSize_result) = 0 ;
	virtual HRESULT __safecall getLanguage(_di_TIEVisionString &__getLanguage_result) = 0 ;
	virtual HRESULT __safecall getScriptDirection(TIEVisionOCRScriptDirection &__getScriptDirection_result) = 0 ;
	virtual HRESULT __safecall isWordFromDictionary(System::LongBool &__isWordFromDictionary_result) = 0 ;
	virtual HRESULT __safecall isSuperscript(System::LongBool &__isSuperscript_result) = 0 ;
	virtual HRESULT __safecall isSubscript(System::LongBool &__isSubscript_result) = 0 ;
	virtual HRESULT __safecall isDropCap(System::LongBool &__isDropCap_result) = 0 ;
};

typedef _di_TIEVisionImage TIEVisionMatrix;

__interface TIEVisionVectorImageRef  : public TIEVisionBaseVector 
{
	virtual HRESULT __safecall getImage(int pos, _di_TIEVisionImage &__getImage_result) = 0 ;
	virtual HRESULT __safecall push_back(_di_TIEVisionImage value) = 0 ;
	virtual HRESULT __safecall setImage(int pos, _di_TIEVisionImage value) = 0 ;
};

__interface TIEVisionVectorObjRef  : public TIEVisionBaseVector 
{
	virtual HRESULT __safecall getObj(int pos, _di_TIEVisionBase &__getObj_result) = 0 ;
	virtual HRESULT __safecall push_back(_di_TIEVisionBase value) = 0 ;
	virtual HRESULT __safecall setObj(int pos, _di_TIEVisionBase value) = 0 ;
};

__interface TIEVisionVectorKeyPoint  : public TIEVisionBaseVector 
{
	virtual HRESULT __safecall getKeyPoint(int pos, TIEVisionKeyPoint &__getKeyPoint_result) = 0 ;
	virtual HRESULT __safecall push_back(TIEVisionKeyPoint value) = 0 ;
	virtual HRESULT __safecall setKeyPoint(int pos, TIEVisionKeyPoint value) = 0 ;
};

__interface TIEVisionStream  : public TIEVisionBase 
{
	virtual HRESULT __safecall seek(__int64 offset, TIEVisionSeekOffset whence) = 0 ;
	virtual HRESULT __safecall tell(__int64 &__tell_result) = 0 ;
	virtual HRESULT __safecall silent_read(void * ptr, __int64 size, __int64 &__silent_read_result) = 0 ;
	virtual HRESULT __safecall silent_write(void * ptr, __int64 size, __int64 &__silent_write_result) = 0 ;
	virtual HRESULT __safecall silent_getc(int &__silent_getc_result) = 0 ;
	virtual HRESULT __safecall eof(System::LongBool &__eof_result) = 0 ;
	virtual HRESULT __safecall saveToFile(char * filename) = 0 /* overload */;
	virtual HRESULT __safecall saveToFile(System::WideChar * filename) = 0 /* overload */;
	virtual HRESULT __safecall loadFromFile(char * filename) = 0 /* overload */;
	virtual HRESULT __safecall loadFromFile(System::WideChar * filename) = 0 /* overload */;
	virtual HRESULT __safecall read(void * ptr, __int64 size) = 0 ;
	virtual HRESULT __safecall write(void * ptr, __int64 size) = 0 ;
	virtual void __cdecl iostream() = 0 ;
	virtual HRESULT __safecall size(__int64 &__size_result) = 0 ;
	virtual HRESULT __safecall convertToCPlusPlus(_di_TIEVisionStream outputStream, char * className, System::LongBool compressed) = 0 ;
};

__interface TIEVisionFileStream  : public TIEVisionStream 
{
	virtual HRESULT __safecall close() = 0 ;
	virtual HRESULT __safecall open(char * filename, TIEVisionFileStreamMode mode) = 0 /* overload */;
	virtual HRESULT __safecall open(System::WideChar * filename, TIEVisionFileStreamMode mode) = 0 /* overload */;
};

__interface TIEVisionTempFileStream  : public TIEVisionFileStream 
{
	virtual HRESULT __safecall getFilename(char * &__getFilename_result) = 0 ;
};

__interface TIEVisionMemoryStream  : public TIEVisionStream 
{
	virtual HRESULT __safecall clear() = 0 ;
	virtual HRESULT __safecall reserve(int count) = 0 ;
};

__interface TIEVisionExistingMemoryStream  : public TIEVisionStream 
{
	virtual HRESULT __safecall reset(void * existingBuffer, int existingBufferSize) = 0 ;
};

__interface TIEVisionTempFileName  : public TIEVisionBase 
{
	virtual HRESULT __safecall c_str(char * &__c_str_result) = 0 ;
};

__interface TIEVisionTempDirName  : public TIEVisionBase 
{
	virtual HRESULT __safecall c_str(char * &__c_str_result) = 0 ;
};

__interface TIEVisionPropertyTree  : public TIEVisionBase 
{
	virtual HRESULT __safecall size(int &__size_result) = 0 ;
	virtual HRESULT __safecall clear() = 0 ;
	virtual HRESULT __safecall save(_di_TIEVisionStream stream, TIEVisionPropertyTreeFormat format = (TIEVisionPropertyTreeFormat)(0x0)) = 0 /* overload */;
	virtual HRESULT __safecall save(char * filename, TIEVisionPropertyTreeFormat format = (TIEVisionPropertyTreeFormat)(0x0)) = 0 /* overload */;
	virtual HRESULT __safecall load(_di_TIEVisionStream stream, TIEVisionPropertyTreeFormat format = (TIEVisionPropertyTreeFormat)(0x0)) = 0 /* overload */;
	virtual HRESULT __safecall load(char * filename, TIEVisionPropertyTreeFormat format = (TIEVisionPropertyTreeFormat)(0x0)) = 0 /* overload */;
	virtual HRESULT __safecall operatorEQUAL(_di_TIEVisionPropertyTree rhs, System::LongBool &__operatorEQUAL_result) = 0 ;
	virtual HRESULT __safecall operatorASSIGN(_di_TIEVisionPropertyTree rhs) = 0 ;
	virtual HRESULT __safecall swap(_di_TIEVisionPropertyTree rhs) = 0 ;
	virtual HRESULT __safecall exists(char * keypath, System::LongBool &__exists_result) = 0 ;
	virtual HRESULT __safecall erase(char * keypath) = 0 ;
	virtual HRESULT __safecall sort() = 0 ;
	virtual HRESULT __safecall getPropertyTree(char * keypath, _di_TIEVisionPropertyTree &__getPropertyTree_result) = 0 ;
	virtual HRESULT __safecall putPropertyTree(char * keypath, _di_TIEVisionPropertyTree propertyTree) = 0 ;
	virtual HRESULT __safecall putString(char * keypath, char * value) = 0 /* overload */;
	virtual HRESULT __safecall putString(char * keypath, _di_TIEVisionString value) = 0 /* overload */;
	virtual HRESULT __safecall getString(char * keypath, _di_TIEVisionString &__getString_result) = 0 ;
	virtual HRESULT __safecall putInt32(char * keypath, int value) = 0 ;
	virtual HRESULT __safecall getInt32(char * keypath, int &__getInt32_result) = 0 ;
	virtual HRESULT __safecall putDouble(char * keypath, double value) = 0 ;
	virtual HRESULT __safecall getDouble(char * keypath, double &__getDouble_result) = 0 ;
	virtual HRESULT __safecall putRect(char * keypath, const TIEVisionRect &rect) = 0 ;
	virtual HRESULT __safecall getRect(char * keypath, TIEVisionRect &__getRect_result) = 0 ;
};

__interface TIEVisionImage  : public TIEVisionBase 
{
	virtual HRESULT __safecall create(int width, int height, TIEVisionChannelFormat channelFormat, int channels) = 0 ;
	virtual HRESULT __safecall swap(_di_TIEVisionImage secondImage) = 0 ;
	virtual HRESULT __safecall operatorASSIGN(_di_TIEVisionImage src) = 0 ;
	virtual HRESULT __safecall share(_di_TIEVisionImage src) = 0 ;
	virtual HRESULT __safecall getWidth(int &__getWidth_result) = 0 ;
	virtual HRESULT __safecall getHeight(int &__getHeight_result) = 0 ;
	virtual HRESULT __safecall getChannels(int &__getChannels_result) = 0 ;
	virtual HRESULT __safecall getChannelFormat(TIEVisionChannelFormat &__getChannelFormat_result) = 0 ;
	virtual HRESULT __safecall getRowLen(int &__getRowLen_result) = 0 ;
	virtual HRESULT __safecall isEmpty(System::LongBool &__isEmpty_result) = 0 ;
	virtual HRESULT __safecall setDPI(int DPI) = 0 ;
	virtual HRESULT __safecall getScanline(int row, void * &__getScanline_result) = 0 ;
	virtual HRESULT __safecall pixel_uint8(int row, int col, uint8_p &__pixel_uint8_result) = 0 ;
	virtual HRESULT __safecall pixel_uint16(int row, int col, uint16_p &__pixel_uint16_result) = 0 ;
	virtual HRESULT __safecall pixel_float32(int row, int col, float_p &__pixel_float32_result) = 0 ;
	virtual HRESULT __safecall pixel_float64(int row, int col, double_p &__pixel_float64_result) = 0 ;
	virtual HRESULT __safecall pixel_RGB8(int row, int col, PIEVisionRGB8 &__pixel_RGB8_result) = 0 ;
	virtual HRESULT __safecall pixel_BGR8(int row, int col, PIEVisionBGR8 &__pixel_BGR8_result) = 0 ;
	virtual HRESULT __safecall getRect(TIEVisionRect rect, _di_TIEVisionImage &__getRect_result) = 0 ;
	virtual HRESULT __safecall getColumn(int col, _di_TIEVisionImage &__getColumn_result) = 0 ;
	virtual HRESULT __safecall getColumns(int startCol, int endCol, _di_TIEVisionImage &__getColumns_result) = 0 ;
	virtual HRESULT __safecall getRow(int row, _di_TIEVisionImage &__getRow_result) = 0 ;
	virtual HRESULT __safecall getRows(int startRow, int endRow, _di_TIEVisionImage &__getRows_result) = 0 ;
	virtual HRESULT __safecall getDiagonal(int diag, _di_TIEVisionImage &__getDiagonal_result) = 0 ;
	virtual HRESULT __safecall getAlphaMask(_di_TIEVisionImage &__getAlphaMask_result) = 0 ;
	virtual HRESULT __safecall createAlphaMask() = 0 ;
	virtual HRESULT __safecall hasAlphaMask(System::LongBool &__hasAlphaMask_result) = 0 ;
	virtual HRESULT __safecall save(char * filename) = 0 /* overload */;
	virtual HRESULT __safecall save(char * filename, TIEVisionFileFormat fileType) = 0 /* overload */;
	virtual HRESULT __safecall getMetadata(_di_TIEVisionPropertyTree &__getMetadata_result) = 0 ;
	virtual HRESULT __safecall resize(_di_TIEVisionImage dst, TIEVisionInterpolation interpolation, _di_TIEVisionImage &__resize_result) = 0 /* overload */;
	virtual HRESULT __safecall resize(int newWidth, int newHeight, TIEVisionInterpolation interpolation, _di_TIEVisionImage &__resize_result) = 0 /* overload */;
	virtual HRESULT __safecall convertColor(_di_TIEVisionImage dst, TIEVisionCvtColorCode code, _di_TIEVisionImage &__convertColor_result) = 0 /* overload */;
	virtual HRESULT __safecall convertColor(TIEVisionCvtColorCode code, _di_TIEVisionImage &__convertColor_result) = 0 /* overload */;
	virtual HRESULT __safecall flip(_di_TIEVisionImage dst, TIEVisionFlipMode flipMode, _di_TIEVisionImage &__flip_result) = 0 /* overload */;
	virtual HRESULT __safecall flip(TIEVisionFlipMode flipMode, _di_TIEVisionImage &__flip_result) = 0 /* overload */;
	virtual HRESULT __safecall equalizeHistogram(_di_TIEVisionImage dst) = 0 /* overload */;
	virtual HRESULT __safecall equalizeHistogram() = 0 /* overload */;
	virtual HRESULT __safecall makeBorder(_di_TIEVisionImage dst, int top, int bottom, int left, int right, TIEVisionBorderType borderType, TIEVisionScalar value) = 0 /* overload */;
	virtual HRESULT __safecall makeBorder(int top, int bottom, int left, int right, TIEVisionBorderType borderType, TIEVisionScalar value) = 0 /* overload */;
	virtual HRESULT __safecall smooth(_di_TIEVisionImage dst, TIEVisionSmoothType smoothType = (TIEVisionSmoothType)(0x2), int param1 = 0x3, int param2 = 0x0, double param3 = 0.000000E+00, double param4 = 0.000000E+00) = 0 /* overload */;
	virtual HRESULT __safecall smooth(TIEVisionSmoothType smoothType = (TIEVisionSmoothType)(0x2), int param1 = 0x3, int param2 = 0x0, double param3 = 0.000000E+00, double param4 = 0.000000E+00) = 0 /* overload */;
	virtual HRESULT __safecall filter2D(_di_TIEVisionImage dst, _di_TIEVisionImage kernel, TIEVisionPoint anchor) = 0 /* overload */;
	virtual HRESULT __safecall filter2D(_di_TIEVisionImage kernel, TIEVisionPoint anchor) = 0 /* overload */;
	virtual HRESULT __safecall integral(_di_TIEVisionImage sum) = 0 /* overload */;
	virtual HRESULT __safecall integral(_di_TIEVisionImage sum, _di_TIEVisionImage sqsum, _di_TIEVisionImage tilted_sum) = 0 /* overload */;
	virtual HRESULT __safecall pyrDown(_di_TIEVisionImage dst) = 0 /* overload */;
	virtual HRESULT __safecall pyrDown() = 0 /* overload */;
	virtual HRESULT __safecall pyrUp(_di_TIEVisionImage dst) = 0 /* overload */;
	virtual HRESULT __safecall pyrUp() = 0 /* overload */;
	virtual HRESULT __safecall splitPlanes(_di_TIEVisionImage plane0) = 0 /* overload */;
	virtual HRESULT __safecall splitPlanes(_di_TIEVisionImage plane0, _di_TIEVisionImage plane1) = 0 /* overload */;
	virtual HRESULT __safecall splitPlanes(_di_TIEVisionImage plane0, _di_TIEVisionImage plane1, _di_TIEVisionImage plane2) = 0 /* overload */;
	virtual HRESULT __safecall splitPlanes(_di_TIEVisionImage plane0, _di_TIEVisionImage plane1, _di_TIEVisionImage plane2, _di_TIEVisionImage plane3) = 0 /* overload */;
	virtual HRESULT __safecall minMax(/* out */ double &minVal, /* out */ double &maxVal) = 0 /* overload */;
	virtual HRESULT __safecall minMax(/* out */ double &minVal, /* out */ double &maxVal, /* out */ TIEVisionPoint &minLoc, /* out */ TIEVisionPoint &maxLoc) = 0 /* overload */;
	virtual HRESULT __safecall minMax(/* out */ double &minVal, /* out */ double &maxVal, /* out */ TIEVisionPoint &minLoc, /* out */ TIEVisionPoint &maxLoc, _di_TIEVisionImage mask) = 0 /* overload */;
	virtual HRESULT __safecall camShift(TIEVisionRect &window, TIEVisionTermCriteria criteria, /* out */ double &area, /* out */ TIEVisionBox2D &box) = 0 /* overload */;
	virtual HRESULT __safecall camShift(TIEVisionRect &window, TIEVisionTermCriteria criteria, TIEVisionRotatedRect &__camShift_result) = 0 /* overload */;
	virtual HRESULT __safecall inRange(TIEVisionScalar lower, TIEVisionScalar upper, _di_TIEVisionImage dest) = 0 /* overload */;
	virtual HRESULT __safecall inRange(_di_TIEVisionImage lower, _di_TIEVisionImage upper, _di_TIEVisionImage dest) = 0 /* overload */;
	virtual HRESULT __safecall convertScale(_di_TIEVisionImage dest, double scale, double shift, _di_TIEVisionImage &__convertScale_result) = 0 /* overload */;
	virtual HRESULT __safecall convertScale(TIEVisionChannelFormat channelFormat, double scale, double shift, _di_TIEVisionImage &__convertScale_result) = 0 /* overload */;
	virtual HRESULT __safecall countNonZero(int &__countNonZero_result) = 0 ;
	virtual HRESULT __safecall isAllWhite(System::LongBool &__isAllWhite_result) = 0 ;
	virtual HRESULT __safecall addWeighted(double alpha, _di_TIEVisionImage rhs, double beta, double gamma, _di_TIEVisionImage dest) = 0 /* overload */;
	virtual HRESULT __safecall avg(_di_TIEVisionImage mask, TIEVisionScalar &__avg_result) = 0 /* overload */;
	virtual HRESULT __safecall avg(TIEVisionScalar &__avg_result) = 0 /* overload */;
	virtual HRESULT __safecall avgSdv(/* out */ TIEVisionScalar &mean, /* out */ TIEVisionScalar &stdDev, _di_TIEVisionImage mask) = 0 /* overload */;
	virtual HRESULT __safecall avgSdv(/* out */ TIEVisionScalar &mean, /* out */ TIEVisionScalar &stdDev) = 0 /* overload */;
	virtual HRESULT __safecall cmp(_di_TIEVisionImage rhs, _di_TIEVisionImage dest, TIEVisionCmpOp cmpOp) = 0 /* overload */;
	virtual HRESULT __safecall cmp(double rhs, _di_TIEVisionImage dest, TIEVisionCmpOp cmpOp) = 0 /* overload */;
	virtual HRESULT __safecall copy(_di_TIEVisionImage dest, _di_TIEVisionImage mask) = 0 /* overload */;
	virtual HRESULT __safecall copy(_di_TIEVisionImage dest) = 0 /* overload */;
	virtual HRESULT __safecall copy(const TIEVisionRect &srcRect, _di_TIEVisionImage dest) = 0 /* overload */;
	virtual HRESULT __safecall copy(const TIEVisionRect &srcRect, _di_TIEVisionImage &__copy_result) = 0 /* overload */;
	virtual HRESULT __safecall copy(const TIEVisionRect &srcRect, const TIEVisionRect &dstRect, _di_TIEVisionImage dest) = 0 /* overload */;
	virtual HRESULT __safecall copy(const TIEVisionRect &srcRect, void * destPtr, int rowLen) = 0 /* overload */;
	virtual HRESULT __safecall copyFrom(TIEVisionChannelFormat srcChannelFormat, int srcChannels, int srcRowLen, void * srcData) = 0 ;
	virtual HRESULT __safecall setZero() = 0 ;
	virtual HRESULT __safecall DCT(_di_TIEVisionImage dest, TIEVisionDCTFlags flags) = 0 ;
	virtual HRESULT __safecall DFT(_di_TIEVisionImage dest, TIEVisionDFTFlags flags, int nonZeroRows = 0x0) = 0 ;
	virtual HRESULT __safecall determinant(double &__determinant_result) = 0 ;
	virtual HRESULT __safecall dotProduct(_di_TIEVisionImage rhs, double &__dotProduct_result) = 0 ;
	virtual HRESULT __safecall eigenVV(_di_TIEVisionImage evects, _di_TIEVisionImage evals) = 0 ;
	virtual HRESULT __safecall invert(_di_TIEVisionImage dest, TIEVisionInvertMethod invertMethod, double &__invert_result) = 0 ;
	virtual HRESULT __safecall LUT(_di_TIEVisionImage dest, _di_TIEVisionImage lut) = 0 ;
	virtual HRESULT __safecall max(_di_TIEVisionImage source1, _di_TIEVisionImage source2) = 0 /* overload */;
	virtual HRESULT __safecall max(_di_TIEVisionImage source1, double source2) = 0 /* overload */;
	virtual HRESULT __safecall merge(_di_TIEVisionImage channel1, _di_TIEVisionImage channel2, _di_TIEVisionImage channel3) = 0 /* overload */;
	virtual HRESULT __safecall merge(_di_TIEVisionImage channel1, _di_TIEVisionImage channel2, _di_TIEVisionImage channel3, _di_TIEVisionImage channel4) = 0 /* overload */;
	virtual HRESULT __safecall min(_di_TIEVisionImage source1, _di_TIEVisionImage source2) = 0 /* overload */;
	virtual HRESULT __safecall min(_di_TIEVisionImage source1, double source2) = 0 /* overload */;
	virtual HRESULT __safecall mulSpectrums(_di_TIEVisionImage rhs, _di_TIEVisionImage dest, int flags) = 0 ;
	virtual HRESULT __safecall mulTransposed(_di_TIEVisionImage dest, System::LongBool order, _di_TIEVisionImage delta, double scale = 1.000000E+00) = 0 /* overload */;
	virtual HRESULT __safecall mulTransposed(_di_TIEVisionImage dest, System::LongBool order, double scale = 1.000000E+00) = 0 /* overload */;
	virtual HRESULT __safecall norm(double &__norm_result) = 0 /* overload */;
	virtual HRESULT __safecall norm(_di_TIEVisionImage mask, double &__norm_result) = 0 /* overload */;
	virtual HRESULT __safecall opNot(_di_TIEVisionImage dest) = 0 ;
	virtual HRESULT __safecall perspectiveTransform(_di_TIEVisionImage dest, _di_TIEVisionImage matrix) = 0 ;
	virtual HRESULT __safecall reduce(_di_TIEVisionImage dest, int dim = 0xffffffff, TIEVisionReduceOp op = (TIEVisionReduceOp)(0x0)) = 0 ;
	virtual HRESULT __safecall repeatImage(int ny, int nx, _di_TIEVisionImage dest) = 0 ;
	virtual HRESULT __safecall scaleAdd(double scale, _di_TIEVisionImage rhs, _di_TIEVisionImage dest) = 0 ;
	virtual HRESULT __safecall setValue(TIEVisionScalar value, _di_TIEVisionImage mask) = 0 /* overload */;
	virtual HRESULT __safecall setValue(TIEVisionScalar value) = 0 /* overload */;
	virtual HRESULT __safecall setIdentity() = 0 ;
	virtual HRESULT __safecall transpose() = 0 ;
	virtual HRESULT __safecall findContours(TIEVisionContourRetrMode mode, TIEVisionContourApproxMethod method, TIEVisionPoint offset, _di_TIEVisionVectorObjRef &__findContours_result) = 0 ;
	virtual HRESULT __safecall inpaint(_di_TIEVisionImage mask, double range, TIEVisionInpaintMethod method = (TIEVisionInpaintMethod)(0x0)) = 0 /* overload */;
	virtual HRESULT __safecall inpaint(int brushWidth, int brushHeight, const TIEVisionRect &subimageRect, double range, TIEVisionInpaintMethod method = (TIEVisionInpaintMethod)(0x0)) = 0 /* overload */;
	virtual HRESULT __safecall floodFill(_di_TIEVisionImage outMask, TIEVisionPoint startingPoint, TIEVisionScalar loDiff, TIEVisionScalar upDiff, int connectivity = 0x4, System::LongBool fixedRange = false) = 0 ;
	virtual HRESULT __safecall canny(double threshold1, double threshold2, int apertureSize = 0x3, System::LongBool L2gradient = false) = 0 /* overload */;
	virtual HRESULT __safecall canny(_di_TIEVisionImage outImage, double threshold1, double threshold2, int apertureSize = 0x3, System::LongBool L2gradient = false) = 0 /* overload */;
	virtual HRESULT __safecall blur(TIEVisionSize ksize, TIEVisionPoint anchor, TIEVisionBorderType borderType = (TIEVisionBorderType)(0x4)) = 0 /* overload */;
	virtual HRESULT __safecall blur(_di_TIEVisionImage outImage, TIEVisionSize ksize, TIEVisionPoint anchor, TIEVisionBorderType borderType = (TIEVisionBorderType)(0x4)) = 0 /* overload */;
	virtual HRESULT __safecall houghLines(double rho, double theta, int threshold, double srn, double stn, _di_TIEVisionVectorFloatPair &__houghLines_result) = 0 ;
	virtual HRESULT __safecall houghLinesP(double rho, double theta, int threshold, double minLineLength, double maxLineGap, _di_TIEVisionVectorScalarInt32 &__houghLinesP_result) = 0 ;
	virtual HRESULT __safecall fastNlMeansDenoisingColored(float h = 3.000000E+00f, float hColor = 3.000000E+00f, int templateWindowSize = 0x7, int searchWindowSize = 0x15) = 0 /* overload */;
	virtual HRESULT __safecall fastNlMeansDenoisingColored(_di_TIEVisionImage outImage, float h = 3.000000E+00f, float hColor = 3.000000E+00f, int templateWindowSize = 0x7, int searchWindowSize = 0x15) = 0 /* overload */;
	virtual HRESULT __safecall threshold(double thresh, double maxval, int threshType, double &__threshold_result) = 0 ;
	virtual HRESULT __safecall adaptiveThreshold(double maxValue, TIEVisionAdaptiveMethod adaptiveMethod = (TIEVisionAdaptiveMethod)(0x0), int thresholdType = 0x0, int blockSize = 0x3, double C = 5.000000E+00) = 0 ;
	virtual HRESULT __safecall erode(TIEVisionStructuringElementShape erosionType, unsigned erosionSize) = 0 ;
	virtual HRESULT __safecall dilate(TIEVisionStructuringElementShape dilationType, unsigned dilationSize) = 0 ;
	virtual HRESULT __safecall matchTemplate(_di_TIEVisionImage templ, TIEVisionTemplateMatchMethod matchMethod, double_p rank, TIEVisionRect &__matchTemplate_result) = 0 ;
	virtual HRESULT __safecall matchTemplateAsMap(_di_TIEVisionImage templ, TIEVisionTemplateMatchMethod matchMethod, _di_TIEVisionImage &__matchTemplateAsMap_result) = 0 ;
	virtual HRESULT __safecall detectLines(TIEVisionLinesDetector detector, _di_TIEVisionVectorScalarInt32 &__detectLines_result) = 0 ;
	virtual HRESULT __safecall warpPerspective(_di_TIEVisionImage M, TIEVisionSize destSize, TIEVisionInterpolation interpolation, TIEVisionBorderType borderMode, System::LongBool inverseMap, _di_TIEVisionImage &__warpPerspective_result) = 0 /* overload */;
	virtual HRESULT __safecall warpPerspective(_di_TIEVisionImage M, TIEVisionSize destSize, TIEVisionInterpolation interpolation, TIEVisionBorderType borderMode, const TIEVisionScalar &borderValue, System::LongBool inverseMap, _di_TIEVisionImage &__warpPerspective_result) = 0 /* overload */;
};

__interface TIEVisionHistogram  : public TIEVisionBase 
{
	virtual HRESULT __safecall getValue(int index0, double &__getValue_result) = 0 /* overload */;
	virtual HRESULT __safecall getValue(int index0, int index1, double &__getValue_result) = 0 /* overload */;
	virtual HRESULT __safecall getValue(int index0, int index1, int index2, double &__getValue_result) = 0 /* overload */;
	virtual HRESULT __safecall size(int index, int &__size_result) = 0 ;
	virtual HRESULT __safecall clear() = 0 ;
	virtual HRESULT __safecall swap(_di_TIEVisionHistogram secondHist) = 0 ;
	virtual HRESULT __safecall operatorASSIGN(_di_TIEVisionHistogram src) = 0 ;
	virtual HRESULT __safecall normalize(double factor) = 0 ;
	virtual HRESULT __safecall calc(_di_TIEVisionImage image, System::LongBool accumulate = false) = 0 /* overload */;
	virtual HRESULT __safecall calc(_di_TIEVisionImage image, System::LongBool accumulate, _di_TIEVisionImage mask) = 0 /* overload */;
	virtual HRESULT __safecall calcBackProject(_di_TIEVisionImage image, _di_TIEVisionImage backProject) = 0 ;
	virtual HRESULT __safecall minMax(/* out */ float &vmin, /* out */ float &vmax) = 0 ;
};

__interface TIEVisionCascadeClassifier  : public TIEVisionBase 
{
	virtual HRESULT __safecall load(_di_TIEVisionStream stream) = 0 /* overload */;
	virtual HRESULT __safecall load(char * filename) = 0 /* overload */;
	virtual HRESULT __safecall detectObjects(_di_TIEVisionImage image, double scaleFactor, int minNeighbors, int flags, TIEVisionSize minSize, TIEVisionSize maxSize, _di_TIEVisionVectorRect &__detectObjects_result) = 0 ;
	virtual HRESULT __safecall empty(System::LongBool &__empty_result) = 0 ;
};

typedef int __stdcall (*TIEVisionTrainCascadeMsgCallBack)(char * msg);

__interface TIEVisionCascadeClassifierTrainer  : public TIEVisionBase 
{
	virtual HRESULT __safecall createSamples(char * imagename, char * bgImagesDir, char * vecname, int num = 0x3e8, int width = 0x18, int height = 0x18, int bgcolor = 0x0, int bgthreshold = 0x50, System::LongBool inv = false, System::LongBool randomInvert = false, int maxintensitydev = 0x28, double maxxangle = 1.100000E+00, double maxyangle = 1.100000E+00, double maxzangle = 5.000000E-01, char * infoname = (char *)(0x0)) = 0 ;
	virtual HRESULT __safecall createSamplesFromImageSet(char * positiveSamplesDir, char * vecname, int width, int height, int &__createSamplesFromImageSet_result) = 0 ;
	virtual HRESULT __safecall mergeSamples(char * sourceVec, char * destVec) = 0 ;
	virtual HRESULT __safecall getSamplesCount(char * vecFile, int &__getSamplesCount_result) = 0 ;
	virtual HRESULT __safecall trainCascade(char * cascadeDirName, char * vecName, char * bgImagesDir, int numPos = 0x3e8, int sampleWidth = 0x18, int sampleHeight = 0x18, int numStages = 0x14, TIEVisionFeatureType featureType = (TIEVisionFeatureType)(0x0), System::LongBool continueTraining = false, TIEVisionTrainCascadeMsgCallBack msgCallBack = 0x0, int precalcValBufSize = 0x100, int precalcIdxBufSize = 0x100, double acceptanceRatioBreakValue = -1.000000E+00, TIEVisionHaarBoostType boostType = (TIEVisionHaarBoostType)(0x3), double minHitRate = 9.950000E-01, double maxFalseAlarmRate = 4.500000E-01, double weightTrimRate = 9.500000E-01, int maxDepth = 0x1, int maxWeakCount = 0x78, TIEVisionHaarMode haarFeatureSet = (TIEVisionHaarMode)(0x0)) = 0 ;
};

__interface TIEVisionImageList  : public TIEVisionBase 
{
	virtual HRESULT __safecall insert(int position, _di_TIEVisionImage image, int &__insert_result) = 0 /* overload */;
	virtual HRESULT __safecall insert(int position, char * filename, int &__insert_result) = 0 /* overload */;
	virtual HRESULT __safecall remove(int position) = 0 ;
	virtual HRESULT __safecall clear() = 0 ;
	virtual HRESULT __safecall getImage(int position, _di_TIEVisionImage &__getImage_result) = 0 ;
	virtual HRESULT __safecall size(int &__size_result) = 0 ;
	virtual HRESULT __safecall setImage(int position, _di_TIEVisionImage image) = 0 ;
	virtual HRESULT __safecall pushBack(_di_TIEVisionImage image, int &__pushBack_result) = 0 /* overload */;
	virtual HRESULT __safecall pushBack(char * filename, int &__pushBack_result) = 0 /* overload */;
};

__interface TIEVisionMemoryImageList  : public TIEVisionImageList 
{
	
};

__interface TIEVisionMemorySharedImageList  : public TIEVisionImageList 
{
	
};

__interface TIEVisionTempFileImageList  : public TIEVisionImageList 
{
	virtual HRESULT __safecall insertExistingFile(int position, char * filename, System::LongBool deleteOnDestroy, int &__insertExistingFile_result) = 0 ;
	virtual HRESULT __safecall pushBackExistingFile(char * filename, System::LongBool deleteOnDestroy, int &__pushBackExistingFile_result) = 0 ;
	virtual HRESULT __safecall getFilename(int position, char * &__getFilename_result) = 0 ;
};

__interface TIEVisionInputOutput  : public TIEVisionBase 
{
	virtual HRESULT __safecall zcompress(_di_TIEVisionStream inputStream, _di_TIEVisionStream outputStream, int compressionLevel = 0xffffffff) = 0 ;
	virtual HRESULT __safecall zdecompress(_di_TIEVisionStream inputStream, _di_TIEVisionStream outputStream) = 0 ;
};

typedef double __stdcall (*TIEVisionOptimizerFunction)(void * userData, _di_TIEVisionVectorDouble variables);

__interface TIEVisionMath  : public TIEVisionBase 
{
	virtual HRESULT __safecall optimizeWith_NelderMeadSimplexMethod(TIEVisionOptimizerFunction func, void * funcUserData, _di_TIEVisionVectorDouble solutions, /* out */ double &optimalValue, double length, int timeout, double eps, System::LongBool &__optimizeWith_NelderMeadSimplexMethod_result) = 0 ;
	virtual HRESULT __safecall calcCovarMatrix(_di_TIEVisionVectorImageRef images, _di_TIEVisionImage covMat, _di_TIEVisionImage avg, TIEVisionCovarFlags flags) = 0 ;
	virtual HRESULT __safecall cartToPolar(_di_TIEVisionImage x, _di_TIEVisionImage y, _di_TIEVisionImage magnitude, _di_TIEVisionImage angle, System::LongBool angleInDegrees = false) = 0 ;
	virtual HRESULT __safecall genericMultiply(_di_TIEVisionImage src1, _di_TIEVisionImage src2, double alpha, _di_TIEVisionImage src3, double beta, _di_TIEVisionImage dest, TIEVisionGEMMFlags flags = (TIEVisionGEMMFlags)(0x0)) = 0 ;
	virtual HRESULT __safecall mahalonobisDistance(_di_TIEVisionImage vec1, _di_TIEVisionImage vec2, _di_TIEVisionImage invCovMatrix, double &__mahalonobisDistance_result) = 0 ;
	virtual HRESULT __safecall solve(_di_TIEVisionImage source1, _di_TIEVisionImage source2, _di_TIEVisionImage dest, TIEVisionSolveMethod method, int &__solve_result) = 0 ;
	virtual HRESULT __safecall solveCubic(_di_TIEVisionImage coeffs, _di_TIEVisionImage roots) = 0 ;
	virtual HRESULT __safecall sub(_di_TIEVisionImage lhs, _di_TIEVisionImage rhs, _di_TIEVisionImage dest, _di_TIEVisionImage mask) = 0 /* overload */;
	virtual HRESULT __safecall sub(_di_TIEVisionImage lhs, _di_TIEVisionImage rhs, _di_TIEVisionImage dest) = 0 /* overload */;
	virtual HRESULT __safecall sub(TIEVisionScalar lhs, _di_TIEVisionImage rhs, _di_TIEVisionImage dest, _di_TIEVisionImage mask) = 0 /* overload */;
	virtual HRESULT __safecall sub(TIEVisionScalar lhs, _di_TIEVisionImage rhs, _di_TIEVisionImage dest) = 0 /* overload */;
	virtual HRESULT __safecall sub(_di_TIEVisionImage lhs, TIEVisionScalar rhs, _di_TIEVisionImage dest, _di_TIEVisionImage mask) = 0 /* overload */;
	virtual HRESULT __safecall sub(_di_TIEVisionImage lhs, TIEVisionScalar rhs, _di_TIEVisionImage dest) = 0 /* overload */;
	virtual HRESULT __safecall add(_di_TIEVisionImage lhs, _di_TIEVisionImage rhs, _di_TIEVisionImage dest, _di_TIEVisionImage mask) = 0 /* overload */;
	virtual HRESULT __safecall add(_di_TIEVisionImage lhs, _di_TIEVisionImage rhs, _di_TIEVisionImage dest) = 0 /* overload */;
	virtual HRESULT __safecall add(_di_TIEVisionImage lhs, TIEVisionScalar rhs, _di_TIEVisionImage dest, _di_TIEVisionImage mask) = 0 /* overload */;
	virtual HRESULT __safecall add(_di_TIEVisionImage lhs, TIEVisionScalar rhs, _di_TIEVisionImage dest) = 0 /* overload */;
	virtual HRESULT __safecall absDiff(_di_TIEVisionImage lhs, _di_TIEVisionImage rhs, _di_TIEVisionImage dest) = 0 /* overload */;
	virtual HRESULT __safecall absDiff(_di_TIEVisionImage lhs, TIEVisionScalar rhs, _di_TIEVisionImage dest) = 0 /* overload */;
	virtual HRESULT __safecall opAnd(_di_TIEVisionImage lhs, _di_TIEVisionImage rhs, _di_TIEVisionImage dest) = 0 /* overload */;
	virtual HRESULT __safecall opAnd(_di_TIEVisionImage lhs, _di_TIEVisionImage rhs, _di_TIEVisionImage dest, _di_TIEVisionImage mask) = 0 /* overload */;
	virtual HRESULT __safecall opAnd(_di_TIEVisionImage lhs, TIEVisionScalar rhs, _di_TIEVisionImage dest, _di_TIEVisionImage mask) = 0 /* overload */;
	virtual HRESULT __safecall opAnd(_di_TIEVisionImage lhs, TIEVisionScalar rhs, _di_TIEVisionImage dest) = 0 /* overload */;
	virtual HRESULT __safecall opDiv(_di_TIEVisionImage lhs, _di_TIEVisionImage rhs, _di_TIEVisionImage dest, double scale = 1.000000E+00) = 0 ;
	virtual HRESULT __safecall exp(_di_TIEVisionImage src, _di_TIEVisionImage dest) = 0 ;
	virtual HRESULT __safecall log(_di_TIEVisionImage src, _di_TIEVisionImage dest) = 0 ;
	virtual HRESULT __safecall mul(_di_TIEVisionImage lhs, _di_TIEVisionImage rhs, _di_TIEVisionImage dest, double scale = 1.000000E+00) = 0 ;
	virtual HRESULT __safecall opOr(_di_TIEVisionImage lhs, _di_TIEVisionImage rhs, _di_TIEVisionImage dest, _di_TIEVisionImage mask) = 0 /* overload */;
	virtual HRESULT __safecall opOr(_di_TIEVisionImage lhs, _di_TIEVisionImage rhs, _di_TIEVisionImage dest) = 0 /* overload */;
	virtual HRESULT __safecall opOr(_di_TIEVisionImage lhs, TIEVisionScalar rhs, _di_TIEVisionImage dest, _di_TIEVisionImage mask) = 0 /* overload */;
	virtual HRESULT __safecall opOr(_di_TIEVisionImage lhs, TIEVisionScalar rhs, _di_TIEVisionImage dest) = 0 /* overload */;
	virtual HRESULT __safecall pow(_di_TIEVisionImage src, _di_TIEVisionImage dest, double power) = 0 ;
	virtual HRESULT __safecall trace(_di_TIEVisionImage src, TIEVisionScalar &__trace_result) = 0 ;
	virtual HRESULT __safecall transform(_di_TIEVisionImage src, _di_TIEVisionImage dest, _di_TIEVisionImage transfMatrix) = 0 /* overload */;
	virtual HRESULT __safecall transpose(_di_TIEVisionImage src, _di_TIEVisionImage dest) = 0 ;
	virtual HRESULT __safecall opXor(_di_TIEVisionImage lhs, _di_TIEVisionImage rhs, _di_TIEVisionImage dest, _di_TIEVisionImage mask) = 0 /* overload */;
	virtual HRESULT __safecall opXor(_di_TIEVisionImage lhs, _di_TIEVisionImage rhs, _di_TIEVisionImage dest) = 0 /* overload */;
	virtual HRESULT __safecall opXor(_di_TIEVisionImage lhs, TIEVisionScalar rhs, _di_TIEVisionImage dest, _di_TIEVisionImage mask) = 0 /* overload */;
	virtual HRESULT __safecall opXor(_di_TIEVisionImage lhs, TIEVisionScalar rhs, _di_TIEVisionImage dest) = 0 /* overload */;
	virtual HRESULT __safecall boundingRect(_di_TIEVisionVectorPoint points, TIEVisionRect &__boundingRect_result) = 0 ;
	virtual HRESULT __safecall contourArea(_di_TIEVisionVectorPoint points, double &__contourArea_result) = 0 ;
	virtual HRESULT __safecall rectIntersect(const TIEVisionRect &rect1, const TIEVisionRect &rect2, TIEVisionRect &__rectIntersect_result) = 0 ;
	virtual HRESULT __safecall rectTestIntersect(const TIEVisionRect &rect1, const TIEVisionRect &rect2, System::LongBool &__rectTestIntersect_result) = 0 ;
	virtual HRESULT __safecall rectUnion(const TIEVisionRect &rect1, const TIEVisionRect &rect2, TIEVisionRect &__rectUnion_result) = 0 ;
	virtual HRESULT __safecall rectContains(const TIEVisionRect &rect, const TIEVisionPoint &point, System::LongBool &__rectContains_result) = 0 ;
	virtual HRESULT __safecall rectMergeIntersecting(const _di_TIEVisionVectorRect rects1, const _di_TIEVisionVectorRect rects2, _di_TIEVisionVectorRect &__rectMergeIntersecting_result) = 0 ;
	virtual HRESULT __safecall findHomography(const _di_TIEVisionVectorPoint2f srcPoints, const _di_TIEVisionVectorPoint2f dstPoints, TIEVisionHomographyMethod method, _di_TIEVisionImage &__findHomography_result) = 0 ;
	virtual HRESULT __safecall isValidHomography(_di_TIEVisionImage value, System::LongBool &__isValidHomography_result) = 0 ;
};

__interface TIEVisionDrawing  : public TIEVisionBase 
{
	virtual HRESULT __safecall rectangle(_di_TIEVisionImage image, TIEVisionPoint pt1, TIEVisionPoint pt2, const TIEVisionScalar &color, int thickness = 0x1, int linetype = 0x8, int shift = 0x0) = 0 /* overload */;
	virtual HRESULT __safecall rectangle(_di_TIEVisionImage image, const TIEVisionRect &rect, const TIEVisionScalar &color, int thickness = 0x1, int linetype = 0x8, int shift = 0x0) = 0 /* overload */;
	virtual HRESULT __safecall circle(_di_TIEVisionImage image, TIEVisionPoint center, int radius, TIEVisionScalar color, int thickness = 0x1, int linetype = 0x8, int shift = 0x0) = 0 ;
	virtual HRESULT __safecall ellipse(_di_TIEVisionImage image, TIEVisionPoint center, TIEVisionSize axes, double angle, double startAngle, double endAngle, TIEVisionScalar color, int thickness = 0x1, int linetype = 0x8, int shift = 0x0) = 0 ;
	virtual HRESULT __safecall drawContours(_di_TIEVisionImage image, _di_TIEVisionVectorObjRef contours, const TIEVisionScalar &color, int contourIdx = 0xffffffff, int thickness = 0x1, int linetype = 0x8) = 0 ;
};

__interface TIEVisionObjectTracker  : public TIEVisionBase 
{
	virtual HRESULT __safecall setInitialPosition(_di_TIEVisionImage image, const TIEVisionRect &window) = 0 ;
	virtual HRESULT __safecall locateNewPosition(_di_TIEVisionImage image, /* out */ _di_TIEVisionImage &backProjectedImage, TIEVisionRotatedRect &__locateNewPosition_result) = 0 ;
};

__interface TIEVisionObjectsFinder  : public TIEVisionBase 
{
	virtual HRESULT __safecall addClassifier(char * name, _di_TIEVisionBase classifier) = 0 ;
	virtual HRESULT __safecall getClassifier(char * name, _di_TIEVisionBase &__getClassifier_result) = 0 ;
	virtual HRESULT __safecall findIn(_di_TIEVisionImage image) = 0 ;
	virtual HRESULT __safecall getFoundRectCount(char * name, int &__getFoundRectCount_result) = 0 ;
	virtual HRESULT __safecall getFoundRect(char * name, int index, TIEVisionRect &__getFoundRect_result) = 0 ;
	virtual HRESULT __safecall mergeRects(char * name1, char * name2, _di_TIEVisionVectorRect &__mergeRects_result) = 0 ;
	virtual HRESULT __safecall mergeAllRects(_di_TIEVisionVectorRect &__mergeAllRects_result) = 0 ;
	virtual HRESULT __safecall removeAllClassifiers() = 0 ;
	virtual HRESULT __safecall classifierExists(char * name, System::LongBool &__classifierExists_result) = 0 ;
	virtual HRESULT __safecall removeClassifier(char * name) = 0 ;
	virtual HRESULT __safecall setDivisor(int value) = 0 ;
	virtual HRESULT __safecall setHaarScaleFactor(double value) = 0 ;
	virtual HRESULT __safecall setHaarMinNeighbors(int value) = 0 ;
	virtual HRESULT __safecall setHaarFlags(int value) = 0 ;
	virtual HRESULT __safecall setEqualizeHistogram(System::LongBool value) = 0 ;
	virtual HRESULT __safecall setHaarMinSize(TIEVisionSize size) = 0 ;
	virtual HRESULT __safecall setHaarMaxSize(TIEVisionSize size) = 0 ;
};

__interface TIEVisionOCR  : public TIEVisionBase 
{
	virtual HRESULT __safecall recognize(_di_TIEVisionImage image, const TIEVisionRect &rect, _di_TIEVisionWString &__recognize_result) = 0 ;
	virtual HRESULT __safecall clearAdaptiveInfo() = 0 ;
	virtual HRESULT __safecall isWordValid(char * word, System::LongBool &__isWordValid_result) = 0 ;
	virtual HRESULT __safecall getBoxes(_di_TIEVisionVectorOCRBox &__getBoxes_result) = 0 ;
	virtual HRESULT __safecall getTextAngle(float &__getTextAngle_result) = 0 /* overload */;
	virtual HRESULT __safecall getTextAngle(_di_TIEVisionImage image, float &__getTextAngle_result) = 0 /* overload */;
	virtual HRESULT __safecall getRegions(System::LongBool textOnly, _di_TIEVisionVectorRect &__getRegions_result) = 0 /* overload */;
	virtual HRESULT __safecall getRegions(_di_TIEVisionImage image, System::LongBool textOnly, _di_TIEVisionVectorRect &__getRegions_result) = 0 /* overload */;
	virtual HRESULT __safecall setSegmentationMode(TIEVisionOCRPageSegmentationMode value) = 0 ;
	virtual HRESULT __safecall getWordBoxes(_di_TIEVisionVectorObjRef &__getWordBoxes_result) = 0 ;
	virtual HRESULT __safecall getOrientation(/* out */ TIEVisionOCROrientation &orientation, /* out */ TIEVisionOCRWritingDirection &writingDirection, /* out */ TIEVisionOCRTextlineOrder &textlineOrder, /* out */ float &deskewAngle) = 0 ;
};

__interface TIEVisionSearchablePDFGenerator  : public TIEVisionBase 
{
	virtual HRESULT __safecall setSegmentationMode(TIEVisionOCRPageSegmentationMode value) = 0 ;
	virtual HRESULT __safecall beginDocument(char * path, char * title) = 0 ;
	virtual HRESULT __safecall addPage(_di_TIEVisionImage image) = 0 ;
	virtual HRESULT __safecall endDocument() = 0 ;
};

__interface TIEVisionPeopleDetector  : public TIEVisionBase 
{
	virtual HRESULT __safecall detect(_di_TIEVisionImage image, _di_TIEVisionVectorRect &__detect_result) = 0 ;
};

__interface TIEVisionBarCodeSymbol  : public TIEVisionBase 
{
	virtual HRESULT __safecall getSymbolType(_di_TIEVisionWString &__getSymbolType_result) = 0 ;
	virtual HRESULT __safecall getData(_di_TIEVisionWString &__getData_result) = 0 ;
	virtual HRESULT __safecall getBoundingBox(TIEVisionRect &__getBoundingBox_result) = 0 ;
	virtual HRESULT __safecall getXML(_di_TIEVisionWString &__getXML_result) = 0 ;
	virtual HRESULT __safecall getQuality(int &__getQuality_result) = 0 ;
};

__interface TIEVisionBarCodeScanner  : public TIEVisionBase 
{
	virtual HRESULT __safecall scan(_di_TIEVisionImage image, const TIEVisionRect &rect, _di_TIEVisionVectorObjRef &__scan_result) = 0 ;
};

__interface TIEVisionStitcher  : public TIEVisionBase 
{
	virtual HRESULT __safecall stitch(_di_TIEVisionVectorImageRef images, /* out */ TIEVisionStitchingStatus &status, System::LongBool deterministic, _di_TIEVisionImage &__stitch_result) = 0 ;
};

__interface TIEVisionBackgroundSubtractor  : public TIEVisionBase 
{
	virtual HRESULT __safecall selectMethodMOG(int history = 0xc8, int nmixtures = 0x5, double backgroundRatio = 7.000000E-01, double noiseSigma = 0.000000E+00) = 0 ;
	virtual HRESULT __safecall selectMethodMOG2(int history = 0x1f4, double varThreshold = 1.600000E+01, System::LongBool detectShadows = true) = 0 ;
	virtual HRESULT __safecall selectMethodKNN(int history = 0x1f4, double dist2Threshold = 4.000000E+02, System::LongBool detectShadows = true) = 0 ;
	virtual HRESULT __safecall selectMethodGMG(int initializationFrames = 0x78, double decisionThreshold = 8.000000E-01) = 0 ;
	virtual HRESULT __safecall apply(_di_TIEVisionImage image, double learningRate, _di_TIEVisionImage &__apply_result) = 0 ;
};

__interface TIEVisionFaceRecognizer  : public TIEVisionBase 
{
	virtual HRESULT __safecall selectEigenFaceRecognizer(unsigned imageWidth = (unsigned)(0x64), unsigned imageHeight = (unsigned)(0x82), int numComponents = 0x0) = 0 ;
	virtual HRESULT __safecall selectFisherFaceRecognizer(unsigned imageWidth = (unsigned)(0x64), unsigned imageHeight = (unsigned)(0x82), int numComponents = 0x0) = 0 ;
	virtual HRESULT __safecall selectLBPHFaceRecognizer(int radius = 0x1, int neighbors = 0x8, int grid_x = 0x8, int grid_y = 0x8) = 0 ;
	virtual HRESULT __safecall addTrainImage(_di_TIEVisionImage image, System::WideChar * imlabel) = 0 ;
	virtual HRESULT __safecall clear() = 0 ;
	virtual HRESULT __safecall isTrained(System::LongBool &__isTrained_result) = 0 ;
	virtual HRESULT __safecall train(System::LongBool update = false) = 0 ;
	virtual HRESULT __safecall detect(_di_TIEVisionImage image, /* out */ double &confidence, System::WideChar * &__detect_result) = 0 ;
	virtual HRESULT __safecall save(_di_IStream stream) = 0 /* overload */;
	virtual HRESULT __safecall save(System::WideChar * filename) = 0 /* overload */;
	virtual HRESULT __safecall load(_di_IStream stream) = 0 /* overload */;
	virtual HRESULT __safecall load(System::WideChar * filename) = 0 /* overload */;
};

__interface TIEVisionGrabCut  : public TIEVisionBase 
{
	virtual HRESULT __safecall setInputImage(_di_TIEVisionImage image, double scale = 0.000000E+00) = 0 ;
	virtual HRESULT __safecall setForegroundRect(const TIEVisionRect &rect) = 0 ;
	virtual HRESULT __safecall run(int iterCount) = 0 ;
	virtual HRESULT __safecall getSelectionMask(Hyiedefs::_di_IIEMask selectionMask) = 0 ;
	virtual HRESULT __safecall setSelectionMask(Hyiedefs::_di_IIEMask selectionMask, System::LongBool maskIsInside = true) = 0 ;
};

__interface TIEVisionWatershed  : public TIEVisionBase 
{
	virtual HRESULT __safecall setInputImage(_di_TIEVisionImage image, double scale = 1.000000E+00) = 0 ;
	virtual HRESULT __safecall setMarkers(int labelValue) = 0 /* overload */;
	virtual HRESULT __safecall setMarkers(Hyiedefs::_di_IIEMask selectionMask, int labelValue) = 0 /* overload */;
	virtual HRESULT __safecall setMarkers(_di_TIEVisionImage image) = 0 /* overload */;
	virtual HRESULT __safecall run() = 0 ;
	virtual HRESULT __safecall getSelectionMask(Hyiedefs::_di_IIEMask selectionMask, int markerLabel) = 0 ;
};

__interface TIEVisionBlobDetector  : public TIEVisionBase 
{
	virtual HRESULT __safecall detect(_di_TIEVisionImage image, _di_TIEVisionVectorKeyPoint &__detect_result) = 0 ;
	virtual HRESULT __safecall setThreshold(double minThreshold, double maxThreshold, double thresholdStep) = 0 ;
	virtual HRESULT __safecall setMinDistBetweenBlobs(double value) = 0 ;
	virtual HRESULT __safecall setFilterByGrayLevel(System::LongBool enabled, System::Byte grayLevel) = 0 ;
	virtual HRESULT __safecall setFilterByArea(System::LongBool enabled, double minArea, double maxArea) = 0 ;
	virtual HRESULT __safecall setFilterByCircularity(System::LongBool enabled, double minCircularity, double maxCircularity) = 0 ;
	virtual HRESULT __safecall setFilterByInertia(System::LongBool enabled, double minInertiaRatio, double maxInertiaRatio) = 0 ;
	virtual HRESULT __safecall setFilterByConvexity(System::LongBool enabled, double minConvexity, double maxConvexity) = 0 ;
};

__interface TIEVisionORBFeaturesDetector  : public TIEVisionBase 
{
	virtual HRESULT __safecall detect(_di_TIEVisionImage image1, _di_TIEVisionImage image2, int maxFeatures = 0x1f4, double goodMatchPercentage = 1.500000E-01) = 0 ;
	virtual HRESULT __safecall getMatchingGraph(_di_TIEVisionImage &__getMatchingGraph_result) = 0 ;
	virtual HRESULT __safecall getPoints1(_di_TIEVisionVectorPoint2f &__getPoints1_result) = 0 ;
	virtual HRESULT __safecall getPoints2(_di_TIEVisionVectorPoint2f &__getPoints2_result) = 0 ;
};

__interface TIEVisionExposureMerger  : public TIEVisionBase 
{
	virtual HRESULT __safecall addImage(_di_TIEVisionImage image) = 0 ;
	virtual HRESULT __safecall run(System::LongBool performAlignment, float contrastWeight, float saturationWeight, float gamma, _di_TIEVisionImage &__run_result) = 0 ;
};

__interface TIEVisionLibrary  : public TIEVisionBase 
{
	virtual HRESULT __safecall debug() = 0 ;
	virtual HRESULT __safecall createInputOutput(_di_TIEVisionInputOutput &__createInputOutput_result) = 0 ;
	virtual HRESULT __safecall createMath(_di_TIEVisionMath &__createMath_result) = 0 ;
	virtual HRESULT __safecall createDrawing(_di_TIEVisionDrawing &__createDrawing_result) = 0 ;
	virtual HRESULT __safecall createImage(int width, int height, TIEVisionChannelFormat channelFormat, int channels, _di_TIEVisionImage &__createImage_result) = 0 /* overload */;
	virtual HRESULT __safecall createImage(_di_TIEVisionImage c, _di_TIEVisionImage &__createImage_result) = 0 /* overload */;
	virtual HRESULT __safecall createImage(_di_TIEVisionImage &__createImage_result) = 0 /* overload */;
	virtual HRESULT __safecall createImage(int width, int height, TIEVisionChannelFormat channelFormat, int channels, int rowlen, void * data, _di_TIEVisionImage &__createImage_result) = 0 /* overload */;
	virtual HRESULT __safecall createImage(char * filename, _di_TIEVisionImage &__createImage_result) = 0 /* overload */;
	virtual HRESULT __safecall createCascadeClassifier(_di_TIEVisionCascadeClassifier &__createCascadeClassifier_result) = 0 /* overload */;
	virtual HRESULT __safecall createCascadeClassifier(_di_TIEVisionCascadeClassifier c, _di_TIEVisionCascadeClassifier &__createCascadeClassifier_result) = 0 /* overload */;
	virtual HRESULT __safecall createCascadeClassifier(char * filename, _di_TIEVisionCascadeClassifier &__createCascadeClassifier_result) = 0 /* overload */;
	virtual HRESULT __safecall createCascadeClassifierTrainer(_di_TIEVisionCascadeClassifierTrainer &__createCascadeClassifierTrainer_result) = 0 ;
	virtual HRESULT __safecall createFileStream(char * filename, TIEVisionFileStreamMode mode, _di_TIEVisionFileStream &__createFileStream_result) = 0 /* overload */;
	virtual HRESULT __safecall createFileStream(System::WideChar * filename, TIEVisionFileStreamMode mode, _di_TIEVisionFileStream &__createFileStream_result) = 0 /* overload */;
	virtual HRESULT __safecall createFileStream(_di_TIEVisionFileStream &__createFileStream_result) = 0 /* overload */;
	virtual HRESULT __safecall createMemoryStream(_di_TIEVisionMemoryStream &__createMemoryStream_result) = 0 ;
	virtual HRESULT __safecall createExistingMemoryStream(void * existingBuffer, int existingBufferSize, _di_TIEVisionExistingMemoryStream &__createExistingMemoryStream_result) = 0 ;
	virtual HRESULT __safecall createTempFileStream(System::LongBool deleteOnDestroy, _di_TIEVisionTempFileStream &__createTempFileStream_result) = 0 /* overload */;
	virtual HRESULT __safecall createTempFileStream(char * filename, System::LongBool deleteOnDestroy, _di_TIEVisionTempFileStream &__createTempFileStream_result) = 0 /* overload */;
	virtual HRESULT __safecall createMemoryImageList(_di_TIEVisionMemoryImageList &__createMemoryImageList_result) = 0 ;
	virtual HRESULT __safecall createMemorySharedImageList(_di_TIEVisionMemorySharedImageList &__createMemorySharedImageList_result) = 0 ;
	virtual HRESULT __safecall createTempFileImageList(_di_TIEVisionTempFileImageList &__createTempFileImageList_result) = 0 ;
	virtual HRESULT __safecall createString(_di_TIEVisionString &__createString_result) = 0 /* overload */;
	virtual HRESULT __safecall createString(_di_TIEVisionString src, _di_TIEVisionString &__createString_result) = 0 /* overload */;
	virtual HRESULT __safecall createString(char * src, _di_TIEVisionString &__createString_result) = 0 /* overload */;
	virtual HRESULT __safecall createWString(_di_TIEVisionWString &__createWString_result) = 0 /* overload */;
	virtual HRESULT __safecall createWString(_di_TIEVisionWString src, _di_TIEVisionWString &__createWString_result) = 0 /* overload */;
	virtual HRESULT __safecall createWString(System::WideChar * src, _di_TIEVisionWString &__createWString_result) = 0 /* overload */;
	virtual HRESULT __safecall createVectorString(_di_TIEVisionVectorString &__createVectorString_result) = 0 /* overload */;
	virtual HRESULT __safecall createVectorString(_di_TIEVisionVectorString src, _di_TIEVisionVectorString &__createVectorString_result) = 0 /* overload */;
	virtual HRESULT __safecall createPropertyTree(_di_TIEVisionPropertyTree &__createPropertyTree_result) = 0 /* overload */;
	virtual HRESULT __safecall createPropertyTree(_di_TIEVisionPropertyTree src, _di_TIEVisionPropertyTree &__createPropertyTree_result) = 0 /* overload */;
	virtual HRESULT __safecall createTempFileName(System::LongBool deleteOnDestroy, _di_TIEVisionTempFileName &__createTempFileName_result) = 0 /* overload */;
	virtual HRESULT __safecall createTempFileName(char * filename, System::LongBool deleteOnDestroy, _di_TIEVisionTempFileName &__createTempFileName_result) = 0 /* overload */;
	virtual HRESULT __safecall createTempDirName(System::LongBool deleteOnDestroy, _di_TIEVisionTempDirName &__createTempDirName_result) = 0 /* overload */;
	virtual HRESULT __safecall createTempDirName(char * dirname, System::LongBool deleteOnDestroy, _di_TIEVisionTempDirName &__createTempDirName_result) = 0 /* overload */;
	virtual HRESULT __safecall createHistogram(_di_TIEVisionVectorInt32 sizes, TIEVisionHistogramType histType, _di_TIEVisionVectorFloatPair ranges, System::LongBool uniform, _di_TIEVisionHistogram &__createHistogram_result) = 0 /* overload */;
	virtual HRESULT __safecall createHistogram(int bins, TIEVisionHistogramType histType, float rangeMin, float rangeMax, System::LongBool uniform, _di_TIEVisionHistogram &__createHistogram_result) = 0 /* overload */;
	virtual HRESULT __safecall createVectorInt32(_di_TIEVisionVectorInt32 &__createVectorInt32_result) = 0 /* overload */;
	virtual HRESULT __safecall createVectorInt32(_di_TIEVisionVectorInt32 src, _di_TIEVisionVectorInt32 &__createVectorInt32_result) = 0 /* overload */;
	virtual HRESULT __safecall createVectorFloatPair(_di_TIEVisionVectorFloatPair &__createVectorFloatPair_result) = 0 /* overload */;
	virtual HRESULT __safecall createVectorFloatPair(_di_TIEVisionVectorFloatPair src, _di_TIEVisionVectorFloatPair &__createVectorFloatPair_result) = 0 /* overload */;
	virtual HRESULT __safecall createVectorPoint(_di_TIEVisionVectorPoint &__createVectorPoint_result) = 0 /* overload */;
	virtual HRESULT __safecall createVectorPoint(_di_TIEVisionVectorPoint src, _di_TIEVisionVectorPoint &__createVectorPoint_result) = 0 /* overload */;
	virtual HRESULT __safecall createVectorRect(_di_TIEVisionVectorRect &__createVectorRect_result) = 0 /* overload */;
	virtual HRESULT __safecall createVectorRect(_di_TIEVisionVectorRect src, _di_TIEVisionVectorRect &__createVectorRect_result) = 0 /* overload */;
	virtual HRESULT __safecall createVectorByte(_di_TIEVisionVectorByte &__createVectorByte_result) = 0 /* overload */;
	virtual HRESULT __safecall createVectorByte(_di_TIEVisionVectorByte src, _di_TIEVisionVectorByte &__createVectorByte_result) = 0 /* overload */;
	virtual HRESULT __safecall createVectorDouble(_di_TIEVisionVectorDouble &__createVectorDouble_result) = 0 /* overload */;
	virtual HRESULT __safecall createVectorDouble(_di_TIEVisionVectorDouble src, _di_TIEVisionVectorDouble &__createVectorDouble_result) = 0 /* overload */;
	virtual HRESULT __safecall createVectorImageRef(_di_TIEVisionVectorImageRef &__createVectorImageRef_result) = 0 /* overload */;
	virtual HRESULT __safecall createVectorImageRef(_di_TIEVisionVectorImageRef src, _di_TIEVisionVectorImageRef &__createVectorImageRef_result) = 0 /* overload */;
	virtual HRESULT __safecall createObjectTracker(_di_TIEVisionObjectTracker &__createObjectTracker_result) = 0 ;
	virtual HRESULT __safecall createObjectsFinder(_di_TIEVisionObjectsFinder &__createObjectsFinder_result) = 0 ;
	virtual HRESULT __safecall createOCR(char * language, TIEVisionOCREngine engine, _di_TIEVisionOCR &__createOCR_result) = 0 /* overload */;
	virtual HRESULT __safecall createOCR(char * path, char * language, TIEVisionOCREngine engine, _di_TIEVisionOCR &__createOCR_result) = 0 /* overload */;
	virtual HRESULT __safecall createOCR(char * path, _di_TIEVisionVectorString languages, TIEVisionOCREngine engine, _di_TIEVisionOCR &__createOCR_result) = 0 /* overload */;
	virtual HRESULT __safecall createPeopleDetector(_di_TIEVisionPeopleDetector &__createPeopleDetector_result) = 0 ;
	virtual HRESULT __safecall createBarCodeScanner(_di_TIEVisionBarCodeScanner &__createBarCodeScanner_result) = 0 ;
	virtual HRESULT __safecall getLibraryInfo(TIEVisionLibraryInfo info, _di_TIEVisionString &__getLibraryInfo_result) = 0 ;
	virtual HRESULT __safecall createStitcher(System::LongBool tryUseGPU, _di_TIEVisionStitcher &__createStitcher_result) = 0 ;
	virtual HRESULT __safecall createBackgroundSubtractor(_di_TIEVisionBackgroundSubtractor &__createBackgroundSubtractor_result) = 0 ;
	virtual HRESULT __safecall createFaceRecognizer(_di_TIEVisionFaceRecognizer &__createFaceRecognizer_result) = 0 ;
	virtual HRESULT __safecall createGrabCut(_di_TIEVisionGrabCut &__createGrabCut_result) = 0 ;
	virtual HRESULT __safecall createWatershed(_di_TIEVisionWatershed &__createWatershed_result) = 0 ;
	virtual HRESULT __safecall createBlobDetector(_di_TIEVisionBlobDetector &__createBlobDetector_result) = 0 ;
	virtual HRESULT __safecall createSearchablePDFGenerator(char * path, char * language, TIEVisionOCREngine engine, _di_TIEVisionSearchablePDFGenerator &__createSearchablePDFGenerator_result) = 0 ;
	virtual HRESULT __safecall createORBFeaturesDetector(_di_TIEVisionORBFeaturesDetector &__createORBFeaturesDetector_result) = 0 ;
	virtual HRESULT __safecall createVectorPoint2f(_di_TIEVisionVectorPoint2f &__createVectorPoint2f_result) = 0 /* overload */;
	virtual HRESULT __safecall createVectorPoint2f(_di_TIEVisionVectorPoint2f src, _di_TIEVisionVectorPoint2f &__createVectorPoint2f_result) = 0 /* overload */;
	virtual HRESULT __safecall createExposureMerger(_di_TIEVisionExposureMerger &__createExposureMerger_result) = 0 ;
};

enum DECLSPEC_DENUM TIEOCRLanguages : unsigned int { OCR_Afrikaans_Language, OCR_Albanian_Language, OCR_Amharic_Language, OCR_Ancient_Greek_Language, OCR_Arabic_Language, OCR_Armenian_Language, OCR_Assamese_Language, OCR_Azerbaijani_Language, OCR_Azerbaijani_Cyrillic_Language, OCR_Basque_Language, OCR_Belarusian_Language, OCR_Bengali_Language, OCR_Bosnian_Language, OCR_Breton_Language, OCR_Bulgarian_Language, OCR_Burmese_Language, OCR_Catalan_Language, OCR_Cebuano_Language, OCR_Cherokee_Language, OCR_Chinese_Simplified_Language, OCR_Chinese_Simplified_Vertical_Language, OCR_Chinese_Traditional_Language, OCR_Chinese_Traditional_Vertical_Language, OCR_Corsican_Language, OCR_Croatian_Language, OCR_Czech_Language, OCR_Danish_Language, OCR_Danish_Fraktur_Language, 
	OCR_Dhivehi_Language, OCR_Dutch_Language, OCR_Dzongkha_Language, OCR_English_Language, OCR_Equations_Language, OCR_Esperanto_Language, OCR_Estonian_Language, OCR_Faroese_Language, OCR_Filipino_Language, OCR_Finnish_Language, OCR_Frankish_Language, OCR_French_Language, OCR_Gaelic_Language, OCR_Galician_Language, OCR_Georgian_Language, OCR_Georgian_Old_Language, OCR_German_Language, OCR_German_Fraktur_Language, OCR_Greek_Language, OCR_Gujarati_Language, OCR_Haitian_Language, OCR_Hebrew_Language, OCR_Hindi_Language, OCR_Hungarian_Language, OCR_Icelandic_Language, OCR_Indonesian_Language, OCR_Inuktitut_Language, OCR_Irish_Language, OCR_Italian_Language, OCR_Italian_Old_Language, OCR_Japanese_Language, OCR_Japanese_Vertical_Language, OCR_Javanese_Language, 
	OCR_Kannada_Language, OCR_Kazakh_Language, OCR_Khmer_Language, OCR_Korean_Language, OCR_Korean_Vertical_Language, OCR_Kurdish_Language, OCR_Kurdish_Arabic_Language, OCR_Kyrgyz_Language, OCR_Lao_Language, OCR_Latin_Language, OCR_Latvian_Language, OCR_Lithuanian_Language, OCR_Luxembourgish_Language, OCR_Macedonian_Language, OCR_Malay_Language, OCR_Malayalam_Language, OCR_Maltese_Language, OCR_Maori_Language, OCR_Marathi_Language, OCR_MICR_Language, OCR_Middle_English_Language, OCR_Middle_French_Language, OCR_Mongolian_Language, OCR_Nepali_Language, OCR_Norwegian_Language, OCR_Occitan_Language, OCR_Oriya_Language, OCR_Pashto_Language, OCR_Persian_Language, OCR_Polish_Language, OCR_Portuguese_Language, OCR_Punjabi_Language, OCR_Quechua_Language, 
	OCR_Romanian_Language, OCR_Russian_Language, OCR_Sanskrit_Language, OCR_Serbian_Language, OCR_Serbian_Latin_Language, OCR_Sindhi_Language, OCR_Sinhala_Language, OCR_Slovakian_Language, OCR_Slovakian_Fraktur_Language, OCR_Slovenian_Language, OCR_Spanish_Language, OCR_Spanish_Old_Language, OCR_Sundanese_Language, OCR_Swahili_Language, OCR_Swedish_Language, OCR_Syriac_Language, OCR_Tagalog_Language, OCR_Tajik_Language, OCR_Tamil_Language, OCR_Tatar_Language, OCR_Telugu_Language, OCR_Thai_Language, OCR_Tibetan_Language, OCR_Tigrinya_Language, OCR_Tongan_Language, OCR_Turkish_Language, OCR_Ukrainian_Language, OCR_Urdu_Language, OCR_Uyghur_Language, OCR_Uzbek_Language, OCR_Uzbek_Cyrillic_Language, OCR_Vietnamese_Language, OCR_Welsh_Language, 
	OCR_Western_Frisian_Language, OCR_Yiddish_Language, OCR_Yoruba_Language };

struct DECLSPEC_DRECORD TIEVisionLanguages
{
public:
	char *Code;
	System::UnicodeString DisplayName;
};


typedef System::StaticArray<TIEVisionLanguages, 130> Ievision__1;

__interface TIEVisionCustomStreamProvider  : public System::IInterface 
{
	virtual HRESULT __safecall size(__int64 &__size_result) = 0 ;
	virtual HRESULT __safecall seek(__int64 offset, TIEVisionSeekOffset whence) = 0 ;
	virtual HRESULT __safecall tell(__int64 &__tell_result) = 0 ;
	virtual HRESULT __safecall silent_read(void * ptr, __int64 size, __int64 &__silent_read_result) = 0 ;
	virtual HRESULT __safecall silent_write(void * ptr, __int64 size, __int64 &__silent_write_result) = 0 ;
	virtual HRESULT __safecall silent_getc(int &__silent_getc_result) = 0 ;
	virtual HRESULT __safecall eof(System::LongBool &__eof_result) = 0 ;
};

__interface TIEVisionCustomStream  : public TIEVisionStream 
{
	virtual HRESULT __safecall reset(_di_TIEVisionCustomStreamProvider provider) = 0 ;
};

__interface TIELibJPEGErrorManager  : public TIEVisionBase 
{
	virtual HRESULT __safecall getNumWarnings(int &__getNumWarnings_result) = 0 ;
	virtual HRESULT __safecall getErrMsgCode(int &__getErrMsgCode_result) = 0 ;
};

__interface TIELibJPEGMarker  : public TIEVisionBase 
{
	virtual HRESULT __safecall getID(System::Byte &__getID_result) = 0 ;
	virtual HRESULT __safecall getData(void * &__getData_result) = 0 ;
	virtual HRESULT __safecall getLength(unsigned &__getLength_result) = 0 ;
	virtual HRESULT __safecall next(_di_TIELibJPEGMarker &__next_result) = 0 ;
};

__interface TIELibJPEGDecompressor  : public TIEVisionBase 
{
	virtual HRESULT __safecall setErrorManager(_di_TIELibJPEGErrorManager errorManager) = 0 ;
	virtual HRESULT __safecall createDecompress() = 0 ;
	virtual HRESULT __safecall destroyDecompress() = 0 ;
	virtual HRESULT __safecall setupReadStream(_di_TIEVisionStream stream, unsigned bufferSize) = 0 ;
	virtual HRESULT __safecall readHeader(System::LongBool requireImage) = 0 ;
	virtual HRESULT __safecall saveMarkers(int markerCode, unsigned lengthLimit) = 0 ;
	virtual HRESULT __safecall startDecompress() = 0 ;
	virtual HRESULT __safecall getOutputWidth(unsigned &__getOutputWidth_result) = 0 ;
	virtual HRESULT __safecall getOutputHeight(unsigned &__getOutputHeight_result) = 0 ;
	virtual HRESULT __safecall getOutputComponents(unsigned &__getOutputComponents_result) = 0 ;
	virtual HRESULT __safecall getOutputScanline(unsigned &__getOutputScanline_result) = 0 ;
	virtual HRESULT __safecall readScanlines(void * scanlines, unsigned maxLines, unsigned &__readScanlines_result) = 0 ;
	virtual HRESULT __safecall finishDecompress() = 0 ;
	virtual HRESULT __safecall setOutColorSpace(unsigned colorSpace) = 0 ;
	virtual HRESULT __safecall getOutColorSpace(unsigned &__getOutColorSpace_result) = 0 ;
	virtual HRESULT __safecall getJpegColorSpace(unsigned &__getJpegColorSpace_result) = 0 ;
	virtual HRESULT __safecall setDCTMethod(unsigned DCTMethod) = 0 ;
	virtual HRESULT __safecall getDensityUnit(System::Byte &__getDensityUnit_result) = 0 ;
	virtual HRESULT __safecall getXDensity(System::Word &__getXDensity_result) = 0 ;
	virtual HRESULT __safecall getYDensity(System::Word &__getYDensity_result) = 0 ;
	virtual HRESULT __safecall getProgressiveMode(System::LongBool &__getProgressiveMode_result) = 0 ;
	virtual HRESULT __safecall getImageWidth(unsigned &__getImageWidth_result) = 0 ;
	virtual HRESULT __safecall getImageHeight(unsigned &__getImageHeight_result) = 0 ;
	virtual HRESULT __safecall setScale(unsigned num, unsigned den) = 0 ;
	virtual HRESULT __safecall getMarkerList(_di_TIELibJPEGMarker &__getMarkerList_result) = 0 ;
	virtual HRESULT __safecall getVersionStr(char * &__getVersionStr_result) = 0 ;
};

__interface TIELibJPEGCompressor  : public TIEVisionBase 
{
	virtual HRESULT __safecall setErrorManager(_di_TIELibJPEGErrorManager errorManager) = 0 ;
	virtual HRESULT __safecall setupWriteStream(_di_TIEVisionStream stream, unsigned bufferSize) = 0 ;
	virtual HRESULT __safecall createCompress() = 0 ;
	virtual HRESULT __safecall destroyCompress() = 0 ;
	virtual HRESULT __safecall setImageWidth(unsigned imageWidth) = 0 ;
	virtual HRESULT __safecall setImageHeight(unsigned imageHeight) = 0 ;
	virtual HRESULT __safecall setInputComponents(unsigned inputComponents) = 0 ;
	virtual HRESULT __safecall setInColorSpace(unsigned colorSpace) = 0 ;
	virtual HRESULT __safecall setColorSpace(unsigned colorSpace) = 0 ;
	virtual HRESULT __safecall setDefaults() = 0 ;
	virtual HRESULT __safecall setDensityUnit(System::Byte densityUnit) = 0 ;
	virtual HRESULT __safecall setXDensity(System::Word XDensity) = 0 ;
	virtual HRESULT __safecall setYDensity(System::Word YDensity) = 0 ;
	virtual HRESULT __safecall setDCTMethod(unsigned DCTMethod) = 0 ;
	virtual HRESULT __safecall setOptimizeCoding(System::LongBool optimizeCoding) = 0 ;
	virtual HRESULT __safecall setSmoothingFactor(int smoothingFactor) = 0 ;
	virtual HRESULT __safecall setQuality(int quality, System::LongBool baseline) = 0 ;
	virtual HRESULT __safecall setSampleFactor(int componentIndex, int H, int V) = 0 ;
	virtual HRESULT __safecall setWriteJFIFHeader(System::LongBool writeJFIFHeader) = 0 ;
	virtual HRESULT __safecall simpleProgression() = 0 ;
	virtual HRESULT __safecall startCompress(System::LongBool writeAllTables) = 0 ;
	virtual HRESULT __safecall writeMarker(int markerID, void * markerPtr, unsigned markerLength) = 0 ;
	virtual HRESULT __safecall getNextScanlineIndex(unsigned &__getNextScanlineIndex_result) = 0 ;
	virtual HRESULT __safecall writeScanlines(void * scanlines, unsigned maxLines, unsigned &__writeScanlines_result) = 0 ;
	virtual HRESULT __safecall finishCompress() = 0 ;
};

__interface TIELibJPEGTransform  : public TIEVisionBase 
{
	virtual HRESULT __safecall requestWorkspace(_di_TIELibJPEGDecompressor source) = 0 ;
	virtual HRESULT __safecall adjustParameters(_di_TIELibJPEGDecompressor source, _di_TIELibJPEGCompressor dest, void * sourceCoefArrays, void * &__adjustParameters_result) = 0 ;
	virtual HRESULT __safecall executeTransformation(_di_TIELibJPEGDecompressor source, _di_TIELibJPEGCompressor dest, void * sourceCoefArrays) = 0 ;
};

__interface TIELibJPEGCopy  : public TIEVisionBase 
{
	virtual HRESULT __safecall copyMarkersSetup(_di_TIELibJPEGDecompressor source, int copyOption) = 0 ;
	virtual HRESULT __safecall readCoefficients(_di_TIELibJPEGDecompressor source, void * &__readCoefficients_result) = 0 ;
	virtual HRESULT __safecall copyCriticalParameters(_di_TIELibJPEGDecompressor source, _di_TIELibJPEGCompressor dest) = 0 ;
	virtual HRESULT __safecall writeCoefficients(_di_TIELibJPEGCompressor dest, void * destCoefArrays) = 0 ;
	virtual HRESULT __safecall copyMarkersExecute(_di_TIELibJPEGDecompressor source, _di_TIELibJPEGCompressor dest, int copyOption) = 0 ;
};

__interface TIELibJPEG12ErrorManager  : public TIEVisionBase 
{
	virtual HRESULT __safecall getNumWarnings(int &__getNumWarnings_result) = 0 ;
	virtual HRESULT __safecall getErrMsgCode(int &__getErrMsgCode_result) = 0 ;
};

__interface TIELibJPEG12Marker  : public TIEVisionBase 
{
	virtual HRESULT __safecall getID(System::Byte &__getID_result) = 0 ;
	virtual HRESULT __safecall getData(void * &__getData_result) = 0 ;
	virtual HRESULT __safecall getLength(unsigned &__getLength_result) = 0 ;
	virtual HRESULT __safecall next(_di_TIELibJPEG12Marker &__next_result) = 0 ;
};

__interface TIELibJPEG12Decompressor  : public TIEVisionBase 
{
	virtual HRESULT __safecall setErrorManager(_di_TIELibJPEG12ErrorManager errorManager) = 0 ;
	virtual HRESULT __safecall createDecompress() = 0 ;
	virtual HRESULT __safecall destroyDecompress() = 0 ;
	virtual HRESULT __safecall setupReadStream(_di_TIEVisionStream stream, unsigned bufferSize) = 0 ;
	virtual HRESULT __safecall readHeader(System::LongBool requireImage) = 0 ;
	virtual HRESULT __safecall saveMarkers(int markerCode, unsigned lengthLimit) = 0 ;
	virtual HRESULT __safecall startDecompress() = 0 ;
	virtual HRESULT __safecall getOutputWidth(unsigned &__getOutputWidth_result) = 0 ;
	virtual HRESULT __safecall getOutputHeight(unsigned &__getOutputHeight_result) = 0 ;
	virtual HRESULT __safecall getOutputComponents(unsigned &__getOutputComponents_result) = 0 ;
	virtual HRESULT __safecall getOutputScanline(unsigned &__getOutputScanline_result) = 0 ;
	virtual HRESULT __safecall readScanlines(void * scanlines, unsigned maxLines, unsigned &__readScanlines_result) = 0 ;
	virtual HRESULT __safecall finishDecompress() = 0 ;
	virtual HRESULT __safecall setOutColorSpace(unsigned colorSpace) = 0 ;
	virtual HRESULT __safecall getOutColorSpace(unsigned &__getOutColorSpace_result) = 0 ;
	virtual HRESULT __safecall getJpegColorSpace(unsigned &__getJpegColorSpace_result) = 0 ;
	virtual HRESULT __safecall setDCTMethod(unsigned DCTMethod) = 0 ;
	virtual HRESULT __safecall getDensityUnit(System::Byte &__getDensityUnit_result) = 0 ;
	virtual HRESULT __safecall getXDensity(System::Word &__getXDensity_result) = 0 ;
	virtual HRESULT __safecall getYDensity(System::Word &__getYDensity_result) = 0 ;
	virtual HRESULT __safecall getProgressiveMode(System::LongBool &__getProgressiveMode_result) = 0 ;
	virtual HRESULT __safecall getImageWidth(unsigned &__getImageWidth_result) = 0 ;
	virtual HRESULT __safecall getImageHeight(unsigned &__getImageHeight_result) = 0 ;
	virtual HRESULT __safecall setScale(unsigned num, unsigned den) = 0 ;
	virtual HRESULT __safecall getMarkerList(_di_TIELibJPEG12Marker &__getMarkerList_result) = 0 ;
	virtual HRESULT __safecall getVersionStr(char * &__getVersionStr_result) = 0 ;
};

__interface TIELibPNGText  : public TIEVisionBase 
{
	virtual HRESULT __safecall getKey(char * &__getKey_result) = 0 ;
	virtual HRESULT __safecall getText(char * &__getText_result) = 0 ;
	virtual HRESULT __safecall getNext(_di_TIELibPNGText &__getNext_result) = 0 ;
};

__interface TIELibPNGDecompressor  : public TIEVisionBase 
{
	virtual HRESULT __safecall isValid(System::LongBool &__isValid_result) = 0 ;
	virtual HRESULT __safecall setReadFunction(void * ioPtr, void * readDataFunction) = 0 ;
	virtual HRESULT __safecall readInfo() = 0 ;
	virtual HRESULT __safecall getIHDR(/* out */ unsigned &width, /* out */ unsigned &height, /* out */ int &bitDepth, /* out */ int &colorType, /* out */ int &interlaceType, /* out */ int &compressionType, /* out */ int &filterType, unsigned &__getIHDR_result) = 0 ;
	virtual HRESULT __safecall getText(/* out */ _di_TIELibPNGText &outPngText, unsigned &__getText_result) = 0 ;
	virtual HRESULT __safecall getBackground(TIEVisionBGR8 defaultValue, TIEVisionBGR8 &__getBackground_result) = 0 ;
	virtual HRESULT __safecall setExpand() = 0 ;
	virtual HRESULT __safecall setStrip16() = 0 ;
	virtual HRESULT __safecall setPacking() = 0 ;
	virtual HRESULT __safecall setGrayToRGB() = 0 ;
	virtual HRESULT __safecall setBGR() = 0 ;
	virtual HRESULT __safecall setSwap() = 0 ;
	virtual HRESULT __safecall setTRNStoAlpha() = 0 ;
	virtual HRESULT __safecall setInterlaceHandling(int &__setInterlaceHandling_result) = 0 ;
	virtual HRESULT __safecall readUpdateInfo() = 0 ;
	virtual HRESULT __safecall getXPixelsPerMeter(unsigned &__getXPixelsPerMeter_result) = 0 ;
	virtual HRESULT __safecall getYPixelsPerMeter(unsigned &__getYPixelsPerMeter_result) = 0 ;
	virtual HRESULT __safecall getPalette(void * palette, /* out */ int &numPalette, unsigned &__getPalette_result) = 0 ;
	virtual HRESULT __safecall getInterlaceType(System::Byte &__getInterlaceType_result) = 0 ;
	virtual HRESULT __safecall getChannels(System::Byte &__getChannels_result) = 0 ;
	virtual HRESULT __safecall readRows(void * row, void * displayRow, unsigned numRows) = 0 ;
	virtual HRESULT __safecall readEnd() = 0 ;
	virtual HRESULT __safecall getTRNS(void * trans, /* out */ int &numTrans, unsigned &__getTRNS_result) = 0 ;
};

__interface TIELibPNGTextList  : public TIEVisionBase 
{
	virtual HRESULT __safecall assign(int index, int compression, char * key, char * text) = 0 ;
};

__interface TIELibPNGCompressor  : public TIEVisionBase 
{
	virtual HRESULT __safecall isValid(System::LongBool &__isValid_result) = 0 ;
	virtual HRESULT __safecall setWriteFunction(void * ioPtr, void * writeFunc, void * flushFunc) = 0 ;
	virtual HRESULT __safecall setPalette(void * palette, int numPalette) = 0 ;
	virtual HRESULT __safecall setTRNS(System::PByte trans, int numTrans) = 0 ;
	virtual HRESULT __safecall setIHDR(unsigned width, unsigned height, int bitDepth, int colorType, int interlaceType, int compressionType, int filterType) = 0 ;
	virtual HRESULT __safecall setPHYS(unsigned resX, unsigned resY, int unitType) = 0 ;
	virtual HRESULT __safecall setFilter(int method, int filters) = 0 ;
	virtual HRESULT __safecall setBackground(TIEVisionBGR8 colorValue, System::Byte colorIndex) = 0 ;
	virtual HRESULT __safecall setCompressionLevel(int level) = 0 ;
	virtual HRESULT __safecall setBGR() = 0 ;
	virtual HRESULT __safecall writeInfo() = 0 ;
	virtual HRESULT __safecall setInterlaceHandling(int &__setInterlaceHandling_result) = 0 ;
	virtual HRESULT __safecall writeRows(void * row, unsigned numRows) = 0 ;
	virtual HRESULT __safecall writeEnd() = 0 ;
	virtual HRESULT __safecall setText(_di_TIELibPNGTextList textList) = 0 ;
};

__interface TIELibJP2KComponentParamsList  : public TIEVisionBase 
{
	virtual HRESULT __safecall assign(int index, unsigned tlx, unsigned tly, unsigned hstep, unsigned vstep, unsigned width, unsigned height, System::Word prec, int sgnd) = 0 ;
};

__interface TIELibJP2KMatrix  : public TIEVisionBase 
{
	virtual HRESULT __safecall getValue(int i, int j, int &__getValue_result) = 0 ;
};

__interface TIELibJP2KImage  : public TIEVisionBase 
{
	virtual HRESULT __safecall getWidth(int &__getWidth_result) = 0 ;
	virtual HRESULT __safecall getHeight(int &__getHeight_result) = 0 ;
	virtual HRESULT __safecall getColorSpace(int &__getColorSpace_result) = 0 ;
	virtual HRESULT __safecall getComponentByType(int component, int &__getComponentByType_result) = 0 ;
	virtual HRESULT __safecall getComponentPrecision(int index, int &__getComponentPrecision_result) = 0 ;
	virtual HRESULT __safecall getNumComponents(int &__getNumComponents_result) = 0 ;
	virtual HRESULT __safecall getComponentHeight(int index, int &__getComponentHeight_result) = 0 ;
	virtual HRESULT __safecall getComponentWidth(int index, int &__getComponentWidth_result) = 0 ;
	virtual HRESULT __safecall readComponent(System::Word index, int x, int y, int width, int height, _di_TIELibJP2KMatrix data, int &__readComponent_result) = 0 ;
	virtual HRESULT __safecall getComponentTopLeftY(int index, int &__getComponentTopLeftY_result) = 0 ;
	virtual HRESULT __safecall getComponentTopLeftX(int index, int &__getComponentTopLeftX_result) = 0 ;
	virtual HRESULT __safecall getComponentVStep(int index, int &__getComponentVStep_result) = 0 ;
	virtual HRESULT __safecall getComponentHStep(int index, int &__getComponentHStep_result) = 0 ;
	virtual HRESULT __safecall encode(_di_TIEVisionStream stream, int format, char * options) = 0 ;
	virtual HRESULT __safecall setComponentType(int index, int component) = 0 ;
	virtual HRESULT __safecall writeComponentSample(int index, int x, int y, unsigned v) = 0 ;
	virtual HRESULT __safecall writeRowRGB8(int width, int rowIndex, System::PByte bgr8Array, System::PByte alphaArray, int colors) = 0 ;
	virtual HRESULT __safecall readLinearBGR8(_di_TIELibJP2KMatrix blueMatrix, _di_TIELibJP2KMatrix greenMatrix, _di_TIELibJP2KMatrix redMatrix, int rowIndex, int bluePrec, int greenPrec, int redPrec, System::PByte destBGR8, int width) = 0 ;
};

enum DECLSPEC_DENUM TIELibDCRAWTextInfo : unsigned int { ievCOLOR_DESCRIPTION, ievIMAGE_DESCRIPTION, ievMAKE, ievMODEL, ievMODEL2, ievARTIST };

enum DECLSPEC_DENUM TIELibDCRAWIntInfo : unsigned int { ievWIDTH, ievHEIGHT, ievORIGINAL_WIDTH, ievORIGINAL_HEIGHT, ievPIXELFORMAT };

enum DECLSPEC_DENUM TIELibDCRAWPixelFormat : unsigned int { ievRGB24, ievRGB48 };

__interface TIELibDCRAWDecoder  : public TIEVisionBase 
{
	virtual HRESULT __safecall getTextInfo(TIELibDCRAWTextInfo info, _di_TIEVisionString &__getTextInfo_result) = 0 ;
	virtual HRESULT __safecall getIntInfo(TIELibDCRAWIntInfo info, int &__getIntInfo_result) = 0 ;
	virtual HRESULT __safecall getRow(unsigned rowIndex, void * destBuffer) = 0 ;
	virtual HRESULT __safecall imageLoaded(System::LongBool &__imageLoaded_result) = 0 ;
	virtual HRESULT __safecall getOutStream(_di_TIEVisionMemoryStream &__getOutStream_result) = 0 ;
};

enum DECLSPEC_DENUM TIELibRawProgress : unsigned int { ievLIBRAW_PROGRESS_START, ievLIBRAW_PROGRESS_OPEN, ievLIBRAW_PROGRESS_IDENTIFY, ievLIBRAW_PROGRESS_SIZE_ADJUST = 0x4, ievLIBRAW_PROGRESS_LOAD_RAW = 0x8, ievLIBRAW_PROGRESS_RAW2_IMAGE = 0x10, ievLIBRAW_PROGRESS_REMOVE_ZEROES = 0x20, ievLIBRAW_PROGRESS_BAD_PIXELS = 0x40, ievLIBRAW_PROGRESS_DARK_FRAME = 0x80, ievLIBRAW_PROGRESS_FOVEON_INTERPOLATE = 0x100, ievLIBRAW_PROGRESS_SCALE_COLORS = 0x200, ievLIBRAW_PROGRESS_PRE_INTERPOLATE = 0x400, ievLIBRAW_PROGRESS_INTERPOLATE = 0x800, ievLIBRAW_PROGRESS_MIX_GREEN = 0x1000, ievLIBRAW_PROGRESS_MEDIAN_FILTER = 0x2000, ievLIBRAW_PROGRESS_HIGHLIGHTS = 0x4000, ievLIBRAW_PROGRESS_FUJI_ROTATE = 0x8000, ievLIBRAW_PROGRESS_FLIP = 0x10000, ievLIBRAW_PROGRESS_APPLY_PROFILE = 0x20000, 
	ievLIBRAW_PROGRESS_CONVERT_RGB = 0x40000, ievLIBRAW_PROGRESS_STRETCH = 0x80000, ievLIBRAW_PROGRESS_STAGE20 = 0x100000, ievLIBRAW_PROGRESS_STAGE21 = 0x200000, ievLIBRAW_PROGRESS_STAGE22 = 0x400000, ievLIBRAW_PROGRESS_STAGE23 = 0x800000, ievLIBRAW_PROGRESS_STAGE24 = 0x1000000, ievLIBRAW_PROGRESS_STAGE25 = 0x2000000, ievLIBRAW_PROGRESS_STAGE26 = 0x4000000, ievLIBRAW_PROGRESS_STAGE27 = 0x8000000, ievLIBRAW_PROGRESS_THUMB_LOAD = 0x10000000 };

typedef System::LongBool __stdcall (*TIELibRawProgressCallback)(void * callbackData, TIELibRawProgress stage, int iteration, int expected);

enum DECLSPEC_DENUM TIELibRawImageFormat : unsigned int { ievLIBRAW_IMAGE_JPEG = 0x1, ievLIBRAW_IMAGE_BITMAP };

struct DECLSPEC_DRECORD TIELibRaw_iparams
{
public:
	System::StaticArray<char, 4> guard;
	System::StaticArray<char, 64> make;
	System::StaticArray<char, 64> model;
	System::StaticArray<char, 64> software;
	System::StaticArray<char, 64> normalized_make;
	System::StaticArray<char, 64> normalized_model;
	unsigned maker_index;
	unsigned raw_count;
	unsigned dng_version;
	unsigned is_foveon;
	int colors;
	unsigned filters;
	System::StaticArray<System::StaticArray<char, 6>, 6> xtrans;
	System::StaticArray<System::StaticArray<char, 6>, 6> xtrans_abs;
	System::StaticArray<char, 5> cdesc;
	unsigned xmplen;
	char *xmpdata;
};


typedef TIELibRaw_iparams *PIELibRaw_iparams;

struct DECLSPEC_DRECORD TIELibRaw_nikonlens
{
public:
	float EffectiveMaxAp;
	System::Byte LensIDNumber;
	System::Byte LensFStops;
	System::Byte MCUVersion;
	System::Byte LensType;
};


struct DECLSPEC_DRECORD TIELibRaw_dnglens
{
public:
	float MinFocal;
	float MaxFocal;
	float MaxAp4MinFocal;
	float MaxAp4MaxFocal;
};


struct DECLSPEC_DRECORD TIELibRaw_makernotes_lens
{
public:
	unsigned __int64 LensID;
	System::StaticArray<char, 128> Lens;
	System::Word LensFormat;
	System::Word LensMount;
	unsigned __int64 CamID;
	System::Word CameraFormat;
	System::Word CameraMount;
	System::StaticArray<char, 64> body;
	short FocalType;
	System::StaticArray<char, 16> LensFeatures_pre;
	System::StaticArray<char, 16> LensFeatures_suf;
	float MinFocal;
	float MaxFocal;
	float MaxAp4MinFocal;
	float MaxAp4MaxFocal;
	float MinAp4MinFocal;
	float MinAp4MaxFocal;
	float MaxAp;
	float MinAp;
	float CurFocal;
	float CurAp;
	float MaxAp4CurFocal;
	float MinAp4CurFocal;
	float MinFocusDistance;
	float FocusRangeIndex;
	float LensFStops;
	unsigned __int64 TeleconverterID;
	System::StaticArray<char, 128> Teleconverter;
	unsigned __int64 AdapterID;
	System::StaticArray<char, 128> Adapter;
	unsigned __int64 AttachmentID;
	System::StaticArray<char, 128> Attachment;
	System::Word FocalUnits;
	float FocalLengthIn35mmFormat;
};


struct DECLSPEC_DRECORD TIELibRaw_lensinfo
{
public:
	float MinFocal;
	float MaxFocal;
	float MaxAp4MinFocal;
	float MaxAp4MaxFocal;
	float EXIF_MaxAp;
	System::StaticArray<char, 128> LensMake;
	System::StaticArray<char, 128> Lens;
	System::StaticArray<char, 128> LensSerial;
	System::StaticArray<char, 128> InternalLensSerial;
	System::Word FocalLengthIn35mmFormat;
	TIELibRaw_nikonlens nikon;
	TIELibRaw_dnglens dng;
	TIELibRaw_makernotes_lens makernotes;
};


typedef TIELibRaw_lensinfo *PIELibRaw_lensinfo;

struct DECLSPEC_DRECORD TIELibRaw_shootinginfo
{
public:
	short DriveMode;
	short FocusMode;
	short MeteringMode;
	short AFPoint;
	short ExposureMode;
	short ExposureProgram;
	short ImageStabilization;
	System::StaticArray<char, 64> BodySerial;
	System::StaticArray<char, 64> InternalBodySerial;
};


typedef TIELibRaw_shootinginfo *PIELibRaw_shootinginfo;

struct DECLSPEC_DRECORD TIELibRaw_gps_info
{
public:
	System::StaticArray<float, 3> latitude;
	System::StaticArray<float, 3> longitude;
	System::StaticArray<float, 3> gpstimestamp;
	float altitude;
	char altref;
	char latref;
	char longref;
	char gpsstatus;
	char gpsparsed;
};


struct DECLSPEC_DRECORD TIELibRaw_imgother
{
public:
	float iso_speed;
	float shutter;
	float aperture;
	float focal_len;
	unsigned __int64 timestamp;
	unsigned shot_order;
	System::StaticArray<unsigned, 32> gpsdata;
	TIELibRaw_gps_info parsed_gps;
	System::StaticArray<char, 512> desc;
	System::StaticArray<char, 64> artist;
	System::StaticArray<float, 4> analogbalance;
};


typedef TIELibRaw_imgother *PIELibRaw_imgother;

__interface TIELibRawProcessedImage  : public TIEVisionBase 
{
	virtual HRESULT __safecall getType(TIELibRawImageFormat &__getType_result) = 0 ;
	virtual HRESULT __safecall getWidth(int &__getWidth_result) = 0 ;
	virtual HRESULT __safecall getHeight(int &__getHeight_result) = 0 ;
	virtual HRESULT __safecall getChannels(int &__getChannels_result) = 0 ;
	virtual HRESULT __safecall getBitsPerPixel(int &__getBitsPerPixel_result) = 0 ;
	virtual HRESULT __safecall getDataSize(unsigned &__getDataSize_result) = 0 ;
	virtual HRESULT __safecall getData(void * &__getData_result) = 0 ;
	virtual HRESULT __safecall copyRow(int row, void * dest) = 0 ;
};

__interface TIELibRaw  : public TIEVisionBase 
{
	virtual HRESULT __safecall getVersion(char * &__getVersion_result) = 0 ;
	virtual HRESULT __safecall open_buffer(void * buffer, unsigned bufsize, int &__open_buffer_result) = 0 ;
	virtual HRESULT __safecall unpack(System::LongBool thumb, int &__unpack_result) = 0 ;
	virtual HRESULT __safecall cameraCount(int &__cameraCount_result) = 0 ;
	virtual HRESULT __safecall cameraList(char * &__cameraList_result) = 0 ;
	virtual HRESULT __safecall raw2Image(int &__raw2Image_result) = 0 ;
	virtual HRESULT __safecall dcraw_process(int &__dcraw_process_result) = 0 ;
	virtual HRESULT __safecall makeProcessedImage(_di_TIELibRawProcessedImage &__makeProcessedImage_result) = 0 ;
	virtual HRESULT __safecall makeProcessedThumb(_di_TIELibRawProcessedImage &__makeProcessedThumb_result) = 0 ;
	virtual HRESULT __safecall setCancelFlag() = 0 ;
	virtual HRESULT __safecall setProgressHandler(TIELibRawProgressCallback callback, void * callbackData) = 0 ;
	virtual HRESULT __safecall lastErrorStr(char * &__lastErrorStr_result) = 0 ;
	virtual HRESULT __safecall lastError(int &__lastError_result) = 0 ;
	virtual HRESULT __safecall imgData_sizes_getIWidth(int &__imgData_sizes_getIWidth_result) = 0 ;
	virtual HRESULT __safecall imgData_sizes_getIHeight(int &__imgData_sizes_getIHeight_result) = 0 ;
	virtual HRESULT __safecall imgData_sizes_getFlip(int &__imgData_sizes_getFlip_result) = 0 ;
	virtual HRESULT __safecall imgData_sizes_getRawWidth(int &__imgData_sizes_getRawWidth_result) = 0 ;
	virtual HRESULT __safecall imgData_sizes_getRawHeight(int &__imgData_sizes_getRawHeight_result) = 0 ;
	virtual HRESULT __safecall imgData_thumbnail_getWidth(int &__imgData_thumbnail_getWidth_result) = 0 ;
	virtual HRESULT __safecall imgData_thumbnail_getHeight(int &__imgData_thumbnail_getHeight_result) = 0 ;
	virtual HRESULT __safecall imgData_idata_getMake(char * &__imgData_idata_getMake_result) = 0 ;
	virtual HRESULT __safecall imgData_idata_getModel(char * &__imgData_idata_getModel_result) = 0 ;
	virtual HRESULT __safecall imgData_idata_getSoftware(char * &__imgData_idata_getSoftware_result) = 0 ;
	virtual HRESULT __safecall imgData_idata_getRawCount(int &__imgData_idata_getRawCount_result) = 0 ;
	virtual HRESULT __safecall imgData_color_getModel2(char * &__imgData_color_getModel2_result) = 0 ;
	virtual HRESULT __safecall imgData_color_getUniqueCameraModel(char * &__imgData_color_getUniqueCameraModel_result) = 0 ;
	virtual HRESULT __safecall imgData_color_getLocalizedCameraModel(char * &__imgData_color_getLocalizedCameraModel_result) = 0 ;
	virtual HRESULT __safecall imgData_color_get_iparams(PIELibRaw_iparams &__imgData_color_get_iparams_result) = 0 ;
	virtual HRESULT __safecall imgData_color_get_lens(PIELibRaw_lensinfo &__imgData_color_get_lens_result) = 0 ;
	virtual HRESULT __safecall imgData_color_get_makernotes(void * &__imgData_color_get_makernotes_result) = 0 ;
	virtual HRESULT __safecall imgData_color_get_shootinginfo(PIELibRaw_shootinginfo &__imgData_color_get_shootinginfo_result) = 0 ;
	virtual HRESULT __safecall imgData_color_get_color(void * &__imgData_color_get_color_result) = 0 ;
	virtual HRESULT __safecall imgData_color_get_other(PIELibRaw_imgother &__imgData_color_get_other_result) = 0 ;
	virtual HRESULT __safecall outputParams_setBright(double value) = 0 ;
	virtual HRESULT __safecall outputParams_setHalfSize(System::LongBool value) = 0 ;
	virtual HRESULT __safecall outputParams_setFourColorRGB(System::LongBool value) = 0 ;
	virtual HRESULT __safecall outputParams_setUseAutoWB(System::LongBool value) = 0 ;
	virtual HRESULT __safecall outputParams_setUseCameraWB(System::LongBool value) = 0 ;
	virtual HRESULT __safecall outputParams_setOutputBPS(int value) = 0 ;
	virtual HRESULT __safecall outputParams_setInterpolationQuality(int value) = 0 ;
	virtual HRESULT __safecall outputParams_setGamma(double power, double slope) = 0 ;
	virtual HRESULT __safecall outputParams_setRedScale(double value) = 0 ;
	virtual HRESULT __safecall outputParams_setBlueScale(double value) = 0 ;
	virtual HRESULT __safecall outputParams_setUserFlip(int value) = 0 ;
	virtual HRESULT __safecall outputParams_setShotSelect(int value) = 0 ;
	virtual HRESULT __safecall outputParams_setThreshold(double value) = 0 ;
	virtual HRESULT __safecall outputParams_setHighlight(int value) = 0 ;
	virtual HRESULT __safecall outputParams_setUseCameraMatrix(int value) = 0 ;
	virtual HRESULT __safecall outputParams_setOutputColorSpace(int value) = 0 ;
	virtual HRESULT __safecall outputParams_setUserBlack(int value) = 0 ;
	virtual HRESULT __safecall outputParams_setUserSaturation(int value) = 0 ;
	virtual HRESULT __safecall outputParams_setMedianFilterPasses(int value) = 0 ;
	virtual HRESULT __safecall outputParams_setNoAutoBright(System::LongBool value) = 0 ;
	virtual HRESULT __safecall outputParams_setAutoBrightThr(double value) = 0 ;
	virtual HRESULT __safecall outputParams_setAdjustMaximumThr(double value) = 0 ;
	virtual HRESULT __safecall outputParams_setGreenMatching(System::LongBool value) = 0 ;
	virtual HRESULT __safecall outputParams_setChromaticAberrationsSuppression(System::LongBool value) = 0 ;
	virtual HRESULT __safecall outputParams_setBandingReduction(double value) = 0 ;
	virtual HRESULT __safecall outputParams_setMazeArtifactsReduction(double value) = 0 ;
	virtual HRESULT __safecall outputParams_setNoAutoScale(System::LongBool value) = 0 ;
	virtual HRESULT __safecall outputParams_setNoInterpolation(System::LongBool value) = 0 ;
	virtual HRESULT __safecall outputParams_setUserMul(double mul0, double mul1, double mul2, double mul3) = 0 ;
};

enum DECLSPEC_DENUM TIELibOPJColorSpace: int { ievOPJ_UNKNOWN = -1, ievOPJ_UNSPECIFIED, ievOPJ_SRGB, ievOPJ_GRAY, ievOPJ_SYCC, ievOPJ_EYCC, ievOPJ_CMYK };

enum DECLSPEC_DENUM TIELibOPJFormat : unsigned int { ievOPJ_J2K, ievOPJ_JPT, ievOPJ_JP2 };

enum DECLSPEC_DENUM TIELibOPJProgressionOrder: int { ievOPJ_PO_UNKNOWN = -1, ievOPJ_LRCP, ievOPJ_RLCP, ievOPJ_RPCL, ievOPJ_PCRL, ievOPJ_CPRL };

__interface TIELibOPJImage  : public TIEVisionBase 
{
	virtual HRESULT __safecall isValid(System::LongBool &__isValid_result) = 0 ;
	virtual HRESULT __safecall getWidth(unsigned &__getWidth_result) = 0 ;
	virtual HRESULT __safecall getHeight(unsigned &__getHeight_result) = 0 ;
	virtual HRESULT __safecall getDepth(unsigned &__getDepth_result) = 0 ;
	virtual HRESULT __safecall getQDepth(unsigned &__getQDepth_result) = 0 ;
	virtual HRESULT __safecall getNumComps(unsigned &__getNumComps_result) = 0 ;
	virtual HRESULT __safecall getColorSpace(TIELibOPJColorSpace &__getColorSpace_result) = 0 ;
	virtual HRESULT __safecall hasAlpha(System::LongBool &__hasAlpha_result) = 0 ;
	virtual HRESULT __safecall getICC(void * &__getICC_result) = 0 ;
	virtual HRESULT __safecall getICCLength(unsigned &__getICCLength_result) = 0 ;
	virtual HRESULT __safecall setICC(void * buffer, unsigned bufferLength) = 0 ;
	virtual HRESULT __safecall copyRowTo(int row, void * dest, void * destAlpha) = 0 ;
	virtual HRESULT __safecall copyRowFrom(int row, void * src, void * srcAlpha, int tileX, int tileY, int tileWidth, int tileHeight) = 0 ;
};

__interface TIELibOPJReader  : public TIEVisionBase 
{
	virtual HRESULT __safecall getVersion(char * &__getVersion_result) = 0 ;
	virtual HRESULT __safecall setReduce(int value) = 0 ;
	virtual HRESULT __safecall setThreadsCount(int value) = 0 ;
	virtual HRESULT __safecall setStream(_di_TIEVisionStream stream) = 0 ;
	virtual HRESULT __safecall getImageInfo(TIELibOPJFormat format, /* out */ int &width, /* out */ int &height, /* out */ int &numcomps, /* out */ int &depth, /* out */ int &QDepth, /* out */ TIELibOPJColorSpace &colorSpace, /* out */ System::LongBool &hasAlpha, System::LongBool &__getImageInfo_result) = 0 ;
	virtual HRESULT __safecall decodeArea(int x0, int y0, int x1, int y1, _di_TIELibOPJImage &__decodeArea_result) = 0 ;
};

__interface TIELibOPJWriter  : public TIEVisionBase 
{
	virtual HRESULT __safecall getVersion(char * &__getVersion_result) = 0 ;
	virtual HRESULT __safecall setProgressionOrder(TIELibOPJProgressionOrder value) = 0 ;
	virtual HRESULT __safecall setQuality(int layerIndex, double quality) = 0 ;
	virtual HRESULT __safecall setCompressionRate(int layerIndex, double quality) = 0 ;
	virtual HRESULT __safecall setIrreversible(System::LongBool value) = 0 ;
	virtual HRESULT __safecall setImage(_di_TIELibOPJImage image) = 0 ;
	virtual HRESULT __safecall setStream(_di_TIEVisionStream stream) = 0 ;
	virtual HRESULT __safecall beginCompression(TIELibOPJFormat format, System::LongBool &__beginCompression_result) = 0 ;
	virtual HRESULT __safecall encodeTile(int tileIndex, System::LongBool &__encodeTile_result) = 0 ;
	virtual HRESULT __safecall endCompression(System::LongBool &__endCompression_result) = 0 ;
	virtual HRESULT __safecall getTileCount(int &__getTileCount_result) = 0 ;
	virtual HRESULT __safecall getTileInfo(int tileIndex, /* out */ unsigned &x, /* out */ unsigned &y, /* out */ unsigned &width, /* out */ unsigned &height, /* out */ unsigned &tileSize) = 0 ;
};

__interface TIELib  : public TIEVisionBase 
{
	virtual HRESULT __safecall debug() = 0 ;
	virtual HRESULT __safecall getLibraryInfo(TIEVisionLibraryInfo info, _di_TIEVisionString &__getLibraryInfo_result) = 0 ;
	virtual HRESULT __safecall setLogFile(char * filename) = 0 ;
	virtual HRESULT __safecall createString(_di_TIEVisionString &__createString_result) = 0 /* overload */;
	virtual HRESULT __safecall createString(_di_TIEVisionString src, _di_TIEVisionString &__createString_result) = 0 /* overload */;
	virtual HRESULT __safecall createString(char * src, _di_TIEVisionString &__createString_result) = 0 /* overload */;
	virtual HRESULT __safecall createVectorString(_di_TIEVisionVectorString &__createVectorString_result) = 0 /* overload */;
	virtual HRESULT __safecall createVectorString(_di_TIEVisionVectorString src, _di_TIEVisionVectorString &__createVectorString_result) = 0 /* overload */;
	virtual HRESULT __safecall createCustomStream(_di_TIEVisionCustomStreamProvider provider, _di_TIEVisionCustomStream &__createCustomStream_result) = 0 ;
	virtual HRESULT __safecall createJPEGErrorManager(_di_TIELibJPEGErrorManager &__createJPEGErrorManager_result) = 0 ;
	virtual HRESULT __safecall createJPEGDecompressor(_di_TIELibJPEGDecompressor &__createJPEGDecompressor_result) = 0 ;
	virtual HRESULT __safecall createJPEGCompressor(_di_TIELibJPEGCompressor &__createJPEGCompressor_result) = 0 ;
	virtual HRESULT __safecall createJPEGTransform(int transform, System::LongBool trim, System::LongBool forceGrayscale, unsigned xoffs, unsigned yoffs, unsigned newWidth, unsigned newHeight, _di_TIELibJPEGTransform &__createJPEGTransform_result) = 0 ;
	virtual HRESULT __safecall createJPEGCopy(_di_TIELibJPEGCopy &__createJPEGCopy_result) = 0 ;
	virtual HRESULT __safecall createPNGDecompressor(void * errorPtr, void * errorFunc, void * warnFunc, _di_TIELibPNGDecompressor &__createPNGDecompressor_result) = 0 ;
	virtual HRESULT __safecall PNGGetIOPtr(void * pngPtr, void * &__PNGGetIOPtr_result) = 0 ;
	virtual HRESULT __safecall PNGGetErrorPtr(void * pngPtr, void * &__PNGGetErrorPtr_result) = 0 ;
	virtual HRESULT __safecall PNGSigCmp(void * sig, unsigned start, unsigned numToCheck, int &__PNGSigCmp_result) = 0 ;
	virtual HRESULT __safecall createPNGTextList(unsigned size, _di_TIELibPNGTextList &__createPNGTextList_result) = 0 ;
	virtual HRESULT __safecall createPNGCompressor(void * errorPtr, void * errorFunc, void * warnFunc, _di_TIELibPNGCompressor &__createPNGCompressor_result) = 0 ;
	virtual HRESULT __safecall JP2KInitialize() = 0 ;
	virtual HRESULT __safecall JP2KFinalize() = 0 ;
	virtual HRESULT __safecall createJP2KImage(_di_TIEVisionStream stream, _di_TIELibJP2KImage &__createJP2KImage_result) = 0 /* overload */;
	virtual HRESULT __safecall createJP2KImage(System::Word numComponents, _di_TIELibJP2KComponentParamsList parameters, int colorModel, _di_TIELibJP2KImage &__createJP2KImage_result) = 0 /* overload */;
	virtual HRESULT __safecall createJP2KComponentParamsList(int size, _di_TIELibJP2KComponentParamsList &__createJP2KComponentParamsList_result) = 0 ;
	virtual HRESULT __safecall createJP2KMatrix(int numRows, int numCols, _di_TIELibJP2KMatrix &__createJP2KMatrix_result) = 0 ;
	virtual HRESULT __safecall createDCRAWDecoder(_di_TIEVisionStream inStream, _di_TIEVisionVectorString parameters, void * progressCallback, void * progressUserData, _di_TIELibDCRAWDecoder &__createDCRAWDecoder_result) = 0 ;
	virtual HRESULT __safecall createLibRaw(_di_TIELibRaw &__createLibRaw_result) = 0 ;
	virtual HRESULT __safecall createOPJReader(_di_TIELibOPJReader &__createOPJReader_result) = 0 ;
	virtual HRESULT __safecall createOPJWriter(_di_TIELibOPJWriter &__createOPJWriter_result) = 0 ;
	virtual HRESULT __safecall createOPJImage(int width, int height, TIELibOPJColorSpace colorSpace, int depth, System::LongBool hasAlpha, System::LongBool horizSubsample, System::LongBool vertSubsample, int tileWidth, int tileHeight, _di_TIELibOPJImage &__createOPJImage_result) = 0 ;
	virtual HRESULT __safecall createJPEG12ErrorManager(_di_TIELibJPEG12ErrorManager &__createJPEG12ErrorManager_result) = 0 ;
	virtual HRESULT __safecall createJPEG12Decompressor(_di_TIELibJPEG12Decompressor &__createJPEG12Decompressor_result) = 0 ;
};

typedef System::StaticArray<System::UnicodeString, 5> Ievision__2;

//-- var, const, procedure ---------------------------------------------------
#define IEVC_EXPECTED_LIBRARY_VERSION L"6.0.0.0"
#define IEVC_EYE L":EYE"
#define IEVC_EYE_TREE_EYE_GLASSES L":EYETREEEYEGLASSES"
#define IEVC_FRONTAL_FACE_ALT L":FRONTALFACEALT"
#define IEVC_FRONTAL_FACE_ALT_2 L":FRONTALFACEALT2"
#define IEVC_FRONTAL_FACE_ALT_TREE L":FRONTALFACEALTTREE"
#define IEVC_FRONTAL_FACE_DEFAULT L":FRONTALFACEDEFAULT"
#define IEVC_FULL_BODY L":FULLBODY"
#define IEVC_LOWER_BODY L":LOWERBODY"
#define IEVC_PROFILE_FACE L":PROFILEFACE"
#define IEVC_UPPER_BODY L":UPPERBODY"
#define IEVC_LEFT_EYE_2_SPLITS L":LEFTEYE2SPLITS"
#define IEVC_RIGHT_EYE_2_SPLITS L":RIGHTEYE2SPLITS"
#define IEVC_LBP_FRONTAL_FACE L":LBPFRONTALFACE"
#define IEVC_CASCADE_SMILE L":CASCADESMILE"
#define IEVC_FRONTAL_CAT_FACE L":FRONTALCATFACE"
#define IEVC_FRONTAL_CAT_FACE_EXT L":FRONTALCATFACEEXTENDED"
#define IEVC_LICENSE_PLATE_RUS L":LICENSEPLATERUS"
#define IEVC_RUSSIAN_PLATE_NUMBER L":RUSSIANPLATENUMBER"
#define IEVC_ALL_CLASSIFIERS L":EYE\r\n:EYETREEEYEGLASSES\r\n:FRONTALFACEALT\r\n:FRONTALF"\
	L"ACEALT2\r\n:FRONTALFACEALTTREE\r\n:FRONTALFACEDEFAULT\r\n:"\
	L"FULLBODY\r\n:LOWERBODY\r\n:PROFILEFACE\r\n:UPPERBODY\r\n:L"\
	L"EFTEYE2SPLITS\r\n:RIGHTEYE2SPLITS\r\n:LBPFRONTALFACE\r\n:C"\
	L"ASCADESMILE\r\n:FRONTALCATFACE\r\n:FRONTALCATFACEEXTENDED\r"\
	L"\n:LICENSEPLATERUS\r\n:RUSSIANPLATENUMBER"
static const TIEVisionOCREngine ievOCRFAST _DEPRECATED_ATTRIBUTE1("ievOCRFAST no longer supported by Tesseract - http://ima"
	"geen.com/help/Compatibility.html")  = (TIEVisionOCREngine)(3);
static const TIEVisionOCREngine ievOCRCUBE _DEPRECATED_ATTRIBUTE1("ievOCRCUBE no longer supported by Tesseract  - http://im"
	"ageen.com/help/Compatibility.html")  = (TIEVisionOCREngine)(3);
static const TIEVisionOCREngine ievOCRACCURATE _DEPRECATED_ATTRIBUTE1("ievOCRACCURATE no longer supported by Tesseract  - http:"
	"//imageen.com/help/Compatibility.html")  = (TIEVisionOCREngine)(3);
static const System::Int8 ievITER = System::Int8(0x1);
static const System::Int8 ievNUMBER = System::Int8(0x1);
static const System::Int8 ievEPS = System::Int8(0x2);
static const System::Int8 ievMUL_ROWS = System::Int8(0x4);
static const System::Int8 ievMUL_CONJ = System::Int8(0x8);
static const System::Int8 ievNONE = System::Int8(0x0);
static const System::Int8 ievDO_CANNY_PRUNING = System::Int8(0x1);
static const System::Int8 ievSCALE_IMAGE = System::Int8(0x2);
static const System::Int8 ievFIND_BIGGEST_OBJECT = System::Int8(0x4);
static const System::Int8 ievDO_ROUGH_SEARCH = System::Int8(0x8);
static const System::Int8 ievTHRESH_BINARY = System::Int8(0x0);
static const System::Int8 ievTHRESH_BINARY_INV = System::Int8(0x1);
static const System::Int8 ievTHRESH_TRUNC = System::Int8(0x2);
static const System::Int8 ievTHRESH_TOZERO = System::Int8(0x3);
static const System::Int8 ievTHRESH_TOZERO_INV = System::Int8(0x4);
static const System::Int8 ievTHRESH_OTSU = System::Int8(0x8);
static const System::Int8 ievTHRESH_TRIANGLE = System::Int8(0x10);
extern DELPHI_PACKAGE Ievision__1 IEOCRLanguageList;
#define IEV_OCR_Language_Data_Ext L".traineddata"
#define IELIB_32BIT_DLL_FILENAME1 L"ielib.dll"
#define IELIB_32BIT_DLL_FILENAME2 L"ielib32.dll"
#define IEVISION_32BIT_DLL_FILENAME1 L"ievision.dll"
#define IEVISION_32BIT_DLL_FILENAME2 L"ievision32.dll"
#define IEVISION_TRIAL_32BIT_DLL_FILENAME L"ievision-Trial.dll"
extern DELPHI_PACKAGE Ievision__2 IELib_DLL_Filenames;
extern DELPHI_PACKAGE _di_TIEVisionLibrary __fastcall IEVisionLib(void);
extern DELPHI_PACKAGE bool __fastcall IEVisionAvailable(bool ExeFolderOnly = false);
extern DELPHI_PACKAGE void __fastcall IEVisionSetSerialNumber(const System::WideString sUserEmail, const System::WideString sUserSerial);
extern DELPHI_PACKAGE void __fastcall IEInitialize_ievision(const System::WideString sDLLPath = System::WideString(), bool reinitialize = true);
extern DELPHI_PACKAGE void __fastcall IEFinalize_ievision(void);
extern DELPHI_PACKAGE _di_TIELib __fastcall IELib(void);
extern DELPHI_PACKAGE bool __fastcall IELibAvailable(bool ExeFolderOnly = false);
extern DELPHI_PACKAGE void __fastcall IEInitialize_ielib(const System::WideString sDLLPath = System::WideString(), bool reinitialize = true);
extern DELPHI_PACKAGE void __fastcall IEFinalize_ielib(void);
extern DELPHI_PACKAGE TIEVisionSize __fastcall IEVisionSize(int width, int height);
extern DELPHI_PACKAGE TIEVisionRect __fastcall IEVisionRect(int x, int y, int width, int height)/* overload */;
extern DELPHI_PACKAGE TIEVisionRect __fastcall IEVisionRect(const Hyiedefs::TIERectangle &rect)/* overload */;
extern DELPHI_PACKAGE System::Types::TRect __fastcall IEVisionRectToTRect(const TIEVisionRect &Rect);
extern DELPHI_PACKAGE TIEVisionPoint __fastcall IEVisionPoint(int x, int y);
extern DELPHI_PACKAGE TIEVisionScalar __fastcall IEVisionScalar(double val0, double val1 = 0.000000E+00, double val2 = 0.000000E+00, double val3 = 0.000000E+00);
extern DELPHI_PACKAGE TIEVisionFloatPair __fastcall IEVisionFloatPair(double first, double second);
extern DELPHI_PACKAGE TIEVisionTermCriteria __fastcall IEVisionTermCriteria(int ctype, int maxIter, double epsilon);
extern DELPHI_PACKAGE System::UnicodeString __fastcall IEVisionLanguageCodeToName(const System::UnicodeString sLangCode);
extern DELPHI_PACKAGE System::UnicodeString __fastcall IEVisionLanguageNameToCode(const System::UnicodeString sLangName);
extern DELPHI_PACKAGE bool __fastcall IEVisionGetLanguagesInFolder(System::Classes::TStrings* ssDest, const System::UnicodeString sFolder, bool bDisplayName = false);
extern DELPHI_PACKAGE bool __fastcall LanguageExistsInFolder(TIEOCRLanguages aLanguage, const System::UnicodeString sFolder)/* overload */;
extern DELPHI_PACKAGE bool __fastcall LanguageExistsInFolder(const System::UnicodeString sLangCode, const System::UnicodeString sFolder)/* overload */;
extern DELPHI_PACKAGE bool __fastcall CubeEngineExistsInFolder _DEPRECATED_ATTRIBUTE1("No longer supported - http://imageen.com/help/Compatibility.html") (TIEOCRLanguages aLanguage, const System::UnicodeString sFolder)/* overload */;
extern DELPHI_PACKAGE bool __fastcall CubeEngineExistsInFolder _DEPRECATED_ATTRIBUTE1("No longer supported - http://imageen.com/help/Compatibility.html") (const System::UnicodeString sLangCode, const System::UnicodeString sFolder)/* overload */;
}	/* namespace Ievision */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_IEVISION)
using namespace Ievision;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// IevisionHPP
