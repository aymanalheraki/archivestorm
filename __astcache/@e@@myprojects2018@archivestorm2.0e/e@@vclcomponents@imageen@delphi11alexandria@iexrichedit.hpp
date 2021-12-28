// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'iexRichEdit.pas' rev: 35.00 (Windows)

#ifndef IexricheditHPP
#define IexricheditHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.ActiveX.hpp>
#include <System.Win.ComObj.hpp>
#include <Winapi.CommCtrl.hpp>
#include <Winapi.Messages.hpp>
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <System.SysUtils.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Dialogs.hpp>
#include <Winapi.RichEdit.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.OleCtnrs.hpp>
#include <hyieutils.hpp>
#include <iexBitmaps.hpp>
#include <iexToolbars.hpp>
#include <Vcl.Clipbrd.hpp>
#include <System.UITypes.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

namespace Iexrichedit
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TIETextAttributes;
class DELPHICLASS TIEParaAttributes;
class DELPHICLASS TIERichEdit;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TIEAttributeType : unsigned char { atDefaultText, atSelected, atWord };

enum DECLSPEC_DENUM Iexrichedit__1 : unsigned char { caBold, caColor, caFace, caItalic, caSize, caStrikeOut, caUnderline, caProtected, caOffset, caHidden, caCharset, caLink, caBackColor, caDisabled, caWeight, caSubscript, caRevAuthor };

typedef System::Set<Iexrichedit__1, Iexrichedit__1::caBold, Iexrichedit__1::caRevAuthor> TIEConsistentAttributes;

enum DECLSPEC_DENUM TIESubscriptStyle : unsigned char { sbNone, sbSubscript, sbSuperscript };

enum DECLSPEC_DENUM TIEUnderlineColor : unsigned char { ucBlack, ucBlue, ucAqua, ucLime, ucFuchsia, ucRed, ucYellow, ucWhite, ucNavy, ucTeal, ucGreen, ucPurple, ucMaroon, ucOlive, ucGray, ucSilver };

enum DECLSPEC_DENUM TIEUnderlineType : unsigned char { utNone, utSolid, utWord, utDouble, utDotted, utDash, utDashDot, utDashDotDot, utWave, utThick };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIETextAttributes : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	TIERichEdit* fRichEdit;
	TIEAttributeType fType;
	void __fastcall AssignFont(Vcl::Graphics::TFont* Font);
	void __fastcall GetAttributes(Winapi::Richedit::_CHARFORMAT2W &Format);
	void __fastcall SetAttributes(Winapi::Richedit::_CHARFORMAT2W &Format);
	bool __fastcall GetAttribute(const int Flag);
	System::Uitypes::TColor __fastcall GetBackColor();
	System::Uitypes::TFontCharset __fastcall GetCharset();
	System::Uitypes::TColor __fastcall GetColor();
	TIEConsistentAttributes __fastcall GetConsistentAttributes();
	bool __fastcall GetDisabled();
	int __fastcall GetHeight();
	bool __fastcall GetHidden();
	bool __fastcall GetLink();
	System::Uitypes::TFontName __fastcall GetName();
	int __fastcall GetOffset();
	System::Uitypes::TFontPitch __fastcall GetPitch();
	bool __fastcall GetProtected();
	int __fastcall GetSize();
	System::Uitypes::TFontStyles __fastcall GetStyle();
	TIESubscriptStyle __fastcall GetSubscriptStyle();
	TIEUnderlineColor __fastcall GetUnderlineColor();
	TIEUnderlineType __fastcall GetUnderlineType();
	void __fastcall SetAttribute(const int Flag, const bool Value);
	void __fastcall SetBackColor(System::Uitypes::TColor Value);
	void __fastcall SetCharset(System::Uitypes::TFontCharset Value);
	void __fastcall SetColor(System::Uitypes::TColor Value);
	void __fastcall SetDisabled(bool Value);
	void __fastcall SetHeight(int Value);
	void __fastcall SetHidden(bool Value);
	void __fastcall SetLink(bool Value);
	void __fastcall SetName(System::Uitypes::TFontName Value);
	void __fastcall SetOffset(int Value);
	void __fastcall SetPitch(System::Uitypes::TFontPitch Value);
	void __fastcall SetProtected(bool Value);
	void __fastcall SetSize(int Value);
	void __fastcall SetStyle(System::Uitypes::TFontStyles Value);
	void __fastcall SetSubscriptStyle(TIESubscriptStyle Value);
	void __fastcall SetUnderlineColor(const TIEUnderlineColor Value);
	void __fastcall SetUnderlineType(TIEUnderlineType Value);
	
protected:
	void __fastcall InitFormat(Winapi::Richedit::_CHARFORMAT2W &Format);
	virtual void __fastcall AssignTo(System::Classes::TPersistent* Dest);
	
public:
	__fastcall TIETextAttributes(TIERichEdit* AOwner, TIEAttributeType AttributeType);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property System::Uitypes::TColor BackColor = {read=GetBackColor, write=SetBackColor, nodefault};
	__property System::Uitypes::TFontCharset Charset = {read=GetCharset, write=SetCharset, nodefault};
	__property System::Uitypes::TColor Color = {read=GetColor, write=SetColor, nodefault};
	__property TIEConsistentAttributes ConsistentAttributes = {read=GetConsistentAttributes, nodefault};
	__property bool Disabled = {read=GetDisabled, write=SetDisabled, nodefault};
	__property int Height = {read=GetHeight, write=SetHeight, nodefault};
	__property bool Hidden = {read=GetHidden, write=SetHidden, nodefault};
	__property bool Link = {read=GetLink, write=SetLink, nodefault};
	__property System::Uitypes::TFontName Name = {read=GetName, write=SetName};
	__property int Offset = {read=GetOffset, write=SetOffset, nodefault};
	__property System::Uitypes::TFontPitch Pitch = {read=GetPitch, write=SetPitch, nodefault};
	__property bool Protected = {read=GetProtected, write=SetProtected, nodefault};
	__property int Size = {read=GetSize, write=SetSize, nodefault};
	__property System::Uitypes::TFontStyles Style = {read=GetStyle, write=SetStyle, nodefault};
	__property TIESubscriptStyle SubscriptStyle = {read=GetSubscriptStyle, write=SetSubscriptStyle, nodefault};
	__property TIEUnderlineColor UnderlineColor = {read=GetUnderlineColor, write=SetUnderlineColor, nodefault};
	__property TIEUnderlineType UnderlineType = {read=GetUnderlineType, write=SetUnderlineType, nodefault};
	__property bool Bold = {read=GetAttribute, write=SetAttribute, index=1, nodefault};
	__property bool Italic = {read=GetAttribute, write=SetAttribute, index=2, nodefault};
	__property bool StrikeOut = {read=GetAttribute, write=SetAttribute, index=8, nodefault};
	__property bool Underline = {read=GetAttribute, write=SetAttribute, index=4, nodefault};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TIETextAttributes() { }
	
};

#pragma pack(pop)

typedef System::Int8 TIEHeadingStyle;

enum DECLSPEC_DENUM TIELineSpacing : unsigned char { lsSingle, lsOneAndHalf, lsDouble, lsSpecifiedOrMore, lsSpecified, lsMultiple };

enum DECLSPEC_DENUM TIENumbering : unsigned char { nbNone, nbBullet, nbArabicNumbers, nbLowerCaseLetter, nbUpperCaseLetter, nbLowerCaseRoman, nbUpperCaseRoman };

enum DECLSPEC_DENUM TIENumberingStyle : unsigned char { nsParenthesis, nsPeriod, nsEnclosed, nsSimple };

enum DECLSPEC_DENUM TIEParaAlignment : unsigned char { paLeftJustify, paRightJustify, paCenter, paJustify };

enum DECLSPEC_DENUM TIEParaTableStyle : unsigned char { ptNone, ptTableRow, ptTableCellEnd, ptTableCell };

enum DECLSPEC_DENUM TIETabAlignment : unsigned char { tbOrdinary, tbCenter, tbRight, tbDecimal, tbVertical };

enum DECLSPEC_DENUM TIETabLeader : unsigned char { tlNone, tlDotted, tlDashed, tlUnderlined, tlThick, tlDouble };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEParaAttributes : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	TIERichEdit* fRichEdit;
	void __fastcall GetAttributes(PARAFORMAT2 &Paragraph);
	TIEParaAlignment __fastcall GetAlignment();
	int __fastcall GetFirstIndent();
	TIEHeadingStyle __fastcall GetHeadingStyle();
	int __fastcall GetLeftIndent();
	int __fastcall GetLineSpacing();
	TIELineSpacing __fastcall GetLineSpacingRule();
	TIENumbering __fastcall GetNumbering();
	int __fastcall GetNumberingStart();
	TIENumberingStyle __fastcall GetNumberingStyle();
	System::Word __fastcall GetNumberingTab();
	int __fastcall GetRightIndent();
	int __fastcall GetSpaceAfter();
	int __fastcall GetSpaceBefore();
	int __fastcall GetTab(System::Byte Index);
	int __fastcall GetTabCount();
	TIEParaTableStyle __fastcall GetTableStyle();
	TIETabAlignment __fastcall GetTabAlignment(System::Byte Index);
	TIETabLeader __fastcall GetTabLeader(System::Byte Index);
	void __fastcall SetAlignment(TIEParaAlignment Value);
	void __fastcall SetAttributes(PARAFORMAT2 &Paragraph);
	void __fastcall SetFirstIndent(int Value);
	void __fastcall SetHeadingStyle(TIEHeadingStyle Value);
	void __fastcall SetLeftIndent(int Value);
	void __fastcall SetLineSpacing(int Value);
	void __fastcall SetLineSpacingRule(TIELineSpacing Value);
	void __fastcall SetNumbering(TIENumbering Value);
	void __fastcall SetNumberingStart(const int Value);
	void __fastcall SetNumberingStyle(TIENumberingStyle Value);
	void __fastcall SetNumberingTab(System::Word Value);
	void __fastcall SetRightIndent(int Value);
	void __fastcall SetSpaceAfter(int Value);
	void __fastcall SetSpaceBefore(int Value);
	void __fastcall SetTab(System::Byte Index, int Value);
	void __fastcall SetTabCount(int Value);
	void __fastcall SetTableStyle(TIEParaTableStyle Value);
	void __fastcall SetTabAlignment(System::Byte Index, TIETabAlignment Value);
	void __fastcall SetTabLeader(System::Byte Index, TIETabLeader Value);
	
protected:
	void __fastcall InitPara(PARAFORMAT2 &Paragraph);
	virtual void __fastcall AssignTo(System::Classes::TPersistent* Dest);
	
public:
	__fastcall TIEParaAttributes(TIERichEdit* AOwner);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property TIEParaAlignment Alignment = {read=GetAlignment, write=SetAlignment, nodefault};
	__property int FirstIndent = {read=GetFirstIndent, write=SetFirstIndent, nodefault};
	__property TIEHeadingStyle HeadingStyle = {read=GetHeadingStyle, write=SetHeadingStyle, nodefault};
	__property int LeftIndent = {read=GetLeftIndent, write=SetLeftIndent, nodefault};
	__property int LineSpacing = {read=GetLineSpacing, write=SetLineSpacing, nodefault};
	__property TIELineSpacing LineSpacingRule = {read=GetLineSpacingRule, write=SetLineSpacingRule, nodefault};
	__property TIENumbering Numbering = {read=GetNumbering, write=SetNumbering, nodefault};
	__property int NumberingStart = {read=GetNumberingStart, write=SetNumberingStart, nodefault};
	__property TIENumberingStyle NumberingStyle = {read=GetNumberingStyle, write=SetNumberingStyle, nodefault};
	__property System::Word NumberingTab = {read=GetNumberingTab, write=SetNumberingTab, nodefault};
	__property int RightIndent = {read=GetRightIndent, write=SetRightIndent, nodefault};
	__property int SpaceAfter = {read=GetSpaceAfter, write=SetSpaceAfter, nodefault};
	__property int SpaceBefore = {read=GetSpaceBefore, write=SetSpaceBefore, nodefault};
	__property int Tab[System::Byte Index] = {read=GetTab, write=SetTab};
	__property int TabCount = {read=GetTabCount, write=SetTabCount, nodefault};
	__property TIETabAlignment TabAlignment[System::Byte Index] = {read=GetTabAlignment, write=SetTabAlignment};
	__property TIEParaTableStyle TableStyle = {read=GetTableStyle, write=SetTableStyle, nodefault};
	__property TIETabLeader TabLeader[System::Byte Index] = {read=GetTabLeader, write=SetTabLeader};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TIEParaAttributes() { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM Iexrichedit__4 : unsigned char { deCopy, deMove, deLink, deScroll };

typedef System::Set<Iexrichedit__4, Iexrichedit__4::deCopy, Iexrichedit__4::deScroll> TIEDropEffects;

typedef void __fastcall (__closure *TIEDragAllowedEvent)(System::TObject* Sender, System::Classes::TShiftState ShiftState, TIEDropEffects &AllowedEffects, bool &Handled);

typedef void __fastcall (__closure *TIEGetDragDropEffectEvent)(System::TObject* Sender, System::Classes::TShiftState ShiftState, TIEDropEffects &AllowedEffects, bool &Handled);

typedef void __fastcall (__closure *TIEQueryAcceptData)(System::TObject* Sender, const _di_IDataObject ADataObject, System::Word &AFormat, unsigned ClipboardOperation, bool Really, NativeUInt IconMetaPict, bool &Handled);

enum DECLSPEC_DENUM TIEUndoName : unsigned char { unUnknown, unTyping, unDelete, unDragDrop, unCut, unPaste };

enum DECLSPEC_DENUM TIESelectionType : unsigned char { slText, slObject, slMultiChar, slMultiObject };

typedef System::Set<TIESelectionType, TIESelectionType::slText, TIESelectionType::slMultiObject> TIESelectionTypes;

enum DECLSPEC_DENUM TIELanguageOption : unsigned char { rlAutoKeyboard, rlAutoFont, rlImeCancelComplete, rlImeAlwaysSendNotify, rlAutoFontSizeAdjust, rlUIFonts, rlNoImplicitLang, rlDualFont, rlNoKbdLangIDFixUp, rlSpellChecking };

typedef System::Set<TIELanguageOption, TIELanguageOption::rlAutoKeyboard, TIELanguageOption::rlSpellChecking> TIELanguageOptions;

typedef void __fastcall (__closure *TIEUrlClickEvent)(System::TObject* Sender, const System::UnicodeString URLText, System::Uitypes::TMouseButton Button);

typedef void __fastcall (__closure *TIEUrlHoverEvent)(System::TObject* Sender, const System::UnicodeString URLText);

enum DECLSPEC_DENUM Iexrichedit__5 : unsigned char { stWholeWord, stMatchCase, stBackward, stSetSelection };

typedef System::Set<Iexrichedit__5, Iexrichedit__5::stWholeWord, Iexrichedit__5::stSetSelection> TIESearchTypes;

typedef void __fastcall (__closure *TIEFindErrorEvent)(System::TObject* Sender, const System::UnicodeString SearchText);

typedef void __fastcall (__closure *TIEFindCloseEvent)(System::TObject* Sender, Vcl::Dialogs::TFindDialog* Dialog);

class PASCALIMPLEMENTATION TIERichEdit : public Vcl::Comctrls::TCustomRichEdit
{
	typedef Vcl::Comctrls::TCustomRichEdit inherited;
	
private:
	TIETextAttributes* fDefAttributes;
	TIETextAttributes* fSelAttributes;
	TIETextAttributes* fWordAttributes;
	TIEParaAttributes* fParagraph;
	bool fAdvancedTypography;
	bool fAutoURLDetect;
	bool fGutterSelection;
	bool fHideScrollBars;
	TIELanguageOptions fLanguageOptions;
	bool fOLEDragDrop;
	System::Types::TPoint fScreenLogPixels;
	int fUndoLimit;
	bool fUndoOnReplace;
	bool fUpdatingLines;
	bool fWordSelection;
	bool fKeyboardShortcuts;
	Vcl::Dialogs::TFindDialog* fFindDialog;
	Vcl::Dialogs::TReplaceDialog* fReplaceDialog;
	Vcl::Dialogs::TFindDialog* fLastFind;
	TIEFindErrorEvent fOnTextNotFound;
	TIEFindCloseEvent fOnCloseFindDialog;
	bool fAllowObjects;
	System::TObject* fCallback;
	System::_di_IInterface fRichEditOle;
	bool fAllowInPlace;
	CHARRANGE fURLClickRange;
	System::Uitypes::TMouseButton fURLClickBtn;
	TIEUrlClickEvent fOnURLClick;
	TIEUrlHoverEvent fOnURLHover;
	TIEDragAllowedEvent fOnDragAllowed;
	TIEGetDragDropEffectEvent fOnGetDragDropEffect;
	TIEQueryAcceptData fOnQueryAcceptData;
	Iextoolbars::TIERichEditHoverToolbar* fToolbar;
	bool fAutoToolbar;
	Vcl::Menus::TPopupMenu* fPopup;
	bool fPopupMenuAuto;
	int fWordAvailable;
	System::UnicodeString fFilename;
	HIDESBASE void __fastcall SetDefAttributes(TIETextAttributes* Value);
	HIDESBASE void __fastcall SetSelAttributes(TIETextAttributes* Value);
	void __fastcall SetWordAttributes(TIETextAttributes* Value);
	void __fastcall EnableAdvancedTypography(const bool Value);
	bool __fastcall GetAutoURLDetect();
	bool __fastcall GetCanRedo();
	HIDESBASE bool __fastcall GetCanUndo();
	bool __fastcall GetCanPaste();
	bool __fastcall GetCurrentAdvancedTypography();
	TIELanguageOptions __fastcall GetLanguageOptions();
	TIEUndoName __fastcall GetRedoName();
	int __fastcall GetRichEditVersion();
	System::UnicodeString __fastcall GetRTFText();
	TIESelectionTypes __fastcall GetSelectionTypes();
	TIEUndoName __fastcall GetUndoName();
	bool __fastcall GetWordSelection();
	void __fastcall SetAdvancedTypography(const bool Value);
	void __fastcall SetAutoURLDetect(bool Value);
	void __fastcall SetGutterSelection(bool Value);
	HIDESBASE void __fastcall SetHideScrollBars(bool Value);
	void __fastcall SetLanguageOptions(TIELanguageOptions Value);
	void __fastcall SetOLEDragDrop(const bool Value);
	void __fastcall SetRTFText(const System::UnicodeString Value);
	HIDESBASE void __fastcall SetSelText(const System::UnicodeString Value);
	void __fastcall SetUndoLimit(int Value);
	void __fastcall SetWordSelection(bool Value);
	HIDESBASE MESSAGE void __fastcall CMBiDiModeChanged(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CNNotify(Winapi::Messages::TWMNotify &Msg);
	MESSAGE void __fastcall EMReplaceSel(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall WMDestroy(Winapi::Messages::TWMNoParams &Msg);
	HIDESBASE MESSAGE void __fastcall WMRButtonUp(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall WMSetCursor(Winapi::Messages::TWMSetCursor &Msg);
	HIDESBASE MESSAGE void __fastcall WMSetFont(Winapi::Messages::TWMSetFont &Msg);
	MESSAGE void __fastcall WMSetText(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall WMKillFocus(Winapi::Messages::TWMKillFocus &Msg);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Winapi::Messages::TWMSetFocus &Msg);
	void __fastcall AdjustFindDialogPosition(Vcl::Dialogs::TFindDialog* Dialog);
	bool __fastcall FindEditText(Vcl::Dialogs::TFindDialog* Dialog, bool AdjustPos, bool Events);
	void __fastcall FindDialogFind(System::TObject* Sender);
	void __fastcall FindDialogClose(System::TObject* Sender);
	void __fastcall ReplaceDialogReplace(System::TObject* Sender);
	void __fastcall SetupFindDialog(Vcl::Dialogs::TFindDialog* Dialog, const System::UnicodeString SearchStr, const System::UnicodeString ReplaceStr);
	void __fastcall SetAllowObjects(bool Value);
	void __fastcall CloseObjects();
	void __fastcall SetUIActive(bool Active);
	void __fastcall UpdateHostNames();
	MESSAGE void __fastcall CMDocWindowActivate(Winapi::Messages::TMessage &Msg);
	MESSAGE void __fastcall CMUIDeactivate(Winapi::Messages::TMessage &Msg);
	HIDESBASE bool __fastcall GetReadOnly();
	HIDESBASE void __fastcall SetReadOnly(bool Value);
	void __fastcall SetAutoToolbar(bool v);
	void __fastcall UpdateToolbar();
	HIDESBASE System::UnicodeString __fastcall GetSelText();
	int __fastcall GetZoom();
	HIDESBASE void __fastcall SetZoom(int v);
	bool __fastcall _SaveToFile(const System::UnicodeString AFilename);
	
protected:
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall CreateWindowHandle(const Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall CreateWnd();
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	DYNAMIC void __fastcall URLClick(const System::UnicodeString URLText, System::Uitypes::TMouseButton Button);
	DYNAMIC void __fastcall URLHover(const System::UnicodeString URLText);
	DYNAMIC bool __fastcall DoDragAllowed(const System::Classes::TShiftState ShiftState, TIEDropEffects &AllowedEffects);
	DYNAMIC bool __fastcall DoGetDragDropEffect(const System::Classes::TShiftState ShiftState, TIEDropEffects &Effects);
	DYNAMIC bool __fastcall DoQueryAcceptData(const _di_IDataObject ADataObject, System::Word &AFormat, unsigned ClipboardOperationKind, bool Really, NativeUInt IconMetaPict);
	DYNAMIC void __fastcall DoContextPopup(const System::Types::TPoint &MousePos, bool &Handled);
	virtual void __fastcall DoSetMaxLength(int Value);
	virtual void __fastcall SetSelLength(int Value);
	virtual void __fastcall SetSelStart(int Value);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	DYNAMIC void __fastcall Change();
	virtual void __fastcall DoOnTextNotFound(Vcl::Dialogs::TFindDialog* Dialog);
	virtual void __fastcall DoOnCloseFindDialog(Vcl::Dialogs::TFindDialog* Dialog);
	
public:
	System::Uitypes::TFontName _SelAttributes_Name;
	int _SelAttributes_Size;
	System::Uitypes::TColor _SelAttributes_Color;
	__fastcall virtual TIERichEdit(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TIERichEdit();
	virtual void __fastcall Clear();
	void __fastcall AddFormattedText(const System::UnicodeString NewText, Vcl::Graphics::TFont* const AFont = (Vcl::Graphics::TFont*)(0x0))/* overload */;
	void __fastcall AddFormattedText(const System::UnicodeString NewText, System::Uitypes::TFontStyles FontStyle, const System::UnicodeString FontName = System::UnicodeString(), const System::Uitypes::TColor FontColor = (System::Uitypes::TColor)(0x20000000), int FontHeight = 0x0)/* overload */;
	void __fastcall InsertFormattedText(int Index, const System::UnicodeString NewText, Vcl::Graphics::TFont* const AFont = (Vcl::Graphics::TFont*)(0x0))/* overload */;
	void __fastcall InsertFormattedText(int Index, const System::UnicodeString NewText, System::Uitypes::TFontStyles FontStyle, const System::UnicodeString FontName = System::UnicodeString(), const System::Uitypes::TColor FontColor = (System::Uitypes::TColor)(0x20000000), int FontHeight = 0x0)/* overload */;
	void __fastcall AddLine(const System::UnicodeString NewText);
	CHARRANGE __fastcall GetSelection();
	void __fastcall SetSelection(int StartPos, int EndPos, bool ScrollCaret = true);
	System::UnicodeString __fastcall GetTextRange(int StartPos, int EndPos);
	int __fastcall GetTextLengthEx();
	int __fastcall CharFromPos(int X, int Y);
	int __fastcall LineFromChar(int CharIndex);
	int __fastcall GetLineIndex(int LineNo);
	int __fastcall GetLineLength(int CharIndex);
	System::UnicodeString __fastcall WordAtCursor();
	System::Types::TPoint __fastcall GetCharPos(int CharIndex);
	void __fastcall SetSelectionAsLink();
	__property System::UnicodeString SelText = {read=GetSelText, write=SetSelText};
	void __fastcall PasteAsPlainText();
	__property bool AdvancedTypography = {read=fAdvancedTypography, write=SetAdvancedTypography, nodefault};
	__property TIESelectionTypes SelectionTypes = {read=GetSelectionTypes, nodefault};
	__property int RichEditVersion = {read=GetRichEditVersion, nodefault};
	__property TIETextAttributes* DefAttributes = {read=fDefAttributes, write=SetDefAttributes};
	__property TIETextAttributes* SelAttributes = {read=fSelAttributes, write=SetSelAttributes};
	__property TIETextAttributes* WordAttributes = {read=fWordAttributes, write=SetWordAttributes};
	__property Iextoolbars::TIERichEditHoverToolbar* Toolbar = {read=fToolbar, write=fToolbar};
	__property TIEParaAttributes* Paragraph = {read=fParagraph};
	__property System::UnicodeString Filename = {read=fFilename, write=fFilename};
	HIDESBASE void __fastcall ClearUndo();
	void __fastcall Redo();
	HIDESBASE void __fastcall Undo();
	__property bool CanRedo = {read=GetCanRedo, nodefault};
	__property bool CanUndo = {read=GetCanUndo, nodefault};
	__property bool CanPaste = {read=GetCanPaste, nodefault};
	__property TIEUndoName RedoName = {read=GetRedoName, nodefault};
	__property TIEUndoName UndoName = {read=GetUndoName, nodefault};
	__property bool UndoOnReplace = {read=fUndoOnReplace, write=fUndoOnReplace, nodefault};
	bool __fastcall PromptForColor(int PosX = 0x0, int PosY = 0x0);
	bool __fastcall PromptForFont(int PosX = 0x0, int PosY = 0x0);
	int __fastcall TextWidth();
	int __fastcall TextHeight(HDC DestDC = (HDC)(0x0), int Width = 0x0);
	HIDESBASE void __fastcall PaintTo(HDC DestDC, const System::Types::TRect &R, Hyieutils::TIEHAlign HAlign = (Hyieutils::TIEHAlign)(0x0), Hyieutils::TIEVAlign VAlign = (Hyieutils::TIEVAlign)(0x0), double ScaleX = 1.000000E+00, double ScaleY = 1.000000E+00)/* overload */;
	HIDESBASE void __fastcall PaintTo(Vcl::Graphics::TBitmap* Bitmap, const System::Types::TRect &R, Hyieutils::TIEHAlign HAlign = (Hyieutils::TIEHAlign)(0x0), Hyieutils::TIEVAlign VAlign = (Hyieutils::TIEVAlign)(0x0), const bool PaintBackground = false, double ScaleX = 1.000000E+00, double ScaleY = 1.000000E+00)/* overload */;
	HIDESBASE void __fastcall PaintTo(Vcl::Graphics::TBitmap* Bitmap, int Margin = 0x0, Hyieutils::TIEHAlign HAlign = (Hyieutils::TIEHAlign)(0x0), Hyieutils::TIEVAlign VAlign = (Hyieutils::TIEVAlign)(0x0), const bool PaintBackground = false, double ScaleX = 1.000000E+00, double ScaleY = 1.000000E+00)/* overload */;
	HIDESBASE void __fastcall PaintTo(Iexbitmaps::TIEBitmap* Bitmap, const System::Types::TRect &R, Hyieutils::TIEHAlign HAlign = (Hyieutils::TIEHAlign)(0x0), Hyieutils::TIEVAlign VAlign = (Hyieutils::TIEVAlign)(0x0), const bool PaintBackground = true, const bool EnableAlpha = false, double ScaleX = 1.000000E+00, double ScaleY = 1.000000E+00)/* overload */;
	HIDESBASE void __fastcall PaintTo(Iexbitmaps::TIEBitmap* Bitmap, int Margin = 0x0, Hyieutils::TIEHAlign HAlign = (Hyieutils::TIEHAlign)(0x0), Hyieutils::TIEVAlign VAlign = (Hyieutils::TIEVAlign)(0x0), const bool PaintBackground = true, const bool EnableAlpha = false, double ScaleX = 1.000000E+00, double ScaleY = 1.000000E+00)/* overload */;
	__property bool AllowInPlace = {read=fAllowInPlace, write=fAllowInPlace, default=1};
	void __fastcall CloseActiveObject();
	void __fastcall InsertImage(Vcl::Graphics::TGraphic* AGraphic, const bool Sizeable = true)/* overload */;
	void __fastcall InsertImage(Iexbitmaps::TIEBitmap* Bitmap, const bool Sizeable = true)/* overload */;
	void __fastcall InsertImage(const System::UnicodeString FileName, const bool Sizeable = true)/* overload */;
	void __fastcall InsertLinkToFile(const System::UnicodeString FileName, bool Iconic = false);
	void __fastcall InsertObject(const System::UnicodeString OleClassName, bool Iconic = false);
	bool __fastcall InsertObjectDialog();
	void __fastcall InsertObjectFromFile(const System::UnicodeString FileName, bool Iconic = false);
	void __fastcall InsertObjectFromInfo(const Vcl::Olectnrs::TCreateInfo &Info);
	bool __fastcall ObjectPropertiesDialog();
	bool __fastcall PasteSpecialDialog();
	bool __fastcall CanFindNext();
	bool __fastcall FindNext();
	Vcl::Dialogs::TFindDialog* __fastcall FindDialog(const System::UnicodeString SearchStr = System::UnicodeString());
	HIDESBASE int __fastcall FindText(const System::UnicodeString SearchStr, int StartPos, int Length, TIESearchTypes Options);
	Vcl::Dialogs::TReplaceDialog* __fastcall ReplaceDialog(const System::UnicodeString SearchStr = System::UnicodeString(), const System::UnicodeString ReplaceStr = System::UnicodeString());
	bool __fastcall OpenFromFile(const System::UnicodeString AFilename);
	bool __fastcall PromptToOpen(System::UnicodeString Caption = System::UnicodeString(), bool AllowImport = true);
	bool __fastcall SaveToFile(System::UnicodeString AFilename = System::UnicodeString());
	bool __fastcall PromptToSave(System::UnicodeString Caption = System::UnicodeString(), bool AllowExport = true);
	bool __fastcall ExportToWord(const System::UnicodeString Filename);
	bool __fastcall ImportFromWord(const System::UnicodeString Filename);
	bool __fastcall CanImportExport();
	void __fastcall RemoveCurrentFormatting();
	
__published:
	__property bool AutoToolbar = {read=fAutoToolbar, write=SetAutoToolbar, default=0};
	__property bool PopupMenuAuto = {read=fPopupMenuAuto, write=fPopupMenuAuto, default=1};
	__property bool KeyboardShortcuts = {read=fKeyboardShortcuts, write=fKeyboardShortcuts, default=1};
	__property bool AllowGutterSelection = {read=fGutterSelection, write=SetGutterSelection, default=1};
	__property bool AutoURLDetect = {read=GetAutoURLDetect, write=SetAutoURLDetect, default=1};
	__property bool HideScrollBars = {read=fHideScrollBars, write=SetHideScrollBars, default=1};
	__property TIELanguageOptions LanguageOptions = {read=GetLanguageOptions, write=SetLanguageOptions, default=2};
	__property bool OLEDragDrop = {read=fOLEDragDrop, write=SetOLEDragDrop, default=1};
	__property System::UnicodeString RTFText = {read=GetRTFText, write=SetRTFText};
	__property int UndoLimit = {read=fUndoLimit, write=SetUndoLimit, default=100};
	__property bool WordSelection = {read=GetWordSelection, write=SetWordSelection, default=1};
	__property int Zoom = {read=GetZoom, write=SetZoom, default=100};
	__property TIEDragAllowedEvent OnDragAllowed = {read=fOnDragAllowed, write=fOnDragAllowed};
	__property TIEGetDragDropEffectEvent OnGetDragDropEffect = {read=fOnGetDragDropEffect, write=fOnGetDragDropEffect};
	__property TIEQueryAcceptData OnQueryAcceptData = {read=fOnQueryAcceptData, write=fOnQueryAcceptData};
	__property TIEUrlClickEvent OnURLClick = {read=fOnURLClick, write=fOnURLClick};
	__property TIEUrlHoverEvent OnURLHover = {read=fOnURLHover, write=fOnURLHover};
	__property TIEFindErrorEvent OnTextNotFound = {read=fOnTextNotFound, write=fOnTextNotFound};
	__property TIEFindCloseEvent OnCloseFindDialog = {read=fOnCloseFindDialog, write=fOnCloseFindDialog};
	__property bool AllowObjects = {read=fAllowObjects, write=SetAllowObjects, default=0};
	__property bool ReadOnly = {read=GetReadOnly, write=SetReadOnly, default=0};
	__property SpellChecking = {default=0};
	__property Transparent = {default=0};
	__property Align = {default=0};
	__property Alignment = {default=0};
	__property Anchors = {default=3};
	__property BevelEdges = {default=15};
	__property BevelInner = {index=0, default=2};
	__property BevelKind = {default=0};
	__property BevelOuter = {index=1, default=1};
	__property BevelWidth = {default=1};
	__property BiDiMode;
	__property BorderWidth = {default=0};
	__property Ctl3D;
	__property DragKind = {default=0};
	__property BorderStyle = {default=1};
	__property Color = {default=-16777211};
	__property DragCursor = {default=-12};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property HideSelection = {default=1};
	__property ImeMode = {default=3};
	__property ImeName = {default=0};
	__property Constraints;
	__property ParentBiDiMode = {default=1};
	__property Lines;
	__property MaxLength = {default=0};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PlainText = {default=0};
	__property PopupMenu;
	__property ScrollBars = {default=3};
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Text = {stored=false, default=0};
	__property Visible = {default=1};
	__property WantTabs = {default=0};
	__property WantReturns = {default=1};
	__property WordWrap = {default=1};
	__property StyleElements = {default=7};
	__property StyleName = {default=0};
	__property OnChange;
	__property OnClick;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnContextPopup;
	__property OnEndDock;
	__property OnStartDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheel;
	__property OnMouseWheelDown;
	__property OnMouseWheelUp;
	__property OnResizeRequest;
	__property OnSaveClipboard;
	__property OnSelectionChange;
	__property OnStartDrag;
	__property OnMouseEnter;
	__property OnMouseLeave;
public:
	/* TWinControl.CreateParented */ inline __fastcall TIERichEdit(HWND ParentWindow) : Vcl::Comctrls::TCustomRichEdit(ParentWindow) { }
	
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  PaintTo(HDC DC, int X, int Y){ Vcl::Controls::TWinControl::PaintTo(DC, X, Y); }
	inline void __fastcall  PaintTo(Vcl::Graphics::TCanvas* Canvas, int X, int Y){ Vcl::Controls::TWinControl::PaintTo(Canvas, X, Y); }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Iexrichedit */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_IEXRICHEDIT)
using namespace Iexrichedit;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// IexricheditHPP
