// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'BaseGrid.pas' rev: 35.00 (Windows)

#ifndef BasegridHPP
#define BasegridHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <System.SysUtils.hpp>
#include <System.Types.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Grids.hpp>
#include <AdvObj.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Basegrid
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TCellProperties;
class DELPHICLASS TUndoRedoItem;
class DELPHICLASS TUndoRedoCollection;
class DELPHICLASS TAdvGridUndoRedo;
struct TCustomCellProps;
class DELPHICLASS TBaseGrid;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TColumnCalcType : unsigned char { acNONE, acSUM, acAVG, acCOUNT, acMIN, acMAX, acSPREAD, acCUSTOM, acDISTINCT, acSTDDEV };

typedef NativeUInt TIObjType;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCellProperties : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	TBaseGrid* FOwnerGrid;
	int FOwnerCol;
	int FOwnerRow;
	NativeUInt FObject;
	System::TObject* FGraphicObject;
	Vcl::Graphics::TBrushStyle FBrushStyle;
	System::Uitypes::TColor FBrushColor;
	System::Uitypes::TColor FBrushColorTo;
	int FFontHeight;
	System::Uitypes::TColor FFontColor;
	System::Uitypes::TFontStyles FFontStyle;
	int FCellSpanY;
	int FCellSpanX;
	int FBorderWidth;
	System::Uitypes::TColor FBorderColor;
	System::Classes::TAlignment FAlignment;
	Advobj::TVAlignment FVAlignment;
	int FPaintID;
	bool FWordWrap;
	bool FIsBaseCell;
	TColumnCalcType FCalcType;
	System::TObject* FCalcObject;
	int FNodeLevel;
	Advobj::TEditorType FEditor;
	System::UnicodeString FFontName;
	bool FReadOnly;
	Advobj::TCellGradientDirection FGradientDirection;
	Vcl::Controls::TControl* FControl;
	bool FMergeCollaps;
	void __fastcall SetBrushColor(const System::Uitypes::TColor Value);
	void __fastcall SetAlignment(const System::Classes::TAlignment Value);
	void __fastcall SetVAlignment(const Advobj::TVAlignment Value);
	void __fastcall SetWordWrap(const bool Value);
	System::Types::TPoint __fastcall GetBaseCell(int c, int r);
	void __fastcall SetBrushColorTo(const System::Uitypes::TColor Value);
	int __fastcall GetCellSpanY();
	
protected:
	__property System::Types::TPoint BaseCell[int c][int r] = {read=GetBaseCell};
	__property int PaintID = {read=FPaintID, write=FPaintID, nodefault};
	__property System::TObject* GraphicObject = {read=FGraphicObject, write=FGraphicObject};
	
public:
	__property TColumnCalcType CalcType = {read=FCalcType, write=FCalcType, nodefault};
	__property System::TObject* CalcObject = {read=FCalcObject, write=FCalcObject};
	__fastcall TCellProperties(TBaseGrid* AOwner, int ACol, int ARow);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property bool MergeCollaps = {read=FMergeCollaps, write=FMergeCollaps, nodefault};
	
__published:
	__property bool IsBaseCell = {read=FIsBaseCell, write=FIsBaseCell, nodefault};
	__property int CellSpanX = {read=FCellSpanX, write=FCellSpanX, nodefault};
	__property int CellSpanY = {read=GetCellSpanY, write=FCellSpanY, nodefault};
	__property int OwnerCol = {read=FOwnerCol, write=FOwnerCol, stored=false, nodefault};
	__property int OwnerRow = {read=FOwnerRow, write=FOwnerRow, stored=false, nodefault};
	__property System::Classes::TAlignment Alignment = {read=FAlignment, write=SetAlignment, nodefault};
	__property System::Uitypes::TColor BorderColor = {read=FBorderColor, write=FBorderColor, nodefault};
	__property int BorderWidth = {read=FBorderWidth, write=FBorderWidth, nodefault};
	__property System::Uitypes::TColor BrushColor = {read=FBrushColor, write=SetBrushColor, nodefault};
	__property System::Uitypes::TColor BrushColorTo = {read=FBrushColorTo, write=SetBrushColorTo, nodefault};
	__property Vcl::Graphics::TBrushStyle BrushStyle = {read=FBrushStyle, write=FBrushStyle, nodefault};
	__property NativeUInt CellObject = {read=FObject, write=FObject, nodefault};
	__property System::Uitypes::TColor FontColor = {read=FFontColor, write=FFontColor, nodefault};
	__property System::UnicodeString FontName = {read=FFontName, write=FFontName};
	__property int FontSize = {read=FFontHeight, write=FFontHeight, nodefault};
	__property System::Uitypes::TFontStyles FontStyle = {read=FFontStyle, write=FFontStyle, nodefault};
	__property Advobj::TEditorType Editor = {read=FEditor, write=FEditor, nodefault};
	__property Advobj::TCellGradientDirection GradientDirection = {read=FGradientDirection, write=FGradientDirection, nodefault};
	__property bool ReadOnly = {read=FReadOnly, write=FReadOnly, nodefault};
	__property Advobj::TVAlignment VAlignment = {read=FVAlignment, write=SetVAlignment, nodefault};
	__property bool WordWrap = {read=FWordWrap, write=SetWordWrap, nodefault};
	__property int NodeLevel = {read=FNodeLevel, write=FNodeLevel, nodefault};
	__property Vcl::Controls::TControl* Control = {read=FControl, write=FControl};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TCellProperties() { }
	
};

#pragma pack(pop)

typedef void __fastcall (__closure *TGetDisplWideTextEvent)(System::TObject* Sender, int ACol, int ARow, System::WideString &Value);

#pragma pack(push,4)
class PASCALIMPLEMENTATION TUndoRedoItem : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	int FRow;
	int FCol;
	System::UnicodeString FValue;
	System::UnicodeString FOrigValue;
	bool FSequenceStart;
	bool FSequenceStop;
	
__published:
	__property System::UnicodeString Value = {read=FValue, write=FValue};
	__property System::UnicodeString OrigValue = {read=FOrigValue, write=FOrigValue};
	__property int Col = {read=FCol, write=FCol, nodefault};
	__property int Row = {read=FRow, write=FRow, nodefault};
	__property bool SequenceStart = {read=FSequenceStart, write=FSequenceStart, nodefault};
	__property bool SequenceStop = {read=FSequenceStop, write=FSequenceStop, nodefault};
public:
	/* TCollectionItem.Create */ inline __fastcall virtual TUndoRedoItem(System::Classes::TCollection* Collection) : System::Classes::TCollectionItem(Collection) { }
	/* TCollectionItem.Destroy */ inline __fastcall virtual ~TUndoRedoItem() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TUndoRedoCollection : public System::Classes::TCollection
{
	typedef System::Classes::TCollection inherited;
	
public:
	__fastcall TUndoRedoCollection();
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TUndoRedoCollection() { }
	
};

#pragma pack(pop)

typedef void __fastcall (__closure *TAdvGridUndoRedoEvent)(System::TObject* Sender, TBaseGrid* Grid, int Col, int Row, System::UnicodeString OrigValue, System::UnicodeString NewValue);

class PASCALIMPLEMENTATION TAdvGridUndoRedo : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	TUndoRedoCollection* FItems;
	TBaseGrid* FGrid;
	int FLevel;
	int FMaxLevel;
	TAdvGridUndoRedoEvent FOnUndo;
	TAdvGridUndoRedoEvent FOnRedo;
	
protected:
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation AOperation);
	
public:
	__fastcall virtual TAdvGridUndoRedo(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TAdvGridUndoRedo();
	virtual void __fastcall RegisterChange(int ACol, int ARow, System::UnicodeString OldValue, System::UnicodeString NewValue);
	virtual void __fastcall StartSequence();
	virtual void __fastcall StopSequence();
	__property int Level = {read=FLevel, write=FLevel, nodefault};
	__property TUndoRedoCollection* Items = {read=FItems, write=FItems};
	__property TBaseGrid* Grid = {read=FGrid, write=FGrid};
	void __fastcall Undo();
	void __fastcall Redo();
	void __fastcall Reset();
	bool __fastcall CanUndo();
	bool __fastcall CanRedo();
	
__published:
	__property int MaxLevel = {read=FMaxLevel, write=FMaxLevel, nodefault};
	__property TAdvGridUndoRedoEvent OnUndo = {read=FOnUndo, write=FOnUndo};
	__property TAdvGridUndoRedoEvent OnRedo = {read=FOnRedo, write=FOnRedo};
};


enum DECLSPEC_DENUM TGridSelectionStyle : unsigned char { ssDefault, ssVista, ssWin7, ssOffice2007 };

enum DECLSPEC_DENUM THoverRowCell : unsigned char { hcNormal, hcFixed, hcSelected, hcGroupHeader, hcGroupSummary };

typedef System::Set<THoverRowCell, THoverRowCell::hcNormal, THoverRowCell::hcGroupSummary> THoverRowCells;

struct DECLSPEC_DRECORD TCustomCellProps
{
public:
	Vcl::Grids::TGridDrawState AState;
	bool Print;
	bool Select;
	bool Remap;
	Vcl::Graphics::TBrush* ABrush;
	System::Uitypes::TColor AColorTo;
	System::Uitypes::TColor AMirrorColor;
	System::Uitypes::TColor AMirrorColorTo;
	Vcl::Graphics::TFont* AFont;
	System::Classes::TAlignment HA;
	Advobj::TVAlignment VA;
	bool WW;
	Advobj::TCellGradientDirection GD;
};


class PASCALIMPLEMENTATION TBaseGrid : public Advobj::TObjStringGrid
{
	typedef Advobj::TObjStringGrid inherited;
	
private:
	bool FDefaultDrawing;
	int FGridLineWidth;
	System::Uitypes::TColor FGridLineColor;
	System::Uitypes::TColor FGridFixedLineColor;
	int FGridFixedLineWidth;
	int FPaintID;
	bool FCustomSelect;
	Advobj::TGetDisplTextEvent FOnGetDisplText;
	TGetDisplWideTextEvent FOnGetDisplWideText;
	bool FHideLastRow;
	int FNormalRowCount;
	TAdvGridUndoRedo* FUndoRedo;
	bool FWordWrap;
	bool FActiveRowShow;
	System::Uitypes::TColor FActiveRowColor;
	System::Uitypes::TColor FActiveRowColorTo;
	System::Uitypes::TColor FActiveRowMirrorColor;
	System::Uitypes::TColor FActiveRowMirrorColorTo;
	TGridSelectionStyle FSelectionStyle;
	Vcl::Graphics::TFont* FDefFont;
	Vcl::Graphics::TBrush* FDefBrush;
	bool __fastcall GetDefaultDrawing();
	void __fastcall SetDefaultDrawing(const bool Value);
	int __fastcall GetGridLineWidth();
	HIDESBASE void __fastcall SetGridLineWidth(const int Value);
	void __fastcall SetGridLineColor(const System::Uitypes::TColor Value);
	void __fastcall SetGridFixedLineColor(const System::Uitypes::TColor Value);
	void __fastcall SetObjectEx(int c, int r, System::TObject* const Value);
	System::TObject* __fastcall GetObjectEx(int c, int r);
	System::UnicodeString __fastcall GetCellEx(int c, int r);
	void __fastcall SetCellEx(int c, int r, const System::UnicodeString Value);
	System::TObject* __fastcall GetGraphicObjectEx(int c, int r);
	void __fastcall SetGraphicObjectEx(int c, int r, System::TObject* const Value);
	void __fastcall RepaintFixedMergedCols();
	void __fastcall RepaintFixedMergedRows();
	System::TObject* __fastcall GetGridObject(int c, int r);
	void __fastcall SetGridObject(int c, int r, System::TObject* const Value);
	System::UnicodeString __fastcall GetGridCell(int c, int r);
	void __fastcall SetGridCell(int c, int r, const System::UnicodeString Value);
	void __fastcall SetUndoRedo(TAdvGridUndoRedo* const Value);
	void __fastcall SetActiveRowColor(const System::Uitypes::TColor Value);
	void __fastcall SetActiveRowColorTo(const System::Uitypes::TColor Value);
	void __fastcall SetActiveRowMirrorColor(const System::Uitypes::TColor Value);
	void __fastcall SetActiveRowMirrorColorTo(const System::Uitypes::TColor Value);
	void __fastcall SetSelectionStyle(const TGridSelectionStyle Value);
	void __fastcall SetActiveRowShow(const bool Value);
	void __fastcall SetGridFixedLineWidth(const int Value);
	
protected:
	int FHoverRowIdx;
	bool FHoverRow;
	THoverRowCells FHoverRowCells;
	System::Uitypes::TColor FHoverRowColor;
	System::Uitypes::TColor FHoverRowColorTo;
	bool FShowSel;
	bool FHasCellProps;
	int FMergeCount;
	bool FEditCellSet;
	virtual float __fastcall ControlDPIScale();
	System::TObject* __fastcall GetCPGraphicObject(TCellProperties* cp);
	void __fastcall CopyRows(int ARow1, int ARow2);
	void __fastcall CopyCols(int ACol1, int ACol2);
	void __fastcall NilRow(int ARow);
	void __fastcall NilCol(int ACol);
	void __fastcall NilCell(int ACol, int ARow);
	void __fastcall SelectBaseCell();
	virtual bool __fastcall IsFixed(int ACol, int ARow);
	bool __fastcall IsSelected(int ACol, int ARow);
	virtual int __fastcall NodeIndent(int ARow);
	virtual bool __fastcall HasNodes();
	virtual bool __fastcall IsNode(int ARow) = 0 ;
	virtual bool __fastcall IsSummary(int ARow) = 0 ;
	int __fastcall FixedColsWidth();
	int __fastcall FixedRowsHeight();
	DYNAMIC void __fastcall TopLeftChanged();
	virtual void __fastcall DrawCell(int ACol, int ARow, const System::Types::TRect &ARect, Vcl::Grids::TGridDrawState AState);
	virtual void __fastcall DrawGridCell(Vcl::Graphics::TCanvas* Canvas, int ACol, int ARow, const System::Types::TRect &ARect, Vcl::Grids::TGridDrawState AState);
	bool __fastcall HasCellProperties(int ACol, int ARow);
	void __fastcall ClearProps();
	void __fastcall ClearPropCell(int ACol, int ARow);
	void __fastcall ClearPropRow(int ARow);
	void __fastcall ClearPropRect(int ACol1, int ARow1, int ACol2, int ARow2);
	virtual bool __fastcall SelectCell(int ACol, int ARow);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC bool __fastcall DoMouseWheelDown(System::Classes::TShiftState Shift, const System::Types::TPoint &MousePos);
	DYNAMIC bool __fastcall DoMouseWheelUp(System::Classes::TShiftState Shift, const System::Types::TPoint &MousePos);
	virtual void __fastcall Paint();
	virtual void __fastcall FloatFooterUpdate();
	DYNAMIC void __fastcall SetEditText(int ACol, int ARow, const System::UnicodeString Value);
	DYNAMIC System::UnicodeString __fastcall GetEditText(int ACol, int ARow);
	bool __fastcall IsBaseCellEx(int ACol, int ARow, int &MCol, int &MRow);
	System::Types::TRect __fastcall GetCellRect(int c, int r);
	virtual bool __fastcall IsCheckCell(int c, int r) = 0 ;
	virtual void __fastcall SetAsCheck(int c, int r, const System::UnicodeString v) = 0 ;
	__property int PaintID = {read=FPaintID, nodefault};
	__property bool CustomSelect = {read=FCustomSelect, write=FCustomSelect, nodefault};
	__property bool HideLastRow = {read=FHideLastRow, write=FHideLastRow, nodefault};
	__property int NormalRowCount = {read=FNormalRowCount, write=FNormalRowCount, nodefault};
	__property System::TObject* GridObjects[int c][int r] = {read=GetGridObject, write=SetGridObject};
	__property bool EditCellSet = {read=FEditCellSet, nodefault};
	virtual void __fastcall GetDisplText(int c, int r, System::UnicodeString &Value);
	virtual void __fastcall GetDisplWideText(int c, int r, System::WideString &Value);
	virtual void __fastcall GetDefaultProps(int ACol, int ARow, Vcl::Graphics::TFont* AFont, Vcl::Graphics::TBrush* ABrush, System::Uitypes::TColor &AColorTo, System::Uitypes::TColor &AMirrorColor, System::Uitypes::TColor &AMirrorColorTo, System::Classes::TAlignment &HA, Advobj::TVAlignment &VA, bool &WW, Advobj::TCellGradientDirection &GD);
	virtual System::Classes::TAlignment __fastcall GetDefaultAlignment();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation AOperation);
	DYNAMIC void __fastcall ChangeScale(int M, int D)/* overload */;
	virtual void __fastcall CellTextChange(int ACol, int ARow);
	virtual bool __fastcall HasCustomCellBorder();
	void __fastcall PaintCellInt(Vcl::Graphics::TCanvas* ACanvas, int ACol, int ARow, const System::Types::TRect &ARect, Vcl::Grids::TGridDrawState AState, bool Internal = true);
	virtual bool __fastcall UseVCLStyles();
	TCellProperties* __fastcall CreateCellProperties(int Col, int Row);
	
public:
	__fastcall virtual TBaseGrid(System::Classes::TComponent* aOwner);
	__fastcall virtual ~TBaseGrid();
	void __fastcall PaintCell(Vcl::Graphics::TCanvas* ACanvas, int ACol, int ARow, const System::Types::TRect &ARect, Vcl::Grids::TGridDrawState AState);
	void __fastcall PaintCellExt(Vcl::Graphics::TCanvas* ACanvas, int ACol, int ARow, const System::Types::TRect &ARect, Vcl::Grids::TGridDrawState AState);
	TCellProperties* __fastcall GetCellProperties(int c, int r);
	void __fastcall SetCellProperties(int c, int r, TCellProperties* const Value);
	__property TCellProperties* CellProperties[int c][int r] = {read=GetCellProperties, write=SetCellProperties};
	__property TGridSelectionStyle SelectionStyle = {read=FSelectionStyle, write=SetSelectionStyle, nodefault};
	virtual void __fastcall GetVisualProperties(int ACol, int ARow, Vcl::Grids::TGridDrawState &AState, bool Print, bool Select, bool Remap, Vcl::Graphics::TBrush* ABrush, System::Uitypes::TColor &AColorTo, System::Uitypes::TColor &AMirrorColor, System::Uitypes::TColor &AMirrorColorTo, Vcl::Graphics::TFont* AFont, System::Classes::TAlignment &HA, Advobj::TVAlignment &VA, bool &WW, Advobj::TCellGradientDirection &GD);
	HIDESBASE System::Types::TRect __fastcall CellRect(int c, int r);
	System::Types::TPoint __fastcall CellSize(int c, int r);
	virtual int __fastcall RealColIndex(int ACol);
	virtual int __fastcall DisplColIndex(int ACol);
	bool __fastcall IsBaseCell(int ACol, int ARow);
	bool __fastcall IsMergedCell(int ACol, int ARow);
	bool __fastcall IsMergedNonBaseCell(int ACol, int ARow);
	bool __fastcall IsXMergedCell(int ACol, int ARow);
	bool __fastcall IsYMergedCell(int ACol, int ARow);
	System::Types::TPoint __fastcall BaseCell(int ACol, int ARow);
	System::Types::TRect __fastcall FullCell(int c, int r);
	System::Types::TPoint __fastcall CellSpan(int ACol, int ARow);
	System::Types::TPoint __fastcall CellExt(int ACol, int ARow);
	int __fastcall MinRowSpan(int ARow);
	int __fastcall MaxRowSpan(int ARow);
	bool __fastcall RowSpanIdentical(int ARow1, int ARow2);
	bool __fastcall ColSpanIdentical(int ACol1, int ACol2);
	virtual void __fastcall MergeCells(int c, int r, int spanx, int spany);
	virtual void __fastcall SplitCells(int c, int r);
	void __fastcall RepaintCell(int c, int r);
	virtual int __fastcall TotalColCount();
	__property System::Uitypes::TColor ActiveRowColorTo = {read=FActiveRowColorTo, write=SetActiveRowColorTo, default=536870911};
	__property System::Uitypes::TColor ActiveRowMirrorColor = {read=FActiveRowMirrorColor, write=SetActiveRowMirrorColor, default=536870911};
	__property System::Uitypes::TColor ActiveRowMirrorColorTo = {read=FActiveRowMirrorColorTo, write=SetActiveRowMirrorColorTo, default=536870911};
	__property System::TObject* Objects[int c][int r] = {read=GetObjectEx, write=SetObjectEx};
	__property System::TObject* GraphicObjects[int c][int r] = {read=GetGraphicObjectEx, write=SetGraphicObjectEx};
	__property System::UnicodeString Cells[int c][int r] = {read=GetCellEx, write=SetCellEx};
	__property System::UnicodeString GridCells[int c][int r] = {read=GetGridCell, write=SetGridCell};
	__property bool WordWrap = {read=FWordWrap, write=FWordWrap, nodefault};
	
