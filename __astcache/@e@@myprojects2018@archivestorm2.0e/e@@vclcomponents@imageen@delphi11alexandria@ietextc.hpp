// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'ietextc.pas' rev: 35.00 (Windows)

#ifndef IetextcHPP
#define IetextcHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <System.Types.hpp>
#include <System.UITypes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <hyiedefs.hpp>
#include <iegdiplus.hpp>

//-- user supplied -----------------------------------------------------------

namespace Ietextc
{
//-- forward type declarations -----------------------------------------------
struct TIECharInfo;
class DELPHICLASS TIETextControl;
//-- type declarations -------------------------------------------------------
struct DECLSPEC_DRECORD TIECharInfo
{
public:
	int refcount;
	System::SmallString<255> name;
	int height;
	System::Uitypes::TFontStyles style;
	System::Uitypes::TColor color;
	System::Uitypes::TColor brushColor;
	Vcl::Graphics::TBrushStyle brushStyle;
	Hyiedefs::TIEAlignment align;
};


typedef TIECharInfo *PIECharInfo;

enum DECLSPEC_DENUM TIEDrawTextMode : unsigned char { iedWindowsTextOut, iedGDIPlusDrawText, iedNoDraw };

class PASCALIMPLEMENTATION TIETextControl : public Vcl::Controls::TCustomControl
{
	typedef Vcl::Controls::TCustomControl inherited;
	
protected:
	System::WideChar *fTextWide;
	bool fTextWideAllocated;
	int fTextLength;
	int fInsertPos;
	int fMaxLength;
	Vcl::Graphics::TBitmap* fBackbuf;
	int fCaretX;
	int fCaretY;
	int fCaretH;
	Vcl::Graphics::TFont* fDefaultFont;
	Vcl::Graphics::TBrush* fDefaultFontBrush;
	Vcl::Graphics::TPen* fBorderPen;
	Vcl::Graphics::TBrush* fBrush;
	bool fInsMode;
	Hyiedefs::TIEAlignment fDefaultAlign;
	double fZoom;
	int fSelStart;
	int fSelStop;
	int fMouseDownX;
	int fMouseDownY;
	TIECharInfo *fInsertingCharInfo;
	bool fForceDefaultColors;
	bool fIsDrawingAlpha;
	bool fFontLocked;
	bool fAutoSize;
	int fLineSpace;
	int fFixedHeight;
	System::Sysutils::TWordArray *fcache_h;
	System::Sysutils::TWordArray *fcache_w;
	System::Sysutils::TByteArray *fcache_InternalLeading;
	System::Sysutils::TByteArray *fcache_Descent;
	Hyiedefs::IntegerArray *fposxarray;
	Hyiedefs::IntegerArray *fposyarray;
	System::Classes::TList* fCharInfo;
	Hyiedefs::IntegerArray *fCharRef;
	bool fWriteFormattedString;
	System::WideString fFormattedString;
	System::Classes::TNotifyEvent fOnCursorMoved;
	Vcl::Graphics::TBitmap* fUnderBuffer;
	double fMarginLeft;
	double fMarginTop;
	double fMarginRight;
	double fMarginBottom;
	System::Uitypes::TColor fFillColor2;
	Hyiedefs::TIEGradientDir fGradientDir;
	TIEDrawTextMode fDrawTextMode;
	int fIdealHeight;
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	HIDESBASE MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Message);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMLButtonDblClk(Winapi::Messages::TWMMouse &Message);
	MESSAGE void __fastcall CMWantSpecialKey(Winapi::Messages::TWMKey &Msg);
	MESSAGE void __fastcall WMCut(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMCopy(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMPaste(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMKillFocus(Winapi::Messages::TWMKillFocus &Msg);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Winapi::Messages::TWMSetFocus &Msg);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	HIDESBASE MESSAGE void __fastcall CNChar(Winapi::Messages::TWMKey &Message);
	DYNAMIC void __fastcall KeyUp(System::Word &Key, System::Classes::TShiftState Shift);
	void __fastcall GoBack(System::WideChar * &CurPos);
	bool __fastcall GoBackIdx(int &CurPos);
	void __fastcall GoForwardIdx(int &CurPos);
	void __fastcall SaveCharInfo(int idx, PIECharInfo charinf);
	int __fastcall FindCharInfo(PIECharInfo info);
	void __fastcall RestoreCharInfo(int idx, Iegdiplus::TIECanvas* XCanvas);
	void __fastcall CopyCharInfoTo(int source, PIECharInfo charinf);
	int __fastcall DelChar(int idx);
	void __fastcall IncFontSize();
	void __fastcall DecFontSize();
	void __fastcall MoveUp();
	void __fastcall MoveDown();
	void __fastcall MoveHome();
	void __fastcall MoveEnd();
	void __fastcall MoveTo(int x, int y);
	void __fastcall ClearBitmap();
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall ResetSelection();
	void __fastcall SStop(int PrevPos, System::Classes::TShiftState Shift);
	void __fastcall RemoveSelected();
	void __fastcall CopyToClipboard();
	void __fastcall PasteFromClipboard();
	void __fastcall ResetCache(int from, int len);
	void __fastcall SwitchFontStyle(System::Uitypes::TFontStyle sty);
	void __fastcall GoWordBackIdx(int &CurPos);
	void __fastcall GoWordForwardIdx(int &CurPos);
	void __fastcall SetFontLocked(bool value);
	void __fastcall DoCursorMoved();
	void __fastcall SetTextString(System::UnicodeString value);
	System::UnicodeString __fastcall GetTextString();
	
public:
	__fastcall virtual TIETextControl(System::Classes::TComponent* Owner);
	__fastcall virtual ~TIETextControl();
	virtual void __fastcall Paint();
	virtual void __fastcall Update();
	__property System::WideChar * TextWideString = {read=fTextWide, write=fTextWide};
	__property System::UnicodeString Text = {read=GetTextString, write=SetTextString};
	__property Hyiedefs::pIntegerArray TextFormatRef = {read=fCharRef, write=fCharRef};
	__property System::Classes::TList* TextFormat = {read=fCharInfo, write=fCharInfo};
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	HIDESBASE void __fastcall PaintTo(Iegdiplus::TIECanvas* DestCanvas, int DestX, int DestY, int NonZoomDestWidth, int NonZoomDestHeight, bool DrawingAlpha = false);
	void __fastcall AddChar(System::WideChar key);
	void __fastcall InsertAlign(Hyiedefs::TIEAlignment Align);
	void __fastcall Init();
	void __fastcall RemoveUnreferenced();
	__property Vcl::Graphics::TFont* DefaultFont = {read=fDefaultFont};
	__property Vcl::Graphics::TBrush* DefaultFontBrush = {read=fDefaultFontBrush};
	__property Hyiedefs::TIEAlignment DefaultAlign = {read=fDefaultAlign, write=fDefaultAlign, nodefault};
	__property Vcl::Graphics::TPen* BorderPen = {read=fBorderPen};
	__property Vcl::Graphics::TBrush* Brush = {read=fBrush};
	__property double Zoom = {read=fZoom, write=fZoom};
	__property OnKeyDown;
	__property bool ForceDefaultColors = {read=fForceDefaultColors, write=fForceDefaultColors, nodefault};
	__property bool IsDrawingAlpha = {read=fIsDrawingAlpha, write=fIsDrawingAlpha, nodefault};
	__property bool IsFontLocked = {read=fFontLocked, write=SetFontLocked, nodefault};
	__property bool AutoSize = {read=fAutoSize, write=fAutoSize, nodefault};
	__property int GlobalLineSpace = {read=fLineSpace, write=fLineSpace, nodefault};
	__property int GlobalFixedHeight = {read=fFixedHeight, write=fFixedHeight, nodefault};
	__property bool WriteFormattedString = {read=fWriteFormattedString, write=fWriteFormattedString, nodefault};
	__property System::WideString FormattedString = {read=fFormattedString};
	__property PIECharInfo InsertingCharInfo = {read=fInsertingCharInfo};
	void __fastcall SetXFont(Vcl::Graphics::TFont* fnt);
	void __fastcall SetXBackColor(System::Uitypes::TColor bk);
	__property System::Classes::TNotifyEvent OnCursorMoved = {read=fOnCursorMoved, write=fOnCursorMoved};
	__property Vcl::Graphics::TBitmap* UnderBuffer = {read=fUnderBuffer, write=fUnderBuffer};
	__property double MarginLeft = {read=fMarginLeft, write=fMarginLeft};
	__property double MarginTop = {read=fMarginTop, write=fMarginTop};
	__property double MarginRight = {read=fMarginRight, write=fMarginRight};
	__property double MarginBottom = {read=fMarginBottom, write=fMarginBottom};
	__property int MaxLength = {read=fMaxLength, write=fMaxLength, nodefault};
	__property System::Uitypes::TColor FillColor2 = {read=fFillColor2, write=fFillColor2, nodefault};
	__property Hyiedefs::TIEGradientDir GradientDir = {read=fGradientDir, write=fGradientDir, nodefault};
	__property TIEDrawTextMode DrawTextMode = {read=fDrawTextMode, write=fDrawTextMode, nodefault};
	__property int IdealHeight = {read=fIdealHeight, nodefault};
public:
	/* TWinControl.CreateParented */ inline __fastcall TIETextControl(HWND ParentWindow) : Vcl::Controls::TCustomControl(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE void __fastcall IEInitialize_ietextc(void);
extern DELPHI_PACKAGE void __fastcall IEFinalize_ietextc(void);
}	/* namespace Ietextc */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_IETEXTC)
using namespace Ietextc;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// IetextcHPP
