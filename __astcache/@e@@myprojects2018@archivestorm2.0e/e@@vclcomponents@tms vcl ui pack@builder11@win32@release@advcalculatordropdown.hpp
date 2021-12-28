// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AdvCalculatorDropdown.pas' rev: 35.00 (Windows)

#ifndef AdvcalculatordropdownHPP
#define AdvcalculatordropdownHPP

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
#include <Vcl.StdCtrls.hpp>
#include <Vcl.ImgList.hpp>
#include <System.Math.hpp>
#include <System.SysUtils.hpp>
#include <AdvDropDown.hpp>
#include <AdvStyleIF.hpp>
#include <System.Types.hpp>
#include <ATXPVS.hpp>
#include <AdvGDIP.hpp>
#include <System.Character.hpp>
#include <System.UITypes.hpp>
#include <Vcl.Mask.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>

//-- user supplied -----------------------------------------------------------

namespace Advcalculatordropdown
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TCalcButtonItem;
class DELPHICLASS TCalcButtonItems;
class DELPHICLASS TButtonAppearance;
class DELPHICLASS TCustomButtonPanel;
class DELPHICLASS TAdvButtonPanel;
class DELPHICLASS TAdvCalculatorDropdown;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TButtonPanelType : unsigned char { plCalculator, plCustom };

typedef void __fastcall (__closure *TCalculatorButtonClickEvent)(System::TObject* Sender, int Index);

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCalcButtonItem : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	Vcl::Controls::TCaption FCaption;
	int FImageIndex;
	bool FEnabled;
	Vcl::Graphics::TPicture* FImage;
	int FTag;
	int FHeight;
	int FLeft;
	int FWidth;
	int FTop;
	System::UnicodeString FName;
	System::Uitypes::TColor FCaptionColor;
	bool FSpecial;
	void __fastcall SetCaption(const Vcl::Controls::TCaption Value);
	void __fastcall SetImage(Vcl::Graphics::TPicture* const Value);
	void __fastcall SetTag(const int Value);
	System::Types::TRect __fastcall GetRect();
	void __fastcall SetCaptionColor(const System::Uitypes::TColor Value);
	
protected:
	__property System::Types::TRect Rect = {read=GetRect};
	__property bool Enabled = {read=FEnabled, write=FEnabled, default=1};
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property int Left = {read=FLeft, write=FLeft, nodefault};
	__property int Top = {read=FTop, write=FTop, nodefault};
	__property int Width = {read=FWidth, write=FWidth, nodefault};
	__property int Height = {read=FHeight, write=FHeight, nodefault};
	__property bool Special = {read=FSpecial, write=FSpecial, default=0};
	
public:
	__fastcall virtual TCalcButtonItem(System::Classes::TCollection* Collection);
	__fastcall virtual ~TCalcButtonItem();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property Vcl::Controls::TCaption Caption = {read=FCaption, write=SetCaption};
	__property System::Uitypes::TColor CaptionColor = {read=FCaptionColor, write=SetCaptionColor, default=16777215};
	__property int ImageIndex = {read=FImageIndex, write=FImageIndex, default=-1};
	__property Vcl::Graphics::TPicture* Image = {read=FImage, write=SetImage};
	__property int Tag = {read=FTag, write=SetTag, default=0};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TCalcButtonItems : public System::Classes::TCollection
{
	typedef System::Classes::TCollection inherited;
	
public:
	TCalcButtonItem* operator[](int Index) { return this->Items[Index]; }
	
private:
	System::Classes::TPersistent* FMyOwner;
	System::Classes::TNotifyEvent FOnChange;
	HIDESBASE TCalcButtonItem* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TCalcButtonItem* const Value);
	
public:
	__fastcall TCalcButtonItems(System::Classes::TPersistent* AOwner);
	__property TCalcButtonItem* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
	HIDESBASE TCalcButtonItem* __fastcall Add();
	HIDESBASE TCalcButtonItem* __fastcall Insert(int Index);
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TCalcButtonItems() { }
	
};