__published:
	__property bool ActiveRowShow = {read=FActiveRowShow, write=SetActiveRowShow, default=0};
	__property System::Uitypes::TColor ActiveRowColor = {read=FActiveRowColor, write=SetActiveRowColor, default=-16777192};
	__property bool DefaultDrawing = {read=GetDefaultDrawing, write=SetDefaultDrawing, default=0};
	__property int GridLineWidth = {read=GetGridLineWidth, write=SetGridLineWidth, default=1};
	__property System::Uitypes::TColor GridLineColor = {read=FGridLineColor, write=SetGridLineColor, default=12632256};
	__property System::Uitypes::TColor GridFixedLineColor = {read=FGridFixedLineColor, write=SetGridFixedLineColor, default=8421504};
	__property int GridFixedLineWidth = {read=FGridFixedLineWidth, write=SetGridFixedLineWidth, default=1};
	__property bool HoverRow = {read=FHoverRow, write=FHoverRow, default=0};
	__property System::Uitypes::TColor HoverRowColor = {read=FHoverRowColor, write=FHoverRowColor, default=-16777192};
	__property System::Uitypes::TColor HoverRowColorTo = {read=FHoverRowColorTo, write=FHoverRowColorTo, default=536870911};
	__property THoverRowCells HoverRowCells = {read=FHoverRowCells, write=FHoverRowCells, default=5};
	__property Advobj::TGetDisplTextEvent OnGetDisplText = {read=FOnGetDisplText, write=FOnGetDisplText};
	__property TGetDisplWideTextEvent OnGetDisplWideText = {read=FOnGetDisplWideText, write=FOnGetDisplWideText};
	__property TAdvGridUndoRedo* UndoRedo = {read=FUndoRedo, write=SetUndoRedo};
public:
	/* TWinControl.CreateParented */ inline __fastcall TBaseGrid(HWND ParentWindow) : Advobj::TObjStringGrid(ParentWindow) { }
	
	/* Hoisted overloads: */
	
protected:
	DYNAMIC inline void __fastcall  ChangeScale(int M, int D, bool isDpiChange){ Vcl::Grids::TCustomGrid::ChangeScale(M, D, isDpiChange); }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Basegrid */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_BASEGRID)
using namespace Basegrid;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// BasegridHPP
