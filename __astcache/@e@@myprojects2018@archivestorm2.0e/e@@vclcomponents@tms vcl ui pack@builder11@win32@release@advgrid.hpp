// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AdvGrid.pas' rev: 35.00 (Windows)

#ifndef AdvgridHPP
#define AdvgridHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Vcl.Graphics.hpp>
#include <System.Types.hpp>
#include <System.SysUtils.hpp>
#include <Winapi.Messages.hpp>
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.Clipbrd.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.Printers.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Buttons.hpp>
#include <AdvUtil.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <System.IniFiles.hpp>
#include <asgspin.hpp>
#include <ASGEdit.hpp>
#include <Vcl.ComCtrls.hpp>
#include <AsgCombo.hpp>
#include <Winapi.RichEdit.hpp>
#include <Winapi.CommCtrl.hpp>
#include <System.Win.Registry.hpp>
#include <Vcl.Menus.hpp>
#include <Winapi.ShellAPI.hpp>
#include <PictureContainer.hpp>
#include <asgcheck.hpp>
#include <AsgHTMLE.hpp>
#include <AsgDateTimePicker.hpp>
#include <BaseGrid.hpp>
#include <Vcl.Mask.hpp>
#include <AdvStyleIF.hpp>
#include <Vcl.CheckLst.hpp>
#include <AdvXPVS.hpp>
#include <Vcl.Imaging.jpeg.hpp>
#include <System.Win.ComObj.hpp>
#include <Winapi.WinSpool.hpp>
#include <Winapi.ActiveX.hpp>
#include <Vcl.ImgList.hpp>
#include <asgdd.hpp>
#include <System.Variants.hpp>
#include <AdvObj.hpp>
#include <AdvDateTimePicker.hpp>
#include <System.Math.hpp>
#include <AdvDropDown.hpp>
#include <AdvTrackBarDropDown.hpp>
#include <AdvMemoDropDown.hpp>
#include <AdvCalculatorDropdown.hpp>
#include <AdvTimePickerDropDown.hpp>
#include <AdvDetailDropDown.hpp>
#include <AdvMultiColumnDropDown.hpp>
#include <AdvColorPickerDropDown.hpp>
#include <AdvImagePickerDropDown.hpp>
#include <AdvCustomGridDropDown.hpp>
#include <AdvControlDropDown.hpp>
#include <asgxlsfmt.hpp>
#include <System.Rtti.hpp>
#include <AdvHintInfo.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

#pragma link "shlwapi.lib"
#pragma link "wininet.lib"


namespace Advgrid
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE ICellGraphic;
typedef System::DelphiInterface<ICellGraphic> _di_ICellGraphic;
class DELPHICLASS TWinCtrl;
class DELPHICLASS EAdvGridError;
class DELPHICLASS TDragScrollDelays;
class DELPHICLASS TDragScrollMargins;
class DELPHICLASS TDragScrollOptions;
class DELPHICLASS TDropList;
class DELPHICLASS TDropCheckList;
class DELPHICLASS TFilterEdit;
class DELPHICLASS TFilterDropDown;
class DELPHICLASS TBaseCellGraphic;
class DELPHICLASS TCellGraphic;
class DELPHICLASS TCellNode;
class DELPHICLASS TControlLook;
class DELPHICLASS TShowModified;
class DELPHICLASS TSizeWhileTyping;
class DELPHICLASS TColumnSize;
class DELPHICLASS THoverButtonsCollectionItem;
class DELPHICLASS THoverButtonsCollection;
class DELPHICLASS THoverButtons;
class DELPHICLASS TGrouping;
class DELPHICLASS THTMLSettings;
class DELPHICLASS TBalloonSettings;
class DELPHICLASS TPrintSettings;
class DELPHICLASS TSortSettings;
class DELPHICLASS TGridProgressAppearance;
class DELPHICLASS TBackGround;
class DELPHICLASS TEditLink;
class DELPHICLASS TControlCombo;
class DELPHICLASS TControlEdit;
class DELPHICLASS TGridCombo;
class DELPHICLASS TGridSpin;
class DELPHICLASS TGridTransEdit;
class DELPHICLASS TGridTransCombo;
class DELPHICLASS TGridTrackbarDropDown;
class DELPHICLASS TGridMemoDropDown;
class DELPHICLASS TGridCalculatorDropDown;
class DELPHICLASS TGridTimepickerDropDown;
class DELPHICLASS TGridDetailPickerDropDown;
class DELPHICLASS TGridGridDropDown;
class DELPHICLASS TGridAdvGridDropDown;
class DELPHICLASS TGridColorDropDown;
class DELPHICLASS TGridImageDropDown;
class DELPHICLASS TGridControlDropDown;
class DELPHICLASS TGridDatePicker;
class DELPHICLASS TGridDateTimePicker;
class DELPHICLASS TGridCheckBox;
class DELPHICLASS TGridEditBtn;
class DELPHICLASS TGridUnitEditBtn;
class DELPHICLASS TGridButton;
class DELPHICLASS TAdvInplaceEdit;
class DELPHICLASS TNoActiveForm;
class DELPHICLASS TFilterData;
class DELPHICLASS TFilter;
class DELPHICLASS TGridItem;
class DELPHICLASS TAdvRichEdit;
class DELPHICLASS TDragDropSettings;
class DELPHICLASS TGridDropTarget;
class DELPHICLASS TGridDropSource;
__interface DELPHIINTERFACE ITAdvStringGridSelect;
typedef System::DelphiInterface<ITAdvStringGridSelect> _di_ITAdvStringGridSelect;
class DELPHICLASS TGridChangeNotifier;
class DELPHICLASS THTMLHintWindow;
class DELPHICLASS TRetEdit;
class DELPHICLASS TSearchPanel;
class DELPHICLASS TFooterPanel;
class DELPHICLASS TFloatingFooter;
struct TCellAlignment;
struct TScrollProp;
class DELPHICLASS TScrollControl;
class DELPHICLASS TColorSetting;
class DELPHICLASS TAutoColor;
class DELPHICLASS THeaderDragButton;
class DELPHICLASS TAdvGridPopup;
__interface DELPHIINTERFACE ITMSCellValidate;
typedef System::DelphiInterface<ITMSCellValidate> _di_ITMSCellValidate;
class DELPHICLASS TAdvStringGrid;
class DELPHICLASS TGridSLIO;
class DELPHICLASS TGridFilePicIO;
class DELPHICLASS TGridPicIO;
class DELPHICLASS TGridIconIO;
class DELPHICLASS TGridBMPIO;
class DELPHICLASS TGridPropIO;
class DELPHICLASS TGridGraphicIO;
class DELPHICLASS TGridCellPropIO;
class DELPHICLASS TGridCellIO;
//-- type declarations -------------------------------------------------------
__interface  INTERFACE_UUID("{0712BE3F-5C9A-4771-BF71-4C987CDC39B3}") ICellGraphic  : public System::IInterface 
{
	virtual void __fastcall Draw(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &R, int Col, int Row, bool Selected, TAdvStringGrid* Grid) = 0 ;
	virtual int __fastcall CellWidth() = 0 ;
	virtual int __fastcall CellHeight() = 0 ;
	virtual bool __fastcall IsBackground() = 0 ;
};

class PASCALIMPLEMENTATION TWinCtrl : public Vcl::Controls::TWinControl
{
	typedef Vcl::Controls::TWinControl inherited;
	
public:
	/* TWinControl.Create */ inline __fastcall virtual TWinCtrl(System::Classes::TComponent* AOwner) : Vcl::Controls::TWinControl(AOwner) { }
	/* TWinControl.CreateParented */ inline __fastcall TWinCtrl(HWND ParentWindow) : Vcl::Controls::TWinControl(ParentWindow) { }
	/* TWinControl.Destroy */ inline __fastcall virtual ~TWinCtrl() { }
	
};


typedef System::DynamicArray<bool> TBoolArray;

typedef System::DynamicArray<short> TWidthArray;

enum DECLSPEC_DENUM TAdvGridStyle : unsigned int { gsOffice2003Blue, gsOffice2003Silver, gsOffice2003Olive, gsOffice2003Classic, gsOffice2007Luna, gsOffice2007Obsidian, gsWindowsXP, gsWhidbey, gsCustom, gsOffice2007Silver, gsWindowsVista, gsWindows7, gsTerminal, gsOffice2010Blue, gsOffice2010Silver, gsOffice2010Black, gsWindows8, gsOffice2013white, gsOffice2013LightGray, gsOffice2013Gray, gsWindows10, gsOffice2016white, gsOffice2016Gray, gsOffice2016Black, gsOffice2019white, gsOffice2019Gray, gsOffice2019Black };

enum DECLSPEC_DENUM TFilterType : unsigned int { ftStartsWith, ftEndsWith, ftContains, ftNotContains, ftEqual, ftNotEqual, ftLargerThan, ftSmallerThan, ftClear, ftNone };

enum DECLSPEC_DENUM TSearchType : unsigned int { stStartsWith, stEndsWith, stContains, stEqual, stNotEqual, stNotContains };

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAdvGridError : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EAdvGridError(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EAdvGridError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAdvGridError(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAdvGridError(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAdvGridError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAdvGridError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAdvGridError(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAdvGridError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAdvGridError(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAdvGridError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAdvGridError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAdvGridError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAdvGridError() { }
	
};

#pragma pack(pop)

typedef void __fastcall (__closure *TUnitChangedEvent)(System::TObject* Sender, int ACol, int ARow, System::UnicodeString NewUnit);

typedef void __fastcall (__closure *TDropDownButtonClickEvent)(System::TObject* Sender, int ACol, int ARow, int ButtonIndex);

typedef void __fastcall (__closure *TRatingChangeEvent)(System::TObject* Sender, int ACol, int ARow, double &NewRate, bool &Allow);

typedef void __fastcall (__closure *TRadioClickEvent)(System::TObject* Sender, int ACol, int ARow, int AIdx);

typedef void __fastcall (__closure *TRadioButtonClickEvent)(System::TObject* Sender, int ACol, int ARow);

typedef void __fastcall (__closure *TComboChangeEvent)(System::TObject* Sender, int ACol, int ARow, int AItemIndex, System::UnicodeString ASelection);

typedef void __fastcall (__closure *TComboObjectChangeEvent)(System::TObject* Sender, int ACol, int ARow, int AItemIndex, System::UnicodeString ASelection, System::TObject* AObject);

typedef void __fastcall (__closure *TRowCountChangeEvent)(System::TObject* Sender, int FromCount, int ToCount);

typedef void __fastcall (__closure *TFloatSpinClickEvent)(System::TObject* Sender, int ACol, int ARow, double AValue, bool UpDown);

typedef void __fastcall (__closure *TDateTimeSpinClickEvent)(System::TObject* Sender, int ACol, int ARow, System::TDateTime AValue, bool UpDown);

enum DECLSPEC_DENUM TSearchAction : unsigned int { saFindFirst, saFindPrevious, saFindNext };

typedef void __fastcall (__closure *TSearchFooterActionEvent)(System::TObject* Sender, System::UnicodeString Value, int ACol, int ARow, TSearchAction SearchAction);

typedef void __fastcall (__closure *TSearchFooterSearchEvent)(System::TObject* Sender, System::UnicodeString &Value);

typedef void __fastcall (__closure *TSearchFooterSearchEndEvent)(System::TObject* Sender, bool &ContinueFromStart);

typedef void __fastcall (__closure *TCellSaveLoadEvent)(System::TObject* Sender, int ACol, int ARow, System::UnicodeString &Value);

enum DECLSPEC_DENUM TScrollHintType : unsigned int { shNone, shVertical, shHorizontal, shBoth };

enum DECLSPEC_DENUM TFilterOperation : unsigned int { foSHORT, foNONE, foAND, foXOR, foOR };

typedef void __fastcall (__closure *TCustomFilterEvent)(System::TObject* Sender, int ARow, bool &AcceptRow);

typedef void __fastcall (__closure *THasFilterEditEvent)(System::TObject* Sender, int ACol, bool &HasFilter);

typedef void __fastcall (__closure *TShowFilterEditEvent)(System::TObject* Sender, int ACol, int AIndex, bool &DoShow);

typedef void __fastcall (__closure *TFilterEditUpdateEvent)(System::TObject* Sender, int ACol, System::UnicodeString Condition, TFilterType FilterType);

enum DECLSPEC_DENUM TPrintPosition : unsigned int { ppNone, ppTopLeft, ppTopRight, ppTopCenter, ppBottomLeft, ppBottomRight, ppBottomCenter };

enum DECLSPEC_DENUM TPrintBorders : unsigned int { pbNoborder, pbSingle, pbDouble, pbVertical, pbHorizontal, pbAround, pbAroundVertical, pbAroundHorizontal, pbCustom };

enum DECLSPEC_DENUM TPrintMethod : unsigned int { prPreview, prPrint, prCalcPrint, prCalcPreview };

enum DECLSPEC_DENUM TSortDirection : unsigned int { sdAscending, sdDescending };

enum DECLSPEC_DENUM TIntelliPan : unsigned int { ipVertical, ipHorizontal, ipBoth, ipNone };

enum DECLSPEC_DENUM TScrollType : unsigned int { ssNormal, ssFlat, ssEncarta, ssMetro };

enum DECLSPEC_DENUM TXPColorScheme : unsigned int { xpNone, xpBlue, xpGreen, xpGray, vistaAero };

enum DECLSPEC_DENUM TGridLook : unsigned int { glStandard, glSoft, glClassic, glTMS, glXP, glListView, glVista, glWin7, glOffice2007, glCustom };

typedef void __fastcall (__closure *TGridProgressEvent)(System::TObject* Sender, short progress);

typedef void __fastcall (__closure *TClipboardPasteDoneEvent)(System::TObject* Sender, const Vcl::Grids::TGridRect &CellRect);

typedef void __fastcall (__closure *TClipboardEvent)(System::TObject* Sender, bool &Allow);

typedef void __fastcall (__closure *TNodeClickEvent)(System::TObject* Sender, int ARow, int ARowreal);

typedef void __fastcall (__closure *TNodeAllowEvent)(System::TObject* Sender, int ARow, int ARowReal, bool &Allow);

typedef void __fastcall (__closure *TSelectionResizeEvent)(System::TObject* Sender, const Vcl::Grids::TGridRect &OrigSelection, const Vcl::Grids::TGridRect &NewSelection);

typedef void __fastcall (__closure *THoverButtonsShowEvent)(System::TObject* Sender, int X, int Y, bool &Allow);

typedef void __fastcall (__closure *TGridWideHintEvent)(System::TObject* Sender, int ARow, int ACol, System::WideString &hintstr);

typedef void __fastcall (__closure *TOleDragDropEvent)(System::TObject* Sender, int ARow, int ACol, System::UnicodeString data, bool &Allow);

typedef void __fastcall (__closure *TOleDropFileEvent)(System::TObject* Sender, int ARow, int ACol, System::UnicodeString FileName, bool &Allow);

typedef void __fastcall (__closure *TOleDropFilesEvent)(System::TObject* Sender, int ARow, int ACol, System::Classes::TStrings* Files);

typedef void __fastcall (__closure *TOleDropURLEvent)(System::TObject* Sender, int ARow, int ACol, System::UnicodeString URL, bool &Allow);

typedef void __fastcall (__closure *TOleDragOverEvent)(System::TObject* Sender, int ARow, int ACol, bool &Allow);

typedef void __fastcall (__closure *TOleDragStartEvent)(System::TObject* Sender, int ARow, int ACol);

typedef void __fastcall (__closure *TOleDragStopEvent)(System::TObject* Sender, int OLEEffect);

typedef void __fastcall (__closure *TOleDropColEvent)(System::TObject* Sender, int ARow, int ACol, int DropCol);

typedef void __fastcall (__closure *TOleDroppedEvent)(System::TObject* Sender, const Vcl::Grids::TGridRect &ARect);

typedef void __fastcall (__closure *TRowChangingEvent)(System::TObject* Sender, int OldRow, int NewRow, bool &Allow);

typedef void __fastcall (__closure *TRowChangedEvent)(System::TObject* Sender, int OldRow, int NewRow);

typedef void __fastcall (__closure *TColChangingEvent)(System::TObject* Sender, int OldCol, int NewCol, bool &Allow);

typedef void __fastcall (__closure *TCellChangingEvent)(System::TObject* Sender, int OldRow, int OldCol, int NewRow, int NewCol, bool &Allow);

typedef void __fastcall (__closure *TAutoAdvanceEvent)(System::TObject* Sender, int OldRow, int OldCol, int &NewRow, int &NewCol, bool &Allow);

typedef void __fastcall (__closure *TGridPrintPageEvent)(System::TObject* Sender, Vcl::Graphics::TCanvas* Canvas, int PageNr, int PageXSize, int PageYSize);

typedef void __fastcall (__closure *TGridPrintPageTopBottomSizeEvent)(System::TObject* Sender, Vcl::Graphics::TCanvas* Canvas, int PageNr, int &HeaderSize, int &FooterSize);

typedef void __fastcall (__closure *TGridPrintPageNumEvent)(System::TObject* Sender, int PageNum, int PageColNum, System::UnicodeString &PageNumString);

typedef void __fastcall (__closure *TGridPrintStartEvent)(System::TObject* Sender, int NrOfPages, int &FromPage, int &ToPage);

typedef void __fastcall (__closure *TGridPrintPageDoneEvent)(System::TObject* Sender, Vcl::Graphics::TCanvas* Canvas, int LastRow, int LastRowOffset, int LastPage, int PageXSize, int PageYSize);

typedef void __fastcall (__closure *TGridPrintCancelEvent)(System::TObject* Sender, int PageNr, bool &Cancel);

typedef void __fastcall (__closure *TGridPrintNewPageEvent)(System::TObject* Sender, int ARow, bool &NewPage);

typedef void __fastcall (__closure *TGridPrintColumnWidthEvent)(System::TObject* Sender, int ACol, int &Width);

typedef void __fastcall (__closure *TGridPrintRowHeightEvent)(System::TObject* Sender, int ARow, int &Height);

typedef void __fastcall (__closure *TCustomStrToDateEvent)(System::TObject* Sender, System::UnicodeString Value, System::TDateTime &ADate);

typedef void __fastcall (__closure *TBeforeEditEvent)(System::TObject* Sender, int ARow, int ACol, bool &Allow);

typedef void __fastcall (__closure *TCanClickCellEvent)(System::TObject* Sender, int ARow, int ACol, bool &Allow);

typedef void __fastcall (__closure *TColorSelectedEvent)(System::TObject* Sender, int ACol, int ARow, System::Uitypes::TColor &Color, System::UnicodeString &Value);

typedef void __fastcall (__closure *TColorSelectEvent)(System::TObject* Sender, int ACol, int ARow, System::Uitypes::TColor Color, System::UnicodeString Value);

typedef void __fastcall (__closure *TImageSelectedEvent)(System::TObject* Sender, int ACol, int ARow, int &Index);

typedef void __fastcall (__closure *TImageSelectEvent)(System::TObject* Sender, int ACol, int ARow, int Index);

typedef void __fastcall (__closure *TIsFixedCellEvent)(System::TObject* Sender, int ARow, int ACol, bool &IsFixed);

typedef void __fastcall (__closure *TIsPasswordCellEvent)(System::TObject* Sender, int ARow, int ACol, bool &IsPassword);

typedef void __fastcall (__closure *TFixedEditEvent)(System::TObject* Sender, int ACol, int ARow, Advobj::TGridFixedCellEditor &AEditor, System::Classes::TStrings* Values);

typedef void __fastcall (__closure *TCellControlEvent)(System::TObject* Sender, int ARow, int ACol, System::UnicodeString CtrlID, System::UnicodeString CtrlType, System::UnicodeString CtrlVal);

typedef void __fastcall (__closure *TCellComboControlEvent)(System::TObject* Sender, int ARow, int ACol, System::UnicodeString CtrlID, System::UnicodeString CtrlType, System::UnicodeString CtrlVal, System::Classes::TStringList* Values, bool &Edit, int &DropCount);

typedef void __fastcall (__closure *TCellComboControlSelectEvent)(System::TObject* Sender, int ARow, int ACol, int ItemIndex, System::UnicodeString CtrlID, System::UnicodeString CtrlValue);

typedef void __fastcall (__closure *TCellValidateEvent)(System::TObject* Sender, int ACol, int ARow, System::UnicodeString &Value, bool &Valid);

typedef void __fastcall (__closure *TCellValidateWideEvent)(System::TObject* Sender, int ACol, int ARow, System::WideString &Value, bool &Valid);

typedef void __fastcall (__closure *TEditChangeEvent)(System::TObject* Sender, int ACol, int ARow, System::UnicodeString Value);

typedef void __fastcall (__closure *TEditCellDoneEvent)(System::TObject* Sender, int ACol, int ARow);

typedef void __fastcall (__closure *TDateTimeChangeEvent)(System::TObject* Sender, int ACol, int ARow, System::TDateTime ADateTime);

typedef void __fastcall (__closure *TCellsChangedEvent)(System::TObject* Sender, const System::Types::TRect &R);

typedef void __fastcall (__closure *TGetCheckEvent)(System::TObject* Sender, int ACol, int ARow, System::UnicodeString &Value);

typedef void __fastcall (__closure *TGetEditorPropEvent)(System::TObject* Sender, int ACol, int ARow, TEditLink* AEditLink);

typedef void __fastcall (__closure *TCustomCellSizeEvent)(System::TObject* Sender, Vcl::Graphics::TCanvas* Canvas, int ACol, int ARow, System::Types::TPoint &ASize, bool Printing);

typedef void __fastcall (__closure *TDoFitToPageEvent)(System::TObject* Sender, double &ScaleFactor, bool &Allow);

typedef void __fastcall (__closure *TBeforeCellPasteEvent)(System::TObject* Sender, int ACol, int ARow, System::UnicodeString &Value, bool &Allow);

typedef void __fastcall (__closure *TAfterCellPasteEvent)(System::TObject* Sender, int ACol, int ARow, System::UnicodeString Value);

typedef void __fastcall (__closure *TBeforeCellPasteWideEvent)(System::TObject* Sender, int ACol, int ARow, System::WideString &Value, bool &Allow);

typedef void __fastcall (__closure *TAfterCellPasteWideEvent)(System::TObject* Sender, int ACol, int ARow, System::WideString Value);

typedef void __fastcall (__closure *TSelectionChanged)(System::TObject* Sender, int ALeft, int ATop, int ARight, int ABottom);

typedef void __fastcall (__closure *TRowDisjunctSelectEvent)(System::TObject* Sender, int ARow, bool AState, bool &Allow);

typedef void __fastcall (__closure *TColDisjunctSelectEvent)(System::TObject* Sender, int ACol, bool AState, bool &Allow);

typedef void __fastcall (__closure *TColDisjunctSelectedEvent)(System::TObject* Sender, int ACol);

typedef void __fastcall (__closure *TFilterShowEvent)(System::TObject* Sender, int ACol, bool &Allow);

typedef void __fastcall (__closure *TFilterCloseEvent)(System::TObject* Sender, int ACol);

enum DECLSPEC_DENUM TFindParameters : unsigned int { fnMatchCase, fnMatchFull, fnMatchRegular, fnDirectionLeftRight, fnMatchStart, fnFindInCurrentRow, fnFindInCurrentCol, fnIncludeFixed, fnAutoGoto, fnIgnoreHTMLTags, fnBackward, fnIncludeHiddenColumns, fnFindInPresetCol, fnFindInPresetRow, fnSelectedCells, fnIncludeHiddenRows, fnIgnoreAccents };

enum DECLSPEC_DENUM TCellHAlign : unsigned int { haLeft, haRight, haCenter, haBeforeText, haAfterText, haFull };

enum DECLSPEC_DENUM TCellVAlign : unsigned int { vaTop, vaBottom, vaCenter, vaUnderText, vaAboveText, vaFull };

enum DECLSPEC_DENUM TCellType : unsigned int { ctBitmap, ctIcon, ctNone, ctImageList, ctCheckBox, ctDataCheckBox, ctRotated, ctDataImage, ctNode, ctRadio, ctEmpty, ctImages, ctPicture, ctFilePicture, ctValue, ctProgress, ctComment, ctButton, ctBitButton, ctVirtCheckBox, ctRowCheckBox, ctProgressPie, ctSummary, ctRangeIndicator, ctXPProgress, ctInterface, ctScrollbar, ctRadioButton, ctBalloon, ctShape, ctRating, ctTriStateCheckBox, ctExpand, ctDataPicture, ctVirtButton };

typedef System::Set<TCellType, TCellType::ctBitmap, TCellType::ctVirtButton> TCellTypeSet;

enum DECLSPEC_DENUM TFitToPage : unsigned int { fpNever, fpGrow, fpShrink, fpAlways, fpCustom };

typedef System::Set<TFindParameters, TFindParameters::fnMatchCase, TFindParameters::fnIgnoreAccents> TFindParams;

enum DECLSPEC_DENUM TStretchMode : unsigned int { noStretch, Stretch, StretchWithAspectRatio, Shrink, ShrinkWithAspectRatio };

enum DECLSPEC_DENUM TSortBlankPosition : unsigned int { blFirst, blLast };

enum DECLSPEC_DENUM TScrollBarAlways : unsigned int { saNone, saVert, saHorz, saBoth };

enum DECLSPEC_DENUM TFilterDropDownColumns : unsigned int { fdNormal, fdAll };

enum DECLSPEC_DENUM TRadioButtonGroup : unsigned int { rgNone, rgCol, rgRow };

typedef void __fastcall (__closure *TScrollCellEvent)(System::TObject* Sender, int ACol, int ARow, int ScrollPosition, int ScrollMin, int ScrollMax);

typedef void __fastcall (__closure *THasComboEvent)(System::TObject* Sender, int ACol, int ARow, bool &HasComboBox);

typedef void __fastcall (__closure *THasEditBtnEvent)(System::TObject* Sender, int ACol, int ARow, bool &HasEditBtn);

typedef void __fastcall (__closure *THasSpinEditEvent)(System::TObject* Sender, int ACol, int ARow, bool &HasSpinEdit);

typedef void __fastcall (__closure *TCellCursorEvent)(System::TObject* Sender, int ACol, int ARow, int X, int Y, System::Uitypes::TCursor &ACursor);

enum DECLSPEC_DENUM TGridExportState : unsigned int { esExportStart, esExportNewRow, esExportDone, esExportSelRow, esExportFail, esExportNextRow, esExportFindRow };

enum DECLSPEC_DENUM TGridImportState : unsigned int { isImportStart, isImportNewRow, isImportDone, isImportSelRow };

typedef void __fastcall (__closure *TCalcFooterEvent)(System::TObject* Sender, int ACol, int ARow, System::UnicodeString &Value);

typedef void __fastcall (__closure *TWordWrapEvent)(System::TObject* Sender, int ACol, int ARow, bool &WordWrap);

typedef void __fastcall (__closure *TGroupCalcEvent)(System::TObject* Sender, int ACol, int FromRow, int ToRow, double &Res);

typedef void __fastcall (__closure *TFixedDropDownEvent)(System::TObject* Sender, int ACol, int ARow, Vcl::Menus::TPopupMenu* &AMenu, bool &KeepFixedCellHighlighted);

typedef void __fastcall (__closure *TCanShowFixedDropDownEvent)(System::TObject* Sender, int ACol, bool &CanShow);

typedef void __fastcall (__closure *TProgressColorEvent)(System::TObject* Sender, int ACol, int ARow, System::Uitypes::TColor &ColorFG, System::Uitypes::TColor &ColorBK, System::Uitypes::TColor &TextColorFG, System::Uitypes::TColor &TextColorBK);

typedef void __fastcall (__closure *TChangeScaleEvent)(System::TObject* Sender, float NewScale);

#pragma pack(push,4)
class PASCALIMPLEMENTATION TDragScrollDelays : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	int FInitialDelay;
	int FRepeatDelay;
	
public:
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property int InitialDelay = {read=FInitialDelay, write=FInitialDelay, default=1000};
	__property int RepeatDelay = {read=FRepeatDelay, write=FRepeatDelay, default=250};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TDragScrollDelays() { }
	
public:
	/* TObject.Create */ inline __fastcall TDragScrollDelays() : System::Classes::TPersistent() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TDragScrollMargins : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	int FTopMargin;
	int FBottomMargin;
	int FLeftMargin;
	int FRightMargin;
	
public:
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property int TopMargin = {read=FTopMargin, write=FTopMargin, default=50};
	__property int BottomMargin = {read=FBottomMargin, write=FBottomMargin, default=50};
	__property int LeftMargin = {read=FLeftMargin, write=FLeftMargin, default=50};
	__property int RightMargin = {read=FRightMargin, write=FRightMargin, default=50};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TDragScrollMargins() { }
	
public:
	/* TObject.Create */ inline __fastcall TDragScrollMargins() : System::Classes::TPersistent() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TDragScrollOptions : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	bool FActive;
	TDragScrollDelays* FDelays;
	TDragScrollMargins* FMargins;
	
public:
	__fastcall TDragScrollOptions();
	__fastcall virtual ~TDragScrollOptions();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property bool Active = {read=FActive, write=FActive, default=0};
	__property TDragScrollDelays* Delays = {read=FDelays, write=FDelays};
	__property TDragScrollMargins* Margins = {read=FMargins, write=FMargins};
};

#pragma pack(pop)

enum DECLSPEC_DENUM TDragScrollDirections : unsigned int { dsdUp, dsdDown, dsdLeft, dsdRight };

typedef System::Set<TDragScrollDirections, TDragScrollDirections::dsdUp, TDragScrollDirections::dsdRight> TDragScrollDirection;

typedef void __fastcall (__closure *TDragScrollEvent)(System::TObject* Sender, int TopRow, int LeftCol, TDragScrollDirection &DragScrollDir, bool &CanScroll);

typedef void __fastcall (__closure *TDropSelectEvent)(System::TObject* Sender, int ItemIndex);

typedef void __fastcall (__closure *TFilterSelectEvent)(System::TObject* Sender, int Column, int ItemIndex, System::UnicodeString FriendlyName, System::UnicodeString &FilterCondition);

typedef void __fastcall (__closure *TGetColumnFilterEvent)(System::TObject* Sender, int Column, System::Classes::TStrings* Filter);

typedef void __fastcall (__closure *TFilterCheckEvent)(System::TObject* Sender, int Column, int ItemIndex, System::UnicodeString FriendlyName, System::UnicodeString &FilterCondition, Vcl::Checklst::TCheckListBox* CheckList);

typedef void __fastcall (__closure *TFilterCheckClickEvent)(System::TObject* Sender, int Column, int ItemIndex, bool State, Vcl::Checklst::TCheckListBox* CheckList);

class PASCALIMPLEMENTATION TDropList : public Vcl::Stdctrls::TListBox
{
	typedef Vcl::Stdctrls::TListBox inherited;
	
private:
	TDropSelectEvent FOnSelect;
	System::Classes::TNotifyEvent FOnClose;
	
protected:
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Msg);
	
__published:
	__property TDropSelectEvent OnSelect = {read=FOnSelect, write=FOnSelect};
	__property System::Classes::TNotifyEvent OnClose = {read=FOnClose, write=FOnClose};
public:
	/* TCustomListBox.Create */ inline __fastcall virtual TDropList(System::Classes::TComponent* AOwner) : Vcl::Stdctrls::TListBox(AOwner) { }
	/* TCustomListBox.Destroy */ inline __fastcall virtual ~TDropList() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TDropList(HWND ParentWindow) : Vcl::Stdctrls::TListBox(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TDropCheckList : public Vcl::Checklst::TCheckListBox
{
	typedef Vcl::Checklst::TCheckListBox inherited;
	
private:
	TDropSelectEvent FOnSelect;
	System::Classes::TNotifyEvent FOnClose;
	
protected:
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Msg);
	DYNAMIC void __fastcall ClickCheck();
	
__published:
	__property TDropSelectEvent OnSelect = {read=FOnSelect, write=FOnSelect};
	__property System::Classes::TNotifyEvent OnClose = {read=FOnClose, write=FOnClose};
public:
	/* TCustomCheckListBox.Create */ inline __fastcall virtual TDropCheckList(System::Classes::TComponent* AOwner) : Vcl::Checklst::TCheckListBox(AOwner) { }
	/* TCustomCheckListBox.Destroy */ inline __fastcall virtual ~TDropCheckList() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TDropCheckList(HWND ParentWindow) : Vcl::Checklst::TCheckListBox(ParentWindow) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TFilterEdit : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	TAdvStringGrid* FOwner;
	bool FEnabled;
	int FRow;
	System::Uitypes::TColor FColor;
	TFilterDropDownColumns FColumns;
	System::Classes::TStringList* FTypeNames;
	bool FCaseSensitive;
	bool FAutoHotKey;
	void __fastcall SetEnabled(const bool Value);
	void __fastcall SetRow(const int Value);
	void __fastcall SetColor(const System::Uitypes::TColor Value);
	void __fastcall SetColumns(const TFilterDropDownColumns Value);
	void __fastcall SetTypeNames(System::Classes::TStringList* const Value);
	
public:
	__fastcall TFilterEdit(TAdvStringGrid* AOwner);
	__fastcall virtual ~TFilterEdit();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property bool AutoHotKey = {read=FAutoHotKey, write=FAutoHotKey, default=0};
	__property bool CaseSensitive = {read=FCaseSensitive, write=FCaseSensitive, default=1};
	__property System::Uitypes::TColor Color = {read=FColor, write=SetColor, default=16777215};
	__property TFilterDropDownColumns Columns = {read=FColumns, write=SetColumns, default=0};
	__property bool Enabled = {read=FEnabled, write=SetEnabled, default=0};
	__property int Row = {read=FRow, write=SetRow, default=0};
	__property System::Classes::TStringList* TypeNames = {read=FTypeNames, write=SetTypeNames};
};

#pragma pack(pop)

enum DECLSPEC_DENUM TFilterMethod : unsigned int { fmExpression, fmLiteral };

class PASCALIMPLEMENTATION TFilterDropDown : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	bool FAutoSize;
	int FHeight;
	int FWidth;
	System::Uitypes::TColor FColor;
	Vcl::Graphics::TFont* FFont;
	Vcl::Graphics::TBitmap* FGlyph;
	Vcl::Graphics::TBitmap* FGlyphActive;
	bool FColumnWidth;
	System::Classes::TNotifyEvent FOnChange;
	System::UnicodeString FTextChecked;
	System::UnicodeString FTextUnChecked;
	bool FCaseSensitive;
	bool FSorted;
	bool FIgnoreHTML;
	TFilterMethod FMethod;
	void __fastcall SetFont(Vcl::Graphics::TFont* const Value);
	void __fastcall SetGlyph(Vcl::Graphics::TBitmap* const Value);
	void __fastcall SetGlyphActive(Vcl::Graphics::TBitmap* const Value);
	
protected:
	void __fastcall GlyphChanged(System::TObject* Sender);
	
public:
	__fastcall TFilterDropDown();
	__fastcall virtual ~TFilterDropDown();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property bool AutoSize = {read=FAutoSize, write=FAutoSize, default=0};
	__property bool CaseSensitive = {read=FCaseSensitive, write=FCaseSensitive, default=0};
	__property System::Uitypes::TColor Color = {read=FColor, write=FColor, default=-16777211};
	__property bool ColumnWidth = {read=FColumnWidth, write=FColumnWidth, default=0};
	__property Vcl::Graphics::TFont* Font = {read=FFont, write=SetFont};
	__property Vcl::Graphics::TBitmap* Glyph = {read=FGlyph, write=SetGlyph};
	__property Vcl::Graphics::TBitmap* GlyphActive = {read=FGlyphActive, write=SetGlyphActive};
	__property int Height = {read=FHeight, write=FHeight, default=150};
	__property bool IgnoreHTML = {read=FIgnoreHTML, write=FIgnoreHTML, default=1};
	__property TFilterMethod Method = {read=FMethod, write=FMethod, default=0};
	__property bool Sorted = {read=FSorted, write=FSorted, default=1};
	__property System::UnicodeString TextChecked = {read=FTextChecked, write=FTextChecked};
	__property System::UnicodeString TextUnChecked = {read=FTextUnChecked, write=FTextUnChecked};
	__property int Width = {read=FWidth, write=FWidth, default=150};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
};


class PASCALIMPLEMENTATION TBaseCellGraphic : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	TCellType FCellType;
	Vcl::Graphics::TBitmap* FCellBitmap;
	Vcl::Graphics::TIcon* FCellIcon;
	TCellVAlign FCellVAlign;
	TCellHAlign FCellHAlign;
	int FCellIndex;
	bool FCellTransparent;
	bool FCellCreated;
	bool FCellBoolean;
	int FCellAngle;
	double FCellValue;
	int FCellErrFrom;
	int FCellErrLen;
	System::UnicodeString FCellText;
	System::Variant FCellVar;
	Vcl::Stdctrls::TCheckBoxState FCellCheckBoxState;
	
public:
	__fastcall TBaseCellGraphic();
	__fastcall virtual ~TBaseCellGraphic();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	void __fastcall SetInterfacedCell(System::Classes::TInterfacedPersistent* AObject);
	void __fastcall SetBitmap(Vcl::Graphics::TBitmap* ABmp, bool Transparent, TCellHAlign hal, TCellVAlign val);
	void __fastcall SetPicture(Vcl::Graphics::TPicture* APicture, bool Transparent, TStretchMode StretchMode, int padding, TCellHAlign hal, TCellVAlign val);
	void __fastcall SetFilePicture(Advobj::TFilePicture* APicture, bool Transparent, TStretchMode stretchmode, int padding, TCellHAlign hal, TCellVAlign val);
	void __fastcall SetImageIdx(int idx, TCellHAlign hal, TCellVAlign val);
	void __fastcall SetDataImage(int idx, TCellHAlign hal, TCellVAlign val);
	void __fastcall SetDataPicture(TCellHAlign hal, TCellVAlign val);
	void __fastcall SetMultiImage(int Col, int Row, int dir, TCellHAlign hal, TCellVAlign val, Advobj::TImageChangeEvent Notifier);
	void __fastcall SetIcon(Vcl::Graphics::TIcon* aicon, TCellHAlign hal, TCellVAlign val);
	void __fastcall SetCheckBox(bool Value, bool Data, bool Flat, TCellHAlign hal, TCellVAlign val)/* overload */;
	void __fastcall SetCheckBox(Vcl::Stdctrls::TCheckBoxState Value, bool Flat, TCellHAlign hal, TCellVAlign val)/* overload */;
	void __fastcall SetRadioButton(bool Value, bool Flat, TCellHAlign hal, TCellVAlign val, TRadioButtonGroup Group);
	void __fastcall SetAngle(short AAngle);
	void __fastcall SetButton(int bw, int bh, System::UnicodeString caption, TCellHAlign hal, TCellVAlign val);
	void __fastcall SetBitButton(int bw, int bh, System::UnicodeString caption, Vcl::Graphics::TBitmap* Glyph, TCellHAlign hal, TCellVAlign val);
	System::Types::TPoint __fastcall GetPictureSize(int cw, int rh, Vcl::Graphics::TGraphic* Graph, bool hastext);
	__property Vcl::Graphics::TIcon* CellIcon = {read=FCellIcon, write=FCellIcon};
	__property Vcl::Graphics::TBitmap* CellBitmap = {read=FCellBitmap, write=FCellBitmap};
	__property System::Variant CellVar = {read=FCellVar, write=FCellVar};
	
__published:
	__property TCellType CellType = {read=FCellType, write=FCellType, nodefault};
	__property TCellVAlign CellVAlign = {read=FCellVAlign, write=FCellVAlign, nodefault};
	__property TCellHAlign CellHAlign = {read=FCellHAlign, write=FCellHAlign, nodefault};
	__property int CellIndex = {read=FCellIndex, write=FCellIndex, nodefault};
	__property bool CellTransparent = {read=FCellTransparent, write=FCellTransparent, nodefault};
	__property bool CellCreated = {read=FCellCreated, write=FCellCreated, nodefault};
	__property bool CellBoolean = {read=FCellBoolean, write=FCellBoolean, nodefault};
	__property Vcl::Stdctrls::TCheckBoxState CellCheckBoxState = {read=FCellCheckBoxState, write=FCellCheckBoxState, nodefault};
	__property int CellAngle = {read=FCellAngle, write=FCellAngle, nodefault};
	__property double CellValue = {read=FCellValue, write=FCellValue};
	__property int CellErrFrom = {read=FCellErrFrom, write=FCellErrFrom, nodefault};
	__property int CellErrLen = {read=FCellErrLen, write=FCellErrLen, nodefault};
	__property System::UnicodeString CellText = {read=FCellText, write=FCellText};
};


class PASCALIMPLEMENTATION TCellGraphic : public TBaseCellGraphic
{
	typedef TBaseCellGraphic inherited;
	
private:
	System::UnicodeString FCellComment;
	System::Uitypes::TColor FCommentColor;
	
public:
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property System::UnicodeString CellComment = {read=FCellComment, write=FCellComment};
	__property System::Uitypes::TColor CommentColor = {read=FCommentColor, write=FCommentColor, nodefault};
public:
	/* TBaseCellGraphic.Create */ inline __fastcall TCellGraphic() : TBaseCellGraphic() { }
	/* TBaseCellGraphic.Destroy */ inline __fastcall virtual ~TCellGraphic() { }
	
};


enum DECLSPEC_DENUM TNodeType : unsigned int { cnFlat, cn3D, cnGlyph, cnLeaf, cnXP };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCellNode : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	System::Uitypes::TColor FColor;
	TNodeType FNodeType;
	System::Uitypes::TColor FNodeColor;
	Vcl::Graphics::TBitmap* FExpandGlyph;
	bool FExpandOne;
	Vcl::Graphics::TBitmap* FContractGlyph;
	TAdvStringGrid* FOwner;
	bool FShowTree;
	bool FShowTreeFull;
	int FNodeIndent;
	System::Uitypes::TColor FTreeColor;
	int FNodeColumn;
	void __fastcall SetExpandGlyph(Vcl::Graphics::TBitmap* Value);
	void __fastcall SetContractGlyph(Vcl::Graphics::TBitmap* Value);
	void __fastcall SetNodeType(TNodeType Value);
	void __fastcall SetShowTree(const bool Value);
	void __fastcall SetShowTreeFull(const bool Value);
	void __fastcall SetNodeIndent(const int Value);
	void __fastcall SetTreeColor(const System::Uitypes::TColor Value);
	void __fastcall SetNodeColumn(const int Value);
	
public:
	__fastcall TCellNode(TAdvStringGrid* AOwner);
	__fastcall virtual ~TCellNode();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property System::Uitypes::TColor Color = {read=FColor, write=FColor, default=12632256};
	__property bool ExpandOne = {read=FExpandOne, write=FExpandOne, default=0};
	__property TNodeType NodeType = {read=FNodeType, write=SetNodeType, default=4};
	__property System::Uitypes::TColor NodeColor = {read=FNodeColor, write=FNodeColor, default=0};
	__property int NodeColumn = {read=FNodeColumn, write=SetNodeColumn, default=0};
	__property int NodeIndent = {read=FNodeIndent, write=SetNodeIndent, default=12};
	__property Vcl::Graphics::TBitmap* ExpandGlyph = {read=FExpandGlyph, write=SetExpandGlyph};
	__property Vcl::Graphics::TBitmap* ContractGlyph = {read=FContractGlyph, write=SetContractGlyph};
	__property bool ShowTree = {read=FShowTree, write=SetShowTree, default=1};
	__property bool ShowTreeFull = {read=FShowTreeFull, write=SetShowTreeFull, default=1};
	__property System::Uitypes::TColor TreeColor = {read=FTreeColor, write=SetTreeColor, default=8421504};
};

#pragma pack(pop)

enum DECLSPEC_DENUM TControlStyle : unsigned int { csClassic, csFlat, csWinXP, csBorland, csTMS, csGlyph, csTheme };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TControlLook : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	TAdvStringGrid* FGrid;
	int FCheckBoxSize;
	Vcl::Graphics::TBitmap* FUnCheckedGlyph;
	Vcl::Graphics::TBitmap* FCheckedGlyph;
	TControlStyle FControlStyle;
	System::Uitypes::TColor FColor;
	int FRadioSize;
	Vcl::Graphics::TBitmap* FRadioOffGlyph;
	Vcl::Graphics::TBitmap* FRadioOnGlyph;
	bool FFlatButton;
	int FProgressMarginY;
	int FProgressMarginX;
	bool FProgressXP;
	bool FDropDownAlwaysVisible;
	bool FSpinButtonsAlwaysVisible;
	bool FNoDisabledCheckRadioLook;
	bool FNoDisabledButtonLook;
	System::Uitypes::TColor FCommentColor;
	System::Uitypes::TColor FProgressBorderColor;
	System::Uitypes::TColor FFixedGradientFrom;
	System::Uitypes::TColor FFixedGradientTo;
	System::Uitypes::TColor FFixedGradientMirrorFrom;
	System::Uitypes::TColor FFixedGradientMirrorTo;
	System::Uitypes::TColor FFixedGradientHoverFrom;
	System::Uitypes::TColor FFixedGradientHoverTo;
	System::Uitypes::TColor FFixedGradientHoverMirrorFrom;
	System::Uitypes::TColor FFixedGradientHoverMirrorTo;
	System::Uitypes::TColor FFixedGradientHoverBorder;
	System::Uitypes::TColor FFixedGradientDownFrom;
	System::Uitypes::TColor FFixedGradientDownTo;
	System::Uitypes::TColor FFixedGradientDownMirrorFrom;
	System::Uitypes::TColor FFixedGradientDownMirrorTo;
	System::Uitypes::TColor FFixedGradientDownBorder;
	bool FFixedDropdownButton;
	bool FCheckAlwaysActive;
	bool FRadioAlwaysActive;
	int FDropDownCount;
	Advdropdown::THeaderAppearance* FDropDownHeader;
	Advdropdown::TFooterAppearance* FDropDownFooter;
	int FHintMaxWidth;
	bool FButtonPrefix;
	int FDropDownButtonWidth;
	bool FRadioRange;
	int FProgressHeight;
	void __fastcall SetCheckBoxSize(const int Value);
	void __fastcall SetControlStyle(const TControlStyle Value);
	void __fastcall SetCheckedGlyph(Vcl::Graphics::TBitmap* const Value);
	void __fastcall SetUnCheckedGlyph(Vcl::Graphics::TBitmap* const Value);
	void __fastcall SetColor(const System::Uitypes::TColor Value);
	void __fastcall SetRadioOffGlyph(Vcl::Graphics::TBitmap* const Value);
	void __fastcall SetRadioOnGlyph(Vcl::Graphics::TBitmap* const Value);
	void __fastcall SetRadioSize(const int Value);
	void __fastcall SetFlatButton(const bool Value);
	void __fastcall SetProgressMarginX(const int Value);
	void __fastcall SetProgressMarginY(const int Value);
	void __fastcall SetProgressXP(const bool Value);
	void __fastcall SetDropDownAlwaysVisible(const bool Value);
	void __fastcall SetSpinButtonsAlwaysVisible(const bool Value);
	void __fastcall SetNoDisabledCheckRadioLook(const bool Value);
	void __fastcall SetNoDisabledButtonLook(const bool Value);
	void __fastcall SetCommentColor(const System::Uitypes::TColor Value);
	void __fastcall SetFixedGradientFrom(const System::Uitypes::TColor Value);
	void __fastcall SetFixedGradientTo(const System::Uitypes::TColor Value);
	void __fastcall SetFixedGradientMirrorFrom(const System::Uitypes::TColor Value);
	void __fastcall SetFixedGradientMirrorTo(const System::Uitypes::TColor Value);
	void __fastcall SetFixedGradientHoverFrom(const System::Uitypes::TColor Value);
	void __fastcall SetFixedGradientHoverTo(const System::Uitypes::TColor Value);
	void __fastcall SetFixedGradientHoverMirrorFrom(const System::Uitypes::TColor Value);
	void __fastcall SetFixedGradientHoverMirrorTo(const System::Uitypes::TColor Value);
	void __fastcall SetFixedGradientHoverBorder(const System::Uitypes::TColor Value);
	void __fastcall SetFixedGradientDownFrom(const System::Uitypes::TColor Value);
	void __fastcall SetFixedGradientDownTo(const System::Uitypes::TColor Value);
	void __fastcall SetFixedGradientDownMirrorFrom(const System::Uitypes::TColor Value);
	void __fastcall SetFixedGradientDownMirrorTo(const System::Uitypes::TColor Value);
	void __fastcall SetFixedGradientDownBorder(const System::Uitypes::TColor Value);
	void __fastcall SetDropDownFooter(Advdropdown::TFooterAppearance* const Value);
	void __fastcall SetDropDownHeader(Advdropdown::THeaderAppearance* const Value);
	void __fastcall SetDropDownButtonWidth(const int Value);
	void __fastcall SetRadioRange(const bool Value);
	int __fastcall GetCheckBoxSize();
	void __fastcall SetProgressHeight(const int Value);
	
public:
	__fastcall TControlLook(TAdvStringGrid* AOwner);
	__fastcall virtual ~TControlLook();
	void __fastcall Init();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property bool ButtonPrefix = {read=FButtonPrefix, write=FButtonPrefix, default=0};
	__property System::Uitypes::TColor Color = {read=FColor, write=SetColor, default=0};
	__property System::Uitypes::TColor CommentColor = {read=FCommentColor, write=SetCommentColor, default=255};
	__property Vcl::Graphics::TBitmap* CheckedGlyph = {read=FCheckedGlyph, write=SetCheckedGlyph};
	__property System::Uitypes::TColor FixedGradientFrom = {read=FFixedGradientTo, write=SetFixedGradientTo, default=536870911};
	__property System::Uitypes::TColor FixedGradientTo = {read=FFixedGradientFrom, write=SetFixedGradientFrom, default=536870911};
	__property System::Uitypes::TColor FixedGradientMirrorFrom = {read=FFixedGradientMirrorTo, write=SetFixedGradientMirrorTo, default=536870911};
	__property System::Uitypes::TColor FixedGradientMirrorTo = {read=FFixedGradientMirrorFrom, write=SetFixedGradientMirrorFrom, default=536870911};
	__property System::Uitypes::TColor FixedGradientHoverFrom = {read=FFixedGradientHoverTo, write=SetFixedGradientHoverTo, default=16777215};
	__property System::Uitypes::TColor FixedGradientHoverTo = {read=FFixedGradientHoverFrom, write=SetFixedGradientHoverFrom, default=8421504};
	__property System::Uitypes::TColor FixedGradientHoverMirrorFrom = {read=FFixedGradientHoverMirrorTo, write=SetFixedGradientHoverMirrorTo, default=536870911};
	__property System::Uitypes::TColor FixedGradientHoverMirrorTo = {read=FFixedGradientHoverMirrorFrom, write=SetFixedGradientHoverMirrorFrom, default=536870911};
	__property System::Uitypes::TColor FixedGradientHoverBorder = {read=FFixedGradientHoverBorder, write=SetFixedGradientHoverBorder, default=12632256};
	__property System::Uitypes::TColor FixedGradientDownFrom = {read=FFixedGradientDownTo, write=SetFixedGradientDownTo, default=12632256};
	__property System::Uitypes::TColor FixedGradientDownTo = {read=FFixedGradientDownFrom, write=SetFixedGradientDownFrom, default=8421504};
	__property System::Uitypes::TColor FixedGradientDownMirrorFrom = {read=FFixedGradientDownMirrorTo, write=SetFixedGradientDownMirrorTo, default=536870911};
	__property System::Uitypes::TColor FixedGradientDownMirrorTo = {read=FFixedGradientDownMirrorFrom, write=SetFixedGradientDownMirrorFrom, default=536870911};
	__property System::Uitypes::TColor FixedGradientDownBorder = {read=FFixedGradientDownBorder, write=SetFixedGradientDownBorder, default=8421504};
	__property bool FixedDropDownButton = {read=FFixedDropdownButton, write=FFixedDropdownButton, default=0};
	__property int HintMaxWidth = {read=FHintMaxWidth, write=FHintMaxWidth, default=0};
	__property Vcl::Graphics::TBitmap* UnCheckedGlyph = {read=FUnCheckedGlyph, write=SetUnCheckedGlyph};
	__property Vcl::Graphics::TBitmap* RadioOnGlyph = {read=FRadioOnGlyph, write=SetRadioOnGlyph};
	__property Vcl::Graphics::TBitmap* RadioOffGlyph = {read=FRadioOffGlyph, write=SetRadioOffGlyph};
	__property int CheckSize = {read=GetCheckBoxSize, write=SetCheckBoxSize, default=15};
	__property bool CheckAlwaysActive = {read=FCheckAlwaysActive, write=FCheckAlwaysActive, default=0};
	__property int RadioSize = {read=FRadioSize, write=SetRadioSize, default=10};
	__property bool RadioAlwaysActive = {read=FRadioAlwaysActive, write=FRadioAlwaysActive, default=0};
	__property bool RadioRange = {read=FRadioRange, write=SetRadioRange, default=0};
	__property TControlStyle ControlStyle = {read=FControlStyle, write=SetControlStyle, default=6};
	__property bool DropDownAlwaysVisible = {read=FDropDownAlwaysVisible, write=SetDropDownAlwaysVisible, default=0};
	__property int DropDownButtonWidth = {read=FDropDownButtonWidth, write=SetDropDownButtonWidth, default=16};
	__property int DropDownCount = {read=FDropDownCount, write=FDropDownCount, default=8};
	__property Advdropdown::THeaderAppearance* DropDownHeader = {read=FDropDownHeader, write=SetDropDownHeader};
	__property Advdropdown::TFooterAppearance* DropDownFooter = {read=FDropDownFooter, write=SetDropDownFooter};
	__property bool SpinButtonsAlwaysVisible = {read=FSpinButtonsAlwaysVisible, write=SetSpinButtonsAlwaysVisible, default=0};
	__property bool FlatButton = {read=FFlatButton, write=SetFlatButton, default=0};
	__property bool NoDisabledCheckRadioLook = {read=FNoDisabledCheckRadioLook, write=SetNoDisabledCheckRadioLook, default=0};
	__property bool NoDisabledButtonLook = {read=FNoDisabledButtonLook, write=SetNoDisabledButtonLook, default=0};
	__property System::Uitypes::TColor ProgressBorderColor = {read=FProgressBorderColor, write=FProgressBorderColor, default=8421504};
	__property int ProgressMarginX = {read=FProgressMarginX, write=SetProgressMarginX, default=2};
	__property int ProgressMarginY = {read=FProgressMarginY, write=SetProgressMarginY, default=2};
	__property bool ProgressXP = {read=FProgressXP, write=SetProgressXP, default=0};
	__property int ProgressHeight = {read=FProgressHeight, write=SetProgressHeight, default=0};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TShowModified : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	bool FEnabled;
	System::Uitypes::TColor FColor;
	System::Classes::TNotifyEvent FOnChange;
	void __fastcall SetColor(const System::Uitypes::TColor Value);
	
public:
	__fastcall TShowModified();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property bool Enabled = {read=FEnabled, write=FEnabled, default=0};
	__property System::Uitypes::TColor Color = {read=FColor, write=SetColor, default=65535};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TShowModified() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TSizeWhileTyping : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	bool FHeight;
	bool FWidth;
	
public:
	__fastcall TSizeWhileTyping();
	__fastcall virtual ~TSizeWhileTyping();
	
__published:
	__property bool Height = {read=FHeight, write=FHeight, default=0};
	__property bool Width = {read=FWidth, write=FWidth, default=0};
};

#pragma pack(pop)

enum DECLSPEC_DENUM TColumnSizeLocation : unsigned int { clRegistry, clIniFile };

enum DECLSPEC_DENUM TAutoSizeRows : unsigned int { arAll, arNormal, arFixed, arVisible };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TColumnSize : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	System::Classes::TComponent* Owner;
	bool FSave;
	System::UnicodeString FKey;
	System::UnicodeString FSection;
	bool FStretch;
	int FStretchColumn;
	bool FStretchAll;
	bool FSynchWithGrid;
	bool FSynchNormalCellsOnly;
	TColumnSizeLocation FLocation;
	TAutoSizeRows FRows;
	void __fastcall SetStretch(bool Value);
	void __fastcall SetStretchAll(const bool Value);
	
public:
	__fastcall TColumnSize(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TColumnSize();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property TAutoSizeRows Rows = {read=FRows, write=FRows, default=0};
	__property bool Save = {read=FSave, write=FSave, default=0};
	__property System::UnicodeString Key = {read=FKey, write=FKey};
	__property System::UnicodeString Section = {read=FSection, write=FSection};
	__property bool Stretch = {read=FStretch, write=SetStretch, default=0};
	__property bool StretchAll = {read=FStretchAll, write=SetStretchAll, default=0};
	__property int StretchColumn = {read=FStretchColumn, write=FStretchColumn, default=-1};
	__property bool SynchWithGrid = {read=FSynchWithGrid, write=FSynchWithGrid, default=0};
	__property bool SynchNormalCellsOnly = {read=FSynchNormalCellsOnly, write=FSynchNormalCellsOnly, default=0};
	__property TColumnSizeLocation Location = {read=FLocation, write=FLocation, default=0};
};

#pragma pack(pop)

enum DECLSPEC_DENUM THoverButtonPosition : unsigned int { hbLeftFromColumnLeft, hbRightFromColumnLeft, hbLeftFromColumnRight, hbRightFromColumnRight };

#pragma pack(push,4)
class PASCALIMPLEMENTATION THoverButtonsCollectionItem : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	bool FEnabled;
	System::UnicodeString FHint;
	Vcl::Graphics::TPicture* FPicture;
	System::UnicodeString FCaption;
	int FTag;
	int FImageIndex;
	bool FFlat;
	int FWidth;
	void __fastcall SetPicture(Vcl::Graphics::TPicture* const Value);
	void __fastcall SetCaption(const System::UnicodeString Value);
	void __fastcall SetEnabled(const bool Value);
	void __fastcall SetFlat(const bool Value);
	void __fastcall SetHint(const System::UnicodeString Value);
	void __fastcall SetImageIndex(const int Value);
	
protected:
	HIDESBASE void __fastcall Changed();
	
public:
	__fastcall virtual THoverButtonsCollectionItem(System::Classes::TCollection* Collection);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__fastcall virtual ~THoverButtonsCollectionItem();
	
__published:
	__property System::UnicodeString Caption = {read=FCaption, write=SetCaption};
	__property bool Enabled = {read=FEnabled, write=SetEnabled, default=1};
	__property bool Flat = {read=FFlat, write=SetFlat, default=0};
	__property System::UnicodeString Hint = {read=FHint, write=SetHint};
	__property int ImageIndex = {read=FImageIndex, write=SetImageIndex, default=-1};
	__property Vcl::Graphics::TPicture* Picture = {read=FPicture, write=SetPicture};
	__property int Tag = {read=FTag, write=FTag, default=0};
	__property int Width = {read=FWidth, write=FWidth, default=0};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION THoverButtonsCollection : public System::Classes::TOwnedCollection
{
	typedef System::Classes::TOwnedCollection inherited;
	
public:
	THoverButtonsCollectionItem* operator[](int Index) { return this->Items[Index]; }
	
private:
	bool FUpdated;
	THoverButtonsCollectionItem* __fastcall GetItems(int Index);
	void __fastcall SetItems(int Index, THoverButtonsCollectionItem* const Value);
	
protected:
	virtual void __fastcall Update(System::Classes::TCollectionItem* Item);
	
public:
	__fastcall THoverButtonsCollection(System::Classes::TPersistent* AOwner);
	HIDESBASE THoverButtonsCollectionItem* __fastcall Add();
	HIDESBASE THoverButtonsCollectionItem* __fastcall Insert(int Index);
	__property THoverButtonsCollectionItem* Items[int Index] = {read=GetItems, write=SetItems/*, default*/};
	__property bool Updated = {read=FUpdated, write=FUpdated, nodefault};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~THoverButtonsCollection() { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM THoverRows : unsigned int { hrAll, hrNormal };

#pragma pack(push,4)
class PASCALIMPLEMENTATION THoverButtons : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	System::Classes::TPersistent* FOwner;
	bool FEnabled;
	int FColumn;
	THoverButtonPosition FPosition;
	THoverButtonsCollection* FButtons;
	THoverRows FRows;
	bool FMoveActiveRow;
	void __fastcall SetButtons(THoverButtonsCollection* const Value);
	
protected:
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	
public:
	__fastcall THoverButtons(System::Classes::TPersistent* AOwner);
	__fastcall virtual ~THoverButtons();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property bool Enabled = {read=FEnabled, write=FEnabled, default=0};
	__property THoverButtonsCollection* Buttons = {read=FButtons, write=SetButtons};
	__property int Column = {read=FColumn, write=FColumn, default=0};
	__property bool MoveActiveRow = {read=FMoveActiveRow, write=FMoveActiveRow, default=1};
	__property THoverButtonPosition Position = {read=FPosition, write=FPosition, default=0};
	__property THoverRows Rows = {read=FRows, write=FRows, default=1};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TGrouping : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	bool FMergeHeader;
	bool FMergeSummary;
	System::Uitypes::TColor FHeaderColor;
	System::Uitypes::TColor FSummaryColor;
	System::Uitypes::TColor FHeaderColorTo;
	System::Uitypes::TColor FHeaderTextColor;
	bool FSummary;
	System::Uitypes::TColor FSummaryTextColor;
	System::Uitypes::TColor FSummaryColorTo;
	bool FHeaderUnderline;
	bool FSummaryLine;
	int FSummaryLineWidth;
	int FHeaderLineWidth;
	System::Uitypes::TColor FSummaryLineColor;
	System::Uitypes::TColor FHeaderLineColor;
	bool FShowGroupCount;
	System::UnicodeString FGroupCountFormat;
	bool FAutoSelectGroup;
	bool FAutoCheckGroup;
	
public:
	__fastcall TGrouping();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property bool AutoSelectGroup = {read=FAutoSelectGroup, write=FAutoSelectGroup, default=0};
	__property bool AutoCheckGroup = {read=FAutoCheckGroup, write=FAutoCheckGroup, default=0};
	__property System::UnicodeString GroupCountFormat = {read=FGroupCountFormat, write=FGroupCountFormat};
	__property System::Uitypes::TColor HeaderColor = {read=FHeaderColor, write=FHeaderColor, default=536870911};
	__property System::Uitypes::TColor HeaderColorTo = {read=FHeaderColorTo, write=FHeaderColorTo, default=536870911};
	__property System::Uitypes::TColor HeaderTextColor = {read=FHeaderTextColor, write=FHeaderTextColor, default=536870911};
	__property bool HeaderUnderline = {read=FHeaderUnderline, write=FHeaderUnderline, default=0};
	__property System::Uitypes::TColor HeaderLineColor = {read=FHeaderLineColor, write=FHeaderLineColor, default=16711680};
	__property int HeaderLineWidth = {read=FHeaderLineWidth, write=FHeaderLineWidth, default=2};
	__property bool MergeHeader = {read=FMergeHeader, write=FMergeHeader, default=0};
	__property bool MergeSummary = {read=FMergeSummary, write=FMergeSummary, default=0};
	__property bool ShowGroupCount = {read=FShowGroupCount, write=FShowGroupCount, default=0};
	__property bool Summary = {read=FSummary, write=FSummary, default=0};
	__property System::Uitypes::TColor SummaryColor = {read=FSummaryColor, write=FSummaryColor, default=536870911};
	__property System::Uitypes::TColor SummaryColorTo = {read=FSummaryColorTo, write=FSummaryColorTo, default=536870911};
	__property System::Uitypes::TColor SummaryTextColor = {read=FSummaryTextColor, write=FSummaryTextColor, default=536870911};
	__property bool SummaryLine = {read=FSummaryLine, write=FSummaryLine, default=0};
	__property System::Uitypes::TColor SummaryLineColor = {read=FSummaryLineColor, write=FSummaryLineColor, default=16711680};
	__property int SummaryLineWidth = {read=FSummaryLineWidth, write=FSummaryLineWidth, default=2};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TGrouping() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION THTMLSettings : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	bool FAutoPreview;
	bool FConvertSpecialChars;
	bool FNonBreakingText;
	bool FSaveColor;
	bool FSaveFonts;
	System::UnicodeString FFooterFile;
	System::UnicodeString FHeaderFile;
	int FBorderSize;
	int FCellSpacing;
	int FCellPadding;
	System::UnicodeString FTableStyle;
	System::UnicodeString FPrefixTag;
	System::UnicodeString FSuffixTag;
	System::UnicodeString FSummary;
	System::UnicodeString FHeaderText;
	System::UnicodeString FFooterText;
	int FWidth;
	Advobj::TIntList* FColWidths;
	bool FXHTML;
	bool FExportImages;
	System::UnicodeString FImageBaseName;
	System::UnicodeString FImageFolder;
	
public:
	__fastcall THTMLSettings();
	__fastcall virtual ~THTMLSettings();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property Advobj::TIntList* ColWidths = {read=FColWidths};
	
__published:
	__property bool AutoPreview = {read=FAutoPreview, write=FAutoPreview, default=0};
	__property int BorderSize = {read=FBorderSize, write=FBorderSize, default=1};
	__property int CellSpacing = {read=FCellSpacing, write=FCellSpacing, default=0};
	__property int CellPadding = {read=FCellPadding, write=FCellPadding, default=0};
	__property bool ConvertSpecialChars = {read=FConvertSpecialChars, write=FConvertSpecialChars, default=0};
	__property bool ExportImages = {read=FExportImages, write=FExportImages, default=1};
	__property System::UnicodeString FooterFile = {read=FFooterFile, write=FFooterFile};
	__property System::UnicodeString FooterText = {read=FFooterText, write=FFooterText};
	__property System::UnicodeString HeaderFile = {read=FHeaderFile, write=FHeaderFile};
	__property System::UnicodeString HeaderText = {read=FHeaderText, write=FHeaderText};
	__property System::UnicodeString ImageFolder = {read=FImageFolder, write=FImageFolder};
	__property System::UnicodeString ImageBaseName = {read=FImageBaseName, write=FImageBaseName};
	__property bool NonBreakingText = {read=FNonBreakingText, write=FNonBreakingText, default=0};
	__property System::UnicodeString PrefixTag = {read=FPrefixTag, write=FPrefixTag};
	__property bool SaveColor = {read=FSaveColor, write=FSaveColor, default=1};
	__property bool SaveFonts = {read=FSaveFonts, write=FSaveFonts, default=1};
	__property System::UnicodeString SuffixTag = {read=FSuffixTag, write=FSuffixTag};
	__property System::UnicodeString Summary = {read=FSummary, write=FSummary};
	__property System::UnicodeString TableStyle = {read=FTableStyle, write=FTableStyle};
	__property int Width = {read=FWidth, write=FWidth, default=100};
	__property bool XHTML = {read=FXHTML, write=FXHTML, default=0};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TBalloonSettings : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	bool FInit;
	System::Uitypes::TColor FBackgroundColor;
	System::Uitypes::TColor FTextColor;
	int FReshowDelay;
	int FInitialDelay;
	int FAutoHideDelay;
	System::Byte FTransparency;
	bool FEnable;
	bool FShowCell;
	System::Classes::TNotifyEvent FOnEnableChange;
	void __fastcall SetEnable(const bool Value);
	
public:
	__fastcall TBalloonSettings();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property int AutoHideDelay = {read=FAutoHideDelay, write=FAutoHideDelay, default=-1};
	__property System::Uitypes::TColor BackgroundColor = {read=FBackgroundColor, write=FBackgroundColor, default=536870911};
	__property bool Enable = {read=FEnable, write=SetEnable, default=0};
	__property int InitialDelay = {read=FInitialDelay, write=FInitialDelay, default=-1};
	__property int ReshowDelay = {read=FReshowDelay, write=FReshowDelay, default=-1};
	__property bool ShowCell = {read=FShowCell, write=FShowCell, default=1};
	__property System::Uitypes::TColor TextColor = {read=FTextColor, write=FTextColor, default=536870911};
	__property System::Byte Transparency = {read=FTransparency, write=FTransparency, default=0};
	__property System::Classes::TNotifyEvent OnEnableChange = {read=FOnEnableChange, write=FOnEnableChange};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TBalloonSettings() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TPrintSettings : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	TPrintPosition FTime;
	TPrintPosition FDate;
	TPrintPosition FPageNr;
	System::UnicodeString FPageNumSep;
	System::UnicodeString FDateFormat;
	TPrintPosition FTitle;
	Vcl::Graphics::TFont* FFont;
	Vcl::Graphics::TFont* FHeaderFont;
	Vcl::Graphics::TFont* FFooterFont;
	TPrintBorders FBorders;
	Vcl::Graphics::TPenStyle FBorderStyle;
	System::UnicodeString FTitleText;
	System::Classes::TStringList* FTitleLines;
	bool FCentered;
	bool FRepeatFixedRows;
	bool FRepeatFixedCols;
	int FFooterSize;
	int FHeaderSize;
	int FLeftSize;
	int FRightSize;
	int FColumnSpacing;
	int FRowSpacing;
	int FTitleSpacing;
	System::Uitypes::TPrinterOrientation FOrientation;
	System::UnicodeString FPagePrefix;
	System::UnicodeString FPageSuffix;
	int FFixedHeight;
	bool FUseFixedHeight;
	int FFixedWidth;
	bool FUseFixedWidth;
	TFitToPage FFitToPage;
	bool FNoAutoSize;
	bool FPrintGraphics;
	System::UnicodeString FJobName;
	bool FNoAutoSizeRow;
	int FPageNumberOffset;
	int FMaxPagesOffset;
	Vcl::Graphics::TFont* FFixedFont;
	bool FUseDisplayFont;
	bool FUseDefaultOrientation;
	bool FFixedCellsAlways;
	System::Uitypes::TColor FBorderColor;
	bool FPrintComments;
	bool FScaleHeader;
	bool FScaleFooter;
	void __fastcall SetPrintFont(Vcl::Graphics::TFont* Value);
	void __fastcall SetPrintHeaderFont(Vcl::Graphics::TFont* Value);
	void __fastcall SetPrintFooterFont(Vcl::Graphics::TFont* Value);
	void __fastcall SetTitleLines(System::Classes::TStringList* Value);
	void __fastcall SetFixedFont(Vcl::Graphics::TFont* const Value);
	
public:
	__fastcall TPrintSettings(TAdvStringGrid* AOwner);
	__fastcall virtual ~TPrintSettings();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property bool FixedCellsAlways = {read=FFixedCellsAlways, write=FFixedCellsAlways, nodefault};
	__property bool PrintComments = {read=FPrintComments, write=FPrintComments, nodefault};
	__property bool ScaleHeader = {read=FScaleHeader, write=FScaleHeader, nodefault};
	__property bool ScaleFooter = {read=FScaleFooter, write=FScaleFooter, nodefault};
	
__published:
	__property int FooterSize = {read=FFooterSize, write=FFooterSize, default=0};
	__property int HeaderSize = {read=FHeaderSize, write=FHeaderSize, default=0};
	__property TPrintPosition Time = {read=FTime, write=FTime, default=0};
	__property TPrintPosition Date = {read=FDate, write=FDate, default=0};
	__property System::UnicodeString DateFormat = {read=FDateFormat, write=FDateFormat};
	__property TPrintPosition PageNr = {read=FPageNr, write=FPageNr, default=0};
	__property TPrintPosition Title = {read=FTitle, write=FTitle, default=0};
	__property System::UnicodeString TitleText = {read=FTitleText, write=FTitleText};
	__property System::Classes::TStringList* TitleLines = {read=FTitleLines, write=SetTitleLines};
	__property Vcl::Graphics::TFont* Font = {read=FFont, write=SetPrintFont};
	__property Vcl::Graphics::TFont* FixedFont = {read=FFixedFont, write=SetFixedFont};
	__property Vcl::Graphics::TFont* HeaderFont = {read=FHeaderFont, write=SetPrintHeaderFont};
	__property Vcl::Graphics::TFont* FooterFont = {read=FFooterFont, write=SetPrintFooterFont};
	__property TPrintBorders Borders = {read=FBorders, write=FBorders, default=1};
	__property Vcl::Graphics::TPenStyle BorderStyle = {read=FBorderStyle, write=FBorderStyle, default=0};
	__property System::Uitypes::TColor BorderColor = {read=FBorderColor, write=FBorderColor, default=0};
	__property bool Centered = {read=FCentered, write=FCentered, default=1};
	__property bool RepeatFixedRows = {read=FRepeatFixedRows, write=FRepeatFixedRows, default=0};
	__property bool RepeatFixedCols = {read=FRepeatFixedCols, write=FRepeatFixedCols, default=0};
	__property int LeftSize = {read=FLeftSize, write=FLeftSize, default=0};
	__property int RightSize = {read=FRightSize, write=FRightSize, default=0};
	__property int ColumnSpacing = {read=FColumnSpacing, write=FColumnSpacing, default=0};
	__property int RowSpacing = {read=FRowSpacing, write=FRowSpacing, default=0};
	__property int TitleSpacing = {read=FTitleSpacing, write=FTitleSpacing, default=0};
	__property System::Uitypes::TPrinterOrientation Orientation = {read=FOrientation, write=FOrientation, default=0};
	__property System::UnicodeString PagePrefix = {read=FPagePrefix, write=FPagePrefix, stored=true};
	__property System::UnicodeString PageSuffix = {read=FPageSuffix, write=FPageSuffix};
	__property int PageNumberOffset = {read=FPageNumberOffset, write=FPageNumberOffset, default=0};
	__property int MaxPagesOffset = {read=FMaxPagesOffset, write=FMaxPagesOffset, default=0};
	__property int FixedWidth = {read=FFixedWidth, write=FFixedWidth, default=0};
	__property int FixedHeight = {read=FFixedHeight, write=FFixedHeight, default=0};
	__property bool UseFixedHeight = {read=FUseFixedHeight, write=FUseFixedHeight, default=0};
	__property bool UseFixedWidth = {read=FUseFixedWidth, write=FUseFixedWidth, default=0};
	__property TFitToPage FitToPage = {read=FFitToPage, write=FFitToPage, default=0};
	__property System::UnicodeString JobName = {read=FJobName, write=FJobName};
	__property System::UnicodeString PageNumSep = {read=FPageNumSep, write=FPageNumSep};
	__property bool NoAutoSize = {read=FNoAutoSize, write=FNoAutoSize, default=0};
	__property bool NoAutoSizeRow = {read=FNoAutoSizeRow, write=FNoAutoSizeRow, default=0};
	__property bool PrintGraphics = {read=FPrintGraphics, write=FPrintGraphics, default=0};
	__property bool UseDisplayFont = {read=FUseDisplayFont, write=FUseDisplayFont, default=1};
	__property bool UseDefaultOrientation = {read=FUseDefaultOrientation, write=FUseDefaultOrientation, default=0};
};

#pragma pack(pop)

enum DECLSPEC_DENUM TBackGroundDisplay : unsigned int { bdTile, bdFixed, bdGradientHorz, bdGradientVert };

enum DECLSPEC_DENUM TBackGroundCells : unsigned int { bcNormal, bcFixed, bcAll };

enum DECLSPEC_DENUM TIndexSortKey : unsigned int { ikShift, ikCtrl };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSortSettings : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	TAdvStringGrid* FGrid;
	bool FSortShow;
	bool FSortIndexShow;
	bool FSortFull;
	bool FSortSingleColumn;
	bool FSortIgnoreBlanks;
	TSortBlankPosition FSortBlankPos;
	bool FSortAutoFormat;
	TSortDirection FSortDirection;
	Vcl::Graphics::TBitmap* FSortUpGlyph;
	Vcl::Graphics::TBitmap* FSortDownGlyph;
	Vcl::Graphics::TBitmap* FIndexUpGlyph;
	Vcl::Graphics::TBitmap* FIndexDownGlyph;
	bool FSortNormalCellsOnly;
	bool FSortFixedCols;
	int FSortColumn;
	int FSortRow;
	bool FAutoColumnMerge;
	System::Uitypes::TColor FSortIndexColor;
	TSortDirection FInitSortDirection;
	bool FUndoSort;
	bool FAutoSortForGrouping;
	bool FVirtualCells;
	bool FIgnoreCase;
	System::Uitypes::TColor FHeaderColor;
	System::Uitypes::TColor FHeaderColorTo;
	System::Uitypes::TColor FHeaderMirrorColor;
	System::Uitypes::TColor FHeaderMirrorColorTo;
	TIndexSortKey FIndexSortKey;
	Advobj::TSortStyle FDefaultFormat;
	Vcl::Graphics::TBitmap* __fastcall GetDownGlyph();
	Vcl::Graphics::TBitmap* __fastcall GetUpGlyph();
	void __fastcall SetDownGlyph(Vcl::Graphics::TBitmap* const Value);
	void __fastcall SetUpGlyph(Vcl::Graphics::TBitmap* const Value);
	void __fastcall SetSortRow(const int Value);
	void __fastcall SetIndexDownGlyph(Vcl::Graphics::TBitmap* const Value);
	void __fastcall SetIndexUpGlyph(Vcl::Graphics::TBitmap* const Value);
	void __fastcall SetShow(const bool Value);
	void __fastcall SetHeaderColor(const System::Uitypes::TColor Value);
	void __fastcall SetHeaderColorTo(const System::Uitypes::TColor Value);
	void __fastcall SetHeaderMirrorColor(const System::Uitypes::TColor Value);
	void __fastcall SetHeaderMirrorColorTo(const System::Uitypes::TColor Value);
	void __fastcall SetSortColumn(const int Value);
	
public:
	__fastcall TSortSettings(TAdvStringGrid* AOwner);
	__fastcall virtual ~TSortSettings();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	void __fastcall Remove();
	System::UnicodeString __fastcall SaveToString();
	void __fastcall LoadFromString(const System::UnicodeString Value);
	void __fastcall ToggleDirection();
	
__published:
	__property bool AutoSortForGrouping = {read=FAutoSortForGrouping, write=FAutoSortForGrouping, default=1};
	__property bool AutoColumnMerge = {read=FAutoColumnMerge, write=FAutoColumnMerge, default=0};
	__property Advobj::TSortStyle DefaultFormat = {read=FDefaultFormat, write=FDefaultFormat, default=0};
	__property int Column = {read=FSortColumn, write=SetSortColumn, default=-1};
	__property bool Show = {read=FSortShow, write=SetShow, default=0};
	__property bool IndexShow = {read=FSortIndexShow, write=FSortIndexShow, default=0};
	__property System::Uitypes::TColor IndexColor = {read=FSortIndexColor, write=FSortIndexColor, default=65535};
	__property TIndexSortKey IndexSortKey = {read=FIndexSortKey, write=FIndexSortKey, default=0};
	__property bool Full = {read=FSortFull, write=FSortFull, default=1};
	__property bool SingleColumn = {read=FSortSingleColumn, write=FSortSingleColumn, default=0};
	__property bool IgnoreBlanks = {read=FSortIgnoreBlanks, write=FSortIgnoreBlanks, default=0};
	__property TSortBlankPosition BlankPos = {read=FSortBlankPos, write=FSortBlankPos, default=0};
	__property bool AutoFormat = {read=FSortAutoFormat, write=FSortAutoFormat, default=1};
	__property TSortDirection Direction = {read=FSortDirection, write=FSortDirection, default=0};
	__property Vcl::Graphics::TBitmap* UpGlyph = {read=GetUpGlyph, write=SetUpGlyph};
	__property Vcl::Graphics::TBitmap* DownGlyph = {read=GetDownGlyph, write=SetDownGlyph};
	__property bool IgnoreCase = {read=FIgnoreCase, write=FIgnoreCase, default=0};
	__property Vcl::Graphics::TBitmap* IndexUpGlyph = {read=FIndexUpGlyph, write=SetIndexUpGlyph};
	__property Vcl::Graphics::TBitmap* IndexDownGlyph = {read=FIndexDownGlyph, write=SetIndexDownGlyph};
	__property TSortDirection InitSortDirection = {read=FInitSortDirection, write=FInitSortDirection, default=0};
	__property bool FixedCols = {read=FSortFixedCols, write=FSortFixedCols, default=0};
	__property bool NormalCellsOnly = {read=FSortNormalCellsOnly, write=FSortNormalCellsOnly, default=0};
	__property int Row = {read=FSortRow, write=SetSortRow, default=0};
	__property bool UndoSort = {read=FUndoSort, write=FUndoSort, default=0};
	__property bool SortOnVirtualCells = {read=FVirtualCells, write=FVirtualCells, default=1};
	__property System::Uitypes::TColor HeaderColor = {read=FHeaderColor, write=SetHeaderColor, default=536870911};
	__property System::Uitypes::TColor HeaderColorTo = {read=FHeaderColorTo, write=SetHeaderColorTo, default=536870911};
	__property System::Uitypes::TColor HeaderMirrorColor = {read=FHeaderMirrorColor, write=SetHeaderMirrorColor, default=536870911};
	__property System::Uitypes::TColor HeaderMirrorColorTo = {read=FHeaderMirrorColorTo, write=SetHeaderMirrorColorTo, default=536870911};
};

#pragma pack(pop)

enum DECLSPEC_DENUM TProgressStyle : unsigned int { psXP, psClassic };

class PASCALIMPLEMENTATION TGridProgressAppearance : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	System::Uitypes::TColor FUnCompleteFontColor;
	System::Uitypes::TColor FCompleteColor;
	System::Uitypes::TColor FUnCompleteColor;
	System::Uitypes::TColor FCompleteFontColor;
	System::Classes::TNotifyEvent FOnChange;
	bool FStacked;
	bool FShowPercentage;
	bool FShowBorder;
	bool FCompletionSmooth;
	bool FShowGradient;
	int FLevel2Perc;
	int FLevel1Perc;
	int FSteps;
	System::Uitypes::TColor FLevel3Color;
	System::Uitypes::TColor FLevel1Color;
	System::Uitypes::TColor FLevel0Color;
	System::Uitypes::TColor FLevel3ColorTo;
	System::Uitypes::TColor FLevel2ColorTo;
	System::Uitypes::TColor FLevel0ColorTo;
	System::Uitypes::TColor FLevel1ColorTo;
	System::Uitypes::TColor FBorderColor;
	System::Uitypes::TColor FLevel2Color;
	TProgressStyle FStyle;
	void __fastcall SetCompleteColor(const System::Uitypes::TColor Value);
	void __fastcall SetCompleteFontColor(const System::Uitypes::TColor Value);
	void __fastcall SetUnCompleteColor(const System::Uitypes::TColor Value);
	void __fastcall SetUnCompleteFontColor(const System::Uitypes::TColor Value);
	void __fastcall SetBorderColor(const System::Uitypes::TColor Value);
	void __fastcall SetCompletionSmooth(const bool Value);
	void __fastcall SetLevel0Color(const System::Uitypes::TColor Value);
	void __fastcall SetLevel0ColorTo(const System::Uitypes::TColor Value);
	void __fastcall SetLevel1Color(const System::Uitypes::TColor Value);
	void __fastcall SetLevel1ColorTo(const System::Uitypes::TColor Value);
	void __fastcall SetLevel1Perc(const int Value);
	void __fastcall SetLevel2Color(const System::Uitypes::TColor Value);
	void __fastcall SetLevel2ColorTo(const System::Uitypes::TColor Value);
	void __fastcall SetLevel2Perc(const int Value);
	void __fastcall SetLevel3Color(const System::Uitypes::TColor Value);
	void __fastcall SetLevel3ColorTo(const System::Uitypes::TColor Value);
	void __fastcall SetShowBorder(const bool Value);
	void __fastcall SetShowGradient(const bool Value);
	void __fastcall SetShowPercentage(const bool Value);
	void __fastcall SetStacked(const bool Value);
	void __fastcall SetSteps(const int Value);
	void __fastcall SetStyle(const TProgressStyle Value);
	
protected:
	void __fastcall Changed();
	
public:
	__fastcall TGridProgressAppearance();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property TProgressStyle Style = {read=FStyle, write=SetStyle, default=0};
	
__published:
	__property System::Uitypes::TColor CompleteColor = {read=FCompleteColor, write=SetCompleteColor, default=255};
	__property System::Uitypes::TColor CompleteFontColor = {read=FCompleteFontColor, write=SetCompleteFontColor, default=16711680};
	__property System::Uitypes::TColor UnCompleteColor = {read=FUnCompleteColor, write=SetUnCompleteColor, default=536870911};
	__property System::Uitypes::TColor UnCompleteFontColor = {read=FUnCompleteFontColor, write=SetUnCompleteFontColor, default=-16777208};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property System::Uitypes::TColor Level0Color = {read=FLevel0Color, write=SetLevel0Color, default=65280};
	__property System::Uitypes::TColor Level0ColorTo = {read=FLevel0ColorTo, write=SetLevel0ColorTo, default=14811105};
	__property System::Uitypes::TColor Level1Color = {read=FLevel1Color, write=SetLevel1Color, default=65535};
	__property System::Uitypes::TColor Level1ColorTo = {read=FLevel1ColorTo, write=SetLevel1ColorTo, default=13303807};
	__property System::Uitypes::TColor Level2Color = {read=FLevel2Color, write=SetLevel2Color, default=5483007};
	__property System::Uitypes::TColor Level2ColorTo = {read=FLevel2ColorTo, write=SetLevel2ColorTo, default=11064319};
	__property System::Uitypes::TColor Level3Color = {read=FLevel3Color, write=SetLevel3Color, default=255};
	__property System::Uitypes::TColor Level3ColorTo = {read=FLevel3ColorTo, write=SetLevel3ColorTo, default=13290239};
	__property int Level1Perc = {read=FLevel1Perc, write=SetLevel1Perc, default=70};
	__property int Level2Perc = {read=FLevel2Perc, write=SetLevel2Perc, default=90};
	__property System::Uitypes::TColor BorderColor = {read=FBorderColor, write=SetBorderColor, default=0};
	__property bool ShowBorder = {read=FShowBorder, write=SetShowBorder, default=0};
	__property bool Stacked = {read=FStacked, write=SetStacked, default=0};
	__property bool ShowPercentage = {read=FShowPercentage, write=SetShowPercentage, default=1};
	__property bool CompletionSmooth = {read=FCompletionSmooth, write=SetCompletionSmooth, default=1};
	__property bool ShowGradient = {read=FShowGradient, write=SetShowGradient, default=1};
	__property int Steps = {read=FSteps, write=SetSteps, default=11};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TGridProgressAppearance() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TBackGround : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	TAdvStringGrid* FGrid;
	int FTop;
	int FLeft;
	TBackGroundDisplay FDisplay;
	TBackGroundCells FBackgroundCells;
	System::Uitypes::TColor FColorTo;
	System::Uitypes::TColor FColor;
	void __fastcall SetBitmap(Vcl::Graphics::TBitmap* Value);
	void __fastcall SetTop(int Value);
	void __fastcall SetLeft(int Value);
	void __fastcall SetDisplay(TBackGroundDisplay Value);
	void __fastcall SetBackGroundCells(const TBackGroundCells Value);
	void __fastcall SetColor(const System::Uitypes::TColor Value);
	void __fastcall SetColorTo(const System::Uitypes::TColor Value);
	Vcl::Graphics::TBitmap* FBitmap;
	
public:
	__fastcall TBackGround(TAdvStringGrid* AGrid);
	__fastcall virtual ~TBackGround();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property int Top = {read=FTop, write=SetTop, default=0};
	__property int Left = {read=FLeft, write=SetLeft, default=0};
	__property TBackGroundDisplay Display = {read=FDisplay, write=SetDisplay, default=0};
	__property Vcl::Graphics::TBitmap* Bitmap = {read=FBitmap, write=SetBitmap};
	__property TBackGroundCells Cells = {read=FBackgroundCells, write=SetBackGroundCells, default=0};
	__property System::Uitypes::TColor Color = {read=FColor, write=SetColor, default=-16777211};
	__property System::Uitypes::TColor ColorTo = {read=FColorTo, write=SetColorTo, default=-16777201};
};

#pragma pack(pop)

enum DECLSPEC_DENUM TEditStyle : unsigned int { esInplace, esPopup };

class PASCALIMPLEMENTATION TEditLink : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	TAdvStringGrid* FOwner;
	bool FWantKeyLeftRight;
	bool FWantKeyUpDown;
	bool FWantKeyHomeEnd;
	bool FWantKeyPriorNext;
	bool FWantKeyReturn;
	bool FWantKeyEscape;
	TEditStyle FEditStyle;
	Vcl::Forms::TForm* FPopupForm;
	int FPopupWidth;
	int FPopupHeight;
	bool FForcedExit;
	System::Types::TPoint FEditCell;
	int FTag;
	bool FAutoPopupWidth;
	int FPopupLeft;
	int FPopupTop;
	bool FSubClassed;
	bool FWantReturns;
	bool FWantTabs;
	bool FWantHTML;
	bool FKeepFocus;
	bool FDropDown;
	
protected:
	__property bool ForcedExit = {read=FForcedExit, write=FForcedExit, nodefault};
	
public:
	__fastcall virtual TEditLink(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TEditLink();
	virtual void __fastcall EditKeyDown(System::TObject* Sender, System::Word &Key, System::Classes::TShiftState Shift);
	void __fastcall EditExit(System::TObject* Sender);
	void __fastcall FormExit(System::TObject* Sender);
	Vcl::Controls::TWinControl* __fastcall GetParent();
	virtual Vcl::Controls::TWinControl* __fastcall GetEditControl();
	System::UnicodeString __fastcall GetCellValue();
	void __fastcall SetCellValue(System::UnicodeString s);
	virtual void __fastcall CreateEditor(Vcl::Controls::TWinControl* AParent);
	virtual void __fastcall DestroyEditor();
	virtual void __fastcall HideEditor();
	void __fastcall RestoreWinProc();
	virtual void __fastcall SetFocus(bool Value);
	virtual void __fastcall SetRect(const System::Types::TRect &r);
	virtual void __fastcall SetVisible(bool Value);
	virtual void __fastcall SetProperties();
	virtual void __fastcall SetCellProps(System::Uitypes::TColor AColor, Vcl::Graphics::TFont* AFont);
	virtual System::UnicodeString __fastcall GetEditorValue();
	virtual void __fastcall SetEditorValue(System::UnicodeString s);
	__property TAdvStringGrid* Grid = {read=FOwner};
	__property bool KeepFocus = {read=FKeepFocus, write=FKeepFocus, nodefault};
	__property System::Types::TPoint EditCell = {read=FEditCell};
	__property bool WantReturns = {read=FWantReturns, write=FWantReturns, nodefault};
	__property bool WantTabs = {read=FWantTabs, write=FWantTabs, nodefault};
	__property bool WantHTML = {read=FWantHTML, write=FWantHTML, nodefault};
	
__published:
	__property bool AutoPopupWidth = {read=FAutoPopupWidth, write=FAutoPopupWidth, default=0};
	__property TEditStyle EditStyle = {read=FEditStyle, write=FEditStyle, default=0};
	__property bool DropDown = {read=FDropDown, write=FDropDown, default=0};
	__property int PopupLeft = {read=FPopupLeft, write=FPopupLeft, default=-1};
	__property int PopupTop = {read=FPopupTop, write=FPopupTop, default=-1};
	__property int PopupWidth = {read=FPopupWidth, write=FPopupWidth, default=0};
	__property int PopupHeight = {read=FPopupHeight, write=FPopupHeight, default=0};
	__property bool WantKeyLeftRight = {read=FWantKeyLeftRight, write=FWantKeyLeftRight, nodefault};
	__property bool WantKeyUpDown = {read=FWantKeyUpDown, write=FWantKeyUpDown, nodefault};
	__property bool WantKeyHomeEnd = {read=FWantKeyHomeEnd, write=FWantKeyHomeEnd, nodefault};
	__property bool WantKeyPriorNext = {read=FWantKeyPriorNext, write=FWantKeyPriorNext, nodefault};
	__property bool WantKeyReturn = {read=FWantKeyReturn, write=FWantKeyReturn, default=0};
	__property bool WantKeyEscape = {read=FWantKeyEscape, write=FWantKeyEscape, default=0};
	__property int Tag = {read=FTag, write=FTag, nodefault};
};


class PASCALIMPLEMENTATION TControlCombo : public Asgcombo::TAsgComboBox
{
	typedef Asgcombo::TAsgComboBox inherited;
	
private:
	MESSAGE void __fastcall CMWantSpecialKey(Winapi::Messages::TWMKey &Msg);
	
protected:
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
public:
	/* TAsgCustomCombo.Create */ inline __fastcall virtual TControlCombo(System::Classes::TComponent* AOwner) : Asgcombo::TAsgComboBox(AOwner) { }
	/* TAsgCustomCombo.Destroy */ inline __fastcall virtual ~TControlCombo() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TControlCombo(HWND ParentWindow) : Asgcombo::TAsgComboBox(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TControlEdit : public Vcl::Mask::TMaskEdit
{
	typedef Vcl::Mask::TMaskEdit inherited;
	
private:
	HIDESBASE MESSAGE void __fastcall WMKeyDown(Winapi::Messages::TWMKey &Msg);
	HIDESBASE MESSAGE void __fastcall CMWantSpecialKey(Winapi::Messages::TWMKey &Msg);
	
protected:
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
public:
	/* TCustomMaskEdit.Create */ inline __fastcall virtual TControlEdit(System::Classes::TComponent* AOwner) : Vcl::Mask::TMaskEdit(AOwner) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TControlEdit(HWND ParentWindow) : Vcl::Mask::TMaskEdit(ParentWindow) { }
	/* TWinControl.Destroy */ inline __fastcall virtual ~TControlEdit() { }
	
};


class PASCALIMPLEMENTATION TGridCombo : public Asgcombo::TAsgComboBox
{
	typedef Asgcombo::TAsgComboBox inherited;
	
private:
	bool Forced;
	bool WorkMode;
	int ItemIdx;
	bool FAdvance;
	System::Classes::TNotifyEvent FOnReturnKey;
	bool ItemChange;
	System::UnicodeString FEditText;
	MESSAGE void __fastcall CMWantSpecialKey(Winapi::Messages::TWMKey &Msg);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Winapi::Messages::TWMSetFocus &Msg);
	
protected:
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyUp(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall DoExit();
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	DYNAMIC void __fastcall Change();
	
public:
	TAdvStringGrid* FGrid;
	void __fastcall DoChange();
	__fastcall virtual TGridCombo(System::Classes::TComponent* AOwner);
	void __fastcall SizeDropDownWidth();
	__property System::UnicodeString EditText = {read=FEditText, write=FEditText};
	
__published:
	__property System::Classes::TNotifyEvent OnReturnKey = {read=FOnReturnKey, write=FOnReturnKey};
public:
	/* TAsgCustomCombo.Destroy */ inline __fastcall virtual ~TGridCombo() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TGridCombo(HWND ParentWindow) : Asgcombo::TAsgComboBox(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TGridSpin : public Asgspin::TAsgSpinEdit
{
	typedef Asgspin::TAsgSpinEdit inherited;
	
private:
	bool FAlwaysValidate;
	HIDESBASE MESSAGE void __fastcall CMWantSpecialKey(Winapi::Messages::TWMKey &Msg);
	HIDESBASE MESSAGE void __fastcall WMChar(Winapi::Messages::TWMKey &Msg);
	
protected:
	void __fastcall DoClick(bool UpDown);
	virtual void __fastcall UpClick(System::TObject* Sender);
	virtual void __fastcall DownClick(System::TObject* Sender);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyUp(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	DYNAMIC void __fastcall DoExit();
	DYNAMIC void __fastcall Change();
	void __fastcall CheckMinMax();
	
public:
	TAdvStringGrid* FGrid;
	__fastcall virtual TGridSpin(System::Classes::TComponent* AOwner);
	void __fastcall ReCreate();
	__property bool AlwaysValidate = {read=FAlwaysValidate, write=FAlwaysValidate, nodefault};
public:
	/* TAsgSpinEdit.Destroy */ inline __fastcall virtual ~TGridSpin() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TGridSpin(HWND ParentWindow) : Asgspin::TAsgSpinEdit(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TGridTransEdit : public Vcl::Stdctrls::TCustomEdit
{
	typedef Vcl::Stdctrls::TCustomEdit inherited;
	
private:
	int FRow;
	int FCol;
	bool FFilterEdit;
	
protected:
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	DYNAMIC void __fastcall DoExit();
	
public:
	TAdvStringGrid* FGrid;
	__fastcall virtual TGridTransEdit(System::Classes::TComponent* AOwner);
	bool __fastcall StopEdit();
	__property BorderStyle = {default=1};
	__property bool FilterEdit = {read=FFilterEdit, write=FFilterEdit, nodefault};
	__property MaxLength = {default=0};
	__property CharCase = {default=0};
	
__published:
	__property int Col = {read=FCol, write=FCol, nodefault};
	__property int Row = {read=FRow, write=FRow, nodefault};
public:
	/* TWinControl.CreateParented */ inline __fastcall TGridTransEdit(HWND ParentWindow) : Vcl::Stdctrls::TCustomEdit(ParentWindow) { }
	/* TWinControl.Destroy */ inline __fastcall virtual ~TGridTransEdit() { }
	
};


class PASCALIMPLEMENTATION TGridTransCombo : public Vcl::Stdctrls::TCustomComboBox
{
	typedef Vcl::Stdctrls::TCustomComboBox inherited;
	
private:
	int FRow;
	int FCol;
	int __fastcall GetDropWidth();
	void __fastcall SetDropWidth(const int Value);
	
protected:
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	DYNAMIC void __fastcall DoExit();
	
public:
	TAdvStringGrid* FGrid;
	__fastcall virtual TGridTransCombo(System::Classes::TComponent* AOwner);
	bool __fastcall StopEdit();
	void __fastcall SizeDropDownWidth();
	__property int DropWidth = {read=GetDropWidth, write=SetDropWidth, nodefault};
	
__published:
	__property int Col = {read=FCol, write=FCol, nodefault};
	__property int Row = {read=FRow, write=FRow, nodefault};
public:
	/* TCustomComboBox.Destroy */ inline __fastcall virtual ~TGridTransCombo() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TGridTransCombo(HWND ParentWindow) : Vcl::Stdctrls::TCustomComboBox(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TGridTrackbarDropDown : public Advtrackbardropdown::TAdvTrackBarDropDown
{
	typedef Advtrackbardropdown::TAdvTrackBarDropDown inherited;
	
private:
	bool Forced;
	bool WorkMode;
	HIDESBASE MESSAGE void __fastcall CMWantSpecialKey(Winapi::Messages::TWMKey &Msg);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Winapi::Messages::TWMSetFocus &Msg);
	
protected:
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyUp(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall DoExit();
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	DYNAMIC void __fastcall Change();
	
public:
	TAdvStringGrid* FGrid;
	void __fastcall DoChange();
	__fastcall virtual TGridTrackbarDropDown(System::Classes::TComponent* AOwner);
public:
	/* TAdvTrackBarDropDown.Destroy */ inline __fastcall virtual ~TGridTrackbarDropDown() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TGridTrackbarDropDown(HWND ParentWindow) : Advtrackbardropdown::TAdvTrackBarDropDown(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TGridMemoDropDown : public Advmemodropdown::TAdvMemoDropDown
{
	typedef Advmemodropdown::TAdvMemoDropDown inherited;
	
private:
	bool Forced;
	bool WorkMode;
	HIDESBASE MESSAGE void __fastcall CMWantSpecialKey(Winapi::Messages::TWMKey &Msg);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Winapi::Messages::TWMSetFocus &Msg);
	
protected:
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall DoExit();
	DYNAMIC void __fastcall Change();
	
public:
	TAdvStringGrid* FGrid;
	__fastcall virtual TGridMemoDropDown(System::Classes::TComponent* AOwner);
public:
	/* TAdvMemoDropDown.Destroy */ inline __fastcall virtual ~TGridMemoDropDown() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TGridMemoDropDown(HWND ParentWindow) : Advmemodropdown::TAdvMemoDropDown(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TGridCalculatorDropDown : public Advcalculatordropdown::TAdvCalculatorDropdown
{
	typedef Advcalculatordropdown::TAdvCalculatorDropdown inherited;
	
private:
	bool Forced;
	bool WorkMode;
	HIDESBASE MESSAGE void __fastcall CMWantSpecialKey(Winapi::Messages::TWMKey &Msg);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Winapi::Messages::TWMSetFocus &Msg);
	
protected:
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall DoExit();
	DYNAMIC void __fastcall Change();
	
public:
	TAdvStringGrid* FGrid;
	__fastcall virtual TGridCalculatorDropDown(System::Classes::TComponent* AOwner);
public:
	/* TAdvCalculatorDropdown.Destroy */ inline __fastcall virtual ~TGridCalculatorDropDown() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TGridCalculatorDropDown(HWND ParentWindow) : Advcalculatordropdown::TAdvCalculatorDropdown(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TGridTimepickerDropDown : public Advtimepickerdropdown::TAdvTimePickerDropDown
{
	typedef Advtimepickerdropdown::TAdvTimePickerDropDown inherited;
	
private:
	bool Forced;
	bool WorkMode;
	HIDESBASE MESSAGE void __fastcall CMWantSpecialKey(Winapi::Messages::TWMKey &Msg);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Winapi::Messages::TWMSetFocus &Msg);
	
protected:
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall DoExit();
	DYNAMIC void __fastcall Change();
	
public:
	TAdvStringGrid* FGrid;
	__fastcall virtual TGridTimepickerDropDown(System::Classes::TComponent* AOwner);
public:
	/* TAdvTimePickerDropDown.Destroy */ inline __fastcall virtual ~TGridTimepickerDropDown() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TGridTimepickerDropDown(HWND ParentWindow) : Advtimepickerdropdown::TAdvTimePickerDropDown(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TGridDetailPickerDropDown : public Advdetaildropdown::TAdvDetailDropDown
{
	typedef Advdetaildropdown::TAdvDetailDropDown inherited;
	
private:
	bool Forced;
	bool WorkMode;
	HIDESBASE MESSAGE void __fastcall CMWantSpecialKey(Winapi::Messages::TWMKey &Msg);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Winapi::Messages::TWMSetFocus &Msg);
	
protected:
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall DoExit();
	DYNAMIC void __fastcall Change();
	
public:
	TAdvStringGrid* FGrid;
	__fastcall virtual TGridDetailPickerDropDown(System::Classes::TComponent* AOwner);
public:
	/* TAdvDetailDropDown.Destroy */ inline __fastcall virtual ~TGridDetailPickerDropDown() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TGridDetailPickerDropDown(HWND ParentWindow) : Advdetaildropdown::TAdvDetailDropDown(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TGridGridDropDown : public Advmulticolumndropdown::TAdvMultiColumnDropDown
{
	typedef Advmulticolumndropdown::TAdvMultiColumnDropDown inherited;
	
private:
	bool Forced;
	bool WorkMode;
	HIDESBASE MESSAGE void __fastcall CMWantSpecialKey(Winapi::Messages::TWMKey &Msg);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Winapi::Messages::TWMSetFocus &Msg);
	
protected:
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall DoExit();
	DYNAMIC void __fastcall Change();
	
public:
	TAdvStringGrid* FGrid;
	__fastcall virtual TGridGridDropDown(System::Classes::TComponent* AOwner);
public:
	/* TAdvMultiColumnDropDown.Destroy */ inline __fastcall virtual ~TGridGridDropDown() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TGridGridDropDown(HWND ParentWindow) : Advmulticolumndropdown::TAdvMultiColumnDropDown(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TGridAdvGridDropDown : public Advcustomgriddropdown::TCustomAdvGridDropDown
{
	typedef Advcustomgriddropdown::TCustomAdvGridDropDown inherited;
	
private:
	bool Forced;
	bool WorkMode;
	HIDESBASE MESSAGE void __fastcall CMWantSpecialKey(Winapi::Messages::TWMKey &Msg);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Winapi::Messages::TWMSetFocus &Msg);
	TAdvStringGrid* __fastcall GetAdvGrid();
	
protected:
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall DoExit();
	DYNAMIC void __fastcall Change();
	
public:
	TAdvStringGrid* FGrid;
	__fastcall virtual TGridAdvGridDropDown(System::Classes::TComponent* AOwner);
	__property TAdvStringGrid* Grid = {read=GetAdvGrid};
public:
	/* TCustomAdvGridDropDown.Destroy */ inline __fastcall virtual ~TGridAdvGridDropDown() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TGridAdvGridDropDown(HWND ParentWindow) : Advcustomgriddropdown::TCustomAdvGridDropDown(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TGridColorDropDown : public Advcolorpickerdropdown::TAdvColorPickerDropDown
{
	typedef Advcolorpickerdropdown::TAdvColorPickerDropDown inherited;
	
private:
	bool Forced;
	bool WorkMode;
	HIDESBASE MESSAGE void __fastcall CMWantSpecialKey(Winapi::Messages::TWMKey &Msg);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Winapi::Messages::TWMSetFocus &Msg);
	
protected:
	virtual void __fastcall OnHideDropDown();
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall DoExit();
	DYNAMIC void __fastcall Change();
	
public:
	TAdvStringGrid* FGrid;
	__fastcall virtual TGridColorDropDown(System::Classes::TComponent* AOwner);
public:
	/* TAdvColorPickerDropDown.Destroy */ inline __fastcall virtual ~TGridColorDropDown() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TGridColorDropDown(HWND ParentWindow) : Advcolorpickerdropdown::TAdvColorPickerDropDown(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TGridImageDropDown : public Advimagepickerdropdown::TAdvImagePickerDropDown
{
	typedef Advimagepickerdropdown::TAdvImagePickerDropDown inherited;
	
private:
	bool Forced;
	bool WorkMode;
	HIDESBASE MESSAGE void __fastcall CMWantSpecialKey(Winapi::Messages::TWMKey &Msg);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Winapi::Messages::TWMSetFocus &Msg);
	
protected:
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall DoExit();
	DYNAMIC void __fastcall Change();
	
public:
	TAdvStringGrid* FGrid;
	__fastcall virtual TGridImageDropDown(System::Classes::TComponent* AOwner);
public:
	/* TAdvImagePickerDropDown.Destroy */ inline __fastcall virtual ~TGridImageDropDown() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TGridImageDropDown(HWND ParentWindow) : Advimagepickerdropdown::TAdvImagePickerDropDown(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TGridControlDropDown : public Advcontroldropdown::TAdvControlDropDown
{
	typedef Advcontroldropdown::TAdvControlDropDown inherited;
	
private:
	bool Forced;
	bool WorkMode;
	bool FWantArrows;
	HIDESBASE MESSAGE void __fastcall CMWantSpecialKey(Winapi::Messages::TWMKey &Msg);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Winapi::Messages::TWMSetFocus &Msg);
	
protected:
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall DoExit();
	DYNAMIC void __fastcall Change();
	
public:
	TAdvStringGrid* FGrid;
	__fastcall virtual TGridControlDropDown(System::Classes::TComponent* AOwner);
	__property bool WantArrows = {read=FWantArrows, write=FWantArrows, nodefault};
public:
	/* TAdvCustomDropDown.Destroy */ inline __fastcall virtual ~TGridControlDropDown() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TGridControlDropDown(HWND ParentWindow) : Advcontroldropdown::TAdvControlDropDown(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TGridDatePicker : public Asgdatetimepicker::TAsgDateTimePicker
{
	typedef Asgdatetimepicker::TAsgDateTimePicker inherited;
	
private:
	System::Word Fy;
	System::Word Fm;
	System::Word Fd;
	System::Word Fth;
	System::Word Ftm;
	System::Word Fts;
	System::Word Ftms;
	bool FOldDropped;
	bool FWeekNumbers;
	bool FShowToday;
	bool FShowTodayCircle;
	MESSAGE void __fastcall CMWantSpecialKey(Winapi::Messages::TWMKey &Msg);
	HIDESBASE MESSAGE void __fastcall CNNotify(Winapi::Messages::TWMNotify &Message);
	HIDESBASE MESSAGE void __fastcall WMNCPaint(Winapi::Messages::TMessage &Message);
	
protected:
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall DoExit();
	virtual void __fastcall ShiftFocus();
	
public:
	TAdvStringGrid* FGrid;
	__fastcall virtual TGridDatePicker(System::Classes::TComponent* AOwner);
	void __fastcall ReCreate();
	
__published:
	__property Text = {default=0};
	__property bool Weeknumbers = {read=FWeekNumbers, write=FWeekNumbers, default=0};
	__property bool ShowToday = {read=FShowToday, write=FShowToday, default=1};
	__property bool ShowTodayCircle = {read=FShowTodayCircle, write=FShowTodayCircle, default=1};
public:
	/* TAsgDateTimePicker.Destroy */ inline __fastcall virtual ~TGridDatePicker() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TGridDatePicker(HWND ParentWindow) : Asgdatetimepicker::TAsgDateTimePicker(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TGridDateTimePicker : public Advdatetimepicker::TAdvDateTimePicker
{
	typedef Advdatetimepicker::TAdvDateTimePicker inherited;
	
private:
	int FMinimumWidth;
	
protected:
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall DoExit();
	
public:
	TAdvStringGrid* FGrid;
	__fastcall virtual TGridDateTimePicker(System::Classes::TComponent* AOwner);
	
__published:
	__property int MinimumWidth = {read=FMinimumWidth, write=FMinimumWidth, default=-1};
public:
	/* TAdvDateTimePicker.Destroy */ inline __fastcall virtual ~TGridDateTimePicker() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TGridDateTimePicker(HWND ParentWindow) : Advdatetimepicker::TAdvDateTimePicker(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TGridCheckBox : public Vcl::Stdctrls::TCheckBox
{
	typedef Vcl::Stdctrls::TCheckBox inherited;
	
private:
	HIDESBASE MESSAGE void __fastcall WMLButtonDown(Winapi::Messages::TWMMouse &Msg);
	
protected:
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall DoExit();
	
public:
	TAdvStringGrid* FGrid;
	__fastcall virtual TGridCheckBox(System::Classes::TComponent* AOwner);
	void __fastcall ReCreate();
public:
	/* TWinControl.CreateParented */ inline __fastcall TGridCheckBox(HWND ParentWindow) : Vcl::Stdctrls::TCheckBox(ParentWindow) { }
	/* TWinControl.Destroy */ inline __fastcall virtual ~TGridCheckBox() { }
	
};


class PASCALIMPLEMENTATION TGridEditBtn : public Asgedit::TAsgEditBtn
{
	typedef Asgedit::TAsgEditBtn inherited;
	
private:
	bool WorkMode;
	int FSelKeyDown;
	TAdvStringGrid* FGrid;
	bool FStopEditAfterClick;
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall WMKillFocus(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall WMChar(Winapi::Messages::TWMKey &Msg);
	HIDESBASE MESSAGE void __fastcall WMPaste(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall WMLButtonDblClk(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall CMWantSpecialKey(Winapi::Messages::TWMKey &Msg);
	
protected:
	void __fastcall ExtClick(System::TObject* Sender);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	DYNAMIC void __fastcall KeyUp(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall DoExit();
	DYNAMIC void __fastcall Change();
	void __fastcall DoChange();
	
public:
	__fastcall virtual TGridEditBtn(System::Classes::TComponent* AOwner);
	void __fastcall ReCreate();
	
__published:
	__property bool StopEditAfterClick = {read=FStopEditAfterClick, write=FStopEditAfterClick, default=0};
public:
	/* TAsgEditBtn.Destroy */ inline __fastcall virtual ~TGridEditBtn() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TGridEditBtn(HWND ParentWindow) : Asgedit::TAsgEditBtn(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TGridUnitEditBtn : public Asgedit::TAsgUnitEditBtn
{
	typedef Asgedit::TAsgUnitEditBtn inherited;
	
private:
	TAdvStringGrid* FGrid;
	HIDESBASE MESSAGE void __fastcall WMChar(Winapi::Messages::TWMKey &Msg);
	HIDESBASE MESSAGE void __fastcall CMWantSpecialKey(Winapi::Messages::TWMKey &Msg);
	
protected:
	void __fastcall ExtClick(System::TObject* Sender);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall DoExit();
	
public:
	__fastcall virtual TGridUnitEditBtn(System::Classes::TComponent* AOwner);
	void __fastcall ReCreate();
public:
	/* TAsgUnitEditBtn.Destroy */ inline __fastcall virtual ~TGridUnitEditBtn() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TGridUnitEditBtn(HWND ParentWindow) : Asgedit::TAsgUnitEditBtn(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TGridButton : public Vcl::Stdctrls::TButton
{
	typedef Vcl::Stdctrls::TButton inherited;
	
private:
	TAdvStringGrid* FGrid;
	
protected:
	MESSAGE void __fastcall CMWantSpecialKey(Winapi::Messages::TWMKey &Msg);
	HIDESBASE MESSAGE void __fastcall WMLButtonUp(Winapi::Messages::TWMMouse &Msg);
	DYNAMIC void __fastcall KeyUp(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall DoExit();
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	
public:
	__fastcall virtual TGridButton(System::Classes::TComponent* AOwner);
	void __fastcall ReCreate();
	
__published:
	__property Text = {default=0};
public:
	/* TCustomButton.Destroy */ inline __fastcall virtual ~TGridButton() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TGridButton(HWND ParentWindow) : Vcl::Stdctrls::TButton(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TAdvInplaceEdit : public Vcl::Grids::TInplaceEdit
{
	typedef Vcl::Grids::TInplaceEdit inherited;
	
private:
	int FSelKeyDown;
	int FOldSelStart;
	int FOldSelLength;
	int FKeyDownKey;
	short FLengthLimit;
	bool FValign;
	bool FWordWrap;
	bool GotKey;
	bool FGotFocus;
	bool Workmode;
	TAdvStringGrid* FGrid;
	int FColE;
	int FRowE;
	int FColR;
	bool FAltBack;
	bool FArrDown;
	bool FEditProp;
	void __fastcall SetVAlign(bool Value);
	void __fastcall SetWordWrap(bool Value);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Winapi::Messages::TWMSetFocus &Msg);
	HIDESBASE MESSAGE void __fastcall WMKillFocus(Winapi::Messages::TWMKillFocus &Msg);
	HIDESBASE MESSAGE void __fastcall WMKeyDown(Winapi::Messages::TWMKey &Msg);
	HIDESBASE MESSAGE void __fastcall WMKeyUp(Winapi::Messages::TWMKey &Msg);
	HIDESBASE MESSAGE void __fastcall WMLButtonDblClk(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMChar(Winapi::Messages::TWMKey &Msg);
	HIDESBASE MESSAGE void __fastcall WMPaste(Winapi::Messages::TMessage &Msg);
	MESSAGE void __fastcall WMCopy(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall WMCut(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall CMWantSpecialKey(Winapi::Messages::TWMKey &Msg);
	void __fastcall UpdateSize();
	
protected:
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall CreateWnd();
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyUp(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	virtual void __fastcall UpdateContents();
	virtual void __fastcall BoundsChanged();
	DYNAMIC void __fastcall Change();
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Msg);
	
public:
	__fastcall virtual TAdvInplaceEdit(System::Classes::TComponent* AOwner);
	void __fastcall DoChange();
	__property ImeMode = {default=3};
	__property ImeName = {default=0};
	
__published:
	__property bool VAlign = {read=FValign, write=SetVAlign, nodefault};
	__property bool WordWrap = {read=FWordWrap, write=SetWordWrap, nodefault};
	__property short LengthLimit = {read=FLengthLimit, write=FLengthLimit, nodefault};
	__property PopupMenu;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMouseMove;
	__property OnMouseDown;
	__property OnMouseUp;
	__property OnChange;
public:
	/* TWinControl.CreateParented */ inline __fastcall TAdvInplaceEdit(HWND ParentWindow) : Vcl::Grids::TInplaceEdit(ParentWindow) { }
	/* TWinControl.Destroy */ inline __fastcall virtual ~TAdvInplaceEdit() { }
	
};


class PASCALIMPLEMENTATION TNoActiveForm : public Vcl::Forms::TForm
{
	typedef Vcl::Forms::TForm inherited;
	
private:
	bool FEnabled;
	HIDESBASE MESSAGE void __fastcall WMActivate(Winapi::Messages::TWMActivate &Message);
	HIDESBASE MESSAGE void __fastcall WMMouseActivate(Winapi::Messages::TWMMouseActivate &Msg);
	
protected:
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	
public:
	__property bool Enabled = {read=FEnabled, write=FEnabled, nodefault};
public:
	/* TCustomForm.Create */ inline __fastcall virtual TNoActiveForm(System::Classes::TComponent* AOwner) : Vcl::Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TNoActiveForm(System::Classes::TComponent* AOwner, int Dummy) : Vcl::Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TNoActiveForm() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TNoActiveForm(HWND ParentWindow) : Vcl::Forms::TForm(ParentWindow) { }
	
};


enum DECLSPEC_DENUM TFilterCells : unsigned int { fcVirtual, fcNormal, fcStripHTML, fcCalculated, fcRow };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TFilterData : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	short FColumn;
	System::UnicodeString FCondition;
	bool FCaseSensitive;
	System::UnicodeString FSuffix;
	System::UnicodeString FPrefix;
	System::UnicodeString FFriendlyName;
	TFilterOperation FOperation;
	TFilterCells FData;
	TFilterMethod FMethod;
	TFilterType FFilterType;
	bool FEnabled;
	bool FRemoveAccented;
	
public:
	__fastcall virtual TFilterData(System::Classes::TCollection* ACollection);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	void __fastcall BuildCondition(System::UnicodeString s);
	__property TFilterType FilterType = {read=FFilterType, write=FFilterType, nodefault};
	__property System::UnicodeString FriendlyName = {read=FFriendlyName, write=FFriendlyName};
	
__published:
	__property short Column = {read=FColumn, write=FColumn, nodefault};
	__property System::UnicodeString Condition = {read=FCondition, write=FCondition};
	__property bool CaseSensitive = {read=FCaseSensitive, write=FCaseSensitive, default=1};
	__property TFilterCells Data = {read=FData, write=FData, default=0};
	__property bool Enabled = {read=FEnabled, write=FEnabled, default=1};
	__property System::UnicodeString Prefix = {read=FPrefix, write=FPrefix};
	__property System::UnicodeString Suffix = {read=FSuffix, write=FSuffix};
	__property TFilterOperation Operation = {read=FOperation, write=FOperation, nodefault};
	__property TFilterMethod Method = {read=FMethod, write=FMethod, nodefault};
	__property bool RemoveAccented = {read=FRemoveAccented, write=FRemoveAccented, default=0};
public:
	/* TCollectionItem.Destroy */ inline __fastcall virtual ~TFilterData() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TFilter : public System::Classes::TCollection
{
	typedef System::Classes::TCollection inherited;
	
public:
	TFilterData* operator[](int Index) { return this->Items[Index]; }
	
private:
	TAdvStringGrid* FOwner;
	HIDESBASE TFilterData* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TFilterData* Value);
	TFilterData* __fastcall GetColFilter(int Col);
	
protected:
	virtual void __fastcall Update(System::Classes::TCollectionItem* Item);
	
public:
	__fastcall TFilter(TAdvStringGrid* AOwner);
	HIDESBASE TFilterData* __fastcall Add()/* overload */;
	HIDESBASE TFilterData* __fastcall Add(int AColumn, System::UnicodeString ACondition, TFilterOperation AOperation = (TFilterOperation)(0x1))/* overload */;
	HIDESBASE TFilterData* __fastcall Insert(int index);
	__property TFilterData* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
	__property TFilterData* ColumnFilter[int Col] = {read=GetColFilter};
	bool __fastcall HasFilter(int Col);
	bool __fastcall HasOtherFilter(int Col);
	TFilterType __fastcall HasFilterType(int Col);
	void __fastcall RemoveColumnFilter(int Col);
	
protected:
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TFilter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TGridItem : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	int FIdx;
	int FHeight;
	System::Classes::TStrings* FItems;
	int FLevel;
	void __fastcall SetIdx(const int Value);
	void __fastcall SetItems(System::Classes::TStrings* const Value);
	void __fastcall SetHeight(const int Value);
	
public:
	__fastcall virtual TGridItem(System::Classes::TCollection* Collection);
	__fastcall virtual ~TGridItem();
	
__published:
	__property int Idx = {read=FIdx, write=SetIdx, nodefault};
	__property int Height = {read=FHeight, write=SetHeight, nodefault};
	__property int Level = {read=FLevel, write=FLevel, nodefault};
	__property System::Classes::TStrings* Items = {read=FItems, write=SetItems};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TAdvRichEdit : public Vcl::Comctrls::TRichEdit
{
	typedef Vcl::Comctrls::TRichEdit inherited;
	
private:
	TAdvStringGrid* FGrid;
	int FReqHeight;
	int FReqWidth;
	bool FLocked;
	void __fastcall SelFormat(int offset);
	HIDESBASE MESSAGE void __fastcall WMGetDlgCode(Winapi::Messages::TWMNoParams &Msg);
	HIDESBASE MESSAGE void __fastcall WMKillFocus(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall CNNotify(Winapi::Messages::TWMNotify &Msg);
	
protected:
	void __fastcall Lock();
	void __fastcall Unlock();
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	
public:
	__fastcall virtual TAdvRichEdit(System::Classes::TComponent* AOwner);
	void __fastcall ReCreate();
	void __fastcall SelSubscript();
	void __fastcall SelSuperscript();
	void __fastcall SelNormal();
	bool __fastcall IsSelSubscript();
	bool __fastcall IsSelSuperscript();
	bool __fastcall IsSelNormal();
	
__published:
	__property int ReqWidth = {read=FReqWidth, nodefault};
	__property int ReqHeight = {read=FReqHeight, nodefault};
public:
	/* TCustomRichEdit.Destroy */ inline __fastcall virtual ~TAdvRichEdit() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TAdvRichEdit(HWND ParentWindow) : Vcl::Comctrls::TRichEdit(ParentWindow) { }
	
};


enum DECLSPEC_DENUM TMouseSelectMode : unsigned int { msNormal, msColumn, msRow, msAll, msURL, msResize };

enum DECLSPEC_DENUM TClipOperation : unsigned int { coCut, coCopy };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TDragDropSettings : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	TAdvStringGrid* FGrid;
	bool FOleDropRTF;
	bool FOleAcceptText;
	bool FOleEntireRows;
	bool FOleDropSource;
	bool FOleRemoveRows;
	bool FOleAcceptFiles;
	bool FOleAcceptURLs;
	bool FOleDropTarget;
	bool FOleInsertRows;
	bool FOleAppendRows;
	bool FOleCopyAlways;
	bool FOleColumnDragDrop;
	bool FOleColumnReorder;
	bool FOleColumnsOnly;
	bool FOleColumnPicker;
	bool FShowCells;
	int FDeltaY;
	int FSourceY;
	void __fastcall SetOleDropRTF(const bool Value);
	void __fastcall SetOleDropTarget(const bool Value);
	void __fastcall SetShowCells(const bool Value);
	
protected:
	__property int SourceY = {read=FSourceY, write=FSourceY, nodefault};
	__property int DeltaY = {read=FDeltaY, write=FDeltaY, nodefault};
	
public:
	__fastcall TDragDropSettings(TAdvStringGrid* AOwner);
	__fastcall virtual ~TDragDropSettings();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property bool OleColumnPicker = {read=FOleColumnPicker, write=FOleColumnPicker, nodefault};
	
__published:
	__property bool ShowCells = {read=FShowCells, write=SetShowCells, default=1};
	__property bool OleAcceptFiles = {read=FOleAcceptFiles, write=FOleAcceptFiles, default=1};
	__property bool OleAcceptText = {read=FOleAcceptText, write=FOleAcceptText, default=1};
	__property bool OleAcceptURLs = {read=FOleAcceptURLs, write=FOleAcceptURLs, default=1};
	__property bool OleAppendRows = {read=FOleAppendRows, write=FOleAppendRows, default=0};
	__property bool OleColumnDragDrop = {read=FOleColumnDragDrop, write=FOleColumnDragDrop, default=0};
	__property bool OleColumnReorder = {read=FOleColumnReorder, write=FOleColumnReorder, default=0};
	__property bool OleColumnsOnly = {read=FOleColumnsOnly, write=FOleColumnsOnly, default=0};
	__property bool OleCopyAlways = {read=FOleCopyAlways, write=FOleCopyAlways, default=0};
	__property bool OleDropTarget = {read=FOleDropTarget, write=SetOleDropTarget, default=0};
	__property bool OleDropSource = {read=FOleDropSource, write=FOleDropSource, default=0};
	__property bool OleEntireRows = {read=FOleEntireRows, write=FOleEntireRows, default=0};
	__property bool OleInsertRows = {read=FOleInsertRows, write=FOleInsertRows, default=0};
	__property bool OleRemoveRows = {read=FOleRemoveRows, write=FOleRemoveRows, default=0};
	__property bool OleDropRTF = {read=FOleDropRTF, write=SetOleDropRTF, default=0};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TGridDropTarget : public Asgdd::TASGDropTarget
{
	typedef Asgdd::TASGDropTarget inherited;
	
private:
	TAdvStringGrid* FGrid;
	
public:
	__fastcall TGridDropTarget(TAdvStringGrid* AGrid);
	virtual bool __fastcall DropText(const System::Types::TPoint &pt, System::UnicodeString s);
	virtual void __fastcall DropStream(const System::Types::TPoint &pt, System::Classes::TMemoryStream* ms);
	virtual void __fastcall DropCol(const System::Types::TPoint &pt, int Col);
	virtual void __fastcall DropRTF(const System::Types::TPoint &pt, System::UnicodeString s);
	virtual void __fastcall DropFiles(const System::Types::TPoint &pt, System::Classes::TStrings* files);
	virtual void __fastcall DropFileContents(const System::Types::TPoint &pt);
	virtual void __fastcall DropURL(const System::Types::TPoint &pt, System::UnicodeString s);
	virtual void __fastcall DragMouseMove(const System::Types::TPoint &pt, bool &Allow, Asgdd::TDropFormats DropFormats);
	virtual void __fastcall DragMouseLeave();
	virtual void __fastcall DragMouseEnter();
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TGridDropTarget() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TGridDropSource : public Asgdd::TASGDropSource
{
	typedef Asgdd::TASGDropSource inherited;
	
private:
	TAdvStringGrid* FGrid;
	int FLastEffect;
	
protected:
	virtual void __fastcall DragDropStop();
	
public:
	__fastcall TGridDropSource(TAdvStringGrid* aGrid);
	virtual void __fastcall CurrentEffect(int dwEffect);
	virtual void __fastcall QueryDrag();
	__property int LastEffect = {read=FLastEffect, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TGridDropSource() { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{ED636930-EF86-46AD-80F7-FD29C28525EB}") ITAdvStringGridSelect  : public System::IInterface 
{
	virtual void __fastcall SelectionChange(int Col, int Row) = 0 ;
};

class PASCALIMPLEMENTATION TGridChangeNotifier : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
protected:
	virtual void __fastcall CellsChanged(const System::Types::TRect &R);
public:
	/* TComponent.Create */ inline __fastcall virtual TGridChangeNotifier(System::Classes::TComponent* AOwner) : System::Classes::TComponent(AOwner) { }
	/* TComponent.Destroy */ inline __fastcall virtual ~TGridChangeNotifier() { }
	
};


class PASCALIMPLEMENTATION THTMLHintWindow : public Vcl::Controls::THintWindow
{
	typedef Vcl::Controls::THintWindow inherited;
	
private:
	Vcl::Imglist::TCustomImageList* FImages;
	Picturecontainer::TPictureContainer* FPictureContainer;
	int FTextHeight;
	int FTextWidth;
	System::WideString FWideCaption;
	HIDESBASE MESSAGE void __fastcall CMTextChanged(Winapi::Messages::TMessage &Message);
	
protected:
	virtual void __fastcall Paint();
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	__property System::WideString WideCaption = {read=FWideCaption, write=FWideCaption};
	
public:
	__fastcall virtual THTMLHintWindow(System::Classes::TComponent* AOwner);
	virtual void __fastcall ActivateHint(const System::Types::TRect &Rect, const System::UnicodeString AHint);
	virtual void __fastcall ActivateHintData(const System::Types::TRect &Rect, const System::UnicodeString AHint, void * AData);
	virtual System::Types::TRect __fastcall CalcHintRect(int MaxWidth, const System::UnicodeString AHint, void * AData);
public:
	/* TCustomControl.Destroy */ inline __fastcall virtual ~THTMLHintWindow() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall THTMLHintWindow(HWND ParentWindow) : Vcl::Controls::THintWindow(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TRetEdit : public Vcl::Stdctrls::TEdit
{
	typedef Vcl::Stdctrls::TEdit inherited;
	
private:
	System::Classes::TNotifyEvent FOnReturn;
	System::Classes::TNotifyEvent FOnCtrlReturn;
	HIDESBASE MESSAGE void __fastcall WMKeyDown(Winapi::Messages::TWMKey &Msg);
	HIDESBASE MESSAGE void __fastcall WMChar(Winapi::Messages::TWMKey &Msg);
	
protected:
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	
__published:
	__property System::Classes::TNotifyEvent OnReturn = {read=FOnReturn, write=FOnReturn};
	__property System::Classes::TNotifyEvent OnCtrlReturn = {read=FOnCtrlReturn, write=FOnCtrlReturn};
public:
	/* TCustomEdit.Create */ inline __fastcall virtual TRetEdit(System::Classes::TComponent* AOwner) : Vcl::Stdctrls::TEdit(AOwner) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TRetEdit(HWND ParentWindow) : Vcl::Stdctrls::TEdit(ParentWindow) { }
	/* TWinControl.Destroy */ inline __fastcall virtual ~TRetEdit() { }
	
};


class PASCALIMPLEMENTATION TSearchPanel : public Vcl::Extctrls::TPanel
{
	typedef Vcl::Extctrls::TPanel inherited;
	
private:
	TAdvStringGrid* FGrid;
	TRetEdit* FEdit;
	Advobj::TAdvGridButton* FExitButton;
	Advobj::TAdvGridButton* FForwardButton;
	Advobj::TAdvGridButton* FBackwardButton;
	Advobj::TAdvGridButton* FHiliteButton;
	Advobj::TAdvCheckBox* FMatchCase;
	Vcl::Stdctrls::TLabel* FResultLabel;
	System::Classes::TNotifyEvent FOnForwardClick;
	System::Classes::TNotifyEvent FOnBackwardClick;
	System::Classes::TNotifyEvent FOnEditChange;
	System::Classes::TNotifyEvent FOnExitClick;
	System::Classes::TNotifyEvent FOnHighLightClick;
	System::Classes::TNotifyEvent FOnMatchCaseClick;
	System::Uitypes::TColor FColorTo;
	System::UnicodeString FFindNextCaption;
	System::UnicodeString FFindPrevCaption;
	System::UnicodeString FMatchCaseCaption;
	System::UnicodeString FHintFindPrev;
	System::UnicodeString FHintClose;
	System::UnicodeString FHintFindNext;
	System::UnicodeString FHintHighlight;
	System::UnicodeString FHighLightCaption;
	void __fastcall SetColorTo(const System::Uitypes::TColor Value);
	
protected:
	virtual void __fastcall CreateChildControls();
	void __fastcall ForwardClick(System::TObject* Sender);
	void __fastcall BackwardClick(System::TObject* Sender);
	void __fastcall ExitClick(System::TObject* Sender);
	void __fastcall HighlightClick(System::TObject* Sender);
	void __fastcall MatchCaseClick(System::TObject* Sender);
	void __fastcall EditChange(System::TObject* Sender);
	void __fastcall EditReturn(System::TObject* Sender);
	void __fastcall EditCtrlReturn(System::TObject* Sender);
	virtual void __fastcall Paint();
	
public:
	__fastcall virtual TSearchPanel(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TSearchPanel();
	virtual void __fastcall CreateWnd();
	__property System::UnicodeString FindNextCaption = {read=FFindNextCaption, write=FFindNextCaption};
	__property System::UnicodeString FindPrevCaption = {read=FFindPrevCaption, write=FFindPrevCaption};
	__property System::UnicodeString MatchCaseCaption = {read=FMatchCaseCaption, write=FMatchCaseCaption};
	__property System::UnicodeString HighLightCaption = {read=FHighLightCaption, write=FHighLightCaption};
	__property System::UnicodeString HintClose = {read=FHintClose, write=FHintClose};
	__property System::UnicodeString HintFindNext = {read=FHintFindNext, write=FHintFindNext};
	__property System::UnicodeString HintFindPrev = {read=FHintFindPrev, write=FHintFindPrev};
	__property System::UnicodeString HintHighlight = {read=FHintHighlight, write=FHintHighlight};
	__property TRetEdit* EditControl = {read=FEdit};
	__property Advobj::TAdvCheckBox* MatchCase = {read=FMatchCase};
	__property Advobj::TAdvGridButton* HiliteButton = {read=FHiliteButton};
	__property Advobj::TAdvGridButton* ForwardButton = {read=FForwardButton};
	__property Advobj::TAdvGridButton* BackwardButton = {read=FBackwardButton};
	__property Advobj::TAdvGridButton* ExitButton = {read=FExitButton};
	__property Vcl::Stdctrls::TLabel* ResultLabel = {read=FResultLabel};
	
__published:
	__property System::Uitypes::TColor ColorTo = {read=FColorTo, write=SetColorTo, default=536870911};
	__property System::Classes::TNotifyEvent OnBackwardClick = {read=FOnBackwardClick, write=FOnBackwardClick};
	__property System::Classes::TNotifyEvent OnEditChange = {read=FOnEditChange, write=FOnEditChange};
	__property System::Classes::TNotifyEvent OnForwardClick = {read=FOnForwardClick, write=FOnForwardClick};
	__property System::Classes::TNotifyEvent OnHighlightClick = {read=FOnHighLightClick, write=FOnHighLightClick};
	__property System::Classes::TNotifyEvent OnMatchCaseClick = {read=FOnMatchCaseClick, write=FOnMatchCaseClick};
	__property System::Classes::TNotifyEvent OnExitClick = {read=FOnExitClick, write=FOnExitClick};
public:
	/* TWinControl.CreateParented */ inline __fastcall TSearchPanel(HWND ParentWindow) : Vcl::Extctrls::TPanel(ParentWindow) { }
	
};


typedef void __fastcall (__closure *TFooterPaintEvent)(System::TObject* Sender, int AColumn, Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &ARect);

class PASCALIMPLEMENTATION TFooterPanel : public Vcl::Extctrls::TCustomPanel
{
	typedef Vcl::Extctrls::TCustomPanel inherited;
	
private:
	TAdvStringGrid* FGrid;
	System::StaticArray<System::WideChar, 4097> FToolTipBuffer;
	int FLastHintX;
	NativeUInt FHToolTip;
	bool FBalloonInit;
	System::Types::TPoint FLastBalloonPos;
	HIDESBASE MESSAGE void __fastcall WMNotify(Winapi::Messages::TWMNotify &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall CMHintShow(Vcl::Controls::TCMHintShow &Msg);
	
protected:
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	System::UnicodeString __fastcall HTMLColReplace(System::UnicodeString s);
	int __fastcall PaintLastRow();
	int __fastcall PaintColPreview();
	int __fastcall PaintCustomPreview();
	int __fastcall PaintCustomPaint();
	virtual void __fastcall Paint();
	virtual void __fastcall CreateWnd();
	virtual void __fastcall CreateHandle();
	System::Types::TRect __fastcall RTLCoord(bool rtl, const System::Types::TRect &ARect);
	int __fastcall GridColWidths();
	void __fastcall CreateToolTip();
	void __fastcall AddToolTip(int IconType, System::UnicodeString Text, System::UnicodeString Title);
	void __fastcall DestroyToolTip();
	void __fastcall BalloonInit();
	void __fastcall BalloonDone();
	
public:
	__fastcall virtual TFooterPanel(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TFooterPanel();
	void __fastcall MouseToCell(int X, int Y, int &C, int &R);
	
__published:
	__property BorderWidth = {default=0};
	__property OnMouseDown;
	__property OnMouseUp;
	__property OnMouseLeave;
	__property OnMouseEnter;
	__property OnMouseMove;
public:
	/* TWinControl.CreateParented */ inline __fastcall TFooterPanel(HWND ParentWindow) : Vcl::Extctrls::TCustomPanel(ParentWindow) { }
	
};


enum DECLSPEC_DENUM TFooterStyle : unsigned int { fsFixedLastRow, fsColumnPreview, fsCustomPreview, fsCustomPaint };

class PASCALIMPLEMENTATION TFloatingFooter : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	TAdvStringGrid* FGrid;
	bool FDidInc;
	int FHeight;
	bool FVisible;
	System::Uitypes::TColor FColor;
	TFooterStyle FFooterStyle;
	int FColumn;
	TCalcFooterEvent FOnCalcFooter;
	System::UnicodeString FCustomTemplate;
	bool FCalculateHiddenRows;
	bool FEnableCalculation;
	bool FShowHint;
	System::Uitypes::TColor FBorderColor;
	void __fastcall SetHeight(const int Value);
	void __fastcall SetVisible(const bool Value);
	void __fastcall SetColor(const System::Uitypes::TColor Value);
	void __fastcall SetFooterStyle(const TFooterStyle Value);
	void __fastcall SetColumn(const int Value);
	void __fastcall SetCustomTemplate(const System::UnicodeString Value);
	Basegrid::TColumnCalcType __fastcall GetColumnCalc(int c);
	void __fastcall SetColumnCalc(int c, const Basegrid::TColumnCalcType Value);
	void __fastcall SetEnableCalculation(const bool Value);
	void __fastcall SetShowHint(const bool Value);
	void __fastcall SetBorderColor(const System::Uitypes::TColor Value);
	
public:
	__fastcall TFloatingFooter(TAdvStringGrid* AOwner);
	__fastcall virtual ~TFloatingFooter();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	void __fastcall Invalidate();
	__property int Height = {read=FHeight, write=SetHeight, nodefault};
	__property Basegrid::TColumnCalcType ColumnCalc[int c] = {read=GetColumnCalc, write=SetColumnCalc};
	__property bool EnableCalculation = {read=FEnableCalculation, write=SetEnableCalculation, nodefault};
	
__published:
	__property System::Uitypes::TColor BorderColor = {read=FBorderColor, write=SetBorderColor, default=536870911};
	__property bool CalculateHiddenRows = {read=FCalculateHiddenRows, write=FCalculateHiddenRows, default=1};
	__property System::Uitypes::TColor Color = {read=FColor, write=SetColor, default=-16777201};
	__property int Column = {read=FColumn, write=SetColumn, default=0};
	__property System::UnicodeString CustomTemplate = {read=FCustomTemplate, write=SetCustomTemplate};
	__property TFooterStyle FooterStyle = {read=FFooterStyle, write=SetFooterStyle, default=0};
	__property bool ShowHint = {read=FShowHint, write=SetShowHint, default=0};
	__property bool Visible = {read=FVisible, write=SetVisible, default=0};
	__property TCalcFooterEvent OnCalcFooter = {read=FOnCalcFooter, write=FOnCalcFooter};
};


struct DECLSPEC_DRECORD TCellAlignment
{
public:
	System::Classes::TAlignment Alignment;
	Advobj::TVAlignment VAlignment;
};


enum DECLSPEC_DENUM THoverFixedCells : unsigned int { hfNone, hfAll, hfFixedRows, hfFixedColumns };

struct DECLSPEC_DRECORD TScrollProp
{
public:
	int PageSize;
	int Range;
};


enum DECLSPEC_DENUM TInvalidEntryIcon : unsigned int { ieNone, ieInfo, ieWarning, ieError };

enum DECLSPEC_DENUM TBalloonIcon : unsigned int { biNone, biInfo, biWarning, biError };

typedef System::Set<char, _DELPHI_SET_CHAR(0), _DELPHI_SET_CHAR(255)> TCharSet;

enum DECLSPEC_DENUM TScrollDirection : unsigned int { sdVertical, sdHorizontal };

enum DECLSPEC_DENUM THintShowLargeTextPos : unsigned int { hpCell, hpCursor };

class PASCALIMPLEMENTATION TScrollControl : public Vcl::Controls::TCustomControl
{
	typedef Vcl::Controls::TCustomControl inherited;
	
private:
	System::Uitypes::TColor FColor;
	int FScrollWidth;
	bool FDownOnScroller;
	int FDownPos;
	int FDownRow;
	TScrollDirection FDirection;
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TWMEraseBkgnd &Message);
	HIDESBASE MESSAGE void __fastcall WMPaint(Winapi::Messages::TWMPaint &Message);
	TAdvStringGrid* __fastcall Grid();
	HIDESBASE void __fastcall SetColor(const System::Uitypes::TColor AValue);
	void __fastcall GetScrollPos(int &APos, int &ASize);
	int __fastcall GetScrollSize();
	int __fastcall GetScrollOffset();
	
protected:
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall Paint();
	
public:
	__fastcall virtual TScrollControl(System::Classes::TComponent* AOwner);
	
__published:
	__property System::Uitypes::TColor Color = {read=FColor, write=SetColor, default=12632256};
	__property int ScrollWidth = {read=FScrollWidth, write=FScrollWidth, default=4};
	__property TScrollDirection Direction = {read=FDirection, write=FDirection, default=0};
public:
	/* TCustomControl.Destroy */ inline __fastcall virtual ~TScrollControl() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TScrollControl(HWND ParentWindow) : Vcl::Controls::TCustomControl(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TColorSetting : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	System::Uitypes::TColor FTextColor;
	System::Classes::TNotifyEvent FOnChange;
	System::Uitypes::TColor FBkgColor;
	void __fastcall SetBkgColor(const System::Uitypes::TColor Value);
	void __fastcall SetTextColor(const System::Uitypes::TColor Value);
	
protected:
	virtual void __fastcall Changed();
	
public:
	__fastcall TColorSetting();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property System::Uitypes::TColor TextColor = {read=FTextColor, write=SetTextColor, default=536870911};
	__property System::Uitypes::TColor BkgColor = {read=FBkgColor, write=SetBkgColor, default=536870911};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TColorSetting() { }
	
};


class PASCALIMPLEMENTATION TAutoColor : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	TColorSetting* FNegativeNumber;
	TColorSetting* FPositiveNumber;
	System::Classes::TNotifyEvent FOnChange;
	void __fastcall SetNegativeNumber(TColorSetting* const Value);
	void __fastcall SetPositiveNumber(TColorSetting* const Value);
	
protected:
	void __fastcall ValueChanged(System::TObject* Sender);
	virtual void __fastcall Changed();
	bool __fastcall ColorsDefined();
	
public:
	__fastcall TAutoColor();
	__fastcall virtual ~TAutoColor();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property TColorSetting* NegativeNumber = {read=FNegativeNumber, write=SetNegativeNumber};
	__property TColorSetting* PositiveNumber = {read=FPositiveNumber, write=SetPositiveNumber};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
};


class PASCALIMPLEMENTATION THeaderDragButton : public Vcl::Controls::TCustomControl
{
	typedef Vcl::Controls::TCustomControl inherited;
	
private:
	TAdvStringGrid* FGrid;
	System::UnicodeString FCaption;
	bool FFlat;
	
protected:
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	
public:
	virtual void __fastcall Paint();
	__property TAdvStringGrid* Grid = {read=FGrid, write=FGrid};
	
__published:
	__property System::UnicodeString Caption = {read=FCaption, write=FCaption};
	__property bool Flat = {read=FFlat, write=FFlat, nodefault};
public:
	/* TCustomControl.Create */ inline __fastcall virtual THeaderDragButton(System::Classes::TComponent* AOwner) : Vcl::Controls::TCustomControl(AOwner) { }
	/* TCustomControl.Destroy */ inline __fastcall virtual ~THeaderDragButton() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall THeaderDragButton(HWND ParentWindow) : Vcl::Controls::TCustomControl(ParentWindow) { }
	
};


enum DECLSPEC_DENUM TCalcType : unsigned int { ctSum, ctAvg, ctMin, ctMax };

enum DECLSPEC_DENUM TFormatType : unsigned int { ftVCL, ftExcel };

enum DECLSPEC_DENUM TScrollPosition : unsigned int { spMiddle, spTrailing, spLeading };

typedef void __fastcall (__closure *THoverButtonClickEvent)(System::TObject* Sender, int ARow, THoverButtonsCollectionItem* AButton);

enum DECLSPEC_DENUM TColumnType : unsigned int { ctNumeric, ctFloat, ctAlpha, ctDate, ctTime, ctBoolean };

class PASCALIMPLEMENTATION TAdvGridPopup : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	TAdvStringGrid* FGrid;
	Vcl::Grids::TGridCoord FGridCell;
	bool FVisible;
	
protected:
	__property TAdvStringGrid* Grid = {read=FGrid, write=FGrid};
	__property Vcl::Grids::TGridCoord GridCell = {read=FGridCell, write=FGridCell};
	
public:
	virtual void __fastcall Show(const System::Types::TPoint &PT);
	virtual void __fastcall Hide();
	virtual bool __fastcall MouseInPopup(const System::Types::TPoint &PT) = 0 ;
	__property bool Visible = {read=FVisible, nodefault};
public:
	/* TComponent.Create */ inline __fastcall virtual TAdvGridPopup(System::Classes::TComponent* AOwner) : System::Classes::TComponent(AOwner) { }
	/* TComponent.Destroy */ inline __fastcall virtual ~TAdvGridPopup() { }
	
};


enum DECLSPEC_DENUM TPopupToolBarMode : unsigned int { tbActiveCell, tbHoverCell, tbHoverNormalCell, tbNone };

enum DECLSPEC_DENUM TGridFilterType : unsigned int { ftHide, ftSuppress };

__interface  INTERFACE_UUID("{20335AC0-CD66-42FE-BBD6-BBB1B017CD03}") ITMSCellValidate  : public System::IInterface 
{
	virtual void __fastcall ValidateCell(int ACol, int ARow, System::UnicodeString &AValue, bool &Valid) = 0 ;
};

class PASCALIMPLEMENTATION TAdvStringGrid : public Basegrid::TBaseGrid
{
	typedef Basegrid::TBaseGrid inherited;
	
	
private:
	typedef System::DynamicArray<int> _TAdvStringGrid__1;
	
	typedef System::DynamicArray<int> _TAdvStringGrid__2;
	
	typedef System::DynamicArray<System::UnicodeString> _TAdvStringGrid__3;
	
	typedef System::DynamicArray<int> _TAdvStringGrid__4;
	
	typedef System::DynamicArray<bool> _TAdvStringGrid__5;
	
	
private:
	System::Types::TPoint ptdown;
	int FTopDown;
	int FLeftRight;
	bool FScrollVert;
	TScrollControl* vscrlctrl;
	TScrollControl* hscrlctrl;
	Advstyleif::TTMSStyle FStyle;
	System::Types::TPoint FLastKeyCell;
	int FFilterLevel;
	System::UnicodeString FLastFilter;
	bool FForceSel;
	int FMoveColInd;
	int FMoveRowInd;
	int FGroupColumn;
	System::UnicodeString FGroupCaption;
	System::UnicodeString FGroupFooter;
	int FGroupWidth;
	bool FAutoSize;
	bool FAutoNumAlign;
	bool FEnhTextSize;
	bool FEditWithTags;
	bool FOemConvert;
	bool FLookup;
	bool FLoaded;
	bool FLoading;
	bool FLookupCaseSensitive;
	bool FDeselectState;
	bool FSelectionClick;
	bool FAnchorClick;
	bool FMouseDown;
	System::Types::TPoint FMouseDownPt;
	bool FSelChange;
	bool FDoOnClick;
	bool FMouseKeepDown;
	bool FCtrlDown;
	System::UnicodeString FCtrlDownId;
	bool FMouseResize;
	bool FMouseDownMove;
	bool FLookupHistory;
	bool FEnhRowColMove;
	bool FSizeWithForm;
	bool FMultilineCells;
	Advobj::TIntList* FSortRowXRef;
	Advobj::TIntList* FUnSortRowXRef;
	Advobj::TIntList* FMergedColumns;
	Advobj::TIntList* FSelectedCells;
	Advobj::TIntList* FSelectedRows;
	Advobj::TIntList* FModifiedRows;
	Advobj::TIntList* FEnabledRows;
	Advobj::TGridColorEvent FOnGetCellColor;
	TCellCursorEvent FOnGetCellCursor;
	Advobj::TGridGradientEvent FOnGetCellGradient;
	Advobj::TGridColorEvent FOnGetCellPrintColor;
	Advobj::TGridBorderEvent FOnGetCellBorder;
	Advobj::TGridBorderEvent FOnGetCellPrintBorder;
	Advobj::TGridAlignEvent FOnGetAlignment;
	Advobj::TGridFormatEvent FOnGetFormat;
	Advobj::TFloatFormatEvent FOnGetFloatFormat;
	TGetCheckEvent FOnGetCheckTrue;
	TGetCheckEvent FOnGetCheckFalse;
	TRowDisjunctSelectEvent FOnRowDisjunctSelect;
	Advobj::TAutoInsertRowEvent FOnRowDisjunctSelected;
	TColDisjunctSelectEvent FOnColDisjunctSelect;
	TColDisjunctSelectedEvent FOnColDisjunctSelected;
	Advobj::TGridHintEvent FOnGridHint;
	TGridWideHintEvent FOnGridWideHint;
	TRowChangingEvent FOnRowChanging;
	TRowChangedEvent FOnRowChanged;
	TColChangingEvent FOnColChanging;
	TCellChangingEvent FOnCellChanging;
	TAutoAdvanceEvent FOnAutoAdvance;
	Vcl::Forms::TShowHintEvent FOnShowHint;
	Advobj::TCanAddRowEvent FOnCanAddRow;
	Advobj::TCanAddColEvent FOnCanAddCol;
	Advobj::TAutoAddRowEvent FOnAutoAddRow;
	Advobj::TCanInsertRowEvent FOnCanInsertRow;
	Advobj::TAutoInsertRowEvent FOnAutoInsertRow;
	Advobj::TAutoInsertColEvent FOnAutoInsertCol;
	Advobj::TCanDeleteRowEvent FOnCanDeleteRow;
	Advobj::TAutoDeleteRowEvent FOnAutoDeleteRow;
	TOleDragDropEvent FOnOleDrop;
	TOleDragDropEvent FOnOleDrag;
	TOleDragOverEvent FOnOleDragOver;
	TOleDragStartEvent FOnOleDragStart;
	TOleDragStopEvent FOnOleDragStop;
	TOleDropColEvent FOnOleDropCol;
	TOleDroppedEvent FOnOleDropped;
	TGridDropTarget* FGridDropTarget;
	TOleDropFileEvent FOnOleDropFile;
	TOleDropFilesEvent FOnOleDropFiles;
	TOleDropURLEvent FOnOleDropURL;
	Advobj::TClickSortEvent FOnClickSort;
	Advobj::TCanSortEvent FOnCanSort;
	TNodeClickEvent FOnExpandNode;
	TNodeClickEvent FOnContractNode;
	TNodeAllowEvent FOnBeforeExpandNode;
	TNodeAllowEvent FOnBeforeContractNode;
	Advobj::TCustomCompareEvent FCustomCompare;
	Advobj::TRawCompareEvent FRawCompare;
	Advobj::TSearchEditChangeEvent FOnSearchEditChange;
	TSearchFooterActionEvent FOnSearchFooterAction;
	TSearchFooterSearchEvent FOnSearchFooterSearch;
	TSearchFooterSearchEndEvent FOnSearchFooterSearchEnd;
	System::Classes::TNotifyEvent FOnSearchFooterClose;
	TClipboardEvent FOnClipboardPaste;
	TClipboardPasteDoneEvent FOnClipboardPasteDone;
	TClipboardEvent FOnClipboardCut;
	TClipboardPasteDoneEvent FOnClipboardCutDone;
	TClipboardEvent FOnClipboardCopy;
	TClipboardPasteDoneEvent FOnClipboardCopyDone;
	TBeforeCellPasteEvent FOnClipboardBeforePasteCell;
	TAfterCellPasteEvent FOnClipboardAfterPasteCell;
	TBeforeCellPasteWideEvent FOnClipboardBeforePasteWideCell;
	TAfterCellPasteWideEvent FOnClipboardAfterPasteWideCell;
	Advobj::TOnResizeEvent FOnResize;
	TGridPrintStartEvent FOnPrintStart;
	TGridPrintCancelEvent FOnPrintCancel;
	TGridPrintPageEvent FOnPrintPage;
	TGridPrintPageTopBottomSizeEvent FOnPrintPageTopBottomSize;
	TGridPrintPageNumEvent FOnPrintGetPageNum;
	TGridPrintNewPageEvent FOnPrintNewPage;
	TGridPrintPageDoneEvent FOnPrintPageDone;
	System::Classes::TNotifyEvent FOnPrintDone;
	TGridPrintColumnWidthEvent FOnPrintSetColumnWidth;
	TGridPrintRowHeightEvent FOnPrintSetRowHeight;
	TDoFitToPageEvent FDoFitToPage;
	Advobj::TClickCellEvent FOnClickCell;
	Advobj::TClickCellEvent FOnRightClickCell;
	Advobj::TDblClickCellEvent FOnDblClickCell;
	Advobj::TCanEditCellEvent FOnCanEditCell;
	TCanClickCellEvent FOnCanClickCell;
	TIsFixedCellEvent FOnIsFixedCell;
	TIsFixedCellEvent FOnIsFixedHoverCell;
	TFixedEditEvent FOnFixedEdit;
	TIsPasswordCellEvent FOnIsPasswordCell;
	Advobj::TAnchorClickEvent FOnAnchorClick;
	Advobj::TAnchorEvent FOnAnchorEnter;
	Advobj::TAnchorEvent FOnAnchorExit;
	Advobj::TAnchorHintEvent FOnAnchorHint;
	TCellControlEvent FOnControlClick;
	TCellControlEvent FOnControlEditDone;
	TCellComboControlEvent FOnControlComboList;
	TCellComboControlSelectEvent FOnControlComboSelect;
	TCellValidateEvent FOnCellValidate;
	TCellValidateWideEvent FOnCellValidateWide;
	TCellsChangedEvent FOnCellsChanged;
	TGridProgressEvent FOnFileProgress;
	TGridProgressEvent FOnFilterProgress;
	TFixedDropDownEvent FOnFixedDropDownClick;
	TCanShowFixedDropDownEvent FOnCanShowFixedDropDown;
	System::Classes::TNotifyEvent FOnRichEditSelectionChange;
	TGetColumnFilterEvent FOnGetColumnFilter;
	TFilterSelectEvent FOnFilterSelect;
	TFilterCheckEvent FOnFilterCheck;
	TFilterCheckClickEvent FOnFilterCheckClick;
	TFilterCheckClickEvent FOnFilterCheckMouseDown;
	THasFilterEditEvent FOnHasFilterEdit;
	TFilterEditUpdateEvent FOnFilterEditUpdate;
	TFilterEditUpdateEvent FOnFilterEditDone;
	TColorSelectedEvent FOnColorSelected;
	TColorSelectEvent FOnColorSelect;
	TImageSelectedEvent FOnImageSelected;
	TImageSelectEvent FOnImageSelect;
	System::Classes::TNotifyEvent FOnFilterDone;
	System::Classes::TNotifyEvent FOnBeforeFilter;
	System::Uitypes::TColor FHintColor;
	System::Uitypes::TColor FHighlightColor;
	System::Uitypes::TColor FHighLightTextColor;
	bool FHintShowCells;
	bool FHintShowLargeText;
	THintShowLargeTextPos FHintShowLargeTextPos;
	bool FHintShowSizing;
	System::Types::TPoint FLastHintPos;
	System::Types::TPoint FLastBalloonPos;
	Vcl::Graphics::TBitmap* FRowIndicator;
	Advobj::TSortIndexList* FSortIndexes;
	TBackGround* FBackGround;
	Vcl::Grids::TGridRect FDropSelection;
	bool FOleDropTargetAssigned;
	Advobj::TArrowWindow* ArwU;
	Advobj::TArrowWindow* ArwD;
	Advobj::TArrowWindow* ArwL;
	Advobj::TArrowWindow* ArwR;
	Advobj::TColumnSizeEvent FOnColumnSize;
	Advobj::TRowSizingEvent FOnRowSizing;
	Advobj::TColumnSizingEvent FOnColumnSizing;
	Advobj::TRowSizeEvent FOnRowSize;
	Advobj::TColumnSizeEvent FOnColumnMove;
	Advobj::TColumnSizeEvent FOnColumnMoving;
	Advobj::TRowSizeEvent FOnRowMove;
	Advobj::TRowSizeEvent FOnRowMoving;
	Advobj::TEndColumnSizeEvent FOnEndColumnSize;
	Advobj::TEndRowSizeEvent FOnEndRowSize;
	TPrintSettings* FPrintSettings;
	bool FFastPrint;
	Advstyleif::TOfficeTheme FOldOfficeTheme;
	Advobj::TGridFocusWindow* FFocusWindow;
	THTMLSettings* FHTMLSettings;
	Advobj::TBands* FBands;
	System::Uitypes::TColor FBorderColor;
	Advobj::TNavigation* FNavigation;
	TColumnSize* FColumnSize;
	bool FScrollProportional;
	TCellNode* FCellNode;
	TSizeWhileTyping* FSizeWhileTyping;
	Advobj::TMouseActions* FMouseActions;
	TGrouping* FGrouping;
	TBoolArray FVisibleCol;
	TWidthArray FAllColWidths;
	int FUpdateCount;
	bool FLastValidation;
	bool FDoneEditing;
	int FNumNodes;
	int FNumHidden;
	System::Uitypes::TColor FSelectionColor;
	System::Uitypes::TColor FSelectionColorTo;
	bool FSelectionColorMixer;
	int FSelectionColorMixerFactor;
	System::Uitypes::TColor FSelectionMirrorColor;
	System::Uitypes::TColor FSelectionMirrorColorTo;
	System::Uitypes::TColor FSelectionTextColor;
	bool FSelectionRectangle;
	bool FSelectionRTFKeep;
	bool FShowFocusedSelectionColor;
	Advobj::TVAlignment FVAlignment;
	unsigned FVAlign;
	bool FURLShow;
	bool FURLShowInText;
	bool FURLUnderlineOnHover;
	bool FURLFull;
	System::Uitypes::TColor FURLColor;
	bool FURLEdit;
	Vcl::Imglist::TCustomImageList* FGridImages;
	TIntelliPan FIntelliPan;
	bool FIntelliZoom;
	TScrollType FScrollType;
	System::Uitypes::TColor FScrollColor;
	int FScrollWidth;
	bool FScrollSynch;
	TScrollHintType FScrollHints;
	bool FIsFlat;
	TAdvRichEdit* FRichEdit;
	TAdvRichEdit* FInplaceRichEdit;
	bool FFixedAsButtons;
	Vcl::Menus::TPopupMenu* FFixedDropDownMenu;
	bool FFixedCellPushed;
	System::Types::TRect FPushedFixedCell;
	System::Types::TPoint FPushedCellButton;
	bool FHideFocusRect;
	Vcl::Graphics::TFont* FFixedFont;
	bool FFixedRowAlways;
	bool FFixedColAlways;
	int FFixedRowsMin;
	int FFixedColsMin;
	int FFixedColEdit;
	int FFixedRowEdit;
	System::Classes::TStringList* FColumnHeaders;
	System::Classes::TStringList* FRowHeaders;
	System::Classes::TStringList* FLookupItems;
	System::Classes::TList* FRowSelect;
	System::Classes::TList* FColSelect;
	int FFixedFooters;
	int FFixedRightCols;
	System::WideChar FDelimiter;
	bool FNoDefaultDraw;
	System::WideChar FPasswordChar;
	bool FJavaCSV;
	System::UnicodeString FCheckTrue;
	System::UnicodeString FCheckFalse;
	System::UnicodeString FEditMask;
	bool FEnableHTML;
	bool FEnableWheel;
	bool FFlat;
	System::UnicodeString FLastAnchorHint;
	bool FAnchorHint;
	bool FSaveFixedCells;
	bool FSaveFixedCols;
	bool FSaveFixedRows;
	bool FLoadFirstRow;
	bool FSaveHiddenCells;
	bool FSaveMergedCells;
	bool FSaveVirtCells;
	bool FSaveWithHTML;
	bool FSaveWithRTF;
	bool FWordWrapEx;
	bool FModified;
	bool FEditDisable;
	bool FEditChange;
	bool FExcelStyleDecimalSeparator;
	bool FForceDecimalSeparator;
	bool FHovering;
	THoverFixedCells FHoverFixedCells;
	bool FNoMouseLeave;
	bool FDropDownDown;
	int FHoverFixedX;
	int FHoverFixedY;
	System::UnicodeString FFloatFormat;
	System::UnicodeString FOldCellText;
	System::UnicodeString FNewCellText;
	System::WideString FOldCellTextWide;
	System::WideChar FStartEditChar;
	int FOldCol;
	int FOldRow;
	int FOldRowSel;
	bool FOldModifiedValue;
	int FOldCursor;
	bool FBlockFocus;
	bool FBlockSelChange;
	bool FBlockKill;
	bool FDblClk;
	Vcl::Grids::TGridRect FDisSelection;
	Vcl::Grids::TGridRect FOldSelection;
	Vcl::Grids::TGridRect FSizeSelection;
	Vcl::Grids::TGridRect FMoveSelection;
	bool FRowSelMod;
	bool FEntered;
	bool FEditing;
	bool FSpecialEditor;
	bool FEditActive;
	bool FValidating;
	bool FValidateDblClick;
	bool FFindBusy;
	int FComboIdx;
	int SortDir;
	int SortRow;
	System::Types::TPoint FSearchCell;
	bool ResizeAssigned;
	Vcl::Grids::TGridRect FPrintRect;
	TFindParams FFindParams;
	System::UnicodeString SearchCache;
	System::WideString SearchCacheWide;
	System::UnicodeString SearchInc;
	int SearchTics;
	System::UnicodeString FAnchor;
	int FZoomFactor;
	bool FIsColChanging;
	bool ColchgFlg;
	bool ColMoveFlg;
	bool ColSizeFlg;
	bool ColSized;
	bool RowSized;
	int Colclicked;
	int Rowclicked;
	int Colclickedsize;
	int Rowclickedsize;
	int Movecell;
	int MoveOfsX;
	int MoveOfsY;
	int Clickposx;
	int Clickposy;
	int Clickposdx;
	int Clickposdy;
	bool Invokedchange;
	bool InvokedFocusChange;
	unsigned wheelmsg;
	int wheelscrl;
	bool wheelpan;
	System::Types::TPoint wheelpanpos;
	NativeUInt wheeltimer;
	Vcl::Graphics::TFont* cf;
	HICON prevcurs;
	TMouseSelectMode FMouseSelectMode;
	int FMouseSelectStart;
	bool FPrinterdriverfix;
	System::Types::TRect PrevRect;
	double Fontscalefactor;
	int FPrintPageWidth;
	System::Types::TRect FPrintPageRect;
	int FPrintColStart;
	int FPrintColEnd;
	int FPrintPageFrom;
	int FPrintPageTo;
	int FPrintPageNum;
	bool FExcelClipboardFormat;
	int FGridTimerID;
	bool FGridBlink;
	int FMaxEditLength;
	int FMaxComboLength;
	TGridLook FLook;
	Picturecontainer::TPictureContainer* FContainer;
	Asgcheck::TAdvStringGridCheck* FCellChecker;
	Picturecontainer::THTMLPictureCache* FImageCache;
	System::Types::TPoint FCtrlXY;
	System::UnicodeString FCtrlID;
	System::UnicodeString FCtrlType;
	bool FCtrlEditing;
	bool FPasteAll;
	bool FSpinUpClick;
	bool FSpinDnClick;
	Vcl::Grids::TGridRect FOrigSelection;
	_TAdvStringGrid__1 MaxWidths;
	_TAdvStringGrid__2 Indents;
	Advobj::TGetEditorTypeEvent FOnGetEditorType;
	THasComboEvent FOnHasComboBox;
	THasEditBtnEvent FOnHasEditBtn;
	THasSpinEditEvent FOnHasSpinEdit;
	TGetEditorPropEvent FOnGetEditorProp;
	Advobj::TClickCellEvent FonGetEditorPropInt;
	Advobj::TEllipsClickEvent FOnEllipsClick;
	TUnitChangedEvent FOnUnitChanged;
	Advobj::TButtonClickEvent FOnButtonClick;
	Advobj::TExpandClickEvent FOnExpandClick;
	Advobj::TCheckBoxClickEvent FOnCheckBoxClick;
	Advobj::TCheckBoxCanToggleEvent FOnCheckBoxCanToggle;
	Advobj::TCheckBoxClickEvent FOnCheckBoxMouseUp;
	Advobj::TCheckBoxClickEvent FOnCheckBoxChange;
	TRatingChangeEvent FOnRatingChange;
	TRadioClickEvent FOnRadioClick;
	TRadioClickEvent FOnRadioMouseUp;
	TRadioButtonClickEvent FOnRadioButtonClick;
	TComboChangeEvent FOnComboChange;
	Advobj::TClickCellEvent FOnComboCloseUp;
	Advobj::TClickCellEvent FOnComboDropDown;
	Advobj::TClickCellEvent FOnDatePickerCloseUp;
	Advobj::TClickCellEvent FOnDatePickerDropDown;
	TComboObjectChangeEvent FOnComboObjectChange;
	Advobj::TSpinClickEvent FOnSpinClick;
	TFloatSpinClickEvent FOnFloatSpinClick;
	TDateTimeSpinClickEvent FOntimeSpinClick;
	TDateTimeSpinClickEvent FOnDateSpinClick;
	TDateTimeChangeEvent FOnDateTimeChange;
	Advobj::TScrollHintEvent FOnScrollHint;
	TEditLink* FEditLink;
	TControlEdit* FEditControl;
	TControlCombo* FComboControl;
	Vcl::Controls::TWinControl* EditCtrl;
	TGridCombo* EditCombo;
	TGridSpin* FEditSpin;
	TGridTransEdit* EditTrans;
	TGridTransCombo* ComboTrans;
	TGridTrackbarDropDown* FEditTrackBar;
	TGridMemoDropDown* FEditMemo;
	TGridCalculatorDropDown* FEditCalculator;
	TGridTimepickerDropDown* FEditTimePicker;
	TGridDetailPickerDropDown* FEditDetailPicker;
	TGridGridDropDown* FEditGridPicker;
	TGridColorDropDown* FEditColorPicker;
	TGridImageDropDown* FEditImagePicker;
	TGridAdvGridDropDown* FEditAdvGridPicker;
	TGridControlDropDown* FEditControlPicker;
	TGridCheckBox* EditCheck;
	TGridEditBtn* EditBtn;
	TGridUnitEditBtn* UnitEditBtn;
	TGridDatePicker* FEditDate;
	TGridDateTimePicker* FEditDateTime;
	TGridButton* GridButton;
	THeaderDragButton* MoveButton;
	Vcl::Forms::TForm* MoveForm;
	TNoActiveForm* FButtonForm;
	Advobj::TEditorType EditControl;
	System::Classes::TCollection* FGridItems;
	TFilter* FFilter;
	bool FFilterActive;
	TGridFilterType FFilterType;
	bool FFilterNormalCellsOnly;
	int FFilterCol;
	int FFilterFixedRows;
	TFilterDropDown* FFilterDropDown;
	TFilterEdit* FFilterEdit;
	TDropList* FDropList;
	TDropCheckList* FDropCheckList;
	System::Classes::TStringList* FFilterList;
	bool FAutoFilterUpdate;
	System::Classes::TList* FNotifierList;
	bool FActiveCellShow;
	Vcl::Graphics::TFont* FActiveCellFont;
	System::Types::TPoint FXYOffset;
	System::Types::TPoint FXYRTFOffset;
	bool FXYOffsetTopLeftOnly;
	int FOldSize;
	Advobj::TIntList* FOrigColSizes;
	Advobj::TIntList* FSuppressColSizes;
	Advobj::TIntList* FSuppressRowSizes;
	bool FSizeFixed;
	int FSizingFixedCol;
	bool FSizingFixed;
	int FSizingFixedRow;
	bool FSizeFixedR;
	bool FSizingFixedR;
	int FSizeFixedX;
	int FSizeFixedY;
	bool FDisableChange;
	bool FNilObjects;
	bool FQuoteEmptyCells;
	bool FQuoteQuoteCells;
	bool FAutoThemeAdapt;
	bool FAlwaysQuotes;
	bool FCSVMultilineCellImport;
	bool FCSVTrimSpaces;
	TSortSettings* FSortSettings;
	System::Uitypes::TColor FSelectionRectangleColor;
	TDragDropSettings* FDragDropSettings;
	TControlLook* FControlLook;
	Advobj::TGridBorderPropEvent FOnGetCellBorderProp;
	TFooterPanel* FFooterPanel;
	TSearchPanel* FSearchPanel;
	Advobj::TSearchFooter* FSearchFooter;
	TFloatingFooter* FFloatingFooter;
	bool FIntegralHeight;
	bool FIsWinXP;
	bool FIsWin7;
	bool FIsWinVista;
	bool FIsComCtl6;
	bool FClearTextOnly;
	System::Classes::TNotifyEvent FOnEditingDone;
	TEditChangeEvent FOnEditChange;
	TEditCellDoneEvent FOnEditCellDone;
	Advobj::TUpdateColumnSizeEvent FOnUpdateColumnSize;
	bool FHTMLHint;
	bool FHTMLKeepLinebreak;
	bool FAlwaysValidate;
	bool FEnableBlink;
	System::Classes::TNotifyEvent FOnGridResize;
	bool FSizeGrowOnly;
	System::Uitypes::TColor FActiveCellColor;
	System::Uitypes::TColor FActiveCellColorTo;
	bool FSelectionResizer;
	int FMaxColWidth;
	int FMinRowHeight;
	int FMinColWidth;
	int FMaxRowHeight;
	TCustomFilterEvent FOnCustomFilter;
	Advobj::TCustomCellDrawEvent FOnCustomCellDraw;
	Advobj::TCustomCellDrawEvent FOnCustomCellBkgDraw;
	TCustomCellSizeEvent FOnCustomCellSize;
	TSelectionResizeEvent FSelectionResizeEvent;
	TSelectionResizeEvent FSelectionResizedEvent;
	TWordWrapEvent FOnGetWordWrap;
	TGroupCalcEvent FOnGroupCalc;
	TGroupCalcEvent FOnColumnCalc;
	System::Uitypes::TColor FTMSGradFrom;
	System::Uitypes::TColor FTMSGradTo;
	System::Uitypes::TColor FTMSGradMirrorFrom;
	System::Uitypes::TColor FTMSGradMirrorTo;
	System::Uitypes::TColor FTMSGradHoverFrom;
	System::Uitypes::TColor FTMSGradHoverTo;
	System::Uitypes::TColor FTMSGradHoverMirrorFrom;
	System::Uitypes::TColor FTMSGradHoverMirrorTo;
	System::Uitypes::TColor FTMSGradHoverBorder;
	System::Uitypes::TColor FTMSGradDownFrom;
	System::Uitypes::TColor FTMSGradDownTo;
	System::Uitypes::TColor FTMSGradDownMirrorFrom;
	System::Uitypes::TColor FTMSGradDownMirrorTo;
	System::Uitypes::TColor FTMSGradDownBorder;
	bool FUseHTMLHints;
	bool FShowNullDates;
	NativeUInt FICursor;
	int FFixedRowHeight;
	bool FSelHidden;
	Advobj::TIntList* FColumnOrder;
	TSortDirection FAutoNumberDirection;
	int FAutoNumberOffset;
	int FAutoNumberStart;
	int FOldLeftCol;
	int FOldKeepLeftCol;
	int FOldTopRow;
	TSelectionChanged FSelectionChanged;
	System::Uitypes::TScrollStyle FScrollBars;
	bool FNarrowDownFromStart;
	TScrollCellEvent FOnScrollCell;
	System::Classes::TWndMethod FGridControlWndProc;
	int FNumCellControls;
	Advobj::TAdvControlList* FControlList;
	bool FDisableSize;
	Advobj::TEditorType FDefaultEditor;
	System::Classes::TAlignment FDefaultAlignment;
	System::Uitypes::TColor FDisabledFontColor;
	System::Types::TPoint FHotFixedCell;
	System::Classes::TNotifyEvent FOnPainted;
	bool FCellSelectorMode;
	int FAECol;
	int FAERow;
	bool FShowEditProcess;
	bool FEditStart;
	TBalloonSettings* FBalloonSettings;
	NativeUInt FHToolTip;
	TScrollBarAlways FScrollBarAlways;
	System::StaticArray<System::WideChar, 4097> FToolTipBuffer;
	Advobj::TGridBalloonEvent FOnCellBalloon;
	TShowModified* FShowModified;
	TCellGraphic* FCellGraphic;
	TFooterPaintEvent FOnPaintFooter;
	TCalcFooterEvent FOnCalcFooter;
	TDragScrollOptions* FDragScrollOptions;
	int FTimerTicks;
	Vcl::Extctrls::TTimer* FDragTmr;
	Vcl::Extctrls::TTimer* FScrollTimer;
	int FScrollDelta;
	int FScrollSteps;
	bool FScrollStart;
	System::Types::TPoint FTouchScrollPt;
	bool FScrollEnd;
	unsigned FTimeStart;
	TDragScrollDirection FDragScrollDirection;
	TDragScrollEvent FOnDragScroll;
	int FFindCol;
	int FFindRow;
	bool FNoImageAndText;
	TCellSaveLoadEvent FOnSaveCell;
	TCellSaveLoadEvent FOnLoadCell;
	THoverButtonsShowEvent FOnHoverButtonsShow;
	int FMaxRowCount;
	int FMaxColCount;
	bool FUseEnabledRows;
	bool FUseDisabledFont;
	int FLastTabCol;
	int FLastTabRow;
	TGridProgressAppearance* FProgressAppearance;
	TCustomStrToDateEvent FOnCustomStrToDate;
	System::Classes::TNotifyEvent FOnCreatedFloatingFooter;
	System::Classes::TNotifyEvent FOnCreatedSearchFooter;
	TDropDownButtonClickEvent FOnDropDownHeaderButtonClick;
	TDropDownButtonClickEvent FOnDropDownFooterButtonClick;
	Advobj::TOfficeHintEvent FOnOfficeHint;
	Advhintinfo::TAdvHintInfo* FOfficeHint;
	bool FScrollLock;
	int FPaintCount;
	System::UnicodeString FEditText;
	System::WideString FEditWideText;
	bool FNoEditChange;
	bool FNoAutoAdvance;
	bool FGridModified;
	Advobj::TIntList* FIgnoreColumns;
	System::UnicodeString FXMLEncoding;
	int FFilterRow;
	bool FFilterDropDownAuto;
	bool FFilterDropDownMultiCol;
	bool FFilterDropDownCheck;
	System::UnicodeString FFilterDropDownCheckUnCheckAll;
	TFilterDropDownColumns FFilterDropDownColumns;
	bool FFilterIncremental;
	System::UnicodeString FFilterDropDownClear;
	System::TDateTime FOriginalDateTime;
	Vcl::Stdctrls::TScrollBar* FScrollBar;
	Vcl::Stdctrls::TScrollBar* FPaintScrollBar;
	int FScrollCol;
	int FScrollRow;
	System::UnicodeString FInvalidEntryTitle;
	System::UnicodeString FInvalidEntryText;
	TInvalidEntryIcon FInvalidEntryIcon;
	bool FBlockCellChange;
	bool FBlockCellChanging;
	int FLastDesignChoice;
	bool FShowDesignHelper;
	bool FIsPrintPreview;
	System::UnicodeString FValidChars;
	TCharSet FValidCharSet;
	bool FUseInternalHintClass;
	bool FUseSelectionTextColor;
	System::Classes::TNotifyEvent FOnStartBlockFocus;
	System::Classes::TNotifyEvent FOnEndBlockFocus;
	Advobj::TSyncGrid* FSyncGrid;
	bool FFitCellsInGrid;
	bool FShowSelection;
	bool FAutoHideSelection;
	bool FSpreadSheet;
	System::Types::TPoint FHoverCell;
	System::Types::TPoint FHoverButton;
	int FHoverlink;
	int FOleDragCol;
	int FOleDragIndex;
	Vcl::Stdctrls::TCustomListBox* FOleDragList;
	Advstyleif::TColorTones FTones;
	bool FShowColNrs;
	Advobj::TFocusHelper* FFocusHelper;
	_di_ITAdvStringGridSelect FISelect;
	bool FUseVCLStyles;
	bool FUseScrollStyles;
	TFilterCloseEvent FOnFilterClose;
	TFilterShowEvent FOnFilterShow;
	Vcl::Controls::TImageList* FFltrList;
	Vcl::Menus::TPopupMenu* FFltrPopup;
	int FFltrPopPressCol;
	TAutoColor* FAutoColor;
	_TAdvStringGrid__3 FConditions;
	_TAdvStringGrid__4 FColumns;
	_TAdvStringGrid__5 FCase;
	bool FInWMSize;
	System::Classes::TNotifyEvent FOnIntelliZoom;
	bool FIsNarrowDown;
	Advobj::TIntList* FHiddenRowLookup;
	TFormatType FFormatType;
	THoverButtons* FHoverButtons;
	THoverButtonClickEvent FOnHoverButtonClick;
	bool FOwnsObjects;
	bool FForceComboSel;
	int FHoverButtonRow;
	TAdvGridPopup* FToolBarPopup;
	Vcl::Grids::TGridCoord FToolBarPopupCell;
	TPopupToolBarMode FPopupToolBarMode;
	bool FInWorkbook;
	bool FSaveFormula;
	_di_ITMSCellValidate FICellValidate;
	float FDPIScale;
	float FOldDPIScale;
	int FLastScrollCode;
	bool FBlockFilterUpdate;
	bool FIgnoreHTMLMulti;
	bool FDoAutoEditFilter;
	System::UnicodeString FEditFilterCondition;
	TFilterType FEditFilterType;
	int FEditFilterColumn;
	Advobj::TIntList* FCacheRowHeights;
	bool FUseCacheRowHeights;
	bool FUseStyleServices;
	bool FStyleBkg;
	bool FFixDecSep;
	bool FIsEditHiding;
	TShowFilterEditEvent FOnShowFilterEdit;
	System::Sysutils::TEncoding* FEncoding;
	bool FDesignTime;
	bool FDesignCreate;
	TRowCountChangeEvent FOnRowCountChange;
	TProgressColorEvent FOnProgressColor;
	TBeforeEditEvent FOnBeforeEdit;
	bool FUseFixedFont;
	bool FGetEditTextAlign;
	TChangeScaleEvent FOnChangeScale;
	void __fastcall SetDragScrollOptions(TDragScrollOptions* Value);
	void __fastcall NCPaintProc();
	HIDESBASE MESSAGE void __fastcall WMNCPaint(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMNotify(Winapi::Messages::TWMNotify &Message);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Winapi::Messages::TWMSetFocus &Msg);
	HIDESBASE MESSAGE void __fastcall WMKillFocus(Winapi::Messages::TWMKillFocus &Msg);
	HIDESBASE MESSAGE void __fastcall WMSetCursor(Winapi::Messages::TWMSetCursor &Msg);
	HIDESBASE MESSAGE void __fastcall WMLButtonUp(Winapi::Messages::TWMMouse &Msg);
	HIDESBASE MESSAGE void __fastcall WMRButtonUp(Winapi::Messages::TWMMouse &Msg);
	HIDESBASE MESSAGE void __fastcall WMLButtonDown(Winapi::Messages::TWMMouse &Msg);
	HIDESBASE MESSAGE void __fastcall WMRButtonDown(Winapi::Messages::TWMMouse &Msg);
	HIDESBASE MESSAGE void __fastcall WMLButtonDblClk(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMChar(Winapi::Messages::TWMKey &Msg);
	HIDESBASE MESSAGE void __fastcall WMKeyDown(Winapi::Messages::TWMKey &Msg);
	HIDESBASE MESSAGE void __fastcall WMKeyUp(Winapi::Messages::TWMKey &Msg);
	HIDESBASE MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Msg);
	HIDESBASE MESSAGE void __fastcall WMPaint(Winapi::Messages::TWMPaint &Msg);
	HIDESBASE MESSAGE void __fastcall WMEraseBkGnd(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMTimer(Winapi::Messages::TWMTimer &Msg);
	HIDESBASE MESSAGE void __fastcall WMVScroll(Winapi::Messages::TWMScroll &WMScroll);
	HIDESBASE MESSAGE void __fastcall WMHScroll(Winapi::Messages::TWMScroll &WMScroll);
	HIDESBASE MESSAGE void __fastcall WMGetDlgCode(Winapi::Messages::TWMNoParams &Msg);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMCursorChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMColorChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMStyleChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMEnabledChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMHintShow(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall CMDialogChar(Winapi::Messages::TWMKey &Msg);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall CMDesignHitTest(Winapi::Messages::TWMMouse &Msg);
	int __fastcall MouseOverDesignChoice(int X, int Y);
	void __fastcall HideEditControl(int ACol, int ARow);
	void __fastcall ShowEditControl(int ACol, int ARow);
	void __fastcall ShowFocusHelper(const System::Types::TRect &R);
	void __fastcall HideFocusHelper();
	void __fastcall MoveFocusHelper();
	bool __fastcall IsPassword(int ACol, int ARow);
	void __fastcall HandleRadioClick(int ACol, int ARow, int Xpos, int Ypos);
	bool __fastcall CanVisitCell(int ACol, int AROw);
	System::Types::TPoint __fastcall NextVisitableCell(int ACol, int ARow);
	int __fastcall NextCol(int ACol)/* overload */;
	int __fastcall NextCol(int ACol, bool Dir)/* overload */;
	int __fastcall NextRow(int ARow);
	int __fastcall FirstVisRow();
	int __fastcall FirstVisCol();
	int __fastcall LastVisRow();
	int __fastcall LastVisCol();
	bool __fastcall TabEdit(bool Dir);
	bool __fastcall ToggleRadio(int ACol, int ARow, bool FromEdit);
	TAdvInplaceEdit* __fastcall GetInplaceEditor();
	void __fastcall SetAutoSizeP(bool AAutoSize);
	void __fastcall SetOfficeHint(Advhintinfo::TAdvHintInfo* const Value);
	void __fastcall SetFlat(const bool AValue);
	void __fastcall SetShowSelection(bool AValue);
	void __fastcall SetMaxEditLength(const int AValue);
	void __fastcall SetGroupColumn(int AGroupColumn);
	void __fastcall QuickSortRows(int Col, int Left, int Right);
	void __fastcall QuickSortRowsIndexed(int Col, int Left, int Right);
	void __fastcall QuickSortRowsRef(int Col, int Left, int Right);
	void __fastcall SetVAlignment(Advobj::TVAlignment AVAlignment);
	int __fastcall BuildPages(Vcl::Graphics::TCanvas* ACanvas, TPrintMethod PrintMethod, int MaxPages, bool SelRows);
	int __fastcall Compare(int Col, int ARow1, int ARow2, TSortDirection sd);
	int __fastcall CompareLine(int Col, int ARow1, int ARow2);
	int __fastcall CompareLineIndexed(int Colidx, int ARow1, int ARow2);
	bool __fastcall MatchCell(int Col, int Row, bool IsWide);
	void __fastcall ShowHintProc(System::UnicodeString &HintStr, bool &CanShow, Vcl::Controls::THintInfo &HintInfo);
	void __fastcall DrawSortIndicator(Vcl::Graphics::TCanvas* Canvas, int Col, int x, int y);
	bool __fastcall FreeCellGraphic(int ACol, int ARow);
	bool __fastcall RemoveCellGraphic(int ACol, int ARow, TCellType CellType);
	TCellGraphic* __fastcall CreateCellGraphic(int ACol, int ARow);
	Advobj::TIntList* __fastcall GetCellImages(int ACol, int ARow);
	int __fastcall GetCellImageIdx(int ACol, int ARow);
	void __fastcall SetInts(int ACol, int ARow, const int Value);
	int __fastcall GetInts(int ACol, int ARow);
	void __fastcall SetAllInts(int ACol, int ARow, const int Value);
	int __fastcall GetAllInts(int ACol, int ARow);
	void __fastcall SetFloats(int ACol, int ARow, const double Value);
	double __fastcall GetFloats(int ACol, int ARow);
	void __fastcall SetAllFloats(int ACol, int ARow, const double Value);
	double __fastcall GetAllFloats(int ACol, int ARow);
	void __fastcall SetDates(int ACol, int ARow, const System::TDateTime Value);
	System::TDateTime __fastcall GetDates(int ACol, int ARow);
	void __fastcall SetTimes(int ACol, int ARow, const System::TDateTime Value);
	System::TDateTime __fastcall GetTimes(int ACol, int ARow);
	void __fastcall SetDateTimes(int ACol, int ARow, const System::TDateTime Value);
	System::TDateTime __fastcall GetDateTimes(int ACol, int ARow);
	bool __fastcall GetRowSelect(int ARow);
	void __fastcall SetRowSelect(int ARow, bool Value);
	bool __fastcall GetRowModified(int ARow);
	void __fastcall SetRowModified(int ARow, bool Value);
	bool __fastcall GetRowEnabled(int ARow);
	void __fastcall SetRowEnabled(int ARow, bool Value);
	int __fastcall GetRowSelectCount();
	bool __fastcall GetColSelect(int ACol);
	void __fastcall SetColSelect(int ACol, bool Value);
	int __fastcall GetColSelectCount();
	void __fastcall SelectToColSelect(bool IsShift);
	System::Types::TRect __fastcall ButtonRect(int ACol, int ARow);
	System::Types::TRect __fastcall ExpandRect(int ACol, int ARow);
	void __fastcall SetFixedFont(Vcl::Graphics::TFont* Value);
	void __fastcall FixedFontChanged(System::TObject* Sender);
	void __fastcall SortIndexesChanged(System::TObject* Sender, int Acol, int Arow);
	void __fastcall MultiImageChanged(System::TObject* Sender, int ACol, int ARow);
	void __fastcall MergedColumnsChanged(System::TObject* Sender, int ACol, int ARow);
	void __fastcall UndoColumnMerge();
	void __fastcall ApplyColumnMerge();
	void __fastcall RichSelChange(System::TObject* Sender);
	void __fastcall SetColumnHeaders(System::Classes::TStringList* Value);
	void __fastcall ColHeaderChanged(System::TObject* Sender);
	void __fastcall SetRowHeaders(System::Classes::TStringList* Value);
	void __fastcall RowHeaderChanged(System::TObject* Sender);
	int __fastcall GetPrintColWidth(int ACol);
	int __fastcall GetPrintColOffset(int ACol);
	void __fastcall SetLookupItems(System::Classes::TStringList* Value);
	int __fastcall PasteFunc(int ACol, int ARow, int &Cols, int &Rows);
	System::UnicodeString __fastcall CopyFuncStr(const Vcl::Grids::TGridRect &gd, bool DoDisjunct);
	void __fastcall CopyFunc(const Vcl::Grids::TGridRect &gd, bool DoDisjunct);
	void __fastcall CopyRTFFunc(int ACol, int ARow);
	void __fastcall CopyBinFunc(const Vcl::Grids::TGridRect &gd);
	void __fastcall SetPreviewPage(int Value);
	Vcl::Graphics::TBitmap* __fastcall GetRowIndicator();
	void __fastcall SetRowIndicator(Vcl::Graphics::TBitmap* Value);
	void __fastcall SetBackground(TBackGround* Value);
	void __fastcall RTFPaint(int ACol, int ARow, Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &ARect);
	HIDESBASE void __fastcall DrawSizingLine(int X);
	void __fastcall DrawSizingLineR(int Y);
	int __fastcall YOffsetSize();
	int __fastcall XOffsetSize();
	void __fastcall InitVCLStyle(bool init);
	void __fastcall FlatInit();
	void __fastcall FlatDone();
	void __fastcall FlatUpdate();
	void __fastcall FlatSetScrollProp(int index, int newValue, System::LongBool fRedraw);
	void __fastcall FlatSetScrollInfo(int code, tagSCROLLINFO &scrollinfo, System::LongBool fRedraw);
	void __fastcall FlatShowScrollBar(int code, System::LongBool show);
	void __fastcall UpdateVScrollBar();
	void __fastcall UpdateHScrollBar();
	void __fastcall UpdateScrollBars(bool Refresh);
	void __fastcall UpdateType();
	void __fastcall UpdateColor();
	void __fastcall UpdateWidth();
	void __fastcall SetScrollBarsEx(const System::Uitypes::TScrollStyle Value);
	System::Uitypes::TScrollStyle __fastcall GetScrollBarsEx();
	void __fastcall SetScrollType(const TScrollType Value);
	void __fastcall SetScrollColor(const System::Uitypes::TColor Value);
	void __fastcall SetScrollWidth(const int Value);
	void __fastcall SetScrollProportional(bool Value);
	void __fastcall SetActiveCellShow(const bool Value);
	void __fastcall SetActiveCellFont(Vcl::Graphics::TFont* const Value);
	void __fastcall SetAutoThemeAdapt(const bool Value);
	void __fastcall SetXYOffset(const System::Types::TPoint &Value);
	bool __fastcall GetLockFlag();
	void __fastcall SetLockFlag(bool AValue);
	bool __fastcall InSizeZone(int x, int y);
	int __fastcall RemapCol(int ACol);
	int __fastcall RemapColInv(int ACol);
	int __fastcall RemapRow(int ARow);
	int __fastcall RemapRowInv(int ARow);
	void __fastcall SetVisibleCol(int i, bool AValue);
	bool __fastcall GetVisibleCol(int i);
	int __fastcall MaxLinesInGrid();
	int __fastcall MaxLinesInRow(int ARow);
	int __fastcall MaxCharsInCol(int ACol);
	void __fastcall SizeToLines(const int ARow, const int Lines, const int Padding);
	void __fastcall SizeToWidth(const int ACol, bool inconly);
	void __fastcall SizeToHeight(const int ARow, bool inconly, int Padding = 0x0);
	TCellAlignment __fastcall GetCellAlignment(int ACol, int ARow);
	void __fastcall DrawIntelliFocusPoint();
	void __fastcall EraseIntelliFocusPoint();
	void __fastcall SetImages(Vcl::Imglist::TCustomImageList* Value);
	void __fastcall SetURLShow(bool Value);
	void __fastcall SetURLShowInText(bool Value);
	void __fastcall SetURLColor(System::Uitypes::TColor Value);
	void __fastcall SetURLFull(bool Value);
	void __fastcall SetLook(TGridLook Value);
	System::UnicodeString __fastcall GetLookAsString(TGridLook Value);
	System::UnicodeString __fastcall GetLookAsFriendlyString(TGridLook Value);
	void __fastcall CalcTextPos(System::Types::TRect &ARect, System::Types::TSize &sz, int AAngle, System::UnicodeString ATxt, System::Classes::TAlignment hal, Advobj::TVAlignment val);
	void __fastcall SetFixedFooters(int Value);
	void __fastcall SetFixedRightCols(int Value);
	void __fastcall SetFixedColWidth(int Value);
	void __fastcall SetRowCountEx(int Value);
	int __fastcall GetRowCountEx();
	void __fastcall SetColCountEx(int Value);
	int __fastcall GetColCountEx();
	void __fastcall SetFixedRowsEx(int Value);
	int __fastcall GetFixedRowsEx();
	void __fastcall SetFixedColsEx(int Value);
	int __fastcall GetFixedColsEx();
	int __fastcall GetFixedCellWidth();
	void __fastcall SetHovering(bool Value);
	int __fastcall GetFixedColWidth();
	void __fastcall SetFixedRowHeight(int Value);
	int __fastcall GetFixedRowHeight();
	void __fastcall SetWordWrapEx(bool Value);
	bool __fastcall GetWordWrapEx();
	void __fastcall SetSelectionColor(System::Uitypes::TColor AColor);
	void __fastcall SetSelectionColorTo(System::Uitypes::TColor AColor);
	void __fastcall SetSelectionMirrorColor(System::Uitypes::TColor AColor);
	void __fastcall SetSelectionMirrorColorTo(System::Uitypes::TColor AColor);
	void __fastcall SetSelectionTextColor(System::Uitypes::TColor AColor);
	void __fastcall SetSelectionRectangle(bool AValue);
	void __fastcall SetFilterActive(const bool Value);
	void __fastcall SetFilterRow(const int Value);
	System::Uitypes::TCursor __fastcall GetCursorEx();
	void __fastcall SetCursorEx(const System::Uitypes::TCursor Value);
	System::UnicodeString __fastcall GetCellsEx(int i, int j);
	void __fastcall SetCellsEx(int i, int j, System::UnicodeString Value);
	System::UnicodeString __fastcall GetGridCellsEx(int i, int j);
	void __fastcall SetGridCellsEx(int i, int j, System::UnicodeString Value);
	System::WideString __fastcall GetWideCellsEx(int i, int j);
	void __fastcall SetWideCellsEx(int i, int j, System::WideString Value);
	System::TObject* __fastcall GetObjectsEx(int i, int j);
	void __fastcall SetObjectsEx(int i, int j, System::TObject* aObject);
	int __fastcall GetAllColWidths(int i);
	void __fastcall SetAllColWidths(int i, const int Value);
	System::Uitypes::TColor __fastcall GetColors(int i, int j);
	void __fastcall SetColors(int i, int j, System::Uitypes::TColor AColor);
	System::Uitypes::TColor __fastcall GetColorsTo(int i, int j);
	void __fastcall SetColorsTo(int i, int j, System::Uitypes::TColor AColor);
	Advobj::TCellGradientDirection __fastcall GetGradientDir(int i, int j);
	void __fastcall SetGradientDir(int i, int j, Advobj::TCellGradientDirection ADirection);
	void __fastcall SetRowColor(int i, System::Uitypes::TColor AColor);
	void __fastcall SetRowColorTo(int i, System::Uitypes::TColor AColor);
	void __fastcall SetRowFontColor(int i, System::Uitypes::TColor AColor);
	bool __fastcall GetReadOnly(int i, int j);
	void __fastcall SetReadOnly(int i, int j, bool AValue);
	bool __fastcall GetWordWraps(int i, int j);
	void __fastcall SetWordWraps(int i, int j, bool AValue);
	Vcl::Controls::TControl* __fastcall GetCellControls(int i, int j);
	void __fastcall SetCellControls(int i, int j, Vcl::Controls::TControl* AControl);
	System::UnicodeString __fastcall GetStrippedCell(int i, int j);
	System::UnicodeString __fastcall GetHyperlink(int i, int j);
	System::Classes::TStrings* __fastcall HiddenRow(int j);
	int __fastcall PasteText(int ACol, int ARow, System::WideChar * p, int &Cols, int &Rows);
	void __fastcall InputFromCSVStream(System::Classes::TStream* AStream, bool insertmode, int MaxRows, int IgnoreRows, System::Sysutils::TEncoding* AEncoding);
	void __fastcall InputFromCSV(System::UnicodeString FileName, bool insertmode, int MaxRows, int IgnoreRows);
	void __fastcall OutputToCSV(System::UnicodeString FileName, bool appendmode, System::Sysutils::TEncoding* AEncoding);
	void __fastcall OutputRectToCSV(System::UnicodeString FileName, const Vcl::Grids::TGridRect &ARect, bool appendmode, System::Sysutils::TEncoding* AEncoding);
	void __fastcall OutputToHTML(System::UnicodeString FileName, bool appendmode, bool Show = false, bool Unicode = true);
	void __fastcall LoadXLS(System::UnicodeString filename, System::UnicodeString sheetname);
	void __fastcall SaveXLS(System::UnicodeString filename, System::UnicodeString sheetname, bool CreateNewSheet);
	TGridDatePicker* __fastcall GetDateTimePicker();
	void __fastcall SetArrowColor(System::Uitypes::TColor Value);
	System::Uitypes::TColor __fastcall GetArrowColor();
	System::Types::TPoint __fastcall PasteSize(System::WideChar * p);
	void __fastcall MarkCells(System::UnicodeString s, System::UnicodeString tag, bool DoCase, int FromCol, int FromRow, int ToCol, int ToRow, bool FullCell = false);
	void __fastcall UnMarkCells(System::UnicodeString tag, int FromCol, int FromRow, int ToCol, int ToRow);
	System::UnicodeString __fastcall GetUnSortedCell(int i, int j);
	void __fastcall SetUnSortedCell(int i, int j, const System::UnicodeString Value);
	int __fastcall GetDefRowHeightEx();
	void __fastcall SetIntegralHeight(const bool Value);
	bool __fastcall GetSelectedCells(int i, int j);
	void __fastcall SetSelectedCells(int i, int j, const bool Value);
	int __fastcall GetSelectedCellsCount();
	Vcl::Grids::TGridCoord __fastcall GetSelectedCell(int i);
	int __fastcall GetSelectedRowCount();
	int __fastcall GetSelectedColCount();
	int __fastcall GetSelectedRow(int i);
	System::Uitypes::TColor __fastcall GetFontColors(int i, int j);
	void __fastcall SetFontColors(int i, int j, const System::Uitypes::TColor Value);
	System::Classes::TAlignment __fastcall GetAlignments(int i, int j);
	void __fastcall SetAlignments(int i, int j, const System::Classes::TAlignment Value);
	int __fastcall GetLinesInCell(int i, int j);
	void __fastcall SetActiveCellColor(const System::Uitypes::TColor Value);
	void __fastcall SetActiveCellColorTo(const System::Uitypes::TColor Value);
	void __fastcall SetSelectionResizer(const bool Value);
	System::Uitypes::TFontStyles __fastcall GetFontStyles(int i, int j);
	void __fastcall SetFontStyles(int i, int j, const System::Uitypes::TFontStyles Value);
	System::UnicodeString __fastcall GetFontNames(int i, int j);
	int __fastcall GetFontSizes(int i, int j);
	void __fastcall SetFontNames(int i, int j, const System::UnicodeString Value);
	void __fastcall SetFontSizes(int i, int j, const int Value);
	void __fastcall SetTMSGradFrom(const System::Uitypes::TColor Value);
	void __fastcall SetTMSGradTo(const System::Uitypes::TColor Value);
	void __fastcall SetTMSGradMirrorFrom(const System::Uitypes::TColor Value);
	void __fastcall SetTMSGradMirrorTo(const System::Uitypes::TColor Value);
	void __fastcall SetUseHTMLHints(const bool Value);
	void __fastcall ControlExit(System::TObject* Sender);
	void __fastcall ControlEnter(System::UnicodeString S, System::UnicodeString CT, System::UnicodeString CID, System::UnicodeString CV, const System::Types::TRect &CR, int X, int RX, int Y);
	System::UnicodeString __fastcall GetCtrlVal(int ACol, int ARow, System::UnicodeString ID);
	void __fastcall SetCtrlVal(int ACol, int ARow, System::UnicodeString ID, const System::UnicodeString Value);
	int __fastcall GetAllColCount();
	int __fastcall GetLastCol();
	int __fastcall GetAllRowCount();
	int __fastcall GetLastRow();
	System::WideString __fastcall GetWideCells(int i, int j);
	void __fastcall SetWideCells(int i, int j, const System::WideString Value);
	void __fastcall StopFixedEdit();
	void __fastcall StartFixedEdit(int x, int y, bool FilterEdit = false);
	int __fastcall NumFixedRightVis();
	int __fastcall FixedColsVis();
	bool __fastcall HoverFixedCell(int Col, int Row);
	Vcl::Graphics::TCanvas* __fastcall GetFooterCanvas();
	System::Types::TPoint __fastcall FindInternal(const System::Types::TPoint &StartCell, System::UnicodeString s, System::WideString sw, bool IsWide, TFindParams FindParams);
	bool __fastcall InNodeRect(int ARow, int x);
	void __fastcall SetVersion(const System::UnicodeString Value);
	void __fastcall SaveToDOCInt(System::UnicodeString FileName, System::UnicodeString bookmark, bool CreateNewDocument, bool Append);
	void __fastcall SaveToASCIIInt(System::UnicodeString FileName, bool AppendFile, bool Unicode);
	void __fastcall QSortGroupInt(bool Indexed);
	void __fastcall CreateToolTip();
	void __fastcall AddToolTip(int IconType, System::UnicodeString Text, System::UnicodeString Title);
	void __fastcall DestroyToolTip();
	void __fastcall SetShowModified(TShowModified* const Value);
	void __fastcall SetShowDesignHelper(const bool Value);
	void __fastcall SetBalloonSettings(TBalloonSettings* const Value);
	void __fastcall FixedEditChange(System::TObject* Sender);
	void __fastcall FixedComboSelect(System::TObject* Sender);
	void __fastcall SearchEditChange(System::TObject* Sender);
	void __fastcall SearchBackwardInt(bool Loop);
	void __fastcall SearchForwardInt(bool Loop);
	void __fastcall SearchBackward(System::TObject* Sender);
	void __fastcall SearchForward(System::TObject* Sender);
	void __fastcall SearchExit(System::TObject* Sender);
	void __fastcall SearchHighLight(System::TObject* Sender);
	void __fastcall SearchMatchCase(System::TObject* Sender);
	void __fastcall SetScrollBarAlways(const TScrollBarAlways Value);
	Vcl::Grids::TGridRect __fastcall GetSelectionEx();
	void __fastcall SetSelectionEx(const Vcl::Grids::TGridRect &Value);
	void __fastcall SetProgressAppearance(TGridProgressAppearance* const Value);
	System::TObject* __fastcall GetAllGraphicsObject(int i, int j);
	System::UnicodeString __fastcall GetOriginalCells(int i, int j);
	void __fastcall SetOriginalCells(int i, int j, const System::UnicodeString Value);
	void __fastcall SetFilterDropDownAuto(const bool Value);
	void __fastcall FilterDropDownChanged(System::TObject* Sender);
	void __fastcall SetHighlightColor(const System::Uitypes::TColor Value);
	void __fastcall SetHighlightTextColor(const System::Uitypes::TColor Value);
	Vcl::Graphics::TFont* __fastcall GetCellFont(int i, int j);
	void __fastcall SetCellFont(int i, int j, Vcl::Graphics::TFont* const Value);
	void __fastcall SetSortSettings(TSortSettings* const Value);
	void __fastcall SetSyncGrid(Advobj::TSyncGrid* const Value);
	int __fastcall GetColEx();
	void __fastcall SetColEx(const int Value);
	void __fastcall SetSpreadSheet(const bool Value);
	void __fastcall SetDefaultAlignment(const System::Classes::TAlignment Value);
	Advobj::TEditorType __fastcall GetCurrentEditor();
	void __fastcall SetSelectionColorMixer(const bool Value);
	void __fastcall SetBorderColor(const System::Uitypes::TColor Value);
	void __fastcall SetFocusHelper(Advobj::TFocusHelper* const Value);
	bool __fastcall IsCellGraphic(int ACol, int ARow, const TCellTypeSet &CTSet);
	int __fastcall GetComboIndex(int ACol, int ARow);
	void __fastcall SetComboIndex(int ACol, int ARow, const int Value);
	void __fastcall SetSelectionColorMixerFactor(const int Value);
	void __fastcall SetFilterEdit(TFilterEdit* const Value);
	void __fastcall SetAutoColor(TAutoColor* const Value);
	void __fastcall SetSizeWithForm(const bool Value);
	TFooterPanel* __fastcall GetFooterPanel();
	void __fastcall SetFormatType(const TFormatType Value);
	void __fastcall SetHoverButtons(THoverButtons* const Value);
	void __fastcall SetHTMLKeepLineBreak(const bool Value);
	void __fastcall SetCellChecker(Asgcheck::TAdvStringGridCheck* const Value);
	System::UnicodeString __fastcall GetRealCell(int i, int j);
	void __fastcall SetRealCell(int i, int j, const System::UnicodeString Value);
	void __fastcall SetXYRTFOffset(const System::Types::TPoint &Value);
	void __fastcall SetUseStyleServices(const bool Value);
	void __fastcall SetZoomFactor(const int Value);
	void __fastcall SetScrollHints(const TScrollHintType Value);
	System::UnicodeString __fastcall GetCellsExInt(int i, int j);
	void __fastcall SetCellsExInt(int i, int j, const System::UnicodeString Value);
	
protected:
	System::Types::TPoint FClipTopLeft;
	TClipOperation FClipLastOp;
	THTMLHintWindow* FScrollHintWnd;
	bool FScrollHintShow;
	bool FVirtualCells;
	bool FVirtualEdit;
	System::UnicodeString FCellCache;
	System::UnicodeString FInvalidCache;
	bool FInvalidSel;
	bool FNoRTLOrientation;
	bool FIsGrouping;
	bool FIsDBVersion;
	bool FSyncedMove;
	bool LButFlg;
	bool ccuCall;
	bool FRHChanging;
	void __fastcall DataBeginUpdate();
	void __fastcall DataEndUpdate();
	void __fastcall SetDataColumnCount(int AValue);
	void __fastcall SetDataRowCount(int AValue);
	void __fastcall ClearData();
	int __fastcall GetDataRowCount();
	void __fastcall SetDataValue(int AColumn, int ARow, System::UnicodeString AValue);
	void __fastcall SetDataHeader(int AColumn, System::UnicodeString AValue);
	System::UnicodeString __fastcall GetVersion();
	virtual bool __fastcall HasColumnsProp();
	bool __fastcall HasStaticEdit(int ACol, int ARow);
	virtual void __fastcall SetDefRowHeightEx(const int Value);
	void __fastcall SubclassProc(Winapi::Messages::TMessage &Msg);
	virtual System::Types::TRect __fastcall GetClientRect();
	virtual void __fastcall DoCalcFooter(int ACol);
	virtual void __fastcall DoClickSort(int ACol);
	virtual void __fastcall DoClickCell(int ARow, int ACol);
	virtual void __fastcall DoF2Edit();
	virtual bool __fastcall CanTabToNextRow();
	virtual void __fastcall UpdateEditingCell(int ACol, int ARow, System::UnicodeString Value);
	virtual void __fastcall UpdateOnSelection(Vcl::Grids::TGridRect &GR);
	virtual void __fastcall PasteInCell(int ACol, int ARow, System::UnicodeString Value);
	virtual System::Classes::TStringList* __fastcall CellNameList();
	virtual System::UnicodeString __fastcall GetCurrentCell();
	virtual void __fastcall SetCurrentCell(const System::UnicodeString AValue);
	virtual System::UnicodeString __fastcall GetCurrentDisplCell();
	virtual System::UnicodeString __fastcall GetEditCell(int i, int j);
	virtual void __fastcall SetEditCell(const System::UnicodeString AValue);
	virtual void __fastcall CellTextChange(int ACol, int ARow);
	virtual void __fastcall RestoreCache();
	virtual bool __fastcall IsDSEdit();
	virtual int __fastcall GetSearchFooterHeight();
	virtual bool __fastcall CanColumnSize(const int ACol);
	void __fastcall InitHiddenRowLookup();
	void __fastcall DestroyHiddenRowLookup();
	void __fastcall ThemeAdapt();
	void __fastcall ControlComboSelect(System::TObject* Sender);
	void __fastcall HandleButtonClick(System::TObject* Sender);
	virtual void __fastcall HoverButtonClick(System::TObject* Sender);
	virtual void __fastcall ButtonFormMouseLeave(System::TObject* Sender);
	virtual bool __fastcall ToggleCheck(int ACol, int ARow, bool FromEdit);
	virtual bool __fastcall ToggleRadioButton(int ACol, int ARow, bool FromEdit);
	void __fastcall AdvanceEdit(int ACol, int ARow, bool Advance, bool Show, bool Frwrd, bool Recurs, bool FromEdit);
	void __fastcall AdvanceHTMLEdit(int ACol, int ARow, System::UnicodeString CtrlID);
	TCellGraphic* __fastcall GetGraphicDetails(int ACol, int ARow, int &W, int &H, bool &DisplText, TCellHAlign &HA, TCellVAlign &VA);
	virtual System::UnicodeString __fastcall GetFormattedCell(int ACol, int ARow);
	virtual int __fastcall NodeIndent(int ARow);
	virtual bool __fastcall HasNodes();
	bool __fastcall ShouldDrawSortIndicator(int ACol, int ARow);
	virtual void __fastcall GetDisplText(int c, int r, System::UnicodeString &Value);
	virtual System::UnicodeString __fastcall GetCellFloatFormat(int ACol, int ARow);
	virtual TCellType __fastcall GetCellType(int ACol, int ARow);
	virtual bool __fastcall GetCellEmpty(int ACol, int ARow);
	virtual TCellGraphic* __fastcall GetCellGraphic(int ACol, int ARow);
	virtual System::Types::TPoint __fastcall GetCellGraphicSize(int ACol, int ARow);
	virtual System::Types::TPoint __fastcall GetCellGraphicSizeEx(int ACol, int ARow, int Padding)/* overload */;
	virtual System::Types::TPoint __fastcall GetCellGraphicSizeEx(Vcl::Graphics::TCanvas* ACanvas, int ACol, int ARow, int Padding, double ResFactor)/* overload */;
	virtual System::Types::TPoint __fastcall GetPrintGraphicSize(int ACol, int ARow, int CW, int RH, double ResFactor);
	virtual void __fastcall GetProgressColor(int ACol, int ARow, System::Uitypes::TColor &ColorFG, System::Uitypes::TColor &ColorBK, System::Uitypes::TColor &TextColorFG, System::Uitypes::TColor &TextColorBK);
	virtual void __fastcall DrawCell(int ACol, int ARow, const System::Types::TRect &ARect, Vcl::Grids::TGridDrawState AState);
	virtual void __fastcall DrawGridCell(Vcl::Graphics::TCanvas* Canvas, int ACol, int ARow, const System::Types::TRect &ARect, Vcl::Grids::TGridDrawState AState);
	void __fastcall DrawCheck(const System::Types::TRect &R, bool State, bool Enabled, bool Grayed, TControlStyle ControlStyle, bool bTriState = false, Vcl::Stdctrls::TCheckBoxState cbState = (Vcl::Stdctrls::TCheckBoxState)(0x0));
	void __fastcall DrawWallPaperFixed(const System::Types::TRect &crect);
	void __fastcall DrawWallPaperTile(const System::Types::TRect &crect);
	DYNAMIC void __fastcall KeyUp(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC System::UnicodeString __fastcall GetEditMask(int ACol, int ARow);
	virtual Vcl::Grids::TInplaceEdit* __fastcall CreateEditor();
	virtual bool __fastcall CanEditShow();
	virtual void __fastcall GetUsedFont(Vcl::Graphics::TFont* AFont, bool IsFixed, bool IsScaled);
	virtual void __fastcall DoClipboardPasteDone(const Vcl::Grids::TGridRect &CellRect);
	virtual void __fastcall DoGetPrintPageNum(int PageNum, int PageNumCol, System::UnicodeString &Value);
	virtual void __fastcall DoGetEditorProp(int ACol, int ARow, TEditLink* EditLink);
	virtual void __fastcall DoCheckBoxClick(int ACol, int ARow, bool AState);
	virtual void __fastcall DoFixedCellEdit(int ACol, int ARow, Advobj::TGridFixedCellEditor &AEditor, System::Classes::TStrings* Values);
	virtual bool __fastcall CanShowSelection();
	bool __fastcall ShouldHandleTab();
	void __fastcall DoMemoChanged(System::TObject* Sender);
	DYNAMIC void __fastcall SetEditText(int ACol, int ARow, const System::UnicodeString Value);
	virtual void __fastcall SetStyleElements(const Vcl::Controls::TStyleElements Value);
	DYNAMIC System::UnicodeString __fastcall GetEditText(int ACol, int ARow);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall ColumnMoved(int FromIndex, int ToIndex);
	DYNAMIC void __fastcall RowMoved(int FromIndex, int ToIndex);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	virtual void __fastcall CreateWnd();
	virtual void __fastcall CreateHandle();
	virtual void __fastcall DestroyWnd();
	virtual void __fastcall Loaded();
	virtual bool __fastcall SelectCell(int ACol, int ARow);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	DYNAMIC void __fastcall SizeChanged(int OldColCount, int OldRowCount);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation AOperation);
	DYNAMIC void __fastcall DragOver(System::TObject* Source, int X, int Y, System::Uitypes::TDragState State, bool &Accept);
	void __fastcall DragTimerProc(System::TObject* Sender);
	void __fastcall ScrollTimerProc(System::TObject* Sender);
	virtual void __fastcall CalcSizingState(int X, int Y, Vcl::Grids::TGridState &State, int &Index, int &SizingPos, int &SizingOfs, Vcl::Grids::TGridDrawInfo &FixedInfo);
	virtual void __fastcall SelectionChanged(int ALeft, int ATop, int ARight, int ABottom);
	virtual void __fastcall EditProgress(System::UnicodeString Value, const System::Types::TPoint &pt, int SelPos);
	virtual bool __fastcall DoBeforeEdit(int ACol, int ARow);
	virtual void __fastcall DoInsertRow(int ARow);
	virtual void __fastcall DoDeleteRow(int ARow);
	virtual void __fastcall DoFilterDone();
	virtual void __fastcall DoFilterShow(int ACol, bool &Allow);
	virtual void __fastcall DoFilterClose(int ACol);
	virtual void __fastcall DoBeforeFilter();
	void __fastcall ShowFilterDropDownInt(int ACol, int ARow);
	virtual TFooterPanel* __fastcall CreateFooter();
	virtual float __fastcall ControlDPIScale();
	DYNAMIC void __fastcall Click();
	DYNAMIC void __fastcall DoEnter();
	DYNAMIC void __fastcall DoExit();
	virtual void __fastcall Paint();
	void __fastcall PaintBackground();
	bool __fastcall SelectToRowSelect(bool IsShift);
	bool __fastcall IsScrolledToLastRow();
	void __fastcall ScrollToLastRow();
	DYNAMIC int __fastcall GetEditLimit();
	DYNAMIC void __fastcall ColWidthsChanged();
	DYNAMIC void __fastcall RowHeightsChanged();
	virtual void __fastcall UpdateRowCount();
	void __fastcall InvalidateGridRect(const Vcl::Grids::TGridRect &r);
	DYNAMIC void __fastcall TopLeftChanged();
	virtual void __fastcall FloatFooterUpdate();
	virtual void __fastcall UpdateColSize(int ACol, int &NewWidth);
	virtual void __fastcall UpdateAutoColSize(int ACol, int &NewWidth);
	virtual void __fastcall UpdateColHeaders();
	virtual System::UnicodeString __fastcall EllipsClick(System::UnicodeString s);
	virtual bool __fastcall MatchFilter(int ARow);
	virtual void __fastcall PasteStart();
	virtual void __fastcall PasteDone();
	virtual void __fastcall PasteNotify(const System::Types::TPoint &orig, const Vcl::Grids::TGridRect &gr, TClipOperation LastOp);
	virtual System::UnicodeString __fastcall CalcCell(int ACol, int ARow);
	virtual void __fastcall LoadCell(int ACol, int ARow, System::UnicodeString Value);
	virtual void __fastcall UpdateCell(int ACol, int ARow);
	virtual void __fastcall InitValidate(int ACol, int ARow);
	virtual void __fastcall InitScroll(bool PageScroll);
	virtual void __fastcall DoCanEditCell(int ACol, int ARow, bool &CanEdit);
	virtual void __fastcall DoCanSort(int ACol, bool &CanSort);
	virtual void __fastcall DoSearchFooterAction(System::UnicodeString AValue, int ACol, int ARow, TSearchAction ASearchAction);
	virtual System::UnicodeString __fastcall DoSearchFooterSearch(System::UnicodeString AValue);
	virtual void __fastcall DoSearchFooterSearchEnd(bool &ContinueFromStart);
	virtual void __fastcall DoButtonClick(int ACol, int ARow);
	virtual void __fastcall DoExpandClick(int ACol, int ARow, bool Expanded);
	virtual void __fastcall DoComboCloseUp(int ARow, int ACol);
	virtual void __fastcall DoComboDropDown(int ARow, int ACol);
	virtual void __fastcall DoSetCellCursor(int ACol, int ARow, int X, int Y);
	virtual void __fastcall CellsChanged(const System::Types::TRect &R);
	virtual void __fastcall CellsLoaded();
	virtual void __fastcall GetCellHint(int ACol, int ARow, System::UnicodeString &AHint, System::WideString &AWideHint);
	virtual void __fastcall GetCellColor(int ACol, int ARow, Vcl::Grids::TGridDrawState AState, Vcl::Graphics::TBrush* ABrush, Vcl::Graphics::TFont* AFont);
	virtual void __fastcall GetCellPrintColor(int ACol, int ARow, Vcl::Grids::TGridDrawState AState, Vcl::Graphics::TBrush* ABrush, Vcl::Graphics::TFont* AFont);
	virtual void __fastcall GetCellBorder(int ACol, int ARow, Vcl::Graphics::TPen* APen, Advobj::TCellBorders &Borders);
	virtual void __fastcall GetCellPrintBorder(int ACol, int ARow, Vcl::Graphics::TPen* APen, Advobj::TCellBorders &Borders);
	virtual void __fastcall GetCellAlign(int ACol, int ARow, System::Classes::TAlignment &HAlign, Advobj::TVAlignment &VAlign);
	virtual void __fastcall GetColFormat(int ACol, Advobj::TSortStyle &AStyle, System::UnicodeString &aPrefix, System::UnicodeString &aSuffix);
	virtual void __fastcall GetStaticCellEditor(int ACol, int ARow, Advobj::TEditorType &AEditor);
	virtual void __fastcall GetCellEditor(int ACol, int ARow, Advobj::TEditorType &AEditor);
	virtual bool __fastcall GetEditorNone(int ACol, int ARow, Advobj::TEditorType &AEditor);
	virtual void __fastcall GetCellFixed(int ACol, int ARow, bool &IsFixed);
	virtual void __fastcall GetCellReadOnly(int ACol, int ARow, bool &IsReadOnly);
	virtual void __fastcall GetCellPassword(int ACol, int ARow, bool &IsPassword);
	virtual void __fastcall GetCellWordWrap(int ACol, int ARow, bool &WordWrap);
	virtual void __fastcall GetDefaultProps(int ACol, int ARow, Vcl::Graphics::TFont* AFont, Vcl::Graphics::TBrush* ABrush, System::Uitypes::TColor &AColorTo, System::Uitypes::TColor &AMirrorColor, System::Uitypes::TColor &AMirrorColorTo, System::Classes::TAlignment &HA, Advobj::TVAlignment &VA, bool &WW, Advobj::TCellGradientDirection &GD);
	virtual System::Classes::TAlignment __fastcall GetDefaultAlignment();
	virtual bool __fastcall HasCombo(int ACol, int ARow, Advobj::TEditorType AEditor = (Advobj::TEditorType)(0x1b));
	virtual bool __fastcall HasEditBtn(int ACol, int ARow, Advobj::TEditorType AEditor = (Advobj::TEditorType)(0x1b));
	virtual bool __fastcall HasSpinEdit(int ACol, int ARow, Advobj::TEditorType AEditor = (Advobj::TEditorType)(0x1b));
	virtual bool __fastcall HasFilterEdit(int ACol, int ARow);
	virtual void __fastcall FilterEditUpdate(int ACol, System::UnicodeString Condition, TFilterType FilterType);
	virtual System::UnicodeString __fastcall GetCheckTrue(int ACol, int ARow);
	virtual System::UnicodeString __fastcall GetCheckFalse(int ACol, int ARow);
	virtual bool __fastcall GetFilter(int ACol, bool Disp = false, bool AllRows = false);
	virtual Vcl::Grids::TGridRect __fastcall GetUsedCells();
	int __fastcall GetSaveStartCol();
	int __fastcall GetSaveStartRow();
	int __fastcall GetSaveEndCol();
	int __fastcall GetSaveEndRow();
	int __fastcall GetSaveRowCount();
	int __fastcall GetSaveColCount();
	void __fastcall CreateMetroScrollers();
	void __fastcall DestroyMetroScrollers();
	virtual void __fastcall RemoveRowsInternal(int RowIndex, int RCount);
	void __fastcall StretchColumn(int ACol, int NewWidth = 0xffffffff);
	void __fastcall PrivatePrintRect(const Vcl::Grids::TGridRect &Gridrect, bool SelRows);
	void __fastcall PrivatePrintPreviewRect(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &Displayrect, const Vcl::Grids::TGridRect &Gridrect, bool SelRows);
	void __fastcall DoneEditing(int ACol, int ARow);
	void __fastcall UpdateActiveCells(int co, int ro, int cn, int rn);
	bool __fastcall HasDataCell(int ACol, int ARow);
	bool __fastcall IsDataCheckCol(int ACol);
	virtual System::UnicodeString __fastcall GetColumnCheckTrue(int ACol);
	virtual System::UnicodeString __fastcall GetColumnCheckFalse(int ACol);
	virtual void __fastcall QueryAddRow(bool &AllowAdd);
	virtual void __fastcall QueryAddCol(bool &AllowAdd);
	virtual void __fastcall QueryInsertRow(int ARow, bool &AllowInsert);
	virtual void __fastcall DirectWheelChange(int delta, bool &SuppressMsg);
	DYNAMIC bool __fastcall DoMouseWheelDown(System::Classes::TShiftState Shift, const System::Types::TPoint &MousePos);
	DYNAMIC bool __fastcall DoMouseWheelUp(System::Classes::TShiftState Shift, const System::Types::TPoint &MousePos);
	void __fastcall DoHeaderButtonClick(System::TObject* Sender, int ButtonIndex);
	void __fastcall DoFooterButtonClick(System::TObject* Sender, int ButtonIndex);
	void __fastcall UpdateVScroller();
	void __fastcall UpdateHScroller();
	virtual void __fastcall DoAppendRow();
	void __fastcall AddSummary(int ARow);
	void __fastcall IRemoveRows(int RowIndex, int RCount, bool flg);
	virtual void __fastcall CorrectSelection();
	__property bool CellSelectorMode = {read=FCellSelectorMode, write=FCellSelectorMode, nodefault};
	virtual void __fastcall CellSelect(int c, int r);
	virtual void __fastcall SetCellSelectMode(const bool Value);
	void __fastcall BalloonChange(System::TObject* Sender);
	void __fastcall ModifiedChanged(System::TObject* Sender);
	void __fastcall DatePickerCloseUp(System::TObject* Sender);
	void __fastcall DatePickerDropDown(System::TObject* Sender);
	void __fastcall DateTimePickerChange(System::TObject* Sender);
	void __fastcall DatePickerChange(System::TObject* Sender);
	void __fastcall SearchChanged(System::TObject* Sender);
	void __fastcall BandsChanged(System::TObject* Sender);
	void __fastcall ScrollbarMouseLeave(System::TObject* Sender);
	void __fastcall UnitChanged(System::TObject* Sender, System::UnicodeString NewUnit);
	virtual void __fastcall UpdateSelectionRect(Vcl::Grids::TGridRect &GR);
	virtual void __fastcall OnMouseActionsChanged(System::TObject* Sender);
	virtual void __fastcall OnMouseActionsIsDesigning(System::TObject* Sender, bool &IsDesigning);
	virtual void __fastcall OnMouseActionsInvalidate(System::TObject* Sender);
	virtual void __fastcall OnMouseActionsDisableEdit(System::TObject* Sender);
	virtual void __fastcall EditKeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall Edit_WMKeyDown(Winapi::Messages::TWMKey &Msg);
	virtual void __fastcall OnNavigationChanged(System::TObject* Sender);
	void __fastcall DrawRadio(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &R, int Num, int Idx, bool dir, bool dis, System::Classes::TStrings* sl, bool Selected, int ACol, int ARow, TControlStyle Style, double ResFactor, bool Print = false);
	Vcl::Forms::TCustomForm* __fastcall GetParentForm(Vcl::Controls::TControl* Control);
	void __fastcall ExpandNodeInt(int ARow);
	virtual void __fastcall TabToNextRowAtEnd();
	void __fastcall SetComment(int ACol, int ARow, System::UnicodeString value);
	System::UnicodeString __fastcall GetComment(int ACol, int ARow);
	virtual bool __fastcall DoAllowFmtPaste();
	DYNAMIC void __fastcall ChangeScale(int M, int D, bool isDpiChange)/* overload */;
	double __fastcall ColumnCustomCalcGrp(int ACol, int FromRow = 0xffffffff, int ToRow = 0xffffffff);
	__property int FilterColumn = {read=FFilterCol, write=FFilterCol, nodefault};
	virtual void __fastcall FilterSelect(System::TObject* Sender, int ItemIndex);
	virtual void __fastcall FilterClose(System::TObject* Sender);
	virtual void __fastcall FilterCheck(System::TObject* Sender, int ItemIndex);
	System::Types::TSize __fastcall GetCellTextSizeInt(int ACol, int RCol, int ARow, bool ColSize, bool VS = false, bool SB = false);
	virtual void __fastcall PaintDesigner();
	virtual void __fastcall HandleDesignChoice(int X, int Y);
	virtual void __fastcall HandleDesignEditing(bool EnableEdit);
	bool __fastcall IsOnLastRow();
	void __fastcall AppendLastRow();
	virtual bool __fastcall HasCustomCellBorder();
	bool __fastcall SetCheckBoxStateInt(int ACol, int ARow, bool state);
	void __fastcall SetEditorsStyle(Advstyleif::TTMSStyle AStyle);
	virtual void __fastcall DoCheckBoxChange(int ACol, int ARow, bool State);
	virtual bool __fastcall DoRatingChange(int ACol, int ARow, double &NewRate);
	virtual void __fastcall DoColorSelect(System::TObject* Sender);
	virtual void __fastcall DoImageSelect(System::TObject* Sender);
	virtual void __fastcall DoCellChanging(int ACol, int ARow, bool &CanChange);
	virtual void __fastcall DoCellScroll(int ACol, int ARow, int ScrollPosition, int ScrollMin, int ScrollMax);
	void __fastcall DoFilterType(System::TObject* Sender);
	void __fastcall DoFilterEditDone(int ACol, TFilterType ft);
	virtual void __fastcall DoHoverButtonsShow(int X, int Y, bool &Allow);
	void __fastcall InsertRowsEx(int RowIndex, int RCount, bool UpdateCellControls = true);
	virtual bool __fastcall CanShowFixedDropDown(int ACol);
	virtual void __fastcall DoStartBlockFocus();
	virtual void __fastcall DoEndBlockFocus();
	virtual void __fastcall DoIntelliZoom();
	__property System::Classes::TNotifyEvent OnStartBlockFocus = {read=FOnStartBlockFocus, write=FOnStartBlockFocus};
	__property System::Classes::TNotifyEvent OnEndBlockFocus = {read=FOnEndBlockFocus, write=FOnEndBlockFocus};
	__property System::UnicodeString OldCellText = {read=FOldCellText, write=FOldCellText};
	__property int FilterFixedRows = {read=FFilterFixedRows, write=FFilterFixedRows, nodefault};
	__property int FixedRowsMin = {read=FFixedRowsMin, nodefault};
	__property bool InWorkbook = {read=FInWorkbook, write=FInWorkbook, nodefault};
	__property bool SaveFormula = {read=FSaveFormula, write=FSaveFormula, nodefault};
	__property float DPIScale = {read=FDPIScale};
	__property bool FixDecSep = {read=FFixDecSep, write=FFixDecSep, nodefault};
	__property bool StyleBkg = {read=FStyleBkg, nodefault};
	virtual Vcl::Imglist::TCustomImageList* __fastcall GetCellImageList(int ACol, int ARow);
	bool __fastcall IsEditableInt(int ACol, int ARow);
	void __fastcall ForceMouseOnCell(int Col, int Row, bool Up = true);
	void __fastcall GotoCellInt(int Col, int Row);
	virtual bool __fastcall UseVCLStyles();
	TAdvRichEdit* __fastcall GetRichEdit();
	TAdvRichEdit* __fastcall EditRichEdit();
	TGridDateTimePicker* __fastcall EditDateTime();
	TGridDatePicker* __fastcall EditDate();
	TGridSpin* __fastcall EditSpin();
	TGridAdvGridDropDown* __fastcall EditAdvGridPicker();
	TGridTrackbarDropDown* __fastcall EditTrackBar();
	TGridMemoDropDown* __fastcall EditMemo();
	TGridCalculatorDropDown* __fastcall EditCalculator();
	TGridTimepickerDropDown* __fastcall EditTimePicker();
	TGridDetailPickerDropDown* __fastcall EditDetailPicker();
	TGridGridDropDown* __fastcall EditGridPicker();
	TGridColorDropDown* __fastcall EditColorPicker();
	TGridImageDropDown* __fastcall EditImagePicker();
	TGridControlDropDown* __fastcall EditControlPicker();
	bool __fastcall MatchesMulti(int ARow);
	Vcl::Controls::TWinControl* __fastcall GetCellEditorControl();
	void __fastcall SaveToJSONInt(System::UnicodeString RecordDescr, System::Classes::TStrings* FieldDescr, System::Classes::TStringList* sl);
	void __fastcall ClearRowSelectInt();
	void __fastcall GroupMerge();
	void __fastcall GroupSplit();
	void __fastcall RegisterValidateInterface(_di_ITMSCellValidate AValidate);
	void __fastcall UnregisterValidateInterface();
	void __fastcall ExpandFast();
	__property bool IsEditHiding = {read=FIsEditHiding, write=FIsEditHiding, nodefault};
	virtual bool __fastcall IsCheckCell(int c, int r);
	virtual void __fastcall SetAsCheck(int c, int r, const System::UnicodeString v);
	virtual void __fastcall StyleUpdated();
	void __fastcall HideRowsOnSelection(const bool Selected);
	virtual void __fastcall BeginRHUpdating();
	virtual void __fastcall EndRHUpdating();
	virtual void __fastcall SetName(const System::Classes::TComponentName Value);
	__property System::UnicodeString AllCellsInt[int i][int j] = {read=GetCellsExInt, write=SetCellsExInt};
	
public:
	int Compares;
	int Swaps;
	unsigned SortTime;
	System::Classes::TStringList* Sortlist;
	int PrevSizeX;
	int PrevSizeY;
	bool EditMode;
	__property bool DoAutoEditFilter = {read=FDoAutoEditFilter, write=FDoAutoEditFilter, nodefault};
	__property bool IsThemed = {read=FIsComCtl6, nodefault};
	__property bool UseStyleServices = {read=FUseStyleServices, write=SetUseStyleServices, nodefault};
	__property bool IsPrintPreview = {read=FIsPrintPreview, write=FIsPrintPreview, nodefault};
	__property bool FitCellsInGrid = {read=FFitCellsInGrid, write=FFitCellsInGrid, nodefault};
	System::Types::TSize __fastcall GetCellTextSize(int ACol, int ARow, bool VS = false, bool SB = false);
	virtual void __fastcall ExportNotification(TGridExportState AState, int ARow);
	virtual void __fastcall ImportNotification(TGridImportState AState, int ARow);
	virtual void __fastcall CellControlsUpdate(bool rebuildlist = false);
	void __fastcall RegisterNotifier(TGridChangeNotifier* ANotifier);
	void __fastcall UnRegisterNotifier(TGridChangeNotifier* ANotifier);
	void __fastcall RegisterSelListener(_di_ITAdvStringGridSelect AListener);
	void __fastcall UnRegisterSelListener(_di_ITAdvStringGridSelect AListener);
	void __fastcall ClearComboString();
	void __fastcall AddComboString(const System::UnicodeString s);
	void __fastcall AddComboStringObject(const System::UnicodeString s, System::TObject* AObject);
	bool __fastcall RemoveComboString(const System::UnicodeString s);
	bool __fastcall SetComboSelectionString(const System::UnicodeString s);
	void __fastcall SetComboSelection(int idx);
	int __fastcall GetComboCount();
	__fastcall virtual TAdvStringGrid(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TAdvStringGrid();
	virtual void __fastcall Invalidate();
	virtual void __fastcall AssignCells(System::Classes::TPersistent* Source);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	void __fastcall GetFontProperties(int ACol, int RCol, int ARow, Vcl::Grids::TGridDrawState &AState, Vcl::Graphics::TFont* AFont, Vcl::Graphics::TBrush* ABrush, bool Remap);
	virtual void __fastcall GetVisualProperties(int ACol, int ARow, Vcl::Grids::TGridDrawState &AState, bool Print, bool Select, bool Remap, Vcl::Graphics::TBrush* ABrush, System::Uitypes::TColor &AColorTo, System::Uitypes::TColor &AMirrorColor, System::Uitypes::TColor &AMirrorColorTo, Vcl::Graphics::TFont* AFont, System::Classes::TAlignment &HA, Advobj::TVAlignment &VA, bool &WW, Advobj::TCellGradientDirection &GD);
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	void __fastcall OleColumnDragStart(int ACol, int AIndex, Vcl::Stdctrls::TCustomListBox* AList);
	virtual int __fastcall GetVersionNr();
	virtual System::UnicodeString __fastcall GetVersionString();
	__property int ZoomFactor = {read=FZoomFactor, write=SetZoomFactor, nodefault};
	virtual bool __fastcall ValidateCell(const System::UnicodeString NewValue);
	virtual bool __fastcall ValidateCellWide(const System::WideString NewValue);
	int __fastcall FirstCellInRow(int ARow);
	int __fastcall LastCellInRow(int ARow);
	void __fastcall BalloonInit();
	void __fastcall BalloonInitSettings(NativeUInt HToolTip);
	void __fastcall BalloonDone();
	void __fastcall ApplyFilter();
	bool __fastcall RemoveLastFilter();
	int __fastcall FilteredRows();
	void __fastcall RemoveAllFilters();
	void __fastcall ShowFilterDropDown(int ACol);
	void __fastcall SaveFilter(System::UnicodeString FileName);
	void __fastcall LoadFilter(System::UnicodeString FileName);
	void __fastcall NarrowDown(System::UnicodeString ACondition, int AColumn = 0xffffffff)/* overload */;
	void __fastcall NarrowDown(System::UnicodeString ACondition, bool DoRemoveAccented, int AColumn = 0xffffffff)/* overload */;
	void __fastcall NarrowDown(System::UnicodeString ACondition, Advobj::TNarrowDownOptions AOptions, int AColumn = 0xffffffff)/* overload */;
	void __fastcall InitOrigColSizes();
	Vcl::Forms::TForm* __fastcall SelectionToForm(const Vcl::Grids::TGridRect &ARect);
	void __fastcall StretchColumns();
	void __fastcall RemoveCheckedRows(int CheckBoxColumn, bool RemoveChecked = true);
	void __fastcall RemoveRowList(Advobj::TIntList* RowList);
	virtual void __fastcall RemoveRowsEx(int RowIndex, int RCount);
	virtual void __fastcall RemoveRows(int RowIndex, int RCount);
	virtual void __fastcall InsertRows(int RowIndex, int RCount, bool UpdateCellControls = true);
	virtual void __fastcall RemoveCols(int ColIndex, int CCount);
	virtual void __fastcall InsertCols(int ColIndex, int CCount);
	void __fastcall AddColumn();
	void __fastcall AddRow();
	DYNAMIC void __fastcall Resize();
	bool __fastcall FilterRow(int ARow);
	int __fastcall GetParentRow(int ARow);
	void __fastcall InsertChildRow(int ARow, int InsertAt = 0x1);
	void __fastcall RemoveChildRow(int ARow);
	void __fastcall InsertNormalRow(int ARow);
	void __fastcall RemoveNormalRow(int ARow);
	void __fastcall RemoveSelectedCols();
	void __fastcall RemoveUnSelectedCols();
	void __fastcall RemoveSelectedRows();
	void __fastcall RemoveUnSelectedRows();
	void __fastcall RemoveDuplicates(int ACol, bool DoCase);
	void __fastcall MergeCols(int ColIndex1, int ColIndex2, System::UnicodeString Separator = L" ");
	void __fastcall MergeColumnCells(int ColIndex, bool MainMerge);
	void __fastcall SplitColumnCells(int ColIndex);
	void __fastcall MergeRowCells(int RowIndex, bool MainMerge);
	void __fastcall SplitRowCells(int RowIndex);
	void __fastcall SplitAllCells();
	virtual bool __fastcall IsSummary(int ARow);
	bool __fastcall MustSkip(int ACol, int ARow);
	virtual bool __fastcall IsFixed(int ACol, int ARow);
	bool __fastcall IsEditable(int ACol, int ARow);
	void __fastcall SwapColumns(int ACol1, int ACol2);
	void __fastcall HideColumn(int ColIndex);
	void __fastcall UnHideColumn(int ColIndex);
	void __fastcall HideColumns(int FromCol, int ToCol);
	void __fastcall UnHideColumns(int FromCol, int ToCol);
	void __fastcall UnHideColumnsAll();
	bool __fastcall IsHiddenColumn(int Colindex);
	int __fastcall NumHiddenColumns();
	virtual void __fastcall HideHoverButtons();
	virtual int __fastcall TotalColCount();
	void __fastcall SuppressColumn(int ColIndex);
	void __fastcall UnSuppressColumn(int ColIndex);
	void __fastcall UnSuppressAllColumns();
	bool __fastcall IsSuppressedColumn(int ColIndex);
	void __fastcall SuppressRow(int RowIndex);
	void __fastcall SuppressRows(int FromRow, int ToRow);
	void __fastcall UnSuppressRow(int RowIndex);
	void __fastcall UnSuppressRows(int FromRow, int ToRow);
	void __fastcall UnSuppressAllRows();
	void __fastcall UnSuppressAllOpenRows();
	bool __fastcall IsSuppressedRow(int RowIndex);
	void __fastcall RepaintRect(const System::Types::TRect &r);
	HIDESBASE void __fastcall RepaintCell(int c, int r);
	void __fastcall RepaintRow(int ARow);
	void __fastcall RepaintCol(int ACol);
	void __fastcall GroupCalc(int Colindex, int method);
	void __fastcall GroupSum(int Colindex);
	void __fastcall GroupAvg(int Colindex);
	void __fastcall GroupMin(int Colindex);
	void __fastcall GroupMax(int Colindex);
	void __fastcall GroupCustomCalc(int Colindex);
	void __fastcall GroupCount(int ColIndex);
	void __fastcall GroupDistinct(int ColIndex);
	void __fastcall GroupStdDev(int ColIndex);
	virtual void __fastcall SubGroup(int Colindex);
	virtual void __fastcall SubUnGroup(int Colindex);
	virtual void __fastcall Group(int Colindex);
	virtual void __fastcall UnGroup();
	void __fastcall HideRow(int Rowindex);
	void __fastcall HideRows(int FromRow, int ToRow);
	void __fastcall HideRowList(Advobj::TIntList* RowList);
	void __fastcall HideRowsEx(int FromRow, int ToRow);
	void __fastcall UnHideRow(int Rowindex);
	void __fastcall UnHideRows(int FromRow, int ToRow);
	void __fastcall UnHideRowList();
	void __fastcall UnHideRowsAll();
	void __fastcall HideSelectedRows();
	void __fastcall HideUnSelectedRows();
	bool __fastcall IsHiddenRow(int Rowindex)/* overload */;
	bool __fastcall IsHiddenRow(int Rowindex, Advobj::TIntList* &ListHidden)/* overload */;
	int __fastcall NumHiddenRows();
	int __fastcall NumSuppressedRows();
	int __fastcall TotalRowCount();
	int __fastcall RealRowIndex(int ARow);
	virtual int __fastcall RealColIndex(int ACol);
	int __fastcall DisplRowIndex(int ARow);
	virtual int __fastcall DisplColIndex(int ACol);
	bool __fastcall IsIgnoredColumn(int ACol);
	void __fastcall SetColumnOrder();
	void __fastcall ResetColumnOrder();
	int __fastcall ColumnPosition(int ACol);
	int __fastcall ColumnAtPosition(int ACol);
	int __fastcall ColumnByHeader(System::UnicodeString AValue);
	int __fastcall UnSortedRowIndex(int ARow);
	int __fastcall SortedRowIndex(int ARow);
	int __fastcall GetRealCol();
	int __fastcall GetRealRow();
	int __fastcall GetRowEx();
	virtual void __fastcall SetRowEx(const int Value);
	int __fastcall GetTopRowEx();
	void __fastcall SetTopRowEx(const int Value);
	void __fastcall ScreenToCell(const System::Types::TPoint &pt, int &ACol, int &ARow);
	void __fastcall HideSelection();
	void __fastcall UnHideSelection();
	bool __fastcall IsSelectionHidden();
	virtual void __fastcall NextEdit(int ACol, int ARow, bool AForward = true);
	void __fastcall UpdateEditMode();
	void __fastcall UpdateFooter();
	void __fastcall UpdateSearchPanel();
	void __fastcall ScrollInView(int ColIndex, int RowIndex, TScrollPosition Position = (TScrollPosition)(0x0));
	HIDESBASE void __fastcall MoveRow(int FromIndex, int ToIndex);
	void __fastcall MoveRows(int FromIndex, int ToIndex, int Count);
	HIDESBASE void __fastcall MoveColumn(int FromIndex, int ToIndex);
	void __fastcall SwapRows(int ARow1, int ARow2);
	virtual void __fastcall SortSwapRows(int ARow1, int ARow2);
	void __fastcall ColorRect(int ACol1, int ARow1, int ACol2, int ARow2, System::Uitypes::TColor AColor);
	virtual void __fastcall ClearRect(int ACol1, int ARow1, int ACol2, int ARow2)/* overload */;
	virtual void __fastcall ClearRect(const Vcl::Grids::TGridRect &ARect)/* overload */;
	void __fastcall Clear();
	void __fastcall ClearAll();
	void __fastcall ClearRows(int RowIndex, int RCount);
	void __fastcall ClearCols(int ColIndex, int CCount);
	void __fastcall ClearNormalRows(int RowIndex, int RCount);
	void __fastcall ClearNormalCols(int ColIndex, int CCount);
	void __fastcall ClearNormalCells();
	void __fastcall ClearSelection();
	void __fastcall ClearRowSelect();
	void __fastcall ClearColSelect();
	virtual void __fastcall TrimRect(int ACol1, int ARow1, int ACol2, int ARow2);
	void __fastcall TrimColumn(int ACol);
	void __fastcall TrimRow(int ARow);
	void __fastcall TrimAll();
	void __fastcall EditCell(int ACol, int ARow);
	HIDESBASE void __fastcall FocusCell(int ACol, int ARow);
	void __fastcall GotoCell(int ACol, int ARow);
	void __fastcall LaunchEdit(int ACol, int ARow);
	void __fastcall SwapCells(const Vcl::Grids::TGridCoord &FromCell, const Vcl::Grids::TGridCoord &ToCell);
	void __fastcall SelectAll();
	void __fastcall SelectRows(int RowIndex, int RCount);
	void __fastcall UnSelectRows(int RowIndex, int RCount);
	void __fastcall SelectCols(int ColIndex, int CCount);
	void __fastcall UnSelectCols(int ColIndex, int CCount);
	void __fastcall SelectRange(int FromCol, int ToCol, int FromRow, int ToRow);
	void __fastcall ClearSelectedCells();
	void __fastcall ClearModifiedRows();
	int __fastcall ModifiedRowCount();
	System::Classes::TStrings* __fastcall DistinctValues(int ACol, bool CaseSensitive = true);
	bool __fastcall IsCell(System::UnicodeString SubStr, int &ACol, int &ARow);
	bool __fastcall IsWideCell(int ACol, int ARow);
	void __fastcall SaveToFile(System::UnicodeString FileName, bool Unicode = true);
	void __fastcall SaveToCSV(System::UnicodeString FileName, bool Unicode = true)/* overload */;
	void __fastcall SaveToCSV(System::UnicodeString FileName, const Vcl::Grids::TGridRect &ARect, bool Unicode = true)/* overload */;
	void __fastcall AppendToCSV(System::UnicodeString FileName, bool Unicode = true)/* overload */;
	void __fastcall AppendToASCII(System::UnicodeString FileName, bool Unicode = true);
	void __fastcall SaveToASCII(System::UnicodeString FileName, bool Unicode = true);
	void __fastcall SaveToCSV(System::UnicodeString FileName, System::Sysutils::TEncoding* AEncoding)/* overload */;
	void __fastcall SaveToCSV(System::UnicodeString FileName, const Vcl::Grids::TGridRect &ARect, System::Sysutils::TEncoding* AEncoding)/* overload */;
	void __fastcall AppendToCSV(System::UnicodeString FileName, System::Sysutils::TEncoding* AENcoding)/* overload */;
	void __fastcall SaveToBinFile(System::UnicodeString FileName);
	void __fastcall SaveToBinStream(System::Classes::TStream* Stream);
	void __fastcall SaveRectToBinStream(const System::Types::TRect &Rect, System::Classes::TStream* Stream, bool SaveHidden = false);
	void __fastcall SaveToHTML(System::UnicodeString FileName, bool Show = false, bool Unicode = true);
	System::UnicodeString __fastcall SaveToHTMLString(System::UnicodeString dir);
	System::UnicodeString __fastcall SaveRectToHTMLString(const Vcl::Grids::TGridRect &ARect, System::UnicodeString dir);
	void __fastcall AppendToHTML(System::UnicodeString FileName, bool Show = false, bool Unicode = true);
	void __fastcall SaveToXML(System::UnicodeString FileName, System::UnicodeString ListDescr, System::UnicodeString RecordDescr, System::Classes::TStrings* FieldDescr, bool ExportEmptyCells = false);
	void __fastcall LoadFromXML(System::UnicodeString FileName, bool LevelToRow = false, bool LoadFieldDescr = true);
	void __fastcall SaveToJSON(System::UnicodeString RecordDescr, System::Classes::TStrings* FieldDescr, System::UnicodeString &JSON)/* overload */;
	void __fastcall SaveToJSON(System::UnicodeString FileName, System::UnicodeString RecordDescr, System::Classes::TStrings* FieldDescr)/* overload */;
	void __fastcall SaveToFixed(System::UnicodeString FileName, Advobj::TIntList* positions);
	void __fastcall SaveToStream(System::Classes::TStream* Stream);
	void __fastcall LoadFromFile(System::UnicodeString FileName);
	void __fastcall LoadFromBinFile(System::UnicodeString FileName);
	void __fastcall LoadFromBinStream(System::Classes::TStream* Stream);
	void __fastcall LoadAtPointFromBinStream(const System::Types::TPoint &Point, System::Classes::TStream* Stream);
	void __fastcall LoadFromCSV(System::UnicodeString FileName, int MaxRows = 0xffffffff, int IgnoreRows = 0xffffffff)/* overload */;
	void __fastcall LoadFromCSV(System::UnicodeString FileName, System::Sysutils::TEncoding* AEncoding, int MaxRows = 0xffffffff, int IgnoreRows = 0xffffffff)/* overload */;
	void __fastcall LoadFromCSVStream(System::Classes::TStream* AStream, int MaxRows = 0xffffffff, int IgnoreRows = 0xffffffff)/* overload */;
	void __fastcall LoadFromCSVStream(System::Classes::TStream* AStream, System::Sysutils::TEncoding* AEncoding, int MaxRows = 0xffffffff, int IgnoreRows = 0xffffffff)/* overload */;
	void __fastcall LoadFromFixed(System::UnicodeString FileName, Advobj::TIntList* positions, bool DoTrim = true, int MaxRows = 0xffffffff);
	void __fastcall InsertFromCSV(System::UnicodeString FileName, int MaxRows = 0xffffffff, int IgnoreRows = 0xffffffff)/* overload */;
	void __fastcall InsertFromCSV(System::UnicodeString FileName, System::Sysutils::TEncoding* AEncoding, int MaxRows = 0xffffffff, int IgnoreRows = 0xffffffff)/* overload */;
	void __fastcall LoadFromStream(System::Classes::TStream* Stream);
	void __fastcall SaveColSizes();
	void __fastcall LoadColSizes();
	virtual void __fastcall SaveColPositions();
	virtual void __fastcall LoadColPositions();
	System::UnicodeString __fastcall ColumnStatesToString();
	void __fastcall StringToColumnStates(System::UnicodeString Value);
	void __fastcall LoadVisualProps(System::UnicodeString FileName);
	void __fastcall SaveVisualProps(System::UnicodeString FileName);
	void __fastcall SavePrintSettings(System::UnicodeString Key, System::UnicodeString Section);
	void __fastcall LoadPrintSettings(System::UnicodeString Key, System::UnicodeString Section);
	void __fastcall CutToClipboard();
	void __fastcall CutSelectionToClipboard();
	void __fastcall CopyToClipBoard();
	void __fastcall CopyToClipBoardAsHTML();
	void __fastcall CopyRectToClipboardAsHTML(const Vcl::Grids::TGridRect &ARect);
	void __fastcall CopySelectionToClipboard();
	void __fastcall PasteFromClipboard();
	void __fastcall PasteSelectionFromClipboard();
	System::UnicodeString __fastcall GetSelectionAsText();
	void __fastcall SetSelectionAsText(const System::UnicodeString Value);
	void __fastcall ShowColumnHeaders();
	void __fastcall ClearColumnHeaders();
	void __fastcall ShowRowHeaders();
	void __fastcall ClearRowHeaders();
	void __fastcall HideCellEdit();
	void __fastcall ShowCellEdit();
	void __fastcall UpdateXYOffset(int X, int Y);
	void __fastcall Select();
	void __fastcall SetTheme(TXPColorScheme Scheme);
	virtual void __fastcall SetStyle(TAdvGridStyle AStyle);
	virtual void __fastcall SetStyleAndAppColor(TAdvGridStyle AStyle, System::Uitypes::TColor AppColor);
	void __fastcall SetComponentStyle(Advstyleif::TTMSStyle AStyle);
	void __fastcall SetComponentStyleAndAppColor(Advstyleif::TTMSStyle AStyle, System::Uitypes::TColor AppColor);
	void __fastcall SetColorTones(const Advstyleif::TColorTones &ATones);
	void __fastcall RandomFill(bool DoFixed = false, int Rnd = 0x64);
	void __fastcall LinearFill(bool DoFixed = false);
	void __fastcall TextFill(bool DoFixed, System::UnicodeString Txt);
	void __fastcall FormatFill(bool DoFixed, System::UnicodeString Fmt);
	System::UnicodeString __fastcall HilightText(bool DoCase, System::UnicodeString S, System::UnicodeString Text);
	System::UnicodeString __fastcall UnHilightText(System::UnicodeString S);
	void __fastcall HilightInCell(bool DoCase, int Col, int Row, System::UnicodeString HiText, bool FullText = false);
	void __fastcall HilightInCol(bool DoFixed, bool DoCase, int Col, System::UnicodeString HiText, bool FullText = false);
	void __fastcall HilightInRow(bool DoFixed, bool DoCase, int Row, System::UnicodeString HiText, bool FullText = false);
	void __fastcall HilightInGrid(bool DoFixed, bool DoCase, System::UnicodeString HiText, bool FullText = false);
	void __fastcall UnHilightInCell(int Col, int Row);
	void __fastcall UnHilightInCol(bool DoFixed, int Col);
	void __fastcall UnHilightInRow(bool DoFixed, int Row);
	void __fastcall UnHilightInGrid(bool DoFixed);
	System::UnicodeString __fastcall MarkText(bool DoCase, System::UnicodeString S, System::UnicodeString Text);
	System::UnicodeString __fastcall UnMarkText(System::UnicodeString S);
	void __fastcall MarkInCell(bool DoCase, int Col, int Row, System::UnicodeString HiText);
	void __fastcall MarkInCol(bool DoFixed, bool DoCase, int Col, System::UnicodeString HiText);
	void __fastcall MarkInRow(bool DoFixed, bool DoCase, int Row, System::UnicodeString HiText);
	void __fastcall MarkInGrid(bool DoFixed, bool DoCase, System::UnicodeString HiText);
	void __fastcall UnMarkInCell(int Col, int Row);
	void __fastcall UnMarkInCol(bool DoFixed, int Col);
	void __fastcall UnMarkInRow(bool DoFixed, int Row);
	void __fastcall UnMarkInGrid(bool DoFixed);
	bool __fastcall HasHyperlink(int i, int j);
	void __fastcall GetHyperlinkDetails(int i, int j, System::UnicodeString &URL, System::UnicodeString &Text);
	bool __fastcall CheckCells(int FromCol, int FromRow, int ToCol, int ToRow);
	bool __fastcall CheckCell(int Col, int Row);
	bool __fastcall CheckGrid(bool DoFixed);
	bool __fastcall CheckCol(bool DoFixed, int Col);
	bool __fastcall CheckRow(bool DoFixed, int Row);
	virtual void __fastcall Zoom(int x);
	virtual void __fastcall ZoomReset();
	void __fastcall SaveToXLS(System::UnicodeString Filename, bool CreateNewSheet = true);
	void __fastcall SaveToXLSSheet(System::UnicodeString Filename, System::UnicodeString SheetName);
	System::Classes::TStringList* __fastcall GetXLSSheets(System::UnicodeString FileName);
	void __fastcall LoadFromXLS(System::UnicodeString Filename);
	void __fastcall LoadFromXLSSheet(System::UnicodeString Filename, System::UnicodeString SheetName);
	void __fastcall LoadFromMDBTable(System::UnicodeString Filename, System::UnicodeString Table);
	void __fastcall LoadFromMDBSQL(System::UnicodeString Filename, System::UnicodeString SQL);
	void __fastcall AppendToDoc(System::UnicodeString Filename, System::UnicodeString Bookmark);
	void __fastcall SaveToDOC(System::UnicodeString Filename, bool CreateNewDocument = true);
	void __fastcall RichToCell(int Col, int Row, Vcl::Comctrls::TRichEdit* Richeditor);
	System::UnicodeString __fastcall RichToString(Vcl::Comctrls::TRichEdit* Richeditor);
	void __fastcall CellToRich(int Col, int Row, Vcl::Comctrls::TRichEdit* Richeditor);
	double __fastcall CellToReal(int ACol, int ARow);
	void __fastcall AutoFitColumns(const bool DoFixedCells = true);
	void __fastcall AutoSizeCells(const bool DoFixedCells, const int PaddingX, const int PaddingY);
	void __fastcall AutoSizeColumns(const bool DoFixedCols, const int Padding = 0x4);
	void __fastcall AutoSizeCol(const int ACol, const int Padding = 0x0);
	void __fastcall AutoGrowColumns(const bool DoFixedCols, const int Padding = 0x4);
	void __fastcall AutoGrowCol(const int ACol, const int Padding = 0x0);
	void __fastcall AutoSizeRows(const bool DoFixedRows, const int Padding = 0x0);
	void __fastcall AutoSizeRow(const int ARow, const int Padding = 0x0);
	void __fastcall StretchRightColumn();
	void __fastcall SizeToCols();
	void __fastcall SizeToRows();
	void __fastcall SizeToCells();
	void __fastcall AutoNumberCol(const int ACol);
	void __fastcall AutoNumberRow(const int ARow);
	HIDESBASE bool __fastcall IsSelected(int ACol, int ARow);
	System::UnicodeString __fastcall SelectedText();
	void __fastcall SelectCells(int FromCol, int FromRow, int ToCol, int ToRow);
	void __fastcall ShowFixedInplaceEdit(int Col, int Row);
	void __fastcall HideFixedInplaceEdit();
	void __fastcall ShowInplaceEdit();
	virtual void __fastcall HideInplaceEdit();
	void __fastcall DoneInplaceEdit(System::Word Key, System::Classes::TShiftState Shift);
	virtual void __fastcall QSort();
	virtual void __fastcall QSortIndexed();
	virtual void __fastcall QSortGroup();
	virtual void __fastcall QSortGroupIndexed();
	virtual void __fastcall QUnSort();
	void __fastcall Sort(int Column, TSortDirection Direction = (TSortDirection)(0x0));
	void __fastcall InitSortXRef();
	void __fastcall Print();
	void __fastcall PrintRect(const Vcl::Grids::TGridRect &Gridrect);
	void __fastcall PrintSelection();
	void __fastcall PrintSelectedRows();
	void __fastcall PrintSelectedCols();
	void __fastcall PrintPreview(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &Displayrect);
	void __fastcall PrintPreviewRect(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &Displayrect, const Vcl::Grids::TGridRect &Gridrect);
	void __fastcall PrintPreviewSelectedRows(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &Displayrect);
	void __fastcall PrintPreviewSelectedCols(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &Displayrect);
	void __fastcall PrintPreviewSelection(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &Displayrect);
	void __fastcall PrintDraw(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &DrawRect);
	void __fastcall PrintDrawRect(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &DrawRect, const Vcl::Grids::TGridRect &Gridrect);
	void __fastcall SortByColumn(int Col);
	void __fastcall QuickSort(int Col, int Left, int Right);
	void __fastcall QuickSortIndexed(int Left, int Right);
	TColumnType __fastcall ColumnType(int Col);
	bool __fastcall SortLine(int Col, int ARow1, int ARow2);
	int __fastcall Search(System::UnicodeString s);
	System::Types::TPoint __fastcall Find(const System::Types::TPoint &StartCell, System::UnicodeString s, TFindParams FindParams);
	System::Types::TPoint __fastcall FindAll(System::UnicodeString s, TFindParams FindParams, int &NumResults);
	System::Types::TPoint __fastcall FindWide(const System::Types::TPoint &StartCell, System::WideString s, TFindParams FindParams);
	System::Types::TPoint __fastcall FindFirst(System::UnicodeString s, TFindParams FindParams);
	System::Types::TPoint __fastcall FindNext();
	int __fastcall FindMulti(System::UnicodeString *Conditions, const int Conditions_High, int *Columns, const int Columns_High, TSearchType *Searchtypes, const int Searchtypes_High, bool *CaseSensitive, const int CaseSensitive_High, bool IgnoreHTML = true, bool AutoGoto = false);
	int __fastcall FindMultiNext();
	int __fastcall Replace(System::UnicodeString OrigStr, System::UnicodeString NewStr, TFindParams FindParams);
	int __fastcall MapFontHeight(int pointsize);
	int __fastcall MapFontSize(int Height);
	void __fastcall AddInterfacedCell(int ACol, int ARow, System::Classes::TInterfacedPersistent* AObject);
	void __fastcall RemoveInterfacedCell(int ACol, int ARow);
	System::Classes::TInterfacedPersistent* __fastcall GetInterfacedCell(int ACol, int ARow);
	Vcl::Graphics::TBitmap* __fastcall CreateBitmap(int ACol, int ARow, bool transparent, TCellHAlign hal, TCellVAlign val);
	void __fastcall AddBitmap(int ACol, int ARow, Vcl::Graphics::TBitmap* ABmp, bool Transparent, TCellHAlign hal, TCellVAlign val);
	void __fastcall RemoveBitmap(int ACol, int ARow);
	Vcl::Graphics::TBitmap* __fastcall GetBitmap(int ACol, int ARow);
	bool __fastcall HasBitmap(int ACol, int ARow);
	Vcl::Graphics::TPicture* __fastcall CreatePicture(int ACol, int ARow, bool transparent, TStretchMode stretchmode, int padding, TCellHAlign hal, TCellVAlign val);
	void __fastcall AddPicture(int ACol, int ARow, Vcl::Graphics::TPicture* APicture, bool transparent, TStretchMode stretchmode, int padding, TCellHAlign hal, TCellVAlign val);
	void __fastcall RemovePicture(int ACol, int ARow);
	Vcl::Graphics::TPicture* __fastcall GetPicture(int ACol, int ARow);
	bool __fastcall HasPicture(int ACol, int ARow);
	Advobj::TFilePicture* __fastcall CreateFilePicture(int ACol, int ARow, bool Transparent, TStretchMode StretchMode, int padding, TCellHAlign hal, TCellVAlign val);
	void __fastcall AddFilePicture(int ACol, int ARow, Advobj::TFilePicture* AFilePicture, bool Transparent, TStretchMode stretchmode, int padding, TCellHAlign hal, TCellVAlign val);
	void __fastcall RemoveFilePicture(int ACol, int ARow);
	Advobj::TFilePicture* __fastcall GetFilePicture(int ACol, int ARow);
	bool __fastcall HasFilePicture(int ACol, int ARow);
	void __fastcall AddNode(int ARow, int Span);
	void __fastcall RemoveNode(int ARow);
	void __fastcall RemoveAllNodes();
	virtual bool __fastcall IsNode(int ARow);
	int __fastcall GetNodeSpanType(int ARow);
	bool __fastcall GetNodeState(int ARow);
	int __fastcall GetNodeLevel(int ARow);
	void __fastcall SetNodeState(int ARow, bool Value);
	int __fastcall GetNodeSpan(int ARow);
	void __fastcall SetNodeSpan(int ARow, int Span);
	int __fastcall GetSubNodeCount(int ARow);
	void __fastcall UpdateNodeSpan(int ARow, int Delta);
	void __fastcall UpdateSubNodeCount(int ARow, int Delta);
	void __fastcall ExpandNode(int ARow);
	void __fastcall ContractNode(int ARow);
	void __fastcall ToggleNode(int ARow);
	void __fastcall ExpandAll();
	void __fastcall ContractAll();
	void __fastcall AddRadio(int ACol, int ARow, int DirRadio, int IdxRadio, System::Classes::TStrings* sl);
	System::Classes::TStrings* __fastcall CreateRadio(int ACol, int ARow, int DirRadio, int IdxRadio);
	void __fastcall RemoveRadio(int ACol, int ARow);
	bool __fastcall IsRadio(int ACol, int ARow);
	bool __fastcall GetRadioIdx(int ACol, int ARow, int &IdxRadio);
	bool __fastcall SetRadioIdx(int ACol, int ARow, int IdxRadio);
	System::Classes::TStrings* __fastcall GetRadioStrings(int ACol, int ARow);
	void __fastcall AddImageIdx(int ACol, int ARow, int Aidx, TCellHAlign hal, TCellVAlign val);
	void __fastcall RemoveImageIdx(int ACol, int ARow);
	bool __fastcall GetImageIdx(int ACol, int ARow, int &idx);
	void __fastcall SetImageIdx(int ACol, int ARow, int Idx);
	void __fastcall AddMultiImage(int ACol, int ARow, int Dir, TCellHAlign hal, TCellVAlign val);
	void __fastcall RemoveMultiImage(int ACol, int ARow);
	void __fastcall AddDataImage(int ACol, int ARow, int Aidx, TCellHAlign hal, TCellVAlign val);
	void __fastcall RemoveDataImage(int ACol, int ARow);
	bool __fastcall HasDataImage(int ACol, int ARow);
	void __fastcall AddDataPicture(int ACol, int ARow, System::UnicodeString AName, TCellHAlign hal, TCellVAlign val);
	void __fastcall RemoveDataPicture(int ACol, int ARow);
	bool __fastcall HasDataPicture(int ACol, int ARow);
	void __fastcall AddRotated(int ACol, int ARow, short AAngle, System::UnicodeString s);
	void __fastcall SetRotated(int ACol, int ARow, short AAngle);
	void __fastcall RemoveRotated(int ACol, int ARow);
	bool __fastcall IsRotated(int ACol, int ARow, int &aAngle);
	Vcl::Graphics::TIcon* __fastcall CreateIcon(int ACol, int ARow, TCellHAlign hal, TCellVAlign val);
	void __fastcall AddIcon(int ACol, int ARow, Vcl::Graphics::TIcon* AIcon, TCellHAlign hal, TCellVAlign val);
	void __fastcall RemoveIcon(int ACol, int ARow);
	void __fastcall AddButton(int ACol, int ARow, int bw, int bh, System::UnicodeString Caption, TCellHAlign hal, TCellVAlign val);
	void __fastcall SetButtonText(int ACol, int ARow, System::UnicodeString Caption);
	System::UnicodeString __fastcall GetButtonText(int ACol, int ARow);
	void __fastcall PushButton(int ACol, int ARow, bool push);
	void __fastcall RemoveButton(int ACol, int ARow);
	void __fastcall RemoveBitButton(int ACol, int ARow);
	void __fastcall RemoveAllButtons();
	bool __fastcall HasButton(int ACol, int ARow);
	void __fastcall AddBitButton(int ACol, int ARow, int bw, int bh, System::UnicodeString Caption, Vcl::Graphics::TBitmap* Glyph, TCellHAlign hal, TCellVAlign val);
	Vcl::Graphics::TBitmap* __fastcall CreateBitButton(int ACol, int ARow, int bw, int bh, System::UnicodeString Caption, TCellHAlign hal, TCellVAlign val);
	void __fastcall AddCheckBox(int ACol, int ARow, bool State, bool Data)/* overload */;
	Vcl::Stdctrls::TCheckBoxState __fastcall BoolToCheckBoxState(bool bChecked);
	void __fastcall AddCheckBox(int ACol, int ARow, Vcl::Stdctrls::TCheckBoxState State)/* overload */;
	void __fastcall AddTriStateCheckBoxColumn(int ACol, Vcl::Stdctrls::TCheckBoxState state);
	bool __fastcall GetCheckBoxState(int ACol, int ARow, Vcl::Stdctrls::TCheckBoxState &state)/* overload */;
	void __fastcall RemoveCheckBox(int ACol, int ARow);
	bool __fastcall HasCheckBox(int ACol, int ARow);
	bool __fastcall IsInCheckBox(int ACol, int ARow, int XPos, int YPos);
	void __fastcall AddCheckBoxColumn(int ACol, bool DefaultState = false, bool DataCheckBox = false);
	void __fastcall RemoveCheckBoxColumn(int ACol);
	bool __fastcall HasDataCheckBox(int ACol, int ARow);
	bool __fastcall GetCheckBoxState(int ACol, int ARow, bool &state)/* overload */;
	bool __fastcall IsChecked(int ACol, int ARow);
	bool __fastcall SetCheckBoxState(int ACol, int ARow, bool State)/* overload */;
	bool __fastcall SetCheckBoxState(int ACol, int ARow, Vcl::Stdctrls::TCheckBoxState State)/* overload */;
	bool __fastcall ToggleCheckBox(int ACol, int ARow);
	void __fastcall CheckAll(int ACol);
	void __fastcall UnCheckAll(int ACol);
	void __fastcall AddRadioButton(int ACol, int ARow, bool State = false);
	void __fastcall AddRadioButtonGroup(int ACol, int ARow, TRadioButtonGroup Group, bool State = false);
	void __fastcall RemoveRadioButton(int ACol, int ARow);
	bool __fastcall HasRadioButton(int ACol, int ARow);
	bool __fastcall HasRadioButtonGroup(int ACol, int ARow, TRadioButtonGroup Group);
	bool __fastcall IsRadioButtonChecked(int ACol, int ARow);
	bool __fastcall SetRadioButtonState(int ACol, int ARow, bool State);
	void __fastcall AddRadioButtonColumn(int ACol);
	void __fastcall AddRadioButtonGroupColumn(int ACol);
	void __fastcall RemoveRadioButtonColumn(int ACol);
	void __fastcall SetRadioButtonColumnIndex(int ACol, int Index);
	void __fastcall SetRadioButtonRowIndex(int ARow, int Index);
	int __fastcall GetRadioButtonColumnIndex(int ACol);
	bool __fastcall HasHTMLForm(int ACol, int ARow);
	bool __fastcall HasExpand(int ACol, int ARow);
	void __fastcall AddExpand(int ACol, int ARow, int ExpandedHeight);
	void __fastcall RemoveExpand(int ACol, int ARow);
	bool __fastcall ToggleExpand(int ACol, int ARow);
	bool __fastcall GetExpandState(int ACol, int ARow);
	int __fastcall GetExpandHeight(int ACol, int ARow, bool Expanded);
	bool __fastcall HasProgress(int ACol, int ARow);
	void __fastcall AddProgress(int ACol, int ARow, System::Uitypes::TColor FGColor, System::Uitypes::TColor BKColor);
	void __fastcall AddProgressEx(int ACol, int ARow, System::Uitypes::TColor FGColor, System::Uitypes::TColor FGTextColor, System::Uitypes::TColor BKColor, System::Uitypes::TColor BKTextColor);
	void __fastcall AddProgressFormatted(int ACol, int ARow, System::Uitypes::TColor FGColor, System::Uitypes::TColor FGTextColor, System::Uitypes::TColor BKColor, System::Uitypes::TColor BKTextColor, System::UnicodeString Fmt, int Min, int Max, double Scale = 1.000000E+00);
	void __fastcall RemoveProgress(int ACol, int ARow);
	void __fastcall AddAdvProgress(int ACol, int ARow, int Min = 0x0, int Max = 0x64);
	void __fastcall RemoveAdvProgress(int ACol, int ARow);
	void __fastcall AddProgressPie(int ACol, int ARow, System::Uitypes::TColor Color, int Value);
	void __fastcall SetProgressPie(int ACol, int ARow, int Value);
	void __fastcall RemoveProgressPie(int ACol, int ARow);
	void __fastcall AddRangeIndicator(int ACol, int ARow, int Range = 0x64, System::Uitypes::TColor NegColor = (System::Uitypes::TColor)(0xff), System::Uitypes::TColor PosColor = (System::Uitypes::TColor)(0x0), bool ShowValue = false);
	void __fastcall RemoveRangeIndicator(int ACol, int ARow);
	void __fastcall AddBalloon(int ACol, int ARow, System::UnicodeString Title, System::UnicodeString Text, TBalloonIcon Icon);
	void __fastcall RemoveBalloon(int ACol, int ARow);
	bool __fastcall HasBalloon(int ACol, int ARow);
	bool __fastcall IsBalloon(int ACol, int ARow, System::UnicodeString &Title, System::UnicodeString &Text, TBalloonIcon &Icon);
	void __fastcall AddComment(int ACol, int ARow, System::UnicodeString Comment);
	void __fastcall AddColorComment(int ACol, int ARow, System::UnicodeString Comment, System::Uitypes::TColor Color);
	void __fastcall RemoveComment(int ACol, int ARow);
	void __fastcall RemoveAllComments();
	void __fastcall AddMarker(int ACol, int ARow, int ErrPos, int ErrLen);
	void __fastcall RemoveMarker(int ACol, int ARow);
	void __fastcall RemoveAllMarkers();
	void __fastcall GetMarker(int ACol, int ARow, int &ErrPos, int &ErrLen);
	bool __fastcall IsComment(int ACol, int ARow, System::UnicodeString &comment);
	__property System::UnicodeString CellComment[int ACol][int ARow] = {read=GetComment, write=SetComment};
	void __fastcall AddScrollBar(int ACol, int ARow, bool AutoRange = false);
	void __fastcall RemoveScrollBar(int ACol, int ARow);
	bool __fastcall HasScrollBar(int ACol, int ARow);
	bool __fastcall HasAutoRangeScrollBar(int ACol, int ARow);
	void __fastcall AddShape(int ACol, int ARow, Advutil::TCellShape Shape, System::Uitypes::TColor FillColor, System::Uitypes::TColor LineColor, TCellHAlign hal, TCellVAlign val);
	bool __fastcall HasShape(int ACol, int ARow);
	void __fastcall RemoveShape(int ACol, int ARow);
	void __fastcall SetShapeColor(int ACol, int ARow, System::Uitypes::TColor FillColor);
	System::Uitypes::TColor __fastcall GetShapeColor(int ACol, int ARow);
	void __fastcall AddRating(int ACol, int ARow, int Scale, System::Uitypes::TColor FillColor, System::Uitypes::TColor EmptyColor);
	void __fastcall RemoveRating(int ACol, int ARow);
	bool __fastcall HasRating(int ACol, int ARow);
	int __fastcall GetScrollPosition(int ACol, int ARow);
	void __fastcall SetScrollPosition(int ACol, int ARow, int Pos);
	TScrollProp __fastcall GetScrollProp(int ACol, int ARow);
	void __fastcall SetScrollProp(int ACol, int ARow, const TScrollProp &Prop);
	double __fastcall ColumnCount(int ACol, int FromRow = 0xffffffff, int ToRow = 0xffffffff);
	double __fastcall ColumnSum(int ACol, int FromRow = 0xffffffff, int ToRow = 0xffffffff);
	double __fastcall ColumnAvg(int ACol, int FromRow = 0xffffffff, int ToRow = 0xffffffff);
	double __fastcall ColumnMin(int ACol, int FromRow = 0xffffffff, int ToRow = 0xffffffff);
	double __fastcall ColumnMax(int ACol, int FromRow = 0xffffffff, int ToRow = 0xffffffff);
	double __fastcall ColumnDistinct(int ACol, int FromRow = 0xffffffff, int ToRow = 0xffffffff);
	double __fastcall ColumnStdDev(int ACol, int FromRow = 0xffffffff, int ToRow = 0xffffffff);
	double __fastcall ColumnCustomCalc(int ACol, int FromRow = 0xffffffff, int ToRow = 0xffffffff);
	double __fastcall RowSum(int ARow, int fromCol, int toCol);
	double __fastcall RowAvg(int ARow, int fromCol, int toCol);
	double __fastcall RowMin(int ARow, int fromCol, int toCol);
	double __fastcall RowMax(int ARow, int fromCol, int toCol);
	double __fastcall RectCalc(const Vcl::Grids::TGridRect &GR, TCalcType CalcType);
	double __fastcall RectSum(const Vcl::Grids::TGridRect &GR);
	double __fastcall RectAvg(const Vcl::Grids::TGridRect &GR);
	double __fastcall RectMin(const Vcl::Grids::TGridRect &GR);
	double __fastcall RectMax(const Vcl::Grids::TGridRect &GR);
	double __fastcall SelectionSum();
	double __fastcall SelectionAvg();
	double __fastcall SelectionMin();
	double __fastcall SelectionMax();
	void __fastcall SetFontStyle(const Vcl::Grids::TGridRect &GridRect, System::Uitypes::TFontStyle AStyle, bool DoSet);
	bool __fastcall IsFontStyle(const Vcl::Grids::TGridRect &GridRect, System::Uitypes::TFontStyle AStyle);
	void __fastcall SetAlignment(const Vcl::Grids::TGridRect &GridRect, System::Classes::TAlignment AAlignment);
	bool __fastcall IsAlignment(const Vcl::Grids::TGridRect &GridRect, System::Classes::TAlignment AAlignment);
	void __fastcall SetCellColor(const Vcl::Grids::TGridRect &GridRect, System::Uitypes::TColor AColor);
	void __fastcall SetCellTextColor(const Vcl::Grids::TGridRect &GridRect, System::Uitypes::TColor AColor);
	void __fastcall SetCellFontName(const Vcl::Grids::TGridRect &GridRect, System::UnicodeString AFontName);
	void __fastcall SetCellFontSize(const Vcl::Grids::TGridRect &GridRect, int AFontSize);
	void __fastcall ResetFixedCellHighlight();
	virtual void __fastcall CalcFooter(int ACol = 0xffffffff);
	HIDESBASE void __fastcall BeginUpdate();
	HIDESBASE void __fastcall EndUpdate();
	void __fastcall StartUpdate();
	void __fastcall ResetUpdate();
	HIDESBASE bool __fastcall IsUpdating();
	__property System::Sysutils::TEncoding* Encoding = {read=FEncoding, write=FEncoding};
	__property bool LockUpdate = {read=GetLockFlag, write=SetLockFlag, nodefault};
	__property bool NarrowDownFromStart = {read=FNarrowDownFromStart, write=FNarrowDownFromStart, nodefault};
	__property Vcl::Grids::TGridRect UsedCells = {read=GetUsedCells};
	__property TCellType CellTypes[int ACol][int ARow] = {read=GetCellType};
	__property bool IsEmpty[int ACol][int ARow] = {read=GetCellEmpty};
	__property TCellGraphic* CellGraphics[int ACol][int ARow] = {read=GetCellGraphic};
	__property System::Types::TPoint CellGraphicSize[int ACol][int ARow] = {read=GetCellGraphicSize};
	__property int CellImageIdx[int ACol][int ARow] = {read=GetCellImageIdx};
	__property Advobj::TIntList* CellImages[int ACol][int ARow] = {read=GetCellImages};
	__property int Ints[int ACol][int ARow] = {read=GetInts, write=SetInts};
	__property int AllInts[int ACol][int ARow] = {read=GetAllInts, write=SetAllInts};
	__property double Floats[int ACol][int ARow] = {read=GetFloats, write=SetFloats};
	__property double AllFloats[int ACol][int ARow] = {read=GetAllFloats, write=SetAllFloats};
	__property System::TDateTime Dates[int ACol][int ARow] = {read=GetDates, write=SetDates};
	__property System::TDateTime Times[int ACol][int ARow] = {read=GetTimes, write=SetTimes};
	__property System::TDateTime DateTimes[int ACol][int ARow] = {read=GetDateTimes, write=SetDateTimes};
	__property int ComboIndex[int ACol][int ARow] = {read=GetComboIndex, write=SetComboIndex};
	__property System::UnicodeString ControlValues[int ACol][int ARow][System::UnicodeString ID] = {read=GetCtrlVal, write=SetCtrlVal};
	__property System::WideChar Delimiter = {read=FDelimiter, write=FDelimiter, nodefault};
	__property System::Classes::TStringList* FilterList = {read=FFilterList};
	__property Vcl::Controls::TImageList* FilterImageList = {read=FFltrList};
	__property bool NoDefaultDraw = {read=FNoDefaultDraw, write=FNoDefaultDraw, nodefault};
	__property System::WideChar PasswordChar = {read=FPasswordChar, write=FPasswordChar, nodefault};
	__property bool JavaCSV = {read=FJavaCSV, write=FJavaCSV, nodefault};
	__property bool FastPrint = {read=FFastPrint, write=FFastPrint, nodefault};
	__property int FindCol = {read=FFindCol, write=FFindCol, nodefault};
	__property int FindRow = {read=FFindRow, write=FFindRow, nodefault};
	__property System::UnicodeString CheckTrue = {read=FCheckTrue, write=FCheckTrue};
	__property System::UnicodeString CheckFalse = {read=FCheckFalse, write=FCheckFalse};
	__property bool LoadFirstRow = {read=FLoadFirstRow, write=FLoadFirstRow, nodefault};
	__property bool SaveFixedCells = {read=FSaveFixedCells, write=FSaveFixedCells, nodefault};
	__property bool SaveFixedCols = {read=FSaveFixedCols, write=FSaveFixedCols, nodefault};
	__property bool SaveFixedRows = {read=FSaveFixedRows, write=FSaveFixedRows, nodefault};
	__property bool SaveHiddenCells = {read=FSaveHiddenCells, write=FSaveHiddenCells, nodefault};
	__property bool SaveVirtCells = {read=FSaveVirtCells, write=FSaveVirtCells, nodefault};
	__property bool SaveWithHTML = {read=FSaveWithHTML, write=FSaveWithHTML, nodefault};
	__property bool SaveWithRTF = {read=FSaveWithRTF, write=FSaveWithRTF, nodefault};
	__property bool SaveMergedCells = {read=FSaveMergedCells, write=FSaveMergedCells, nodefault};
	__property System::Types::TPoint SearchCell = {read=FSearchCell, write=FSearchCell};
	__property Advobj::TSortIndexList* SortIndexes = {read=FSortIndexes};
	__property System::UnicodeString OriginalCellValue = {read=FCellCache, write=FCellCache};
	__property bool EditActive = {read=FEditActive, nodefault};
	__property System::UnicodeString EditMask = {read=FEditMask, write=FEditMask};
	__property bool NoImageAndText = {read=FNoImageAndText, write=FNoImageAndText, nodefault};
	__property TGridDatePicker* DateTimePicker = {read=GetDateTimePicker};
	__property TGridDateTimePicker* DateAndTimePicker = {read=EditDateTime};
	__property TGridCombo* Combobox = {read=EditCombo};
	__property TGridTransEdit* FixedEdit = {read=EditTrans};
	__property TGridTransCombo* FixedComboBox = {read=ComboTrans};
	__property TDropList* DropList = {read=FDropList};
	__property TDropCheckList* DropCheckList = {read=FDropCheckList};
	__property TGridTrackbarDropDown* TrackbarDropDown = {read=EditTrackBar};
	__property TGridMemoDropDown* MemoDropDown = {read=EditMemo};
	__property TGridCalculatorDropDown* CalculatorDropDown = {read=EditCalculator};
	__property TGridTimepickerDropDown* TimePickerDropDown = {read=EditTimePicker};
	__property TGridDetailPickerDropDown* DetailPickerDropDown = {read=EditDetailPicker};
	__property TGridGridDropDown* GridDropDown = {read=EditGridPicker};
	__property TGridColorDropDown* ColorPickerDropDown = {read=EditColorPicker};
	__property TGridImageDropDown* ImagePickerDropDown = {read=EditImagePicker};
	__property TGridAdvGridDropDown* AdvGridDropDown = {read=EditAdvGridPicker};
	__property TGridControlDropDown* ControlDropDown = {read=EditControlPicker};
	__property bool ClearTextOnly = {read=FClearTextOnly, write=FClearTextOnly, nodefault};
	__property TGridCombo* UniCombo = {read=EditCombo};
	__property TGridSpin* SpinEdit = {read=EditSpin};
	__property TGridEditBtn* BtnEdit = {read=EditBtn};
	__property TGridButton* Btn = {read=GridButton};
	__property TGridUnitEditBtn* BtnUnitEdit = {read=UnitEditBtn};
	__property TAdvRichEdit* RichEdit = {read=GetRichEdit};
	__property Vcl::Graphics::TCanvas* FooterCanvas = {read=GetFooterCanvas};
	__property TFooterPanel* FooterPanel = {read=GetFooterPanel};
	__property TAdvRichEdit* InplaceRichEdit = {read=EditRichEdit};
	__property Vcl::Controls::TWinControl* CellEditor = {read=GetCellEditorControl};
	__property System::UnicodeString IncrSearchText = {read=SearchInc, write=SearchInc};
	__property TAdvInplaceEdit* NormalEdit = {read=GetInplaceEditor};
	__property TSearchPanel* SearchPanel = {read=FSearchPanel};
	__property bool SpreadSheet = {read=FSpreadSheet, write=SetSpreadSheet, nodefault};
	__property bool PrinterDriverFix = {read=FPrinterdriverfix, write=FPrinterdriverfix, nodefault};
	__property bool RowSelect[int ARow] = {read=GetRowSelect, write=SetRowSelect};
	__property bool ColSelect[int ACol] = {read=GetColSelect, write=SetColSelect};
	__property int RowSelectCount = {read=GetRowSelectCount, nodefault};
	__property int ColSelectCount = {read=GetColSelectCount, nodefault};
	__property bool RowModified[int ARow] = {read=GetRowModified, write=SetRowModified};
	__property bool RowEnabled[int ARow] = {read=GetRowEnabled, write=SetRowEnabled};
	__property bool Modified = {read=FGridModified, write=FGridModified, nodefault};
	__property bool NodeState[int ARow] = {read=GetNodeState, write=SetNodeState};
	__property bool FindBusy = {read=FFindBusy, nodefault};
	__property System::Types::TRect PrintPageRect = {read=FPrintPageRect};
	__property int PrintPageWidth = {read=FPrintPageWidth, nodefault};
	__property int PrintColWidth[int ACol] = {read=GetPrintColWidth};
	__property int PrintColOffset[int ACol] = {read=GetPrintColOffset};
	__property int PrintColStart = {read=FPrintColStart, nodefault};
	__property int PrintColEnd = {read=FPrintColEnd, nodefault};
	__property int PrintNrOfPages = {read=FPrintPageNum, nodefault};
	__property bool ExcelClipboardFormat = {read=FExcelClipboardFormat, write=FExcelClipboardFormat, nodefault};
	__property int PreviewPage = {read=FPrintPageFrom, write=SetPreviewPage, nodefault};
	__property System::UnicodeString UnSortedCells[int i][int j] = {read=GetUnSortedCell, write=SetUnSortedCell};
	virtual System::UnicodeString __fastcall SaveCell(int ACol, int ARow);
	virtual System::UnicodeString __fastcall ExportCell(int ACol, int ARow);
	__property System::UnicodeString DisplCells[int i][int j] = {read=GetFormattedCell};
	__property System::UnicodeString RealCells[int i][int j] = {read=GetRealCell, write=SetRealCell};
	__property System::UnicodeString AllCells[int i][int j] = {read=GetCellsEx, write=SetCellsEx};
	__property System::UnicodeString AllGridCells[int i][int j] = {read=GetGridCellsEx, write=SetGridCellsEx};
	__property System::WideString AllWideCells[int i][int j] = {read=GetWideCellsEx, write=SetWideCellsEx};
	__property System::WideString WideCells[int i][int j] = {read=GetWideCells, write=SetWideCells};
	__property System::TObject* AllObjects[int i][int j] = {read=GetObjectsEx, write=SetObjectsEx};
	__property System::UnicodeString OriginalCells[int i][int j] = {read=GetOriginalCells, write=SetOriginalCells};
	__property int AllColWidths[int i] = {read=GetAllColWidths, write=SetAllColWidths};
	__property int AllColCount = {read=GetAllColCount, nodefault};
	__property int AllRowCount = {read=GetAllRowCount, nodefault};
	__property int LastCol = {read=GetLastCol, nodefault};
	__property int LastRow = {read=GetLastRow, nodefault};
	__property System::Classes::TAlignment Alignments[int i][int j] = {read=GetAlignments, write=SetAlignments};
	__property int LinesInCell[int i][int j] = {read=GetLinesInCell};
	__property System::Uitypes::TColor Colors[int i][int j] = {read=GetColors, write=SetColors};
	__property System::Uitypes::TColor ColorsTo[int i][int j] = {read=GetColorsTo, write=SetColorsTo};
	__property Advobj::TCellGradientDirection Gradients[int i][int j] = {read=GetGradientDir, write=SetGradientDir};
	__property Advobj::TIntList* IgnoreColumns = {read=FIgnoreColumns};
	__property System::Uitypes::TColor RowColor[int i] = {write=SetRowColor};
	__property System::Uitypes::TColor RowColorTo[int i] = {write=SetRowColorTo};
	__property System::Uitypes::TColor RowFontColor[int i] = {write=SetRowFontColor};
	__property Vcl::Graphics::TFont* Fonts[int i][int j] = {read=GetCellFont, write=SetCellFont};
	__property System::Uitypes::TColor FontColors[int i][int j] = {read=GetFontColors, write=SetFontColors};
	__property System::Uitypes::TFontStyles FontStyles[int i][int j] = {read=GetFontStyles, write=SetFontStyles};
	__property int FontSizes[int i][int j] = {read=GetFontSizes, write=SetFontSizes};
	__property System::UnicodeString FontNames[int i][int j] = {read=GetFontNames, write=SetFontNames};
	__property Vcl::Controls::TControl* CellControls[int i][int j] = {read=GetCellControls, write=SetCellControls};
	__property bool ReadOnly[int i][int j] = {read=GetReadOnly, write=SetReadOnly};
	__property bool WordWraps[int i][int j] = {read=GetWordWraps, write=SetWordWraps};
	__property System::UnicodeString Hyperlink[int i][int j] = {read=GetHyperlink};
	__property System::UnicodeString StrippedCells[int i][int j] = {read=GetStrippedCell};
	__property bool SelectedCells[int i][int j] = {read=GetSelectedCells, write=SetSelectedCells};
	__property int SelectedCellsCount = {read=GetSelectedCellsCount, nodefault};
	__property Vcl::Grids::TGridCoord SelectedCell[int i] = {read=GetSelectedCell};
	__property int SelectedRow[int i] = {read=GetSelectedRow};
	__property int SelectedRowCount = {read=GetSelectedRowCount, nodefault};
	__property int SelectedColCount = {read=GetSelectedColCount, nodefault};
	__property System::UnicodeString CurrentCell = {read=GetCurrentCell, write=SetCurrentCell};
	__property Advobj::TEditorType CurrentEditor = {read=GetCurrentEditor, nodefault};
	__property System::Uitypes::TColor ArrowColor = {read=GetArrowColor, write=SetArrowColor, nodefault};
	__property int GroupColumn = {read=FGroupColumn, write=SetGroupColumn, nodefault};
	__property bool QuoteEmptyCells = {read=FQuoteEmptyCells, write=FQuoteEmptyCells, nodefault};
	__property bool QuoteQuoteCells = {read=FQuoteQuoteCells, write=FQuoteQuoteCells, nodefault};
	__property bool CSVMultilineCellImport = {read=FCSVMultilineCellImport, write=FCSVMultilineCellImport, nodefault};
	__property bool CSVTrimSpaces = {read=FCSVTrimSpaces, write=FCSVTrimSpaces, nodefault};
	__property bool AlwaysQuotes = {read=FAlwaysQuotes, write=FAlwaysQuotes, nodefault};
	__property bool ForceDecimalSeparator = {read=FForceDecimalSeparator, write=FForceDecimalSeparator, nodefault};
	__property System::Uitypes::TColor SelectionRectangleColor = {read=FSelectionRectangleColor, write=FSelectionRectangleColor, nodefault};
	__property int RealRow = {read=GetRealRow, nodefault};
	__property int RealCol = {read=GetRealCol, nodefault};
	__property int Row = {read=GetRowEx, write=SetRowEx, nodefault};
	__property int Col = {read=GetColEx, write=SetColEx, nodefault};
	__property int TopRow = {read=GetTopRowEx, write=SetTopRowEx, nodefault};
	__property int SaveStartCol = {read=GetSaveStartCol, nodefault};
	__property int SaveStartRow = {read=GetSaveStartRow, nodefault};
	__property int SaveEndCol = {read=GetSaveEndCol, nodefault};
	__property int SaveEndRow = {read=GetSaveEndRow, nodefault};
	__property int SaveColCount = {read=GetSaveColCount, nodefault};
	__property int SaveRowCount = {read=GetSaveRowCount, nodefault};
	__property Vcl::Grids::TGridRect Selection = {read=GetSelectionEx, write=SetSelectionEx};
	__property bool ShowNullDates = {read=FShowNullDates, write=FShowNullDates, nodefault};
	__property int VersionNr = {read=GetVersionNr, nodefault};
	__property System::UnicodeString VersionString = {read=GetVersionString};
	__property TEditLink* EditLink = {read=FEditLink, write=FEditLink};
	__property System::Types::TPoint XYOffset = {read=FXYOffset, write=SetXYOffset};
	__property System::Types::TPoint XYRTFOffset = {read=FXYRTFOffset, write=SetXYRTFOffset};
	__property bool XYOffsetTopLeftOnly = {read=FXYOffsetTopLeftOnly, write=FXYOffsetTopLeftOnly, nodefault};
	__property Picturecontainer::THTMLPictureCache* ImageCache = {read=FImageCache};
	__property Advobj::TIntList* MergedColumns = {read=FMergedColumns};
	__property bool AlwaysValidate = {read=FAlwaysValidate, write=FAlwaysValidate, nodefault};
	__property bool SizeGrowOnly = {read=FSizeGrowOnly, write=FSizeGrowOnly, nodefault};
	__property int MaxRowHeight = {read=FMaxRowHeight, write=FMaxRowHeight, nodefault};
	__property int MinRowHeight = {read=FMinRowHeight, write=FMinRowHeight, nodefault};
	__property int MaxColWidth = {read=FMaxColWidth, write=FMaxColWidth, nodefault};
	__property int MinColWidth = {read=FMinColWidth, write=FMinColWidth, nodefault};
	__property System::Uitypes::TColor TMSGradientFrom = {read=FTMSGradFrom, write=SetTMSGradFrom, nodefault};
	__property System::Uitypes::TColor TMSGradientTo = {read=FTMSGradTo, write=SetTMSGradTo, nodefault};
	__property System::Uitypes::TColor TMSGradientMirrorFrom = {read=FTMSGradMirrorFrom, write=SetTMSGradMirrorFrom, nodefault};
	__property System::Uitypes::TColor TMSGradientMirrorTo = {read=FTMSGradMirrorTo, write=SetTMSGradMirrorTo, nodefault};
	__property System::Uitypes::TColor TMSGradientHoverFrom = {read=FTMSGradHoverFrom, write=FTMSGradHoverFrom, nodefault};
	__property System::Uitypes::TColor TMSGradientHoverTo = {read=FTMSGradHoverTo, write=FTMSGradHoverTo, nodefault};
	__property System::Uitypes::TColor TMSGradientHoverMirrorFrom = {read=FTMSGradHoverMirrorFrom, write=FTMSGradHoverMirrorFrom, nodefault};
	__property System::Uitypes::TColor TMSGradientHoverMirrorTo = {read=FTMSGradHoverMirrorTo, write=FTMSGradHoverMirrorTo, nodefault};
	__property System::Uitypes::TColor TMSGradientHoverBorder = {read=FTMSGradHoverBorder, write=FTMSGradHoverBorder, nodefault};
	__property System::Uitypes::TColor TMSGradientDownFrom = {read=FTMSGradDownFrom, write=FTMSGradDownFrom, nodefault};
	__property System::Uitypes::TColor TMSGradientDownTo = {read=FTMSGradDownTo, write=FTMSGradDownTo, nodefault};
	__property System::Uitypes::TColor TMSGradientDownMirrorFrom = {read=FTMSGradDownMirrorFrom, write=FTMSGradDownMirrorFrom, nodefault};
	__property System::Uitypes::TColor TMSGradientDownMirrorTo = {read=FTMSGradDownMirrorTo, write=FTMSGradDownMirrorTo, nodefault};
	__property System::Uitypes::TColor TMSGradientDownBorder = {read=FTMSGradDownBorder, write=FTMSGradDownBorder, nodefault};
	__property System::UnicodeString XMLEncoding = {read=FXMLEncoding, write=FXMLEncoding};
	__property bool VirtualEdit = {read=FVirtualEdit, write=FVirtualEdit, nodefault};
	__property bool UseHTMLHints = {read=FUseHTMLHints, write=SetUseHTMLHints, nodefault};
	__property bool UseDisabledFont = {read=FUseDisabledFont, write=FUseDisabledFont, nodefault};
	__property bool OwnsObjects = {read=FOwnsObjects, write=FOwnsObjects, nodefault};
	__property TSortDirection AutoNumberDirection = {read=FAutoNumberDirection, write=FAutoNumberDirection, nodefault};
	__property int AutoNumberOffset = {read=FAutoNumberOffset, write=FAutoNumberOffset, nodefault};
	__property int AutoNumberStart = {read=FAutoNumberStart, write=FAutoNumberStart, nodefault};
	__property Advobj::TClickCellEvent OnGetEditorPropInt = {read=FonGetEditorPropInt, write=FonGetEditorPropInt};
	__property TCharSet ValidCharSet = {read=FValidCharSet, write=FValidCharSet};
	__property bool FilterIncremental = {read=FFilterIncremental, write=FFilterIncremental, default=1};
	__property Advobj::TIntList* ColumnOrder = {read=FColumnOrder};
	__property TBoolArray VisibleCol = {read=FVisibleCol};
	
__published:
	__property TAutoAdvanceEvent OnAutoAdvance = {read=FOnAutoAdvance, write=FOnAutoAdvance};
	__property System::Classes::TNotifyEvent OnBeforeFilter = {read=FOnBeforeFilter, write=FOnBeforeFilter};
	__property TBeforeEditEvent OnBeforeEdit = {read=FOnBeforeEdit, write=FOnBeforeEdit};
	__property Advobj::TCustomCellDrawEvent OnCustomCellBkgDraw = {read=FOnCustomCellBkgDraw, write=FOnCustomCellBkgDraw};
	__property Advobj::TCustomCellDrawEvent OnCustomCellDraw = {read=FOnCustomCellDraw, write=FOnCustomCellDraw};
	__property TCustomCellSizeEvent OnCustomCellSize = {read=FOnCustomCellSize, write=FOnCustomCellSize};
	__property TCustomFilterEvent OnCustomFilter = {read=FOnCustomFilter, write=FOnCustomFilter};
	__property Advobj::TGridColorEvent OnGetCellColor = {read=FOnGetCellColor, write=FOnGetCellColor};
	__property TCellCursorEvent OnGetCellCursor = {read=FOnGetCellCursor, write=FOnGetCellCursor};
	__property Advobj::TGridGradientEvent OnGetCellGradient = {read=FOnGetCellGradient, write=FOnGetCellGradient};
	__property Advobj::TGridColorEvent OnGetCellPrintColor = {read=FOnGetCellPrintColor, write=FOnGetCellPrintColor};
	__property Advobj::TGridBorderEvent OnGetCellPrintBorder = {read=FOnGetCellPrintBorder, write=FOnGetCellPrintBorder};
	__property Advobj::TGridBorderEvent OnGetCellBorder = {read=FOnGetCellBorder, write=FOnGetCellBorder};
	__property Advobj::TGridBorderPropEvent OnGetCellBorderProp = {read=FOnGetCellBorderProp, write=FOnGetCellBorderProp};
	__property Advobj::TGridAlignEvent OnGetAlignment = {read=FOnGetAlignment, write=FOnGetAlignment};
	__property TWordWrapEvent OnGetWordWrap = {read=FOnGetWordWrap, write=FOnGetWordWrap};
	__property TGetColumnFilterEvent OnGetColumnFilter = {read=FOnGetColumnFilter, write=FOnGetColumnFilter};
	__property System::Classes::TNotifyEvent OnFilterDone = {read=FOnFilterDone, write=FOnFilterDone};
	__property TFilterSelectEvent OnFilterSelect = {read=FOnFilterSelect, write=FOnFilterSelect};
	__property TFilterCheckEvent OnFilterCheck = {read=FOnFilterCheck, write=FOnFilterCheck};
	__property TFilterCheckClickEvent OnFilterCheckClick = {read=FOnFilterCheckClick, write=FOnFilterCheckClick};
	__property TFilterCheckClickEvent OnFilterCheckMouseDown = {read=FOnFilterCheckMouseDown, write=FOnFilterCheckMouseDown};
	__property TFilterShowEvent OnFilterShow = {read=FOnFilterShow, write=FOnFilterShow};
	__property TFilterCloseEvent OnFilterClose = {read=FOnFilterClose, write=FOnFilterClose};
	__property Advobj::TGridFormatEvent OnGetFormat = {read=FOnGetFormat, write=FOnGetFormat};
	__property TGetCheckEvent OnGetCheckTrue = {read=FOnGetCheckTrue, write=FOnGetCheckTrue};
	__property TGetCheckEvent OnGetCheckFalse = {read=FOnGetCheckFalse, write=FOnGetCheckFalse};
	__property Advobj::TGridHintEvent OnGridHint = {read=FOnGridHint, write=FOnGridHint};
	__property TGridWideHintEvent OnGridWideHint = {read=FOnGridWideHint, write=FOnGridWideHint};
	__property TGroupCalcEvent OnColumnCalc = {read=FOnColumnCalc, write=FOnColumnCalc};
	__property TGroupCalcEvent OnGroupCalc = {read=FOnGroupCalc, write=FOnGroupCalc};
	__property Advobj::TOfficeHintEvent OnOfficeHint = {read=FOnOfficeHint, write=FOnOfficeHint};
	__property TRowChangedEvent OnRowUpdate = {read=FOnRowChanged, write=FOnRowChanged};
	__property TRowChangingEvent OnRowChanging = {read=FOnRowChanging, write=FOnRowChanging};
	__property TColChangingEvent OnColChanging = {read=FOnColChanging, write=FOnColChanging};
	__property TCellChangingEvent OnCellChanging = {read=FOnCellChanging, write=FOnCellChanging};
	__property Advobj::TGridBalloonEvent OnCellBalloon = {read=FOnCellBalloon, write=FOnCellBalloon};
	__property TCustomStrToDateEvent OnCustomStrToDate = {read=FOnCustomStrToDate, write=FOnCustomStrToDate};
	__property TGridPrintPageEvent OnPrintPage = {read=FOnPrintPage, write=FOnPrintPage};
	__property TGridPrintPageTopBottomSizeEvent OnPrintPageTopBottomSize = {read=FOnPrintPageTopBottomSize, write=FOnPrintPageTopBottomSize};
	__property TGridPrintPageNumEvent OnPrintGetPageNum = {read=FOnPrintGetPageNum, write=FOnPrintGetPageNum};
	__property TGridPrintPageDoneEvent OnPrintPageDone = {read=FOnPrintPageDone, write=FOnPrintPageDone};
	__property System::Classes::TNotifyEvent OnPrintDone = {read=FOnPrintDone, write=FOnPrintDone};
	__property TGridPrintStartEvent OnPrintStart = {read=FOnPrintStart, write=FOnPrintStart};
	__property TGridPrintCancelEvent OnPrintCancel = {read=FOnPrintCancel, write=FOnPrintCancel};
	__property TDoFitToPageEvent OnFitToPage = {read=FDoFitToPage, write=FDoFitToPage};
	__property TGridPrintNewPageEvent OnPrintNewPage = {read=FOnPrintNewPage, write=FOnPrintNewPage};
	__property TGridPrintColumnWidthEvent OnPrintSetColumnWidth = {read=FOnPrintSetColumnWidth, write=FOnPrintSetColumnWidth};
	__property TGridPrintRowHeightEvent OnPrintSetRowHeight = {read=FOnPrintSetRowHeight, write=FOnPrintSetRowHeight};
	__property Advobj::TCanAddColEvent OnCanAddCol = {read=FOnCanAddCol, write=FOnCanAddCol};
	__property Advobj::TCanAddRowEvent OnCanAddRow = {read=FOnCanAddRow, write=FOnCanAddRow};
	__property Advobj::TAutoAddRowEvent OnAutoAddRow = {read=FOnAutoAddRow, write=FOnAutoAddRow};
	__property Advobj::TCanInsertRowEvent OnCanInsertRow = {read=FOnCanInsertRow, write=FOnCanInsertRow};
	__property Advobj::TAutoInsertRowEvent OnAutoInsertRow = {read=FOnAutoInsertRow, write=FOnAutoInsertRow};
	__property Advobj::TAutoInsertColEvent OnAutoInsertCol = {read=FOnAutoInsertCol, write=FOnAutoInsertCol};
	__property Advobj::TCanDeleteRowEvent OnCanDeleteRow = {read=FOnCanDeleteRow, write=FOnCanDeleteRow};
	__property Advobj::TAutoDeleteRowEvent OnAutoDeleteRow = {read=FOnAutoDeleteRow, write=FOnAutoDeleteRow};
	__property Advobj::TClickSortEvent OnClickSort = {read=FOnClickSort, write=FOnClickSort};
	__property Advobj::TCanSortEvent OnCanSort = {read=FOnCanSort, write=FOnCanSort};
	__property TNodeClickEvent OnExpandNode = {read=FOnExpandNode, write=FOnExpandNode};
	__property TNodeClickEvent OnContractNode = {read=FOnContractNode, write=FOnContractNode};
	__property TDropDownButtonClickEvent OnDropDownHeaderButtonClick = {read=FOnDropDownHeaderButtonClick, write=FOnDropDownHeaderButtonClick};
	__property TDropDownButtonClickEvent OnDropDownFooterButtonClick = {read=FOnDropDownFooterButtonClick, write=FOnDropDownFooterButtonClick};
	__property TNodeAllowEvent OnBeforeExpandNode = {read=FOnBeforeExpandNode, write=FOnBeforeExpandNode};
	__property TNodeAllowEvent OnBeforeContractNode = {read=FOnBeforeContractNode, write=FOnBeforeContractNode};
	__property Advobj::TCustomCompareEvent OnCustomCompare = {read=FCustomCompare, write=FCustomCompare};
	__property Advobj::TRawCompareEvent OnRawCompare = {read=FRawCompare, write=FRawCompare};
	__property Advobj::TSearchEditChangeEvent OnSearchEditChange = {read=FOnSearchEditChange, write=FOnSearchEditChange};
	__property TSearchFooterActionEvent OnSearchFooterAction = {read=FOnSearchFooterAction, write=FOnSearchFooterAction};
	__property TSearchFooterSearchEvent OnSearchFooterSearch = {read=FOnSearchFooterSearch, write=FOnSearchFooterSearch};
	__property System::Classes::TNotifyEvent OnSearchFooterClose = {read=FOnSearchFooterClose, write=FOnSearchFooterClose};
	__property TSearchFooterSearchEndEvent OnSearchFooterSearchEnd = {read=FOnSearchFooterSearchEnd, write=FOnSearchFooterSearchEnd};
	__property TCanShowFixedDropDownEvent OnCanShowFixedDropDown = {read=FOnCanShowFixedDropDown, write=FOnCanShowFixedDropDown};
	__property TFixedDropDownEvent OnFixedDropDownClick = {read=FOnFixedDropDownClick, write=FOnFixedDropDownClick};
	__property Advobj::TClickCellEvent OnClickCell = {read=FOnClickCell, write=FOnClickCell};
	__property Advobj::TClickCellEvent OnRightClickCell = {read=FOnRightClickCell, write=FOnRightClickCell};
	__property Advobj::TDblClickCellEvent OnDblClickCell = {read=FOnDblClickCell, write=FOnDblClickCell};
	__property TCanClickCellEvent OnCanClickCell = {read=FOnCanClickCell, write=FOnCanClickCell};
	__property Advobj::TCanEditCellEvent OnCanEditCell = {read=FOnCanEditCell, write=FOnCanEditCell};
	__property TFixedEditEvent OnFixedEdit = {read=FOnFixedEdit, write=FOnFixedEdit};
	__property TIsFixedCellEvent OnIsFixedCell = {read=FOnIsFixedCell, write=FOnIsFixedCell};
	__property TIsFixedCellEvent OnIsFixedHoverCell = {read=FOnIsFixedHoverCell, write=FOnIsFixedHoverCell};
	__property TIsPasswordCellEvent OnIsPasswordCell = {read=FOnIsPasswordCell, write=FOnIsPasswordCell};
	__property Advobj::TAnchorClickEvent OnAnchorClick = {read=FOnAnchorClick, write=FOnAnchorClick};
	__property Advobj::TAnchorEvent OnAnchorEnter = {read=FOnAnchorEnter, write=FOnAnchorEnter};
	__property Advobj::TAnchorEvent OnAnchorExit = {read=FOnAnchorExit, write=FOnAnchorExit};
	__property Advobj::TAnchorHintEvent OnAnchorHint = {read=FOnAnchorHint, write=FOnAnchorHint};
	__property TCellControlEvent OnControlClick = {read=FOnControlClick, write=FOnControlClick};
	__property TCellControlEvent OnControlEditDone = {read=FOnControlEditDone, write=FOnControlEditDone};
	__property TCellComboControlEvent OnControlComboList = {read=FOnControlComboList, write=FOnControlComboList};
	__property TCellComboControlSelectEvent OnControlComboSelect = {read=FOnControlComboSelect, write=FOnControlComboSelect};
	__property TClipboardEvent OnClipboardPaste = {read=FOnClipboardPaste, write=FOnClipboardPaste};
	__property TClipboardPasteDoneEvent OnClipboardPasteDone = {read=FOnClipboardPasteDone, write=FOnClipboardPasteDone};
	__property TClipboardEvent OnClipboardCopy = {read=FOnClipboardCopy, write=FOnClipboardCopy};
	__property TClipboardPasteDoneEvent OnClipboardCopyDone = {read=FOnClipboardCopyDone, write=FOnClipboardCopyDone};
	__property TClipboardEvent OnClipboardCut = {read=FOnClipboardCut, write=FOnClipboardCut};
	__property TClipboardPasteDoneEvent OnClipboardCutDone = {read=FOnClipboardCutDone, write=FOnClipboardCutDone};
	__property TAfterCellPasteEvent OnClipboardAfterPasteCell = {read=FOnClipboardAfterPasteCell, write=FOnClipboardAfterPasteCell};
	__property TAfterCellPasteWideEvent OnClipboardAfterPasteWideCell = {read=FOnClipboardAfterPasteWideCell, write=FOnClipboardAfterPasteWideCell};
	__property TBeforeCellPasteEvent OnClipboardBeforePasteCell = {read=FOnClipboardBeforePasteCell, write=FOnClipboardBeforePasteCell};
	__property TBeforeCellPasteWideEvent OnClipboardBeforePasteWideCell = {read=FOnClipboardBeforePasteWideCell, write=FOnClipboardBeforePasteWideCell};
	__property TCellValidateEvent OnCellValidate = {read=FOnCellValidate, write=FOnCellValidate};
	__property TCellValidateWideEvent OnCellValidateWide = {read=FOnCellValidateWide, write=FOnCellValidateWide};
	__property TCellsChangedEvent OnCellsChanged = {read=FOnCellsChanged, write=FOnCellsChanged};
	__property TGridProgressEvent OnFileProgress = {read=FOnFileProgress, write=FOnFileProgress};
	__property TGridProgressEvent OnFilterProgress = {read=FOnFilterProgress, write=FOnFilterProgress};
	__property TFilterEditUpdateEvent OnFilterEditDone = {read=FOnFilterEditDone, write=FOnFilterEditDone};
	__property TFilterEditUpdateEvent OnFilterEditUpdate = {read=FOnFilterEditUpdate, write=FOnFilterEditUpdate};
	__property THasComboEvent OnHasComboBox = {read=FOnHasComboBox, write=FOnHasComboBox};
	__property THasEditBtnEvent OnHasEditBtn = {read=FOnHasEditBtn, write=FOnHasEditBtn};
	__property THasFilterEditEvent OnHasFilterEdit = {read=FOnHasFilterEdit, write=FOnHasFilterEdit};
	__property THasSpinEditEvent OnHasSpinEdit = {read=FOnHasSpinEdit, write=FOnHasSpinEdit};
	__property THoverButtonsShowEvent OnHoverButtonsShow = {read=FOnHoverButtonsShow, write=FOnHoverButtonsShow};
	__property Advobj::TGetEditorTypeEvent OnGetEditorType = {read=FOnGetEditorType, write=FOnGetEditorType};
	__property TGetEditorPropEvent OnGetEditorProp = {read=FOnGetEditorProp, write=FOnGetEditorProp};
	__property Advobj::TFloatFormatEvent OnGetFloatFormat = {read=FOnGetFloatFormat, write=FOnGetFloatFormat};
	__property Advobj::TEllipsClickEvent OnEllipsClick = {read=FOnEllipsClick, write=FOnEllipsClick};
	__property System::Classes::TNotifyEvent OnIntelliZoom = {read=FOnIntelliZoom, write=FOnIntelliZoom};
	__property Advobj::TButtonClickEvent OnButtonClick = {read=FOnButtonClick, write=FOnButtonClick};
	__property Advobj::TCheckBoxCanToggleEvent OnCheckBoxCanToggle = {read=FOnCheckBoxCanToggle, write=FOnCheckBoxCanToggle};
	__property Advobj::TCheckBoxClickEvent OnCheckBoxChange = {read=FOnCheckBoxChange, write=FOnCheckBoxChange};
	__property Advobj::TCheckBoxClickEvent OnCheckBoxClick = {read=FOnCheckBoxClick, write=FOnCheckBoxClick};
	__property Advobj::TCheckBoxClickEvent OnCheckBoxMouseUp = {read=FOnCheckBoxMouseUp, write=FOnCheckBoxMouseUp};
	__property TColorSelectedEvent OnColorSelected = {read=FOnColorSelected, write=FOnColorSelected};
	__property TColorSelectEvent OnColorSelect = {read=FOnColorSelect, write=FOnColorSelect};
	__property TColDisjunctSelectEvent OnColDisjunctSelect = {read=FOnColDisjunctSelect, write=FOnColDisjunctSelect};
	__property TColDisjunctSelectedEvent OnColDisjunctSelected = {read=FOnColDisjunctSelected, write=FOnColDisjunctSelected};
	__property Advobj::TExpandClickEvent OnExpandClick = {read=FOnExpandClick, write=FOnExpandClick};
	__property TImageSelectedEvent OnImageSelected = {read=FOnImageSelected, write=FOnImageSelected};
	__property TImageSelectEvent OnImageSelect = {read=FOnImageSelect, write=FOnImageSelect};
	__property TRadioClickEvent OnRadioClick = {read=FOnRadioClick, write=FOnRadioClick};
	__property TRadioClickEvent OnRadioMouseUp = {read=FOnRadioMouseUp, write=FOnRadioMouseUp};
	__property TRadioButtonClickEvent OnRadioButtonClick = {read=FOnRadioButtonClick, write=FOnRadioButtonClick};
	__property Advobj::TClickCellEvent OnDatePickerCloseUp = {read=FOnDatePickerCloseUp, write=FOnDatePickerCloseUp};
	__property Advobj::TClickCellEvent OnDatePickerDropDown = {read=FOnDatePickerDropDown, write=FOnDatePickerDropDown};
	__property TComboChangeEvent OnComboChange = {read=FOnComboChange, write=FOnComboChange};
	__property Advobj::TClickCellEvent OnComboCloseUp = {read=FOnComboCloseUp, write=FOnComboCloseUp};
	__property Advobj::TClickCellEvent OnComboDropDown = {read=FOnComboDropDown, write=FOnComboDropDown};
	__property TComboObjectChangeEvent OnComboObjectChange = {read=FOnComboObjectChange, write=FOnComboObjectChange};
	__property Advobj::TSpinClickEvent OnSpinClick = {read=FOnSpinClick, write=FOnSpinClick};
	__property TFloatSpinClickEvent OnFloatSpinClick = {read=FOnFloatSpinClick, write=FOnFloatSpinClick};
	__property TDateTimeSpinClickEvent OnTimeSpinClick = {read=FOntimeSpinClick, write=FOntimeSpinClick};
	__property TDateTimeSpinClickEvent OnDateSpinClick = {read=FOnDateSpinClick, write=FOnDateSpinClick};
	__property System::Classes::TNotifyEvent OnRichEditSelectionChange = {read=FOnRichEditSelectionChange, write=FOnRichEditSelectionChange};
	__property TRowCountChangeEvent OnRowCountChange = {read=FOnRowCountChange, write=FOnRowCountChange};
	__property TDragScrollEvent OnDragScroll = {read=FOnDragScroll, write=FOnDragScroll};
	__property System::Classes::TNotifyEvent OnEditingDone = {read=FOnEditingDone, write=FOnEditingDone};
	__property TEditCellDoneEvent OnEditCellDone = {read=FOnEditCellDone, write=FOnEditCellDone};
	__property TEditChangeEvent OnEditChange = {read=FOnEditChange, write=FOnEditChange};
	__property TDateTimeChangeEvent OnDateTimeChange = {read=FOnDateTimeChange, write=FOnDateTimeChange};
	__property TFooterPaintEvent OnFooterPaint = {read=FOnPaintFooter, write=FOnPaintFooter};
	__property TCalcFooterEvent OnFooterCalc = {read=FOnCalcFooter, write=FOnCalcFooter};
	__property THoverButtonClickEvent OnHoverButtonClick = {read=FOnHoverButtonClick, write=FOnHoverButtonClick};
	__property TProgressColorEvent OnProgressColor = {read=FOnProgressColor, write=FOnProgressColor};
	__property System::Classes::TNotifyEvent OnResize = {read=FOnGridResize, write=FOnGridResize};
	__property TRowDisjunctSelectEvent OnRowDisjunctSelect = {read=FOnRowDisjunctSelect, write=FOnRowDisjunctSelect};
	__property Advobj::TAutoInsertRowEvent OnRowDisjunctSelected = {read=FOnRowDisjunctSelected, write=FOnRowDisjunctSelected};
	__property TSelectionChanged OnSelectionChanged = {read=FSelectionChanged, write=FSelectionChanged};
	__property TShowFilterEditEvent OnShowFilterEdit = {read=FOnShowFilterEdit, write=FOnShowFilterEdit};
	__property TUnitChangedEvent OnUnitChanged = {read=FOnUnitChanged, write=FOnUnitChanged};
	__property TOleDragDropEvent OnOleDrop = {read=FOnOleDrop, write=FOnOleDrop};
	__property TOleDroppedEvent OnOleDropped = {read=FOnOleDropped, write=FOnOleDropped};
	__property TOleDragDropEvent OnOleDrag = {read=FOnOleDrag, write=FOnOleDrag};
	__property TOleDragOverEvent OnOleDragOver = {read=FOnOleDragOver, write=FOnOleDragOver};
	__property TOleDragStartEvent OnOleDragStart = {read=FOnOleDragStart, write=FOnOleDragStart};
	__property TOleDragStopEvent OnOleDragStop = {read=FOnOleDragStop, write=FOnOleDragStop};
	__property TOleDropColEvent OnOleDropCol = {read=FOnOleDropCol, write=FOnOleDropCol};
	__property TOleDropFileEvent OnOleDropFile = {read=FOnOleDropFile, write=FOnOleDropFile};
	__property TOleDropFilesEvent OnOleDropFiles = {read=FOnOleDropFiles, write=FOnOleDropFiles};
	__property TOleDropURLEvent OnOleDropURL = {read=FOnOleDropURL, write=FOnOleDropURL};
	__property System::Classes::TNotifyEvent OnPainted = {read=FOnPainted, write=FOnPainted};
	__property TRatingChangeEvent OnRatingChange = {read=FOnRatingChange, write=FOnRatingChange};
	__property TDragDropSettings* DragDropSettings = {read=FDragDropSettings, write=FDragDropSettings};
	__property Advhintinfo::TAdvHintInfo* OfficeHint = {read=FOfficeHint, write=SetOfficeHint};
	__property System::Uitypes::TColor HighlightColor = {read=FHighlightColor, write=SetHighlightColor, default=-16777203};
	__property System::Uitypes::TColor HighlightTextColor = {read=FHighLightTextColor, write=SetHighlightTextColor, default=-16777202};
	__property System::Uitypes::TColor HintColor = {read=FHintColor, write=FHintColor, default=-16777192};
	__property bool HintShowCells = {read=FHintShowCells, write=FHintShowCells, default=0};
	__property bool HintShowLargeText = {read=FHintShowLargeText, write=FHintShowLargeText, default=0};
	__property THintShowLargeTextPos HintShowLargeTextPos = {read=FHintShowLargeTextPos, write=FHintShowLargeTextPos, default=0};
	__property bool HintShowSizing = {read=FHintShowSizing, write=FHintShowSizing, default=0};
	__property bool HTMLHint = {read=FHTMLHint, write=FHTMLHint, default=0};
	__property bool HTMLKeepLineBreak = {read=FHTMLKeepLinebreak, write=SetHTMLKeepLineBreak, default=1};
	__property Advobj::TScrollHintEvent OnScrollHint = {read=FOnScrollHint, write=FOnScrollHint};
	__property TChangeScaleEvent OnChangeScale = {read=FOnChangeScale, write=FOnChangeScale};
	__property Advobj::TColumnSizeEvent OnColumnSize = {read=FOnColumnSize, write=FOnColumnSize};
	__property Advobj::TColumnSizingEvent OnColumnSizing = {read=FOnColumnSizing, write=FOnColumnSizing};
	__property Advobj::TColumnSizeEvent OnColumnMove = {read=FOnColumnMove, write=FOnColumnMove};
	__property Advobj::TColumnSizeEvent OnColumnMoving = {read=FOnColumnMoving, write=FOnColumnMoving};
	__property Advobj::TRowSizeEvent OnRowSize = {read=FOnRowSize, write=FOnRowSize};
	__property Advobj::TRowSizingEvent OnRowSizing = {read=FOnRowSizing, write=FOnRowSizing};
	__property Advobj::TRowSizeEvent OnRowMove = {read=FOnRowMove, write=FOnRowMove};
	__property Advobj::TRowSizeEvent OnRowMoving = {read=FOnRowMoving, write=FOnRowMoving};
	__property Advobj::TEndColumnSizeEvent OnEndColumnSize = {read=FOnEndColumnSize, write=FOnEndColumnSize};
	__property Advobj::TUpdateColumnSizeEvent OnUpdateColumnSize = {read=FOnUpdateColumnSize, write=FOnUpdateColumnSize};
	__property Advobj::TEndRowSizeEvent OnEndRowSize = {read=FOnEndRowSize, write=FOnEndRowSize};
	__property TScrollCellEvent OnScrollCell = {read=FOnScrollCell, write=FOnScrollCell};
	__property TSelectionResizeEvent OnSelectionResize = {read=FSelectionResizeEvent, write=FSelectionResizeEvent};
	__property TSelectionResizeEvent OnSelectionResized = {read=FSelectionResizedEvent, write=FSelectionResizedEvent};
	__property System::Classes::TNotifyEvent OnCreatedFloatingFooter = {read=FOnCreatedFloatingFooter, write=FOnCreatedFloatingFooter};
	__property System::Classes::TNotifyEvent OnCreatedSearchFooter = {read=FOnCreatedSearchFooter, write=FOnCreatedSearchFooter};
	__property TCellSaveLoadEvent OnSaveCell = {read=FOnSaveCell, write=FOnSaveCell};
	__property TCellSaveLoadEvent OnLoadCell = {read=FOnLoadCell, write=FOnLoadCell};
	__property bool OemConvert = {read=FOemConvert, write=FOemConvert, default=0};
	__property bool AnchorHint = {read=FAnchorHint, write=FAnchorHint, default=0};
	__property bool ActiveCellShow = {read=FActiveCellShow, write=SetActiveCellShow, default=0};
	__property Vcl::Graphics::TFont* ActiveCellFont = {read=FActiveCellFont, write=SetActiveCellFont};
	__property System::Uitypes::TColor ActiveCellColor = {read=FActiveCellColor, write=SetActiveCellColor, default=8421504};
	__property System::Uitypes::TColor ActiveCellColorTo = {read=FActiveCellColorTo, write=SetActiveCellColorTo, default=536870911};
	__property TAutoColor* AutoColor = {read=FAutoColor, write=SetAutoColor};
	__property bool AutoHideSelection = {read=FAutoHideSelection, write=FAutoHideSelection, default=0};
	__property bool AutoNumAlign = {read=FAutoNumAlign, write=FAutoNumAlign, default=0};
	__property bool AutoSize = {read=FAutoSize, write=SetAutoSizeP, default=0};
	__property bool AutoThemeAdapt = {read=FAutoThemeAdapt, write=SetAutoThemeAdapt, default=0};
	__property bool AutoFilterUpdate = {read=FAutoFilterUpdate, write=FAutoFilterUpdate, default=1};
	__property TBalloonSettings* Balloon = {read=FBalloonSettings, write=SetBalloonSettings};
	__property Advobj::TBands* Bands = {read=FBands, write=FBands};
	__property TBackGround* BackGround = {read=FBackGround, write=SetBackground};
	__property System::Uitypes::TColor BorderColor = {read=FBorderColor, write=SetBorderColor, default=12164479};
	__property TCellNode* CellNode = {read=FCellNode, write=FCellNode};
	__property Asgcheck::TAdvStringGridCheck* CellChecker = {read=FCellChecker, write=SetCellChecker};
	__property int ColCount = {read=GetColCountEx, write=SetColCountEx, default=5};
	__property System::Classes::TStringList* ColumnHeaders = {read=FColumnHeaders, write=SetColumnHeaders};
	__property TColumnSize* ColumnSize = {read=FColumnSize, write=FColumnSize};
	__property TControlLook* ControlLook = {read=FControlLook, write=FControlLook};
	__property System::Uitypes::TCursor Cursor = {read=GetCursorEx, write=SetCursorEx, default=0};
	__property int DefaultRowHeight = {read=GetDefRowHeightEx, write=SetDefRowHeightEx, default=22};
	__property System::Classes::TAlignment DefaultAlignment = {read=FDefaultAlignment, write=SetDefaultAlignment, default=0};
	__property Advobj::TEditorType DefaultEditor = {read=FDefaultEditor, write=FDefaultEditor, default=0};
	__property System::Uitypes::TColor DisabledFontColor = {read=FDisabledFontColor, write=FDisabledFontColor, default=12632256};
	__property TDragScrollOptions* DragScrollOptions = {read=FDragScrollOptions, write=SetDragScrollOptions};
	__property bool EditWithTags = {read=FEditWithTags, write=FEditWithTags, default=0};
	__property bool EnableBlink = {read=FEnableBlink, write=FEnableBlink, default=0};
	__property bool EnableHTML = {read=FEnableHTML, write=FEnableHTML, default=1};
	__property bool EnableWheel = {read=FEnableWheel, write=FEnableWheel, default=1};
	__property bool EnhTextSize = {read=FEnhTextSize, write=FEnhTextSize, default=0};
	__property bool EnhRowColMove = {read=FEnhRowColMove, write=FEnhRowColMove, default=1};
	__property bool ExcelStyleDecimalSeparator = {read=FExcelStyleDecimalSeparator, write=FExcelStyleDecimalSeparator, default=0};
	__property TFilter* Filter = {read=FFilter, write=FFilter};
	__property bool FilterActive = {read=FFilterActive, write=SetFilterActive, default=0};
	__property TFilterDropDown* FilterDropDown = {read=FFilterDropDown, write=FFilterDropDown};
	__property bool FilterDropDownAuto = {read=FFilterDropDownAuto, write=SetFilterDropDownAuto, default=0};
	__property bool FilterDropDownMultiCol = {read=FFilterDropDownMultiCol, write=FFilterDropDownMultiCol, default=1};
	__property System::UnicodeString FilterDropDownClear = {read=FFilterDropDownClear, write=FFilterDropDownClear};
	__property bool FilterDropDownCheck = {read=FFilterDropDownCheck, write=FFilterDropDownCheck, default=0};
	__property System::UnicodeString FilterDropDownCheckUnCheckAll = {read=FFilterDropDownCheckUnCheckAll, write=FFilterDropDownCheckUnCheckAll};
	__property TFilterDropDownColumns FilterDropDownColumns = {read=FFilterDropDownColumns, write=FFilterDropDownColumns, default=0};
	__property int FilterDropDownRow = {read=FFilterRow, write=SetFilterRow, default=0};
	__property TFilterEdit* FilterEdit = {read=FFilterEdit, write=SetFilterEdit};
	__property bool FilterNormalCellsOnly = {read=FFilterNormalCellsOnly, write=FFilterNormalCellsOnly, default=1};
	__property TGridFilterType FilterType = {read=FFilterType, write=FFilterType, default=0};
	__property int FixedCols = {read=GetFixedColsEx, write=SetFixedColsEx, default=1};
	__property bool FixedAsButtons = {read=FFixedAsButtons, write=FFixedAsButtons, default=0};
	__property int FixedFooters = {read=FFixedFooters, write=SetFixedFooters, default=0};
	__property int FixedRightCols = {read=FFixedRightCols, write=SetFixedRightCols, default=0};
	__property int FixedColWidth = {read=GetFixedColWidth, write=SetFixedColWidth, default=64};
	__property Vcl::Menus::TPopupMenu* FixedDropDownMenu = {read=FFixedDropDownMenu, write=FFixedDropDownMenu};
	__property int FixedRowHeight = {read=GetFixedRowHeight, write=SetFixedRowHeight, default=21};
	__property bool FixedRowAlways = {read=FFixedRowAlways, write=FFixedRowAlways, default=0};
	__property int FixedRows = {read=GetFixedRowsEx, write=SetFixedRowsEx, default=1};
	__property bool FixedColAlways = {read=FFixedColAlways, write=FFixedColAlways, default=0};
	__property Vcl::Graphics::TFont* FixedFont = {read=FFixedFont, write=SetFixedFont};
	__property bool Flat = {read=FFlat, write=SetFlat, default=0};
	__property System::UnicodeString FloatFormat = {read=FFloatFormat, write=FFloatFormat};
	__property TFloatingFooter* FloatingFooter = {read=FFloatingFooter, write=FFloatingFooter};
	__property Advobj::TFocusHelper* FocusHelper = {read=FFocusHelper, write=SetFocusHelper};
	__property TFormatType FormatType = {read=FFormatType, write=SetFormatType, default=0};
	__property Vcl::Imglist::TCustomImageList* GridImages = {read=FGridImages, write=SetImages};
	__property TGrouping* Grouping = {read=FGrouping, write=FGrouping};
	__property bool HideFocusRect = {read=FHideFocusRect, write=FHideFocusRect, default=0};
	__property THoverButtons* HoverButtons = {read=FHoverButtons, write=SetHoverButtons};
	__property bool Hovering = {read=FHovering, write=SetHovering, default=0};
	__property THoverFixedCells HoverFixedCells = {read=FHoverFixedCells, write=FHoverFixedCells, default=0};
	__property THTMLSettings* HTMLSettings = {read=FHTMLSettings, write=FHTMLSettings};
	__property bool IntegralHeight = {read=FIntegralHeight, write=SetIntegralHeight, default=0};
	__property TIntelliPan IntelliPan = {read=FIntelliPan, write=FIntelliPan, default=0};
	__property bool IntelliZoom = {read=FIntelliZoom, write=FIntelliZoom, default=1};
	__property System::UnicodeString InvalidEntryTitle = {read=FInvalidEntryTitle, write=FInvalidEntryTitle};
	__property TInvalidEntryIcon InvalidEntryIcon = {read=FInvalidEntryIcon, write=FInvalidEntryIcon, default=2};
	__property System::UnicodeString InvalidEntryText = {read=FInvalidEntryText, write=FInvalidEntryText};
	__property TGridLook Look = {read=FLook, write=SetLook, default=4};
	__property System::Classes::TStringList* LookupItems = {read=FLookupItems, write=SetLookupItems};
	__property bool Lookup = {read=FLookup, write=FLookup, default=0};
	__property bool LookupCaseSensitive = {read=FLookupCaseSensitive, write=FLookupCaseSensitive, default=0};
	__property bool LookupHistory = {read=FLookupHistory, write=FLookupHistory, default=0};
	__property int MaxEditLength = {read=FMaxEditLength, write=SetMaxEditLength, default=0};
	__property int MaxComboLength = {read=FMaxComboLength, write=FMaxComboLength, default=0};
	__property Advobj::TMouseActions* MouseActions = {read=FMouseActions, write=FMouseActions};
	__property bool Multilinecells = {read=FMultilineCells, write=FMultilineCells, default=0};
	__property Advobj::TNavigation* Navigation = {read=FNavigation, write=FNavigation};
	__property Picturecontainer::TPictureContainer* PictureContainer = {read=FContainer, write=FContainer};
	__property TAdvGridPopup* PopupToolBar = {read=FToolBarPopup, write=FToolBarPopup};
	__property TPopupToolBarMode PopupToolBarMode = {read=FPopupToolBarMode, write=FPopupToolBarMode, default=0};
	__property TPrintSettings* PrintSettings = {read=FPrintSettings, write=FPrintSettings};
	__property TGridProgressAppearance* ProgressAppearance = {read=FProgressAppearance, write=SetProgressAppearance};
	__property int RowCount = {read=GetRowCountEx, write=SetRowCountEx, default=10};
	__property System::Classes::TStringList* RowHeaders = {read=FRowHeaders, write=SetRowHeaders};
	__property Vcl::Graphics::TBitmap* RowIndicator = {read=GetRowIndicator, write=SetRowIndicator};
	__property TScrollBarAlways ScrollBarAlways = {read=FScrollBarAlways, write=SetScrollBarAlways, default=0};
	__property System::Uitypes::TScrollStyle ScrollBars = {read=GetScrollBarsEx, write=SetScrollBarsEx, default=3};
	__property System::Uitypes::TColor ScrollColor = {read=FScrollColor, write=SetScrollColor, default=536870911};
	__property bool ScrollProportional = {read=FScrollProportional, write=SetScrollProportional, default=0};
	__property bool ScrollSynch = {read=FScrollSynch, write=FScrollSynch, default=0};
	__property TScrollType ScrollType = {read=FScrollType, write=SetScrollType, default=0};
	__property int ScrollWidth = {read=FScrollWidth, write=SetScrollWidth, default=17};
	__property TScrollHintType ScrollHints = {read=FScrollHints, write=SetScrollHints, default=0};
	__property Advobj::TSearchFooter* SearchFooter = {read=FSearchFooter, write=FSearchFooter};
	__property System::Uitypes::TColor SelectionColor = {read=FSelectionColor, write=SetSelectionColor, default=15387318};
	__property System::Uitypes::TColor SelectionColorTo = {read=FSelectionColorTo, write=SetSelectionColorTo, default=536870911};
	__property bool SelectionColorMixer = {read=FSelectionColorMixer, write=SetSelectionColorMixer, default=0};
	__property int SelectionColorMixerFactor = {read=FSelectionColorMixerFactor, write=SetSelectionColorMixerFactor, default=50};
	__property System::Uitypes::TColor SelectionMirrorColor = {read=FSelectionMirrorColor, write=SetSelectionMirrorColor, default=536870911};
	__property System::Uitypes::TColor SelectionMirrorColorTo = {read=FSelectionMirrorColorTo, write=SetSelectionMirrorColorTo, default=536870911};
	__property bool SelectionRectangle = {read=FSelectionRectangle, write=SetSelectionRectangle, default=0};
	__property bool SelectionResizer = {read=FSelectionResizer, write=SetSelectionResizer, default=0};
	__property bool SelectionRTFKeep = {read=FSelectionRTFKeep, write=FSelectionRTFKeep, default=0};
	__property System::Uitypes::TColor SelectionTextColor = {read=FSelectionTextColor, write=SetSelectionTextColor, default=0};
	__property bool ShowSelection = {read=FShowSelection, write=SetShowSelection, default=1};
	__property TShowModified* ShowModified = {read=FShowModified, write=SetShowModified};
	__property bool ShowDesignHelper = {read=FShowDesignHelper, write=SetShowDesignHelper, default=1};
	__property bool ShowFocusedSelectionColor = {read=FShowFocusedSelectionColor, write=FShowFocusedSelectionColor, default=1};
	__property TSizeWhileTyping* SizeWhileTyping = {read=FSizeWhileTyping, write=FSizeWhileTyping};
	__property bool SizeWithForm = {read=FSizeWithForm, write=SetSizeWithForm, default=0};
	__property TSortSettings* SortSettings = {read=FSortSettings, write=SetSortSettings};
	__property Advobj::TSyncGrid* SyncGrid = {read=FSyncGrid, write=SetSyncGrid};
	__property Advstyleif::TTMSStyle UIStyle = {read=FStyle, write=SetComponentStyle, default=8};
	__property System::Uitypes::TColor URLColor = {read=FURLColor, write=SetURLColor, default=16711680};
	__property bool URLShow = {read=FURLShow, write=SetURLShow, default=0};
	__property bool URLShowInText = {read=FURLShowInText, write=SetURLShowInText, default=0};
	__property bool URLUnderlineOnHover = {read=FURLUnderlineOnHover, write=FURLUnderlineOnHover, default=0};
	__property bool URLFull = {read=FURLFull, write=SetURLFull, default=0};
	__property bool URLEdit = {read=FURLEdit, write=FURLEdit, default=0};
	__property bool UseFixedFont = {read=FUseFixedFont, write=FUseFixedFont, default=1};
	__property bool UseInternalHintClass = {read=FUseInternalHintClass, write=FUseInternalHintClass, default=1};
	__property bool UseSelectionTextColor = {read=FUseSelectionTextColor, write=FUseSelectionTextColor, default=1};
	__property System::UnicodeString ValidChars = {read=FValidChars, write=FValidChars};
	__property Advobj::TVAlignment VAlignment = {read=FVAlignment, write=SetVAlignment, default=0};
	__property System::UnicodeString Version = {read=GetVersion, write=SetVersion};
	__property bool WordWrap = {read=GetWordWrapEx, write=SetWordWrapEx, default=1};
public:
	/* TWinControl.CreateParented */ inline __fastcall TAdvStringGrid(HWND ParentWindow) : Basegrid::TBaseGrid(ParentWindow) { }
	
	/* Hoisted overloads: */
	
protected:
	DYNAMIC inline void __fastcall  ChangeScale(int M, int D){ Basegrid::TBaseGrid::ChangeScale(M, D); }
	
private:
	void *__IAdvDataBinderGrid;	// Advutil::IAdvDataBinderGrid 
	void *__ITMSTones;	// Advstyleif::ITMSTones 
	void *__ITMSStyleEx;	// Advstyleif::ITMSStyleEx 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {D23BDEAA-49B1-451A-9401-0D0D11A9957A}
	operator Advutil::_di_IAdvDataBinderGrid()
	{
		Advutil::_di_IAdvDataBinderGrid intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Advutil::IAdvDataBinderGrid*(void) { return (Advutil::IAdvDataBinderGrid*)&__IAdvDataBinderGrid; }
	#endif
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
	// {037BA87F-7CBD-4FDD-854E-2B3F0BCC06AE}
	operator Advstyleif::_di_ITMSStyleEx()
	{
		Advstyleif::_di_ITMSStyleEx intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Advstyleif::ITMSStyleEx*(void) { return (Advstyleif::ITMSStyleEx*)&__ITMSStyleEx; }
	#endif
	
};


class PASCALIMPLEMENTATION TGridSLIO : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	System::Classes::TStringList* FStrings;
	
public:
	__fastcall virtual TGridSLIO(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TGridSLIO();
	
__published:
	__property System::Classes::TStringList* Strings = {read=FStrings, write=FStrings};
};


class PASCALIMPLEMENTATION TGridFilePicIO : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	Advobj::TFilePicture* FPicture;
	
public:
	__fastcall virtual TGridFilePicIO(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TGridFilePicIO();
	
__published:
	__property Advobj::TFilePicture* Picture = {read=FPicture, write=FPicture};
};


class PASCALIMPLEMENTATION TGridPicIO : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	Vcl::Graphics::TPicture* FPicture;
	
public:
	__fastcall virtual TGridPicIO(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TGridPicIO();
	
__published:
	__property Vcl::Graphics::TPicture* Picture = {read=FPicture, write=FPicture};
};


class PASCALIMPLEMENTATION TGridIconIO : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	Vcl::Graphics::TIcon* FIcon;
	
public:
	__fastcall virtual TGridIconIO(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TGridIconIO();
	
__published:
	__property Vcl::Graphics::TIcon* Icon = {read=FIcon, write=FIcon};
};


class PASCALIMPLEMENTATION TGridBMPIO : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	Vcl::Graphics::TBitmap* FBitmap;
	
public:
	__fastcall virtual TGridBMPIO(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TGridBMPIO();
	
__published:
	__property Vcl::Graphics::TBitmap* Bitmap = {read=FBitmap, write=FBitmap};
};


class PASCALIMPLEMENTATION TGridPropIO : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	int FColCount;
	int FRowCount;
	System::UnicodeString FColWidths;
	System::UnicodeString FRowHeights;
	bool FFullGrid;
	int FID;
	
__published:
	__property int ColCount = {read=FColCount, write=FColCount, nodefault};
	__property int RowCount = {read=FRowCount, write=FRowCount, nodefault};
	__property System::UnicodeString ColWidths = {read=FColWidths, write=FColWidths};
	__property System::UnicodeString RowHeights = {read=FRowHeights, write=FRowHeights};
	__property bool FullGrid = {read=FFullGrid, write=FFullGrid, nodefault};
	__property int ID = {read=FID, write=FID, nodefault};
public:
	/* TComponent.Create */ inline __fastcall virtual TGridPropIO(System::Classes::TComponent* AOwner) : System::Classes::TComponent(AOwner) { }
	/* TComponent.Destroy */ inline __fastcall virtual ~TGridPropIO() { }
	
};


class PASCALIMPLEMENTATION TGridGraphicIO : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	TBaseCellGraphic* FCellGraphic;
	
public:
	__fastcall virtual TGridGraphicIO(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TGridGraphicIO();
	
__published:
	__property TBaseCellGraphic* CellGraphic = {read=FCellGraphic, write=FCellGraphic};
};


class PASCALIMPLEMENTATION TGridCellPropIO : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	Basegrid::TCellProperties* FCellProperties;
	bool FHasGraphic;
	
public:
	__fastcall virtual TGridCellPropIO(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TGridCellPropIO();
	
__published:
	__property Basegrid::TCellProperties* CellProperties = {read=FCellProperties, write=FCellProperties};
	__property bool HasGraphic = {read=FHasGraphic, write=FHasGraphic, nodefault};
};


class PASCALIMPLEMENTATION TGridCellIO : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	System::Word FRow;
	System::Word FCol;
	System::UnicodeString FCell;
	bool FHasProp;
	
public:
	__fastcall virtual TGridCellIO(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TGridCellIO();
	
__published:
	__property System::Word Col = {read=FCol, write=FCol, nodefault};
	__property System::Word Row = {read=FRow, write=FRow, nodefault};
	__property System::UnicodeString Cell = {read=FCell, write=FCell};
	__property bool HasProp = {read=FHasProp, write=FHasProp, nodefault};
};


//-- var, const, procedure ---------------------------------------------------
static const System::Word RTF_TWIPS = System::Word(0x5a0);
static const System::Int8 SEARCHFOOTERHEIGHT = System::Int8(0x22);
static const System::Int8 MAJ_VER = System::Int8(0x8);
static const System::Int8 MIN_VER = System::Int8(0x6);
static const System::Int8 REL_VER = System::Int8(0x9);
static const System::Int8 BLD_VER = System::Int8(0x0);
#define DATE_VER L"Nov, 2021"
extern DELPHI_PACKAGE System::Word CF_GRIDCELLS;
extern DELPHI_PACKAGE System::Word WM_GRIDEDITDONE;
extern DELPHI_PACKAGE System::Word WM_GRIDEDITSHOW;
extern DELPHI_PACKAGE System::Word WM_GRIDEDITINVALID;
extern DELPHI_PACKAGE System::Word WM_EDITPROP;
extern DELPHI_PACKAGE System::Word WM_DTPSHIFTFOCUS;
extern DELPHI_PACKAGE System::Word WM_FILTEREDITUPDATE;
extern DELPHI_PACKAGE void __fastcall HookAdvStringGrid(void);
extern DELPHI_PACKAGE void __fastcall UnhookAdvStringGrid(void);
extern DELPHI_PACKAGE Vcl::Grids::TGridCoord __fastcall GridCoord(int x, int y);
extern DELPHI_PACKAGE Vcl::Grids::TGridRect __fastcall GridRect(int FromCol, int FromRow, int ToCol, int ToRow);
}	/* namespace Advgrid */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ADVGRID)
using namespace Advgrid;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AdvgridHPP
