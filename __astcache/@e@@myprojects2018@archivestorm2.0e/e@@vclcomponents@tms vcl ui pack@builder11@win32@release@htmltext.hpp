// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'HTMLText.pas' rev: 35.00 (Windows)

#ifndef HtmltextHPP
#define HtmltextHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <System.Win.ComObj.hpp>
#include <Winapi.ActiveX.hpp>
#include <PictureContainer.hpp>
#include <Vcl.ImgList.hpp>
#include <System.Types.hpp>
#include <System.UITypes.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.Themes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Htmltext
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS THTMLStaticText;
class DELPHICLASS THTMLStaticTextStyleHook;
//-- type declarations -------------------------------------------------------
typedef System::UnicodeString TRichText;

typedef void __fastcall (__closure *TOnNewSize)(System::TObject* Sender, int NewWidth, int NewHeight);

typedef void __fastcall (__closure *TAnchorClick)(System::TObject* Sender, System::UnicodeString Anchor);

typedef void __fastcall (__closure *TAnchorHintEvent)(System::TObject* Sender, System::UnicodeString &Anchor);

enum DECLSPEC_DENUM TVAlignment : unsigned char { tvaTop, tvaCenter, tvaBottom };

enum DECLSPEC_DENUM TAutoSizeType : unsigned char { asVertical, asHorizontal, asBoth };

class PASCALIMPLEMENTATION THTMLStaticText : public Vcl::Stdctrls::TCustomStaticText
{
	typedef Vcl::Stdctrls::TCustomStaticText inherited;
	
private:
	bool FBlinking;
	System::UnicodeString FAnchor;
	System::Types::TRect FCurrHoverRect;
	bool FAutoSizing;
	System::Classes::TStrings* FHTMLText;
	bool FAnchorHint;
	TAnchorClick FOnAnchorClick;
	TAnchorClick FOnAnchorRightClick;
	TAnchorClick FOnAnchorEnter;
	TAnchorClick FOnAnchorExit;
	TAnchorClick FOnAnchorKeypress;
	TAnchorHintEvent FOnAnchorHint;
	Vcl::Imglist::TCustomImageList* FImages;
	Picturecontainer::THTMLPictureCache* FImageCache;
	bool FHover;
	System::Uitypes::TColor FHoverColor;
	System::Uitypes::TColor FHoverFontColor;
	System::Uitypes::TColor FShadowColor;
	int FShadowOffset;
	int Fupdatecount;
	int FTimerID;
	System::Uitypes::TColor FURLColor;
	Vcl::Controls::TBevelCut FBevelInner;
	Vcl::Controls::TBevelCut FBevelOuter;
	Vcl::Controls::TBevelWidth FBevelWidth;
	Vcl::Controls::TBorderWidth FBorderWidth;
	Vcl::Forms::TFormBorderStyle FBorderStyle;
	int FFocusHyperLink;
	int FHoverHyperLink;
	int FOldHoverHyperlink;
	System::UnicodeString FFocusAnchor;
	int FNumHyperLinks;
	bool FEnableBlink;
	System::Classes::TNotifyEvent FOnMouseLeave;
	System::Classes::TNotifyEvent FOnMouseEnter;
	TVAlignment FVAlignment;
	int FTimerCount;
	TAutoSizeType FAutoSizeType;
	bool FEllipsis;
	Picturecontainer::TPictureContainer* FContainer;
	int FVOffset;
	bool FMiniScroll;
	bool FUpScroll;
	bool FDownScroll;
	bool FMouseDown;
	bool FAutoScroll;
	int FHTMLWidth;
	int FHTMLHeight;
	int FLineSpacing;
	TOnNewSize FOnNewSize;
	bool FFormScaled;
	bool FUseVCLStyles;
	float FDPIScale;
	System::Classes::TNotifyEvent FOnScrollChanged;
	void __fastcall InitVCLStyle(bool init);
	MESSAGE void __fastcall CMStyleChanged(Winapi::Messages::TMessage &Message);
	void __fastcall SetHTMLText(System::Classes::TStrings* value);
	void __fastcall SetImages(Vcl::Imglist::TCustomImageList* value);
	void __fastcall SetURLColor(System::Uitypes::TColor value);
	void __fastcall SetAutoSizeP(bool value);
	void __fastcall HTMLChanged(System::TObject* sender);
	void __fastcall SetBevelInner(Vcl::Controls::TBevelCut Value);
	void __fastcall SetBevelOuter(Vcl::Controls::TBevelCut Value);
	HIDESBASE void __fastcall SetBevelWidth(Vcl::Controls::TBevelWidth Value);
	HIDESBASE void __fastcall SetBorderWidth(Vcl::Controls::TBorderWidth Value);
	HIDESBASE void __fastcall SetBorderStyle(Vcl::Forms::TBorderStyle Value);
	void __fastcall SetHover(bool Value);
	System::UnicodeString __fastcall IsAnchor(int x, int y, System::Types::TRect &hoverrect);
	HIDESBASE MESSAGE void __fastcall CMHintShow(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall CMEnabledChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMPaint(Winapi::Messages::TWMPaint &Message);
	MESSAGE void __fastcall WMTimer(Winapi::Messages::TWMTimer &Msg);
	HIDESBASE MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Msg);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Winapi::Messages::TWMSetFocus &Msg);
	HIDESBASE MESSAGE void __fastcall WMKillFocus(Winapi::Messages::TWMKillFocus &Msg);
	HIDESBASE MESSAGE void __fastcall WMKeyDown(Winapi::Messages::TWMKey &Msg);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TWMEraseBkgnd &Message);
	MESSAGE void __fastcall CMWantSpecialKey(Winapi::Messages::TWMKey &Msg);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Winapi::Messages::TMessage &Message);
	void __fastcall DoPaint(bool bkg, Vcl::Graphics::TCanvas* const ACanvas = (Vcl::Graphics::TCanvas*)(0x0));
	void __fastcall SetShadowColor(const System::Uitypes::TColor Value);
	void __fastcall SetShadowOffset(const int Value);
	void __fastcall SetEnableBlink(const bool Value);
	HIDESBASE System::UnicodeString __fastcall GetText();
	void __fastcall SetVAlignment(const TVAlignment Value);
	void __fastcall SetAutoSizeType(const TAutoSizeType Value);
	void __fastcall SetEllipsis(const bool Value);
	void __fastcall SetVOffset(const int Value);
	void __fastcall SetMiniScroll(const bool Value);
	void __fastcall SetAutoScroll(const bool Value);
	System::UnicodeString __fastcall GetVersion();
	void __fastcall SetVersion(const System::UnicodeString Value);
	int __fastcall GetVersionNr();
	void __fastcall SetLineSpacing(const int Value);
	
protected:
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation AOperation);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	virtual void __fastcall CreateWnd();
	virtual void __fastcall Loaded();
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	virtual System::UnicodeString __fastcall GetDisplText();
	virtual void __fastcall DoScrollChanged();
	virtual void __fastcall DoAnchorClick(System::UnicodeString Anchor);
	virtual void __fastcall DoAnchorRightClick(System::UnicodeString Anchor);
	DYNAMIC void __fastcall ChangeScale(int M, int D, bool isDpiChange)/* overload */;
	
public:
	__fastcall virtual THTMLStaticText(System::Classes::TComponent* AOwner);
	__fastcall virtual ~THTMLStaticText();
	void __fastcall BeginUpdate();
	void __fastcall EndUpdate();
	void __fastcall Doit();
	__property System::UnicodeString Text = {read=GetText};
	__property int VOffset = {read=FVOffset, write=SetVOffset, nodefault};
	void __fastcall HilightText(System::UnicodeString HiText, bool DoCase);
	void __fastcall UnHilightText();
	void __fastcall MarkText(System::UnicodeString HiText, bool DoCase);
	void __fastcall UnMarkText();
	__property int HTMLWidth = {read=FHTMLWidth, nodefault};
	__property int HTMLHeight = {read=FHTMLHeight, nodefault};
	
__published:
	__property Align = {default=0};
	__property bool AutoScroll = {read=FAutoScroll, write=SetAutoScroll, default=0};
	__property TAutoSizeType AutoSizeType = {read=FAutoSizeType, write=SetAutoSizeType, default=0};
	__property Anchors = {default=3};
	__property BiDiMode;
	__property Constraints;
	__property DragKind = {default=0};
	__property ParentBiDiMode = {default=1};
	__property bool AnchorHint = {read=FAnchorHint, write=FAnchorHint, default=0};
	__property bool AutoSizing = {read=FAutoSizing, write=SetAutoSizeP, default=0};
	__property Vcl::Controls::TBevelCut BevelInner = {read=FBevelInner, write=SetBevelInner, default=0};
	__property Vcl::Controls::TBevelCut BevelOuter = {read=FBevelOuter, write=SetBevelOuter, default=0};
	__property Vcl::Controls::TBevelWidth BevelWidth = {read=FBevelWidth, write=SetBevelWidth, default=1};
	__property Vcl::Controls::TBorderWidth BorderWidth = {read=FBorderWidth, write=SetBorderWidth, default=0};
	__property Vcl::Forms::TBorderStyle BorderStyle = {read=FBorderStyle, write=SetBorderStyle, default=0};
	__property Color = {default=-16777211};
	__property DragCursor = {default=-12};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property bool EnableBlink = {read=FEnableBlink, write=SetEnableBlink, default=0};
	__property bool Ellipsis = {read=FEllipsis, write=SetEllipsis, default=0};
	__property FocusControl;
	__property Font;
	__property bool Hover = {read=FHover, write=SetHover, default=0};
	__property System::Uitypes::TColor HoverColor = {read=FHoverColor, write=FHoverColor, default=536870911};
	__property System::Uitypes::TColor HoverFontColor = {read=FHoverFontColor, write=FHoverFontColor, default=536870911};
	__property Hint = {default=0};
	__property System::Classes::TStrings* HTMLText = {read=FHTMLText, write=SetHTMLText};
	__property Vcl::Imglist::TCustomImageList* Images = {read=FImages, write=SetImages};
	__property int LineSpacing = {read=FLineSpacing, write=SetLineSpacing, default=0};
	__property bool MiniScroll = {read=FMiniScroll, write=SetMiniScroll, default=0};
	__property ParentShowHint = {default=1};
	__property ParentColor = {default=1};
	__property ParentFont = {default=1};
	__property Picturecontainer::TPictureContainer* PictureContainer = {read=FContainer, write=FContainer};
	__property PopupMenu;
	__property System::Uitypes::TColor ShadowColor = {read=FShadowColor, write=SetShadowColor, default=8421504};
	__property int ShadowOffset = {read=FShadowOffset, write=SetShadowOffset, default=1};
	__property ShowHint;
	__property StyleElements = {default=7};
	__property TabStop = {default=0};
	__property TabOrder = {default=-1};
	__property System::Uitypes::TColor URLColor = {read=FURLColor, write=SetURLColor, default=16711680};
	__property TVAlignment VAlignment = {read=FVAlignment, write=SetVAlignment, default=0};
	__property Visible = {default=1};
	__property OnClick;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDrag;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnStartDrag;
	__property TAnchorClick OnAnchorClick = {read=FOnAnchorClick, write=FOnAnchorClick};
	__property TAnchorClick OnAnchorRightClick = {read=FOnAnchorRightClick, write=FOnAnchorRightClick};
	__property TAnchorClick OnAnchorEnter = {read=FOnAnchorEnter, write=FOnAnchorEnter};
	__property TAnchorClick OnAnchorExit = {read=FOnAnchorExit, write=FOnAnchorExit};
	__property TAnchorClick OnAnchorKeypress = {read=FOnAnchorKeypress, write=FOnAnchorKeypress};
	__property TAnchorHintEvent OnAnchorHint = {read=FOnAnchorHint, write=FOnAnchorHint};
	__property System::Classes::TNotifyEvent OnMouseLeave = {read=FOnMouseLeave, write=FOnMouseLeave};
	__property System::Classes::TNotifyEvent OnMouseEnter = {read=FOnMouseEnter, write=FOnMouseEnter};
	__property TOnNewSize OnNewSize = {read=FOnNewSize, write=FOnNewSize};
	__property System::Classes::TNotifyEvent OnScrollChanged = {read=FOnScrollChanged, write=FOnScrollChanged};
	__property System::UnicodeString Version = {read=GetVersion, write=SetVersion};
public:
	/* TWinControl.CreateParented */ inline __fastcall THTMLStaticText(HWND ParentWindow) : Vcl::Stdctrls::TCustomStaticText(ParentWindow) { }
	
	/* Hoisted overloads: */
	
protected:
	DYNAMIC inline void __fastcall  ChangeScale(int M, int D){ Vcl::Controls::TControl::ChangeScale(M, D); }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION THTMLStaticTextStyleHook : public Vcl::Stdctrls::TStaticTextStyleHook
{
	typedef Vcl::Stdctrls::TStaticTextStyleHook inherited;
	
protected:
	virtual void __fastcall Paint(Vcl::Graphics::TCanvas* Canvas);
public:
	/* TStaticTextStyleHook.Create */ inline __fastcall virtual THTMLStaticTextStyleHook(Vcl::Controls::TWinControl* AControl) : Vcl::Stdctrls::TStaticTextStyleHook(AControl) { }
	
public:
	/* TStyleHook.Destroy */ inline __fastcall virtual ~THTMLStaticTextStyleHook() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const System::Int8 MAJ_VER = System::Int8(0x1);
static const System::Int8 MIN_VER = System::Int8(0x6);
static const System::Int8 REL_VER = System::Int8(0x0);
static const System::Int8 BLD_VER = System::Int8(0x0);
}	/* namespace Htmltext */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_HTMLTEXT)
using namespace Htmltext;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// HtmltextHPP
