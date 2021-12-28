// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AdvSmoothEdit.pas' rev: 35.00 (Windows)

#ifndef AdvsmootheditHPP
#define AdvsmootheditHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Vcl.Dialogs.hpp>
#include <Winapi.Messages.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Mask.hpp>
#include <AdvSmoothEddd.hpp>
#include <System.Types.hpp>
#include <System.UITypes.hpp>
#include <System.Character.hpp>
#include <Vcl.Menus.hpp>

//-- user supplied -----------------------------------------------------------

namespace Advsmoothedit
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TWinCtrl;
class DELPHICLASS TRangeList;
class DELPHICLASS TPersistence;
class DELPHICLASS TListHintWindow;
class DELPHICLASS TLookupSettings;
class DELPHICLASS TAdvSmoothEdit;
class DELPHICLASS TAdvSmoothMaskEdit;
struct TQueryParams;
class DELPHICLASS TEditDropTarget;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TLabelPosition : unsigned char { lpLeftTop, lpLeftCenter, lpLeftBottom, lpTopLeft, lpBottomLeft, lpLeftTopLeft, lpLeftCenterLeft, lpLeftBottomLeft, lpTopCenter, lpBottomCenter, lpRightTop, lpRightCenter, lpRighBottom };

enum DECLSPEC_DENUM TAdvSmoothEditType : unsigned char { etString, etNumeric, etFloat, etUppercase, etMixedCase, etLowerCase, etPassword, etMoney, etRange, etHex, etAlphaNumeric, etValidChars };

enum DECLSPEC_DENUM TAutoType : unsigned char { atNumeric, atFloat, atString, atDate, atTime, atHex };

typedef void __fastcall (__closure *TValueValidateEvent)(System::TObject* Sender, System::UnicodeString value, bool &IsValid);

typedef void __fastcall (__closure *TClipboardEvent)(System::TObject* Sender, System::UnicodeString value, bool &allow);

typedef void __fastcall (__closure *TMaskCompleteEvent)(System::TObject* Sender, System::UnicodeString value, bool &accept);

typedef void __fastcall (__closure *TLookupSelectEvent)(System::TObject* Sender, System::UnicodeString &Value);

typedef void __fastcall (__closure *TLookupIndexSelectEvent)(System::TObject* Sender, int Index, System::UnicodeString &Value);

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
class PASCALIMPLEMENTATION TRangeList : public System::Classes::TList
{
	typedef System::Classes::TList inherited;
	
public:
	int operator[](int index) { return this->Items[index]; }
	
private:
	void __fastcall SetInteger(int Index, int Value);
	int __fastcall GetInteger(int Index);
	
public:
	__fastcall TRangeList();
	__property int Items[int index] = {read=GetInteger, write=SetInteger/*, default*/};
	HIDESBASE void __fastcall Add(int Value);
	void __fastcall AddMultiple(int Value, int Count);
	HIDESBASE void __fastcall Delete(int Index);
	void __fastcall Show();
	bool __fastcall InList(int Value);
	bool __fastcall StrToList(System::UnicodeString s);
public:
	/* TList.Destroy */ inline __fastcall virtual ~TRangeList() { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TPersistenceLocation : unsigned char { plInifile, plRegistry };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPersistence : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	bool FEnable;
	System::UnicodeString FKey;
	System::UnicodeString FSection;
	TPersistenceLocation FLocation;
	
__published:
	__property bool Enable = {read=FEnable, write=FEnable, default=0};
	__property System::UnicodeString Key = {read=FKey, write=FKey};
	__property System::UnicodeString Section = {read=FSection, write=FSection};
	__property TPersistenceLocation Location = {read=FLocation, write=FLocation, default=0};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TPersistence() { }
	
public:
	/* TObject.Create */ inline __fastcall TPersistence() : System::Classes::TPersistent() { }
	
};

#pragma pack(pop)

typedef void __fastcall (__closure *TItemClickEvent)(System::TObject* Sender, int Index);

class PASCALIMPLEMENTATION TListHintWindow : public Vcl::Controls::THintWindow
{
	typedef Vcl::Controls::THintWindow inherited;
	
private:
	Vcl::Stdctrls::TListBox* FListControl;
	MESSAGE void __fastcall WMNCButtonDown(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMActivate(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMNCHitTest(Winapi::Messages::TWMNCHitTest &Message);
	
protected:
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	
public:
	__fastcall virtual TListHintWindow(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TListHintWindow();
	__property BorderWidth = {default=0};
	__property Text = {default=0};
	
__published:
	__property Vcl::Stdctrls::TListBox* ListControl = {read=FListControl, write=FListControl};
public:
	/* TWinControl.CreateParented */ inline __fastcall TListHintWindow(HWND ParentWindow) : Vcl::Controls::THintWindow(ParentWindow) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TLookupSettings : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	System::Classes::TStringList* FDisplayList;
	System::Classes::TStringList* FValueList;
	int FDisplayCount;
	System::Uitypes::TColor FColor;
	bool FEnabled;
	int FNumChars;
	bool FCaseSensitive;
	bool FHistory;
	bool FMulti;
	System::WideChar FSeparator;
	void __fastcall SetDisplayList(System::Classes::TStringList* const Value);
	void __fastcall SetValueList(System::Classes::TStringList* const Value);
	void __fastcall SetNumChars(const int Value);
	
public:
	__fastcall TLookupSettings();
	__fastcall virtual ~TLookupSettings();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property bool CaseSensitive = {read=FCaseSensitive, write=FCaseSensitive, default=0};
	__property System::Uitypes::TColor Color = {read=FColor, write=FColor, default=-16777211};
	__property int DisplayCount = {read=FDisplayCount, write=FDisplayCount, default=4};
	__property System::Classes::TStringList* DisplayList = {read=FDisplayList, write=SetDisplayList};
	__property bool Enabled = {read=FEnabled, write=FEnabled, default=0};
	__property bool History = {read=FHistory, write=FHistory, default=0};
	__property int NumChars = {read=FNumChars, write=SetNumChars, default=2};
	__property System::Classes::TStringList* ValueList = {read=FValueList, write=SetValueList};
	__property bool Multi = {read=FMulti, write=FMulti, default=0};
	__property System::WideChar Separator = {read=FSeparator, write=FSeparator, nodefault};
};

#pragma pack(pop)

typedef void __fastcall (__closure *TURLClickEvent)(System::TObject* Sender, System::UnicodeString URL, bool &Show);

enum DECLSPEC_DENUM TEditAlign : unsigned char { eaLeft, eaRight, eaDefault, eaCenter };

enum DECLSPEC_DENUM TPrecisionDisplay : unsigned char { pdNormal, pdShortest };

class PASCALIMPLEMENTATION TAdvSmoothEdit : public Vcl::Mask::TCustomMaskEdit
{
	typedef Vcl::Mask::TCustomMaskEdit inherited;
	
private:
	bool FAlignChanging;
	Vcl::Stdctrls::TLabel* FLabel;
	Vcl::Graphics::TFont* FLabelFont;
	TLabelPosition FLabelPosition;
	int FLabelMargin;
	bool FLabelTransparent;
	bool FAutoFocus;
	bool FCanUndo;
	TAdvSmoothEditType FEditType;
	TEditAlign FEditAlign;
	TEditAlign FOldEditAlign;
	Vcl::Forms::TFormBorderStyle FOldBorder;
	bool FExcelStyleDecimalSeparator;
	bool FTabOnFullLength;
	System::Uitypes::TColor FDisabledColor;
	bool FDisabledBorder;
	System::Uitypes::TColor FNormalColor;
	System::Uitypes::TColor FFocusColor;
	System::Uitypes::TColor FFocusFontColor;
	System::Uitypes::TColor FErrorColor;
	System::Uitypes::TColor FErrorFontColor;
	bool FError;
	bool FFocusLabel;
	System::Uitypes::TColor FFontColor;
	System::Uitypes::TColor FModifiedColor;
	bool FReturnIsTab;
	bool FShowModified;
	bool FIsModified;
	bool FShowURL;
	System::Uitypes::TColor FURLColor;
	int FFocusWidthInc;
	TEditAlign FFocusAlign;
	short FLengthLimit;
	short FPrecision;
	TPrecisionDisplay FPrecisionDisplay;
	System::UnicodeString FPrefix;
	System::UnicodeString FSuffix;
	System::UnicodeString FOldString;
	bool FSigned;
	bool FIsUrl;
	bool FFlat;
	bool FMouseInControl;
	System::Uitypes::TColor FFlatLineColor;
	TPersistence* FPersistence;
	TValueValidateEvent FOnValueValidate;
	TClipboardEvent FOnClipboardCut;
	TClipboardEvent FOnClipboardPaste;
	TClipboardEvent FOnClipboardCopy;
	bool FBlockCopy;
	bool FFlatParentColor;
	bool FTransparent;
	System::Types::TPoint FCaretPos;
	bool FOleDropSource;
	bool FOleDropTarget;
	bool FOleDropTargetAssigned;
	bool FIsDragSource;
	bool FButtonDown;
	bool FFocusBorder;
	System::Uitypes::TColor FFocusBorderColor;
	bool FHintShowLargeText;
	bool FShowError;
	bool FAutoThousandSeparator;
	System::UnicodeString FEmptyText;
	bool FSoftBorder;
	bool FDefaultHandling;
	bool FBlockDefaultHandling;
	bool FLabelAlwaysEnabled;
	bool FBorder3D;
	int FErrorMarkerLen;
	int FErrorMarkerPos;
	int FIndentR;
	int FIndentL;
	int FLoadedHeight;
	TListHintWindow* FLookupList;
	Vcl::Stdctrls::TListBox* FLookupListBox;
	TLookupSettings* FLookup;
	TLookupSelectEvent FOnLookupSelect;
	TLookupIndexSelectEvent FOnLookupIndexSelect;
	bool FIsValidating;
	System::Classes::TNotifyEvent FOnMouseEnter;
	System::Classes::TNotifyEvent FOnMouseLeave;
	TURLClickEvent FOnURLClick;
	System::Classes::TNotifyEvent FOnLabelClick;
	System::Classes::TNotifyEvent FOnLabelDblClick;
	System::UnicodeString FValidChars;
	bool FIsWinXP;
	bool FIsThemed;
	bool FBlockChange;
	bool FAllowNumericNullValue;
	bool FParentFnt;
	System::Uitypes::TColor FBorderColor;
	HIDESBASE MESSAGE void __fastcall CNCommand(Winapi::Messages::TWMCommand &Message);
	MESSAGE void __fastcall WMActivate(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CNCtlColorEdit(Winapi::Messages::TWMCtlColor &Message);
	MESSAGE void __fastcall CNCtlColorStatic(Winapi::Messages::TWMCtlColor &Message);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMCancelMode(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMShowingChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMHintShow(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall CMParentFontChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Winapi::Messages::TWMSetFocus &Msg);
	HIDESBASE MESSAGE void __fastcall WMKillFocus(Winapi::Messages::TWMKillFocus &Msg);
	HIDESBASE MESSAGE void __fastcall WMChar(Winapi::Messages::TWMKey &Msg);
	HIDESBASE MESSAGE void __fastcall WMPaste(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall WMCut(Winapi::Messages::TWMNoParams &Message);
	MESSAGE void __fastcall WMCopy(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall WMKeyDown(Winapi::Messages::TWMKey &Msg);
	HIDESBASE MESSAGE void __fastcall WMLButtonUp(Winapi::Messages::TWMMouse &Msg);
	HIDESBASE MESSAGE void __fastcall WMLButtonDown(Winapi::Messages::TWMMouse &Msg);
	HIDESBASE MESSAGE void __fastcall WMPaint(Winapi::Messages::TWMPaint &Msg);
	HIDESBASE MESSAGE void __fastcall WMNCPaint(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMEraseBkGnd(Winapi::Messages::TWMEraseBkgnd &Message);
	HIDESBASE MESSAGE void __fastcall WMDestroy(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall WMMouseMove(Winapi::Messages::TWMMouse &Msg);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMWantSpecialKey(Winapi::Messages::TWMKey &Msg);
	void __fastcall SetEditType(TAdvSmoothEditType value);
	HIDESBASE System::UnicodeString __fastcall GetText();
	HIDESBASE void __fastcall SetText(System::UnicodeString value);
	double __fastcall GetFloat();
	int __fastcall GetInt();
	int __fastcall FixedLength(System::UnicodeString s);
	bool __fastcall AllowMin(System::WideChar ch);
	int __fastcall DecimalPos();
	void __fastcall SetFloat(const double Value);
	void __fastcall SetInt(const int Value);
	void __fastcall SetPrefix(const System::UnicodeString Value);
	void __fastcall SetSuffix(const System::UnicodeString Value);
	void __fastcall SetLabelCaption(const System::UnicodeString value);
	System::UnicodeString __fastcall GetLabelCaption();
	void __fastcall SetLabelPosition(const TLabelPosition value);
	void __fastcall SetLabelMargin(const int value);
	void __fastcall SetLabelTransparent(const bool value);
	void __fastcall SetFlat(const bool value);
	void __fastcall SetFlatRect(const bool Value);
	void __fastcall SetPrecision(const short Value);
	void __fastcall SetPrecisionDisplay(const TPrecisionDisplay Value);
	System::Extended __fastcall EStrToFloat(System::UnicodeString s);
	void __fastcall UpdateLabel();
	void __fastcall AutoSeparators();
	HIDESBASE bool __fastcall GetModified();
	HIDESBASE void __fastcall SetModified(const bool Value);
	bool __fastcall GetVisible();
	HIDESBASE void __fastcall SetVisible(const bool Value);
	void __fastcall PaintEdit();
	void __fastcall DrawControlBorder(HDC DC);
	void __fastcall DrawBorder();
	bool __fastcall Is3DBorderButton();
	void __fastcall SetDisabledColor(const System::Uitypes::TColor Value);
	void __fastcall SetDisabledBorder(const bool Value);
	bool __fastcall GetEnabledEx();
	void __fastcall SetEnabledEx(const bool Value);
	void __fastcall SetEditAlign(const TEditAlign Value);
	void __fastcall SetCanUndo(const bool Value);
	System::Uitypes::TColor __fastcall GetColorEx();
	void __fastcall SetColorEx(const System::Uitypes::TColor Value);
	void __fastcall SetTransparent(const bool Value);
	void __fastcall SetFlatLineColor(const System::Uitypes::TColor Value);
	void __fastcall SetFlatParentColor(const bool Value);
	void __fastcall LabelFontChange(System::TObject* Sender);
	void __fastcall SetLabelFont(Vcl::Graphics::TFont* const Value);
	bool __fastcall GetError();
	void __fastcall SetError(const bool Value);
	void __fastcall ApplyURL(const bool Value);
	void __fastcall DrawErrorLines(Vcl::Graphics::TCanvas* Canvas, int ErrPos, int ErrLen);
	void __fastcall SetOleDropSource(const bool Value);
	void __fastcall SetOleDropTarget(const bool Value);
	System::UnicodeString __fastcall GetVersion();
	void __fastcall SetVersion(const System::UnicodeString Value);
	void __fastcall DoneLookup();
	int __fastcall GetHeightEx();
	void __fastcall ListKeyPress(System::TObject* Sender, System::WideChar &Key);
	void __fastcall ListMouseUp(System::TObject* Sender, System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall SetAutoThousandSeparator(const bool Value);
	void __fastcall SetBorder3D(const bool Value);
	void __fastcall SetEmptyText(const System::UnicodeString Value);
	void __fastcall SetErrorMarkerLen(const int Value);
	void __fastcall SetErrorMarkerPos(const int Value);
	void __fastcall SetFocusBorder(const bool Value);
	void __fastcall SetHeightEx(const int Value);
	void __fastcall SetLabelAlwaysEnabled(const bool Value);
	void __fastcall SetSoftBorder(const bool Value);
	void __fastcall UpdateLookup();
	void __fastcall SetBorderColor(const System::Uitypes::TColor Value);
	
protected:
	virtual bool __fastcall IsDropDownVisible();
	virtual int __fastcall GetVersionNr();
	DYNAMIC void __fastcall Change();
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall CreateWnd();
	Vcl::Stdctrls::TLabel* __fastcall CreateLabel();
	virtual void __fastcall Loaded();
	void __fastcall InvalidateCaret(const System::Types::TPoint &pt);
	void __fastcall EraseCaret();
	void __fastcall DrawCaretByCursor();
	void __fastcall SetCaretByCursor();
	__property int IndentR = {read=FIndentR, write=FIndentR, nodefault};
	__property int IndentL = {read=FIndentL, write=FIndentL, nodefault};
	virtual bool __fastcall DoValidate(System::UnicodeString value);
	virtual void __fastcall ValidateEvent(System::UnicodeString Value, bool &IsValid);
	void __fastcall LabelClick(System::TObject* Sender);
	void __fastcall LabelDblClick(System::TObject* Sender);
	virtual void __fastcall SetParent(Vcl::Controls::TWinControl* AParent);
	void __fastcall SetTextDirect(System::UnicodeString s);
	virtual bool __fastcall TestURL();
	__property bool BlockDefaultHandling = {read=FBlockDefaultHandling, write=FBlockDefaultHandling, nodefault};
	
public:
	__fastcall virtual TAdvSmoothEdit(System::Classes::TComponent* aOwner);
	__fastcall virtual ~TAdvSmoothEdit();
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	HIDESBASE void __fastcall SelectAll();
	void __fastcall SelectBeforeDecimal();
	void __fastcall SelectAfterDecimal();
	void __fastcall Init();
	int __fastcall GetTextSize();
	int __fastcall CharFromPos(const System::Types::TPoint &pt);
	System::Types::TPoint __fastcall PosFromChar(System::Word uChar);
	__property double FloatValue = {read=GetFloat, write=SetFloat};
	__property int IntValue = {read=GetInt, write=SetInt, nodefault};
	__property bool Modified = {read=GetModified, write=SetModified, nodefault};
	__property bool IsError = {read=GetError, write=SetError, nodefault};
	bool __fastcall RangeStrToList(TRangeList* rangelist);
	void __fastcall ListToRangeStr(TRangeList* rangelist);
	virtual void __fastcall LoadPersist();
	virtual void __fastcall SavePersist();
	__property bool DefaultHandling = {read=FDefaultHandling, write=FDefaultHandling, nodefault};
	__property Vcl::Stdctrls::TLabel* EditLabel = {read=FLabel};
	__property bool Border3D = {read=FBorder3D, write=SetBorder3D, nodefault};
	
__published:
	__property TValueValidateEvent OnValueValidate = {read=FOnValueValidate, write=FOnValueValidate};
	__property TClipboardEvent OnClipboardCopy = {read=FOnClipboardCopy, write=FOnClipboardCopy};
	__property TClipboardEvent OnClipboardCut = {read=FOnClipboardCut, write=FOnClipboardCut};
	__property TClipboardEvent OnClipboardPaste = {read=FOnClipboardPaste, write=FOnClipboardPaste};
	__property bool AllowNumericNullValue = {read=FAllowNumericNullValue, write=FAllowNumericNullValue, default=0};
	__property bool AutoFocus = {read=FAutoFocus, write=FAutoFocus, default=0};
	__property bool AutoThousandSeparator = {read=FAutoThousandSeparator, write=SetAutoThousandSeparator, default=1};
	__property TEditAlign EditAlign = {read=FEditAlign, write=SetEditAlign, default=0};
	__property TAdvSmoothEditType EditType = {read=FEditType, write=SetEditType, default=0};
	__property System::UnicodeString EmptyText = {read=FEmptyText, write=SetEmptyText};
	__property int ErrorMarkerPos = {read=FErrorMarkerPos, write=SetErrorMarkerPos, default=0};
	__property int ErrorMarkerLen = {read=FErrorMarkerLen, write=SetErrorMarkerLen, default=0};
	__property System::Uitypes::TColor ErrorColor = {read=FErrorColor, write=FErrorColor, default=255};
	__property System::Uitypes::TColor ErrorFontColor = {read=FErrorFontColor, write=FErrorFontColor, default=16777215};
	__property bool ExcelStyleDecimalSeparator = {read=FExcelStyleDecimalSeparator, write=FExcelStyleDecimalSeparator, default=0};
	__property bool Flat = {read=FFlat, write=SetFlat, default=0};
	__property System::Uitypes::TColor FlatLineColor = {read=FFlatLineColor, write=SetFlatLineColor, default=0};
	__property bool FlatParentColor = {read=FFlatParentColor, write=SetFlatParentColor, default=1};
	__property TEditAlign FocusAlign = {read=FFocusAlign, write=FFocusAlign, default=2};
	__property bool FocusBorder = {read=FFocusBorder, write=SetFocusBorder, default=0};
	__property System::Uitypes::TColor FocusBorderColor = {read=FFocusBorderColor, write=FFocusBorderColor, default=536870911};
	__property System::Uitypes::TColor BorderColor = {read=FBorderColor, write=SetBorderColor, default=536870911};
	__property System::Uitypes::TColor FocusColor = {read=FFocusColor, write=FFocusColor, default=536870911};
	__property System::Uitypes::TColor FocusFontColor = {read=FFocusFontColor, write=FFocusFontColor, default=-16777208};
	__property bool FocusLabel = {read=FFocusLabel, write=FFocusLabel, default=0};
	__property int FocusWidthInc = {read=FFocusWidthInc, write=FFocusWidthInc, default=0};
	__property int Height = {read=GetHeightEx, write=SetHeightEx, nodefault};
	__property System::Uitypes::TColor ModifiedColor = {read=FModifiedColor, write=FModifiedColor, default=-16777203};
	__property bool DisabledBorder = {read=FDisabledBorder, write=SetDisabledBorder, default=1};
	__property System::Uitypes::TColor DisabledColor = {read=FDisabledColor, write=SetDisabledColor, default=12632256};
	__property bool ShowError = {read=FShowError, write=FShowError, default=0};
	__property bool ShowModified = {read=FShowModified, write=FShowModified, default=0};
	__property bool ShowURL = {read=FShowURL, write=FShowURL, default=0};
	__property bool SoftBorder = {read=FSoftBorder, write=SetSoftBorder, default=0};
	__property System::Uitypes::TColor URLColor = {read=FURLColor, write=FURLColor, default=16711680};
	__property bool ReturnIsTab = {read=FReturnIsTab, write=FReturnIsTab, default=0};
	__property short LengthLimit = {read=FLengthLimit, write=FLengthLimit, default=0};
	__property bool TabOnFullLength = {read=FTabOnFullLength, write=FTabOnFullLength, default=0};
	__property short Precision = {read=FPrecision, write=SetPrecision, default=0};
	__property TPrecisionDisplay PrecisionDisplay = {read=FPrecisionDisplay, write=SetPrecisionDisplay, default=0};
	__property System::UnicodeString Prefix = {read=FPrefix, write=SetPrefix};
	__property System::UnicodeString Suffix = {read=FSuffix, write=SetSuffix};
	__property System::UnicodeString LabelCaption = {read=GetLabelCaption, write=SetLabelCaption};
	__property TLabelPosition LabelPosition = {read=FLabelPosition, write=SetLabelPosition, default=0};
	__property int LabelMargin = {read=FLabelMargin, write=SetLabelMargin, default=4};
	__property bool LabelTransparent = {read=FLabelTransparent, write=SetLabelTransparent, default=0};
	__property bool LabelAlwaysEnabled = {read=FLabelAlwaysEnabled, write=SetLabelAlwaysEnabled, default=0};
	__property Vcl::Graphics::TFont* LabelFont = {read=FLabelFont, write=SetLabelFont};
	__property TLookupSettings* Lookup = {read=FLookup, write=FLookup};
	__property TPersistence* Persistence = {read=FPersistence, write=FPersistence};
	__property BevelEdges = {default=15};
	__property BevelInner = {index=0, default=2};
	__property BevelKind = {default=0};
	__property BevelOuter = {index=1, default=1};
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property BiDiMode;
	__property ParentBiDiMode = {default=1};
	__property Constraints;
	__property DragKind = {default=0};
	__property OnEndDock;
	__property OnStartDock;
	__property AutoSelect = {default=1};
	__property AutoSize = {default=1};
	__property BorderStyle = {default=1};
	__property bool CanUndo = {read=FCanUndo, write=SetCanUndo, default=1};
	__property System::Uitypes::TColor Color = {read=GetColorEx, write=SetColorEx, nodefault};
	__property Ctl3D;
	__property DragCursor = {default=-12};
	__property DragMode = {default=0};
	__property bool Enabled = {read=GetEnabledEx, write=SetEnabledEx, nodefault};
	__property Font;
	__property HideSelection = {default=1};
	__property Hint = {default=0};
	__property bool HintShowLargeText = {read=FHintShowLargeText, write=FHintShowLargeText, default=0};
	__property ImeMode = {default=3};
	__property ImeName = {default=0};
	__property MaxLength = {default=0};
	__property OEMConvert = {default=0};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PasswordChar = {default=0};
	__property bool OleDropTarget = {read=FOleDropTarget, write=SetOleDropTarget, default=0};
	__property bool OleDropSource = {read=FOleDropSource, write=SetOleDropSource, default=0};
	__property PopupMenu;
	__property ReadOnly = {default=0};
	__property ShowHint;
	__property bool Signed = {read=FSigned, write=FSigned, default=0};
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property System::UnicodeString Text = {read=GetText, write=SetText};
	__property bool Transparent = {read=FTransparent, write=SetTransparent, default=0};
	__property System::UnicodeString ValidChars = {read=FValidChars, write=FValidChars};
	__property bool Visible = {read=GetVisible, write=SetVisible, nodefault};
	__property OnChange;
	__property OnClick;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDrag;
	__property OnStartDrag;
	__property OnEnter;
	__property OnExit;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMouseDown;
	__property OnMouseMove;
	__property System::Classes::TNotifyEvent OnMouseEnter = {read=FOnMouseEnter, write=FOnMouseEnter};
	__property System::Classes::TNotifyEvent OnMouseLeave = {read=FOnMouseLeave, write=FOnMouseLeave};
	__property OnMouseUp;
	__property OnContextPopup;
	__property TLookupSelectEvent OnLookupSelect = {read=FOnLookupSelect, write=FOnLookupSelect};
	__property TLookupIndexSelectEvent OnLookupIndexSelect = {read=FOnLookupIndexSelect, write=FOnLookupIndexSelect};
	__property System::Classes::TNotifyEvent OnLabelClick = {read=FOnLabelClick, write=FOnLabelClick};
	__property System::Classes::TNotifyEvent OnLabelDblClick = {read=FOnLabelDblClick, write=FOnLabelDblClick};
	__property TURLClickEvent OnURLClick = {read=FOnURLClick, write=FOnURLClick};
	__property System::UnicodeString Version = {read=GetVersion, write=SetVersion};
public:
	/* TWinControl.CreateParented */ inline __fastcall TAdvSmoothEdit(HWND ParentWindow) : Vcl::Mask::TCustomMaskEdit(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TAdvSmoothMaskEdit : public Vcl::Mask::TMaskEdit
{
	typedef Vcl::Mask::TMaskEdit inherited;
	
private:
	Vcl::Stdctrls::TLabel* FLabel;
	bool FAutoFocus;
	bool FAutoTab;
	bool FReturnIsTab;
	System::Classes::TAlignment FAlignment;
	System::Uitypes::TColor FFocusColor;
	System::Uitypes::TColor FFocusFontColor;
	System::Uitypes::TColor FNormalColor;
	System::Uitypes::TColor FLoadedColor;
	System::Uitypes::TColor FFontColor;
	System::Uitypes::TColor FModifiedColor;
	bool FShowModified;
	int FLabelMargin;
	TLabelPosition FLabelPosition;
	bool FLabelTransparent;
	bool FSelectFirstChar;
	bool FFlat;
	TMaskCompleteEvent FOnMaskComplete;
	System::Uitypes::TColor FDisabledColor;
	bool FDisabledBorder;
	System::UnicodeString FOriginalValue;
	bool FCanUndo;
	Vcl::Graphics::TFont* FLabelFont;
	bool FLabelAlwaysEnabled;
	System::Uitypes::TColor FFlatLineColor;
	bool FSoftBorder;
	bool FFocusBorder;
	System::Uitypes::TColor FFocusBorderColor;
	bool FMouseInControl;
	bool FBorder3D;
	bool FFlatParentColor;
	Vcl::Forms::TFormBorderStyle FOldBorder;
	bool FIsThemed;
	bool FFocusLabel;
	HIDESBASE void __fastcall SetAlignment(System::Classes::TAlignment value);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Winapi::Messages::TWMSetFocus &Msg);
	HIDESBASE MESSAGE void __fastcall WMKillFocus(Winapi::Messages::TWMKillFocus &Msg);
	HIDESBASE MESSAGE void __fastcall WMChar(Winapi::Messages::TWMKey &Msg);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall WMPaint(Winapi::Messages::TWMPaint &Msg);
	HIDESBASE MESSAGE void __fastcall WMNCPaint(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMParentFontChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMKeyDown(Winapi::Messages::TWMKey &Msg);
	System::UnicodeString __fastcall GetLabelCaption();
	void __fastcall SetLabelCaption(const System::UnicodeString Value);
	void __fastcall SetLabelMargin(const int Value);
	void __fastcall SetLabelPosition(const TLabelPosition Value);
	void __fastcall UpdateLabel();
	void __fastcall SetFlat(const bool Value);
	HIDESBASE bool __fastcall GetModified();
	HIDESBASE void __fastcall SetModified(const bool Value);
	void __fastcall SetLabelTransparent(const bool Value);
	void __fastcall SetDisabledColor(const System::Uitypes::TColor Value);
	void __fastcall SetDisabledBorder(const bool Value);
	bool __fastcall GetEnabledEx();
	void __fastcall SetEnabledEx(const bool Value);
	System::Uitypes::TColor __fastcall GetColorEx();
	void __fastcall SetColorEx(const System::Uitypes::TColor Value);
	void __fastcall SetLabelFont(Vcl::Graphics::TFont* const Value);
	void __fastcall LabelFontChanged(System::TObject* Sender);
	bool __fastcall GetVisible();
	HIDESBASE void __fastcall SetVisible(const bool Value);
	void __fastcall SetFlatLineColor(const System::Uitypes::TColor Value);
	void __fastcall PaintEdit();
	void __fastcall SetSoftBorder(const bool Value);
	void __fastcall DrawBorder();
	void __fastcall DrawControlBorder(HDC DC);
	bool __fastcall Is3DBorderButton();
	void __fastcall SetBorder3D(const bool Value);
	void __fastcall SetFlatRect(const bool Value);
	void __fastcall SetFlatParentColor(const bool Value);
	System::UnicodeString __fastcall GetVersion();
	void __fastcall SetVersion(const System::UnicodeString Value);
	void __fastcall SetAutoFocus(const bool Value);
	
protected:
	virtual int __fastcall GetVersionNr();
	DYNAMIC void __fastcall KeyUp(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall DoEnter();
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall CreateWnd();
	Vcl::Stdctrls::TLabel* __fastcall CreateLabel();
	
public:
	__fastcall virtual TAdvSmoothMaskEdit(System::Classes::TComponent* AOwner);
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	__fastcall virtual ~TAdvSmoothMaskEdit();
	__property bool Modified = {read=GetModified, write=SetModified, nodefault};
	virtual void __fastcall Loaded();
	__property Vcl::Stdctrls::TLabel* EditLabel = {read=FLabel};
	__property bool Border3D = {read=FBorder3D, write=SetBorder3D, nodefault};
	
__published:
	__property bool AutoFocus = {read=FAutoFocus, write=SetAutoFocus, nodefault};
	__property bool AutoTab = {read=FAutoTab, write=FAutoTab, default=1};
	__property bool CanUndo = {read=FCanUndo, write=FCanUndo, default=0};
	__property System::Uitypes::TColor Color = {read=GetColorEx, write=SetColorEx, nodefault};
	__property bool DisabledBorder = {read=FDisabledBorder, write=SetDisabledBorder, default=1};
	__property System::Uitypes::TColor DisabledColor = {read=FDisabledColor, write=SetDisabledColor, default=12632256};
	__property bool Enabled = {read=GetEnabledEx, write=SetEnabledEx, nodefault};
	__property bool Flat = {read=FFlat, write=SetFlat, nodefault};
	__property System::Uitypes::TColor FlatLineColor = {read=FFlatLineColor, write=SetFlatLineColor, nodefault};
	__property bool FlatParentColor = {read=FFlatParentColor, write=SetFlatParentColor, nodefault};
	__property bool ShowModified = {read=FShowModified, write=FShowModified, nodefault};
	__property System::Uitypes::TColor FocusBorderColor = {read=FFocusBorderColor, write=FFocusBorderColor, default=536870911};
	__property System::Uitypes::TColor FocusColor = {read=FFocusColor, write=FFocusColor, nodefault};
	__property bool FocusBorder = {read=FFocusBorder, write=FFocusBorder, nodefault};
	__property System::Uitypes::TColor FocusFontColor = {read=FFocusFontColor, write=FFocusFontColor, nodefault};
	__property bool FocusLabel = {read=FFocusLabel, write=FFocusLabel, default=0};
	__property System::UnicodeString LabelCaption = {read=GetLabelCaption, write=SetLabelCaption};
	__property bool LabelAlwaysEnabled = {read=FLabelAlwaysEnabled, write=FLabelAlwaysEnabled, nodefault};
	__property TLabelPosition LabelPosition = {read=FLabelPosition, write=SetLabelPosition, nodefault};
	__property int LabelMargin = {read=FLabelMargin, write=SetLabelMargin, nodefault};
	__property bool LabelTransparent = {read=FLabelTransparent, write=SetLabelTransparent, nodefault};
	__property Vcl::Graphics::TFont* LabelFont = {read=FLabelFont, write=SetLabelFont};
	__property System::Uitypes::TColor ModifiedColor = {read=FModifiedColor, write=FModifiedColor, nodefault};
	__property bool ReturnIsTab = {read=FReturnIsTab, write=FReturnIsTab, default=1};
	__property bool SoftBorder = {read=FSoftBorder, write=SetSoftBorder, default=0};
	__property System::Classes::TAlignment Alignment = {read=FAlignment, write=SetAlignment, default=0};
	__property bool SelectFirstChar = {read=FSelectFirstChar, write=FSelectFirstChar, nodefault};
	__property bool Visible = {read=GetVisible, write=SetVisible, nodefault};
	__property TMaskCompleteEvent OnMaskComplete = {read=FOnMaskComplete, write=FOnMaskComplete};
	__property System::UnicodeString Version = {read=GetVersion, write=SetVersion};
public:
	/* TWinControl.CreateParented */ inline __fastcall TAdvSmoothMaskEdit(HWND ParentWindow) : Vcl::Mask::TMaskEdit(ParentWindow) { }
	
};


typedef TQueryParams *PQueryParams;

struct DECLSPEC_DRECORD TQueryParams
{
public:
	int Precision;
	bool Flat;
	int Lengthlimit;
	System::UnicodeString Prefix;
	System::UnicodeString Suffix;
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TEditDropTarget : public Advsmootheddd::TAEDropTarget
{
	typedef Advsmootheddd::TAEDropTarget inherited;
	
private:
	TAdvSmoothEdit* FAdvSmoothEdit;
	
public:
	__fastcall TEditDropTarget(TAdvSmoothEdit* aEdit);
	virtual void __fastcall DropText(const System::Types::TPoint &pt, System::UnicodeString s);
	virtual void __fastcall DragMouseMove(const System::Types::TPoint &pt, bool &allow);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TEditDropTarget() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const System::Int8 MAJ_VER = System::Int8(0x2);
static const System::Int8 MIN_VER = System::Int8(0x8);
static const System::Int8 REL_VER = System::Int8(0x6);
static const System::Int8 BLD_VER = System::Int8(0x0);
extern DELPHI_PACKAGE System::StaticArray<int, 2> BorderRec;
extern DELPHI_PACKAGE bool AdvSmoothEdit_DEFAULTHANDLING;
extern DELPHI_PACKAGE bool __fastcall AdvInputQuery(const TAdvSmoothEditType QueryType, PQueryParams QueryParams, const System::UnicodeString ACaption, const System::UnicodeString APrompt, System::UnicodeString &Value);
}	/* namespace Advsmoothedit */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ADVSMOOTHEDIT)
using namespace Advsmoothedit;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AdvsmootheditHPP
