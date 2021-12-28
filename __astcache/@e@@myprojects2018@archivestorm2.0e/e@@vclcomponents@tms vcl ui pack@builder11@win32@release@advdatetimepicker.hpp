// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AdvDateTimePicker.pas' rev: 35.00 (Windows)

#ifndef AdvdatetimepickerHPP
#define AdvdatetimepickerHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <System.Types.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Winapi.CommCtrl.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <AdvStyleIF.hpp>
#include <AdvToolTip.hpp>
#include <System.UITypes.hpp>
#include <Vcl.Themes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Advdatetimepicker
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TCustomDateTimePicker;
class DELPHICLASS TAdvDateTimePicker;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TAdvDateTimeKind : unsigned char { dkDate, dkTime, dkDateTime };

enum DECLSPEC_DENUM TLabelPosition : unsigned char { lpLeftTop, lpLeftCenter, lpLeftBottom, lpTopLeft, lpBottomLeft, lpLeftTopLeft, lpLeftCenterLeft, lpLeftBottomLeft, lpTopCenter, lpBottomCenter, lpRightTop, lpRightCenter, lpRighBottom, lpTopRight, lpBottomRight };

class PASCALIMPLEMENTATION TCustomDateTimePicker : public Vcl::Comctrls::TDateTimePicker
{
	typedef Vcl::Comctrls::TDateTimePicker inherited;
	
private:
	Vcl::Forms::TFormBorderStyle FBorderStyle;
	System::Uitypes::TColor FBorderColor;
	bool FIsThemed;
	System::Uitypes::TColor FButtonColorDown;
	System::Uitypes::TColor FButtonBorderColor;
	System::Uitypes::TColor FButtonTextColor;
	System::Uitypes::TColor FButtonTextColorHot;
	System::Uitypes::TColor FButtonColor;
	System::Uitypes::TColor FButtonColorHot;
	System::Uitypes::TColor FButtonTextColorDown;
	int FButtonWidth;
	bool FButtonHover;
	bool FMouseInControl;
	bool FIsWinXP;
	bool FMetroStyle;
	System::Uitypes::TColor FFocusBorderColor;
	bool FDisabledBorder;
	bool FHasFocus;
	bool FFocusBorder;
	bool FAutoTab;
	bool FAutoTabToNext;
	System::Word Fh;
	System::Word Fm;
	System::Word Fs;
	System::Word Fms;
	bool FIsTimePicker;
	bool FGridTabhandling;
	System::UnicodeString FLast2Keys;
	System::UnicodeString FLast4Keys;
	MESSAGE void __fastcall WMGetDlgCode(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMKeyDown(Winapi::Messages::TWMKey &Message);
	HIDESBASE MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Message);
	HIDESBASE MESSAGE void __fastcall WMNCPaint(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMPaint(Winapi::Messages::TWMPaint &Message);
	HIDESBASE MESSAGE void __fastcall CMCtl3DChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMEnter(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall CMExit(Winapi::Messages::TWMNoParams &Message);
	void __fastcall NCPaintProc();
	void __fastcall SetBorderColor(const System::Uitypes::TColor Value);
	void __fastcall SetButtonWidth(const int Value);
	void __fastcall SetMetroStyle(const bool Value);
	bool __fastcall Is3DBorderControl();
	void __fastcall DrawControlBorder(HDC DC);
	void __fastcall DrawBorders();
	bool __fastcall GetMetroStyleShowing();
	
protected:
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall CreateWnd();
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall ShiftFocus();
	virtual void __fastcall SetAutoTab(const bool Value);
	virtual void __fastcall SetAutoTabToNext(const bool Value);
	bool __fastcall DoVisualStyles();
	virtual bool __fastcall IsInnerCtrl();
	virtual void __fastcall SetBorderStyle(const Vcl::Forms::TBorderStyle Value);
	__property Vcl::Forms::TBorderStyle BorderStyle = {read=FBorderStyle, write=SetBorderStyle, nodefault};
	__property System::Uitypes::TColor BorderColor = {read=FBorderColor, write=SetBorderColor, default=0};
	__property int ButtonWidth = {read=FButtonWidth, write=SetButtonWidth, default=19};
	__property System::Uitypes::TColor ButtonColor = {read=FButtonColor, write=FButtonColor, default=536870911};
	__property System::Uitypes::TColor ButtonColorHot = {read=FButtonColorHot, write=FButtonColorHot, default=536870911};
	__property System::Uitypes::TColor ButtonColorDown = {read=FButtonColorDown, write=FButtonColorDown, default=536870911};
	__property System::Uitypes::TColor ButtonTextColor = {read=FButtonTextColor, write=FButtonTextColor, default=536870911};
	__property System::Uitypes::TColor ButtonTextColorHot = {read=FButtonTextColorHot, write=FButtonTextColorHot, default=536870911};
	__property System::Uitypes::TColor ButtonTextColorDown = {read=FButtonTextColorDown, write=FButtonTextColorDown, default=536870911};
	__property System::Uitypes::TColor ButtonBorderColor = {read=FButtonBorderColor, write=FButtonBorderColor, default=536870911};
	__property System::Uitypes::TColor FocusBorderColor = {read=FFocusBorderColor, write=FFocusBorderColor, default=536870911};
	__property bool FocusBorder = {read=FFocusBorder, write=FFocusBorder, default=0};
	__property bool DisabledBorder = {read=FDisabledBorder, write=FDisabledBorder, default=1};
	__property bool MetroStyleShowing = {read=GetMetroStyleShowing, nodefault};
	void __fastcall TabToNext();
	__property bool IsTimePicker = {read=FIsTimePicker, write=FIsTimePicker, nodefault};
	__property bool GridTabHandling = {read=FGridTabhandling, write=FGridTabhandling, nodefault};
	
public:
	__fastcall virtual TCustomDateTimePicker(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomDateTimePicker();
	__property bool MetroStyle = {read=FMetroStyle, write=SetMetroStyle, nodefault};
	
__published:
	__property bool AutoTab = {read=FAutoTab, write=SetAutoTab, default=0};
	__property bool AutoTabToNext = {read=FAutoTabToNext, write=SetAutoTabToNext, default=1};
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomDateTimePicker(HWND ParentWindow) : Vcl::Comctrls::TDateTimePicker(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TAdvDateTimePicker : public TCustomDateTimePicker
{
	typedef TCustomDateTimePicker inherited;
	
private:
	TAdvDateTimeKind FKind;
	System::Classes::TNotifyEvent FOnTimeChange;
	Vcl::Extctrls::TTimer* FFocusTimer;
	System::Types::TPoint Fpt;
	System::UnicodeString FTimeFormat;
	System::Word Fy;
	System::Word Fm;
	System::Word Fd;
	Vcl::Stdctrls::TLabel* FLabel;
	Vcl::Graphics::TFont* FLabelFont;
	TLabelPosition FLabelPosition;
	int FLabelMargin;
	bool FLabelTransparent;
	bool FFocusLabel;
	bool FLabelAlwaysEnabled;
	System::Classes::TNotifyEvent FOnLabelClick;
	System::Classes::TNotifyEvent FOnLabelDblClick;
	bool FParentFnt;
	bool FIgnoreTimePickerCheck;
	bool FFirstRun;
	bool FNullDateIsToday;
	bool FLblUpdate;
	int FLblFntHeight;
	System::UnicodeString FNullDateFormat;
	System::TDateTime FNullDateDate;
	System::UnicodeString FOriginalFormat;
	System::UnicodeString FOriginalTimeFormat;
	bool FInternalChangedFlag;
	bool FOldCheck;
	System::TTime FMaxTime;
	System::TTime FMinTime;
	System::Classes::TNotifyEvent FOnCheckClick;
	Advtooltip::TAdvToolTip* FToolTip;
	Advtooltip::TAdvToolTipWindow* FToolTipWindow;
	void __fastcall OnTimePickerChanged(System::TObject* Sender);
	void __fastcall OnTimePickerClicked(System::TObject* Sender);
	HIDESBASE MESSAGE void __fastcall WMKeyUp(Winapi::Messages::TWMKey &Message);
	HIDESBASE MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Message);
	HIDESBASE MESSAGE void __fastcall WMPaint(Winapi::Messages::TWMPaint &Message);
	HIDESBASE MESSAGE void __fastcall WMNCPaint(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Winapi::Messages::TWMSetFocus &Msg);
	HIDESBASE MESSAGE void __fastcall WMKillFocus(Winapi::Messages::TWMKillFocus &Msg);
	HIDESBASE MESSAGE void __fastcall CMColorChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMEnabledChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMParentFontChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMShowingChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMVisibleChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CNNotify(Winapi::Commctrl::TWMNotifyDT &Message);
	HIDESBASE void __fastcall SetKind(const TAdvDateTimeKind Value);
	void __fastcall OnFocusTimerTime(System::TObject* Sender);
	System::TTime __fastcall GetTimeEx();
	void __fastcall SetTimeEx(const System::TTime Value);
	System::TDateTime __fastcall GetDateTimeEx();
	System::UnicodeString __fastcall GetFormatEx();
	void __fastcall SetFormatEx(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetTimeFormat();
	void __fastcall SetTimeFormat(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetVersion();
	void __fastcall SetVersion(const System::UnicodeString Value);
	void __fastcall LabelFontChange(System::TObject* Sender);
	void __fastcall SetLabelFont(Vcl::Graphics::TFont* const Value);
	void __fastcall SetLabelCaption(const System::UnicodeString value);
	System::UnicodeString __fastcall GetLabelCaption();
	void __fastcall SetLabelPosition(const TLabelPosition value);
	void __fastcall SetLabelMargin(const int value);
	void __fastcall SetLabelTransparent(const bool value);
	void __fastcall UpdateLabel();
	void __fastcall UpdateLabelPos();
	void __fastcall SetLabelAlwaysEnabled(const bool Value);
	System::TDate __fastcall GetDateEx();
	void __fastcall SetDateEx(const System::TDate Value);
	bool __fastcall GetTabStopEx();
	void __fastcall SetTabStopEx(const bool Value);
	void __fastcall CheckAndActivateFormat();
	void __fastcall ResetToOriginalDateFormat();
	
protected:
	TCustomDateTimePicker* FTimePicker;
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation AOperation);
	virtual void __fastcall ShiftFocus();
	virtual void __fastcall SetAutoTab(const bool Value);
	virtual void __fastcall SetAutoTabToNext(const bool Value);
	void __fastcall CreateTimePicker();
	void __fastcall UpdateTimePicker();
	virtual void __fastcall Loaded();
	DYNAMIC void __fastcall DoEnter();
	DYNAMIC void __fastcall DoExit();
	virtual void __fastcall DoCheckClicked();
	virtual void __fastcall SetBorderStyle(const Vcl::Forms::TBorderStyle Value);
	virtual void __fastcall CreateWnd();
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	virtual void __fastcall SetParent(Vcl::Controls::TWinControl* AParent);
	DYNAMIC void __fastcall ChangeScale(int M, int D)/* overload */;
	virtual void __fastcall TimePickerChanged();
	virtual void __fastcall TimePickerClicked();
	void __fastcall SetDateTimeInt(const System::TDateTime Value);
	virtual void __fastcall SetDateTimeEx(const System::TDateTime Value);
	virtual void __fastcall TimePickerKeyPress(System::TObject* Sender, System::WideChar &Key);
	void __fastcall TimePickerKeyDown(System::TObject* Sender, System::Word &Key, System::Classes::TShiftState Shift);
	void __fastcall TimePickerExit(System::TObject* Sender);
	Vcl::Stdctrls::TLabel* __fastcall CreateLabel();
	void __fastcall LabelClick(System::TObject* Sender);
	void __fastcall LabelDblClick(System::TObject* Sender);
	virtual bool __fastcall MsgSetDateTime(const _SYSTEMTIME &Value);
	DYNAMIC void __fastcall Change();
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	virtual bool __fastcall IsInnerCtrl();
	
public:
	__fastcall virtual TAdvDateTimePicker(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TAdvDateTimePicker();
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	void __fastcall ShowValidation(const System::UnicodeString AText);
	void __fastcall HideValidation();
	__property BorderColor = {default=0};
	int __fastcall GetVersionNr();
	__property Vcl::Stdctrls::TLabel* PickerLabel = {read=FLabel};
	__property System::Classes::TNotifyEvent OnTimeChange = {read=FOnTimeChange, write=FOnTimeChange};
	__property ButtonColor = {default=536870911};
	__property ButtonColorHot = {default=536870911};
	__property ButtonColorDown = {default=536870911};
	__property ButtonTextColor = {default=536870911};
	__property ButtonTextColorHot = {default=536870911};
	__property ButtonTextColorDown = {default=536870911};
	__property ButtonBorderColor = {default=536870911};
	__property bool NullDateIsToday = {read=FNullDateIsToday, write=FNullDateIsToday, nodefault};
	__property TCustomDateTimePicker* TimePicker = {read=FTimePicker};
	
__published:
	__property BorderStyle;
	__property Ctl3D;
	__property System::TDate Date = {read=GetDateEx, write=SetDateEx};
	__property System::TDateTime DateTime = {read=GetDateTimeEx, write=SetDateTimeEx};
	__property System::UnicodeString Format = {read=GetFormatEx, write=SetFormatEx};
	__property System::TTime MinTime = {read=FMinTime, write=FMinTime};
	__property System::TTime MaxTime = {read=FMaxTime, write=FMaxTime};
	__property TAdvDateTimeKind Kind = {read=FKind, write=SetKind, nodefault};
	__property bool TabStop = {read=GetTabStopEx, write=SetTabStopEx, default=1};
	__property System::TTime Time = {read=GetTimeEx, write=SetTimeEx};
	__property System::UnicodeString TimeFormat = {read=GetTimeFormat, write=SetTimeFormat};
	__property Advtooltip::TAdvToolTip* ToolTip = {read=FToolTip, write=FToolTip};
	__property System::UnicodeString Version = {read=GetVersion, write=SetVersion};
	__property bool FocusLabel = {read=FFocusLabel, write=FFocusLabel, default=0};
	__property System::UnicodeString LabelCaption = {read=GetLabelCaption, write=SetLabelCaption};
	__property TLabelPosition LabelPosition = {read=FLabelPosition, write=SetLabelPosition, default=0};
	__property int LabelMargin = {read=FLabelMargin, write=SetLabelMargin, default=4};
	__property bool LabelTransparent = {read=FLabelTransparent, write=SetLabelTransparent, default=0};
	__property bool LabelAlwaysEnabled = {read=FLabelAlwaysEnabled, write=SetLabelAlwaysEnabled, default=0};
	__property Vcl::Graphics::TFont* LabelFont = {read=FLabelFont, write=SetLabelFont};
	__property System::TDateTime NullDateDate = {read=FNullDateDate, write=FNullDateDate};
	__property System::UnicodeString NullDateFormat = {read=FNullDateFormat, write=FNullDateFormat};
	__property System::Classes::TNotifyEvent OnCheckClick = {read=FOnCheckClick, write=FOnCheckClick};
	__property System::Classes::TNotifyEvent OnLabelClick = {read=FOnLabelClick, write=FOnLabelClick};
	__property System::Classes::TNotifyEvent OnLabelDblClick = {read=FOnLabelDblClick, write=FOnLabelDblClick};
public:
	/* TWinControl.CreateParented */ inline __fastcall TAdvDateTimePicker(HWND ParentWindow) : TCustomDateTimePicker(ParentWindow) { }
	
	/* Hoisted overloads: */
	
protected:
	DYNAMIC inline void __fastcall  ChangeScale(int M, int D, bool isDpiChange){ Vcl::Controls::TWinControl::ChangeScale(M, D, isDpiChange); }
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::Int8 MAJ_VER = System::Int8(0x1);
static const System::Int8 MIN_VER = System::Int8(0x3);
static const System::Int8 REL_VER = System::Int8(0x6);
static const System::Int8 BLD_VER = System::Int8(0x2);
static const System::Int8 DROPDOWNBTN_WIDTH = System::Int8(0x15);
}	/* namespace Advdatetimepicker */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ADVDATETIMEPICKER)
using namespace Advdatetimepicker;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AdvdatetimepickerHPP
