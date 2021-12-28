// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AsgDateTimePicker.pas' rev: 35.00 (Windows)

#ifndef AsgdatetimepickerHPP
#define AsgdatetimepickerHPP

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
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Asgdatetimepicker
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TAsgDateTimePicker;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TAsgDateTimePicker : public Vcl::Comctrls::TDateTimePicker
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
	bool __fastcall Is3DBorderButton();
	void __fastcall DrawButtonBorder(HDC DC);
	void __fastcall DrawControlBorder(HDC DC);
	void __fastcall DrawBorders();
	bool __fastcall GetMetroStyleShowing();
	System::UnicodeString __fastcall GetVersion();
	void __fastcall SetVersion(const System::UnicodeString Value);
	
protected:
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall CreateWnd();
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	bool __fastcall DoVisualStyles();
	virtual void __fastcall SetBorderStyle(const Vcl::Forms::TBorderStyle Value);
	__property Vcl::Forms::TBorderStyle BorderStyle = {read=FBorderStyle, write=SetBorderStyle, nodefault};
	__property int ButtonWidth = {read=FButtonWidth, write=SetButtonWidth, default=19};
	__property System::Uitypes::TColor FocusBorderColor = {read=FFocusBorderColor, write=FFocusBorderColor, default=536870911};
	__property bool FocusBorder = {read=FFocusBorder, write=FFocusBorder, default=0};
	__property bool DisabledBorder = {read=FDisabledBorder, write=FDisabledBorder, default=1};
	__property bool MetroStyleShowing = {read=GetMetroStyleShowing, nodefault};
	
public:
	__fastcall virtual TAsgDateTimePicker(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TAsgDateTimePicker();
	int __fastcall GetVersionNr();
	__property System::Uitypes::TColor BorderColor = {read=FBorderColor, write=SetBorderColor, default=536870911};
	__property System::Uitypes::TColor ButtonColor = {read=FButtonColor, write=FButtonColor, default=536870911};
	__property System::Uitypes::TColor ButtonColorHot = {read=FButtonColorHot, write=FButtonColorHot, default=536870911};
	__property System::Uitypes::TColor ButtonColorDown = {read=FButtonColorDown, write=FButtonColorDown, default=536870911};
	__property System::Uitypes::TColor ButtonTextColor = {read=FButtonTextColor, write=FButtonTextColor, default=536870911};
	__property System::Uitypes::TColor ButtonTextColorHot = {read=FButtonTextColorHot, write=FButtonTextColorHot, default=536870911};
	__property System::Uitypes::TColor ButtonTextColorDown = {read=FButtonTextColorDown, write=FButtonTextColorDown, default=536870911};
	__property System::Uitypes::TColor ButtonBorderColor = {read=FButtonBorderColor, write=FButtonBorderColor, default=536870911};
	__property bool MetroStyle = {read=FMetroStyle, write=SetMetroStyle, nodefault};
	
__published:
	__property System::UnicodeString Version = {read=GetVersion, write=SetVersion};
public:
	/* TWinControl.CreateParented */ inline __fastcall TAsgDateTimePicker(HWND ParentWindow) : Vcl::Comctrls::TDateTimePicker(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::Int8 MAJ_VER = System::Int8(0x1);
static const System::Int8 MIN_VER = System::Int8(0x0);
static const System::Int8 REL_VER = System::Int8(0x0);
static const System::Int8 BLD_VER = System::Int8(0x0);
static const System::Int8 DROPDOWNBTN_WIDTH = System::Int8(0x15);
}	/* namespace Asgdatetimepicker */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ASGDATETIMEPICKER)
using namespace Asgdatetimepicker;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AsgdatetimepickerHPP
