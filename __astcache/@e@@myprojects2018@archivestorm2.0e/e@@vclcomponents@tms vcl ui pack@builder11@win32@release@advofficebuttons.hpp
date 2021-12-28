// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AdvOfficeButtons.pas' rev: 35.00 (Windows)

#ifndef AdvofficebuttonsHPP
#define AdvofficebuttonsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <PictureContainer.hpp>
#include <AdvGroupBox.hpp>
#include <System.Types.hpp>
#include <AdvStyleIF.hpp>
#include <System.UITypes.hpp>
#include <Vcl.ActnList.hpp>
#include <System.Actions.hpp>
#include <Vcl.Menus.hpp>

//-- user supplied -----------------------------------------------------------

namespace Advofficebuttons
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TAdvOfficeCheckBoxActionLink;
class DELPHICLASS TCustomAdvOfficeCheckBox;
class DELPHICLASS TAdvOfficeCheckBox;
class DELPHICLASS TAdvOfficeRadioButtonActionLink;
class DELPHICLASS TCustomAdvOfficeRadioButton;
class DELPHICLASS TAdvOfficeRadioButton;
class DELPHICLASS TCustomAdvOfficeRadioGroup;
class DELPHICLASS TAdvOfficeRadioGroup;
class DELPHICLASS TCustomAdvOfficeCheckGroup;
class DELPHICLASS TAdvOfficeCheckGroup;
//-- type declarations -------------------------------------------------------
typedef void __fastcall (__closure *TAnchorClick)(System::TObject* Sender, System::UnicodeString Anchor);

typedef void __fastcall (__closure *TCheckBoxClick)(System::TObject* Sender, int CheckBoxIndex, bool Value);

class PASCALIMPLEMENTATION TAdvOfficeCheckBoxActionLink : public Vcl::Controls::TControlActionLink
{
	typedef Vcl::Controls::TControlActionLink inherited;
	
protected:
	int FImageIndex;
	TCustomAdvOfficeCheckBox* FClient;
	virtual bool __fastcall IsCaptionLinked();
	virtual bool __fastcall IsCheckedLinked();
	virtual void __fastcall AssignClient(System::TObject* AClient);
	virtual void __fastcall SetChecked(bool Value);
	virtual void __fastcall SetCaption(const System::UnicodeString Value);
public:
	/* TBasicActionLink.Create */ inline __fastcall virtual TAdvOfficeCheckBoxActionLink(System::TObject* AClient) : Vcl::Controls::TControlActionLink(AClient) { }
	/* TBasicActionLink.Destroy */ inline __fastcall virtual ~TAdvOfficeCheckBoxActionLink() { }
	
};


class PASCALIMPLEMENTATION TCustomAdvOfficeCheckBox : public Vcl::Controls::TCustomControl
{
	typedef Vcl::Controls::TCustomControl inherited;
	
private:
	bool FAllowGrayed;
	bool FDown;
	Vcl::Stdctrls::TCheckBoxState FState;
	bool FFocused;
	bool FShowFocus;
	bool FReturnIsTab;
	Vcl::Controls::TImageList* FImages;
	System::UnicodeString FAnchor;
	TAnchorClick FAnchorClick;
	TAnchorClick FAnchorEnter;
	TAnchorClick FAnchorExit;
	System::Uitypes::TColor FURLColor;
	Picturecontainer::THTMLPictureCache* FImageCache;
	Vcl::Stdctrls::TTextLayout FBtnVAlign;
	System::Classes::TAlignment FAlignment;
	bool FEllipsis;
	System::UnicodeString FCaption;
	Picturecontainer::TPictureContainer* FContainer;
	int FShadowOffset;
	System::Uitypes::TColor FShadowColor;
	bool FIsWinXP;
	bool FIsWin7;
	bool FHot;
	bool FClicksDisabled;
	System::Uitypes::TCursor FOldCursor;
	bool FReadOnly;
	Vcl::Graphics::TBitmap* FBkgBmp;
	bool FBkgCache;
	bool FTransparentCaching;
	bool FDrawBkg;
	bool FGotClick;
	System::Uitypes::TColor FDisabledFontColor;
	bool FInternalClick;
	bool FThemed;
	float FDPIScale;
	bool FAutoSize;
	int FCtrlWidth;
	bool FFormScaled;
	bool FUseVCLStyles;
	Advstyleif::TTMSStyle FTMSStyle;
	bool FTransparent;
	void __fastcall InitVCLStyle(bool init);
	MESSAGE void __fastcall CMStyleChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMEraseBkGnd(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMEnabledChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMDialogChar(Winapi::Messages::TWMKey &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Winapi::Messages::TMessage &Message);
	void __fastcall SetState(Vcl::Stdctrls::TCheckBoxState Value);
	void __fastcall SetCaption(System::UnicodeString Value);
	void __fastcall SetImages(Vcl::Controls::TImageList* const Value);
	void __fastcall SetURLColor(const System::Uitypes::TColor Value);
	System::UnicodeString __fastcall IsAnchor(int x, int y);
	void __fastcall SetButtonVertAlign(const Vcl::Stdctrls::TTextLayout Value);
	void __fastcall SetAlignment(const System::Classes::TLeftRight Value);
	void __fastcall SetEllipsis(const bool Value);
	void __fastcall SetContainer(Picturecontainer::TPictureContainer* const Value);
	void __fastcall SetShadowColor(const System::Uitypes::TColor Value);
	void __fastcall SetShadowOffset(const int Value);
	System::UnicodeString __fastcall GetVersion();
	void __fastcall SetVersion(const System::UnicodeString Value);
	void __fastcall SetThemed(const bool Value);
	void __fastcall DrawParentImage(Vcl::Controls::TControl* Control, Vcl::Graphics::TCanvas* Dest);
	void __fastcall SetAutoSizeEx(const bool Value);
	void __fastcall DoUpdateSize();
	void __fastcall SetUIStyle(const Advstyleif::TTMSStyle Value);
	void __fastcall SetTransparent(const bool Value);
	
protected:
	virtual int __fastcall GetVersionNr();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation AOperation);
	int __fastcall DrawCheck();
	virtual void __fastcall Paint();
	virtual void __fastcall SetChecked(bool Value);
	virtual bool __fastcall GetChecked();
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyUp(System::Word &Key, System::Classes::TShiftState Shift);
	void __fastcall SetDown(bool Value);
	virtual void __fastcall Loaded();
	DYNAMIC void __fastcall DoEnter();
	DYNAMIC void __fastcall DoExit();
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	virtual void __fastcall CreateWnd();
	__property bool Checked = {read=GetChecked, write=SetChecked, default=0};
	__property bool ClicksDisabled = {read=FClicksDisabled, write=FClicksDisabled, nodefault};
	DYNAMIC Vcl::Controls::TControlActionLinkClass __fastcall GetActionLinkClass();
	DYNAMIC void __fastcall ActionChange(System::TObject* Sender, bool CheckDefaults);
	virtual Vcl::Stdctrls::TCheckBoxState __fastcall GetCheckState();
	void __fastcall UpdateState(Vcl::Stdctrls::TCheckBoxState Value);
	
public:
	__fastcall virtual TCustomAdvOfficeCheckBox(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomAdvOfficeCheckBox();
	virtual void __fastcall Toggle();
	virtual void __fastcall SetComponentStyle(Advstyleif::TTMSStyle AStyle);
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	__property bool AutoSize = {read=FAutoSize, write=SetAutoSizeEx, default=0};
	__property bool TransparentChaching = {read=FTransparentCaching, write=FTransparentCaching, nodefault};
	__property bool DrawBkg = {read=FDrawBkg, write=FDrawBkg, nodefault};
	__property System::Classes::TLeftRight Alignment = {read=FAlignment, write=SetAlignment, nodefault};
	__property Vcl::Stdctrls::TTextLayout ButtonVertAlign = {read=FBtnVAlign, write=SetButtonVertAlign, default=1};
	__property System::UnicodeString Caption = {read=FCaption, write=SetCaption};
	__property System::Uitypes::TColor DisabledFontColor = {read=FDisabledFontColor, write=FDisabledFontColor, default=8421504};
	__property bool AllowGrayed = {read=FAllowGrayed, write=FAllowGrayed, default=0};
	__property bool Down = {read=FDown, write=SetDown, default=0};
	__property bool Ellipsis = {read=FEllipsis, write=SetEllipsis, default=0};
	__property Vcl::Controls::TImageList* Images = {read=FImages, write=SetImages};
	__property Picturecontainer::TPictureContainer* PictureContainer = {read=FContainer, write=SetContainer};
	__property bool ReadOnly = {read=FReadOnly, write=FReadOnly, default=0};
	__property bool ReturnIsTab = {read=FReturnIsTab, write=FReturnIsTab, nodefault};
	__property System::Uitypes::TColor ShadowColor = {read=FShadowColor, write=SetShadowColor, default=8421504};
	__property int ShadowOffset = {read=FShadowOffset, write=SetShadowOffset, default=1};
	__property bool ShowFocus = {read=FShowFocus, write=FShowFocus, default=1};
	__property Vcl::Stdctrls::TCheckBoxState State = {read=FState, write=SetState, default=0};
	__property bool Themed = {read=FThemed, write=SetThemed, default=0};
	__property bool Transparent = {read=FTransparent, write=SetTransparent, default=1};
	__property System::Uitypes::TColor URLColor = {read=FURLColor, write=SetURLColor, default=16711680};
	__property TAnchorClick OnAnchorClick = {read=FAnchorClick, write=FAnchorClick};
	__property TAnchorClick OnAnchorEnter = {read=FAnchorEnter, write=FAnchorEnter};
	__property TAnchorClick OnAnchorExit = {read=FAnchorExit, write=FAnchorExit};
	__property System::UnicodeString Version = {read=GetVersion, write=SetVersion};
	__property Advstyleif::TTMSStyle UIStyle = {read=FTMSStyle, write=SetUIStyle, default=8};
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomAdvOfficeCheckBox(HWND ParentWindow) : Vcl::Controls::TCustomControl(ParentWindow) { }
	
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


class PASCALIMPLEMENTATION TAdvOfficeCheckBox : public TCustomAdvOfficeCheckBox
{
	typedef TCustomAdvOfficeCheckBox inherited;
	
__published:
	__property Action;
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property AutoSize = {default=0};
	__property BiDiMode;
	__property Constraints;
	__property Color = {default=-16777211};
	__property Checked = {default=0};
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property ParentFont = {default=1};
	__property ParentColor = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=0};
	__property Visible = {default=1};
	__property OnClick;
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
	__property Alignment;
	__property ButtonVertAlign = {default=1};
	__property Caption;
	__property DisabledFontColor = {default=8421504};
	__property Down = {default=0};
	__property Ellipsis = {default=0};
	__property Images;
	__property PictureContainer;
	__property ReadOnly = {default=0};
	__property ReturnIsTab;
	__property ShadowColor = {default=8421504};
	__property ShadowOffset = {default=1};
	__property ShowFocus = {default=1};
	__property State = {default=0};
	__property StyleElements = {default=7};
	__property Themed = {default=0};
	__property Transparent = {default=1};
	__property URLColor = {default=16711680};
	__property OnAnchorClick;
	__property OnAnchorEnter;
	__property OnAnchorExit;
	__property Version = {default=0};
	__property UIStyle = {default=8};
public:
	/* TCustomAdvOfficeCheckBox.Create */ inline __fastcall virtual TAdvOfficeCheckBox(System::Classes::TComponent* AOwner) : TCustomAdvOfficeCheckBox(AOwner) { }
	/* TCustomAdvOfficeCheckBox.Destroy */ inline __fastcall virtual ~TAdvOfficeCheckBox() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TAdvOfficeCheckBox(HWND ParentWindow) : TCustomAdvOfficeCheckBox(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TAdvOfficeRadioButtonActionLink : public Vcl::Controls::TControlActionLink
{
	typedef Vcl::Controls::TControlActionLink inherited;
	
protected:
	int FImageIndex;
	TCustomAdvOfficeRadioButton* FClient;
	virtual void __fastcall AssignClient(System::TObject* AClient);
	virtual void __fastcall SetChecked(bool Value);
	virtual void __fastcall SetCaption(const System::UnicodeString Value);
public:
	/* TBasicActionLink.Create */ inline __fastcall virtual TAdvOfficeRadioButtonActionLink(System::TObject* AClient) : Vcl::Controls::TControlActionLink(AClient) { }
	/* TBasicActionLink.Destroy */ inline __fastcall virtual ~TAdvOfficeRadioButtonActionLink() { }
	
};


class PASCALIMPLEMENTATION TCustomAdvOfficeRadioButton : public Vcl::Controls::TCustomControl
{
	typedef Vcl::Controls::TCustomControl inherited;
	
private:
	bool FAutoCheck;
	bool FDown;
	bool FChecked;
	bool FFocused;
	bool FShowFocus;
	System::Byte FGroupIndex;
	bool FReturnIsTab;
	Vcl::Controls::TImageList* FImages;
	System::UnicodeString FAnchor;
	TAnchorClick FAnchorClick;
	TAnchorClick FAnchorEnter;
	TAnchorClick FAnchorExit;
	System::Uitypes::TColor FURLColor;
	Picturecontainer::THTMLPictureCache* FImageCache;
	Vcl::Stdctrls::TTextLayout FBtnVAlign;
	System::Classes::TAlignment FAlignment;
	bool FEllipsis;
	System::UnicodeString FCaption;
	Picturecontainer::TPictureContainer* FContainer;
	int FShadowOffset;
	System::Uitypes::TColor FShadowColor;
	bool FIsWinXP;
	bool FIsWin7;
	bool FHot;
	bool FClicksDisabled;
	System::Uitypes::TCursor FOldCursor;
	Vcl::Graphics::TBitmap* FBkgBmp;
	bool FBkgCache;
	bool FTransparentCaching;
	bool FDrawBkg;
	bool FGotClick;
	System::Uitypes::TColor FDisabledFontColor;
	bool FThemed;
	bool FCheckDown;
	float FDPIScale;
	int FCtrlWidth;
	bool FAutoSize;
	bool FFormScaled;
	bool FUseVCLStyles;
	Advstyleif::TTMSStyle FTMSStyle;
	bool FTransparent;
	void __fastcall InitVCLStyle(bool init);
	MESSAGE void __fastcall CMStyleChanged(Winapi::Messages::TMessage &Message);
	void __fastcall TurnSiblingsOff();
	void __fastcall SetDown(bool Value);
	void __fastcall SetChecked(bool Value);
	void __fastcall SetImages(Vcl::Controls::TImageList* const Value);
	void __fastcall SetURLColor(const System::Uitypes::TColor Value);
	System::UnicodeString __fastcall IsAnchor(int x, int y);
	HIDESBASE MESSAGE void __fastcall WMLButtonDblClk(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMLButtonDown(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMEraseBkGnd(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMEnabledChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMDialogChar(Winapi::Messages::TWMKey &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Winapi::Messages::TMessage &Message);
	void __fastcall SetButtonVertAlign(const Vcl::Stdctrls::TTextLayout Value);
	void __fastcall SetAlignment(const System::Classes::TLeftRight Value);
	void __fastcall SetEllipsis(const bool Value);
	void __fastcall SetCaption(const System::UnicodeString Value);
	void __fastcall SetContainer(Picturecontainer::TPictureContainer* const Value);
	void __fastcall SetShadowColor(const System::Uitypes::TColor Value);
	void __fastcall SetShadowOffset(const int Value);
	System::UnicodeString __fastcall GetVersion();
	void __fastcall SetVersion(const System::UnicodeString Value);
	void __fastcall SetThemed(const bool Value);
	int __fastcall GetVersionNr();
	void __fastcall DrawParentImage(Vcl::Controls::TControl* Control, Vcl::Graphics::TCanvas* Dest);
	void __fastcall SetAutoSizeEx(const bool Value);
	void __fastcall DoUpdateSize();
	void __fastcall SetUIStyle(const Advstyleif::TTMSStyle Value);
	void __fastcall SetTransparent(const bool Value);
	
protected:
	void __fastcall DrawRadio();
	virtual void __fastcall Paint();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation AOperation);
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyUp(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall DoEnter();
	DYNAMIC void __fastcall DoExit();
	virtual void __fastcall CreateWnd();
	virtual void __fastcall Loaded();
	DYNAMIC void __fastcall Click();
	DYNAMIC void __fastcall DblClick();
	virtual void __fastcall DoClick();
	DYNAMIC Vcl::Controls::TControlActionLinkClass __fastcall GetActionLinkClass();
	DYNAMIC void __fastcall ActionChange(System::TObject* Sender, bool CheckDefaults);
	__property bool ClicksDisabled = {read=FClicksDisabled, write=FClicksDisabled, nodefault};
	
public:
	__fastcall virtual TCustomAdvOfficeRadioButton(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomAdvOfficeRadioButton();
	virtual void __fastcall SetComponentStyle(Advstyleif::TTMSStyle AStyle);
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	__property bool AutoSize = {read=FAutoSize, write=SetAutoSizeEx, default=0};
	__property bool AutoCheck = {read=FAutoCheck, write=FAutoCheck, default=0};
	__property bool TransparentChaching = {read=FTransparentCaching, write=FTransparentCaching, nodefault};
	__property bool DrawBkg = {read=FDrawBkg, write=FDrawBkg, nodefault};
	__property System::Classes::TLeftRight Alignment = {read=FAlignment, write=SetAlignment, nodefault};
	__property System::Uitypes::TColor URLColor = {read=FURLColor, write=SetURLColor, default=16711680};
	__property Vcl::Stdctrls::TTextLayout ButtonVertAlign = {read=FBtnVAlign, write=SetButtonVertAlign, default=1};
	__property System::UnicodeString Caption = {read=FCaption, write=SetCaption};
	__property bool Checked = {read=FChecked, write=SetChecked, default=0};
	__property System::Uitypes::TColor DisabledFontColor = {read=FDisabledFontColor, write=FDisabledFontColor, default=8421504};
	__property bool Down = {read=FDown, write=SetDown, default=0};
	__property bool Ellipsis = {read=FEllipsis, write=SetEllipsis, default=0};
	__property System::Byte GroupIndex = {read=FGroupIndex, write=FGroupIndex, default=0};
	__property Vcl::Controls::TImageList* Images = {read=FImages, write=SetImages};
	__property Picturecontainer::TPictureContainer* PictureContainer = {read=FContainer, write=SetContainer};
	__property bool ReturnIsTab = {read=FReturnIsTab, write=FReturnIsTab, nodefault};
	__property System::Uitypes::TColor ShadowColor = {read=FShadowColor, write=SetShadowColor, default=8421504};
	__property int ShadowOffset = {read=FShadowOffset, write=SetShadowOffset, default=1};
	__property bool ShowFocus = {read=FShowFocus, write=FShowFocus, default=1};
	__property bool Themed = {read=FThemed, write=SetThemed, default=0};
	__property bool Transparent = {read=FTransparent, write=SetTransparent, default=1};
	__property TAnchorClick OnAnchorClick = {read=FAnchorClick, write=FAnchorClick};
	__property TAnchorClick OnAnchorEnter = {read=FAnchorEnter, write=FAnchorEnter};
	__property TAnchorClick OnAnchorExit = {read=FAnchorExit, write=FAnchorExit};
	__property System::UnicodeString Version = {read=GetVersion, write=SetVersion};
	__property Advstyleif::TTMSStyle UIStyle = {read=FTMSStyle, write=SetUIStyle, default=8};
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomAdvOfficeRadioButton(HWND ParentWindow) : Vcl::Controls::TCustomControl(ParentWindow) { }
	
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


class PASCALIMPLEMENTATION TAdvOfficeRadioButton : public TCustomAdvOfficeRadioButton
{
	typedef TCustomAdvOfficeRadioButton inherited;
	
__published:
	__property Align = {default=0};
	__property Action;
	__property Anchors = {default=3};
	__property AutoCheck = {default=0};
	__property AutoSize = {default=0};
	__property BiDiMode;
	__property Constraints;
	__property Color = {default=-16777211};
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property ParentFont = {default=1};
	__property ParentColor = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property StyleElements = {default=7};
	__property TabOrder = {default=-1};
	__property TabStop = {default=0};
	__property Transparent = {default=1};
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
	__property Visible = {default=1};
	__property Alignment;
	__property URLColor = {default=16711680};
	__property ButtonVertAlign = {default=1};
	__property Caption;
	__property Checked = {default=0};
	__property DisabledFontColor = {default=8421504};
	__property Down = {default=0};
	__property Ellipsis = {default=0};
	__property GroupIndex = {default=0};
	__property Images;
	__property PictureContainer;
	__property ReturnIsTab;
	__property ShadowColor = {default=8421504};
	__property ShadowOffset = {default=1};
	__property ShowFocus = {default=1};
	__property Themed = {default=0};
	__property OnAnchorClick;
	__property OnAnchorEnter;
	__property OnAnchorExit;
	__property Version = {default=0};
	__property UIStyle = {default=8};
public:
	/* TCustomAdvOfficeRadioButton.Create */ inline __fastcall virtual TAdvOfficeRadioButton(System::Classes::TComponent* AOwner) : TCustomAdvOfficeRadioButton(AOwner) { }
	/* TCustomAdvOfficeRadioButton.Destroy */ inline __fastcall virtual ~TAdvOfficeRadioButton() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TAdvOfficeRadioButton(HWND ParentWindow) : TCustomAdvOfficeRadioButton(ParentWindow) { }
	
};


typedef void __fastcall (__closure *TEnabledEvent)(System::TObject* Sender, int ItemIndex, bool &Enabled);

class PASCALIMPLEMENTATION TCustomAdvOfficeRadioGroup : public Advgroupbox::TAdvGroupBox
{
	typedef Advgroupbox::TAdvGroupBox inherited;
	
private:
	System::Classes::TList* FButtons;
	System::Classes::TStrings* FItems;
	int FItemIndex;
	int FColumns;
	bool FReading;
	bool FUpdating;
	System::Classes::TAlignment FAlignment;
	Vcl::Stdctrls::TTextLayout FBtnVAlign;
	Vcl::Controls::TImageList* FImages;
	Picturecontainer::TPictureContainer* FContainer;
	bool FEllipsis;
	int FShadowOffset;
	System::Uitypes::TColor FShadowColor;
	bool FShowFocus;
	TEnabledEvent FOnIsEnabled;
	bool FIsReadOnly;
	bool FThemed;
	bool FClicksDisabled;
	int FControlIndent;
	System::Classes::TNotifyEvent FOnRadioButtonClick;
	int FFocusButtonIdx;
	Advstyleif::TTMSStyle FTMSStyle;
	void __fastcall ButtonClick(System::TObject* Sender);
	void __fastcall ItemsChange(System::TObject* Sender);
	void __fastcall SetButtonCount(int Value);
	void __fastcall SetColumns(int Value);
	void __fastcall SetItemIndex(int Value);
	void __fastcall SetItems(System::Classes::TStrings* Value);
	void __fastcall CheckFocus(System::TObject* Sender);
	HIDESBASE MESSAGE void __fastcall CMEnabledChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Message);
	void __fastcall SetAlignment(const System::Classes::TAlignment Value);
	void __fastcall SetButtonVertAlign(const Vcl::Stdctrls::TTextLayout Value);
	void __fastcall SetContainer(Picturecontainer::TPictureContainer* const Value);
	HIDESBASE void __fastcall SetImages(Vcl::Controls::TImageList* const Value);
	void __fastcall SetEllipsis(const bool Value);
	void __fastcall SetShadowColor(const System::Uitypes::TColor Value);
	void __fastcall SetShadowOffset(const int Value);
	void __fastcall SetThemed(const bool Value);
	HIDESBASE System::UnicodeString __fastcall GetVersion();
	HIDESBASE void __fastcall SetVersion(const System::UnicodeString Value);
	void __fastcall SetShowFocus(const bool Value);
	void __fastcall SetClicksDisabled(const bool Value);
	TAdvOfficeRadioButton* __fastcall GetRadioButton(int Index);
	void __fastcall SetControlIndent(const int Value);
	HIDESBASE void __fastcall SetUIStyle(const Advstyleif::TTMSStyle Value);
	
protected:
	virtual void __fastcall Loaded();
	virtual void __fastcall ReadState(System::Classes::TReader* Reader);
	virtual void __fastcall ArrangeButtons();
	virtual bool __fastcall CanModify();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation AOperation);
	__property int Columns = {read=FColumns, write=SetColumns, default=1};
	__property int ItemIndex = {read=FItemIndex, write=SetItemIndex, default=-1};
	__property System::Classes::TStrings* Items = {read=FItems, write=SetItems};
	__property bool IsReadOnly = {read=FIsReadOnly, write=FIsReadOnly, nodefault};
	__property bool Themed = {read=FThemed, write=SetThemed, default=0};
	void __fastcall UpdateButtons(bool ReadOnly = false);
	__property bool ClicksDisabled = {read=FClicksDisabled, write=SetClicksDisabled, nodefault};
	virtual void __fastcall DoRadioButtonClick();
	DYNAMIC void __fastcall DoEnter();
	DYNAMIC void __fastcall DoExit();
	virtual void __fastcall DisabledFontColorChanged();
	virtual void __fastcall DoIsEnabled(int AIndex, bool &IsEnabled);
	virtual void __fastcall AutoSizeControls();
	
public:
	DYNAMIC void __fastcall GetChildren(System::Classes::TGetChildProc Proc, System::Classes::TComponent* Root);
	__fastcall virtual TCustomAdvOfficeRadioGroup(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomAdvOfficeRadioGroup();
	virtual int __fastcall GetVersionNr();
	virtual void __fastcall Update();
	virtual void __fastcall SetComponentStyle(Advstyleif::TTMSStyle AStyle);
	void __fastcall PushKey(System::WideChar &Key);
	void __fastcall PushKeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	int __fastcall XYToItem(int X, int Y);
	__property System::Classes::TAlignment Alignment = {read=FAlignment, write=SetAlignment, default=0};
	__property Vcl::Stdctrls::TTextLayout ButtonVertAlign = {read=FBtnVAlign, write=SetButtonVertAlign, default=1};
	__property int ControlIndent = {read=FControlIndent, write=SetControlIndent, default=0};
	__property TAdvOfficeRadioButton* RadioButtons[int Index] = {read=GetRadioButton};
	__property bool Ellipsis = {read=FEllipsis, write=SetEllipsis, nodefault};
	__property Vcl::Controls::TImageList* Images = {read=FImages, write=SetImages};
	__property Picturecontainer::TPictureContainer* PictureContainer = {read=FContainer, write=SetContainer};
	__property System::Uitypes::TColor ShadowColor = {read=FShadowColor, write=SetShadowColor, default=12632256};
	__property int ShadowOffset = {read=FShadowOffset, write=SetShadowOffset, default=1};
	__property bool ShowFocus = {read=FShowFocus, write=SetShowFocus, default=1};
	__property TEnabledEvent OnIsEnabled = {read=FOnIsEnabled, write=FOnIsEnabled};
	__property System::Classes::TNotifyEvent OnRadioButtonClick = {read=FOnRadioButtonClick, write=FOnRadioButtonClick};
	__property System::UnicodeString Version = {read=GetVersion, write=SetVersion};
	__property Advstyleif::TTMSStyle UIStyle = {read=FTMSStyle, write=SetUIStyle, default=8};
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomAdvOfficeRadioGroup(HWND ParentWindow) : Advgroupbox::TAdvGroupBox(ParentWindow) { }
	
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


class PASCALIMPLEMENTATION TAdvOfficeRadioGroup : public TCustomAdvOfficeRadioGroup
{
	typedef TCustomAdvOfficeRadioGroup inherited;
	
__published:
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property Constraints;
	__property ControlIndent = {default=0};
	__property DragKind = {default=0};
	__property ParentBiDiMode = {default=1};
	__property Caption = {default=0};
	__property Color = {default=-16777211};
	__property Columns = {default=1};
	__property Ctl3D = {default=0};
	__property DragCursor = {default=-12};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property ItemIndex = {default=-1};
	__property Items;
	__property ParentColor = {default=1};
	__property ParentCtl3D = {default=0};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=0};
	__property Themed = {default=0};
	__property Visible = {default=1};
	__property OnClick;
	__property OnContextPopup;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnEndDock;
	__property OnStartDock;
	__property OnStartDrag;
	__property Alignment = {default=0};
	__property ButtonVertAlign = {default=1};
	__property Ellipsis;
	__property Images;
	__property PictureContainer;
	__property ShadowColor = {default=12632256};
	__property ShadowOffset = {default=1};
	__property ShowFocus = {default=1};
	__property OnRadioButtonClick;
	__property OnIsEnabled;
	__property Version;
	__property UIStyle = {default=8};
public:
	/* TCustomAdvOfficeRadioGroup.Create */ inline __fastcall virtual TAdvOfficeRadioGroup(System::Classes::TComponent* AOwner) : TCustomAdvOfficeRadioGroup(AOwner) { }
	/* TCustomAdvOfficeRadioGroup.Destroy */ inline __fastcall virtual ~TAdvOfficeRadioGroup() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TAdvOfficeRadioGroup(HWND ParentWindow) : TCustomAdvOfficeRadioGroup(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TCustomAdvOfficeCheckGroup : public Advgroupbox::TAdvGroupBox
{
	typedef Advgroupbox::TAdvGroupBox inherited;
	
private:
	System::Classes::TList* FButtons;
	System::Classes::TStrings* FItems;
	int FColumns;
	bool FReading;
	bool FUpdating;
	System::Classes::TAlignment FAlignment;
	Vcl::Stdctrls::TTextLayout FBtnVAlign;
	Vcl::Controls::TImageList* FImages;
	Picturecontainer::TPictureContainer* FContainer;
	bool FEllipsis;
	int FShadowOffset;
	System::Uitypes::TColor FShadowColor;
	bool FShowFocus;
	TEnabledEvent FOnIsEnabled;
	__int64 FValue;
	int FFocusButtonIdx;
	bool FThemed;
	TCheckBoxClick FOnCheckBoxClick;
	System::Classes::TNotifyEvent FOnGroupCheckClick;
	int FControlIndent;
	Advstyleif::TTMSStyle FTMSStyle;
	void __fastcall ButtonClick(System::TObject* Sender);
	void __fastcall CheckFocus(System::TObject* Sender);
	void __fastcall ItemsChange(System::TObject* Sender);
	void __fastcall SetButtonCount(int Value);
	void __fastcall SetColumns(int Value);
	void __fastcall SetItems(System::Classes::TStrings* Value);
	void __fastcall UpdateButtons();
	HIDESBASE MESSAGE void __fastcall CMEnabledChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Message);
	void __fastcall SetAlignment(const System::Classes::TAlignment Value);
	void __fastcall SetButtonVertAlign(const Vcl::Stdctrls::TTextLayout Value);
	void __fastcall SetContainer(Picturecontainer::TPictureContainer* const Value);
	HIDESBASE void __fastcall SetImages(Vcl::Controls::TImageList* const Value);
	void __fastcall SetEllipsis(const bool Value);
	void __fastcall SetShadowColor(const System::Uitypes::TColor Value);
	void __fastcall SetShadowOffset(const int Value);
	bool __fastcall GetReadOnly(int Index);
	void __fastcall SetReadOnly(int Index, const bool Value);
	HIDESBASE System::UnicodeString __fastcall GetVersion();
	HIDESBASE void __fastcall SetVersion(const System::UnicodeString Value);
	void __fastcall SetValue(const __int64 Value);
	__int64 __fastcall GetValue();
	void __fastcall SetThemed(const bool Value);
	void __fastcall SetShowFocus(const bool Value);
	void __fastcall SetControlIndent(const int Value);
	HIDESBASE void __fastcall SetUIStyle(const Advstyleif::TTMSStyle Value);
	TAdvOfficeCheckBox* __fastcall GetCheckBox(int Index);
	
protected:
	virtual void __fastcall Loaded();
	DYNAMIC void __fastcall DoEnter();
	DYNAMIC void __fastcall DoExit();
	virtual void __fastcall ArrangeButtons();
	virtual void __fastcall PerformCheckBoxAction();
	virtual void __fastcall ReadState(System::Classes::TReader* Reader);
	virtual bool __fastcall CanModify();
	virtual bool __fastcall GetChecked(int Index);
	virtual void __fastcall SetChecked(int Index, const bool Value);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation AOperation);
	__property int Columns = {read=FColumns, write=SetColumns, default=1};
	__property System::Classes::TStrings* Items = {read=FItems, write=SetItems};
	__property __int64 Value = {read=GetValue, write=SetValue};
	__property bool Themed = {read=FThemed, write=SetThemed, default=0};
	virtual void __fastcall DoCheckBoxClick(int Index, bool Value);
	virtual void __fastcall DoGroupCheckClick();
	virtual void __fastcall DisabledFontColorChanged();
	virtual void __fastcall UpdateFocus();
	virtual void __fastcall DoIsEnabled(int AIndex, bool &AEnabled);
	virtual void __fastcall AutoSizeControls();
	
public:
	DYNAMIC void __fastcall GetChildren(System::Classes::TGetChildProc Proc, System::Classes::TComponent* Root);
	__fastcall virtual TCustomAdvOfficeCheckGroup(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomAdvOfficeCheckGroup();
	virtual int __fastcall GetVersionNr();
	virtual void __fastcall SetComponentStyle(Advstyleif::TTMSStyle AStyle);
	void __fastcall UpdateValue();
	void __fastcall PushKey(System::WideChar &Key);
	void __fastcall PushKeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	__property bool Checked[int Index] = {read=GetChecked, write=SetChecked};
	__property bool ReadOnly[int Index] = {read=GetReadOnly, write=SetReadOnly};
	__property TAdvOfficeCheckBox* CheckBoxes[int Index] = {read=GetCheckBox};
	int __fastcall XYToItem(int X, int Y);
	__property System::Classes::TAlignment Alignment = {read=FAlignment, write=SetAlignment, default=0};
	__property int ControlIndent = {read=FControlIndent, write=SetControlIndent, default=0};
	__property Vcl::Stdctrls::TTextLayout ButtonVertAlign = {read=FBtnVAlign, write=SetButtonVertAlign, default=1};
	__property bool Ellipsis = {read=FEllipsis, write=SetEllipsis, nodefault};
	__property Vcl::Controls::TImageList* Images = {read=FImages, write=SetImages};
	__property Picturecontainer::TPictureContainer* PictureContainer = {read=FContainer, write=SetContainer};
	__property System::Uitypes::TColor ShadowColor = {read=FShadowColor, write=SetShadowColor, default=12632256};
	__property int ShadowOffset = {read=FShadowOffset, write=SetShadowOffset, default=1};
	__property bool ShowFocus = {read=FShowFocus, write=SetShowFocus, default=1};
	__property TEnabledEvent OnIsEnabled = {read=FOnIsEnabled, write=FOnIsEnabled};
	__property TCheckBoxClick OnCheckBoxClick = {read=FOnCheckBoxClick, write=FOnCheckBoxClick};
	__property System::Classes::TNotifyEvent OnGroupCheckClick = {read=FOnGroupCheckClick, write=FOnGroupCheckClick};
	__property System::UnicodeString Version = {read=GetVersion, write=SetVersion};
	__property Advstyleif::TTMSStyle UIStyle = {read=FTMSStyle, write=SetUIStyle, default=8};
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomAdvOfficeCheckGroup(HWND ParentWindow) : Advgroupbox::TAdvGroupBox(ParentWindow) { }
	
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


class PASCALIMPLEMENTATION TAdvOfficeCheckGroup : public TCustomAdvOfficeCheckGroup
{
	typedef TCustomAdvOfficeCheckGroup inherited;
	
public:
	__property Value;
	
__published:
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property Constraints;
	__property DragKind = {default=0};
	__property ParentBiDiMode = {default=1};
	__property Caption = {default=0};
	__property Color = {default=-16777211};
	__property Columns = {default=1};
	__property ControlIndent = {default=0};
	__property Ctl3D = {default=0};
	__property DragCursor = {default=-12};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property Items;
	__property ParentColor = {default=1};
	__property ParentCtl3D = {default=0};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=0};
	__property Themed = {default=0};
	__property Visible = {default=1};
	__property OnClick;
	__property OnContextPopup;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnEndDock;
	__property OnStartDock;
	__property OnStartDrag;
	__property Alignment = {default=0};
	__property ButtonVertAlign = {default=1};
	__property Ellipsis;
	__property Images;
	__property PictureContainer;
	__property ShadowColor = {default=12632256};
	__property ShadowOffset = {default=1};
	__property ShowFocus = {default=1};
	__property Version;
	__property OnCheckBoxClick;
	__property OnIsEnabled;
	__property OnGroupCheckClick;
	__property UIStyle = {default=8};
public:
	/* TCustomAdvOfficeCheckGroup.Create */ inline __fastcall virtual TAdvOfficeCheckGroup(System::Classes::TComponent* AOwner) : TCustomAdvOfficeCheckGroup(AOwner) { }
	/* TCustomAdvOfficeCheckGroup.Destroy */ inline __fastcall virtual ~TAdvOfficeCheckGroup() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TAdvOfficeCheckGroup(HWND ParentWindow) : TCustomAdvOfficeCheckGroup(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::Int8 MAJ_VER = System::Int8(0x1);
static const System::Int8 MIN_VER = System::Int8(0x8);
static const System::Int8 REL_VER = System::Int8(0x1);
static const System::Int8 BLD_VER = System::Int8(0x0);
static const int DefDisabledColor = int(8421504);
extern DELPHI_PACKAGE bool TMS_NoClickForProgrammaticCheck;
}	/* namespace Advofficebuttons */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ADVOFFICEBUTTONS)
using namespace Advofficebuttons;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AdvofficebuttonsHPP
