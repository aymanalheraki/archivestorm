// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AdvMemoDropDown.pas' rev: 35.00 (Windows)

#ifndef AdvmemodropdownHPP
#define AdvmemodropdownHPP

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
#include <Vcl.Menus.hpp>
#include <Vcl.StdCtrls.hpp>
#include <System.SysUtils.hpp>
#include <Vcl.Forms.hpp>
#include <System.UITypes.hpp>
#include <Vcl.Mask.hpp>
#include <Vcl.ImgList.hpp>
#include <AdvStyleIF.hpp>

//-- user supplied -----------------------------------------------------------

namespace Advmemodropdown
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TAdvMemoDropDown;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TAdvMemoDropDown : public Advdropdown::TAdvCustomDropDown
{
	typedef Advdropdown::TAdvCustomDropDown inherited;
	
private:
	System::Classes::TNotifyEvent FOnMemoChange;
	Vcl::Menus::TPopupMenu* FMemoPopup;
	System::Classes::TStringList* FMemoText;
	Vcl::Stdctrls::TMemo* FMemo;
	System::Uitypes::TScrollStyle FMemoScrollBars;
	bool FMemoReadOnly;
	bool FInternalUpdate;
	bool FAutoDrop;
	void __fastcall SetMemoPopup(Vcl::Menus::TPopupMenu* const Value);
	void __fastcall SetMemoText(System::Classes::TStringList* const Value);
	void __fastcall SetMemoScrollBars(const System::Uitypes::TScrollStyle Value);
	void __fastcall MemoChanged(System::TObject* Sender);
	void __fastcall OnMemoTextChanged(System::TObject* Sender);
	void __fastcall OnMemoKeyDown(System::TObject* Sender, System::Word &Key, System::Classes::TShiftState Shift);
	System::UnicodeString __fastcall GetTextEx();
	void __fastcall SetMemoReadOnly(const bool Value);
	System::Classes::TStringList* __fastcall GetMemoText();
	
protected:
	virtual void __fastcall CreateDropDownForm();
	virtual void __fastcall BeforeDropDown();
	virtual void __fastcall OnHideDropDown();
	virtual void __fastcall DoHideDropDown(bool Canceled);
	virtual void __fastcall OnDropDownControlKeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall OnDropDownControlKeyUp(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall OnDropDownControlKeyPress(System::WideChar &Key);
	DYNAMIC void __fastcall Change();
	DYNAMIC void __fastcall DoEnter();
	
public:
	__fastcall virtual TAdvMemoDropDown(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TAdvMemoDropDown();
	__property System::UnicodeString Text = {read=GetTextEx};
	__property Vcl::Stdctrls::TMemo* Memo = {read=FMemo};
	
__published:
	__property bool AutoDrop = {read=FAutoDrop, write=FAutoDrop, default=0};
	__property System::Classes::TStringList* MemoText = {read=GetMemoText, write=SetMemoText};
	__property Vcl::Menus::TPopupMenu* MemoPopup = {read=FMemoPopup, write=SetMemoPopup};
	__property System::Uitypes::TScrollStyle MemoScrollBars = {read=FMemoScrollBars, write=SetMemoScrollBars, nodefault};
	__property bool MemoReadOnly = {read=FMemoReadOnly, write=SetMemoReadOnly, default=0};
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
	__property EmptyText = {default=0};
	__property EmptyTextFocused;
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
	__property DropDownBorderColor = {default=0};
	__property DropDownBorderWidth = {default=1};
	__property DropDownShadow = {default=1};
	__property DropDownWidth = {default=0};
	__property DropDownHeight = {default=0};
	__property DropPosition = {default=0};
	__property DropDownButtonWidth = {default=17};
	__property DropDownButtonHint = {default=0};
	__property DropDownSizeable = {default=1};
	__property Enabled = {default=1};
	__property EditorEnabled = {default=1};
	__property Font;
	__property DropDownButtonGlyph;
	__property Images;
	__property Version = {default=0};
	__property ReadOnly = {default=0};
	__property ButtonAppearance;
	__property DropDownHeader;
	__property DropDownFooter;
	__property LabelCaption = {default=0};
	__property LabelPosition = {default=0};
	__property LabelMargin = {default=4};
	__property LabelTransparent = {default=0};
	__property LabelAlwaysEnabled = {default=0};
	__property LabelFont;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property ReturnIsTab = {default=0};
	__property TabStop = {default=1};
	__property TabOrder = {default=-1};
	__property System::Classes::TNotifyEvent OnMemoChange = {read=FOnMemoChange, write=FOnMemoChange};
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
	__property UIStyle = {default=8};
public:
	/* TWinControl.CreateParented */ inline __fastcall TAdvMemoDropDown(HWND ParentWindow) : Advdropdown::TAdvCustomDropDown(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Advmemodropdown */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ADVMEMODROPDOWN)
using namespace Advmemodropdown;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AdvmemodropdownHPP
