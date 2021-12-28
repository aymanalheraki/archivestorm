// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AdvGDIP.pas' rev: 35.00 (Windows)

#ifndef AdvgdipHPP
#define AdvgdipHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.ActiveX.hpp>
#include <System.Math.hpp>
#include <Vcl.Graphics.hpp>
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <System.SysUtils.hpp>
#include <System.Win.ComObj.hpp>
#include <Vcl.Forms.hpp>
#include <AdvTypes.hpp>
#include <System.UITypes.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

#pragma link "gdiplus.lib"


namespace Advgdip
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE IWinStyle;
typedef System::DelphiInterface<IWinStyle> _di_IWinStyle;
class DELPHICLASS TGdiplusBase;
struct TGPPointF;
struct TGPPoint;
struct TGPRectF;
struct TGPRect;
struct GdiplusStartupInput;
struct GdiplusStartupOutput;
struct EncoderParameter;
struct EncoderParameters;
struct ImageCodecInfo;
struct ColorMap;
struct ColorPalette;
class DELPHICLASS TGPRegion;
class DELPHICLASS TGPImageAttributes;
class DELPHICLASS TGPFontFamily;
class DELPHICLASS TGPFontCollection;
class DELPHICLASS TGPFont;
class DELPHICLASS TGPBrush;
class DELPHICLASS TGPSolidBrush;
class DELPHICLASS TGPTextureBrush;
class DELPHICLASS TGPLinearGradientBrush;
class DELPHICLASS TGPHatchBrush;
class DELPHICLASS TGPPen;
class DELPHICLASS TGPStringFormat;
class DELPHICLASS TGPGraphicsPath;
class DELPHICLASS TGPPathGradientBrush;
class DELPHICLASS TGPImage;
class DELPHICLASS TGPBitmap;
class DELPHICLASS TGPMatrix;
class DELPHICLASS TGPGraphics;
class DELPHICLASS TFixedStreamAdapter;
class DELPHICLASS TAdvGDIPPicture;
struct TGDIPFillParameters;
//-- type declarations -------------------------------------------------------
__interface  INTERFACE_UUID("{41886CF9-1932-4DE4-A90B-6E3D0F181417}") IWinStyle  : public System::IInterface 
{
	virtual void __fastcall ChangeStyle(bool AWin7, int AStyle) = 0 ;
	virtual void __fastcall ChangeMenu(System::Uitypes::TColor AColor) = 0 ;
	virtual void __fastcall UpdateMenu() = 0 ;
	virtual void __fastcall HideMenu() = 0 ;
	virtual void __fastcall ShowMenuShortCuts() = 0 ;
	virtual void __fastcall HideMenuShortCuts() = 0 ;
};

typedef System::DynamicArray<float> TSingleDynArray;

enum DECLSPEC_DENUM TImageType : unsigned int { itPNG, itBMP, itJPEG, itTIFF, itGIF };

enum DECLSPEC_DENUM TAntiAlias : unsigned int { aaNone, aaClearType, aaAntiAlias };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TGdiplusBase : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__classmethod virtual System::TObject* __fastcall NewInstance();
	virtual void __fastcall FreeInstance();
	HIDESBASE System::UnicodeString __fastcall ToJSON()/* overload */;
	HIDESBASE void __fastcall FromJSON(const System::UnicodeString Value);
	__property System::UnicodeString JSON = {read=ToJSON, write=FromJSON};
	HIDESBASE System::UnicodeString __fastcall ToJSON(Advtypes::TAdvObjectExcludePropertyListArray AExcludedProperties)/* overload */;
	HIDESBASE void __fastcall Log();
	HIDESBASE void __fastcall SaveToJSONFile(const System::UnicodeString AFileName);
	HIDESBASE void __fastcall LoadFromJSONFile(const System::UnicodeString AFileName);
	HIDESBASE void __fastcall SaveToJSONStream(System::Classes::TStream* const AStream);
	HIDESBASE void __fastcall LoadFromJSONStream(System::Classes::TStream* const AStream);
public:
	/* TObject.Create */ inline __fastcall TGdiplusBase() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TGdiplusBase() { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM FillMode : unsigned int { FillModeAlternate, FillModeWinding };

typedef FillMode TFillMode;

typedef int TPenType;

typedef int TCompositingQuality;

enum DECLSPEC_DENUM Unit_ : unsigned int { UnitWorld, UnitDisplay, UnitPixel, UnitPoint, UnitInch, UnitDocument, UnitMillimeter };

typedef Unit_ TUnit;

enum DECLSPEC_DENUM HatchStyle : unsigned int { HatchStyleHorizontal, HatchStyleVertical, HatchStyleForwardDiagonal, HatchStyleBackwardDiagonal, HatchStyleCross, HatchStyleDiagonalCross, HatchStyle05Percent, HatchStyle10Percent, HatchStyle20Percent, HatchStyle25Percent, HatchStyle30Percent, HatchStyle40Percent, HatchStyle50Percent, HatchStyle60Percent, HatchStyle70Percent, HatchStyle75Percent, HatchStyle80Percent, HatchStyle90Percent, HatchStyleLightDownwardDiagonal, HatchStyleLightUpwardDiagonal, HatchStyleDarkDownwardDiagonal, HatchStyleDarkUpwardDiagonal, HatchStyleWideDownwardDiagonal, HatchStyleWideUpwardDiagonal, HatchStyleLightVertical, HatchStyleLightHorizontal, HatchStyleNarrowVertical, HatchStyleNarrowHorizontal, HatchStyleDarkVertical, 
	HatchStyleDarkHorizontal, HatchStyleDashedDownwardDiagonal, HatchStyleDashedUpwardDiagonal, HatchStyleDashedHorizontal, HatchStyleDashedVertical, HatchStyleSmallConfetti, HatchStyleLargeConfetti, HatchStyleZigZag, HatchStyleWave, HatchStyleDiagonalBrick, HatchStyleHorizontalBrick, HatchStyleWeave, HatchStylePlaid, HatchStyleDivot, HatchStyleDottedGrid, HatchStyleDottedDiamond, HatchStyleShingle, HatchStyleTrellis, HatchStyleSphere, HatchStyleSmallGrid, HatchStyleSmallCheckerBoard, HatchStyleLargeCheckerBoard, HatchStyleOutlinedDiamond, HatchStyleSolidDiamond, HatchStyleTotal };

typedef HatchStyle THatchStyle;

enum DECLSPEC_DENUM DashStyle : unsigned int { DashStyleSolid, DashStyleDash, DashStyleDot, DashStyleDashDot, DashStyleDashDotDot, DashStyleCustom };

typedef DashStyle TDashStyle;

enum DECLSPEC_DENUM CoordinateSpace : unsigned int { CoordinateSpaceWorld, CoordinateSpacePage, CoordinateSpaceDevice };

typedef CoordinateSpace TCoordinateSpace;

enum DECLSPEC_DENUM WrapMode : unsigned int { WrapModeTile, WrapModeTileFlipX, WrapModeTileFlipY, WrapModeTileFlipXY, WrapModeClamp };

typedef WrapMode TWrapMode;

enum DECLSPEC_DENUM LinearGradientMode : unsigned int { LinearGradientModeHorizontal, LinearGradientModeVertical, LinearGradientModeForwardDiagonal, LinearGradientModeBackwardDiagonal };

typedef LinearGradientMode TLinearGradientMode;

typedef int TLineCap;

enum DECLSPEC_DENUM CombineMode : unsigned int { CombineModeReplace, CombineModeIntersect, CombineModeUnion, CombineModeXor, CombineModeExclude, CombineModeComplement };

typedef CombineMode TCombineMode;

enum DECLSPEC_DENUM MatrixOrder : unsigned int { MatrixOrderPrepend, MatrixOrderAppend };

typedef MatrixOrder TMatrixOrder;

typedef System::StaticArray<System::StaticArray<float, 5>, 5> ColorMatrix;

typedef ColorMatrix TColorMatrix;

typedef ColorMatrix *PColorMatrix;

enum DECLSPEC_DENUM ColorMatrixFlags : unsigned int { ColorMatrixFlagsDefault, ColorMatrixFlagsSkipGrays, ColorMatrixFlagsAltGray };

typedef ColorMatrixFlags TColorMatrixFlags;

enum DECLSPEC_DENUM ColorChannelFlags : unsigned int { ColorChannelFlagsC, ColorChannelFlagsM, ColorChannelFlagsY, ColorChannelFlagsK, ColorChannelFlagsLast };

typedef ColorChannelFlags TColorChannelFlags;

typedef int TFontStyle;

typedef int SmoothingMode;

typedef int TSmoothingMode;

enum DECLSPEC_DENUM TextRenderingHint : unsigned int { TextRenderingHintSystemDefault, TextRenderingHintSingleBitPerPixelGridFit, TextRenderingHintSingleBitPerPixel, TextRenderingHintAntiAliasGridFit, TextRenderingHintAntiAlias, TextRenderingHintClearTypeGridFit };

typedef TextRenderingHint TTextRenderingHint;

enum DECLSPEC_DENUM StringAlignment : unsigned int { StringAlignmentNear, StringAlignmentCenter, StringAlignmentFar };

typedef StringAlignment TStringAlignment;

typedef int TStringFormatFlags;

enum DECLSPEC_DENUM StringTrimming : unsigned int { StringTrimmingNone, StringTrimmingCharacter, StringTrimmingWord, StringTrimmingEllipsisCharacter, StringTrimmingEllipsisWord, StringTrimmingEllipsisPath };

typedef StringTrimming TStringTrimming;

enum DECLSPEC_DENUM HotkeyPrefix : unsigned int { HotkeyPrefixNone, HotkeyPrefixShow, HotkeyPrefixHide };

typedef HotkeyPrefix THotkeyPrefix;

enum DECLSPEC_DENUM FlushIntention : unsigned int { FlushIntentionFlush, FlushIntentionSync };

typedef FlushIntention TFlushIntention;

typedef System::LongBool __stdcall (*ImageAbort)(void);

typedef ImageAbort DrawImageAbort;

typedef ImageAbort GetThumbnailImageAbort;

enum DECLSPEC_DENUM TStatus : unsigned int { Ok, GenericError, InvalidParameter, OutOfMemory, ObjectBusy, InsufficientBuffer, NotImplemented, Win32Error, WrongState, Aborted, FileNotFound, ValueOverflow, AccessDenied, UnknownImageFormat, FontFamilyNotFound, FontStyleNotFound, NotTrueTypeFont, UnsupportedGdiplusVersion, GdiplusNotInitialized, PropertyNotFound, PropertyNotSupported };

typedef TGPPointF *PGPPointF;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TGPPointF
{
public:
	float X;
	float Y;
};
#pragma pack(pop)


typedef System::DynamicArray<TGPPointF> TPointFDynArray;

typedef TGPPoint *PGPPoint;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TGPPoint
{
public:
	int X;
	int Y;
};
#pragma pack(pop)


typedef System::DynamicArray<TGPPoint> TPointDynArray;

typedef TGPRectF *PGPRectF;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TGPRectF
{
public:
	float X;
	float Y;
	float Width;
	float Height;
};
#pragma pack(pop)


typedef System::DynamicArray<TGPRectF> TRectFDynArray;

typedef TGPRect *PGPRect;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TGPRect
{
public:
	int X;
	int Y;
	int Width;
	int Height;
};
#pragma pack(pop)


typedef System::DynamicArray<TGPRect> TRectDynArray;

enum DECLSPEC_DENUM DebugEventLevel : unsigned int { DebugEventLevelFatal, DebugEventLevelWarning };

typedef DebugEventLevel TDebugEventLevel;

typedef void __stdcall (*DebugEventProc)(DebugEventLevel level, System::WideChar * message);

typedef TStatus __stdcall (*NotificationHookProc)(/* out */ unsigned &token);

typedef void __stdcall (*NotificationUnhookProc)(unsigned token);

#pragma pack(push,1)
struct DECLSPEC_DRECORD GdiplusStartupInput
{
public:
	unsigned GdiplusVersion;
	DebugEventProc DebugEventCallback;
	System::LongBool SuppressBackgroundThread;
	System::LongBool SuppressExternalCodecs;
};
#pragma pack(pop)


typedef GdiplusStartupInput TGdiplusStartupInput;

typedef GdiplusStartupInput *PGdiplusStartupInput;

#pragma pack(push,1)
struct DECLSPEC_DRECORD GdiplusStartupOutput
{
public:
	NotificationHookProc NotificationHook;
	NotificationUnhookProc NotificationUnhook;
};
#pragma pack(pop)


typedef GdiplusStartupOutput TGdiplusStartupOutput;

typedef GdiplusStartupOutput *PGdiplusStartupOutput;

typedef unsigned *PARGB;

typedef unsigned *PGPColor;

typedef int TPixelFormat;

enum DECLSPEC_DENUM RotateFlipType : unsigned int { RotateNoneFlipNone, Rotate90FlipNone, Rotate180FlipNone, Rotate270FlipNone, RotateNoneFlipX, Rotate90FlipX, Rotate180FlipX, Rotate270FlipX };

typedef RotateFlipType TRotateFlipType;

enum DECLSPEC_DENUM ColorAdjustType : unsigned int { ColorAdjustTypeDefault, ColorAdjustTypeBitmap, ColorAdjustTypeBrush, ColorAdjustTypePen, ColorAdjustTypeText, ColorAdjustTypeCount, ColorAdjustTypeAny };

typedef ColorAdjustType TColorAdjustType;

typedef int EncoderParameterValueType;

typedef int TEncoderParameterValueType;

enum DECLSPEC_DENUM EncoderValue : unsigned int { EncoderValueColorTypeCMYK, EncoderValueColorTypeYCCK, EncoderValueCompressionLZW, EncoderValueCompressionCCITT3, EncoderValueCompressionCCITT4, EncoderValueCompressionRle, EncoderValueCompressionNone, EncoderValueScanMethodInterlaced, EncoderValueScanMethodNonInterlaced, EncoderValueVersionGif87, EncoderValueVersionGif89, EncoderValueRenderProgressive, EncoderValueRenderNonProgressive, EncoderValueTransformRotate90, EncoderValueTransformRotate180, EncoderValueTransformRotate270, EncoderValueTransformFlipHorizontal, EncoderValueTransformFlipVertical, EncoderValueMultiFrame, EncoderValueLastFrame, EncoderValueFlush, EncoderValueFrameDimensionTime, EncoderValueFrameDimensionResolution, 
	EncoderValueFrameDimensionPage };

typedef EncoderValue TEncoderValue;

#pragma pack(push,1)
struct DECLSPEC_DRECORD EncoderParameter
{
public:
	GUID Guid;
	unsigned NumberOfValues;
	unsigned Type_;
	void *Value;
};
#pragma pack(pop)


typedef EncoderParameter TEncoderParameter;

typedef EncoderParameter *PEncoderParameter;

#pragma pack(push,1)
struct DECLSPEC_DRECORD EncoderParameters
{
public:
	unsigned Count;
	System::StaticArray<EncoderParameter, 1> Parameter;
};
#pragma pack(pop)


typedef EncoderParameters TEncoderParameters;

typedef EncoderParameters *PEncoderParameters;

#pragma pack(push,1)
struct DECLSPEC_DRECORD ImageCodecInfo
{
public:
	GUID Clsid;
	GUID FormatID;
	System::WideChar *CodecName;
	System::WideChar *DllName;
	System::WideChar *FormatDescription;
	System::WideChar *FilenameExtension;
	System::WideChar *MimeType;
	unsigned Flags;
	unsigned Version;
	unsigned SigCount;
	unsigned SigSize;
	System::Byte *SigPattern;
	System::Byte *SigMask;
};
#pragma pack(pop)


typedef ImageCodecInfo TImageCodecInfo;

typedef ImageCodecInfo *PImageCodecInfo;

#pragma pack(push,1)
struct DECLSPEC_DRECORD ColorMap
{
public:
	unsigned oldColor;
	unsigned newColor;
};
#pragma pack(pop)


typedef ColorMap TColorMap;

typedef ColorMap *PColorMap;

#pragma pack(push,1)
struct DECLSPEC_DRECORD ColorPalette
{
public:
	unsigned Flags;
	unsigned Count;
	System::StaticArray<unsigned, 1> Entries;
};
#pragma pack(pop)


typedef ColorPalette TColorPalette;

typedef ColorPalette *PColorPalette;

typedef void * GpGraphics;

typedef void * GpMatrix;

typedef void * GpTexture;

typedef void * GpBrush;

typedef void * GpSolidFill;

typedef void * GpLineGradient;

typedef void * GpPathGradient;

typedef void * GpPen;

typedef void * GpHatch;

typedef int GpPenType;

typedef void * GpImage;

typedef void * GpBitmap;

typedef void * GpImageAttributes;

typedef void * GpPath;

typedef void * GpRegion;

typedef void * GpFontFamily;

typedef void * GpFont;

typedef void * GpStringFormat;

typedef void * GpFontCollection;

typedef TStatus GpStatus;

typedef FillMode GpFillMode;

typedef WrapMode GpWrapMode;

typedef Unit_ GpUnit;

typedef PGPPointF GpPointF;

typedef PGPPoint GpPoint;

typedef PGPRectF GpRectF;

typedef PGPRect GpRect;

typedef DashStyle GpDashStyle;

typedef int GpLineCap;

typedef FlushIntention GpFlushIntention;

typedef MatrixOrder GpMatrixOrder;

typedef CoordinateSpace GpCoordinateSpace;

typedef HatchStyle GpHatchStyle;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TGPRegion : public TGdiplusBase
{
	typedef TGdiplusBase inherited;
	
protected:
	void *nativeRegion;
	TStatus lastResult;
	TStatus __fastcall SetStatus(TStatus status);
	void __fastcall SetNativeRegion(void * nativeRegion);
	
public:
	__fastcall TGPRegion(const TGPRectF &rect)/* overload */;
	__fastcall TGPRegion(TGPGraphicsPath* path)/* overload */;
	__fastcall virtual ~TGPRegion();
	TStatus __fastcall Exclude(TGPGraphicsPath* path)/* overload */;
	TStatus __fastcall Union(TGPRegion* region)/* overload */;
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TGPImageAttributes : public TGdiplusBase
{
	typedef TGdiplusBase inherited;
	
protected:
	void *nativeImageAttr;
	TStatus lastResult;
	void __fastcall SetNativeImageAttr(void * nativeImageAttr);
	TStatus __fastcall SetStatus(TStatus status);
	__fastcall TGPImageAttributes(void * imageAttr, TStatus status)/* overload */;
	
public:
	__fastcall TGPImageAttributes()/* overload */;
	__fastcall virtual ~TGPImageAttributes();
	TGPImageAttributes* __fastcall Clone();
	TStatus __fastcall SetToIdentity(ColorAdjustType type_ = (ColorAdjustType)(0x0));
	TStatus __fastcall Reset(ColorAdjustType type_ = (ColorAdjustType)(0x0));
	TStatus __fastcall SetColorMatrix(const ColorMatrix &colorMatrix, ColorMatrixFlags mode = (ColorMatrixFlags)(0x0), ColorAdjustType type_ = (ColorAdjustType)(0x0));
	TStatus __fastcall ClearColorMatrix(ColorAdjustType type_ = (ColorAdjustType)(0x0));
	TStatus __fastcall SetColorMatrices(const ColorMatrix &colorMatrix, const ColorMatrix &grayMatrix, ColorMatrixFlags mode = (ColorMatrixFlags)(0x0), ColorAdjustType type_ = (ColorAdjustType)(0x0));
	TStatus __fastcall ClearColorMatrices(ColorAdjustType Type_ = (ColorAdjustType)(0x0));
	TStatus __fastcall SetThreshold(float threshold, ColorAdjustType type_ = (ColorAdjustType)(0x0));
	TStatus __fastcall ClearThreshold(ColorAdjustType type_ = (ColorAdjustType)(0x0));
	TStatus __fastcall SetGamma(float gamma, ColorAdjustType type_ = (ColorAdjustType)(0x0));
	TStatus __fastcall ClearGamma(ColorAdjustType type_ = (ColorAdjustType)(0x0));
	TStatus __fastcall SetNoOp(ColorAdjustType type_ = (ColorAdjustType)(0x0));
	TStatus __fastcall ClearNoOp(ColorAdjustType Type_ = (ColorAdjustType)(0x0));
	TStatus __fastcall SetColorKey(unsigned colorLow, unsigned colorHigh, ColorAdjustType type_ = (ColorAdjustType)(0x0));
	TStatus __fastcall ClearColorKey(ColorAdjustType type_ = (ColorAdjustType)(0x0));
	TStatus __fastcall SetOutputChannel(ColorChannelFlags channelFlags, ColorAdjustType type_ = (ColorAdjustType)(0x0));
	TStatus __fastcall ClearOutputChannel(ColorAdjustType type_ = (ColorAdjustType)(0x0));
	TStatus __fastcall SetOutputChannelColorProfile(System::WideString colorProfileFilename, ColorAdjustType type_ = (ColorAdjustType)(0x0));
	TStatus __fastcall ClearOutputChannelColorProfile(ColorAdjustType type_ = (ColorAdjustType)(0x0));
	TStatus __fastcall SetRemapTable(unsigned mapSize, PColorMap map, ColorAdjustType type_ = (ColorAdjustType)(0x0));
	TStatus __fastcall ClearRemapTable(ColorAdjustType type_ = (ColorAdjustType)(0x0));
	TStatus __fastcall SetBrushRemapTable(unsigned mapSize, PColorMap map);
	TStatus __fastcall ClearBrushRemapTable();
	TStatus __fastcall SetWrapMode(WrapMode wrap, unsigned color = (unsigned)(0xff000000), System::LongBool clamp = false);
	TStatus __fastcall GetAdjustedPalette(PColorPalette colorPalette, ColorAdjustType colorAdjustType);
	TStatus __fastcall GetLastStatus();
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TGPFontFamily : public TGdiplusBase
{
	typedef TGdiplusBase inherited;
	
protected:
	void *nativeFamily;
	TStatus lastResult;
	TStatus __fastcall SetStatus(TStatus status);
	
public:
	__fastcall TGPFontFamily(void * nativeOrig, TStatus status)/* overload */;
	__fastcall TGPFontFamily(System::WideString name, TGPFontCollection* fontCollection)/* overload */;
	__fastcall virtual ~TGPFontFamily();
	__property TStatus Status = {read=lastResult, nodefault};
	__classmethod TGPFontFamily* __fastcall GenericSansSerif();
	__classmethod TGPFontFamily* __fastcall GenericSerif();
	__classmethod TGPFontFamily* __fastcall GenericMonospace();
	TStatus __fastcall GetFamilyName(/* out */ System::UnicodeString &name, System::Word language = (System::Word)(0x0));
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TGPFontCollection : public TGdiplusBase
{
	typedef TGdiplusBase inherited;
	
protected:
	void *nativeFontCollection;
	TStatus lastResult;
	TStatus __fastcall SetStatus(TStatus status);
	
public:
	__fastcall TGPFontCollection();
	__fastcall virtual ~TGPFontCollection();
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TGPFont : public TGdiplusBase
{
	typedef TGdiplusBase inherited;
	
protected:
	void *nativeFont;
	TStatus lastResult;
	void __fastcall SetNativeFont(void * Font);
	TStatus __fastcall SetStatus(TStatus status);
	
public:
	__fastcall TGPFont(void * font, TStatus status)/* overload */;
	__fastcall TGPFont(TGPFontFamily* family, float emSize, int style, Unit_ unit_)/* overload */;
	__fastcall TGPFont(System::WideString familyName, float emSize, System::Uitypes::TFontStyles style, Unit_ unit_, TGPFontCollection* fontCollection)/* overload */;
	__fastcall virtual ~TGPFont();
	__property TStatus Status = {read=lastResult, nodefault};
	int __fastcall GetStyle();
	float __fastcall GetSize();
	TStatus __fastcall GetFamily(TGPFontFamily* family);
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TGPBrush : public TGdiplusBase
{
	typedef TGdiplusBase inherited;
	
protected:
	void *nativeBrush;
	TStatus lastResult;
	void __fastcall SetNativeBrush(void * nativeBrush);
	TStatus __fastcall SetStatus(TStatus status);
	
public:
	__fastcall TGPBrush(void * nativeBrush, TStatus status)/* overload */;
	__fastcall TGPBrush()/* overload */;
	__fastcall virtual ~TGPBrush();
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TGPSolidBrush : public TGPBrush
{
	typedef TGPBrush inherited;
	
public:
	__fastcall TGPSolidBrush(unsigned color)/* overload */;
	__fastcall TGPSolidBrush()/* overload */;
public:
	/* TGPBrush.Create */ inline __fastcall TGPSolidBrush(void * nativeBrush, TStatus status)/* overload */ : TGPBrush(nativeBrush, status) { }
	/* TGPBrush.Destroy */ inline __fastcall virtual ~TGPSolidBrush() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TGPTextureBrush : public TGPBrush
{
	typedef TGPBrush inherited;
	
public:
	__fastcall TGPTextureBrush(TGPImage* image, WrapMode wrapMode)/* overload */;
	__fastcall TGPTextureBrush(TGPImage* image, WrapMode wrapMode, const TGPRectF &dstRect)/* overload */;
	__fastcall TGPTextureBrush(TGPImage* image, const TGPRectF &dstRect, TGPImageAttributes* imageAttributes)/* overload */;
	__fastcall TGPTextureBrush(TGPImage* image, const TGPRect &dstRect, TGPImageAttributes* imageAttributes)/* overload */;
	__fastcall TGPTextureBrush(TGPImage* image, WrapMode wrapMode, const TGPRect &dstRect)/* overload */;
	__fastcall TGPTextureBrush(TGPImage* image, WrapMode wrapMode, float dstX, float dstY, float dstWidth, float dstHeight)/* overload */;
	__fastcall TGPTextureBrush(TGPImage* image, WrapMode wrapMode, int dstX, int dstY, int dstWidth, int dstHeight)/* overload */;
	__fastcall TGPTextureBrush()/* overload */;
	TStatus __fastcall ResetTransform();
	TStatus __fastcall TranslateTransform(float dx, float dy, MatrixOrder order = (MatrixOrder)(0x0));
	TStatus __fastcall ScaleTransform(float sx, float sy, MatrixOrder order = (MatrixOrder)(0x0));
	TStatus __fastcall RotateTransform(float angle, MatrixOrder order = (MatrixOrder)(0x0));
	TStatus __fastcall SetWrapMode(WrapMode wrapMode);
	WrapMode __fastcall GetWrapMode();
	TGPImage* __fastcall GetImage();
public:
	/* TGPBrush.Create */ inline __fastcall TGPTextureBrush(void * nativeBrush, TStatus status)/* overload */ : TGPBrush(nativeBrush, status) { }
	/* TGPBrush.Destroy */ inline __fastcall virtual ~TGPTextureBrush() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TGPLinearGradientBrush : public TGPBrush
{
	typedef TGPBrush inherited;
	
public:
	__fastcall TGPLinearGradientBrush(const TGPPointF &point1, const TGPPointF &point2, unsigned color1, unsigned color2)/* overload */;
	__fastcall TGPLinearGradientBrush(const TGPPoint &point1, const TGPPoint &point2, unsigned color1, unsigned color2)/* overload */;
	__fastcall TGPLinearGradientBrush(const TGPRectF &rect, unsigned color1, unsigned color2, LinearGradientMode mode)/* overload */;
	__fastcall TGPLinearGradientBrush(const TGPRect &rect, unsigned color1, unsigned color2, LinearGradientMode mode)/* overload */;
	__fastcall TGPLinearGradientBrush(const TGPRectF &rect, unsigned color1, unsigned color2, float angle, System::LongBool isAngleScalable)/* overload */;
	__fastcall TGPLinearGradientBrush(const TGPRect &rect, unsigned color1, unsigned color2, float angle, System::LongBool isAngleScalable)/* overload */;
	TStatus __fastcall SetGammaCorrection(System::LongBool useGammaCorrection);
	TStatus __fastcall SetInterpolationColors(PGPColor presetColors, Winapi::Windows::PSingle blendPositions, int count);
public:
	/* TGPBrush.Create */ inline __fastcall TGPLinearGradientBrush(void * nativeBrush, TStatus status)/* overload */ : TGPBrush(nativeBrush, status) { }
	/* TGPBrush.Create */ inline __fastcall TGPLinearGradientBrush()/* overload */ : TGPBrush() { }
	/* TGPBrush.Destroy */ inline __fastcall virtual ~TGPLinearGradientBrush() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TGPHatchBrush : public TGPBrush
{
	typedef TGPBrush inherited;
	
public:
	__fastcall TGPHatchBrush()/* overload */;
	__fastcall TGPHatchBrush(HatchStyle hatchStyle, unsigned foreColor, unsigned backColor)/* overload */;
	HatchStyle __fastcall GetHatchStyle();
	TStatus __fastcall GetForegroundColor(/* out */ unsigned &color);
	TStatus __fastcall GetBackgroundColor(/* out */ unsigned &color);
public:
	/* TGPBrush.Create */ inline __fastcall TGPHatchBrush(void * nativeBrush, TStatus status)/* overload */ : TGPBrush(nativeBrush, status) { }
	/* TGPBrush.Destroy */ inline __fastcall virtual ~TGPHatchBrush() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TGPPen : public TGdiplusBase
{
	typedef TGdiplusBase inherited;
	
protected:
	void *nativePen;
	TStatus lastResult;
	void __fastcall SetNativePen(void * nativePen);
	TStatus __fastcall SetStatus(TStatus status);
	__fastcall TGPPen(void * nativePen, TStatus status)/* overload */;
	
public:
	__fastcall TGPPen(unsigned color, float width)/* overload */;
	__fastcall TGPPen(TGPBrush* brush, float width)/* overload */;
	__fastcall virtual ~TGPPen();
	TStatus __fastcall SetBrush(TGPBrush* brush);
	TGPBrush* __fastcall GetBrush();
	DashStyle __fastcall GetDashStyle();
	TStatus __fastcall SetDashStyle(DashStyle dashStyle);
	TStatus __fastcall SetEndCap(int endCap);
	int __fastcall GetPenType();
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TGPStringFormat : public TGdiplusBase
{
	typedef TGdiplusBase inherited;
	
protected:
	void *nativeFormat;
	TStatus lastError;
	TStatus __fastcall SetStatus(TStatus newStatus);
	void __fastcall Assign(TGPStringFormat* source);
	
public:
	__fastcall TGPStringFormat(void * clonedStringFormat, TStatus status)/* overload */;
	__fastcall TGPStringFormat(int formatFlags, System::Word language)/* overload */;
	__fastcall TGPStringFormat(TGPStringFormat* format)/* overload */;
	__fastcall virtual ~TGPStringFormat();
	TStatus __fastcall SetAlignment(StringAlignment align);
	StringAlignment __fastcall GetAlignment();
	TStatus __fastcall SetLineAlignment(StringAlignment align);
	StringAlignment __fastcall GetLineAlignment();
	TStatus __fastcall SetTrimming(StringTrimming trimming);
	StringTrimming __fastcall GetTrimming();
	TStatus __fastcall SetFormatFlags(int format);
	int __fastcall GetFormatFlags();
	TStatus __fastcall SetHotkeyPrefix(HotkeyPrefix hotkeyPrefix);
	HotkeyPrefix __fastcall GetHotkeyPrefix();
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TGPGraphicsPath : public TGdiplusBase
{
	typedef TGdiplusBase inherited;
	
protected:
	void *nativePath;
	TStatus lastResult;
	void __fastcall SetNativePath(void * nativePath);
	TStatus __fastcall SetStatus(TStatus status);
	
public:
	__fastcall TGPGraphicsPath(void * nativePath)/* overload */;
	__fastcall TGPGraphicsPath(FillMode fillMode)/* overload */;
	__fastcall TGPGraphicsPath(PGPPointF points, System::PByte types, int count, FillMode fillMode)/* overload */;
	__fastcall virtual ~TGPGraphicsPath();
	TStatus __fastcall CloseFigure();
	TStatus __fastcall AddLine(const TGPPointF &pt1, const TGPPointF &pt2)/* overload */;
	TStatus __fastcall AddLine(float x1, float y1, float x2, float y2)/* overload */;
	TStatus __fastcall AddLines(PGPPoint points, int count)/* overload */;
	TStatus __fastcall AddRectangle(const TGPRectF &rect)/* overload */;
	TStatus __fastcall AddRectangle(const TGPRect &rect)/* overload */;
	TStatus __fastcall AddArc(const TGPRectF &rect, float startAngle, float sweepAngle)/* overload */;
	TStatus __fastcall AddArc(float x, float y, float width, float height, float startAngle, float sweepAngle)/* overload */;
	TStatus __fastcall AddEllipse(const TGPRectF &rect)/* overload */;
	TStatus __fastcall AddEllipse(float x, float y, float width, float height)/* overload */;
	TStatus __fastcall Reset();
	TStatus __fastcall AddPie(const TGPRectF &rect, float startAngle, float sweepAngle)/* overload */;
	TStatus __fastcall AddPie(float x, float y, float width, float height, float startAngle, float sweepAngle)/* overload */;
	TStatus __fastcall AddPolygon(PGPPointF points, int count)/* overload */;
	TStatus __fastcall AddPolygon(PGPPoint points, int count)/* overload */;
	TStatus __fastcall AddCurve(PGPPointF points, int count)/* overload */;
	TStatus __fastcall AddCurve(PGPPoint points, int count)/* overload */;
	TStatus __fastcall AddCurve(PGPPoint points, int count, float tension)/* overload */;
	TStatus __fastcall AddBezier(const TGPPoint &pt1, const TGPPoint &pt2, const TGPPoint &pt3, const TGPPoint &pt4)/* overload */;
	TStatus __fastcall AddBezier(const TGPPointF &pt1, const TGPPointF &pt2, const TGPPointF &pt3, const TGPPointF &pt4)/* overload */;
	TStatus __fastcall AddBezier(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4)/* overload */;
	TStatus __fastcall AddString(System::WideString string_, int length, TGPFontFamily* family, int style, float emSize, const TGPRectF &layoutRect, TGPStringFormat* format)/* overload */;
	TStatus __fastcall AddString(System::WideString string_, int length, TGPFontFamily* family, int style, float emSize, const TGPPointF &origin, TGPStringFormat* format)/* overload */;
	TStatus __fastcall GetBounds(/* out */ TGPRectF &bounds, TGPMatrix* matrix = (TGPMatrix*)(0x0), TGPPen* pen = (TGPPen*)(0x0))/* overload */;
	TStatus __fastcall GetPathPoints(PGPPointF points, int count)/* overload */;
	int __fastcall GetPointCount();
	TStatus __fastcall GetPathTypes(System::PByte types, int count);
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TGPPathGradientBrush : public TGPBrush
{
	typedef TGPBrush inherited;
	
public:
	__fastcall TGPPathGradientBrush(TGPGraphicsPath* path)/* overload */;
	TStatus __fastcall GetCenterColor(/* out */ unsigned &Color);
	TStatus __fastcall SetCenterColor(unsigned color);
	int __fastcall GetPointCount();
	TStatus __fastcall GetSurroundColors(PARGB colors, int &count);
	TStatus __fastcall SetSurroundColors(PARGB colors, int &count);
	TStatus __fastcall GetCenterPoint(/* out */ TGPPointF &point)/* overload */;
	TStatus __fastcall GetCenterPoint(/* out */ TGPPoint &point)/* overload */;
	TStatus __fastcall SetCenterPoint(const TGPPointF &point)/* overload */;
	TStatus __fastcall SetCenterPoint(const TGPPoint &point)/* overload */;
	TStatus __fastcall SetWrapMode(WrapMode wrapMode);
	TStatus __fastcall SetGammaCorrection(System::LongBool useGammaCorrection)/* overload */;
	TStatus __fastcall SetInterpolationColors(PARGB presetColors, Winapi::Windows::PSingle blendPositions, int count);
public:
	/* TGPBrush.Create */ inline __fastcall TGPPathGradientBrush(void * nativeBrush, TStatus status)/* overload */ : TGPBrush(nativeBrush, status) { }
	/* TGPBrush.Create */ inline __fastcall TGPPathGradientBrush()/* overload */ : TGPBrush() { }
	/* TGPBrush.Destroy */ inline __fastcall virtual ~TGPPathGradientBrush() { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TGPImageFormat : unsigned int { ifUndefined, ifMemoryBMP, ifBMP, ifEMF, ifWMF, ifJPEG, ifPNG, ifGIF, ifTIFF, ifEXIF, ifIcon };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TGPImage : public TGdiplusBase
{
	typedef TGdiplusBase inherited;
	
protected:
	void *nativeImage;
	TStatus lastResult;
	TStatus loadStatus;
	void __fastcall SetNativeImage(void * nativeImage);
	TStatus __fastcall SetStatus(TStatus status);
	
public:
	__fastcall TGPImage(void * nativeImage, TStatus status)/* overload */;
	__fastcall TGPImage(System::WideString filename, System::LongBool useEmbeddedColorManagement)/* overload */;
	__fastcall TGPImage(_di_IStream stream, System::LongBool useEmbeddedColorManagement)/* overload */;
	TStatus __fastcall SaveAdd(TGPImage* newImage, PEncoderParameters encoderParams)/* overload */;
	TStatus __fastcall Save(System::WideString filename, const GUID &clsidEncoder, PEncoderParameters encoderParams = (PEncoderParameters)(0x0))/* overload */;
	TStatus __fastcall Save(_di_IStream stream, const GUID &clsidEncoder, PEncoderParameters encoderParams = (PEncoderParameters)(0x0))/* overload */;
	__fastcall virtual ~TGPImage();
	TGPImageFormat __fastcall GetFormat();
	int __fastcall GetPixelFormat();
	int __fastcall GetPixelDepth();
	bool __fastcall HasPalette();
	bool __fastcall HasAlphaChannel();
	TGPImage* __fastcall GetThumbnailImage(unsigned thumbWidth, unsigned thumbHeight, ImageAbort callback = 0x0, void * callbackData = (void *)(0x0));
	unsigned __fastcall GetWidth();
	unsigned __fastcall GetHeight();
	TStatus __fastcall RotateFlip(RotateFlipType rotateFlipType);
	__property unsigned Width = {read=GetWidth, nodefault};
	__property unsigned Height = {read=GetHeight, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TGPBitmap : public TGPImage
{
	typedef TGPImage inherited;
	
public:
	__fastcall TGPBitmap(void * nativeBitmap)/* overload */;
	__fastcall TGPBitmap(_di_IStream stream, System::LongBool useEmbeddedColorManagement)/* overload */;
	__fastcall TGPBitmap(int width, int height, int format)/* overload */;
	TGPBitmap* __fastcall FromStream(_di_IStream stream, System::LongBool useEmbeddedColorManagement = false);
	TStatus __fastcall GetPixel(int x, int y, /* out */ unsigned &color);
	TStatus __fastcall SetPixel(int x, int y, unsigned color);
	TStatus __fastcall GetHBITMAP(unsigned colorBackground, /* out */ HBITMAP &hbmReturn);
public:
	/* TGPImage.Create */ inline __fastcall TGPBitmap(void * nativeImage, TStatus status)/* overload */ : TGPImage(nativeImage, status) { }
	/* TGPImage.Create */ inline __fastcall TGPBitmap(System::WideString filename, System::LongBool useEmbeddedColorManagement)/* overload */ : TGPImage(filename, useEmbeddedColorManagement) { }
	/* TGPImage.Destroy */ inline __fastcall virtual ~TGPBitmap() { }
	
};

#pragma pack(pop)

typedef System::StaticArray<float, 6> TMatrixArray;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TGPMatrix : public TGdiplusBase
{
	typedef TGdiplusBase inherited;
	
protected:
	void *nativeMatrix;
	TStatus lastResult;
	void __fastcall SetNativeMatrix(void * nativeMatrix);
	TStatus __fastcall SetStatus(TStatus status);
	__fastcall TGPMatrix(void * nativeMatrix)/* overload */;
	
public:
	__fastcall TGPMatrix()/* overload */;
	__fastcall TGPMatrix(float m11, float m12, float m21, float m22, float dx, float dy)/* overload */;
	__fastcall TGPMatrix(const TGPRectF &rect, const TGPPointF &dstplg)/* overload */;
	__fastcall TGPMatrix(const TGPRect &rect, const TGPPoint &dstplg)/* overload */;
	__fastcall virtual ~TGPMatrix();
	TGPMatrix* __fastcall Clone();
	TStatus __fastcall GetElements(const TMatrixArray &m);
	TStatus __fastcall SetElements(float m11, float m12, float m21, float m22, float dx, float dy);
	float __fastcall OffsetX();
	float __fastcall OffsetY();
	TStatus __fastcall Reset();
	TStatus __fastcall Multiply(TGPMatrix* matrix, MatrixOrder order = (MatrixOrder)(0x0));
	TStatus __fastcall Translate(float offsetX, float offsetY, MatrixOrder order = (MatrixOrder)(0x0));
	TStatus __fastcall Scale(float scaleX, float scaleY, MatrixOrder order = (MatrixOrder)(0x0));
	TStatus __fastcall Rotate(float angle, MatrixOrder order = (MatrixOrder)(0x0));
	TStatus __fastcall RotateAt(float angle, const TGPPointF &center, MatrixOrder order = (MatrixOrder)(0x0));
	TStatus __fastcall Shear(float shearX, float shearY, MatrixOrder order = (MatrixOrder)(0x0));
	TStatus __fastcall Invert();
	TStatus __fastcall TransformPoints(PGPPointF pts, int count = 0x1)/* overload */;
	TStatus __fastcall TransformPoints(PGPPoint pts, int count = 0x1)/* overload */;
	TStatus __fastcall TransformVectors(PGPPointF pts, int count = 0x1)/* overload */;
	TStatus __fastcall TransformVectors(PGPPoint pts, int count = 0x1)/* overload */;
	System::LongBool __fastcall IsInvertible();
	System::LongBool __fastcall IsIdentity();
	TStatus __fastcall GetLastStatus();
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TGPGraphics : public TGdiplusBase
{
	typedef TGdiplusBase inherited;
	
protected:
	TGPFont* FCachedFont;
	void *nativeGraphics;
	TStatus lastResult;
	void __fastcall SetNativeGraphics(void * graphics);
	TStatus __fastcall SetStatus(TStatus status);
	void * __fastcall GetNativeGraphics();
	
public:
	__fastcall TGPGraphics(HDC hdc)/* overload */;
	__fastcall TGPGraphics(TGPImage* image)/* overload */;
	__fastcall virtual ~TGPGraphics();
	TGPGraphics* __fastcall FromImage(TGPImage* image);
	void __fastcall Flush(FlushIntention intention = (FlushIntention)(0x0));
	TStatus __fastcall Clear(unsigned color);
	TStatus __fastcall SetTransform(TGPMatrix* matrix);
	TStatus __fastcall ResetTransform();
	TStatus __fastcall MultiplyTransform(TGPMatrix* const matrix, MatrixOrder order = (MatrixOrder)(0x0));
	TStatus __fastcall TranslateTransform(float dx, float dy, MatrixOrder order = (MatrixOrder)(0x0));
	TStatus __fastcall ScaleTransform(const float sx, const float sy, MatrixOrder order = (MatrixOrder)(0x0));
	TStatus __fastcall RotateTransform(const float angle, MatrixOrder order = (MatrixOrder)(0x0));
	HDC __fastcall GetHDC();
	void __fastcall ReleaseHDC(HDC hdc);
	TStatus __fastcall SetCompositingQuality(int compositingQuality);
	int __fastcall GetCompositingQuality();
	TGPFont* __fastcall MakeFont(Vcl::Graphics::TFont* AFont)/* overload */;
	TGPFont* __fastcall MakeFont(Vcl::Graphics::TFont* AFont, int ASize)/* overload */;
	TGPFont* __fastcall MakeFontEx(Vcl::Graphics::TFont* AFont)/* overload */;
	TGPFont* __fastcall MakeFontEx(Vcl::Graphics::TFont* AFont, int ASize)/* overload */;
	int __fastcall TextHeight(System::UnicodeString string_, Vcl::Graphics::TFont* font);
	int __fastcall TextWidth(System::UnicodeString string_, Vcl::Graphics::TFont* font);
	int __fastcall DrawText(System::UnicodeString string_, int len, System::Types::TRect &rect, Vcl::Graphics::TFont* font, unsigned style, System::Uitypes::TColor bkColor = (System::Uitypes::TColor)(0x1fffffff));
	TStatus __fastcall SetTextRenderingHint(TextRenderingHint newMode);
	TextRenderingHint __fastcall GetTextRenderingHint();
	int __fastcall GetSmoothingMode();
	TStatus __fastcall SetSmoothingMode(int smoothingMode);
	TStatus __fastcall DrawPath(TGPPen* pen, TGPGraphicsPath* path);
	TStatus __fastcall FillRectangle(TGPBrush* brush, const TGPRectF &rect)/* overload */;
	TStatus __fastcall FillRectangle(TGPBrush* brush, float x, float y, float width, float height)/* overload */;
	TStatus __fastcall DrawString(System::UnicodeString string_, int length, TGPFont* font, const TGPRectF &layoutRect, TGPStringFormat* stringFormat, TGPBrush* brush)/* overload */;
	TStatus __fastcall DrawString(System::WideString string_, int length, TGPFont* font, const TGPRectF &layoutRect, TGPStringFormat* stringFormat, TGPBrush* brush)/* overload */;
	TStatus __fastcall DrawString(System::WideString string_, int length, TGPFont* font, const TGPPointF &origin, TGPBrush* brush)/* overload */;
	TStatus __fastcall DrawString(System::WideString string_, int length, TGPFont* font, const TGPPointF &origin, TGPStringFormat* stringFormat, TGPBrush* brush)/* overload */;
	TStatus __fastcall MeasureString(System::WideString string_, int length, TGPFont* font, const TGPRectF &layoutRect, TGPStringFormat* stringFormat, /* out */ TGPRectF &boundingBox, System::PInteger codepointsFitted = (System::PInteger)(0x0), System::PInteger linesFilled = (System::PInteger)(0x0))/* overload */;
	TStatus __fastcall MeasureString(System::WideString string_, int length, TGPFont* font, const TGPPointF &origin, TGPStringFormat* stringFormat, /* out */ TGPRectF &boundingBox)/* overload */;
	TStatus __fastcall MeasureString(System::WideString string_, int length, TGPFont* font, const TGPRectF &layoutRect, /* out */ TGPRectF &boundingBox)/* overload */;
	TStatus __fastcall GetLastStatus();
	TStatus __fastcall DrawRectangle(TGPPen* pen, const TGPRectF &rect)/* overload */;
	TStatus __fastcall DrawRectangle(TGPPen* pen, float x, float y, float width, float height)/* overload */;
	TStatus __fastcall DrawLine(TGPPen* pen, float x1, float y1, float x2, float y2)/* overload */;
	TStatus __fastcall DrawArc(TGPPen* pen, float x, float y, float width, float height, float startAngle, float sweepAngle)/* overload */;
	TStatus __fastcall DrawArc(TGPPen* pen, const TGPRectF &rect, float startAngle, float sweepAngle)/* overload */;
	TStatus __fastcall DrawBezier(TGPPen* pen, float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4)/* overload */;
	TStatus __fastcall DrawBezier(TGPPen* pen, const TGPPointF &pt1, const TGPPointF &pt2, const TGPPointF &pt3, const TGPPointF &pt4)/* overload */;
	TStatus __fastcall DrawBeziers(TGPPen* pen, PGPPointF points, int count)/* overload */;
	TStatus __fastcall DrawEllipse(TGPPen* pen, const TGPRectF &rect)/* overload */;
	TStatus __fastcall DrawEllipse(TGPPen* pen, float x, float y, float width, float height)/* overload */;
	TStatus __fastcall DrawEllipse(TGPPen* pen, const TGPRect &rect)/* overload */;
	TStatus __fastcall DrawEllipse(TGPPen* pen, int x, int y, int width, int height)/* overload */;
	TStatus __fastcall DrawImage(TGPImage* image, int x, int y)/* overload */;
	TStatus __fastcall DrawImage(TGPImage* image, const TGPRectF &rect)/* overload */;
	TStatus __fastcall DrawImage(TGPImage* image, float x, float y, float width, float height)/* overload */;
	TStatus __fastcall DrawImageRect(TGPImage* image, int x, int y, int w, int h)/* overload */;
	TStatus __fastcall DrawImageRect(TGPImage* image, const TGPRectF &ARect)/* overload */;
	TStatus __fastcall FillPolygon(TGPBrush* brush, PGPPointF points, int count)/* overload */;
	TStatus __fastcall FillPolygon(TGPBrush* brush, PGPPointF points, int count, FillMode fillMode)/* overload */;
	TStatus __fastcall FillPolygon(TGPBrush* brush, PGPPoint points, int count)/* overload */;
	TStatus __fastcall FillPolygon(TGPBrush* brush, PGPPoint points, int count, FillMode fillMode)/* overload */;
	TStatus __fastcall DrawImage(TGPImage* image, const TGPRectF &destRect, float srcx, float srcy, float srcwidth, float srcheight, Unit_ srcUnit, TGPImageAttributes* imageAttributes = (TGPImageAttributes*)(0x0), ImageAbort callback = 0x0, void * callbackData = (void *)(0x0))/* overload */;
	TStatus __fastcall FillPath(TGPBrush* brush, TGPGraphicsPath* path);
	TStatus __fastcall FillEllipse(TGPBrush* brush, const TGPRectF &rect)/* overload */;
	TStatus __fastcall FillEllipse(TGPBrush* brush, float x, float y, float width, float height)/* overload */;
	TStatus __fastcall FillEllipse(TGPBrush* brush, const TGPRect &rect)/* overload */;
	TStatus __fastcall FillEllipse(TGPBrush* brush, int x, int y, int width, int height)/* overload */;
	TStatus __fastcall ExcludeClip(const TGPRectF &rect)/* overload */;
	TStatus __fastcall ExcludeClip(TGPRegion* region)/* overload */;
	TStatus __fastcall SetClip(TGPRegion* region, CombineMode combineMode = (CombineMode)(0x0))/* overload */;
	TStatus __fastcall SetClip(TGPGraphicsPath* path, CombineMode combineMode = (CombineMode)(0x0))/* overload */;
	TStatus __fastcall ResetClip();
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TFixedStreamAdapter : public System::Classes::TStreamAdapter
{
	typedef System::Classes::TStreamAdapter inherited;
	
public:
	virtual HRESULT __stdcall Stat(/* out */ tagSTATSTG &statstg, unsigned grfStatFlag);
public:
	/* TStreamAdapter.Create */ inline __fastcall TFixedStreamAdapter(System::Classes::TStream* Stream, System::Classes::TStreamOwnership Ownership) : System::Classes::TStreamAdapter(Stream, Ownership) { }
	/* TStreamAdapter.Destroy */ inline __fastcall virtual ~TFixedStreamAdapter() { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TAdvGradientType : unsigned int { gtSolid, gtRadial, gtVertical, gtHorizontal, gtForwardDiagonal, gtBackwardDiagonal, gtAngle, gtHatch, gtPath, gtTexture, gtNone };

class PASCALIMPLEMENTATION TAdvGDIPPicture : public Advtypes::TAdvSVGBitmap
{
	typedef Advtypes::TAdvSVGBitmap inherited;
	
private:
	bool FDrawing;
	System::Classes::TMemoryStream* FDatastream;
	bool FIsEmpty;
	int FWidth;
	int FHeight;
	bool FDoubleBuffered;
	System::Classes::TNotifyEvent FOnClear;
	Vcl::Graphics::TTransparentMode FBitmapTransparentMode;
	System::Uitypes::TColor FBitmapTransparentColor;
	System::UnicodeString FID;
	int FPixelDepth;
	bool FHasAlpha;
	bool FHasPalette;
	int FPixelFormat;
	
protected:
	virtual bool __fastcall GetEmpty();
	virtual int __fastcall GetHeight();
	virtual int __fastcall GetWidth();
	virtual void __fastcall SetHeight(int Value);
	virtual void __fastcall SetWidth(int Value);
	virtual void __fastcall ReadData(System::Classes::TStream* Stream);
	virtual void __fastcall WriteData(System::Classes::TStream* Stream);
	
public:
	__fastcall virtual TAdvGDIPPicture()/* overload */;
	__fastcall virtual ~TAdvGDIPPicture();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	bool __fastcall GetImageSizes();
	bool __fastcall GetImageSizesFromFileName(System::UnicodeString FileName);
	virtual void __fastcall DrawSVG(TGPGraphics* Graphics, float X, float Y, float W, float H);
	virtual void __fastcall Draw(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &Rect);
	void __fastcall GDIPDraw(TGPGraphics* Graphics, const System::Types::TRect &Rect)/* overload */;
	void __fastcall GDIPDraw(TGPGraphics* Graphics, const TGPRectF &Rect)/* overload */;
	void __fastcall FillRect(TGPGraphics* graphics, const TGPRectF &R);
	void __fastcall FillPath(TGPGraphics* graphics, TGPGraphicsPath* Path);
	virtual void __fastcall LoadFromFile(const System::UnicodeString FileName);
	virtual void __fastcall LoadFromStream(System::Classes::TStream* Stream);
	virtual void __fastcall SaveToStream(System::Classes::TStream* Stream);
	void __fastcall LoadFromResourceName(NativeUInt Instance, const System::UnicodeString ResName);
	void __fastcall LoadFromResourceID(NativeUInt Instance, int ResID);
	void __fastcall LoadFromURL(System::UnicodeString url);
	virtual void __fastcall LoadFromClipboardFormat(System::Word AFormat, NativeUInt AData, HPALETTE APalette);
	virtual void __fastcall SaveToClipboardFormat(System::Word &AFormat, NativeUInt &AData, HPALETTE &APalette);
	__property bool DoubleBuffered = {read=FDoubleBuffered, write=FDoubleBuffered, nodefault};
	__property System::Uitypes::TColor TransparentColor = {read=FBitmapTransparentColor, write=FBitmapTransparentColor, nodefault};
	__property Vcl::Graphics::TTransparentMode TransparentMode = {read=FBitmapTransparentMode, write=FBitmapTransparentMode, nodefault};
	__property System::UnicodeString ID = {read=FID, write=FID};
	__property int PixelFormat = {read=FPixelFormat, nodefault};
	__property int PixelDepth = {read=FPixelDepth, nodefault};
	__property bool HasAlpha = {read=FHasAlpha, nodefault};
	__property bool HasPalette = {read=FHasPalette, nodefault};
	
__published:
	__property System::Classes::TNotifyEvent OnClear = {read=FOnClear, write=FOnClear};
};


struct DECLSPEC_DRECORD TGDIPFillParameters
{
public:
	TGPGraphics* Graphics;
	TGPGraphicsPath* Path;
	bool Fillpath;
	TGPRectF R;
	TAdvGradientType GT;
	System::Uitypes::TColor ColorFrom;
	System::Uitypes::TColor ColorTo;
	int OpacityFrom;
	int OpacityTo;
	HatchStyle HatchStyle;
	int Angle;
	TAdvGDIPPicture* Image;
	System::Uitypes::TColor BorderColor;
	int BorderWidth;
	DashStyle BorderStyle;
	bool Mirror;
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE int GlowSpeed;
#define WINGDIPDLL L"gdiplus.dll"
static const unsigned aclBlack = unsigned(0xff000000);
static const System::Int8 PenTypeSolidColor = System::Int8(0x0);
static const System::Int8 PenTypeHatchFill = System::Int8(0x1);
static const System::Int8 PenTypeTextureFill = System::Int8(0x2);
static const System::Int8 PenTypePathGradient = System::Int8(0x3);
static const System::Int8 PenTypeLinearGradient = System::Int8(0x4);
static const System::Int8 PenTypeUnknown = System::Int8(-1);
static const System::Int8 QualityModeInvalid = System::Int8(-1);
static const System::Int8 QualityModeDefault = System::Int8(0x0);
static const System::Int8 QualityModeLow = System::Int8(0x1);
static const System::Int8 QualityModeHigh = System::Int8(0x2);
static const System::Int8 CompositingQualityInvalid = System::Int8(-1);
static const System::Int8 CompositingQualityDefault = System::Int8(0x0);
static const System::Int8 CompositingQualityHighSpeed = System::Int8(0x1);
static const System::Int8 CompositingQualityHighQuality = System::Int8(0x2);
static const System::Int8 CompositingQualityGammaCorrected = System::Int8(0x3);
static const System::Int8 CompositingQualityAssumeLinear = System::Int8(0x4);
static const HatchStyle HatchStyleLargeGrid = (HatchStyle)(4);
static const HatchStyle HatchStyleMin = (HatchStyle)(0);
static const HatchStyle HatchStyleMax = (HatchStyle)(52);
static const System::Int8 LineCapFlat = System::Int8(0x0);
static const System::Int8 LineCapSquare = System::Int8(0x1);
static const System::Int8 LineCapRound = System::Int8(0x2);
static const System::Int8 LineCapTriangle = System::Int8(0x3);
static const System::Int8 LineCapNoAnchor = System::Int8(0x10);
static const System::Int8 LineCapSquareAnchor = System::Int8(0x11);
static const System::Int8 LineCapRoundAnchor = System::Int8(0x12);
static const System::Int8 LineCapDiamondAnchor = System::Int8(0x13);
static const System::Int8 LineCapArrowAnchor = System::Int8(0x14);
static const System::Byte LineCapCustom = System::Byte(0xff);
static const System::Byte LineCapAnchorMask = System::Byte(0xf0);
static const int FontStyleRegular = int(0);
static const int FontStyleBold = int(1);
static const int FontStyleItalic = int(2);
static const int FontStyleBoldItalic = int(3);
static const int FontStyleUnderline = int(4);
static const int FontStyleStrikeout = int(8);
static const System::Int8 SmoothingModeInvalid = System::Int8(-1);
static const System::Int8 SmoothingModeDefault = System::Int8(0x0);
static const System::Int8 SmoothingModeHighSpeed = System::Int8(0x1);
static const System::Int8 SmoothingModeHighQuality = System::Int8(0x2);
static const System::Int8 SmoothingModeNone = System::Int8(0x3);
static const System::Int8 SmoothingModeAntiAlias = System::Int8(0x4);
static const System::Int8 StringFormatFlagsDirectionRightToLeft = System::Int8(0x1);
static const System::Int8 StringFormatFlagsDirectionVertical = System::Int8(0x2);
static const System::Int8 StringFormatFlagsNoFitBlackBox = System::Int8(0x4);
static const System::Int8 StringFormatFlagsDisplayFormatControl = System::Int8(0x20);
static const System::Word StringFormatFlagsNoFontFallback = System::Word(0x400);
static const System::Word StringFormatFlagsMeasureTrailingSpaces = System::Word(0x800);
static const System::Word StringFormatFlagsNoWrap = System::Word(0x1000);
static const System::Word StringFormatFlagsLineLimit = System::Word(0x2000);
static const System::Word StringFormatFlagsNoClip = System::Word(0x4000);
static const RotateFlipType RotateNoneFlipY = (RotateFlipType)(6);
static const RotateFlipType Rotate90FlipY = (RotateFlipType)(7);
static const RotateFlipType Rotate180FlipY = (RotateFlipType)(4);
static const RotateFlipType Rotate270FlipY = (RotateFlipType)(5);
static const RotateFlipType RotateNoneFlipXY = (RotateFlipType)(2);
static const RotateFlipType Rotate90FlipXY = (RotateFlipType)(3);
static const RotateFlipType Rotate180FlipXY = (RotateFlipType)(0);
static const RotateFlipType Rotate270FlipXY = (RotateFlipType)(1);
extern DELPHI_PACKAGE int EncoderParameterValueTypeByte;
extern DELPHI_PACKAGE int EncoderParameterValueTypeASCII;
extern DELPHI_PACKAGE int EncoderParameterValueTypeShort;
extern DELPHI_PACKAGE int EncoderParameterValueTypeLong;
extern DELPHI_PACKAGE int EncoderParameterValueTypeRational;
extern DELPHI_PACKAGE int EncoderParameterValueTypeLongRange;
extern DELPHI_PACKAGE int EncoderParameterValueTypeUndefined;
extern DELPHI_PACKAGE int EncoderParameterValueTypeRationalRange;
extern DELPHI_PACKAGE GdiplusStartupInput StartupInput;
extern DELPHI_PACKAGE GdiplusStartupOutput StartupOutput;
extern DELPHI_PACKAGE unsigned gdiplusToken;
extern DELPHI_PACKAGE EncoderParameters __fastcall GetEncoderQualityParameters(int ImageQualityPercentage);
extern DELPHI_PACKAGE void __fastcall SetWin7(bool AWin7);
extern DELPHI_PACKAGE bool __fastcall IsWin7(void);
extern DELPHI_PACKAGE void __fastcall SetWin8(bool AWin8);
extern DELPHI_PACKAGE bool __fastcall IsWin8(void);
extern DELPHI_PACKAGE void __fastcall SetWin10(bool AWin10);
extern DELPHI_PACKAGE void __fastcall SetWin11(bool AWin11);
extern DELPHI_PACKAGE bool __fastcall IsWin10(void);
extern DELPHI_PACKAGE bool __fastcall IsWin11(void);
extern DELPHI_PACKAGE float __fastcall CalculateDPIScale(Vcl::Controls::TControl* AControl)/* overload */;
extern DELPHI_PACKAGE float __fastcall DPIScale(void);
extern DELPHI_PACKAGE void __fastcall SetGlass(bool AGlass);
extern DELPHI_PACKAGE bool __fastcall IsGlass(void);
extern DELPHI_PACKAGE unsigned __fastcall ColorToARGB(System::Uitypes::TColor Color);
extern DELPHI_PACKAGE void __fastcall ShadowGDIP(TGPGraphics* graphics, const TGPRectF &Rect);
extern DELPHI_PACKAGE void __fastcall FillGDIP(const TGDIPFillParameters &Params);
extern DELPHI_PACKAGE void __fastcall ArrowGDIP(TGPGraphics* graphics, const System::Types::TPoint &origin, const System::Types::TPoint &target, int ArrowSize, System::Uitypes::TColor ArrowColor, double ScaleX, double ScaleY);
extern DELPHI_PACKAGE TGPPoint __fastcall MakePoint(int X, int Y)/* overload */;
extern DELPHI_PACKAGE TGPPointF __fastcall MakePoint(float X, float Y)/* overload */;
extern DELPHI_PACKAGE TGPPointF __fastcall MakePointF(float X, float Y);
extern DELPHI_PACKAGE TGPRectF __fastcall MakeRect(float x, float y, float width, float height)/* overload */;
extern DELPHI_PACKAGE GUID __fastcall GetCLSID(TImageType ImageType);
extern DELPHI_PACKAGE _di_IStream __fastcall CreateStream(Vcl::Graphics::TBitmap* bmp);
extern DELPHI_PACKAGE void __fastcall GetJPGSize(const System::UnicodeString sFile, System::Word &wWidth, System::Word &wHeight);
extern DELPHI_PACKAGE void __fastcall GetPNGSize(const System::UnicodeString sFile, System::Word &wWidth, System::Word &wHeight);
extern DELPHI_PACKAGE void __fastcall GetGIFSize(const System::UnicodeString sFile, System::Word &wWidth, System::Word &wHeight);
extern DELPHI_PACKAGE void __fastcall GetBMPSize(const System::UnicodeString sFile, System::Word &wWidth, System::Word &wHeight);
extern DELPHI_PACKAGE void __fastcall GetTifSize(const System::UnicodeString sFile, System::Word &wWidth, System::Word &wHeight);
extern DELPHI_PACKAGE void __fastcall GetICOSize(const System::UnicodeString sFile, System::Word &wWidth, System::Word &wHeight);
extern DELPHI_PACKAGE unsigned __fastcall MakeColor(System::Byte a, System::Byte r, System::Byte g, System::Byte b)/* overload */;
extern DELPHI_PACKAGE unsigned __fastcall MakeColor(System::Byte a, System::Uitypes::TColor Color)/* overload */;
extern DELPHI_PACKAGE unsigned __fastcall MakeColor(System::Byte r, System::Byte g, System::Byte b)/* overload */;
extern DELPHI_PACKAGE System::Byte __fastcall GetAlpha(unsigned color);
extern DELPHI_PACKAGE System::Byte __fastcall GetRed(unsigned color);
extern DELPHI_PACKAGE System::Byte __fastcall GetGreen(unsigned color);
extern DELPHI_PACKAGE System::Byte __fastcall GetBlue(unsigned color);
extern DELPHI_PACKAGE TGPGraphicsPath* __fastcall CreateRoundRectangle(const System::Types::TRect &R, int Radius);
}	/* namespace Advgdip */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ADVGDIP)
using namespace Advgdip;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AdvgdipHPP
