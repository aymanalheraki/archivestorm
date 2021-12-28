// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'iexTransitions.pas' rev: 35.00 (Windows)

#ifndef IextransitionsHPP
#define IextransitionsHPP

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
#include <Vcl.ExtCtrls.hpp>
#include <hyiedefs.hpp>
#include <Vcl.Controls.hpp>
#include <System.Types.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Iextransitions
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TIETransitionEffects;
struct TEffect;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TIETransitionType : unsigned char { iettNone, iettCrossDissolve, iettFadeOut, iettFadeIn, iettFadeOutIn, iettLeftRight1, iettLeftRight2, iettRightLeft1, iettRightLeft2, iettUpDown1, iettUpDown2, iettDownUp1, iettDownUp2, iettFromUpLeft, iettFromUpRight, iettFromBottomLeft, iettFromBottomRight, iettMoveLeftRight1, iettMoveLeftRight2, iettMoveRightLeft1, iettMoveRightLeft2, iettMoveUpDown1, iettMoveUpDown2, iettMoveDownUp1, iettMoveDownUp2, iettRandomPoints, iettRandomBoxes, iettCenter1, iettCenter2, iettCenterZoom1, iettCenterZoom2, iettExpandFromLeft, iettExpandFromRight, iettExpandFromTop, iettExpandFromBottom, iettExpandFromTopLeft, iettExpandFromTopRight, iettExpandFromBottomLeft, iettExpandFromBottomRight, iettExpandInFromLeft, 
	iettExpandInFromRight, iettExpandInFromTop, iettExpandInFromBottom, iettExpandInToVerticalCenter, iettExpandInToHorizon, iettExpandInFromSides, iettExpandInFromTopAndBottom, iettExpandOutFromHorizon, iettExpandOutFromVerticalCenter, iettWipeFromTopLeft, iettWipeFromTopRight, iettWipeFromBottomLeft, iettWipeFromBottomRight, iettWipeInFromTopAndBottom, iettWipeFromHorizon, iettWipeInFromSides, iettWipeOutFromVerticalCenter, iettBuildUpFromLeft, iettBuildUpFromRight, iettBuildUpFromTop, iettBuildUpFromBottom, iettUnrollFromLeft, iettUnrollFromRight, iettUnrollFromTop, iettUnrollFromBottom, iettSlideInFromLeft, iettSlideInFromRight, iettSlideInFromTop, iettSlideInFromBottom, iettShrinkToTopLeft, iettShrinkToTopRight, iettShrinkToBottomLeft, 
	iettShrinkToBottomRight, iettShrinkToCenter, iettQuartersWipeInToCenter, iettQuartersExpandToCenter, iettQuartersSlideInToCenter, iettCurvedWipeFromLeft, iettCurvedWipeFromRight, iettCurvedWipeFromTop, iettCurvedWipeFromBottom, iettCurvedWipeFromTopLeft, iettCurvedWipeFromTopRight, iettCurvedWipeFromBottomLeft, iettCurvedWipeFromBottomRight, iettBarsInFromLeft, iettBarsInFromRight, iettBarsFromTop, iettBarsFromBottom, iettBarsLeftThenRight, iettBarsRightThenLeft, iettBarsTopThenBottom, iettBarsBottomThenTop, iettBarsFromBothSides, iettBarsFromTopAndBottom, iettShreddedFromLeft, iettShreddedFromRight, iettShreddedFromTop, iettShreddedFromBottom, iettShreddedFromTopAndLeft, iettShreddedFromTopAndRight, iettShreddedFromBottomAndLeft, 
	iettShreddedFromBottomAndRight, iettShreddedFromHorizonAndLeft, iettShreddedFromHorizonAndRight, iettShreddedFromTopAndVerticalCenter, iettShreddedFromBottomAndVerticalCenter, iettShreddedFromCenter, iettShreddedToCenter, iettShreddedInToHorizon, iettShreddedInToVerticalCenter, iettShreddedOutFromHorizon, iettShreddedOutFromVerticalCenter, iettExpandingRectangles, iettExpandingTriangles, iettExpandingCircles, iettExpandingDiamonds, iettCircularWipeFromCenter, iettCircularWipeToCenter, iettCrisscrossWipeFromTopLeft, iettCrisscrossWipeFromTopRight, iettCrisscrossWipeFromBottomLeft, iettCrisscrossWipeFromBottomRight, iettCrisscrossWipeBounceFromTopLeft, iettCrisscrossWipeBounceFromTopRight, iettCrisscrossWipeBounceFromBottomLeft, 
	iettCrisscrossWipeBounceFromBottomRight, iettCrisscrossWipeFromLeftRightAndTop, iettCrisscrossWipeFromLeftRightAndBottom, iettCrisscrossWipeFromLeftTopAndBottom, iettCrisscrossWipeFromTopLeftRightAndBottom, iettCrisscrossWipeFromRightTopAndBottom, iettCrisscrossWipeFromBottomLeftTopRight, iettWipeDiagonalFromTopLeft, iettWipeDiagonalFromTopRight, iettWipeDiagonalFromBottomLeft, iettWipeDiagonalFromBottomRight, iettDiagonalSweepClockwise, iettDiagonalSweepCounterClockwise, iettSweepClockwise, iettSweepCounterClockwise, iettStarburstClockwiseFromCenter, iettStarburstCounterClockwiseFromCenter, iettRotationalRectangle, iettRotationalRectangleCounterClockwise, iettRotationalStar, iettRotationalStarCounterClockwise, iettSpeckledWipeFromLeft, 
	iettSpeckledWipeFromRight, iettSpeckledWipeFromTop, iettSpeckledWipeFromBottom, iettPushLeftAndSlideOut, iettPushRightAndSlideOut, iettPushUpAndSlideOut, iettPushDownAndSlideOut, iettPushAndSqueezeLeft, iettPushAndSqueezeRight, iettPushAndSqueezeUp, iettPushAndSqueezeDown, iettHorizontalBlinds, iettVerticalBlinds, iettUnevenBlindsFromLeft, iettUnevenBlindsFromRight, iettUnevenBlindsFromTop, iettUnevenBlindsFromBottom, iettRectanglesFromTheLeft, iettRectanglesFromTheRight, iettRectanglesFromTheTop, iettRectanglesFromTheBottom, iettSpirallingRectangleClockwise, iettSpirallingRectangleCounterClockwise, iettArrowWipeFromLeft, iettArrowWipeFromRight, iettArrowWipeFromTop, iettArrowWipeFromBottom, iettHorizontalBowTieWipe, iettVerticalBowTieWipe, 
	iettDiagonalCrossFromCenter, iettDiagonalCrossToCenter, iettZigzagWipeFromHorizon, iettZigzagWipeFromVerticalCenter, iettDiamondWipeFromCenter, iettDiamondWipeToCenter, iettDiagonalBoxWipe, iettTriangularWipe, iettRandomBigBoxes, iettPageFlip, iettPageFlip2, iettReversePageFlip, iettReversePageFlip2, iettZigzagWipeToHorizon, iettZigzagWipeToVerticalCenter, iettRandomHearts, iettRandomStar5s, iettRandomStar6s, iettRandomExplosions, iettExpandingHearts, iettExpandingStar5, iettExpandingStar6, iettExpandingExplosions, iettExpandingLightningBolts, iettHeartWipeOut, iettHeartWipeIn, iettStar5WipeOut, iettStar5WipeIn, iettStar6WipeOut, iettStar6WipeIn, iettExplosionWipeOut, iettExplosionWipeIn, iettCrossWipeOut, iettCrossWipeIn, iettHeartWipeInAndOut, 
	iettStar5WipeInAndOut, iettStar6WipeInAndOut, iettExplosionWipeInAndOut, iettCubeRotateFromLeft, iettCubeRotateFromRight, iettCubeRotateFromTop, iettCubeRotateFromBottom, iettSoftWipeFromLeft, iettSoftWipeFromRight, iettSoftWipeFromTop, iettSoftWipeFromBottom, iettAngledTwistIn, iettAngledTwistOut, iettMultipleAngledTwistIn, iettMultipleAngledTwistOut, iettRandomPuzzlePieces, iettPacmanFromLeft, iettPacmanFromRight, iettPacman3Row, iettPacman4Row, iettPacman2SimRow, iettPacman4SimRow, iettPacman6SimRow, iettFullSweepClockwise, iettExpandingSweepClockwise, iettCubeRotateFromLeft2, iettCubeRotateFromRight2, iettCubeRotateFromTop2, iettCubeRotateFromBottom2, iettRandomBoxesWithWord, iettRandomWord, iettExpandingWord, iettWordWipeOut, iettWordWipeIn, 
	iettWordWipeInAndOut, iettWordHalfSweep, iettWordFullSweep, iettWordFullExpandingSweep, iettPanZoom };

enum DECLSPEC_DENUM TIETransitionTiming : unsigned char { iettLinear, iettExponential, iettLogarithmic };

typedef void __fastcall (__closure *TIETransitionStepEvent)(System::TObject* Sender, int step);

typedef void __fastcall (__closure *TIEOnTransitionPaint)(System::TObject* Sender, Vcl::Graphics::TBitmap* Bitmap, TIETransitionEffects* Transition, int Step);

class PASCALIMPLEMENTATION TIETransitionEffects : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Vcl::Graphics::TBitmap* fSourceShot;
	Vcl::Graphics::TBitmap* fTargetShot;
	Vcl::Graphics::TBitmap* fCurrentView;
	System::TObject* fFullImage;
	Hyiedefs::TPointerArray *fSourceShotLines;
	Hyiedefs::TPointerArray *fTargetShotLines;
	Hyiedefs::TPointerArray *fCurrentViewLines;
	int fWidth;
	int fHeight;
	bool fRunning;
	Vcl::Controls::TWinControl* fOwner;
	Vcl::Extctrls::TTimer* fTimer;
	int fStep;
	bool fFirstStep;
	int fAccum1;
	TIETransitionType fTransition;
	int fDuration;
	unsigned fStartTick;
	bool fUpdateOnStop;
	System::Types::TRect fStartRect;
	System::Types::TRect fEndRect;
	System::Classes::TNotifyEvent fOnTransitionStop;
	TIETransitionStepEvent fOnTransitionStep;
	TIETransitionTiming fTiming;
	System::Uitypes::TColor fBackground;
	int fSmoothing;
	int fMinLeft;
	int fMaxLeft;
	int fMinTop;
	int fMaxTop;
	int fMinBottom;
	int fMaxBottom;
	int fMinRight;
	int fMaxRight;
	TIEOnTransitionPaint fOnTransitionPaint;
	void __fastcall SetOnTransitionPaint(const TIEOnTransitionPaint Value);
	void __fastcall MakeTransition(Vcl::Graphics::TCanvas* DestCanvas, bool bExplicitUpdate = false);
	void __fastcall SetFullImage(System::TObject* const Value);
	
protected:
	int fFrames;
	void __fastcall TimerEvent(System::TObject* Sender);
	void __fastcall CrossDissolve(int Step);
	void __fastcall FadeOut(int Step);
	void __fastcall FadeIn(int Step);
	void __fastcall FadeOutIn(int Step);
	void __fastcall LeftRightEx(int Step, bool DividingLine);
	void __fastcall RightLeftEx(int Step, bool DividingLine);
	void __fastcall UpDownEx(int Step, bool DividingLine);
	void __fastcall DownUpEx(int Step, bool DividingLine);
	void __fastcall MoveLeftRight1(int Step);
	void __fastcall MoveLeftRight2(int Step);
	void __fastcall MoveRightLeft1(int Step);
	void __fastcall MoveRightLeft2(int Step);
	void __fastcall MoveUpDown1(int Step);
	void __fastcall MoveUpDown2(int Step);
	void __fastcall MoveDownUp1(int Step);
	void __fastcall MoveDownUp2(int Step);
	void __fastcall RandomPoints(int Step);
	void __fastcall FromUpLeft(int Step);
	void __fastcall FromUpRight(int Step);
	void __fastcall FromBottomLeft(int Step);
	void __fastcall FromBottomRight(int Step);
	void __fastcall RandomBoxes(int Step);
	void __fastcall Center1(int Step);
	void __fastcall Center2(int Step);
	void __fastcall CenterZoom1(int Step);
	void __fastcall CenterZoom2(int Step);
	void __fastcall PanZoom(int Step);
	void __fastcall CubeRotateDarkenEdges(bool bVertical, bool bForward, int iCurrentPosition, int Step);
	void __fastcall CubeRotateFromLeft(int Step);
	void __fastcall CubeRotateFromRight(int Step);
	void __fastcall CubeRotateFromTop(int Step);
	void __fastcall CubeRotateFromBottom(int Step);
	void __fastcall CubeRotateFromLeft3D(int Step);
	void __fastcall CubeRotateFromRight3D(int Step);
	void __fastcall CubeRotateFromTop3D(int Step);
	void __fastcall CubeRotateFromBottom3D(int Step);
	void __fastcall PageFlipEffect(int Step, bool bForward);
	void __fastcall PageFlipEffect3D(int Step, bool bForward);
	void __fastcall PageFlipDarkenEdges(int iCurrentPosition, int Step, bool bForward);
	void __fastcall SoftWipeVerticalEx(int Step, bool bForward);
	void __fastcall SoftWipeHorizontalEx(int Step, bool bForward);
	void __fastcall SoftWipeFromLeft(int Step);
	void __fastcall SoftWipeFromRight(int Step);
	void __fastcall SoftWipeFromTop(int Step);
	void __fastcall SoftWipeFromBottom(int Step);
	
public:
	__fastcall TIETransitionEffects(Vcl::Controls::TWinControl* Owner);
	__fastcall virtual ~TIETransitionEffects();
	__property Vcl::Graphics::TBitmap* SourceShot = {read=fSourceShot};
	__property Vcl::Graphics::TBitmap* TargetShot = {read=fTargetShot};
	__property bool Running = {read=fRunning, nodefault};
	void __fastcall Run(bool UpdateOnStop);
	void __fastcall Stop();
	__property TIETransitionType Transition = {read=fTransition, write=fTransition, nodefault};
	void __fastcall SetSizes(int Width, int Height);
	__property int Duration = {read=fDuration, write=fDuration, nodefault};
	void __fastcall PrepareBitmap(Vcl::Graphics::TBitmap* OriginalBitmap, Vcl::Graphics::TBitmap* TargetBitmap);
	void __fastcall CreateBitmap(float TransitionProgress, Vcl::Graphics::TBitmap* DestBitmap);
	__property System::TObject* FullImage = {read=fFullImage, write=SetFullImage};
	__property System::Types::TRect StartRect = {read=fStartRect, write=fStartRect};
	__property System::Types::TRect EndRect = {read=fEndRect, write=fEndRect};
	__property System::Classes::TNotifyEvent OnTransitionStop = {read=fOnTransitionStop, write=fOnTransitionStop};
	__property TIETransitionStepEvent OnTransitionStep = {read=fOnTransitionStep, write=fOnTransitionStep};
	__property TIEOnTransitionPaint OnTransitionPaint = {read=fOnTransitionPaint, write=SetOnTransitionPaint};
	__property TIETransitionTiming Timing = {read=fTiming, write=fTiming, nodefault};
	__property System::Uitypes::TColor Background = {read=fBackground, write=fBackground, nodefault};
	__property int Smoothing = {read=fSmoothing, write=fSmoothing, nodefault};
};


enum DECLSPEC_DENUM TTransitionCategory : unsigned char { tcGeneral, tcWipes, tcSpecialWipes, tcCurvedWipes, tcAngledWipes, tcCenterWipes, tcInAndOuts, tcShreds, tcBars, tcSlides, tcPushes, tcShrinks, tcExpands, tcMultiExpanders, tcRandoms, tcRotates, tcWordEffects, tcOther, tcUnattractive };

struct DECLSPEC_DRECORD TEffect
{
public:
	System::UnicodeString Name;
	TTransitionCategory Category;
	bool Overlay;
};


typedef System::StaticArray<TEffect, 249> Iextransitions__2;

enum DECLSPEC_DENUM TIEPanZoomType : unsigned char { iepzPanTopLeftToBottomRight, iepzPanTopRightToBottomLeft, iepzPanBottomLeftToTopRight, iepzPanBottomRightToTopLeft, iepzPanTopLeftToCenter, iepzPanTopRightToCenter, iepzPanBottomLeftToCenter, iepzPanBottomRightToCenter, iepzPanCenterToTopLeft, iepzPanCenterToTopRight, iepzPanCenterToBottomLeft, iepzPanCenterToBottomRight, iepzPanLeftToRightOrTopToBottom, iepzPanLeftToCenterOrTopToCenter, iepzPanRightToCenterOrBottomToCenter, iepzPanRightToLeftOrBottomToTop, iepzPanCenterToLeftToOrCenterToTop, iepzPanCenterToRightOrCenterToBottom, iepzZoomInToTopLeft, iepzZoomInToTopRight, iepzZoomInToCenter, iepzZoomInToBottomLeft, iepzZoomInToBottomRight, iepzZoomOutFromTopLeft, iepzZoomOutFromTopRight, 
	iepzZoomOutFromCenter, iepzZoomOutFromBottomLeft, iepzZoomOutFromBottomRight, iepzFullZoomInToTopLeft, iepzFullZoomInToTop, iepzFullZoomInToTopRight, iepzFullZoomInToLeft, iepzFullZoomInToCenter, iepzFullZoomInToRight, iepzFullZoomInToBottomLeft, iepzFullZoomInToBottom, iepzFullZoomInToBottomRight, iepzFullZoomOutFromTopLeft, iepzFullZoomOutFromTop, iepzFullZoomOutFromTopRight, iepzFullZoomOutFromLeft, iepzFullZoomOutFromCenter, iepzFullZoomOutFromRight, iepzFullZoomOutFromBottomLeft, iepzFullZoomOutFromBottom, iepzFullZoomOutFromBottomRight };

typedef System::StaticArray<System::UnicodeString, 46> Iextransitions__3;

//-- var, const, procedure ---------------------------------------------------
#define Transitions_Supporting_Word (System::Set<TIETransitionType, TIETransitionType::iettNone, TIETransitionType::iettPanZoom>() << TIETransitionType::iettRandomBoxesWithWord << TIETransitionType::iettRandomWord << TIETransitionType::iettExpandingWord << TIETransitionType::iettWordWipeOut << TIETransitionType::iettWordWipeIn << TIETransitionType::iettWordWipeInAndOut << TIETransitionType::iettWordHalfSweep << TIETransitionType::iettWordFullSweep << TIETransitionType::iettWordFullExpandingSweep )
#define Transitions_Supporting_TransitionsDrawAlternative (System::Set<TIETransitionType, TIETransitionType::iettNone, TIETransitionType::iettPanZoom>() << TIETransitionType::iettLeftRight2 << TIETransitionType::iettRightLeft2 << TIETransitionType::iettUpDown2 << TIETransitionType::iettDownUp2 << TIETransitionType::iettRandomPoints << TIETransitionType::iettRandomBoxes << TIETransitionType::iettExpandFromLeft << TIETransitionType::iettExpandFromRight << TIETransitionType::iettExpandFromTop << TIETransitionType::iettExpandFromBottom << TIETransitionType::iettBarsInFromLeft << TIETransitionType::iettBarsInFromRight << TIETransitionType::iettBarsFromTop << TIETransitionType::iettBarsFromBottom << TIETransitionType::iettBarsLeftThenRight << TIETransitionType::iettBarsRightThenLeft \
	<< TIETransitionType::iettBarsTopThenBottom << TIETransitionType::iettBarsBottomThenTop << TIETransitionType::iettBarsFromBothSides << TIETransitionType::iettBarsFromTopAndBottom << TIETransitionType::iettShreddedFromLeft << TIETransitionType::iettShreddedFromRight << TIETransitionType::iettShreddedFromTop << TIETransitionType::iettShreddedFromBottom << TIETransitionType::iettShreddedFromTopAndLeft << TIETransitionType::iettShreddedFromTopAndRight << TIETransitionType::iettShreddedFromBottomAndLeft << TIETransitionType::iettShreddedFromBottomAndRight << TIETransitionType::iettShreddedFromHorizonAndLeft << TIETransitionType::iettShreddedFromHorizonAndRight << TIETransitionType::iettShreddedFromTopAndVerticalCenter << TIETransitionType::iettShreddedFromBottomAndVerticalCenter \
	<< TIETransitionType::iettShreddedFromCenter << TIETransitionType::iettShreddedToCenter << TIETransitionType::iettShreddedInToHorizon << TIETransitionType::iettShreddedInToVerticalCenter << TIETransitionType::iettShreddedOutFromHorizon << TIETransitionType::iettShreddedOutFromVerticalCenter << TIETransitionType::iettExpandingTriangles << TIETransitionType::iettCrisscrossWipeFromTopLeft << TIETransitionType::iettCrisscrossWipeFromTopRight << TIETransitionType::iettCrisscrossWipeFromBottomLeft << TIETransitionType::iettCrisscrossWipeFromBottomRight << TIETransitionType::iettCrisscrossWipeBounceFromTopLeft << TIETransitionType::iettCrisscrossWipeBounceFromTopRight << TIETransitionType::iettCrisscrossWipeBounceFromBottomLeft << TIETransitionType::iettCrisscrossWipeBounceFromBottomRight \
	<< TIETransitionType::iettCrisscrossWipeFromLeftRightAndTop << TIETransitionType::iettCrisscrossWipeFromLeftRightAndBottom << TIETransitionType::iettCrisscrossWipeFromLeftTopAndBottom << TIETransitionType::iettCrisscrossWipeFromTopLeftRightAndBottom << TIETransitionType::iettCrisscrossWipeFromRightTopAndBottom << TIETransitionType::iettCrisscrossWipeFromBottomLeftTopRight << TIETransitionType::iettSweepClockwise << TIETransitionType::iettSweepCounterClockwise << TIETransitionType::iettSpeckledWipeFromLeft << TIETransitionType::iettSpeckledWipeFromRight << TIETransitionType::iettSpeckledWipeFromTop << TIETransitionType::iettSpeckledWipeFromBottom << TIETransitionType::iettRectanglesFromTheLeft << TIETransitionType::iettRectanglesFromTheRight << TIETransitionType::iettRectanglesFromTheTop \
	<< TIETransitionType::iettRectanglesFromTheBottom << TIETransitionType::iettZigzagWipeFromHorizon << TIETransitionType::iettZigzagWipeFromVerticalCenter << TIETransitionType::iettTriangularWipe << TIETransitionType::iettRandomBigBoxes << TIETransitionType::iettPageFlip << TIETransitionType::iettPageFlip2 << TIETransitionType::iettReversePageFlip << TIETransitionType::iettReversePageFlip2 << TIETransitionType::iettZigzagWipeToHorizon << TIETransitionType::iettZigzagWipeToVerticalCenter << TIETransitionType::iettRandomHearts << TIETransitionType::iettRandomStar6s << TIETransitionType::iettExpandingHearts << TIETransitionType::iettExpandingStar6 << TIETransitionType::iettExpandingExplosions << TIETransitionType::iettExpandingLightningBolts << TIETransitionType::iettHeartWipeOut \
	<< TIETransitionType::iettHeartWipeIn << TIETransitionType::iettStar6WipeOut << TIETransitionType::iettStar6WipeIn << TIETransitionType::iettExplosionWipeOut << TIETransitionType::iettExplosionWipeIn << TIETransitionType::iettHeartWipeInAndOut << TIETransitionType::iettStar6WipeInAndOut << TIETransitionType::iettExplosionWipeInAndOut << TIETransitionType::iettCubeRotateFromLeft << TIETransitionType::iettCubeRotateFromRight << TIETransitionType::iettCubeRotateFromTop << TIETransitionType::iettCubeRotateFromBottom << TIETransitionType::iettSoftWipeFromLeft << TIETransitionType::iettSoftWipeFromRight << TIETransitionType::iettSoftWipeFromTop << TIETransitionType::iettSoftWipeFromBottom << TIETransitionType::iettRandomPuzzlePieces << TIETransitionType::iettPacmanFromLeft \
	<< TIETransitionType::iettPacmanFromRight << TIETransitionType::iettPacman3Row << TIETransitionType::iettPacman4Row << TIETransitionType::iettPacman2SimRow << TIETransitionType::iettPacman4SimRow << TIETransitionType::iettPacman6SimRow << TIETransitionType::iettFullSweepClockwise << TIETransitionType::iettExpandingSweepClockwise << TIETransitionType::iettCubeRotateFromLeft2 << TIETransitionType::iettCubeRotateFromRight2 << TIETransitionType::iettCubeRotateFromTop2 << TIETransitionType::iettCubeRotateFromBottom2 << TIETransitionType::iettRandomBoxesWithWord << TIETransitionType::iettRandomWord << TIETransitionType::iettExpandingWord << TIETransitionType::iettWordWipeOut << TIETransitionType::iettWordWipeIn << TIETransitionType::iettWordWipeInAndOut \
	<< TIETransitionType::iettWordHalfSweep << TIETransitionType::iettWordFullSweep )
static const System::Byte MAX_TRANSITIONS = System::Byte(0xf9);
extern DELPHI_PACKAGE Iextransitions__2 IETransitionList;
static const System::Int8 MAX_PAN_ZOOM_EFFECT_COUNT = System::Int8(0x2e);
extern DELPHI_PACKAGE Iextransitions__3 IEPanZoomEffectNames;
extern DELPHI_PACKAGE void __fastcall GetPanZoomEffectStartEndRects(int iIEClientWidth, int iIEClientHeight, int iBitmapWidth, int iBitmapHeight, TIEPanZoomType PanZoomEffect, int iMaxZoom, /* out */ System::Types::TRect &StartRect, /* out */ System::Types::TRect &EndRect);
}	/* namespace Iextransitions */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_IEXTRANSITIONS)
using namespace Iextransitions;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// IextransitionsHPP
