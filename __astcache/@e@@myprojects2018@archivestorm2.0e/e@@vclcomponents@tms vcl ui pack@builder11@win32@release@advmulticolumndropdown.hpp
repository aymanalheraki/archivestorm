// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AdvMultiColumnDropDown.pas' rev: 35.00 (Windows)

#ifndef AdvmulticolumndropdownHPP
#define AdvmulticolumndropdownHPP

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
#include <Vcl.ImgList.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.Forms.hpp>
#include <System.SysUtils.hpp>
#include <AdvDropDown.hpp>
#include <AdvUtil.hpp>
#include <AdvStyleIF.hpp>
#include <System.Types.hpp>
#include <System.UITypes.hpp>
#include <Vcl.Themes.hpp>
#include <Vcl.Mask.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Menus.hpp>

//-- user supplied -----------------------------------------------------------

namespace Advmulticolumndropdown
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TDropDownColumn;
class DELPHICLASS TDropDownColumns;
class DELPHICLASS TDropDownItem;
class DELPHICLASS TDropDownItems;
class DELPHICLASS TAdvColGrid;
class DELPHICLASS TAdvMultiColumnDropDown;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TColumnType : unsigned char { ctText, ctImage };

typedef void __fastcall (__closure *TGetCellTextEvent)(System::TObject* Sender, int Column, int Row, System::UnicodeString &Text);

typedef void __fastcall (__closure *TDrawCellEvent)(System::TObject* Sender, int Column, int Row, Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect);

typedef void __fastcall (__closure *TGetCellPropEvent)(System::TObject* Sender, int Column, int Row, Vcl::Graphics::TFont* Font, System::Uitypes::TColor &AColor, System::Uitypes::TColor &AColorTo);

#pragma pack(push,4)
class PASCALIMPLEMENTATION TDropDownColumn : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	bool FWordwrap;
	int FWidth;
	bool FAutoSize;
	System::UnicodeString FHeader;
	System::Classes::TAlignment FAlignment;
	System::Uitypes::TColor FColor;
	TColumnType FColumnType;
	Vcl::Graphics::TFont* FFont;
	bool FEllipsis;
	void __fastcall SetFont(Vcl::Graphics::TFont* const Value);
	
public:
	__fastcall virtual TDropDownColumn(System::Classes::TCollection* Collection);
	__fastcall virtual ~TDropDownColumn();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property int Width = {read=FWidth, write=FWidth, default=80};
	__property System::Uitypes::TColor Color = {read=FColor, write=FColor, default=16777215};
	__property System::Classes::TAlignment Alignment = {read=FAlignment, write=FAlignment, default=0};
	__property bool Ellipsis = {read=FEllipsis, write=FEllipsis, default=0};
	__property Vcl::Graphics::TFont* Font = {read=FFont, write=SetFont};
	__property TColumnType ColumnType = {read=FColumnType, write=FColumnType, default=0};
	__property System::UnicodeString Header = {read=FHeader, write=FHeader};
	__property bool Wordwrap = {read=FWordwrap, write=FWordwrap, default=0};
	__property bool AutoSize = {read=FAutoSize, write=FAutoSize, default=0};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TDropDownColumns : public System::Classes::TCollection
{
	typedef System::Classes::TCollection inherited;
	
public:
	TDropDownColumn* operator[](int Index) { return this->Items[Index]; }
	
private:
	System::Classes::TPersistent* FMyOwner;
	System::Classes::TNotifyEvent FOnChange;
	HIDESBASE TDropDownColumn* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TDropDownColumn* const Value);
	
public:
	__fastcall TDropDownColumns(System::Classes::TPersistent* AOwner);
	__property TDropDownColumn* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
	HIDESBASE TDropDownColumn* __fastcall Add();
	HIDESBASE TDropDownColumn* __fastcall Insert(int Index);
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TDropDownColumns() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TDropDownItem : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	int FImageIndex;
	System::Classes::TStringList* FText;
	int FTag;
	void __fastcall SetText(System::Classes::TStringList* const Value);
	
public:
	__fastcall virtual TDropDownItem(System::Classes::TCollection* Collection);
	__fastcall virtual ~TDropDownItem();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property int ImageIndex = {read=FImageIndex, write=FImageIndex, default=-1};
	__property System::Classes::TStringList* Text = {read=FText, write=SetText};
	__property int Tag = {read=FTag, write=FTag, nodefault};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TDropDownItems : public System::Classes::TCollection
{
	typedef System::Classes::TCollection inherited;
	
public:
	TDropDownItem* operator[](int Index) { return this->Items[Index]; }
	
private:
	System::Classes::TPersistent* FMyOwner;
	System::Classes::TNotifyEvent FOnChange;
	HIDESBASE TDropDownItem* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TDropDownItem* const Value);
	
public:
	__fastcall TDropDownItems(System::Classes::TPersistent* AOwner);
	__property TDropDownItem* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
	HIDESBASE TDropDownItem* __fastcall Add();
	HIDESBASE TDropDownItem* __fastcall Insert(int Index);
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	int __fastcall IndexInColumn(int Column, System::UnicodeString Value);
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TDropDownItems() { }
	
};


class PASCALIMPLEMENTATION TAdvColGrid : public Vcl::Grids::TStringGrid
{
	typedef Vcl::Grids::TStringGrid inherited;
	
private:
	TAdvMultiColumnDropDown* FAdvDropDown;
	TDropDownColumns* FColumns;
	System::Uitypes::TColor FHeaderColor;
	System::Uitypes::TColor FHeaderColorTo;
	System::Uitypes::TColor FLineColor;
	Vcl::Imglist::TCustomImageList* FImages;
	TDrawCellEvent FOnDrawCell;
	TGetCellPropEvent FOnGetCellProp;
	TGetCellTextEvent FOnGetCellText;
	int FHeaderHeight;
	Vcl::Graphics::TFont* FHeaderFont;
	System::Uitypes::TColor FFixedLineColor;
	int FGridLineWidth;
	System::Classes::TNotifyEvent FOnSelect;
	int FOldRow;
	bool FMouseWheelSelection;
	bool FConfirmSelection;
	bool FHoverSelect;
	HIDESBASE MESSAGE void __fastcall WMKeyDown(Winapi::Messages::TWMKey &Msg);
	HIDESBASE MESSAGE void __fastcall WMLButtonDown(Winapi::Messages::TWMMouse &Msg);
	HIDESBASE MESSAGE void __fastcall WMGetDlgCode(Winapi::Messages::TMessage &Message);
	void __fastcall SetHeaderColor(const System::Uitypes::TColor Value);
	void __fastcall SetHeaderColorTo(const System::Uitypes::TColor Value);
	void __fastcall SetLineColor(const System::Uitypes::TColor Value);
	void __fastcall SetImages(Vcl::Imglist::TCustomImageList* const Value);
	void __fastcall SetColumns(TDropDownColumns* const Value);
	void __fastcall SetHeaderFont(Vcl::Graphics::TFont* const Value);
	void __fastcall SetHeaderHeight(const int Value);
	void __fastcall SetAdvDropDown(TAdvMultiColumnDropDown* const Value);
	HIDESBASE System::Types::TRect __fastcall CellRect(int c, int r);
	HIDESBASE void __fastcall SetGridLineWidth(const int Value);
	
protected:
	DYNAMIC void __fastcall DoExit();
	virtual void __fastcall DrawCell(int ACol, int ARow, const System::Types::TRect &ARect, Vcl::Grids::TGridDrawState AState);
	virtual bool __fastcall SelectCell(int ACol, int ARow);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation AOperation);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall SelectionChanged();
	DYNAMIC bool __fastcall DoMouseWheelDown(System::Classes::TShiftState Shift, const System::Types::TPoint &MousePos);
	DYNAMIC bool __fastcall DoMouseWheelUp(System::Classes::TShiftState Shift, const System::Types::TPoint &MousePos);
	void __fastcall AutoSizeColumn(int ACol);
	void __fastcall AutoSizeColumns();
	void __fastcall DoWordWrap();
	HIDESBASE void __fastcall Initialize(TAdvMultiColumnDropDown* DropDown);
	int __fastcall GetDesiredWidth();
	__property TAdvMultiColumnDropDown* AdvDropDown = {read=FAdvDropDown, write=SetAdvDropDown};
	DYNAMIC void __fastcall Resize();
	
public:
	__fastcall virtual TAdvColGrid(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TAdvColGrid();
	
__published:
	__property TDropDownColumns* Columns = {read=FColumns, write=SetColumns};
	__property System::Uitypes::TColor LineColor = {read=FLineColor, write=SetLineColor, default=8421504};
	__property System::Uitypes::TColor FixedLineColor = {read=FFixedLineColor, write=FFixedLineColor, nodefault};
	__property System::Uitypes::TColor HeaderColor = {read=FHeaderColor, write=SetHeaderColor, nodefault};
	__property System::Uitypes::TColor HeaderColorTo = {read=FHeaderColorTo, write=SetHeaderColorTo, nodefault};
	__property int HeaderHeight = {read=FHeaderHeight, write=SetHeaderHeight, nodefault};
	__property Vcl::Graphics::TFont* HeaderFont = {read=FHeaderFont, write=SetHeaderFont};
	__property int GridLineWidth = {read=FGridLineWidth, write=SetGridLineWidth, default=1};
	__property Vcl::Imglist::TCustomImageList* Images = {read=FImages, write=SetImages};
	__property bool HoverSelect = {read=FHoverSelect, write=FHoverSelect, default=0};
	__property TGetCellTextEvent OnGetCellText = {read=FOnGetCellText, write=FOnGetCellText};
	__property TDrawCellEvent OnDrawCell = {read=FOnDrawCell, write=FOnDrawCell};
	__property TGetCellPropEvent OnGetCellProp = {read=FOnGetCellProp, write=FOnGetCellProp};
	__property System::Classes::TNotifyEvent OnSelect = {read=FOnSelect, write=FOnSelect};
public:
	/* TWinControl.CreateParented */ inline __fastcall TAdvColGrid(HWND ParentWindow) : Vcl::Grids::TStringGrid(ParentWindow) { }
	
};


typedef void __fastcall (__closure *TDropDownCellClickEvent)(System::TObject* Sender, int ACol, int ARow, System::UnicodeString AValue);

class PASCALIMPLEMENTATION TAdvMultiColumnDropDown : public Advdropdown::TAdvCustomDropDown
{
	typedef Advdropdown::TAdvCustomDropDown inherited;
	
private:
	bool FShowing;
	bool FColumnSizing;
	int FLookupColumn;
	System::Uitypes::TColor FHeaderColorTo;
	System::Uitypes::TColor FHeaderColor;
	System::Uitypes::TColor FLineColor;
	TDropDownItems* FItems;
	TDropDownColumns* FColumns;
	int FItemIndex;
	int FHeaderHeight;
	Vcl::Graphics::TFont* FHeaderFont;
	TAdvColGrid* FAdvColGrid;
	System::Uitypes::TColor FFixedLineColor;
	bool workmode;
	System::UnicodeString FLookupStr;
	System::UnicodeString FOldValue;
	System::Classes::TStringList* FLookupItems;
	bool FMatchCase;
	bool FMatchStart;
	bool FItemChange;
	int FItemIdx;
	int FItemSel;
	System::Classes::TNotifyEvent FOnSelect;
	TDrawCellEvent FOnDropDownDrawItem;
	TGetCellPropEvent FOnDropDownGetItemProp;
	TGetCellTextEvent FOnDropDownGetItemText;
	int FOldItemIndex;
	bool FDropDownAutoWidth;
	bool FColumnSizeWithDropDown;
	System::Uitypes::TColor FSelectionTextColor;
	int FDropDownRowHeight;
	System::UnicodeString FLookupEntry;
	bool FCaseSensitive;
	int FOrgIndex;
	bool FHoverSelect;
	TDropDownCellClickEvent FOnDropDownCellClick;
	bool FLookupIncr;
	HIDESBASE MESSAGE void __fastcall WMKeyDown(Winapi::Messages::TWMKey &Msg);
	void __fastcall OnColGridSelectCell(System::TObject* Sender, int ACol, int ARow, bool &CanSelect);
	void __fastcall OnColGridSelect(System::TObject* Sender);
	void __fastcall OnColGridKeyDown(System::TObject* Sender, System::Word &Key, System::Classes::TShiftState Shift);
	int __fastcall GetRowCount();
	void __fastcall SetLookupColumn(const int Value);
	void __fastcall SetItems(TDropDownItems* const Value);
	void __fastcall SetColumns(TDropDownColumns* const Value);
	System::UnicodeString __fastcall GetTextEx();
	void __fastcall SetItemIndex(const int Value);
	void __fastcall SetTextEx(const System::UnicodeString Value);
	void __fastcall SetHeaderFont(Vcl::Graphics::TFont* const Value);
	void __fastcall SetHeaderHeight(const int Value);
	void __fastcall SetLineColor(const System::Uitypes::TColor Value);
	void __fastcall UpdateLookupList();
	void __fastcall SyncColWidths();
	void __fastcall SetHoverSelect(const bool Value);
	
protected:
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation AOperation);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyUp(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	virtual void __fastcall Loaded();
	DYNAMIC void __fastcall Change();
	virtual void __fastcall CreateDropDownForm();
	virtual void __fastcall AdaptDropDownSize(int &AHeight);
	virtual void __fastcall BeforeDropDown();
	virtual void __fastcall OnHideDropDown();
	virtual void __fastcall UpdateDropDownSize();
	virtual void __fastcall DoHideDropDown(bool Canceled);
	virtual void __fastcall DoShowDropDown();
	void __fastcall DoSelect();
	virtual void __fastcall SetSelectionColorStyle(const Advdropdown::TSelectionColorStyle Value);
	virtual void __fastcall SetCenterControl();
	virtual void __fastcall OnDropDownControlKeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall OnDropDownControlKeyUp(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall OnDropDownControlKeyPress(System::WideChar &Key);
	virtual void __fastcall OnDropDownSizing();
	virtual void __fastcall HandleMouseWheelDown();
	virtual void __fastcall HandleMouseWheelUp();
	HIDESBASE void __fastcall SelectFirst();
	void __fastcall SelectLast();
	HIDESBASE void __fastcall SelectNext();
	void __fastcall SelectPrevious();
	void __fastcall SelectNextPage();
	void __fastcall SelectPrevPage();
	bool __fastcall LookupInColumn(System::UnicodeString value, System::UnicodeString &lookup, int &row);
	int __fastcall DoKeyLookup(System::WideChar ch);
	
public:
	__fastcall virtual TAdvMultiColumnDropDown(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TAdvMultiColumnDropDown();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	virtual void __fastcall SetComponentStyle(Advstyleif::TTMSStyle AStyle);
	void __fastcall BeginUpdate();
	void __fastcall EndUpdate();
	__property int RowCount = {read=GetRowCount, nodefault};
	__property System::UnicodeString Text = {read=GetTextEx, write=SetTextEx};
	__property bool MatchCase = {read=FMatchCase, write=FMatchCase, default=0};
	__property bool MatchStart = {read=FMatchStart, write=FMatchStart, default=1};
	int __fastcall GetItemIndex(System::UnicodeString value);
	
__published:
	__property bool CaseSensitive = {read=FCaseSensitive, write=FCaseSensitive, default=0};
	__property bool DropDownAutoWidth = {read=FDropDownAutoWidth, write=FDropDownAutoWidth, default=1};
	__property int DropDownRowHeight = {read=FDropDownRowHeight, write=FDropDownRowHeight, default=22};
	__property System::Uitypes::TColor LineColor = {read=FLineColor, write=SetLineColor, default=8421504};
	__property System::Uitypes::TColor FixedLineColor = {read=FFixedLineColor, write=FFixedLineColor, nodefault};
	__property bool ColumnSizing = {read=FColumnSizing, write=FColumnSizing, default=0};
	__property bool ColumnSizeWithDropDown = {read=FColumnSizeWithDropDown, write=FColumnSizeWithDropDown, default=1};
	__property TDropDownColumns* Columns = {read=FColumns, write=SetColumns};
	__property System::Uitypes::TColor HeaderColor = {read=FHeaderColor, write=FHeaderColor, nodefault};
	__property System::Uitypes::TColor HeaderColorTo = {read=FHeaderColorTo, write=FHeaderColorTo, nodefault};
	__property int HeaderHeight = {read=FHeaderHeight, write=SetHeaderHeight, nodefault};
	__property Vcl::Graphics::TFont* HeaderFont = {read=FHeaderFont, write=SetHeaderFont};
	__property bool HoverSelect = {read=FHoverSelect, write=SetHoverSelect, default=0};
	__property int LookupColumn = {read=FLookupColumn, write=SetLookupColumn, default=0};
	__property bool LookupIncr = {read=FLookupIncr, write=FLookupIncr, default=0};
	__property System::Uitypes::TColor SelectionTextColor = {read=FSelectionTextColor, write=FSelectionTextColor, default=0};
	__property TDropDownItems* Items = {read=FItems, write=SetItems};
	__property int ItemIndex = {read=FItemIndex, write=SetItemIndex, nodefault};
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
	__property ReturnIsTab = {default=0};
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
	__property EditorEnabled = {default=1};
	__property Enabled = {default=1};
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
	__property SelectionColor;
	__property SelectionColorTo;
	__property ButtonAppearance;
	__property DropDownHeader;
	__property DropDownFooter;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property TabStop = {default=1};
	__property TabOrder = {default=-1};
	__property System::Classes::TNotifyEvent OnSelect = {read=FOnSelect, write=FOnSelect};
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
	__property TDropDownCellClickEvent OnDropDownCellClick = {read=FOnDropDownCellClick, write=FOnDropDownCellClick};
	__property TGetCellTextEvent OnDropDownGetItemText = {read=FOnDropDownGetItemText, write=FOnDropDownGetItemText};
	__property TDrawCellEvent OnDropDownDrawItem = {read=FOnDropDownDrawItem, write=FOnDropDownDrawItem};
	__property TGetCellPropEvent OnDropDownGetItemProp = {read=FOnDropDownGetItemProp, write=FOnDropDownGetItemProp};
	__property UIStyle = {default=8};
public:
	/* TWinControl.CreateParented */ inline __fastcall TAdvMultiColumnDropDown(HWND ParentWindow) : Advdropdown::TAdvCustomDropDown(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Advmulticolumndropdown */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ADVMULTICOLUMNDROPDOWN)
using namespace Advmulticolumndropdown;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AdvmulticolumndropdownHPP
