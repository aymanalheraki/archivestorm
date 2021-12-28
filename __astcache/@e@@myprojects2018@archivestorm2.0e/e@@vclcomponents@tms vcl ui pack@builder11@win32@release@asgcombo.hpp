// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AsgCombo.pas' rev: 35.00 (Windows)

#ifndef AsgcomboHPP
#define AsgcomboHPP

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
#include <System.Classes.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.StdCtrls.hpp>
#include <System.SysUtils.hpp>
#include <AdvXPVS.hpp>
#include <System.UITypes.hpp>
#include <Vcl.Menus.hpp>

//-- user supplied -----------------------------------------------------------

namespace Asgcombo
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TWinCtrl;
class DELPHICLASS TAsgCustomCombo;
class DELPHICLASS TAsgComboBox;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TWinCtrl : public Vcl::Controls::TWinControl
{
	typedef Vcl::Controls::TWinControl inherited;
	
public:
	/* TWinControl.Create */ inline __fastcall virtual TWinCtrl(System::Classes::TComponent* AOwner) : Vcl::Controls::TWinControl(AOwner) { }
	/* TWinControl.CreateParented */ inline __fastcall TWinCtrl(HWND ParentWindow) : Vcl::Controls::TWinControl(ParentWindow) { }
	/* TWinControl.Destroy */ inline __fastcall virtual ~TWinCtrl() { }
	
};


enum DECLSPEC_DENUM TLabelPosition : unsigned char { lpLeftTop, lpLeftCenter, lpLeftBottom, lpTopLeft, lpBottomLeft, lpLeftTopLeft, lpLeftCenterLeft, lpLeftBottomLeft, lpTopCenter, lpBottomCenter, lpRightTop, lpRightCenter, lpRighBottom };

class PASCALIMPLEMENTATION TAsgCustomCombo : public Vcl::Stdctrls::TCustomComboBox
{
	typedef Vcl::Stdctrls::TCustomComboBox inherited;
	
private:
	bool FAutoFocus;
	bool FFlat;
	bool FEtched;
	System::Uitypes::TColor FOldColor;
	System::Uitypes::TColor FLoadedColor;
	bool FOldParentColor;
	int FButtonWidth;
	bool FFocusBorder;
	bool FMouseInControl;
	int FDropWidth;
	bool FIsWinXP;
	bool FIsThemed;
	bool FButtonHover;
	bool FLabelAlwaysEnabled;
	bool FLabelTransparent;
	int FLabelMargin;
	Vcl::Graphics::TFont* FLabelFont;
	TLabelPosition FLabelPosition;
	Vcl::Stdctrls::TLabel* FLabel;
	System::Uitypes::TColor FFlatLineColor;
	bool FFlatParentColor;
	System::Classes::TNotifyEvent FOnDropUp;
	System::Uitypes::TColor FFocusColor;
	System::Uitypes::TColor FFocusBorderColor;
	System::Uitypes::TColor FBorderColor;
	bool FDisabledBorder;
	System::Uitypes::TColor FNormalColor;
	bool FHasFocus;
	bool FFocusLabel;
	System::Uitypes::TColor FButtonColorDown;
	System::Uitypes::TColor FButtonBorderColor;
	System::Uitypes::TColor FButtonTextColor;
	System::Uitypes::TColor FButtonTextColorHot;
	System::Uitypes::TColor FButtonColor;
	System::Uitypes::TColor FButtonColorHot;
	System::Uitypes::TColor FButtonTextColorDown;
	bool FIsVista;
	void __fastcall SetEtched(const bool Value);
	void __fastcall SetFlat(const bool Value);
	void __fastcall SetButtonWidth(const int Value);
	void __fastcall DrawButtonBorder(HDC DC);
	void __fastcall DrawControlBorder(HDC DC);
	void __fastcall DrawBorders();
	bool __fastcall Is3DBorderControl();
	bool __fastcall Is3DBorderButton();
	HIDESBASE MESSAGE void __fastcall CMEnter(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall CMExit(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMEnabledChanged(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMParentFontChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CNCommand(Winapi::Messages::TWMCommand &Message);
	HIDESBASE MESSAGE void __fastcall WMPaint(Winapi::Messages::TWMPaint &Message);
	HIDESBASE MESSAGE void __fastcall WMNCPaint(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Winapi::Messages::TWMSetFocus &Message);
	HIDESBASE MESSAGE void __fastcall WMKillFocus(Winapi::Messages::TWMKillFocus &Message);
	void __fastcall SetDropWidth(const int Value);
	System::UnicodeString __fastcall GetLabelCaption();
	void __fastcall SetLabelAlwaysEnabled(const bool Value);
	void __fastcall SetLabelCaption(const System::UnicodeString Value);
	void __fastcall SetLabelFont(Vcl::Graphics::TFont* const Value);
	void __fastcall SetLabelMargin(const int Value);
	void __fastcall SetLabelPosition(const TLabelPosition Value);
	void __fastcall SetLabelTransparent(const bool Value);
	void __fastcall UpdateLabel();
	void __fastcall LabelFontChange(System::TObject* Sender);
	void __fastcall SetFlatLineColor(const System::Uitypes::TColor Value);
	void __fastcall SetFlatParentColor(const bool Value);
	System::Uitypes::TColor __fastcall GetColorEx();
	void __fastcall SetColorEx(const System::Uitypes::TColor Value);
	bool __fastcall GetEnabledEx();
	void __fastcall SetEnabledEx(const bool Value);
	bool __fastcall GetVisibleEx();
	void __fastcall SetVisibleEx(const bool Value);
	void __fastcall SetBorderColor(const System::Uitypes::TColor Value);
	
protected:
	bool __fastcall DoVisualStyles();
	Vcl::Stdctrls::TLabel* __fastcall CreateLabel();
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	__property System::Uitypes::TColor BorderColor = {read=FBorderColor, write=SetBorderColor, default=536870911};
	__property int ButtonWidth = {read=FButtonWidth, write=SetButtonWidth, default=19};
	__property bool Flat = {read=FFlat, write=SetFlat, default=0};
	__property System::Uitypes::TColor FlatLineColor = {read=FFlatLineColor, write=SetFlatLineColor, default=536870911};
	__property bool FlatParentColor = {read=FFlatParentColor, write=SetFlatParentColor, default=1};
	__property bool Etched = {read=FEtched, write=SetEtched, default=0};
	__property bool FocusBorder = {read=FFocusBorder, write=FFocusBorder, default=0};
	__property System::Uitypes::TColor FocusBorderColor = {read=FFocusBorderColor, write=FFocusBorderColor, default=536870911};
	__property System::Uitypes::TColor FocusColor = {read=FFocusColor, write=FFocusColor, default=536870911};
	__property bool FocusLabel = {read=FFocusLabel, write=FFocusLabel, default=0};
	__property bool AutoFocus = {read=FAutoFocus, write=FAutoFocus, default=0};
	__property int DropWidth = {read=FDropWidth, write=SetDropWidth, nodefault};
	
public:
	__fastcall virtual TAsgCustomCombo(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TAsgCustomCombo();
	virtual void __fastcall Loaded();
	void __fastcall Init();
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	__property Vcl::Stdctrls::TLabel* ComboLabel = {read=FLabel};
	__property System::Uitypes::TColor ButtonColor = {read=FButtonColor, write=FButtonColor, default=536870911};
	__property System::Uitypes::TColor ButtonColorHot = {read=FButtonColorHot, write=FButtonColorHot, default=536870911};
	__property System::Uitypes::TColor ButtonColorDown = {read=FButtonColorDown, write=FButtonColorDown, default=536870911};
	__property System::Uitypes::TColor ButtonTextColor = {read=FButtonTextColor, write=FButtonTextColor, default=536870911};
	__property System::Uitypes::TColor ButtonTextColorHot = {read=FButtonTextColorHot, write=FButtonTextColorHot, default=536870911};
	__property System::Uitypes::TColor ButtonTextColorDown = {read=FButtonTextColorDown, write=FButtonTextColorDown, default=536870911};
	__property System::Uitypes::TColor ButtonBorderColor = {read=FButtonBorderColor, write=FButtonBorderColor, default=536870911};
	__property bool DisabledBorder = {read=FDisabledBorder, write=FDisabledBorder, default=1};
	__property bool IsWinXP = {read=FIsWinXP, write=FIsWinXP, nodefault};
	__property bool IsVista = {read=FIsVista, write=FIsVista, nodefault};
	__property System::UnicodeString LabelCaption = {read=GetLabelCaption, write=SetLabelCaption};
	__property TLabelPosition LabelPosition = {read=FLabelPosition, write=SetLabelPosition, default=0};
	__property int LabelMargin = {read=FLabelMargin, write=SetLabelMargin, default=4};
	__property bool LabelTransparent = {read=FLabelTransparent, write=SetLabelTransparent, default=0};
	__property bool LabelAlwaysEnabled = {read=FLabelAlwaysEnabled, write=SetLabelAlwaysEnabled, default=0};
	__property Vcl::Graphics::TFont* LabelFont = {read=FLabelFont, write=SetLabelFont};
	__property bool Enabled = {read=GetEnabledEx, write=SetEnabledEx, nodefault};
	HIDESBASE void __fastcall SelectItem(System::UnicodeString AString);
	
__published:
	__property AutoComplete = {default=1};
	__property System::Uitypes::TColor Color = {read=GetColorEx, write=SetColorEx, nodefault};
	__property System::Classes::TNotifyEvent OnDropUp = {read=FOnDropUp, write=FOnDropUp};
	__property bool Visible = {read=GetVisibleEx, write=SetVisibleEx, nodefault};
public:
	/* TWinControl.CreateParented */ inline __fastcall TAsgCustomCombo(HWND ParentWindow) : Vcl::Stdctrls::TCustomComboBox(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TAsgComboBox : public TAsgCustomCombo
{
	typedef TAsgCustomCombo inherited;
	
__published:
	__property Align = {default=0};
	__property AutoFocus = {default=0};
	__property BorderColor = {default=536870911};
	__property ButtonWidth = {default=19};
	__property DisabledBorder = {default=1};
	__property Style = {default=0};
	__property Flat = {default=0};
	__property FlatLineColor = {default=536870911};
	__property FlatParentColor = {default=1};
	__property Etched = {default=0};
	__property FocusBorder = {default=0};
	__property FocusBorderColor = {default=536870911};
	__property FocusColor = {default=536870911};
	__property FocusLabel = {default=0};
	__property CharCase = {default=0};
	__property Color;
	__property Ctl3D;
	__property DragCursor = {default=-12};
	__property DragMode = {default=0};
	__property DropDownCount = {default=8};
	__property DropWidth;
	__property Enabled;
	__property Font;
	__property ImeMode = {default=3};
	__property ImeName = {default=0};
	__property ItemIndex;
	__property ItemHeight;
	__property Items;
	__property LabelCaption = {default=0};
	__property LabelPosition = {default=0};
	__property LabelMargin = {default=4};
	__property LabelTransparent = {default=0};
	__property LabelAlwaysEnabled = {default=0};
	__property LabelFont;
	__property MaxLength = {default=0};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property Sorted = {default=0};
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Text = {default=0};
	__property Visible;
	__property OnChange;
	__property OnClick;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnDrawItem;
	__property OnDropDown;
	__property OnDropUp;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMeasureItem;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnStartDrag;
	__property OnSelect;
	__property Anchors = {default=3};
	__property BiDiMode;
	__property Constraints;
	__property DragKind = {default=0};
	__property ParentBiDiMode = {default=1};
	__property OnEndDock;
	__property OnStartDock;
	__property BevelKind = {default=0};
	__property BevelInner = {index=0, default=2};
	__property BevelOuter = {index=1, default=1};
	__property BevelEdges = {default=15};
public:
	/* TAsgCustomCombo.Create */ inline __fastcall virtual TAsgComboBox(System::Classes::TComponent* AOwner) : TAsgCustomCombo(AOwner) { }
	/* TAsgCustomCombo.Destroy */ inline __fastcall virtual ~TAsgComboBox() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TAsgComboBox(HWND ParentWindow) : TAsgCustomCombo(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Asgcombo */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ASGCOMBO)
using namespace Asgcombo;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AsgcomboHPP
