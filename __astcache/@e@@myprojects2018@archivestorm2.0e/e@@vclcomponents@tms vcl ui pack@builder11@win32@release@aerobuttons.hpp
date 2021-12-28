// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AeroButtons.pas' rev: 35.00 (Windows)

#ifndef AerobuttonsHPP
#define AerobuttonsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <Winapi.Windows.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Buttons.hpp>
#include <Winapi.Messages.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.ActnList.hpp>
#include <System.SysUtils.hpp>
#include <Winapi.CommCtrl.hpp>
#include <AdvGDIP.hpp>
#include <System.Types.hpp>
#include <AeroRes.hpp>
#include <System.UITypes.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Vcl.Menus.hpp>
#include <System.Actions.hpp>

//-- user supplied -----------------------------------------------------------

namespace Aerobuttons
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TAeroButton;
class DELPHICLASS TAeroBitBtnActionLink;
class DELPHICLASS TAeroBitBtn;
class DELPHICLASS TAeroSpeedButtonActionLink;
class DELPHICLASS TAeroSpeedButton;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TImagePos : unsigned char { ipLeft, ipRight, ipTop, ipBottom };

class PASCALIMPLEMENTATION TAeroButton : public Vcl::Stdctrls::TCustomButton
{
	typedef Vcl::Stdctrls::TCustomButton inherited;
	
private:
	bool IsFocused;
	Vcl::Graphics::TCanvas* FCanvas;
	System::TObject* FGlyph;
	bool FMouseInControl;
	TImagePos FImagePos;
	Vcl::Imglist::TCustomImageList* FImages;
	int FSpacing;
	System::Uitypes::TImageIndex FImageIndex;
	void __fastcall DrawItem(const tagDRAWITEMSTRUCT &DrawItemStruct);
	MESSAGE void __fastcall CNMeasureItem(Winapi::Messages::TWMMeasureItem &Message);
	MESSAGE void __fastcall CNDrawItem(Winapi::Messages::TWMDrawItem &Message);
	HIDESBASE MESSAGE void __fastcall WMPaint(Winapi::Messages::TWMPaint &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMFocusChanged(Vcl::Controls::TCMFocusChanged &Message);
	HIDESBASE MESSAGE void __fastcall WMLButtonDblClk(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Winapi::Messages::TWMSetFocus &Message);
	HIDESBASE MESSAGE void __fastcall WMKillFocus(Winapi::Messages::TWMSetFocus &Message);
	void __fastcall GlyphChanged(System::TObject* Sender);
	HIDESBASE void __fastcall SetImageIndex(const System::Uitypes::TImageIndex Value);
	void __fastcall SetImagePos(const TImagePos Value);
	HIDESBASE void __fastcall SetImages(Vcl::Imglist::TCustomImageList* const Value);
	void __fastcall SetSpacing(const int Value);
	System::UnicodeString __fastcall GetVersion();
	void __fastcall SetVersion(const System::UnicodeString Value);
	
protected:
	virtual void __fastcall CreateHandle();
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TWMEraseBkgnd &Message);
	HIDESBASE MESSAGE void __fastcall CNCtlColorBtn(Winapi::Messages::TWMCtlColor &Message);
	virtual void __fastcall SetButtonStyle(bool ADefault);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation AOperation);
	
public:
	__fastcall virtual TAeroButton(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TAeroButton();
	virtual int __fastcall GetVersionNr();
	
__published:
	__property System::Uitypes::TImageIndex ImageIndex = {read=FImageIndex, write=SetImageIndex, default=-1};
	__property Vcl::Imglist::TCustomImageList* Images = {read=FImages, write=SetImages};
	__property TImagePos ImagePos = {read=FImagePos, write=SetImagePos, default=0};
	__property int Spacing = {read=FSpacing, write=SetSpacing, default=4};
	__property System::UnicodeString Version = {read=GetVersion, write=SetVersion};
	__property Action;
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property BiDiMode;
	__property Cancel = {default=0};
	__property Caption = {default=0};
	__property Constraints;
	__property Default = {default=0};
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property ModalResult = {default=0};
	__property ParentBiDiMode = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Visible = {default=1};
	__property WordWrap = {default=0};
	__property OnClick;
	__property OnContextPopup;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMouseDown;
	__property OnMouseActivate;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnStartDock;
	__property OnStartDrag;
public:
	/* TWinControl.CreateParented */ inline __fastcall TAeroButton(HWND ParentWindow) : Vcl::Stdctrls::TCustomButton(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TAeroBitBtnActionLink : public Vcl::Controls::TControlActionLink
{
	typedef Vcl::Controls::TControlActionLink inherited;
	
protected:
	TAeroBitBtn* FClient;
	int FImageIndex;
	virtual void __fastcall AssignClient(System::TObject* AClient);
	virtual bool __fastcall IsImageIndexLinked();
	virtual void __fastcall SetImageIndex(int Value);
	
public:
	__fastcall virtual TAeroBitBtnActionLink(System::TObject* AClient);
public:
	/* TBasicActionLink.Destroy */ inline __fastcall virtual ~TAeroBitBtnActionLink() { }
	
};


class PASCALIMPLEMENTATION TAeroBitBtn : public Vcl::Stdctrls::TCustomButton
{
	typedef Vcl::Stdctrls::TCustomButton inherited;
	
private:
	Vcl::Graphics::TCanvas* FCanvas;
	System::TObject* FGlyph;
	Vcl::Buttons::TButtonStyle FStyle;
	Vcl::Buttons::TBitBtnKind FKind;
	Vcl::Buttons::TButtonLayout FLayout;
	int FSpacing;
	int FMargin;
	bool IsFocused;
	bool FModifiedGlyph;
	bool FMouseInControl;
	void __fastcall DrawItem(const tagDRAWITEMSTRUCT &DrawItemStruct);
	void __fastcall SetGlyph(Vcl::Graphics::TBitmap* Value);
	Vcl::Graphics::TBitmap* __fastcall GetGlyph();
	Vcl::Buttons::TNumGlyphs __fastcall GetNumGlyphs();
	void __fastcall SetNumGlyphs(Vcl::Buttons::TNumGlyphs Value);
	void __fastcall GlyphChanged(System::TObject* Sender);
	bool __fastcall IsCustom();
	bool __fastcall IsCustomCaption();
	HIDESBASE void __fastcall SetStyle(Vcl::Buttons::TButtonStyle Value);
	void __fastcall SetKind(Vcl::Buttons::TBitBtnKind Value);
	Vcl::Buttons::TBitBtnKind __fastcall GetKind();
	void __fastcall SetLayout(Vcl::Buttons::TButtonLayout Value);
	void __fastcall SetSpacing(int Value);
	void __fastcall SetMargin(int Value);
	MESSAGE void __fastcall CNMeasureItem(Winapi::Messages::TWMMeasureItem &Message);
	MESSAGE void __fastcall CNDrawItem(Winapi::Messages::TWMDrawItem &Message);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMEnabledChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMLButtonDblClk(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TWMEraseBkgnd &Message);
	HIDESBASE MESSAGE void __fastcall CNCtlColorBtn(Winapi::Messages::TWMCtlColor &Message);
	HIDESBASE MESSAGE void __fastcall WMPaint(Winapi::Messages::TWMPaint &Message);
	HIDESBASE MESSAGE void __fastcall CMFocusChanged(Vcl::Controls::TCMFocusChanged &Message);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Winapi::Messages::TWMSetFocus &Message);
	HIDESBASE MESSAGE void __fastcall WMKillFocus(Winapi::Messages::TWMSetFocus &Message);
	System::UnicodeString __fastcall GetVersion();
	void __fastcall SetVersion(const System::UnicodeString Value);
	
protected:
	DYNAMIC void __fastcall ActionChange(System::TObject* Sender, bool CheckDefaults);
	void __fastcall CopyImage(Vcl::Imglist::TCustomImageList* ImageList, int Index);
	virtual void __fastcall CreateHandle();
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	DYNAMIC Vcl::Controls::TControlActionLinkClass __fastcall GetActionLinkClass();
	DYNAMIC HPALETTE __fastcall GetPalette();
	virtual void __fastcall SetButtonStyle(bool ADefault);
	
public:
	__fastcall virtual TAeroBitBtn(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TAeroBitBtn();
	DYNAMIC void __fastcall Click();
	virtual int __fastcall GetVersionNr();
	
__published:
	__property Action;
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property BiDiMode;
	__property Cancel = {stored=IsCustom, default=0};
	__property Caption = {stored=IsCustomCaption, default=0};
	__property Constraints;
	__property Default = {stored=IsCustom, default=0};
	__property Enabled = {default=1};
	__property Vcl::Graphics::TBitmap* Glyph = {read=GetGlyph, write=SetGlyph, stored=IsCustom};
	__property Vcl::Buttons::TBitBtnKind Kind = {read=GetKind, write=SetKind, default=0};
	__property Vcl::Buttons::TButtonLayout Layout = {read=FLayout, write=SetLayout, default=0};
	__property int Margin = {read=FMargin, write=SetMargin, default=-1};
	__property ModalResult = {stored=IsCustom, default=0};
	__property Vcl::Buttons::TNumGlyphs NumGlyphs = {read=GetNumGlyphs, write=SetNumGlyphs, stored=IsCustom, default=1};
	__property ParentShowHint = {default=1};
	__property ParentBiDiMode = {default=1};
	__property ShowHint;
	__property Vcl::Buttons::TButtonStyle Style = {read=FStyle, write=SetStyle, default=0};
	__property int Spacing = {read=FSpacing, write=SetSpacing, default=4};
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property System::UnicodeString Version = {read=GetVersion, write=SetVersion};
	__property Visible = {default=1};
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Font;
	__property ParentFont = {default=1};
	__property PopupMenu;
	__property WordWrap = {default=0};
	__property OnClick;
	__property OnContextPopup;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMouseActivate;
	__property OnMouseDown;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnStartDock;
	__property OnStartDrag;
	__property OnEnter;
	__property OnExit;
public:
	/* TWinControl.CreateParented */ inline __fastcall TAeroBitBtn(HWND ParentWindow) : Vcl::Stdctrls::TCustomButton(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TAeroSpeedButtonActionLink : public Vcl::Controls::TControlActionLink
{
	typedef Vcl::Controls::TControlActionLink inherited;
	
protected:
	TAeroSpeedButton* FClient;
	int FImageIndex;
	virtual void __fastcall AssignClient(System::TObject* AClient);
	virtual bool __fastcall IsCheckedLinked();
	virtual bool __fastcall IsGroupIndexLinked();
	virtual bool __fastcall IsImageIndexLinked();
	virtual void __fastcall SetGroupIndex(int Value);
	virtual void __fastcall SetChecked(bool Value);
	virtual void __fastcall SetImageIndex(int Value);
	
public:
	__fastcall virtual TAeroSpeedButtonActionLink(System::TObject* AClient);
public:
	/* TBasicActionLink.Destroy */ inline __fastcall virtual ~TAeroSpeedButtonActionLink() { }
	
};


class PASCALIMPLEMENTATION TAeroSpeedButton : public Vcl::Controls::TGraphicControl
{
	typedef Vcl::Controls::TGraphicControl inherited;
	
private:
	int FGroupIndex;
	System::TObject* FGlyph;
	bool FDown;
	bool FDragging;
	bool FAllowAllUp;
	Vcl::Buttons::TButtonLayout FLayout;
	int FSpacing;
	bool FTransparent;
	int FMargin;
	bool FFlat;
	bool FMouseInControl;
	void __fastcall GlyphChanged(System::TObject* Sender);
	void __fastcall UpdateExclusive();
	Vcl::Graphics::TBitmap* __fastcall GetGlyph();
	void __fastcall SetGlyph(Vcl::Graphics::TBitmap* Value);
	Vcl::Buttons::TNumGlyphs __fastcall GetNumGlyphs();
	void __fastcall SetNumGlyphs(Vcl::Buttons::TNumGlyphs Value);
	void __fastcall SetDown(bool Value);
	void __fastcall SetFlat(bool Value);
	void __fastcall SetAllowAllUp(bool Value);
	void __fastcall SetGroupIndex(int Value);
	void __fastcall SetLayout(Vcl::Buttons::TButtonLayout Value);
	void __fastcall SetSpacing(int Value);
	void __fastcall SetTransparent(bool Value);
	void __fastcall SetMargin(int Value);
	void __fastcall UpdateTracking();
	HIDESBASE MESSAGE void __fastcall WMLButtonDblClk(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall CMEnabledChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMButtonPressed(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMDialogChar(Winapi::Messages::TWMKey &Message);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMTextChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMSysColorChange(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Winapi::Messages::TMessage &Message);
	
protected:
	Vcl::Buttons::TButtonState FState;
	DYNAMIC void __fastcall ActionChange(System::TObject* Sender, bool CheckDefaults);
	void __fastcall CopyImage(Vcl::Imglist::TCustomImageList* ImageList, int Index);
	DYNAMIC Vcl::Controls::TControlActionLinkClass __fastcall GetActionLinkClass();
	DYNAMIC HPALETTE __fastcall GetPalette();
	virtual void __fastcall Loaded();
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall Paint();
	__property bool MouseInControl = {read=FMouseInControl, nodefault};
	
public:
	__fastcall virtual TAeroSpeedButton(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TAeroSpeedButton();
	DYNAMIC void __fastcall Click();
	
__published:
	__property Action;
	__property Align = {default=0};
	__property bool AllowAllUp = {read=FAllowAllUp, write=SetAllowAllUp, default=0};
	__property Anchors = {default=3};
	__property BiDiMode;
	__property Constraints;
	__property int GroupIndex = {read=FGroupIndex, write=SetGroupIndex, default=0};
	__property bool Down = {read=FDown, write=SetDown, default=0};
	__property Caption = {default=0};
	__property Enabled = {default=1};
	__property bool Flat = {read=FFlat, write=SetFlat, default=1};
	__property Font;
	__property Vcl::Graphics::TBitmap* Glyph = {read=GetGlyph, write=SetGlyph};
	__property Vcl::Buttons::TButtonLayout Layout = {read=FLayout, write=SetLayout, default=0};
	__property int Margin = {read=FMargin, write=SetMargin, default=-1};
	__property Vcl::Buttons::TNumGlyphs NumGlyphs = {read=GetNumGlyphs, write=SetNumGlyphs, default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property ParentBiDiMode = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property int Spacing = {read=FSpacing, write=SetSpacing, default=4};
	__property bool Transparent = {read=FTransparent, write=SetTransparent, default=1};
	__property Visible = {default=1};
	__property OnClick;
	__property OnDblClick;
	__property OnMouseActivate;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
};


//-- var, const, procedure ---------------------------------------------------
static const System::Int8 MAJ_VER = System::Int8(0x1);
static const System::Int8 MIN_VER = System::Int8(0x0);
static const System::Int8 REL_VER = System::Int8(0x0);
static const System::Int8 BLD_VER = System::Int8(0x2);
}	/* namespace Aerobuttons */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_AEROBUTTONS)
using namespace Aerobuttons;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AerobuttonsHPP
