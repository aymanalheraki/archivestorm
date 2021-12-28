// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'iexLayers.pas' rev: 35.00 (Windows)

#ifndef IexlayersHPP
#define IexlayersHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.UITypes.hpp>
#include <iexRichEdit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <System.Contnrs.hpp>
#include <hyiedefs.hpp>
#include <iexBitmaps.hpp>
#include <hyieutils.hpp>
#include <iepdf.hpp>
#include <Winapi.ActiveX.hpp>
#include <iegdiplus.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

namespace Iexlayers
{
//-- forward type declarations -----------------------------------------------
struct TIEDrawingInfo;
struct TDPointArrayRec;
struct TIEEndShapeDrawInfo;
class DELPHICLASS TIELayer;
class DELPHICLASS TIEImageLayer;
class DELPHICLASS TIEShapeLayer;
class DELPHICLASS TIELineLayer;
struct TPixelEdge;
struct TEdgelist;
class DELPHICLASS TIEPolylineLayer;
class DELPHICLASS TIEAngleLayer;
class DELPHICLASS TIETextLayer;
struct TLayerHeader;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TIELayerKind : unsigned char { ielkImage, ielkShape, ielkLine, ielkPolyline, ielkText, ielkAngle };

enum DECLSPEC_DENUM TIETextAdjustment : unsigned char { ietaSetFontSize, ietaAdjustFontSize, ietaPromptForFont, ietaSetAlignment, ietaSetLayout, ietaToggleStyle, ietaPromptForColor, ietaPromptForFontSize, ietaRemoveFormatting };

enum DECLSPEC_DENUM TIERulerAspect : unsigned char { ierDefault, ierLength, ierArea };

struct DECLSPEC_DRECORD TIEDrawingInfo
{
public:
	int XDst;
	int YDst;
	int WidthDst;
	int HeightDst;
	int XSrc;
	int YSrc;
	int WidthSrc;
	int HeightSrc;
};


typedef System::StaticArray<System::Types::TPoint, 4> TIECornerPointsArray;

typedef void __fastcall (__closure *TIEDrawLayerEvent)(System::TObject* Sender, Iexbitmaps::TIEBitmap* Dest, int LayerIndex);

typedef void __fastcall (__closure *TIEDrawLayerBoxEvent)(System::TObject* Sender, Vcl::Graphics::TCanvas* ACanvas, int LayerIndex);

typedef void __fastcall (__closure *TIEDrawLayerGrip)(System::TObject* Sender, Vcl::Graphics::TBitmap* ABitmap, int LayerIndex, int Grip, const System::Types::TRect &Rect);

enum DECLSPEC_DENUM TIETextOverflow : unsigned char { ieoTruncate, ieoShrink, ieoHide };

enum DECLSPEC_DENUM TIERulerMode : unsigned char { iermNone, iermHintOnly, iermLabel };

enum DECLSPEC_DENUM TIEAngleMode : unsigned char { ieaNormal, ieaInverted, ieaSmallOnly, ieaLargeOnly };

enum DECLSPEC_DENUM TIELineEndShape : unsigned char { ieesNone, ieesArrow, ieesCircle, ieesDiamond, ieesArrow2, ieesReverseArrow, ieesBar, ieesDot };

enum DECLSPEC_DENUM TIELineLabelPos : unsigned char { ielpHide, ielpAtStart, ielpAtEnd, ielpAbove, ielpBelow, ielpAutoAbove, ielpAutoBelow };

enum DECLSPEC_DENUM TIELayerFeatures : unsigned char { ielfBorder, ielfFill, ielfGradient, ielfRotation, ielfMoveRotationCenter, ielfTextEditing, ielfPointEditing, ielfShape, ielfAspectRatio, ielfFont };

enum DECLSPEC_DENUM TIEDrawMode : unsigned char { iedScreenPaint, iedBitmapPaint, iedResize, iedCalculate };

struct DECLSPEC_DRECORD TDPointArrayRec
{
public:
	Hyiedefs::TDPointArray *Pts;
	int PtCount;
	int AllocPtCount;
};


enum DECLSPEC_DENUM TIEPointBase : unsigned char { iepbRange, iepbClientArea, iepbBitmap };

struct DECLSPEC_DRECORD TIEEndShapeDrawInfo
{
public:
	TIELineEndShape Shape;
	System::StaticArray<System::Types::TPoint, 4> Points;
	int PointCount;
};


class PASCALIMPLEMENTATION TIELayer : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	bool fUpdating;
	Iexbitmaps::TIEBitmap* fLayerCacheBitmap;
	bool fLayerCacheValid;
	bool fLayerCachefastDrawn;
	bool fForceLayerCaching;
	TIELayerKind fKind;
	bool fIsMask;
	bool fMaskInverted;
	double fRotate;
	double fRotateCenterX;
	double fRotateCenterY;
	Hyiedefs::TFlipDir fFlip;
	bool fAntiAlias;
	double fPosX;
	double fPosY;
	double fResizedWidth;
	double fResizedHeight;
	bool fAspectRatioLocked;
	System::Uitypes::TColor fBorderColor;
	int fBorderWidth;
	System::Uitypes::TColor fFillColor;
	System::Uitypes::TColor fFillColor2;
	Hyiedefs::TIEGDIPlusGradient fFillGradient;
	double fFillOpacity;
	int fLayerSize;
	bool fModified;
	System::UnicodeString fName;
	bool fDrawOuter;
	GUID fGuid;
	int fTag;
	System::UnicodeString fHint;
	System::UnicodeString fURL;
	bool fVisible;
	bool fVisibleBox;
	int fTransparency;
	double fOpacity;
	int fAlphaEdgeFeathering;
	bool fCropped;
	bool fLocked;
	bool fSelectable;
	Hyieutils::TIERenderOperation fOperation;
	int fUserDataLen;
	TIERulerMode fRulerMode;
	Hyiedefs::TIEUnits fRulerUnits;
	TIEDrawingInfo fDrawingInfo;
	TDPointArrayRec fCachedShapePoints;
	TDPointArrayRec fDrawnPoints;
	Hyiedefs::TResampleFilter fResampleFilter;
	bool fUseResampleFilter;
	virtual Iexbitmaps::TIEBitmap* __fastcall GetBitmap();
	virtual void __fastcall CopyToBitmapEx(Iexbitmaps::TIEBitmap* &Dest, int CreateWidth, int CreateHeight, bool FastDrawing, bool EnableAlpha, bool UseDisplayAR, TIEDrawMode DrawMode, bool EnlargeOnly = false) = 0 ;
	virtual System::UnicodeString __fastcall GetAsSVG() = 0 ;
	int __fastcall GetPosX();
	int __fastcall GetPosY();
	void __fastcall SetPosX(int v);
	void __fastcall SetPosY(int v);
	double __fastcall GetPosXD();
	double __fastcall GetPosYD();
	void __fastcall SetPosXD(double v);
	void __fastcall SetPosYD(double v);
	int __fastcall GetWidth();
	int __fastcall GetHeight();
	double __fastcall GetWidthD();
	double __fastcall GetHeightD();
	void __fastcall SetWidth(int v);
	void __fastcall SetHeight(int v);
	void __fastcall SetWidthD(double v);
	void __fastcall SetHeightD(double v);
	void __fastcall SetPosEx(bool ChangePosX, double NewPosX, bool ChangePosY, double NewPosY);
	void __fastcall SetSizeEx(bool ChangeWidth, double NewWidth, bool ChangeHeight, double NewHeight);
	int __fastcall GetOriginalWidth();
	int __fastcall GetOriginalHeight();
	double __fastcall GetRotate();
	void __fastcall SetRotate(double v);
	void __fastcall SetRotateCenterX(double v);
	void __fastcall SetRotateCenterY(double v);
	void __fastcall SetFlip(Hyiedefs::TFlipDir v);
	bool __fastcall GetSelected();
	void __fastcall SetSelected(const bool Value);
	void __fastcall SetGroupIndex(const int Value);
	void __fastcall CalcPaintPos(int ImgWidth, int ImgHeight, /* out */ int &XDst, /* out */ int &YDst, /* out */ int &WidthDst, /* out */ int &HeightDst, /* out */ int &XSrc, /* out */ int &YSrc, /* out */ int &WidthSrc, /* out */ int &HeightSrc);
	int __fastcall LoadMetaFromStream(System::Classes::TStream* Stream);
	void __fastcall SaveMetaToStream(System::Classes::TStream* Stream);
	void __fastcall SetIsMask(const bool Value);
	void __fastcall SetMaskInverted(bool Value);
	void __fastcall SetAspectRatioLocked(const bool Value);
	void __fastcall RenderLayerWithAdornments(Iexbitmaps::TIEBitmap* DstBitmap, int LyrIdx, Iexbitmaps::TIEBitmap* SrcBitmap, bool CanModifySrc, System::PInteger XLUT, System::PInteger YLUT, System::Types::PRect UpdRect, int xDst, int yDst, int dxDst, int dyDst, int xSrc, int ySrc, int dxSrc, int dySrc, bool EnableAlpha, bool SolidBackground, Hyiedefs::TResampleFilter Filter);
	void __fastcall CalcLayout();
	bool __fastcall Owner_EnableAlphaChannel();
	bool __fastcall Owner_FastDrawingActive();
	bool __fastcall Owner_FastOutputActive();
	void __fastcall SetFillOpacity(double value);
	bool __fastcall GetModified();
	void __fastcall SetModified(bool value);
	void __fastcall SetVisible(bool Value);
	void __fastcall SetVisibleBox(bool Value);
	void __fastcall SetTransparency(int Value);
	void __fastcall SetOpacity(double Value);
	void __fastcall SetAlphaEdgeFeathering(int Value);
	void __fastcall SetCropped(bool Value);
	void __fastcall SetLocked(bool Value);
	void __fastcall SetSelectable(bool Value);
	void __fastcall SetOperation(Hyieutils::TIERenderOperation Value);
	void __fastcall SetUserDataLen(int Value);
	void __fastcall SetName(const System::UnicodeString v);
	void __fastcall SetURL(const System::UnicodeString v);
	void __fastcall SetHint(const System::UnicodeString v);
	void __fastcall SetDrawOuter(bool Value);
	void __fastcall SetGuid(const GUID &Value);
	void __fastcall SetTag(int Value);
	void __fastcall BeforeDrawLayer(Iexbitmaps::TIEBitmap* Dest);
	void __fastcall GetPDFScalingParams(/* out */ double &Scale, /* out */ int &PageMargin, /* out */ int &OffsetX, /* out */ int &OffSetY);
	void __fastcall ResetCache();
	void __fastcall SetLayerIndex(int v);
	int __fastcall GetLayerIndex();
	System::Types::TPoint __fastcall GetDrawnPoints(int idx);
	int __fastcall GetDrawnPointCount();
	System::Types::TRect __fastcall GetClientAreaBox();
	void __fastcall SetClientAreaBox(const System::Types::TRect &Value);
	System::Types::TRect __fastcall GetLayerRect();
	void __fastcall SetLayerRect(const System::Types::TRect &value);
	void __fastcall SetRulerMode(const TIERulerMode v);
	void __fastcall SetRulerUnits(const Hyiedefs::TIEUnits v);
	bool __fastcall GetIsRuler();
	void __fastcall SetIsRuler(const bool v);
	
protected:
	void __fastcall ConvertPointI(int &X, int &Y, TIEPointBase InBase, TIEPointBase OutBase, double LPosX, double LPosY, double LWidth, double LHeight);
	void __fastcall ConvertPointD(double &X, double &Y, TIEPointBase InBase, TIEPointBase OutBase, double LPosX, double LPosY, double LWidth, double LHeight);
	void __fastcall AdjustToRotateStep_Range(int &X, int &Y, const System::Types::TPoint &PrevPt, double LWidth, double LHeight);
	void __fastcall AdjustToRotateStep_Bmp(double &X, double &Y, const Hyiedefs::TDPoint &PrevPt);
	System::Uitypes::TColor __fastcall GetBorderColor();
	void __fastcall SetBorderColor(System::Uitypes::TColor value);
	int __fastcall GetBorderWidth();
	void __fastcall SetBorderWidth(int value);
	System::Uitypes::TColor __fastcall GetFillColor();
	void __fastcall SetFillColor(System::Uitypes::TColor value);
	System::Uitypes::TColor __fastcall GetFillColor2();
	void __fastcall SetFillColor2(System::Uitypes::TColor value);
	Hyiedefs::TIEGDIPlusGradient __fastcall GetFillGradient();
	void __fastcall SetFillGradient(Hyiedefs::TIEGDIPlusGradient value);
	
public:
	System::TObject* fOwner;
	Vcl::Graphics::TFont* fFont;
	Iegdiplus::TIECanvasTextStyling* fTextStyling;
	bool fSelected;
	Iexbitmaps::TIEBitmap* fCachedLayerMask;
	int fGroupIndex;
	double fOriginalAspectRatio;
	System::Types::TSize fUnrotatedSize;
	System::Types::TRect fClientAreaBox;
	Hyiedefs::TIEVSoftShadow* SoftShadow;
	Hyiedefs::TIEVSoftShadow* InnerGlow;
	void *UserData;
	Hyiedefs::TIELayerMagnification Magnify;
	__property Hyiedefs::TResampleFilter ResampleFilter = {read=fResampleFilter, write=fResampleFilter, nodefault};
	__property bool UseResampleFilter = {read=fUseResampleFilter, write=fUseResampleFilter, nodefault};
	__property TIERulerMode RulerMode = {read=fRulerMode, write=SetRulerMode, nodefault};
	__property Hyiedefs::TIEUnits RulerUnits = {read=fRulerUnits, write=SetRulerUnits, nodefault};
	double __fastcall RulerValue(TIERulerAspect Aspect = (TIERulerAspect)(0x0));
	System::UnicodeString __fastcall FormatRulerValue(const double value, bool IsArea = false);
	System::UnicodeString __fastcall RulerHint();
	__property bool IsRuler = {read=GetIsRuler, write=SetIsRuler, nodefault};
	int __fastcall GetIndex _DEPRECATED_ATTRIBUTE1("Use LayerIndex instead - http://imageen.com/help/Compatibility.html") ();
	System::UnicodeString __fastcall KindStr();
	__property bool AspectRatioLocked = {read=fAspectRatioLocked, write=SetAspectRatioLocked, nodefault};
	__property double Rotate = {read=GetRotate, write=SetRotate};
	__property double RotateCenterX = {read=fRotateCenterX, write=SetRotateCenterX};
	__property double RotateCenterY = {read=fRotateCenterY, write=SetRotateCenterY};
	__property int PosX = {read=GetPosX, write=SetPosX, nodefault};
	__property int PosY = {read=GetPosY, write=SetPosY, nodefault};
	__property double PosXD = {read=GetPosXD, write=SetPosXD};
	__property double PosYD = {read=GetPosYD, write=SetPosYD};
	__property int Width = {read=GetWidth, write=SetWidth, nodefault};
	__property int Height = {read=GetHeight, write=SetHeight, nodefault};
	__property double WidthD = {read=GetWidthD, write=SetWidthD};
	__property double HeightD = {read=GetHeightD, write=SetHeightD};
	__property bool Selected = {read=GetSelected, write=SetSelected, nodefault};
	__property int GroupIndex = {read=fGroupIndex, write=SetGroupIndex, nodefault};
	__property bool IsMask = {read=fIsMask, write=SetIsMask, nodefault};
	__property bool MaskInverted = {read=fMaskInverted, write=SetMaskInverted, nodefault};
	__property int LayerIndex = {read=GetLayerIndex, write=SetLayerIndex, nodefault};
	__property System::TObject* Owner = {read=fOwner};
	__property Iexbitmaps::TIEBitmap* Bitmap = {read=GetBitmap};
	virtual void __fastcall CopyToBitmap(Iexbitmaps::TIEBitmap* &Dest, int CreateWidth = 0xffffffff, int CreateHeight = 0xffffffff, bool EnableAlpha = true, bool UseDisplayAR = true) = 0 ;
	void __fastcall DrawToCanvas(Vcl::Graphics::TCanvas* Dest, int DrawWidth = 0xffffffff, int DrawHeight = 0xffffffff, bool UseDisplayAR = true);
	__property TIELayerKind Kind = {read=fKind, nodefault};
	__property bool AntiAlias = {read=fAntiAlias, write=fAntiAlias, nodefault};
	__property int OriginalWidth = {read=GetOriginalWidth, nodefault};
	__property int OriginalHeight = {read=GetOriginalHeight, nodefault};
	__fastcall virtual TIELayer(System::TObject* Owner);
	__fastcall virtual ~TIELayer();
	int __fastcall ConvXScr2Bmp(int x);
	int __fastcall ConvYScr2Bmp(int y);
	int __fastcall ConvXBmp2Scr(int x);
	int __fastcall ConvYBmp2Scr(int y);
	bool __fastcall PointOverLayer(int ScrX, int ScrY, bool CanSelectAlpha = true, int PtTolerance = 0x0);
	void __fastcall Assign(TIELayer* Source);
	void __fastcall Swap(TIELayer* OtherLayer);
	bool __fastcall SupportsFeature(TIELayerFeatures Feature);
	void __fastcall GetProperties(System::Classes::TStrings* Props);
	void __fastcall SetProperties(System::Classes::TStrings* Props)/* overload */;
	void __fastcall SetProperties(System::UnicodeString PropName, System::UnicodeString Value)/* overload */;
	void __fastcall SetTextProperties(TIETextAdjustment Adjust, int Value);
	void __fastcall ConvertToImageLayer(double QualityFactor = 2.000000E+00, bool CropAlpha = true);
	void __fastcall ConvertToPolylineLayer();
	void __fastcall SetDefaults();
	TIELayer* __fastcall GetLayerMask();
	int __fastcall GetLayerMaskIndex();
	void __fastcall CalcClientAreaBox(bool Force = true);
	double __fastcall PreferredAspectRatio();
	void __fastcall RestoreAspectRatio(bool PreferredOnly = true);
	void __fastcall RecordAspectRatio();
	System::UnicodeString __fastcall GetDefaultName(bool MergeDescription = false, bool AppendKind = false);
	System::UnicodeString __fastcall GetDescription();
	__property TIEDrawingInfo DrawingInfo = {read=fDrawingInfo};
	__property System::Types::TRect ClientAreaBox = {read=GetClientAreaBox, write=SetClientAreaBox};
	__property System::Types::TRect LayerRect = {read=GetLayerRect, write=SetLayerRect};
	__property bool Visible = {read=fVisible, write=SetVisible, nodefault};
	__property bool VisibleBox = {read=fVisibleBox, write=SetVisibleBox, nodefault};
	__property int Transparency = {read=fTransparency, write=SetTransparency, nodefault};
	__property double Opacity = {read=fOpacity, write=SetOpacity};
	__property int AlphaEdgeFeathering = {read=fAlphaEdgeFeathering, write=SetAlphaEdgeFeathering, nodefault};
	__property bool Cropped = {read=fCropped, write=SetCropped, nodefault};
	__property bool Locked = {read=fLocked, write=SetLocked, nodefault};
	__property bool Selectable = {read=fSelectable, write=SetSelectable, nodefault};
	__property Hyieutils::TIERenderOperation Operation = {read=fOperation, write=SetOperation, nodefault};
	__property int UserDataLen = {read=fUserDataLen, write=SetUserDataLen, nodefault};
	__property System::UnicodeString Name = {read=fName, write=SetName};
	__property System::UnicodeString Hint = {read=fHint, write=SetHint};
	__property System::UnicodeString URL = {read=fURL, write=SetURL};
	__property bool DrawOuter = {read=fDrawOuter, write=SetDrawOuter, nodefault};
	__property GUID Guid = {read=fGuid, write=SetGuid};
	__property int Tag = {read=fTag, write=SetTag, nodefault};
	__property Hyiedefs::TFlipDir Flip = {read=fFlip, write=SetFlip, nodefault};
	__property System::Types::TPoint DrawnPoints[int index] = {read=GetDrawnPoints};
	__property int DrawnPointCount = {read=GetDrawnPointCount, nodefault};
	__property System::Uitypes::TColor BorderColor = {read=GetBorderColor, write=SetBorderColor, nodefault};
	__property int BorderWidth = {read=GetBorderWidth, write=SetBorderWidth, nodefault};
	__property System::Uitypes::TColor FillColor = {read=GetFillColor, write=SetFillColor, nodefault};
	__property System::Uitypes::TColor FillColor2 = {read=GetFillColor2, write=SetFillColor2, nodefault};
	__property Hyiedefs::TIEGDIPlusGradient FillGradient = {read=GetFillGradient, write=SetFillGradient, nodefault};
	__property double FillOpacity = {read=fFillOpacity, write=SetFillOpacity};
	__property bool Modified = {read=GetModified, write=SetModified, nodefault};
	bool __fastcall IsOriginalSize();
	virtual void __fastcall PaintTo(Iexbitmaps::TIEBitmap* DstBitmap, int LyrIdx, System::PInteger XLUT, System::PInteger YLUT, System::Types::PRect UpdRect, int xDst, int yDst, int dxDst, int dyDst, int xSrc, int ySrc, int dxSrc, int dySrc, bool EnableAlpha, bool SolidBackground, Hyiedefs::TResampleFilter Filter, Hyiedefs::TIEAntialiasMode RotationFilter, bool ResizingLayer);
	virtual void __fastcall LoadFromStream(System::Classes::TStream* Stream) = 0 ;
	void __fastcall LoadFromLegacyStream(System::Classes::TStream* Stream, int HdrVersion, int FileFormat);
	virtual void __fastcall SaveToStream(System::Classes::TStream* Stream, bool MetaOnly = false, int CompressionFormat = 0xfffffffe) = 0 ;
	void __fastcall LayerChange(bool ResetLayerCache = true);
	virtual bool __fastcall AddToPDF(Iepdf::TIEPDFBuilder* Dest) = 0 ;
	virtual void __fastcall Update();
	TIECornerPointsArray __fastcall GetCornerPoints();
	System::Types::TSize __fastcall GetUnrotatedSize();
	bool __fastcall ImageDrawingIsRotated();
	__property System::UnicodeString AsSVG = {read=GetAsSVG};
	int __fastcall MinWidth();
	int __fastcall MinHeight();
	double __fastcall GetUIRotateValue(bool Alternative);
	void __fastcall SetUIRotateChange(double Change, bool Alternative);
	void __fastcall SetBounds(double NewPosX, double NewPosY, double NewWidth, double NewHeight);
	__property bool ForceLayerCaching = {read=fForceLayerCaching, write=fForceLayerCaching, nodefault};
};


class PASCALIMPLEMENTATION TIEImageLayer : public TIELayer
{
	typedef TIELayer inherited;
	
private:
	virtual Iexbitmaps::TIEBitmap* __fastcall GetBitmap();
	virtual void __fastcall CopyToBitmapEx(Iexbitmaps::TIEBitmap* &Dest, int CreateWidth, int CreateHeight, bool FastDrawing, bool EnableAlpha, bool UseDisplayAR, TIEDrawMode DrawMode, bool EnlargeOnly = false);
	virtual System::UnicodeString __fastcall GetAsSVG();
	void __fastcall WaitForImageReady();
	
public:
	Iexbitmaps::TIEBitmap* fBitmap;
	bool fFreeBitmapOnDestroy;
	System::StaticArray<System::Types::TPoint, 4> RotatedClientAreaPts;
	__fastcall TIEImageLayer(System::TObject* Owner, Iexbitmaps::TIEBitmap* TemplateBitmap, bool JustAssign)/* overload */;
	__fastcall TIEImageLayer(System::TObject* Owner, int Width, int Height)/* overload */;
	__fastcall TIEImageLayer(System::TObject* Owner, TIELayer* TemplateLayer, double QualityFactor, bool CropAlpha)/* overload */;
	__fastcall virtual ~TIEImageLayer();
	virtual void __fastcall CopyToBitmap(Iexbitmaps::TIEBitmap* &Dest, int CreateWidth = 0xffffffff, int CreateHeight = 0xffffffff, bool EnableAlpha = true, bool UseDisplayAR = true);
	virtual void __fastcall PaintTo(Iexbitmaps::TIEBitmap* DstBitmap, int LyrIdx, System::PInteger XLUT, System::PInteger YLUT, System::Types::PRect UpdRect, int xDst, int yDst, int dxDst, int dyDst, int xSrc, int ySrc, int dxSrc, int dySrc, bool EnableAlpha, bool SolidBackground, Hyiedefs::TResampleFilter Filter, Hyiedefs::TIEAntialiasMode RotationFilter, bool ResizingLayer);
	bool __fastcall CropAlpha();
	void __fastcall Clear(System::Uitypes::TColor FillColor = (System::Uitypes::TColor)(0xffffff), int Width = 0x1, int Height = 0x1);
	void __fastcall RestoreSize();
	bool __fastcall ExecuteOpenDialog();
	virtual void __fastcall LoadFromStream(System::Classes::TStream* Stream);
	virtual void __fastcall SaveToStream(System::Classes::TStream* Stream, bool MetaOnly = false, int CompressionFormat = 0xfffffffe);
	virtual bool __fastcall AddToPDF(Iepdf::TIEPDFBuilder* Dest);
};


class PASCALIMPLEMENTATION TIEShapeLayer : public TIELayer
{
	typedef TIELayer inherited;
	
private:
	Hyiedefs::TIEShape fShape;
	int fShapeModifier;
	virtual void __fastcall CopyToBitmapEx(Iexbitmaps::TIEBitmap* &Dest, int CreateWidth, int CreateHeight, bool FastDrawing, bool EnableAlpha, bool UseDisplayAR, TIEDrawMode DrawMode, bool EnlargeOnly = false);
	virtual System::UnicodeString __fastcall GetAsSVG();
	void __fastcall SetShape(Hyiedefs::TIEShape value);
	void __fastcall SetShapeModifier(int value);
	
public:
	__property Hyiedefs::TIEShape Shape = {read=fShape, write=SetShape, nodefault};
	__property int ShapeModifier = {read=fShapeModifier, write=SetShapeModifier, nodefault};
	__fastcall virtual TIEShapeLayer(System::TObject* Owner);
	__fastcall virtual ~TIEShapeLayer();
	virtual void __fastcall CopyToBitmap(Iexbitmaps::TIEBitmap* &Dest, int CreateWidth = 0xffffffff, int CreateHeight = 0xffffffff, bool EnableAlpha = true, bool UseDisplayAR = true);
	virtual void __fastcall LoadFromStream(System::Classes::TStream* Stream);
	virtual void __fastcall SaveToStream(System::Classes::TStream* Stream, bool MetaOnly = false, int CompressionFormat = 0xfffffffe);
	virtual bool __fastcall AddToPDF(Iepdf::TIEPDFBuilder* Dest);
};


typedef System::StaticArray<Hyiedefs::TDPoint, 2> TIELinePoints;

typedef System::StaticArray<System::Types::TPoint, 2> TIELineIPoints;

class PASCALIMPLEMENTATION TIELineLayer : public TIELayer
{
	typedef TIELayer inherited;
	
private:
	TIELinePoints fPoints;
	System::UnicodeString fLabelText;
	TIELineEndShape fStartShape;
	TIELineEndShape fEndShape;
	int fShapeSize;
	double fCurve;
	TIELineLabelPos fLabelPosition;
	Hyiedefs::TIEShape fLabelShape;
	Hyiedefs::TIEAlignment fLabelAlignment;
	bool fReadOnly;
	TIETextOverflow fTextOverflow;
	bool fUpdatePending;
	bool fPendingRotate;
	double fPendingRotateVal;
	System::Uitypes::TColor fLineColor;
	int fLineWidth;
	System::Uitypes::TColor fLineFillColor;
	double fLabelHorzMargin;
	double fLabelVertMargin;
	System::Types::TRect fLabelDrawRect;
	TIEEndShapeDrawInfo fStartShapePoints;
	TIEEndShapeDrawInfo fEndShapePoints;
	System::Types::TPoint fTextDrawPos;
	int fTextDrawFontH;
	virtual void __fastcall CopyToBitmapEx(Iexbitmaps::TIEBitmap* &Dest, int CreateWidth, int CreateHeight, bool FastDrawing, bool EnableAlpha, bool UseDisplayAR, TIEDrawMode DrawMode, bool EnlargeOnly = false);
	virtual System::UnicodeString __fastcall GetAsSVG();
	void __fastcall SetLabelFont(Vcl::Graphics::TFont* const v);
	void __fastcall SetLabelTextStyling(Iegdiplus::TIECanvasTextStyling* v);
	void __fastcall LabelFontChanged(System::TObject* Sender);
	void __fastcall SetLabelText(const System::UnicodeString Value);
	void __fastcall SetLabelPosition(const TIELineLabelPos Value);
	void __fastcall SetReadOnly(const bool Value);
	void __fastcall SetTextOverflow(TIETextOverflow Value);
	void __fastcall SetStartShape(const TIELineEndShape Value);
	void __fastcall SetEndShape(const TIELineEndShape Value);
	void __fastcall SetShapeSize(const int Value);
	void __fastcall SetCurve(const double Value);
	System::Uitypes::TColor __fastcall GetLabelBorderColor();
	void __fastcall SetLabelBorderColor(const System::Uitypes::TColor v);
	int __fastcall GetLabelBorderWidth();
	void __fastcall SetLabelBorderWidth(int value);
	System::Uitypes::TColor __fastcall GetLabelFillColor();
	void __fastcall SetLabelFillColor(System::Uitypes::TColor value);
	void __fastcall SetLineColor(const System::Uitypes::TColor Value);
	void __fastcall SetLineWidth(const int Value);
	void __fastcall SetLineFillColor(const System::Uitypes::TColor Value);
	int __fastcall GetLineLength();
	void __fastcall SetLineLength(const int Value);
	System::Types::TPoint __fastcall GetPointR(int index);
	void __fastcall SetPointR(int index, const System::Types::TPoint &pt);
	void __fastcall SetLinePoints(const System::Types::TRect &Value);
	System::Types::TPoint __fastcall GetLinePoint1();
	void __fastcall SetLinePoint1(const System::Types::TPoint &Value);
	System::Types::TPoint __fastcall GetLinePoint2();
	void __fastcall SetLinePoint2(const System::Types::TPoint &Value);
	void __fastcall SetLabelShape(Hyiedefs::TIEShape Value);
	void __fastcall SetLabelAlignment(Hyiedefs::TIEAlignment Value);
	void __fastcall SetLabelHorzMargin(double Value);
	void __fastcall SetLabelVertMargin(double Value);
	void __fastcall ScalePoints(bool DoScale = true, double AdjustX = 0.000000E+00, double AdjustY = 0.000000E+00);
	
protected:
	System::Types::TRect fOffset;
	System::Types::TRect __fastcall GetLineRect();
	void __fastcall CheckPending();
	
public:
	__property bool ReadOnly = {read=fReadOnly, write=SetReadOnly, nodefault};
	__property TIETextOverflow TextOverflow = {read=fTextOverflow, write=SetTextOverflow, nodefault};
	__property Hyiedefs::TIEShape LabelShape = {read=fLabelShape, write=SetLabelShape, nodefault};
	__property Hyiedefs::TIEAlignment LabelAlignment = {read=fLabelAlignment, write=SetLabelAlignment, nodefault};
	__property TIELineLabelPos LabelPosition = {read=fLabelPosition, write=SetLabelPosition, nodefault};
	__property System::UnicodeString LabelText = {read=fLabelText, write=SetLabelText};
	__property Vcl::Graphics::TFont* LabelFont = {read=fFont, write=SetLabelFont};
	__property Iegdiplus::TIECanvasTextStyling* LabelTextStyling = {read=fTextStyling, write=SetLabelTextStyling};
	__property double LabelHorzMargin = {read=fLabelHorzMargin, write=SetLabelHorzMargin};
	__property double LabelVertMargin = {read=fLabelVertMargin, write=SetLabelVertMargin};
	__property System::Types::TRect LinePoints = {read=GetLineRect, write=SetLinePoints};
	__property System::Types::TPoint LinePoint1 = {read=GetLinePoint1, write=SetLinePoint1};
	__property System::Types::TPoint LinePoint2 = {read=GetLinePoint2, write=SetLinePoint2};
	void __fastcall SetLinePointsEx _DEPRECATED_ATTRIBUTE1("Use SetPoints instead - http://imageen.com/help/Compatibility.html") (double StartX, double StartY, double EndX, double EndY, bool SnapAngles = false, bool FixToStartPt = true);
	__property System::Types::TPoint Points[int index] = {read=GetPointR, write=SetPointR};
	void __fastcall SetPoints(System::Types::TPoint *Points, const int Points_High, TIEPointBase PointBase = (TIEPointBase)(0x2), bool SnapAngles = false, bool FixToStartPt = true)/* overload */;
	void __fastcall SetPoints(int Index, int X, int Y, TIEPointBase PointBase = (TIEPointBase)(0x2), bool SnapAngles = false)/* overload */;
	void __fastcall SetPoints(double StartX, double StartY, double EndX, double EndY, TIEPointBase PointBase = (TIEPointBase)(0x2), bool SnapAngles = false, bool FixToStartPt = true)/* overload */;
	void __fastcall SetPointsD(Hyiedefs::TDPoint *Points, const int Points_High, TIEPointBase PointBase, bool SnapAngles = false, bool FixToStartPt = true);
	Hyiedefs::TDPoint __fastcall GetPointEx(int index, TIEPointBase PointBase = (TIEPointBase)(0x2))/* overload */;
	void __fastcall GetPointEx(TIELinePoints &pts, TIEPointBase PointBase = (TIEPointBase)(0x2))/* overload */;
	void __fastcall GetPointEx(TIELineIPoints &pts, TIEPointBase PointBase = (TIEPointBase)(0x2))/* overload */;
	void __fastcall GetPointEx(System::Types::TPoint *pts, const int pts_High, TIEPointBase PointBase = (TIEPointBase)(0x2))/* overload */;
	__property System::Types::TRect LabelRect = {read=fLabelDrawRect};
	__property TIELineEndShape StartShape = {read=fStartShape, write=SetStartShape, nodefault};
	__property TIELineEndShape EndShape = {read=fEndShape, write=SetEndShape, nodefault};
	__property int ShapeSize = {read=fShapeSize, write=SetShapeSize, nodefault};
	__property double Curve = {read=fCurve, write=SetCurve};
	void __fastcall SizeToFit _DEPRECATED_ATTRIBUTE1("No longer needed - http://imageen.com/help/Compatibility.html") ();
	void __fastcall ActivateEditor();
	__property System::Uitypes::TColor LineColor = {read=fLineColor, write=SetLineColor, nodefault};
	__property int LineWidth = {read=fLineWidth, write=SetLineWidth, nodefault};
	__property System::Uitypes::TColor ShapeFillColor = {read=fLineFillColor, write=SetLineFillColor, nodefault};
	__property System::Uitypes::TColor LabelBorderColor = {read=GetLabelBorderColor, write=SetLabelBorderColor, nodefault};
	__property int LabelBorderWidth = {read=GetLabelBorderWidth, write=SetLabelBorderWidth, nodefault};
	__property System::Uitypes::TColor LabelFillColor = {read=GetLabelFillColor, write=SetLabelFillColor, nodefault};
	__property System::Uitypes::TColor LabelFillColor2 = {read=GetFillColor2, write=SetFillColor2, nodefault};
	__property Hyiedefs::TIEGDIPlusGradient LabelFillGradient = {read=GetFillGradient, write=SetFillGradient, nodefault};
	__property int LineLength = {read=GetLineLength, write=SetLineLength, nodefault};
	__fastcall virtual TIELineLayer(System::TObject* Owner);
	__fastcall virtual ~TIELineLayer();
	virtual void __fastcall CopyToBitmap(Iexbitmaps::TIEBitmap* &Dest, int CreateWidth = 0xffffffff, int CreateHeight = 0xffffffff, bool EnableAlpha = true, bool UseDisplayAR = true);
	virtual void __fastcall LoadFromStream(System::Classes::TStream* Stream);
	virtual void __fastcall SaveToStream(System::Classes::TStream* Stream, bool MetaOnly = false, int CompressionFormat = 0xfffffffe);
	virtual bool __fastcall AddToPDF(Iepdf::TIEPDFBuilder* Dest);
	virtual void __fastcall Update();
	void __fastcall RotateLine(double Angle, int FixedPt = 0xffffffff);
	__property int TextDrawFontHeight = {read=fTextDrawFontH, nodefault};
};


struct DECLSPEC_DRECORD TPixelEdge
{
public:
	int x;
	int y;
	int dir;
};


typedef System::StaticArray<TPixelEdge, 134217728> TPixelEdgeArray;

typedef TPixelEdgeArray *PPixelEdgeArray;

struct DECLSPEC_DRECORD TEdgelist
{
public:
	int Nedges;
	int current;
	TPixelEdgeArray *list;
};


class PASCALIMPLEMENTATION TIEPolylineLayer : public TIELayer
{
	typedef TIELayer inherited;
	
private:
	TDPointArrayRec fPoints;
	bool fPolylineClosed;
	bool fAutoSize;
	bool fUpdatePending;
	bool fScalePending;
	virtual void __fastcall CopyToBitmapEx(Iexbitmaps::TIEBitmap* &Dest, int CreateWidth, int CreateHeight, bool FastDrawing, bool EnableAlpha, bool UseDisplayAR, TIEDrawMode DrawMode, bool EnlargeOnly = false);
	virtual System::UnicodeString __fastcall GetAsSVG();
	System::Types::TPoint __fastcall GetPointR(int index);
	void __fastcall SetPointR(int index, const System::Types::TPoint &pt);
	int __fastcall GetPointCount();
	void __fastcall SetPolylineClosed(bool value);
	void __fastcall SetAutoSize(const bool Value);
	void __fastcall ScaleAllPoints(bool DoScale = true, int ShiftX = 0x0, int ShiftY = 0x0);
	
public:
	__property bool PolylineClosed = {read=fPolylineClosed, write=SetPolylineClosed, nodefault};
	__property System::Types::TPoint Points[int index] = {read=GetPointR, write=SetPointR};
	__property int PointCount = {read=GetPointCount, nodefault};
	__property bool AutoSize = {read=fAutoSize, write=SetAutoSize, nodefault};
	__property System::Uitypes::TColor LineColor = {read=GetBorderColor, write=SetBorderColor, nodefault};
	__property int LineWidth = {read=GetBorderWidth, write=SetBorderWidth, nodefault};
	__fastcall virtual TIEPolylineLayer(System::TObject* Owner)/* overload */;
	__fastcall TIEPolylineLayer(System::TObject* Owner, TIELayer* TemplateLayer)/* overload */;
	__fastcall virtual ~TIEPolylineLayer();
	virtual void __fastcall CopyToBitmap(Iexbitmaps::TIEBitmap* &Dest, int CreateWidth = 0xffffffff, int CreateHeight = 0xffffffff, bool EnableAlpha = true, bool UseDisplayAR = true);
	virtual void __fastcall LoadFromStream(System::Classes::TStream* Stream);
	virtual void __fastcall SaveToStream(System::Classes::TStream* Stream, bool MetaOnly = false, int CompressionFormat = 0xfffffffe);
	void __fastcall ClearAllPoints();
	void __fastcall SetPoint(int index, int X, int Y, TIEPointBase PointBase = (TIEPointBase)(0x0), bool SnapAngles = false);
	void __fastcall AddPoint(int X, int Y, TIEPointBase PointBase = (TIEPointBase)(0x0), bool SnapAngles = false)/* overload */;
	void __fastcall AddPoint(const System::Types::TPoint &pt, TIEPointBase PointBase = (TIEPointBase)(0x0), bool SnapAngles = false)/* overload */;
	void __fastcall AddCurvePoints(double StartAngle, double SweepAngle, int EllipseWidth, int EllipseHeight, int PtCount = 0x0)/* overload */;
	void __fastcall AddCurvePoints(double RadiusMult, const System::Types::TPoint &EndPoint, int PtCount = 0x0)/* overload */;
	void __fastcall InsertCurvePoints(int AfterIndex, double RadiusMult, int PtCount = 0x0);
	void __fastcall InsertPoint(int AfterIndex, int X, int Y, TIEPointBase PointBase = (TIEPointBase)(0x0));
	void __fastcall RemovePoint(int Index)/* overload */;
	void __fastcall RemovePoint(int FromIndex, int ToIndex)/* overload */;
	void __fastcall SetPoints(System::Types::TPoint *Points, const int Points_High, bool ClosePolyline, TIEPointBase PointBase = (TIEPointBase)(0x0))/* overload */;
	void __fastcall SetPoints(System::Types::TPoint *Points, const int Points_High, TIEPointBase PointBase = (TIEPointBase)(0x0))/* overload */;
	void __fastcall SetPoints(Hyiedefs::TIEShape Shape, bool ClosePolyline = true)/* overload */;
	void __fastcall SetPoints(double StartAngle, double SweepAngle, int PtCount = 0x0)/* overload */;
	void __fastcall SetPoints(System::Types::TPoint *Points, const int Points_High, int Count, TIEPointBase PointBase = (TIEPointBase)(0x0))/* overload */;
	void __fastcall SetPointsD(Hyiedefs::TDPoint *Points, const int Points_High, int Count, TIEPointBase PointBase);
	void __fastcall SimplifyPolygon(int MaxPoints);
	bool __fastcall SmoothJaggedEdges();
	void __fastcall FixRotation();
	double __fastcall CalculateLength(Hyiedefs::TIEUnits Units);
	double __fastcall CalculateArea(Hyiedefs::TIEUnits Units);
	System::Types::TPoint __fastcall CalculateCentroid(TIEPointBase PointBase = (TIEPointBase)(0x0));
	System::Types::TPoint __fastcall GetPoint(int index, TIEPointBase Base = (TIEPointBase)(0x0));
	Hyiedefs::TDPoint __fastcall GetPointEx(int index, TIEPointBase Base = (TIEPointBase)(0x0))/* overload */;
	void __fastcall GetPointEx(Hyiedefs::TIEDPointArray &pts, TIEPointBase Base = (TIEPointBase)(0x0))/* overload */;
	void __fastcall GetPointEx(Hyiedefs::TIEArrayOfTPoint &pts, TIEPointBase Base = (TIEPointBase)(0x0))/* overload */;
	virtual bool __fastcall AddToPDF(Iepdf::TIEPDFBuilder* Dest);
	virtual void __fastcall Update();
};


typedef System::StaticArray<System::Types::TPoint, 3> TIEAnglePoints;

class PASCALIMPLEMENTATION TIEAngleLayer : public TIELayer
{
	typedef TIELayer inherited;
	
private:
	System::UnicodeString fLabelText;
	TIEAnglePoints fPoints;
	int fLabelDecimalPlaces;
	TIEAngleMode fAngleMode;
	double fLine1Len;
	double fLine2Len;
	System::Types::TPoint fTextDrawPos;
	virtual void __fastcall CopyToBitmapEx(Iexbitmaps::TIEBitmap* &Dest, int CreateWidth, int CreateHeight, bool FastDrawing, bool EnableAlpha, bool UseDisplayAR, TIEDrawMode DrawMode, bool EnlargeOnly = false);
	virtual System::UnicodeString __fastcall GetAsSVG();
	void __fastcall SetLabelFont(Vcl::Graphics::TFont* const Value);
	void __fastcall LabelFontChanged(System::TObject* Sender);
	void __fastcall SetLabelText(const System::UnicodeString v);
	void __fastcall SetLabelTextStyling(Iegdiplus::TIECanvasTextStyling* const v);
	void __fastcall SetLabelDecimalPlaces(const int Value);
	void __fastcall SetAngleMode(const TIEAngleMode Value);
	System::Uitypes::TColor __fastcall GetLineColor();
	void __fastcall SetLineColor(const System::Uitypes::TColor Value);
	int __fastcall GetLineWidth();
	void __fastcall SetLineWidth(const int Value);
	double __fastcall GetStartAngle();
	void __fastcall SetStartAngle(const double Value);
	double __fastcall GetEndAngle();
	void __fastcall SetEndAngle(const double Value);
	double __fastcall GetSweepAngle();
	void __fastcall SetSweepAngle(double Value);
	System::Types::TPoint __fastcall GetPointR(int index);
	void __fastcall SetPointR(int index, const System::Types::TPoint &pt);
	void __fastcall FixPointsRange();
	
protected:
	double fRealPosX;
	double fRealPosY;
	double fRealWidth;
	double fRealHeight;
	System::Types::TRect fOffset;
	bool fUpdatePending;
	double fWasRotate;
	
public:
	__property System::UnicodeString LabelText = {read=fLabelText, write=SetLabelText};
	__property int LabelDecimalPlaces = {read=fLabelDecimalPlaces, write=SetLabelDecimalPlaces, nodefault};
	__property Vcl::Graphics::TFont* LabelFont = {read=fFont, write=SetLabelFont};
	__property Iegdiplus::TIECanvasTextStyling* LabelTextStyling = {read=fTextStyling, write=SetLabelTextStyling};
	__property System::Uitypes::TColor LineColor = {read=GetLineColor, write=SetLineColor, nodefault};
	__property int LineWidth = {read=GetLineWidth, write=SetLineWidth, nodefault};
	__property double StartAngle = {read=GetStartAngle, write=SetStartAngle};
	__property double EndAngle = {read=GetEndAngle, write=SetEndAngle};
	__property double SweepAngle = {read=GetSweepAngle, write=SetSweepAngle};
	__property TIEAngleMode AngleMode = {read=fAngleMode, write=SetAngleMode, nodefault};
	__property System::Types::TPoint Points[int index] = {read=GetPointR, write=SetPointR};
	void __fastcall SetPoints(System::Types::TPoint *Points, const int Points_High, TIEPointBase PointBase = (TIEPointBase)(0x0))/* overload */;
	void __fastcall SetPoints(int Index, int X, int Y, TIEPointBase PointBase = (TIEPointBase)(0x0), bool SnapAngles = false)/* overload */;
	Hyiedefs::TDPoint __fastcall GetPointEx(int index, TIEPointBase PointBase = (TIEPointBase)(0x0))/* overload */;
	void __fastcall GetPointEx(TIEAnglePoints &pts, TIEPointBase PointBase = (TIEPointBase)(0x0))/* overload */;
	void __fastcall InvertAngle();
	__fastcall virtual TIEAngleLayer(System::TObject* Owner)/* overload */;
	__fastcall TIEAngleLayer(System::TObject* Owner, TIELayer* TemplateLayer)/* overload */;
	__fastcall virtual ~TIEAngleLayer();
	virtual void __fastcall CopyToBitmap(Iexbitmaps::TIEBitmap* &Dest, int CreateWidth = 0xffffffff, int CreateHeight = 0xffffffff, bool EnableAlpha = true, bool UseDisplayAR = true);
	virtual void __fastcall LoadFromStream(System::Classes::TStream* Stream);
	virtual void __fastcall SaveToStream(System::Classes::TStream* Stream, bool MetaOnly = false, int CompressionFormat = 0xfffffffe);
	virtual bool __fastcall AddToPDF(Iepdf::TIEPDFBuilder* Dest);
	virtual void __fastcall Update();
	int __fastcall PointCount();
	void __fastcall Clear();
};


class PASCALIMPLEMENTATION TIETextLayer : public TIELayer
{
	typedef TIELayer inherited;
	
private:
	System::UnicodeString fText;
	System::UnicodeString fRichText;
	bool fEnableFormatting;
	Iexrichedit::TIERichEdit* fRichEditor;
	bool fAutoSize;
	Hyiedefs::TIEShape fBorderShape;
	Hyiedefs::TIEAlignment fAlignment;
	Hyiedefs::TIELayout fLayout;
	bool fReadOnly;
	TIETextOverflow fTextOverflow;
	bool fWordWrap;
	double fHorzMargin;
	double fVertMargin;
	double fBorderRotate;
	double fTextOffsetX;
	double fTextOffsetY;
	System::Types::TPoint fTextDrawPos;
	int fTextDrawFontH;
	void __fastcall CopyToBitmapEx_Plain(Iexbitmaps::TIEBitmap* &Dest, int CreateWidth, int CreateHeight, bool FastDrawing, bool EnableAlpha, bool UseDisplayAR, TIEDrawMode DrawMode, bool EnlargeOnly = false);
	void __fastcall InitRichEditor();
	void __fastcall CopyToBitmapEx_Rich(Iexbitmaps::TIEBitmap* &Dest, int CreateWidth, int CreateHeight, bool FastDrawing, bool EnableAlpha, bool UseDisplayAR, TIEDrawMode DrawMode, bool EnlargeOnly = false);
	virtual void __fastcall CopyToBitmapEx(Iexbitmaps::TIEBitmap* &Dest, int CreateWidth, int CreateHeight, bool FastDrawing, bool EnableAlpha, bool UseDisplayAR, TIEDrawMode DrawMode, bool EnlargeOnly = false);
	virtual System::UnicodeString __fastcall GetAsSVG();
	void __fastcall SetFont(Vcl::Graphics::TFont* const Value);
	void __fastcall FontChanged(System::TObject* Sender);
	void __fastcall SetText(const System::UnicodeString Value);
	void __fastcall SetRichText(const System::UnicodeString Value);
	void __fastcall SetEnableFormatting(const bool Value);
	void __fastcall SetAutoSize(const bool Value);
	void __fastcall SetReadOnly(const bool Value);
	void __fastcall SetTextOverflow(TIETextOverflow Value);
	void __fastcall SetWordWrap(const bool Value);
	void __fastcall SetBorderShape(const Hyiedefs::TIEShape Value);
	void __fastcall SetBorderRotate(const double Value);
	void __fastcall SetAlignment(Hyiedefs::TIEAlignment value);
	void __fastcall SetLayout(const Hyiedefs::TIELayout v);
	void __fastcall SetTextStyling(Iegdiplus::TIECanvasTextStyling* const v);
	void __fastcall SetHorzMargin(double v);
	void __fastcall SetVertMargin(double v);
	void __fastcall SetTextOffsetX(double v);
	void __fastcall SetTextOffsetY(double v);
	
public:
	__property Hyiedefs::TIEAlignment Alignment = {read=fAlignment, write=SetAlignment, nodefault};
	__property Hyiedefs::TIELayout Layout = {read=fLayout, write=SetLayout, nodefault};
	__property double BorderRotate = {read=fBorderRotate, write=SetBorderRotate};
	__property bool AutoSize = {read=fAutoSize, write=SetAutoSize, nodefault};
	__property System::UnicodeString Text = {read=fText, write=SetText};
	__property System::UnicodeString RichText = {read=fRichText, write=SetRichText};
	__property bool EnableFormatting = {read=fEnableFormatting, write=SetEnableFormatting, nodefault};
	bool __fastcall IsFormatted();
	__property Vcl::Graphics::TFont* Font = {read=fFont, write=SetFont};
	__property Hyiedefs::TIEShape BorderShape = {read=fBorderShape, write=SetBorderShape, nodefault};
	__property bool ReadOnly = {read=fReadOnly, write=SetReadOnly, nodefault};
	__property TIETextOverflow TextOverflow = {read=fTextOverflow, write=SetTextOverflow, nodefault};
	__property Iegdiplus::TIECanvasTextStyling* TextStyling = {read=fTextStyling, write=SetTextStyling};
	__property bool WordWrap = {read=fWordWrap, write=SetWordWrap, nodefault};
	__property double HorzMargin = {read=fHorzMargin, write=SetHorzMargin};
	__property double VertMargin = {read=fVertMargin, write=SetVertMargin};
	__property double TextOffsetX = {read=fTextOffsetX, write=SetTextOffsetX};
	__property double TextOffsetY = {read=fTextOffsetY, write=SetTextOffsetY};
	void __fastcall ActivateEditor();
	void __fastcall SizeToText(bool EnlargeOnly = false);
	void __fastcall LoadTextFromFile(const System::UnicodeString Filename);
	__fastcall virtual TIETextLayer(System::TObject* Owner);
	__fastcall virtual ~TIETextLayer();
	virtual void __fastcall CopyToBitmap(Iexbitmaps::TIEBitmap* &Dest, int CreateWidth = 0xffffffff, int CreateHeight = 0xffffffff, bool EnableAlpha = true, bool UseDisplayAR = true);
	virtual void __fastcall LoadFromStream(System::Classes::TStream* Stream);
	virtual void __fastcall SaveToStream(System::Classes::TStream* Stream, bool MetaOnly = false, int CompressionFormat = 0xfffffffe);
	virtual bool __fastcall AddToPDF(Iepdf::TIEPDFBuilder* Dest);
	__property int TextDrawFontHeight = {read=fTextDrawFontH, nodefault};
};


#pragma pack(push,1)
struct DECLSPEC_DRECORD TLayerHeader
{
public:
	System::StaticArray<char, 13> Magic;
	int Version;
	int FileFormat;
	int LayersCount;
};
#pragma pack(pop)


//-- var, const, procedure ---------------------------------------------------
#define IELP_Width L"IELP_Width"
#define IELP_Height L"IELP_Height"
#define IELP_Visible L"IELP_Visible"
#define IELP_VisibleBox L"IELP_VisibleBox"
#define IELP_Selectable L"IELP_Selectable"
#define IELP_Transparency L"IELP_Transparency"
#define IELP_Opacity L"IELP_Opacity"
#define IELP_FillOpacity L"IELP_FillOpacity"
#define IELP_PosX L"IELP_PosX"
#define IELP_PosY L"IELP_PosY"
#define IELP_Cropped L"IELP_Cropped"
#define IELP_Locked L"IELP_Locked"
#define IELP_Operation L"IELP_Operation"
#define IELP_Name L"IELP_Name"
#define IELP_URL L"IELP_URL"
#define IELP_Hint L"IELP_Hint"
#define IELP_IsMask L"IELP_IsMask"
#define IELP_MaskInverted L"IELP_MaskInverted"
#define IELP_DrawOuter L"IELP_DrawOuter"
#define IELP_AlphaEdgeFeathering L"IELP_AlphaEdgeFeathering"
#define IELP_GroupIndex L"IELP_GroupIndex"
#define IELP_Selected L"IELP_Selected"
#define IELP_AspectRatioLocked L"IELP_AspectRatioLocked"
#define IELP_BorderColor L"IELP_BorderColor"
#define IELP_BorderWidth L"IELP_BorderWidth"
#define IELP_FillColor L"IELP_FillColor"
#define IELP_FillColor2 L"IELP_FillColor2"
#define IELP_FillGradient L"IELP_FillGradient"
#define IELP_Rotate L"IELP_Rotate"
#define IELP_RotateCenterX L"IELP_RotateCenterX"
#define IELP_RotateCenterY L"IELP_RotateCenterY"
#define IELP_SoftShadowEnabled L"IELP_SoftShadowEnabled"
#define IELP_SoftShadowRadius L"IELP_SoftShadowRadius"
#define IELP_SoftShadowOffsetX L"IELP_SoftShadowOffsetX"
#define IELP_SoftShadowOffsetY L"IELP_SoftShadowOffsetY"
#define IELP_SoftShadowIntensity L"IELP_SoftShadowIntensity"
#define IELP_SoftShadowColor L"IELP_SoftShadowColor"
#define IELP_InnerGlowEnabled L"IELP_InnerGlowEnabled"
#define IELP_InnerGlowRadius L"IELP_InnerGlowRadius"
#define IELP_InnerGlowOffsetX L"IELP_InnerGlowOffsetX"
#define IELP_InnerGlowOffsetY L"IELP_InnerGlowOffsetY"
#define IELP_InnerGlowColor L"IELP_InnerGlowColor"
#define IELP_ImageResampleFilter L"IELP_ImageResampleFilter"
#define IELP_ImageUseResampleFilter L"IELP_ImageUseResampleFilter"
#define IELP_Shape L"IELP_Shape"
#define IELP_ShapeModifier L"IELP_ShapeModifier"
#define IELP_LineColor L"IELP_LineColor"
#define IELP_LineWidth L"IELP_LineWidth"
#define IELP_LineFillColor L"IELP_LineFillColor"
#define IELP_LabelText L"IELP_LabelText"
#define IELP_LabelAlignment L"IELP_LabelAlignment"
#define IELP_LabelPosition L"IELP_LabelPosition"
#define IELP_LabelColor L"IELP_LabelColor"
#define IELP_LabelWidth L"IELP_LabelWidth"
#define IELP_LineStartShape L"IELP_LineStartShape"
#define IELP_LineEndShape L"IELP_LineEndShape"
#define IELP_LineShapeSize L"IELP_LineShapeSize"
#define IELP_LineCurve L"IELP_LineCurve"
#define IELP_LineLength L"IELP_LineLength"
#define IELP_LinePoints L"IELP_LinePoints"
#define IELP_PolylinePoints L"IELP_PolylinePoints"
#define IELP_PolylineClosed L"IELP_PolylineClosed"
#define IELP_FontName L"IELP_FontName"
#define IELP_FontSize L"IELP_FontSize"
#define IELP_FontColor L"IELP_FontColor"
#define IELP_BorderShape L"IELP_BorderShape"
#define IELP_HorzMargin L"IELP_HorzMargin"
#define IELP_VertMargin L"IELP_VertMargin"
#define IELP_Text L"IELP_Text"
#define IELP_AutoSize L"IELP_AutoSize"
#define IELP_ReadOnly L"IELP_ReadOnly"
#define IELP_TextAlignment L"IELP_TextAlignment"
#define IELP_TextLayout L"IELP_TextLayout"
#define IELP_AntiAlias L"IELP_AntiAlias"
#define IELP_SizeToFit L"IELP_SizeToFit"
#define IELP_RestoreSize L"IELP_RestoreSize"
#define IELP_RestoreAspectRatio L"IELP_RestoreAspectRatio"
#define IELP_RestorePreferredAspectRatio L"IELP_RestorePreferredAspectRatio"
#define IELP_IsRuler L"IELP_IsRuler"
#define IELP_RulerMode L"IELP_RulerMode"
#define IELP_RulerUnits L"IELP_RulerUnits"
#define IELP_WordWrap L"IELP_WordWrap"
#define IELP_TextOverflow L"IELP_TextOverflow"
#define IELP_BorderRotate L"IELP_BorderRotate"
#define IELP_StartAngle L"IELP_StartAngle"
#define IELP_EndAngle L"IELP_EndAngle"
#define IELP_AngleMode L"IELP_AngleMode"
#define IELP_AnglePoints L"IELP_AnglePoints"
#define IELP_InvertAngle L"IELP_InvertAngle"
#define IELP_IncreaseAngle L"IELP_IncreaseAngle"
#define IELP_DecreaseAngle L"IELP_DecreaseAngle"
#define IELP_EnableFormatting L"IELP_EnableFormatting"
#define IELP_RichText L"IELP_RichText"
#define IELP_Flip L"IELP_Flip"
#define IELP_TextOffsetX L"IELP_TextOffsetX"
#define IELP_TextOffsetY L"IELP_TextOffsetY"
#define IELP_TextBorderWidth L"IELP_TextBorderWidth"
#define IELP_TextBorderColor L"IELP_TextBorderColor"
#define IELP_TextBorderLineJoin L"IELP_TextBorderLineJoin"
#define IELP_TextFillTransparency1 L"IELP_TextFillTransparency1"
#define IELP_TextFillTransparency2 L"IELP_TextFillTransparency2"
#define IELP_TextFillColor2 L"IELP_TextFillColor2"
#define IELP_TextFillGradient L"IELP_TextFillGradient"
#define IELP_LAYER_CACHE_CLEAR L"IELP_LAYER_CACHE_CLEAR"
static const System::Word IELayers_File_Version = System::Word(0x2775);
static const System::Int8 IELayers_Thumbnail_Format = System::Int8(0x3);
extern DELPHI_PACKAGE System::AnsiString IELayers_File_Magic;
static const int IELayer_Pos_Left = int(0x7ffffff4);
static const int IELayer_Pos_HCenter = int(0x7ffffff5);
static const int IELayer_Pos_Right = int(0x7ffffff6);
static const int IELayer_Pos_Top = int(0x7ffffff4);
static const int IELayer_Pos_VCenter = int(0x7ffffff5);
static const int IELayer_Pos_Bottom = int(0x7ffffff6);
extern DELPHI_PACKAGE void __fastcall IECleanupLayers(void);
extern DELPHI_PACKAGE void __fastcall IELayersMerge(TIELayer* Layer1, TIELayer* Layer2, TIELayer* LayerMask, Iexbitmaps::TIEBitmap* Destination, Hyiedefs::TResampleFilter ZoomFilter, System::Uitypes::TColor Background, bool RelativePositions, bool ForceCropLayer2 = false);
extern DELPHI_PACKAGE bool __fastcall IETryIEN(System::Classes::TStream* Stream);
extern DELPHI_PACKAGE void __fastcall IEDrawLineEndShapeToComboListBoxItem(Vcl::Graphics::TCanvas* ControlCanvas, const System::Types::TRect &CanvasRect, bool ControlEnabled, TIELineEndShape Shape, System::Uitypes::TColor PenColor, System::Uitypes::TColor FillColor, bool ShowText = true, bool PointRight = true);
extern DELPHI_PACKAGE void __fastcall ReadLayerPropsFromStream(System::Classes::TStream* Stream, bool ResetPos, /* out */ int &RecSize, /* out */ TIELayerKind &LayerKind, /* out */ GUID &GUID);
extern DELPHI_PACKAGE Hyiedefs::TIEArrayOfTPoint __fastcall IESimplifyPolygon(double tol, System::Types::TPoint *V, const int V_High);
extern DELPHI_PACKAGE int __fastcall IEFitLines(const TEdgelist &el, bool Pretest, bool TryAllEndPts, Hyiedefs::PPointArray lines, int MaxNLine);
}	/* namespace Iexlayers */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_IEXLAYERS)
using namespace Iexlayers;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// IexlayersHPP
