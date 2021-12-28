// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AdvObj.pas' rev: 35.00 (Windows)

#ifndef AdvobjHPP
#define AdvobjHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Vcl.Controls.hpp>
#include <System.Types.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Dialogs.hpp>
#include <System.Classes.hpp>
#include <Winapi.Messages.hpp>
#include <System.SysUtils.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Grids.hpp>
#include <AdvStyleIF.hpp>
#include <AdvHintInfo.hpp>
#include <AdvXPVS.hpp>
#include <System.UITypes.hpp>
#include <Vcl.ActnList.hpp>
#include <System.Actions.hpp>

//-- user supplied -----------------------------------------------------------

namespace Advobj
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TObjStringGrid;
class DELPHICLASS TArrowWindow;
class DELPHICLASS TPopupButton;
class DELPHICLASS TIntList;
class DELPHICLASS TSortIndexList;
class DELPHICLASS TControlItem;
class DELPHICLASS TAdvControlList;
class DELPHICLASS TFilePicture;
class DELPHICLASS TAdvGridButtonActionLink;
class DELPHICLASS TAdvGridButton;
class DELPHICLASS TFileStringList;
class DELPHICLASS TAdvCheckBox;
class DELPHICLASS TSearchFooter;
class DELPHICLASS TNavigation;
class DELPHICLASS TMouseActions;
class DELPHICLASS TSyncGrid;
class DELPHICLASS TBands;
class DELPHICLASS TGridFocusWindow;
class DELPHICLASS TGridAlphaMask;
class DELPHICLASS TFocusHelper;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TObjStringGrid : public Vcl::Grids::TStringGrid
{
	typedef Vcl::Grids::TStringGrid inherited;
	
public:
	/* TStringGrid.Create */ inline __fastcall virtual TObjStringGrid(System::Classes::TComponent* AOwner) : Vcl::Grids::TStringGrid(AOwner) { }
	/* TStringGrid.Destroy */ inline __fastcall virtual ~TObjStringGrid() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TObjStringGrid(HWND ParentWindow) : Vcl::Grids::TStringGrid(ParentWindow) { }
	
};


enum DECLSPEC_DENUM TEditorType : unsigned char { edNormal, edSpinEdit, edComboEdit, edComboList, edEditBtn, edCheckBox, edDateEdit, edDateEditUpDown, edTimeEdit, edButton, edDataCheckBox, edNumeric, edPositiveNumeric, edFloat, edCapital, edMixedCase, edPassword, edUnitEditBtn, edLowerCase, edUpperCase, edFloatSpinEdit, edTimeSpinEdit, edDateSpinEdit, edNumericEditBtn, edFloatEditBtn, edCustom, edRichEdit, edNone, edDateTimeEdit, edValidChars, edTrackbarDropDown, edMemoDropDown, edCalculatorDropDown, edTimePickerDropDown, edDetailDropDown, edGridDropDown, edColorPickerDropDown, edImagePickerDropDown, edAdvGridDropDown, edControlDropDown, edPositiveFloat, edNumericUnitEditBtn, edFloatUnitEditBtn, edMaskEditBtn };

enum DECLSPEC_DENUM TNarrowDownOption : unsigned char { ndCaseSensitive, ndRemoveAccented };

typedef System::Set<TNarrowDownOption, TNarrowDownOption::ndCaseSensitive, TNarrowDownOption::ndRemoveAccented> TNarrowDownOptions;

enum DECLSPEC_DENUM TCellBorder : unsigned char { cbTop, cbLeft, cbRight, cbBottom };

typedef System::Set<TCellBorder, TCellBorder::cbTop, TCellBorder::cbBottom> TCellBorders;

enum DECLSPEC_DENUM TCellGradientDirection : unsigned char { GradientVertical, GradientHorizontal };

typedef void __fastcall (__closure *TGetDisplTextEvent)(System::TObject* Sender, int ACol, int ARow, System::UnicodeString &Value);

typedef void __fastcall (__closure *TFloatFormatEvent)(System::TObject* Sender, int ACol, int ARow, bool &IsFloat, System::UnicodeString &FloatFormat);

typedef void __fastcall (__closure *TOnResizeEvent)(System::TObject* Sender);

typedef void __fastcall (__closure *TColumnSizeEvent)(System::TObject* Sender, int ACol, bool &Allow);

typedef void __fastcall (__closure *TColumnSizingEvent)(System::TObject* Sender, int ACol, int ColumnSize);

typedef void __fastcall (__closure *TRowSizingEvent)(System::TObject* Sender, int ARow, int RowSize);

typedef void __fastcall (__closure *TRowSizeEvent)(System::TObject* Sender, int ARow, bool &Allow);

typedef void __fastcall (__closure *TEndColumnSizeEvent)(System::TObject* Sender, int ACol);

typedef void __fastcall (__closure *TUpdateColumnSizeEvent)(System::TObject* Sender, int ACol, int &AWidth);

typedef void __fastcall (__closure *TEndRowSizeEvent)(System::TObject* Sender, int ARow);

typedef void __fastcall (__closure *TClickCellEvent)(System::TObject* Sender, int ARow, int ACol);

typedef void __fastcall (__closure *TDblClickCellEvent)(System::TObject* Sender, int ARow, int ACol);

typedef void __fastcall (__closure *TCanEditCellEvent)(System::TObject* Sender, int ARow, int ACol, bool &CanEdit);

typedef void __fastcall (__closure *TScrollHintEvent)(System::TObject* Sender, int ARow, System::UnicodeString &hintstr);

typedef void __fastcall (__closure *TButtonClickEvent)(System::TObject* Sender, int ACol, int ARow);

typedef void __fastcall (__closure *TExpandClickEvent)(System::TObject* Sender, int ACol, int ARow, bool Expanded);

typedef void __fastcall (__closure *TCheckBoxClickEvent)(System::TObject* Sender, int ACol, int ARow, bool State);

typedef void __fastcall (__closure *TCheckBoxCanToggleEvent)(System::TObject* Sender, int ACol, int ARow, bool State, bool &Allow);

typedef void __fastcall (__closure *TGetEditorTypeEvent)(System::TObject* Sender, int ACol, int ARow, TEditorType &AEditor);

enum DECLSPEC_DENUM TSortStyle : unsigned char { ssAutomatic, ssAlphabetic, ssNumeric, ssDate, ssAlphaNoCase, ssAlphaCase, ssShortDateEU, ssShortDateUS, ssCustom, ssFinancial, ssAnsiAlphaCase, ssAnsiAlphaNoCase, ssRaw, ssHTML, ssImages, ssCheckBox, ssDateTime, ssTime, ssAlphaNumeric, ssAlphaNumericNoCase, ssNatural, ssVarDate };

enum DECLSPEC_DENUM TVAlignment : unsigned char { vtaTop, vtaCenter, vtaBottom };

typedef void __fastcall (__closure *TCustomCellDrawEvent)(System::TObject* Sender, Vcl::Graphics::TCanvas* Canvas, int ACol, int ARow, Vcl::Grids::TGridDrawState AState, const System::Types::TRect &ARect, bool Printing);

typedef TVAlignment TAsgVAlignment;

typedef void __fastcall (__closure *TAnchorClickEvent)(System::TObject* Sender, int ARow, int ACol, System::UnicodeString Anchor, bool &AutoHandle);

typedef void __fastcall (__closure *TAnchorHintEvent)(System::TObject* Sender, int ARow, int ACol, System::UnicodeString &Anchor);

typedef void __fastcall (__closure *TAnchorEvent)(System::TObject* Sender, int ARow, int ACol, System::UnicodeString Anchor);

typedef void __fastcall (__closure *TClickSortEvent)(System::TObject* Sender, int ACol);

typedef void __fastcall (__closure *TCanSortEvent)(System::TObject* Sender, int ACol, bool &DoSort);

typedef void __fastcall (__closure *TCustomCompareEvent)(System::TObject* Sender, System::UnicodeString str1, System::UnicodeString str2, int &Res);

typedef void __fastcall (__closure *TRawCompareEvent)(System::TObject* Sender, int ACol, int Row1, int Row2, int &Res);

typedef void __fastcall (__closure *TGridFormatEvent)(System::TObject* Sender, int ACol, TSortStyle &AStyle, System::UnicodeString &aPrefix, System::UnicodeString &aSuffix);

typedef void __fastcall (__closure *TGridColorEvent)(System::TObject* Sender, int ARow, int ACol, Vcl::Grids::TGridDrawState AState, Vcl::Graphics::TBrush* ABrush, Vcl::Graphics::TFont* AFont);

typedef void __fastcall (__closure *TGridGradientEvent)(System::TObject* Sender, int ARow, int ACol, System::Uitypes::TColor &Color, System::Uitypes::TColor &ColorTo, System::Uitypes::TColor &ColorMirror, System::Uitypes::TColor &ColorMirrorTo, TCellGradientDirection &GD);

typedef void __fastcall (__closure *TGridBorderEvent)(System::TObject* Sender, int ARow, int ACol, Vcl::Graphics::TPen* APen, TCellBorders &Borders);

typedef void __fastcall (__closure *TGridBorderPropEvent)(System::TObject* Sender, int ARow, int ACol, Vcl::Graphics::TPen* LeftPen, Vcl::Graphics::TPen* TopPen, Vcl::Graphics::TPen* RightPen, Vcl::Graphics::TPen* BottomPen);

typedef void __fastcall (__closure *TGridAlignEvent)(System::TObject* Sender, int ARow, int ACol, System::Classes::TAlignment &HAlign, TVAlignment &VAlign);

typedef void __fastcall (__closure *TGridHintEvent)(System::TObject* Sender, int ARow, int ACol, System::UnicodeString &hintstr);

typedef void __fastcall (__closure *TEllipsClickEvent)(System::TObject* Sender, int ACol, int ARow, System::UnicodeString &S);

typedef void __fastcall (__closure *TGridBalloonEvent)(System::TObject* Sender, int ACol, int ARow, System::UnicodeString &ATitle, System::UnicodeString &AText, int &AIcon);

typedef void __fastcall (__closure *TCanInsertRowEvent)(System::TObject* Sender, int ARow, bool &CanInsert);

typedef void __fastcall (__closure *TAutoInsertRowEvent)(System::TObject* Sender, int ARow);

typedef void __fastcall (__closure *TCanAddRowEvent)(System::TObject* Sender, bool &CanAdd);

typedef void __fastcall (__closure *TCanAddColEvent)(System::TObject* Sender, bool &CanAdd);

typedef void __fastcall (__closure *TAutoAddRowEvent)(System::TObject* Sender, int ARow);

typedef void __fastcall (__closure *TCanDeleteRowEvent)(System::TObject* Sender, int ARow, bool &CanDelete);

typedef void __fastcall (__closure *TAutoDeleteRowEvent)(System::TObject* Sender, int ARow);

typedef void __fastcall (__closure *TAutoInsertColEvent)(System::TObject* Sender, int ACol);

typedef void __fastcall (__closure *TSearchEditChangeEvent)(System::TObject* Sender, System::UnicodeString Value, bool &DefaultSearch);

typedef void __fastcall (__closure *TSpinClickEvent)(System::TObject* Sender, int ACol, int ARow, int AValue, bool UpDown);

typedef void __fastcall (__closure *TOfficeHintEvent)(System::TObject* Sender, int ACol, int ARow, Advhintinfo::TAdvHintInfo* OfficeHint);

enum DECLSPEC_DENUM TArrowDirection : unsigned char { arrUp, arrDown, arrLeft, arrRight };

enum DECLSPEC_DENUM TAdvGridButtonStyle : unsigned char { tasButton, tasCheck };

typedef void __fastcall (__closure *TImageChangeEvent)(System::TObject* Sender, int Acol, int Arow);

class PASCALIMPLEMENTATION TArrowWindow : public Vcl::Extctrls::TPanel
{
	typedef Vcl::Extctrls::TPanel inherited;
	
private:
	TArrowDirection Dir;
	System::StaticArray<System::Types::TPoint, 9> Arrow;
	
public:
	__fastcall TArrowWindow(System::Classes::TComponent* AOwner, TArrowDirection direction);
	virtual void __fastcall Loaded();
	
protected:
	virtual void __fastcall CreateWnd();
	virtual void __fastcall Paint();
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
public:
	/* TCustomPanel.Create */ inline __fastcall virtual TArrowWindow(System::Classes::TComponent* AOwner) : Vcl::Extctrls::TPanel(AOwner) { }
	
public:
	/* TCustomControl.Destroy */ inline __fastcall virtual ~TArrowWindow() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TArrowWindow(HWND ParentWindow) : Vcl::Extctrls::TPanel(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TPopupButton : public Vcl::Controls::TCustomControl
{
	typedef Vcl::Controls::TCustomControl inherited;
	
private:
	System::UnicodeString FCaption;
	Vcl::Imglist::TCustomImageList* FImages;
	bool FFlat;
	System::Uitypes::TColor FGradTo;
	System::Uitypes::TColor FGradFrom;
	System::Uitypes::TColor FGradMirrorTo;
	System::Uitypes::TColor FGradMirrorFrom;
	
protected:
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	
public:
	__fastcall virtual TPopupButton(System::Classes::TComponent* AOwner);
	virtual void __fastcall Paint();
	virtual void __fastcall CreateWnd();
	__property Vcl::Imglist::TCustomImageList* Images = {read=FImages, write=FImages};
	
__published:
	__property System::UnicodeString Caption = {read=FCaption, write=FCaption};
	__property bool Flat = {read=FFlat, write=FFlat, nodefault};
	__property System::Uitypes::TColor GradFrom = {read=FGradFrom, write=FGradFrom, nodefault};
	__property System::Uitypes::TColor GradTo = {read=FGradTo, write=FGradTo, nodefault};
	__property System::Uitypes::TColor GradMirrorFrom = {read=FGradMirrorFrom, write=FGradMirrorFrom, nodefault};
	__property System::Uitypes::TColor GradMirrorTo = {read=FGradMirrorTo, write=FGradMirrorTo, nodefault};
public:
	/* TCustomControl.Destroy */ inline __fastcall virtual ~TPopupButton() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TPopupButton(HWND ParentWindow) : Vcl::Controls::TCustomControl(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TIntList : public System::Classes::TList
{
	typedef System::Classes::TList inherited;
	
public:
	int operator[](int index) { return this->Items[index]; }
	
private:
	TImageChangeEvent FOnChange;
	int FCol;
	int FRow;
	int FTag;
	void __fastcall SetInteger(int Index, int Value);
	int __fastcall GetInteger(int Index);
	System::UnicodeString __fastcall GetStrValue();
	void __fastcall SetStrValue(const System::UnicodeString Value);
	
public:
	__fastcall TIntList(int Col, int Row);
	__fastcall virtual ~TIntList();
	virtual void __fastcall Clear();
	void __fastcall DeleteValue(int Value);
	bool __fastcall HasValue(int Value);
	int __fastcall SortedIndexOf(int Value);
	int __fastcall SortedPosOf(int Value);
	__property int Items[int index] = {read=GetInteger, write=SetInteger/*, default*/};
	HIDESBASE void __fastcall Add(int Value);
	HIDESBASE void __fastcall Insert(int Index, int Value)/* overload */;
	HIDESBASE void __fastcall Delete(int Index);
	HIDESBASE void __fastcall Insert(int Value)/* overload */;
	__property System::UnicodeString StrValue = {read=GetStrValue, write=SetStrValue};
	__property TImageChangeEvent OnChange = {read=FOnChange, write=FOnChange};
};


class PASCALIMPLEMENTATION TSortIndexList : public TIntList
{
	typedef TIntList inherited;
	
private:
	int __fastcall GetSortColumns(int i);
	bool __fastcall GetSortDirections(int i);
	void __fastcall SetSortColumns(int i, const int Value);
	void __fastcall SetSortDirections(int i, const bool Value);
	
public:
	System::UnicodeString __fastcall SaveToString();
	void __fastcall LoadFromString(System::UnicodeString s);
	void __fastcall AddIndex(int ColumnIndex, bool Ascending);
	int __fastcall FindIndex(int ColumnIndex);
	void __fastcall ToggleIndex(int ColumnIndex);
	__property int SortColumns[int i] = {read=GetSortColumns, write=SetSortColumns};
	__property bool SortDirections[int i] = {read=GetSortDirections, write=SetSortDirections};
public:
	/* TIntList.Create */ inline __fastcall TSortIndexList(int Col, int Row) : TIntList(Col, Row) { }
	/* TIntList.Destroy */ inline __fastcall virtual ~TSortIndexList() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TControlItem : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	int FX;
	int FY;
	Vcl::Controls::TControl* FObject;
	
public:
	__fastcall TControlItem(int AX, int AY, Vcl::Controls::TControl* AObject);
	__property int X = {read=FX, write=FX, nodefault};
	__property int Y = {read=FY, write=FY, nodefault};
	__property Vcl::Controls::TControl* Control = {read=FObject, write=FObject};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TControlItem() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAdvControlList : public System::Classes::TList
{
	typedef System::Classes::TList inherited;
	
private:
	TControlItem* __fastcall GetControl(int i);
	
public:
	void __fastcall ClearControls();
	void __fastcall AddControl(int X, int Y, Vcl::Controls::TControl* AObject);
	void __fastcall RemoveControl(int i);
	int __fastcall ControlIndex(int X, int Y);
	__property TControlItem* Control[int i] = {read=GetControl};
	__fastcall virtual ~TAdvControlList();
	bool __fastcall HasHandle(NativeUInt Handle);
public:
	/* TObject.Create */ inline __fastcall TAdvControlList() : System::Classes::TList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TFilePicture : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	System::UnicodeString FFilename;
	int FWidth;
	int FHeight;
	Vcl::Graphics::TPicture* FPicture;
	void __fastcall SetFileName(const System::UnicodeString Value);
	
public:
	void __fastcall DrawPicture(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &r);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property System::UnicodeString Filename = {read=FFilename, write=SetFileName};
	__property int Width = {read=FWidth, nodefault};
	__property int Height = {read=FHeight, nodefault};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TFilePicture() { }
	
public:
	/* TObject.Create */ inline __fastcall TFilePicture() : System::Classes::TPersistent() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TAdvGridButtonActionLink : public Vcl::Controls::TControlActionLink
{
	typedef Vcl::Controls::TControlActionLink inherited;
	
protected:
	TAdvGridButton* FClient;
	virtual void __fastcall AssignClient(System::TObject* AClient);
	virtual bool __fastcall IsCaptionLinked();
	virtual bool __fastcall IsCheckedLinked();
	virtual bool __fastcall IsGroupIndexLinked();
	virtual void __fastcall SetGroupIndex(int Value);
	virtual void __fastcall SetChecked(bool Value);
	virtual void __fastcall SetCaption(const System::UnicodeString Value);
public:
	/* TBasicActionLink.Create */ inline __fastcall virtual TAdvGridButtonActionLink(System::TObject* AClient) : Vcl::Controls::TControlActionLink(AClient) { }
	/* TBasicActionLink.Destroy */ inline __fastcall virtual ~TAdvGridButtonActionLink() { }
	
};


class PASCALIMPLEMENTATION TAdvGridButton : public Vcl::Controls::TGraphicControl
{
	typedef Vcl::Controls::TGraphicControl inherited;
	
private:
	bool FIsComCtl6;
	int FGroupIndex;
	Vcl::Graphics::TBitmap* FGlyph;
	bool FDown;
	bool FDragging;
	bool FAllowAllUp;
	Vcl::Buttons::TButtonLayout FLayout;
	int FSpacing;
	bool FTransparent;
	int FMargin;
	bool FFlat;
	bool FMouseInControl;
	System::Uitypes::TColor FColorTo;
	System::Uitypes::TColor FColorHot;
	System::Uitypes::TColor FColorHotTo;
	System::Uitypes::TColor FColorDown;
	System::Uitypes::TColor FColorDownTo;
	System::Uitypes::TColor FBorderColor;
	System::Uitypes::TColor FBorderDownColor;
	System::Uitypes::TColor FBorderHotColor;
	Vcl::Graphics::TBitmap* FGlyphDisabled;
	Vcl::Graphics::TBitmap* FGlyphHot;
	Vcl::Graphics::TBitmap* FGlyphDown;
	Vcl::Graphics::TBitmap* FGlyphShade;
	bool FShaded;
	System::Classes::TNotifyEvent FOnMouseLeave;
	System::Classes::TNotifyEvent FOnMouseEnter;
	System::Uitypes::TColor FColorChecked;
	System::Uitypes::TColor FColorCheckedTo;
	TAdvGridButtonStyle FStyle;
	int FLook;
	bool FRounded;
	bool FDropDownButton;
	bool FAutoThemeAdapt;
	bool FAutoXPStyle;
	System::Classes::TNotifyEvent FOnDropDown;
	Vcl::Menus::TPopupMenu* FDropDownMenu;
	bool FShowCaption;
	void __fastcall GlyphChanged(System::TObject* Sender);
	void __fastcall UpdateExclusive();
	void __fastcall SetGlyph(Vcl::Graphics::TBitmap* Value);
	void __fastcall SetDown(bool Value);
	void __fastcall SetFlat(bool Value);
	void __fastcall SetAllowAllUp(bool Value);
	void __fastcall SetGroupIndex(int Value);
	void __fastcall SetLayout(Vcl::Buttons::TButtonLayout Value);
	void __fastcall SetSpacing(int Value);
	void __fastcall SetMargin(int Value);
	void __fastcall UpdateTracking();
	HIDESBASE MESSAGE void __fastcall WMLButtonDblClk(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall CMEnabledChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMButtonPressed(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMDialogChar(Winapi::Messages::TWMKey &Message);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMTextChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMSysColorChange(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Winapi::Messages::TMessage &Message);
	void __fastcall SetGlyphDisabled(Vcl::Graphics::TBitmap* const Value);
	void __fastcall SetGlyphDown(Vcl::Graphics::TBitmap* const Value);
	void __fastcall SetGlyphHot(Vcl::Graphics::TBitmap* const Value);
	void __fastcall GenerateShade();
	void __fastcall SetShaded(const bool Value);
	void __fastcall SetColorTo(const System::Uitypes::TColor Value);
	void __fastcall SetColorChecked(const System::Uitypes::TColor Value);
	void __fastcall SetColorCheckedTo(const System::Uitypes::TColor Value);
	void __fastcall SetStyle(const TAdvGridButtonStyle Value);
	void __fastcall SetRounded(const bool Value);
	void __fastcall SetDropDownButton(const bool Value);
	void __fastcall SetShowCaption(const bool Value);
	void __fastcall SetBorderColor(const System::Uitypes::TColor Value);
	void __fastcall SetLook(const int Value);
	System::Uitypes::TColor __fastcall GetColor();
	HIDESBASE void __fastcall SetColor(const System::Uitypes::TColor Value);
	
protected:
	Vcl::Buttons::TButtonState FState;
	DYNAMIC Vcl::Controls::TControlActionLinkClass __fastcall GetActionLinkClass();
	virtual void __fastcall Loaded();
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall DrawButtonGlyph(Vcl::Graphics::TCanvas* Canvas, const System::Types::TPoint &GlyphPos, Vcl::Buttons::TButtonState State, bool Transparent);
	void __fastcall DrawButtonText(Vcl::Graphics::TCanvas* Canvas, const System::UnicodeString Caption, const System::Types::TRect &TextBounds, Vcl::Buttons::TButtonState State, int BiDiFlags, bool Shadow);
	System::Types::TRect __fastcall DrawButton(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &Client, const System::Types::TPoint &Offset, const System::UnicodeString Caption, Vcl::Buttons::TButtonLayout Layout, int Margin, int Spacing, Vcl::Buttons::TButtonState State, bool Transparent, int BiDiFlags, bool Shadow);
	void __fastcall CalcButtonLayout(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &Client, const System::Types::TPoint &Offset, const System::UnicodeString Caption, Vcl::Buttons::TButtonLayout Layout, int Margin, int Spacing, System::Types::TPoint &GlyphPos, System::Types::TRect &TextBounds, int BiDiFlags);
	virtual void __fastcall Paint();
	__property bool MouseInControl = {read=FMouseInControl, nodefault};
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation AOperation);
	void __fastcall ThemeAdapt();
	void __fastcall SetAutoThemeAdapt(const bool Value);
	
public:
	__fastcall virtual TAdvGridButton(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TAdvGridButton();
	DYNAMIC void __fastcall Click();
	__property int Look = {read=FLook, write=SetLook, nodefault};
	
__published:
	__property Action;
	__property bool AllowAllUp = {read=FAllowAllUp, write=SetAllowAllUp, default=0};
	__property Anchors = {default=3};
	__property bool AutoThemeAdapt = {read=FAutoThemeAdapt, write=SetAutoThemeAdapt, nodefault};
	__property bool AutoXPStyle = {read=FAutoXPStyle, write=FAutoXPStyle, nodefault};
	__property BiDiMode;
	__property System::Uitypes::TColor BorderColor = {read=FBorderColor, write=SetBorderColor, default=536870911};
	__property System::Uitypes::TColor BorderDownColor = {read=FBorderDownColor, write=FBorderDownColor, default=536870911};
	__property System::Uitypes::TColor BorderHotColor = {read=FBorderHotColor, write=FBorderHotColor, default=536870911};
	__property System::Uitypes::TColor Color = {read=GetColor, write=SetColor, default=-16777201};
	__property System::Uitypes::TColor ColorTo = {read=FColorTo, write=SetColorTo, default=536870911};
	__property System::Uitypes::TColor ColorDown = {read=FColorDown, write=FColorDown, nodefault};
	__property System::Uitypes::TColor ColorDownTo = {read=FColorDownTo, write=FColorDownTo, default=536870911};
	__property System::Uitypes::TColor ColorHot = {read=FColorHot, write=FColorHot, nodefault};
	__property System::Uitypes::TColor ColorHotTo = {read=FColorHotTo, write=FColorHotTo, default=536870911};
	__property System::Uitypes::TColor ColorChecked = {read=FColorChecked, write=SetColorChecked, default=8421504};
	__property System::Uitypes::TColor ColorCheckedTo = {read=FColorCheckedTo, write=SetColorCheckedTo, default=536870911};
	__property Constraints;
	__property int GroupIndex = {read=FGroupIndex, write=SetGroupIndex, default=0};
	__property bool Down = {read=FDown, write=SetDown, default=0};
	__property bool DropDownButton = {read=FDropDownButton, write=SetDropDownButton, default=0};
	__property Vcl::Menus::TPopupMenu* DropDownMenu = {read=FDropDownMenu, write=FDropDownMenu};
	__property Caption = {default=0};
	__property Enabled = {default=1};
	__property bool Flat = {read=FFlat, write=SetFlat, default=1};
	__property Font;
	__property Vcl::Graphics::TBitmap* Glyph = {read=FGlyph, write=SetGlyph};
	__property Vcl::Graphics::TBitmap* GlyphHot = {read=FGlyphHot, write=SetGlyphHot};
	__property Vcl::Graphics::TBitmap* GlyphDown = {read=FGlyphDown, write=SetGlyphDown};
	__property Vcl::Graphics::TBitmap* GlyphDisabled = {read=FGlyphDisabled, write=SetGlyphDisabled};
	__property Vcl::Buttons::TButtonLayout Layout = {read=FLayout, write=SetLayout, default=0};
	__property int Margin = {read=FMargin, write=SetMargin, default=-1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property ParentBiDiMode = {default=1};
	__property PopupMenu;
	__property bool Rounded = {read=FRounded, write=SetRounded, default=0};
	__property bool Shaded = {read=FShaded, write=SetShaded, default=1};
	__property bool ShowCaption = {read=FShowCaption, write=SetShowCaption, default=1};
	__property ShowHint;
	__property int Spacing = {read=FSpacing, write=SetSpacing, default=4};
	__property TAdvGridButtonStyle Style = {read=FStyle, write=SetStyle, default=0};
	__property Visible = {default=1};
	__property OnClick;
	__property OnDblClick;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property System::Classes::TNotifyEvent OnMouseEnter = {read=FOnMouseEnter, write=FOnMouseEnter};
	__property System::Classes::TNotifyEvent OnMouseLeave = {read=FOnMouseLeave, write=FOnMouseLeave};
	__property System::Classes::TNotifyEvent OnDropDown = {read=FOnDropDown, write=FOnDropDown};
};


class PASCALIMPLEMENTATION TFileStringList : public System::Classes::TStringList
{
	typedef System::Classes::TStringList inherited;
	
private:
	int fp;
	System::UnicodeString cache;
	bool __fastcall GetEOF();
	
public:
	void __fastcall Reset();
	void __fastcall ReadLn(System::UnicodeString &s);
	void __fastcall Write(System::UnicodeString s);
	void __fastcall WriteLn(System::UnicodeString s);
	__property bool Eof = {read=GetEOF, nodefault};
public:
	/* TStringList.Create */ inline __fastcall TFileStringList()/* overload */ : System::Classes::TStringList() { }
	/* TStringList.Create */ inline __fastcall TFileStringList(bool OwnsObjects)/* overload */ : System::Classes::TStringList(OwnsObjects) { }
	/* TStringList.Create */ inline __fastcall TFileStringList(System::WideChar QuoteChar, System::WideChar Delimiter)/* overload */ : System::Classes::TStringList(QuoteChar, Delimiter) { }
	/* TStringList.Create */ inline __fastcall TFileStringList(System::WideChar QuoteChar, System::WideChar Delimiter, System::Classes::TStringsOptions Options)/* overload */ : System::Classes::TStringList(QuoteChar, Delimiter, Options) { }
	/* TStringList.Create */ inline __fastcall TFileStringList(System::Types::TDuplicates Duplicates, bool Sorted, bool CaseSensitive)/* overload */ : System::Classes::TStringList(Duplicates, Sorted, CaseSensitive) { }
	/* TStringList.Destroy */ inline __fastcall virtual ~TFileStringList() { }
	
};


class PASCALIMPLEMENTATION TAdvCheckBox : public Vcl::Controls::TCustomControl
{
	typedef Vcl::Controls::TCustomControl inherited;
	
private:
	bool FDown;
	Vcl::Stdctrls::TCheckBoxState FState;
	bool FFocused;
	bool FReturnIsTab;
	Vcl::Stdctrls::TTextLayout FBtnVAlign;
	System::Classes::TAlignment FAlignment;
	bool FEllipsis;
	System::UnicodeString FCaption;
	bool FIsWinXP;
	bool FHot;
	bool FClicksDisabled;
	bool FReadOnly;
	bool FMouseDown;
	Vcl::Graphics::TBitmap* FBkgBmp;
	bool FBkgCache;
	bool FTransparentCaching;
	bool FTransparent;
	float FDPIScale;
	HIDESBASE MESSAGE void __fastcall WMEraseBkGnd(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMEnabledChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMDialogChar(Winapi::Messages::TWMKey &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Winapi::Messages::TMessage &Message);
	void __fastcall SetState(Vcl::Stdctrls::TCheckBoxState Value);
	void __fastcall SetChecked(bool Value);
	bool __fastcall GetChecked();
	void __fastcall SetCaption(System::UnicodeString Value);
	void __fastcall SetButtonVertAlign(const Vcl::Stdctrls::TTextLayout Value);
	void __fastcall SetAlignment(const System::Classes::TLeftRight Value);
	void __fastcall SetEllipsis(const bool Value);
	void __fastcall DrawParentImage(Vcl::Controls::TControl* Control, Vcl::Graphics::TCanvas* Dest);
	void __fastcall SetTransparent(bool value);
	
protected:
	virtual void __fastcall Paint();
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyUp(System::Word &Key, System::Classes::TShiftState Shift);
	void __fastcall SetDown(bool Value);
	DYNAMIC void __fastcall DoEnter();
	DYNAMIC void __fastcall DoExit();
	__property bool ClicksDisabled = {read=FClicksDisabled, write=FClicksDisabled, nodefault};
	
public:
	__fastcall virtual TAdvCheckBox(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TAdvCheckBox();
	virtual void __fastcall Toggle();
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	__property bool TransparentChaching = {read=FTransparentCaching, write=FTransparentCaching, nodefault};
	__property bool Down = {read=FDown, write=SetDown, default=0};
	
__published:
	__property Action;
	__property Anchors = {default=3};
	__property Constraints;
	__property Color = {default=-16777211};
	__property System::Classes::TLeftRight Alignment = {read=FAlignment, write=SetAlignment, nodefault};
	__property Vcl::Stdctrls::TTextLayout ButtonVertAlign = {read=FBtnVAlign, write=SetButtonVertAlign, default=0};
	__property System::UnicodeString Caption = {read=FCaption, write=SetCaption};
	__property bool Checked = {read=GetChecked, write=SetChecked, default=0};
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property bool Ellipsis = {read=FEllipsis, write=SetEllipsis, default=0};
	__property Enabled = {default=1};
	__property Font;
	__property ParentFont = {default=1};
	__property ParentColor = {default=1};
	__property PopupMenu;
	__property bool ReadOnly = {read=FReadOnly, write=FReadOnly, default=0};
	__property bool ReturnIsTab = {read=FReturnIsTab, write=FReturnIsTab, nodefault};
	__property ShowHint;
	__property Vcl::Stdctrls::TCheckBoxState State = {read=FState, write=SetState, default=0};
	__property TabOrder = {default=-1};
	__property TabStop = {default=0};
	__property bool Transparent = {read=FTransparent, write=SetTransparent, default=0};
	__property Visible = {default=1};
	__property OnClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDrag;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
public:
	/* TWinControl.CreateParented */ inline __fastcall TAdvCheckBox(HWND ParentWindow) : Vcl::Controls::TCustomControl(ParentWindow) { }
	
};


enum DECLSPEC_DENUM TSearchDirection : unsigned char { sdTopBottom, sdLeftRight };

enum DECLSPEC_DENUM THighlightType : unsigned char { hMatchingText, hFullCell };

enum DECLSPEC_DENUM TSearchType : unsigned char { stSearch, stNarrowDown };

class PASCALIMPLEMENTATION TSearchFooter : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	bool FShowFindPrev;
	bool FShowFindNext;
	System::UnicodeString FFindNextCaption;
	System::UnicodeString FFindPrevCaption;
	System::Uitypes::TColor FColorTo;
	System::Uitypes::TColor FColor;
	System::Classes::TNotifyEvent FOnChange;
	bool FVisible;
	bool FAutoThemeAdapt;
	bool FShowClose;
	bool FShowHighLight;
	bool FShowMatchCase;
	System::UnicodeString FMatchCaseCaption;
	System::UnicodeString FHintClose;
	System::UnicodeString FHintFindPrev;
	System::UnicodeString FHintHighLight;
	System::UnicodeString FHintFindNext;
	bool FAutoSearch;
	System::UnicodeString FLastSearch;
	int FSearchColumn;
	bool FSearchActiveColumnOnly;
	bool FSearchMatchStart;
	bool FSearchFixedCells;
	bool FSearchHiddenRows;
	System::UnicodeString FHighLightCaption;
	bool FAlwaysHighLight;
	TSearchDirection FSearchDirection;
	Vcl::Graphics::TFont* FFont;
	THighlightType FHighlight;
	System::Uitypes::TColor FSearchErrorColor;
	bool FShowResults;
	System::UnicodeString FResultFormat;
	int FResultPos;
	int FResultTot;
	bool FIgnoreHTML;
	bool FIgnoreAccents;
	bool FSearchFromFocusCell;
	TSearchType FSearchType;
	System::Uitypes::TColor FSearchErrorTextColor;
	System::Uitypes::TColor FSearchTextColor;
	System::Uitypes::TColor FSearchColor;
	void __fastcall SetColor(const System::Uitypes::TColor Value);
	void __fastcall SetColorTo(const System::Uitypes::TColor Value);
	void __fastcall SetFindNextCaption(const System::UnicodeString Value);
	void __fastcall SetFindPrevCaption(const System::UnicodeString Value);
	void __fastcall SetShowFindNext(const bool Value);
	void __fastcall SetShowFindPrev(const bool Value);
	void __fastcall SetVisible(const bool Value);
	void __fastcall SetAutoThemeAdapt(const bool Value);
	void __fastcall SetShowClose(const bool Value);
	void __fastcall SetShowHighLight(const bool Value);
	void __fastcall SetShowMatchCase(const bool Value);
	void __fastcall SetMatchCaseCaption(const System::UnicodeString Value);
	void __fastcall SetHintClose(const System::UnicodeString Value);
	void __fastcall SetHintFindNext(const System::UnicodeString Value);
	void __fastcall SetHintFindPrev(const System::UnicodeString Value);
	void __fastcall SetHintHighlight(const System::UnicodeString Value);
	void __fastcall SetHighLightCaption(const System::UnicodeString Value);
	void __fastcall SetFont(Vcl::Graphics::TFont* const Value);
	void __fastcall SetAutoSearch(const bool Value);
	void __fastcall SetShowResults(const bool Value);
	void __fastcall SetSearchType(const TSearchType Value);
	void __fastcall SetSearchColor(const System::Uitypes::TColor Value);
	void __fastcall SetSearchTextColor(const System::Uitypes::TColor Value);
	
protected:
	void __fastcall Changed();
	void __fastcall FontChanged(System::TObject* Sender);
	
public:
	__fastcall TSearchFooter(System::Classes::TComponent* AOwner, bool InitDesign);
	__fastcall virtual ~TSearchFooter();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property bool AutoThemeAdapt = {read=FAutoThemeAdapt, write=SetAutoThemeAdapt, nodefault};
	__property System::UnicodeString LastSearch = {read=FLastSearch, write=FLastSearch};
	__property int ResultPos = {read=FResultPos, write=FResultPos, nodefault};
	__property int ResultTot = {read=FResultTot, write=FResultTot, nodefault};
	
__published:
	__property bool AlwaysHighLight = {read=FAlwaysHighLight, write=FAlwaysHighLight, default=0};
	__property bool AutoSearch = {read=FAutoSearch, write=SetAutoSearch, default=1};
	__property System::Uitypes::TColor Color = {read=FColor, write=SetColor, default=16777215};
	__property System::Uitypes::TColor ColorTo = {read=FColorTo, write=SetColorTo, default=-16777201};
	__property System::UnicodeString FindNextCaption = {read=FFindNextCaption, write=SetFindNextCaption};
	__property System::UnicodeString FindPrevCaption = {read=FFindPrevCaption, write=SetFindPrevCaption};
	__property Vcl::Graphics::TFont* Font = {read=FFont, write=SetFont};
	__property THighlightType HighLight = {read=FHighlight, write=FHighlight, default=0};
	__property System::UnicodeString HighLightCaption = {read=FHighLightCaption, write=SetHighLightCaption};
	__property System::UnicodeString HintClose = {read=FHintClose, write=SetHintClose};
	__property System::UnicodeString HintFindNext = {read=FHintFindNext, write=SetHintFindNext};
	__property System::UnicodeString HintFindPrev = {read=FHintFindPrev, write=SetHintFindPrev};
	__property System::UnicodeString HintHighlight = {read=FHintHighLight, write=SetHintHighlight};
	__property bool IgnoreHTML = {read=FIgnoreHTML, write=FIgnoreHTML, default=1};
	__property bool IgnoreAccents = {read=FIgnoreAccents, write=FIgnoreAccents, default=0};
	__property System::UnicodeString MatchCaseCaption = {read=FMatchCaseCaption, write=SetMatchCaseCaption};
	__property System::UnicodeString ResultFormat = {read=FResultFormat, write=FResultFormat};
	__property bool SearchActiveColumnOnly = {read=FSearchActiveColumnOnly, write=FSearchActiveColumnOnly, default=0};
	__property int SearchColumn = {read=FSearchColumn, write=FSearchColumn, default=-1};
	__property bool SearchMatchStart = {read=FSearchMatchStart, write=FSearchMatchStart, default=0};
	__property bool SearchFixedCells = {read=FSearchFixedCells, write=FSearchFixedCells, default=0};
	__property bool SearchHiddenRows = {read=FSearchHiddenRows, write=FSearchHiddenRows, default=0};
	__property System::Uitypes::TColor SearchColor = {read=FSearchColor, write=SetSearchColor, default=-16777211};
	__property System::Uitypes::TColor SearchTextColor = {read=FSearchTextColor, write=SetSearchTextColor, default=-16777208};
	__property System::Uitypes::TColor SearchErrorColor = {read=FSearchErrorColor, write=FSearchErrorColor, default=255};
	__property System::Uitypes::TColor SearchErrorTextColor = {read=FSearchErrorTextColor, write=FSearchErrorTextColor, default=16777215};
	__property TSearchDirection SearchDirection = {read=FSearchDirection, write=FSearchDirection, default=0};
	__property bool SearchFromFocusCell = {read=FSearchFromFocusCell, write=FSearchFromFocusCell, default=0};
	__property TSearchType SearchType = {read=FSearchType, write=SetSearchType, default=0};
	__property bool ShowClose = {read=FShowClose, write=SetShowClose, default=1};
	__property bool ShowFindNext = {read=FShowFindNext, write=SetShowFindNext, default=1};
	__property bool ShowFindPrev = {read=FShowFindPrev, write=SetShowFindPrev, default=1};
	__property bool ShowHighLight = {read=FShowHighLight, write=SetShowHighLight, default=1};
	__property bool ShowResults = {read=FShowResults, write=SetShowResults, default=0};
	__property bool ShowMatchCase = {read=FShowMatchCase, write=SetShowMatchCase, default=1};
	__property bool Visible = {read=FVisible, write=SetVisible, default=0};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
};


enum DECLSPEC_DENUM THomeEndAction : unsigned char { heFirstLastColumn, heFirstLastRow, heFirstLastCell, heDefault };

enum DECLSPEC_DENUM TClipboardPasteAction : unsigned char { paReplace, paInsert };

enum DECLSPEC_DENUM TClipboardCutAction : unsigned char { caClear, caRemove };

enum DECLSPEC_DENUM TAdvanceDirection : unsigned char { adLeftRight, adTopBottom, adLeftRightInRow, adTopBottomInCol };

enum DECLSPEC_DENUM TInsertPosition : unsigned char { pInsertBefore, pInsertAfter };

enum DECLSPEC_DENUM TCursorAdvance : unsigned char { caDefault, caSnake, caLoop };

enum DECLSPEC_DENUM TToggleTriStateCheck : unsigned char { tsAllStates, tsCheckUnCheck };

class PASCALIMPLEMENTATION TNavigation : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	bool FAllowInsertRow;
	bool FAllowDeleteRow;
	bool FAdvanceOnEnter;
	bool FAdvanceInsert;
	bool FAutoGotoWhenSorted;
	bool FAutoGotoIncremental;
	bool FAutoComboDropSize;
	bool FAutoComboSelect;
	bool FAllowClipboardShortcuts;
	bool FAllowRTFClipboard;
	bool FAllowSmartClipboard;
	bool FAllowClipboardAlways;
	bool FAllowClipboardColGrow;
	bool FAllowClipboardRowGrow;
	TClipboardPasteAction FClipboardPasteAction;
	bool FCopyHTMLTagsToClipboard;
	TAdvanceDirection FAdvanceDirection;
	bool FAdvanceAuto;
	bool FAdvanceAutoEdit;
	bool FCursorWalkEditor;
	bool FCursorWalkAlwaysEdit;
	bool FMoveRowOnSort;
	bool FKeepScrollOnSort;
	bool FImproveMaskSel;
	bool FAlwaysEdit;
	TInsertPosition FInsertPosition;
	bool FLineFeedOnEnter;
	THomeEndAction FHomeEndKey;
	bool FKeepHorizScroll;
	bool FAllowFMTClipboard;
	bool FTabToNextAtEnd;
	bool FEditSelectAll;
	TAdvanceDirection FTabAdvanceDirection;
	bool FSkipFixedCells;
	bool FSkipDisabledRows;
	bool FAllowCtrlEnter;
	bool FAppendOnArrowDown;
	bool FLeftRightRowSelect;
	bool FMoveScrollOnly;
	bool FComboGetUpdown;
	System::Classes::TNotifyEvent FOnChange;
	bool FAdvanceOnEnterLoop;
	TCursorAdvance FCursorAdvance;
	bool FAdvanceSkipReadOnlyCells;
	bool FCursorMoveRows;
	bool FAllowEditButtonCells;
	TClipboardCutAction FClipboardCutAction;
	TToggleTriStateCheck FToggleTriStateCheck;
	bool FMoveRowOnScroll;
	bool FSkipReadOnly;
	bool FAllowDeleteCells;
	void __fastcall SetAutoGoto(bool aValue);
	void __fastcall SetAdvanceDirection(const TAdvanceDirection Value);
	void __fastcall SetAdvanceInsert(const bool Value);
	void __fastcall SetAdvanceAuto(const bool Value);
	
protected:
	void __fastcall Changed();
	
public:
	__fastcall TNavigation();
	__fastcall virtual ~TNavigation();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	
__published:
	__property bool AllowInsertRow = {read=FAllowInsertRow, write=FAllowInsertRow, default=0};
	__property bool AllowDeleteRow = {read=FAllowDeleteRow, write=FAllowDeleteRow, default=0};
	__property bool AllowDeleteCells = {read=FAllowDeleteCells, write=FAllowDeleteCells, default=0};
	__property bool AlwaysEdit = {read=FAlwaysEdit, write=FAlwaysEdit, default=0};
	__property bool AdvanceOnEnter = {read=FAdvanceOnEnter, write=FAdvanceOnEnter, default=0};
	__property bool AdvanceOnEnterLoop = {read=FAdvanceOnEnterLoop, write=FAdvanceOnEnterLoop, default=1};
	__property bool AdvanceInsert = {read=FAdvanceInsert, write=SetAdvanceInsert, default=0};
	__property bool AdvanceAutoEdit = {read=FAdvanceAutoEdit, write=FAdvanceAutoEdit, default=1};
	__property bool AdvanceSkipReadOnlyCells = {read=FAdvanceSkipReadOnlyCells, write=FAdvanceSkipReadOnlyCells, default=1};
	__property bool AutoGotoWhenSorted = {read=FAutoGotoWhenSorted, write=SetAutoGoto, default=0};
	__property bool AutoGotoIncremental = {read=FAutoGotoIncremental, write=FAutoGotoIncremental, default=0};
	__property bool AutoComboDropSize = {read=FAutoComboDropSize, write=FAutoComboDropSize, default=0};
	__property bool AutoComboSelect = {read=FAutoComboSelect, write=FAutoComboSelect, default=1};
	__property TAdvanceDirection AdvanceDirection = {read=FAdvanceDirection, write=SetAdvanceDirection, default=0};
	__property bool AllowClipboardShortCuts = {read=FAllowClipboardShortcuts, write=FAllowClipboardShortcuts, default=0};
	__property bool AllowCtrlEnter = {read=FAllowCtrlEnter, write=FAllowCtrlEnter, default=1};
	__property bool AllowSmartClipboard = {read=FAllowSmartClipboard, write=FAllowSmartClipboard, default=0};
	__property bool AllowRTFClipboard = {read=FAllowRTFClipboard, write=FAllowRTFClipboard, default=0};
	__property bool AllowFmtClipboard = {read=FAllowFMTClipboard, write=FAllowFMTClipboard, default=0};
	__property bool AllowClipboardAlways = {read=FAllowClipboardAlways, write=FAllowClipboardAlways, default=0};
	__property bool AllowClipboardRowGrow = {read=FAllowClipboardRowGrow, write=FAllowClipboardRowGrow, default=1};
	__property bool AllowClipboardColGrow = {read=FAllowClipboardColGrow, write=FAllowClipboardColGrow, default=1};
	__property bool AllowEditButtonCells = {read=FAllowEditButtonCells, write=FAllowEditButtonCells, default=0};
	__property bool AdvanceAuto = {read=FAdvanceAuto, write=SetAdvanceAuto, default=0};
	__property bool AppendOnArrowDown = {read=FAppendOnArrowDown, write=FAppendOnArrowDown, default=0};
	__property bool EditSelectAll = {read=FEditSelectAll, write=FEditSelectAll, default=1};
	__property TInsertPosition InsertPosition = {read=FInsertPosition, write=FInsertPosition, default=0};
	__property TClipboardCutAction ClipboardCutAction = {read=FClipboardCutAction, write=FClipboardCutAction, default=0};
	__property TClipboardPasteAction ClipboardPasteAction = {read=FClipboardPasteAction, write=FClipboardPasteAction, default=0};
	__property bool ComboGetUpDown = {read=FComboGetUpdown, write=FComboGetUpdown, default=1};
	__property TCursorAdvance CursorAdvance = {read=FCursorAdvance, write=FCursorAdvance, default=0};
	__property bool CursorWalkEditor = {read=FCursorWalkEditor, write=FCursorWalkEditor, default=0};
	__property bool CursorWalkAlwaysEdit = {read=FCursorWalkAlwaysEdit, write=FCursorWalkAlwaysEdit, default=1};
	__property bool CursorMoveRows = {read=FCursorMoveRows, write=FCursorMoveRows, default=0};
	__property bool MoveRowOnSort = {read=FMoveRowOnSort, write=FMoveRowOnSort, default=0};
	__property bool KeepScrollOnSort = {read=FKeepScrollOnSort, write=FKeepScrollOnSort, default=0};
	__property bool MoveRowOnScroll = {read=FMoveRowOnScroll, write=FMoveRowOnScroll, default=0};
	__property bool MoveScrollOnly = {read=FMoveScrollOnly, write=FMoveScrollOnly, default=0};
	__property bool ImproveMaskSel = {read=FImproveMaskSel, write=FImproveMaskSel, default=0};
	__property bool LeftRightRowSelect = {read=FLeftRightRowSelect, write=FLeftRightRowSelect, default=1};
	__property bool CopyHTMLTagsToClipboard = {read=FCopyHTMLTagsToClipboard, write=FCopyHTMLTagsToClipboard, default=1};
	__property bool KeepHorizScroll = {read=FKeepHorizScroll, write=FKeepHorizScroll, default=0};
	__property bool LineFeedOnEnter = {read=FLineFeedOnEnter, write=FLineFeedOnEnter, default=0};
	__property THomeEndAction HomeEndKey = {read=FHomeEndKey, write=FHomeEndKey, default=0};
	__property bool SkipFixedCells = {read=FSkipFixedCells, write=FSkipFixedCells, default=1};
	__property bool SkipDisabledRows = {read=FSkipDisabledRows, write=FSkipDisabledRows, default=1};
	__property bool SkipReadOnly = {read=FSkipReadOnly, write=FSkipReadOnly, default=0};
	__property bool TabToNextAtEnd = {read=FTabToNextAtEnd, write=FTabToNextAtEnd, default=0};
	__property TAdvanceDirection TabAdvanceDirection = {read=FTabAdvanceDirection, write=FTabAdvanceDirection, default=0};
	__property TToggleTriStateCheck ToggleTriStateCheck = {read=FToggleTriStateCheck, write=FToggleTriStateCheck, default=0};
};


enum DECLSPEC_DENUM TGridFixedCellEdit : unsigned char { fceNone, fceDblClick, fceLeftClick, fceRightClick };

enum DECLSPEC_DENUM TGridFixedCellEditor : unsigned char { fceEdit, fceComboEdit, fceComboList };

enum DECLSPEC_DENUM TWheelAction : unsigned char { waMoveSelection, waScroll };

enum DECLSPEC_DENUM TWheelActive : unsigned char { waFocus, waMouseOver };

typedef void __fastcall (__closure *TIsDesigningEvent)(System::TObject* Sender, bool &IsDesigning);

class PASCALIMPLEMENTATION TMouseActions : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	bool FColSelect;
	bool FRowSelect;
	bool FAllSelect;
	bool FDirectEdit;
	bool FDirectComboDrop;
	bool FDirectComboClose;
	bool FDirectDateClose;
	bool FDirectDateDrop;
	bool FDisjunctRowSelect;
	bool FDisjunctColSelect;
	bool FAllColumnSize;
	bool FAllRowSize;
	bool FCaretPositioning;
	bool FSizeFixedCol;
	bool FSizeFixedRow;
	bool FDisjunctCellSelect;
	TGridFixedCellEdit FFixedRowsEdit;
	TGridFixedCellEdit FFixedColsEdit;
	TGridFixedCellEditor FFixedRowsEditor;
	TGridFixedCellEditor FFixedColsEditor;
	bool FHotmailRowSelect;
	bool FRangeSelectAndEdit;
	bool FNoAutoRangeScroll;
	bool FPreciseCheckBoxCheck;
	bool FPreciseNodeClick;
	bool FCheckAllCheck;
	bool FNodeAllExpandContract;
	bool FMoveRowOnNodeClick;
	bool FRowSelectPersistent;
	bool FSelectOnRightClick;
	bool FNoScrollOnPartialRow;
	bool FNoScrollOnPartialCol;
	int FWheelIncrement;
	TWheelAction FWheelAction;
	bool FAutoSizeColOnDblClick;
	bool FEditOnDblClickOnly;
	bool FDisjunctRowSelectNoCtrl;
	bool FDisjunctColSelectNoCtrl;
	System::Classes::TNotifyEvent FOnChange;
	System::Classes::TNotifyEvent FOnInvalidate;
	TIsDesigningEvent FOnIsDesigning;
	System::Classes::TNotifyEvent FOnDisableEdit;
	System::Classes::TStringList* FFixedComboValues;
	bool FTouchScroll;
	TWheelActive FWheelActive;
	bool FAutoFocus;
	int FPartialScrollDelta;
	bool FToggleNodeOnDblClick;
	bool FSelectOnRightClickNewSelectionOnly;
	bool FAllSelectAllFixedColumns;
	void __fastcall SetDisjunctColSelect(const bool AValue);
	void __fastcall SetDisjunctRowSelect(const bool AValue);
	void __fastcall SetDisjunctCellSelect(const bool AValue);
	void __fastcall SetHotmailRowSelect(const bool AValue);
	void __fastcall SetEditOnDblClickOnly(const bool AValue);
	void __fastcall SetWheelAction(const TWheelAction Value);
	void __fastcall SetFixedComboValues(System::Classes::TStrings* const Value);
	System::Classes::TStrings* __fastcall GetFixedComboValues();
	
protected:
	void __fastcall Changed();
	bool __fastcall IsDesigning();
	
public:
	__fastcall TMouseActions(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TMouseActions();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property bool DisjunctRowSelectDirect = {read=FDisjunctRowSelect, write=FDisjunctRowSelect, nodefault};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property TIsDesigningEvent OnIsDesigning = {read=FOnIsDesigning, write=FOnIsDesigning};
	__property System::Classes::TNotifyEvent OnInvalidate = {read=FOnInvalidate, write=FOnInvalidate};
	__property System::Classes::TNotifyEvent OnDisableEdit = {read=FOnDisableEdit, write=FOnDisableEdit};
	
__published:
	__property bool AllColumnSize = {read=FAllColumnSize, write=FAllColumnSize, default=0};
	__property bool AllRowSize = {read=FAllRowSize, write=FAllRowSize, default=0};
	__property bool AllSelect = {read=FAllSelect, write=FAllSelect, default=0};
	__property bool AllSelectAllFixedColumns = {read=FAllSelectAllFixedColumns, write=FAllSelectAllFixedColumns, default=1};
	__property bool AutoFocus = {read=FAutoFocus, write=FAutoFocus, default=0};
	__property bool AutoSizeColOnDblClick = {read=FAutoSizeColOnDblClick, write=FAutoSizeColOnDblClick, default=1};
	__property bool CaretPositioning = {read=FCaretPositioning, write=FCaretPositioning, default=0};
	__property bool CheckAllCheck = {read=FCheckAllCheck, write=FCheckAllCheck, default=0};
	__property bool ColSelect = {read=FColSelect, write=FColSelect, default=0};
	__property bool DirectComboClose = {read=FDirectComboClose, write=FDirectComboClose, default=0};
	__property bool DirectComboDrop = {read=FDirectComboDrop, write=FDirectComboDrop, default=0};
	__property bool DirectDateClose = {read=FDirectDateClose, write=FDirectDateClose, default=0};
	__property bool DirectDateDrop = {read=FDirectDateDrop, write=FDirectDateDrop, default=0};
	__property bool DirectEdit = {read=FDirectEdit, write=FDirectEdit, default=0};
	__property bool DisjunctRowSelect = {read=FDisjunctRowSelect, write=SetDisjunctRowSelect, default=0};
	__property bool DisjunctRowSelectNoCtrl = {read=FDisjunctRowSelectNoCtrl, write=FDisjunctRowSelectNoCtrl, default=0};
	__property bool DisjunctColSelect = {read=FDisjunctColSelect, write=SetDisjunctColSelect, default=0};
	__property bool DisjunctColSelectNoCtrl = {read=FDisjunctColSelectNoCtrl, write=FDisjunctColSelectNoCtrl, default=0};
	__property bool DisjunctCellSelect = {read=FDisjunctCellSelect, write=SetDisjunctCellSelect, default=0};
	__property bool EditOnDblClickOnly = {read=FEditOnDblClickOnly, write=SetEditOnDblClickOnly, default=0};
	__property TGridFixedCellEdit FixedRowsEdit = {read=FFixedRowsEdit, write=FFixedRowsEdit, default=0};
	__property TGridFixedCellEditor FixedRowsEditor = {read=FFixedRowsEditor, write=FFixedRowsEditor, default=0};
	__property TGridFixedCellEditor FixedColsEditor = {read=FFixedColsEditor, write=FFixedColsEditor, default=0};
	__property TGridFixedCellEdit FixedColsEdit = {read=FFixedColsEdit, write=FFixedColsEdit, default=0};
	__property System::Classes::TStrings* FixedComboValues = {read=GetFixedComboValues, write=SetFixedComboValues};
	__property bool HotmailRowSelect = {read=FHotmailRowSelect, write=SetHotmailRowSelect, default=0};
	__property bool MoveRowOnNodeClick = {read=FMoveRowOnNodeClick, write=FMoveRowOnNodeClick, default=0};
	__property bool NoAutoRangeScroll = {read=FNoAutoRangeScroll, write=FNoAutoRangeScroll, default=0};
	__property bool NodeAllExpandContract = {read=FNodeAllExpandContract, write=FNodeAllExpandContract, default=0};
	__property bool NoScrollOnPartialRow = {read=FNoScrollOnPartialRow, write=FNoScrollOnPartialRow, default=0};
	__property bool NoScrollOnPartialCol = {read=FNoScrollOnPartialCol, write=FNoScrollOnPartialCol, default=0};
	__property int PartialScrollDelta = {read=FPartialScrollDelta, write=FPartialScrollDelta, default=0};
	__property bool PreciseCheckBoxCheck = {read=FPreciseCheckBoxCheck, write=FPreciseCheckBoxCheck, default=0};
	__property bool PreciseNodeClick = {read=FPreciseNodeClick, write=FPreciseNodeClick, default=1};
	__property bool RangeSelectAndEdit = {read=FRangeSelectAndEdit, write=FRangeSelectAndEdit, default=0};
	__property bool RowSelect = {read=FRowSelect, write=FRowSelect, default=0};
	__property bool RowSelectPersistent = {read=FRowSelectPersistent, write=FRowSelectPersistent, default=0};
	__property bool SelectOnRightClick = {read=FSelectOnRightClick, write=FSelectOnRightClick, default=0};
	__property bool SelectOnRightClickNewSelectionOnly = {read=FSelectOnRightClickNewSelectionOnly, write=FSelectOnRightClickNewSelectionOnly, default=0};
	__property bool SizeFixedCol = {read=FSizeFixedCol, write=FSizeFixedCol, default=0};
	__property bool SizeFixedRow = {read=FSizeFixedRow, write=FSizeFixedRow, default=0};
	__property bool ToggleNodeOnDblClick = {read=FToggleNodeOnDblClick, write=FToggleNodeOnDblClick, default=0};
	__property bool TouchScroll = {read=FTouchScroll, write=FTouchScroll, default=0};
	__property int WheelIncrement = {read=FWheelIncrement, write=FWheelIncrement, default=0};
	__property TWheelAction WheelAction = {read=FWheelAction, write=SetWheelAction, default=0};
	__property TWheelActive WheelActive = {read=FWheelActive, write=FWheelActive, default=0};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TSyncGrid : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	System::Classes::TComponent* FOwner;
	bool FScrollHorizontal;
	Vcl::Grids::TStringGrid* FGrid;
	bool FScrollVertical;
	bool FSelectionRow;
	bool FSelectionColumn;
	bool FMoveRow;
	bool FMoveColumn;
	void __fastcall SetGrid(Vcl::Grids::TStringGrid* const Value);
	
public:
	__fastcall TSyncGrid(System::Classes::TComponent* AOwner);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property Vcl::Grids::TStringGrid* Grid = {read=FGrid, write=SetGrid};
	__property bool ScrollVertical = {read=FScrollVertical, write=FScrollVertical, default=0};
	__property bool ScrollHorizontal = {read=FScrollHorizontal, write=FScrollHorizontal, default=0};
	__property bool SelectionColumn = {read=FSelectionColumn, write=FSelectionColumn, default=0};
	__property bool SelectionRow = {read=FSelectionRow, write=FSelectionRow, default=0};
	__property bool MoveColumn = {read=FMoveColumn, write=FMoveColumn, default=0};
	__property bool MoveRow = {read=FMoveRow, write=FMoveRow, default=0};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TSyncGrid() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TBands : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	bool FPrint;
	bool FActive;
	int FTotalLength;
	int FSecondaryLength;
	int FPrimaryLength;
	System::Uitypes::TColor FSecondaryColor;
	System::Uitypes::TColor FPrimaryColor;
	System::Classes::TNotifyEvent FOnChange;
	void __fastcall SetActive(const bool Value);
	void __fastcall SetPrimaryColor(const System::Uitypes::TColor Value);
	void __fastcall SetPrimaryLength(const int Value);
	void __fastcall SetSecondaryColor(const System::Uitypes::TColor Value);
	void __fastcall SetSecondaryLength(const int Value);
	
protected:
	void __fastcall Changed();
	
public:
	__fastcall TBands();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property int TotalLength = {read=FTotalLength, nodefault};
	
__published:
	__property bool Active = {read=FActive, write=SetActive, default=0};
	__property System::Uitypes::TColor PrimaryColor = {read=FPrimaryColor, write=SetPrimaryColor, default=-16777192};
	__property int PrimaryLength = {read=FPrimaryLength, write=SetPrimaryLength, default=1};
	__property System::Uitypes::TColor SecondaryColor = {read=FSecondaryColor, write=SetSecondaryColor, default=-16777211};
	__property int SecondaryLength = {read=FSecondaryLength, write=SetSecondaryLength, default=1};
	__property bool Print = {read=FPrint, write=FPrint, default=0};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TBands() { }
	
};


class PASCALIMPLEMENTATION TGridFocusWindow : public Vcl::Controls::TCustomControl
{
	typedef Vcl::Controls::TCustomControl inherited;
	
protected:
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall Paint();
	
public:
	__fastcall virtual TGridFocusWindow(System::Classes::TComponent* AOwner);
	virtual void __fastcall CreateWnd();
public:
	/* TCustomControl.Destroy */ inline __fastcall virtual ~TGridFocusWindow() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TGridFocusWindow(HWND ParentWindow) : Vcl::Controls::TCustomControl(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TGridAlphaMask : public Vcl::Graphics::TBitmap
{
	typedef Vcl::Graphics::TBitmap inherited;
	
private:
	System::Byte FOpacity;
	
public:
	__fastcall virtual TGridAlphaMask()/* overload */;
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	void __fastcall MergeMask(Vcl::Graphics::TBitmap* Mask, Vcl::Graphics::TBitmap* Bitmap, System::Uitypes::TColor Color);
	__property System::Byte Opacity = {read=FOpacity, write=FOpacity, nodefault};
public:
	/* TBitmap.Create */ inline __fastcall TGridAlphaMask(int AWidth, int AHeight)/* overload */ : Vcl::Graphics::TBitmap(AWidth, AHeight) { }
	/* TBitmap.Destroy */ inline __fastcall virtual ~TGridAlphaMask() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TFocusHelper : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	bool FEnabled;
	
public:
	__fastcall TFocusHelper(System::Classes::TComponent* AOwner);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property bool Enabled = {read=FEnabled, write=FEnabled, default=0};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TFocusHelper() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const TEditorType edUniEdit = (TEditorType)(0);
static const TEditorType edUniComboList = (TEditorType)(3);
static const TEditorType edUniComboEdit = (TEditorType)(2);
static const TEditorType edUniEditBtn = (TEditorType)(4);
static const TSortStyle ssUnicode = (TSortStyle)(1);
extern DELPHI_PACKAGE void __fastcall DrawRoundRect(Vcl::Graphics::TBitmap* Bitmap, int W, int H, int Thickness, int Radius, double Blur);
}	/* namespace Advobj */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ADVOBJ)
using namespace Advobj;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AdvobjHPP
