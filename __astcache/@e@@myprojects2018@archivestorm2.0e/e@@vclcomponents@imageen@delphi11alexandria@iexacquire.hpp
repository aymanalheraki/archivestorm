// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'iexAcquire.pas' rev: 35.00 (Windows)

#ifndef IexacquireHPP
#define IexacquireHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <System.Classes.hpp>
#include <System.UITypes.hpp>
#include <iexBitmaps.hpp>
#include <ietwain.hpp>
#include <iewia.hpp>
#include <iexDCIM.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.StdCtrls.hpp>
#include <hyiedefs.hpp>

//-- user supplied -----------------------------------------------------------

namespace Iexacquire
{
//-- forward type declarations -----------------------------------------------
struct TIEAcquireSource;
class DELPHICLASS TIEAcquireParams;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TIEAcquireApi : unsigned char { ieaTwain, ieaWIA, ieaDCIM, ieaNone };

typedef System::Set<TIEAcquireApi, TIEAcquireApi::ieaTwain, TIEAcquireApi::ieaNone> TIEAcquireApis;

enum DECLSPEC_DENUM TIEAcquireOrientation : unsigned char { ieaoPortrait, ieaoLandscape, ieaoRotate90, ieaoRotate180 };

enum DECLSPEC_DENUM TIEAcquireRotation : unsigned char { iearNone, iear90CW, iear180CW, iear270CW };

enum DECLSPEC_DENUM TIEAcquirePixelType : unsigned char { ieapMonochrome, ieap8BitGrayScale, ieap16BitGrayScale, ieapFullColor, ieapFullColor16, ieapOther };

enum DECLSPEC_DENUM TIEAcquireDeviceType : unsigned char { ieadUnknown, ieadScanner, ieadCamera, ieadDrive, ieadDevice };

struct DECLSPEC_DRECORD TIEAcquireSource
{
public:
	TIEAcquireApi Api;
	int Location;
	System::AnsiString Name;
	TIEAcquireDeviceType DeviceType;
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEAcquireParams : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Classes::TComponent* fOwner;
	Ietwain::TIETwainParams* fTwainParams;
	Iexdcim::TIEDcimAcquire* fDcimParams;
	bool fDuplex;
	Iewia::TIEWia* fWiaParams;
	bool fWIAVisibleDialog;
	bool fAborting;
	double __fastcall GetXResolution();
	double __fastcall GetYResolution();
	void __fastcall SetXResolution(double v);
	void __fastcall SetYResolution(double v);
	double __fastcall GetContrast();
	void __fastcall SetContrast(double v);
	double __fastcall GetBrightness();
	void __fastcall SetBrightness(double v);
	double __fastcall GetThreshold();
	void __fastcall SetThreshold(double v);
	TIEAcquireRotation __fastcall GetRotation();
	void __fastcall SetRotation(TIEAcquireRotation v);
	TIEAcquirePixelType __fastcall GetPixelType();
	void __fastcall SetPixelType(TIEAcquirePixelType v);
	int __fastcall GetBitDepth();
	void __fastcall SetBitDepth(int v);
	double __fastcall GetPhysicalHeight();
	double __fastcall GetPhysicalWidth();
	int __fastcall GetPhysicalHeightPixels();
	int __fastcall GetPhysicalWidthPixels();
	bool __fastcall GetFeederEnabled();
	bool __fastcall GetAutoFeed();
	TIEAcquireOrientation __fastcall GetOrientation();
	void __fastcall SetOrientation(TIEAcquireOrientation v);
	void __fastcall SetFeederEnabled(bool v);
	void __fastcall SetAutoFeed(bool v);
	double __fastcall GetAcquireFrame(int idx);
	void __fastcall SetAcquireFrame(int idx, double v);
	void __fastcall SetDuplexEnabled(bool v);
	bool __fastcall GetDuplexEnabled();
	void __fastcall SetVisibleDialog(bool v);
	bool __fastcall GetVisibleDialog();
	void __fastcall SetAcquireFrameEnabled(bool v);
	bool __fastcall GetAcquireFrameEnabled();
	bool __fastcall GetFeederLoaded();
	bool __fastcall GetDuplexSupported();
	bool __fastcall GetPaperDetectable();
	TIEAcquireSource __fastcall GetSelectedSource();
	bool __fastcall AcquireEx(bool bMultiple, Iexbitmaps::TIEBitmap* DestBitmap, System::TObject* DestIOParams, Iexbitmaps::TIEMultiCallBack OnGetImage, Hyiedefs::TIEProgressEvent OnProgress, bool NativePixelFormat);
	bool __fastcall WIADevicePropertyHasFlag(unsigned PropId, int Flag);
	void __fastcall WIADevicePropertySetFlag(unsigned PropId, int Flag, bool bSet);
	TIEAcquireSource __fastcall GetTwainSource(int iIndex);
	TIEAcquireSource __fastcall GetDcimSource(int iIndex);
	void __fastcall InitializeWIAParams();
	TIEAcquireSource __fastcall GetWiaSource(int iIndex);
	TIEAcquireApi __fastcall GetSelectedSourceApi();
	bool __fastcall ScannerTreatsBitDepthAsPerChannel();
	Iewia::TIEWia* __fastcall GetWIAParams();
	
public:
	TIEAcquireApi fSelectedSourceApi;
	__fastcall TIEAcquireParams(System::Classes::TComponent* Owner);
	__fastcall virtual ~TIEAcquireParams();
	bool __fastcall Acquire(Iexbitmaps::TIEBitmap* DestBitmap, System::TObject* DestIOParams, Hyiedefs::TIEProgressEvent OnProgress = 0x0, bool NativePixelFormat = false)/* overload */;
	bool __fastcall Acquire(Iexbitmaps::TIEMultiCallBack OnGetImage, Hyiedefs::TIEProgressEvent OnProgress = 0x0, bool NativePixelFormat = false)/* overload */;
	void __fastcall Refresh(TIEAcquireApis Apis = (TIEAcquireApis() << TIEAcquireApi::ieaTwain << TIEAcquireApi::ieaWIA << TIEAcquireApi::ieaDCIM ));
	__property TIEAcquireSource SelectedSource = {read=GetSelectedSource};
	__property TIEAcquireApi SelectedSourceApi = {read=GetSelectedSourceApi, nodefault};
	bool __fastcall SelectSource(TIEAcquireApis Apis = (TIEAcquireApis() << TIEAcquireApi::ieaTwain << TIEAcquireApi::ieaWIA << TIEAcquireApi::ieaDCIM ), int DeviceGlyphHue = 0xfffffc19);
	bool __fastcall SetSource(TIEAcquireApi Api, const System::Variant &Location);
	bool __fastcall SetSourceByStr(const System::UnicodeString sRawDeviceStr);
	__property Ietwain::TIETwainParams* AttachedTwainParams = {read=fTwainParams, write=fTwainParams};
	__property Iexdcim::TIEDcimAcquire* AttachedDCIMParams = {read=fDcimParams, write=fDcimParams};
	__property Iewia::TIEWia* AttachedWIAParams = {read=GetWIAParams, write=fWiaParams};
	void __fastcall FillListWithSources(System::Classes::TStrings* ssDest, TIEAcquireApis Apis = (TIEAcquireApis() << TIEAcquireApi::ieaTwain << TIEAcquireApi::ieaWIA << TIEAcquireApi::ieaDCIM ), bool bNameOnly = false);
	TIEAcquireSource __fastcall FindSourceByName(const System::UnicodeString sName);
	bool __fastcall IsPixelTypeSupported(TIEAcquirePixelType PixelType);
	__property bool Aborting = {read=fAborting, write=fAborting, nodefault};
	__property bool VisibleDialog = {read=GetVisibleDialog, write=SetVisibleDialog, nodefault};
	__property double XResolution = {read=GetXResolution, write=SetXResolution};
	__property double YResolution = {read=GetYResolution, write=SetYResolution};
	__property TIEAcquirePixelType PixelType = {read=GetPixelType, write=SetPixelType, nodefault};
	__property int BitDepth = {read=GetBitDepth, write=SetBitDepth, nodefault};
	__property double PhysicalHeight = {read=GetPhysicalHeight};
	__property double PhysicalWidth = {read=GetPhysicalWidth};
	__property int PhysicalHeightPixels = {read=GetPhysicalHeightPixels, nodefault};
	__property int PhysicalWidthPixels = {read=GetPhysicalWidthPixels, nodefault};
	__property bool FeederEnabled = {read=GetFeederEnabled, write=SetFeederEnabled, nodefault};
	__property bool AutoFeed = {read=GetAutoFeed, write=SetAutoFeed, nodefault};
	__property bool FeederLoaded = {read=GetFeederLoaded, nodefault};
	__property bool PaperDetectable = {read=GetPaperDetectable, nodefault};
	__property TIEAcquireOrientation Orientation = {read=GetOrientation, write=SetOrientation, nodefault};
	__property double AcquireFrameLeft = {read=GetAcquireFrame, write=SetAcquireFrame, index=0};
	__property double AcquireFrameTop = {read=GetAcquireFrame, write=SetAcquireFrame, index=1};
	__property double AcquireFrameRight = {read=GetAcquireFrame, write=SetAcquireFrame, index=2};
	__property double AcquireFrameBottom = {read=GetAcquireFrame, write=SetAcquireFrame, index=3};
	__property bool DuplexEnabled = {read=GetDuplexEnabled, write=SetDuplexEnabled, nodefault};
	__property bool DuplexSupported = {read=GetDuplexSupported, nodefault};
	__property bool AcquireFrameEnabled = {read=GetAcquireFrameEnabled, write=SetAcquireFrameEnabled, nodefault};
	__property double Contrast = {read=GetContrast, write=SetContrast};
	__property double Brightness = {read=GetBrightness, write=SetBrightness};
	__property double Threshold = {read=GetThreshold, write=SetThreshold};
	__property TIEAcquireRotation Rotation = {read=GetRotation, write=SetRotation, nodefault};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const System::Int8 Default_Device = System::Int8(-1);
#define Error_Compiled_Without_WIA_Str L"ImageEn compiled without WIA support"
extern DELPHI_PACKAGE TIEAcquireSource __fastcall IEAcquireSource(TIEAcquireApi Api, int Location, const System::AnsiString sName, TIEAcquireDeviceType DeviceType);
extern DELPHI_PACKAGE System::UnicodeString __fastcall AcquireSourceToStr(const TIEAcquireSource &AcquireSource);
extern DELPHI_PACKAGE TIEAcquireSource __fastcall StrToAcquireSource(const System::UnicodeString sRawDeviceStr);
extern DELPHI_PACKAGE bool __fastcall IsAcquireSourceStr(const System::UnicodeString value);
extern DELPHI_PACKAGE void __fastcall DrawAcquireComboListBoxItem(Vcl::Controls::TWinControl* TheControl, const System::Types::TRect &CanvasRect, const System::UnicodeString sRawDeviceStr, Vcl::Imglist::TCustomImageList* AnImageList = (Vcl::Imglist::TCustomImageList*)(0x0), short iScannerGlyph = (short)(0xffffffff), short iCameraGlyph = (short)(0xffffffff), short iDriveGlyph = (short)(0xffffffff), short iDeviceGlyph = (short)(0xffffffff), short iUnknownGlyph = (short)(0xffffffff));
}	/* namespace Iexacquire */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_IEXACQUIRE)
using namespace Iexacquire;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// IexacquireHPP
