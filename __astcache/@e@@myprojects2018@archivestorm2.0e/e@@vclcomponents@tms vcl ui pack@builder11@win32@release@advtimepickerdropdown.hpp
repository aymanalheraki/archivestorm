// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AdvTimePickerDropDown.pas' rev: 35.00 (Windows)

#ifndef AdvtimepickerdropdownHPP
#define AdvtimepickerdropdownHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <Winapi.Windows.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Winapi.Messages.hpp>
#include <AdvDropDown.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <System.SysUtils.hpp>
#include <System.Math.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.ComCtrls.hpp>
#include <AdvStyleIF.hpp>
#include <System.Types.hpp>
#include <AdvGDIP.hpp>
#include <Winapi.ActiveX.hpp>
#include <System.UITypes.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.Mask.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ImgList.hpp>

//-- user supplied -----------------------------------------------------------

namespace Advtimepickerdropdown
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TWatchAppearance;
class DELPHICLASS TWatchSettings;
class DELPHICLASS TAdvWatch;
class DELPHICLASS TAdvTimePickerDropDown;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TWatchShape : unsigned char { wsCircle, wsRect, wsRoundRect };

enum DECLSPEC_DENUM TWatchBorderStyle : unsigned char { wbLine, wbDoubleLine, wbNone };

enum DECLSPEC_DENUM THourMarkStyle : unsigned char { hmsLine, hmsQuartDblLine };

enum DECLSPEC_DENUM TTickMarks : unsigned char { tmAll, tmHours, tmQuartHours, tmNone };

enum DECLSPEC_DENUM TPointerStyle : unsigned char { psLine, psShortLine, psPointer, psLineArrow };

enum DECLSPEC_DENUM TAMPMFrame : unsigned char { apRect, apRoundRect };

enum DECLSPEC_DENUM TWatchGradient : unsigned char { wgRadial, wgVertical, wgDiagonalForward, wgDiagonalBackward };

class PASCALIMPLEMENTATION TWatchAppearance : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	int FSize;
	System::Uitypes::TColor FHourPointer;
	System::Uitypes::TColor FBackgroundColor;
	System::Uitypes::TColor FMinutePointerShadow;
	System::Uitypes::TColor FBackgroundColorTo;
	System::Uitypes::TColor FHourPointerShadow;
	System::Uitypes::TColor FSecondPointerShadow;
	System::Uitypes::TColor FSecondPointer;
	System::Uitypes::TColor FBorderColor;
	System::Uitypes::TColor FMinutePointer;
	Vcl::Graphics::TFont* FHourFont;
	Vcl::Graphics::TFont* FAMPMFont;
	System::Classes::TNotifyEvent FOnChange;
	Vcl::Graphics::TPicture* FPicture;
	TAMPMFrame FAMPMFrame;
	TWatchShape FWatchShape;
	TPointerStyle FPointerStyle;
	TWatchBorderStyle FBorderStyle;
	System::Byte FHourPointerSize;
	System::Byte FSecondPointerSize;
	System::Byte FMinutePointerSize;
	System::Uitypes::TColor FHourColor;
	System::Uitypes::TColor FMinuteColor;
	System::Byte FCenterPointSize;
	System::Uitypes::TColor FCenterPointColor;
	System::Uitypes::TColor FCenterPointBorderColor;
	TWatchGradient FBackgroundGradient;
	int FRounding;
	System::Byte FHourMarkLength;
	System::Byte FHourMarkWidth;
	System::Byte FMinuteMarkLength;
	System::Byte FMinuteMarkWidth;
	int FBorderWidth;
	System::Uitypes::TColor FAMPMColor;
	System::Uitypes::TColor FAMPMBorderColor;
	System::Uitypes::TColor FCenterPointOuterBorderColor;
	TTickMarks FTickMarks;
	THourMarkStyle FHourMarkStyle;
	void __fastcall PictureChanged(System::TObject* Sender);
	void __fastcall SetAMPMFont(Vcl::Graphics::TFont* const Value);
	void __fastcall SetBackgroundColor(const System::Uitypes::TColor Value);
	void __fastcall SetBackgroundColorTo(const System::Uitypes::TColor Value);
	void __fastcall SetBorderColor(const System::Uitypes::TColor Value);
	void __fastcall SetHourFont(Vcl::Graphics::TFont* const Value);
	void __fastcall SetHourPointer(const System::Uitypes::TColor Value);
	void __fastcall SetHourPointerShadow(const System::Uitypes::TColor Value);
	void __fastcall SetMinutePointer(const System::Uitypes::TColor Value);
	void __fastcall SetMinutePointerShadow(const System::Uitypes::TColor Value);
	void __fastcall SetPicture(Vcl::Graphics::TPicture* const Value);
	void __fastcall SetSecondPointer(const System::Uitypes::TColor Value);
	void __fastcall SetSecondPointerShadow(const System::Uitypes::TColor Value);
	void __fastcall SetSize(const int Value);
	void __fastcall SetAMPMFrame(const TAMPMFrame Value);
	void __fastcall SetWatchShape(const TWatchShape Value);
	void __fastcall SetBorderStyle(const TWatchBorderStyle Value);
	void __fastcall SetPointerStyle(const TPointerStyle Value);
	void __fastcall SetHourPointerSize(const System::Byte Value);
	void __fastcall SetMinutePointerSize(const System::Byte Value);
	void __fastcall SetSecondPointerSize(const System::Byte Value);
	void __fastcall SetHourColor(const System::Uitypes::TColor Value);
	void __fastcall SetMinuteColor(const System::Uitypes::TColor Value);
	void __fastcall SetCenterPointColor(const System::Uitypes::TColor Value);
	void __fastcall SetCenterPointSize(const System::Byte Value);
	void __fastcall SetCenterPointBorderColor(const System::Uitypes::TColor Value);
	void __fastcall SetBackgroundGradient(const TWatchGradient Value);
	void __fastcall SetRounding(const int Value);
	void __fastcall SetHourMarkLength(const System::Byte Value);
	void __fastcall SetMinuteMarkLength(const System::Byte Value);
	void __fastcall SetHourMarkWidth(const System::Byte Value);
	void __fastcall SetMinuteMarkWidth(const System::Byte Value);
	void __fastcall SetBorderWidth(const int Value);
	void __fastcall SetCenterPointOuterBorderColor(const System::Uitypes::TColor Value);
	void __fastcall SetTickMarks(const TTickMarks Value);
	void __fastcall SetHourMarkStyle(const THourMarkStyle Value);
	
protected:
	void __fastcall Changed();
	void __fastcall InitializeDefault();
	__property int Rounding = {read=FRounding, write=SetRounding, default=5};
	__property TWatchBorderStyle BorderStyle = {read=FBorderStyle, write=SetBorderStyle, nodefault};
	__property System::Uitypes::TColor SecondPointerShadow = {read=FSecondPointerShadow, write=SetSecondPointerShadow, nodefault};
	
public:
	__fastcall TWatchAppearance();
	__fastcall virtual ~TWatchAppearance();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	
__published:
	__property Vcl::Graphics::TFont* AMPMFont = {read=FAMPMFont, write=SetAMPMFont};
	__property System::Uitypes::TColor AMPMBorderColor = {read=FAMPMBorderColor, write=FAMPMBorderColor, default=0};
	__property System::Uitypes::TColor AMPMColor = {read=FAMPMColor, write=FAMPMColor, default=16777215};
	__property TAMPMFrame AMPMFrame = {read=FAMPMFrame, write=SetAMPMFrame, default=0};
	__property System::Uitypes::TColor BorderColor = {read=FBorderColor, write=SetBorderColor, default=0};
	__property int BorderWidth = {read=FBorderWidth, write=SetBorderWidth, default=4};
	__property System::Uitypes::TColor BackgroundColor = {read=FBackgroundColor, write=SetBackgroundColor, default=16777215};
	__property System::Uitypes::TColor BackgroundColorTo = {read=FBackgroundColorTo, write=SetBackgroundColorTo, default=536870911};
	__property TWatchGradient BackgroundGradient = {read=FBackgroundGradient, write=SetBackgroundGradient, default=1};
	__property System::Uitypes::TColor CenterPointBorderColor = {read=FCenterPointBorderColor, write=SetCenterPointBorderColor, default=536870911};
	__property System::Uitypes::TColor CenterPointOuterBorderColor = {read=FCenterPointOuterBorderColor, write=SetCenterPointOuterBorderColor, default=536870911};
	__property System::Uitypes::TColor CenterPointColor = {read=FCenterPointColor, write=SetCenterPointColor, default=0};
	__property System::Byte CenterPointSize = {read=FCenterPointSize, write=SetCenterPointSize, default=4};
	__property Vcl::Graphics::TFont* HourFont = {read=FHourFont, write=SetHourFont};
	__property System::Uitypes::TColor HourColor = {read=FHourColor, write=SetHourColor, default=0};
	__property System::Byte HourMarkLength = {read=FHourMarkLength, write=SetHourMarkLength, default=0};
	__property System::Byte HourMarkWidth = {read=FHourMarkWidth, write=SetHourMarkWidth, default=1};
	__property THourMarkStyle HourMarkStyle = {read=FHourMarkStyle, write=SetHourMarkStyle, default=0};
	__property System::Uitypes::TColor HourPointer = {read=FHourPointer, write=SetHourPointer, nodefault};
	__property System::Uitypes::TColor HourPointerShadow = {read=FHourPointerShadow, write=SetHourPointerShadow, nodefault};
	__property System::Byte HourPointerSize = {read=FHourPointerSize, write=SetHourPointerSize, default=4};
	__property System::Uitypes::TColor MinuteColor = {read=FMinuteColor, write=SetMinuteColor, default=8421504};
	__property System::Uitypes::TColor MinutePointer = {read=FMinutePointer, write=SetMinutePointer, default=0};
	__property System::Uitypes::TColor MinutePointerShadow = {read=FMinutePointerShadow, write=SetMinutePointerShadow, nodefault};
	__property System::Byte MinutePointerSize = {read=FMinutePointerSize, write=SetMinutePointerSize, default=3};
	__property System::Byte MinuteMarkLength = {read=FMinuteMarkLength, write=SetMinuteMarkLength, default=0};
	__property System::Byte MinuteMarkWidth = {read=FMinuteMarkWidth, write=SetMinuteMarkWidth, default=1};
	__property Vcl::Graphics::TPicture* Picture = {read=FPicture, write=SetPicture};
	__property TPointerStyle PointerStyle = {read=FPointerStyle, write=SetPointerStyle, default=0};
	__property System::Uitypes::TColor SecondPointer = {read=FSecondPointer, write=SetSecondPointer, default=255};
	__property System::Byte SecondPointerSize = {read=FSecondPointerSize, write=SetSecondPointerSize, default=1};
	__property TWatchShape Shape = {read=FWatchShape, write=SetWatchShape, default=0};
	__property int Size = {read=FSize, write=SetSize, default=0};
	__property TTickMarks TickMarks = {read=FTickMarks, write=SetTickMarks, default=0};
};


class PASCALIMPLEMENTATION TWatchSettings : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	bool FAuto;
	bool FSeconds;
	int FTimeOffset;
	System::Classes::TNotifyEvent FOnChange;
	void __fastcall SetAuto(const bool Value);
	void __fastcall SetTimeOffset(const int Value);
	void __fastcall SetSeconds(const bool Value);
	
protected:
	void __fastcall Changed();
	
public:
	__fastcall TWatchSettings();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	
__published:
	__property bool Auto = {read=FAuto, write=SetAuto, default=0};
	__property int TimeOffset = {read=FTimeOffset, write=SetTimeOffset, default=0};
	__property bool Second = {read=FSeconds, write=SetSeconds, default=1};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TWatchSettings() { }
	
};


enum DECLSPEC_DENUM TWatchStyle : unsigned char { wsClassic, wsTower, wsFluorescent, wsEmerald, wsBlueStar, wsFuchsia, wsBlack, wsBlackWhite, wsGray, wsSuperNova, wsSports, wsSmooth, wsCustom };

class PASCALIMPLEMENTATION TAdvWatch : public Vcl::Controls::TCustomControl
{
	typedef Vcl::Controls::TCustomControl inherited;
	
private:
	TWatchAppearance* FAppearance;
	TWatchSettings* FSettings;
	System::TDateTime FTime;
	Vcl::Graphics::TBitmap* FBKGCache;
	System::Word FOldHour;
	System::Word FOldMinute;
	System::Word FOldSecond;
	Vcl::Extctrls::TTimer* FWatchTimer;
	bool FAnimation;
	int FAnimationFactor;
	Vcl::Extctrls::TTimer* FAnimationTimer;
	System::Byte FCurrentHourTo;
	System::Byte FCurrentMinuteTo;
	System::Byte FMinuteFrom;
	bool FHourAnimating;
	bool FInternalCall;
	bool FAM;
	bool FShowAMPM;
	bool FShowNumbers;
	System::Classes::TNotifyEvent FOnChange;
	bool FInternalSet;
	TWatchStyle FStyle;
	bool FReadOnly;
	int FResolution;
	MESSAGE void __fastcall WMTimer(Winapi::Messages::TWMTimer &Message);
	MESSAGE void __fastcall WMGetDlgCode(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TWMEraseBkgnd &Message);
	HIDESBASE MESSAGE void __fastcall WMPaint(Winapi::Messages::TWMPaint &Message);
	HIDESBASE MESSAGE void __fastcall WMSetCursor(Winapi::Messages::TWMSetCursor &Message);
	void __fastcall OnAppearanceChanged(System::TObject* Sender);
	void __fastcall OnSettingsChanged(System::TObject* Sender);
	void __fastcall OnWatchTimerTime(System::TObject* Sender);
	void __fastcall OnAnimationTimerTime(System::TObject* Sender);
	void __fastcall SetAppearance(TWatchAppearance* const Value);
	void __fastcall SetSettings(TWatchSettings* const Value);
	void __fastcall SetTime(const System::TDateTime Value);
	void __fastcall SetTimeDirect(System::TDateTime Value);
	void __fastcall SetAnimation(const bool Value);
	void __fastcall SetAnimationFactor(const int Value);
	void __fastcall SetAM(bool Value);
	void __fastcall SetShowAMPM(bool Value);
	void __fastcall SetShowNumbers(bool Value);
	void __fastcall SetStyle(const TWatchStyle Value);
	System::UnicodeString __fastcall GetVersion();
	void __fastcall SetVersion(const System::UnicodeString Value);
	void __fastcall SetResolution(const int Value);
	
protected:
	virtual void __fastcall Paint();
	virtual void __fastcall Loaded();
	DYNAMIC void __fastcall Resize();
	virtual int __fastcall GetVersionNr();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	void __fastcall UpdateCache();
	void __fastcall DrawBackground(Advgdip::TGPGraphics* g, Vcl::Graphics::TCanvas* aCanvas, const System::Types::TRect &R);
	void __fastcall DrawTickMarks(Advgdip::TGPGraphics* g, Vcl::Graphics::TCanvas* aCanvas);
	void __fastcall DrawNumbers(Advgdip::TGPGraphics* g, Vcl::Graphics::TCanvas* aCanvas);
	void __fastcall DrawContent(Advgdip::TGPGraphics* g, Vcl::Graphics::TCanvas* aCanvas);
	void __fastcall DrawAMPM(Advgdip::TGPGraphics* g, Vcl::Graphics::TCanvas* aCanvas);
	void __fastcall DrawNeedles(Advgdip::TGPGraphics* g, Vcl::Graphics::TCanvas* aCanvas);
	void __fastcall RepaintTime();
	double __fastcall GetRadius();
	System::Types::TRect __fastcall GetWatchRect();
	int __fastcall GetWatchBorderWidth();
	System::Types::TRect __fastcall GetInnerRect();
	System::Types::TRect __fastcall GetAMPMRect();
	System::Types::TPoint __fastcall GetCenterPoint();
	System::TDateTime __fastcall GetDisplayTime();
	void __fastcall InvalidateWatch();
	void __fastcall HandleKey(System::WideChar Key);
	__property bool AM = {read=FAM, write=SetAM, nodefault};
	
public:
	__fastcall virtual TAdvWatch(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TAdvWatch();
	void __fastcall SetComponentStyle(Advstyleif::TTMSStyle AStyle);
	void __fastcall SetMinute(System::Byte Value);
	void __fastcall SetHour(System::Byte Value);
	int __fastcall XYToHour(int X, int Y);
	int __fastcall XYToMinute(int X, int Y);
	
__published:
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property bool Animation = {read=FAnimation, write=SetAnimation, default=1};
	__property int AnimationFactor = {read=FAnimationFactor, write=SetAnimationFactor, default=10};
	__property TWatchAppearance* Appearance = {read=FAppearance, write=SetAppearance};
	__property DockSite = {default=0};
	__property DragMode = {default=0};
	__property DragKind = {default=0};
	__property DragCursor = {default=-12};
	__property PopupMenu;
	__property bool ReadOnly = {read=FReadOnly, write=FReadOnly, default=0};
	__property int Resolution = {read=FResolution, write=SetResolution, default=1};
	__property TWatchSettings* Settings = {read=FSettings, write=SetSettings};
	__property System::TDateTime Time = {read=FTime, write=SetTime};
	__property bool ShowAMPM = {read=FShowAMPM, write=SetShowAMPM, default=1};
	__property ShowHint;
	__property bool ShowNumbers = {read=FShowNumbers, write=SetShowNumbers, default=1};
	__property TWatchStyle Style = {read=FStyle, write=SetStyle, default=0};
	__property Visible = {default=1};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property OnAlignInsertBefore;
	__property OnAlignPosition;
	__property OnConstrainedResize;
	__property OnCanResize;
	__property OnClick;
	__property OnContextPopup;
	__property OnDblClick;
	__property OnDockDrop;
	__property OnDockOver;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseLeave;
	__property OnMouseEnter;
	__property OnResize;
	__property OnStartDock;
	__property OnStartDrag;
	__property OnUnDock;
	__property System::UnicodeString Version = {read=GetVersion, write=SetVersion};
public:
	/* TWinControl.CreateParented */ inline __fastcall TAdvWatch(HWND ParentWindow) : Vcl::Controls::TCustomControl(ParentWindow) { }
	
private:
	void *__ITMSStyle;	// Advstyleif::ITMSStyle 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {11AC2DDC-C087-4298-AB6E-EA1B5017511B}
	operator Advstyleif::_di_ITMSStyle()
	{
		Advstyleif::_di_ITMSStyle intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Advstyleif::ITMSStyle*(void) { return (Advstyleif::ITMSStyle*)&__ITMSStyle; }
	#endif
	
};


typedef void __fastcall (__closure *TTimeChangeEvent)(System::TObject* Sender, int Hour, int Min, int Sec);

class PASCALIMPLEMENTATION TAdvTimePickerDropDown : public Advdropdown::TAdvCustomDropDown
{
	typedef Advdropdown::TAdvCustomDropDown inherited;
	
private:
	bool FDesignTime;
	bool FShowTimePicker;
	TAdvWatch* FAdvWatch;
	Vcl::Comctrls::TDateTimePicker* FDateTimePicker;
	Vcl::Extctrls::TPanel* FPanelCtrl;
	TWatchAppearance* FWatchAppearance;
	bool FShowWatchAMPM;
	bool FShowWatchNumbers;
	bool FAnimation;
	int FAnimationFactor;
	System::TDateTime FTime;
	TWatchSettings* FWatchSettings;
	System::Classes::TNotifyEvent FOnTimeChange;
	bool FInternalCall;
	bool FShowSeconds;
	int FResolution;
	Advstyleif::TTMSStyle FTMSStyle;
	void __fastcall OnWatchAppearanceChange(System::TObject* Sender);
	void __fastcall SetWatchAppearance(TWatchAppearance* const Value);
	void __fastcall OnAdvWatchChange(System::TObject* Sender);
	void __fastcall OnDateTimePickerChange(System::TObject* Sender);
	void __fastcall SetTime(const System::TDateTime Value);
	void __fastcall SetWatchSettings(TWatchSettings* const Value);
	void __fastcall OnDateTimePickerKeyDown(System::TObject* Sender, System::Word &Key, System::Classes::TShiftState Shift);
	void __fastcall OnDateTimePickerKeyUp(System::TObject* Sender, System::Word &Key, System::Classes::TShiftState Shift);
	void __fastcall OnDateTimePickerKeyPress(System::TObject* Sender, System::WideChar &Key);
	void __fastcall SetMinute(System::Byte Value);
	void __fastcall SetHour(System::Byte Value);
	void __fastcall SetSecond(System::Byte Value);
	System::UnicodeString __fastcall GetFormattedTimeString(System::Word h, System::Word m, System::Word s);
	void __fastcall SetShowSeconds(const bool Value);
	void __fastcall SetResolutions(const int Value);
	HIDESBASE void __fastcall SetUIStyle(const Advstyleif::TTMSStyle Value);
	
protected:
	virtual void __fastcall CreateDropDownForm();
	virtual void __fastcall BeforeDropDown();
	virtual void __fastcall OnHideDropDown();
	virtual void __fastcall UpdateDropDownSize();
	virtual void __fastcall OnDropDownFormKeyPress(System::WideChar &Key);
	virtual void __fastcall OnDropDownFormKeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall OnDropDownFormKeyUp(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall DoHideDropDown(bool Canceled);
	virtual void __fastcall DoShowDropDown();
	virtual void __fastcall SetText(System::UnicodeString Value);
	DYNAMIC void __fastcall Change();
	DYNAMIC void __fastcall DoEnter();
	DYNAMIC void __fastcall DoExit();
	virtual void __fastcall OnDropDownControlKeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall OnDropDownControlKeyUp(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall OnDropDownControlKeyPress(System::WideChar &Key);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	void __fastcall InitEditMask();
	virtual bool __fastcall Validate(const System::UnicodeString Value, int &Pos);
	virtual void __fastcall CreateWnd();
	
public:
	__fastcall virtual TAdvTimePickerDropDown(System::Classes::TComponent* AOwner);
	virtual void __fastcall SetComponentStyle(Advstyleif::TTMSStyle AStyle);
	__fastcall virtual ~TAdvTimePickerDropDown();
	
__published:
	__property bool Animation = {read=FAnimation, write=FAnimation, default=1};
	__property int AnimationFactor = {read=FAnimationFactor, write=FAnimationFactor, default=10};
	__property TWatchSettings* WatchSettings = {read=FWatchSettings, write=SetWatchSettings};
	__property System::TDateTime Time = {read=FTime, write=SetTime};
	__property bool ShowWatchAMPM = {read=FShowWatchAMPM, write=FShowWatchAMPM, default=1};
	__property bool ShowWatchNumbers = {read=FShowWatchNumbers, write=FShowWatchNumbers, default=1};
	__property bool ShowTimePicker = {read=FShowTimePicker, write=FShowTimePicker, default=0};
	__property TWatchAppearance* WatchAppearance = {read=FWatchAppearance, write=SetWatchAppearance};
	__property bool ShowSeconds = {read=FShowSeconds, write=SetShowSeconds, default=1};
	__property int Resolution = {read=FResolution, write=SetResolutions, default=1};
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property BevelEdges = {default=15};
	__property BevelInner = {index=0, default=2};
	__property BevelKind = {default=0};
	__property BevelOuter = {index=1, default=1};
	__property BevelWidth = {default=1};
	__property BiDiMode;
	__property BorderStyle = {default=1};
	__property Color = {default=-16777211};
	__property Constraints;
	__property Ctl3D;
	__property BorderColor = {default=536870911};
	__property DisabledBorder = {default=1};
	__property FocusBorderColor = {default=536870911};
	__property ImeMode = {default=3};
	__property ImeName = {default=0};
	__property MaxLength = {default=0};
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property Visible = {default=1};
	__property DropDownColor = {default=16777215};
	__property DropDownBorderColor = {default=0};
	__property DropDownBorderWidth = {default=1};
	__property DropDownShadow = {default=1};
	__property DropDownWidth = {default=0};
	__property DropDownHeight = {default=0};
	__property DropPosition = {default=0};
	__property DropDownButtonWidth = {default=17};
	__property DropDownButtonHint = {default=0};
	__property DropDownButtonGlyph;
	__property DropDownSizeable = {default=1};
	__property EditorEnabled = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property Images;
	__property Version = {default=0};
	__property ButtonAppearance;
	__property DropDownHeader;
	__property DropDownFooter;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property LabelCaption = {default=0};
	__property LabelPosition = {default=0};
	__property LabelMargin = {default=4};
	__property LabelTransparent = {default=0};
	__property LabelAlwaysEnabled = {default=0};
	__property LabelFont;
	__property ReturnIsTab = {default=0};
	__property TabStop = {default=1};
	__property TabOrder = {default=-1};
	__property System::Classes::TNotifyEvent OnTimeChange = {read=FOnTimeChange, write=FOnTimeChange};
	__property OnEnter;
	__property OnExit;
	__property OnChange;
	__property OnClick;
	__property OnDblClick;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDrag;
	__property OnBeforeDropDown;
	__property OnDropDown;
	__property OnDropUp;
	__property OnDropDownHeaderButtonClick;
	__property OnDropDownFooterButtonClick;
	__property OnDrawHeader;
	__property OnDrawFooter;
	__property OnGetHeaderText;
	__property OnGetFooterText;
	__property OnGetDropDownPos;
	__property Advstyleif::TTMSStyle UIStyle = {read=FTMSStyle, write=SetUIStyle, default=8};
public:
	/* TWinControl.CreateParented */ inline __fastcall TAdvTimePickerDropDown(HWND ParentWindow) : Advdropdown::TAdvCustomDropDown(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::Int8 MAJ_VER = System::Int8(0x1);
static const System::Int8 MIN_VER = System::Int8(0x3);
static const System::Int8 REL_VER = System::Int8(0x2);
static const System::Int8 BLD_VER = System::Int8(0x1);
}	/* namespace Advtimepickerdropdown */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ADVTIMEPICKERDROPDOWN)
using namespace Advtimepickerdropdown;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AdvtimepickerdropdownHPP
