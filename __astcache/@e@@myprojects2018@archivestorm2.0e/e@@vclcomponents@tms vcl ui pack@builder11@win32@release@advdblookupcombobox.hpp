// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AdvDBLookupComboBox.pas' rev: 35.00 (Windows)

#ifndef AdvdblookupcomboboxHPP
#define AdvdblookupcomboboxHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <System.Classes.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Controls.hpp>
#include <Winapi.Messages.hpp>
#include <System.SysUtils.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.Grids.hpp>
#include <Data.DB.hpp>
#include <Vcl.Dialogs.hpp>
#include <System.Math.hpp>
#include <Vcl.ImgList.hpp>
#include <AdvStyleIF.hpp>
#include <System.Variants.hpp>
#include <ALXPVS.hpp>
#include <System.Types.hpp>
#include <AdvToolTip.hpp>
#include <Vcl.Themes.hpp>
#include <System.UITypes.hpp>
#include <Vcl.Menus.hpp>

//-- user supplied -----------------------------------------------------------

namespace Advdblookupcombobox
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TFindList;
class DELPHICLASS TDBGridLookupDataLink;
class DELPHICLASS TDBGridDataLink;
class DELPHICLASS TLabelEx;
class DELPHICLASS TDBColumnItem;
class DELPHICLASS TDBColumnCollection;
class DELPHICLASS TDropForm;
class DELPHICLASS TInplaceStringGrid;
class DELPHICLASS TDropGridListButton;
class DELPHICLASS TAdvDBLookupComboBox;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TFindList : public System::Classes::TStringList
{
	typedef System::Classes::TStringList inherited;
	
private:
	int BaseIndex;
	System::UnicodeString KeyField;
	TAdvDBLookupComboBox* FGrid;
	
public:
	__fastcall TFindList(TAdvDBLookupComboBox* Agrid);
	__fastcall virtual ~TFindList();
};


typedef void __fastcall (__closure *TLookupErrorEvent)(System::TObject* Sender, System::UnicodeString LookupValue);

typedef void __fastcall (__closure *TLookupSuccessEvent)(System::TObject* Sender, System::UnicodeString LookupValue, System::UnicodeString LookupResult);

enum DECLSPEC_DENUM TLabelPosition : unsigned char { lpLeftTop, lpLeftCenter, lpLeftBottom, lpTopLeft, lpBottomLeft, lpLeftTopLeft, lpLeftCenterLeft, lpLeftBottomLeft, lpTopCenter, lpBottomCenter, lpRightTop, lpRightCenter, lpRightBottom, lpTopRight, lpBottomRight, lpRighBottom };

enum DECLSPEC_DENUM TGradientDirection : unsigned char { gdHorizontal, gdVertical };

enum DECLSPEC_DENUM TDropDownType : unsigned char { ddUser, ddAuto, ddOnError };

enum DECLSPEC_DENUM TSortType : unsigned char { stAscendent, stDescendent };

enum DECLSPEC_DENUM TTitleOrientation : unsigned char { toHorizontal, toVertical };

enum DECLSPEC_DENUM TVertAlignment : unsigned char { tvaCenter, tvaTop, tvaBottom };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TDBGridLookupDataLink : public Data::Db::TDataLink
{
	typedef Data::Db::TDataLink inherited;
	
private:
	TAdvDBLookupComboBox* FGrid;
	
protected:
	void __fastcall Modify();
	virtual void __fastcall DataSetScrolled(int distance);
	virtual void __fastcall ActiveChanged();
	virtual void __fastcall RecordChanged(Data::Db::TField* Field);
	virtual void __fastcall DataSetChanged();
	
public:
	__fastcall TDBGridLookupDataLink(TAdvDBLookupComboBox* AGrid);
	__fastcall virtual ~TDBGridLookupDataLink();
	__property TAdvDBLookupComboBox* Grid = {read=FGrid};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TDBGridDataLink : public Data::Db::TDataLink
{
	typedef Data::Db::TDataLink inherited;
	
private:
	TAdvDBLookupComboBox* FGrid;
	int FNumberRecords;
	Data::Db::TDataSetState OldState;
	bool FLoadingData;
	int FOldRecNo;
	
protected:
	virtual void __fastcall ActiveChanged();
	virtual void __fastcall RecordChanged(Data::Db::TField* Field);
	virtual void __fastcall DataSetChanged();
	
public:
	__fastcall TDBGridDataLink(TAdvDBLookupComboBox* AGrid);
	__fastcall virtual ~TDBGridDataLink();
	__property TAdvDBLookupComboBox* Grid = {read=FGrid};
};

#pragma pack(pop)

enum DECLSPEC_DENUM TEllipsType : unsigned char { etNone, etEndEllips, etPathEllips };

class PASCALIMPLEMENTATION TLabelEx : public Vcl::Stdctrls::TLabel
{
	typedef Vcl::Stdctrls::TLabel inherited;
	
private:
	TEllipsType FEllipsType;
	void __fastcall SetEllipsType(const TEllipsType Value);
	
protected:
	virtual void __fastcall Paint();
	
__published:
	__property TEllipsType EllipsType = {read=FEllipsType, write=SetEllipsType, nodefault};
public:
	/* TCustomLabel.Create */ inline __fastcall virtual TLabelEx(System::Classes::TComponent* AOwner) : Vcl::Stdctrls::TLabel(AOwner) { }
	
public:
	/* TGraphicControl.Destroy */ inline __fastcall virtual ~TLabelEx() { }
	
};


enum DECLSPEC_DENUM TDBColumnType : unsigned char { ctText, ctImage };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TDBColumnItem : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	int FWidth;
	System::Classes::TAlignment FAlignment;
	Vcl::Graphics::TFont* FFont;
	System::Uitypes::TColor FColor;
	TDBColumnType FColumnType;
	System::UnicodeString FListField;
	System::UnicodeString FTitle;
	System::UnicodeString FName;
	Vcl::Graphics::TFont* FTitleFont;
	bool FAutoSize;
	System::Uitypes::TColor FFixedColor;
	System::Uitypes::TColor FFixedColorTo;
	TGradientDirection FGradientDir;
	TTitleOrientation FTitleOrientation;
	System::Classes::TAlignment FTitleAlignment;
	TVertAlignment FTitleVerticalAlignment;
	bool FFontChanged;
	bool FTitleFontChanged;
	void __fastcall SetWidth(const int value);
	void __fastcall SetAlignment(const System::Classes::TAlignment value);
	void __fastcall SetFont(Vcl::Graphics::TFont* const value);
	void __fastcall SetColor(const System::Uitypes::TColor value);
	System::UnicodeString __fastcall GetListField();
	void __fastcall SetListField(const System::UnicodeString Value);
	void __fastcall SetColumnType(const TDBColumnType Value);
	TAdvDBLookupComboBox* __fastcall GetCombo();
	System::UnicodeString __fastcall GetName();
	void __fastcall SetName(const System::UnicodeString Value);
	void __fastcall SetTitleFont(Vcl::Graphics::TFont* const Value);
	void __fastcall OnFontChanged(System::TObject* Sender);
	void __fastcall OnTitleFontChanged(System::TObject* Sender);
	
protected:
	virtual System::UnicodeString __fastcall GetDisplayName();
	
public:
	__fastcall virtual TDBColumnItem(System::Classes::TCollection* Collection);
	__fastcall virtual ~TDBColumnItem();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property TAdvDBLookupComboBox* Combo = {read=GetCombo};
	
__published:
	__property bool AutoSize = {read=FAutoSize, write=FAutoSize, default=0};
	__property System::Uitypes::TColor Color = {read=FColor, write=SetColor, default=-16777211};
	__property TDBColumnType ColumnType = {read=FColumnType, write=SetColumnType, default=0};
	__property System::Uitypes::TColor FixedColor = {read=FFixedColor, write=FFixedColor, nodefault};
	__property System::Uitypes::TColor FixedColorTo = {read=FFixedColorTo, write=FFixedColorTo, nodefault};
	__property TGradientDirection GradientDir = {read=FGradientDir, write=FGradientDir, nodefault};
	__property int Width = {read=FWidth, write=SetWidth, default=100};
	__property System::Classes::TAlignment Alignment = {read=FAlignment, write=SetAlignment, default=0};
	__property Vcl::Graphics::TFont* Font = {read=FFont, write=SetFont};
	__property System::UnicodeString ListField = {read=GetListField, write=SetListField};
	__property System::UnicodeString Name = {read=GetName, write=SetName};
	__property System::UnicodeString Title = {read=FTitle, write=FTitle};
	__property Vcl::Graphics::TFont* TitleFont = {read=FTitleFont, write=SetTitleFont};
	__property System::Classes::TAlignment TitleAlignment = {read=FTitleAlignment, write=FTitleAlignment, default=2};
	__property TVertAlignment TitleVerticalAlignment = {read=FTitleVerticalAlignment, write=FTitleVerticalAlignment, default=0};
	__property TTitleOrientation TitleOrientation = {read=FTitleOrientation, write=FTitleOrientation, default=0};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TDBColumnCollection : public System::Classes::TCollection
{
	typedef System::Classes::TCollection inherited;
	
public:
	TDBColumnItem* operator[](int Index) { return this->Items[Index]; }
	
private:
	TAdvDBLookupComboBox* FOwner;
	HIDESBASE TDBColumnItem* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TDBColumnItem* const Value);
	
protected:
	virtual void __fastcall Update(System::Classes::TCollectionItem* Item);
	
public:
	HIDESBASE TDBColumnItem* __fastcall Add();
	HIDESBASE TDBColumnItem* __fastcall Insert(int index);
	__property TDBColumnItem* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
	__fastcall TDBColumnCollection(TAdvDBLookupComboBox* AOwner);
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TDBColumnCollection() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TDropForm : public Vcl::Forms::TForm
{
	typedef Vcl::Forms::TForm inherited;
	
private:
	bool FSizeable;
	bool FDroppedDown;
	Vcl::Extctrls::TTimer* FHideTimer;
	HIDESBASE MESSAGE void __fastcall WMClose(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Message);
	HIDESBASE MESSAGE void __fastcall WMNCHitTest(Winapi::Messages::TWMNCHitTest &Message);
	HIDESBASE MESSAGE void __fastcall WMActivate(Winapi::Messages::TWMActivate &Message);
	void __fastcall OnHideTimer(System::TObject* Sender);
	
protected:
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	
public:
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	__fastcall virtual TDropForm(System::Classes::TComponent* AOwner);
	__fastcall virtual TDropForm(System::Classes::TComponent* AOwner, int Dummy);
	__fastcall virtual ~TDropForm();
	
__published:
	__property bool Sizeable = {read=FSizeable, write=FSizeable, nodefault};
public:
	/* TWinControl.CreateParented */ inline __fastcall TDropForm(HWND ParentWindow) : Vcl::Forms::TForm(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TInplaceStringGrid : public Vcl::Grids::TStringGrid
{
	typedef Vcl::Grids::TStringGrid inherited;
	
private:
	TAdvDBLookupComboBox* FParentEdit;
	HIDESBASE MESSAGE void __fastcall WMKeyDown(Winapi::Messages::TWMKey &Msg);
	HIDESBASE MESSAGE void __fastcall WMGetDlgCode(Winapi::Messages::TMessage &Message);
	
protected:
	DYNAMIC void __fastcall DoExit();
	__property TAdvDBLookupComboBox* ParentEdit = {read=FParentEdit, write=FParentEdit};
public:
	/* TStringGrid.Create */ inline __fastcall virtual TInplaceStringGrid(System::Classes::TComponent* AOwner) : Vcl::Grids::TStringGrid(AOwner) { }
	/* TStringGrid.Destroy */ inline __fastcall virtual ~TInplaceStringGrid() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TInplaceStringGrid(HWND ParentWindow) : Vcl::Grids::TStringGrid(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TDropGridListButton : public Vcl::Buttons::TSpeedButton
{
	typedef Vcl::Buttons::TSpeedButton inherited;
	
private:
	Vcl::Controls::TWinControl* FFocusControl;
	System::Classes::TNotifyEvent FMouseClick;
	Vcl::Graphics::TBitmap* FArrEnabled;
	bool FIsWinXP;
	bool FHover;
	HIDESBASE MESSAGE void __fastcall WMLButtonDown(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall CMEnabledChanged(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Winapi::Messages::TMessage &Msg);
	
protected:
	virtual void __fastcall Paint();
	__property bool Hover = {read=FHover, write=FHover, nodefault};
	
public:
	DYNAMIC void __fastcall Click();
	__fastcall virtual TDropGridListButton(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TDropGridListButton();
	__property bool IsWinXP = {read=FIsWinXP, write=FIsWinXP, nodefault};
	
__published:
	__property Vcl::Controls::TWinControl* FocusControl = {read=FFocusControl, write=FFocusControl};
	__property System::Classes::TNotifyEvent MouseClick = {read=FMouseClick, write=FMouseClick};
};


typedef void __fastcall (__closure *TGridListItemToText)(System::TObject* sender, System::UnicodeString &aText);

typedef void __fastcall (__closure *TTextToGridListItem)(System::TObject* sender, System::UnicodeString &aItem);

typedef void __fastcall (__closure *TDrawGridCellProp)(System::TObject* Sender, int RowIndex, int ColIndex, Data::Db::TField* DBField, System::UnicodeString Value, Vcl::Graphics::TFont* AFont, System::Uitypes::TColor &AColor);

typedef void __fastcall (__closure *TGridSelectCellEvent)(System::TObject* Sender, int Col, int Row, System::UnicodeString Avalue, bool &CanSelect);

typedef void __fastcall (__closure *TGridClickCellEvent)(System::TObject* Sender, int Col, int Row);

enum DECLSPEC_DENUM TDropDirection : unsigned char { ddDown, ddUp };

enum DECLSPEC_DENUM TSortMethod : unsigned char { smText, smNumeric, smDate };

enum DECLSPEC_DENUM TLookupMethod : unsigned char { lmNormal, lmFast, lmRequired };

enum DECLSPEC_DENUM TLookupLoad : unsigned char { llAlways, llOnNeed };

enum DECLSPEC_DENUM TLookupSearch : unsigned char { isFirstChar, isAnyChar };

class PASCALIMPLEMENTATION TAdvDBLookupComboBox : public Vcl::Stdctrls::TCustomEdit
{
	typedef Vcl::Stdctrls::TCustomEdit inherited;
	
private:
	Advstyleif::TTMSStyle FTMSStyle;
	TDropGridListButton* FButton;
	bool FEditorEnabled;
	System::Classes::TNotifyEvent FOnClickBtn;
	TInplaceStringGrid* FStringGrid;
	int FDropHeight;
	int FDropWidth;
	int FSortColumns;
	TSortMethod FSortMethod;
	System::Uitypes::TColor FDropColor;
	Vcl::Graphics::TFont* FDropFont;
	bool FDropSorted;
	TDropDirection fDropDirection;
	TDropForm* FChkForm;
	bool FChkClosed;
	bool FCloseClick;
	TGridListItemToText FOnGridListItemToText;
	TTextToGridListItem FOnTextToGridListItem;
	TDBColumnCollection* FColumns;
	TDBGridDataLink* FListDataLink;
	TDBGridLookupDataLink* FDataSourceLink;
	System::Classes::TList* FAllfields;
	Vcl::Graphics::TBitmap* FBitmapUp;
	Vcl::Graphics::TBitmap* FBitmapdown;
	bool FDataScroll;
	int FItemIndex;
	int FOldItemIndex;
	int FOldItemIndex2;
	System::UnicodeString FKeyField;
	System::UnicodeString FDataField;
	System::Uitypes::TColor FHeaderColor;
	System::Uitypes::TColor FSelectionColor;
	System::UnicodeString FCurrentSearch;
	bool FAccept;
	TSortType FSensSorted;
	System::Uitypes::TColor FSelectionTextColor;
	bool FGridLines;
	bool FGridColumnSize;
	System::UnicodeString FFilterValue;
	System::UnicodeString FFilterField;
	System::DynamicArray<System::Byte> FBookmark;
	TLookupMethod FLookupMethod;
	bool FLabelAlwaysEnabled;
	bool FLabelTransparent;
	int FLabelMargin;
	Vcl::Graphics::TFont* FLabelFont;
	TLabelPosition FLabelPosition;
	TLabelEx* FLabel;
	TDropDownType FDropDownType;
	TLookupErrorEvent FOnLookupError;
	TLookupSuccessEvent FOnLookupSuccess;
	System::UnicodeString FLabelField;
	System::UnicodeString FSortColumn;
	int FLabelWidth;
	int FGridRowHeight;
	int FGridHeaderHeight;
	TLookupLoad FLookupLoad;
	bool FDisableChange;
	bool FInLookup;
	bool FDropSizeable;
	System::Classes::TNotifyEvent FOnDropDown;
	System::Classes::TNotifyEvent FOnCloseUp;
	System::Classes::TNotifyEvent FOnClosed;
	bool FReturnIsTab;
	System::Uitypes::TColor FFocusColor;
	System::Uitypes::TColor FNormalColor;
	Vcl::Controls::TImageList* FImages;
	bool FShowGridTitleRow;
	int FLookupColumn;
	bool FInternalCall;
	TDrawGridCellProp FOnDrawProp;
	int FDropStretchColumn;
	System::Uitypes::TColor FDisabledColor;
	bool FGridHeaderAutoSize;
	TGridSelectCellEvent FOnGridSelectCell;
	TGridSelectCellEvent FOnGridSelectedCell;
	bool FGridCellNotSelected;
	bool FAlwaysRefreshDropDownList;
	int FHoveredRow;
	System::Uitypes::TColor FHoverColor;
	System::Uitypes::TColor FHoverTextColor;
	bool FLookupInAllColumns;
	bool FSelectionChanged;
	bool FShowMemoFields;
	bool FModified;
	TLookupSearch FLookupSearch;
	System::Types::TPoint FClickCell;
	bool FLookupError;
	TGridClickCellEvent FOnGridClickFixedCell;
	TGridClickCellEvent FOnGridClickCell;
	bool FDataSetEnabled;
	bool FControlEnabled;
	System::Uitypes::TColor FBorderColor;
	bool FHasFocus;
	Advtooltip::TAdvToolTip* FToolTip;
	Advtooltip::TAdvToolTipWindow* FToolTipWindow;
	HIDESBASE MESSAGE void __fastcall CMVisibleChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMEnter(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall CMExit(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Message);
	MESSAGE void __fastcall WMPaste(Winapi::Messages::TWMNoParams &Message);
	MESSAGE void __fastcall WMCut(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall WMKeyDown(Winapi::Messages::TWMKey &Msg);
	HIDESBASE MESSAGE void __fastcall WMChar(Winapi::Messages::TWMKey &Msg);
	HIDESBASE MESSAGE void __fastcall WMSysKeyDown(Winapi::Messages::TWMKey &Msg);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Winapi::Messages::TWMSetFocus &Msg);
	HIDESBASE MESSAGE void __fastcall WMKillFocus(Winapi::Messages::TWMKillFocus &Msg);
	HIDESBASE MESSAGE void __fastcall WMPaint(Winapi::Messages::TWMPaint &Message);
	int __fastcall GetMinHeight();
	void __fastcall SetEditRect();
	void __fastcall OnGridResize(System::TObject* Sender);
	void __fastcall OnDropDownResize(System::TObject* Sender);
	System::UnicodeString __fastcall GridToString();
	void __fastcall ShowGridList(bool Focus);
	void __fastcall HideGridList();
	void __fastcall UpdateLookup();
	void __fastcall FormDeactivate(System::TObject* Sender);
	void __fastcall MouseClick(System::TObject* Sender);
	void __fastcall DownClick(System::TObject* Sender);
	void __fastcall SetDropFont(Vcl::Graphics::TFont* const Value);
	HIDESBASE System::UnicodeString __fastcall GetText();
	HIDESBASE void __fastcall SetText(const System::UnicodeString Value);
	void __fastcall SetInternalText(const System::UnicodeString Value);
	bool __fastcall CheckDataSet();
	bool __fastcall CheckEditDataSet();
	Data::Db::TDataSource* __fastcall GetListsource();
	void __fastcall SetListsource(Data::Db::TDataSource* const Value);
	int __fastcall GetItemIndex();
	void __fastcall SetItemIndex(int Value);
	Data::Db::TDataSource* __fastcall GetDatasource();
	void __fastcall SetDatasource(Data::Db::TDataSource* const Value);
	void __fastcall SetSortColumns(const int Value);
	int __fastcall GetRealItemIndex(int Index);
	void __fastcall SetFilterField(const System::UnicodeString Value);
	void __fastcall SetFilterValue(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetLabelCaption();
	void __fastcall SetLabelAlwaysEnabled(const bool Value);
	void __fastcall SetLabelCaption(const System::UnicodeString Value);
	void __fastcall SetLabelFont(Vcl::Graphics::TFont* const Value);
	void __fastcall SetLabelMargin(const int Value);
	void __fastcall SetLabelPosition(const TLabelPosition Value);
	void __fastcall SetLabelTransparent(const bool Value);
	void __fastcall UpdateLabel();
	void __fastcall LabelFontChange(System::TObject* Sender);
	void __fastcall SetLabelField(const System::UnicodeString Value);
	void __fastcall SetSortColumn(const System::UnicodeString Value);
	void __fastcall SetLabelWidth(const int Value);
	void __fastcall SetSortDownGlyph(Vcl::Graphics::TBitmap* const Value);
	void __fastcall SetSortUpGlyph(Vcl::Graphics::TBitmap* const Value);
	void __fastcall SetLookupLoad(const TLookupLoad Value);
	System::UnicodeString __fastcall GetVersion();
	void __fastcall SetVersion(const System::UnicodeString Value);
	bool __fastcall GetEnabledEx();
	void __fastcall SetEnabledEx(const bool Value);
	void __fastcall SetDisabledColor(const System::Uitypes::TColor Value);
	void __fastcall SetLookupColumn(const int Value);
	System::Variant __fastcall SecureLookup(Data::Db::TDataSet* const Data, Data::Db::TField* const Field, const System::UnicodeString KeyFields, const System::Variant &KeyValues, const System::Variant &KeyValuesDefault, const System::UnicodeString ResultFields);
	int __fastcall GetDropDownRowCount();
	void __fastcall DestroyBookMark();
	void __fastcall SetShowMemoFields(const bool Value);
	HIDESBASE bool __fastcall GetModified();
	HIDESBASE void __fastcall SetModified(const bool Value);
	System::Variant __fastcall GetKeyValue();
	void __fastcall SetDatasetEnabled(const bool Value);
	void __fastcall DrawBorders();
	void __fastcall DrawControlBorder(HDC DC);
	void __fastcall SetBorderColor(const System::Uitypes::TColor Value);
	void __fastcall SetKeyField(const System::UnicodeString Value);
	void __fastcall SetUIStyle(const Advstyleif::TTMSStyle Value);
	
protected:
	virtual void __fastcall SetComponentStyle(Advstyleif::TTMSStyle AStyle);
	virtual int __fastcall GetVersionNr();
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall CreateWnd();
	virtual void __fastcall DestroyWnd();
	virtual Vcl::Forms::TCustomForm* __fastcall GetParentForm(Vcl::Controls::TControl* Control);
	void __fastcall LoadGridOptions();
	void __fastcall StringGridDrawCell(System::TObject* Sender, int ACol, int ARow, const System::Types::TRect &Rect, Vcl::Grids::TGridDrawState State);
	void __fastcall GridMouseDown(System::TObject* Sender, System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall GridMouseMove(System::TObject* Sender, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall StringGridKeyPress(System::TObject* Sender, System::WideChar &Key);
	void __fastcall StringGridSelectCell(System::TObject* Sender, int ACol, int ARow, bool &CanSelect);
	void __fastcall StringGridMouseDown(System::TObject* Sender, System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall StringGridMouseUp(System::TObject* Sender, System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	int __fastcall LoadFromListSource();
	void __fastcall SetActive(bool Active);
	DYNAMIC void __fastcall Change();
	DYNAMIC void __fastcall DoEnter();
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	bool __fastcall FindField(System::UnicodeString Value);
	TLabelEx* __fastcall CreateLabel();
	void __fastcall UpdateText(System::UnicodeString s);
	__property int SortColumns = {read=FSortColumns, write=SetSortColumns, default=0};
	void __fastcall SetSortMethod();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation AOperation);
	int __fastcall GetGridColumnsWidth();
	void __fastcall UpdateDropStretchColumnWidth();
	Data::Db::TField* __fastcall GetColumnField(int ACol);
	void __fastcall CancelChanges();
	virtual bool __fastcall CanModify();
	Data::Db::TField* __fastcall GetLookupDataField();
	void __fastcall UpdateDisplayText();
	virtual void __fastcall DoChange();
	virtual void __fastcall DoCloseUp();
	virtual void __fastcall DoClosed();
	virtual void __fastcall DoClickCell(System::TObject* Sender, int ACol, int ARow);
	virtual void __fastcall DoClickFixedCell(System::TObject* Sender, int ACol, int ARow);
	DYNAMIC void __fastcall ChangeScale(int M, int D, bool isDpiChange)/* overload */;
	__property bool DataSetEnabled = {read=FDataSetEnabled, write=SetDatasetEnabled, nodefault};
	
public:
	__fastcall virtual TAdvDBLookupComboBox(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TAdvDBLookupComboBox();
	virtual void __fastcall Loaded();
	virtual void __fastcall Init();
	__property TDropGridListButton* Button = {read=FButton};
	__property System::UnicodeString Text = {read=GetText, write=SetText};
	__property int ItemIndex = {read=GetItemIndex, write=SetItemIndex, nodefault};
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	void __fastcall DropDown();
	void __fastcall RefreshDropDownList();
	void __fastcall UpdateDisplText();
	void __fastcall ShowValidation(const System::UnicodeString AText);
	void __fastcall HideValidation();
	__property bool AlwaysRefreshDropDownList = {read=FAlwaysRefreshDropDownList, write=FAlwaysRefreshDropDownList, default=0};
	__property int DropDownRowCount = {read=GetDropDownRowCount, nodefault};
	__property bool Modified = {read=GetModified, write=SetModified, nodefault};
	__property System::Variant KeyValue = {read=GetKeyValue};
	
__published:
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property Constraints;
	__property DragKind = {default=0};
	__property AutoSelect = {default=1};
	__property AutoSize = {default=1};
	__property BevelInner = {index=0, default=2};
	__property BevelKind = {default=0};
	__property BevelOuter = {index=1, default=1};
	__property BevelEdges = {default=15};
	__property BorderStyle = {default=1};
	__property Color = {default=-16777211};
	__property Ctl3D;
	__property System::Uitypes::TColor DisabledColor = {read=FDisabledColor, write=SetDisabledColor, default=12632256};
	__property DragCursor = {default=-12};
	__property DragMode = {default=0};
	__property TDropDownType DropDownType = {read=FDropDownType, write=FDropDownType, default=0};
	__property bool EditorEnabled = {read=FEditorEnabled, write=FEditorEnabled, default=1};
	__property bool Enabled = {read=GetEnabledEx, write=SetEnabledEx, nodefault};
	__property System::UnicodeString FilterField = {read=FFilterField, write=SetFilterField};
	__property System::UnicodeString FilterValue = {read=FFilterValue, write=SetFilterValue};
	__property Font;
	__property System::UnicodeString LabelCaption = {read=GetLabelCaption, write=SetLabelCaption};
	__property TLabelPosition LabelPosition = {read=FLabelPosition, write=SetLabelPosition, nodefault};
	__property int LabelMargin = {read=FLabelMargin, write=SetLabelMargin, nodefault};
	__property bool LabelTransparent = {read=FLabelTransparent, write=SetLabelTransparent, nodefault};
	__property bool LabelAlwaysEnabled = {read=FLabelAlwaysEnabled, write=SetLabelAlwaysEnabled, nodefault};
	__property System::UnicodeString LabelField = {read=FLabelField, write=SetLabelField};
	__property Vcl::Graphics::TFont* LabelFont = {read=FLabelFont, write=SetLabelFont};
	__property int LabelWidth = {read=FLabelWidth, write=SetLabelWidth, nodefault};
	__property int LookupColumn = {read=FLookupColumn, write=SetLookupColumn, nodefault};
	__property TLookupMethod LookupMethod = {read=FLookupMethod, write=FLookupMethod, default=0};
	__property TLookupLoad LookupLoad = {read=FLookupLoad, write=SetLookupLoad, nodefault};
	__property TLookupSearch LookupSearch = {read=FLookupSearch, write=FLookupSearch, default=0};
	__property bool LookupInAllColumns = {read=FLookupInAllColumns, write=FLookupInAllColumns, default=0};
	__property MaxLength = {default=0};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Visible = {default=1};
	__property Advstyleif::TTMSStyle UIStyle = {read=FTMSStyle, write=SetUIStyle, default=8};
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
	__property OnStartDrag;
	__property OnEndDock;
	__property OnStartDock;
	__property TDBColumnCollection* Columns = {read=FColumns, write=FColumns};
	__property System::UnicodeString DataField = {read=FDataField, write=FDataField};
	__property Data::Db::TDataSource* DataSource = {read=GetDatasource, write=SetDatasource};
	__property int DropWidth = {read=FDropWidth, write=FDropWidth, nodefault};
	__property int DropStretchColumn = {read=FDropStretchColumn, write=FDropStretchColumn, nodefault};
	__property int DropHeight = {read=FDropHeight, write=FDropHeight, default=100};
	__property System::Uitypes::TColor DropColor = {read=FDropColor, write=FDropColor, default=-16777211};
	__property Vcl::Graphics::TFont* DropFont = {read=FDropFont, write=SetDropFont};
	__property TDropDirection DropDirection = {read=fDropDirection, write=fDropDirection, default=0};
	__property bool DropSorted = {read=FDropSorted, write=FDropSorted, default=0};
	__property bool DropSizeable = {read=FDropSizeable, write=FDropSizeable, default=0};
	__property System::Uitypes::TColor FocusColor = {read=FFocusColor, write=FFocusColor, default=536870911};
	__property bool GridLines = {read=FGridLines, write=FGridLines, default=1};
	__property bool GridColumnSize = {read=FGridColumnSize, write=FGridColumnSize, default=1};
	__property int GridRowHeight = {read=FGridRowHeight, write=FGridRowHeight, default=21};
	__property bool GridHeaderAutoSize = {read=FGridHeaderAutoSize, write=FGridHeaderAutoSize, default=0};
	__property int GridHeaderHeight = {read=FGridHeaderHeight, write=FGridHeaderHeight, default=21};
	__property System::Uitypes::TColor HeaderColor = {read=FHeaderColor, write=FHeaderColor, default=-16777201};
	__property System::Uitypes::TColor HoverColor = {read=FHoverColor, write=FHoverColor, default=-16777203};
	__property System::Uitypes::TColor HoverTextColor = {read=FHoverTextColor, write=FHoverTextColor, default=-16777202};
	__property Vcl::Controls::TImageList* Images = {read=FImages, write=FImages};
	__property System::UnicodeString KeyField = {read=FKeyField, write=SetKeyField};
	__property Data::Db::TDataSource* ListSource = {read=GetListsource, write=SetListsource};
	__property bool ReturnIsTab = {read=FReturnIsTab, write=FReturnIsTab, default=0};
	__property System::Uitypes::TColor SelectionColor = {read=FSelectionColor, write=FSelectionColor, default=-16777203};
	__property System::Uitypes::TColor SelectionTextColor = {read=FSelectionTextColor, write=FSelectionTextColor, default=-16777202};
	__property bool ShowMemoFields = {read=FShowMemoFields, write=SetShowMemoFields, default=0};
	__property System::UnicodeString SortColumn = {read=FSortColumn, write=SetSortColumn};
	__property Vcl::Graphics::TBitmap* SortUpGlyph = {read=FBitmapdown, write=SetSortUpGlyph};
	__property Vcl::Graphics::TBitmap* SortDownGlyph = {read=FBitmapUp, write=SetSortDownGlyph};
	__property bool ShowGridTitleRow = {read=FShowGridTitleRow, write=FShowGridTitleRow, nodefault};
	__property StyleElements = {default=7};
	__property Advtooltip::TAdvToolTip* ToolTip = {read=FToolTip, write=FToolTip};
	__property System::Classes::TNotifyEvent OnClickBtn = {read=FOnClickBtn, write=FOnClickBtn};
	__property System::Classes::TNotifyEvent OnCloseUp = {read=FOnCloseUp, write=FOnCloseUp};
	__property System::Classes::TNotifyEvent OnClosed = {read=FOnClosed, write=FOnClosed};
	__property System::Classes::TNotifyEvent OnDropDown = {read=FOnDropDown, write=FOnDropDown};
	__property TGridSelectCellEvent OnGridSelectCell = {read=FOnGridSelectCell, write=FOnGridSelectCell};
	__property TGridSelectCellEvent OnGridSelectedCell = {read=FOnGridSelectedCell, write=FOnGridSelectedCell};
	__property TGridClickCellEvent OnGridClickCell = {read=FOnGridClickCell, write=FOnGridClickCell};
	__property TGridClickCellEvent OnGridClickFixedCell = {read=FOnGridClickFixedCell, write=FOnGridClickFixedCell};
	__property TTextToGridListItem OnTextToGridListItem = {read=FOnTextToGridListItem, write=FOnTextToGridListItem};
	__property TGridListItemToText OnGridListItemToText = {read=FOnGridListItemToText, write=FOnGridListItemToText};
	__property TLookupErrorEvent OnLookupError = {read=FOnLookupError, write=FOnLookupError};
	__property TLookupSuccessEvent OnLookupSuccess = {read=FOnLookupSuccess, write=FOnLookupSuccess};
	__property System::UnicodeString Version = {read=GetVersion, write=SetVersion};
	__property TDrawGridCellProp OnDrawProp = {read=FOnDrawProp, write=FOnDrawProp};
	__property System::Uitypes::TColor BorderColor = {read=FBorderColor, write=SetBorderColor, default=536870911};
public:
	/* TWinControl.CreateParented */ inline __fastcall TAdvDBLookupComboBox(HWND ParentWindow) : Vcl::Stdctrls::TCustomEdit(ParentWindow) { }
	
	/* Hoisted overloads: */
	
protected:
	DYNAMIC inline void __fastcall  ChangeScale(int M, int D){ Vcl::Controls::TControl::ChangeScale(M, D); }
	
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


//-- var, const, procedure ---------------------------------------------------
static const System::Int8 MAJ_VER = System::Int8(0x2);
static const System::Int8 MIN_VER = System::Int8(0x0);
static const System::Int8 REL_VER = System::Int8(0x0);
static const System::Int8 BLD_VER = System::Int8(0x3);
}	/* namespace Advdblookupcombobox */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ADVDBLOOKUPCOMBOBOX)
using namespace Advdblookupcombobox;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AdvdblookupcomboboxHPP
