// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'imageenproc.pas' rev: 35.00 (Windows)

#ifndef ImageenprocHPP
#define ImageenprocHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <System.Contnrs.hpp>
#include <Vcl.Forms.hpp>
#include <ieview.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <hyiedefs.hpp>
#include <iexBitmaps.hpp>
#include <iefft.hpp>
#include <iexTransitions.hpp>
#include <hyieutils.hpp>
#include <System.UITypes.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------
#undef TextOut

namespace Imageenproc
{
//-- forward type declarations -----------------------------------------------
struct TGraphFilter;
class DELPHICLASS EFilterInvalid;
struct THistogramItem;
class DELPHICLASS TIPDialogParams;
class DELPHICLASS TIEUndoStore;
class DELPHICLASS TImageEnProc;
struct TIEPrecalcTransform;
//-- type declarations -------------------------------------------------------
struct DECLSPEC_DRECORD TGraphFilter
{
public:
	System::StaticArray<System::StaticArray<int, 3>, 3> Values;
	int Divisor;
};


typedef TGraphFilter *PIEGraphFilter;

#pragma pack(push,4)
class PASCALIMPLEMENTATION EFilterInvalid : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EFilterInvalid(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EFilterInvalid(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EFilterInvalid(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EFilterInvalid(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EFilterInvalid(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EFilterInvalid(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EFilterInvalid(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EFilterInvalid(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EFilterInvalid(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EFilterInvalid(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EFilterInvalid(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EFilterInvalid(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EFilterInvalid() { }
	
};

#pragma pack(pop)

struct DECLSPEC_DRECORD THistogramItem
{
public:
	unsigned R;
	unsigned G;
	unsigned B;
	unsigned Gray;
	unsigned Hue;
};


enum DECLSPEC_DENUM Imageenproc__2 : unsigned char { iehcRed, iehcGreen, iehcBlue, iehcGray, iehcHue };

typedef System::Set<Imageenproc__2, Imageenproc__2::iehcRed, Imageenproc__2::iehcHue> TIEHistogramContent;

typedef THistogramItem *PHistogramItem;

typedef System::StaticArray<THistogramItem, 256> THistogram;

typedef THistogram *PHistogram;

typedef System::DynamicArray<THistogramItem> TIEHistogram;

enum DECLSPEC_DENUM Imageenproc__3 : unsigned char { peAll, peContrast, peHSV, peHSL, peRGB, peUserFilt, peEqualize, peBumpMap, peLens, peWave, peMorph, peRotate, peFFT, peGamma, peSharpen, peResize, peSoftShadow, peAutoEnhance, peCrop, peColorCurve, peLevels };

typedef System::Set<Imageenproc__3, Imageenproc__3::peAll, Imageenproc__3::peLevels> TPreviewEffects;

enum DECLSPEC_DENUM Imageenproc__4 : unsigned char { prppDefaultLockPreview, prppShowResetButton, prppHardReset, prppResetSelectedTab };

typedef System::Set<Imageenproc__4, Imageenproc__4::prppDefaultLockPreview, Imageenproc__4::prppResetSelectedTab> TPRPreviewsParams;

enum DECLSPEC_DENUM TIECopyPasteType : unsigned char { iecpAuto, iecpFullImage, iecpSelection, iecpLayer };

class PASCALIMPLEMENTATION TIPDialogParams : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	int fFFT_Left;
	int fFFT_Top;
	int fFFT_Right;
	int fFFT_Bottom;
	void __fastcall SetFFT_Left(int v);
	void __fastcall SetFFT_Top(int v);
	void __fastcall SetFFT_Right(int v);
	void __fastcall SetFFT_Bottom(int v);
	
public:
	int DialogWidth;
	int DialogHeight;
	int CONTRAST_Contrast;
	int CONTRAST_Brightness;
	int HSV_H;
	int HSV_S;
	int HSV_V;
	int HSL_H;
	int HSL_S;
	int HSL_L;
	int RGB_R;
	int RGB_G;
	int RGB_B;
	TGraphFilter USERFILTER_Values;
	Hyiedefs::TRGB EQUALIZATION_ThresholdDown;
	Hyiedefs::TRGB EQUALIZATION_ThresholdUp;
	Hyiedefs::TRGB EQUALIZATION_EqDown;
	Hyiedefs::TRGB EQUALIZATION_EqUp;
	bool EQUALIZATION_EqualizeButton;
	bool EQUALIZATION_Gray;
	bool EQUALIZATION_Blue;
	bool EQUALIZATION_Green;
	bool EQUALIZATION_Red;
	int BUMPMAP_Left;
	int BUMPMAP_Top;
	int BUMPMAP_Width;
	int BUMPMAP_Height;
	Hyiedefs::TRGB BUMPMAP_Col;
	int BUMPMAP_Src;
	bool BUMPMAP_Auto;
	int LENS_Left;
	int LENS_Top;
	int LENS_Width;
	int LENS_Height;
	double LENS_Ref;
	bool LENS_Auto;
	int WAVE_Amplitude;
	int WAVE_WaveLength;
	int WAVE_Phase;
	bool WAVE_Reflect;
	int MORPH_Filter;
	int MORPH_WinSize;
	double ROTATE_Angle;
	bool FLIP_Horz;
	bool FLIP_Vert;
	bool GAMMACORRECTION_Red;
	bool GAMMACORRECTION_Green;
	bool GAMMACORRECTION_Blue;
	double GAMMACORRECTION_Value;
	int SHARPEN_Sharpen;
	int SHARPEN_Size;
	bool FFT_GrayScale;
	System::Classes::TMemoryStream* FFT_Selection;
	bool Resize_MaintainAR;
	bool Resize_QualityFilter;
	int Resize_HeightPercent;
	int Resize_WidthPercent;
	System::Uitypes::TColor Shadow_Color;
	int Shadow_Position;
	int Shadow_Radius;
	int Shadow_Offset;
	int AutoEnhance1_Slope;
	int AutoEnhance1_Range;
	int AutoEnhance1_Quality;
	double AutoEnhance3_Gamma;
	int AutoEnhance3_Saturation;
	int Crop_Left;
	int Crop_Top;
	int Crop_Right;
	int Crop_Bottom;
	System::Uitypes::TColor BackgroundColor;
	System::AnsiString ColorCurve_CurvePoints;
	int ColorCurve_Channel;
	System::Byte Levels_Shadow;
	System::Byte Levels_MidTone;
	System::Byte Levels_Highlight;
	System::Byte Levels_OutShadow;
	System::Byte Levels_OutHighlight;
	__property int FFT_Left = {read=fFFT_Left, write=SetFFT_Left, nodefault};
	__property int FFT_Top = {read=fFFT_Top, write=SetFFT_Top, nodefault};
	__property int FFT_Right = {read=fFFT_Right, write=SetFFT_Right, nodefault};
	__property int FFT_Bottom = {read=fFFT_Bottom, write=SetFFT_Bottom, nodefault};
	__fastcall TIPDialogParams();
	__fastcall virtual ~TIPDialogParams();
	void __fastcall SaveToFile(const System::UnicodeString FileName);
	void __fastcall LoadFromFile(const System::UnicodeString FileName);
	void __fastcall SaveToStream(System::Classes::TStream* Stream);
	void __fastcall LoadFromStream(System::Classes::TStream* Stream);
	void __fastcall SetProperty(const System::UnicodeString Prop, System::UnicodeString Value);
	System::UnicodeString __fastcall GetProperty(const System::UnicodeString Prop);
	void __fastcall SetDefaultParams();
};


enum DECLSPEC_DENUM TIEEncryptionAlgorithm : unsigned char { ieeaTEA, ieeaTEA2 };

typedef int TIEFilterPresets;

typedef void __fastcall (__closure *TIEPreviewEvent)(System::TObject* Sender, Vcl::Forms::TForm* PreviewForm);

enum DECLSPEC_DENUM TIEChannel : unsigned char { iecRed, iecGreen, iecBlue };

typedef System::Set<TIEChannel, TIEChannel::iecRed, TIEChannel::iecBlue> TIEChannels;

enum DECLSPEC_DENUM TIEUndoSource : unsigned char { ieuUnknown, ieuImage, ieuSelection, ieuObject, ieuLayer, ieuFullLayer, ieuObjectsAndLayers };

enum DECLSPEC_DENUM TIEMedFilType : unsigned char { mfMedianFilter, mfSharpen, mfEdgeExtract };

typedef void __fastcall (__closure *TIESaveUndoEvent)(System::TObject* Sender, TIEUndoSource Source);

typedef void __fastcall (__closure *TIEOnUndoRedoEvent)(System::TObject* Sender, bool bIsUndo, TIEUndoSource Source, System::TObject* UndoObj, int iIndex, bool &bHandled);

enum DECLSPEC_DENUM TIEDeinterlaceMode : unsigned char { iedDiscard, iedIntelliMerge };

enum DECLSPEC_DENUM TIEThreshMode : unsigned char { ietMean, ietMedian, ietMeanMinMax };

enum DECLSPEC_DENUM TIECmpMode : unsigned char { iecmpRMSE, iecmpHamming, iecmpCovariance };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEUndoStore : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Classes::TList* fObjectList;
	System::Contnrs::TObjectList* fInfoList;
	System::UnicodeString __fastcall GetCaptions(int index);
	void __fastcall SetCaptions(int index, const System::UnicodeString Value);
	int __fastcall GetMViewIndexes(int index);
	void __fastcall SetMViewIndexes(int index, const int Value);
	System::TObject* __fastcall GetUndoObjects(int index);
	TIEUndoSource __fastcall GetUndoSources(int index);
	int __fastcall GetUndoOperations(int index);
	void __fastcall SetUndoOperations(int index, const int Value);
	int __fastcall GetLayerIndexes(int index);
	void __fastcall SetLayerIndexes(int index, const int Value);
	
public:
	__fastcall TIEUndoStore();
	__fastcall virtual ~TIEUndoStore();
	void __fastcall ClearAll();
	void __fastcall ClearAt(int idx, bool bFreeUndoImg = true);
	int __fastcall Count();
	void __fastcall Add(System::TObject* Obj, TIEUndoSource Source, int Operation, int MViewIndex);
	__property System::UnicodeString Captions[int index] = {read=GetCaptions, write=SetCaptions};
	__property System::TObject* UndoObjects[int index] = {read=GetUndoObjects};
	__property TIEUndoSource UndoSources[int index] = {read=GetUndoSources};
	__property int UndoOperations[int index] = {read=GetUndoOperations, write=SetUndoOperations};
	__property int MViewIndexes[int index] = {read=GetMViewIndexes, write=SetMViewIndexes};
	__property int LayerIndexes[int index] = {read=GetLayerIndexes, write=SetLayerIndexes};
};

#pragma pack(pop)

enum DECLSPEC_DENUM TIEPaletteType : unsigned char { ieptMedianCut, ieptFixedBW, ieptFixedHalftone8, ieptFixedHalftone27, ieptFixedHalftone64, ieptFixedHalftone125, ieptFixedWebPalette, ieptFixedHalftone252, ieptFixedHalftone256, ieptFixedGray4, ieptFixedGray16, ieptFixedGray256 };

enum DECLSPEC_DENUM TIEDitherType : unsigned char { iedtSolid, iedtOrdered4x4, iedtOrdered8x8, iedtOrdered16x16, iedtSpiral4x4, iedtSpiral8x8, iedtDualSpiral4x4, iedtDualSpiral8x8, iedtErrorDiffusion };

enum DECLSPEC_DENUM TIECropAlgorithm : unsigned char { iecaSkewedDocument, iecaAngledPhoto };

class PASCALIMPLEMENTATION TImageEnProc : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	bool fAutoUndo;
	Ieview::TIEView* fImageEnView;
	void *fImageEnViewBitmapChangeHandle;
	System::Uitypes::TColor fBackground;
	TPRPreviewsParams fPreviewsParams;
	Vcl::Graphics::TFont* fPreviewFont;
	bool fPreviewFontEnabled;
	TIEPreviewEvent fOnPreview;
	Vcl::Extctrls::TImage* fTImage;
	System::UnicodeString fFiltersInitialDir;
	Iexbitmaps::TIEBitmap* fIEBitmap;
	bool fIEBitmapCreated;
	Iexbitmaps::TIEBitmap* fTransitionFullBitmap;
	TIPDialogParams* fIPDialogParams;
	System::Classes::TStringList* fPreviewsLog;
	bool fAutoConvertFormat;
	Iextransitions::TIETransitionEffects* fTransition;
	bool fSelected;
	System::Types::TRect fSelectedRect;
	void __fastcall SetAttachedBitmap(Vcl::Graphics::TBitmap* atBitmap);
	void __fastcall SetAttachedImageEn(Ieview::TIEView* atImageEn);
	System::Uitypes::TColor __fastcall GetReBackground();
	void __fastcall SetReBackground(System::Uitypes::TColor v);
	void __fastcall SetPreviewFont(Vcl::Graphics::TFont* f);
	void __fastcall SetPreviewFontEnabled(bool Value);
	void __fastcall SetTImage(Vcl::Extctrls::TImage* v);
	void __fastcall SetPRPreviewParams(TPRPreviewsParams v);
	TPRPreviewsParams __fastcall GetPRPreviewParams();
	void __fastcall SetUndoCaptions(int index, const System::UnicodeString Value);
	void __fastcall SetUndoLimit(int v);
	System::UnicodeString __fastcall GetImageEnVersion();
	void __fastcall SetImageEnVersion(System::UnicodeString Value);
	void __fastcall GuessChromaKeyColorEx(/* out */ Hyiedefs::TRGB &KeyColor, bool bGetTolerance, /* out */ double &Tolerance);
	void __fastcall CheckHaveValidBitmap();
	void __fastcall SetProgressTask(const Ieview::TIETask v);
	bool __fastcall CopyToClipboard_Image(bool ClearImage, bool DeleteOnly);
	bool __fastcall CopyToClipboard_Selection(bool CutImage, bool CutAlpha, bool DeleteOnly);
	bool __fastcall CopyToClipboard_Layer(bool CutLayer, bool DeleteOnly);
	bool __fastcall PasteFromClipboard_Image();
	bool __fastcall PasteFromClipboard_Selection(bool MergeAlpha = true, bool MaintainAspectRatio = false, bool CanStretch = false);
	void __fastcall TextOutEx(int X, int Y, int W, int H, const System::UnicodeString Text, Vcl::Graphics::TFont* AFont, bool SetFontProps, const System::UnicodeString sFontName, int iFontSize, System::Uitypes::TColor cFontColor, System::Uitypes::TFontStyles Style, int Angle = 0x0, bool bAntiAlias = true, bool bAutoEnlarge = false);
	
protected:
	TIEUndoStore* fUndoList;
	TIEUndoStore* fRedoList;
	Iexbitmaps::TIELocation fUndoLocation;
	int fUndoLimit;
	TIESaveUndoEvent fOnSaveUndo;
	Vcl::Graphics::TBitmap* fBitmap;
	Hyiedefs::TIEProgressEvent fOnProgress;
	Ieview::TIETask fProgressTask;
	System::Classes::TNotifyEvent fOnFinishWork;
	virtual bool __fastcall GetCanUndo();
	virtual bool __fastcall GetCanRedo();
	virtual int __fastcall GetUndoCount();
	virtual int __fastcall GetRedoCount();
	virtual System::UnicodeString __fastcall GetRedoCaptions(int index);
	virtual System::UnicodeString __fastcall GetUndoCaptions(int index);
	void __fastcall SetUndoLocation(Iexbitmaps::TIELocation v);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	void __fastcall OnBitmapChange(System::TObject* Sender, Ieview::TIEChangeType Change);
	void __fastcall SetIEBitmap(Iexbitmaps::TIEBitmap* bmp);
	void __fastcall SetAttachedIEBitmap(Iexbitmaps::TIEBitmap* bmp);
	bool __fastcall MakeConsistentBitmap(Hyieutils::TIEPixelFormatSet allowedFormats, bool ExceptionOnInvalidBitmap = true);
	virtual void __fastcall DoFinishWork();
	int __fastcall GetDPIX();
	int __fastcall GetDPIY();
	bool __fastcall GetSelected();
	System::Types::TRect __fastcall GetSelectedRect();
	
public:
	int fMViewIndex;
	TIEOnUndoRedoEvent fOnUndoRedoEvent;
	bool fCastColorMaxFilter;
	int fCastColorSampleSize;
	__fastcall virtual TImageEnProc(System::Classes::TComponent* Owner)/* overload */;
	__fastcall TImageEnProc(Iexbitmaps::TIEBitmap* Bitmap)/* overload */;
	__fastcall TImageEnProc(Vcl::Graphics::TBitmap* Bitmap)/* overload */;
	__fastcall virtual ~TImageEnProc();
	__property Vcl::Graphics::TBitmap* AttachedBitmap = {read=fBitmap, write=SetAttachedBitmap};
	__property Iexbitmaps::TIEBitmap* AttachedIEBitmap = {read=fIEBitmap, write=SetAttachedIEBitmap};
	void __fastcall Update();
	int __fastcall PasteFromClipboard_Layer();
	__property System::UnicodeString FiltersInitialDir = {read=fFiltersInitialDir, write=fFiltersInitialDir};
	void __fastcall CheckLegacyBitmap(Hyieutils::TIEPixelFormat PixelFormat);
	bool __fastcall BeginImageProcessing(Hyieutils::TIEPixelFormatSet allowedFormats, int &x1, int &y1, int &x2, int &y2, const System::UnicodeString OpName, Iexbitmaps::TIEBitmap* &ProcBitmap, Iexbitmaps::TIEMask* &mask, int OpID = 0x0, bool ExtractROI = true);
	void __fastcall EndImageProcessing(Iexbitmaps::TIEBitmap* ProcBitmap, Iexbitmaps::TIEMask* mask);
	bool __fastcall BeginImageAnalysis(Hyieutils::TIEPixelFormatSet allowedFormats, int &x1, int &y1, int &x2, int &y2, Iexbitmaps::TIEBitmap* &ProcBitmap, Iexbitmaps::TIEMask* &mask);
	void __fastcall EndImageAnalysis(Iexbitmaps::TIEBitmap* ProcBitmap);
	void __fastcall Negative();
	void __fastcall HSLvar(int oHue, int oSat, int oLum);
	void __fastcall HSVvar(int oHue, int oSat, int oVal);
	void __fastcall IntensityRGBAll(int r, int g, int b);
	void __fastcall Intensity(int LoLimit, int HiLimit, int Change, bool UseAverageRGB, bool DoRed, bool DoGreen, bool DoBlue);
	void __fastcall Contrast(double vv = 2.000000E+00);
	void __fastcall ApplyFilter(const TGraphFilter &filter);
	void __fastcall ApplyFilterPreset(int filter);
	void __fastcall Convolve(double *Kernel, const int Kernel_High, int KernelWidth, int KernelHeight, double Factor);
	void __fastcall ConvertToGray();
	void __fastcall ConvertToSepia(int Depth = 0x14);
	void __fastcall CastColorRange(Hyiedefs::TRGB BeginColor, Hyiedefs::TRGB EndColor, Hyiedefs::TRGB CastColor)/* overload */;
	void __fastcall CastColorRange(System::Uitypes::TColor BeginColor, System::Uitypes::TColor EndColor, System::Uitypes::TColor CastColor)/* overload */;
	void __fastcall CastColorRange(Hyiedefs::TRGB OldColor, Hyiedefs::TRGB NewColor, int Tolerance)/* overload */;
	int __fastcall MatchHSVRange(int HueBegin, int HueEnd, int SatBegin, int SatEnd, int ValBegin, int ValEnd, bool ColorizeMatched, Hyiedefs::TRGB MatchColor, bool ColorizeNonMatched, Hyiedefs::TRGB NonMatchColor);
	void __fastcall CastColor(int BmpX, int BmpY, Hyiedefs::TRGB newColor, int Tolerance)/* overload */;
	void __fastcall CastColor(int BmpX, int BmpY, System::Uitypes::TColor newColor, int Tolerance)/* overload */;
	void __fastcall CastAlpha(int BmpX, int BmpY, int newAlpha, int tolerance);
	void __fastcall FeatherAlphaEdges(int iFeatherDepth);
	void __fastcall Flip(Hyiedefs::TFlipDir dir);
	void __fastcall RemoveRedEyes();
	void __fastcall ConvertToBW_FloydSteinberg();
	void __fastcall ConvertToBWLocalThreshold(int WinSize = 0x4, TIEThreshMode Mode = (TIEThreshMode)(0x0), int Offset = 0x4);
	void __fastcall ImageResize(int newWidth, int newHeight, Hyieutils::TIEHAlign HorizAlign = (Hyieutils::TIEHAlign)(0x0), Hyieutils::TIEVAlign VertAlign = (Hyieutils::TIEVAlign)(0x0), int FillAlpha = 0xff)/* overload */;
	void __fastcall ImageResize(int AddLeft, int AddTop, int AddRight, int AddBottom, int FillAlpha = 0xff)/* overload */;
	void __fastcall Resample(int NewWidth, int NewHeight, Hyiedefs::TResampleFilter FilterType = (Hyiedefs::TResampleFilter)(0x0), bool bMaintainAspectRatio = false)/* overload */;
	void __fastcall Resample(double ScaleBy, Hyiedefs::TResampleFilter FilterType = (Hyiedefs::TResampleFilter)(0x0))/* overload */;
	void __fastcall Rotate(double Angle, Hyiedefs::TIEAntialiasMode AntiAliasMode = (Hyiedefs::TIEAntialiasMode)(0x1), System::Uitypes::TColor BackgroundColor = (System::Uitypes::TColor)(0xffffffff))/* overload */;
	void __fastcall RotateAndCrop(double Angle, Hyiedefs::TIEAntialiasMode AntiAliasMode = (Hyiedefs::TIEAntialiasMode)(0x1), double Rate = 1.300000E+00, TIECropAlgorithm CropAlgorithm = (TIECropAlgorithm)(0x0))/* overload */;
	void __fastcall Rotate _DEPRECATED_ATTRIBUTE1("Remove AntiAlias parameter - http://imageen.com/help/Compatibility.html") (double Angle, bool AntiAlias, Hyiedefs::TIEAntialiasMode AntiAliasMode = (Hyiedefs::TIEAntialiasMode)(0x1), System::Uitypes::TColor BackgroundColor = (System::Uitypes::TColor)(0xffffffff))/* overload */;
	void __fastcall RotateAndCrop _DEPRECATED_ATTRIBUTE1("Remove AntiAlias parameter - http://imageen.com/help/Compatibility.html") (double Angle, bool AntiAlias, Hyiedefs::TIEAntialiasMode AntiAliasMode = (Hyiedefs::TIEAntialiasMode)(0x1), double Rate = 1.300000E+00)/* overload */;
	void __fastcall ConvertToBWThreshold(int Threshold = 0xffffffff);
	void __fastcall EdgeDetect_ShenCastan(double Ratio = 9.900000E-01, double Smooth = 9.000000E-01, int WindowSize = 0x7, int ThinFactor = 0x0, bool DoHysteresis = true);
	void __fastcall EdgeDetect_Sobel();
	void __fastcall RemoveIsolatedPixels(int NoiseColor = 0x1, int PixelsCount = 0x2, bool CheckDiagonals = true);
	void __fastcall RemoveNoise(int Iterations = 0x2, bool InvertImage = false);
	void __fastcall PaintMark(int Frequency, Hyiedefs::TRGB Color);
	void __fastcall GammaCorrect(double Gamma, TIEChannels Channel = (TIEChannels() << TIEChannel::iecRed << TIEChannel::iecGreen << TIEChannel::iecBlue ));
	void __fastcall PaintPenMarker(int x, int y, int Width = 0x14, System::Uitypes::TColor Color = (System::Uitypes::TColor)(0xffff), System::Uitypes::TColor BackgroundColor = (System::Uitypes::TColor)(0xffffff), int Tolerance = 0xa);
	void __fastcall ConvertToPalette(int NumColors, void * OutPalette, Hyieutils::TIEDitherMethod DitherMethod = (Hyieutils::TIEDitherMethod)(0x0));
	void __fastcall ConvertTo(int NumColors, Hyieutils::TIEDitherMethod DitherMethod = (Hyieutils::TIEDitherMethod)(0x0))/* overload */;
	bool __fastcall ConvertTo(Hyieutils::TIEPixelFormat PixelFormat, TIEPaletteType PaletteType = (TIEPaletteType)(0x0), TIEDitherType DitherType = (TIEDitherType)(0x0), bool CheckParametersOnly = false)/* overload */;
	bool __fastcall ConvertTo(Hyieutils::TIEPixelFormat PixelFormat, Hyiedefs::TRGB *Palette, const int Palette_High, TIEDitherType DitherType = (TIEDitherType)(0x0), bool CheckParametersOnly = false)/* overload */;
	bool __fastcall DoPreviews(TPreviewEffects pe = (TPreviewEffects() << Imageenproc__3::peAll ), bool IsResizeable = true, int FormWidth = 0xffffffff, int FormHeight = 0xffffffff, int FormLeft = 0xffffffff, int FormTop = 0xffffffff);
	__property TIPDialogParams* IPDialogParams = {read=fIPDialogParams};
	__property System::Classes::TStringList* PreviewsLog = {read=fPreviewsLog};
	void __fastcall AddSoftShadow(double radius = 4.000000E+00, int OffSetX = 0x4, int OffSetY = 0x4, bool AdaptSize = true, System::Uitypes::TColor ShadowColor = (System::Uitypes::TColor)(0x0), int Intensity = 0x64, int BGAlphaThreshold = 0x80);
	void __fastcall AddInnerShadow(double radius = 4.000000E+00, int OffSetX = 0x0, int OffSetY = 0x0, System::Uitypes::TColor ShadowColor = (System::Uitypes::TColor)(0x0));
	void __fastcall MedianFilter(int WindowX = 0x5, int WindowY = 0x5, int Brightness = 0x32, int Contrast = 0x32, int Multiplier = 0x1, int Threshold = 0x32, TIEMedFilType MedianOp = (TIEMedFilType)(0x0));
	void __fastcall WallisFilter(int WinWidth = 0x2, int WinHeight = 0x2, int Mean = 0x32, int StDev = 0x32, int InGain = 0x32, int Edge = 0xa, int Limit = 0x32, bool Thresholding = false);
	void __fastcall Sharpen(int Intensity = 0xa, int Neighbourhood = 0x4);
	void __fastcall UnsharpMask(double Radius = 4.000000E+00, double Amount = 1.000000E+00, double Threshold = 5.000000E-02);
	void __fastcall SymmetricNearestNeighbour(int Radius = 0x6);
	void __fastcall Pixelize(double Amount = 2.000000E-02);
	void __fastcall PencilSketch(bool GrayScale = true, int LevelSteps = 0x2, int MaxTextures = 0x7fffffff, int EdgeBlurAmount = 0x4, double EdgeAmount = 5.000000E-01, double LineThickness = 1.000000E+00, double DarkeningFactor = 1.000000E-01, double LineAlpha = 1.000000E-01, double LineDensity = 5.000000E-01, double Lightness = 4.000000E+00, bool AntialiasedLines = false);
	void __fastcall Clear();
	void __fastcall ClearSel(bool ClearAlpha = false, System::Byte Alpha = (System::Byte)(0x0));
	void __fastcall Merge(Vcl::Graphics::TBitmap* SrcBitmap, int pcf = 0x32)/* overload */;
	void __fastcall Merge(Iexbitmaps::TIEBitmap* SrcBitmap, int pcf = 0x32)/* overload */;
	void __fastcall Merge(Iexbitmaps::TIEBitmap* SrcBitmap, Iexbitmaps::TIEBitmap* Mask)/* overload */;
	void __fastcall MergeIEBitmap _DEPRECATED_ATTRIBUTE1("Use Merge instead - http://imageen.com/help/Compatibility.html") (Iexbitmaps::TIEBitmap* DBitmap, int pcf = 0x32);
	void __fastcall Threshold(Hyiedefs::TRGB DownLimit, Hyiedefs::TRGB UpLimit, Hyiedefs::TRGB DownVal, Hyiedefs::TRGB UpVal);
	void __fastcall Threshold2(int LoThreshold, int HiThreshold, bool Red, bool Green, bool Blue);
	void __fastcall HistEqualize(Hyiedefs::TRGB LoThresh, Hyiedefs::TRGB HiThresh);
	void __fastcall HistAutoEqualize();
	void __fastcall AdjustLevels(int Shadow, int MidTone, int Highlight, int OutShadow, int OutHighlight);
	void __fastcall CropSel(bool TransparencyOnly = false);
	void __fastcall BumpMapping(int LightX, int LightY, int LampX, int LampY, int pcf, Hyiedefs::TRGB Color);
	void __fastcall Lens(int cx, int cy, int Width, int Height, double Refraction);
	void __fastcall Wave(int Amplitude, int WaveLength, int Phase, bool Reflective = false);
	void __fastcall ConvertToBWOrdered();
	void __fastcall ConvertTo24Bit();
	int __fastcall WriteHiddenText(const System::AnsiString text);
	int __fastcall WriteHiddenData(char * data, int count);
	void __fastcall Maximum(int WindowSize);
	void __fastcall Minimum(int WindowSize);
	void __fastcall Opening(int WindowSize);
	void __fastcall Closing(int WindowSize);
	void __fastcall Fill(Hyiedefs::TRGB FillColor)/* overload */;
	void __fastcall Fill(System::Uitypes::TColor FillColor)/* overload */;
	void __fastcall GradientFill(System::Uitypes::TColor StartColor, System::Uitypes::TColor EndColor, Hyiedefs::TIEGradientDir Direction = (Hyiedefs::TIEGradientDir)(0x1));
	void __fastcall AlphaFill(System::Byte Value)/* overload */;
	void __fastcall AlphaFill(System::Byte StartValue, System::Byte EndValue, Hyiedefs::TIEGradientDir Direction = (Hyiedefs::TIEGradientDir)(0x1))/* overload */;
	void __fastcall Blur(double radius);
	void __fastcall MotionBlur(double Angle, int Radius = 0x8, int Sigma = 0x7);
	void __fastcall Random(double mean = 5.000000E-01, double stdDev = 1.230000E-01);
	void __fastcall SetTransparentColors(Hyiedefs::TRGB MinColor, Hyiedefs::TRGB MaxColor, int Alpha = 0x0)/* overload */;
	void __fastcall SetTransparentColors(System::Uitypes::TColor MinColor, System::Uitypes::TColor MaxColor, int Alpha)/* overload */;
	void __fastcall SetTransparentColors(Hyiedefs::TRGB Color, int Tolerance, int Alpha)/* overload */;
	void __fastcall RemoveChromaKey(int KeyPixelX, int KeyPixelY, double Tolerance, int Saturation, int FeatherEdges, int HueReduction = 0x0, bool RemoveNoise = false)/* overload */;
	void __fastcall RemoveChromaKey(Hyiedefs::TRGB KeyColorRGB, double Tolerance, int Saturation, int FeatherEdges, int HueReduction = 0x0, bool RemoveNoise = false)/* overload */;
	Hyiedefs::TRGB __fastcall GuessChromaKeyColor()/* overload */;
	Hyiedefs::TRGB __fastcall GuessChromaKeyColor(/* out */ double &Tolerance)/* overload */;
	void __fastcall ResampleTo(Iexbitmaps::TIEBitmap* Target, int TargetWidth, int TargetHeight, Hyiedefs::TResampleFilter FilterType, bool bMaintainAspectRatio = false);
	void __fastcall RoundImage(int RoundWidth, int RoundHeight);
	void __fastcall RadialStretch(double ARed, double BRed, double CRed, double DRed, double AGreen, double BGreen, double CGreen, double DGreen, double ABlue, double BBlue, double CBlue, double DBlue);
	void __fastcall Crop(int x1, int y1, int x2, int y2)/* overload */;
	void __fastcall Crop(const System::Types::TRect &Rect)/* overload */;
	void __fastcall Crop(const System::Types::TRect &Rect, double Rotation, Hyiedefs::TIEAntialiasMode AntialiasMode = (Hyiedefs::TIEAntialiasMode)(0x1))/* overload */;
	void __fastcall Crop(Hyiedefs::TDPoint *Quadrilater, const int Quadrilater_High)/* overload */;
	void __fastcall CropTransparentBorder();
	System::Types::TRect __fastcall AutoCrop(int Tolerance, Hyiedefs::TRGB Background, bool DoCrop = true)/* overload */;
	System::Types::TRect __fastcall AutoCrop(int Tolerance, System::Uitypes::TColor Background, bool DoCrop = true)/* overload */;
	System::Types::TRect __fastcall AutoCrop2(double BorderRate = 6.000000E+00, bool DoCrop = true);
	void __fastcall MakeTile(int columns = 0x2, int rows = 0x2);
	void __fastcall ShiftChannel(int offsetX, int offsetY, TIEChannel channel, int fillValue);
	void __fastcall DisposeChannels(const System::UnicodeString newDispo);
	void __fastcall Deinterlace(TIEDeinterlaceMode mode);
	void __fastcall Encrypt(System::Byte *Passkey, const int Passkey_High, TIEEncryptionAlgorithm Algorithm = (TIEEncryptionAlgorithm)(0x0))/* overload */;
	void __fastcall Encrypt(const System::AnsiString Passkey, TIEEncryptionAlgorithm Algorithm = (TIEEncryptionAlgorithm)(0x0))/* overload */;
	void __fastcall Decrypt(System::Byte *Passkey, const int Passkey_High, TIEEncryptionAlgorithm Algorithm = (TIEEncryptionAlgorithm)(0x0))/* overload */;
	void __fastcall Decrypt(const System::AnsiString Passkey, TIEEncryptionAlgorithm Algorithm = (TIEEncryptionAlgorithm)(0x0))/* overload */;
	void __fastcall Reflection(int minAlpha = 0x0, int maxAlpha = 0xc8, int percentage = 0x64);
	void __fastcall PerspectiveDraw(Iexbitmaps::TIEBitmap* Source, int x0, int y0, int x1, int y1, int x2, int y2, int x3, int y3, int alphaMin = 0xffffffff, int alphaMax = 0xffffffff, bool mergeAlpha = false);
	Hyiedefs::TIEQuadCoords __fastcall ProjectDraw(Iexbitmaps::TIEBitmap* Source, int centerDestX, int centerDestY, int destWidth, int destHeight, double depth, int translateX, int translateY, double rotateX, double rotateY, int specularAlphaMin = 0xffffffff, int specularAlphaMax = 0xffffffff, bool mergeAlpha = false)/* overload */;
	Hyiedefs::TIEQuadCoords __fastcall ProjectDraw(Iexbitmaps::TIEBitmap* Source, int centerDestX, int centerDestY, double scale, double depth, int translateX, int translateY, double rotateX, double rotateY, int specularAlphaMin = 0xffffffff, int specularAlphaMax = 0xffffffff, bool mergeAlpha = false)/* overload */;
	void __fastcall MapGrayToColor(Hyiedefs::TRGB *map, const int map_High);
	void __fastcall WhiteBalance_Coef(double Red, double Green, double Blue);
	void __fastcall WhiteBalance_GrayWorld();
	void __fastcall WhiteBalance_WhiteAt(int WhiteX, int WhiteY);
	void __fastcall WhiteBalance_AutoWhite();
	void __fastcall AdjustGainOffset();
	void __fastcall AutoImageEnhance1(int SubsampledSize = 0x3c, int Slope = 0x14, int Cut = 0x19, int Neighbour = 0x2);
	void __fastcall AutoImageEnhance2(int ScaleCount = 0x3, int ScaleCurve = 0x2, double Variance = 1.800000E+00, int ScaleHigh = 0xc8, bool Luminance = true);
	void __fastcall AutoImageEnhance3(double Gamma = 3.500000E-01, int Saturation = 0x50);
	void __fastcall AutoSharp(int Intensity = 0x44, double Rate = 3.500000E-02);
	void __fastcall Colorize(int hue, int saturation, double luminosity);
	void __fastcall AdjustBrightnessContrastSaturation(int Brightness, int Contrast, int Saturation);
	void __fastcall Contrast2(double Amount);
	void __fastcall AdjustSaturation(int Amount);
	void __fastcall AdjustTemperature(int temperature);
	void __fastcall AdjustTint(int Amount)/* overload */;
	void __fastcall AdjustTint(int Amount, Hyiedefs::TRGB FixedColorStart, Hyiedefs::TRGB FixedColorEnd)/* overload */;
	void __fastcall AdjustTint(int Amount, const System::Types::TPoint &FixedColorPos)/* overload */;
	void __fastcall AdjustLumSatHistogram(double Saturation, double Luminance);
	void __fastcall Contrast3(int Change, int Midpoint, bool DoRed, bool DoGreen, bool DoBlue);
	int __fastcall CalcOrientation();
	void __fastcall GetHistogram(void * Hist, TIEHistogramContent Content = (TIEHistogramContent() << Imageenproc__2::iehcRed << Imageenproc__2::iehcGreen << Imageenproc__2::iehcBlue << Imageenproc__2::iehcGray ))/* overload */;
	TIEHistogram __fastcall GetHistogram(TIEHistogramContent Content = (TIEHistogramContent() << Imageenproc__2::iehcRed << Imageenproc__2::iehcGreen << Imageenproc__2::iehcBlue << Imageenproc__2::iehcGray ))/* overload */;
	void __fastcall CalcImagePalette(Hyiedefs::TRGB *Palette, const int Palette_High, int MaxCol = 0x100);
	int __fastcall CalcImageNumColors();
	Iexbitmaps::TIEBitmap* __fastcall GetCMYKChannels(int ch)/* overload */;
	void __fastcall GetCMYKChannels(Iexbitmaps::TIEBitmap* BitmapC, Iexbitmaps::TIEBitmap* BitmapM, Iexbitmaps::TIEBitmap* BitmapY, Iexbitmaps::TIEBitmap* BitmapK)/* overload */;
	Iexbitmaps::TIEBitmap* __fastcall GetHSVChannel(int ch);
	void __fastcall GetHSVChannelAll(Iexbitmaps::TIEBitmap* BitmapH, Iexbitmaps::TIEBitmap* BitmapS, Iexbitmaps::TIEBitmap* BitmapV);
	Iexbitmaps::TIEBitmap* __fastcall GetRGBChannel _DEPRECATED_ATTRIBUTE1("Check parameters - http://imageen.com/help/Compatibility.html") (int ch)/* overload */;
	Iexbitmaps::TIEBitmap* __fastcall GetRGBChannel(TIEChannel ch)/* overload */;
	void __fastcall GetRGBChannelAll(Iexbitmaps::TIEBitmap* BitmapR, Iexbitmaps::TIEBitmap* BitmapG, Iexbitmaps::TIEBitmap* BitmapB);
	void __fastcall SetFromRGBChannels(Iexbitmaps::TIEBitmap* BitmapR, Iexbitmaps::TIEBitmap* BitmapG, Iexbitmaps::TIEBitmap* BitmapB);
	System::AnsiString __fastcall ReadHiddenText();
	int __fastcall ReadHiddenData(char * data, int maxlen);
	int __fastcall GetHiddenDataSpace();
	void __fastcall ClearHiddenText();
	Iefft::TIEFtImage* __fastcall FTCreateImage(Iefft::TIEFtImageType ImageType, int NewWidth = 0xffffffff, int NewHeight = 0xffffffff);
	void __fastcall FTConvertFrom(Iefft::TIEFtImage* ft);
	void __fastcall FTDisplayFrom(Iefft::TIEFtImage* ft);
	void __fastcall FTClearZone(int tx1, int ty1, int tx2, int ty2, bool GrayScale);
	double __fastcall SkewDetection(int ResampleWidth = 0x0, int AngleRange = 0x1e, double Precision = 1.000000E-01, bool EdgeDetect = false);
	double __fastcall SkewDetectionFine(double StartingAngle = 0.000000E+00, double resolution = 1.000000E-01, int range = 0xa, bool maxQuality = true);
	void __fastcall CalcDensityHistogram(void * VertHist, void * HorizHist, int norm_vert, int norm_horiz);
	bool __fastcall ComputeImageEquality(Iexbitmaps::TIEBitmap* SecondImage, double &psnr_min, double &psnr_max, double &mse_min, double &mse_max, double &rmse_min, double &rmse_max, double &pae_min, double &pae_max, double &mae_min, double &mae_max);
	double __fastcall CompareWith(Iexbitmaps::TIEBitmap* SecondImage, Iexbitmaps::TIEBitmap* DiffBitmap);
	double __fastcall CompareHistogramWith(Iexbitmaps::TIEBitmap* SecondImage, TIECmpMode Mode, bool GrayScale);
	double __fastcall GetDominantColor(Hyiedefs::TRGB &Color);
	System::Classes::TList* __fastcall SeparateObjects(int Quality = 0x4, bool MergeCommonAreas = true)/* overload */;
	System::Classes::TList* __fastcall SeparateObjects(int Quality, bool MergeCommonAreas, Hyiedefs::TRGB BackgroundColorBegin, Hyiedefs::TRGB BackgroundColorEnd)/* overload */;
	Hyiedefs::TRGB __fastcall CalcAverageRGB(int iSampleCount = 0x0);
	double __fastcall CalcStdDev();
	virtual void __fastcall SaveUndo(TIEUndoSource Source = (TIEUndoSource)(0x1), bool ClearRedo = false)/* overload */;
	virtual void __fastcall SaveUndo(const System::UnicodeString Caption, TIEUndoSource Source = (TIEUndoSource)(0x1), bool ClearRedo = false, int Operation = 0x0)/* overload */;
	void __fastcall SaveUndoCaptioned _DEPRECATED_ATTRIBUTE1("Use SaveUndo instead - http://imageen.com/help/Compatibility.html") (const System::UnicodeString Caption, TIEUndoSource Source = (TIEUndoSource)(0x1));
	virtual void __fastcall ClearUndo();
	void __fastcall ClearUndoAt(int Position);
	virtual void __fastcall ClearAllUndo();
	virtual void __fastcall Undo(bool AutoRedo = false);
	void __fastcall UndoRect(int x1, int y1, int x2, int y2);
	virtual void __fastcall UndoAt(int Position, bool AutoRedo = false);
	__property bool CanUndo = {read=GetCanUndo, nodefault};
	__property bool CanRedo = {read=GetCanRedo, nodefault};
	__property Iexbitmaps::TIELocation UndoLocation = {read=fUndoLocation, write=SetUndoLocation, nodefault};
	__property bool Selected = {read=GetSelected, write=fSelected, nodefault};
	__property System::Types::TRect SelectedRect = {read=GetSelectedRect, write=fSelectedRect};
	__property int UndoCount = {read=GetUndoCount, nodefault};
	__property System::UnicodeString UndoCaptions[int index] = {read=GetUndoCaptions, write=SetUndoCaptions};
	virtual void __fastcall GetUndoInfo(const int index, /* out */ TIEUndoSource &UndoSource, /* out */ int &UndoOperation, /* out */ System::UnicodeString &UndoCaption, /* out */ int &UndoIndex)/* overload */;
	virtual void __fastcall GetUndoInfo(const int index, /* out */ TIEUndoSource &UndoSource, /* out */ int &UndoOperation)/* overload */;
	virtual void __fastcall SaveRedo(TIEUndoSource Source = (TIEUndoSource)(0x1))/* overload */;
	virtual void __fastcall SaveRedo(const System::UnicodeString Caption, TIEUndoSource Source = (TIEUndoSource)(0x1))/* overload */;
	void __fastcall SaveRedoCaptioned _DEPRECATED_ATTRIBUTE1("Use SaveRedo instead - http://imageen.com/help/Compatibility.html") (const System::UnicodeString Caption, TIEUndoSource Source = (TIEUndoSource)(0x1));
	__property System::UnicodeString RedoCaptions[int index] = {read=GetRedoCaptions};
	__property int RedoCount = {read=GetRedoCount, nodefault};
	virtual void __fastcall ClearAllRedo();
	virtual void __fastcall ClearRedo();
	virtual void __fastcall ClearRedoAt(int Position);
	virtual void __fastcall Redo(bool AutoUndo = false);
	virtual void __fastcall RedoAt(int Position, bool AutoUndo = false);
	virtual void __fastcall GetRedoInfo(const int index, /* out */ TIEUndoSource &RedoSource, /* out */ int &RedoOperation, /* out */ System::UnicodeString &RedoCaption, /* out */ int &RedoIndex)/* overload */;
	virtual void __fastcall GetRedoInfo(const int index, /* out */ TIEUndoSource &RedoSource, /* out */ int &RedoOperation)/* overload */;
	bool __fastcall CanCutToClipboard(TIECopyPasteType Source = (TIECopyPasteType)(0x0));
	bool __fastcall CutToClipboard(TIECopyPasteType Source = (TIECopyPasteType)(0x0), bool CutAlpha = false, bool DeleteOnly = false);
	bool __fastcall CanCopyToClipboard(TIECopyPasteType Source = (TIECopyPasteType)(0x0));
	bool __fastcall CopyToClipboard(TIECopyPasteType Source = (TIECopyPasteType)(0x0))/* overload */;
	bool __fastcall CanPasteFromClipboard(TIECopyPasteType Dest = (TIECopyPasteType)(0x0), bool InclImagesAsLayers = true);
	bool __fastcall PasteFromClipboard(TIECopyPasteType Dest = (TIECopyPasteType)(0x0), bool MergeAlpha = true, bool MaintainAspectRatio = true, bool CanStretch = true);
	bool __fastcall PointPasteFromClip(int XDest, int YDest, bool MergeAlpha = true);
	void __fastcall SelPasteFromClipStretch _DEPRECATED_ATTRIBUTE1("Use SelPasteFromClip instead - http://imageen.com/help/Compatibility.html") (bool MergeAlpha = true);
	bool __fastcall CopyToClipboard _DEPRECATED_ATTRIBUTE1("Check parameters - http://imageen.com/help/Compatibility.html") (bool IncludeImageEnFormat)/* overload */;
	bool __fastcall SelCopyToClip _DEPRECATED_ATTRIBUTE1("Use CopyToClipboard(iecpSelection) instead - http://imageen.com/help/Compatibility.html") (bool IncludeImageEnFormat = true);
	bool __fastcall SelCutToClip _DEPRECATED_ATTRIBUTE1("Use CutToClipboard(iecpSelection) instead - http://imageen.com/help/Compatibility.html") (bool IncludeImageEnFormat = true, bool CutAlpha = false);
	bool __fastcall IsClipboardAvailable _DEPRECATED_ATTRIBUTE1("Use CanPasteFromClipboard(iecAuto) instead - http://imageen.com/help/Compatibility.html") ();
	bool __fastcall SelPasteFromClip _DEPRECATED_ATTRIBUTE1("Use PasteFromClipboard(iecpSelection) instead - http://imageen.com/help/Compatibility.html") (bool MergeAlpha = true, bool MaintainAspectRatio = false, bool CanStretch = false);
	DYNAMIC bool __fastcall GetReSel(int &fSX1, int &fSY1, int &fSX2, int &fSY2, Hyiedefs::PPointArray &PolySel, int &PolySelCount, Iexbitmaps::TIEMask* &mask);
	void __fastcall PrepareTransitionBitmaps(Iexbitmaps::TIEBitmap* StartBitmap, Iexbitmaps::TIEBitmap* EndBitmap, Iextransitions::TIETransitionType Effect, int iWidth = 0xffffffff, int iHeight = 0xffffffff, System::Uitypes::TColor BackgroundColor = (System::Uitypes::TColor)(0xffffffff), Hyiedefs::TResampleFilter ResamplingFilter = (Hyiedefs::TResampleFilter)(0x9))/* overload */;
	void __fastcall PrepareTransitionBitmaps(Iexbitmaps::TIEBitmap* StartBitmap, Iexbitmaps::TIEBitmap* EndBitmap, Iextransitions::TIETransitionType Effect, const System::Types::TRect &StartRect, const System::Types::TRect &EndRect, bool RectMaintainAspectRatio = true, int iWidth = 0xffffffff, int iHeight = 0xffffffff, bool bStretchSmall = false, System::Uitypes::TColor BackgroundColor = (System::Uitypes::TColor)(0xffffffff), Hyiedefs::TResampleFilter ResamplingFilter = (Hyiedefs::TResampleFilter)(0x9), int Smoothing = 0xff, Iextransitions::TIETransitionTiming Timing = (Iextransitions::TIETransitionTiming)(0x0))/* overload */;
	void __fastcall CreateTransitionBitmap(float TransitionProgress, Iexbitmaps::TIEBitmap* DestBitmap)/* overload */;
	void __fastcall PrepareTransitionBitmaps(Vcl::Graphics::TBitmap* StartBitmap, Vcl::Graphics::TBitmap* EndBitmap, Iextransitions::TIETransitionType Effect, int iWidth = 0xffffffff, int iHeight = 0xffffffff, System::Uitypes::TColor BackgroundColor = (System::Uitypes::TColor)(0xffffffff), Hyiedefs::TResampleFilter ResamplingFilter = (Hyiedefs::TResampleFilter)(0x9))/* overload */;
	void __fastcall PrepareTransitionBitmaps(Vcl::Graphics::TBitmap* StartBitmap, Vcl::Graphics::TBitmap* EndBitmap, Iextransitions::TIETransitionType Effect, const System::Types::TRect &StartRect, const System::Types::TRect &EndRect, bool RectMaintainAspectRatio = true, int iWidth = 0xffffffff, int iHeight = 0xffffffff, bool bStretchSmall = false, System::Uitypes::TColor BackgroundColor = (System::Uitypes::TColor)(0xffffffff), Hyiedefs::TResampleFilter ResamplingFilter = (Hyiedefs::TResampleFilter)(0x9), int Smoothing = 0xff, Iextransitions::TIETransitionTiming Timing = (Iextransitions::TIETransitionTiming)(0x0))/* overload */;
	void __fastcall CreateTransitionBitmap(float TransitionProgress, Vcl::Graphics::TBitmap* DestBitmap)/* overload */;
	void __fastcall PrepareTransitionBitmapsEx _DEPRECATED_ATTRIBUTE1("Use PrepareTransitionBitmaps instead - http://imageen.com/help/Compatibility.html") (Vcl::Graphics::TBitmap* StartBitmap, Vcl::Graphics::TBitmap* EndBitmap, Iextransitions::TIETransitionType Effect, const System::Types::TRect &StartRect, const System::Types::TRect &EndRect, bool RectMaintainAspectRatio = true, int iWidth = 0xffffffff, int iHeight = 0xffffffff, bool bStretchSmall = false, System::Uitypes::TColor BackgroundColor = (System::Uitypes::TColor)(0xffffffff), Hyiedefs::TResampleFilter ResamplingFilter = (Hyiedefs::TResampleFilter)(0x9), int Smoothing = 0x60, Iextransitions::TIETransitionTiming Timing = (Iextransitions::TIETransitionTiming)(0x0));
	void __fastcall TextOut(int X, int Y, const System::UnicodeString Text, Vcl::Graphics::TFont* AFont = (Vcl::Graphics::TFont*)(0x0), int Angle = 0x0, bool bAntiAlias = true, bool bAutoEnlarge = false)/* overload */;
	void __fastcall TextOut(int X, int Y, const System::UnicodeString Text, const System::UnicodeString sFontName, int iFontSize, System::Uitypes::TColor cFontColor, System::Uitypes::TFontStyles Style, int Angle = 0x0, bool bAntiAlias = true, bool bAutoEnlarge = false)/* overload */;
	void __fastcall TextOut(const System::Types::TRect &Rect, const System::UnicodeString Text, Vcl::Graphics::TFont* AFont = (Vcl::Graphics::TFont*)(0x0), int Angle = 0x0)/* overload */;
	void __fastcall TextOut(const System::Types::TRect &Rect, const System::UnicodeString Text, const System::UnicodeString sFontName, int iFontSize, System::Uitypes::TColor cFontColor, System::Uitypes::TFontStyles Style, int Angle = 0x0)/* overload */;
	__property Ieview::TIETask ProgressTask = {read=fProgressTask, nodefault};
	
__published:
	__property Ieview::TIEView* AttachedImageEn = {read=fImageEnView, write=SetAttachedImageEn};
	__property bool AutoUndo = {read=fAutoUndo, write=fAutoUndo, default=1};
	__property System::Uitypes::TColor Background = {read=GetReBackground, write=SetReBackground, default=0};
	__property Hyiedefs::TIEProgressEvent OnProgress = {read=fOnProgress, write=fOnProgress};
	__property Vcl::Graphics::TFont* PreviewFont = {read=fPreviewFont, write=SetPreviewFont};
	__property bool PreviewFontEnabled = {read=fPreviewFontEnabled, write=SetPreviewFontEnabled, default=0};
	__property TPRPreviewsParams PreviewsParams = {read=GetPRPreviewParams, write=SetPRPreviewParams, default=6};
	__property Vcl::Extctrls::TImage* AttachedTImage = {read=fTImage, write=SetTImage};
	__property TIEPreviewEvent OnPreview = {read=fOnPreview, write=fOnPreview};
	__property int UndoLimit = {read=fUndoLimit, write=SetUndoLimit, default=1};
	__property System::Classes::TNotifyEvent OnFinishWork = {read=fOnFinishWork, write=fOnFinishWork};
	__property bool AutoConvertFormat = {read=fAutoConvertFormat, write=fAutoConvertFormat, default=1};
	__property TIESaveUndoEvent OnSaveUndo = {read=fOnSaveUndo, write=fOnSaveUndo};
	__property System::UnicodeString ImageEnVersion = {read=GetImageEnVersion, write=SetImageEnVersion, stored=false};
};


enum DECLSPEC_DENUM TIEProjectBitmapOp : unsigned char { ieovoCALCRECTONLY, ieovoDRAWONLY, ieovoFULLOP };

struct DECLSPEC_DRECORD TIEPrecalcTransform
{
public:
	double rotateX;
	double rotateY;
	int dst_x1;
	int dst_y1;
	int dst_x2;
	int dst_y2;
	int destX;
	int destY;
	int width;
	int height;
	System::Word *src;
};


typedef TIEPrecalcTransform *PIEPrecalcTransform;

typedef System::StaticArray<System::UnicodeString, 78> Imageenproc__8;

//-- var, const, procedure ---------------------------------------------------
#define ppeColorAdjust (System::Set<Imageenproc__3, Imageenproc__3::peAll, Imageenproc__3::peLevels>() << Imageenproc__3::peContrast << Imageenproc__3::peHSV << Imageenproc__3::peHSL << Imageenproc__3::peRGB << Imageenproc__3::peEqualize << Imageenproc__3::peFFT << Imageenproc__3::peGamma << Imageenproc__3::peSharpen << Imageenproc__3::peAutoEnhance << Imageenproc__3::peColorCurve << Imageenproc__3::peLevels )
#define ppeEffects (System::Set<Imageenproc__3, Imageenproc__3::peAll, Imageenproc__3::peLevels>() << Imageenproc__3::peUserFilt << Imageenproc__3::peBumpMap << Imageenproc__3::peLens << Imageenproc__3::peWave << Imageenproc__3::peMorph << Imageenproc__3::peRotate << Imageenproc__3::peResize << Imageenproc__3::peSoftShadow << Imageenproc__3::peCrop )
#define ppeColorAdjustments (System::Set<Imageenproc__3, Imageenproc__3::peAll, Imageenproc__3::peLevels>() << Imageenproc__3::peContrast << Imageenproc__3::peHSV << Imageenproc__3::peHSL << Imageenproc__3::peRGB << Imageenproc__3::peEqualize << Imageenproc__3::peFFT << Imageenproc__3::peGamma << Imageenproc__3::peAutoEnhance << Imageenproc__3::peColorCurve << Imageenproc__3::peLevels )
#define ppeEditingFunctions (System::Set<Imageenproc__3, Imageenproc__3::peAll, Imageenproc__3::peLevels>() << Imageenproc__3::peRotate << Imageenproc__3::peResize << Imageenproc__3::peCrop )
#define ppeSpecialEffects (System::Set<Imageenproc__3, Imageenproc__3::peAll, Imageenproc__3::peLevels>() << Imageenproc__3::peUserFilt << Imageenproc__3::peBumpMap << Imageenproc__3::peLens << Imageenproc__3::peWave << Imageenproc__3::peMorph << Imageenproc__3::peSharpen << Imageenproc__3::peSoftShadow )
static const System::Int8 fpNone = System::Int8(0x0);
static const System::Int8 fpBlur = System::Int8(0x1);
static const System::Int8 fpEdge = System::Int8(0x2);
static const System::Int8 fpEmboss = System::Int8(0x3);
static const System::Int8 fpHighPass1 = System::Int8(0x4);
static const System::Int8 fpHighPass2 = System::Int8(0x5);
static const System::Int8 fpHighPass3 = System::Int8(0x6);
static const System::Int8 fpLowPass1 = System::Int8(0x7);
static const System::Int8 fpLowPass2 = System::Int8(0x8);
extern DELPHI_PACKAGE System::StaticArray<System::StaticArray<int, 8>, 8> BWORDERPATTERN;
extern DELPHI_PACKAGE System::AnsiString IERawClipFormat_Name;
extern DELPHI_PACKAGE System::AnsiString IELayerClipboardFormat_Name;
extern DELPHI_PACKAGE System::StaticArray<System::StaticArray<Hyiedefs::TRGB, 8>, 256> C1TO24;
extern DELPHI_PACKAGE int IERawClipFormat;
extern DELPHI_PACKAGE int IELayerClipboardFormat;
extern DELPHI_PACKAGE int PNGClipFormat;
extern DELPHI_PACKAGE System::ResourceString _IERS_FLT_NONE;
#define Imageenproc_IERS_FLT_NONE System::LoadResourceString(&Imageenproc::_IERS_FLT_NONE)
extern DELPHI_PACKAGE System::ResourceString _IERS_FLT_BLUR;
#define Imageenproc_IERS_FLT_BLUR System::LoadResourceString(&Imageenproc::_IERS_FLT_BLUR)
extern DELPHI_PACKAGE System::ResourceString _IERS_FLT_EDGES;
#define Imageenproc_IERS_FLT_EDGES System::LoadResourceString(&Imageenproc::_IERS_FLT_EDGES)
extern DELPHI_PACKAGE System::ResourceString _IERS_FLT_EMBOSS;
#define Imageenproc_IERS_FLT_EMBOSS System::LoadResourceString(&Imageenproc::_IERS_FLT_EMBOSS)
extern DELPHI_PACKAGE System::ResourceString _IERS_FLT_HIGH_PASS_1;
#define Imageenproc_IERS_FLT_HIGH_PASS_1 System::LoadResourceString(&Imageenproc::_IERS_FLT_HIGH_PASS_1)
extern DELPHI_PACKAGE System::ResourceString _IERS_FLT_HIGH_PASS_2;
#define Imageenproc_IERS_FLT_HIGH_PASS_2 System::LoadResourceString(&Imageenproc::_IERS_FLT_HIGH_PASS_2)
extern DELPHI_PACKAGE System::ResourceString _IERS_FLT_HIGH_PASS_3;
#define Imageenproc_IERS_FLT_HIGH_PASS_3 System::LoadResourceString(&Imageenproc::_IERS_FLT_HIGH_PASS_3)
extern DELPHI_PACKAGE System::ResourceString _IERS_FLT_LOW_PASS_1;
#define Imageenproc_IERS_FLT_LOW_PASS_1 System::LoadResourceString(&Imageenproc::_IERS_FLT_LOW_PASS_1)
extern DELPHI_PACKAGE System::ResourceString _IERS_FLT_LOW_PASS_2;
#define Imageenproc_IERS_FLT_LOW_PASS_2 System::LoadResourceString(&Imageenproc::_IERS_FLT_LOW_PASS_2)
static const System::Int8 IEOP_CUSTOM = System::Int8(0x0);
static const System::Int8 IEOP_ADDINNERSHADOW = System::Int8(0x1);
static const System::Int8 IEOP_ADDSOFTSHADOW = System::Int8(0x2);
static const System::Int8 IEOP_ADJUSTBRIGHTNESSCONTRASTSATURATION = System::Int8(0x3);
static const System::Int8 IEOP_ADJUSTGAINOFFSET = System::Int8(0x4);
static const System::Int8 IEOP_ADJUSTLUMSATHISTOGRAM = System::Int8(0x5);
static const System::Int8 IEOP_ADJUSTSATURATION = System::Int8(0x6);
static const System::Int8 IEOP_ADJUSTTEMPERATURE = System::Int8(0x7);
static const System::Int8 IEOP_ADJUSTTINT = System::Int8(0x8);
static const System::Int8 IEOP_APPLYFILTER = System::Int8(0x9);
static const System::Int8 IEOP_AUTOIMAGEENHANCE1 = System::Int8(0xa);
static const System::Int8 IEOP_AUTOIMAGEENHANCE2 = System::Int8(0xb);
static const System::Int8 IEOP_AUTOIMAGEENHANCE3 = System::Int8(0xc);
static const System::Int8 IEOP_AUTOSHARP = System::Int8(0xd);
static const System::Int8 IEOP_BLUR = System::Int8(0xe);
static const System::Int8 IEOP_BUMPMAPPING = System::Int8(0xf);
static const System::Int8 IEOP_CASTALPHA = System::Int8(0x10);
static const System::Int8 IEOP_CASTCOLOR = System::Int8(0x11);
static const System::Int8 IEOP_CASTCOLORRANGE = System::Int8(0x12);
static const System::Int8 IEOP_CLEAR = System::Int8(0x13);
static const System::Int8 IEOP_CLEARSEL = System::Int8(0x14);
static const System::Int8 IEOP_CLOSING = System::Int8(0x15);
static const System::Int8 IEOP_COLORIZE = System::Int8(0x16);
static const System::Int8 IEOP_CONTRAST = System::Int8(0x17);
static const System::Int8 IEOP_CONTRAST2 = System::Int8(0x18);
static const System::Int8 IEOP_CONTRAST3 = System::Int8(0x19);
static const System::Int8 IEOP_CONVERTTO = System::Int8(0x1a);
static const System::Int8 IEOP_CONVERTTO2 = System::Int8(0x1b);
static const System::Int8 IEOP_CONVERTTO24BIT = System::Int8(0x1c);
static const System::Int8 IEOP_CONVERTTO3 = System::Int8(0x1d);
static const System::Int8 IEOP_CONVERTTOBW_FLOYDSTEINBERG = System::Int8(0x1e);
static const System::Int8 IEOP_CONVERTTOBWLOCALTHRESHOLD = System::Int8(0x1f);
static const System::Int8 IEOP_CONVERTTOBWORDERED = System::Int8(0x20);
static const System::Int8 IEOP_CONVERTTOBWTHRESHOLD = System::Int8(0x21);
static const System::Int8 IEOP_CONVERTTOGRAY = System::Int8(0x22);
static const System::Int8 IEOP_CONVERTTOPALETTE = System::Int8(0x23);
static const System::Int8 IEOP_CONVERTTOSEPIA = System::Int8(0x24);
static const System::Int8 IEOP_CONVOLVE = System::Int8(0x25);
static const System::Int8 IEOP_CROP = System::Int8(0x26);
static const System::Int8 IEOP_CROPSEL = System::Int8(0x27);
static const System::Int8 IEOP_DECRYPT = System::Int8(0x28);
static const System::Int8 IEOP_DEINTERLACE = System::Int8(0x29);
static const System::Int8 IEOP_DISPOSECHANNELS = System::Int8(0x2a);
static const System::Int8 IEOP_EDGEDETECT = System::Int8(0x2b);
static const System::Int8 IEOP_EDGEDETECT_SOBEL = System::Int8(0x2c);
static const System::Int8 IEOP_ENCRYPT = System::Int8(0x2d);
static const System::Int8 IEOP_FEATHERALPHAEDGES = System::Int8(0x2e);
static const System::Int8 IEOP_FILL = System::Int8(0x2f);
static const System::Int8 IEOP_FLIPHORZ = System::Int8(0x30);
static const System::Int8 IEOP_FLIPVERT = System::Int8(0x31);
static const System::Int8 IEOP_FTCLEARZONE = System::Int8(0x32);
static const System::Int8 IEOP_GAMMACORRECT = System::Int8(0x33);
static const System::Int8 IEOP_HISTAUTOEQUALIZE = System::Int8(0x34);
static const System::Int8 IEOP_HISTEQUALIZE = System::Int8(0x35);
static const System::Int8 IEOP_HSLVAR = System::Int8(0x36);
static const System::Int8 IEOP_HSVVAR = System::Int8(0x37);
static const System::Int8 IEOP_INTENSITY = System::Int8(0x38);
static const System::Int8 IEOP_INTENSITYRGBALL = System::Int8(0x39);
static const System::Int8 IEOP_LENS = System::Int8(0x3a);
static const System::Int8 IEOP_MAKETILE = System::Int8(0x3b);
static const System::Int8 IEOP_MAPGRAYTOCOLOR = System::Int8(0x3c);
static const System::Int8 IEOP_MATCHHSVRANGE = System::Int8(0x3d);
static const System::Int8 IEOP_MAXIMUM = System::Int8(0x3e);
static const System::Int8 IEOP_MEDIANFILTER = System::Int8(0x3f);
static const System::Int8 IEOP_MERGE = System::Int8(0x40);
static const System::Int8 IEOP_MERGEWITHMASK = System::Int8(0x41);
static const System::Int8 IEOP_MINIMUM = System::Int8(0x42);
static const System::Int8 IEOP_MOTIONBLUR = System::Int8(0x43);
static const System::Int8 IEOP_NEGATIVE = System::Int8(0x44);
static const System::Int8 IEOP_OPENING = System::Int8(0x45);
static const System::Int8 IEOP_PAINTMARK = System::Int8(0x46);
static const System::Int8 IEOP_PASTEFROMCLIPBOARD = System::Int8(0x47);
static const System::Int8 IEOP_PERSPECTIVEDRAW = System::Int8(0x48);
static const System::Int8 IEOP_POINTPASTEFROMCLIP = System::Int8(0x49);
static const System::Int8 IEOP_PROJECTDRAW = System::Int8(0x4a);
static const System::Int8 IEOP_RADIALSTRETCH = System::Int8(0x4b);
static const System::Int8 IEOP_RANDOM = System::Int8(0x4c);
static const System::Int8 IEOP_REFLECTION = System::Int8(0x4d);
static const System::Int8 IEOP_REMOVECHROMAKEY = System::Int8(0x4e);
static const System::Int8 IEOP_REMOVEISOLATEDPIXELS = System::Int8(0x4f);
static const System::Int8 IEOP_REMOVENOISE = System::Int8(0x50);
static const System::Int8 IEOP_REMOVEREDEYES = System::Int8(0x51);
static const System::Int8 IEOP_RESAMPLE = System::Int8(0x52);
static const System::Int8 IEOP_RESIZE = System::Int8(0x53);
static const System::Int8 IEOP_ROTATE = System::Int8(0x54);
static const System::Int8 IEOP_ROTATEANDCROP = System::Int8(0x55);
static const System::Int8 IEOP_ROUNDIMAGE = System::Int8(0x56);
static const System::Int8 IEOP_SELCUTTOCLIP = System::Int8(0x57);
static const System::Int8 IEOP_SELPASTEFROMCLIP = System::Int8(0x58);
static const System::Int8 IEOP_SELPASTEFROMCLIPSTRETCH = System::Int8(0x59);
static const System::Int8 IEOP_SETTRANSPARENTCOLORS = System::Int8(0x5a);
static const System::Int8 IEOP_SHARPEN = System::Int8(0x5b);
static const System::Int8 IEOP_SHIFTCHANNEL = System::Int8(0x5c);
static const System::Int8 IEOP_TEXTOUT = System::Int8(0x5d);
static const System::Int8 IEOP_THRESHOLD = System::Int8(0x5e);
static const System::Int8 IEOP_THRESHOLD2 = System::Int8(0x5f);
static const System::Int8 IEOP_UNSHARPMASK = System::Int8(0x64);
static const System::Int8 IEOP_WALLISFILTER = System::Int8(0x65);
static const System::Int8 IEOP_WAVE = System::Int8(0x66);
static const System::Int8 IEOP_WHITEBALANCE_AUTOWHITE = System::Int8(0x67);
static const System::Int8 IEOP_WHITEBALANCE_COEF = System::Int8(0x68);
static const System::Int8 IEOP_WHITEBALANCE_GRAYWORLD = System::Int8(0x69);
static const System::Int8 IEOP_WHITEBALANCE_WHITEAT = System::Int8(0x6a);
static const System::Int8 IEOP_WRITEHIDDENDATA = System::Int8(0x6b);
static const System::Int8 IEOP_SYMMETRICNEARESTNEIGHBOUR = System::Int8(0x6c);
static const System::Int8 IEOP_PIXELIZE = System::Int8(0x6d);
static const System::Int8 IEOP_PENCILSKETCH = System::Int8(0x6e);
static const System::Int8 IEOP_CUTTOCLIPBOARD = System::Int8(0x6f);
static const System::Int8 IEOP_CUTLAYERTOCLIPBOARD = System::Int8(0x70);
static const System::Int8 IEOP_PASTELAYERFROMCLIPBOARD = System::Int8(0x71);
static const System::Int8 IEOP_ADDIMAGELAYER = System::Int8(0x72);
static const System::Int8 IEOP_ADDSHAPELAYER = System::Int8(0x73);
static const System::Int8 IEOP_ADDLINELAYER = System::Int8(0x74);
static const System::Int8 IEOP_ADDPOLYLINELAYER = System::Int8(0x75);
static const System::Int8 IEOP_ADDTEXTLAYER = System::Int8(0x76);
static const System::Int8 IEOP_MOVELAYER = System::Int8(0x77);
static const System::Int8 IEOP_RESIZELAYER = System::Int8(0x78);
static const System::Int8 IEOP_ROTATELAYER = System::Int8(0x79);
static const System::Int8 IEOP_REMOVELAYER = System::Int8(0x7a);
static const System::Int8 IEOP_MERGELAYERS = System::Int8(0x7b);
static const System::Int8 IEOP_ARRANGELAYERS = System::Int8(0x7c);
static const System::Int8 IEOP_LAYERPROPS = System::Int8(0x7d);
static const System::Int8 IEOP_CLONEBRUSH = System::Int8(0x7e);
static const System::Int8 IEOP_PAINTBRUSH = System::Int8(0x7f);
static const System::Byte IEOP_ERASER = System::Byte(0x80);
static const System::Byte IEOP_EDITLINEPOINTS = System::Byte(0x81);
static const System::Byte IEOP_CONVERTLAYER = System::Byte(0x82);
static const System::Byte IEOP_SELDELETE = System::Byte(0x83);
static const System::Byte IEOP_ADDANGLELAYER = System::Byte(0x84);
static const System::Byte IEOP_SETFROMRGBALL = System::Byte(0x85);
static const System::Byte IEOP_RETOUCH = System::Byte(0x86);
static const System::Byte IEOP_ADJUSTLEVELS = System::Byte(0x87);
static const System::Word IEOP_MEASURE = System::Word(0x320);
static const System::Word IEOP_LINKHOVER = System::Word(0x321);
static const System::Word IEOP_BUTTONHOVER = System::Word(0x384);
static const System::Word IEOP_OTHER = System::Word(0x3e7);
#define IPP_DIALOGWIDTH L"DIALOGWIDTH"
#define IPP_DIALOGHEIGHT L"DIALOGHEIGHT"
#define IPP_CONTRAST_CONTRAST L"CONTRAST_CONTRAST"
#define IPP_CONTRAST_BRIGHTNESS L"CONTRAST_BRIGHTNESS"
#define IPP_HSV_H L"HSV_H"
#define IPP_HSV_S L"HSV_S"
#define IPP_HSV_V L"HSV_V"
#define IPP_HSL_H L"HSL_H"
#define IPP_HSL_S L"HSL_S"
#define IPP_HSL_L L"HSL_L"
#define IPP_RGB_R L"RGB_R"
#define IPP_RGB_G L"RGB_G"
#define IPP_RGB_B L"RGB_B"
#define IPP_USERFILTER_VALUES_PREFIX L"USERFILTER_VALUES"
#define IPP_USERFILTER_VALUES00 L"USERFILTER_VALUES00"
#define IPP_USERFILTER_VALUES01 L"USERFILTER_VALUES01"
#define IPP_USERFILTER_VALUES02 L"USERFILTER_VALUES02"
#define IPP_USERFILTER_VALUES10 L"USERFILTER_VALUES10"
#define IPP_USERFILTER_VALUES11 L"USERFILTER_VALUES11"
#define IPP_USERFILTER_VALUES12 L"USERFILTER_VALUES12"
#define IPP_USERFILTER_VALUES20 L"USERFILTER_VALUES20"
#define IPP_USERFILTER_VALUES21 L"USERFILTER_VALUES21"
#define IPP_USERFILTER_VALUES22 L"USERFILTER_VALUES22"
#define IPP_USERFILTER_DIVISOR L"USERFILTER_DIVISOR"
#define IPP_EQUALIZATION_THRESHOLDDOWN L"EQUALIZATION_THRESHOLDDOWN"
#define IPP_EQUALIZATION_THRESHOLDUP L"EQUALIZATION_THRESHOLDUP"
#define IPP_EQUALIZATION_EQDOWN L"EQUALIZATION_EQDOWN"
#define IPP_EQUALIZATION_EQUP L"EQUALIZATION_EQUP"
#define IPP_EQUALIZATION_EQUALIZEBUTTON L"EQUALIZATION_EQUALIZEBUTTON"
#define IPP_EQUALIZATION_GRAY L"EQUALIZATION_GRAY"
#define IPP_EQUALIZATION_BLUE L"EQUALIZATION_BLUE"
#define IPP_EQUALIZATION_GREEN L"EQUALIZATION_GREEN"
#define IPP_EQUALIZATION_RED L"EQUALIZATION_RED"
#define IPP_BUMPMAP_LEFT L"BUMPMAP_LEFT"
#define IPP_BUMPMAP_TOP L"BUMPMAP_TOP"
#define IPP_BUMPMAP_WIDTH L"BUMPMAP_WIDTH"
#define IPP_BUMPMAP_HEIGHT L"BUMPMAP_HEIGHT"
#define IPP_BUMPMAP_COL L"BUMPMAP_COL"
#define IPP_BUMPMAP_SRC L"BUMPMAP_SRC"
#define IPP_BUMPMAP_AUTO L"BUMPMAP_AUTO"
#define IPP_LENS_LEFT L"LENS_LEFT"
#define IPP_LENS_TOP L"LENS_TOP"
#define IPP_LENS_WIDTH L"LENS_WIDTH"
#define IPP_LENS_HEIGHT L"LENS_HEIGHT"
#define IPP_LENS_REF L"LENS_REF"
#define IPP_LENS_AUTO L"LENS_AUTO"
#define IPP_WAVE_AMPLITUDE L"WAVE_AMPLITUDE"
#define IPP_WAVE_WAVELENGTH L"WAVE_WAVELENGTH"
#define IPP_WAVE_PHASE L"WAVE_PHASE"
#define IPP_WAVE_REFLECT L"WAVE_REFLECT"
#define IPP_MORPH_FILTER L"MORPH_FILTER"
#define IPP_MORPH_WINSIZE L"MORPH_WINSIZE"
#define IPP_ROTATE_ANGLE L"ROTATE_ANGLE"
#define IPP_FLIP_HORZ L"FLIP_HORZ"
#define IPP_FLIP_VERT L"FLIP_VERT"
#define IPP_GAMMACORRECTION_RED L"GAMMACORRECTION_RED"
#define IPP_GAMMACORRECTION_GREEN L"GAMMACORRECTION_GREEN"
#define IPP_GAMMACORRECTION_BLUE L"GAMMACORRECTION_BLUE"
#define IPP_GAMMACORRECTION_VALUE L"GAMMACORRECTION_VALUE"
#define IPP_SHARPEN_SHARPEN L"SHARPEN_SHARPEN"
#define IPP_SHARPEN_SIZE L"SHARPEN_SIZE"
#define IPP_FFT_LEFT L"FFT_LEFT"
#define IPP_FFT_TOP L"FFT_TOP"
#define IPP_FFT_RIGHT L"FFT_RIGHT"
#define IPP_FFT_BOTTOM L"FFT_BOTTOM"
#define IPP_FFT_GRAYSCALE L"FFT_GRAYSCALE"
#define IPP_RESIZE_HEIGHTPERCENT L"RESIZE_HEIGHTPERCENT"
#define IPP_RESIZE_MAINTAINAR L"RESIZE_MAINTAINAR"
#define IPP_RESIZE_QUALITYFILTER L"RESIZE_QUALITYFILTER"
#define IPP_RESIZE_WIDTHPERCENT L"RESIZE_WIDTHPERCENT"
#define IPP_SHADOW_COLOR L"SHADOW_COLOR"
#define IPP_SHADOW_POSITION L"SHADOW_POSITION"
#define IPP_SHADOW_RADIUS L"SHADOW_RADIUS"
#define IPP_SHADOW_OFFSET L"SHADOW_OFFSET"
#define IPP_COLORCURVE_POINTS L"IPP_COLORCURVE_POINTS"
#define IPP_COLORCURVE_CHANNEL L"IPP_COLORCURVE_CHANNEL"
#define IPP_Levels_Shadow L"LEVELS_SHADOW"
#define IPP_Levels_MidTone L"LEVELS_MIDTONE"
#define IPP_Levels_Highlight L"LEVELS_HIGHLIGHT"
#define IPP_Levels_OutShadow L"LEVELS_OUTSHADOW"
#define IPP_Levels_OutHighlight L"LEVELS_OUTHIGHLIGHT"
static const System::Int8 IPP_Property_Count = System::Int8(0x4e);
extern DELPHI_PACKAGE Imageenproc__8 IPP_Property_List;
extern DELPHI_PACKAGE void __fastcall IEConvolve(Iexbitmaps::TIEBitmap* bitmap, double *kernel, const int kernel_High, int kernelWidth, int kernelHeight, double factor, int x1, int y1, int x2, int y2, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE Hyiedefs::TRGB __fastcall IEAverageRGB(Iexbitmaps::TIEBitmap* bitmap, Iexbitmaps::TIEMask* mask, int x1, int y1, int x2, int y2);
extern DELPHI_PACKAGE Hyiedefs::TRGB __fastcall IEAverageRGB_Sample(Iexbitmaps::TIEBitmap* Bitmap, Iexbitmaps::TIEMask* mask, int X1, int Y1, int X2, int Y2, /* out */ int &iHueVariance, int iSampleCount = 0x64, bool Elliptical = false);
extern DELPHI_PACKAGE void __fastcall IEGetAverageValues(Iexbitmaps::TIEBitmap* bitmap, Iexbitmaps::TIEMask* mask, int x1, int y1, int x2, int y2, Hyiedefs::TIEArrayOfDouble &avg)/* overload */;
extern DELPHI_PACKAGE void __fastcall IEGetStandardDeviation(Iexbitmaps::TIEBitmap* bitmap, Iexbitmaps::TIEMask* mask, int x1, int y1, int x2, int y2, Hyiedefs::TIEArrayOfDouble &stddev)/* overload */;
extern DELPHI_PACKAGE double __fastcall IEGetStandardDeviation(Iexbitmaps::TIEBitmap* bitmap, Iexbitmaps::TIEMask* mask, int x1, int y1, int x2, int y2)/* overload */;
extern DELPHI_PACKAGE void __fastcall _ApplyFilter(Iexbitmaps::TIEBitmap* bitmap, const TGraphFilter &filter, int fSelx1, int fSely1, int fSelx2, int fSely2, Hyiedefs::TProgressRec &Progress);
extern DELPHI_PACKAGE void __fastcall _HSLvar(Iexbitmaps::TIEBitmap* bitmap, int oHue, int oSat, int oLum, int fSelx1, int fSely1, int fSelx2, int fSely2, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE void __fastcall _HSVvar(Iexbitmaps::TIEBitmap* bitmap, int oHue, int oSat, int oVal, int fSelx1, int fSely1, int fSelx2, int fSely2, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE void __fastcall _Rot90oEx(Iexbitmaps::TIEBitmap* bakbmp, Iexbitmaps::TIEBitmap* newbitmap);
extern DELPHI_PACKAGE void __fastcall _Rot90oEx8(Iexbitmaps::TIEBitmap* bakbmp, Iexbitmaps::TIEBitmap* newbitmap);
extern DELPHI_PACKAGE void __fastcall _Rot90Ex(Iexbitmaps::TIEBitmap* bakbmp, Iexbitmaps::TIEBitmap* newbitmap);
extern DELPHI_PACKAGE void __fastcall _Rot90Ex8(Iexbitmaps::TIEBitmap* bakbmp, Iexbitmaps::TIEBitmap* newbitmap);
extern DELPHI_PACKAGE TGraphFilter __fastcall LoadFilterFromFile(const System::UnicodeString FileName);
extern DELPHI_PACKAGE void __fastcall SaveFilterToFile(const System::UnicodeString FileName, const TGraphFilter &filt);
extern DELPHI_PACKAGE void __fastcall _ContrastRGB(Iexbitmaps::TIEBitmap* bitmap, double vv, int mR, int mG, int mB, int fSelx1, int fSely1, int fSelx2, int fSely2, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE void __fastcall _Merge(Iexbitmaps::TIEBitmap* DestBitmap, Iexbitmaps::TIEBitmap* SrcBitmap, int pcf, int fSelx1, int fSely1, int fSelx2, int fSely2, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE void __fastcall _CastColorRange(Iexbitmaps::TIEBitmap* bitmap, Hyiedefs::TRGB BeginColor, Hyiedefs::TRGB EndColor, Hyiedefs::TRGB CastColor, int fSelx1, int fSely1, int fSelx2, int fSely2, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE void __fastcall IEApplyThreshold(Iexbitmaps::TIEBitmap* bitmap, Hyiedefs::TRGB DownLimit, Hyiedefs::TRGB UpLimit, Hyiedefs::TRGB DownVal, Hyiedefs::TRGB UpVal, int fSelx1, int fSely1, int fSelx2, int fSely2, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE void __fastcall _HistAutoEqualize(Iexbitmaps::TIEBitmap* bitmap, int fSelx1, int fSely1, int fSelx2, int fSely2, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE void __fastcall IEHistEqualize(Iexbitmaps::TIEBitmap* bitmap, Hyiedefs::TRGB LoThresh, Hyiedefs::TRGB HiThresh, int fSelx1, int fSely1, int fSelx2, int fSely2, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE void __fastcall IEAdjustLevels(Iexbitmaps::TIEBitmap* bitmap, int Shadow, int MidTone, int Highlight, int OutShadow, int OutHighlight, int fSelx1, int fSely1, int fSelx2, int fSely2, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE void __fastcall _IESetAlpha0Color(Iexbitmaps::TIEBitmap* bitmap, Hyiedefs::TRGB cl);
extern DELPHI_PACKAGE void __fastcall _IEAdjustResampleDimensions(int &iTargetWidth, int &iTargetHeight, int iBitmapWidth, int iBitmapHeight, bool bMaintainAspectRatio);
extern DELPHI_PACKAGE void __fastcall _IEResampleIEBitmap(Iexbitmaps::TIEBitmap* source, Iexbitmaps::TIEBitmap* dest, Hyiedefs::TResampleFilter FilterType, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE void __fastcall _IEResampleIEBitmap2(Iexbitmaps::TIEBitmap* sourceANDdest, Hyiedefs::TResampleFilter FilterType, int NewWidth, int NewHeight, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE void __fastcall _GetMediaContrastRGB(Iexbitmaps::TIEBitmap* bitmap, int &mR, int &mG, int &mB);
extern DELPHI_PACKAGE TIEHistogram __fastcall IEGetHistogram(Iexbitmaps::TIEBitmap* Bitmap, int fSelx1, int fSely1, int fSelx2, int fSely2, Iexbitmaps::TIEMask* mask, TIEHistogramContent content);
extern DELPHI_PACKAGE int __fastcall IEGetImageNumColors(Iexbitmaps::TIEBitmap* bitmap, int x1, int y1, int x2, int y2);
extern DELPHI_PACKAGE Iexbitmaps::TIEBitmap* __fastcall _ConvertTo1bitEx(Iexbitmaps::TIEBitmap* Bitmap, Hyiedefs::TRGB &BackCol, Hyiedefs::TRGB &ForeCol);
extern DELPHI_PACKAGE bool __fastcall _CopyBitmaptoClipboardEx(Iexbitmaps::TIEBitmap* Source, bool InitClipboard, bool IncludeImageEnFormat, bool IncludePNGFormat, int X1, int Y1, int X2, int Y2, Hyiedefs::PPointArray SelPoly, int SelPolyCount, Iexbitmaps::TIEMask* Mask, System::Uitypes::TColor FillColor, int DpiX, int DpiY);
extern DELPHI_PACKAGE void __fastcall IEIntensityRGBAll(Iexbitmaps::TIEBitmap* bitmap, int r, int g, int b, int fSelx1, int fSely1, int fSelx2, int fSely2, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE Iexbitmaps::TIEBitmap* __fastcall _GetHSVChannel(Iexbitmaps::TIEBitmap* bitmap, int ch, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE Iexbitmaps::TIEBitmap* __fastcall _GetRGBChannel(Iexbitmaps::TIEBitmap* bitmap, int ch, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE void __fastcall _GetHSVChannelAll(Iexbitmaps::TIEBitmap* bitmap, Iexbitmaps::TIEBitmap* BitmapH, Iexbitmaps::TIEBitmap* BitmapS, Iexbitmaps::TIEBitmap* BitmapV, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE void __fastcall _GetRGBChannelAll(Iexbitmaps::TIEBitmap* bitmap, Iexbitmaps::TIEBitmap* BitmapR, Iexbitmaps::TIEBitmap* BitmapG, Iexbitmaps::TIEBitmap* BitmapB, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE void __fastcall _SetFromRGBChannels(Iexbitmaps::TIEBitmap* DestBitmap, Iexbitmaps::TIEBitmap* BitmapR, Iexbitmaps::TIEBitmap* BitmapG, Iexbitmaps::TIEBitmap* BitmapB, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE Iexbitmaps::TIEBitmap* __fastcall _GetCMYKChannel(Iexbitmaps::TIEBitmap* bitmap, int ch, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE void __fastcall _GetCMYKChannelAll(Iexbitmaps::TIEBitmap* bitmap, Iexbitmaps::TIEBitmap* BitmapC, Iexbitmaps::TIEBitmap* BitmapM, Iexbitmaps::TIEBitmap* BitmapY, Iexbitmaps::TIEBitmap* BitmapK, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE int __fastcall _RGBToGray(const Hyiedefs::TRGB rgb);
extern DELPHI_PACKAGE int __fastcall _GetSimilColor(const Hyiedefs::TRGB *ColorMap, const int ColorMap_High, int nc, Hyiedefs::TRGB Col);
extern DELPHI_PACKAGE Vcl::Graphics::TBitmap* __fastcall IECloneBitmap(Vcl::Graphics::TBitmap* Source);
extern DELPHI_PACKAGE void __fastcall IECopyBitmap(Vcl::Graphics::TBitmap* Source, Vcl::Graphics::TBitmap* Dest);
extern DELPHI_PACKAGE NativeUInt __fastcall _CopyBitmaptoDIBEx(Iexbitmaps::TIEBaseBitmap* fBitmap, int x1, int y1, int x2, int y2, int dpix, int dpiy);
extern DELPHI_PACKAGE void __fastcall IECopyBits_large(System::PByte Dest, System::PByte Source, int DestStart, int SourceStart, int Len, int SourceRowLen);
extern DELPHI_PACKAGE void __fastcall IECopyBits_small(System::PByte Dest, System::PByte Source, int DestStart, int SourceStart, int Len, int SourceRowLen);
extern DELPHI_PACKAGE void __fastcall _CopyBitmapRect(Vcl::Graphics::TBitmap* Source, Vcl::Graphics::TBitmap* Dest, int x1, int y1, int x2, int y2);
extern DELPHI_PACKAGE void __fastcall _NegativeBuffer(System::PByte buf, int WidthBytes);
extern DELPHI_PACKAGE void __fastcall _Negative1BitEx(Iexbitmaps::TIEBitmap* Bitmap);
extern DELPHI_PACKAGE void __fastcall IENegative(Iexbitmaps::TIEBitmap* bitmap, int fSelx1, int fSely1, int fSelx2, int fSely2, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE void __fastcall _FlipEx(Iexbitmaps::TIEBitmap* bmp, Hyiedefs::TFlipDir dir);
extern DELPHI_PACKAGE bool __fastcall _BitmapCompareX(Vcl::Graphics::TBitmap* Bitmap1, Vcl::Graphics::TBitmap* Bitmap2);
extern DELPHI_PACKAGE bool __fastcall _BitmapCompareXEx(Iexbitmaps::TIEBitmap* Bitmap1, Iexbitmaps::TIEBitmap* Bitmap2);
extern DELPHI_PACKAGE void __fastcall _ClearSelMaskEx(Iexbitmaps::TIEBitmap* fIEBitmap, Iexbitmaps::TIEMask* mask, System::Uitypes::TColor Background);
extern DELPHI_PACKAGE int __fastcall _IECopyDIB2Bitmap2Ex(NativeUInt hbi, Iexbitmaps::TIEDibbitmap* fBitmap, System::PByte xbits, bool unlck);
extern DELPHI_PACKAGE void __fastcall _ConvertToEx(Iexbitmaps::TIEBitmap* Bitmap, int NumColors, Hyiedefs::PRGBROW OutPalette, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE void __fastcall IEColorFloydSteinberg(Iexbitmaps::TIEBitmap* srcBitmap, Iexbitmaps::TIEBitmap* dstBitmap, int colorCount);
extern DELPHI_PACKAGE void __fastcall _ConvertToBWOrdered(Iexbitmaps::TIEBitmap* bitmap, Hyiedefs::TProgressRec &Progress);
extern DELPHI_PACKAGE void __fastcall _ConvertToBWThreshold(Iexbitmaps::TIEBitmap* bitmap, int Threshold, Hyiedefs::TProgressRec &Progress);
extern DELPHI_PACKAGE Hyiedefs::PRGB __fastcall IEConvRowToRGB(Iexbitmaps::TIEBitmap* bitmap, int row, Hyiedefs::PRGB dest, bool alwaysFillDest);
extern DELPHI_PACKAGE void __fastcall _Conv1to24(Vcl::Graphics::TBitmap* &SrcBitmap, Vcl::Graphics::TBitmap* &DstBitmap, Hyiedefs::TProgressRec &Progress);
extern DELPHI_PACKAGE void __fastcall _Conv1to24Ex(Iexbitmaps::TIEBitmap* &SrcBitmap, Iexbitmaps::TIEBitmap* &DstBitmap, Hyiedefs::TProgressRec &Progress);
extern DELPHI_PACKAGE void __fastcall IEConvertToGray(Iexbitmaps::TIEBitmap* bitmap, int fSelx1, int fSely1, int fSelx2, int fSely2, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE void __fastcall _BumpMapping(Iexbitmaps::TIEBitmap* Bitmap, int LightX, int LightY, int LAmpX, int LAmpY, int pcf, Hyiedefs::TRGB Color, int fselx1, int fsely1, int fselx2, int fsely2, Hyiedefs::TProgressRec &Progress);
extern DELPHI_PACKAGE void __fastcall _RotateEx(Iexbitmaps::TIEBitmap* fBitmap, double fangle, bool antialias, Hyiedefs::TRGB Background, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE void __fastcall _RotateEx8(Iexbitmaps::TIEBitmap* fBitmap, double fangle, bool antialias, int Background, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE void __fastcall _lens(Iexbitmaps::TIEBitmap* Bitmap, int xx, int yy, int width, int height, double refraction, Hyiedefs::TProgressRec &Progress);
extern DELPHI_PACKAGE int __fastcall _GetPixelbw(System::PByte row, int pix);
extern DELPHI_PACKAGE void __fastcall _SetPixelbw(System::PByte row, int pix, int vv);
extern DELPHI_PACKAGE void __fastcall _Rotate1bitEx(Iexbitmaps::TIEBitmap* fBitmap, double angle, int background, Hyiedefs::TProgressRec &Progress);
extern DELPHI_PACKAGE void __fastcall _Rotate1bit(Vcl::Graphics::TBitmap* fBitmap, double angle, int background, Hyiedefs::TProgressRec &Progress);
extern DELPHI_PACKAGE void __fastcall _Rotate8bit(Iexbitmaps::TIEBitmap* fBitmap, double angle, int background);
extern DELPHI_PACKAGE void __fastcall IEWave(Iexbitmaps::TIEBitmap* Bitmap, int amplitude, int wavelength, int phase, bool reflective, Hyiedefs::TProgressRec &Progress);
extern DELPHI_PACKAGE void __fastcall _CopyIYU1ToBitmap(System::PByte xbits, Iexbitmaps::TIEBaseBitmap* fBitmap, bool dirc);
extern DELPHI_PACKAGE void __fastcall _CopyIYU2ToBitmap(System::PByte xbits, Iexbitmaps::TIEBaseBitmap* fBitmap, bool dirc);
extern DELPHI_PACKAGE void __fastcall _CopyUYVYToBitmap(System::PByte xbits, Iexbitmaps::TIEBaseBitmap* fBitmap, bool dirc);
extern DELPHI_PACKAGE void __fastcall _CopyYVYUToBitmap(System::PByte xbits, Iexbitmaps::TIEBaseBitmap* fBitmap, bool dirc);
extern DELPHI_PACKAGE void __fastcall _CopyY41PToBitmap(System::PByte xbits, Iexbitmaps::TIEBaseBitmap* fBitmap, bool dirc);
extern DELPHI_PACKAGE void __fastcall _CopyY211ToBitmap(System::PByte xbits, Iexbitmaps::TIEBaseBitmap* fBitmap, bool dirc);
extern DELPHI_PACKAGE void __fastcall _CopyCLJRToBitmap(System::PByte xbits, Iexbitmaps::TIEBaseBitmap* fBitmap, bool dirc);
extern DELPHI_PACKAGE void __fastcall _CopyYVU9ToBitmap(System::PByte xbits, Iexbitmaps::TIEBaseBitmap* fBitmap, bool dirc);
extern DELPHI_PACKAGE void __fastcall _CopyYV12ToBitmap(System::PByte xbits, Iexbitmaps::TIEBaseBitmap* fBitmap, bool dirc);
extern DELPHI_PACKAGE void __fastcall _CopyI420ToBitmap(System::PByte xbits, Iexbitmaps::TIEBaseBitmap* fBitmap, bool dirc);
extern DELPHI_PACKAGE void __fastcall _CopyYUY2ToBitmap(System::PByte xbits, Iexbitmaps::TIEBaseBitmap* fBitmap, bool dirc);
extern DELPHI_PACKAGE void __fastcall _CopyNV12ToBitmap(System::PByte xbits, Iexbitmaps::TIEBaseBitmap* fBitmap, bool dirc, int stride = 0x0);
extern DELPHI_PACKAGE int __fastcall _CopyDIB2Bitmap(NativeUInt hbi, Vcl::Graphics::TBitmap* fBitmap, System::PByte xbits, bool unlck);
extern DELPHI_PACKAGE int __fastcall _CopyDIB2BitmapEx(NativeUInt hbi, Iexbitmaps::TIEBaseBitmap* fBitmap, System::PByte xbits, bool unlck);
extern DELPHI_PACKAGE void __fastcall IEDIBGamma(NativeUInt hbi, double gamma);
extern DELPHI_PACKAGE void __fastcall _CopyPolygonToPoint(Vcl::Graphics::TBitmap* Source, Hyiedefs::PPointArray Polygon, int PolygonLen, Vcl::Graphics::TBitmap* Dest, const System::Types::TPoint &Position);
extern DELPHI_PACKAGE void __fastcall _CopyPointToPolygon(Vcl::Graphics::TBitmap* Source, Hyiedefs::PPointArray Polygon, int PolygonLen, Vcl::Graphics::TBitmap* Dest, const System::Types::TPoint &Position);
extern DELPHI_PACKAGE void __fastcall _CopyBGR_RGB(Hyiedefs::PRGB dst, Hyiedefs::PRGB src, int width);
extern DELPHI_PACKAGE void __fastcall _CopyBGR_RGB48(Hyiedefs::PRGB48 dst, Hyiedefs::PRGB48 src, int width);
extern DELPHI_PACKAGE void __fastcall _BGR2RGB(Hyiedefs::PRGB buff, int width);
extern DELPHI_PACKAGE void __fastcall _BGR2RGB48(Hyiedefs::PRGB48 buff, int width);
extern DELPHI_PACKAGE void __fastcall _RGB2BGR(Hyiedefs::TRGB *ColorMap, const int ColorMap_High, int nc);
extern DELPHI_PACKAGE void __fastcall IEMorphFilter(Iexbitmaps::TIEBitmap* bitmap, int WindowSize, int op, int fSelx1, int fSely1, int fSelx2, int fSely2, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE void __fastcall IEMorphFilter_ie24RGB(Iexbitmaps::TIEBitmap* bitmap, int WindowSize, int op, int fSelx1, int fSely1, int fSelx2, int fSely2, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE void __fastcall IEMorphFilter_ie1g(Iexbitmaps::TIEBitmap* bitmap, int WindowSize, int op, int fSelx1, int fSely1, int fSelx2, int fSely2, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE void __fastcall IEmorph1bit(Iexbitmaps::TIEBitmap* Bitmap, int nIter, int opType, int size, bool invertFlag, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE Hyiedefs::TIEArrayOfTPoint __fastcall IEMakeMagicWandPoints(Iexbitmaps::TIEBitmap* fBitmap, int x, int y, bool maxfilter, int tolerance, int SampleSize = 0x1);
extern DELPHI_PACKAGE void __fastcall _MakeMagicWandPointsEx(Iexbitmaps::TIEBitmap* fBitmap, int x, int y, bool maxfilter, int tolerance, Iexbitmaps::TIEMask* mask, int selintensity, int SampleSize = 0x1);
extern DELPHI_PACKAGE void __fastcall _MakeMagicWandPointsEx2(Iexbitmaps::TIEBitmap* fBitmap, int x, int y, int tolerance, Iexbitmaps::TIEMask* mask, int selintensity, int SampleSize = 0x1);
extern DELPHI_PACKAGE void __fastcall _IEBmpStretch(Vcl::Graphics::TBitmap* origBmp, Vcl::Graphics::TBitmap* destBmp);
extern DELPHI_PACKAGE void __fastcall _IEBmpStretchEx(Iexbitmaps::TIEBaseBitmap* origBmp, Iexbitmaps::TIEBaseBitmap* destBmp, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE int __fastcall _ConvertXBitsToYBits(Hyiedefs::TBYTEROW &Input, Hyiedefs::TBYTEROW &Output, System::Word Xbits, System::Word Ybits, System::Word Width, Hyiedefs::TRGB *Palette, const int Palette_High, System::TObject* Quantizer);
extern DELPHI_PACKAGE void __fastcall _CopyPolygonBitmap(Vcl::Graphics::TBitmap* Dest, Vcl::Graphics::TBitmap* Source, int x1, int y1, Hyiedefs::PPointArray SelPoly, int SelPolyCount);
extern DELPHI_PACKAGE void __fastcall _Resampleie8g(Iexbitmaps::TIEBitmap* Src, Iexbitmaps::TIEBitmap* Dst, Hyiedefs::TResampleFilter FilterType, System::Types::PRect OutROI = (System::Types::PRect)(0x0));
extern DELPHI_PACKAGE void __fastcall _Resample1bitEx(Iexbitmaps::TIEBitmap* Src, Iexbitmaps::TIEBitmap* Dst, Hyiedefs::TResampleFilter FilterType);
extern DELPHI_PACKAGE void __fastcall _ResampleEx(Iexbitmaps::TIEBaseBitmap* SrcImg, Iexbitmaps::TIEBaseBitmap* DstImg, Iexbitmaps::TIEBitmap* SrcAlpha, Hyiedefs::TResampleFilter FilterType, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender, System::Types::PRect OutROI = (System::Types::PRect)(0x0));
extern DELPHI_PACKAGE void __fastcall _IEEdgeDetect_ShenCastan(Iexbitmaps::TIEBitmap* SrcBitmap, Iexbitmaps::TIEBitmap* DstBitmap, double Ratio, double Smooth, int WindowSize, int ThinFactor, bool DoHysteresis, Hyiedefs::TProgressRec &Progress);
extern DELPHI_PACKAGE double __fastcall _iehough(Iexbitmaps::TIEBitmap* image, Hyiedefs::TProgressRec &Progress, int anglerange, double Precision);
extern DELPHI_PACKAGE double __fastcall _IESkewDetection(Iexbitmaps::TIEBitmap* Bitmap, int ResampleWidth, int AngleRange, double Precision, bool EdgeDetect, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE void __fastcall _Fill(Iexbitmaps::TIEBitmap* bitmap, int fSelx1, int fSely1, int fSelx2, int fSely2, Hyiedefs::TRGB FillColor, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE void __fastcall _ResampleLinearEx(Iexbitmaps::TIEBaseBitmap* Src, Iexbitmaps::TIEBaseBitmap* Dst, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender, System::Types::PRect OutROI = (System::Types::PRect)(0x0));
extern DELPHI_PACKAGE void __fastcall _ResampleProject1Bit(Iexbitmaps::TIEBaseBitmap* OrigBmp, Iexbitmaps::TIEBaseBitmap* DestBmp, bool Negative, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE void __fastcall _ResampleProject24Bit(Iexbitmaps::TIEBaseBitmap* OrigBmp, Iexbitmaps::TIEBaseBitmap* DestBmp, bool Negative, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE void __fastcall _ResampleLinear1BitEx(Iexbitmaps::TIEBitmap* Src, Iexbitmaps::TIEBitmap* Dst, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE void __fastcall _ResampleLinear8g(Iexbitmaps::TIEBitmap* Src, Iexbitmaps::TIEBitmap* Dst, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender, System::Types::PRect OutROI = (System::Types::PRect)(0x0));
extern DELPHI_PACKAGE void __fastcall _ResampleLinear16g(Iexbitmaps::TIEBitmap* Src, Iexbitmaps::TIEBitmap* Dst, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE void __fastcall _SubResample1bitFilteredEx(Iexbitmaps::TIEBaseBitmap* src, int sx1, int sy1, int sx2, int sy2, Iexbitmaps::TIEBitmap* dst);
extern DELPHI_PACKAGE void __fastcall _CalcDensityHistogram(Iexbitmaps::TIEBitmap* bitmap, int fSelx1, int fSely1, int fSelx2, int fSely2, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender, Hyiedefs::pIntegerArray VertHist, Hyiedefs::pIntegerArray HorizHist, int norm_vert, int norm_horiz);
extern DELPHI_PACKAGE void __fastcall IERemoveIsolatedPixels1Bit(Iexbitmaps::TIEBitmap* bitmap, int fSelx1, int fSely1, int fSelx2, int fSely2, bool NoiseColor, int IsolationMax, bool CheckDiagonals, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE void __fastcall _kf_kfill(Iexbitmaps::TIEBitmap* bitmap, bool RetainConnectivity, bool RetainEndpoints, int MaxIterations, int WindowSize, bool InvertImage);
extern DELPHI_PACKAGE void __fastcall _IEComputeDiff(Iexbitmaps::TIEBitmap* x, Iexbitmaps::TIEBitmap* y, double &psnr_min, double &psnr_max, double &mse_min, double &mse_max, double &rmse_min, double &rmse_max, double &pae_min, double &pae_max, double &mae_min, double &mae_max, bool &equal);
extern DELPHI_PACKAGE double __fastcall IECompareImages(Iexbitmaps::TIEBitmap* image1, Iexbitmaps::TIEBitmap* image2, Iexbitmaps::TIEBitmap* diffmap);
extern DELPHI_PACKAGE void __fastcall _IEGammaCorrect_RGB8(Iexbitmaps::TIEBitmap* ABitmap, double AGamma, TIEChannels AChannel, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE void __fastcall _IEGetHistogram(Iexbitmaps::TIEBitmap* Bitmap, Hyiedefs::pIntegerArray hist);
extern DELPHI_PACKAGE void __fastcall _ConvertToBWThresholdEx(Iexbitmaps::TIEBitmap* origbitmap, Iexbitmaps::TIEBitmap* destbitmap, int Threshold, Hyiedefs::TProgressRec &Progress);
extern DELPHI_PACKAGE void __fastcall IEGBlur(Iexbitmaps::TIEBitmap* Bitmap, double radius, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE void __fastcall IEGBlurRect8(Iexbitmaps::TIEBitmap* Bitmap, int x1, int y1, int x2, int y2, double radius);
extern DELPHI_PACKAGE int __fastcall IESoftShadowSize(double Radius, int OffSetX, int OffSetY);
extern DELPHI_PACKAGE void __fastcall _IEAddSoftShadow(Iexbitmaps::TIEBitmap* bitmap, double radius, int OffSetX, int OffSetY, int Intensity, bool AdaptBitmap, Hyiedefs::TRGB ShadowColor, int BGAlphaThreshold, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE void __fastcall _IEAddInnerShadow(Iexbitmaps::TIEBitmap* bitmap, double radius, int OffSetX, int OffSetY, Hyiedefs::TRGB ShadowColor, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE int __fastcall _IEAddSoftShadowRect(Iexbitmaps::TIEBitmap* bitmap, double radius, int OffSetX, int OffSetY, int Intensity, Hyiedefs::TRGB ShadowColor, int x1, int y1, int x2, int y2);
extern DELPHI_PACKAGE void __fastcall IEQRotate(Iexbitmaps::TIEBitmap* src, double angle, System::Uitypes::TColor Background, Hyiedefs::TIEAntialiasMode Filter, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE void __fastcall IEQRotateTo(Iexbitmaps::TIEBitmap* src, Iexbitmaps::TIEBitmap* dst, double angle, System::Uitypes::TColor Background, Hyiedefs::TIEAntialiasMode Filter, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE void __fastcall IEQRotateTo24(Iexbitmaps::TIEBitmap* src, Iexbitmaps::TIEBitmap* dst, double angle, System::Uitypes::TColor Background, Hyiedefs::TIEAntialiasMode Filter, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE void __fastcall IEQRotate8(Iexbitmaps::TIEBitmap* src, double angle, int Background, Hyiedefs::TIEAntialiasMode Filter);
extern DELPHI_PACKAGE void __fastcall IEQRotateTo8(Iexbitmaps::TIEBitmap* src, Iexbitmaps::TIEBitmap* dst, double angle, int Background, Hyiedefs::TIEAntialiasMode Filter);
extern DELPHI_PACKAGE void __fastcall IEGRotate(Iexbitmaps::TIEBitmap* src, double angle, System::Uitypes::TColor Background, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE void __fastcall IEGRotateTo(Iexbitmaps::TIEBitmap* src, Iexbitmaps::TIEBitmap* dst, double angle, System::Uitypes::TColor Background, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE void __fastcall _IEQResampleBytes(Iexbitmaps::TIEBaseBitmap* SrcImg, Iexbitmaps::TIEBaseBitmap* DstImg, Iexbitmaps::TIEBitmap* SrcAlpha, int filter, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE void __fastcall _IEQResampleWords(Iexbitmaps::TIEBaseBitmap* SrcImg, Iexbitmaps::TIEBaseBitmap* DstImg, int filter, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE double __fastcall IEGuessChromaKeyTolerance(Iexbitmaps::TIEBitmap* Bitmap, Iexbitmaps::TIEMask* mask, Hyiedefs::TRGB KeyColorRGB, int x1, int y1, int x2, int y2);
extern DELPHI_PACKAGE void __fastcall IEGuessChromaKeyColor(Iexbitmaps::TIEBitmap* Bitmap, /* out */ Hyiedefs::TRGB &KeyColor, bool bGetTolerance, /* out */ double &Tolerance);
extern DELPHI_PACKAGE void __fastcall IEFeatherAlphaEdges(Iexbitmaps::TIEBitmap* bmp, const System::Types::TRect &aRect, int FeatherDepth, bool SmoothEffect = true);
extern DELPHI_PACKAGE void __fastcall IERemoveChromaKey(Iexbitmaps::TIEBitmap* Bitmap, Iexbitmaps::TIEMask* SelMask, Hyiedefs::TRGB KeyColorRGB, double Tolerance, int Saturation, int FeatherEdges, int HueReduction = 0x0, bool RemoveNoise = false, int SelIntensity = 0xff, bool InvertSel = false, Hyiedefs::TIEProgressEvent OnProgress = 0x0, System::TObject* Sender = (System::TObject*)(0x0));
extern DELPHI_PACKAGE void __fastcall IERemoveChromaKey_Sel(Iexbitmaps::TIEBitmap* Bitmap, const System::Types::TRect &aRect, bool Elliptical, Hyiedefs::TRGB KeyColorRGB, double Tolerance, int Saturation, int FeatherEdges = 0x0, int AlphaValue = 0x0);
extern DELPHI_PACKAGE void __fastcall _SetTransparentColors(Iexbitmaps::TIEBitmap* bitmap, int fSelx1, int fSely1, int fSelx2, int fSely2, Hyiedefs::TRGB MinColor, Hyiedefs::TRGB MaxColor, int alpha, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE void __fastcall _IEMedianFilter(Iexbitmaps::TIEBitmap* image, int WindowX, int WindowY, int Brightness, int Contrast, int Multiplier, int Threshold, TIEMedFilType MedianOp, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE void __fastcall _IEWallisFilter(Iexbitmaps::TIEBitmap* image, int WinWidth, int WinHeight, int Mean, int StDev, int InGain, int Edge, int Limit, bool Thresholding, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE int __fastcall _IECalcVertOrientationFitness(Iexbitmaps::TIEBitmap* bitmap);
extern DELPHI_PACKAGE double __fastcall _IESkewDetectionFine(Iexbitmaps::TIEBitmap* Bitmap, double StartingAngle, double resolution, int range, bool maxQuality, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE void __fastcall IESharpen(Iexbitmaps::TIEBitmap* bitmap, int fSelx1, int fSely1, int fSelx2, int fSely2, int Intensity, int Neighbourhood, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE void __fastcall IEUnsharpMask(Iexbitmaps::TIEBitmap* Bitmap, int fSelx1, int fSely1, int fSelx2, int fSely2, double Radius, double Amount, double Threshold, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE void __fastcall _IERemoveRedEyes(Iexbitmaps::TIEBitmap* bitmap, int fSelx1, int fSely1, int fSelx2, int fSely2, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE void __fastcall IEFields_warp(Iexbitmaps::TIEBitmap* source, Hyiedefs::PIELineArray asource_lines, Hyiedefs::PIELineArray adest_lines, int num_lines, int num_frames, System::Classes::TList* outimages);
extern DELPHI_PACKAGE int __fastcall IEAddNewFilter(const TGraphFilter &filter, const System::UnicodeString name);
extern DELPHI_PACKAGE PIEGraphFilter __fastcall IEGetFilter(int index);
extern DELPHI_PACKAGE System::UnicodeString __fastcall IEGetFilterName(int index);
extern DELPHI_PACKAGE int __fastcall IEGetFiltersCount(void);
extern DELPHI_PACKAGE void __fastcall _IERoundImage(Iexbitmaps::TIEBitmap* ProcBitmap, int RoundWidth, int RoundHeight, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* self);
extern DELPHI_PACKAGE void __fastcall _IERadialStretch(Iexbitmaps::TIEBitmap* bitmap, double ARed, double BRed, double CRed, double DRed, double AGreen, double BGreen, double CGreen, double DGreen, double ABlue, double BBlue, double CBlue, double DBlue, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE void __fastcall _IEfsdither(Iexbitmaps::TIEBitmap* bitmap, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE void __fastcall IECrop(Iexbitmaps::TIEBitmap* Bitmap, const System::Types::TRect &Rectangle, double Rotation, Hyiedefs::TIEAntialiasMode AntialiasMode);
extern DELPHI_PACKAGE void __fastcall IEPerspectiveCrop(Iexbitmaps::TIEBitmap* Bitmap, Hyiedefs::TDPoint *quad, const int quad_High);
extern DELPHI_PACKAGE void __fastcall IEAutoCrop(Iexbitmaps::TIEBitmap* Bitmap, int Tolerance, Hyiedefs::TRGB Background, int &x1, int &y1, int &x2, int &y2);
extern DELPHI_PACKAGE System::Types::TRect __fastcall IEAutoCrop2(Iexbitmaps::TIEBitmap* bitmap, double BorderRate);
extern DELPHI_PACKAGE void __fastcall IEGetLuminosityDiff(Iexbitmaps::TIEBitmap* image1, Iexbitmaps::TIEBitmap* image2, int &Red, int &Green, int &Blue);
extern DELPHI_PACKAGE void __fastcall IEAdjustColors(Iexbitmaps::TIEBitmap* templateimage, Iexbitmaps::TIEBitmap* targetimage);
extern DELPHI_PACKAGE void __fastcall IEApplyCoefficients(Iexbitmaps::TIEBitmap* bitmap, double *coeff, const int coeff_High, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE void __fastcall IEGetAverageValues(Iexbitmaps::TIEBitmap* bitmap, Hyiedefs::TIEArrayOfDouble &avg)/* overload */;
extern DELPHI_PACKAGE void __fastcall IEWhiteBalance_grayworld(Iexbitmaps::TIEBitmap* bitmap, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE void __fastcall IEWhiteBalance_2(Iexbitmaps::TIEBitmap* bitmap, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE void __fastcall IEWhiteBalance_3(Iexbitmaps::TIEBitmap* bitmap, int white_x, int white_y, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE void __fastcall IEAdjustGainOffset(Iexbitmaps::TIEBitmap* bitmap, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE void __fastcall IECastColor(Iexbitmaps::TIEBitmap* Bitmap, int BmpX, int BmpY, Hyiedefs::TRGB newColor, int tolerance, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender, int SampleSize = 0x1, bool MaxFilter = false);
extern DELPHI_PACKAGE void __fastcall IECastAlpha(Iexbitmaps::TIEBitmap* Bitmap, int BmpX, int BmpY, int newAlpha, int tolerance, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender, int SampleSize = 0x1, bool MaxFilter = false);
extern DELPHI_PACKAGE void __fastcall IEPatternSearch(Iexbitmaps::TIEBitmap* InputBitmap, Iexbitmaps::TIEBitmap* pattern, System::Types::TRect &FoundRect, double precision, int scaleSteps);
extern DELPHI_PACKAGE void __fastcall IELLLUT(Iexbitmaps::TIEBitmap* SubOriginal, Iexbitmaps::TIEBitmap* SubFiltered, Iexbitmaps::TIEBitmap* Bitmap, int Neighbour, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender, int ProgressOffset, double ProgressMultiplier);
extern DELPHI_PACKAGE void __fastcall IEACE(Iexbitmaps::TIEBitmap* OrigBitmap, int subwidth, int Slope, int Cut, int Neighbour, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE void __fastcall IEAutoSharp(Iexbitmaps::TIEBitmap* bitmap, int Intensity, double rate, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE void __fastcall IERetinex(Iexbitmaps::TIEBitmap* bitmap, int ScaleCount, int ScaleCurve, float Variance, int ScaleHigh, bool Luma, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE void __fastcall IEShift(Iexbitmaps::TIEBitmap* Bitmap, int offsetx, int offsety, int channel, int FillValue, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE void __fastcall IEChangeYCbCrCoefficients(Iexbitmaps::TIEBitmap* Bitmap, double srcLumaRed, double srcLumaGreen, double srcLumaBlue, double dstLumaRed, double dstLumaGreen, double dstLumaBlue);
extern DELPHI_PACKAGE void __fastcall IEAdjustSaturation(Iexbitmaps::TIEBitmap* Src, int Amount, const Hyiedefs::TProgressRec &pr);
extern DELPHI_PACKAGE void __fastcall IEAdjustTint(Iexbitmaps::TIEBitmap* Src, int Amount, bool UseFixedColor, Hyiedefs::TRGB FixedColorStart, Hyiedefs::TRGB FixedColorEnd, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE void __fastcall IEAdjustBrightnessContrastSaturation(Iexbitmaps::TIEBitmap* Bitmap, int b, int c, int s, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE void __fastcall IEContrast2(Iexbitmaps::TIEBitmap* src, float z, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE void __fastcall IEAutoSBHist(Iexbitmaps::TIEBitmap* src, float z1, float z2, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE void __fastcall IEDisposeChannels(Iexbitmaps::TIEBitmap* Bitmap, System::UnicodeString newDispo, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE System::Classes::TList* __fastcall IEVectorize(Iexbitmaps::TIEMask* bitmap, int x1, int y1, int x2, int y2, int SCALE = 0x4);
extern DELPHI_PACKAGE System::Classes::TList* __fastcall IESeparateObjects(Iexbitmaps::TIEBitmap* Bitmap, bool MergeCommonAreas, int Quality, bool UseBackgroundColor, Hyiedefs::TRGB BackgroundColorBegin, Hyiedefs::TRGB BackgroundColorEnd);
extern DELPHI_PACKAGE void __fastcall IESobel(Iexbitmaps::TIEBitmap* bitmap, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE void __fastcall IELuminanceEnhancement(Iexbitmaps::TIEBitmap* Bitmap, double Gamma, int Saturation, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE System::Types::TRect __fastcall IEGetVisibleArea(Iexbitmaps::TIEBitmap* Bitmap, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE void __fastcall IETEAEncipher64(Iefft::pdwordarray v, Iefft::pdwordarray w, Iefft::pdwordarray k);
extern DELPHI_PACKAGE void __fastcall IETEADecipher64(Iefft::pdwordarray v, Iefft::pdwordarray w, Iefft::pdwordarray k);
extern DELPHI_PACKAGE void __fastcall IEEncipherBitmap_TEA(Iexbitmaps::TIEBitmap* Bitmap, Iefft::pdwordarray key, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE void __fastcall IEDecipherBitmap_TEA(Iexbitmaps::TIEBitmap* Bitmap, Iefft::pdwordarray key, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE System::UnicodeString __fastcall IEGraphFilterToString(const TGraphFilter &filter);
extern DELPHI_PACKAGE void __fastcall IELocalBinarize(Iexbitmaps::TIEBitmap* InBitmap, Iexbitmaps::TIEBitmap* OutBitmap, int WinSize, TIEThreshMode Mode, int Offset, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE double __fastcall IECompareHistograms(TIEHistogram h1, TIEHistogram h2, TIECmpMode Mode, int channel);
extern DELPHI_PACKAGE double __fastcall IECompareImagesHistogram(Iexbitmaps::TIEBitmap* bitmap1, Iexbitmaps::TIEBitmap* bitmap2, TIECmpMode Mode, bool GrayScale);
extern DELPHI_PACKAGE void __fastcall IEReflectionEffect(Iexbitmaps::TIEBitmap* bitmap, int minAlpha, int maxAlpha, int percentage, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE void __fastcall IEPerspectiveTransform(Iexbitmaps::TIEBitmap* SrcBitmap, Iexbitmaps::TIEBitmap* DstBitmap, int xx0, int yy0, int xx1, int yy1, int xx2, int yy2, int xx3, int yy3, int alphaMin = 0xffffffff, int alphaMax = 0xffffffff, bool mergeAlpha = false, int alpha = 0xff);
extern DELPHI_PACKAGE void __fastcall IEProjectBitmap1(Iexbitmaps::TIEBitmap* Bitmap, Iexbitmaps::TIEBitmap* DstBitmap, int centerDstX, int centerDstY, int destWidth, int destHeight, int translateX, int translateY, double depth, double rotateX, double rotateY, int specularAlphaMin, int specularAlphaMax, Hyiedefs::TIEQuadCoords &outCoords, TIEProjectBitmapOp op, bool mergeAlpha, int alpha);
extern DELPHI_PACKAGE void __fastcall IEProjectBitmap2(Iexbitmaps::TIEBitmap* Bitmap, Iexbitmaps::TIEBitmap* DstBitmap, int centerDstX, int centerDstY, int dstWidth, int dstHeight, int translateX, int translateY, double depth, double rotateX, double rotateY, int specularAlphaMin, int specularAlphaMax, Hyiedefs::TIEQuadCoords &outCoords, TIEProjectBitmapOp op, bool mergeAlpha, int alpha);
extern DELPHI_PACKAGE void __fastcall IEAdjustTemperature(Iexbitmaps::TIEBitmap* bitmap, int x1, int y1, int x2, int y2, int temperature, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE void __fastcall IEMotionBlur(Iexbitmaps::TIEBitmap* bitmap, double angle, int radius, int sigma, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE void __fastcall IERandom(Iexbitmaps::TIEBitmap* bitmap, double mean, double stdDev, int x1, int y1, int x2, int y2, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE void __fastcall IEMapGrayToColor(Iexbitmaps::TIEBitmap* Bitmap, Hyiedefs::TRGB *map, const int map_High, int x1, int y1, int x2, int y2, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE void __fastcall IESymmetricNearestNeighbourOpt(Iexbitmaps::TIEBitmap* Bitmap, int Radius, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE void __fastcall IEPixelize(Iexbitmaps::TIEBitmap* Bitmap, Iexbitmaps::TIEMask* Mask, int PixelSize, int x1, int y1, int x2, int y2, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
extern DELPHI_PACKAGE void __fastcall IEPencilSketch(Iexbitmaps::TIEBitmap* Bitmap, bool grayScale = true, int levelSteps = 0x2, int maxTextures = 0x7fffffff, int edgeBlurAmount = 0x4, double edgeAmount = 5.000000E-01, double lineThickness = 1.000000E+00, double darkeningFactor = 1.000000E-01, double lineAlpha = 1.000000E-01, double lineDensity = 5.000000E-01, double lightness = 4.000000E+00, bool antialiasedLines = false, Hyiedefs::TIEProgressEvent onProgress = 0x0, System::TObject* sender = (System::TObject*)(0x0));
extern DELPHI_PACKAGE void __fastcall IEInitialize_imageenproc(void);
extern DELPHI_PACKAGE void __fastcall IEFinalize_imageenproc(void);
}	/* namespace Imageenproc */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_IMAGEENPROC)
using namespace Imageenproc;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// ImageenprocHPP