class PASCALIMPLEMENTATION TButtonAppearance : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	System::Classes::TNotifyEvent FOnChange;
	System::Uitypes::TColor FBorderColor;
	System::Uitypes::TColor FBorderColorHot;
	System::Uitypes::TColor FBorderColorDown;
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
	Vcl::Graphics::TFont* FFont;
	System::Uitypes::TColor FShineColor;
	System::Uitypes::TColor FGlowColorHot;
	System::Uitypes::TColor FGlowColorDown;
	System::Uitypes::TColor FTextColor;
	System::Uitypes::TColor FSpecialTextColor;
	void __fastcall SetBorderColor(const System::Uitypes::TColor Value);
	void __fastcall SetBorderColorChecked(const System::Uitypes::TColor Value);
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
	void __fastcall SetFont(Vcl::Graphics::TFont* const Value);
	void __fastcall SetShineColor(const System::Uitypes::TColor Value);
	void __fastcall SetSpecialTextColor(const System::Uitypes::TColor Value);
	void __fastcall SetTextColor(const System::Uitypes::TColor Value);
	
protected:
	void __fastcall Changed();
	__property System::Uitypes::TColor BorderColorChecked = {read=FBorderColorChecked, write=SetBorderColorChecked, default=16711680};
	__property System::Uitypes::TColor ColorChecked = {read=FColorChecked, write=SetColorChecked, nodefault};
	__property System::Uitypes::TColor ColorCheckedTo = {read=FColorCheckedTo, write=SetColorCheckedTo, nodefault};
	__property System::Uitypes::TColor ColorDisabled = {read=FColorDisabled, write=SetColorDisabled, nodefault};
	__property System::Uitypes::TColor ColorDisabledTo = {read=FColorDisabledTo, write=SetColorDisabledTo, nodefault};
	
public:
	__fastcall TButtonAppearance();
	__fastcall virtual ~TButtonAppearance();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	
__published:
	__property System::Uitypes::TColor BorderColor = {read=FBorderColor, write=SetBorderColor, default=0};
	__property System::Uitypes::TColor BorderColorHot = {read=FBorderColorHot, write=SetBorderColorHot, default=0};
	__property System::Uitypes::TColor BorderColorDown = {read=FBorderColorDown, write=SetBorderColorDown, default=0};
	__property System::Uitypes::TColor Color = {read=FColor, write=SetColor, nodefault};
	__property System::Uitypes::TColor ColorTo = {read=FColorTo, write=SetColorTo, nodefault};
	__property System::Uitypes::TColor ColorDown = {read=FColorDown, write=SetColorDown, nodefault};
	__property System::Uitypes::TColor ColorDownTo = {read=FColorDownTo, write=SetColorDownTo, nodefault};
	__property System::Uitypes::TColor ColorHot = {read=FColorHot, write=SetColorHot, nodefault};
	__property System::Uitypes::TColor ColorHotTo = {read=FColorHotTo, write=SetColorHotTo, nodefault};
	__property System::Uitypes::TColor GlowColorHot = {read=FGlowColorHot, write=FGlowColorHot, nodefault};
	__property System::Uitypes::TColor GlowColorDown = {read=FGlowColorDown, write=FGlowColorDown, nodefault};
	__property System::Uitypes::TColor ShineColor = {read=FShineColor, write=SetShineColor, default=16777215};
	__property Vcl::Graphics::TFont* Font = {read=FFont, write=SetFont};
	__property System::Uitypes::TColor TextColor = {read=FTextColor, write=SetTextColor, default=0};
	__property System::Uitypes::TColor SpecialTextColor = {read=FSpecialTextColor, write=SetSpecialTextColor, default=128};
};


