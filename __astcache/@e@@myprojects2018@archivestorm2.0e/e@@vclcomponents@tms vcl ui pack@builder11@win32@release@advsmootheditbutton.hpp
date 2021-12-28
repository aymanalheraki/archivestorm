// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AdvSmoothEditButton.pas' rev: 35.00 (Windows)

#ifndef AdvsmootheditbuttonHPP
#define AdvsmootheditbuttonHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <System.Classes.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Controls.hpp>
#include <Winapi.Messages.hpp>
#include <System.SysUtils.hpp>
#include <AdvStyleIF.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.Menus.hpp>
#include <AdvSmoothEdit.hpp>
#include <AdvSmoothXPVS.hpp>
#include <System.Types.hpp>
#include <System.UITypes.hpp>
#include <Vcl.Mask.hpp>
#include <System.MaskUtils.hpp>

//-- user supplied -----------------------------------------------------------

namespace Advsmootheditbutton
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TAdvSmoothSpeedButton;
class DELPHICLASS TSmoothEditButton;
class DELPHICLASS TAdvSmoothEditBtn;
class DELPHICLASS TUnitAdvSmoothEditBtn;
//-- type declarations -------------------------------------------------------
using Vcl::Buttons::TNumGlyphs;

enum DECLSPEC_DENUM TButtonStyle : unsigned char { bsButton, bsDropDown };

class PASCALIMPLEMENTATION TAdvSmoothSpeedButton : public Vcl::Buttons::TSpeedButton
{
	typedef Vcl::Buttons::TSpeedButton inherited;
	
private:
	float FDPIScale;
	bool FEtched;
	bool FFocused;
	bool FHot;
	bool FUp;
	bool FIsWinXP;
	void __fastcall SetEtched(const bool Value);
	void __fastcall SetFocused(const bool Value);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Winapi::Messages::TMessage &Message);
	void __fastcall PaintDropDown();
	void __fastcall PaintButton();
	
protected:
	virtual void __fastcall Paint();
	bool __fastcall DoVisualStyles();
	DYNAMIC void __fastcall ChangeScale(int M, int D, bool isDpiChange)/* overload */;
	
public:
	void __fastcall SetUp();
	__fastcall virtual TAdvSmoothSpeedButton(System::Classes::TComponent* AOwner);
	
__published:
	__property bool Etched = {read=FEtched, write=SetEtched, nodefault};
	__property bool Focused = {read=FFocused, write=SetFocused, nodefault};
public:
	/* TCustomSpeedButton.Destroy */ inline __fastcall virtual ~TAdvSmoothSpeedButton() { }
	
	/* Hoisted overloads: */
	
protected:
	DYNAMIC inline void __fastcall  ChangeScale(int M, int D){ Vcl::Controls::TControl::ChangeScale(M, D); }
	
};


class PASCALIMPLEMENTATION TSmoothEditButton : public Vcl::Controls::TWinControl
{
	typedef Vcl::Controls::TWinControl inherited;
	
private:
	TAdvSmoothSpeedButton* FButton;
	Vcl::Controls::TWinControl* FFocusControl;
	System::Classes::TNotifyEvent FOnClick;
	int FBWidth;
	TAdvSmoothSpeedButton* __fastcall CreateButton();
	Vcl::Graphics::TBitmap* __fastcall GetGlyph();
	void __fastcall SetGlyph(Vcl::Graphics::TBitmap* Value);
	Vcl::Buttons::TNumGlyphs __fastcall GetNumGlyphs();
	void __fastcall SetNumGlyphs(Vcl::Buttons::TNumGlyphs Value);
	void __fastcall SetCaption(System::UnicodeString value);
	System::UnicodeString __fastcall GetCaption();
	void __fastcall BtnClick(System::TObject* Sender);
	void __fastcall BtnMouseDown(System::TObject* Sender, System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall AdjustWinSize(int &W, int &H);
	HIDESBASE MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Message);
	
protected:
	virtual void __fastcall Loaded();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	__property int BWidth = {read=FBWidth, write=FBWidth, nodefault};
	void __fastcall Setup();
	
public:
	__fastcall virtual TSmoothEditButton(System::Classes::TComponent* AOwner);
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	
__published:
	__property Align = {default=0};
	__property Ctl3D;
	__property Vcl::Graphics::TBitmap* Glyph = {read=GetGlyph, write=SetGlyph};
	__property System::UnicodeString ButtonCaption = {read=GetCaption, write=SetCaption};
	__property Vcl::Buttons::TNumGlyphs NumGlyphs = {read=GetNumGlyphs, write=SetNumGlyphs, default=1};
	__property DragCursor = {default=-12};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Vcl::Controls::TWinControl* FocusControl = {read=FFocusControl, write=FFocusControl};
	__property ParentCtl3D = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=0};
	__property Visible = {default=1};
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnStartDrag;
	__property System::Classes::TNotifyEvent OnClick = {read=FOnClick, write=FOnClick};
public:
	/* TWinControl.CreateParented */ inline __fastcall TSmoothEditButton(HWND ParentWindow) : Vcl::Controls::TWinControl(ParentWindow) { }
	/* TWinControl.Destroy */ inline __fastcall virtual ~TSmoothEditButton() { }
	
};


class PASCALIMPLEMENTATION TAdvSmoothEditBtn : public Advsmoothedit::TAdvSmoothEdit
{
	typedef Advsmoothedit::TAdvSmoothEdit inherited;
	
private:
	float FDPIScale;
	int FUnitSize;
	TSmoothEditButton* FButton;
	bool FEditorEnabled;
	System::Classes::TNotifyEvent FOnClickBtn;
	bool FFlat;
	bool FEtched;
	bool FMouseInControl;
	System::UnicodeString FButtonHint;
	TButtonStyle FButtonStyle;
	System::Uitypes::TColor FButtonColor;
	System::Uitypes::TColor FButtonColorDown;
	System::Uitypes::TColor FButtonBorderColor;
	System::Uitypes::TColor FButtonTextColor;
	System::Uitypes::TColor FButtonTextColorHot;
	System::Uitypes::TColor FButtonColorHot;
	System::Uitypes::TColor FButtonTextColorDown;
	int __fastcall GetMinHeight();
	void __fastcall SetGlyph(Vcl::Graphics::TBitmap* value);
	Vcl::Graphics::TBitmap* __fastcall GetGlyph();
	void __fastcall SetCaption(System::UnicodeString value);
	System::UnicodeString __fastcall GetCaption();
	HIDESBASE void __fastcall SetFlat(const bool Value);
	void __fastcall SetEtched(const bool Value);
	HIDESBASE void __fastcall DrawControlBorder(HDC DC);
	void __fastcall DrawButtonBorder();
	void __fastcall DrawBorders();
	bool __fastcall Is3DBorderControl();
	HIDESBASE bool __fastcall Is3DBorderButton();
	HIDESBASE MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Message);
	HIDESBASE MESSAGE void __fastcall CMEnter(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall CMExit(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMEnabledChanged(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall WMPaste(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall WMCut(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall WMCopy(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall WMPaint(Winapi::Messages::TWMPaint &Msg);
	HIDESBASE MESSAGE void __fastcall WMNCPaint(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMKeyDown(Winapi::Messages::TWMKey &Msg);
	HIDESBASE MESSAGE void __fastcall WMChar(Winapi::Messages::TWMKey &Msg);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Winapi::Messages::TMessage &Message);
	int __fastcall GetButtonWidth();
	void __fastcall SetButtonWidth(const int Value);
	void __fastcall ResizeControl();
	void __fastcall SetButtonHint(const System::UnicodeString Value);
	void __fastcall SetButtonStyle(const TButtonStyle Value);
	bool __fastcall GetReadOnlyEx();
	void __fastcall SetReadOnlyEx(const bool Value);
	
protected:
	virtual int __fastcall GetVersionNr();
	virtual void __fastcall BtnClick(System::TObject* Sender);
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall CreateWnd();
	virtual void __fastcall Loaded();
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall DoEnter();
	DYNAMIC void __fastcall ChangeScale(int M, int D, bool isDpiChange)/* overload */;
	
public:
	void __fastcall SetEditRect();
	__fastcall virtual TAdvSmoothEditBtn(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TAdvSmoothEditBtn();
	__property TSmoothEditButton* Button = {read=FButton};
	HIDESBASE void __fastcall PaintTo(HDC DC, int X, int Y)/* overload */;
	HIDESBASE void __fastcall PaintTo(Vcl::Graphics::TCanvas* Canvas, int X, int Y)/* overload */;
	
__published:
	__property AutoSelect = {default=1};
	__property AutoSize = {default=1};
	__property BorderStyle = {default=1};
	__property TButtonStyle ButtonStyle = {read=FButtonStyle, write=SetButtonStyle, nodefault};
	__property int ButtonWidth = {read=GetButtonWidth, write=SetButtonWidth, default=17};
	__property System::UnicodeString ButtonHint = {read=FButtonHint, write=SetButtonHint};
	__property Color;
	__property Ctl3D;
	__property DragCursor = {default=-12};
	__property DragMode = {default=0};
	__property bool EditorEnabled = {read=FEditorEnabled, write=FEditorEnabled, default=1};
	__property Enabled;
	__property bool Flat = {read=FFlat, write=SetFlat, nodefault};
	__property Font;
	__property bool Etched = {read=FEtched, write=SetEtched, nodefault};
	__property FocusBorder = {default=0};
	__property Vcl::Graphics::TBitmap* Glyph = {read=GetGlyph, write=SetGlyph};
	__property System::UnicodeString ButtonCaption = {read=GetCaption, write=SetCaption};
	__property MaxLength = {default=0};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property bool ReadOnly = {read=GetReadOnlyEx, write=SetReadOnlyEx, nodefault};
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Text;
	__property Visible;
	__property Height;
	__property Width;
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
	__property System::Classes::TNotifyEvent OnClickBtn = {read=FOnClickBtn, write=FOnClickBtn};
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property BevelEdges = {default=15};
	__property BevelInner = {index=0, default=2};
	__property BevelOuter = {index=1, default=1};
	__property BevelKind = {default=0};
	__property BevelWidth = {default=1};
	__property BiDiMode;
	__property CharCase = {default=0};
	__property Constraints;
	__property DoubleBuffered;
	__property DragKind = {default=0};
	__property EditMask = {default=0};
	__property ImeMode = {default=3};
	__property ImeName = {default=0};
	__property ParentBiDiMode = {default=1};
	__property ParentDoubleBuffered = {default=1};
	__property PasswordChar = {default=0};
	__property TextHint = {default=0};
	__property OnEndDock;
	__property OnGesture;
	__property Touch;
	__property OnMouseActivate;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnStartDock;
	__property System::Uitypes::TColor ButtonColor = {read=FButtonColor, write=FButtonColor, default=536870911};
	__property System::Uitypes::TColor ButtonColorHot = {read=FButtonColorHot, write=FButtonColorHot, default=536870911};
	__property System::Uitypes::TColor ButtonColorDown = {read=FButtonColorDown, write=FButtonColorDown, default=536870911};
	__property System::Uitypes::TColor ButtonTextColor = {read=FButtonTextColor, write=FButtonTextColor, default=536870911};
	__property System::Uitypes::TColor ButtonTextColorHot = {read=FButtonTextColorHot, write=FButtonTextColorHot, default=536870911};
	__property System::Uitypes::TColor ButtonTextColorDown = {read=FButtonTextColorDown, write=FButtonTextColorDown, default=536870911};
	__property System::Uitypes::TColor ButtonBorderColor = {read=FButtonBorderColor, write=FButtonBorderColor, default=536870911};
public:
	/* TWinControl.CreateParented */ inline __fastcall TAdvSmoothEditBtn(HWND ParentWindow) : Advsmoothedit::TAdvSmoothEdit(ParentWindow) { }
	
	/* Hoisted overloads: */
	
protected:
	DYNAMIC inline void __fastcall  ChangeScale(int M, int D){ Vcl::Controls::TControl::ChangeScale(M, D); }
	
};


typedef void __fastcall (__closure *TUnitChangeEvent)(System::TObject* Sender, System::UnicodeString NewUnit);

class PASCALIMPLEMENTATION TUnitAdvSmoothEditBtn : public TAdvSmoothEditBtn
{
	typedef TAdvSmoothEditBtn inherited;
	
private:
	System::UnicodeString FUnitID;
	System::Classes::TStringList* FUnits;
	TUnitChangeEvent FUnitChanged;
	int __fastcall GetUnitSize();
	void __fastcall SetUnitSize(int value);
	void __fastcall SetUnits(System::Classes::TStringList* value);
	void __fastcall SetUnitID(System::UnicodeString value);
	HIDESBASE MESSAGE void __fastcall WMPaint(Winapi::Messages::TWMPaint &Msg);
	HIDESBASE MESSAGE void __fastcall WMCommand(Winapi::Messages::TWMCommand &Message);
	
protected:
	virtual void __fastcall BtnClick(System::TObject* Sender);
	
public:
	__fastcall virtual TUnitAdvSmoothEditBtn(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TUnitAdvSmoothEditBtn();
	
__published:
	__property System::Classes::TStringList* Units = {read=FUnits, write=SetUnits};
	__property System::UnicodeString UnitID = {read=FUnitID, write=SetUnitID};
	__property int UnitSpace = {read=GetUnitSize, write=SetUnitSize, nodefault};
	__property TUnitChangeEvent OnUnitChanged = {read=FUnitChanged, write=FUnitChanged};
public:
	/* TWinControl.CreateParented */ inline __fastcall TUnitAdvSmoothEditBtn(HWND ParentWindow) : TAdvSmoothEditBtn(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::Int8 MAJ_VER = System::Int8(0x1);
static const System::Int8 MIN_VER = System::Int8(0x3);
static const System::Int8 REL_VER = System::Int8(0x4);
static const System::Int8 BLD_VER = System::Int8(0x0);
}	/* namespace Advsmootheditbutton */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ADVSMOOTHEDITBUTTON)
using namespace Advsmootheditbutton;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AdvsmootheditbuttonHPP
