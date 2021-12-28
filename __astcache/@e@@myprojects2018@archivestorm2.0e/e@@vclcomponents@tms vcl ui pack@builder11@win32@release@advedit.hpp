// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AdvEdit.pas' rev: 35.00 (Windows)

#ifndef AdveditHPP
#define AdveditHPP

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
#include <AdvEddd.hpp>
#include <System.Types.hpp>
#include <AdvStyleIF.hpp>
#include <Winapi.CommCtrl.hpp>
#include <AdvToolTip.hpp>
#include <System.Character.hpp>
#include <Vcl.Themes.hpp>
#include <System.UITypes.hpp>
#include <Vcl.Menus.hpp>
#include <System.MaskUtils.hpp>

//-- user supplied -----------------------------------------------------------

namespace Advedit
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TWinCtrl;
class DELPHICLASS TRangeList;
class DELPHICLASS TPersistence;
class DELPHICLASS TListBoxTab;
class DELPHICLASS TListHintWindow;
class DELPHICLASS TLookupSettings;
class DELPHICLASS TCustomAdvEditLabel;
class DELPHICLASS TCustomAdvEdit;
class DELPHICLASS TAdvEdit;
class DELPHICLASS TAdvCustomMaskEdit;
class DELPHICLASS TAdvMaskEdit;
struct TQueryParams;
class DELPHICLASS TEditDropTarget;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TLabelPosition : unsigned char { lpLeftTop, lpLeftCenter, lpLeftBottom, lpTopLeft, lpBottomLeft, lpLeftTopLeft, lpLeftCenterLeft, lpLeftBottomLeft, lpTopCenter, lpBottomCenter, lpRightTop, lpRightCenter, lpRighBottom, lpTopRight, lpBottomRight };

enum DECLSPEC_DENUM TAdvEditType : unsigned char { etString, etNumeric, etFloat, etUppercase, etMixedCase, etLowerCase, etPassword, etMoney, etRange, etHex, etAlphaNumeric, etValidChars, etInvalidChars };

enum DECLSPEC_DENUM TAutoType : unsigned char { atNumeric, atFloat, atString, atDate, atTime, atHex };

typedef void __fastcall (__closure *TValueValidateEvent)(System::TObject* Sender, System::UnicodeString Value, bool &IsValid);

typedef void __fastcall (__closure *TClipboardEvent)(System::TObject* Sender, System::UnicodeString Value, bool &allow);

typedef void __fastcall (__closure *TClipboardAllowEvent)(System::TObject* Sender, System::UnicodeString &Value, bool &allow);

typedef void __fastcall (__closure *TMaskCompleteEvent)(System::TObject* Sender, System::UnicodeString Value, bool &accept);

typedef void __fastcall (__closure *TLookupSelectEvent)(System::TObject* Sender, System::UnicodeString &Value);

typedef void __fastcall (__closure *TLookupIndexSelectEvent)(System::TObject* Sender, int Index, System::UnicodeString &Value);

typedef void __fastcall (__closure *TLookupNeedDataEvent)(System::TObject* Sender, System::UnicodeString Value, System::Classes::TStrings* List, int &ItemIndex);

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

class PASCALIMPLEMENTATION TListBoxTab : public Vcl::Stdctrls::TListBox
{
	typedef Vcl::Stdctrls::TListBox inherited;
	
private:
	bool FHandleTab;
	MESSAGE void __fastcall WMGetDlgCode(Winapi::Messages::TMessage &Message);
	
__published:
	__property bool HandleTab = {read=FHandleTab, write=FHandleTab, nodefault};
public:
	/* TCustomListBox.Create */ inline __fastcall virtual TListBoxTab(System::Classes::TComponent* AOwner) : Vcl::Stdctrls::TListBox(AOwner) { }
	/* TCustomListBox.Destroy */ inline __fastcall virtual ~TListBoxTab() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TListBoxTab(HWND ParentWindow) : Vcl::Stdctrls::TListBox(ParentWindow) { }
	
};


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


enum DECLSPEC_DENUM TValueSeparator : unsigned char { vsBracket, vsSquareBracket, vsLargerSmaller, vsNone };

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
	bool FAcceptOnTab;
	bool FShowValue;
	bool FSearchValue;
	Vcl::Graphics::TFont* FFont;
	int FSpacing;
	TValueSeparator FValueSeparator;
	void __fastcall SetDisplayList(System::Classes::TStringList* const Value);
	void __fastcall SetValueList(System::Classes::TStringList* const Value);
	void __fastcall SetNumChars(const int Value);
	void __fastcall SetFont(Vcl::Graphics::TFont* const Value);
	
public:
	__fastcall TLookupSettings();
	__fastcall virtual ~TLookupSettings();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	void __fastcall AddPair(System::UnicodeString DisplayText, System::UnicodeString Value);
	
__published:
	__property bool AcceptOnTab = {read=FAcceptOnTab, write=FAcceptOnTab, default=0};
	__property bool CaseSensitive = {read=FCaseSensitive, write=FCaseSensitive, default=0};
	__property System::Uitypes::TColor Color = {read=FColor, write=FColor, default=-16777211};
	__property int DisplayCount = {read=FDisplayCount, write=FDisplayCount, default=4};
	__property System::Classes::TStringList* DisplayList = {read=FDisplayList, write=SetDisplayList};
	__property bool Enabled = {read=FEnabled, write=FEnabled, default=0};
	__property Vcl::Graphics::TFont* Font = {read=FFont, write=SetFont};
	__property bool History = {read=FHistory, write=FHistory, default=0};
	__property int NumChars = {read=FNumChars, write=SetNumChars, default=2};
	__property System::Classes::TStringList* ValueList = {read=FValueList, write=SetValueList};
	__property bool Multi = {read=FMulti, write=FMulti, default=0};
	__property System::WideChar Separator = {read=FSeparator, write=FSeparator, nodefault};
	__property bool SearchValue = {read=FSearchValue, write=FSearchValue, default=0};
	__property bool ShowValue = {read=FShowValue, write=FShowValue, default=0};
	__property int Spacing = {read=FSpacing, write=FSpacing, default=0};
	__property TValueSeparator ValueSeparator = {read=FValueSeparator, write=FValueSeparator, default=0};
};

#pragma pack(pop)

typedef void __fastcall (__closure *TURLClickEvent)(System::TObject* Sender, System::UnicodeString URL, bool &Show);

typedef void __fastcall (__closure *TEditOLEDropTextEvent)(System::TObject* Sender, System::UnicodeString &AText, bool &Allow);

enum DECLSPEC_DENUM TEditAlign : unsigned char { eaLeft, eaRight, eaDefault, eaCenter };

enum DECLSPEC_DENUM TPrecisionDisplay : unsigned char { pdNormal, pdShortest };

class PASCALIMPLEMENTATION TCustomAdvEditLabel : public Vcl::Stdctrls::TLabel
{
	typedef Vcl::Stdctrls::TLabel inherited;
	
private:
	bool FAlwaysEnable;
	HIDESBASE MESSAGE void __fastcall CMEnabledChanged(Winapi::Messages::TMessage &Msg);
	
__published:
	__property bool AlwaysEnable = {read=FAlwaysEnable, write=FAlwaysEnable, nodefault};
public:
	/* TCustomLabel.Create */ inline __fastcall virtual TCustomAdvEditLabel(System::Classes::TComponent* AOwner) : Vcl::Stdctrls::TLabel(AOwner) { }
	
public:
	/* TGraphicControl.Destroy */ inline __fastcall virtual ~TCustomAdvEditLabel() { }
	
};


class PASCALIMPLEMENTATION TCustomAdvEdit : public Vcl::Stdctrls::TCustomEdit
{
	typedef Vcl::Stdctrls::TCustomEdit inherited;
	
private:
	bool FAlignChanging;
	TCustomAdvEditLabel* FLabel;
	Vcl::Graphics::TFont* FLabelFont;
	TLabelPosition FLabelPosition;
	int FLabelMargin;
	bool FLabelTransparent;
	bool FAutoFocus;
	bool FAutoValidate;
	bool FCanUndo;
	TAdvEditType FEditType;
	TEditAlign FEditAlign;
	TEditAlign FOldEditAlign;
	Vcl::Forms::TFormBorderStyle FOldBorder;
	bool FExcelStyleDecimalSeparator;
	bool FTabOnFullLength;
	System::Uitypes::TColor FDisabledColor;
	System::Uitypes::TColor FDisabledTextColor;
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
	TClipboardAllowEvent FOnClipboardCanPaste;
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
	System::Uitypes::TColor FBorderColor;
	bool FHintShowLargeText;
	bool FShowError;
	bool FAutoThousandSeparator;
	System::UnicodeString FEmptyText;
	bool FEmptyTextFocused;
	System::Uitypes::TFontStyles FEmptyTextStyle;
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
	TListBoxTab* FLookupListBox;
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
	System::UnicodeString FInvalidChars;
	bool FIsWinXP;
	bool FIsThemed;
	bool FBlockChange;
	bool FAllowNumericNullValue;
	bool FParentFnt;
	bool FFullTextSearch;
	bool FDesignTime;
	bool FDesignCreate;
	System::Word FReturnAsTabKey;
	int FMinValue;
	int FMaxValue;
	double FMinFloatValue;
	double FMaxFloatValue;
	bool FEditorEnabled;
	bool FGotReturn;
	TLookupNeedDataEvent FOnLookupNeedData;
	int FLblFntHeight;
	bool FLblUpdate;
	bool FLoaded;
	System::Classes::TNotifyEvent FOnAfterClipboardCut;
	System::Classes::TNotifyEvent FOnAfterClipboardPaste;
	System::Classes::TNotifyEvent FOnAfterClipboardCopy;
	TEditOLEDropTextEvent FOnOLEDropText;
	Advstyleif::TTMSStyle FTMSStyle;
	int FHexValue;
	System::Byte FHexDigits;
	System::Word FRangeCharacterFrequency;
	System::UnicodeString FRangeCharacter;
	bool FLeadingZeros;
	Advtooltip::TAdvToolTip* FToolTip;
	Advtooltip::TAdvToolTipWindow* FToolTipWindow;
	HIDESBASE MESSAGE void __fastcall CMTextChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMCancelMode(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMShowingChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMEnabledChanged(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall CMVisibleChanged(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall CMHintShow(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall CMParentFontChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMWantSpecialKey(Winapi::Messages::TWMKey &Msg);
	HIDESBASE MESSAGE void __fastcall CNCommand(Winapi::Messages::TWMCommand &Message);
	MESSAGE void __fastcall CNCtlColorEdit(Winapi::Messages::TWMCtlColor &Message);
	MESSAGE void __fastcall CNCtlColorStatic(Winapi::Messages::TWMCtlColor &Message);
	MESSAGE void __fastcall WMActivate(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Winapi::Messages::TWMSetFocus &Msg);
	HIDESBASE MESSAGE void __fastcall WMKillFocus(Winapi::Messages::TWMKillFocus &Msg);
	HIDESBASE MESSAGE void __fastcall WMChar(Winapi::Messages::TWMKey &Msg);
	MESSAGE void __fastcall WMPaste(Winapi::Messages::TMessage &Msg);
	MESSAGE void __fastcall WMCut(Winapi::Messages::TWMNoParams &Message);
	MESSAGE void __fastcall WMCopy(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall WMKeyDown(Winapi::Messages::TWMKey &Msg);
	HIDESBASE MESSAGE void __fastcall WMKeyUp(Winapi::Messages::TWMKey &Msg);
	HIDESBASE MESSAGE void __fastcall WMSysKeyDown(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall WMLButtonUp(Winapi::Messages::TWMMouse &Msg);
	HIDESBASE MESSAGE void __fastcall WMLButtonDown(Winapi::Messages::TWMMouse &Msg);
	HIDESBASE MESSAGE void __fastcall WMPaint(Winapi::Messages::TWMPaint &Msg);
	HIDESBASE MESSAGE void __fastcall WMNCPaint(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMEraseBkGnd(Winapi::Messages::TWMEraseBkgnd &Message);
	HIDESBASE MESSAGE void __fastcall WMDestroy(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall WMMouseMove(Winapi::Messages::TWMMouse &Msg);
	HIDESBASE MESSAGE void __fastcall WMContextMenu(Winapi::Messages::TWMContextMenu &Message);
	void __fastcall SetEditType(TAdvEditType value);
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
	void __fastcall UpdateLabelPos();
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
	void __fastcall SetEditAlign(const TEditAlign Value);
	void __fastcall SetCanUndo(const bool Value);
	System::Uitypes::TColor __fastcall GetColorEx();
	void __fastcall SetColorEx(const System::Uitypes::TColor Value);
	void __fastcall SetTransparent(const bool Value);
	void __fastcall SetFlatLineColor(const System::Uitypes::TColor Value);
	void __fastcall SetFlatParentColor(const bool Value);
	void __fastcall LabelFontChange(System::TObject* Sender);
	void __fastcall SetLabelFont(Vcl::Graphics::TFont* const Value);
	void __fastcall ApplyErrorColor();
	bool __fastcall GetError();
	void __fastcall SetError(const bool Value);
	void __fastcall ApplyURL(const bool Value);
	void __fastcall DrawErrorLines(Vcl::Graphics::TCanvas* Canvas, int ErrPos, int ErrLen);
	void __fastcall SetOleDropSource(const bool Value);
	void __fastcall SetOleDropTarget(const bool Value);
	System::UnicodeString __fastcall GetVersion();
	void __fastcall SetVersion(const System::UnicodeString Value);
	void __fastcall CloseLookup();
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
	void __fastcall SetBorderColor(const System::Uitypes::TColor Value);
	void __fastcall SetEmptyTextStyle(const System::Uitypes::TFontStyles Value);
	bool __fastcall GetLookupVisible();
	System::Variant __fastcall GetValue();
	void __fastcall SetValue(const System::Variant &Value);
	void __fastcall SetDisabledTextColor(const System::Uitypes::TColor Value);
	void __fastcall SetLookupVisible(const bool Value);
	void __fastcall SetUIStyle(const Advstyleif::TTMSStyle Value);
	int __fastcall GetHexValue();
	void __fastcall SetHexValue(const int Value);
	void __fastcall SetHexDigits(const System::Byte Value);
	void __fastcall SetFloatInt(const double Value);
	void __fastcall SetIntInt(const int Value);
	
protected:
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation AOperation);
	virtual void __fastcall SetComponentStyle(Advstyleif::TTMSStyle AStyle);
	virtual int __fastcall GetVersionNr();
	DYNAMIC void __fastcall Change();
	virtual void __fastcall DoEdit();
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall CreateWnd();
	TCustomAdvEditLabel* __fastcall CreateLabel();
	virtual void __fastcall Loaded();
	void __fastcall UpdateLookup();
	void __fastcall InvalidateCaret(const System::Types::TPoint &pt);
	void __fastcall EraseCaret();
	void __fastcall DrawCaretByCursor();
	void __fastcall SetCaretByCursor();
	__property int IndentR = {read=FIndentR, write=FIndentR, nodefault};
	__property int IndentL = {read=FIndentL, write=FIndentL, nodefault};
	virtual bool __fastcall DoValidate(System::UnicodeString value);
	virtual void __fastcall ValidateEvent(System::UnicodeString Value, bool &IsValid);
	virtual void __fastcall LabelClick(System::TObject* Sender);
	virtual void __fastcall LabelDblClick(System::TObject* Sender);
	virtual void __fastcall DoOLEDropText(System::UnicodeString &AText, bool &Allow);
	virtual void __fastcall SetParent(Vcl::Controls::TWinControl* AParent);
	virtual void __fastcall SetEnabled(bool Value);
	void __fastcall SetTextDirect(System::UnicodeString s);
	virtual bool __fastcall TestURL();
	virtual bool __fastcall IsDB();
	__property bool BlockDefaultHandling = {read=FBlockDefaultHandling, write=FBlockDefaultHandling, nodefault};
	DYNAMIC void __fastcall ChangeScale(int M, int D, bool isDpiChange)/* overload */;
	virtual void __fastcall DoLookupNeedData(System::UnicodeString Value, System::Classes::TStrings* List, int &ItemIndex);
	__property bool AllowNumericNullValue = {read=FAllowNumericNullValue, write=FAllowNumericNullValue, default=0};
	__property bool AutoFocus = {read=FAutoFocus, write=FAutoFocus, default=0};
	__property bool AutoThousandSeparator = {read=FAutoThousandSeparator, write=SetAutoThousandSeparator, default=1};
	__property bool AutoValidate = {read=FAutoValidate, write=FAutoValidate, default=1};
	__property System::Uitypes::TColor BorderColor = {read=FBorderColor, write=SetBorderColor, default=536870911};
	__property bool DefaultHandling = {read=FDefaultHandling, write=FDefaultHandling, default=1};
	__property TEditAlign EditAlign = {read=FEditAlign, write=SetEditAlign, default=0};
	__property bool EditorEnabled = {read=FEditorEnabled, write=FEditorEnabled, default=1};
	__property TAdvEditType EditType = {read=FEditType, write=SetEditType, default=0};
	__property System::UnicodeString EmptyText = {read=FEmptyText, write=SetEmptyText};
	__property bool EmptyTextFocused = {read=FEmptyTextFocused, write=FEmptyTextFocused, default=0};
	__property System::Uitypes::TFontStyles EmptyTextStyle = {read=FEmptyTextStyle, write=SetEmptyTextStyle, nodefault};
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
	__property System::Uitypes::TColor FocusColor = {read=FFocusColor, write=FFocusColor, default=536870911};
	__property System::Uitypes::TColor FocusFontColor = {read=FFocusFontColor, write=FFocusFontColor, default=-16777208};
	__property bool FocusLabel = {read=FFocusLabel, write=FFocusLabel, default=0};
	__property int FocusWidthInc = {read=FFocusWidthInc, write=FFocusWidthInc, default=0};
	__property bool FullTextSearch = {read=FFullTextSearch, write=FFullTextSearch, default=0};
	__property bool LeadingZeros = {read=FLeadingZeros, write=FLeadingZeros, default=1};
	__property int Height = {read=GetHeightEx, write=SetHeightEx, nodefault};
	__property int MinValue = {read=FMinValue, write=FMinValue, default=0};
	__property int MaxValue = {read=FMaxValue, write=FMaxValue, default=0};
	__property double MinFloatValue = {read=FMinFloatValue, write=FMinFloatValue};
	__property double MaxFloatValue = {read=FMaxFloatValue, write=FMaxFloatValue};
	__property System::Uitypes::TColor ModifiedColor = {read=FModifiedColor, write=FModifiedColor, default=-16777203};
	__property bool DisabledBorder = {read=FDisabledBorder, write=SetDisabledBorder, default=1};
	__property System::Uitypes::TColor DisabledColor = {read=FDisabledColor, write=SetDisabledColor, default=12632256};
	__property System::Uitypes::TColor DisabledTextColor = {read=FDisabledTextColor, write=SetDisabledTextColor, default=536870911};
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
	__property System::UnicodeString RangeCharacter = {read=FRangeCharacter, write=FRangeCharacter};
	__property System::Word RangeCharacterFrequency = {read=FRangeCharacterFrequency, write=FRangeCharacterFrequency, default=1};
	__property System::UnicodeString Suffix = {read=FSuffix, write=SetSuffix};
	__property System::UnicodeString LabelCaption = {read=GetLabelCaption, write=SetLabelCaption};
	__property TLabelPosition LabelPosition = {read=FLabelPosition, write=SetLabelPosition, default=0};
	__property int LabelMargin = {read=FLabelMargin, write=SetLabelMargin, default=4};
	__property bool LabelTransparent = {read=FLabelTransparent, write=SetLabelTransparent, default=0};
	__property bool LabelAlwaysEnabled = {read=FLabelAlwaysEnabled, write=SetLabelAlwaysEnabled, default=0};
	__property Vcl::Graphics::TFont* LabelFont = {read=FLabelFont, write=SetLabelFont};
	__property TLookupSettings* Lookup = {read=FLookup, write=FLookup};
	__property TPersistence* Persistence = {read=FPersistence, write=FPersistence};
	__property bool CanUndo = {read=FCanUndo, write=SetCanUndo, default=1};
	__property System::Uitypes::TColor Color = {read=GetColorEx, write=SetColorEx, nodefault};
	__property bool HintShowLargeText = {read=FHintShowLargeText, write=FHintShowLargeText, default=0};
	__property System::UnicodeString InvalidChars = {read=FInvalidChars, write=FInvalidChars};
	__property bool OleDropTarget = {read=FOleDropTarget, write=SetOleDropTarget, default=0};
	__property bool OleDropSource = {read=FOleDropSource, write=SetOleDropSource, default=0};
	__property PopupMenu;
	__property ReadOnly = {default=0};
	__property ShowHint;
	__property bool Signed = {read=FSigned, write=FSigned, default=0};
	__property System::UnicodeString Text = {read=GetText, write=SetText};
	__property Advtooltip::TAdvToolTip* ToolTip = {read=FToolTip, write=FToolTip};
	__property bool Transparent = {read=FTransparent, write=SetTransparent, default=0};
	__property System::UnicodeString ValidChars = {read=FValidChars, write=FValidChars};
	__property System::UnicodeString Version = {read=GetVersion, write=SetVersion};
	__property bool Visible = {read=GetVisible, write=SetVisible, nodefault};
	__property System::Classes::TNotifyEvent OnMouseEnter = {read=FOnMouseEnter, write=FOnMouseEnter};
	__property System::Classes::TNotifyEvent OnMouseLeave = {read=FOnMouseLeave, write=FOnMouseLeave};
	__property TLookupSelectEvent OnLookupSelect = {read=FOnLookupSelect, write=FOnLookupSelect};
	__property TLookupIndexSelectEvent OnLookupIndexSelect = {read=FOnLookupIndexSelect, write=FOnLookupIndexSelect};
	__property System::Classes::TNotifyEvent OnLabelClick = {read=FOnLabelClick, write=FOnLabelClick};
	__property System::Classes::TNotifyEvent OnLabelDblClick = {read=FOnLabelDblClick, write=FOnLabelDblClick};
	__property TLookupNeedDataEvent OnLookupNeedData = {read=FOnLookupNeedData, write=FOnLookupNeedData};
	__property TURLClickEvent OnURLClick = {read=FOnURLClick, write=FOnURLClick};
	__property TValueValidateEvent OnValueValidate = {read=FOnValueValidate, write=FOnValueValidate};
	__property System::Classes::TNotifyEvent OnAfterClipboardCopy = {read=FOnAfterClipboardCopy, write=FOnAfterClipboardCopy};
	__property System::Classes::TNotifyEvent OnAfterClipboardCut = {read=FOnAfterClipboardCut, write=FOnAfterClipboardCut};
	__property System::Classes::TNotifyEvent OnAfterClipboardPaste = {read=FOnAfterClipboardPaste, write=FOnAfterClipboardPaste};
	__property TClipboardEvent OnClipboardCopy = {read=FOnClipboardCopy, write=FOnClipboardCopy};
	__property TClipboardEvent OnClipboardCut = {read=FOnClipboardCut, write=FOnClipboardCut};
	__property TClipboardEvent OnClipboardPaste = {read=FOnClipboardPaste, write=FOnClipboardPaste};
	__property TClipboardAllowEvent OnClipboardCanPaste = {read=FOnClipboardCanPaste, write=FOnClipboardCanPaste};
	__property TEditOLEDropTextEvent OnOLEDropText = {read=FOnOLEDropText, write=FOnOLEDropText};
	__property Advstyleif::TTMSStyle UIStyle = {read=FTMSStyle, write=SetUIStyle, default=8};
	__property System::Byte HexDigits = {read=FHexDigits, write=SetHexDigits, default=0};
	__property int HexValue = {read=GetHexValue, write=SetHexValue, default=0};
	__property double FloatValueInt = {read=GetFloat, write=SetFloatInt};
	__property int IntValueInt = {read=GetInt, write=SetIntInt, nodefault};
	
public:
	__fastcall virtual TCustomAdvEdit(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomAdvEdit();
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	HIDESBASE void __fastcall SelectAll();
	void __fastcall SelectBeforeDecimal();
	void __fastcall SelectAfterDecimal();
	void __fastcall Init();
	virtual void __fastcall Clear();
	int __fastcall GetTextSize();
	int __fastcall CharFromPos(const System::Types::TPoint &pt);
	System::Types::TPoint __fastcall PosFromChar(System::Word uChar);
	__property double FloatValue = {read=GetFloat, write=SetFloat};
	__property int IntValue = {read=GetInt, write=SetInt, nodefault};
	__property bool Modified = {read=GetModified, write=SetModified, nodefault};
	__property bool IsError = {read=GetError, write=SetError, nodefault};
	bool __fastcall RangeStrToList(TRangeList* rangelist);
	void __fastcall ListToRangeStr(TRangeList* rangelist);
	void __fastcall SetEditText(System::UnicodeString AValue);
	virtual void __fastcall LoadPersist();
	virtual void __fastcall SavePersist();
	virtual void __fastcall Validate();
	void __fastcall ShowBalloon(const System::UnicodeString ATitle, const System::UnicodeString AText, Advstyleif::TBalloonType AType);
	void __fastcall HideBalloon();
	void __fastcall ShowValidation(const System::UnicodeString AText);
	void __fastcall HideValidation();
	__property System::Variant Value = {read=GetValue, write=SetValue};
	__property System::Word ReturnAsTabKey = {read=FReturnAsTabKey, write=FReturnAsTabKey, nodefault};
	__property System::UnicodeString OrigText = {read=FOldString, write=FOldString};
	__property bool LookupVisible = {read=GetLookupVisible, write=SetLookupVisible, nodefault};
	__property TCustomAdvEditLabel* EditLabel = {read=FLabel};
	__property bool Border3D = {read=FBorder3D, write=SetBorder3D, nodefault};
	__classmethod int __fastcall HexToInt(System::UnicodeString s);
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomAdvEdit(HWND ParentWindow) : Vcl::Stdctrls::TCustomEdit(ParentWindow) { }
	
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


class PASCALIMPLEMENTATION TAdvEdit : public TCustomAdvEdit
{
	typedef TCustomAdvEdit inherited;
	
public:
	__property AutoValidate = {default=1};
	
__published:
	__property OnValueValidate;
	__property OnAfterClipboardCopy;
	__property OnAfterClipboardCut;
	__property OnAfterClipboardPaste;
	__property OnClipboardCopy;
	__property OnClipboardCut;
	__property OnClipboardPaste;
	__property OnClipboardCanPaste;
	__property AllowNumericNullValue = {default=0};
	__property AutoFocus = {default=0};
	__property AutoThousandSeparator = {default=1};
	__property BorderColor = {default=536870911};
	__property DefaultHandling = {default=1};
	__property EditAlign = {default=0};
	__property EditorEnabled = {default=1};
	__property EditType = {default=0};
	__property EmptyText = {default=0};
	__property EmptyTextFocused = {default=0};
	__property EmptyTextStyle;
	__property ErrorMarkerPos = {default=0};
	__property ErrorMarkerLen = {default=0};
	__property ErrorColor = {default=255};
	__property ErrorFontColor = {default=16777215};
	__property ExcelStyleDecimalSeparator = {default=0};
	__property Flat = {default=0};
	__property FlatLineColor = {default=0};
	__property FlatParentColor = {default=1};
	__property FocusAlign = {default=2};
	__property FocusBorder = {default=0};
	__property FocusBorderColor = {default=536870911};
	__property FocusColor = {default=536870911};
	__property FocusFontColor = {default=-16777208};
	__property FocusLabel = {default=0};
	__property FocusWidthInc = {default=0};
	__property FullTextSearch = {default=0};
	__property Height;
	__property MinValue = {default=0};
	__property MaxValue = {default=0};
	__property MinFloatValue = {default=0};
	__property MaxFloatValue = {default=0};
	__property ModifiedColor = {default=-16777203};
	__property DisabledBorder = {default=1};
	__property DisabledColor = {default=12632256};
	__property DisabledTextColor = {default=536870911};
	__property ShowError = {default=0};
	__property ShowModified = {default=0};
	__property ShowURL = {default=0};
	__property SoftBorder = {default=0};
	__property URLColor = {default=16711680};
	__property RangeCharacter = {default=0};
	__property RangeCharacterFrequency = {default=1};
	__property ReturnIsTab = {default=0};
	__property LengthLimit = {default=0};
	__property TabOnFullLength = {default=0};
	__property Precision = {default=0};
	__property PrecisionDisplay = {default=0};
	__property Prefix = {default=0};
	__property Suffix = {default=0};
	__property LabelCaption = {default=0};
	__property LabelPosition = {default=0};
	__property LabelMargin = {default=4};
	__property LabelTransparent = {default=0};
	__property LabelAlwaysEnabled = {default=0};
	__property LabelFont;
	__property LeadingZeros = {default=1};
	__property Lookup;
	__property Persistence;
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
	__property CanUndo = {default=1};
	__property CharCase = {default=0};
	__property Color;
	__property Ctl3D;
	__property DoubleBuffered;
	__property DragCursor = {default=-12};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property HideSelection = {default=1};
	__property Hint = {default=0};
	__property HintShowLargeText = {default=0};
	__property ImeMode = {default=3};
	__property ImeName = {default=0};
	__property InvalidChars = {default=0};
	__property MaxLength = {default=0};
	__property OEMConvert = {default=0};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PasswordChar = {default=0};
	__property OleDropTarget = {default=0};
	__property OleDropSource = {default=0};
	__property PopupMenu;
	__property ReadOnly = {default=0};
	__property ShowHint;
	__property Signed = {default=0};
	__property StyleElements = {default=7};
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Text;
	__property ToolTip;
	__property Transparent = {default=0};
	__property ValidChars = {default=0};
	__property Visible;
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
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnMouseUp;
	__property OnContextPopup;
	__property OnLookupSelect;
	__property OnLookupIndexSelect;
	__property OnLabelClick;
	__property OnLabelDblClick;
	__property OnLookupNeedData;
	__property OnOLEDropText;
	__property OnURLClick;
	__property Version = {default=0};
	__property UIStyle = {default=8};
	__property HexDigits = {default=0};
	__property HexValue = {default=0};
public:
	/* TCustomAdvEdit.Create */ inline __fastcall virtual TAdvEdit(System::Classes::TComponent* AOwner) : TCustomAdvEdit(AOwner) { }
	/* TCustomAdvEdit.Destroy */ inline __fastcall virtual ~TAdvEdit() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TAdvEdit(HWND ParentWindow) : TCustomAdvEdit(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TAdvCustomMaskEdit : public Vcl::Mask::TCustomMaskEdit
{
	typedef Vcl::Mask::TCustomMaskEdit inherited;
	
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
	System::Uitypes::TColor FBorderColor;
	int FIndentR;
	int FIndentL;
	bool FMouseInControl;
	bool FBorder3D;
	bool FFlatParentColor;
	Vcl::Forms::TFormBorderStyle FOldBorder;
	bool FIsThemed;
	bool FFocusLabel;
	bool FParentFnt;
	bool FGotReturn;
	System::Classes::TNotifyEvent FOnValidateError;
	System::Classes::TNotifyEvent FOnValidateEdit;
	int FLblFntHeight;
	bool FLblUpdate;
	bool FLoaded;
	bool FDefaultHandling;
	bool FBlockDefaultHandling;
	System::Classes::TNotifyEvent FOnAfterClipboardCut;
	System::Classes::TNotifyEvent FOnAfterClipboardPaste;
	TClipboardEvent FOnClipboardCut;
	TClipboardEvent FOnClipboardPaste;
	System::Classes::TNotifyEvent FOnAfterClipboardCopy;
	TClipboardEvent FOnClipboardCopy;
	Advstyleif::TTMSStyle FTMSStyle;
	Advtooltip::TAdvToolTip* FToolTip;
	Advtooltip::TAdvToolTipWindow* FToolTipWindow;
	HIDESBASE void __fastcall SetAlignment(System::Classes::TAlignment value);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall CMVisibleChanged(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall CMShowingChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMParentFontChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMWantSpecialKey(Winapi::Messages::TWMKey &Msg);
	HIDESBASE MESSAGE void __fastcall WMPaste(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall WMCut(Winapi::Messages::TWMNoParams &Message);
	MESSAGE void __fastcall WMCopy(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Winapi::Messages::TWMSetFocus &Msg);
	HIDESBASE MESSAGE void __fastcall WMKillFocus(Winapi::Messages::TWMKillFocus &Msg);
	HIDESBASE MESSAGE void __fastcall WMChar(Winapi::Messages::TWMKey &Msg);
	HIDESBASE MESSAGE void __fastcall WMPaint(Winapi::Messages::TWMPaint &Msg);
	HIDESBASE MESSAGE void __fastcall WMNCPaint(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMKeyDown(Winapi::Messages::TWMKey &Msg);
	HIDESBASE MESSAGE void __fastcall WMKeyUp(Winapi::Messages::TWMKey &Msg);
	System::UnicodeString __fastcall GetLabelCaption();
	void __fastcall SetLabelCaption(const System::UnicodeString Value);
	void __fastcall SetLabelMargin(const int Value);
	void __fastcall SetLabelPosition(const TLabelPosition Value);
	void __fastcall UpdateLabel();
	void __fastcall UpdateLabelPos();
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
	void __fastcall SetBorderColor(const System::Uitypes::TColor Value);
	bool __fastcall GetVisible();
	void __fastcall SetUIStyle(const Advstyleif::TTMSStyle Value);
	
protected:
	void __fastcall SetComponentStyle(Advstyleif::TTMSStyle AStyle);
	__property int IndentR = {read=FIndentR, write=FIndentR, nodefault};
	__property int IndentL = {read=FIndentL, write=FIndentL, nodefault};
	virtual int __fastcall GetVersionNr();
	DYNAMIC void __fastcall KeyUp(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall DoEnter();
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall CreateWnd();
	virtual void __fastcall SetParent(Vcl::Controls::TWinControl* AParent);
	virtual void __fastcall ValidateError();
	Vcl::Stdctrls::TLabel* __fastcall CreateLabel();
	__property System::Uitypes::TColor NormalColor = {read=FNormalColor, nodefault};
	__property bool BlockDefaultHandling = {read=FBlockDefaultHandling, write=FBlockDefaultHandling, nodefault};
	__property Advstyleif::TTMSStyle UIStyle = {read=FTMSStyle, write=SetUIStyle, default=8};
	DYNAMIC void __fastcall ChangeScale(int M, int D, bool isDpiChange)/* overload */;
	
public:
	__fastcall virtual TAdvCustomMaskEdit(System::Classes::TComponent* AOwner);
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	__fastcall virtual ~TAdvCustomMaskEdit();
	__property bool Modified = {read=GetModified, write=SetModified, nodefault};
	virtual void __fastcall Loaded();
	virtual void __fastcall ValidateEdit();
	void __fastcall ShowBalloon(const System::UnicodeString ATitle, const System::UnicodeString AText, Advstyleif::TBalloonType AType);
	void __fastcall HideBalloon();
	void __fastcall ShowValidation(const System::UnicodeString AText);
	void __fastcall HideValidation();
	__property Vcl::Stdctrls::TLabel* EditLabel = {read=FLabel};
	__property bool Border3D = {read=FBorder3D, write=SetBorder3D, nodefault};
	__property System::Classes::TAlignment Alignment = {read=FAlignment, write=SetAlignment, default=0};
	__property bool AutoFocus = {read=FAutoFocus, write=SetAutoFocus, nodefault};
	__property bool AutoTab = {read=FAutoTab, write=FAutoTab, default=1};
	__property System::Uitypes::TColor BorderColor = {read=FBorderColor, write=SetBorderColor, default=536870911};
	__property bool CanUndo = {read=FCanUndo, write=FCanUndo, default=0};
	__property System::Uitypes::TColor Color = {read=GetColorEx, write=SetColorEx, nodefault};
	__property bool DefaultHandling = {read=FDefaultHandling, write=FDefaultHandling, nodefault};
	__property bool DisabledBorder = {read=FDisabledBorder, write=SetDisabledBorder, default=1};
	__property System::Uitypes::TColor DisabledColor = {read=FDisabledColor, write=SetDisabledColor, default=12632256};
	__property bool Enabled = {read=GetEnabledEx, write=SetEnabledEx, nodefault};
	__property bool Flat = {read=FFlat, write=SetFlat, nodefault};
	__property System::Uitypes::TColor FlatLineColor = {read=FFlatLineColor, write=SetFlatLineColor, nodefault};
	__property bool FlatParentColor = {read=FFlatParentColor, write=SetFlatParentColor, nodefault};
	__property System::Uitypes::TColor FocusBorderColor = {read=FFocusBorderColor, write=FFocusBorderColor, default=536870911};
	__property System::Uitypes::TColor FocusColor = {read=FFocusColor, write=FFocusColor, default=536870911};
	__property bool FocusBorder = {read=FFocusBorder, write=FFocusBorder, nodefault};
	__property System::Uitypes::TColor FocusFontColor = {read=FFocusFontColor, write=FFocusFontColor, nodefault};
	__property bool FocusLabel = {read=FFocusLabel, write=FFocusLabel, default=0};
	__property System::UnicodeString LabelCaption = {read=GetLabelCaption, write=SetLabelCaption};
	__property bool LabelAlwaysEnabled = {read=FLabelAlwaysEnabled, write=FLabelAlwaysEnabled, nodefault};
	__property TLabelPosition LabelPosition = {read=FLabelPosition, write=SetLabelPosition, nodefault};
	__property int LabelMargin = {read=FLabelMargin, write=SetLabelMargin, default=4};
	__property bool LabelTransparent = {read=FLabelTransparent, write=SetLabelTransparent, nodefault};
	__property Vcl::Graphics::TFont* LabelFont = {read=FLabelFont, write=SetLabelFont};
	__property System::Uitypes::TColor ModifiedColor = {read=FModifiedColor, write=FModifiedColor, nodefault};
	__property bool ReturnIsTab = {read=FReturnIsTab, write=FReturnIsTab, default=1};
	__property bool ShowModified = {read=FShowModified, write=FShowModified, nodefault};
	__property bool SoftBorder = {read=FSoftBorder, write=SetSoftBorder, default=0};
	__property bool SelectFirstChar = {read=FSelectFirstChar, write=FSelectFirstChar, nodefault};
	__property Advtooltip::TAdvToolTip* ToolTip = {read=FToolTip, write=FToolTip};
	__property System::UnicodeString Version = {read=GetVersion, write=SetVersion};
	__property bool Visible = {read=GetVisible, write=SetVisible, nodefault};
	__property System::Classes::TNotifyEvent OnAfterClipboardCopy = {read=FOnAfterClipboardCopy, write=FOnAfterClipboardCopy};
	__property System::Classes::TNotifyEvent OnAfterClipboardCut = {read=FOnAfterClipboardCut, write=FOnAfterClipboardCut};
	__property System::Classes::TNotifyEvent OnAfterClipboardPaste = {read=FOnAfterClipboardPaste, write=FOnAfterClipboardPaste};
	__property TClipboardEvent OnClipboardCopy = {read=FOnClipboardCopy, write=FOnClipboardCopy};
	__property TClipboardEvent OnClipboardCut = {read=FOnClipboardCut, write=FOnClipboardCut};
	__property TClipboardEvent OnClipboardPaste = {read=FOnClipboardPaste, write=FOnClipboardPaste};
	__property TMaskCompleteEvent OnMaskComplete = {read=FOnMaskComplete, write=FOnMaskComplete};
	__property System::Classes::TNotifyEvent OnValidateError = {read=FOnValidateError, write=FOnValidateError};
	__property System::Classes::TNotifyEvent OnValidateEdit = {read=FOnValidateEdit, write=FOnValidateEdit};
public:
	/* TWinControl.CreateParented */ inline __fastcall TAdvCustomMaskEdit(HWND ParentWindow) : Vcl::Mask::TCustomMaskEdit(ParentWindow) { }
	
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


class PASCALIMPLEMENTATION TAdvMaskEdit : public TAdvCustomMaskEdit
{
	typedef TAdvCustomMaskEdit inherited;
	
__published:
	__property Align = {default=0};
	__property Alignment = {default=0};
	__property Anchors = {default=3};
	__property AutoSelect = {default=1};
	__property AutoSize = {default=1};
	__property BevelEdges = {default=15};
	__property BevelInner = {index=0, default=2};
	__property BevelOuter = {index=1, default=1};
	__property BevelKind = {default=0};
	__property BevelWidth = {default=1};
	__property BiDiMode;
	__property BorderStyle = {default=1};
	__property CharCase = {default=0};
	__property Color;
	__property Constraints;
	__property Ctl3D;
	__property DefaultHandling;
	__property DoubleBuffered;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled;
	__property EditMask = {default=0};
	__property Font;
	__property ImeMode = {default=3};
	__property ImeName = {default=0};
	__property MaxLength = {default=0};
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentDoubleBuffered = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PasswordChar = {default=0};
	__property PopupMenu;
	__property ReadOnly = {default=0};
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Text;
	__property ToolTip;
	__property Touch;
	__property Visible;
	__property AutoFocus;
	__property AutoTab = {default=1};
	__property CanUndo = {default=0};
	__property BorderColor = {default=536870911};
	__property DisabledBorder = {default=1};
	__property DisabledColor = {default=12632256};
	__property Flat;
	__property FlatLineColor;
	__property FlatParentColor;
	__property ShowModified;
	__property FocusBorderColor = {default=536870911};
	__property FocusColor = {default=536870911};
	__property FocusBorder;
	__property FocusFontColor;
	__property FocusLabel = {default=0};
	__property LabelCaption = {default=0};
	__property LabelAlwaysEnabled;
	__property LabelPosition;
	__property LabelMargin = {default=4};
	__property LabelTransparent;
	__property LabelFont;
	__property ModifiedColor;
	__property ReturnIsTab = {default=1};
	__property SelectFirstChar;
	__property SoftBorder = {default=0};
	__property StyleElements = {default=7};
	__property Version = {default=0};
	__property OnAfterClipboardCopy;
	__property OnAfterClipboardCut;
	__property OnAfterClipboardPaste;
	__property OnClipboardCopy;
	__property OnClipboardCut;
	__property OnClipboardPaste;
	__property OnMaskComplete;
	__property OnChange;
	__property OnClick;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnGesture;
	__property OnMouseActivate;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnStartDock;
	__property OnStartDrag;
	__property UIStyle = {default=8};
public:
	/* TAdvCustomMaskEdit.Create */ inline __fastcall virtual TAdvMaskEdit(System::Classes::TComponent* AOwner) : TAdvCustomMaskEdit(AOwner) { }
	/* TAdvCustomMaskEdit.Destroy */ inline __fastcall virtual ~TAdvMaskEdit() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TAdvMaskEdit(HWND ParentWindow) : TAdvCustomMaskEdit(ParentWindow) { }
	
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
class PASCALIMPLEMENTATION TEditDropTarget : public Adveddd::TAEDropTarget
{
	typedef Adveddd::TAEDropTarget inherited;
	
private:
	TCustomAdvEdit* FAdvEdit;
	
public:
	__fastcall TEditDropTarget(TCustomAdvEdit* aEdit);
	virtual void __fastcall DropText(const System::Types::TPoint &pt, System::UnicodeString s);
	virtual void __fastcall DropFiles(const System::Types::TPoint &pt, System::Classes::TStrings* Files);
	virtual void __fastcall DragMouseMove(const System::Types::TPoint &pt, bool &allow);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TEditDropTarget() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const System::Int8 MAJ_VER = System::Int8(0x4);
static const System::Int8 MIN_VER = System::Int8(0x0);
static const System::Int8 REL_VER = System::Int8(0x1);
static const System::Int8 BLD_VER = System::Int8(0x3);
static const System::Int8 LOOKUPITEMHEIGHT = System::Int8(0xc);
extern DELPHI_PACKAGE System::StaticArray<int, 2> BorderRec;
extern DELPHI_PACKAGE bool ADVEDIT_DEFAULTHANDLING;
extern DELPHI_PACKAGE TAutoType __fastcall IsStringType(System::UnicodeString s);
extern DELPHI_PACKAGE bool __fastcall AdvInputQuery(const TAdvEditType QueryType, PQueryParams QueryParams, const System::UnicodeString ACaption, const System::UnicodeString APrompt, System::UnicodeString &Value);
}	/* namespace Advedit */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ADVEDIT)
using namespace Advedit;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AdveditHPP
