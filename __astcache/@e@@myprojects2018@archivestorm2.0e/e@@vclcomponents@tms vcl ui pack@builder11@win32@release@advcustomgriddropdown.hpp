// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AdvCustomGridDropDown.pas' rev: 35.00 (Windows)

#ifndef AdvcustomgriddropdownHPP
#define AdvcustomgriddropdownHPP

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
#include <AdvStyleIF.hpp>
#include <AdvObj.hpp>
#include <AdvHintInfo.hpp>
#include <System.Types.hpp>
#include <System.UITypes.hpp>
#include <Vcl.Mask.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Menus.hpp>

//-- user supplied -----------------------------------------------------------

namespace Advcustomgriddropdown
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TDropDownColumn;
class DELPHICLASS TDropDownColumns;
class DELPHICLASS TDropDownItem;
class DELPHICLASS TDropDownItems;
class DELPHICLASS TCustomAdvGridDropDown;
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
	void __fastcall SetText(System::Classes::TStringList* const Value);
	
public:
	__fastcall virtual TDropDownItem(System::Classes::TCollection* Collection);
	__fastcall virtual ~TDropDownItem();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property int ImageIndex = {read=FImageIndex, write=FImageIndex, default=-1};
	__property System::Classes::TStringList* Text = {read=FText, write=SetText};
};

#pragma pack(pop)

typedef System::TMetaClass* TDropDownItemClass;

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
	
protected:
	virtual TDropDownItemClass __fastcall GetItemClass();
	
public:
	__fastcall TDropDownItems(System::Classes::TPersistent* AOwner);
	__property TDropDownItem* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
	HIDESBASE TDropDownItem* __fastcall Add();
	HIDESBASE TDropDownItem* __fastcall Insert(int Index);
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TDropDownItems() { }
	
};


enum DECLSPEC_DENUM TDropDownStyle : unsigned char { dsDropDown, dsDropDownList };

enum DECLSPEC_DENUM TGridSorting : unsigned char { gsNone, gsSingleColumn, gsMultiColumn };

enum DECLSPEC_DENUM TLookupMethod : unsigned char { lmLookup, lmNarrowDown, lmNone };

class PASCALIMPLEMENTATION TCustomAdvGridDropDown : public Advdropdown::TAdvCustomDropDown
{
	typedef Advdropdown::TAdvCustomDropDown inherited;
	
private:
	bool FDesignTime;
	bool FBalloonInit;
	bool FCaseSensitive;
	bool FColumnSizing;
	bool FColumnMoving;
	int FLookupColumn;
	int FLookupIndex;
	TLookupMethod FLookupMethod;
	System::Uitypes::TColor FHeaderColorTo;
	System::Uitypes::TColor FHeaderColor;
	System::Uitypes::TColor FLineColor;
	bool FUseItems;
	TDropDownItems* FItems;
	TDropDownColumns* FColumns;
	int FItemIndex;
	int FHeaderHeight;
	Vcl::Graphics::TFont* FHeaderFont;
	Vcl::Grids::TStringGrid* FAdvColGrid;
	System::Uitypes::TColor FFixedLineColor;
	int FSelRow;
	bool workmode;
	System::UnicodeString FLookupStr;
	System::UnicodeString FOldValue;
	bool FRowSelect;
	System::Classes::TStringList* FLookupItems;
	bool FMatchCase;
	bool FMatchStart;
	bool FItemChange;
	bool FFirstDropDown;
	int FItemIdx;
	int FItemSel;
	Advobj::TSearchFooter* FSearchFooter;
	Advobj::TBands* FBands;
	Advobj::TNavigation* FNavigation;
	Advobj::TMouseActions* FMouseActions;
	System::Classes::TNotifyEvent FOnSelect;
	bool FInitializing;
	Advobj::TAnchorClickEvent FOnAnchorClick;
	Advobj::TAnchorEvent FOnAnchorEnter;
	Advobj::TAnchorEvent FOnAnchorExit;
	Advobj::TAnchorHintEvent FOnAnchorHint;
	Advobj::TCanSortEvent FOnCanSort;
	Advobj::TClickSortEvent FOnClickSort;
	Advobj::TCustomCompareEvent FOnCustomCompare;
	Advobj::TRawCompareEvent FOnRawCompare;
	Advobj::TCustomCellDrawEvent FOnCustomCellDraw;
	Advobj::TCustomCellDrawEvent FOnCustomCellBkgDraw;
	Advobj::TGridAlignEvent FOnGetAlignment;
	Advobj::TGridColorEvent FOnGetCellColor;
	Advobj::TGridGradientEvent FOnGetCellGradient;
	Advobj::TGetDisplTextEvent FOnGetDisplText;
	Advobj::TFloatFormatEvent FOnGetFloatFormat;
	Advobj::TGridFormatEvent FOnGetFormat;
	Advobj::TGridHintEvent FOnGridHint;
	Advobj::TClickCellEvent FOnRightClickCell;
	Advobj::TScrollHintEvent FOnScrollHint;
	Vcl::Controls::TMouseMoveEvent FOnMouseMove;
	Vcl::Controls::TMouseEvent FOnMouseDown;
	Vcl::Controls::TMouseEvent FOnMouseUp;
	Vcl::Controls::TKeyEvent FOnKeyDown;
	Vcl::Controls::TKeyEvent FOnKeyUp;
	Vcl::Controls::TKeyPressEvent FOnKeyPress;
	Advobj::TButtonClickEvent FOnButtonClick;
	Advobj::TCheckBoxClickEvent FOnCheckBoxClick;
	Advobj::TColumnSizeEvent FOnColumnSize;
	Advobj::TColumnSizingEvent FOnColumnSizing;
	Advobj::TEndColumnSizeEvent FOnEndColumnSize;
	Advobj::TRowSizeEvent FOnRowSize;
	Advobj::TRowSizingEvent FOnRowSizing;
	Advobj::TEndRowSizeEvent FOnEndRowSize;
	Advobj::TGetEditorTypeEvent FOnGetEditorType;
	Advobj::TClickCellEvent FOnGetEditorProp;
	Advobj::TCanEditCellEvent FOnCanEditCell;
	Advobj::TEllipsClickEvent FOnEllipsClick;
	Advobj::TGridBalloonEvent FOnCellBalloon;
	Advobj::TAutoInsertColEvent FOnAutoInsertCol;
	Advobj::TAutoInsertRowEvent FOnAutoInsertRow;
	Advobj::TAutoDeleteRowEvent FOnAutoDeleteRow;
	Advobj::TAutoAddRowEvent FOnAutoAddRow;
	Advobj::TCanAddRowEvent FOnCanAddRow;
	Advobj::TCanDeleteRowEvent FOnCanDeleteRow;
	Advobj::TCanInsertRowEvent FOnCanInsertRow;
	Advobj::TColumnSizeEvent FOnColumnMove;
	Vcl::Grids::TMovedEvent FOnColumnMoved;
	Advobj::TColumnSizeEvent FOnColumnMoving;
	Advobj::TRowSizeEvent FOnRowMove;
	Advobj::TRowSizeEvent FOnRowMoving;
	Vcl::Grids::TMovedEvent FOnRowMoved;
	System::Classes::TNotifyEvent FOnTopLeftChanged;
	Advobj::TSearchEditChangeEvent FOnSearchEditChange;
	Advobj::TSpinClickEvent FOnSpinClick;
	Advobj::TOfficeHintEvent FOnOfficeHint;
	int FOldItemIndex;
	bool FDropDownAutoWidth;
	bool FColumnSizeWithDropDown;
	System::Uitypes::TColor FSelectionTextColor;
	int FDropDownRowHeight;
	int FTempItemIndex;
	TDropDownStyle FStyle;
	System::UnicodeString FLookupEntry;
	bool FHoverRow;
	System::Uitypes::TColor FHoverRowColor;
	System::Uitypes::TColor FHoverRowColorTo;
	TGridSorting FSorting;
	bool FGridEditable;
	Vcl::Imglist::TCustomImageList* FGridImages;
	bool FRowMoving;
	bool FRowSizing;
	bool FAutoShowDropDown;
	bool FAutoSizeColumns;
	bool FNodeCell;
	Advstyleif::TTMSStyle FTMSStyle;
	Vcl::Grids::TSelectCellEvent FOnGridSelectCell;
	HIDESBASE MESSAGE void __fastcall WMKeyDown(Winapi::Messages::TWMKey &Msg);
	HIDESBASE MESSAGE void __fastcall WMChar(Winapi::Messages::TWMKey &Msg);
	void __fastcall OnColGridSelectCell(System::TObject* Sender, int ACol, int ARow, bool &CanSelect);
	void __fastcall OnColGridSelect(System::TObject* Sender);
	void __fastcall OnColGridKeyDown(System::TObject* Sender, System::Word &Key, System::Classes::TShiftState Shift);
	void __fastcall OnGridBeforeSort(System::TObject* Sender, int ACol, bool &DoSort);
	void __fastcall OnGridAfterSort(System::TObject* Sender, int ACol);
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
	int __fastcall GetItemIndexFromRow(int ARow);
	int __fastcall GetRowFromItemIndex(int AItemIndex);
	void __fastcall SetStyle(const TDropDownStyle Value);
	void __fastcall SetSorting(const TGridSorting Value);
	void __fastcall DoGridCheckBoxClick(System::TObject* Sender, int ACol, int ARow, bool State);
	void __fastcall SetGridImages(Vcl::Imglist::TCustomImageList* const Value);
	void __fastcall SetSearchFooter(Advobj::TSearchFooter* const Value);
	void __fastcall SetLookupMethod(const TLookupMethod Value);
	void __fastcall SetMouseActions(Advobj::TMouseActions* const Value);
	void __fastcall SetNavigation(Advobj::TNavigation* const Value);
	void __fastcall SetBands(Advobj::TBands* const Value);
	HIDESBASE void __fastcall SetUIStyle(const Advstyleif::TTMSStyle Value);
	
protected:
	virtual int __fastcall GetVersionNr();
	Vcl::Grids::TStringGrid* __fastcall GetGrid();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation AOperation);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyUp(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	virtual void __fastcall Loaded();
	DYNAMIC void __fastcall Change();
	virtual TDropDownItems* __fastcall CreateItems(System::Classes::TComponent* AOwner);
	virtual void __fastcall CreateDropDownForm();
	virtual void __fastcall AdaptDropDownSize(int &AHeight);
	virtual void __fastcall BeforeDropDown();
	virtual void __fastcall AfterDropDown();
	virtual void __fastcall OnHideDropDown();
	virtual void __fastcall UpdateDropDownSize();
	virtual void __fastcall DoHideDropDown(bool Canceled);
	virtual void __fastcall DoShowDropDown();
	virtual void __fastcall DoSelect();
	virtual void __fastcall SetSelectionColorStyle(const Advdropdown::TSelectionColorStyle Value);
	virtual void __fastcall SetCenterControl();
	virtual void __fastcall OnDropDownControlKeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall OnDropDownControlKeyUp(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall OnDropDownControlKeyPress(System::WideChar &Key);
	virtual void __fastcall OnDropDownSizing();
	virtual void __fastcall DoGridAnchorClick(System::TObject* Sender, int ARow, int ACol, System::UnicodeString Anchor, bool &AutoHandle);
	virtual void __fastcall DoGridAnchorEnter(System::TObject* Sender, int ARow, int ACol, System::UnicodeString Anchor);
	virtual void __fastcall DoGridAnchorExit(System::TObject* Sender, int ARow, int ACol, System::UnicodeString Anchor);
	virtual void __fastcall DoGridAnchorHint(System::TObject* Sender, int ARow, int ACol, System::UnicodeString &Anchor);
	virtual void __fastcall DoGridButtonClick(System::TObject* Sender, int ACol, int ARow);
	virtual void __fastcall DoGridCanSort(System::TObject* Sender, int ACol, bool &DoSort);
	virtual void __fastcall DoGridClickSort(System::TObject* Sender, int ACol);
	virtual void __fastcall DoGridCustomCompare(System::TObject* Sender, System::UnicodeString str1, System::UnicodeString str2, int &Res);
	virtual void __fastcall DoGridRawCompare(System::TObject* Sender, int ACol, int Row1, int Row2, int &Res);
	virtual void __fastcall DoGridColumnSize(System::TObject* Sender, int ACol, bool &Allow);
	virtual void __fastcall DoGridColumnSizing(System::TObject* Sender, int ACol, int ColumnSize);
	virtual void __fastcall DoGridEndColumnSize(System::TObject* Sender, int ACol);
	virtual void __fastcall DoGridRowSize(System::TObject* Sender, int ARow, bool &Allow);
	virtual void __fastcall DoGridRowSizing(System::TObject* Sender, int ARow, int RowHeight);
	virtual void __fastcall DoGridEndRowSize(System::TObject* Sender, int ARow);
	virtual void __fastcall DoGridRowMove(System::TObject* Sender, int ARow, bool &Allow);
	virtual void __fastcall DoGridRowMoving(System::TObject* Sender, int ARow, bool &Allow);
	virtual void __fastcall DoGridRowMoved(System::TObject* Sender, int FromIndex, int ToIndex);
	virtual void __fastcall DoGridColumnMove(System::TObject* Sender, int ACol, bool &Allow);
	virtual void __fastcall DoGridColumnMoving(System::TObject* Sender, int ACol, bool &Allow);
	virtual void __fastcall DoGridColumnMoved(System::TObject* Sender, int FromIndex, int ToIndex);
	virtual void __fastcall DoGridCustomCellDraw(System::TObject* Sender, Vcl::Graphics::TCanvas* Canvas, int ACol, int ARow, Vcl::Grids::TGridDrawState AState, const System::Types::TRect &ARect, bool Printing);
	virtual void __fastcall DoGridCustomCellBkgDraw(System::TObject* Sender, Vcl::Graphics::TCanvas* Canvas, int ACol, int ARow, Vcl::Grids::TGridDrawState AState, const System::Types::TRect &ARect, bool Printing);
	virtual void __fastcall DoGridCellBalloon(System::TObject* Sender, int ACol, int ARow, System::UnicodeString &ATitle, System::UnicodeString &AText, int &AIcon);
	virtual void __fastcall DoGridGetAlignment(System::TObject* Sender, int ARow, int ACol, System::Classes::TAlignment &HAlign, Advobj::TVAlignment &VAlign);
	virtual void __fastcall DoGridGetCellColor(System::TObject* Sender, int ARow, int ACol, Vcl::Grids::TGridDrawState AState, Vcl::Graphics::TBrush* ABrush, Vcl::Graphics::TFont* AFont);
	virtual void __fastcall DoGridGetCellGradient(System::TObject* Sender, int ARow, int ACol, System::Uitypes::TColor &Color, System::Uitypes::TColor &ColorTo, System::Uitypes::TColor &ColorMirror, System::Uitypes::TColor &ColorMirrorTo, Advobj::TCellGradientDirection &GD);
	virtual void __fastcall DoGridGetFloatFormat(System::TObject* Sender, int ACol, int ARow, bool &IsFloat, System::UnicodeString &FloatFormat);
	virtual void __fastcall DoGridGetEditorType(System::TObject* Sender, int ACol, int ARow, Advobj::TEditorType &AEditor);
	virtual void __fastcall DoGridGetEditorProp(System::TObject* Sender, int ACol, int ARow);
	virtual void __fastcall DoGridCanEditCell(System::TObject* Sender, int ARow, int ACol, bool &CanEdit);
	virtual void __fastcall DoGridEllipsClick(System::TObject* Sender, int ACol, int ARow, System::UnicodeString &S);
	virtual void __fastcall DoGridGetDisplText(System::TObject* Sender, int ACol, int ARow, System::UnicodeString &Value);
	virtual void __fastcall DoGridGetFormat(System::TObject* Sender, int ACol, Advobj::TSortStyle &AStyle, System::UnicodeString &aPrefix, System::UnicodeString &aSuffix);
	virtual void __fastcall DoGridHint(System::TObject* Sender, int ARow, int ACol, System::UnicodeString &hintstr);
	virtual void __fastcall DoGridOfficeHint(System::TObject* Sender, int ACol, int ARow, Advhintinfo::TAdvHintInfo* OfficeHint);
	virtual void __fastcall DoGridMouseMove(System::TObject* Sender, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall DoGridMouseDown(System::TObject* Sender, System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall DoGridMouseUp(System::TObject* Sender, System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall DoGridKeyDown(System::TObject* Sender, System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall DoGridKeyUp(System::TObject* Sender, System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall DoGridKeyPress(System::TObject* Sender, System::WideChar &Key);
	virtual void __fastcall DoGridRightClickCell(System::TObject* Sender, int ARow, int ACol);
	virtual void __fastcall DoGridScrollHint(System::TObject* Sender, int ARow, System::UnicodeString &hintstr);
	virtual void __fastcall DoGridTopLeftChanged(System::TObject* Sender);
	virtual void __fastcall DoGridSearchEditChange(System::TObject* Sender, System::UnicodeString Value, bool &DefaultSearch);
	virtual void __fastcall DoGridSpinClick(System::TObject* Sender, int ACol, int ARow, int AValue, bool UpDown);
	virtual void __fastcall DoGridAutoAddRow(System::TObject* Sender, int ARow);
	virtual void __fastcall DoGridAutoInsertRow(System::TObject* Sender, int ARow);
	virtual void __fastcall DoGridAutoInsertCol(System::TObject* Sender, int ACol);
	virtual void __fastcall DoGridAutoDeleteRow(System::TObject* Sender, int ARow);
	virtual void __fastcall DoGridCanAddRow(System::TObject* Sender, bool &CanAdd);
	virtual void __fastcall DoGridCanInsertRow(System::TObject* Sender, int ARow, bool &CanInsert);
	virtual void __fastcall DoGridCanDeleteRow(System::TObject* Sender, int ARow, bool &CanDelete);
	virtual void __fastcall HandleMouseWheelDown();
	virtual void __fastcall HandleMouseWheelUp();
	int __fastcall GetItemCount();
	HIDESBASE void __fastcall SelectFirst();
	void __fastcall SelectLast();
	HIDESBASE void __fastcall SelectNext();
	void __fastcall SelectPrevious();
	void __fastcall SelectNextPage();
	void __fastcall SelectPrevPage();
	bool __fastcall LookupInColumn(System::UnicodeString Value, System::UnicodeString &lookup, int &Row);
	int __fastcall DoKeyLookup(System::WideChar ch);
	DYNAMIC void __fastcall DoEnter();
	void __fastcall StartBlockFocus(System::TObject* Sender);
	void __fastcall EndBlockFocus(System::TObject* Sender);
	virtual void __fastcall CreateWnd();
	
public:
	__fastcall virtual TCustomAdvGridDropDown(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomAdvGridDropDown();
	virtual void __fastcall SetComponentStyle(Advstyleif::TTMSStyle AStyle);
	void __fastcall BeginUpdate();
	void __fastcall EndUpdate();
	__property int RowCount = {read=GetRowCount, nodefault};
	__property System::UnicodeString Text = {read=GetTextEx, write=SetTextEx};
	__property bool MatchCase = {read=FMatchCase, write=FMatchCase, default=0};
	__property bool MatchStart = {read=FMatchStart, write=FMatchStart, default=1};
	__property Advstyleif::TTMSStyle UIStyle = {read=FTMSStyle, write=SetUIStyle, default=8};
	
__published:
	__property bool AutoShowDropDown = {read=FAutoShowDropDown, write=FAutoShowDropDown, default=0};
	__property bool AutoSizeColumns = {read=FAutoSizeColumns, write=FAutoSizeColumns, default=1};
	__property bool CaseSensitive = {read=FCaseSensitive, write=FCaseSensitive, default=0};
	__property bool DropDownAutoWidth = {read=FDropDownAutoWidth, write=FDropDownAutoWidth, default=1};
	__property int DropDownRowHeight = {read=FDropDownRowHeight, write=FDropDownRowHeight, default=22};
	__property System::Uitypes::TColor LineColor = {read=FLineColor, write=SetLineColor, default=8421504};
	__property System::Uitypes::TColor FixedLineColor = {read=FFixedLineColor, write=FFixedLineColor, nodefault};
	__property Advobj::TBands* Bands = {read=FBands, write=SetBands};
	__property bool ColumnSizing = {read=FColumnSizing, write=FColumnSizing, default=0};
	__property bool ColumnMoving = {read=FColumnMoving, write=FColumnMoving, default=0};
	__property bool ColumnSizeWithDropDown = {read=FColumnSizeWithDropDown, write=FColumnSizeWithDropDown, default=1};
	__property TDropDownColumns* Columns = {read=FColumns, write=SetColumns};
	__property bool GridEditable = {read=FGridEditable, write=FGridEditable, default=0};
	__property Vcl::Imglist::TCustomImageList* GridImages = {read=FGridImages, write=SetGridImages};
	__property System::Uitypes::TColor HeaderColor = {read=FHeaderColor, write=FHeaderColor, nodefault};
	__property System::Uitypes::TColor HeaderColorTo = {read=FHeaderColorTo, write=FHeaderColorTo, nodefault};
	__property int HeaderHeight = {read=FHeaderHeight, write=SetHeaderHeight, nodefault};
	__property Vcl::Graphics::TFont* HeaderFont = {read=FHeaderFont, write=SetHeaderFont};
	__property bool HoverRow = {read=FHoverRow, write=FHoverRow, default=0};
	__property System::Uitypes::TColor HoverRowColor = {read=FHoverRowColor, write=FHoverRowColor, default=-16777192};
	__property System::Uitypes::TColor HoverRowColorTo = {read=FHoverRowColorTo, write=FHoverRowColorTo, default=536870911};
	__property TDropDownItems* Items = {read=FItems, write=SetItems};
	__property int ItemIndex = {read=FItemIndex, write=SetItemIndex, default=-1};
	__property int LookupColumn = {read=FLookupColumn, write=SetLookupColumn, default=0};
	__property TLookupMethod LookupMethod = {read=FLookupMethod, write=SetLookupMethod, default=0};
	__property Advobj::TMouseActions* MouseActions = {read=FMouseActions, write=SetMouseActions};
	__property Advobj::TNavigation* Navigation = {read=FNavigation, write=SetNavigation};
	__property bool RowSizing = {read=FRowSizing, write=FRowSizing, default=0};
	__property bool RowMoving = {read=FRowMoving, write=FRowMoving, default=0};
	__property System::Uitypes::TColor SelectionTextColor = {read=FSelectionTextColor, write=FSelectionTextColor, default=0};
	__property bool RowSelect = {read=FRowSelect, write=FRowSelect, default=1};
	__property Advobj::TSearchFooter* SearchFooter = {read=FSearchFooter, write=SetSearchFooter};
	__property TGridSorting Sorting = {read=FSorting, write=SetSorting, default=0};
	__property TDropDownStyle Style = {read=FStyle, write=SetStyle, nodefault};
	__property bool UseItems = {read=FUseItems, write=FUseItems, default=1};
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
	__property OnAfterDropDown;
	__property OnBeforeDropDown;
	__property OnBeforeDropUp;
	__property OnDropDown;
	__property OnDropUp;
	__property OnDropDownHeaderButtonClick;
	__property OnDropDownFooterButtonClick;
	__property OnDrawHeader;
	__property OnDrawFooter;
	__property OnGetHeaderText;
	__property OnGetFooterText;
	__property OnGetDropDownPos;
	__property Advobj::TAnchorClickEvent OnGridAnchorClick = {read=FOnAnchorClick, write=FOnAnchorClick};
	__property Advobj::TAnchorEvent OnGridAnchorEnter = {read=FOnAnchorEnter, write=FOnAnchorEnter};
	__property Advobj::TAnchorEvent OnGridAnchorExit = {read=FOnAnchorExit, write=FOnAnchorExit};
	__property Advobj::TAnchorHintEvent OnGridAnchorHint = {read=FOnAnchorHint, write=FOnAnchorHint};
	__property Advobj::TAutoAddRowEvent OnGridAutoAddRow = {read=FOnAutoAddRow, write=FOnAutoAddRow};
	__property Advobj::TAutoInsertRowEvent OnGridInsertRow = {read=FOnAutoInsertRow, write=FOnAutoInsertRow};
	__property Advobj::TAutoDeleteRowEvent OnGridDeleteRow = {read=FOnAutoDeleteRow, write=FOnAutoDeleteRow};
	__property Advobj::TAutoInsertColEvent OnGridInsertCol = {read=FOnAutoInsertCol, write=FOnAutoInsertCol};
	__property Advobj::TCanAddRowEvent OnGridCanAddRow = {read=FOnCanAddRow, write=FOnCanAddRow};
	__property Advobj::TCanDeleteRowEvent OnGridCanDeleteRow = {read=FOnCanDeleteRow, write=FOnCanDeleteRow};
	__property Advobj::TCanInsertRowEvent OnGridCanInsertRow = {read=FOnCanInsertRow, write=FOnCanInsertRow};
	__property Advobj::TButtonClickEvent OnGridButtonClick = {read=FOnButtonClick, write=FOnButtonClick};
	__property Advobj::TCanEditCellEvent OnGridCanEditCell = {read=FOnCanEditCell, write=FOnCanEditCell};
	__property Advobj::TCheckBoxClickEvent OnGridCheckBoxClick = {read=FOnCheckBoxClick, write=FOnCheckBoxClick};
	__property Advobj::TCanSortEvent OnGridCanSort = {read=FOnCanSort, write=FOnCanSort};
	__property Advobj::TClickSortEvent OnGridClickSort = {read=FOnClickSort, write=FOnClickSort};
	__property Advobj::TCustomCompareEvent OnGridCustomCompare = {read=FOnCustomCompare, write=FOnCustomCompare};
	__property Advobj::TRawCompareEvent OnGridRawCompare = {read=FOnRawCompare, write=FOnRawCompare};
	__property Advobj::TColumnSizeEvent OnGridColumnSize = {read=FOnColumnSize, write=FOnColumnSize};
	__property Advobj::TEndColumnSizeEvent OnGridEndColumnSize = {read=FOnEndColumnSize, write=FOnEndColumnSize};
	__property Advobj::TColumnSizingEvent OnGridColumnSizing = {read=FOnColumnSizing, write=FOnColumnSizing};
	__property Advobj::TRowSizeEvent OnGridRowSize = {read=FOnRowSize, write=FOnRowSize};
	__property Advobj::TRowSizingEvent OnGridRowSizing = {read=FOnRowSizing, write=FOnRowSizing};
	__property Advobj::TEndRowSizeEvent OnGridEndRowSize = {read=FOnEndRowSize, write=FOnEndRowSize};
	__property Advobj::TRowSizeEvent OnGridRowMove = {read=FOnRowMove, write=FOnRowMove};
	__property Advobj::TRowSizeEvent OnGridRowMoving = {read=FOnRowMoving, write=FOnRowMoving};
	__property Vcl::Grids::TMovedEvent OnGridRowMoved = {read=FOnRowMoved, write=FOnRowMoved};
	__property Advobj::TColumnSizeEvent OnGridColumnMove = {read=FOnColumnMove, write=FOnColumnMove};
	__property Advobj::TColumnSizeEvent OnGridColumnMoving = {read=FOnColumnMoving, write=FOnColumnMoving};
	__property Vcl::Grids::TMovedEvent OnGridColumnMoved = {read=FOnColumnMoved, write=FOnColumnMoved};
	__property Advobj::TCustomCellDrawEvent OnGridCustomCellDraw = {read=FOnCustomCellDraw, write=FOnCustomCellDraw};
	__property Advobj::TCustomCellDrawEvent OnGridCustomCellBkgDraw = {read=FOnCustomCellBkgDraw, write=FOnCustomCellBkgDraw};
	__property Advobj::TGridAlignEvent OnGridGetAlignment = {read=FOnGetAlignment, write=FOnGetAlignment};
	__property Advobj::TGridColorEvent OnGridGetCellColor = {read=FOnGetCellColor, write=FOnGetCellColor};
	__property Advobj::TGridGradientEvent OnGridGetCellGradient = {read=FOnGetCellGradient, write=FOnGetCellGradient};
	__property Advobj::TFloatFormatEvent OnGridGetFloatFormat = {read=FOnGetFloatFormat, write=FOnGetFloatFormat};
	__property Advobj::TGetEditorTypeEvent OnGridGetEditorType = {read=FOnGetEditorType, write=FOnGetEditorType};
	__property Advobj::TClickCellEvent OnGridGetEditorProp = {read=FOnGetEditorProp, write=FOnGetEditorProp};
	__property Advobj::TEllipsClickEvent OnGridEllipsClick = {read=FOnEllipsClick, write=FOnEllipsClick};
	__property Advobj::TGetDisplTextEvent OnGridGetDiplText = {read=FOnGetDisplText, write=FOnGetDisplText};
	__property Advobj::TGridFormatEvent OnGridGetFormat = {read=FOnGetFormat, write=FOnGetFormat};
	__property Advobj::TGridHintEvent OnGridHint = {read=FOnGridHint, write=FOnGridHint};
	__property Vcl::Grids::TSelectCellEvent OnGridSelectCell = {read=FOnGridSelectCell, write=FOnGridSelectCell};
	__property Advobj::TOfficeHintEvent OnGridOfficeHint = {read=FOnOfficeHint, write=FOnOfficeHint};
	__property Advobj::TGridBalloonEvent OnGridCellBalloon = {read=FOnCellBalloon, write=FOnCellBalloon};
	__property Vcl::Controls::TMouseMoveEvent OnGridMouseMove = {read=FOnMouseMove, write=FOnMouseMove};
	__property Vcl::Controls::TMouseEvent OnGridMouseDown = {read=FOnMouseDown, write=FOnMouseDown};
	__property Vcl::Controls::TMouseEvent OnGridMouseUp = {read=FOnMouseUp, write=FOnMouseUp};
	__property Vcl::Controls::TKeyEvent OnGridKeyDown = {read=FOnKeyDown, write=FOnKeyDown};
	__property Vcl::Controls::TKeyEvent OnGridKeyUp = {read=FOnKeyUp, write=FOnKeyUp};
	__property Vcl::Controls::TKeyPressEvent OnGridKeyPress = {read=FOnKeyPress, write=FOnKeyPress};
	__property Advobj::TClickCellEvent OnGridRightClickCell = {read=FOnRightClickCell, write=FOnRightClickCell};
	__property Advobj::TScrollHintEvent OnGridScrollHint = {read=FOnScrollHint, write=FOnScrollHint};
	__property System::Classes::TNotifyEvent OnGridTopLeftChanged = {read=FOnTopLeftChanged, write=FOnTopLeftChanged};
	__property Advobj::TSearchEditChangeEvent OnGridSearchEditChange = {read=FOnSearchEditChange, write=FOnSearchEditChange};
	__property Advobj::TSpinClickEvent OnGridSpinClick = {read=FOnSpinClick, write=FOnSpinClick};
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomAdvGridDropDown(HWND ParentWindow) : Advdropdown::TAdvCustomDropDown(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::Int8 MAJ_VER = System::Int8(0x6);
static const System::Int8 MIN_VER = System::Int8(0x2);
static const System::Int8 REL_VER = System::Int8(0x2);
static const System::Int8 BLD_VER = System::Int8(0x2);
}	/* namespace Advcustomgriddropdown */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ADVCUSTOMGRIDDROPDOWN)
using namespace Advcustomgriddropdown;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AdvcustomgriddropdownHPP
