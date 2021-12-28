// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'imageenview.pas' rev: 35.00 (Windows)

#ifndef ImageenviewHPP
#define ImageenviewHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
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
#include <imageenio.hpp>
#include <imageenproc.hpp>
#include <ieview.hpp>
#include <iexTransitions.hpp>
#include <hyieutils.hpp>
#include <iexRulers.hpp>
#include <iexLayers.hpp>
#include <iegdiplus.hpp>
#include <iexToolbars.hpp>
#include <Vcl.Menus.hpp>
#include <iexUserInteractions.hpp>
#include <iexRichEdit.hpp>
#include <System.Types.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Imageenview
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TIEGestureOptions;
class DELPHICLASS TIEGesturePanOptions;
class DELPHICLASS TIEGestureZoomOptions;
class DELPHICLASS TIEGestureLayerMoveOptions;
class DELPHICLASS TIEGestureLayerRotateOptions;
class DELPHICLASS TIEViewerGestures;
class DELPHICLASS TIEChromaKeyOptions;
struct TIEGripStyle;
class DELPHICLASS TIEVectorizedSelection;
class DELPHICLASS TImageEnView;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TIEFastDrawing : unsigned char { iefFast, iefDelayed, iefNormal };

enum DECLSPEC_DENUM TIEPolylineClosingMode : unsigned char { iecmManual, iecmOnNearFinish, iecmAlways };

enum DECLSPEC_DENUM Imageenview__1 : unsigned char { iessCtrl_SubFromSel, iessCtrl_KeySizing, iessCtrl_DelPoint, iessShift_AddToSel, iessShift_AddLyrSel, iessShift_FastMove, iessShift_RotateLock, iessShift_LineLock, iessShift_CircularCurve, iessShift_MoveSnapping, iessAlt_Curve, iessAlt_MaintainAR, iessAlt_InvertWheel };

typedef System::Set<Imageenview__1, Imageenview__1::iessCtrl_SubFromSel, Imageenview__1::iessAlt_InvertWheel> TIEShiftLock;

enum DECLSPEC_DENUM TIEGrip : unsigned char { ieNone, ieTopLeft, ieTopRight, ieBottomRight, ieBottomLeft, ieLeftSide, ieRightSide, ieTopSide, ieBottomSide, ieRotationCenter, ieRotate };

enum DECLSPEC_DENUM TIEGridKind : unsigned char { iedgNone, iedgPixelGrid, iedgGuideLines, iedgRulerGuides, iedgAuto };

enum DECLSPEC_DENUM TIEMeasureType : unsigned char { iemLength, iemRectArea, iemEllipseArea, iemAngle, iemPath };

enum DECLSPEC_DENUM TIEAlignLayers : unsigned char { ilaAlignToLeft, ilaAlignToRight, ilaAlignToTop, ilaAlignToBottom, ilaAlignToHorizontalCenter, ilaAlignToVerticalCenter, ilaAlignLeftEdges, ilaAlignRightEdges, ilaAlignTopEdges, ilaAlignBottomEdges, ilaAlignHorizontalCenters, ilaAlignVerticalCenters, ilaMatchWidth, ilaMatchHeight };

enum DECLSPEC_DENUM Imageenview__2 : unsigned char { loAllowMultiSelect, loAutoSelectMask, loAutoUndoChangesByUser, loAutoUndoChangesByCode, loAutoPromptForImage, loAutoFixBorders, loAutoFixRotation, loDynamicCanvas, loKeyboardShortcuts, loDisableTextEditOnDblClick, loPreventOutOfBounds, loPropsOnDblClick, loResizeOnRotate, loDragSelection, loProtectBackground, loSwapBackgroundProps, loAutoTextEditing, loStampMode, loShowRichTextToolbar, loAllowReturnsInRichText, loShowRotationGrip, loCtrlClickToCopy, loPreventLayerDelete };

typedef System::Set<Imageenview__2, Imageenview__2::loAllowMultiSelect, Imageenview__2::loPreventLayerDelete> TIELayerOptions;

typedef void __fastcall (__closure *TIEImageChangeEvent)(System::TObject* Sender, int ChangeSource);

typedef void __fastcall (__closure *TViewChangeEvent)(System::TObject* Sender, int Change);

typedef void __fastcall (__closure *TIEMediaFoundationNotifyEvent)(System::TObject* Sender, System::TObject* MediaFoundationObject, Hyiedefs::TIEMediaFountationNotifyType NotifyType);

typedef void __fastcall (__closure *TIETextEditorEvent)(System::TObject* Sender, int Layer, System::TObject* Editor);

typedef void __fastcall (__closure *TIEClickLinkEvent)(System::TObject* Sender, int X, int Y, int Index, const System::UnicodeString URL);

enum DECLSPEC_DENUM TIESmoothTask : unsigned char { iestScroll, iestZoom };

typedef void __fastcall (__closure *TIEFinishSmoothTaskEvent)(System::TObject* Sender, TIESmoothTask Task);

typedef void __fastcall (__closure *TViewChangingEvent)(System::TObject* Sender, int Change, double newValue);

typedef void __fastcall (__closure *TIEMouseInResizingGripEvent)(System::TObject* Sender, TIEGrip Grip);

typedef void __fastcall (__closure *TIEBitmapEvent)(System::TObject* Sender, Iexbitmaps::TIEBitmap* Bitmap);

typedef void __fastcall (__closure *TIESpecialKeyEvent)(System::TObject* Sender, System::Word CharCode, System::Classes::TShiftState Shift, bool &Handled);

enum DECLSPEC_DENUM TIEScrollCommand : unsigned char { iescPosition, iescBottom, iescTop, iescLineDown, iescLineUp, iescPageDown, iescPageUp };

typedef void __fastcall (__closure *TIEOnDrawCanvas)(System::TObject* Sender, Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect);

typedef void __fastcall (__closure *TIEOnDrawBackground)(System::TObject* Sender, Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, bool &Handled);

typedef void __fastcall (__closure *TIEOnDrawPolygon)(System::TObject* Sender, int polygon, int point, Vcl::Graphics::TCanvas* Canvas, int x, int y);

enum DECLSPEC_DENUM TIEMouseInteractItems : unsigned char { miZoom, miScroll, miMovingScroll, miSelect, miSelectPolygon, miSelectCircle, miSelectZoom, miSelectMagicWand, miSelectLasso, miSelectChromaKey, miCropTool, miBrushTool, miCloneTool, miRotateTool, miColorFill, miAlphaFill, miMeasureLength, miMeasureRect, miMeasureEllipse, miMeasurePath, miMeasureAngle, miColorPicker, miRetouchTool, miSmoothZoom, miAdjustBlackWhite, miPdfSelectText, miPdfSelectRgn };

typedef System::Set<TIEMouseInteractItems, TIEMouseInteractItems::miZoom, TIEMouseInteractItems::miPdfSelectRgn> TIEMouseInteract;

enum DECLSPEC_DENUM TIEMouseInteractLayerItems : unsigned char { mlMoveLayers, mlResizeLayers, mlRotateLayers, mlCreateImageLayers, mlCreateShapeLayers, mlCreateLineLayers, mlCreatePolylineLayers, mlCreateAngleLayers, mlCreateTextLayers, mlClickCreateLineLayers, mlClickCreatePolylineLayers, mlDrawCreatePolylineLayers, mlClickCreateAngleLayers, mlEditLayerPoints };

typedef System::Set<TIEMouseInteractLayerItems, TIEMouseInteractLayerItems::mlMoveLayers, TIEMouseInteractLayerItems::mlEditLayerPoints> TIEMouseInteractLayers;

class PASCALIMPLEMENTATION TIEGestureOptions : public System::TObject
{
	typedef System::TObject inherited;
	
	
private:
	typedef System::DynamicArray<TIEGestureOptions*> _TIEGestureOptions__1;
	
	
private:
	_TIEGestureOptions__1 fDisables;
	bool fEnabled;
	bool fInertia;
	double fMultiplier;
	bool fSnapValues;
	double fSnapDelta;
	void __fastcall SetEnabled(bool Value);
	void __fastcall AddDisables(TIEGestureOptions* Value);
	
public:
	__property bool Enabled = {read=fEnabled, write=SetEnabled, nodefault};
	__property bool Inertia = {read=fInertia, write=fInertia, nodefault};
	__property double Multiplier = {read=fMultiplier, write=fMultiplier};
	__property bool SnapValues = {read=fSnapValues, write=fSnapValues, nodefault};
	__property double SnapDelta = {read=fSnapDelta, write=fSnapDelta};
public:
	/* TObject.Create */ inline __fastcall TIEGestureOptions() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TIEGestureOptions() { }
	
};


class PASCALIMPLEMENTATION TIEGesturePanOptions : public TIEGestureOptions
{
	typedef TIEGestureOptions inherited;
	
private:
	System::Types::TRect fBoundingBox;
	bool fPanWithSingleFingerVertically;
	bool fPanWithSingleFingerHorizontally;
	
public:
	__property System::Types::TRect BoundingBox = {read=fBoundingBox, write=fBoundingBox};
	__property bool PanWithSingleFingerVertically = {read=fPanWithSingleFingerVertically, write=fPanWithSingleFingerVertically, nodefault};
	__property bool PanWithSingleFingerHorizontally = {read=fPanWithSingleFingerHorizontally, write=fPanWithSingleFingerHorizontally, nodefault};
public:
	/* TObject.Create */ inline __fastcall TIEGesturePanOptions() : TIEGestureOptions() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TIEGesturePanOptions() { }
	
};


class PASCALIMPLEMENTATION TIEGestureZoomOptions : public TIEGestureOptions
{
	typedef TIEGestureOptions inherited;
	
private:
	double fMax;
	double fMin;
	
public:
	__property double Max = {read=fMax, write=fMax};
	__property double Min = {read=fMin, write=fMin};
public:
	/* TObject.Create */ inline __fastcall TIEGestureZoomOptions() : TIEGestureOptions() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TIEGestureZoomOptions() { }
	
};


class PASCALIMPLEMENTATION TIEGestureLayerMoveOptions : public TIEGestureOptions
{
	typedef TIEGestureOptions inherited;
	
private:
	System::Types::TRect fBoundingBox;
	
public:
	__property System::Types::TRect BoundingBox = {read=fBoundingBox, write=fBoundingBox};
public:
	/* TObject.Create */ inline __fastcall TIEGestureLayerMoveOptions() : TIEGestureOptions() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TIEGestureLayerMoveOptions() { }
	
};


class PASCALIMPLEMENTATION TIEGestureLayerRotateOptions : public TIEGestureOptions
{
	typedef TIEGestureOptions inherited;
	
private:
	double fMax;
	double fMin;
	
public:
	__property double Max = {read=fMax, write=fMax};
	__property double Min = {read=fMin, write=fMin};
public:
	/* TObject.Create */ inline __fastcall TIEGestureLayerRotateOptions() : TIEGestureOptions() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TIEGestureLayerRotateOptions() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEViewerGestures : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TIEGesturePanOptions* fPan;
	TIEGestureZoomOptions* fZoom;
	TIEGestureLayerRotateOptions* fLayerRotate;
	TIEGestureLayerMoveOptions* fLayerMove;
	bool __fastcall GetEnabled();
	
public:
	__fastcall TIEViewerGestures();
	__fastcall virtual ~TIEViewerGestures();
	__property bool Enabled = {read=GetEnabled, nodefault};
	__property TIEGesturePanOptions* Pan = {read=fPan};
	__property TIEGestureZoomOptions* Zoom = {read=fZoom};
	__property TIEGestureLayerRotateOptions* LayerRotate = {read=fLayerRotate};
	__property TIEGestureLayerMoveOptions* LayerMove = {read=fLayerMove};
};

#pragma pack(pop)

enum DECLSPEC_DENUM Imageenview__9 : unsigned char { ienoMouseWheelZoom, ienoMarkOuter, ienoDontAssignNavBitmap, ienoDontPaintSrcBitmap, ienoDontRefreshSrcIfNavNotFocused };

typedef System::Set<Imageenview__9, Imageenview__9::ienoMouseWheelZoom, Imageenview__9::ienoDontRefreshSrcIfNavNotFocused> TIENavigatorOptions;

enum DECLSPEC_DENUM TIESelectionBase : unsigned char { iesbClientArea, iesbBitmap };

enum DECLSPEC_DENUM Imageenview__01 : unsigned char { iesoAnimated, iesoSizeable, iesoMoveable, iesoFilled, iesoCutBorders, iesoMarkOuter, iesoCanScroll, iesoSelectTranspLayers, iesoRightButtonSelectLayers, iesoRightButtonTerminatePolySelect, iesoDisableOneClickDeselect, iesoDisableNewSelection, iesoShowCenter, iesoAutoTerminatePolySelect, iesoAllowMoveByKeyboard, iesoCircleSizeable, iesoPolygonSizeable, iesoSelectOnlyImageLayers };

typedef System::Set<Imageenview__01, Imageenview__01::iesoAnimated, Imageenview__01::iesoSelectOnlyImageLayers> TIESelectionOptions;

enum DECLSPEC_DENUM TIESelOp : unsigned char { iespReplace, iespAdd, iespSubtract };

enum DECLSPEC_DENUM Imageenview__11 : unsigned char { iedoDisableAutoFitWhenZoom, iedoMaintainAROnZoomSelect, iedoPaintWhenOffScreen };

typedef System::Set<Imageenview__11, Imageenview__11::iedoDisableAutoFitWhenZoom, Imageenview__11::iedoPaintWhenOffScreen> TIEDisplayOptions;

enum DECLSPEC_DENUM TIEMagicWandMode : unsigned char { iewInclusive, iewExclusive, iewGlobal };

enum DECLSPEC_DENUM TIEChromaKeySelectionMode : unsigned char { iecSubject, iecBackground };

class PASCALIMPLEMENTATION TIEChromaKeyOptions : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TIEChromaKeySelectionMode fMode;
	System::Uitypes::TColor fKeyColor;
	double fTolerance;
	int fSaturation;
	
public:
	__fastcall TIEChromaKeyOptions();
	__property TIEChromaKeySelectionMode Mode = {read=fMode, write=fMode, nodefault};
	__property System::Uitypes::TColor KeyColor = {read=fKeyColor, write=fKeyColor, nodefault};
	__property int Saturation = {read=fSaturation, write=fSaturation, nodefault};
	__property double Tolerance = {read=fTolerance, write=fTolerance};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TIEChromaKeyOptions() { }
	
};


enum DECLSPEC_DENUM TIELayerEvent : unsigned char { ielSelected, ielMoved, ielResized, ielMoving, ielResizing, ielRotating, ielRotated, ielBeginResizing, ielBeginRotating, ielBeginMoving, ielDeselected, ielEdited, ielBeginCreating, ielCreating, ielCreated, ielAction, ielLeftClicked, ielRightClicked, ielDblClicked, ielMouseOver, ielEditedPoints, ielAddedPoint, ielMovedPoint, ielArranged, ielBeforeRemove, ielRemoved, ielEditedProps, ielTextEditorClick, ielTextEditorChange, ielNewLayer };

typedef void __fastcall (__closure *TIELayerNotify)(System::TObject* Sender, int layer, TIELayerEvent event);

typedef void __fastcall (__closure *TIENewLayerEvent)(System::TObject* Sender, int LayerIdx, Iexlayers::TIELayerKind LayerKind);

typedef void __fastcall (__closure *TIEUserInteractionNotify)(System::TObject* Sender, Iexuserinteractions::TIEUserInteractionEvent Event, int Info);

typedef void __fastcall (__closure *TIEMeasureEvent)(System::TObject* Sender, TIEMeasureType MeasureType, Iexlayers::TIELayer* MeasureLayer, double Value, Hyiedefs::TIEUnits &Units);

typedef void __fastcall (__closure *TIEInteractionHintEvent)(System::TObject* Sender, int Operation, System::UnicodeString &Text, int &X, int &Y);

typedef void __fastcall (__closure *TIELayerMoveSizeEvent)(System::TObject* Sender, int layer, TIELayerEvent event, double &PosX, double &PosY, double &Width, double &Height);

typedef void __fastcall (__closure *TIEVirtualKeyEvent)(System::TObject* Sender, unsigned VirtualKey, unsigned KeyData, bool KeyDown);

typedef void __fastcall (__closure *TIESetCursorEvent)(System::TObject* Sender, System::Uitypes::TCursor &Cursor);

enum DECLSPEC_DENUM Imageenview__31 : unsigned char { iegfBegin, iegfInertia, iegfEnd };

typedef System::Set<Imageenview__31, Imageenview__31::iegfBegin, Imageenview__31::iegfEnd> TIEGestureFlags;

enum DECLSPEC_DENUM TIEGestureID : unsigned char { iegiBegin, iegiEnd, iegiZoom, iegiPan, iegiRotate, iegiTwoFingerTap, iegiPressAndTap };

typedef void __fastcall (__closure *TIEImageEnGestureEvent)(System::TObject* Sender, TIEGestureFlags Flags, TIEGestureID ID, System::Types::TSmallPoint Location, int Value, int InertiaX, int InertiaY, int PressAndTapDistance, bool &Handled);

enum DECLSPEC_DENUM TIERSOptions : unsigned char { iersNone, iersMoveToAdapt, iersSyncLayers };

enum DECLSPEC_DENUM TIESoftCropMode : unsigned char { iesfNone, iesfAlphaBlend, iesfGrid, iesfAdd };

enum DECLSPEC_DENUM TIEGripShape : unsigned char { iegsBox, iegsCircle };

struct DECLSPEC_DRECORD TIEGripStyle
{
public:
	int Size;
	System::Uitypes::TColor Color;
	System::Uitypes::TColor FillColor;
	Vcl::Graphics::TBrushStyle BrushStyle;
	TIEGripShape Shape;
};


enum DECLSPEC_DENUM TIELayersResizeAspectRatio : unsigned char { iearDisabled, iearALTKey, iearAlways, iearAlwaysOnCornerGrip, iearLayerDefaultOnCornerGrip };

enum DECLSPEC_DENUM TIERotateMode : unsigned char { iermTextOnly, iermShapeOnly, iermBoth };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEVectorizedSelection : public System::TObject
{
	typedef System::TObject inherited;
	
	
private:
	typedef System::DynamicArray<int> _TIEVectorizedSelection__1;
	
	
private:
	int PointsCapacity;
	void __fastcall CheckCapacity(int requiredSize);
	
public:
	Hyiedefs::TPointArray *Points;
	int PointsCount;
	_TIEVectorizedSelection__1 Values;
	System::Uitypes::TColor Color1;
	System::Uitypes::TColor Color2;
	bool Animated;
	int AniFt;
	int C1;
	Vcl::Graphics::TCanvas* Canvas;
	int RX1;
	int RY1;
	int RX2;
	int RY2;
	bool Enabled;
	bool Sizeable;
	bool ShowCenter;
	Hyiedefs::TRGB *DrawPixelPtr;
	Vcl::Graphics::TBitmap* DrawPixelBitmap;
	int Layout;
	__fastcall TIEVectorizedSelection(Vcl::Graphics::TCanvas* VCanvas, System::Uitypes::TColor VColor1, System::Uitypes::TColor VColor2, bool VAnimated, bool VSizeable, Hyiedefs::PRGB VDrawPixelPtr, Vcl::Graphics::TBitmap* VDrawPixelBitmap);
	__fastcall virtual ~TIEVectorizedSelection();
	void __fastcall RemoveLastPoint();
	void __fastcall RemoveLastPolygon();
	void __fastcall Clear();
	void __fastcall BeginNewPolygon(int Intensity);
	void __fastcall AddPt(int x, int y);
	void __fastcall Move(int ox, int oy, int max_x, int max_y, bool CutSel);
	bool __fastcall IsEmpty();
	int __fastcall CountPolygons();
	void __fastcall SavePointsToStream(System::Classes::TStream* Stream);
	void __fastcall LoadPointsFromStream(System::Classes::TStream* Stream, int LoadingVersion);
	void __fastcall Rasterize(Iexbitmaps::TIEMask* SelectionMask);
	bool __fastcall IsRectangle();
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TImageEnView : public Ieview::TIEView
{
	typedef Ieview::TIEView inherited;
	
private:
	bool fUseDrawDibDraw;
	System::Uitypes::TCursor fLCursor;
	System::Uitypes::TCursor fCursor;
	System::Uitypes::TCursor fWasScreenCursor;
	System::Classes::TNotifyEvent fOnImageChange;
	TIEImageChangeEvent fOnImageChangeEx;
	TViewChangeEvent fOnViewChange;
	Imageenio::TIEImageSeekEvent fOnImageSeek;
	TIEImageEnGestureEvent fOnImageEnGesture;
	TIEFinishSmoothTaskEvent fOnFinishSmoothTask;
	TViewChangingEvent fOnViewChanging;
	Hyieutils::TIEHAlign fImageHorizAlignment;
	Hyieutils::TIEVAlign fImageVertAlignment;
	Hyiedefs::TResampleFilter fZoomFilter;
	Hyiedefs::TResampleFilter fActualZoomFilter;
	bool fDelayZoomFilter;
	bool fMagicWandMaxFilter;
	int fMagicWandSize;
	int fMagicWandTolerance;
	TIEMagicWandMode fMagicWandMode;
	TIEChromaKeyOptions* fChromaKeyOptions;
	double fRXScroll;
	double fRYScroll;
	TIEGridKind fDisplayGridKind;
	int fDisplayGridLyr;
	System::Types::TPoint fHighlightedPixel;
	int fAniCounter;
	System::Classes::TNotifyEvent fOnPaint;
	TIEMouseInResizingGripEvent fOnMouseInResizingGrip;
	TIEBitmapEvent fOnCustomRetouch;
	bool fDelayDisplaySelection;
	Hyiedefs::TIEProgressEvent fOnProgress;
	Ieview::TIETask fProgressTask;
	System::Classes::TNotifyEvent fOnFinishWork;
	System::Classes::TNotifyEvent fOnImageLoaded;
	Imageenio::TIEAcquireBitmapEvent fOnAcquireBitmap;
	Imageenio::TIEPrintPageEvent fOnPrintPage;
	bool fFullUpdateRequest;
	bool fBlockPaint;
	bool fRectMoving;
	System::Classes::TNotifyEvent fOnDrawBackBuffer;
	TIELayerNotify fOnLayerNotify;
	TIELayerNotify fOnLayerNotifyEx;
	TIELayerMoveSizeEvent fOnLayerMoveSize;
	System::Classes::TNotifyEvent fOnLayerSelectionChange;
	TIENewLayerEvent fOnNewLayer;
	TIEUserInteractionNotify fOnUserInteraction;
	TIEMeasureEvent fOnMeasure;
	TIEInteractionHintEvent fOnInteractionHint;
	double fSelectionAspectRatio;
	int fSelectionAbsWidth;
	int fSelectionAbsHeight;
	TIESpecialKeyEvent fOnSpecialKey;
	TImageEnView* fNavigator;
	TIENavigatorOptions fNavigatorOptions;
	bool fNavigatorInside;
	bool fIsNavigator;
	Iexbitmaps::TIEBitmap* fNavigatorBackBuffer;
	System::Types::TRect fNavigatorActualRect;
	bool fUpdateInsideUpdate;
	int fDelayTimer;
	System::Types::TRect fLyrResizingClientAreaBox;
	double fMouseScrollRate;
	TIEOnDrawPolygon fOnDrawPolygon;
	Hyiedefs::TIEAntialiasMode fLayersRotationFilter;
	bool fLayersRotationUseFilterOnPreview;
	int fUpdate_MaskCache;
	bool fLayersSelectConstrains;
	TIERotateMode fLayersTextRotateMode;
	TIELayersResizeAspectRatio fLayersResizeAspectRatio;
	double fLayersResizingAR;
	TIEFastDrawing fLayersFastDrawing;
	bool fLayersFastOutput;
	bool fLayersCropped;
	TIEPolylineClosingMode fLayersAutoClosePolylines;
	int fLayersCurvePoints;
	int fSelectionGridWidth;
	int fSelectionGridHeight;
	int fMarkOuterAlpha;
	System::Uitypes::TColor fMarkOuterColor;
	bool fMarkOuterLive;
	TIESetCursorEvent fOnSetCursor;
	double fLutLastZoomX;
	double fLutLastZoomY;
	int fLutLastFRX;
	int fLutLastFRY;
	int fLutLastMaxLayerWidth;
	int fLutLastMaxLayerHeight;
	int fHSVX1;
	int fHSVY1;
	int fo1x;
	int fo1y;
	int fo2x;
	int fo2y;
	int frx;
	int fry;
	bool fIEBitmapValid;
	int fBitmapWidth;
	int fBitmapHeight;
	Iextransitions::TIETransitionEffects* fTransition;
	Iextransitions::TIETransitionType fTransitionEffect;
	int fTransitionDuration;
	int fMinBitmapSize;
	System::Classes::TNotifyEvent fOnDShowNewFrame;
	System::Classes::TNotifyEvent fOnDShowEvent;
	TIEMediaFoundationNotifyEvent fOnMediaFoundationNotify;
	TIEOnDrawBackground fOnDrawBackground;
	TIEOnDrawCanvas fOnDrawCanvas;
	NativeUInt fOldHandle;
	Iexlayers::TIEDrawLayerEvent fOnDrawLayer;
	Iexlayers::TIEDrawLayerEvent fOnBeforeDrawLayer;
	Iexlayers::TIEDrawLayerBoxEvent fOnDrawLayerBox;
	Iexlayers::TIEDrawLayerGrip fOnDrawLayerGrip;
	bool fVisibleSelection;
	bool fFirstTimeSetCursor;
	int fLayersRotateStep;
	Hyiedefs::TResampleFilter fLayersMergeFilter;
	Vcl::Graphics::TBitmap* fDrawPixelBitmap;
	Hyiedefs::TRGB *fDrawPixelPtr;
	TIESoftCropMode fSoftCrop;
	int fSoftCropValue;
	bool fEnableInteractionHints;
	System::UnicodeString fInteractionHint;
	int fInteractionHintX;
	int fInteractionHintY;
	System::UnicodeString fInteractionHintMinText;
	bool fInteractionHintCentered;
	System::Classes::TList* fPostFrames;
	bool fPlaying;
	int fPlayTimer;
	bool fPlayLoop;
	double fPlaySpeed;
	bool fNeedUpdateLiveBackground;
	Iexbitmaps::TIEBitmap* fLiveBackground;
	System::Contnrs::TObjectList* fUserInteractions;
	Iexuserinteractions::TIECropToolInteraction* fCropTool;
	Iexuserinteractions::TIEBrushToolInteraction* fBrushTool;
	Iexuserinteractions::TIERetouchToolInteraction* fRetouchTool;
	Iexuserinteractions::TIECloneToolInteraction* fCloneTool;
	Iexuserinteractions::TIERotateToolInteraction* fRotateTool;
	Iexuserinteractions::TIEFillToolInteraction* fFillTool;
	Iexuserinteractions::TIEButtonInteraction* fButtonParams;
	Ieview::TIEVButtonClickEvent fOnButtonClick;
	Ieview::TIEVButtonStateEvent fOnButtonState;
	Iexuserinteractions::TIEPdfViewerInteraction* fPdfViewer;
	bool fKeyboardShortcuts;
	Iexrulers::TRulerDirs fShowRulers;
	Iexrulers::TIEViewRulerParams* fRulerParams;
	double fScaleX;
	double fScaleY;
	int fEditingLayer;
	Hyiedefs::TIEEdit* fTextEditor;
	Iexrichedit::TIERichEdit* fRichEditor;
	Vcl::Controls::TKeyEvent fOnTextEditorKeyDown;
	TIETextEditorEvent fOnActivateTextEditor;
	TIETextEditorEvent fOnDeactivateTextEditor;
	int fNextLayerPosition;
	bool fModified;
	Ieview::TIEViewModes fAutoToolbars;
	Iextoolbars::TImageEnViewHoverToolbar* fToolbar;
	Ieview::TIEViewModes fPopupMenus;
	Vcl::Menus::TPopupMenu* fPopup;
	TIEClickLinkEvent fOnClickLink;
	Ieview::TIEPointerEvent fOnPointer;
	Ieview::TIEPointerExEvent fOnPointerEx;
	bool fPointerDown;
	System::Types::TPoint fLastPenPos;
	unsigned fLastPenPres;
	void __fastcall RemovePostFrames(int index);
	void __fastcall AniPolyFunc(System::TObject* Sender, bool UseLockPaint);
	void __fastcall TimerEvent(System::TObject* Sender);
	void __fastcall SetViewX(int v);
	void __fastcall SetViewY(int v);
	void __fastcall SetZoom(double v);
	void __fastcall SetZoomX(double v);
	void __fastcall SetZoomY(double v);
	int __fastcall GetSelX1();
	int __fastcall GetSelY1();
	int __fastcall GetSelX2();
	int __fastcall GetSelY2();
	void __fastcall SetCenter(bool value);
	bool __fastcall GetCenter();
	void __fastcall SetImageHorizAlignment(Hyieutils::TIEHAlign value);
	void __fastcall SetImageVertAlignment(Hyieutils::TIEVAlign value);
	TIEMouseInteract __fastcall GetMouseInteractGeneral();
	TIEMouseInteractLayers __fastcall GetMouseInteractLayers();
	Iexuserinteractions::TIECropToolInteraction* __fastcall GetCropTool();
	Iexuserinteractions::TIEBrushToolInteraction* __fastcall GetBrushTool();
	Iexuserinteractions::TIERetouchToolInteraction* __fastcall GetRetouchTool();
	Iexuserinteractions::TIECloneToolInteraction* __fastcall GetCloneTool();
	Iexuserinteractions::TIEFillToolInteraction* __fastcall GetFillTool();
	Iexuserinteractions::TIERotateToolInteraction* __fastcall GetRotateTool();
	Iexuserinteractions::TIELayerCreateInteraction* __fastcall GetLayerCreateTool();
	Iexuserinteractions::TIELayerPointsInteraction* __fastcall GetLayerPointsTool();
	Iexuserinteractions::TIEPdfViewerInteraction* __fastcall GetPdfViewer();
	Iexuserinteractions::TIEButtonInteraction* __fastcall GetButtonParams();
	void __fastcall DoSelectionChange();
	void __fastcall DoSelectionChanging();
	void __fastcall DoBeforeSelectionChange();
	void __fastcall DoMouseInResizingGrip(TIEGrip Grip);
	void __fastcall DoMouseInSel();
	void __fastcall SetSelectionOptions(TIESelectionOptions v);
	void __fastcall SetDisplayOptions(TIEDisplayOptions v);
	Hyiedefs::TIERectangle __fastcall GetSelectedRect();
	TIEGrip __fastcall GetResizingGrip(int x, int y, System::Classes::TShiftState Shift);
	int __fastcall GetMovingGrip(int x, int y, System::Classes::TShiftState Shift);
	TIEGrip __fastcall SelectResizeEx(TIEGrip grip, int newx, int newy, bool AspectRatio, bool IsKeyboard);
	int __fastcall SelectMoveEx(int fMoving, int ox, int oy, bool cutBorders);
	bool __fastcall GetAutoFixRotationBorders();
	void __fastcall SetAutoFixRotationBorders(bool v);
	bool __fastcall GetDisplayGrid();
	void __fastcall SetDisplayGrid(bool v);
	TIEGridKind __fastcall CurrentDisplayGridKind();
	void __fastcall SetDisplayGridKind(TIEGridKind v);
	void __fastcall SetDisplayGridLyr(int v);
	int __fastcall GetLayersCount();
	void __fastcall SetLayersCaching(int v);
	Iexlayers::TIELayer* __fastcall GetLayer(int idx);
	void __fastcall PaintSelection(Vcl::Graphics::TBitmap* OutBitmap);
	void __fastcall PaintPixelGrid(Vcl::Graphics::TBitmap* OutBitmap);
	void __fastcall PaintGuideLines(Vcl::Graphics::TCanvas* Canvas);
	void __fastcall PaintRulerGuides(Vcl::Graphics::TCanvas* Canvas);
	HIDESBASE void __fastcall SetCursor(System::Uitypes::TCursor Value);
	void __fastcall SetDelayTimer(int Value);
	int __fastcall GetDelayTimer();
	void __fastcall DoDrawVersion();
	void __fastcall SetSelectionMaskDepth(int value);
	void __fastcall MouseResizeLayer(int clientlx, int cliently, bool AltPressed);
	MESSAGE void __fastcall DShowNewFrame(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall DShowEvent(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall MediaFoundationNotify(Winapi::Messages::TMessage &Message);
	void __fastcall SelEllipsePoints(int CenterX, int CenterY, int Width, int Height, int PtCount = 0x0);
	void __fastcall MouseSelectEllipse(int x, int y, System::Classes::TShiftState Shift);
	void __fastcall MouseSelectRectangle(int x, int y, System::Classes::TShiftState Shift);
	void __fastcall SetSelectionAspectRatio(double value);
	int __fastcall GetSavedSelectionsCount();
	bool __fastcall GetForceALTkey();
	void __fastcall SetForceALTkey(bool v);
	void __fastcall SwapSelectionBase();
	void __fastcall NavigatorSelectionChanging(System::TObject* Sender);
	void __fastcall NavigatorMouseWheel(System::TObject* Sender, System::Classes::TShiftState Shift, int WheelDelta, const System::Types::TPoint &MousePos, bool &Handled);
	void __fastcall SetNavigatorRect();
	System::UnicodeString __fastcall GetImageEnVersion();
	void __fastcall SetImageEnVersion(System::UnicodeString Value);
	HIDESBASE MESSAGE void __fastcall WMGestureNotify(Hyiedefs::TIEWMGestureNotify &Msg);
	HIDESBASE MESSAGE void __fastcall WMGesture(Winapi::Messages::TMessage &Msg);
	MESSAGE void __fastcall WMPointerUpdate(Ieview::TWMPointerUpdate &msg);
	bool __fastcall GetTransitionRunning();
	void __fastcall SetupTransition();
	void __fastcall SetOnTransitionStop(System::Classes::TNotifyEvent value);
	System::Classes::TNotifyEvent __fastcall GetOnTransitionStop();
	void __fastcall SetOnTransitionStep(Iextransitions::TIETransitionStepEvent value);
	Iextransitions::TIETransitionStepEvent __fastcall GetOnTransitionStep();
	void __fastcall SetTransitionTiming(Iextransitions::TIETransitionTiming value);
	Iextransitions::TIETransitionTiming __fastcall GetTransitionTiming();
	void __fastcall SetOnTransitionPaint(const Iextransitions::TIEOnTransitionPaint Value);
	Iextransitions::TIEOnTransitionPaint __fastcall GetOnTransitionPaint();
	HIDESBASE MESSAGE void __fastcall CMParentFontChanged(Vcl::Controls::TCMParentFontChanged &Message);
	System::Types::TRect __fastcall AdjustRectToAspectRatio(const System::Types::TRect &ARect, bool TransitionActive);
	void __fastcall DoOnDrawPolygon(int polygon, int point, Vcl::Graphics::TCanvas* Canvas, int x, int y);
	Vcl::Graphics::TBitmap* __fastcall GetBackBuffer();
	void __fastcall SetOnSaveUndo(Imageenproc::TIESaveUndoEvent value);
	Imageenproc::TIESaveUndoEvent __fastcall GetOnSaveUndo();
	void __fastcall SetOnUndoRedo(Imageenproc::TIEOnUndoRedoEvent value);
	Imageenproc::TIEOnUndoRedoEvent __fastcall GetOnUndoRedo();
	void __fastcall ZoomSelectionEx(bool AspectRatio, bool CallDoZoomIn);
	void __fastcall SetSoftCrop(TIESoftCropMode v);
	void __fastcall SetSoftCropValue(int v);
	void __fastcall SetHighlightedPixel(const System::Types::TPoint &v);
	void __fastcall SetupAniPolyTimer();
	void __fastcall SetupDrawPixelBitmap();
	void __fastcall TerminatePolySelection(bool ShiftKey, bool removeLastPoint);
	void __fastcall DrawMarkOutNavigator(const System::Types::TRect &rc);
	void __fastcall SetHighlightedPixelColor(System::Uitypes::TColor c);
	int __fastcall GetSelectionGridSize();
	void __fastcall SetSelectionGridSize(int value);
	void __fastcall SetPlaying(const bool v);
	void __fastcall StartPlayTimer();
	void __fastcall StopPlayTimer();
	virtual void __fastcall DoImageEnGestureEvent(const Hyiedefs::TIEGESTUREINFO &GInfo, bool &Handled);
	double __fastcall PerformRotateSnap(double Value);
	double __fastcall PerformLayerMoveSnap(double Value);
	double __fastcall PerformZoomSnap(double Value);
	void __fastcall SetLayerOptions(const TIELayerOptions Value);
	System::Classes::TStringList* __fastcall GetLayerDefaults();
	void __fastcall SetLayersCropped(const bool Value);
	int __fastcall MultiSelectedLayersCount();
	Hyiedefs::TIEArrayOfInteger __fastcall MultiSelectedLayersList();
	void __fastcall UpdateLiveBackground(Iexbitmaps::TIEBitmap* Src);
	bool __fastcall GetAsyncLoading();
	void __fastcall SetAsyncLoading(bool v);
	void __fastcall SetShowRulers(const Iexrulers::TRulerDirs v);
	Iexrulers::TRulerClickEvent __fastcall GetOnRulerClick();
	Iexrulers::TRulerGripClickEvent __fastcall GetOnRulerGripClick();
	Iexrulers::TRulerGetTextEvent __fastcall GetOnRulerGetText();
	Iexrulers::TRulerGripClickEvent __fastcall GetOnRulerGripDblClick();
	Iexrulers::TRulerGripPosChangeEvent __fastcall GetOnRulerGripPosChange();
	void __fastcall SetOnRulerClick(const Iexrulers::TRulerClickEvent Value);
	void __fastcall SetOnRulerGetText(const Iexrulers::TRulerGetTextEvent Value);
	void __fastcall SetOnRulerGripClick(const Iexrulers::TRulerGripClickEvent Value);
	void __fastcall SetOnRulerGripDblClick(const Iexrulers::TRulerGripClickEvent Value);
	void __fastcall SetOnRulerGripPosChange(const Iexrulers::TRulerGripPosChangeEvent Value);
	Ieview::TIEVButtons __fastcall GetShowButtons();
	void __fastcall SetShowButtons(const Ieview::TIEVButtons v);
	int __fastcall fIEBitmap_Width();
	int __fastcall fIEBitmap_Height();
	bool __fastcall GetModified();
	void __fastcall SetModified(bool value);
	void __fastcall SetZoneCursor(const Ieview::TIECursorShape Value);
	void __fastcall SetZoneCursorSize(const int Value);
	int __fastcall GetZoneCursorSize();
	bool __fastcall IsPlaySpeedStored();
	void __fastcall SetAutoToolbars(Ieview::TIEViewModes v);
	void __fastcall SetPopupMenus(Ieview::TIEViewModes v);
	void __fastcall ReadMouseInteract(System::Classes::TReader* Reader);
	void __fastcall ReadAutoFit(System::Classes::TReader* Reader);
	void __fastcall ReadLegacyBooleanProp(System::Classes::TReader* Reader);
	
protected:
	int fDelayZoomTicks;
	int fDelayAniSelTicks;
	int fViewStable;
	int fSelStable;
	bool fUpdateBackBuffer;
	Iexbitmaps::TIEBitmap* fBackBuffer;
	double fZoomX;
	double fZoomY;
	double fZoomD100X;
	double f100DZoomX;
	double fZoomD100Y;
	double f100DZoomY;
	NativeUInt fHDrawDib;
	int fLockPaint;
	int fOffX;
	int fOffY;
	int fExtX;
	int fExtY;
	int fZZWW;
	int fZZHH;
	int fViewX;
	int fViewY;
	int fUpdateLocked;
	Hyiedefs::TBitmapInfoHeader256 fBitmapInfoHeader256;
	bool fAutoStretch;
	bool fAutoShrink;
	double fFitCropping;
	bool fTempDisableAutoFit;
	bool fUpdateInvalidate;
	bool fShowLegacyWarning;
	bool fSelected;
	bool fPolySelecting;
	bool fLassoSelecting;
	bool fRectSelecting;
	bool fCircSelecting;
	TIEGrip fSelectResizing;
	int fSelectMoving;
	int fMMoveX;
	int fMMoveY;
	int fHSX0;
	int fHSY0;
	int fHSX1;
	int fHSY1;
	int fPredX;
	int fPredY;
	int fPredLX;
	int fPredLY;
	int fMouseDownX;
	int fMouseDownY;
	int fLastMouseMoveX;
	int fLastMouseMoveY;
	double fBaseBlackValue;
	double fBaseWhiteValue;
	TIESelectionBase fSelectionBase;
	TIESelectionBase fSavedSelectionBase;
	System::Classes::TNotifyEvent fOnSelectionChanging;
	System::Classes::TNotifyEvent fOnSelectionChange;
	System::Classes::TNotifyEvent fOnBeforeSelectionChange;
	System::Classes::TNotifyEvent fOnMouseInSel;
	TIESelectionOptions fSelectionOptions;
	TIEDisplayOptions fDisplayOptions;
	int fStartingPolyCount;
	TIEVectorizedSelection* fVectorizedSelection;
	Iexbitmaps::TIEMask* fSelectionMask;
	int fSelectionMaskDepth;
	int fSelectionIntensity;
	System::Uitypes::TColor fSelColor1;
	System::Uitypes::TColor fSelColor2;
	bool fDragSelectingLayers;
	bool fAsyncLoading;
	TIEGripStyle fGripStyle;
	bool fExtendedGrips;
	TIEGripStyle fLyrGripStyle;
	TIEShiftLock fShiftKeyLock;
	bool fMouseMoveScrolling;
	System::Classes::TList* fSavedSelection;
	bool fEnableShiftKey;
	Vcl::Extctrls::TTimer* fAnimPolyTimer;
	Vcl::Extctrls::TTimer* fSmoothScrollTimer;
	int fSmoothScrollDestX;
	int fSmoothScrollDestY;
	int fSmoothScrollValue;
	Vcl::Extctrls::TTimer* fSmoothZoomTimer;
	double fSmoothZoomDest;
	int fSmoothZoomValue;
	System::Types::TPoint fSmoothZoomPos;
	TIEMouseInteract fMsInteractGeneral;
	TIEMouseInteractLayers fMsInteractLayers;
	TIEMouseInteract fPrevMsInteractGeneral;
	TIEMouseInteractLayers fPrevMsInteractLayers;
	int flx1;
	int fly1;
	int flx2;
	int fly2;
	bool fEnableAlphaChannel;
	Imageenio::TImageEnIO* fImageEnIO;
	Imageenproc::TImageEnProc* fImageEnProc;
	System::Classes::TList* fLayers;
	int fLayersCurrent;
	Hyiedefs::TIERectangle fLayersRect;
	TIELayerOptions fLayerOptions;
	System::Classes::TStringList* fLayerDefaults;
	bool fLayersDrawBox;
	int fLayersCaching;
	int fMovingLayer;
	bool fLayerMoved;
	int fRotatingLayer;
	double fRotatingLayerOffset;
	System::Types::TPoint fRotatingLayerCenter;
	bool fRotatingLayerAlternate;
	int fMovingRotationCenter;
	TIEGrip fLayerResizing;
	bool fMovResRotLayerStarted;
	Hyiedefs::IntegerArray *fGXScr2Bmp;
	Hyiedefs::IntegerArray *fGYScr2Bmp;
	int fGXScr2BmpSize;
	int fGYScr2BmpSize;
	Hyiedefs::IntegerArray *fXScr2Bmp;
	Hyiedefs::IntegerArray *fYScr2Bmp;
	int fXScr2BmpSize;
	int fYScr2BmpSize;
	Hyiedefs::IntegerArray *fXBmp2Scr;
	Hyiedefs::IntegerArray *fYBmp2Scr;
	Hyiedefs::IntegerArray *fGXBmp2Scr;
	Hyiedefs::IntegerArray *fGYBmp2Scr;
	int fXBmp2ScrSize;
	int fYBmp2ScrSize;
	bool fAutoCursors;
	Ieview::TIECursorShape fZoneCursor;
	System::Types::TPoint fZoneCursorSize;
	Ieview::TIECursorShape fCurrZoneCursor;
	System::Types::TPoint fCurrZoneCursorSize;
	System::Types::TRect fLastZoneCursorRect;
	System::Types::TRect fPendingInvalidateRect;
	Imageenproc::TIESaveUndoEvent fOnSaveUndo;
	Imageenproc::TIEOnUndoRedoEvent fOnUndoRedo;
	TIEVirtualKeyEvent fOnVirtualKey;
	Vcl::Graphics::TPen* fLayerBoxPen;
	System::Uitypes::TColor fHighlightedPixelColor;
	TIEViewerGestures* fGestures;
	int fGestureStartValue;
	int fGestureStartX;
	int fGestureStartY;
	double fGestureBaseZoom;
	int fGestureBaseViewX;
	int fGestureBaseViewY;
	double fGestureBaseRotate;
	int fGestureBasePosX;
	int fGestureBasePosY;
	virtual void __fastcall SetBackground(System::Uitypes::TColor cl);
	void __fastcall PolyPaintLastLine();
	virtual void __fastcall Initialize();
	double __fastcall _GetIdealZoom(bool CanStretch, bool CanShrink);
	void __fastcall DoSize();
	void __fastcall DoDoubleClickEx(int X, int Y, bool ShiftKey);
	HIDESBASE MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Message);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMVScroll(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMHScroll(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMMouseHWheel(Winapi::Messages::TMessage &Message);
	DYNAMIC bool __fastcall PaletteChanged(bool Foreground);
	HIDESBASE MESSAGE void __fastcall WMLButtonDblClk(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMKillFocus(Winapi::Messages::TWMKillFocus &Msg);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Winapi::Messages::TWMSetFocus &Msg);
	MESSAGE void __fastcall CMWantSpecialKey(Winapi::Messages::TWMKey &Msg);
	HIDESBASE MESSAGE void __fastcall WMPaint(Winapi::Messages::TWMPaint &Message);
	MESSAGE void __fastcall IEMUpdate(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall IEMUpdateToolbar(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall IEMProgress(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall IEMFinishWork(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall IEMImageLoaded(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CNKEYDOWN(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CNKEYUP(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMSYSKEYDOWN(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMChar(Winapi::Messages::TWMKey &Message);
	MESSAGE void __fastcall WMGetDlgCode(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall WMSYSKEYUP(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMTimer(Winapi::Messages::TWMTimer &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Winapi::Messages::TMessage &Message);
	void __fastcall ShowSelectionEx(bool d);
	void __fastcall HideSelectionEx(bool dd);
	int __fastcall GetIdealComponentWidth();
	int __fastcall GetIdealComponentHeight();
	int __fastcall GetIdealImageWidth();
	int __fastcall GetIdealImageHeight();
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	System::Types::TPoint __fastcall GetPolySel(int idx);
	int __fastcall GetPolySelCount();
	virtual void __fastcall SetMouseInteractGeneral(TIEMouseInteract v);
	virtual void __fastcall SetMouseInteractLayers(TIEMouseInteractLayers v);
	void __fastcall SetMouseInteractEx(TIEMouseInteract mi, TIEMouseInteractLayers ml, bool SetLayerMI);
	virtual void __fastcall ViewChange(int c);
	virtual void __fastcall ViewChanging(int c, double &newValue);
	void __fastcall ViewChanging2(int c, int &newValue);
	void __fastcall SetZoomFilter(Hyiedefs::TResampleFilter v);
	virtual void __fastcall SubMouseMoveScroll(int scx, int scy);
	void __fastcall MouseMoveScroll();
	virtual Vcl::Graphics::TBitmap* __fastcall GetFBitmap();
	virtual Iexbitmaps::TIEBitmap* __fastcall GetIEBitmap();
	void __fastcall SetVisibleSelection(bool vv);
	Hyiedefs::PPointArray __fastcall GetPolySelArray();
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyUp(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	void __fastcall AddSelPointEx(int x, int y);
	void __fastcall SelectEx(int x1, int y1, int x2, int y2, TIESelOp Op, bool aspectratio, bool adjRect);
	HIDESBASE virtual int __fastcall GetClientWidth();
	int __fastcall GetClientWidthExRulers();
	HIDESBASE virtual int __fastcall GetClientHeight();
	int __fastcall GetClientHeightExRulers();
	virtual bool __fastcall HasParentWindow();
	void __fastcall SetSelColor1(System::Uitypes::TColor v);
	void __fastcall SetSelColor2(System::Uitypes::TColor v);
	Imageenio::TImageEnIO* __fastcall GetImageEnIO();
	Imageenproc::TImageEnProc* __fastcall GetImageEnProc();
	void __fastcall SetEnableAlphaChannel(bool v);
	virtual void __fastcall SetOnProgress(Hyiedefs::TIEProgressEvent v);
	virtual System::Classes::TNotifyEvent __fastcall GetOnFinishWork();
	virtual void __fastcall SetOnFinishWork(System::Classes::TNotifyEvent v);
	virtual void __fastcall SetOnAcquireBitmap(Imageenio::TIEAcquireBitmapEvent v);
	virtual Imageenio::TIEAcquireBitmapEvent __fastcall GetOnAcquireBitmap();
	virtual void __fastcall SetOnPrintPage(Imageenio::TIEPrintPageEvent v);
	virtual Imageenio::TIEPrintPageEvent __fastcall GetOnPrintPage();
	virtual Hyiedefs::TIEProgressEvent __fastcall GetOnProgress();
	Iexbitmaps::TIEBitmap* __fastcall GetAlphaChannel();
	bool __fastcall RequiresScrollBars();
	virtual void __fastcall SetLayersCurrent(int Value);
	void __fastcall SyncBitmapToCurrentLayer();
	bool __fastcall SyncLayers();
	bool __fastcall MouseChangingLayers();
	virtual bool __fastcall GetLegacyBitmap();
	virtual void __fastcall SetLegacyBitmap(bool Value);
	virtual void __fastcall CreateCoordConvLUT();
	virtual void __fastcall CalcPaintCoords();
	void __fastcall CalcPaintCoordsEx(int &XSrc, int &YSrc, int &SrcWidth, int &SrcHeight, int &DstWidth, int &DstHeight, int tViewX, int tViewY);
	virtual void __fastcall UpdateLimits();
	int __fastcall QuantizeViewX(int vx);
	int __fastcall QuantizeViewY(int vy);
	void __fastcall SetSelectionIntensity(int value);
	void __fastcall SetLayersDrawBox(bool value);
	Iexlayers::TIELayer* __fastcall GetCurrentLayer();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	bool __fastcall IsPointOverLayer(int ScrX, int ScrY, int layer, int OverlapPx = 0x0);
	void __fastcall OnSmoothSetView(System::TObject* Sender);
	void __fastcall StopSmoothScroll();
	void __fastcall OnSmoothZoom(System::TObject* Sender);
	void __fastcall StopSmoothZoom();
	virtual void __fastcall DrawSelectionGrid(int x1, int y1, int x2, int y2);
	virtual void __fastcall AfterDrawLayer(int layerIndex, Iexbitmaps::TIEBitmap* DestBitmap, const System::Types::TRect &DestRect);
	void __fastcall SetVisibleBitmapRect(const System::Types::TRect &ARect);
	System::Types::TRect __fastcall GetVisibleBitmapRect();
	System::Types::TRect __fastcall GetVisibleBitmapRect_Scr();
	bool __fastcall LayersAllowMultiSelect();
	void __fastcall MoveSelByKey(System::Word VKey, System::Classes::TShiftState ss);
	void __fastcall SetScaleX(double v);
	void __fastcall SetScaleY(double v);
	bool __fastcall GetAutoFit();
	void __fastcall SetAutoFit(bool v);
	void __fastcall SetAutoShrink(bool v);
	void __fastcall SetAutoStretch(bool v);
	void __fastcall SetFitCropping(double v);
	bool __fastcall UserInteractions_MouseDownExclusive(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall UserInteractions_MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	bool __fastcall UserInteractions_MouseMoveExclusive(System::Classes::TShiftState Shift, int X, int Y, bool Captured);
	void __fastcall UserInteractions_MouseMove(System::Classes::TShiftState Shift, int X, int Y, bool Captured);
	bool __fastcall UserInteractions_MouseUpExclusive(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall UserInteractions_MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall UserInteractions_VirtualKey(unsigned VKey, unsigned KeyData, bool KeyDown);
	void __fastcall UserInteractions_PaintRect(const System::Types::TRect &UpdateRect);
	bool __fastcall UserInteractions_PaintRectExclusive(const System::Types::TRect &UpdateRect);
	void __fastcall UserInteractions_PaintBackBuffer();
	bool __fastcall UserInteractions_NeedBackBufferUpdate();
	bool __fastcall UserInteractions_NeedLayerBox(int idx);
	void __fastcall UserInteractions_ImageChanged();
	bool __fastcall UserInteractions_DoubleClickExclusive(int X, int Y);
	int __fastcall GetDPIX();
	int __fastcall GetDPIY();
	virtual void __fastcall SetDPIX(int dpiX);
	virtual void __fastcall SetDPIY(int dpiY);
	bool __fastcall GetLayersRotationDelayFilterOnPreview();
	void __fastcall SetLayersRotationDelayFilterOnPreview(bool value);
	bool __fastcall GetLayersRotationAntialias();
	void __fastcall SetLayersRotationAntialias(bool v);
	void __fastcall UpdateTextEditor();
	void __fastcall TextEditorKeyDown(System::TObject* Sender, System::Word &Key, System::Classes::TShiftState Shift);
	void __fastcall TextEditorOnChange(System::TObject* Sender);
	void __fastcall TextEditorOnClick(System::TObject* Sender);
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual void __fastcall DoWMMouseWheel(int Direction, int MouseX, int MouseY);
	DYNAMIC void __fastcall DoContextPopup(const System::Types::TPoint &MousePos, bool &Handled);
	void __fastcall SetShowLegacyWarning(bool v);
	void __fastcall UpdateToolbar();
	
public:
	Iexbitmaps::TIEBitmap* fIEBitmap;
	Vcl::Graphics::TBitmap* fBitmap;
	bool fInsideUpdate;
	bool fPendingLayersChange;
	bool fImageSet;
	__fastcall virtual TImageEnView(System::Classes::TComponent* Owner);
	__fastcall virtual ~TImageEnView();
	virtual void __fastcall Paint();
	virtual void __fastcall PaintToEx(Iexbitmaps::TIEBitmap* ABitmap, System::Types::PRect UpdRect, bool drawBackground, bool drawGadgets);
	void __fastcall GetRenderRectangles(int &xDst, int &yDst, int &dxDst, int &dyDst, int &xSrc, int &ySrc, int &dxSrc, int &dySrc);
	void __fastcall GetMinViewXY(int &mx, int &my, bool AllowNegative);
	void __fastcall GetMaxViewXY(int &mx, int &my);
	bool __fastcall DoVertScroll(TIEScrollCommand command, int Position);
	bool __fastcall DoHorizScroll(TIEScrollCommand command, int Position);
	void __fastcall DrawBackgroundToCanvas(Vcl::Graphics::TCanvas* ACanvas, int iWidth = 0xffffffff, int iHeight = 0xffffffff);
	void __fastcall MoveContentTo(TImageEnView* Destination);
	void __fastcall SaveState(const System::UnicodeString FileName)/* overload */;
	void __fastcall SaveState(System::Classes::TStream* Stream)/* overload */;
	void __fastcall LoadState(const System::UnicodeString FileName)/* overload */;
	void __fastcall LoadState(System::Classes::TStream* Stream)/* overload */;
	void __fastcall ResetState();
	virtual void __fastcall DoLayerNotify(int layer, TIELayerEvent event);
	virtual void __fastcall DoNewLayer(int LayerIdx, Iexlayers::TIELayerKind LayerKind);
	void __fastcall SetZoomNoUpdate(double v, System::Uitypes::TScrollStyle UpdateDir);
	void __fastcall SetZoomEx(double v, System::Uitypes::TScrollStyle UpdateDir = (System::Uitypes::TScrollStyle)(0x3), bool ResetViewY = false);
	void __fastcall SetTempCursor(System::Uitypes::TCursor Value, bool bOnMouseDown = false);
	void __fastcall RestoreCursor();
	bool __fastcall IsCursorCustom();
	void __fastcall SetCurrentZoneCursor(Ieview::TIECursorShape Value, int Width = 0x0, int Height = 0x0);
	void __fastcall SetViewStable(bool v);
	void __fastcall SetSelStable(bool v);
	bool __fastcall GetSelStable();
	void __fastcall AddToPendingInvalidateRect(const System::Types::TRect &rclip, bool Reset = false);
	void __fastcall InvalidatePendingRect();
	System::Types::TRect __fastcall PaintZoneCursor(Vcl::Graphics::TCanvas* Canvas, Ieview::TIECursorShape Shape, const System::Types::TPoint &CenterPt, int SizeX, int SizeY, bool DrawCrossHair = true);
	void __fastcall RestorePrevMouseInteractions();
	void __fastcall SetInteractionHintEx(int Op, const System::UnicodeString Text, int x, int y, System::UnicodeString minText = System::UnicodeString(), bool Center = false);
	__property System::UnicodeString InteractionHint = {read=fInteractionHint};
	bool __fastcall SetLayersCurrentEx(int Value, bool bUserAction, bool bDeselectAll, bool DoUpdate = true);
	void __fastcall SetMovingLayer(int idx);
	void __fastcall CalcEdges(int &LeftEdge, int &TopEdge, int &RightEdge, int &BottomEdge, bool NoVertSB, bool NoHorizSB);
	void __fastcall DoZoomIn(double &NewZoom);
	void __fastcall DoZoomOut(double &NewZoom);
	virtual void __fastcall Select(int x1, int y1, int x2, int y2, TIESelOp Op = (TIESelOp)(0x0));
	void __fastcall SelectMagicWand(int x, int y, TIESelOp Op = (TIESelOp)(0x0));
	void __fastcall SelectColors(Hyiedefs::TRGB StartColor, Hyiedefs::TRGB EndColor, TIESelOp Op = (TIESelOp)(0x0))/* overload */;
	void __fastcall SelectColors(Hyiedefs::TRGB Color, TIESelOp Op = (TIESelOp)(0x0))/* overload */;
	void __fastcall SelectColors(int ColorIndex, TIESelOp Op = (TIESelOp)(0x0))/* overload */;
	void __fastcall SelectNonAlpha(TIESelOp Op = (TIESelOp)(0x0));
	void __fastcall SelectChromaKey(TIESelOp Op = (TIESelOp)(0x0))/* overload */;
	void __fastcall SelectChromaKey(int KeyPixelX, int KeyPixelY, TIESelOp Op = (TIESelOp)(0x0))/* overload */;
	void __fastcall SelectEllipse(int CenterX, int CenterY, int Width, int Height, TIESelOp Op = (TIESelOp)(0x0));
	void __fastcall SelectRoundRect(int Left, int Top, int Right, int Bottom, int RoundWidth, int RoundHeight, TIESelOp Op = (TIESelOp)(0x0));
	void __fastcall SelectCustom();
	void __fastcall MoveSelection(int MoveX, int MoveY, bool Sizing = false);
	__property double SelectionAspectRatio = {read=fSelectionAspectRatio, write=SetSelectionAspectRatio};
	void __fastcall SetSelectionMarkOuterStyle(int Alpha, System::Uitypes::TColor Color, bool LiveUpdate = false);
	virtual void __fastcall ShowDesignPreview(Ieview::TIEDesignTimeView PreviewMode = (Ieview::TIEDesignTimeView)(0x1), int Count = 0xffffffff);
	bool __fastcall IEBitmapValid(bool ForceImage);
	__property int LayersEditingLayer = {read=fEditingLayer, nodefault};
	Vcl::Stdctrls::TCustomEdit* __fastcall LayersTextEditor();
	Iexlayers::TIELayer* __fastcall FirstSelectedLayer();
	__property double FitCropping = {read=fFitCropping, write=SetFitCropping};
	__property Iextoolbars::TImageEnViewHoverToolbar* Toolbar = {read=fToolbar, write=fToolbar};
	__property int SelectionAbsWidth = {read=fSelectionAbsWidth, write=fSelectionAbsWidth, nodefault};
	__property int SelectionAbsHeight = {read=fSelectionAbsHeight, write=fSelectionAbsHeight, nodefault};
	__property bool AutoFixRotationBorders = {read=GetAutoFixRotationBorders, write=SetAutoFixRotationBorders, nodefault};
	void __fastcall Seek(Imageenio::TIEIOSeekDestination Destination, bool NavigateLayers = false);
	bool __fastcall CanSeek(Imageenio::TIEIOSeekDestination Destination, bool NavigateLayers = false);
	double __fastcall CalcSelectionArea(Hyiedefs::TIEUnits Units = (Hyiedefs::TIEUnits)(0x0));
	double __fastcall CalcSelectionLen(Hyiedefs::TIEUnits Units = (Hyiedefs::TIEUnits)(0x0));
	System::Types::TPoint __fastcall CalcSelectionCentroid();
	int __fastcall SelectionShape();
	void __fastcall Deselect();
	__property int SelX1 = {read=GetSelX1, nodefault};
	__property int SelY1 = {read=GetSelY1, nodefault};
	__property int SelX2 = {read=GetSelX2, nodefault};
	__property int SelY2 = {read=GetSelY2, nodefault};
	virtual void __fastcall AddSelPoint(int x, int y);
	void __fastcall AddSelBreak();
	void __fastcall AddSelCurve(int EndX, int EndY, double RadiusMult, int PtCount = 0x32);
	void __fastcall DelLastSelPoint();
	__property System::Types::TPoint PolySel[int idx] = {read=GetPolySel};
	__property int PolySelCount = {read=GetPolySelCount, nodefault};
	__property Hyiedefs::PPointArray PolySelPoints = {read=GetPolySelArray};
	__property System::Types::TRect VisibleBitmapRect = {read=GetVisibleBitmapRect, write=SetVisibleBitmapRect};
	__property int SmoothScrollValue = {read=fSmoothScrollValue, write=fSmoothScrollValue, nodefault};
	__property int SmoothZoomValue = {read=fSmoothZoomValue, write=fSmoothZoomValue, nodefault};
	__property bool Selected = {read=fSelected, nodefault};
	__property Hyiedefs::TIERectangle SelectedRect = {read=GetSelectedRect};
	__property bool VisibleSelection = {read=fVisibleSelection, write=SetVisibleSelection, nodefault};
	__property bool MagicWandMaxFilter = {read=fMagicWandMaxFilter, write=fMagicWandMaxFilter, nodefault};
	__property int MagicWandSize = {read=fMagicWandSize, write=fMagicWandSize, nodefault};
	__property int MagicWandTolerance = {read=fMagicWandTolerance, write=fMagicWandTolerance, nodefault};
	__property TIEMagicWandMode MagicWandMode = {read=fMagicWandMode, write=fMagicWandMode, nodefault};
	__property TIEChromaKeyOptions* ChromaKeyOptions = {read=fChromaKeyOptions, write=fChromaKeyOptions};
	bool __fastcall IsPointInsideSelection(int x, int y);
	__property Iexbitmaps::TIEMask* SelectionMask = {read=fSelectionMask};
	void __fastcall InvertSelection();
	void __fastcall SetSelectedAreaAlpha(int Alpha);
	void __fastcall SetSelectionGripStyle(System::Uitypes::TColor GripColor1 = (System::Uitypes::TColor)(0x0), System::Uitypes::TColor GripColor2 = (System::Uitypes::TColor)(0xffffff), Vcl::Graphics::TBrushStyle GripBrushStyle = (Vcl::Graphics::TBrushStyle)(0x0), int GripSize = 0x5, bool ExtendedGrips = true, TIEGripShape Shape = (TIEGripShape)(0x1))/* overload */;
	void __fastcall SetSelectionGripStyle(const TIEGripStyle &GripStyle)/* overload */;
	void __fastcall GetSelectionGripStyle(System::Uitypes::TColor &GripColor1, System::Uitypes::TColor &GripColor2, Vcl::Graphics::TBrushStyle &GripBrushStyle, int &GripSize, bool &ExtendedGrips, TIEGripShape &Shape)/* overload */;
	TIEGripStyle __fastcall GetSelectionGripStyle()/* overload */;
	void __fastcall SetLayersGripStyle(System::Uitypes::TColor GripColor1 = (System::Uitypes::TColor)(0x0), System::Uitypes::TColor GripColor2 = (System::Uitypes::TColor)(0xffffff), Vcl::Graphics::TBrushStyle GripBrushStyle = (Vcl::Graphics::TBrushStyle)(0x0), int GripSize = 0x5, TIEGripShape Shape = (TIEGripShape)(0x1))/* overload */;
	void __fastcall SetLayersGripStyle(const TIEGripStyle &GripStyle)/* overload */;
	void __fastcall GetLayersGripStyle(System::Uitypes::TColor &GripColor1, System::Uitypes::TColor &GripColor2, Vcl::Graphics::TBrushStyle &GripBrushStyle, int &GripSize, TIEGripShape &Shape)/* overload */;
	TIEGripStyle __fastcall GetLayersGripStyle()/* overload */;
	void __fastcall SetLayersBoxStyle(Vcl::Graphics::TPenStyle PenStyle = (Vcl::Graphics::TPenStyle)(0x2), Vcl::Graphics::TPenMode PenMode = (Vcl::Graphics::TPenMode)(0x3), int PenWidth = 0x1, System::Uitypes::TColor PenColor = (System::Uitypes::TColor)(0x0))/* overload */;
	void __fastcall ApplyBitmapToSelection(Vcl::Graphics::TBitmap* SrcBitmap, bool MaintainAspectRatio = true, bool CanStretch = false)/* overload */;
	void __fastcall ApplyBitmapToSelection(Iexbitmaps::TIEBitmap* SrcBitmap, bool MergeAlpha = true, bool MaintainAspectRatio = true, bool CanStretch = false)/* overload */;
	void __fastcall CopySelectionToBitmap(Vcl::Graphics::TBitmap* DestBitmap, bool FillBackground = true)/* overload */;
	void __fastcall CopySelectionToBitmap(Iexbitmaps::TIEBitmap* DestBitmap, bool FillBackground = true)/* overload */;
	void __fastcall CopySelectionToIEBitmap _DEPRECATED_ATTRIBUTE1("Use CopySelectionToBitmap instead - http://imageen.com/help/Compatibility.html") (Iexbitmaps::TIEBitmap* DestBitmap, bool FillBackground = true);
	virtual void __fastcall EndSelect();
	void __fastcall SetSelectedPixelsColor(Hyiedefs::TRGB color);
	void __fastcall SetAlphaRangePixelsColor(int AlphaMin, int AlphaMax, Hyiedefs::TRGB color);
	void __fastcall SaveSelectionToStream(System::Classes::TStream* Stream);
	bool __fastcall LoadSelectionFromStream(System::Classes::TStream* Stream, TIERSOptions Options = (TIERSOptions)(0x1));
	bool __fastcall MergeSelectionFromStream(System::Classes::TStream* Stream);
	void __fastcall SaveSelectionToFile(const System::UnicodeString FileName);
	bool __fastcall LoadSelectionFromFile(const System::UnicodeString FileName, TIERSOptions Options = (TIERSOptions)(0x1));
	bool __fastcall MergeSelectionFromFile(const System::UnicodeString FileName);
	bool __fastcall RestoreSelection(bool Remove = true, TIERSOptions Options = (TIERSOptions)(0x1));
	void __fastcall SaveSelection();
	bool __fastcall DiscardSavedSelection();
	__property int SavedSelectionsCount = {read=GetSavedSelectionsCount, nodefault};
	__property bool EnableShiftKey = {read=fEnableShiftKey, write=fEnableShiftKey, nodefault};
	void __fastcall LayersSizeAll(double HorzSizing, double VertSizing, bool bSelectedOnly = false, bool bFixSizes = false, bool ScalePosition = false);
	void __fastcall LayersRotateAll(double Value, bool bSelectedOnly = false, bool bFixRotations = false);
	void __fastcall LayersRepositionAll(int MoveX, int MoveY, bool SelectedOnly = false, bool Sizing = false, bool MaintainRelativePos = false);
	__property Hyiedefs::TIEAntialiasMode LayersRotationFilter = {read=fLayersRotationFilter, write=fLayersRotationFilter, nodefault};
	__property bool LayersRotationAntialias = {read=GetLayersRotationAntialias, write=SetLayersRotationAntialias, nodefault};
	__property bool LayersRotationUseFilterOnPreview = {read=fLayersRotationUseFilterOnPreview, write=fLayersRotationUseFilterOnPreview, nodefault};
	__property bool LayersRotationDelayFilterOnPreview = {read=GetLayersRotationDelayFilterOnPreview, write=SetLayersRotationDelayFilterOnPreview, nodefault};
	__property int SelectionMaskDepth = {read=fSelectionMaskDepth, write=SetSelectionMaskDepth, nodefault};
	__property int SelectionIntensity = {read=fSelectionIntensity, write=SetSelectionIntensity, nodefault};
	void __fastcall MakeSelectionFeather(double radius);
	void __fastcall MakeSelectionAntiAliased(Hyiedefs::TResampleFilter Filter = (Hyiedefs::TResampleFilter)(0x8));
	void __fastcall CopyFromPolygon(Vcl::Graphics::TBitmap* Source, const System::Types::TPoint *Polygon, const int Polygon_High, int PolygonLen, const System::Types::TPoint &Position);
	void __fastcall CopyToPolygon(Vcl::Graphics::TBitmap* Dest, const System::Types::TPoint *Polygon, const int Polygon_High, int PolygonLen, const System::Types::TPoint &Position);
	virtual void __fastcall Update();
	void __fastcall UpdateNoPaint();
	__property int SelectionGridSize = {read=GetSelectionGridSize, write=SetSelectionGridSize, nodefault};
	__property int SelectionGridWidth = {read=fSelectionGridWidth, write=fSelectionGridWidth, nodefault};
	__property int SelectionGridHeight = {read=fSelectionGridHeight, write=fSelectionGridHeight, nodefault};
	void __fastcall Fit(bool StretchSmall = true, double Cropping = 0.000000E+00);
	void __fastcall FitToWidth();
	void __fastcall FitToHeight();
	void __fastcall Stretch();
	double __fastcall GetIdealZoom(double Cropping = 0.000000E+00)/* overload */;
	void __fastcall GetIdealZoom(/* out */ double &x, /* out */ double &y, bool IgnoreScrollBars = false)/* overload */;
	__property int ViewX = {read=fViewX, write=SetViewX, nodefault};
	__property int ViewY = {read=fViewY, write=SetViewY, nodefault};
	void __fastcall CenterImage();
	void __fastcall SetScale(int Pixels, double Value, Hyiedefs::TIEUnits Units)/* overload */;
	void __fastcall SetScale(int PixelsX, double ValueX, int PixelsY, double ValueY, Hyiedefs::TIEUnits Units)/* overload */;
	void __fastcall SetViewXY(int x, int y);
	void __fastcall SetViewXYSmooth(int x, int y);
	void __fastcall SetZoomSmooth(double Zoom, int ZoomX = 0xffffffff, int ZoomY = 0xffffffff);
	__property double Zoom = {read=fZoomX, write=SetZoom};
	__property double ZoomX = {read=fZoomX, write=SetZoomX};
	__property double ZoomY = {read=fZoomY, write=SetZoomY};
	void __fastcall ZoomSelection(bool AspectRatio = true);
	void __fastcall ZoomAt(int x, int y, double ZoomVal, bool Center = true);
	void __fastcall ZoomIn();
	void __fastcall ZoomOut();
	__property ClientWidth = {read=GetClientWidth};
	__property ClientHeight = {read=GetClientHeight};
	__property int IdealComponentWidth = {read=GetIdealComponentWidth, nodefault};
	__property int IdealComponentHeight = {read=GetIdealComponentHeight, nodefault};
	__property int IdealImageWidth = {read=GetIdealImageWidth, nodefault};
	__property int IdealImageHeight = {read=GetIdealImageHeight, nodefault};
	virtual void __fastcall LockPaint();
	virtual int __fastcall UnlockPaint();
	virtual int __fastcall NPUnlockPaint();
	__property int LockPaintCount = {read=fLockPaint, nodefault};
	__property int LockUpdateCount = {read=fUpdateLocked, nodefault};
	void __fastcall DrawTo(Vcl::Graphics::TCanvas* Canvas);
	__property int OffsetX = {read=fOffX, nodefault};
	__property int OffsetY = {read=fOffY, nodefault};
	__property int ExtentX = {read=fExtX, nodefault};
	__property int ExtentY = {read=fExtY, nodefault};
	void __fastcall WaitForImageReady();
	void __fastcall RepaintRulers();
	void __fastcall UpdateRect(const System::Types::TRect &rclip, bool UpdateNow = false);
	void __fastcall PaintRect(const System::Types::TRect &rc);
	void __fastcall LockUpdate();
	void __fastcall UnlockUpdate();
	void __fastcall UnlockUpdateEx();
	__property Vcl::Graphics::TBitmap* BackBuffer = {read=GetBackBuffer};
	void __fastcall SetNavigator(TImageEnView* nav, TIENavigatorOptions options = TIENavigatorOptions() );
	__property bool IsNavigator = {read=fIsNavigator, nodefault};
	__property int MinBitmapSize = {read=fMinBitmapSize, write=fMinBitmapSize, nodefault};
	void __fastcall ChangeResolution(int NewDPI, Hyiedefs::TResampleFilter ResampleFilter = (Hyiedefs::TResampleFilter)(0x0));
	__property int LayersCount = {read=GetLayersCount, nodefault};
	__property int LayersCurrent = {read=fLayersCurrent, write=SetLayersCurrent, nodefault};
	int __fastcall LayersAddEx(Iexlayers::TIELayerKind Kind, int PosX = 0xffffffff, int PosY = 0xffffffff, int Width = 0x0, int Height = 0x0, Iexbitmaps::TIEBitmap* SrcBitmap = (Iexbitmaps::TIEBitmap*)(0x0), bool DoCopyBitmap = true, bool DoSaveUndo = false, bool AssignDefaults = false, bool SelLayer = true);
	int __fastcall LayersAdd(Iexlayers::TIELayerKind Kind = (Iexlayers::TIELayerKind)(0x0), int PosX = 0xffffffff, int PosY = 0xffffffff, int Width = 0x0, int Height = 0x0)/* overload */;
	int __fastcall LayersAdd(Iexlayers::TIELayerKind Kind, const System::Types::TRect &Rect)/* overload */;
	int __fastcall LayersAdd(int Width, int Height, Hyieutils::TIEPixelFormat PixelFormat = (Hyieutils::TIEPixelFormat)(0x5), int PosX = 0xffffffff, int PosY = 0xffffffff)/* overload */;
	int __fastcall LayersAdd(Iexbitmaps::TIEBitmap* Bitmap, int PosX = 0xffffffff, int PosY = 0xffffffff, bool DoCopy = true)/* overload */;
	int __fastcall LayersAdd(const System::WideString FileName, int PosX = 0xffffffff, int PosY = 0xffffffff)/* overload */;
	int __fastcall LayersAdd(const System::Types::TPoint &StartPoint, const System::Types::TPoint &EndPoint, System::Uitypes::TColor LineColor = (System::Uitypes::TColor)(0x1fffffff), int LineWidth = 0xffffffff)/* overload */;
	int __fastcall LayersAdd(Hyiedefs::TIEShape Shape, int PosX = 0xffffffff, int PosY = 0xffffffff, int Width = 0x0, int Height = 0x0)/* overload */;
	int __fastcall LayersAdd(Hyiedefs::TIEShape Shape, const System::Types::TRect &Rect, System::Uitypes::TColor BorderColor = (System::Uitypes::TColor)(0x0), int BorderWidth = 0x1, System::Uitypes::TColor FillColor = (System::Uitypes::TColor)(0x1fffffff))/* overload */;
	int __fastcall LayersAdd(const System::UnicodeString Text, int FontSize, System::Uitypes::TColor FontColor, const System::UnicodeString FontName, System::Uitypes::TFontStyles FontStyle = System::Uitypes::TFontStyles() , int PosX = 0xffffffff, int PosY = 0xffffffff)/* overload */;
	int __fastcall LayersAdd(int StartOpacity, int EndOpacity, Hyiedefs::TIEGDIPlusGradient MaskGradient, Hyiedefs::TIEShape MaskShape = (Hyiedefs::TIEShape)(0x4), int PosX = 0xffffffff, int PosY = 0xffffffff, int Width = 0x0, int Height = 0x0, bool MaskInverted = true)/* overload */;
	void __fastcall LayersProcessKeyDown(System::Word &Key, System::Classes::TShiftState Shift, bool AllowDelete = true, bool AllowArrange = true, bool AllowTextChanges = true);
	int __fastcall LayersAdd(Iexlayers::TIELayer* Layer, int PosX = 0xffffffff, int PosY = 0xffffffff, int Width = 0x0, int Height = 0x0)/* overload */;
	int __fastcall LayersInsertEx(int Position, Iexlayers::TIELayerKind Kind, int PosX = 0xffffffff, int PosY = 0xffffffff, int Width = 0x0, int Height = 0x0, Iexbitmaps::TIEBitmap* SrcBitmap = (Iexbitmaps::TIEBitmap*)(0x0), bool DoCopyBitmap = true, bool DoSaveUndo = false, bool AssignDefaults = false, bool SelLayer = true);
	void __fastcall LayersInsert(int Position, Iexlayers::TIELayerKind Kind = (Iexlayers::TIELayerKind)(0x0), int PosX = 0xffffffff, int PosY = 0xffffffff, int Width = 0x0, int Height = 0x0)/* overload */;
	void __fastcall LayersInsert(int Position, Iexlayers::TIELayerKind Kind, const System::Types::TRect &Rect)/* overload */;
	void __fastcall LayersInsert(int Position, int Width, int Height, Hyieutils::TIEPixelFormat PixelFormat = (Hyieutils::TIEPixelFormat)(0x5), int PosX = 0xffffffff, int PosY = 0xffffffff)/* overload */;
	void __fastcall LayersInsert(int Position, Iexbitmaps::TIEBitmap* Bitmap, int PosX = 0xffffffff, int PosY = 0xffffffff, bool DoCopy = true)/* overload */;
	void __fastcall LayersInsert(int Position, const System::WideString FileName, int PosX = 0xffffffff, int PosY = 0xffffffff)/* overload */;
	void __fastcall LayersInsert(int Position, const System::Types::TPoint &StartPoint, const System::Types::TPoint &EndPoint, System::Uitypes::TColor LineColor = (System::Uitypes::TColor)(0x1fffffff), int LineWidth = 0xffffffff)/* overload */;
	void __fastcall LayersInsert(int Position, Hyiedefs::TIEShape Shape, int PosX = 0xffffffff, int PosY = 0xffffffff, int Width = 0x0, int Height = 0x0)/* overload */;
	void __fastcall LayersInsert(int Position, Hyiedefs::TIEShape Shape, const System::Types::TRect &Rect, System::Uitypes::TColor BorderColor = (System::Uitypes::TColor)(0x0), int BorderWidth = 0x1, System::Uitypes::TColor FillColor = (System::Uitypes::TColor)(0x1fffffff))/* overload */;
	void __fastcall LayersInsert(int Position, const System::UnicodeString Text, int FontSize, System::Uitypes::TColor FontColor, const System::UnicodeString FontName, System::Uitypes::TFontStyles FontStyle = System::Uitypes::TFontStyles() , int PosX = 0xffffffff, int PosY = 0xffffffff)/* overload */;
	void __fastcall LayersInsert(int Position, int StartOpacity, int EndOpacity, Hyiedefs::TIEGDIPlusGradient MaskGradient, Hyiedefs::TIEShape MaskShape = (Hyiedefs::TIEShape)(0x4), int PosX = 0xffffffff, int PosY = 0xffffffff, int Width = 0x0, int Height = 0x0, bool MaskInverted = true)/* overload */;
	void __fastcall LayersInsert(int Position, Iexlayers::TIELayer* Layer, int PosX = 0xffffffff, int PosY = 0xffffffff, int Width = 0x0, int Height = 0x0)/* overload */;
	void __fastcall LayersRemoveEx(int LyrIndex = 0xfffffffe, bool SaveUndo = false, bool CallLayerNotify = false, bool SwapBackgroundProps = false, bool UpdateSelection = true);
	virtual void __fastcall LayersRemove(int LyrIndex = 0xfffffffe, bool SwapBackgroundProps = false);
	void __fastcall LayersClear(bool ClearLayer0 = true);
	void __fastcall LayersMerge(int Layer1, int Layer2, bool RemoveUpperLayer = true)/* overload */;
	void __fastcall LayersMerge(int *LayerList, const int LayerList_High)/* overload */;
	void __fastcall LayersMerge(Hyiedefs::TIEArrayOfInteger LayerList)/* overload */;
	void __fastcall LayersMerge(bool IncludeBackground = false)/* overload */;
	void __fastcall LayersMergeTo(int Layer1, int Layer2, Iexbitmaps::TIEBitmap* Destination);
	void __fastcall LayersDrawTo(Iexbitmaps::TIEBitmap* Destination, bool AdjustBitmap = true);
	bool __fastcall LayersSaveMergedTo(Iexbitmaps::TIEBitmap* Destination, bool FastOutput = false)/* overload */;
	bool __fastcall LayersSaveMergedTo(const System::UnicodeString Filename, bool FastOutput = false)/* overload */;
	bool __fastcall LayersSaveMergedTo(System::Classes::TStream* const Stream, int FileType, bool FastOutput = false)/* overload */;
	void __fastcall LayersMergeAll(bool AlphaCompositing = false);
	void __fastcall LayersCopyToAlpha(int DestLayer);
	void __fastcall LayersCropBackground(bool SelectedOnly = false, int FillAlpha = 0xff, bool AllowReduce = true, bool AllowEnlarge = true);
	int __fastcall LayersCreateFromAlpha();
	int __fastcall LayersNameToIndex(const System::UnicodeString Name, bool MatchCase = true);
	__property int LayersCaching = {read=fLayersCaching, write=SetLayersCaching, nodefault};
	void __fastcall LayersMove _DEPRECATED_ATTRIBUTE1("Renamed to LayersArrange - http://imageen.com/help/Compatibility.html") (int CurIndex, int NewIndex);
	void __fastcall LayersArrange(int CurIndex, int NewIndex, bool SwapBackgroundProps = false);
	void __fastcall LayersArrangeEx(int CurIndex, int NewIndex, bool SaveUndo = false, bool CallLayerNotify = false, bool SwapBackgroundProps = false);
	bool __fastcall LayersShowPropertiesDialog(int LayerIdx = 0xfffffffe);
	bool __fastcall LayersNewLayerDialog(Iexlayers::TIELayerKind LayerKind, bool PromptForImage = false, int InsertPos = 0xffffffff);
	void __fastcall LayersActivateTextEditor(int LayerIdx);
	int __fastcall LayersCreateFromEdge(int x, int y, int Tolerance, bool MaxFilter = false, int idx = 0xffffffff);
	void __fastcall LayersSetPropertiesEx(int LayerIndex, System::Classes::TStrings* Props, const System::UnicodeString PropName, const System::UnicodeString Value, bool SaveUndo, System::UnicodeString UndoMsg);
	void __fastcall LayersSetProperties(int LayerIndex, System::Classes::TStrings* Props)/* overload */;
	void __fastcall LayersSetProperties(int LayerIndex, const System::Variant &PropName, const System::Variant &Value)/* overload */;
	void __fastcall LayersCancelEditor(bool SaveChanges = true);
	__property TIESoftCropMode SoftCrop = {read=fSoftCrop, write=SetSoftCrop, nodefault};
	__property int SoftCropValue = {read=fSoftCropValue, write=SetSoftCropValue, nodefault};
	__property int LayersRotateStep = {read=fLayersRotateStep, write=fLayersRotateStep, nodefault};
	__property Hyiedefs::TResampleFilter LayersMergeFilter = {read=fLayersMergeFilter, write=fLayersMergeFilter, nodefault};
	__property bool LayersSelectConstrains = {read=fLayersSelectConstrains, write=fLayersSelectConstrains, nodefault};
	__property TIERotateMode LayersTextRotateMode = {read=fLayersTextRotateMode, write=fLayersTextRotateMode, nodefault};
	__property Iexlayers::TIELayer* Layers[int idx] = {read=GetLayer};
	__property System::Classes::TStringList* LayerDefaults = {read=GetLayerDefaults};
	__property System::Classes::TList* LayersList = {read=fLayers};
	__property TIELayersResizeAspectRatio LayersResizeAspectRatio = {read=fLayersResizeAspectRatio, write=fLayersResizeAspectRatio, nodefault};
	__property bool LayersCropped = {read=fLayersCropped, write=SetLayersCropped, nodefault};
	__property TIEPolylineClosingMode LayersAutoClosePolylines = {read=fLayersAutoClosePolylines, write=fLayersAutoClosePolylines, nodefault};
	__property int LayersCurvePoints = {read=fLayersCurvePoints, write=fLayersCurvePoints, nodefault};
	bool __fastcall LayersFastDrawingActive();
	__property bool LayersFastOutput = {read=fLayersFastOutput, write=fLayersFastOutput, nodefault};
	int __fastcall MaxLayerWidth();
	int __fastcall MaxLayerHeight();
	Hyiedefs::TIERectangle __fastcall LayersRect(bool SelOnly = false, bool ExcludeLayer0 = false);
	__property bool LayersDrawBox = {read=fLayersDrawBox, write=SetLayersDrawBox, nodefault};
	int __fastcall FindLayerAt(int ScrX, int ScrY, bool SelectablesOnly = true);
	int __fastcall FindLayerLinkAt(int ScrX, int ScrY, bool OnlyIfClickable);
	System::UnicodeString __fastcall FindLayerHintAt(int ScrX, int ScrY);
	void __fastcall FindLayerPointAt(int X, int Y, int LayerIndex, /* out */ int &FoundIndex, /* out */ int &LayerPoint, bool CheckIntraLines, /* out */ int &LayerPointBeforeLine, bool CheckInsideLayer);
	__property Iexlayers::TIELayer* CurrentLayer = {read=GetCurrentLayer};
	void __fastcall LayersSaveToStream(System::Classes::TStream* Stream, int CompressionFormat = 0xffffffff, bool SelectedOnly = false, bool ExcludeLayer0 = false, bool ExcludeImageLayers = false, bool SaveThumbnail = false, Hyiedefs::TIEProgressEvent ProgressEvent = 0x0);
	void __fastcall LayersSaveToFile _DEPRECATED_ATTRIBUTE1("Use TImageEnIO.SaveToFileIEN instead - http://imageen.com/help/Compatibility.html") (const System::UnicodeString FileName, int CompressionFormat = 0xffffffff);
	void __fastcall LayersSelectAll(bool bIncludeLocked = true);
	void __fastcall LayersSelectEx(int &Idx, bool AddToSel = false);
	void __fastcall LayersSelectRange(const System::Types::TRect &ScrRect);
	int __fastcall LayersSelCount(bool bCountBackgroundLayer = true);
	void __fastcall LayersDeselectAll();
	void __fastcall LayersSelectByGroupIndex(int iGroupIndex, bool bSelect, bool bUserAction);
	void __fastcall LayersSelectMaskOfLayer(int iLayerIndex, bool bSelect, bool bUserAction);
	void __fastcall LayersAlign(TIEAlignLayers Alignment, int Index = 0xfffffffe);
	void __fastcall LayersGroup(bool bSelectedOnly = true);
	void __fastcall LayersUngroup(bool bSelectedOnly = true);
	void __fastcall LayersConvertLayersEx(int LayerIdx, Iexlayers::TIELayerKind DestType, double QualityFactor = 2.000000E+00, bool CropAlpha = true, bool ConvertImages = false, bool DoSaveUndo = false);
	void __fastcall LayersConvertToImageLayers(int LayerIdx = 0xfffffffe, double QualityFactor = 2.000000E+00, bool CropAlpha = true, bool ConvertImages = false);
	int __fastcall LayersCreatePolylineFromSelection(int idx = 0xffffffff, bool ClosePolygon = false);
	bool __fastcall LayersLoadFromStream(System::Classes::TStream* Stream, bool Append = false, Hyiedefs::TIEProgressEvent ProgressEvent = 0x0);
	bool __fastcall LayersLoadFromFile _DEPRECATED_ATTRIBUTE1("Use TImageEnIO.LoadFromFileIEN instead - http://imageen.com/help/Compatibility.html") (const System::UnicodeString FileName, bool Append = false);
	int __fastcall LayersCreateFromSelection(int idx = 0xffffffff);
	int __fastcall LayersCreateFromClipboard();
	int __fastcall LayersCreateFromFile(System::UnicodeString Filename = System::UnicodeString(), int idx = 0xffffffff);
	int __fastcall LayersImport(const System::UnicodeString FileName, System::Classes::TStream* Stream = (System::Classes::TStream*)(0x0), int FileFormat = 0x0, bool Append = false);
	int __fastcall LayersCreateFromText _DEPRECATED_ATTRIBUTE1("Use TIETextLayer instead - http://imageen.com/help/Compatibility.html") (const System::UnicodeString Text, const System::UnicodeString sFontName, int iFontSize, System::Uitypes::TColor cFontColor, System::Uitypes::TFontStyles Style, bool bAddShadow = false, int iBlurRadius = 0x3, int iShadowOffset = 0x2, int Angle = 0x0, bool bAntiAlias = true);
	void __fastcall LayersFixSizes(int layer = 0xffffffff);
	void __fastcall LayersFixRotations(int layer = 0xffffffff);
	void __fastcall LayersFixBorders(int layer = 0xffffffff);
	void __fastcall SetExternalBitmap(Iexbitmaps::TIEBitmap* bmp);
	__property MouseCapture;
	HIDESBASE virtual void __fastcall Assign(System::TObject* Source);
	void __fastcall AssignSelTo(System::Classes::TPersistent* Dest);
	virtual void __fastcall ImageChange(int ChangeSource);
	void __fastcall DoLayerSelectionChange();
	int __fastcall YScr2Bmp(int y, bool CurrentLayer = false);
	int __fastcall XScr2Bmp(int x, bool CurrentLayer = false);
	int __fastcall YBmp2Scr(int y, bool CurrentLayer = false);
	int __fastcall XBmp2Scr(int x, bool CurrentLayer = false);
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	__property System::Uitypes::TColor SelColor1 = {read=fSelColor1, write=SetSelColor1, default=0};
	__property System::Uitypes::TColor SelColor2 = {read=fSelColor2, write=SetSelColor2, default=16777215};
	void __fastcall Clear();
	void __fastcall ClearAll();
	void __fastcall Blank();
	__property bool DisplayGrid = {read=GetDisplayGrid, write=SetDisplayGrid, nodefault};
	__property int DisplayGridLyr = {read=fDisplayGridLyr, write=SetDisplayGridLyr, nodefault};
	__property System::Types::TPoint HighlightedPixel = {read=fHighlightedPixel, write=SetHighlightedPixel};
	__property System::Uitypes::TColor HighlightedPixelColor = {read=fHighlightedPixelColor, write=SetHighlightedPixelColor, nodefault};
	void __fastcall SetInteractionHint(const System::UnicodeString Text, int x, int y, const System::UnicodeString minText = System::UnicodeString(), bool Center = false);
	__property Hyieutils::TIEHAlign ImageHorizAlignment = {read=fImageHorizAlignment, write=SetImageHorizAlignment, nodefault};
	__property Hyieutils::TIEVAlign ImageVertAlignment = {read=fImageVertAlignment, write=SetImageVertAlignment, nodefault};
	__property TIEShiftLock ShiftKeyLock = {read=fShiftKeyLock, write=fShiftKeyLock, nodefault};
	__property bool KeyboardShortcuts = {read=fKeyboardShortcuts, write=fKeyboardShortcuts, nodefault};
	__property bool ForceALTkey = {read=GetForceALTkey, write=SetForceALTkey, nodefault};
	__property bool DelayDisplaySelection = {read=fDelayDisplaySelection, write=fDelayDisplaySelection, nodefault};
	__property int DelayZoomTime = {read=fDelayZoomTicks, write=fDelayZoomTicks, nodefault};
	__property int DelayTimer = {read=GetDelayTimer, write=SetDelayTimer, nodefault};
	void __fastcall CopyToBitmapWithAlpha(Vcl::Graphics::TBitmap* Dest, int DestX, int DestY);
	__property bool UseDrawDibDraw = {read=fUseDrawDibDraw, write=fUseDrawDibDraw, nodefault};
	TIEGrip __fastcall GetGripAt(int x, int y);
	__property Iexbitmaps::TIEBitmap* AlphaChannel = {read=GetAlphaChannel};
	void __fastcall RemoveAlphaChannel(bool Merge = false);
	bool __fastcall HasAlphaChannel(bool Validate = false);
	bool __fastcall IsEmpty(bool QuickCheck = true);
	bool __fastcall IsEmpty2 _DEPRECATED_ATTRIBUTE1("Use IsEmpty(False) instead - http://imageen.com/help/Compatibility.html") ();
	__property double MouseScrollRate = {read=fMouseScrollRate, write=fMouseScrollRate};
	__property Imageenio::TImageEnIO* IO = {read=GetImageEnIO};
	__property Imageenproc::TImageEnProc* Proc = {read=GetImageEnProc};
	__property bool TransitionRunning = {read=GetTransitionRunning, nodefault};
	void __fastcall PrepareTransition();
	void __fastcall RunTransition(Iextransitions::TIETransitionType Effect, int Duration)/* overload */;
	void __fastcall RunTransition(Iextransitions::TIETransitionType Effect, int Duration, Iextransitions::TIEPanZoomType PanZoomEffect, int iZoomLevel, int Smoothing = 0x60)/* overload */;
	void __fastcall RunTransition(Iextransitions::TIETransitionType Effect, int Duration, const System::Types::TRect &StartRect, const System::Types::TRect &EndRect, bool bMaintainAspectRatio = true, int Smoothing = 0x60)/* overload */;
	void __fastcall AbortTransition();
	__property Iextransitions::TIETransitionTiming TransitionTiming = {read=GetTransitionTiming, write=SetTransitionTiming, nodefault};
	void __fastcall PrepareTransitionBitmaps _DEPRECATED_ATTRIBUTE0 (Vcl::Graphics::TBitmap* OriginalBitmap, Vcl::Graphics::TBitmap* TargetBitmap, Iextransitions::TIETransitionType Effect, int iWidth = 0xffffffff, int iHeight = 0xffffffff)/* overload */;
	void __fastcall PrepareTransitionBitmaps _DEPRECATED_ATTRIBUTE0 (Vcl::Graphics::TBitmap* OriginalBitmap, Vcl::Graphics::TBitmap* TargetBitmap, Iextransitions::TIETransitionType Effect, const System::Types::TRect &StartRect, const System::Types::TRect &EndRect, bool bMaintainAspectRatio = true, int iWidth = 0xffffffff, int iHeight = 0xffffffff)/* overload */;
	void __fastcall CreateTransitionBitmap _DEPRECATED_ATTRIBUTE0 (float TransitionProgress, Vcl::Graphics::TBitmap* DestBitmap);
	void __fastcall BeginPostFrames(TImageEnView* target, int delay, int interval);
	void __fastcall EndPostFrames(TImageEnView* target);
	void __fastcall DrawLayerBox(Vcl::Graphics::TCanvas* ACanvas, int idx);
	void __fastcall DrawLayerOuter(Vcl::Graphics::TBitmap* ABitmap, int idx);
	void __fastcall DrawLayerGrips(Vcl::Graphics::TBitmap* ABitmap, int idx);
	void __fastcall DrawLayerPoints(Vcl::Graphics::TCanvas* ACanvas, int idx);
	void __fastcall DrawLayerRotationGrip(Vcl::Graphics::TBitmap* ABitmap, int idx);
	void __fastcall DrawLayerRotationCenter(Vcl::Graphics::TBitmap* ABitmap, int idx);
	void __fastcall CalcLayerGripCoords(int LayerIdx, System::Types::TRect *coords, const int coords_High);
	TIEGrip __fastcall FindGripOfAnySelLayer(int x, int y, /* out */ int &LayerIndex, bool InclPointLayers = true);
	TIEGrip __fastcall FindGripOfCurrentLayer(int x, int y);
	TIEGrip __fastcall DistToGripOfCurrentLayer(int x, int y, double &Distance);
	double __fastcall DistToGripOfLayer(int lyr, int x, int y, TIEGrip &Grip);
	__property TIEViewerGestures* Gestures = {read=fGestures};
	__property Iexrulers::TIEViewRulerParams* RulerParams = {read=fRulerParams};
	__property int DpiX = {read=GetDPIX, write=SetDPIX, nodefault};
	__property int DpiY = {read=GetDPIY, write=SetDPIY, nodefault};
	virtual void __fastcall SetDPI(int dpiX, int dpiY);
	__property double ScaleX = {read=fScaleX, write=SetScaleX};
	__property double ScaleY = {read=fScaleY, write=SetScaleY};
	__property bool Modified = {read=GetModified, write=SetModified, nodefault};
	__property Iexuserinteractions::TIECropToolInteraction* CropTool = {read=GetCropTool};
	__property Iexuserinteractions::TIECropToolInteraction* CropToolInteraction = {read=GetCropTool};
	__property Iexuserinteractions::TIEBrushToolInteraction* BrushTool = {read=GetBrushTool};
	__property Iexuserinteractions::TIERetouchToolInteraction* RetouchTool = {read=GetRetouchTool};
	__property Iexuserinteractions::TIECloneToolInteraction* CloneTool = {read=GetCloneTool};
	__property Iexuserinteractions::TIEFillToolInteraction* FillTool = {read=GetFillTool};
	__property Iexuserinteractions::TIERotateToolInteraction* RotateTool = {read=GetRotateTool};
	bool __fastcall BrushShowPropertiesDialog(bool ApplyAll = false);
	__property Iexuserinteractions::TIEPdfViewerInteraction* PdfViewer = {read=GetPdfViewer};
	bool __fastcall GetAnyCursorToolEnabled();
	bool __fastcall GetPdfViewerEnabled();
	__property Iexuserinteractions::TIEButtonInteraction* ButtonParams = {read=GetButtonParams};
	__property System::Contnrs::TObjectList* UserInteractions = {read=fUserInteractions};
	void __fastcall CancelTools();
	bool __fastcall EnactCurrentTool();
	__property Ieview::TIETask ProgressTask = {read=fProgressTask, write=fProgressTask, nodefault};
	__property TIEMouseInteract MouseInteract = {read=GetMouseInteractGeneral, write=SetMouseInteractGeneral, default=0};
	__property bool AutoFit = {read=GetAutoFit, write=SetAutoFit, nodefault};
	
__published:
	__property bool LegacyBitmap = {read=GetLegacyBitmap, write=SetLegacyBitmap, default=0};
	__property Hyiedefs::TResampleFilter ZoomFilter = {read=fZoomFilter, write=SetZoomFilter, default=0};
	__property Ieview::TIEViewModes AutoToolbars = {read=fAutoToolbars, write=SetAutoToolbars, default=0};
	__property Ieview::TIEViewModes PopupMenus = {read=fPopupMenus, write=SetPopupMenus, default=0};
	__property TViewChangeEvent OnViewChange = {read=fOnViewChange, write=fOnViewChange};
	__property TIEImageEnGestureEvent OnImageEnGesture = {read=fOnImageEnGesture, write=fOnImageEnGesture};
	__property TIEFinishSmoothTaskEvent OnFinishSmoothTask = {read=fOnFinishSmoothTask, write=fOnFinishSmoothTask};
	__property System::Classes::TNotifyEvent OnImageLoaded = {read=fOnImageLoaded, write=fOnImageLoaded};
	__property TViewChangingEvent OnViewChanging = {read=fOnViewChanging, write=fOnViewChanging};
	__property System::Classes::TNotifyEvent OnImageChange = {read=fOnImageChange, write=fOnImageChange};
	__property TIEImageChangeEvent OnImageChangeEx = {read=fOnImageChangeEx, write=fOnImageChangeEx};
	__property Imageenio::TIEImageSeekEvent OnImageSeek = {read=fOnImageSeek, write=fOnImageSeek};
	__property TIELayerOptions LayerOptions = {read=fLayerOptions, write=SetLayerOptions, default=3977525};
	__property TIESelectionOptions SelectionOptions = {read=fSelectionOptions, write=SetSelectionOptions, default=49223};
	__property TIEDisplayOptions DisplayOptions = {read=fDisplayOptions, write=SetDisplayOptions, default=2};
	__property bool Center = {read=GetCenter, write=SetCenter, default=1};
	__property TIEMouseInteract MouseInteractGeneral = {read=GetMouseInteractGeneral, write=SetMouseInteractGeneral, default=0};
	__property TIEMouseInteractLayers MouseInteractLayers = {read=GetMouseInteractLayers, write=SetMouseInteractLayers, default=0};
	__property TIESelectionBase SelectionBase = {read=fSelectionBase, write=fSelectionBase, default=0};
	__property System::Classes::TNotifyEvent OnSelectionChange = {read=fOnSelectionChange, write=fOnSelectionChange};
	__property System::Classes::TNotifyEvent OnSelectionChanging = {read=fOnSelectionChanging, write=fOnSelectionChanging};
	__property System::Classes::TNotifyEvent OnMouseInSel = {read=fOnMouseInSel, write=fOnMouseInSel};
	__property bool DelayZoomFilter = {read=fDelayZoomFilter, write=fDelayZoomFilter, default=0};
	__property System::Classes::TNotifyEvent OnPaint = {read=fOnPaint, write=fOnPaint};
	__property bool EnableAlphaChannel = {read=fEnableAlphaChannel, write=SetEnableAlphaChannel, default=1};
	__property TIEMouseInResizingGripEvent OnMouseInResizingGrip = {read=fOnMouseInResizingGrip, write=fOnMouseInResizingGrip};
	__property TIEBitmapEvent OnCustomRetouch = {read=fOnCustomRetouch, write=fOnCustomRetouch};
	__property Hyiedefs::TIEProgressEvent OnProgress = {read=GetOnProgress, write=SetOnProgress};
	__property System::Classes::TNotifyEvent OnFinishWork = {read=GetOnFinishWork, write=SetOnFinishWork};
	__property Imageenio::TIEAcquireBitmapEvent OnAcquireBitmap = {read=GetOnAcquireBitmap, write=SetOnAcquireBitmap};
	__property Imageenio::TIEPrintPageEvent OnPrintPage = {read=GetOnPrintPage, write=SetOnPrintPage};
	__property bool AutoStretch = {read=fAutoStretch, write=SetAutoStretch, default=0};
	__property bool AutoShrink = {read=fAutoShrink, write=SetAutoShrink, default=0};
	__property System::Classes::TNotifyEvent OnBeforeSelectionChange = {read=fOnBeforeSelectionChange, write=fOnBeforeSelectionChange};
	__property System::Classes::TNotifyEvent OnDrawBackBuffer = {read=fOnDrawBackBuffer, write=fOnDrawBackBuffer};
	__property TIEFastDrawing LayersFastDrawing = {read=fLayersFastDrawing, write=fLayersFastDrawing, default=1};
	__property TIELayerNotify OnLayerNotify = {read=fOnLayerNotify, write=fOnLayerNotify};
	__property TIELayerNotify OnLayerNotifyEx = {read=fOnLayerNotifyEx, write=fOnLayerNotifyEx};
	__property TIELayerMoveSizeEvent OnLayerMoveSize = {read=fOnLayerMoveSize, write=fOnLayerMoveSize};
	__property TIENewLayerEvent OnNewLayer = {read=fOnNewLayer, write=fOnNewLayer};
	__property TIEUserInteractionNotify OnUserInteraction = {read=fOnUserInteraction, write=fOnUserInteraction};
	__property TIEMeasureEvent OnMeasure = {read=fOnMeasure, write=fOnMeasure};
	__property TIEInteractionHintEvent OnInteractionHint = {read=fOnInteractionHint, write=fOnInteractionHint};
	__property System::Classes::TNotifyEvent OnLayerSelectionChange = {read=fOnLayerSelectionChange, write=fOnLayerSelectionChange};
	__property TIESpecialKeyEvent OnSpecialKey = {read=fOnSpecialKey, write=fOnSpecialKey};
	__property System::UnicodeString ImageEnVersion = {read=GetImageEnVersion, write=SetImageEnVersion, stored=false};
	__property TIEOnDrawBackground OnDrawBackground = {read=fOnDrawBackground, write=fOnDrawBackground};
	__property TIEOnDrawCanvas OnDrawCanvas = {read=fOnDrawCanvas, write=fOnDrawCanvas};
	__property System::Classes::TNotifyEvent OnTransitionStop = {read=GetOnTransitionStop, write=SetOnTransitionStop};
	__property Iextransitions::TIETransitionStepEvent OnTransitionStep = {read=GetOnTransitionStep, write=SetOnTransitionStep};
	__property Iextransitions::TIEOnTransitionPaint OnTransitionPaint = {read=GetOnTransitionPaint, write=SetOnTransitionPaint};
	__property Iexlayers::TIEDrawLayerBoxEvent OnDrawLayerBox = {read=fOnDrawLayerBox, write=fOnDrawLayerBox};
	__property Iexlayers::TIEDrawLayerEvent OnDrawLayer = {read=fOnDrawLayer, write=fOnDrawLayer};
	__property Iexlayers::TIEDrawLayerEvent OnBeforeDrawLayer = {read=fOnBeforeDrawLayer, write=fOnBeforeDrawLayer};
	__property Iexlayers::TIEDrawLayerGrip OnDrawLayerGrip = {read=fOnDrawLayerGrip, write=fOnDrawLayerGrip};
	__property TIEOnDrawPolygon OnDrawPolygon = {read=fOnDrawPolygon, write=fOnDrawPolygon};
	__property TIEClickLinkEvent OnClickLink = {read=fOnClickLink, write=fOnClickLink};
	__property Ieview::TIEPointerEvent OnPointer = {read=fOnPointer, write=fOnPointer};
	__property Ieview::TIEPointerExEvent OnPointerEx = {read=fOnPointerEx, write=fOnPointerEx};
	__property Imageenproc::TIESaveUndoEvent OnSaveUndo = {read=GetOnSaveUndo, write=SetOnSaveUndo};
	__property Imageenproc::TIEOnUndoRedoEvent OnUndoRedo = {read=GetOnUndoRedo, write=SetOnUndoRedo};
	__property OnMouseWheel;
	__property OnMouseWheelDown;
	__property OnMouseWheelUp;
	__property Anchors = {default=3};
	__property DragCursor = {default=-12};
	__property System::Classes::TNotifyEvent OnDShowNewFrame = {read=fOnDShowNewFrame, write=fOnDShowNewFrame};
	__property System::Classes::TNotifyEvent OnDShowEvent = {read=fOnDShowEvent, write=fOnDShowEvent};
	__property TIESetCursorEvent OnSetCursor = {read=fOnSetCursor, write=fOnSetCursor};
	__property TIEMediaFoundationNotifyEvent OnMediaFoundationNotify = {read=fOnMediaFoundationNotify, write=fOnMediaFoundationNotify};
	__property TIEVirtualKeyEvent OnVirtualKey = {read=fOnVirtualKey, write=fOnVirtualKey};
	__property Vcl::Controls::TKeyEvent OnTextEditorKeyDown = {read=fOnTextEditorKeyDown, write=fOnTextEditorKeyDown};
	__property TIETextEditorEvent OnActivateTextEditor = {read=fOnActivateTextEditor, write=fOnActivateTextEditor};
	__property TIETextEditorEvent OnDeactivateTextEditor = {read=fOnDeactivateTextEditor, write=fOnDeactivateTextEditor};
	__property bool EnableInteractionHints = {read=fEnableInteractionHints, write=fEnableInteractionHints, default=1};
	__property bool Playing = {read=fPlaying, write=SetPlaying, default=0};
	__property bool PlayLoop = {read=fPlayLoop, write=fPlayLoop, default=1};
	__property double PlaySpeed = {read=fPlaySpeed, write=fPlaySpeed, stored=IsPlaySpeedStored};
	__property System::Uitypes::TCursor Cursor = {read=fCursor, write=SetCursor, default=1785};
	__property TIEGridKind DisplayGridKind = {read=fDisplayGridKind, write=SetDisplayGridKind, default=0};
	__property Iexrulers::TRulerDirs ShowRulers = {read=fShowRulers, write=SetShowRulers, default=0};
	__property Ieview::TIEVButtons ShowButtons = {read=GetShowButtons, write=SetShowButtons, default=0};
	__property bool AsyncLoading = {read=GetAsyncLoading, write=SetAsyncLoading, default=0};
	__property bool AutoCursors = {read=fAutoCursors, write=fAutoCursors, default=1};
	__property Ieview::TIECursorShape ZoneCursor = {read=fZoneCursor, write=SetZoneCursor, default=0};
	__property int ZoneCursorSize = {read=GetZoneCursorSize, write=SetZoneCursorSize, default=50};
	__property Iexrulers::TRulerGripPosChangeEvent OnRulerGripPosChange = {read=GetOnRulerGripPosChange, write=SetOnRulerGripPosChange};
	__property Iexrulers::TRulerGripClickEvent OnRulerGripClick = {read=GetOnRulerGripClick, write=SetOnRulerGripClick};
	__property Iexrulers::TRulerGripClickEvent OnRulerGripDblClick = {read=GetOnRulerGripDblClick, write=SetOnRulerGripDblClick};
	__property Iexrulers::TRulerClickEvent OnRulerClick = {read=GetOnRulerClick, write=SetOnRulerClick};
	__property Iexrulers::TRulerGetTextEvent OnRulerGetText = {read=GetOnRulerGetText, write=SetOnRulerGetText};
	__property Ieview::TIEVButtonClickEvent OnButtonClick = {read=fOnButtonClick, write=fOnButtonClick};
	__property Ieview::TIEVButtonStateEvent OnButtonState = {read=fOnButtonState, write=fOnButtonState};
	__property Align = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property Visible = {default=1};
	__property TabOrder = {default=-1};
	__property TabStop = {default=0};
	__property OnClick;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDrag;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnStartDrag;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnContextPopup;
	__property OnGesture;
public:
	/* TWinControl.CreateParented */ inline __fastcall TImageEnView(HWND ParentWindow) : Ieview::TIEView(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::Int8 IEVIEW_CHANGE_XY = System::Int8(0x0);
static const System::Int8 IEVIEW_CHANGE_ZOOM = System::Int8(0x1);
static const System::Int8 IEVIEW_CHANGE_STYLE = System::Int8(0x2);
static const System::Int8 IEVIEW_CHANGE_BW = System::Int8(0x3);
#define Exclusive_Mouse_Interactions_General (System::Set<TIEMouseInteractItems, TIEMouseInteractItems::miZoom, TIEMouseInteractItems::miPdfSelectRgn>() << TIEMouseInteractItems::miScroll << TIEMouseInteractItems::miSelectZoom << TIEMouseInteractItems::miCropTool << TIEMouseInteractItems::miBrushTool << TIEMouseInteractItems::miCloneTool << TIEMouseInteractItems::miRotateTool << TIEMouseInteractItems::miColorFill << TIEMouseInteractItems::miAlphaFill << TIEMouseInteractItems::miMeasureLength << TIEMouseInteractItems::miMeasureRect << TIEMouseInteractItems::miMeasureEllipse << TIEMouseInteractItems::miMeasurePath << TIEMouseInteractItems::miMeasureAngle << TIEMouseInteractItems::miColorPicker << TIEMouseInteractItems::miRetouchTool << TIEMouseInteractItems::miAdjustBlackWhite )
#define Exclusive_Mouse_Interactions_Selection (System::Set<TIEMouseInteractItems, TIEMouseInteractItems::miZoom, TIEMouseInteractItems::miPdfSelectRgn>() << TIEMouseInteractItems::miSelect << TIEMouseInteractItems::miSelectPolygon << TIEMouseInteractItems::miSelectCircle << TIEMouseInteractItems::miSelectMagicWand << TIEMouseInteractItems::miSelectLasso << TIEMouseInteractItems::miSelectChromaKey << TIEMouseInteractItems::miPdfSelectRgn )
#define All_Exclusive_Mouse_Interactions (System::Set<TIEMouseInteractItems, TIEMouseInteractItems::miZoom, TIEMouseInteractItems::miPdfSelectRgn>() << TIEMouseInteractItems::miScroll << TIEMouseInteractItems::miSelect << TIEMouseInteractItems::miSelectPolygon << TIEMouseInteractItems::miSelectCircle << TIEMouseInteractItems::miSelectZoom << TIEMouseInteractItems::miSelectMagicWand << TIEMouseInteractItems::miSelectLasso << TIEMouseInteractItems::miSelectChromaKey << TIEMouseInteractItems::miCropTool << TIEMouseInteractItems::miBrushTool << TIEMouseInteractItems::miCloneTool << TIEMouseInteractItems::miRotateTool << TIEMouseInteractItems::miColorFill << TIEMouseInteractItems::miAlphaFill << TIEMouseInteractItems::miMeasureLength << TIEMouseInteractItems::miMeasureRect \
	<< TIEMouseInteractItems::miMeasureEllipse << TIEMouseInteractItems::miMeasurePath << TIEMouseInteractItems::miMeasureAngle << TIEMouseInteractItems::miColorPicker << TIEMouseInteractItems::miRetouchTool << TIEMouseInteractItems::miAdjustBlackWhite << TIEMouseInteractItems::miPdfSelectRgn )
#define Non_Exclusive_Mouse_Interactions (System::Set<TIEMouseInteractItems, TIEMouseInteractItems::miZoom, TIEMouseInteractItems::miPdfSelectRgn>() << TIEMouseInteractItems::miZoom << TIEMouseInteractItems::miMovingScroll << TIEMouseInteractItems::miSmoothZoom )
static const TIEMouseInteractLayerItems miMoveLayers _DEPRECATED_ATTRIBUTE1("Use mlMoveLayers instead - http://imageen.com/help/Compa"
	"tibility.html")  = (TIEMouseInteractLayerItems)(0);
static const TIEMouseInteractLayerItems miResizeLayers _DEPRECATED_ATTRIBUTE1("Use mlResizeLayers instead - http://imageen.com/help/Com"
	"patibility.html")  = (TIEMouseInteractLayerItems)(1);
static const TIEMouseInteractLayerItems miRotateLayers _DEPRECATED_ATTRIBUTE1("Use mlRotateLayers instead - http://imageen.com/help/Com"
	"patibility.html")  = (TIEMouseInteractLayerItems)(2);
static const TIEMouseInteractLayerItems miCreateImageLayers _DEPRECATED_ATTRIBUTE1("Use mlCreateImageLayers instead - http://imageen.com/hel"
	"p/Compatibility.html")  = (TIEMouseInteractLayerItems)(3);
static const TIEMouseInteractLayerItems miCreateShapeLayers _DEPRECATED_ATTRIBUTE1("Use mlCreateShapeLayers instead - http://imageen.com/hel"
	"p/Compatibility.html")  = (TIEMouseInteractLayerItems)(4);
static const TIEMouseInteractLayerItems miCreateLineLayers _DEPRECATED_ATTRIBUTE1("Use mlCreateLineLayers instead - http://imageen.com/help"
	"/Compatibility.html")  = (TIEMouseInteractLayerItems)(5);
static const TIEMouseInteractLayerItems miCreatePolylineLayers _DEPRECATED_ATTRIBUTE1("Use mlCreatePolylineLayers instead - http://imageen.com/"
	"help/Compatibility.html")  = (TIEMouseInteractLayerItems)(6);
static const TIEMouseInteractLayerItems miCreateTextLayers _DEPRECATED_ATTRIBUTE1("Use mlCreateTextLayers instead - http://imageen.com/help"
	"/Compatibility.html")  = (TIEMouseInteractLayerItems)(8);
static const TIEMouseInteractLayerItems miClickCreateLineLayers _DEPRECATED_ATTRIBUTE1("Use mlClickCreateLineLayers instead - http://imageen.com"
	"/help/Compatibility.html")  = (TIEMouseInteractLayerItems)(9);
static const TIEMouseInteractLayerItems miClickCreatePolylineLayers _DEPRECATED_ATTRIBUTE1("Use mlClickCreatePolylineLayers instead - http://imageen"
	".com/help/Compatibility.html")  = (TIEMouseInteractLayerItems)(10);
static const TIEMouseInteractLayerItems miDrawCreatePolylineLayers _DEPRECATED_ATTRIBUTE1("Use mlDrawCreatePolylineLayers instead - http://imageen."
	"com/help/Compatibility.html")  = (TIEMouseInteractLayerItems)(11);
static const TIEMouseInteractLayerItems miEditLayerPoints _DEPRECATED_ATTRIBUTE1("Use mlEditLayerPoints instead - http://imageen.com/help/"
	"Compatibility.html")  = (TIEMouseInteractLayerItems)(13);
#define Exclusive_Mouse_Layer_Interactions (System::Set<TIEMouseInteractLayerItems, TIEMouseInteractLayerItems::mlMoveLayers, TIEMouseInteractLayerItems::mlEditLayerPoints>() << TIEMouseInteractLayerItems::mlCreateImageLayers << TIEMouseInteractLayerItems::mlCreateShapeLayers << TIEMouseInteractLayerItems::mlCreateLineLayers << TIEMouseInteractLayerItems::mlCreatePolylineLayers << TIEMouseInteractLayerItems::mlCreateAngleLayers << TIEMouseInteractLayerItems::mlCreateTextLayers << TIEMouseInteractLayerItems::mlClickCreateLineLayers << TIEMouseInteractLayerItems::mlClickCreatePolylineLayers << TIEMouseInteractLayerItems::mlDrawCreatePolylineLayers << TIEMouseInteractLayerItems::mlClickCreateAngleLayers )
#define Non_Exclusive_Mouse_Layer_Interactions (System::Set<TIEMouseInteractLayerItems, TIEMouseInteractLayerItems::mlMoveLayers, TIEMouseInteractLayerItems::mlEditLayerPoints>() << TIEMouseInteractLayerItems::mlMoveLayers << TIEMouseInteractLayerItems::mlResizeLayers << TIEMouseInteractLayerItems::mlRotateLayers << TIEMouseInteractLayerItems::mlEditLayerPoints )
#define OnLayerNotifyEx_Exclusions (System::Set<TIELayerEvent, TIELayerEvent::ielSelected, TIELayerEvent::ielNewLayer>() << TIELayerEvent::ielBeginResizing << TIELayerEvent::ielBeginRotating << TIELayerEvent::ielBeginMoving << TIELayerEvent::ielBeginCreating << TIELayerEvent::ielBeforeRemove << TIELayerEvent::ielRemoved )
static const System::Int8 POLY_UNKNOWN = System::Int8(0x0);
static const System::Int8 POLY_RECT = System::Int8(0x1);
static const System::Int8 POLY_ELLIPSE = System::Int8(0x2);
static const System::Int8 IEN_Send_To_Back = System::Int8(-9);
static const System::Int8 IEN_Send_Backward = System::Int8(-8);
static const System::Int8 IEN_Bring_Forward = System::Int8(-7);
static const System::Int8 IEN_Bring_To_Front = System::Int8(-6);
static const System::Int8 LYR_ALL_LAYERS = System::Int8(-1);
static const System::Int8 LYR_SELECTED_LAYERS = System::Int8(-2);
static const System::Uitypes::TCursor crIEZoomOut = System::Uitypes::TCursor(1778);
static const System::Uitypes::TCursor crIEZoomIn = System::Uitypes::TCursor(1779);
static const System::Uitypes::TCursor crIEThickCross2 = System::Uitypes::TCursor(1780);
static const System::Uitypes::TCursor crIEEraser = System::Uitypes::TCursor(1781);
static const System::Uitypes::TCursor crIEHandDrag = System::Uitypes::TCursor(1782);
static const System::Uitypes::TCursor crIEPencil = System::Uitypes::TCursor(1783);
static const System::Uitypes::TCursor crIECross = System::Uitypes::TCursor(1784);
static const System::Uitypes::TCursor crIECrossSight = System::Uitypes::TCursor(1785);
static const System::Uitypes::TCursor crIESizeNWSE = System::Uitypes::TCursor(1786);
static const System::Uitypes::TCursor crIESizeNS = System::Uitypes::TCursor(1787);
static const System::Uitypes::TCursor crIESizeNESW = System::Uitypes::TCursor(1788);
static const System::Uitypes::TCursor crIESizeWE = System::Uitypes::TCursor(1789);
static const System::Uitypes::TCursor crIESizeAll = System::Uitypes::TCursor(1790);
static const System::Uitypes::TCursor crIECrossSightPlus = System::Uitypes::TCursor(1791);
static const System::Uitypes::TCursor crIECrossSightMinus = System::Uitypes::TCursor(1792);
static const System::Uitypes::TCursor crIEThickCross = System::Uitypes::TCursor(1793);
static const System::Uitypes::TCursor crIEThickCrossPlus = System::Uitypes::TCursor(1794);
static const System::Uitypes::TCursor crIECrossSightMinus2 = System::Uitypes::TCursor(1795);
static const System::Uitypes::TCursor crIECrossSightMinus3 = System::Uitypes::TCursor(1795);
static const System::Uitypes::TCursor crIECircleCrossSight = System::Uitypes::TCursor(1796);
static const System::Uitypes::TCursor crIEBrush = System::Uitypes::TCursor(1797);
static const System::Uitypes::TCursor crIEEyeDropper2 = System::Uitypes::TCursor(1798);
static const System::Uitypes::TCursor crIEPaintFill = System::Uitypes::TCursor(1799);
static const System::Uitypes::TCursor crIEStamp = System::Uitypes::TCursor(1800);
static const System::Uitypes::TCursor crIECrop = System::Uitypes::TCursor(1801);
static const System::Uitypes::TCursor crIECrossSmallPlus = System::Uitypes::TCursor(1802);
static const System::Uitypes::TCursor crIESmallArrow = System::Uitypes::TCursor(1803);
static const System::Uitypes::TCursor crIEMultipleArrow = System::Uitypes::TCursor(1804);
static const System::Uitypes::TCursor crIEArrow = System::Uitypes::TCursor(1805);
static const System::Uitypes::TCursor crIEEyeDropper = System::Uitypes::TCursor(1806);
static const System::Uitypes::TCursor crIEEyeDropper3 = System::Uitypes::TCursor(1806);
static const System::Uitypes::TCursor crIECut = System::Uitypes::TCursor(1807);
static const System::Uitypes::TCursor crIESelectArrow = System::Uitypes::TCursor(1808);
static const System::Uitypes::TCursor crIEPen = System::Uitypes::TCursor(1809);
static const System::Uitypes::TCursor crIEBigZoomPlusMinus = System::Uitypes::TCursor(1810);
static const System::Uitypes::TCursor crIERotateNE = System::Uitypes::TCursor(1811);
static const System::Uitypes::TCursor crIERotateSW = System::Uitypes::TCursor(1812);
static const System::Uitypes::TCursor crIERotateNW = System::Uitypes::TCursor(1813);
static const System::Uitypes::TCursor crIERotateSE = System::Uitypes::TCursor(1814);
static const System::Uitypes::TCursor crIEHandOpen = System::Uitypes::TCursor(1815);
static const System::Uitypes::TCursor crIEHandGrab = System::Uitypes::TCursor(1816);
static const System::Uitypes::TCursor crIESlope = System::Uitypes::TCursor(1817);
static const System::Int8 ZoneCursor_Crosshair_Size = System::Int8(0x1a);
static const System::Int8 Minimum_Layer_Create_Size = System::Int8(0x5);
static const short Previous_Layer = short(-9997);
static const short Next_Layer = short(-9998);
static const System::Int8 Rotate_Grip_Size = System::Int8(0x2);
static const System::Int8 Ruler_Line_Width = System::Int8(0x2);
static const System::Int8 Ruler_Font_Size = System::Int8(0x12);
static const System::Int8 Ruler_Shape_Size = System::Int8(0x14);
extern DELPHI_PACKAGE bool __fastcall IELayersLoadHeaderFromStream(System::Classes::TStream* Stream, /* out */ Iexlayers::TLayerHeader &Header, /* out */ int &Width, /* out */ int &Height, /* out */ System::WideString &Description, /* out */ bool &ContainsLayer0, Iexbitmaps::TIEBitmap* &Thumbnail, bool LoadThumb = true);
extern DELPHI_PACKAGE void __fastcall IEInitialize_imageenview(void);
extern DELPHI_PACKAGE void __fastcall IEFinalize_imageenview(void);
extern DELPHI_PACKAGE void __fastcall IEDrawGrip(Iegdiplus::TIECanvas* Canvas, const System::Types::TRect &GripRect, const TIEGripStyle &GripStyle, bool ForceEllipse = false);
}	/* namespace Imageenview */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_IMAGEENVIEW)
using namespace Imageenview;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// ImageenviewHPP
