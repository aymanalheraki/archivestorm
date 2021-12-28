// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AdvUtil.pas' rev: 35.00 (Windows)

#ifndef AdvutilHPP
#define AdvutilHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <System.SysUtils.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Grids.hpp>
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <AdvStyleIF.hpp>
#include <System.Types.hpp>
#include <System.Character.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Advutil
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE IAdvDataBinderBase;
typedef System::DelphiInterface<IAdvDataBinderBase> _di_IAdvDataBinderBase;
__interface DELPHIINTERFACE IAdvDataBinderGrid;
typedef System::DelphiInterface<IAdvDataBinderGrid> _di_IAdvDataBinderGrid;
struct TGaugeSettings;
//-- type declarations -------------------------------------------------------
__interface  INTERFACE_UUID("{778B63C9-34E3-4B65-A6B8-85E3EB1D17C3}") IAdvDataBinderBase  : public System::IInterface 
{
	virtual void __fastcall DataBeginUpdate() = 0 ;
	virtual void __fastcall DataEndUpdate() = 0 ;
};

__interface  INTERFACE_UUID("{D23BDEAA-49B1-451A-9401-0D0D11A9957A}") IAdvDataBinderGrid  : public IAdvDataBinderBase 
{
	virtual void __fastcall SetDataColumnCount(int AValue) = 0 ;
	virtual void __fastcall SetDataRowCount(int AValue) = 0 ;
	virtual void __fastcall ClearData() = 0 ;
	virtual int __fastcall GetDataRowCount() = 0 ;
	virtual void __fastcall SetDataValue(int AColumn, int ARow, System::UnicodeString AValue) = 0 ;
	virtual void __fastcall SetDataHeader(int AColumn, System::UnicodeString AValue) = 0 ;
};

enum DECLSPEC_DENUM TAutoType : unsigned char { atNumeric, atFloat, atString, atDate, atTime, atScientific };

enum DECLSPEC_DENUM TTextType : unsigned char { ttText, ttHTML, ttRTF, ttFormula, ttURL, ttUnicode };

enum DECLSPEC_DENUM TGradientPart : unsigned char { gpFull, gpLeft, gpRight, gpMiddle };

enum DECLSPEC_DENUM TCellShape : unsigned char { csRectangle, csCircle, csTriangleLeft, csTriangleRight, csTriangleUp, csTriangleDown, csDiamond, csLineVert, csLineHorz, csRoundRect, csEllips, csSquare, csRoundSquare, csStar, csArrowUp, csArrowDown, csArrowLeft, csArrowRight, csHalfStar };

enum DECLSPEC_DENUM TControlType : unsigned char { ctButton, ctSpin, ctCombo };

enum DECLSPEC_DENUM TControlDrawStyle : unsigned char { cdsXPTheme, cdsClassic, cdsFlat, cdsMetro };

enum DECLSPEC_DENUM TControlState : unsigned char { csNormal, csHover, csDown, csDisabled };

typedef System::DynamicArray<System::WideChar> TCharSet;

enum DECLSPEC_DENUM TGaugeOrientation : unsigned char { goHorizontal, goVertical };

struct DECLSPEC_DRECORD TGaugeSettings
{
public:
	System::Uitypes::TColor Level0Color;
	System::Uitypes::TColor Level0ColorTo;
	System::Uitypes::TColor Level1Color;
	System::Uitypes::TColor Level1ColorTo;
	System::Uitypes::TColor Level2Color;
	System::Uitypes::TColor Level2ColorTo;
	System::Uitypes::TColor Level3Color;
	System::Uitypes::TColor Level3ColorTo;
	int Level1Perc;
	int Level2Perc;
	System::Uitypes::TColor BorderColor;
	bool ShowBorder;
	bool Stacked;
	bool ShowPercentage;
	Vcl::Graphics::TFont* Font;
	System::Uitypes::TColor FontColor;
	bool CompletionSmooth;
	bool ShowGradient;
	int Steps;
	int Position;
	System::Uitypes::TColor BackgroundColor;
	TGaugeOrientation Orientation;
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE int __stdcall StrCmpLogicalW(System::WideChar * psz1, System::WideChar * psz2);
extern DELPHI_PACKAGE int __fastcall Limit(int v, int mi, int ma);
extern DELPHI_PACKAGE System::UnicodeString __fastcall RemoveAccentedStr(System::UnicodeString s);
extern DELPHI_PACKAGE void __fastcall DrawSelectionGradient(Vcl::Graphics::TCanvas* Canvas, System::Uitypes::TColor color1, System::Uitypes::TColor color2, System::Uitypes::TColor mircolor1, System::Uitypes::TColor mircolor2, System::Uitypes::TColor linecolortop, System::Uitypes::TColor linecolorbottom, System::Uitypes::TColor bordercolor, System::Uitypes::TColor edgecolor, System::Uitypes::TColor bkgcolor, const System::Types::TRect &r, TGradientPart part);
extern DELPHI_PACKAGE void __fastcall SplitString(System::UnicodeString sep, System::UnicodeString s, System::Classes::TStringList* sl);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetUnquotedStr(System::UnicodeString S);
extern DELPHI_PACKAGE System::UnicodeString __fastcall CSVQuotes(const System::UnicodeString S);
extern DELPHI_PACKAGE int __fastcall CheckLimits(int Value, int LowLimit, int UpLimit);
extern DELPHI_PACKAGE System::Uitypes::TColor __fastcall DarkenColor(System::Uitypes::TColor Color);
extern DELPHI_PACKAGE System::Uitypes::TColor __fastcall ChangeColorPerc(System::Uitypes::TColor Color, int Perc);
extern DELPHI_PACKAGE int __fastcall FIPos(System::UnicodeString su, System::UnicodeString s);
extern DELPHI_PACKAGE int __fastcall VarCharPos(System::WideChar ch, const System::UnicodeString s, int &Res);
extern DELPHI_PACKAGE int __fastcall VarCharPosNC(System::WideChar ch, const System::UnicodeString s, int &Res);
extern DELPHI_PACKAGE int __fastcall CharPos(System::WideChar ch, const System::UnicodeString s);
extern DELPHI_PACKAGE bool __fastcall IsInGridRect(const Vcl::Grids::TGridRect &rc, int c, int r);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetToken(System::UnicodeString &s, System::UnicodeString separator);
extern DELPHI_PACKAGE int __fastcall MaxI(int i1, int i2);
extern DELPHI_PACKAGE int __fastcall MinI(int i1, int i2);
extern DELPHI_PACKAGE System::UnicodeString __fastcall StringListToText(System::Classes::TStringList* st);
extern DELPHI_PACKAGE int __fastcall VarPos(System::UnicodeString su, System::UnicodeString s, int &respos);
extern DELPHI_PACKAGE System::WideChar __fastcall FirstChar(TCharSet charset, System::UnicodeString s, int &spos);
extern DELPHI_PACKAGE bool __fastcall NameToCell(System::UnicodeString s, System::Types::TPoint &cell);
extern DELPHI_PACKAGE System::UnicodeString __fastcall XMLEncode(System::UnicodeString s);
extern DELPHI_PACKAGE bool __fastcall IsURL(const System::UnicodeString s);
extern DELPHI_PACKAGE void __fastcall StripURLProtocol(System::UnicodeString &s);
extern DELPHI_PACKAGE TTextType __fastcall TextType(System::UnicodeString s, bool AllowHTML = true);
extern DELPHI_PACKAGE bool __fastcall IsNumChar(System::WideChar ch);
extern DELPHI_PACKAGE bool __fastcall CheckNum(System::WideChar ch);
extern DELPHI_PACKAGE bool __fastcall CheckSignedNum(System::WideChar ch);
extern DELPHI_PACKAGE bool __fastcall CheckFloatNumNoExp(System::WideChar ch);
extern DELPHI_PACKAGE System::UnicodeString __fastcall RemoveSeps(System::UnicodeString s);
extern DELPHI_PACKAGE System::UnicodeString __fastcall HTMLLineBreaks(System::UnicodeString s);
extern DELPHI_PACKAGE System::UnicodeString __fastcall HTMLColor(unsigned l);
extern DELPHI_PACKAGE TAutoType __fastcall IsType(System::UnicodeString s)/* overload */;
extern DELPHI_PACKAGE TAutoType __fastcall IsType(System::UnicodeString s, System::WideChar ADecimalSeparator, System::WideChar AThousandSeparator)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall CLFToLF(System::UnicodeString s);
extern DELPHI_PACKAGE System::UnicodeString __fastcall LFToCLF(System::UnicodeString s);
extern DELPHI_PACKAGE void __fastcall StringToPassword(System::UnicodeString &s, System::WideChar passwordchar);
extern DELPHI_PACKAGE void __fastcall StringToOem(System::UnicodeString &s);
extern DELPHI_PACKAGE void __fastcall OemToString(System::UnicodeString &s);
extern DELPHI_PACKAGE System::UnicodeString __fastcall DoubleToSingleChar(System::WideChar ch, const System::UnicodeString s);
extern DELPHI_PACKAGE void __fastcall LineFeedsToCSV(System::UnicodeString &s);
extern DELPHI_PACKAGE void __fastcall LineFeedsToCSVNQ(System::UnicodeString &s);
extern DELPHI_PACKAGE void __fastcall CSVToLineFeeds(System::UnicodeString &s);
extern DELPHI_PACKAGE void __fastcall LineFeedsToJava(System::UnicodeString &s);
extern DELPHI_PACKAGE void __fastcall JavaToLineFeeds(System::UnicodeString &s);
extern DELPHI_PACKAGE bool __fastcall MatchStrEx(System::UnicodeString s1, System::UnicodeString s2, bool DoCase);
extern DELPHI_PACKAGE bool __fastcall MatchStr(System::UnicodeString s1, System::UnicodeString s2, bool DoCase);
extern DELPHI_PACKAGE System::UnicodeString __fastcall RemoveThousandSeparator(System::UnicodeString Value);
extern DELPHI_PACKAGE System::UnicodeString __fastcall StripThousandSeparator(System::UnicodeString s);
extern DELPHI_PACKAGE bool __fastcall Matches(System::WideChar * s0a, System::WideChar * s1a);
extern DELPHI_PACKAGE System::UnicodeString __fastcall LfToFile(System::UnicodeString s);
extern DELPHI_PACKAGE System::UnicodeString __fastcall FileToLf(System::UnicodeString s, bool multiline);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetLongestLine(Vcl::Graphics::TCanvas* Canvas, System::UnicodeString s);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetNextLine(System::UnicodeString &s, bool multiline);
extern DELPHI_PACKAGE int __fastcall LinesInText(System::UnicodeString s, bool multiline);
extern DELPHI_PACKAGE System::UnicodeString __fastcall RectString(const System::Types::TRect &r);
extern DELPHI_PACKAGE System::UnicodeString __fastcall FixDecimalSeparator(System::UnicodeString s);
extern DELPHI_PACKAGE System::TDateTime __fastcall GetNextDate(System::TDateTime d, System::Word dye, System::Word dmo, System::Word dda, System::TDateTime dtv);
extern DELPHI_PACKAGE void __fastcall DrawBitmapResourceTransp(Vcl::Graphics::TCanvas* Canvas, System::Uitypes::TColor bkColor, const System::Types::TRect &r, System::UnicodeString ResName, float scale);
extern DELPHI_PACKAGE void __fastcall DrawBitmapTransp(Vcl::Graphics::TCanvas* Canvas, Vcl::Graphics::TBitmap* bmp, System::Uitypes::TColor bkcolor, const System::Types::TRect &r, float scale);
extern DELPHI_PACKAGE int __fastcall SinglePos(System::WideChar p, System::UnicodeString s, int &sp);
extern DELPHI_PACKAGE int __fastcall NumSingleChar(System::WideChar p, System::UnicodeString s);
extern DELPHI_PACKAGE int __fastcall NumDelim(System::WideChar p, System::UnicodeString s);
extern DELPHI_PACKAGE int __fastcall NumCharDel(System::WideChar p, System::WideChar del, System::UnicodeString s);
extern DELPHI_PACKAGE int __fastcall NumChar(System::WideChar p, System::UnicodeString s);
extern DELPHI_PACKAGE int __fastcall NumCharInStr(System::WideChar p, System::UnicodeString s);
extern DELPHI_PACKAGE System::UnicodeString __fastcall LineFeedsToXLS(System::UnicodeString s);
extern DELPHI_PACKAGE System::UnicodeString __fastcall CRToLF(System::UnicodeString s);
extern DELPHI_PACKAGE System::UnicodeString __fastcall StripCRLF(System::UnicodeString s);
extern DELPHI_PACKAGE System::UnicodeString __fastcall ShiftCase(System::UnicodeString Name);
extern DELPHI_PACKAGE System::TDateTime __fastcall StrToShortdateUS(System::UnicodeString s);
extern DELPHI_PACKAGE System::TDateTime __fastcall StrToShortDateEU(System::UnicodeString s);
extern DELPHI_PACKAGE void __fastcall DrawErrorLines(Vcl::Controls::TWinControl* Parent, Vcl::Graphics::TCanvas* Canvas, System::UnicodeString TmpStr, const System::Types::TRect &Rect, int Height, int ErrPos, int ErrLen);
extern DELPHI_PACKAGE void __fastcall DrawRangeIndicator(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &r, int Value, int Range, bool ShowValue, System::Uitypes::TColor NegColor, System::Uitypes::TColor PosColor);
extern DELPHI_PACKAGE void __fastcall DrawProgressLin(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &r, System::Uitypes::TColor Color1, System::Uitypes::TColor TColor1, System::Uitypes::TColor Color2, System::Uitypes::TColor TColor2, double pd, int Mx, int My, int Min, int Max, double Scale, System::UnicodeString Fmt, System::Uitypes::TColor BorderColor, bool print);
extern DELPHI_PACKAGE void __fastcall DrawProgressPie(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &r, System::Uitypes::TColor Color, int p, bool print);
extern DELPHI_PACKAGE void __fastcall DrawGradient(Vcl::Graphics::TCanvas* Canvas, System::Uitypes::TColor FromColor, System::Uitypes::TColor ToColor, int Steps, const System::Types::TRect &R, bool Direction);
extern DELPHI_PACKAGE void __fastcall DrawVistaGradient(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, System::Uitypes::TColor ColorFrom, System::Uitypes::TColor ColorTo, System::Uitypes::TColor ColorMirrorFrom, System::Uitypes::TColor ColorMirrorTo, bool Direction, System::Uitypes::TColor BorderColor, bool LeftRightBorder = false, bool Fill = true);
extern DELPHI_PACKAGE System::Uitypes::TColor __fastcall GradientAt(System::Uitypes::TColor FromColor, System::Uitypes::TColor ToColor, int Left, int Right, int Pos);
extern DELPHI_PACKAGE void __fastcall DrawComboButton(Vcl::Graphics::TCanvas* Canvas, NativeUInt Handle, const System::Types::TRect &ARect, TControlDrawStyle AControlStyle, TControlState AState, const Advstyleif::TColorTones &ATones, float DPIScale);
extern DELPHI_PACKAGE void __fastcall DrawButton(Vcl::Graphics::TCanvas* Canvas, NativeUInt AHandle, const System::Types::TRect &ARect, TControlDrawStyle AControlStyle, TControlState AState, const Advstyleif::TColorTones &ATones, bool Prefix, System::UnicodeString ACaption = System::UnicodeString());
extern DELPHI_PACKAGE void __fastcall DrawSpinButtons(Vcl::Graphics::TCanvas* Canvas, NativeUInt Handle, const System::Types::TRect &ARect, TControlDrawStyle AControlStyle, TControlState AState, const Advstyleif::TColorTones &ATones, float DPIScale);
extern DELPHI_PACKAGE void __fastcall DrawBitmapAlpha(Vcl::Graphics::TCanvas* ACanvas, int ALeft, int ATop, Vcl::Graphics::TBitmap* ABitmap);
extern DELPHI_PACKAGE System::WideString __fastcall DecodeWideStr(System::UnicodeString s);
extern DELPHI_PACKAGE System::UnicodeString __fastcall EncodeWideStr(System::WideString s);
extern DELPHI_PACKAGE int __fastcall StrPosWide(System::WideString SubStr, System::WideString Str);
extern DELPHI_PACKAGE bool __fastcall IsDateStr(System::UnicodeString s);
extern DELPHI_PACKAGE void __fastcall MakeFragment(System::UnicodeString &HTML);
extern DELPHI_PACKAGE bool __fastcall DynaLink_UpdateLayeredWindow(NativeUInt hwnd, NativeUInt hdcDst, System::Types::PPoint pptDst, System::Types::PPoint size, NativeUInt hdcSrc, System::Types::PPoint pptSrc, unsigned crKey, _BLENDFUNCTION &pblend, unsigned dwFlags);
extern DELPHI_PACKAGE bool __fastcall DynaLink_SetLayeredWindowAttributes(NativeUInt HWND, unsigned crKey, System::Byte bAlpha, unsigned dwFlags);
extern DELPHI_PACKAGE void __fastcall DrawTriangle(Vcl::Graphics::TCanvas* Canvas, int X, int Y, System::Uitypes::TColor Color);
extern DELPHI_PACKAGE void __fastcall DrawGauge(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &R, int Position, const TGaugeSettings &Settings);
extern DELPHI_PACKAGE void __fastcall DrawShape(Vcl::Graphics::TCanvas* Canvas, int X, int Y, int Width, int Height, TCellShape Shape, System::Uitypes::TColor FillColor, System::Uitypes::TColor LineColor);
extern DELPHI_PACKAGE bool __fastcall MakeHTMLHyperlink(const System::UnicodeString Value, const System::UnicodeString LinkType, System::UnicodeString &ValueWithLink);
extern DELPHI_PACKAGE System::UnicodeString __fastcall ToFixedDecSep(System::UnicodeString s);
extern DELPHI_PACKAGE System::UnicodeString __fastcall FromFixedDecSep(System::UnicodeString s);
extern DELPHI_PACKAGE float __fastcall GetDPIScale(Vcl::Controls::TControl* AControl, Vcl::Graphics::TCanvas* ACanvas);
}	/* namespace Advutil */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ADVUTIL)
using namespace Advutil;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AdvutilHPP
