// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AdvColorPickerDropDown.pas' rev: 35.00 (Windows)

#ifndef AdvcolorpickerdropdownHPP
#define AdvcolorpickerdropdownHPP

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
#include <Vcl.ExtCtrls.hpp>
#include <System.SysUtils.hpp>
#include <Vcl.Forms.hpp>
#include <System.Math.hpp>
#include <AdvDropDown.hpp>
#include <AdvStyleIF.hpp>
#include <System.Types.hpp>
#include <Vcl.GraphUtil.hpp>
#include <System.UITypes.hpp>
#include <Vcl.Mask.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.ImgList.hpp>

//-- user supplied -----------------------------------------------------------

namespace Advcolorpickerdropdown
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TColorItem;
class DELPHICLASS TColorItems;
class DELPHICLASS TAdvCustomColorSelectorPanel;
struct TColorCubeCell;
class DELPHICLASS TAdvColorCubePanel;
class DELPHICLASS TAdvColorSpectrumPanel;
class DELPHICLASS TColorBoxAppearance;
class DELPHICLASS TColorBoxItem;
class DELPHICLASS TColorBoxItems;
class DELPHICLASS TCustomColorSelector;
class DELPHICLASS TAdvColorPickerDropDown;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TColorSelectionStyle : unsigned char { csList, csDiscrete, csColorCube, csSpectrum };

enum DECLSPEC_DENUM TItemPos : unsigned char { ipStandAlone, ipTop, ipMiddle, ipBottom };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TColorItem : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	Vcl::Controls::TCaption FCaption;
	System::Uitypes::TColor FColor;
	bool FEnabled;
	System::Types::TRect FRect;
	System::UnicodeString FHint;
	void __fastcall SetCaption(const Vcl::Controls::TCaption Value);
	void __fastcall SetColor(const System::Uitypes::TColor Value);
	
protected:
	HIDESBASE void __fastcall Changed();
	__property System::Types::TRect Rect = {read=FRect, write=FRect};
	__property bool Enabled = {read=FEnabled, write=FEnabled, default=1};
	
public:
	__fastcall virtual TColorItem(System::Classes::TCollection* Collection);
	__fastcall virtual ~TColorItem();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property Vcl::Controls::TCaption Caption = {read=FCaption, write=SetCaption};
	__property System::Uitypes::TColor Color = {read=FColor, write=SetColor, default=536870911};
	__property System::UnicodeString Hint = {read=FHint, write=FHint};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TColorItems : public System::Classes::TCollection
{
	typedef System::Classes::TCollection inherited;
	
public:
	TColorItem* operator[](int Index) { return this->Items[Index]; }
	
private:
	System::Classes::TPersistent* FMyOwner;
	System::Classes::TNotifyEvent FOnChange;
	HIDESBASE TColorItem* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TColorItem* const Value);
	
protected:
	void __fastcall Change();
	
public:
	__fastcall TColorItems(System::Classes::TPersistent* AOwner);
	__property TColorItem* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
	HIDESBASE TColorItem* __fastcall Add();
	HIDESBASE TColorItem* __fastcall Insert(int Index);
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TColorItems() { }
	
};


class PASCALIMPLEMENTATION TAdvCustomColorSelectorPanel : public Vcl::Controls::TCustomControl
{
	typedef Vcl::Controls::TCustomControl inherited;
	
private:
	System::Classes::TNotifyEvent FOnShouldHide;
	
protected:
	__property System::Classes::TNotifyEvent OnShouldHide = {read=FOnShouldHide, write=FOnShouldHide};
public:
	/* TCustomControl.Create */ inline __fastcall virtual TAdvCustomColorSelectorPanel(System::Classes::TComponent* AOwner) : Vcl::Controls::TCustomControl(AOwner) { }
	/* TCustomControl.Destroy */ inline __fastcall virtual ~TAdvCustomColorSelectorPanel() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TAdvCustomColorSelectorPanel(HWND ParentWindow) : Vcl::Controls::TCustomControl(ParentWindow) { }
	
};


struct DECLSPEC_DRECORD TColorCubeCell
{
public:
	System::Types::TPoint CenterPos;
	System::Uitypes::TColor Color;
};


class PASCALIMPLEMENTATION TAdvColorCubePanel : public TAdvCustomColorSelectorPanel
{
	typedef TAdvCustomColorSelectorPanel inherited;
	
private:
	System::StaticArray<TColorCubeCell, 127> FCubeCells;
	System::Types::TPoint FCubeSize;
	System::Uitypes::TColor FSelectedColor;
	int FSelectedIndex;
	int FHotIndex;
	System::Classes::TNotifyEvent FOnSelect;
	bool FShowRGBHint;
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Winapi::Messages::TMessage &Message);
	void __fastcall DrawColorCube(int Index);
	void __fastcall DrawAllColorCube();
	void __fastcall DrawSelectedBorder();
	void __fastcall DrawHotBorder();
	void __fastcall SetSelectedColor(const System::Uitypes::TColor Value);
	void __fastcall SetSelectedIndexAndColor(System::Uitypes::TColor clr, int index = 0xffffffff);
	void __fastcall SetShowRGBHint(const bool Value);
	System::Uitypes::TColor __fastcall GetCubeCellColor(int i);
	void __fastcall SetCubeCellColor(int i, const System::Uitypes::TColor Value);
	
protected:
	virtual void __fastcall Paint();
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	bool __fastcall PtInCell(int Index, const System::Types::TPoint &P);
	int __fastcall IndexOfCellAt(int X, int Y);
	void __fastcall DrawHexagon(Vcl::Graphics::TCanvas* aCanvas, const System::Types::TPoint &P, int X, int Y);
	void __fastcall Initialize();
	void __fastcall SetItemsPosition();
	void __fastcall SetPanelSize();
	
public:
	__fastcall virtual TAdvColorCubePanel(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TAdvColorCubePanel();
	__property System::Uitypes::TColor CubeCellColor[int i] = {read=GetCubeCellColor, write=SetCubeCellColor};
	
__published:
	__property System::Uitypes::TColor SelectedColor = {read=FSelectedColor, write=SetSelectedColor, nodefault};
	__property bool ShowRGBHint = {read=FShowRGBHint, write=SetShowRGBHint, nodefault};
	__property System::Classes::TNotifyEvent OnSelect = {read=FOnSelect, write=FOnSelect};
public:
	/* TWinControl.CreateParented */ inline __fastcall TAdvColorCubePanel(HWND ParentWindow) : TAdvCustomColorSelectorPanel(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TAdvColorSpectrumPanel : public TAdvCustomColorSelectorPanel
{
	typedef TAdvCustomColorSelectorPanel inherited;
	
private:
	Vcl::Extctrls::TImage* FSpectrumImage;
	System::Uitypes::TColor FHotColor;
	System::Uitypes::TColor FSelectedColor;
	System::Types::TRect FHotRect;
	System::Types::TRect FSelectedRect;
	System::Classes::TNotifyEvent FOnSelect;
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Winapi::Messages::TMessage &Message);
	void __fastcall SpectrumImageMouseMove(System::TObject* Sender, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall SpectrumImageMouseDown(System::TObject* Sender, System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall SpectrumImageMouseUp(System::TObject* Sender, System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall DrawHotRect();
	void __fastcall DrawSelectedRect();
	void __fastcall DrawFocusPoint();
	void __fastcall SetSelectedColor(const System::Uitypes::TColor Value);
	
protected:
	virtual void __fastcall Paint();
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall SetItemsPosition();
	void __fastcall SetPanelSize();
	
public:
	__fastcall virtual TAdvColorSpectrumPanel(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TAdvColorSpectrumPanel();
	
__published:
	__property System::Uitypes::TColor SelectedColor = {read=FSelectedColor, write=SetSelectedColor, nodefault};
	__property System::Classes::TNotifyEvent OnSelect = {read=FOnSelect, write=FOnSelect};
public:
	/* TWinControl.CreateParented */ inline __fastcall TAdvColorSpectrumPanel(HWND ParentWindow) : TAdvCustomColorSelectorPanel(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TColorBoxAppearance : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	System::Classes::TNotifyEvent FOnChange;
	System::Uitypes::TColor FBorderColor;
	System::Uitypes::TColor FOuterBorderColorHot;
	System::Uitypes::TColor FInnerBorderColorHot;
	System::Uitypes::TColor FOuterBorderColorSelected;
	System::Uitypes::TColor FInnerBorderColorSelected;
	
protected:
	void __fastcall Changed();
	
public:
	__fastcall TColorBoxAppearance();
	__fastcall virtual ~TColorBoxAppearance();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	
__published:
	__property System::Uitypes::TColor BorderColor = {read=FBorderColor, write=FBorderColor, default=12632256};
	__property System::Uitypes::TColor OuterBorderColorHot = {read=FOuterBorderColorHot, write=FOuterBorderColorHot, nodefault};
	__property System::Uitypes::TColor InnerBorderColorHot = {read=FInnerBorderColorHot, write=FInnerBorderColorHot, nodefault};
	__property System::Uitypes::TColor OuterBorderColorSelected = {read=FOuterBorderColorSelected, write=FOuterBorderColorSelected, nodefault};
	__property System::Uitypes::TColor InnerBorderColorSelected = {read=FInnerBorderColorSelected, write=FInnerBorderColorSelected, nodefault};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TColorBoxItem : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	System::Uitypes::TColor FColor;
	bool FEnabled;
	System::Types::TRect FRect;
	TItemPos FColorBoxPos;
	void __fastcall SetColor(const System::Uitypes::TColor Value);
	void __fastcall SetColorBoxPos(const TItemPos Value);
	
protected:
	HIDESBASE void __fastcall Changed();
	__property System::Types::TRect Rect = {read=FRect, write=FRect};
	__property bool Enabled = {read=FEnabled, write=FEnabled, default=1};
	
public:
	__fastcall virtual TColorBoxItem(System::Classes::TCollection* Collection);
	__fastcall virtual ~TColorBoxItem();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property System::Uitypes::TColor Color = {read=FColor, write=SetColor, default=536870911};
	__property TItemPos ColorBoxPos = {read=FColorBoxPos, write=SetColorBoxPos, default=0};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TColorBoxItems : public System::Classes::TCollection
{
	typedef System::Classes::TCollection inherited;
	
public:
	TColorBoxItem* operator[](int Index) { return this->Items[Index]; }
	
private:
	System::Classes::TPersistent* FMyOwner;
	System::Classes::TNotifyEvent FOnChange;
	HIDESBASE TColorBoxItem* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TColorBoxItem* const Value);
	
protected:
	void __fastcall Change();
	
public:
	__fastcall TColorBoxItems(System::Classes::TPersistent* AOwner);
	__property TColorBoxItem* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
	HIDESBASE TColorBoxItem* __fastcall Add();
	HIDESBASE TColorBoxItem* __fastcall Insert(int Index);
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TColorBoxItems() { }
	
};


class PASCALIMPLEMENTATION TCustomColorSelector : public TAdvCustomColorSelectorPanel
{
	typedef TAdvCustomColorSelectorPanel inherited;
	
private:
	int FItemIndex;
	int FItemHot;
	int FOffSetX;
	int FOffSetY;
	System::Classes::TNotifyEvent FOnItemSelect;
	int FColumns;
	int FColumnGap;
	int FColorBoxHeight;
	int FColorBoxWidth;
	TColorBoxAppearance* FColorBoxAppearance;
	TColorBoxItems* FItems;
	Advdropdown::TSelectionColorStyle FItemColorStyle;
	System::Uitypes::TColor FSelectedColor;
	HIDESBASE MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Winapi::Messages::TMessage &Message);
	void __fastcall SetItemIndex(const int Value);
	void __fastcall SetItemHot(const int Value);
	void __fastcall SetColorBoxAppearance(TColorBoxAppearance* const Value);
	void __fastcall SetColorBoxHeight(const int Value);
	void __fastcall SetColorBoxWidth(const int Value);
	void __fastcall SetColumnGap(const int Value);
	void __fastcall SetColumns(const int Value);
	void __fastcall SetItemColorStyle(const Advdropdown::TSelectionColorStyle Value);
	void __fastcall SetItems(TColorBoxItems* const Value);
	void __fastcall SetSelectedColor(const System::Uitypes::TColor Value);
	
protected:
	virtual void __fastcall Loaded();
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation AOperation);
	virtual void __fastcall Paint();
	void __fastcall DrawItems(Vcl::Graphics::TCanvas* aCanvas);
	virtual void __fastcall DrawItem(int Index, Vcl::Graphics::TCanvas* aCanvas);
	virtual System::Types::TRect __fastcall GetInnerRect();
	virtual System::Types::TSize __fastcall GetItemSize();
	virtual void __fastcall UpdateRectAndSize();
	virtual void __fastcall InvalidateItem(int Index);
	int __fastcall ItemAtPos(int X, int Y);
	System::Types::TRect __fastcall GetItemRect(int Index);
	void __fastcall CreateDefaultColors();
	void __fastcall HandleKey(System::Word Key, bool EditorEnabled, bool DroppedDown);
	HIDESBASE void __fastcall SelectFirst();
	void __fastcall SelectLast();
	void __fastcall SelectPrevious();
	HIDESBASE void __fastcall SelectNext();
	void __fastcall HotPrevious();
	void __fastcall HotNext();
	__property int ItemHot = {read=FItemHot, write=SetItemHot, default=-1};
	
public:
	__fastcall virtual TCustomColorSelector(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomColorSelector();
	__property TColorBoxAppearance* ColorBoxAppearance = {read=FColorBoxAppearance, write=SetColorBoxAppearance};
	__property int ItemIndex = {read=FItemIndex, write=SetItemIndex, default=-1};
	__property TColorBoxItems* Items = {read=FItems, write=SetItems};
	__property int ColumnGap = {read=FColumnGap, write=SetColumnGap, nodefault};
	__property int Columns = {read=FColumns, write=SetColumns, nodefault};
	__property Advdropdown::TSelectionColorStyle ItemColorStyle = {read=FItemColorStyle, write=SetItemColorStyle, nodefault};
	__property int ColorBoxHeight = {read=FColorBoxHeight, write=SetColorBoxHeight, nodefault};
	__property int ColorBoxWidth = {read=FColorBoxWidth, write=SetColorBoxWidth, nodefault};
	__property System::Classes::TNotifyEvent OnItemSelect = {read=FOnItemSelect, write=FOnItemSelect};
	__property System::Uitypes::TColor SelectedColor = {read=FSelectedColor, write=SetSelectedColor, nodefault};
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomColorSelector(HWND ParentWindow) : TAdvCustomColorSelectorPanel(ParentWindow) { }
	
};


enum DECLSPEC_DENUM TColorValueText : unsigned char { cvtNone, cvtHex, cvtWebName, cvtRGB, cvtHTML };

class PASCALIMPLEMENTATION TAdvColorPickerDropDown : public Advdropdown::TAdvCustomDropDown
{
	typedef Advdropdown::TAdvCustomDropDown inherited;
	
private:
	int FUpdateCount;
	Advdropdown::TAdvCustomItemSelector* FItemSelector;
	TAdvColorCubePanel* FColorCubePanel;
	TAdvColorSpectrumPanel* FSpectrumPanel;
	TCustomColorSelector* FColorSelector;
	int FColumns;
	Advdropdown::TItemLayout FLayout;
	TColorItems* FColors;
	int FItemIndex;
	System::Classes::TNotifyEvent FOnSelect;
	int FColorBoxWidth;
	int FColorBoxHeight;
	TColorSelectionStyle FColorSelectionStyle;
	System::Uitypes::TColor FSelectedColor;
	bool FShowText;
	Advdropdown::TOnDrawSelectedItem FOnDrawSelectedColor;
	Advdropdown::TItemAppearance* FItemAppearance;
	bool FInternalCall;
	Vcl::Extctrls::TTimer* FKeyTimer;
	System::UnicodeString FCurSearch;
	int FOldItemIndex;
	System::Uitypes::TColor FOldSelectedColor;
	Advdropdown::TDrawItemEvent FOnDrawColor;
	bool FDesignTime;
	TColorValueText FColorValueText;
	System::Uitypes::TColor FColorBoxBorderColor;
	HIDESBASE MESSAGE void __fastcall WMPaint(Winapi::Messages::TWMPaint &Message);
	HIDESBASE MESSAGE void __fastcall WMKeyDown(Winapi::Messages::TWMKey &Msg);
	void __fastcall DrawSelectedItem();
	void __fastcall OnItemsChanged(System::TObject* Sender);
	void __fastcall OnSelectorItemSelect(System::TObject* Sender);
	void __fastcall CubePanelOnSelect(System::TObject* Sender);
	void __fastcall SpectrumPanelOnSelect(System::TObject* Sender);
	void __fastcall ColorSelectorOnItemSelect(System::TObject* Sender);
	void __fastcall OnItemSelectorDrawItem(System::TObject* Sender, Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &R, int Index);
	void __fastcall OnKeyTimerTime(System::TObject* Sender);
	void __fastcall SetColumns(const int Value);
	void __fastcall SetItemIndex(const int Value);
	void __fastcall SetLayout(const Advdropdown::TItemLayout Value);
	void __fastcall SetColors(TColorItems* const Value);
	void __fastcall AssignedItemsToItemSelector();
	void __fastcall SetSelectorProperties();
	void __fastcall SetColorBoxHeight(const int Value);
	void __fastcall SetColorBoxWidth(const int Value);
	void __fastcall SetColorSelectionStyle(const TColorSelectionStyle Value);
	void __fastcall SetSelectedColor(const System::Uitypes::TColor Value);
	void __fastcall SetShowText(const bool Value);
	void __fastcall SetItemAppearance(Advdropdown::TItemAppearance* const Value);
	void __fastcall SetColorBoxBorderColor(const System::Uitypes::TColor Value);
	
protected:
	virtual void __fastcall CreateItemListPanel();
	virtual void __fastcall CreateColorCubePanel();
	virtual void __fastcall CreateSpectrumPanel();
	virtual void __fastcall CreateColorSelectorPanel();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall CreateDropDownForm();
	virtual void __fastcall BeforeDropDown();
	virtual void __fastcall OnHideDropDown();
	virtual void __fastcall UpdateDropDownSize();
	virtual void __fastcall DoHideDropDown(bool Canceled);
	virtual void __fastcall OnDestroyDropDownForm();
	virtual void __fastcall SetEditRect();
	virtual void __fastcall SetSelectionColorStyle(const Advdropdown::TSelectionColorStyle Value);
	virtual void __fastcall SetCenterControl();
	virtual void __fastcall HandleMouseWheelDown();
	virtual void __fastcall HandleMouseWheelUp();
	virtual void __fastcall DrawBackGround();
	HIDESBASE void __fastcall SelectFirst();
	void __fastcall SelectLast();
	HIDESBASE void __fastcall SelectNext();
	void __fastcall SelectPrevious();
	virtual System::UnicodeString __fastcall GetSelectedColorText();
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	
public:
	__fastcall virtual TAdvColorPickerDropDown(System::Classes::TComponent* AOwner);
	virtual void __fastcall SetComponentStyle(Advstyleif::TTMSStyle AStyle);
	__fastcall virtual ~TAdvColorPickerDropDown();
	virtual void __fastcall CreateWnd();
	virtual void __fastcall Loaded();
	void __fastcall AddDefaultColors();
	__property System::Uitypes::TColor SelectedColor = {read=FSelectedColor, write=SetSelectedColor, default=536870911};
	__property System::UnicodeString SelectedColorText = {read=GetSelectedColorText};
	void __fastcall BeginUpdate();
	void __fastcall EndUpdate();
	__property TCustomColorSelector* ColorPanel = {read=FColorSelector};
	__property TAdvColorCubePanel* CubePanel = {read=FColorCubePanel};
	__property TAdvColorSpectrumPanel* SpectrumPanel = {read=FSpectrumPanel};
	
__published:
	__property int Columns = {read=FColumns, write=SetColumns, default=1};
	__property TColorItems* Colors = {read=FColors, write=SetColors};
	__property int ItemIndex = {read=FItemIndex, write=SetItemIndex, default=-1};
	__property int ColorBoxHeight = {read=FColorBoxHeight, write=SetColorBoxHeight, default=14};
	__property int ColorBoxWidth = {read=FColorBoxWidth, write=SetColorBoxWidth, default=14};
	__property System::Uitypes::TColor ColorBoxBorderColor = {read=FColorBoxBorderColor, write=SetColorBoxBorderColor, default=0};
	__property Advdropdown::TItemLayout Layout = {read=FLayout, write=SetLayout, default=1};
	__property Advdropdown::TItemAppearance* ItemAppearance = {read=FItemAppearance, write=SetItemAppearance};
	__property TColorValueText ColorValueText = {read=FColorValueText, write=FColorValueText, default=0};
	__property TColorSelectionStyle ColorSelectionStyle = {read=FColorSelectionStyle, write=SetColorSelectionStyle, default=0};
	__property bool ShowText = {read=FShowText, write=SetShowText, default=1};
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
	__property Cursor = {default=-2};
	__property BorderColor = {default=536870911};
	__property DisabledBorder = {default=1};
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
	__property DropDownBorderColor = {default=0};
	__property DropDownBorderWidth = {default=1};
	__property DropDownShadow = {default=1};
	__property DropDownWidth = {default=0};
	__property DropDownHeight = {default=200};
	__property DropPosition = {default=0};
	__property DropDownButtonWidth = {default=17};
	__property DropDownButtonHint = {default=0};
	__property DropDownButtonGlyph;
	__property DropDownSizeable = {default=1};
	__property Enabled = {default=1};
	__property Font;
	__property Images;
	__property LabelCaption = {default=0};
	__property LabelPosition = {default=0};
	__property LabelMargin = {default=4};
	__property LabelTransparent = {default=0};
	__property LabelAlwaysEnabled = {default=0};
	__property LabelFont;
	__property Version = {default=0};
	__property ButtonAppearance;
	__property DropDownHeader;
	__property DropDownFooter;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property TabStop = {default=1};
	__property TabOrder = {default=-1};
	__property System::Classes::TNotifyEvent OnSelect = {read=FOnSelect, write=FOnSelect};
	__property Advdropdown::TOnDrawSelectedItem OnDrawSelectedColor = {read=FOnDrawSelectedColor, write=FOnDrawSelectedColor};
	__property Advdropdown::TDrawItemEvent OnDrawColor = {read=FOnDrawColor, write=FOnDrawColor};
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
	/* TWinControl.CreateParented */ inline __fastcall TAdvColorPickerDropDown(HWND ParentWindow) : Advdropdown::TAdvCustomDropDown(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Advcolorpickerdropdown */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ADVCOLORPICKERDROPDOWN)
using namespace Advcolorpickerdropdown;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AdvcolorpickerdropdownHPP
