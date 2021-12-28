// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'iexCanvasUtils.pas' rev: 35.00 (Windows)

#ifndef IexcanvasutilsHPP
#define IexcanvasutilsHPP

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
#include <System.UITypes.hpp>
#include <System.Types.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.StdCtrls.hpp>
#include <hyiedefs.hpp>
#include <iegdiplus.hpp>
#include <iexBitmaps.hpp>

//-- user supplied -----------------------------------------------------------

namespace Iexcanvasutils
{
//-- forward type declarations -----------------------------------------------
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TIEBooleanEx : unsigned char { iebFalse, iebTrue, iebDefault };

enum DECLSPEC_DENUM TWallpaperEffect : unsigned char { wpSolid, wpLeftLine, wpTopLine, wpDoubleLeftLines, wpDoubleTopLines, wpDoubleVariedLeftLines, wpDoubleVariedTopLines, wpTripleLeftLines, wpTripleTopLines, wpTripleVariedLeftLines, wpTripleVariedTopLines, wpLeftDashes, wpTopDashes, wpDoubleLeftDashes, wpDoubleTopDashes, wpTripleLeftDashes, wpTripleTopDashes, wpLeftZigZag, wpTopZigZag, wpLeftGradient, wpTopGradient, wpHorzPinStripe, wpVertPinStripe, wpDiagPinStripe, wpDiagPinStripe2, wpCrossHatch, wpDiagCrossHatch, wpHorzStripes, wpVertStripes, wpDiagStripes, wpDiagStripes2, wpCheckers, wpDiagCheckers, wpRain, wpRain2, wpRivets, wpHearts, wpStars, wpLightning, wpRuledPage };

typedef void __fastcall (__closure *TIEAddButtonImageEvent)(System::TObject* Sender, int ButtonImageID, Iexbitmaps::TIEBitmap* &Bitmap);

enum DECLSPEC_DENUM TXCustomShape : unsigned char { xcsStar5, xcsStar6, xcsArrowNW, xcsArrowNE, xcsArrowSW, xcsArrowSE, xcsLightningLeft, xcsLightningRight, xcsExplosion, xcsExplosion_2, xcsCross, xcsArrowNW2, xcsArrowNE2, xcsArrowSW2, xcsArrowSE2, xcsHeart, xcsDoubleHeart };

//-- var, const, procedure ---------------------------------------------------
static const System::Word Max_Shape_Array_Points = System::Word(0x3e8);
extern DELPHI_PACKAGE double __fastcall IEShapePreferredAspectRatio(Hyiedefs::TIEShape Shape);
extern DELPHI_PACKAGE void __fastcall IEGenerateShapePoints(/* out */ System::Types::TPoint *PointArray, const int PointArray_High, /* out */ int &PointCount, Hyiedefs::TIEShape Shape, int Left, int Top, int Width, int Height, int Angle = 0x0, bool MaintainAROnRotate = false, int ShapeModifier = 0x0, double AspectRatio = 1.000000E+00);
extern DELPHI_PACKAGE HRGN __fastcall IECreateShapeRegion(Hyiedefs::TIEShape Shape, int iLeft, int iTop, int iWidth, int iHeight, TIEBooleanEx MaintainAspect = (TIEBooleanEx)(0x2), int Angle = 0x0, int ShapeModifier = 0x0)/* overload */;
extern DELPHI_PACKAGE HRGN __fastcall IECreateShapeRegion(Hyiedefs::TIEShape Shape, const System::Types::TRect &ARect, TIEBooleanEx MaintainAspect = (TIEBooleanEx)(0x2), int Angle = 0x0, int ShapeModifier = 0x0)/* overload */;
extern DELPHI_PACKAGE HRGN __fastcall CreateCustomShapeRegion _DEPRECATED_ATTRIBUTE1("Use IECreateShapeRegion instead - http://imageen.com/help/Compatibility.html") (TXCustomShape Shape, int iLeft, int iTop, int iWidth, int iHeight);
extern DELPHI_PACKAGE void __fastcall IEDrawShape(Iegdiplus::TIECanvas* Canvas, Hyiedefs::TIEShape Shape, int Left, int Top, int Width, int Height, TIEBooleanEx MaintainAspect, System::Uitypes::TColor BorderColor, int BorderWidth, System::Uitypes::TColor FillColor, System::Uitypes::TColor FillColor2 = (System::Uitypes::TColor)(0x1fffffff), Hyiedefs::TIEGDIPlusGradient FillGradient = (Hyiedefs::TIEGDIPlusGradient)(0x2), bool AntiAlias = true, int Angle = 0x0, int ShapeModifier = 0x0, int BorderTransparency = 0xff, int FillTransparency = 0xff)/* overload */;
extern DELPHI_PACKAGE void __fastcall IEDrawShape(Vcl::Graphics::TCanvas* Canvas, Hyiedefs::TIEShape Shape, int Left, int Top, int Width, int Height, TIEBooleanEx MaintainAspect = (TIEBooleanEx)(0x2))/* overload */;
extern DELPHI_PACKAGE void __fastcall IEDrawShape(Vcl::Graphics::TCanvas* Canvas, Hyiedefs::TIEShape Shape, int Left, int Top, int Width, int Height, TIEBooleanEx MaintainAspect, System::Uitypes::TColor BorderColor, int BorderWidth, System::Uitypes::TColor FillColor, int Angle = 0x0, int ShapeModifier = 0x0)/* overload */;
extern DELPHI_PACKAGE void __fastcall DrawCustomShape _DEPRECATED_ATTRIBUTE1("Use IEDrawShape instead - http://imageen.com/help/Compatibility.html") (Vcl::Graphics::TCanvas* Canvas, TXCustomShape Shape, int iLeft, int iTop, int iWidth, int iHeight);
extern DELPHI_PACKAGE Vcl::Graphics::TBitmap* __fastcall CreateWallpaperBitmap(TWallpaperEffect Effect, System::Uitypes::TColor Color1, System::Uitypes::TColor Color2, int iSize = 0xffffffff, int iSpacing = 0xffffffff, int iThickness = 0xffffffff);
extern DELPHI_PACKAGE void __fastcall TileBitmapOntoCanvas(Vcl::Graphics::TCanvas* Canvas, int iWidth, int iHeight, Vcl::Graphics::TBitmap* Bitmap)/* overload */;
extern DELPHI_PACKAGE void __fastcall TileBitmapOntoCanvas(Vcl::Graphics::TCanvas* Canvas, int iWidth, int iHeight, Vcl::Graphics::TGraphic* Graphic)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall IEShapeToStr(Hyiedefs::TIEShape Shape);
extern DELPHI_PACKAGE void __fastcall IEDrawShapeToComboListBoxItem(Vcl::Graphics::TCanvas* ControlCanvas, const System::Types::TRect &CanvasRect, bool ControlEnabled, Hyiedefs::TIEShape Shape, System::Uitypes::TColor Color, bool ShowText = true);
extern DELPHI_PACKAGE void __fastcall IEDrawGradientToComboListBoxItem(Vcl::Graphics::TCanvas* ControlCanvas, const System::Types::TRect &CanvasRect, bool ControlEnabled, Hyiedefs::TIEGDIPlusGradient GradientDir, System::Uitypes::TColor FromColor, System::Uitypes::TColor ToColor, const System::UnicodeString Text);
extern DELPHI_PACKAGE void __fastcall IEInitializeComboBox(Vcl::Stdctrls::TComboBox* AComboBox);
extern DELPHI_PACKAGE void __fastcall IECheckComboboxFilled(Vcl::Stdctrls::TComboBox* AComboBox, int Count);
extern DELPHI_PACKAGE void __fastcall IEDrawComboListBoxItem(Vcl::Graphics::TCanvas* ControlCanvas, const System::Types::TRect &CanvasRect, bool ControlEnabled, System::UnicodeString Text, Vcl::Imglist::TCustomImageList* AnImageList = (Vcl::Imglist::TCustomImageList*)(0x0), short iGlyph = (short)(0xffffffff))/* overload */;
extern DELPHI_PACKAGE void __fastcall IEDrawComboListBoxItem(Vcl::Graphics::TCanvas* ControlCanvas, const System::Types::TRect &CanvasRect, bool ControlEnabled, System::UnicodeString Text, Iexbitmaps::TIEBitmap* Bmp, int BmpW, int BmpH, Hyiedefs::TResampleFilter ZoomFilter = (Hyiedefs::TResampleFilter)(0x9))/* overload */;
extern DELPHI_PACKAGE void __fastcall AddResourcesToImageList(int ResIndexMin, int ResIndexMax, int ResImageSize, Vcl::Imglist::TCustomImageList* ImageList, int DesiredSize = 0xffffffff, int ImageHue = 0x0, TIEAddButtonImageEvent OnAddToolbarButtonImage = 0x0, bool ScaleImages = false);
}	/* namespace Iexcanvasutils */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_IEXCANVASUTILS)
using namespace Iexcanvasutils;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// IexcanvasutilsHPP
