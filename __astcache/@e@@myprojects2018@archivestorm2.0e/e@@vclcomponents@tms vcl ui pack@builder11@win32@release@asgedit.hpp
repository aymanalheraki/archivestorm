// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'ASGEdit.pas' rev: 35.00 (Windows)

#ifndef AsgeditHPP
#define AsgeditHPP

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
#include <Vcl.Graphics.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Mask.hpp>
#include <AdvXPVS.hpp>
#include <Vcl.ImgList.hpp>
#include <System.UITypes.hpp>
#include <Vcl.Menus.hpp>
#include <System.MaskUtils.hpp>

//-- user supplied -----------------------------------------------------------

namespace Asgedit
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TAdvSpeedButton;
class DELPHICLASS TAsgSpeedButton;
class DELPHICLASS TAsgEditButton;
class DELPHICLASS TAsgEditBtn;
class DELPHICLASS TAsgUnitEditBtn;
//-- type declarations -------------------------------------------------------
using Vcl::Buttons::TNumGlyphs;

class PASCALIMPLEMENTATION TAdvSpeedButton : public Vcl::Buttons::TSpeedButton
{
	typedef Vcl::Buttons::TSpeedButton inherited;
	
private:
	bool FIsWinXP;
	bool FFlat;
	bool FHot;
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Winapi::Messages::TMessage &Message);
	
protected:
	virtual void __fastcall Paint();
	
public:
	__property bool Hot = {read=FHot, write=FHot, nodefault};
	
__published:
	__property bool IsWinXP = {read=FIsWinXP, write=FIsWinXP, nodefault};
	__property bool Flat = {read=FFlat, write=FFlat, nodefault};
public:
	/* TCustomSpeedButton.Create */ inline __fastcall virtual TAdvSpeedButton(System::Classes::TComponent* AOwner) : Vcl::Buttons::TSpeedButton(AOwner) { }
	/* TCustomSpeedButton.Destroy */ inline __fastcall virtual ~TAdvSpeedButton() { }
	
};


class PASCALIMPLEMENTATION TAsgSpeedButton : public Vcl::Buttons::TSpeedButton
{
	typedef Vcl::Buttons::TSpeedButton inherited;
	
private:
	Vcl::Graphics::TPicture* FPicture;
	Vcl::Imglist::TCustomImageList* FImages;
	int FImageIndex;
	HIDESBASE void __fastcall SetImageIndex(const int Value);
	HIDESBASE void __fastcall SetImages(Vcl::Imglist::TCustomImageList* const Value);
	void __fastcall SetPicture(Vcl::Graphics::TPicture* const Value);
	
protected:
	virtual void __fastcall Paint();
	
public:
	__fastcall virtual TAsgSpeedButton(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TAsgSpeedButton();
	
__published:
	__property int ImageIndex = {read=FImageIndex, write=SetImageIndex, default=-1};
	__property Vcl::Imglist::TCustomImageList* Images = {read=FImages, write=SetImages};
	__property Vcl::Graphics::TPicture* Picture = {read=FPicture, write=SetPicture};
};


class PASCALIMPLEMENTATION TAsgEditButton : public Vcl::Controls::TWinControl
{
	typedef Vcl::Controls::TWinControl inherited;
	
private:
	TAdvSpeedButton* FButton;
	Vcl::Controls::TWinControl* FFocusControl;
	System::Classes::TNotifyEvent FOnClick;
	bool FFlat;
	System::Uitypes::TColor FButtonColorDown;
	System::Uitypes::TColor FButtonBorderColor;
	System::Uitypes::TColor FButtonTextColor;
	System::Uitypes::TColor FButtonTextColorHot;
	System::Uitypes::TColor FButtonColor;
	System::Uitypes::TColor FButtonColorHot;
	System::Uitypes::TColor FButtonTextColorDown;
	TAdvSpeedButton* __fastcall CreateButton();
	Vcl::Graphics::TBitmap* __fastcall GetGlyph();
	void __fastcall SetGlyph(Vcl::Graphics::TBitmap* Value);
	Vcl::Buttons::TNumGlyphs __fastcall GetNumGlyphs();
	void __fastcall SetNumGlyphs(Vcl::Buttons::TNumGlyphs Value);
	void __fastcall SetCaption(System::UnicodeString value);
	System::UnicodeString __fastcall GetCaption();
	void __fastcall BtnClick(System::TObject* Sender);
	void __fastcall BtnMouseDown(System::TObject* Sender, System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	HIDESBASE void __fastcall AdjustSize(int &W, int &H);
	HIDESBASE MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Message);
	void __fastcall SetFlat(const bool Value);
	
protected:
	virtual void __fastcall Loaded();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	
public:
	__property TAdvSpeedButton* Button = {read=FButton};
	__fastcall virtual TAsgEditButton(System::Classes::TComponent* AOwner);
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	
__published:
	__property Align = {default=0};
	__property Ctl3D;
	__property Vcl::Graphics::TBitmap* Glyph = {read=GetGlyph, write=SetGlyph};
	__property System::Uitypes::TColor ButtonColor = {read=FButtonColor, write=FButtonColor, default=536870911};
	__property System::Uitypes::TColor ButtonColorHot = {read=FButtonColorHot, write=FButtonColorHot, default=536870911};
	__property System::Uitypes::TColor ButtonColorDown = {read=FButtonColorDown, write=FButtonColorDown, default=536870911};
	__property System::Uitypes::TColor ButtonTextColor = {read=FButtonTextColor, write=FButtonTextColor, default=536870911};
	__property System::Uitypes::TColor ButtonTextColorHot = {read=FButtonTextColorHot, write=FButtonTextColorHot, default=536870911};
	__property System::Uitypes::TColor ButtonTextColorDown = {read=FButtonTextColorDown, write=FButtonTextColorDown, default=536870911};
	__property System::Uitypes::TColor ButtonBorderColor = {read=FButtonBorderColor, write=FButtonBorderColor, default=536870911};
	__property System::UnicodeString ButtonCaption = {read=GetCaption, write=SetCaption};
	__property Vcl::Buttons::TNumGlyphs NumGlyphs = {read=GetNumGlyphs, write=SetNumGlyphs, default=1};
	__property DragCursor = {default=-12};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Vcl::Controls::TWinControl* FocusControl = {read=FFocusControl, write=FFocusControl};
	__property bool Flat = {read=FFlat, write=SetFlat, nodefault};
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
	/* TWinControl.CreateParented */ inline __fastcall TAsgEditButton(HWND ParentWindow) : Vcl::Controls::TWinControl(ParentWindow) { }
	/* TWinControl.Destroy */ inline __fastcall virtual ~TAsgEditButton() { }
	
};


enum DECLSPEC_DENUM TButtonAlign : unsigned char { btnRight, btnLeft };

class PASCALIMPLEMENTATION TAsgEditBtn : public Vcl::Mask::TCustomMaskEdit
{
	typedef Vcl::Mask::TCustomMaskEdit inherited;
	
private:
	int FUnitSize;
	bool FRightAlign;
	TAsgEditButton* FButton;
	bool FEditorEnabled;
	System::Classes::TNotifyEvent FOnClickBtn;
	int FButtonWidth;
	bool FIsWinXP;
	TButtonAlign FButtonAlign;
	int __fastcall GetMinHeight();
	void __fastcall SetEditRect();
	void __fastcall SetGlyph(Vcl::Graphics::TBitmap* value);
	Vcl::Graphics::TBitmap* __fastcall GetGlyph();
	void __fastcall SetCaption(System::UnicodeString value);
	System::UnicodeString __fastcall GetCaption();
	void __fastcall SetRightAlign(bool value);
	HIDESBASE MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Message);
	HIDESBASE MESSAGE void __fastcall CMEnter(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall CMExit(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall WMPaste(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall WMCut(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall WMChar(Winapi::Messages::TWMKey &Message);
	void __fastcall SetButtonWidth(const int Value);
	void __fastcall SetIsWinXP(const bool Value);
	
protected:
	virtual void __fastcall BtnClick(System::TObject* Sender);
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall CreateWnd();
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	void __fastcall UpdateButtonPos();
	
public:
	__fastcall virtual TAsgEditBtn(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TAsgEditBtn();
	__property TAsgEditButton* Button = {read=FButton};
	virtual void __fastcall ValidateEdit();
	virtual bool __fastcall Validate(const System::UnicodeString Value, int &Pos);
	
__published:
	__property AutoSelect = {default=1};
	__property AutoSize = {default=1};
	__property BorderStyle = {default=1};
	__property TButtonAlign ButtonAlign = {read=FButtonAlign, write=FButtonAlign, default=0};
	__property int ButtonWidth = {read=FButtonWidth, write=SetButtonWidth, nodefault};
	__property Color = {default=-16777211};
	__property Ctl3D;
	__property DragCursor = {default=-12};
	__property DragMode = {default=0};
	__property bool EditorEnabled = {read=FEditorEnabled, write=FEditorEnabled, default=1};
	__property Enabled = {default=1};
	__property Font;
	__property Vcl::Graphics::TBitmap* Glyph = {read=GetGlyph, write=SetGlyph};
	__property bool IsWinXP = {read=FIsWinXP, write=SetIsWinXP, nodefault};
	__property System::UnicodeString ButtonCaption = {read=GetCaption, write=SetCaption};
	__property MaxLength = {default=0};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ReadOnly = {default=0};
	__property bool RightAlign = {read=FRightAlign, write=SetRightAlign, nodefault};
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Text;
	__property Visible = {default=1};
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
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnStartDrag;
	__property System::Classes::TNotifyEvent OnClickBtn = {read=FOnClickBtn, write=FOnClickBtn};
public:
	/* TWinControl.CreateParented */ inline __fastcall TAsgEditBtn(HWND ParentWindow) : Vcl::Mask::TCustomMaskEdit(ParentWindow) { }
	
};


typedef void __fastcall (__closure *TUnitChangeEvent)(System::TObject* Sender, System::UnicodeString NewUnit);

class PASCALIMPLEMENTATION TAsgUnitEditBtn : public TAsgEditBtn
{
	typedef TAsgEditBtn inherited;
	
private:
	System::UnicodeString FUnitID;
	System::Classes::TStringList* FUnits;
	TUnitChangeEvent FUnitChanged;
	void __fastcall SetUnitSize(int value);
	int __fastcall GetUnitSize();
	void __fastcall SetUnits(System::Classes::TStringList* value);
	void __fastcall SetUnitID(System::UnicodeString value);
	HIDESBASE MESSAGE void __fastcall WMPaint(Winapi::Messages::TWMPaint &Msg);
	HIDESBASE MESSAGE void __fastcall WMCommand(Winapi::Messages::TWMCommand &Message);
	System::UnicodeString __fastcall GetTextAndUnit();
	void __fastcall SetTextAndUnit(const System::UnicodeString Value);
	
protected:
	virtual void __fastcall BtnClick(System::TObject* Sender);
	
public:
	__fastcall virtual TAsgUnitEditBtn(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TAsgUnitEditBtn();
	__property System::UnicodeString TextAndUnit = {read=GetTextAndUnit, write=SetTextAndUnit};
	
__published:
	__property System::Classes::TStringList* Units = {read=FUnits, write=SetUnits};
	__property System::UnicodeString UnitID = {read=FUnitID, write=SetUnitID};
	__property int UnitSpace = {read=GetUnitSize, write=SetUnitSize, nodefault};
	__property TUnitChangeEvent OnUnitChanged = {read=FUnitChanged, write=FUnitChanged};
public:
	/* TWinControl.CreateParented */ inline __fastcall TAsgUnitEditBtn(HWND ParentWindow) : TAsgEditBtn(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::Word InitRepeatPause = System::Word(0x190);
static const System::Int8 RepeatPause = System::Int8(0x64);
}	/* namespace Asgedit */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ASGEDIT)
using namespace Asgedit;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AsgeditHPP