class PASCALIMPLEMENTATION TCustomButtonPanel : public Vcl::Controls::TCustomControl
{
	typedef Vcl::Controls::TCustomControl inherited;
	
private:
	TCalcButtonItems* FButtons;
	Advdropdown::TItemLayout FButtonLayout;
	Advdropdown::TSelectionColorStyle FItemColorStyle;
	int FButtonHot;
	int FOffSetX;
	int FOffSetY;
	int FButtonOffSetX;
	int FButtonOffSetY;
	Vcl::Imglist::TCustomImageList* FImages;
	int FCaptionGap;
	Vcl::Stdctrls::TCustomEdit* FEdit;
	TButtonPanelType FButtonPanelType;
	TButtonAppearance* FButtonAppearance;
	int FButtonDown;
	Advdropdown::TAdvCustomDropDown* FAdvDropDown;
	TCalculatorButtonClickEvent FOnButtonClick;
	bool FIsWinXP;
	HIDESBASE MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Winapi::Messages::TMessage &Message);
	void __fastcall OnButtonsChanged(System::TObject* Sender);
	void __fastcall OnButtonAppearanceChanged(System::TObject* Sender);
	void __fastcall SetButtons(TCalcButtonItems* const Value);
	void __fastcall SetButtonLayout(const Advdropdown::TItemLayout Value);
	void __fastcall SetItemColorStyle(const Advdropdown::TSelectionColorStyle Value);
	void __fastcall SetImages(Vcl::Imglist::TCustomImageList* const Value);
	void __fastcall SetButtonOffSetX(const int Value);
	void __fastcall SetButtonOffSetY(const int Value);
	void __fastcall SetCaptionGap(const int Value);
	void __fastcall SetButtonHot(const int Value);
	void __fastcall SetEdit(Vcl::Stdctrls::TCustomEdit* const Value);
	void __fastcall SetButtonPanelType(const TButtonPanelType Value);
	void __fastcall SetButtonAppearance(TButtonAppearance* const Value);
	void __fastcall SetButtonDown(const int Value);
	void __fastcall SetAdvDropDown(Advdropdown::TAdvCustomDropDown* const Value);
	
protected:
	virtual void __fastcall Loaded();
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall Paint();
	void __fastcall DrawButtons(Vcl::Graphics::TCanvas* aCanvas, bool DrawHot = true);
	virtual void __fastcall DrawButton(int Index, Vcl::Graphics::TCanvas* aCanvas);
	virtual System::Types::TRect __fastcall GetInnerRect();
	virtual System::Types::TSize __fastcall GetMaxButtonSize();
	virtual void __fastcall ClearButtons();
	virtual void __fastcall ReInitialize();
	virtual void __fastcall Initialize();
	virtual void __fastcall ArrangeButtons();
	virtual void __fastcall InvalidateButton(int Index);
	virtual void __fastcall ButtonClick(int Index);
	int __fastcall ButtonAtPos(int X, int Y);
	System::Types::TRect __fastcall GetButtonRect(int Index);
	bool __fastcall DoVisualStyles();
	__property int ButtonOffSetX = {read=FButtonOffSetX, write=SetButtonOffSetX, default=4};
	__property int ButtonOffSetY = {read=FButtonOffSetY, write=SetButtonOffSetY, default=4};
	__property int CaptionGap = {read=FCaptionGap, write=SetCaptionGap, default=4};
	__property int ButtonHot = {read=FButtonHot, write=SetButtonHot, default=-1};
	__property int ButtonDown = {read=FButtonDown, write=SetButtonDown, default=-1};
	__property Advdropdown::TAdvCustomDropDown* AdvDropDown = {read=FAdvDropDown, write=SetAdvDropDown};
	
public:
	__fastcall virtual TCustomButtonPanel(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomButtonPanel();
	__property TCalcButtonItems* Buttons = {read=FButtons, write=SetButtons};
	__property TButtonAppearance* ButtonAppearance = {read=FButtonAppearance, write=SetButtonAppearance};
	__property Advdropdown::TItemLayout ButtonLayout = {read=FButtonLayout, write=SetButtonLayout, default=1};
	__property TButtonPanelType ButtonPanelType = {read=FButtonPanelType, write=SetButtonPanelType, default=0};
	__property Vcl::Imglist::TCustomImageList* Images = {read=FImages, write=SetImages};
	__property Advdropdown::TSelectionColorStyle ItemColorStyle = {read=FItemColorStyle, write=SetItemColorStyle, nodefault};
	__property Vcl::Stdctrls::TCustomEdit* Edit = {read=FEdit, write=SetEdit};
	__property TCalculatorButtonClickEvent OnButtonClick = {read=FOnButtonClick, write=FOnButtonClick};
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomButtonPanel(HWND ParentWindow) : Vcl::Controls::TCustomControl(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TAdvButtonPanel : public TCustomButtonPanel
{
	typedef TCustomButtonPanel inherited;
	
__published:
	__property ButtonAppearance;
	__property Buttons;
	__property ButtonLayout = {default=1};
	__property ButtonPanelType = {default=0};
	__property Images;
public:
	/* TCustomButtonPanel.Create */ inline __fastcall virtual TAdvButtonPanel(System::Classes::TComponent* AOwner) : TCustomButtonPanel(AOwner) { }
	/* TCustomButtonPanel.Destroy */ inline __fastcall virtual ~TAdvButtonPanel() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TAdvButtonPanel(HWND ParentWindow) : TCustomButtonPanel(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TAdvCalculatorDropdown : public Advdropdown::TAdvCustomDropDown
{
	typedef Advdropdown::TAdvCustomDropDown inherited;
	
private:
	TCustomButtonPanel* FAdvButtonPanel;
	int FDecim;
	bool FNewval;
	System::Extended FPrevval;
	int FPrevop;
	int FLastop;
	bool FCalcClosed;
	TButtonAppearance* FCalcButtonAppearance;
	System::Extended FMVal;
	bool FShowThousandSeparator;
	void __fastcall OnAdvButtonClick(System::TObject* Sender, int Index);
	HIDESBASE MESSAGE void __fastcall WMKeyDown(Winapi::Messages::TWMKey &Msg);
	HIDESBASE MESSAGE void __fastcall CMEnter(Winapi::Messages::TWMNoParams &Message);
	void __fastcall HandleKeyPress(System::WideChar &Key);
	void __fastcall DoCalc();
	void __fastcall DoPlus();
	void __fastcall DoMin();
	void __fastcall DoMul();
	void __fastcall DoDiv();
	void __fastcall DoEq();
	void __fastcall DoPerc();
	System::Extended __fastcall GetValue();
	void __fastcall SetValue(const System::Extended Value);
	void __fastcall SetCalcButtonAppearance(TButtonAppearance* const Value);
	void __fastcall SetShowThousandSeparator(const bool Value);
	
protected:
	DYNAMIC void __fastcall KeyPress(System::WideChar &key);
	virtual void __fastcall CalcChange();
	virtual void __fastcall CreateDropDownForm();
	virtual void __fastcall BeforeDropDown();
	virtual void __fastcall OnHideDropDown();
	virtual void __fastcall OnDropDownFormKeyPress(System::WideChar &Key);
	virtual void __fastcall OnDropDownFormKeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall DoHideDropDown(bool Canceled);
	
public:
	__fastcall virtual TAdvCalculatorDropdown(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TAdvCalculatorDropdown();
	virtual void __fastcall SetComponentStyle(Advstyleif::TTMSStyle AStyle);
	void __fastcall CalcResult();
	__property System::Extended Value = {read=GetValue, write=SetValue};
	
__published:
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
	__property ImeMode = {default=3};
	__property ImeName = {default=0};
	__property MaxLength = {default=0};
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property Precision;
	__property PopupMenu;
	__property ShowHint;
	__property Visible = {default=1};
	__property DropDownColor = {default=16777215};
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
	__property Text;
	__property ButtonAppearance;
	__property TButtonAppearance* CalcButtonAppearance = {read=FCalcButtonAppearance, write=SetCalcButtonAppearance};
	__property DropDownHeader;
	__property DropDownFooter;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property bool ShowThousandSeparator = {read=FShowThousandSeparator, write=SetShowThousandSeparator, default=0};
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
	/* TWinControl.CreateParented */ inline __fastcall TAdvCalculatorDropdown(HWND ParentWindow) : Advdropdown::TAdvCustomDropDown(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::Int8 BP_BUTTONGLOWSIZE = System::Int8(0x8);
}	/* namespace Advcalculatordropdown */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ADVCALCULATORDROPDOWN)
using namespace Advcalculatordropdown;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AdvcalculatordropdownHPP
