// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'asgspin.pas' rev: 35.00 (Windows)

#ifndef AsgspinHPP
#define AsgspinHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <System.Classes.hpp>
#include <System.Types.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Controls.hpp>
#include <Winapi.Messages.hpp>
#include <System.SysUtils.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.Mask.hpp>
#include <AdvXPVS.hpp>
#include <AdvUtil.hpp>
#include <System.Character.hpp>
#include <System.UITypes.hpp>
#include <System.MaskUtils.hpp>

//-- user supplied -----------------------------------------------------------

namespace Asgspin
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TAsgSpinButton;
class DELPHICLASS TAsgSpinEdit;
class DELPHICLASS TAdvMaskSpinEdit;
class DELPHICLASS TAdvTimerSpeedButton;
//-- type declarations -------------------------------------------------------
using Vcl::Buttons::TNumGlyphs;

enum DECLSPEC_DENUM TEditAlign : unsigned char { eaLeft, eaRight, eaCenter };

enum DECLSPEC_DENUM TSpinDirection : unsigned char { spVertical, spHorizontal };

class PASCALIMPLEMENTATION TAsgSpinButton : public Vcl::Controls::TWinControl
{
	typedef Vcl::Controls::TWinControl inherited;
	
private:
	TAdvTimerSpeedButton* FUpButton;
	TAdvTimerSpeedButton* FDownButton;
	TAdvTimerSpeedButton* FFocusedButton;
	Vcl::Controls::TWinControl* FFocusControl;
	System::Classes::TNotifyEvent FOnUpClick;
	System::Classes::TNotifyEvent FOnDownClick;
	TSpinDirection FDirection;
	bool FIsWinXP;
	System::Uitypes::TColor FButtonColorDown;
	System::Uitypes::TColor FButtonBorderColor;
	System::Uitypes::TColor FButtonTextColor;
	System::Uitypes::TColor FButtonTextColorHot;
	System::Uitypes::TColor FButtonColor;
	System::Uitypes::TColor FButtonColorHot;
	System::Uitypes::TColor FButtonTextColorDown;
	TAdvTimerSpeedButton* __fastcall CreateButton();
	Vcl::Graphics::TBitmap* __fastcall GetUpGlyph();
	Vcl::Graphics::TBitmap* __fastcall GetDownGlyph();
	void __fastcall SetUpGlyph(Vcl::Graphics::TBitmap* Value);
	void __fastcall SetDownGlyph(Vcl::Graphics::TBitmap* Value);
	Vcl::Buttons::TNumGlyphs __fastcall GetUpNumGlyphs();
	Vcl::Buttons::TNumGlyphs __fastcall GetDownNumGlyphs();
	void __fastcall SetUpNumGlyphs(Vcl::Buttons::TNumGlyphs Value);
	void __fastcall SetDownNumGlyphs(Vcl::Buttons::TNumGlyphs Value);
	void __fastcall BtnClick(System::TObject* Sender);
	void __fastcall BtnMouseDown(System::TObject* Sender, System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall SetFocusBtn(TAdvTimerSpeedButton* Btn);
	void __fastcall SetDirection(const TSpinDirection Value);
	HIDESBASE void __fastcall AdjustSize(int &W, int &H);
	HIDESBASE MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Message);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Winapi::Messages::TWMSetFocus &Message);
	HIDESBASE MESSAGE void __fastcall WMKillFocus(Winapi::Messages::TWMKillFocus &Message);
	MESSAGE void __fastcall WMGetDlgCode(Winapi::Messages::TWMNoParams &Message);
	void __fastcall SetIsWinXP(const bool Value);
	
protected:
	virtual void __fastcall Loaded();
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	__property bool IsWinXP = {read=FIsWinXP, write=SetIsWinXP, nodefault};
	
