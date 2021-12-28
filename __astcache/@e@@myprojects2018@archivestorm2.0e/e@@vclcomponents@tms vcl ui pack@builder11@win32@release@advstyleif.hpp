// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AdvStyleIF.pas' rev: 35.00 (Windows)

#ifndef AdvstyleifHPP
#define AdvstyleifHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.Win.Registry.hpp>
#include <System.SysUtils.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Themes.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Advstyleif
{
//-- forward type declarations -----------------------------------------------
struct TColorTone;
struct TColorTones;
__interface DELPHIINTERFACE ITMSTones;
typedef System::DelphiInterface<ITMSTones> _di_ITMSTones;
__interface DELPHIINTERFACE ITMSStyle;
typedef System::DelphiInterface<ITMSStyle> _di_ITMSStyle;
__interface DELPHIINTERFACE ITMSStyleEx;
typedef System::DelphiInterface<ITMSStyleEx> _di_ITMSStyleEx;
__interface DELPHIINTERFACE ITMSMetro;
typedef System::DelphiInterface<ITMSMetro> _di_ITMSMetro;
class DELPHICLASS THandleList;
class DELPHICLASS TRegMonitorThread;
class DELPHICLASS TThemeNotifierWindow;
class DELPHICLASS TThemeNotifier;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TWindowsVersion : unsigned char { winxp, win7, win8, win10 };

enum DECLSPEC_DENUM TMetroStyle : unsigned char { msLight, msDark };

enum DECLSPEC_DENUM TTMSStyle : unsigned char { tsOffice2003Blue, tsOffice2003Silver, tsOffice2003Olive, tsOffice2003Classic, tsOffice2007Luna, tsOffice2007Obsidian, tsWindowsXP, tsWhidbey, tsCustom, tsOffice2007Silver, tsWindowsVista, tsWindows7, tsTerminal, tsOffice2010Blue, tsOffice2010Silver, tsOffice2010Black, tsWindows8, tsOffice2013White, tsOffice2013LightGray, tsOffice2013Gray, tsWindows10, tsOffice2016White, tsOffice2016Gray, tsOffice2016Black, tsOffice2019White, tsOffice2019Gray, tsOffice2019Black };

struct DECLSPEC_DRECORD TColorTone
{
public:
	System::Uitypes::TColor BrushColor;
	System::Uitypes::TColor BorderColor;
	System::Uitypes::TColor TextColor;
};


struct DECLSPEC_DRECORD TColorTones
{
public:
	TColorTone Background;
	TColorTone Foreground;
	TColorTone Selected;
	TColorTone Hover;
	TColorTone Disabled;
};


enum DECLSPEC_DENUM XPColorScheme : unsigned char { xpNone, xpBlue, xpGreen, xpGray };

enum DECLSPEC_DENUM TOfficeVersion : unsigned char { ov2003, ov2007, ov2010, ov2013, ov2016 };

enum DECLSPEC_DENUM TOfficeTheme : unsigned char { ot2003Blue, ot2003Silver, ot2003Olive, ot2003Classic, ot2007Blue, ot2007Silver, ot2007Black, ot2010Blue, ot2010Silver, ot2010Black, ot2013White, ot2013Silver, ot2013Gray, ot2016White, ot2016Gray, ot2016Black, ot2019White, ot2019Gray, ot2019Black, otUnknown };

__interface  INTERFACE_UUID("{1F492643-6699-4F25-8B34-3233FA735036}") ITMSTones  : public System::IInterface 
{
	virtual void __fastcall SetColorTones(const TColorTones &ATones) = 0 ;
};

__interface  INTERFACE_UUID("{11AC2DDC-C087-4298-AB6E-EA1B5017511B}") ITMSStyle  : public System::IInterface 
{
	virtual void __fastcall SetComponentStyle(TTMSStyle AStyle) = 0 ;
};

__interface  INTERFACE_UUID("{037BA87F-7CBD-4FDD-854E-2B3F0BCC06AE}") ITMSStyleEx  : public ITMSStyle 
{
	HIDESBASE virtual void __fastcall SetComponentStyle(TTMSStyle AStyle) = 0 ;
	virtual void __fastcall SetComponentStyleAndAppColor(TTMSStyle AStyle, System::Uitypes::TColor AppColor) = 0 ;
};

__interface  INTERFACE_UUID("{A7E8D091-0327-446D-83D6-7069760B3320}") ITMSMetro  : public System::IInterface 
{
	virtual bool __fastcall IsMetro() = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION THandleList : public System::Classes::TList
{
	typedef System::Classes::TList inherited;
	
public:
	int operator[](int index) { return this->Items[index]; }
	
private:
	void __fastcall SetInteger(int Index, int Value);
	int __fastcall GetInteger(int Index);
	
public:
	__fastcall THandleList();
	void __fastcall DeleteValue(int Value);
	bool __fastcall HasValue(int Value);
	__property int Items[int index] = {read=GetInteger, write=SetInteger/*, default*/};
	HIDESBASE void __fastcall Add(int Value);
	HIDESBASE void __fastcall Insert(int Index, int Value);
	HIDESBASE void __fastcall Delete(int Index);
public:
	/* TList.Destroy */ inline __fastcall virtual ~THandleList() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TRegMonitorThread : public System::Classes::TThread
{
	typedef System::Classes::TThread inherited;
	
private:
	System::Win::Registry::TRegistry* FReg;
	NativeUInt FEvent;
	System::UnicodeString FKey;
	HKEY FRootKey;
	bool FWatchSub;
	int FFilter;
	NativeUInt FWnd;
	THandleList* FWinList;
	void __fastcall InitThread();
	void __fastcall SetFilter(const int Value);
	int __fastcall GetFilter();
	
public:
	__fastcall TRegMonitorThread();
	__fastcall virtual ~TRegMonitorThread();
	void __fastcall Stop();
	__property System::UnicodeString Key = {read=FKey, write=FKey};
	__property HKEY RootKey = {read=FRootKey, write=FRootKey, nodefault};
	__property bool WatchSub = {read=FWatchSub, write=FWatchSub, nodefault};
	__property int Filter = {read=GetFilter, write=SetFilter, nodefault};
	__property NativeUInt Wnd = {read=FWnd, write=FWnd, nodefault};
	__property THandleList* WinList = {read=FWinList};
	
protected:
	virtual void __fastcall Execute();
};


class PASCALIMPLEMENTATION TThemeNotifierWindow : public Vcl::Controls::TWinControl
{
	typedef Vcl::Controls::TWinControl inherited;
	
private:
	System::Classes::TNotifyEvent FOnOfficeThemeChange;
	
protected:
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Msg);
	
__published:
	__property System::Classes::TNotifyEvent OnOfficeThemeChange = {read=FOnOfficeThemeChange, write=FOnOfficeThemeChange};
public:
	/* TWinControl.Create */ inline __fastcall virtual TThemeNotifierWindow(System::Classes::TComponent* AOwner) : Vcl::Controls::TWinControl(AOwner) { }
	/* TWinControl.CreateParented */ inline __fastcall TThemeNotifierWindow(HWND ParentWindow) : Vcl::Controls::TWinControl(ParentWindow) { }
	/* TWinControl.Destroy */ inline __fastcall virtual ~TThemeNotifierWindow() { }
	
};


class PASCALIMPLEMENTATION TThemeNotifier : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	TRegMonitorThread* RegMonitorThread;
	TThemeNotifierWindow* FNotifier;
	System::Classes::TNotifyEvent FOnOfficeThemeChange;
	
protected:
	void __fastcall OfficeThemeChanged(System::TObject* Sender);
	
public:
	__fastcall virtual TThemeNotifier(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TThemeNotifier();
	void __fastcall RegisterWindow(NativeUInt Hwnd);
	void __fastcall UnRegisterWindow(NativeUInt Hwnd);
	
__published:
	__property System::Classes::TNotifyEvent OnOfficeThemeChange = {read=FOnOfficeThemeChange, write=FOnOfficeThemeChange};
};


enum DECLSPEC_DENUM TBalloonType : unsigned char { btNone, btInfo, btWarning, btError };

//-- var, const, procedure ---------------------------------------------------
static const System::Word WM_OFFICETHEMECHANGED = System::Word(0xbb1);
extern DELPHI_PACKAGE TThemeNotifier* ThemeNotifierInstance;
extern DELPHI_PACKAGE bool TMSDISABLEWITHCOLORSATURATION;
extern DELPHI_PACKAGE bool __fastcall IsThemedApp(void);
extern DELPHI_PACKAGE bool __fastcall IsVista(void);
extern DELPHI_PACKAGE TOfficeVersion __fastcall GetOfficeVersion(void);
extern DELPHI_PACKAGE bool __fastcall IsWinXP(void);
extern DELPHI_PACKAGE TOfficeTheme __fastcall GetOfficeTheme(void);
extern DELPHI_PACKAGE TTMSStyle __fastcall GetWindowsTheme(void);
extern DELPHI_PACKAGE TWindowsVersion __fastcall GetOSVersion(void);
extern DELPHI_PACKAGE TTMSStyle __fastcall GetUIStyle(bool OnlyOffice = false);
extern DELPHI_PACKAGE TThemeNotifier* __fastcall ThemeNotifier(Vcl::Controls::TWinControl* AParent);
extern DELPHI_PACKAGE System::Uitypes::TColor __fastcall ChangeColor(System::Uitypes::TColor Color, int Perc);
extern DELPHI_PACKAGE TColorTones __fastcall CreateMetroTones(bool Light, System::Uitypes::TColor Color, System::Uitypes::TColor TextColor);
extern DELPHI_PACKAGE TColorTones __fastcall DefaultMetroTones(void);
extern DELPHI_PACKAGE TColorTones __fastcall ClearTones(void);
extern DELPHI_PACKAGE bool __fastcall IsClearTones(const TColorTones &ATones);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetMetroFont(void);
extern DELPHI_PACKAGE System::Uitypes::TColor __fastcall ChangeBrightness(System::Uitypes::TColor Color, int Perc);
extern DELPHI_PACKAGE int __fastcall CalcFontSize(Vcl::Graphics::TCanvas* ACanvas, Vcl::Graphics::TFont* AFont, float DPIScale);
extern DELPHI_PACKAGE float __fastcall CalcDPIScale(Vcl::Graphics::TCanvas* Canvas, Vcl::Forms::TCustomForm* Form = (Vcl::Forms::TCustomForm*)(0x0))/* overload */;
extern DELPHI_PACKAGE float __fastcall CalcDPIScale(HDC FHDC, bool FormScaled)/* overload */;
extern DELPHI_PACKAGE float __fastcall GetDPIScale(Vcl::Controls::TControl* AControl, Vcl::Graphics::TCanvas* ACanvas);
extern DELPHI_PACKAGE TTMSStyle __fastcall GetDefaultStyle(System::Classes::TComponent* AComponent = (System::Classes::TComponent*)(0x0), TTMSStyle InitStyle = (TTMSStyle)(0x18));
extern DELPHI_PACKAGE bool __fastcall SetParentFontForStyle(TTMSStyle AStyle);
extern DELPHI_PACKAGE void __fastcall FillStyleList(System::Classes::TStrings* Items);
extern DELPHI_PACKAGE bool __fastcall CheckVCLStylesEnabled(Vcl::Themes::TCustomStyleServices* AStyleServices, bool ADesigning);
extern DELPHI_PACKAGE TColorTones __fastcall GetVCLStyleTones(void);
}	/* namespace Advstyleif */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ADVSTYLEIF)
using namespace Advstyleif;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AdvstyleifHPP
