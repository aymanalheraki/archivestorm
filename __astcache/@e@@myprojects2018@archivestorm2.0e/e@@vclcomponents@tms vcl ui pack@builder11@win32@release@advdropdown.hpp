// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AdvDropDown.pas' rev: 35.00 (Windows)

#ifndef AdvdropdownHPP
#define AdvdropdownHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <Winapi.Windows.hpp>
#include <System.Types.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Winapi.Messages.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <System.SysUtils.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.Forms.hpp>
#include <System.Math.hpp>
#include <Vcl.Mask.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.StdCtrls.hpp>
#include <AsgHTMLE.hpp>
#include <AdvUtil.hpp>
#include <Winapi.CommCtrl.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.Clipbrd.hpp>
#include <AdvStyleIF.hpp>
#include <ATXPVS.hpp>
#include <Vcl.Themes.hpp>
#include <System.UITypes.hpp>
#include <Vcl.Menus.hpp>

//-- user supplied -----------------------------------------------------------

namespace Advdropdown
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TDbgList;
class DELPHICLASS TAdvButtonAppearance;
class DELPHICLASS TAdvButton;
class DELPHICLASS THeaderButton;
class DELPHICLASS THeaderButtons;
class DELPHICLASS THeaderAppearance;
class DELPHICLASS TAdvHeader;
class DELPHICLASS TFooterButton;
class DELPHICLASS TFooterButtons;
class DELPHICLASS TFooterAppearance;
class DELPHICLASS TAdvFooter;
class DELPHICLASS TDropDownForm;
class DELPHICLASS TAdvDropDownSpeedButton;
class DELPHICLASS TDropDownEditButton;
class DELPHICLASS TAdvCustomDropDown;
class DELPHICLASS TAdvDropDown;
class DELPHICLASS TWinCtrl;
class DELPHICLASS TSelectorItem;
class DELPHICLASS TSelectorItems;
class DELPHICLASS TItemAppearance;
class DELPHICLASS TCustomItemSelector;
class DELPHICLASS TAdvCustomItemSelector;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TDropPosition : unsigned char { dpAuto, dpDown, dpUp };

using Vcl::Buttons::TNumGlyphs;

enum DECLSPEC_DENUM TButtonStyle : unsigned char { bsButton, bsDropDown };

enum DECLSPEC_DENUM TGradientDirection : unsigned char { gdHorizontal, gdVertical };

enum DECLSPEC_DENUM TAdvButtonStyle : unsigned char { tasButton, tasCheck };

enum DECLSPEC_DENUM TAdvButtonState : unsigned char { absUp, absDisabled, absDown, absDropDown, absExclusive };

enum DECLSPEC_DENUM TSelectionColorStyle : unsigned char { scCustom, scOffice2007, scWindowsVista, scWindows7 };

enum DECLSPEC_DENUM TSelectorType : unsigned char { stImage, stColor };

enum DECLSPEC_DENUM TItemLayout : unsigned char { ilCaptionLeft, ilCaptionRight, ilCaptionTop, ilCaptionBottom };

enum DECLSPEC_DENUM TDropDownEditType : unsigned char { etString, etNumeric, etFloat, etUppercase, etMixedCase, etLowerCase, etPassword, etMoney, etRange, etHex, etAlphaNumeric, etValidChars };

enum DECLSPEC_DENUM TAutoType : unsigned char { atNumeric, atFloat, atString, atDate, atTime, atHex };

typedef void __fastcall (__closure *TDrawBackGroundEvent)(System::TObject* Sender, Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect);

typedef void __fastcall (__closure *TGetTextEvent)(System::TObject* Sender, System::UnicodeString &Text);

typedef void __fastcall (__closure *TDropDown)(System::TObject* Sender, bool &acceptdrop);

typedef void __fastcall (__closure *TDropUp)(System::TObject* Sender, bool Cancelled);

typedef void __fastcall (__closure *TClipboardEvent)(System::TObject* Sender, System::UnicodeString value, bool &allow);

typedef void __fastcall (__closure *TDropDownButtonItemClick)(System::TObject* Sender, int ButtonIndex);

typedef void __fastcall (__closure *TOnDrawSelectedItem)(System::TObject* Sender, Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &R);

typedef void __fastcall (__closure *TDrawItemEvent)(System::TObject* Sender, Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &R, int Index);

typedef void __fastcall (__closure *TDrawItemsEvent)(System::TObject* Sender, Vcl::Graphics::TCanvas* Canvas);

typedef void __fastcall (__closure *TItemSizeEvent)(System::TObject* Sender, System::Types::TSize &ASize);

typedef void __fastcall (__closure *TGetDropDownPosEvent)(System::TObject* Sender, System::Types::TPoint &Pos);

#pragma pack(push,4)
class PASCALIMPLEMENTATION TDbgList : public System::Classes::TList
{
	typedef System::Classes::TList inherited;
	
public:
	void * operator[](int Index) { return this->Items[Index]; }
	
private:
	void * __fastcall GetItemsEx(int Index);
	void __fastcall SetItemsEx(int Index, const void * Value);
	
public:
	void __fastcall AssignList(System::Classes::TList* ListA);
	__property void * Items[int Index] = {read=GetItemsEx, write=SetItemsEx/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TDbgList() { }
	
public:
	/* TObject.Create */ inline __fastcall TDbgList() : System::Classes::TList() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TAdvButtonAppearance : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	System::Classes::TNotifyEvent FOnChange;
	System::Uitypes::TColor FBorderColor;
	System::Uitypes::TColor FBorderColorHot;
	System::Uitypes::TColor FBorderColorDown;
	System::Uitypes::TColor FBorderColorDisabled;
	System::Uitypes::TColor FBorderColorChecked;
	System::Uitypes::TColor FColor;
	System::Uitypes::TColor FColorTo;
	System::Uitypes::TColor FColorDown;
	System::Uitypes::TColor FColorDownTo;
	System::Uitypes::TColor FColorHot;
	System::Uitypes::TColor FColorHotTo;
	System::Uitypes::TColor FColorCheckedTo;
	System::Uitypes::TColor FColorDisabled;
	System::Uitypes::TColor FColorDisabledTo;
	System::Uitypes::TColor FColorChecked;
	TGradientDirection FGradient;
	Vcl::Graphics::TFont* FFont;
	void __fastcall SetBorderColor(const System::Uitypes::TColor Value);
	void __fastcall SetBorderColorChecked(const System::Uitypes::TColor Value);
	void __fastcall SetBorderColorDisabled(const System::Uitypes::TColor Value);
	void __fastcall SetBorderColorDown(const System::Uitypes::TColor Value);
	void __fastcall SetBorderColorHot(const System::Uitypes::TColor Value);
	void __fastcall SetColor(const System::Uitypes::TColor Value);
	void __fastcall SetColorChecked(const System::Uitypes::TColor Value);
	void __fastcall SetColorCheckedTo(const System::Uitypes::TColor Value);
	void __fastcall SetColorDisabled(const System::Uitypes::TColor Value);
	void __fastcall SetColorDisabledTo(const System::Uitypes::TColor Value);
	void __fastcall SetColorDown(const System::Uitypes::TColor Value);
	void __fastcall SetColorDownTo(const System::Uitypes::TColor Value);
	void __fastcall SetColorHot(const System::Uitypes::TColor Value);
	void __fastcall SetColorHotTo(const System::Uitypes::TColor Value);
	void __fastcall SetColorTo(const System::Uitypes::TColor Value);
	void __fastcall SetGradient(const TGradientDirection Value);
	void __fastcall SetFont(Vcl::Graphics::TFont* const Value);
	
protected:
	void __fastcall Changed();
	__property System::Uitypes::TColor BorderColorChecked = {read=FBorderColorChecked, write=SetBorderColorChecked, default=16711680};
	__property System::Uitypes::TColor ColorChecked = {read=FColorChecked, write=SetColorChecked, nodefault};
	__property System::Uitypes::TColor ColorCheckedTo = {read=FColorCheckedTo, write=SetColorCheckedTo, nodefault};
	
public:
	__fastcall TAdvButtonAppearance();
	__fastcall virtual ~TAdvButtonAppearance();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	
__published:
	__property System::Uitypes::TColor BorderColor = {read=FBorderColor, write=SetBorderColor, default=536870911};
	__property System::Uitypes::TColor BorderColorHot = {read=FBorderColorHot, write=SetBorderColorHot, default=8421504};
	__property System::Uitypes::TColor BorderColorDown = {read=FBorderColorDown, write=SetBorderColorDown, default=8388608};
	__property System::Uitypes::TColor BorderColorDisabled = {read=FBorderColorDisabled, write=SetBorderColorDisabled, default=8421504};
	__property System::Uitypes::TColor Color = {read=FColor, write=SetColor, default=536870911};
	__property System::Uitypes::TColor ColorTo = {read=FColorTo, write=SetColorTo, default=536870911};
	__property System::Uitypes::TColor ColorDisabled = {read=FColorDisabled, write=SetColorDisabled, default=15921906};
	__property System::Uitypes::TColor ColorDisabledTo = {read=FColorDisabledTo, write=SetColorDisabledTo, default=536870911};
	__property System::Uitypes::TColor ColorDown = {read=FColorDown, write=SetColorDown, default=16111818};
	__property System::Uitypes::TColor ColorDownTo = {read=FColorDownTo, write=SetColorDownTo, default=16367008};
	__property System::Uitypes::TColor ColorHot = {read=FColorHot, write=SetColorHot, default=16117985};
	__property System::Uitypes::TColor ColorHotTo = {read=FColorHotTo, write=SetColorHotTo, default=16372402};
	__property Vcl::Graphics::TFont* Font = {read=FFont, write=SetFont};
	__property TGradientDirection Gradient = {read=FGradient, write=SetGradient, default=1};
};


class PASCALIMPLEMENTATION TAdvButton : public Vcl::Controls::TCustomControl
{
	typedef Vcl::Controls::TCustomControl inherited;
	
private:
	int FGroupIndex;
	bool FDown;
	bool FAllowAllUp;
	int FOffSet;
	bool FMouseInControl;
	bool FHot;
	System::Classes::TNotifyEvent FOnMouseLeave;
	System::Classes::TNotifyEvent FOnMouseEnter;
	TAdvButtonStyle FStyle;
	TAdvButtonState FState;
	bool FMouseDownInControl;
	bool FGrouped;
	bool FDragging;
	bool FPropHot;
	Vcl::Extctrls::TTimer* FUnHotTimer;
	bool FInitialDown;
	bool FInternalClick;
	TAdvButtonAppearance* FAppearance;
	Vcl::Imglist::TCustomImageList* FImages;
	int FImageIndex;
	System::Uitypes::TModalResult FModalResult;
	TAdvCustomDropDown* FAdvDropDown;
	void __fastcall UnHotTimerOnTime(System::TObject* Sender);
	void __fastcall UpdateExclusive();
	void __fastcall UpdateTracking();
	void __fastcall ButtonDown();
	HIDESBASE MESSAGE void __fastcall CMEnabledChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMDialogChar(Winapi::Messages::TWMKey &Message);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMTextChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMFocusChanged(Vcl::Controls::TCMFocusChanged &Message);
	MESSAGE void __fastcall CMButtonPressed(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMEraseBkGnd(Winapi::Messages::TWMEraseBkgnd &Message);
	HIDESBASE MESSAGE void __fastcall WMKeyDown(Winapi::Messages::TWMKey &Message);
	void __fastcall SetDown(bool Value);
	void __fastcall SetAllowAllUp(bool Value);
	void __fastcall SetGroupIndex(int Value);
	void __fastcall SetStyle(const TAdvButtonStyle Value);
	void __fastcall SetState(const TAdvButtonState Value);
	void __fastcall SetGrouped(const bool Value);
	bool __fastcall GetHot();
	void __fastcall SetHot(const bool Value);
	void __fastcall SetImages(Vcl::Imglist::TCustomImageList* const Value);
	void __fastcall SetAdvDropDown(TAdvCustomDropDown* const Value);
	
protected:
	virtual void __fastcall SetParent(Vcl::Controls::TWinControl* AParent);
	virtual void __fastcall Loaded();
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall DrawButton(Vcl::Graphics::TCanvas* ACanvas);
	virtual void __fastcall Paint();
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation AOperation);
	void __fastcall SetAutoSizeEx();
	void __fastcall InvalidateMe();
	__property bool MouseInControl = {read=FMouseInControl, nodefault};
	__property TAdvButtonState State = {read=FState, write=SetState, nodefault};
	__property bool AllowAllUp = {read=FAllowAllUp, write=SetAllowAllUp, default=0};
	__property TAdvButtonAppearance* Appearance = {read=FAppearance, write=FAppearance};
	__property Anchors = {default=3};
	__property BiDiMode;
	__property Constraints;
	__property bool Grouped = {read=FGrouped, write=SetGrouped, default=0};
	__property int GroupIndex = {read=FGroupIndex, write=SetGroupIndex, default=0};
	__property bool Down = {read=FDown, write=SetDown, default=0};
	__property Enabled = {default=1};
	__property Font;
	__property bool Hot = {read=GetHot, write=SetHot, default=0};
	__property Vcl::Imglist::TCustomImageList* Images = {read=FImages, write=SetImages};
	__property int ImageIndex = {read=FImageIndex, write=FImageIndex, default=-1};
	__property System::Uitypes::TModalResult ModalResult = {read=FModalResult, write=FModalResult, default=0};
	__property TAdvCustomDropDown* AdvDropDown = {read=FAdvDropDown, write=SetAdvDropDown};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property ParentBiDiMode = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property TAdvButtonStyle Style = {read=FStyle, write=SetStyle, default=0};
	__property Visible = {default=1};
	__property OnClick;
	__property OnDblClick;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property System::Classes::TNotifyEvent OnMouseEnter = {read=FOnMouseEnter, write=FOnMouseEnter};
	__property System::Classes::TNotifyEvent OnMouseLeave = {read=FOnMouseLeave, write=FOnMouseLeave};
	
public:
	__fastcall virtual TAdvButton(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TAdvButton();
	DYNAMIC void __fastcall Click();
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
public:
	/* TWinControl.CreateParented */ inline __fastcall TAdvButton(HWND ParentWindow) : Vcl::Controls::TCustomControl(ParentWindow) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION THeaderButton : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	Vcl::Controls::TCaption FCaption;
	int FImageIndex;
	bool FEnabled;
	int FHeight;
	int FWidth;
	void __fastcall SetCaption(const Vcl::Controls::TCaption Value);
	void __fastcall SerHeight(const int Value);
	void __fastcall SetWidth(const int Value);
	void __fastcall SetEnabled(const bool Value);
	
protected:
	void __fastcall PropChanged();
	
public:
	__fastcall virtual THeaderButton(System::Classes::TCollection* Collection);
	__fastcall virtual ~THeaderButton();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property Vcl::Controls::TCaption Caption = {read=FCaption, write=SetCaption};
	__property int ImageIndex = {read=FImageIndex, write=FImageIndex, default=-1};
	__property bool Enabled = {read=FEnabled, write=SetEnabled, default=1};
	__property int Width = {read=FWidth, write=SetWidth, default=0};
	__property int Height = {read=FHeight, write=SerHeight, default=0};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION THeaderButtons : public System::Classes::TOwnedCollection
{
	typedef System::Classes::TOwnedCollection inherited;
	
public:
	THeaderButton* operator[](int Index) { return this->Items[Index]; }
	
private:
	System::Classes::TPersistent* FMyOwner;
	System::Classes::TNotifyEvent FOnChange;
	HIDESBASE THeaderButton* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, THeaderButton* const Value);
	
protected:
	void __fastcall Change();
	
public:
	__fastcall THeaderButtons(System::Classes::TPersistent* AOwner);
	__property THeaderButton* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
	HIDESBASE THeaderButton* __fastcall Add();
	HIDESBASE THeaderButton* __fastcall Insert(int Index);
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~THeaderButtons() { }
	
};


enum DECLSPEC_DENUM TButtonAlignment : unsigned char { baLeft, baRight };

class PASCALIMPLEMENTATION THeaderAppearance : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	System::Classes::TPersistent* FOwner;
	bool FVisible;
	int FHeight;
	int FBorderWidth;
	int FImageIndex;
	System::UnicodeString FCaption;
	System::Uitypes::TColor FColorTo;
	System::Uitypes::TColor FColor;
	System::Uitypes::TColor FBorderColor;
	Vcl::Graphics::TFont* FFont;
	System::Classes::TNotifyEvent FOnChange;
	THeaderButtons* FButtons;
	TGradientDirection FGradientDirection;
	TButtonAlignment FButtonAlignment;
	System::Classes::TNotifyEvent FOnButtonsChanged;
	void __fastcall SetFont(Vcl::Graphics::TFont* const Value);
	void __fastcall SetButtons(THeaderButtons* const Value);
	void __fastcall OnButtonChanged(System::TObject* Sender);
	void __fastcall SetVisible(const bool Value);
	
protected:
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	void __fastcall Changed();
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property System::Classes::TNotifyEvent OnButtonsChanged = {read=FOnButtonsChanged, write=FOnButtonsChanged};
	
public:
	__fastcall THeaderAppearance(System::Classes::TPersistent* AOwner);
	__fastcall virtual ~THeaderAppearance();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	void __fastcall AssignColors(System::Classes::TPersistent* Source);
	
__published:
	__property System::Uitypes::TColor Color = {read=FColor, write=FColor, default=12632256};
	__property System::Uitypes::TColor ColorTo = {read=FColorTo, write=FColorTo, default=16777215};
	__property System::UnicodeString Caption = {read=FCaption, write=FCaption};
	__property Vcl::Graphics::TFont* Font = {read=FFont, write=SetFont};
	__property TGradientDirection GradientDirection = {read=FGradientDirection, write=FGradientDirection, default=1};
	__property bool Visible = {read=FVisible, write=SetVisible, nodefault};
	__property int Height = {read=FHeight, write=FHeight, default=22};
	__property System::Uitypes::TColor BorderColor = {read=FBorderColor, write=FBorderColor, default=0};
	__property int BorderWidth = {read=FBorderWidth, write=FBorderWidth, default=1};
	__property int ImageIndex = {read=FImageIndex, write=FImageIndex, default=-1};
	__property THeaderButtons* Buttons = {read=FButtons, write=SetButtons};
	__property TButtonAlignment ButtonAlignment = {read=FButtonAlignment, write=FButtonAlignment, default=1};
};


class PASCALIMPLEMENTATION TAdvHeader : public Vcl::Controls::TCustomControl
{
	typedef Vcl::Controls::TCustomControl inherited;
	
private:
	THeaderAppearance* FAppearance;
	Vcl::Imglist::TCustomImageList* FImages;
	TAdvCustomDropDown* FAdvDropDown;
	TDbgList* FButtonList;
	TDrawBackGroundEvent FOnDrawBackGround;
	TGetTextEvent FOnGetText;
	HIDESBASE MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Message);
	void __fastcall SetImages(Vcl::Imglist::TCustomImageList* const Value);
	void __fastcall SetAppearance(THeaderAppearance* const Value);
	void __fastcall AppearanceChanged(System::TObject* Sender);
	void __fastcall OnButtonsChanged(System::TObject* Sender);
	void __fastcall OnButtonClick(System::TObject* Sender);
	THeaderButtons* __fastcall GetButtons();
	void __fastcall SetAdvDropDown(TAdvCustomDropDown* const Value);
	
protected:
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall Paint();
	virtual void __fastcall CreateButtons();
	virtual void __fastcall DestroyButtons();
	virtual void __fastcall ArrangeButtons();
	virtual void __fastcall UpdateButtons();
	System::Types::TRect __fastcall GetButtonsRect();
	int __fastcall GetMaxButtonHeight();
	void __fastcall Initialize();
	System::Types::TRect __fastcall GetButtonsCoveredRect();
	__property TAdvCustomDropDown* AdvDropDown = {read=FAdvDropDown, write=SetAdvDropDown};
	
public:
	__fastcall virtual TAdvHeader(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TAdvHeader();
	virtual void __fastcall Update();
	
__published:
	__property THeaderAppearance* Appearance = {read=FAppearance, write=SetAppearance};
	__property Vcl::Imglist::TCustomImageList* Images = {read=FImages, write=SetImages};
	__property THeaderButtons* Buttons = {read=GetButtons};
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property BevelInner = {index=0, default=2};
	__property BevelOuter = {index=1, default=1};
	__property BevelWidth = {default=1};
	__property BiDiMode;
	__property BorderWidth = {default=0};
	__property Constraints;
	__property Ctl3D;
	__property UseDockManager = {default=1};
	__property DockSite = {default=0};
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property ParentBiDiMode = {default=1};
	__property ParentBackground;
	__property ParentCtl3D = {default=1};
	__property ParentColor = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=0};
	__property Visible = {default=1};
	__property OnCanResize;
	__property OnClick;
	__property OnConstrainedResize;
	__property OnContextPopup;
	__property OnDockDrop;
	__property OnDockOver;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnGetSiteInfo;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnResize;
	__property TDrawBackGroundEvent OnDrawBackGround = {read=FOnDrawBackGround, write=FOnDrawBackGround};
	__property TGetTextEvent OnGetText = {read=FOnGetText, write=FOnGetText};
public:
	/* TWinControl.CreateParented */ inline __fastcall TAdvHeader(HWND ParentWindow) : Vcl::Controls::TCustomControl(ParentWindow) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TFooterButton : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	Vcl::Controls::TCaption FCaption;
	int FImageIndex;
	System::Uitypes::TModalResult FModalResult;
	bool FEnabled;
	int FHeight;
	int FWidth;
	void __fastcall SetCaption(const Vcl::Controls::TCaption Value);
	void __fastcall SerHeight(const int Value);
	void __fastcall SetWidth(const int Value);
	void __fastcall SetEnabled(const bool Value);
	
protected:
	void __fastcall PropChanged();
	
public:
	__fastcall virtual TFooterButton(System::Classes::TCollection* Collection);
	__fastcall virtual ~TFooterButton();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property Vcl::Controls::TCaption Caption = {read=FCaption, write=SetCaption};
	__property bool Enabled = {read=FEnabled, write=SetEnabled, default=1};
	__property int ImageIndex = {read=FImageIndex, write=FImageIndex, default=-1};
	__property System::Uitypes::TModalResult ModalResult = {read=FModalResult, write=FModalResult, default=0};
	__property int Width = {read=FWidth, write=SetWidth, default=0};
	__property int Height = {read=FHeight, write=SerHeight, default=0};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TFooterButtons : public System::Classes::TCollection
{
	typedef System::Classes::TCollection inherited;
	
public:
	TFooterButton* operator[](int Index) { return this->Items[Index]; }
	
private:
	System::Classes::TPersistent* FMyOwner;
	System::Classes::TNotifyEvent FOnChange;
	HIDESBASE TFooterButton* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TFooterButton* const Value);
	
protected:
	void __fastcall Change();
	
public:
	__fastcall TFooterButtons(System::Classes::TPersistent* AOwner);
	__property TFooterButton* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
	HIDESBASE TFooterButton* __fastcall Add();
	HIDESBASE TFooterButton* __fastcall Insert(int Index);
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TFooterButtons() { }
	
};


class PASCALIMPLEMENTATION TFooterAppearance : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	System::Classes::TPersistent* FOwner;
	bool FVisible;
	int FHeight;
	int FBorderWidth;
	bool FSizeGrip;
	System::UnicodeString FCaption;
	System::Uitypes::TColor FColorTo;
	System::Uitypes::TColor FColor;
	System::Uitypes::TColor FBorderColor;
	Vcl::Graphics::TFont* FFont;
	System::Classes::TNotifyEvent FOnChange;
	int FImageIndex;
	TFooterButtons* FButtons;
	TGradientDirection FGradientDirection;
	TButtonAlignment FButtonAlignment;
	System::Classes::TNotifyEvent FOnButtonsChanged;
	void __fastcall SetFont(Vcl::Graphics::TFont* const Value);
	void __fastcall SetButtons(TFooterButtons* const Value);
	void __fastcall SetVisible(const bool Value);
	void __fastcall OnButtonsChange(System::TObject* Sender);
	void __fastcall SetCaption(const System::UnicodeString Value);
	
protected:
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	void __fastcall Changed();
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property System::Classes::TNotifyEvent OnButtonsChanged = {read=FOnButtonsChanged, write=FOnButtonsChanged};
	
public:
	__fastcall TFooterAppearance(System::Classes::TPersistent* AOwner);
	__fastcall virtual ~TFooterAppearance();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	void __fastcall AssignColors(System::Classes::TPersistent* Source);
	
__published:
	__property System::Uitypes::TColor Color = {read=FColor, write=FColor, default=12632256};
	__property System::Uitypes::TColor ColorTo = {read=FColorTo, write=FColorTo, default=16777215};
	__property System::UnicodeString Caption = {read=FCaption, write=SetCaption};
	__property Vcl::Graphics::TFont* Font = {read=FFont, write=SetFont};
	__property TGradientDirection GradientDirection = {read=FGradientDirection, write=FGradientDirection, default=1};
	__property bool Visible = {read=FVisible, write=SetVisible, nodefault};
	__property int Height = {read=FHeight, write=FHeight, default=22};
	__property System::Uitypes::TColor BorderColor = {read=FBorderColor, write=FBorderColor, default=0};
	__property int BorderWidth = {read=FBorderWidth, write=FBorderWidth, default=1};
	__property int ImageIndex = {read=FImageIndex, write=FImageIndex, default=-1};
	__property bool SizeGrip = {read=FSizeGrip, write=FSizeGrip, default=1};
	__property TFooterButtons* Buttons = {read=FButtons, write=SetButtons};
	__property TButtonAlignment ButtonAlignment = {read=FButtonAlignment, write=FButtonAlignment, default=1};
};


class PASCALIMPLEMENTATION TAdvFooter : public Vcl::Controls::TCustomControl
{
	typedef Vcl::Controls::TCustomControl inherited;
	
private:
	TFooterAppearance* FAppearance;
	Vcl::Imglist::TCustomImageList* FImages;
	TAdvCustomDropDown* FAdvDropDown;
	TDbgList* FButtonList;
	TDrawBackGroundEvent FOnDrawBackGround;
	TGetTextEvent FOnGetText;
	System::Uitypes::TCursor FOldCursor;
	HIDESBASE MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Message);
	HIDESBASE MESSAGE void __fastcall WMNCHitTest(Winapi::Messages::TWMNCHitTest &Msg);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Winapi::Messages::TMessage &Message);
	void __fastcall SetImages(Vcl::Imglist::TCustomImageList* const Value);
	void __fastcall SetAppearance(TFooterAppearance* const Value);
	void __fastcall AppearanceChanged(System::TObject* Sender);
	void __fastcall OnButtonClick(System::TObject* Sender);
	TFooterButtons* __fastcall GetButtons();
	void __fastcall SetAdvDropDown(TAdvCustomDropDown* const Value);
	bool __fastcall HasSizeGrip();
	
protected:
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall Paint();
	void __fastcall DrawSizeGrip(const System::Types::TRect &R);
	virtual void __fastcall CreateButtons();
	virtual void __fastcall DestroyButtons();
	virtual void __fastcall ArrangeButtons();
	virtual void __fastcall UpdateButtons();
	System::Types::TRect __fastcall GetButtonsRect();
	int __fastcall GetMaxButtonHeight();
	void __fastcall Initialize();
	System::Types::TRect __fastcall GetButtonsCoveredRect();
	__property TAdvCustomDropDown* AdvDropDown = {read=FAdvDropDown, write=SetAdvDropDown};
	
public:
	__fastcall virtual TAdvFooter(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TAdvFooter();
	
__published:
	__property TFooterAppearance* Appearance = {read=FAppearance, write=SetAppearance};
	__property Vcl::Imglist::TCustomImageList* Images = {read=FImages, write=SetImages};
	__property TFooterButtons* Buttons = {read=GetButtons};
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property BevelInner = {index=0, default=2};
	__property BevelOuter = {index=1, default=1};
	__property BevelWidth = {default=1};
	__property BiDiMode;
	__property BorderWidth = {default=0};
	__property Constraints;
	__property Ctl3D;
	__property UseDockManager = {default=1};
	__property DockSite = {default=0};
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property ParentBiDiMode = {default=1};
	__property ParentBackground;
	__property ParentCtl3D = {default=1};
	__property ParentColor = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=0};
	__property Visible = {default=1};
	__property OnCanResize;
	__property OnClick;
	__property OnConstrainedResize;
	__property OnContextPopup;
	__property OnDockDrop;
	__property OnDockOver;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnGetSiteInfo;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnResize;
	__property TDrawBackGroundEvent OnDrawBackGround = {read=FOnDrawBackGround, write=FOnDrawBackGround};
	__property TGetTextEvent OnGetText = {read=FOnGetText, write=FOnGetText};
public:
	/* TWinControl.CreateParented */ inline __fastcall TAdvFooter(HWND ParentWindow) : Vcl::Controls::TCustomControl(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TDropDownForm : public Vcl::Forms::TForm
{
	typedef Vcl::Forms::TForm inherited;
	
private:
	unsigned FDeActivate;
	bool FShadow;
	TAdvFooter* FFooter;
	TAdvHeader* FHeader;
	TAdvCustomDropDown* FAdvDropDown;
	Vcl::Forms::TScrollBox* FScrollBox;
	bool FSizeable;
	bool FCancelOnDeActivate;
	System::Classes::TNotifyEvent FOnSizing;
	System::Classes::TNotifyEvent FOnSize;
	bool FBlockActivate;
	bool FIsDeactivating;
	HIDESBASE MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Message);
	MESSAGE void __fastcall WMSizing(Winapi::Messages::TWMSize &Message);
	HIDESBASE MESSAGE void __fastcall WMClose(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall WMActivate(Winapi::Messages::TWMActivate &Message);
	HIDESBASE MESSAGE void __fastcall WMNCHitTest(Winapi::Messages::TWMNCHitTest &Message);
	MESSAGE void __fastcall WMGetDlgCode(Winapi::Messages::TMessage &Message);
	HWND __fastcall GetParentWnd();
	void __fastcall SetAdvDropDown(TAdvCustomDropDown* const Value);
	
protected:
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	DYNAMIC void __fastcall Paint();
	void __fastcall DrawBackGround(Vcl::Graphics::TCanvas* ACanvas);
	virtual System::Types::TRect __fastcall GetClientRect();
	virtual void __fastcall AdjustClientRect(System::Types::TRect &Rect);
	DYNAMIC bool __fastcall DoMouseWheelDown(System::Classes::TShiftState Shift, const System::Types::TPoint &MousePos);
	DYNAMIC bool __fastcall DoMouseWheelUp(System::Classes::TShiftState Shift, const System::Types::TPoint &MousePos);
	
public:
	__fastcall virtual TDropDownForm(System::Classes::TComponent* AOwner);
	__fastcall virtual TDropDownForm(System::Classes::TComponent* AOwner, int Dummy);
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	virtual void __fastcall UpdateSize();
	void __fastcall InitializeAndUpdate();
	__property bool IsDeactivating = {read=FIsDeactivating, write=FIsDeactivating, nodefault};
	__property bool BlockActivate = {read=FBlockActivate, write=FBlockActivate, nodefault};
	__property unsigned DeActivateTime = {read=FDeActivate, nodefault};
	__property Vcl::Forms::TScrollBox* ScrollBox = {read=FScrollBox};
	__property bool Sizeable = {read=FSizeable, write=FSizeable, nodefault};
	__property bool Shadow = {read=FShadow, write=FShadow, nodefault};
	__property TAdvHeader* Header = {read=FHeader};
	__property TAdvFooter* Footer = {read=FFooter};
	__property bool CancelOnDeActivate = {read=FCancelOnDeActivate, write=FCancelOnDeActivate, default=1};
	__property TAdvCustomDropDown* AdvDropDown = {read=FAdvDropDown, write=SetAdvDropDown};
	__property System::Classes::TNotifyEvent OnSize = {read=FOnSize, write=FOnSize};
	__property System::Classes::TNotifyEvent OnSizing = {read=FOnSizing, write=FOnSizing};
public:
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TDropDownForm() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TDropDownForm(HWND ParentWindow) : Vcl::Forms::TForm(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TAdvDropDownSpeedButton : public Vcl::Buttons::TSpeedButton
{
	typedef Vcl::Buttons::TSpeedButton inherited;
	
private:
	float FDPIScale;
	bool FEtched;
	bool FFocused;
	bool FHot;
	bool FUp;
	bool FIsWinXP;
	TButtonStyle FButtonStyle;
	void __fastcall SetEtched(const bool Value);
	void __fastcall SetFocused(const bool Value);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Winapi::Messages::TMessage &Message);
	void __fastcall PaintDropDown();
	void __fastcall PaintButton();
	void __fastcall SetButtonStyle(const TButtonStyle Value);
	
protected:
	virtual void __fastcall Paint();
	bool __fastcall DoVisualStyles();
	
public:
	void __fastcall SetUp();
	__fastcall virtual TAdvDropDownSpeedButton(System::Classes::TComponent* AOwner);
	
__published:
	__property TButtonStyle ButtonStyle = {read=FButtonStyle, write=SetButtonStyle, nodefault};
	__property bool Etched = {read=FEtched, write=SetEtched, nodefault};
	__property bool Focused = {read=FFocused, write=SetFocused, nodefault};
public:
	/* TCustomSpeedButton.Destroy */ inline __fastcall virtual ~TAdvDropDownSpeedButton() { }
	
};


class PASCALIMPLEMENTATION TDropDownEditButton : public Vcl::Controls::TWinControl
{
	typedef Vcl::Controls::TWinControl inherited;
	
private:
	TAdvDropDownSpeedButton* FButton;
	Vcl::Controls::TWinControl* FFocusControl;
	System::Classes::TNotifyEvent FOnClick;
	int FBWidth;
	System::Uitypes::TColor FButtonColorDown;
	System::Uitypes::TColor FButtonBorderColor;
	System::Uitypes::TColor FButtonTextColor;
	System::Uitypes::TColor FButtonTextColorHot;
	System::Uitypes::TColor FButtonColor;
	System::Uitypes::TColor FButtonColorHot;
	System::Uitypes::TColor FButtonTextColorDown;
	HIDESBASE MESSAGE void __fastcall CMEnabledChanged(Winapi::Messages::TMessage &Msg);
	TAdvDropDownSpeedButton* __fastcall CreateButton();
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
	__fastcall virtual TDropDownEditButton(System::Classes::TComponent* AOwner);
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	__property System::Uitypes::TColor ButtonColor = {read=FButtonColor, write=FButtonColor, default=536870911};
	__property System::Uitypes::TColor ButtonColorHot = {read=FButtonColorHot, write=FButtonColorHot, default=536870911};
	__property System::Uitypes::TColor ButtonColorDown = {read=FButtonColorDown, write=FButtonColorDown, default=536870911};
	__property System::Uitypes::TColor ButtonTextColor = {read=FButtonTextColor, write=FButtonTextColor, default=536870911};
	__property System::Uitypes::TColor ButtonTextColorHot = {read=FButtonTextColorHot, write=FButtonTextColorHot, default=536870911};
	__property System::Uitypes::TColor ButtonTextColorDown = {read=FButtonTextColorDown, write=FButtonTextColorDown, default=536870911};
	__property System::Uitypes::TColor ButtonBorderColor = {read=FButtonBorderColor, write=FButtonBorderColor, default=536870911};
	
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
	/* TWinControl.CreateParented */ inline __fastcall TDropDownEditButton(HWND ParentWindow) : Vcl::Controls::TWinControl(ParentWindow) { }
	/* TWinControl.Destroy */ inline __fastcall virtual ~TDropDownEditButton() { }
	
};


enum DECLSPEC_DENUM TLabelPosition : unsigned char { lpLeftTop, lpLeftCenter, lpLeftBottom, lpTopLeft, lpBottomLeft, lpLeftTopLeft, lpLeftCenterLeft, lpLeftBottomLeft, lpTopCenter, lpBottomCenter, lpRightTop, lpRightCenter, lpRighBottom, lpTopRight, lpBottomRight };

class PASCALIMPLEMENTATION TAdvCustomDropDown : public Vcl::Mask::TCustomMaskEdit
{
	typedef Vcl::Mask::TCustomMaskEdit inherited;
	
private:
	int FOrigCtrlH;
	int FOrigCtrlW;
	float FDPIScale;
	bool FDesignTime;
	Vcl::Stdctrls::TLabel* FLabel;
	bool FParentFnt;
	int FDropDownWidth;
	int FDropDownHeight;
	int FUserDropDownWidth;
	int FUserDropDownHeight;
	bool FEditorEnabled;
	TDropPosition FDropPosition;
	TDropDown FOnDropDown;
	TDropUp FOnDropUP;
	bool FFlat;
	Vcl::Imglist::TCustomImageList* FImages;
	bool FDropDownShadow;
	int FDropDownBorderWidth;
	System::UnicodeString FButtonHint;
	System::Uitypes::TColor FDropDownColorTo;
	System::Uitypes::TColor FDropDownColor;
	System::Uitypes::TColor FDropDownBorderColor;
	int FButtonWidth;
	bool FMouseInControl;
	bool FEtched;
	Vcl::Controls::TWinControl* FFocusControl;
	THeaderAppearance* FDropDownHeader;
	TAdvButtonAppearance* FButtonAppearance;
	TFooterAppearance* FDropDownFooter;
	Vcl::Controls::TControl* FControl;
	TGradientDirection FDropDownGradient;
	bool FDropDownSizeable;
	System::Uitypes::TColor FSelectionColor;
	System::Uitypes::TColor FSelectionColorTo;
	TSelectionColorStyle FSelectionColorStyle;
	TDropDownEditType FEditType;
	short FLengthLimit;
	short FPrecision;
	System::UnicodeString FPrefix;
	System::UnicodeString FSuffix;
	System::UnicodeString FOldString;
	bool FSigned;
	bool FReturnIsTab;
	bool FIsWinXP;
	bool FIsThemed;
	bool FBlockChange;
	bool FAllowNumericNullValue;
	bool FDefaultHandling;
	bool FCanUndo;
	bool FExcelStyleDecimalSeparator;
	System::UnicodeString FValidChars;
	bool FBlockCopy;
	bool FDoShowBusy;
	TClipboardEvent FOnClipboardCopy;
	TClipboardEvent FOnClipboardPaste;
	TClipboardEvent FOnClipboardCut;
	bool FButtonDown;
	bool FAutoThousandSeparator;
	bool FIsModified;
	System::Types::TRect FEditRect;
	bool FDropDownEnabled;
	TDropDownButtonItemClick FOnDropDownFooterButtonClick;
	TDropDownButtonItemClick FOnDropDownHeaderButtonClick;
	TDrawBackGroundEvent FOnDrawHeader;
	TDrawBackGroundEvent FOnDrawFooter;
	TGetTextEvent FOnGetFooterText;
	TGetTextEvent FOnGetHeaderText;
	bool FDroppedDown;
	bool FFocusDraw;
	bool FForceShadow;
	Advstyleif::TTMSStyle FTMSStyle;
	System::Classes::TNotifyEvent FOnBeforeDropDown;
	System::Classes::TNotifyEvent FOnBeforeDropUp;
	int FLabelMargin;
	TLabelPosition FLabelPosition;
	bool FLabelAlwaysEnabled;
	bool FLabelTransparent;
	Vcl::Graphics::TFont* FLabelFont;
	System::Classes::TNotifyEvent FOnLabelDblClick;
	System::Classes::TNotifyEvent FOnLabelClick;
	System::Uitypes::TColor FBorderColor;
	System::Uitypes::TColor FFocusBorderColor;
	bool FDisabledBorder;
	TGetDropDownPosEvent FOnGetDropDownPos;
	bool FLblUpdate;
	int FLblFntHeight;
	System::Uitypes::TFontStyles FEmptyTextStyle;
	System::UnicodeString FEmptyText;
	bool FEmptyTextFocused;
	System::Classes::TNotifyEvent FOnAfterDropDown;
	HIDESBASE MESSAGE void __fastcall CNCommand(Winapi::Messages::TWMCommand &Message);
	HIDESBASE MESSAGE void __fastcall CMVisibleChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMEnabledChanged(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall CMEnter(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall CMExit(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMParentFontChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMWantSpecialKey(Winapi::Messages::TWMKey &Msg);
	HIDESBASE MESSAGE void __fastcall WMChar(Winapi::Messages::TWMKey &Msg);
	HIDESBASE MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Message);
	HIDESBASE MESSAGE void __fastcall WMKeyDown(Winapi::Messages::TWMKey &Msg);
	MESSAGE void __fastcall WMGetDlgCode(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall WMPaste(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall WMCut(Winapi::Messages::TWMNoParams &Message);
	MESSAGE void __fastcall WMCopy(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Winapi::Messages::TWMSetFocus &Message);
	HIDESBASE MESSAGE void __fastcall WMKillFocus(Winapi::Messages::TWMKillFocus &Msg);
	HIDESBASE MESSAGE void __fastcall WMLButtonUp(Winapi::Messages::TWMMouse &Msg);
	HIDESBASE MESSAGE void __fastcall WMLButtonDown(Winapi::Messages::TWMMouse &Msg);
	HIDESBASE MESSAGE void __fastcall WMPaint(Winapi::Messages::TWMPaint &Message);
	HIDESBASE MESSAGE void __fastcall WMNCPaint(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMLButtonDblClk(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMSetCursor(Winapi::Messages::TWMSetCursor &Msg);
	void __fastcall OnFooterAppearanceChanged(System::TObject* Sender);
	void __fastcall OnHeaderAppearanceChanged(System::TObject* Sender);
	void __fastcall FormClose(System::TObject* Sender, System::Uitypes::TCloseAction &Action);
	void __fastcall OnFormHide(System::TObject* Sender);
	void __fastcall OnFormDestroy(System::TObject* Sender);
	void __fastcall OnFormKeyPress(System::TObject* Sender, System::WideChar &Key);
	void __fastcall OnFormKeyDown(System::TObject* Sender, System::Word &Key, System::Classes::TShiftState Shift);
	void __fastcall OnFormKeyUp(System::TObject* Sender, System::Word &Key, System::Classes::TShiftState Shift);
	void __fastcall OnFormMouseWheelDown(System::TObject* Sender, System::Classes::TShiftState Shift, const System::Types::TPoint &MousePos, bool &Handled);
	void __fastcall OnFormMouseWheelUp(System::TObject* Sender, System::Classes::TShiftState Shift, const System::Types::TPoint &MousePos, bool &Handled);
	void __fastcall OnControlKeyDown(System::TObject* Sender, System::Word &Key, System::Classes::TShiftState Shift);
	void __fastcall OnControlKeyUp(System::TObject* Sender, System::Word &Key, System::Classes::TShiftState Shift);
	void __fastcall OnControlKeyPress(System::TObject* Sender, System::WideChar &Key);
	void __fastcall SetEditorEnabled(const bool Value);
	void __fastcall SetImages(Vcl::Imglist::TCustomImageList* const Value);
	void __fastcall SetFlat(const bool Value);
	void __fastcall SetVersion(const System::UnicodeString Value);
	Vcl::Graphics::TBitmap* __fastcall GetButtonGlyph();
	int __fastcall GetButtonWidth();
	void __fastcall SetButtonGlyph(Vcl::Graphics::TBitmap* const Value);
	void __fastcall SetButtonHint(const System::UnicodeString Value);
	void __fastcall SetButtonWidth(const int Value);
	System::UnicodeString __fastcall GetButtonCaption();
	void __fastcall SetButtonCaption(const System::UnicodeString Value);
	void __fastcall SetEtched(const bool Value);
	void __fastcall DrawControlBorder(HDC DC);
	void __fastcall DrawButtonBorder();
	void __fastcall DrawBorders();
	bool __fastcall Is3DBorderControl();
	bool __fastcall Is3DBorderButton();
	void __fastcall SetDropDownHeader(THeaderAppearance* const Value);
	void __fastcall SetButtonAppearance(TAdvButtonAppearance* const Value);
	void __fastcall SetDropDownFooter(TFooterAppearance* const Value);
	void __fastcall SetControl(Vcl::Controls::TControl* const Value);
	void __fastcall SetSelectionColor(const System::Uitypes::TColor Value);
	void __fastcall SetSelectionColorTo(const System::Uitypes::TColor Value);
	void __fastcall SetEditType(const TDropDownEditType Value);
	HIDESBASE System::UnicodeString __fastcall GetText();
	void __fastcall SetPrefix(const System::UnicodeString Value);
	void __fastcall SetSuffix(const System::UnicodeString Value);
	void __fastcall SetPrecision(const short Value);
	int __fastcall FixedLength(System::UnicodeString s);
	bool __fastcall AllowMin(System::WideChar ch);
	int __fastcall DecimalPos();
	void __fastcall SetFloat(const double Value);
	void __fastcall SetInt(const int Value);
	void __fastcall AutoSeparators();
	HIDESBASE bool __fastcall GetModified();
	HIDESBASE void __fastcall SetModified(const bool Value);
	void __fastcall SetCanUndo(const bool Value);
	double __fastcall GetFloat();
	int __fastcall GetInt();
	System::Extended __fastcall EStrToFloat(System::UnicodeString s);
	int __fastcall CharFromPos(const System::Types::TPoint &pt);
	void __fastcall UpdateLookup();
	void __fastcall SetAutoThousandSeparator(const bool Value);
	void __fastcall SetDropDownEnabled(const bool Value);
	void __fastcall SetDropDownColor(const System::Uitypes::TColor Value);
	void __fastcall DropDownSizing(System::TObject* Sender);
	void __fastcall SetDropDownHeight(const int Value);
	void __fastcall SetDropDownWidth(const int Value);
	System::UnicodeString __fastcall GetLabelCaption();
	void __fastcall SetLabelAlwaysEnabled(const bool Value);
	void __fastcall SetLabelCaption(const System::UnicodeString Value);
	void __fastcall SetLabelFont(Vcl::Graphics::TFont* const Value);
	void __fastcall SetLabelMargin(const int Value);
	void __fastcall SetLabelPosition(const TLabelPosition Value);
	void __fastcall SetLabelTransparent(const bool Value);
	void __fastcall LabelFontChange(System::TObject* Sender);
	void __fastcall SetBorderColor(const System::Uitypes::TColor Value);
	void __fastcall SetFocusBorderColor(const System::Uitypes::TColor Value);
	void __fastcall SetDisabledBorder(const bool Value);
	void __fastcall SetEmptyText(const System::UnicodeString Value);
	void __fastcall SetEmptyTextStyle(const System::Uitypes::TFontStyles Value);
	void __fastcall SetUIStyle(const Advstyleif::TTMSStyle Value);
	
protected:
	TDropDownForm* FDropDownForm;
	TDropDownEditButton* FButton;
	System::UnicodeString FOldText;
	virtual void __fastcall CreateWnd();
	virtual void __fastcall DestroyWnd();
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall SetParent(Vcl::Controls::TWinControl* AParent);
	virtual void __fastcall Loaded();
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	DYNAMIC void __fastcall DoEnter();
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	DYNAMIC bool __fastcall DoMouseWheelDown(System::Classes::TShiftState Shift, const System::Types::TPoint &MousePos);
	DYNAMIC bool __fastcall DoMouseWheelUp(System::Classes::TShiftState Shift, const System::Types::TPoint &MousePos);
	DYNAMIC void __fastcall ChangeScale(int M, int D, bool isDpiChange)/* overload */;
	System::Types::TPoint __fastcall PosFromChar(System::Word uChar);
	Vcl::Stdctrls::TLabel* __fastcall CreateLabel();
	void __fastcall UpdateLabel();
	virtual void __fastcall LabelClick(System::TObject* Sender);
	virtual void __fastcall LabelDblClick(System::TObject* Sender);
	System::UnicodeString __fastcall GetVersionEx();
	virtual int __fastcall GetVersionNr();
	virtual void __fastcall CreateDropDownForm();
	virtual void __fastcall CreateDropDownButton();
	virtual void __fastcall UpdateDropDownButton();
	virtual void __fastcall BeforeDropDown();
	void __fastcall ResetDropSize();
	virtual void __fastcall AdaptDropDownSize(int &AHeight);
	virtual void __fastcall AfterDropDown();
	virtual void __fastcall DoShowDropDown();
	virtual void __fastcall SetCenterControl();
	virtual void __fastcall UpdateDropDownSize();
	virtual void __fastcall DoHideDropDown(bool Cancelled);
	virtual void __fastcall OnHideDropDown();
	virtual void __fastcall OnDestroyDropDownForm();
	virtual void __fastcall OnDropDownFormMouseWheelDown(System::Classes::TShiftState Shift, const System::Types::TPoint &MousePos, bool &Handled);
	virtual void __fastcall OnDropDownFormMouseWheelUp(System::Classes::TShiftState Shift, const System::Types::TPoint &MousePos, bool &Handled);
	virtual void __fastcall OnDropDownFormKeyPress(System::WideChar &Key);
	virtual void __fastcall OnDropDownFormKeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall OnDropDownFormKeyUp(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall OnDropDownControlKeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall OnDropDownControlKeyUp(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall OnDropDownControlKeyPress(System::WideChar &Key);
	virtual void __fastcall OnDropDownSizing();
	virtual void __fastcall OnDropDownSize();
	virtual void __fastcall HandleMouseWheelDown();
	virtual void __fastcall HandleMouseWheelUp();
	virtual void __fastcall DrawBackGround();
	virtual void __fastcall PaintEdit();
	virtual int __fastcall GetMinValue();
	int __fastcall GetMinHeight();
	System::Types::TRect __fastcall GetEditRect();
	virtual void __fastcall SetEditRect();
	virtual void __fastcall ResizeControl();
	void __fastcall SetTextDirect(System::UnicodeString s);
	HIDESBASE virtual void __fastcall SetText(System::UnicodeString Value);
	virtual void __fastcall SetSelectionColorStyle(const TSelectionColorStyle Value);
	void __fastcall ReadSelectionColorStyle(System::Classes::TReader* Reader);
	void __fastcall WriteSelectionColorStyle(System::Classes::TWriter* Writer);
	void __fastcall ReadTMSStyle(System::Classes::TReader* Reader);
	void __fastcall WriteTMSStyle(System::Classes::TWriter* Writer);
	void __fastcall MouseButtonDown(System::TObject* Sender);
	void __fastcall DropDownButtonClick(System::TObject* Sender);
	virtual void __fastcall DrawSelectionBackground(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &R, System::Uitypes::TColor bkgcolor, Advutil::TGradientPart part);
	virtual void __fastcall DrawGradientBackground(Vcl::Graphics::TCanvas* Canvas, System::Uitypes::TColor FromColor, System::Uitypes::TColor ToColor, int Steps, const System::Types::TRect &R, TGradientDirection GradientDirection);
	__property System::Uitypes::TColor BorderColor = {read=FBorderColor, write=SetBorderColor, default=536870911};
	__property bool DisabledBorder = {read=FDisabledBorder, write=SetDisabledBorder, default=1};
	__property System::Uitypes::TColor FocusBorderColor = {read=FFocusBorderColor, write=SetFocusBorderColor, default=536870911};
	__property Vcl::Controls::TWinControl* FocusControl = {read=FFocusControl, write=FFocusControl};
	__property bool FocusDraw = {read=FFocusDraw, write=FFocusDraw, default=1};
	__property bool ForceShadow = {read=FForceShadow, write=FForceShadow, default=0};
	__property bool DropDownEnabled = {read=FDropDownEnabled, write=SetDropDownEnabled, default=1};
	__property System::Uitypes::TColor DropDownColor = {read=FDropDownColor, write=SetDropDownColor, default=16777215};
	__property System::Uitypes::TColor DropDownColorTo = {read=FDropDownColorTo, write=FDropDownColorTo, default=536870911};
	__property TGradientDirection DropDownGradient = {read=FDropDownGradient, write=FDropDownGradient, default=0};
	__property System::Uitypes::TColor DropDownBorderColor = {read=FDropDownBorderColor, write=FDropDownBorderColor, default=0};
	__property int DropDownBorderWidth = {read=FDropDownBorderWidth, write=FDropDownBorderWidth, default=1};
	__property bool DropDownShadow = {read=FDropDownShadow, write=FDropDownShadow, default=1};
	__property int DropDownWidth = {read=FDropDownWidth, write=SetDropDownWidth, default=0};
	__property int DropDownHeight = {read=FDropDownHeight, write=SetDropDownHeight, default=0};
	__property bool DropDownSizeable = {read=FDropDownSizeable, write=FDropDownSizeable, default=1};
	__property TDropDownEditType EditType = {read=FEditType, write=SetEditType, default=0};
	__property bool ReturnIsTab = {read=FReturnIsTab, write=FReturnIsTab, default=0};
	__property short LengthLimit = {read=FLengthLimit, write=FLengthLimit, default=0};
	__property short Precision = {read=FPrecision, write=SetPrecision, nodefault};
	__property System::UnicodeString Prefix = {read=FPrefix, write=SetPrefix};
	__property System::UnicodeString Suffix = {read=FSuffix, write=SetSuffix};
	__property bool DefaultHandling = {read=FDefaultHandling, write=FDefaultHandling, nodefault};
	__property bool CanUndo = {read=FCanUndo, write=SetCanUndo, default=1};
	__property bool ExcelStyleDecimalSeparator = {read=FExcelStyleDecimalSeparator, write=FExcelStyleDecimalSeparator, default=0};
	__property System::UnicodeString ValidChars = {read=FValidChars, write=FValidChars};
	__property double FloatValue = {read=GetFloat, write=SetFloat};
	__property int IntValue = {read=GetInt, write=SetInt, nodefault};
	__property bool Modified = {read=GetModified, write=SetModified, nodefault};
	__property bool Signed = {read=FSigned, write=FSigned, default=0};
	__property bool AutoThousandSeparator = {read=FAutoThousandSeparator, write=SetAutoThousandSeparator, default=1};
	__property Vcl::Controls::TControl* Control = {read=FControl, write=SetControl};
	__property TAdvButtonAppearance* ButtonAppearance = {read=FButtonAppearance, write=SetButtonAppearance};
	__property THeaderAppearance* DropDownHeader = {read=FDropDownHeader, write=SetDropDownHeader};
	__property TFooterAppearance* DropDownFooter = {read=FDropDownFooter, write=SetDropDownFooter};
	__property TDropPosition DropPosition = {read=FDropPosition, write=FDropPosition, default=0};
	__property bool Flat = {read=FFlat, write=SetFlat, default=0};
	__property int DropDownButtonWidth = {read=GetButtonWidth, write=SetButtonWidth, default=17};
	__property System::UnicodeString DropDownButtonHint = {read=FButtonHint, write=SetButtonHint};
	__property bool EditorEnabled = {read=FEditorEnabled, write=SetEditorEnabled, default=1};
	__property Vcl::Graphics::TBitmap* DropDownButtonGlyph = {read=GetButtonGlyph, write=SetButtonGlyph};
	__property System::UnicodeString DropDownButtonCaption = {read=GetButtonCaption, write=SetButtonCaption};
	__property bool Etched = {read=FEtched, write=SetEtched, nodefault};
	__property System::UnicodeString EmptyText = {read=FEmptyText, write=SetEmptyText};
	__property bool EmptyTextFocused = {read=FEmptyTextFocused, write=FEmptyTextFocused, nodefault};
	__property System::Uitypes::TFontStyles EmptyTextStyle = {read=FEmptyTextStyle, write=SetEmptyTextStyle, nodefault};
	__property System::UnicodeString LabelCaption = {read=GetLabelCaption, write=SetLabelCaption};
	__property TLabelPosition LabelPosition = {read=FLabelPosition, write=SetLabelPosition, default=0};
	__property int LabelMargin = {read=FLabelMargin, write=SetLabelMargin, default=4};
	__property bool LabelTransparent = {read=FLabelTransparent, write=SetLabelTransparent, default=0};
	__property bool LabelAlwaysEnabled = {read=FLabelAlwaysEnabled, write=SetLabelAlwaysEnabled, default=0};
	__property Vcl::Graphics::TFont* LabelFont = {read=FLabelFont, write=SetLabelFont};
	__property Vcl::Imglist::TCustomImageList* Images = {read=FImages, write=SetImages};
	__property System::UnicodeString Version = {read=GetVersionEx, write=SetVersion};
	__property TSelectionColorStyle SelectionColorStyle = {read=FSelectionColorStyle, write=SetSelectionColorStyle, nodefault};
	__property System::Uitypes::TColor SelectionColor = {read=FSelectionColor, write=SetSelectionColor, nodefault};
	__property System::Uitypes::TColor SelectionColorTo = {read=FSelectionColorTo, write=SetSelectionColorTo, nodefault};
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	__property System::UnicodeString Text = {read=GetText, write=SetText};
	__property System::Classes::TNotifyEvent OnAfterDropDown = {read=FOnAfterDropDown, write=FOnAfterDropDown};
	__property TDropDownButtonItemClick OnDropDownHeaderButtonClick = {read=FOnDropDownHeaderButtonClick, write=FOnDropDownHeaderButtonClick};
	__property TDropDownButtonItemClick OnDropDownFooterButtonClick = {read=FOnDropDownFooterButtonClick, write=FOnDropDownFooterButtonClick};
	__property TDrawBackGroundEvent OnDrawHeader = {read=FOnDrawHeader, write=FOnDrawHeader};
	__property TDrawBackGroundEvent OnDrawFooter = {read=FOnDrawFooter, write=FOnDrawFooter};
	__property TGetTextEvent OnGetHeaderText = {read=FOnGetHeaderText, write=FOnGetHeaderText};
	__property TGetTextEvent OnGetFooterText = {read=FOnGetFooterText, write=FOnGetFooterText};
	__property System::Classes::TNotifyEvent OnBeforeDropDown = {read=FOnBeforeDropDown, write=FOnBeforeDropDown};
	__property TDropDown OnDropDown = {read=FOnDropDown, write=FOnDropDown};
	__property System::Classes::TNotifyEvent OnBeforeDropUp = {read=FOnBeforeDropUp, write=FOnBeforeDropUp};
	__property TDropUp OnDropUp = {read=FOnDropUP, write=FOnDropUP};
	__property TClipboardEvent OnClipboardCopy = {read=FOnClipboardCopy, write=FOnClipboardCopy};
	__property TClipboardEvent OnClipboardCut = {read=FOnClipboardCut, write=FOnClipboardCut};
	__property TClipboardEvent OnClipboardPaste = {read=FOnClipboardPaste, write=FOnClipboardPaste};
	__property System::Classes::TNotifyEvent OnLabelClick = {read=FOnLabelClick, write=FOnLabelClick};
	__property System::Classes::TNotifyEvent OnLabelDblClick = {read=FOnLabelDblClick, write=FOnLabelDblClick};
	__property TGetDropDownPosEvent OnGetDropDownPos = {read=FOnGetDropDownPos, write=FOnGetDropDownPos};
	void __fastcall SetAppearanceStyle(TItemAppearance* ItemAppearance, Advstyleif::TTMSStyle AStyle);
	System::Types::TSize __fastcall GetDropDownSize();
	
public:
	__fastcall virtual TAdvCustomDropDown(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TAdvCustomDropDown();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	virtual void __fastcall SetComponentStyle(Advstyleif::TTMSStyle AStyle);
	virtual void __fastcall SetColorTones(const Advstyleif::TColorTones &ATones);
	Advstyleif::TTMSStyle __fastcall GetComponentStyle();
	HIDESBASE void __fastcall SelectAll();
	void __fastcall SelectBeforeDecimal();
	void __fastcall SelectAfterDecimal();
	void __fastcall ShowDropDown();
	void __fastcall HideDropDown(bool CancelChanges = false);
	__property TDropDownEditButton* Button = {read=FButton};
	__property bool DroppedDown = {read=FDroppedDown, nodefault};
	__property System::Types::TSize DropDownSize = {read=GetDropDownSize};
	__property Advstyleif::TTMSStyle UIStyle = {read=FTMSStyle, write=SetUIStyle, default=8};
public:
	/* TWinControl.CreateParented */ inline __fastcall TAdvCustomDropDown(HWND ParentWindow) : Vcl::Mask::TCustomMaskEdit(ParentWindow) { }
	
	/* Hoisted overloads: */
	
protected:
	DYNAMIC inline void __fastcall  ChangeScale(int M, int D){ Vcl::Controls::TControl::ChangeScale(M, D); }
	
private:
	void *__ITMSTones;	// Advstyleif::ITMSTones 
	void *__ITMSStyle;	// Advstyleif::ITMSStyle 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {1F492643-6699-4F25-8B34-3233FA735036}
	operator Advstyleif::_di_ITMSTones()
	{
		Advstyleif::_di_ITMSTones intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Advstyleif::ITMSTones*(void) { return (Advstyleif::ITMSTones*)&__ITMSTones; }
	#endif
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


class PASCALIMPLEMENTATION TAdvDropDown : public TAdvCustomDropDown
{
	typedef TAdvCustomDropDown inherited;
	
__published:
	__property Align = {default=0};
	__property Alignment = {default=0};
	__property Anchors = {default=3};
	__property BevelEdges = {default=15};
	__property BevelInner = {index=0, default=2};
	__property BevelKind = {default=0};
	__property BevelOuter = {index=1, default=1};
	__property BevelWidth = {default=1};
	__property BiDiMode;
	__property BorderStyle = {default=1};
	__property CharCase = {default=0};
	__property Color = {default=-16777211};
	__property Constraints;
	__property Ctl3D;
	__property BorderColor = {default=536870911};
	__property EmptyText = {default=0};
	__property EmptyTextFocused;
	__property EmptyTextStyle;
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
	__property DropDownColor = {default=16777215};
	__property DropDownColorTo = {default=536870911};
	__property DropDownBorderColor = {default=0};
	__property DropDownBorderWidth = {default=1};
	__property DropDownShadow = {default=1};
	__property DropDownWidth = {default=0};
	__property DropDownHeight = {default=0};
	__property DropDownEnabled = {default=1};
	__property DropPosition = {default=0};
	__property DropDownButtonWidth = {default=17};
	__property DropDownButtonHint = {default=0};
	__property DropDownSizeable = {default=1};
	__property Enabled = {default=1};
	__property EditorEnabled = {default=1};
	__property Font;
	__property DropDownButtonGlyph;
	__property Images;
	__property LabelCaption = {default=0};
	__property LabelPosition = {default=0};
	__property LabelMargin = {default=4};
	__property LabelTransparent = {default=0};
	__property LabelAlwaysEnabled = {default=0};
	__property LabelFont;
	__property Version = {default=0};
	__property ReadOnly = {default=0};
	__property Text;
	__property StyleElements = {default=7};
	__property ButtonAppearance;
	__property DropDownHeader;
	__property DropDownFooter;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property TabStop = {default=1};
	__property TabOrder = {default=-1};
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
	__property OnAfterDropDown;
	__property OnBeforeDropDown;
	__property OnDropDown;
	__property OnBeforeDropUp;
	__property OnDropUp;
	__property OnDropDownHeaderButtonClick;
	__property OnDropDownFooterButtonClick;
	__property OnDrawHeader;
	__property OnDrawFooter;
	__property OnGetHeaderText;
	__property OnGetFooterText;
	__property OnLabelClick;
	__property OnLabelDblClick;
	__property OnGetDropDownPos;
public:
	/* TAdvCustomDropDown.Create */ inline __fastcall virtual TAdvDropDown(System::Classes::TComponent* AOwner) : TAdvCustomDropDown(AOwner) { }
	/* TAdvCustomDropDown.Destroy */ inline __fastcall virtual ~TAdvDropDown() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TAdvDropDown(HWND ParentWindow) : TAdvCustomDropDown(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TWinCtrl : public Vcl::Controls::TWinControl
{
	typedef Vcl::Controls::TWinControl inherited;
	
public:
	void __fastcall PaintCtrls(HDC DC, Vcl::Controls::TControl* First);
public:
	/* TWinControl.Create */ inline __fastcall virtual TWinCtrl(System::Classes::TComponent* AOwner) : Vcl::Controls::TWinControl(AOwner) { }
	/* TWinControl.CreateParented */ inline __fastcall TWinCtrl(HWND ParentWindow) : Vcl::Controls::TWinControl(ParentWindow) { }
	/* TWinControl.Destroy */ inline __fastcall virtual ~TWinCtrl() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TSelectorItem : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	Vcl::Controls::TCaption FCaption;
	int FImageIndex;
	bool FEnabled;
	System::Uitypes::TColor FColor;
	Vcl::Graphics::TPicture* FImage;
	System::Types::TRect FRect;
	System::UnicodeString FHint;
	void __fastcall SetCaption(const Vcl::Controls::TCaption Value);
	void __fastcall SetColor(const System::Uitypes::TColor Value);
	void __fastcall SetImage(Vcl::Graphics::TPicture* const Value);
	void __fastcall SetImageIndex(const int Value);
	
protected:
	HIDESBASE void __fastcall Changed();
	__property System::Types::TRect Rect = {read=FRect, write=FRect};
	__property bool Enabled = {read=FEnabled, write=FEnabled, default=1};
	
public:
	__fastcall virtual TSelectorItem(System::Classes::TCollection* Collection);
	__fastcall virtual ~TSelectorItem();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property Vcl::Controls::TCaption Caption = {read=FCaption, write=SetCaption};
	__property System::Uitypes::TColor Color = {read=FColor, write=SetColor, default=536870911};
	__property int ImageIndex = {read=FImageIndex, write=SetImageIndex, default=-1};
	__property Vcl::Graphics::TPicture* Image = {read=FImage, write=SetImage};
	__property System::UnicodeString Hint = {read=FHint, write=FHint};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TSelectorItems : public System::Classes::TCollection
{
	typedef System::Classes::TCollection inherited;
	
public:
	TSelectorItem* operator[](int Index) { return this->Items[Index]; }
	
private:
	System::Classes::TPersistent* FMyOwner;
	System::Classes::TNotifyEvent FOnChange;
	HIDESBASE TSelectorItem* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TSelectorItem* const Value);
	
protected:
	void __fastcall Change();
	
public:
	__fastcall TSelectorItems(System::Classes::TPersistent* AOwner);
	__property TSelectorItem* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
	HIDESBASE TSelectorItem* __fastcall Add();
	HIDESBASE TSelectorItem* __fastcall Insert(int Index);
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TSelectorItems() { }
	
};


class PASCALIMPLEMENTATION TItemAppearance : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	System::Classes::TPersistent* FOwner;
	System::Classes::TNotifyEvent FOnChange;
	System::Uitypes::TColor FColorMirrorHotTo;
	System::Uitypes::TColor FBorderColor;
	System::Uitypes::TColor FColorMirrorHot;
	System::Uitypes::TColor FColorSelectedTo;
	System::Uitypes::TColor FColorSelected;
	System::Uitypes::TColor FEdgeColor;
	System::Uitypes::TColor FColorHotTo;
	System::Uitypes::TColor FBorderColorBottom;
	System::Uitypes::TColor FColorHot;
	System::Uitypes::TColor FBorderColorTop;
	System::Uitypes::TColor FColorMirrorSelectedTo;
	System::Uitypes::TColor FColorMirrorSelected;
	System::Uitypes::TColor FColorSelectedText;
	System::Uitypes::TColor FColorHotText;
	TSelectionColorStyle FColorStyle;
	Vcl::Graphics::TFont* FFont;
	System::Uitypes::TColor FBorderColorHot;
	System::Uitypes::TColor FBorderColorSelected;
	void __fastcall SetColorStyle(const TSelectionColorStyle Value);
	void __fastcall SetFont(Vcl::Graphics::TFont* const Value);
	
protected:
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	void __fastcall Changed();
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property TSelectionColorStyle ColorStyle = {read=FColorStyle, write=SetColorStyle, nodefault};
	
public:
	__fastcall TItemAppearance(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TItemAppearance();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property System::Uitypes::TColor BorderColor = {read=FBorderColor, write=FBorderColor, nodefault};
	__property System::Uitypes::TColor BorderColorTop = {read=FBorderColorTop, write=FBorderColorTop, nodefault};
	__property System::Uitypes::TColor BorderColorBottom = {read=FBorderColorBottom, write=FBorderColorBottom, nodefault};
	__property System::Uitypes::TColor BorderColorHot = {read=FBorderColorHot, write=FBorderColorHot, default=536870911};
	__property System::Uitypes::TColor BorderColorSelected = {read=FBorderColorSelected, write=FBorderColorSelected, default=536870911};
	__property System::Uitypes::TColor ColorHot = {read=FColorHot, write=FColorHot, nodefault};
	__property System::Uitypes::TColor ColorHotTo = {read=FColorHotTo, write=FColorHotTo, nodefault};
	__property System::Uitypes::TColor ColorHotText = {read=FColorHotText, write=FColorHotText, nodefault};
	__property System::Uitypes::TColor ColorMirrorHot = {read=FColorMirrorHot, write=FColorMirrorHot, nodefault};
	__property System::Uitypes::TColor ColorMirrorHotTo = {read=FColorMirrorHotTo, write=FColorMirrorHotTo, nodefault};
	__property System::Uitypes::TColor ColorSelected = {read=FColorSelected, write=FColorSelected, nodefault};
	__property System::Uitypes::TColor ColorSelectedTo = {read=FColorSelectedTo, write=FColorSelectedTo, nodefault};
	__property System::Uitypes::TColor ColorMirrorSelected = {read=FColorMirrorSelected, write=FColorMirrorSelected, nodefault};
	__property System::Uitypes::TColor ColorMirrorSelectedTo = {read=FColorMirrorSelectedTo, write=FColorMirrorSelectedTo, nodefault};
	__property System::Uitypes::TColor ColorSelectedText = {read=FColorSelectedText, write=FColorSelectedText, nodefault};
	__property System::Uitypes::TColor EdgeColor = {read=FEdgeColor, write=FEdgeColor, nodefault};
	__property Vcl::Graphics::TFont* Font = {read=FFont, write=SetFont};
};


class PASCALIMPLEMENTATION TCustomItemSelector : public Vcl::Controls::TCustomControl
{
	typedef Vcl::Controls::TCustomControl inherited;
	
private:
	int FItemIndex;
	int FItemHot;
	int FOffSetX;
	int FOffSetY;
	int FItemOffSetX;
	int FItemOffSetY;
	int FCaptionGap;
	TAdvCustomItemSelector* FAdvItemSelector;
	System::Classes::TNotifyEvent FOnItemSelect;
	HIDESBASE MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Winapi::Messages::TMessage &Message);
	void __fastcall SetItemIndex(const int Value);
	void __fastcall SetItemOffSetX(const int Value);
	void __fastcall SetItemOffSetY(const int Value);
	void __fastcall SetCaptionGap(const int Value);
	void __fastcall SetItemHot(const int Value);
	int __fastcall GetColumns();
	TSelectorItems* __fastcall GetItems();
	TSelectorType __fastcall GetSelectorType();
	TItemLayout __fastcall GetItemLayout();
	Vcl::Imglist::TCustomImageList* __fastcall GetImages();
	TSelectionColorStyle __fastcall GetItemColorStyle();
	System::Uitypes::TColor __fastcall GetItemColorHot();
	System::Uitypes::TColor __fastcall GetItemColorHotTo();
	System::Uitypes::TColor __fastcall GetItemColorSelected();
	System::Uitypes::TColor __fastcall GetItemColorSelectedTo();
	int __fastcall GetColorBoxHeight();
	int __fastcall GetColorBoxWidth();
	
protected:
	virtual void __fastcall Loaded();
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall Paint();
	DYNAMIC bool __fastcall DoMouseWheelDown(System::Classes::TShiftState Shift, const System::Types::TPoint &MousePos);
	DYNAMIC bool __fastcall DoMouseWheelUp(System::Classes::TShiftState Shift, const System::Types::TPoint &MousePos);
	virtual void __fastcall DrawItem(int Index, Vcl::Graphics::TCanvas* ACanvas);
	virtual void __fastcall DrawItems(Vcl::Graphics::TCanvas* ACanvas);
	virtual System::Types::TRect __fastcall GetInnerRect();
	virtual System::Types::TSize __fastcall GetItemSize();
	virtual void __fastcall InvalidateItem(int Index);
	int __fastcall ItemAtPos(int X, int Y);
	System::Types::TRect __fastcall GetItemRect(int Index);
	virtual void __fastcall UpdateRectAndSize();
	__property int ItemOffSetX = {read=FItemOffSetX, write=SetItemOffSetX, default=4};
	__property int ItemOffSetY = {read=FItemOffSetY, write=SetItemOffSetY, default=4};
	__property int CaptionGap = {read=FCaptionGap, write=SetCaptionGap, default=4};
	__property int ItemHot = {read=FItemHot, write=SetItemHot, default=-1};
	
public:
	__fastcall virtual TCustomItemSelector(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomItemSelector();
	HIDESBASE void __fastcall SelectFirst();
	void __fastcall SelectLast();
	HIDESBASE void __fastcall SelectNext();
	void __fastcall SelectPrevious();
	bool __fastcall LookupItem(System::UnicodeString s);
	void __fastcall HotNext();
	void __fastcall HotPrevious();
	virtual void __fastcall DrawItemBackground(int Index, Vcl::Graphics::TCanvas* ACanvas);
	__property int ItemIndex = {read=FItemIndex, write=SetItemIndex, default=-1};
	__property int Columns = {read=GetColumns, nodefault};
	__property TSelectorItems* Items = {read=GetItems};
	__property TSelectorType SelectorType = {read=GetSelectorType, nodefault};
	__property TItemLayout ItemLayout = {read=GetItemLayout, nodefault};
	__property Vcl::Imglist::TCustomImageList* Images = {read=GetImages};
	__property TSelectionColorStyle ItemColorStyle = {read=GetItemColorStyle, nodefault};
	__property System::Uitypes::TColor ItemColorHot = {read=GetItemColorHot, nodefault};
	__property System::Uitypes::TColor ItemColorHotTo = {read=GetItemColorHotTo, nodefault};
	__property System::Uitypes::TColor ItemColorSelected = {read=GetItemColorSelected, nodefault};
	__property System::Uitypes::TColor ItemColorSelectedTo = {read=GetItemColorSelectedTo, nodefault};
	__property int ColorBoxHeight = {read=GetColorBoxHeight, nodefault};
	__property int ColorBoxWidth = {read=GetColorBoxWidth, nodefault};
	__property TAdvCustomItemSelector* AdvItemSelector = {read=FAdvItemSelector};
	__property System::Classes::TNotifyEvent OnItemSelect = {read=FOnItemSelect, write=FOnItemSelect};
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomItemSelector(HWND ParentWindow) : Vcl::Controls::TCustomControl(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TAdvCustomItemSelector : public Vcl::Forms::TScrollingWinControl
{
	typedef Vcl::Forms::TScrollingWinControl inherited;
	
private:
	TSelectorItems* FItems;
	TSelectorType FSelectorType;
	TItemLayout FItemLayout;
	int FColumns;
	int FColorBoxWidth;
	int FColorBoxHeight;
	Vcl::Imglist::TCustomImageList* FImages;
	TCustomItemSelector* FItemSelectorPanel;
	System::Classes::TNotifyEvent FOnItemSelect;
	TItemAppearance* FItemAppearance;
	TDrawItemsEvent FOnBeforeDrawItems;
	TDrawItemsEvent FOnAfterDrawItems;
	TDrawItemEvent FOnDrawItem;
	TItemSizeEvent FOnItemSize;
	HIDESBASE MESSAGE void __fastcall WMVScroll(Winapi::Messages::TWMScroll &Message);
	MESSAGE void __fastcall WMGetDlgCode(Winapi::Messages::TMessage &Message);
	void __fastcall OnItemChanged(System::TObject* Sender);
	void __fastcall OnPanelItemSelect(System::TObject* SEnder);
	void __fastcall SetItems(TSelectorItems* const Value);
	void __fastcall SetSelectorType(const TSelectorType Value);
	void __fastcall SetItemLayout(const TItemLayout Value);
	void __fastcall SetColumns(const int Value);
	void __fastcall SetColorBoxHeight(const int Value);
	void __fastcall SetColorBoxWidth(const int Value);
	void __fastcall SetImages(Vcl::Imglist::TCustomImageList* const Value);
	void __fastcall OnItemAppearanceChanged(System::TObject* Sender);
	int __fastcall GetItemIndex();
	void __fastcall SetItemIndex(const int Value);
	void __fastcall SetItemAppearance(TItemAppearance* const Value);
	int __fastcall GetItemHot();
	
protected:
	virtual void __fastcall PaintWindow(HDC DC);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	DYNAMIC bool __fastcall DoMouseWheelDown(System::Classes::TShiftState Shift, const System::Types::TPoint &MousePos);
	DYNAMIC bool __fastcall DoMouseWheelUp(System::Classes::TShiftState Shift, const System::Types::TPoint &MousePos);
	void __fastcall CreateSelectorPanel();
	System::Types::TSize __fastcall GetItemPanelSize();
	
public:
	__fastcall virtual TAdvCustomItemSelector(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TAdvCustomItemSelector();
	HIDESBASE void __fastcall SelectFirst();
	void __fastcall SelectLast();
	HIDESBASE void __fastcall SelectNext();
	void __fastcall SelectPrevious();
	void __fastcall HotNext();
	void __fastcall HotPrevious();
	void __fastcall ScrollItemInView(int Index);
	int __fastcall GetVisibleItemCount();
	bool __fastcall LookupItem(System::UnicodeString s);
	void __fastcall UpdateSelectorPanel();
	__property TCustomItemSelector* ItemSelectorPanel = {read=FItemSelectorPanel};
	__property int ItemHot = {read=GetItemHot, nodefault};
	
__published:
	__property Color = {default=-16777211};
	__property int Columns = {read=FColumns, write=SetColumns, default=1};
	__property TSelectorItems* Items = {read=FItems, write=SetItems};
	__property int ItemIndex = {read=GetItemIndex, write=SetItemIndex, nodefault};
	__property TSelectorType SelectorType = {read=FSelectorType, write=SetSelectorType, default=0};
	__property TItemLayout ItemLayout = {read=FItemLayout, write=SetItemLayout, default=1};
	__property Vcl::Imglist::TCustomImageList* Images = {read=FImages, write=SetImages};
	__property TItemAppearance* ItemAppearance = {read=FItemAppearance, write=SetItemAppearance};
	__property int ColorBoxHeight = {read=FColorBoxHeight, write=SetColorBoxHeight, nodefault};
	__property int ColorBoxWidth = {read=FColorBoxWidth, write=SetColorBoxWidth, nodefault};
	__property System::Classes::TNotifyEvent OnItemSelect = {read=FOnItemSelect, write=FOnItemSelect};
	__property TDrawItemEvent OnDrawItem = {read=FOnDrawItem, write=FOnDrawItem};
	__property TDrawItemsEvent OnBeforeDrawItems = {read=FOnBeforeDrawItems, write=FOnBeforeDrawItems};
	__property TDrawItemsEvent OnAfterDrawItems = {read=FOnAfterDrawItems, write=FOnAfterDrawItems};
	__property TItemSizeEvent OnItemSize = {read=FOnItemSize, write=FOnItemSize};
	__property OnResize;
public:
	/* TWinControl.CreateParented */ inline __fastcall TAdvCustomItemSelector(HWND ParentWindow) : Vcl::Forms::TScrollingWinControl(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::Int8 MAJ_VER = System::Int8(0x1);
static const System::Int8 MIN_VER = System::Int8(0x5);
static const System::Int8 REL_VER = System::Int8(0x6);
static const System::Int8 BLD_VER = System::Int8(0x4);
static const System::Int8 DD_HEADERHEIGHT = System::Int8(0x16);
static const System::Int8 DD_FOOTERHEIGHT = System::Int8(0x16);
static const System::Int8 DD_DROPDOWNBUTTONWIDTH = System::Int8(0x11);
static const System::Int8 DD_DROPDOWNBUTTONHEIGHT = System::Int8(0x11);
static const System::Int8 DD_IMAGEXOFFSET = System::Int8(0x4);
static const System::Int8 DD_IMAGEGAP = System::Int8(0x4);
static const System::Int8 GRIP_SIZE = System::Int8(0xf);
static const System::Int8 DD_COLORBOXHEIGHT = System::Int8(0xe);
static const System::Int8 DD_COLORBOXWIDTH = System::Int8(0xe);
static const System::Int8 DD_BUTTONOFFSET_X = System::Int8(0x4);
static const System::Int8 DD_BUTTONOFFSET_Y = System::Int8(0x2);
static const System::Int8 DD_MINHEIGHT = System::Int8(0x32);
static const System::Int8 DD_MINWIDTH = System::Int8(0x50);
#define ErrText L"Error"
extern DELPHI_PACKAGE void __fastcall DrawGradient(Vcl::Graphics::TCanvas* Canvas, System::Uitypes::TColor FromColor, System::Uitypes::TColor ToColor, int Steps, const System::Types::TRect &R, bool Direction);
extern DELPHI_PACKAGE System::Uitypes::TColor __fastcall BrightnessColor(System::Uitypes::TColor Col, int Brightness)/* overload */;
extern DELPHI_PACKAGE System::Uitypes::TColor __fastcall BrightnessColor(System::Uitypes::TColor Col, int BR, int BG, int BB)/* overload */;
extern DELPHI_PACKAGE void __fastcall DrawButtonContent(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &R, System::UnicodeString Caption, Vcl::Imglist::TCustomImageList* Images, int ImageIndex);
extern DELPHI_PACKAGE System::Types::TSize __fastcall GetTextSize(Vcl::Graphics::TCanvas* Canvas, System::UnicodeString Text);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetTextOfSize(Vcl::Graphics::TCanvas* Canvas, System::UnicodeString Text, int cx, bool AddEllipsis = true);
extern DELPHI_PACKAGE System::Types::TSize __fastcall DrawHTMLEX(Vcl::Graphics::TCanvas* Canvas, System::UnicodeString s, const System::Types::TRect &R, Vcl::Imglist::TCustomImageList* Images, bool RealDraw, NativeUInt WinHandle, float DPIScale);
}	/* namespace Advdropdown */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ADVDROPDOWN)
using namespace Advdropdown;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AdvdropdownHPP
