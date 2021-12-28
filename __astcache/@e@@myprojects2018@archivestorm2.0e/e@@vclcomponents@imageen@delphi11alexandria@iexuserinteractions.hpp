// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'iexUserInteractions.pas' rev: 35.00 (Windows)

#ifndef IexuserinteractionsHPP
#define IexuserinteractionsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <iexPdfiumCore.hpp>
#include <iexPdfiumLib.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Clipbrd.hpp>
#include <Vcl.StdCtrls.hpp>
#include <ieview.hpp>
#include <iexBitmaps.hpp>
#include <hyiedefs.hpp>
#include <hyieutils.hpp>
#include <iegdiplus.hpp>
#include <imageenproc.hpp>
#include <iexLayers.hpp>
#include <Vcl.Dialogs.hpp>
#include <System.UITypes.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

namespace Iexuserinteractions
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TIEUserInteraction;
class DELPHICLASS TIECropToolInteraction;
class DELPHICLASS TIEPenOptions;
class DELPHICLASS TIECursorToolInteraction;
class DELPHICLASS TIEBrushToolInteraction;
class DELPHICLASS TIERetouchToolInteraction;
class DELPHICLASS TIECloneToolInteraction;
class DELPHICLASS TIEFillToolInteraction;
class DELPHICLASS TIERotateToolInteraction;
class DELPHICLASS TIELayerCreateInteraction;
class DELPHICLASS TIELayerPointsInteraction;
class DELPHICLASS TIEButtonInteraction;
struct TIEPdfAttachment;
struct TIEPDFMetaData;
class DELPHICLASS TIEPdfViewerInteraction;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TIEUserInteractionEvent : unsigned char { ieiCropCreating, ieiCropSizing, ieiCropMoving, ieiCropRotating, ieiCropEnacted, ieiCropCanceled, ieiPaintStart, ieiPainting, ieiPaintEnd, ieiPaintCanceled, ieiCloneStart, ieiCloning, ieiCloneEnd, ieiCloneCanceled, ieiRetouchStart, ieiRetouching, ieiRetouchEnd, ieiRetouchCanceled, ieiRotateStart, ieiRotating, ieiRotateEnd, ieiFlipped, ieiRotateCanceled, ieiLayerCreateStart, ieiLayerCreating, ieiLayerCreateEnacted, ieiLayerCreateCanceled, ieiLayerPointsStart, ieiLayerPointAdded, ieiLayerPointMoving, ieiLayerPointRemoved, ieiLayerPointsCreated, ieiLayerPointsEdited, ieiLayerPointsCanceled, ieiMeasuringLength, ieiMeasuringArea, ieiColorFill, ieiAlphaFill, ieiColorPickerHover, ieiColorPickerClick, 
	ieiPdfAction, ieiPdfDocChanged, ieiPdfFormChanged, ieiPdfFieldChanged, ieiPdfDocLoaded, ieiPdfPageLoaded, ieiPdfError, ieiPdfViewChanged, ieiPdfSelChanged, ieiPdfClickedLink, ieiPdfFieldEnter, ieiPdfFieldLeave, ieiPdfHoverText, ieiPdfHoverLink, ieiPdfHoverField, ieiPdfHoverOther, ieiPdfPrintPage, ieiPdfPrintEnd };

enum DECLSPEC_DENUM Iexuserinteractions__1 : unsigned char { ieccBackground, ieccChromaKeyColor, ieccBrushColor, ieccFillColor, ieccRotateBackground, ieccLayerBorder, ieccLayerFill };

typedef System::Set<Iexuserinteractions__1, Iexuserinteractions__1::ieccBackground, Iexuserinteractions__1::ieccLayerFill> TIEColorSelectActions;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEUserInteraction : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	bool fEnabled;
	bool fOwnChanges;
	bool fCancelOnModeChange;
	virtual void __fastcall SetEnabled(const bool Value);
	
protected:
	Ieview::TIEView* fParent;
	void __fastcall DoNotify(TIEUserInteractionEvent Event, int Info = 0x0);
	void __fastcall SetTempCursor(System::Uitypes::TCursor Value);
	void __fastcall RestoreCursor();
	
public:
	__property bool Enabled = {read=fEnabled, write=SetEnabled, nodefault};
	__fastcall TIEUserInteraction(Ieview::TIEView* Parent);
	__fastcall virtual ~TIEUserInteraction();
	virtual bool __fastcall MouseDownExclusive(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual bool __fastcall MouseMoveExclusive(System::Classes::TShiftState Shift, int X, int Y, bool Captured);
	virtual void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y, bool Captured);
	virtual bool __fastcall MouseUpExclusive(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall MouseLeave();
	virtual void __fastcall VirtualKey(unsigned VKey, unsigned KeyData, bool KeyDown);
	virtual bool __fastcall DoubleClickExclusive(int X, int Y);
	virtual void __fastcall PaintBackBuffer(Iexbitmaps::TIEBitmap* BackBuffer);
	virtual void __fastcall PaintRect(const System::Types::TRect &UpdateRect);
	virtual bool __fastcall PaintRectExclusive(const System::Types::TRect &UpdateRect);
	virtual bool __fastcall NeedBackBufferUpdate();
	virtual bool __fastcall NeedLayerBox(int idx);
	virtual void __fastcall ImageChanged();
	virtual bool __fastcall Enact();
	virtual void __fastcall Cancel();
	virtual void __fastcall Reset();
	void __fastcall Refresh();
	__property bool CancelOnModeChange = {read=fCancelOnModeChange, nodefault};
};

#pragma pack(pop)

enum DECLSPEC_DENUM TIECropToolInteractionState : unsigned char { iectisUNSELECTED, iectisCREATING, iectisSELECTED, iectisTOP_LEFT_SIZE, iectisTOP_SIZE, iectisTOP_RIGHT_SIZE, iectisRIGHT_SIZE, iectisBOTTOM_RIGHT_SIZE, iectisBOTTOM_SIZE, iectisBOTTOM_LEFT_SIZE, iectisLEFT_SIZE, iectisROTATE, iectisMOVING };

enum DECLSPEC_DENUM TIECropToolInteractionMode : unsigned char { iectmRECTANGLE, iectmPERSPECTIVE };

enum DECLSPEC_DENUM Iexuserinteractions__3 : unsigned char { iecoAllowResizing, iecoAllowRotating, iecoAllowMoving, iecoSideGripsRespectLocks, iecoSizeLocksAreMinimums, iecoLimitToBounds, iecoAllowPerspectiveWraps, iecoRotationGrip };

typedef System::Set<Iexuserinteractions__3, Iexuserinteractions__3::iecoAllowResizing, Iexuserinteractions__3::iecoRotationGrip> TIECropToolOptions;

class PASCALIMPLEMENTATION TIECropToolInteraction : public TIEUserInteraction
{
	typedef TIEUserInteraction inherited;
	
private:
	Hyiedefs::TIEDPointArray fScreenPolygon;
	Hyiedefs::TIEDPointArray fBitmapPolygon;
	Hyiedefs::TIEDPointArray fRotatedPolygon;
	double fRotation;
	TIECropToolInteractionState fState;
	bool fSelectionValid;
	System::Types::TPoint fMouseDownCoords;
	Hyiedefs::TIEDPointArray fMouseDownScreenPolygon;
	double fMouseDownRotation;
	Hyiedefs::TIEDPointArray fMouseDownRotatedPolygon;
	System::StaticArray<System::StaticArray<System::Types::TPoint, 2>, 9> fGripRects;
	double fAspectRatio;
	TIECropToolOptions fOptions;
	bool fDrawGuides;
	int fGripSize;
	Hyiedefs::TIEAntialiasMode fAntialiasMode;
	TIECropToolInteractionMode fMode;
	double fLockAspectRatio;
	int fLockWidth;
	int fLockHeight;
	TIECropToolInteractionState __fastcall GetGrip(int x, int y);
	double __fastcall ScreenToBitmapX(const double X);
	double __fastcall ScreenToBitmapY(const double Y);
	double __fastcall BitmapToScreenX(const double X);
	double __fastcall BitmapToScreenY(const double Y);
	void __fastcall UpdateBitmapPolygon();
	void __fastcall UpdateScreenPolygon();
	void __fastcall UpdateRotatedPolygon();
	void __fastcall UpdateGrips();
	Hyiedefs::TIEDPointArray __fastcall GetRotatedBitmapPolygon();
	void __fastcall SetMode(const TIECropToolInteractionMode Value);
	void __fastcall AdjustAspectRatio(Hyiedefs::TIEDPointArray quad, TIECropToolInteractionState grip);
	bool __fastcall GetSelected();
	void __fastcall SetSelected(const bool Value);
	void __fastcall ResetState();
	void __fastcall LimitToBoundsWithAspectRatio(const Hyiedefs::TDPoint &p0, const Hyiedefs::TDPoint &p1, Hyiedefs::TDPoint &newPoint);
	void __fastcall LimitToBounds(Hyiedefs::TIEDPointArray quad)/* overload */;
	void __fastcall LimitToBounds(int &X, int &Y)/* overload */;
	Hyiedefs::TIEDPointArray __fastcall GetBoundsRect();
	int __fastcall GetGripSize();
	
public:
	__fastcall TIECropToolInteraction(Ieview::TIEView* Parent);
	__property int GripSize = {read=GetGripSize, write=fGripSize, nodefault};
	__property bool DrawGuides = {read=fDrawGuides, write=fDrawGuides, nodefault};
	__property double LockAspectRatio = {read=fLockAspectRatio, write=fLockAspectRatio};
	__property int LockWidth = {read=fLockWidth, write=fLockWidth, nodefault};
	__property int LockHeight = {read=fLockHeight, write=fLockHeight, nodefault};
	__property Hyiedefs::TIEDPointArray BitmapPolygon = {read=fBitmapPolygon};
	__property Hyiedefs::TIEDPointArray RotatedBitmapPolygon = {read=GetRotatedBitmapPolygon};
	void __fastcall SetBitmapPolygon(const System::Types::TRect &Rect);
	__property Hyiedefs::TIEDPointArray ScreenPolygon = {read=fScreenPolygon};
	__property Hyiedefs::TIEDPointArray RotatedPolygon = {read=fRotatedPolygon};
	__property double Rotation = {read=fRotation, write=fRotation};
	__property Hyiedefs::TIEAntialiasMode AntialiasMode = {read=fAntialiasMode, write=fAntialiasMode, nodefault};
	__property TIECropToolInteractionMode Mode = {read=fMode, write=SetMode, nodefault};
	__property TIECropToolOptions Options = {read=fOptions, write=fOptions, nodefault};
	__property TIECropToolInteractionState State = {read=fState, nodefault};
	__property bool Selected = {read=GetSelected, write=SetSelected, nodefault};
	virtual bool __fastcall Enact();
	void __fastcall Crop _DEPRECATED_ATTRIBUTE1("Use CropTool.Enact() instead - http://imageen.com/help/Compatibility.html") ();
	virtual bool __fastcall MouseDownExclusive(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual bool __fastcall MouseMoveExclusive(System::Classes::TShiftState Shift, int X, int Y, bool Captured);
	virtual void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall VirtualKey(unsigned VKey, unsigned KeyData, bool KeyDown);
	virtual bool __fastcall NeedBackBufferUpdate();
	virtual void __fastcall PaintBackBuffer(Iexbitmaps::TIEBitmap* BackBuffer);
	virtual void __fastcall Cancel();
	virtual void __fastcall Reset();
public:
	/* TIEUserInteraction.Destroy */ inline __fastcall virtual ~TIECropToolInteraction() { }
	
};


enum DECLSPEC_DENUM TIEBrushFill : unsigned char { iebfSolid, iebfGradient, iebfSpray, iebfTextured, iebfCenteredTexture, iebfTexturedSpray, iebfImage, iebfEraser, iebfSmartEraser };

enum DECLSPEC_DENUM TIEPaintMode : unsigned char { iepmContinuous, iepmDiscrete, iepmStamp };

class PASCALIMPLEMENTATION TIEPenOptions : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Hyiedefs::TIEEnabled fBrushSizeEnabled;
	double fBrushSizeStrength;
	Hyiedefs::TIEEnabled fOpacityEnabled;
	double fOpacityStrength;
	
public:
	__property Hyiedefs::TIEEnabled BrushSizeEnabled = {read=fBrushSizeEnabled, write=fBrushSizeEnabled, nodefault};
	__property double BrushSizeStrength = {read=fBrushSizeStrength, write=fBrushSizeStrength};
	__property Hyiedefs::TIEEnabled OpacityEnabled = {read=fOpacityEnabled, write=fOpacityEnabled, nodefault};
	__property double OpacityStrength = {read=fOpacityStrength, write=fOpacityStrength};
public:
	/* TObject.Create */ inline __fastcall TIEPenOptions() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TIEPenOptions() { }
	
};


enum DECLSPEC_DENUM TIETransparencyMode : unsigned char { ietmCompositing, ietmReplace };

enum DECLSPEC_DENUM TIERetouchMode : unsigned char { iermSmudge, iermBlur, iermMotionBlur, iermAutoSharpen, iermSharpen, iermUnsharpen, iermSmooth, iermPixelize, iermBrightness, iermSaturation, iermWave, iermPencilSketch, iermIEVisionInpaint, iermIEVisionSmooth, iermCustom };

enum DECLSPEC_DENUM TIECloneToolInteractionState : unsigned char { ieclUnselected, ieclSourceSelected, ieclDestSelected };

class PASCALIMPLEMENTATION TIECursorToolInteraction : public TIEUserInteraction
{
	typedef TIEUserInteraction inherited;
	
private:
	bool __fastcall DoMouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	bool __fastcall DoMouseMove(System::Classes::TShiftState Shift, int X, int Y, bool Captured);
	bool __fastcall DoMouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	
protected:
	Iexbitmaps::TIEBitmap* fCurrentOverlay;
	System::Types::TPoint fCurrentOverlayPos;
	TIEPaintMode fPaintMode;
	System::Types::TPoint fSnapOffset;
	System::Types::TPoint fStartPaintPt;
	System::Types::TPoint fLastPaintPt;
	System::Types::TPoint fLastStepPt;
	Ieview::TIECursorShape fBrushShape;
	System::Types::TPoint fBrushSize;
	int fFeathering;
	int fTransparency;
	TIETransparencyMode fTransparencyMode;
	Hyieutils::TIERenderOperation fOperation;
	int fPenCurrentSizePressure;
	int fPenCurrentOpacPressure;
	bool fPenMode;
	unsigned fPenModeLast;
	TIEPenOptions* fPenEffects;
	TIEBrushFill fBrushFill;
	System::Uitypes::TColor fBrushColor;
	System::Uitypes::TColor fBrushColor2;
	Iexbitmaps::TIEBitmap* fBrushImage;
	bool fBrushImageSizeLocked;
	double fEraserOpacity;
	Hyiedefs::TIEEnabled fRightButtonEraser;
	bool fTemporaryEraseMode;
	Hyiedefs::TRGB fEraserKeyColor;
	double fBrushSprayDensity;
	int fBrushTextureAlphaMin;
	int fBrushTextureAlphaMax;
	int fBrushStep;
	double fBrushRotate;
	Hyiedefs::TIEGDIPlusGradient fBrushGradient;
	bool fBrushAntiAlias;
	Iexbitmaps::TIEBitmap* fBrushTempSrc;
	TIERetouchMode fRetouchMode;
	System::Types::TPoint fSmudgePreviousPt;
	int fSmudgePressure;
	double fSmudgeBlur;
	int fInpaintRangeSize;
	int fInpaintMethod;
	int fPixelizeBlockSize;
	int fMotionBlurRadius;
	TIECloneToolInteractionState fCloneState;
	System::Types::TPoint fCloneSourcePt;
	System::Types::TPoint fCloneSourceOffset;
	System::Types::TRect fCloneLastSourceRect;
	bool fClipToBounds;
	void __fastcall BrushImageChanged(System::TObject* Sender);
	virtual void __fastcall ApplyRetouchToBitmap(Iexbitmaps::TIEBitmap* Bmp);
	void __fastcall _Clone_PaintToOverlay(int PaintX, int PaintY, int PaintWidth, int PaintHeight);
	virtual void __fastcall SetEnabled(const bool Value);
	void __fastcall SetBrushShape(const Ieview::TIECursorShape Value);
	void __fastcall SetBrushSize(const int Value);
	void __fastcall SetBrushHeight(const int Value);
	void __fastcall SetBrushWidth(const int Value);
	int __fastcall GetBrushSize();
	int __fastcall GetBrushHeight();
	int __fastcall GetBrushWidth();
	void __fastcall ResetOverlay();
	void __fastcall UpdateCursor();
	Ieview::TIECursorShape __fastcall CurrentBrushShape();
	TIEBrushFill __fastcall CurrentBrushFill();
	System::Types::TRect __fastcall UpdateOverlay(int DestX, int DestY);
	void __fastcall PaintToOverlay(int PaintX, int PaintY, int PaintWidth, int PaintHeight);
	System::Types::TRect __fastcall StartPainting(int BmpX, int BmpY, bool FirstPaint = true);
	System::Types::TRect __fastcall AddToPainting(int BmpX, int BmpY);
	System::Types::TRect __fastcall EndPainting();
	bool __fastcall IsBrushMode();
	bool __fastcall IsCloneMode();
	bool __fastcall IsRetouchMode();
	
public:
	__fastcall TIECursorToolInteraction(Ieview::TIEView* Parent);
	__fastcall virtual ~TIECursorToolInteraction();
	__property Ieview::TIECursorShape BrushShape = {read=fBrushShape, write=SetBrushShape, nodefault};
	__property int BrushSize = {read=GetBrushSize, write=SetBrushSize, nodefault};
	__property int BrushHeight = {read=GetBrushHeight, write=SetBrushHeight, nodefault};
	__property int BrushWidth = {read=GetBrushWidth, write=SetBrushWidth, nodefault};
	__property int Feathering = {read=fFeathering, write=fFeathering, nodefault};
	__property int Transparency = {read=fTransparency, write=fTransparency, nodefault};
	__property Hyieutils::TIERenderOperation Operation = {read=fOperation, write=fOperation, nodefault};
	__property TIEPaintMode PaintMode = {read=fPaintMode, write=fPaintMode, nodefault};
	__property TIEPenOptions* PenEffects = {read=fPenEffects};
	Iexbitmaps::TIEBitmap* __fastcall GetBrushPreview()/* overload */;
	Iexbitmaps::TIEBitmap* __fastcall GetBrushPreview(int Width, int Height, TIEBrushFill BrushFill, Ieview::TIECursorShape BrushShape, System::Uitypes::TColor Color1, System::Uitypes::TColor Color2, Hyiedefs::TIEGDIPlusGradient BrushGradient = (Hyiedefs::TIEGDIPlusGradient)(0x0), double BrushRotate = 0.000000E+00, Iexbitmaps::TIEBitmap* BrushImage = (Iexbitmaps::TIEBitmap*)(0x0), int Feathering = 0xffffffff, double BrushSprayDensity = -1.000000E+00, int BrushTextureAlphaMin = 0xffffffff, int BrushTextureAlphaMax = 0xffffffff)/* overload */;
	int __fastcall CurrentBrushSizeX();
	int __fastcall CurrentBrushSizeY();
	double __fastcall CurrentOpacity();
	virtual bool __fastcall NeedBackBufferUpdate();
	virtual bool __fastcall MouseDownExclusive(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual bool __fastcall MouseMoveExclusive(System::Classes::TShiftState Shift, int X, int Y, bool Captured);
	virtual bool __fastcall MouseUpExclusive(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall PointerEvent(Ieview::TIEPointerEventType Event, System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y, int Pressure);
	virtual void __fastcall PaintBackBuffer(Iexbitmaps::TIEBitmap* BackBuffer);
	virtual void __fastcall VirtualKey(unsigned VKey, unsigned KeyData, bool KeyDown);
};


class PASCALIMPLEMENTATION TIEBrushToolInteraction : public TIECursorToolInteraction
{
	typedef TIECursorToolInteraction inherited;
	
private:
	void __fastcall SetBrushRotate(const double v);
	void __fastcall SetBrushFill(const TIEBrushFill v);
	
public:
	HIDESBASE System::Types::TRect __fastcall StartPainting(int BmpX, int BmpY);
	HIDESBASE System::Types::TRect __fastcall AddToPainting(int BmpX, int BmpY);
	HIDESBASE System::Types::TRect __fastcall EndPainting();
	__property TIEBrushFill BrushFill = {read=fBrushFill, write=SetBrushFill, nodefault};
	__property double BrushRotate = {read=fBrushRotate, write=SetBrushRotate};
	__property bool AntiAlias = {read=fBrushAntiAlias, write=fBrushAntiAlias, nodefault};
	__property Hyiedefs::TIEGDIPlusGradient BrushGradient = {read=fBrushGradient, write=fBrushGradient, nodefault};
	__property System::Uitypes::TColor BrushColor = {read=fBrushColor, write=fBrushColor, nodefault};
	__property System::Uitypes::TColor BrushColor2 = {read=fBrushColor2, write=fBrushColor2, nodefault};
	__property Iexbitmaps::TIEBitmap* BrushImage = {read=fBrushImage, write=fBrushImage};
	__property bool BrushImageSizeLocked = {read=fBrushImageSizeLocked, write=fBrushImageSizeLocked, nodefault};
	__property int BrushStep = {read=fBrushStep, write=fBrushStep, nodefault};
	__property double SprayDensity = {read=fBrushSprayDensity, write=fBrushSprayDensity};
	__property int AlphaTextureMin = {read=fBrushTextureAlphaMin, write=fBrushTextureAlphaMin, nodefault};
	__property int AlphaTextureMax = {read=fBrushTextureAlphaMax, write=fBrushTextureAlphaMax, nodefault};
	__property TIETransparencyMode TransparencyMode = {read=fTransparencyMode, write=fTransparencyMode, nodefault};
	__property double EraserOpacity = {read=fEraserOpacity, write=fEraserOpacity};
	__property Hyiedefs::TIEEnabled RightButtonEraser = {read=fRightButtonEraser, write=fRightButtonEraser, nodefault};
	virtual void __fastcall Cancel();
	virtual void __fastcall Reset();
public:
	/* TIECursorToolInteraction.Create */ inline __fastcall TIEBrushToolInteraction(Ieview::TIEView* Parent) : TIECursorToolInteraction(Parent) { }
	/* TIECursorToolInteraction.Destroy */ inline __fastcall virtual ~TIEBrushToolInteraction() { }
	
};


class PASCALIMPLEMENTATION TIERetouchToolInteraction : public TIECursorToolInteraction
{
	typedef TIECursorToolInteraction inherited;
	
private:
	void __fastcall SetRetouchMode(TIERetouchMode v);
	
protected:
	virtual void __fastcall ApplyRetouchToBitmap(Iexbitmaps::TIEBitmap* Bmp);
	
public:
	double BlurRadius;
	double MotionBlurAngle;
	int MotionBlurSigma;
	int AutoSharpenIntensity;
	double AutoSharpenRate;
	int SharpenIntensity;
	int SharpenNeighbourhood;
	double UnsharpenRadius;
	double UnsharpenAmount;
	double UnsharpenThreshold;
	int SmoothRadius;
	int BrightnessAdjustment;
	int SaturationAmount;
	int WaveAmplitude;
	int WaveLength;
	int WavePhase;
	bool PencilSketchGray;
	int PencilSketchLevels;
	double PencilSketchThickness;
	double PencilSketchAlpha;
	double PencilSketchDensity;
	double DenoiseFilterStrength;
	__fastcall TIERetouchToolInteraction(Ieview::TIEView* Parent);
	__property TIERetouchMode RetouchMode = {read=fRetouchMode, write=SetRetouchMode, nodefault};
	__property int SmudgePressure = {read=fSmudgePressure, write=fSmudgePressure, nodefault};
	__property double SmudgeBlur = {read=fSmudgeBlur, write=fSmudgeBlur};
	__property int InpaintRangeSize = {read=fInpaintRangeSize, write=fInpaintRangeSize, nodefault};
	__property int InpaintMethod = {read=fInpaintMethod, write=fInpaintMethod, nodefault};
	__property int PixelizeBlockSize = {read=fPixelizeBlockSize, write=fPixelizeBlockSize, nodefault};
	__property int MotionBlurRadius = {read=fMotionBlurRadius, write=fMotionBlurRadius, nodefault};
	HIDESBASE System::Types::TRect __fastcall StartPainting(int BmpX, int BmpY);
	HIDESBASE System::Types::TRect __fastcall AddToPainting(int BmpX, int BmpY);
	HIDESBASE System::Types::TRect __fastcall EndPainting();
	virtual void __fastcall Cancel();
	virtual void __fastcall Reset();
public:
	/* TIECursorToolInteraction.Destroy */ inline __fastcall virtual ~TIERetouchToolInteraction() { }
	
};


class PASCALIMPLEMENTATION TIECloneToolInteraction : public TIECursorToolInteraction
{
	typedef TIECursorToolInteraction inherited;
	
private:
	void __fastcall SetCloneSourceOffset(const System::Types::TPoint &Value);
	void __fastcall SetCloneSourcePt(const System::Types::TPoint &Value);
	bool __fastcall GetSourceSelected();
	bool __fastcall GetContinuous();
	void __fastcall SetContinuous(const bool Value);
	
public:
	__property int CursorSize = {read=GetBrushSize, write=SetBrushSize, nodefault};
	__property Ieview::TIECursorShape CursorShape = {read=fBrushShape, write=SetBrushShape, nodefault};
	__property bool Continuous = {read=GetContinuous, write=SetContinuous, nodefault};
	__property System::Types::TPoint SourcePoint = {read=fCloneSourcePt, write=SetCloneSourcePt};
	__property bool SourceSelected = {read=GetSourceSelected, nodefault};
	__property System::Types::TPoint SourceOffset = {read=fCloneSourceOffset, write=SetCloneSourceOffset};
	__property bool ClipToBounds = {read=fClipToBounds, write=fClipToBounds, nodefault};
	bool __fastcall StartCloning(int BmpX, int BmpY);
	bool __fastcall AddToCloning(int BmpX, int BmpY);
	bool __fastcall EndCloning(bool DeselectAfter = true);
	virtual void __fastcall PaintRect(const System::Types::TRect &UpdateRect);
	virtual void __fastcall Cancel();
	virtual void __fastcall Reset();
public:
	/* TIECursorToolInteraction.Create */ inline __fastcall TIECloneToolInteraction(Ieview::TIEView* Parent) : TIECursorToolInteraction(Parent) { }
	/* TIECursorToolInteraction.Destroy */ inline __fastcall virtual ~TIECloneToolInteraction() { }
	
};


enum DECLSPEC_DENUM TIEFillToolMode : unsigned char { ieftmColorFill, ieftmAlphaFill, ieftmColorPicker };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEFillToolInteraction : public TIEUserInteraction
{
	typedef TIEUserInteraction inherited;
	
private:
	int fAlphaFillValue;
	System::Uitypes::TColor fColorFillValue;
	bool fMaxFilter;
	int fSampleSize;
	int fTolerance;
	TIEFillToolMode fMode;
	TIEColorSelectActions fColorSelectActions;
	int fLastX;
	int fLastY;
	bool fResetAfterColorSelect;
	virtual void __fastcall SetEnabled(const bool Value);
	void __fastcall SetMode(const TIEFillToolMode Value);
	
public:
	__fastcall TIEFillToolInteraction(Ieview::TIEView* Parent);
	__property TIEFillToolMode Mode = {read=fMode, write=SetMode, nodefault};
	__property int AlphaFillValue = {read=fAlphaFillValue, write=fAlphaFillValue, nodefault};
	__property System::Uitypes::TColor ColorFillValue = {read=fColorFillValue, write=fColorFillValue, nodefault};
	__property bool MaxFilter = {read=fMaxFilter, write=fMaxFilter, nodefault};
	__property bool ResetAfterColorSelect = {read=fResetAfterColorSelect, write=fResetAfterColorSelect, nodefault};
	__property int SampleSize = {read=fSampleSize, write=fSampleSize, nodefault};
	__property int Tolerance = {read=fTolerance, write=fTolerance, nodefault};
	__property TIEColorSelectActions ColorSelectActions = {read=fColorSelectActions, write=fColorSelectActions, nodefault};
	virtual bool __fastcall MouseMoveExclusive(System::Classes::TShiftState Shift, int X, int Y, bool Captured);
	virtual bool __fastcall MouseUpExclusive(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
public:
	/* TIEUserInteraction.Destroy */ inline __fastcall virtual ~TIEFillToolInteraction() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TIERotateToolInteraction : public TIEUserInteraction
{
	typedef TIEUserInteraction inherited;
	
private:
	int fKeyboardRotateStep;
	int fMouseRotateStep;
	int fMouseRotateShiftStep;
	double fMouseSensitivity;
	bool fAutoCrop;
	Imageenproc::TIECropAlgorithm fCropAlgorithm;
	double fCurrentRotationRaw;
	int fCurrentRotation;
	bool fFlipped;
	Iexbitmaps::TIEBitmap* fOriginalBitmap;
	System::Types::TPoint fMouseDownPos;
	Vcl::Extctrls::TTimer* fUpdateTimer;
	bool fHaveRotated;
	Hyiedefs::TIEAntialiasMode fAntialiasMode;
	System::Uitypes::TColor fBackgroundColor;
	bool fUseAntialiasOnPreview;
	virtual void __fastcall SetEnabled(const bool Value);
	void __fastcall SetRotation(int Value);
	void __fastcall SetFlipped(const bool Value);
	void __fastcall UpdateImage(bool PreviewQuality = false);
	void __fastcall UpdateImageTimerEvent(System::TObject* Sender);
	void __fastcall DelayedUpdateImage();
	
public:
	__fastcall TIERotateToolInteraction(Ieview::TIEView* Parent);
	__fastcall virtual ~TIERotateToolInteraction();
	__property int KeyboardRotateStep = {read=fKeyboardRotateStep, write=fKeyboardRotateStep, nodefault};
	__property int MouseRotateStep = {read=fMouseRotateStep, write=fMouseRotateStep, nodefault};
	__property int MouseRotateShiftStep = {read=fMouseRotateShiftStep, write=fMouseRotateShiftStep, nodefault};
	__property double MouseSensitivity = {read=fMouseSensitivity, write=fMouseSensitivity};
	__property bool AutoCrop = {read=fAutoCrop, write=fAutoCrop, nodefault};
	__property Imageenproc::TIECropAlgorithm CropAlgorithm = {read=fCropAlgorithm, write=fCropAlgorithm, nodefault};
	__property Hyiedefs::TIEAntialiasMode AntialiasMode = {read=fAntialiasMode, write=fAntialiasMode, nodefault};
	__property bool UseAntialiasOnPreview = {read=fUseAntialiasOnPreview, write=fUseAntialiasOnPreview, nodefault};
	__property System::Uitypes::TColor BackgroundColor = {read=fBackgroundColor, write=fBackgroundColor, nodefault};
	__property int Rotation = {read=fCurrentRotation, write=SetRotation, nodefault};
	__property bool Flipped = {read=fFlipped, write=SetFlipped, nodefault};
	virtual bool __fastcall MouseDownExclusive(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual bool __fastcall MouseMoveExclusive(System::Classes::TShiftState Shift, int X, int Y, bool Captured);
	virtual bool __fastcall MouseUpExclusive(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall VirtualKey(unsigned VKey, unsigned KeyData, bool KeyDown);
	virtual void __fastcall Cancel();
	virtual void __fastcall Reset();
};


class PASCALIMPLEMENTATION TIELayerCreateInteraction : public TIEUserInteraction
{
	typedef TIEUserInteraction inherited;
	
private:
	Hyiedefs::TDPoint fScreenPt1;
	Hyiedefs::TDPoint fScreenPt2;
	Iexlayers::TIELayerKind fLayerKind;
	bool fCreatingLayer;
	int fCreatingLayerIdx;
	bool fIsRuler;
	System::Types::TPoint fLastMousePos;
	double fLockAspectRatio;
	int fLockWidth;
	int fLockHeight;
	int __fastcall GetSelX();
	int __fastcall GetSelY();
	int __fastcall GetSelWidth();
	int __fastcall GetSelHeight();
	void __fastcall ResetState();
	int __fastcall GetCreatingLayerIndex();
	double __fastcall GetAspectRatioLocking();
	
public:
	__fastcall TIELayerCreateInteraction(Ieview::TIEView* Parent);
	__property double LockAspectRatio = {read=fLockAspectRatio, write=fLockAspectRatio};
	__property int LockWidth = {read=fLockWidth, write=fLockWidth, nodefault};
	__property int LockHeight = {read=fLockHeight, write=fLockHeight, nodefault};
	__property Iexlayers::TIELayerKind LayerKind = {read=fLayerKind, write=fLayerKind, nodefault};
	__property bool IsRuler = {read=fIsRuler, write=fIsRuler, nodefault};
	__property int SelX = {read=GetSelX, nodefault};
	__property int SelY = {read=GetSelY, nodefault};
	__property int SelWidth = {read=GetSelWidth, nodefault};
	__property int SelHeight = {read=GetSelHeight, nodefault};
	void __fastcall SetSel(int X, int Y, int Width, int Height);
	virtual bool __fastcall Enact();
	bool __fastcall Active();
	__property int CreatingLayerIndex = {read=GetCreatingLayerIndex, nodefault};
	virtual bool __fastcall MouseDownExclusive(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual bool __fastcall MouseMoveExclusive(System::Classes::TShiftState Shift, int X, int Y, bool Captured);
	virtual void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall VirtualKey(unsigned VKey, unsigned KeyData, bool KeyDown);
	virtual bool __fastcall NeedBackBufferUpdate();
	virtual bool __fastcall NeedLayerBox(int idx);
	virtual void __fastcall Cancel();
	virtual void __fastcall Reset();
public:
	/* TIEUserInteraction.Destroy */ inline __fastcall virtual ~TIELayerCreateInteraction() { }
	
};


class PASCALIMPLEMENTATION TIELayerPointsInteraction : public TIEUserInteraction
{
	typedef TIEUserInteraction inherited;
	
private:
	Hyiedefs::TDPoint fScreenPt1;
	Hyiedefs::TDPoint fScreenPt2;
	Hyiedefs::TDPoint fScreenPtPrev;
	Iexlayers::TIELayerKind fLayerKind;
	bool fActive;
	int fCreatingLayerIdx;
	int fCreatingPtCount;
	bool fCreatingPtConfirmed;
	int fEditingLayerIdx;
	int fEditingLayerPt;
	int fCurvingLayerIdx;
	bool fContinuous;
	bool fCanCreate;
	bool fCanEdit;
	bool fIsRuler;
	int fCurveStartPoint;
	int fCurveEndPoint;
	System::Types::TPoint fLastMousePos;
	void __fastcall CheckForPolylineClosure(Iexlayers::TIEPolylineLayer* polyLyr);
	bool __fastcall MouseMoveExclusive_Creating(System::Classes::TShiftState Shift, int X, int Y, bool Captured);
	bool __fastcall MouseMoveExclusive_Editing(System::Classes::TShiftState Shift, int X, int Y, bool Captured);
	bool __fastcall Enact_Creating();
	bool __fastcall Enact_Editing();
	void __fastcall DeleteCurrentPolylinePoint();
	void __fastcall ReplaceCurveWithPt(int ScrX, int ScrY);
	void __fastcall ReplacePtWithCurve(int ScrX, int ScrY, bool ForceHalfCircle);
	void __fastcall CheckBounds(Hyiedefs::TDPoint &pt);
	void __fastcall ResetState();
	void __fastcall SetLineLayerCurve(int LayerIdx, int ScrX, int ScrY, bool ForceCircular);
	
public:
	__fastcall TIELayerPointsInteraction(Ieview::TIEView* Parent);
	__property bool Active = {read=fActive, nodefault};
	__property Iexlayers::TIELayerKind LayerKind = {read=fLayerKind, write=fLayerKind, nodefault};
	__property bool Continuous = {read=fContinuous, write=fContinuous, nodefault};
	__property bool CanCreate = {read=fCanCreate, write=fCanCreate, nodefault};
	__property bool CanEdit = {read=fCanEdit, write=fCanEdit, nodefault};
	__property bool IsRuler = {read=fIsRuler, write=fIsRuler, nodefault};
	virtual bool __fastcall Enact();
	virtual bool __fastcall MouseDownExclusive(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual bool __fastcall MouseMoveExclusive(System::Classes::TShiftState Shift, int X, int Y, bool Captured);
	virtual void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y, bool Captured);
	virtual bool __fastcall MouseUpExclusive(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall VirtualKey(unsigned VKey, unsigned KeyData, bool KeyDown);
	virtual void __fastcall PaintRect(const System::Types::TRect &UpdateRect);
	virtual bool __fastcall NeedBackBufferUpdate();
	virtual bool __fastcall NeedLayerBox(int idx);
	virtual bool __fastcall DoubleClickExclusive(int X, int Y);
	virtual void __fastcall Cancel();
	virtual void __fastcall Reset();
public:
	/* TIEUserInteraction.Destroy */ inline __fastcall virtual ~TIELayerPointsInteraction() { }
	
};


class PASCALIMPLEMENTATION TIEButtonInteraction : public TIEUserInteraction
{
	typedef TIEUserInteraction inherited;
	
private:
	Ieview::TIEVButtons fButtons;
	int fButtonSize;
	int fButtonOffset;
	int fActiveButton;
	bool fOnlyOnHover;
	System::Uitypes::TColor fFillColor;
	int fFillTransparency;
	int fBorderWidth;
	System::Uitypes::TColor fBorderColor;
	int fBorderTransparency;
	bool __fastcall FindButtonAt(int X, int Y, /* out */ Ieview::TIEVButton &Button);
	bool __fastcall ShowZoomInButton();
	int __fastcall CurrBtnSize();
	int __fastcall CurrOffset();
	
public:
	Ieview::TIEVButtonClickEvent OnButtonClickEx;
	Ieview::TIEVButtonStateEvent OnButtonStateEx;
	__fastcall TIEButtonInteraction(Ieview::TIEView* Parent);
	__property Ieview::TIEVButtons Buttons = {read=fButtons, write=fButtons, nodefault};
	__property System::Uitypes::TColor FillColor = {read=fFillColor, write=fFillColor, nodefault};
	__property System::Uitypes::TColor Color = {read=fFillColor, write=fFillColor, nodefault};
	__property int FillTransparency = {read=fFillTransparency, write=fFillTransparency, nodefault};
	__property System::Uitypes::TColor BorderColor = {read=fBorderColor, write=fBorderColor, nodefault};
	__property int BorderTransparency = {read=fBorderTransparency, write=fBorderTransparency, nodefault};
	__property int BorderWidth = {read=fBorderWidth, write=fBorderWidth, nodefault};
	__property int Size = {read=fButtonSize, write=fButtonSize, nodefault};
	__property int Offset = {read=fButtonOffset, write=fButtonOffset, nodefault};
	__property bool OnlyOnHover = {read=fOnlyOnHover, write=fOnlyOnHover, nodefault};
	int __fastcall GetButtonState(Ieview::TIEVButton Button);
	void __fastcall ClickButton(Ieview::TIEVButton Button, System::Uitypes::TMouseButton MouseButton, System::Classes::TShiftState Shift);
	virtual void __fastcall PaintRect(const System::Types::TRect &UpdateRect);
	virtual bool __fastcall MouseDownExclusive(System::Uitypes::TMouseButton MouseButton, System::Classes::TShiftState Shift, int X, int Y);
	virtual bool __fastcall MouseMoveExclusive(System::Classes::TShiftState Shift, int X, int Y, bool Captured);
	virtual bool __fastcall MouseUpExclusive(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall VirtualKey(unsigned VKey, unsigned KeyData, bool KeyDown);
	virtual void __fastcall MouseLeave();
	virtual void __fastcall Reset();
public:
	/* TIEUserInteraction.Destroy */ inline __fastcall virtual ~TIEButtonInteraction() { }
	
};


typedef System::DynamicArray<System::Types::TRect> TIERectArray;

struct DECLSPEC_DRECORD TIEPdfAttachment
{
public:
	System::UnicodeString Name;
	int SizeBytes;
};


struct DECLSPEC_DRECORD TIEPDFMetaData
{
public:
	System::UnicodeString Title;
	System::UnicodeString Author;
	System::UnicodeString Subject;
	System::UnicodeString Keywords;
	System::UnicodeString Creator;
	System::UnicodeString Producer;
	System::UnicodeString CreationDate;
	System::UnicodeString ModDate;
	int FileVersion;
};


enum DECLSPEC_DENUM TIEPdfPageRotation : unsigned char { ieprNormal, iepr90Clockwise, iepr180, iepr270Clockwise };

enum DECLSPEC_DENUM Iexuserinteractions__51 : unsigned char { iepoAutoButtons, iepoAnnotations, iepoOptimizeForLCD, iepoGrayScale, iepoNoNativeText, iepoForceHalfTone, iepoPrinting, iepoNoSmoothing };

typedef System::Set<Iexuserinteractions__51, Iexuserinteractions__51::iepoAutoButtons, Iexuserinteractions__51::iepoNoSmoothing> TIEPdfOptions;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEPdfViewerInteraction : public TIEUserInteraction
{
	typedef TIEUserInteraction inherited;
	
	
private:
	typedef System::DynamicArray<Hyiedefs::TDRectArray> _TIEPdfViewerInteraction__1;
	
	
private:
	Iexpdfiumcore::TPdfDocument* fDocument;
	System::Types::TPoint fDocumentSize;
	int fDocumentSizeMaxChecked;
	int fPageIndex;
	int fDrawnPageIndex;
	TIERectArray fDrawRects;
	bool fDrawRectsValid;
	HBITMAP fPageBitmap;
	TIEPdfPageRotation fViewRotation;
	bool fDocModified;
	bool fWasFormModified;
	bool fAutoSync;
	bool fBitmapSynced;
	bool fMouseDown;
	System::Types::TPoint fMouseDownPt;
	bool fTextSelectionActive;
	bool fImageSelectionActive;
	int fSelStartIndex;
	int fSelStopIndex;
	_TIEPdfViewerInteraction__1 fWebLinkRects;
	Hyiedefs::TDRectArray fHighlightTextRects;
	System::UnicodeString fHighlightText;
	bool fHighlightMatchCase;
	bool fHighlightMatchWholeWord;
	Hyiedefs::TDRectArray fFormSelectedRects;
	bool fFormFieldFocused;
	Vcl::Dialogs::TFindDialog* fFindDialog;
	System::UnicodeString fFindDialogState;
	bool fCanFindMore;
	bool fAllowFormEditing;
	Iexpdfiumcore::TPdfDocumentLoadOption fLoadOption;
	bool fBufferedDraw;
	System::Uitypes::TColor fPageColor;
	TIEPdfOptions fOptions;
	int fMaxZoom;
	System::UnicodeString fCurrentSearch;
	bool fCurrentMatchCase;
	bool fCurrentMatchWholeWord;
	bool fCurrentAllPages;
	bool fShowAllPages;
	int fPageSpacing;
	System::Uitypes::TColor fPageFrameColor;
	virtual void __fastcall SetEnabled(const bool v);
	bool __fastcall CheckEnabled(bool RaiseExcept, bool NeedParent = false);
	TIEPdfPageRotation __fastcall GetPageRotation(int Index);
	void __fastcall SetPageRotation(int Index, const TIEPdfPageRotation v);
	void __fastcall SetViewRotation(const TIEPdfPageRotation v);
	int __fastcall GetPageCount();
	int __fastcall GetPageIndex();
	void __fastcall SetPageIndex(int v);
	void __fastcall SetPageIndexEx(int v, bool DoUpdate);
	int __fastcall GetSelStart();
	int __fastcall GetSelLength();
	System::UnicodeString __fastcall GetSelText();
	bool __fastcall GetFormModified();
	void __fastcall SetFormModified(const bool v);
	bool __fastcall GetAllowFormEditing();
	void __fastcall SetAllowFormEditing(const bool v);
	bool __fastcall IsTextSelectionEnabled();
	bool __fastcall IsImageSelectionEnabled();
	bool __fastcall IsFormEditingEnabled();
	void __fastcall SetOptions(const TIEPdfOptions v);
	void __fastcall SetPrintOptions(const Iexpdfiumcore::TIEPdfPrintOptions v);
	Iexpdfiumcore::TIEPdfPrintOptions __fastcall GetPrintOptions();
	void __fastcall UpdateButtons();
	void __fastcall GetPageWebLinks();
	Iexpdfiumcore::TPdfPage* __fastcall GetPage(int Index);
	Iexpdfiumcore::TPdfPage* __fastcall GetPageEx(int Index, bool OpenPage, bool RaiseErrors);
	Iexpdfiumcore::TPdfPage* __fastcall GetCurrentPage();
	int __fastcall GetCurrentPageWidth();
	int __fastcall GetCurrentPageHeight();
	bool __fastcall SetSelStopCharIndex(int ScrX, int ScrY);
	void __fastcall SetSelection(bool Active, int StartIndex, int StopIndex, bool DoScroll = false);
	System::Types::TRect __fastcall PageToScrEx(Iexpdfiumcore::TPdfPage* Page, int PageIndex, const Hyiedefs::TDRect &PageRect);
	void __fastcall CalcHighlightTextRects();
	void __fastcall DoPageLoadError(int PgIdx);
	void __fastcall CB_FormInvalidate(Iexpdfiumcore::TPdfDocument* Document, Iexpdfiumcore::TPdfPage* Page, const Hyiedefs::TDRect &PageRect);
	void __fastcall CB_FormOutputSelectedRect(Iexpdfiumcore::TPdfDocument* Document, Iexpdfiumcore::TPdfPage* Page, const Hyiedefs::TDRect &PageRect);
	void __fastcall CB_FormGetCurrentPage(Iexpdfiumcore::TPdfDocument* Document, Iexpdfiumcore::TPdfPage* &Page);
	void __fastcall CB_FormFieldFocus(Iexpdfiumcore::TPdfDocument* Document, System::WideChar * Value, int ValueLen, bool FieldFocused);
	void __fastcall DrawBlendRects(HDC DC, Iexpdfiumcore::TPdfPage* Page, int PageIndex, const Hyiedefs::TDRectArray ARects, System::Uitypes::TColor Color);
	void __fastcall DrawFormOutputSelectedRects(HDC DC, Iexpdfiumcore::TPdfPage* Page, int PageIndex);
	void __fastcall DrawSelection(HDC DC, Iexpdfiumcore::TPdfPage* Page, int PageIndex);
	void __fastcall DrawHighlightText(HDC DC, Iexpdfiumcore::TPdfPage* Page, int PageIndex);
	Hyiedefs::TDPoint __fastcall ScrToPage(int ScrX, int ScrY)/* overload */;
	Hyiedefs::TDRect __fastcall ScrToPage(const System::Types::TRect &ScrRect)/* overload */;
	System::Types::TRect __fastcall PageToScr(const Hyiedefs::TDRect &PageRect);
	void __fastcall InvalidateRectDiffs(const TIERectArray OldRects, const TIERectArray NewRects);
	void __fastcall InvalidatePdfRectDiffs(const Hyiedefs::TDRectArray OldRects, const Hyiedefs::TDRectArray NewRects);
	void __fastcall DocumentLoaded();
	void __fastcall DocumentChanged();
	void __fastcall PageContentChanged();
	bool __fastcall IsCurrentPageValid();
	System::Types::TPoint __fastcall GetDocumentSizeEx(int ToPage = 0xffffffff);
	System::Types::TPoint __fastcall GetDocumentSize();
	int __fastcall ScrToPageIndex(int ScrX, int ScrY);
	void __fastcall InvalidatePage();
	TIERectArray __fastcall GetSelectionRects();
	int __fastcall GetWebLinkIndex(int ScrX, int ScrY);
	bool __fastcall CopyToClipboardEx(bool DoCut, bool CheckOnly);
	bool __fastcall PasteFromClipboardEx(bool CheckOnly);
	int __fastcall GetAttachmentCount();
	TIEPdfAttachment __fastcall GetAttachmentInfo(int Index);
	TIEPDFMetaData __fastcall GetMetaData();
	void __fastcall SetAutoSync(const bool v);
	void __fastcall FindDialogFind(System::TObject* Sender);
	Hyiedefs::TDPoint __fastcall PageSizeEx(int Index, bool NilOnError);
	void __fastcall SetShowAllPages(const bool v);
	void __fastcall SetPageSpacing(const int v);
	void __fastcall SetPageFrameColor(const System::Uitypes::TColor v);
	void __fastcall CalcDrawRects();
	System::Types::TRect __fastcall GetDrawRect(int Index);
	System::Types::TPoint __fastcall ErrorPageSize();
	void __fastcall PdfPrintEvent(System::TObject* Sender, int PageNo, int PageCount);
	
protected:
	void __fastcall DrawPage(HDC DC, Iexpdfiumcore::TPdfPage* Page, int DrawX, int DrawY, int DrawWidth, int DrawHeight, bool DirectDrawPage, System::Uitypes::TColor PageColor = (System::Uitypes::TColor)(0xffffff));
	Iexpdfiumcore::TPdfPageRotation __fastcall GetPDFRotation();
	int __fastcall GetDrawOptions();
	
public:
	__fastcall TIEPdfViewerInteraction(Ieview::TIEView* Parent);
	__fastcall virtual ~TIEPdfViewerInteraction();
	void __fastcall LoadFromStream(System::Classes::TStream* AStream, const System::AnsiString APassword = System::AnsiString());
	void __fastcall LoadFromFile(const System::UnicodeString AFileName, const System::AnsiString APassword = System::AnsiString());
	void __fastcall SaveToStream(System::Classes::TStream* AStream);
	void __fastcall SaveToFile(const System::UnicodeString AFileName);
	int __fastcall XPage2Scr(int x);
	int __fastcall YPage2Scr(int y);
	int __fastcall XScr2Page(int x);
	int __fastcall YScr2Page(int y);
	void __fastcall Close();
	__property bool ShowAllPages = {read=fShowAllPages, write=SetShowAllPages, nodefault};
	__property int PageSpacing = {read=fPageSpacing, write=SetPageSpacing, nodefault};
	__property System::Uitypes::TColor PageFrameColor = {read=fPageFrameColor, write=SetPageFrameColor, nodefault};
	__property Iexpdfiumcore::TPdfDocument* Document = {read=fDocument};
	__property System::Types::TPoint DocumentSize = {read=GetDocumentSize};
	__property Iexpdfiumcore::TPdfPage* CurrentPage = {read=GetCurrentPage};
	__property int PageWidth = {read=GetCurrentPageWidth, nodefault};
	__property int PageHeight = {read=GetCurrentPageHeight, nodefault};
	__property Iexpdfiumcore::TPdfPage* Page[int Index] = {read=GetPage};
	System::Types::TPoint __fastcall PageOrigin(int Idx);
	System::Types::TPoint __fastcall ViewSize();
	bool __fastcall CanCopyToClipboard();
	bool __fastcall CanCutToClipboard();
	bool __fastcall CanPasteFromClipboard();
	bool __fastcall CutToClipboard();
	bool __fastcall CopyToClipboard();
	bool __fastcall PasteFromClipboard();
	void __fastcall SelectAll();
	void __fastcall SelectText(int CharIndex, int Count, bool DoScroll = false);
	bool __fastcall SelectWord(int CharIndex, bool DoScroll = false);
	bool __fastcall SelectLine(int CharIndex, bool DoScroll = false);
	void __fastcall ClearSelection();
	void __fastcall EnsureTextVisible(int TextStart, int TextLength);
	System::UnicodeString __fastcall GetText(int CharIndex, int Length)/* overload */;
	System::UnicodeString __fastcall GetText(const System::Types::TRect &R)/* overload */;
	int __fastcall ScrToCharIndex(int ScrX, int ScrY, double ToleranceX = 0.000000E+00, double ToleranceY = 0.000000E+00);
	System::UnicodeString __fastcall GetWebLinkAt(int ScrX, int ScrY);
	void __fastcall CharIndexToLine(const int CharIndex, /* out */ int &OutIndex, /* out */ int &OutLength);
	void __fastcall CharIndexToWord(int CharIndex, /* out */ int &OutIndex, /* out */ int &OutLength);
	__property TIEPdfPageRotation PageRotation[int Index] = {read=GetPageRotation, write=SetPageRotation};
	__property TIEPdfPageRotation ViewRotation = {read=fViewRotation, write=SetViewRotation, nodefault};
	__property int PageCount = {read=GetPageCount, nodefault};
	__property int PageIndex = {read=GetPageIndex, write=SetPageIndex, nodefault};
	bool __fastcall PageVisible(int Idx, bool Quick = false);
	void __fastcall SetPageToScrollPos(bool ScrollingDown);
	void __fastcall ScrollToPage(int PgIndex, bool ResetPagePos = false);
	__property int SelStart = {read=GetSelStart, nodefault};
	__property int SelLength = {read=GetSelLength, nodefault};
	__property System::UnicodeString SelText = {read=GetSelText};
	__property TIEPDFMetaData MetaData = {read=GetMetaData};
	__property bool DocModified = {read=fDocModified, write=fDocModified, nodefault};
	__property bool FormFieldFocused = {read=fFormFieldFocused, nodefault};
	__property bool FormModified = {read=GetFormModified, write=SetFormModified, nodefault};
	bool __fastcall ImportPages(const System::UnicodeString Filename, const System::UnicodeString ImportRange = System::UnicodeString(), int InsertIndex = 0xffffffff, const System::AnsiString Password = System::AnsiString())/* overload */;
	bool __fastcall ImportPages(const System::UnicodeString Filename, const int *Pages, const int Pages_High, int InsertIndex = 0xffffffff, const System::AnsiString Password = System::AnsiString())/* overload */;
	bool __fastcall ImportPages(System::Classes::TStream* Stream, const int *Pages, const int Pages_High, int InsertIndex = 0xffffffff, const System::AnsiString Password = System::AnsiString())/* overload */;
	bool __fastcall ImportPages(System::Classes::TStream* Stream, const System::UnicodeString ImportRange = System::UnicodeString(), int InsertIndex = 0xffffffff, const System::AnsiString Password = System::AnsiString())/* overload */;
	bool __fastcall ImportPages(Iexpdfiumcore::TPdfDocument* Document, const System::UnicodeString ImportRange = System::UnicodeString(), int InsertIndex = 0xffffffff)/* overload */;
	bool __fastcall ImportPages(Iexpdfiumcore::TPdfDocument* Document, const int *Pages, const int Pages_High, int InsertIndex = 0xffffffff)/* overload */;
	bool __fastcall MovePages(const int PageIndex, int DestIndex)/* overload */;
	bool __fastcall MovePages(const int *Pages, const int Pages_High, int DestIndex)/* overload */;
	bool __fastcall DeletePages(int PageIdx)/* overload */;
	bool __fastcall DeletePages(int *Pages, const int Pages_High)/* overload */;
	bool __fastcall Print(bool ShowPrintDialog, System::UnicodeString TaskName = System::UnicodeString())/* overload */;
	bool __fastcall Print(int Page, bool ShowPrintDialog, System::UnicodeString TaskName = System::UnicodeString())/* overload */;
	bool __fastcall Print(int FromPage, int ToPage, bool ShowPrintDialog, System::Uitypes::TPrintRange PrintRange = (System::Uitypes::TPrintRange)(0x2), System::UnicodeString TaskName = System::UnicodeString())/* overload */;
	void __fastcall Update();
	Vcl::Dialogs::TFindDialog* __fastcall FindDialog(const System::UnicodeString s = System::UnicodeString(), bool AllPages = false);
	bool __fastcall Find(const System::UnicodeString s, bool MatchCase = false, bool MatchWholeWord = false, bool FromEnd = false, bool DoSelect = true, bool AllPages = false);
	bool __fastcall FindInDocument(const System::UnicodeString s, bool MatchCase, bool MatchWholeWord, /* out */ int &CharIndex, /* out */ int &Count, int FromPage, bool ReverseDir = false, bool DoSelect = true, bool NewSearch = false);
	bool __fastcall FindNext(/* out */ int &CharIndex, /* out */ int &Count, bool ReverseDir = false, bool DoSelect = true)/* overload */;
	bool __fastcall FindNext(bool ReverseDir = false)/* overload */;
	bool __fastcall CanFindNext();
	void __fastcall HighlightText(const System::UnicodeString s, bool MatchCase = false, bool MatchWholeWord = false);
	void __fastcall ClearHighlightedText();
	__property int AttachmentCount = {read=GetAttachmentCount, nodefault};
	__property TIEPdfAttachment Attachment[int Index] = {read=GetAttachmentInfo};
	bool __fastcall SaveAttachment(int Index, const System::UnicodeString DestFilename)/* overload */;
	bool __fastcall SaveAttachment(int Index, System::Classes::TStream* const DestStream)/* overload */;
	bool __fastcall AddAttachment(const System::UnicodeString Filename)/* overload */;
	bool __fastcall AddAttachment(const System::UnicodeString Name, System::Classes::TStream* Stream)/* overload */;
	bool __fastcall DeleteAttachment(int Index);
	__property bool AllowFormEditing = {read=GetAllowFormEditing, write=SetAllowFormEditing, nodefault};
	__property TIEPdfOptions Options = {read=fOptions, write=SetOptions, nodefault};
	__property Iexpdfiumcore::TIEPdfPrintOptions PrintOptions = {read=GetPrintOptions, write=SetPrintOptions, nodefault};
	bool __fastcall NeedSync();
	void __fastcall SyncToBitmap();
	__property bool AutoSync = {read=fAutoSync, write=SetAutoSync, nodefault};
	void __fastcall DrawTo(Iexbitmaps::TIEBitmap* Bitmap)/* overload */;
	void __fastcall DrawTo(Vcl::Graphics::TBitmap* Bitmap)/* overload */;
	void __fastcall DrawTo(Vcl::Graphics::TCanvas* Canvas)/* overload */;
	__property Iexpdfiumcore::TPdfDocumentLoadOption LoadOption = {read=fLoadOption, write=fLoadOption, nodefault};
	__property bool BufferedDraw = {read=fBufferedDraw, write=fBufferedDraw, nodefault};
	__property System::Uitypes::TColor PageColor = {read=fPageColor, write=fPageColor, nodefault};
	__property int MaxZoom = {read=fMaxZoom, write=fMaxZoom, nodefault};
	void __fastcall UpdateDrawRects(bool PageDimsChange = true);
	bool __fastcall DocValid();
	virtual bool __fastcall PaintRectExclusive(const System::Types::TRect &UpdateRect);
	virtual bool __fastcall MouseMoveExclusive(System::Classes::TShiftState Shift, int X, int Y, bool Captured);
	virtual bool __fastcall MouseUpExclusive(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual bool __fastcall MouseDownExclusive(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual bool __fastcall DoubleClickExclusive(int X, int Y);
	virtual void __fastcall VirtualKey(unsigned VKey, unsigned KeyData, bool KeyDown);
	bool __fastcall ProcessWMChar(Winapi::Messages::TWMKey &Message);
	void __fastcall WriteMetaData(Iexbitmaps::TIOParams* Dest);
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE int __fastcall IERenderPDFToBMP(Vcl::Graphics::TBitmap* Dest, Iexbitmaps::TIOParams* DestParams, System::Classes::TStream* Stream, int PageIndex, int Width, int Height, System::AnsiString Password, /* out */ int &PageWidth, /* out */ int &PageHeight, /* out */ int &DpiX, /* out */ int &DpiY, Iexpdfiumcore::TPdfPageRotation PageRotation = (Iexpdfiumcore::TPdfPageRotation)(0x0), System::Uitypes::TColor PageColor = (System::Uitypes::TColor)(0xffffff), int DrawOptions = 0xffffffff)/* overload */;
extern DELPHI_PACKAGE int __fastcall IERenderPDFToBMP(Vcl::Graphics::TBitmap* Dest, TIEPdfViewerInteraction* pdfCtrl, int PageIndex, int Width, int Height, /* out */ int &PageWidth, /* out */ int &PageHeight, /* out */ int &DpiX, /* out */ int &DpiY)/* overload */;
extern DELPHI_PACKAGE void __fastcall IERenderPDFToBMP(Vcl::Graphics::TBitmap* Dest, Iexpdfiumcore::TPdfDocument* pdf, int PageIndex, int Width, int Height, /* out */ int &PageWidth, /* out */ int &PageHeight, /* out */ int &DpiX, /* out */ int &DpiY, Iexpdfiumcore::TPdfPageRotation PageRotation = (Iexpdfiumcore::TPdfPageRotation)(0x0), System::Uitypes::TColor PageColor = (System::Uitypes::TColor)(0xffffff), int DrawOptions = 0x0)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IEIsPDFStream(System::Classes::TStream* Stream);
extern DELPHI_PACKAGE bool __fastcall PDFiumLibAvailable(bool RaiseExcept = false, bool ExeFolderOnly = true);
extern DELPHI_PACKAGE bool __fastcall ImportPagesIntoPDF(const System::UnicodeString Filename, const System::UnicodeString SourceFilename, const System::UnicodeString ImportRange = System::UnicodeString(), int InsertIndex = 0xffffffff)/* overload */;
extern DELPHI_PACKAGE bool __fastcall ImportPagesIntoPDF(const System::UnicodeString Filename, const System::UnicodeString SourceFilename, const int *Pages, const int Pages_High, int InsertIndex = 0xffffffff)/* overload */;
extern DELPHI_PACKAGE bool __fastcall DeletePagesFromPDF(const System::UnicodeString Filename, int PageIdx)/* overload */;
extern DELPHI_PACKAGE bool __fastcall DeletePagesFromPDF(const System::UnicodeString Filename, int *Pages, const int Pages_High)/* overload */;
}	/* namespace Iexuserinteractions */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_IEXUSERINTERACTIONS)
using namespace Iexuserinteractions;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// IexuserinteractionsHPP
