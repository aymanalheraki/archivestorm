// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'iegdiplus.pas' rev: 35.00 (Windows)

#ifndef IegdiplusHPP
#define IegdiplusHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <Vcl.Graphics.hpp>
#include <System.Types.hpp>
#include <System.UITypes.hpp>
#include <hyiedefs.hpp>

//-- user supplied -----------------------------------------------------------
#undef TextOut

namespace Iegdiplus
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TIECanvasTextStyling;
struct TIEGPPointF;
struct TIEMetafileHeader;
class DELPHICLASS TIEMetafile;
class DELPHICLASS TIEPen;
class DELPHICLASS TIEBrush;
class DELPHICLASS TIECanvas;
class DELPHICLASS TIEEmptyCanvas;
//-- type declarations -------------------------------------------------------
typedef unsigned ARGB;

enum DECLSPEC_DENUM TIECanvasSmoothingMode : unsigned char { iesmInvalid, iesmDefault, iesmBestPerformance, iesmBestRenderingQuality, iesmNone, iesmAntialias };

enum DECLSPEC_DENUM TIECanvasInterpolationMode : unsigned char { ieiiInvalid, ieiiDefault, ieiiLowQuality, ieiiHighQuality, ieiiBilinear, ieiiBicubic, ieiiNearestNeighbor, ieiiHighQualityBilinear, ieiiHighQualityBicubic };

enum DECLSPEC_DENUM TIETextRenderingHintMode : unsigned char { ietrTextRenderingHintSystemDefault, ietrTextRenderingHintSingleBitPerPixelGridFit, ietrTextRenderingHintSingleBitPerPixel, ietrTextRenderingHintAntiAliasGridFit, ietrTextRenderingHintAntiAlias, ietrTextRenderingHintClearTypeGridFit };

enum DECLSPEC_DENUM TIECanvasPenLineJoin : unsigned char { ieljMiter, ieljBevel, ieljRound, ieljMiterClipped };

enum DECLSPEC_DENUM TIECanvasPenLineCap : unsigned char { ielcFlat, ielcSquare, ielcRound, ielcTriangle, ielcNoAnchor, ielcSquareAnchor, ielcRoundAnchor, ielcDiamondAnchor, ielcArrowAnchor, ielcCustom, ielcAnchorMask };

enum DECLSPEC_DENUM TIECanvasCompositingQuality : unsigned char { ieCompositingQualityDefault, ieCompositingQualityHighSpeed, ieCompositingQualityHighQuality, ieCompositingQualityGammaCorrected, ieCompositingQualityAssumeLinear };

enum DECLSPEC_DENUM TIECanvasCompositingMode : unsigned char { ieCompositingModeSourceOver, ieCompositingModeSourceCopy };

class PASCALIMPLEMENTATION TIECanvasTextStyling : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	int fBorderWidth;
	System::Classes::TNotifyEvent fOnSizeChange;
	void __fastcall SetBorderWidth(const int v);
	
public:
	System::Uitypes::TColor BorderColor;
	TIECanvasPenLineJoin BorderLineJoin;
	int FillTransparency1;
	int FillTransparency2;
	System::Uitypes::TColor FillColor2;
	Hyiedefs::TIEGDIPlusGradient FillGradient;
	__property int BorderWidth = {read=fBorderWidth, write=SetBorderWidth, nodefault};
	__property System::Classes::TNotifyEvent OnSizeChange = {read=fOnSizeChange, write=fOnSizeChange};
	__fastcall TIECanvasTextStyling();
	void __fastcall Assign(TIECanvasTextStyling* Source);
	void __fastcall Reset();
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TIECanvasTextStyling() { }
	
};


struct DECLSPEC_DRECORD TIEGPPointF
{
public:
	float X;
	float Y;
};


#pragma pack(push,1)
struct DECLSPEC_DRECORD TIEMetafileHeader
{
public:
	unsigned Type_;
	unsigned Size;
	unsigned Version;
	unsigned EmfPlusFlags;
	float DpiX;
	float DpiY;
	int X;
	int Y;
	int Width;
	int Height;
	tagENHMETAHEADER Header;
};
#pragma pack(pop)


#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEMetafile : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	void *fHandle;
	TIEMetafileHeader fHeader;
	void __fastcall FillHeader();
	int __fastcall GetWidth();
	int __fastcall GetHeight();
	
public:
	__fastcall TIEMetafile(const System::WideString Filename)/* overload */;
	__fastcall TIEMetafile(System::Classes::TStream* Stream)/* overload */;
	__fastcall virtual ~TIEMetafile();
	__property void * Handle = {read=fHandle};
	__property int Width = {read=GetWidth, nodefault};
	__property int Height = {read=GetHeight, nodefault};
	bool __fastcall IsWmf();
	bool __fastcall IsEmf();
	bool __fastcall IsEmfPlus();
	bool __fastcall IsEmfPlusDual();
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEPen : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	void *fGHandle;
	Vcl::Graphics::TPen* fPen;
	System::Uitypes::TColor fColor;
	int fTransparency;
	float fWidth;
	Vcl::Graphics::TPenStyle fStyle;
	Vcl::Graphics::TPenMode fMode;
	TIECanvasPenLineJoin fLineJoin;
	TIECanvasPenLineCap fLineStartCap;
	TIECanvasPenLineCap fLineEndCap;
	void __fastcall ReCreatePen();
	void __fastcall SetWidth(float value);
	void __fastcall SetTColor(System::Uitypes::TColor value);
	void __fastcall SetTransparency(int value);
	void __fastcall SetStyle(Vcl::Graphics::TPenStyle value);
	unsigned __fastcall GetARGBColor();
	void __fastcall SetMode(Vcl::Graphics::TPenMode value);
	void __fastcall SetVHandle(HPEN value);
	HPEN __fastcall GetVHandle();
	void __fastcall SetLineJoin(TIECanvasPenLineJoin value);
	void __fastcall SetLineStartCap(TIECanvasPenLineCap value);
	void __fastcall SetLineEndCap(TIECanvasPenLineCap value);
	
public:
	__fastcall TIEPen(Vcl::Graphics::TPen* Pen);
	__fastcall virtual ~TIEPen();
	__property float Width = {read=fWidth, write=SetWidth};
	__property System::Uitypes::TColor Color = {read=fColor, write=SetTColor, nodefault};
	__property int Transparency = {read=fTransparency, write=SetTransparency, nodefault};
	__property Vcl::Graphics::TPenStyle Style = {read=fStyle, write=SetStyle, nodefault};
	__property Vcl::Graphics::TPenMode Mode = {read=fMode, write=SetMode, nodefault};
	__property HPEN Handle = {read=GetVHandle, write=SetVHandle, nodefault};
	__property TIECanvasPenLineJoin LineJoin = {read=fLineJoin, write=SetLineJoin, nodefault};
	__property TIECanvasPenLineCap LineStartCap = {read=fLineStartCap, write=SetLineStartCap, nodefault};
	__property TIECanvasPenLineCap LineEndCap = {read=fLineEndCap, write=SetLineEndCap, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEBrush : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	void *fGHandle;
	Vcl::Graphics::TBrush* fBrush;
	System::Uitypes::TColor fColor;
	int fTransparency;
	System::Uitypes::TColor fBackColor;
	int fBackTransparency;
	Vcl::Graphics::TBrushStyle fStyle;
	TIEGPPointF fGradPoint1;
	TIEGPPointF fGradPoint2;
	void __fastcall RecreateBrush();
	Vcl::Graphics::TBitmap* __fastcall GetBitmap();
	void __fastcall SetBitmap(Vcl::Graphics::TBitmap* value);
	void __fastcall SetTColor(System::Uitypes::TColor value);
	void __fastcall SetBackTColor(System::Uitypes::TColor value);
	void __fastcall SetTransparency(int value);
	void __fastcall SetBackTransparency(int value);
	void __fastcall SetStyle(Vcl::Graphics::TBrushStyle value);
	unsigned __fastcall GetARGBColor();
	
public:
	__fastcall TIEBrush(Vcl::Graphics::TBrush* Brush);
	__fastcall virtual ~TIEBrush();
	__property Vcl::Graphics::TBitmap* Bitmap = {read=GetBitmap, write=SetBitmap};
	__property System::Uitypes::TColor Color = {read=fColor, write=SetTColor, nodefault};
	__property System::Uitypes::TColor BackColor = {read=fBackColor, write=SetBackTColor, nodefault};
	__property int Transparency = {read=fTransparency, write=SetTransparency, nodefault};
	__property int BackTransparency = {read=fBackTransparency, write=SetBackTransparency, nodefault};
	__property Vcl::Graphics::TBrushStyle Style = {read=fStyle, write=SetStyle, nodefault};
	void __fastcall SetGradient(Hyiedefs::TIEGDIPlusGradient Dir, int Width, int Height)/* overload */;
	void __fastcall SetGradient(Hyiedefs::TIEGDIPlusGradient Dir, const System::Types::TRect &Rect)/* overload */;
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TIECanvas : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TIECanvasSmoothingMode fSmoothingMode;
	TIECanvasInterpolationMode fInterpolationMode;
	TIETextRenderingHintMode fTextRendering;
	int fCanvasHandle;
	int fSavedDC;
	void __fastcall SetSmoothingMode(TIECanvasSmoothingMode value);
	void __fastcall SetInterpolationMode(TIECanvasInterpolationMode value);
	void __fastcall SetTextRendering(TIETextRenderingHintMode value);
	void __fastcall SetPenPos(const System::Types::TPoint &value);
	HDC __fastcall GetHandle();
	Vcl::Graphics::TFont* __fastcall GetFont();
	void __fastcall DrawTextEx(System::WideString Text, int X, int Y, int Width, int Height, bool MeasureOnly, /* out */ System::Types::TSize &TextSize);
	void __fastcall DrawTextEx2(const System::WideString Text, int X, int Y, int Width, int Height, int Angle);
	
protected:
	void *fGraphics;
	Vcl::Graphics::TCanvas* fCanvas;
	TIEPen* fPen;
	System::Types::TPoint fPenPos;
	TIEBrush* fBrush;
	bool fUseGDIPlus;
	void *fImage;
	System::Classes::TNotifyEvent fOnDestroy;
	System::TObject* fROIBitmap;
	bool fTypographicDrawText;
	TIECanvasTextStyling* fTextStyling;
	
public:
	__fastcall TIECanvas(Vcl::Graphics::TCanvas* Canvas, bool AntiAlias, bool UseGDIPlus, Vcl::Graphics::TBitmap* Bitmap)/* overload */;
	__fastcall virtual ~TIECanvas();
	__property bool TypographicDrawText = {read=fTypographicDrawText, write=fTypographicDrawText, nodefault};
	__property TIECanvasSmoothingMode SmoothingMode = {read=fSmoothingMode, write=SetSmoothingMode, nodefault};
	__property TIECanvasInterpolationMode InterpolationMode = {read=fInterpolationMode, write=SetInterpolationMode, nodefault};
	__property TIETextRenderingHintMode TextRendering = {read=fTextRendering, write=SetTextRendering, nodefault};
	__property TIECanvasTextStyling* TextStyling = {read=fTextStyling, write=fTextStyling};
	__property System::Types::TPoint PenPos = {read=fPenPos, write=SetPenPos};
	__property TIEPen* Pen = {read=fPen};
	__property TIEBrush* Brush = {read=fBrush};
	__property Vcl::Graphics::TCanvas* GDICanvas = {read=fCanvas};
	__property Vcl::Graphics::TFont* Font = {read=GetFont};
	__property HDC Handle = {read=GetHandle, nodefault};
	__property System::TObject* ROIBitmap = {read=fROIBitmap, write=fROIBitmap};
	void __fastcall SetCompositingMode(TIECanvasCompositingMode Mode, TIECanvasCompositingQuality Quality);
	void __fastcall SetClipRect(const System::Types::TRect &r);
	__property System::Classes::TNotifyEvent OnDestroy = {read=fOnDestroy, write=fOnDestroy};
	void __fastcall Flush();
	void __fastcall DrawBanner(int Width, int Height, const System::UnicodeString Msg, bool AtTop = false);
	void __fastcall MoveTo(int X, int Y);
	void __fastcall LineTo(int X, int Y);
	void __fastcall Rectangle(int X1, int Y1, int X2, int Y2)/* overload */;
	void __fastcall Rectangle(const System::Types::TRect &Rect)/* overload */;
	void __fastcall Ellipse(int X1, int Y1, int X2, int Y2)/* overload */;
	void __fastcall Ellipse(const System::Types::TRect &Rect)/* overload */;
	void __fastcall DrawLine(double X1, double Y1, double X2, double Y2);
	void __fastcall DrawCurvedLine(double X1, double Y1, double X2, double Y2, double Curve = 1.000000E+00)/* overload */;
	void __fastcall DrawCurvedLine(double X1, double Y1, double X2, double Y2, double Curve, bool CalcOnly, System::Types::TRect &plim)/* overload */;
	void __fastcall DrawCurvedLine(System::Types::TPoint *Points, const int Points_High)/* overload */;
	void __fastcall DrawLinesPath(Hyiedefs::TIEDPointArray points);
	void __fastcall Polygon(System::Types::TPoint *Points, const int Points_High);
	void __fastcall PolygonD(Hyiedefs::TDPoint *Points, const int Points_High);
	void __fastcall Arc(int X1, int Y1, int X2, int Y2, int X3, int Y3, int X4, int Y4)/* overload */;
	void __fastcall Arc(double X1, double Y1, double X2, double Y2, double Radius, bool Invert = false)/* overload */;
	void __fastcall Arc(double X1, double Y1, double X2, double Y2, double Radius, bool Invert, bool CalcOnly, System::Types::TRect &plim)/* overload */;
	void __fastcall Polyline(System::Types::TPoint *Points, const int Points_High);
	void __fastcall PolylineD(Hyiedefs::TDPoint *Points, const int Points_High);
	void __fastcall RoundRect(int X1, int Y1, int X2, int Y2, int X3, int Y3);
	void __fastcall Pie(float X, float Y, float Width, float Height, float StartAngle, float SweepAngle)/* overload */;
	void __fastcall Pie(int X1, int Y1, int X2, int Y2, int X3, int Y3, int X4, int Y4)/* overload */;
	void __fastcall FillRect(const System::Types::TRect &Rect);
	void __fastcall GradientFillRect(const System::Types::TRect &aRect, Hyiedefs::TIEGDIPlusGradient Dir = (Hyiedefs::TIEGDIPlusGradient)(0x2))/* overload */;
	void __fastcall GradientFillRect(const System::Types::TRect &aRect, System::Uitypes::TColor FromColor, System::Uitypes::TColor ToColor, Hyiedefs::TIEGDIPlusGradient Dir = (Hyiedefs::TIEGDIPlusGradient)(0x2))/* overload */;
	void __fastcall Rotate(double Angle);
	void __fastcall Translate(double dx, double dy);
	void __fastcall ResetTransform();
	void __fastcall Draw(TIEMetafile* Metafile, double x, double y, float width, float height);
	int __fastcall TextWidth(const System::WideString Text);
	int __fastcall TextHeight(const System::WideString Text);
	System::Types::TSize __fastcall TextExtent(const System::WideString Text);
	void __fastcall TextOut(int X, int Y, const System::UnicodeString Text);
	void __fastcall TextRect(const System::Types::TRect &Rect, int X, int Y, const System::WideString Text);
	void __fastcall DrawText(const System::WideString Text, const System::Types::TRect &BoundingRect)/* overload */;
	void __fastcall DrawText(const System::WideString Text, const System::Types::TRect &BoundingRect, int Angle)/* overload */;
	void __fastcall DrawText(const System::WideString Text, int X, int Y, int Angle = 0x0)/* overload */;
	System::Types::TSize __fastcall MeasureText(const System::WideString Text, const System::Types::TRect &BoundingRect, int Angle = 0x0)/* overload */;
	System::Types::TSize __fastcall MeasureText(const System::WideString Text, int Angle = 0x0)/* overload */;
	int __fastcall GDITextWidth(const System::WideString Text);
	int __fastcall GDITextHeight(const System::WideString Text);
	System::Types::TSize __fastcall GDITextExtent(const System::WideString Text);
	void __fastcall GDITextOut(int X, int Y, const System::UnicodeString Text);
	void __fastcall GDITextOut2(int X, int Y, const System::UnicodeString Text);
	void __fastcall GDITextRect(const System::Types::TRect &Rect, int X, int Y, const System::WideString Text);
	void __fastcall GDITextRectEx(const System::Types::TRect &Rect, int X, int Y, const System::WideString Text);
};


class PASCALIMPLEMENTATION TIEEmptyCanvas : public TIECanvas
{
	typedef TIECanvas inherited;
	
private:
	Vcl::Graphics::TBitmap* fTempBitmap;
	
public:
	__fastcall TIEEmptyCanvas()/* overload */;
	__fastcall virtual ~TIEEmptyCanvas();
public:
	/* TIECanvas.Create */ inline __fastcall TIEEmptyCanvas(Vcl::Graphics::TCanvas* Canvas, bool AntiAlias, bool UseGDIPlus, Vcl::Graphics::TBitmap* Bitmap)/* overload */ : TIECanvas(Canvas, AntiAlias, UseGDIPlus, Bitmap) { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::Int8 IEMetafileTypeInvalid = System::Int8(0x0);
static const System::Int8 IEMetafileTypeWmf = System::Int8(0x1);
static const System::Int8 IEMetafileTypeWmfPlaceable = System::Int8(0x2);
static const System::Int8 IEMetafileTypeEmf = System::Int8(0x3);
static const System::Int8 IEMetafileTypeEmfPlusOnly = System::Int8(0x4);
static const System::Int8 IEMetafileTypeEmfPlusDual = System::Int8(0x5);
extern DELPHI_PACKAGE bool __fastcall IEGDIPAvailable _DEPRECATED_ATTRIBUTE1("GDI+ is always available on supported Windows versions - http://imageen.com/help/Compatibility.html") (void);
extern DELPHI_PACKAGE bool __fastcall IEGDIPEnabled _DEPRECATED_ATTRIBUTE1("Use IEGlobalSettings().UseGDIPlus instead - http://imageen.com/help/Compatibility.html") (void);
extern DELPHI_PACKAGE void __fastcall IEGDIPLoadLibrary(void);
extern DELPHI_PACKAGE void __fastcall IEGDIPUnLoadLibrary(bool ForceUnload = false);
extern DELPHI_PACKAGE void __fastcall InitGDIPFont(Vcl::Graphics::TCanvas* Canvas);
extern DELPHI_PACKAGE void __fastcall IEDrawSimpleShape(TIECanvas* Canvas, int Left, int Top, int Width, int Height, System::Uitypes::TColor BorderColor, int BorderWidth, double BorderOpacity, System::Uitypes::TColor FillColor, System::Uitypes::TColor FillColor2 = (System::Uitypes::TColor)(0x1fffffff), Hyiedefs::TIEGDIPlusGradient FillGradient = (Hyiedefs::TIEGDIPlusGradient)(0x2), double FillOpacity = 1.000000E+00, Hyiedefs::TIEShape Shape = (Hyiedefs::TIEShape)(0x4), int RectRounding = 0x14, bool AntiAlias = true);
extern DELPHI_PACKAGE void __fastcall IEInitialize_iegdiplus(void);
extern DELPHI_PACKAGE void __fastcall IEFinalize_iegdiplus(void);
}	/* namespace Iegdiplus */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_IEGDIPLUS)
using namespace Iegdiplus;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// IegdiplusHPP