public:
	__fastcall virtual TAsgSpinButton(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TAsgSpinButton();
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	
__published:
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property System::Uitypes::TColor ButtonColor = {read=FButtonColor, write=FButtonColor, default=536870911};
	__property System::Uitypes::TColor ButtonColorHot = {read=FButtonColorHot, write=FButtonColorHot, default=536870911};
	__property System::Uitypes::TColor ButtonColorDown = {read=FButtonColorDown, write=FButtonColorDown, default=536870911};
	__property System::Uitypes::TColor ButtonTextColor = {read=FButtonTextColor, write=FButtonTextColor, default=536870911};
	__property System::Uitypes::TColor ButtonTextColorHot = {read=FButtonTextColorHot, write=FButtonTextColorHot, default=536870911};
	__property System::Uitypes::TColor ButtonTextColorDown = {read=FButtonTextColorDown, write=FButtonTextColorDown, default=536870911};
	__property System::Uitypes::TColor ButtonBorderColor = {read=FButtonBorderColor, write=FButtonBorderColor, default=536870911};
	__property Constraints;
	__property Ctl3D;
	__property TSpinDirection Direction = {read=FDirection, write=SetDirection, nodefault};
	__property Vcl::Graphics::TBitmap* DownGlyph = {read=GetDownGlyph, write=SetDownGlyph};
	__property Vcl::Buttons::TNumGlyphs DownNumGlyphs = {read=GetDownNumGlyphs, write=SetDownNumGlyphs, default=1};
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Vcl::Controls::TWinControl* FocusControl = {read=FFocusControl, write=FFocusControl};
	__property ParentCtl3D = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=0};
	__property Vcl::Graphics::TBitmap* UpGlyph = {read=GetUpGlyph, write=SetUpGlyph};
	__property Vcl::Buttons::TNumGlyphs UpNumGlyphs = {read=GetUpNumGlyphs, write=SetUpNumGlyphs, default=1};
	__property Visible = {default=1};
	__property System::Classes::TNotifyEvent OnDownClick = {read=FOnDownClick, write=FOnDownClick};
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnStartDock;
	__property OnStartDrag;
	__property System::Classes::TNotifyEvent OnUpClick = {read=FOnUpClick, write=FOnUpClick};
public:
	/* TWinControl.CreateParented */ inline __fastcall TAsgSpinButton(HWND ParentWindow) : Vcl::Controls::TWinControl(ParentWindow) { }
	
};


enum DECLSPEC_DENUM TAsgSpinType : unsigned char { sptNormal, sptFloat, sptDate, sptTime };

class PASCALIMPLEMENTATION TAsgSpinEdit : public Vcl::Mask::TCustomMaskEdit
{
	typedef Vcl::Mask::TCustomMaskEdit inherited;
	
private:
	int FMinValue;
	int FMaxValue;
	double FMinFloatValue;
	double FMaxFloatValue;
	System::TDateTime FMinDateValue;
	System::TDateTime FMaxDateValue;
	System::TDateTime FDateValue;
	System::TDateTime FTimeValue;
	int FIncrement;
	double FIncrementFloat;
	TAsgSpinButton* FButton;
	bool FEditorEnabled;
	TSpinDirection FDirection;
	TAsgSpinType FSpinType;
	int FPrecision;
	bool FReturnIsTab;
	bool FIsWinXP;
	bool FExcelStyleDecimalSeparator;
	bool FUsDates;
	bool FShowSeconds;
	int FIncrementSeconds;
	int FIncrementMinutes;
	int FIncrementHours;
	TEditAlign FEditAlign;
	bool FSpinFlat;
	bool FSpinTransparent;
	bool FAllowEmptyValue;
	double FIncrementFloatPage;
	int __fastcall GetMinHeight();
	int __fastcall GetValue();
	int __fastcall CheckValue(int NewValue);
	void __fastcall SetValue(int NewValue);
	double __fastcall GetFloatValue();
	double __fastcall CheckFloatValue(double NewValue);
	System::TDateTime __fastcall CheckDateValue(System::TDateTime NewValue);
	void __fastcall SetFloatValue(double NewValue);
	void __fastcall SetEditRect();
	void __fastcall SetEditorEnabled(bool NewValue);
	void __fastcall SetDirection(const TSpinDirection Value);
	void __fastcall SetPrecision(const int Value);
	void __fastcall SetSpinType(const TAsgSpinType Value);
	System::TDateTime __fastcall GetTimeValue();
	void __fastcall SetTimeValue(const System::TDateTime Value);
	System::TDateTime __fastcall GetDateValue();
	void __fastcall SetDateValue(const System::TDateTime Value);
	void __fastcall SetSpinFlat(const bool Value);
	void __fastcall SetSpinTransparent(const bool value);
	HIDESBASE MESSAGE void __fastcall CMEnter(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall CMExit(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Message);
	HIDESBASE MESSAGE void __fastcall WMPaste(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall WMCut(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall WMChar(Winapi::Messages::TWMKey &Msg);
	HIDESBASE MESSAGE void __fastcall WMKeyDown(Winapi::Messages::TWMKey &Message);
	void __fastcall SetIsWinXP(const bool Value);
	void __fastcall SetEditAlign(const TEditAlign Value);
	
protected:
	virtual void __fastcall DoInc(bool Page);
	virtual void __fastcall DoDec(bool Page);
	virtual bool __fastcall IsValidChar(System::WideChar &Key);
	virtual void __fastcall UpClick(System::TObject* Sender);
	virtual void __fastcall DownClick(System::TObject* Sender);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall CreateWnd();
	virtual void __fastcall Loaded();
	__property bool IsWinXP = {read=FIsWinXP, write=SetIsWinXP, nodefault};
	
public:
	DYNAMIC void __fastcall GetChildren(System::Classes::TGetChildProc Proc, System::Classes::TComponent* Root);
	__fastcall virtual TAsgSpinEdit(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TAsgSpinEdit();
	__property TAsgSpinButton* Button = {read=FButton};
	
__published:
	__property bool ExcelStyleDecimalSeparator = {read=FExcelStyleDecimalSeparator, write=FExcelStyleDecimalSeparator, nodefault};
	__property TSpinDirection Direction = {read=FDirection, write=SetDirection, nodefault};
	__property bool ReturnIsTab = {read=FReturnIsTab, write=FReturnIsTab, nodefault};
	__property int Precision = {read=FPrecision, write=SetPrecision, nodefault};
	__property TAsgSpinType SpinType = {read=FSpinType, write=SetSpinType, nodefault};
	__property int Value = {read=GetValue, write=SetValue, nodefault};
	__property double FloatValue = {read=GetFloatValue, write=SetFloatValue};
	__property System::TDateTime TimeValue = {read=GetTimeValue, write=SetTimeValue};
	__property System::TDateTime DateValue = {read=GetDateValue, write=SetDateValue};
	__property bool ShowSeconds = {read=FShowSeconds, write=FShowSeconds, nodefault};
	__property bool SpinFlat = {read=FSpinFlat, write=SetSpinFlat, nodefault};
	__property bool SpinTransparent = {read=FSpinTransparent, write=SetSpinTransparent, nodefault};
	__property Anchors = {default=3};
	__property AutoSelect = {default=1};
	__property bool AllowEmptyValue = {read=FAllowEmptyValue, write=FAllowEmptyValue, nodefault};
	__property AutoSize = {default=1};
	__property BorderStyle = {default=1};
	__property Color = {default=-16777211};
	__property Constraints;
	__property Ctl3D;
	__property DragCursor = {default=-12};
	__property DragMode = {default=0};
	__property TEditAlign EditAlign = {read=FEditAlign, write=SetEditAlign, nodefault};
	__property bool EditorEnabled = {read=FEditorEnabled, write=SetEditorEnabled, default=1};
	__property Enabled = {default=1};
	__property Font;
	__property int Increment = {read=FIncrement, write=FIncrement, default=1};
	__property double IncrementFloat = {read=FIncrementFloat, write=FIncrementFloat};
	__property double IncrementFloatPage = {read=FIncrementFloatPage, write=FIncrementFloatPage};
	__property int IncrementMinutes = {read=FIncrementMinutes, write=FIncrementMinutes, default=1};
	__property int IncrementSeconds = {read=FIncrementSeconds, write=FIncrementSeconds, default=1};
	__property int IncrementHours = {read=FIncrementHours, write=FIncrementHours, default=1};
	__property MaxLength = {default=0};
	__property int MaxValue = {read=FMaxValue, write=FMaxValue, nodefault};
	__property int MinValue = {read=FMinValue, write=FMinValue, nodefault};
	__property double MinFloatValue = {read=FMinFloatValue, write=FMinFloatValue};
	__property double MaxFloatValue = {read=FMaxFloatValue, write=FMaxFloatValue};
	__property System::TDateTime MinDateValue = {read=FMinDateValue, write=FMinDateValue};
	__property System::TDateTime MaxDateValue = {read=FMaxDateValue, write=FMaxDateValue};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ReadOnly = {default=0};
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Visible = {default=1};
	__property OnChange;
	__property OnClick;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnStartDrag;
public:
	/* TWinControl.CreateParented */ inline __fastcall TAsgSpinEdit(HWND ParentWindow) : Vcl::Mask::TCustomMaskEdit(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TAdvMaskSpinEdit : public TAsgSpinEdit
{
	typedef TAsgSpinEdit inherited;
	
__published:
	__property EditMask = {default=0};
public:
	/* TAsgSpinEdit.Create */ inline __fastcall virtual TAdvMaskSpinEdit(System::Classes::TComponent* AOwner) : TAsgSpinEdit(AOwner) { }
	/* TAsgSpinEdit.Destroy */ inline __fastcall virtual ~TAdvMaskSpinEdit() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TAdvMaskSpinEdit(HWND ParentWindow) : TAsgSpinEdit(ParentWindow) { }
	
};


enum DECLSPEC_DENUM Asgspin__4 : unsigned char { tbFocusRect, tbAllowTimer };

typedef System::Set<Asgspin__4, Asgspin__4::tbFocusRect, Asgspin__4::tbAllowTimer> TTimeBtnState;

enum DECLSPEC_DENUM TButtonDirection : unsigned char { bdLeft, bdRight, bdUp, bdDown };

class PASCALIMPLEMENTATION TAdvTimerSpeedButton : public Vcl::Buttons::TSpeedButton
{
	typedef Vcl::Buttons::TSpeedButton inherited;
	
private:
	Vcl::Extctrls::TTimer* FRepeatTimer;
	TTimeBtnState FTimeBtnState;
	TButtonDirection FButtonDirection;
	bool FIsWinXP;
	bool FHasMouse;
	void __fastcall TimerExpired(System::TObject* Sender);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Winapi::Messages::TMessage &Message);
	
protected:
	virtual void __fastcall Paint();
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	__property bool IsWinXP = {read=FIsWinXP, write=FIsWinXP, nodefault};
	
public:
	__fastcall virtual ~TAdvTimerSpeedButton();
	__property TTimeBtnState TimeBtnState = {read=FTimeBtnState, write=FTimeBtnState, nodefault};
	__property TButtonDirection ButtonDirection = {read=FButtonDirection, write=FButtonDirection, nodefault};
public:
	/* TCustomSpeedButton.Create */ inline __fastcall virtual TAdvTimerSpeedButton(System::Classes::TComponent* AOwner) : Vcl::Buttons::TSpeedButton(AOwner) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Asgspin */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ASGSPIN)
using namespace Asgspin;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AsgspinHPP
