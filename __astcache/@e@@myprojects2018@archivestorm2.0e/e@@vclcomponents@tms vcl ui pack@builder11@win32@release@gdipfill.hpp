// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'GDIPFill.pas' rev: 35.00 (Windows)

#ifndef GdipfillHPP
#define GdipfillHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Vcl.Graphics.hpp>
#include <System.Classes.hpp>
#include <Vcl.Forms.hpp>
#include <System.SysUtils.hpp>
#include <System.Math.hpp>
#include <Vcl.Clipbrd.hpp>
#include <System.IniFiles.hpp>
#include <AdvGDIP.hpp>
#include <Vcl.ImgList.hpp>
#include <GDIPPictureContainer.hpp>
#include <System.Types.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Gdipfill
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TGDIPFill;
class DELPHICLASS TGDIPButton;
class DELPHICLASS TGDIPDialogButton;
class DELPHICLASS TGDIPStatus;
class DELPHICLASS TGDIPProgress;
class DELPHICLASS TCapacityItem;
class DELPHICLASS TCapacityItems;
class DELPHICLASS TGDIPCapacityBar;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TGlowMode : unsigned char { gmNone, gmGradient, gmRadial, gmRadialGradient };

enum DECLSPEC_DENUM TFillPicturePosition : unsigned char { ppTopLeft, ppTopCenter, ppTopRight, ppBottomLeft, ppBottomCenter, ppBottomRight, ppTiled, ppStretched, ppCenterLeft, ppCenterCenter, ppCenterRight, ppCustom };

enum DECLSPEC_DENUM TFillRoundingType : unsigned char { rtNone, rtTop, rtBottom, rtBoth, rtLeft, rtRight };

enum DECLSPEC_DENUM TFillPictureSize : unsigned char { psOriginal, psCustom };

enum DECLSPEC_DENUM TFillPictureMode : unsigned char { pmInsideFill, pmOutsideFill };

enum DECLSPEC_DENUM TFillValueType : unsigned char { vtNormal, vtDateTime };

enum DECLSPEC_DENUM TPictureMode : unsigned char { pmStretch, pmNormal };

enum DECLSPEC_DENUM TShadowType : unsigned char { stRightBottom, stBottom, stSurround };

class PASCALIMPLEMENTATION TGDIPFill : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	System::Uitypes::TColor FBorderColor;
	System::Byte FOpacity;
	TFillPicturePosition FPicturePosition;
	Advgdip::TAdvGradientType FGradientType;
	System::Byte FOpacityTo;
	Advgdip::TAdvGDIPPicture* FPicture;
	Advgdip::HatchStyle FHatchStyle;
	System::Uitypes::TColor FColor;
	int FShadowOffset;
	TShadowType FShadowType;
	System::Byte FOpacityMirror;
	Advgdip::TAdvGradientType FGradientMirrorType;
	System::Byte FOpacityMirrorTo;
	int FRounding;
	System::Uitypes::TColor FShadowColor;
	int FBorderWidth;
	System::Uitypes::TColor FColorMirror;
	System::Uitypes::TColor FColorMirrorTo;
	System::Uitypes::TColor FColorTo;
	System::Classes::TNotifyEvent FOnChange;
	Advgdip::HatchStyle FHatchStyleMirror;
	int FPictureTop;
	int FPictureLeft;
	int FBackGroundPictureTop;
	int FBackGroundPictureLeft;
	TFillPicturePosition FBackGroundPicturePosition;
	Advgdip::TAdvGDIPPicture* FBackGroundPicture;
	int FpictureWidth;
	TFillPictureSize FpictureSize;
	int FpictureHeight;
	TFillRoundingType FRoundingType;
	int FUpdateCount;
	bool FFocus;
	System::Uitypes::TColor FFocusColor;
	int FAngle;
	System::Byte FBorderOpacity;
	Advgdip::TGPRectF FFocusRect;
	TFillPictureMode FBackGroundPictureMode;
	System::Uitypes::TColor FGlowGradientColor;
	TGlowMode FGlow;
	System::Uitypes::TColor FGlowRadialColor;
	bool FBackGroundPictureAspectRatio;
	bool FPictureAspectRatio;
	TPictureMode FBackGroundPictureAspectMode;
	TPictureMode FPictureAspectMode;
	void __fastcall SetBorderColor(const System::Uitypes::TColor Value);
	void __fastcall SetBorderWidth(const int Value);
	void __fastcall SetColor(const System::Uitypes::TColor Value);
	void __fastcall SetColorMirror(const System::Uitypes::TColor Value);
	void __fastcall SetColorMirrorTo(const System::Uitypes::TColor Value);
	void __fastcall SetColorTo(const System::Uitypes::TColor Value);
	void __fastcall SetGradientMirrorType(const Advgdip::TAdvGradientType Value);
	void __fastcall SetGradientType(const Advgdip::TAdvGradientType Value);
	void __fastcall SetHatchStyle(const Advgdip::HatchStyle Value);
	void __fastcall SetOpacity(const System::Byte Value);
	void __fastcall SetOpacityMirror(const System::Byte Value);
	void __fastcall SetOpacityMirrorTo(const System::Byte Value);
	void __fastcall SetOpacityTo(const System::Byte Value);
	void __fastcall SetPicture(Advgdip::TAdvGDIPPicture* const Value);
	void __fastcall SetPicturePosition(const TFillPicturePosition Value);
	void __fastcall SetRounding(const int Value);
	void __fastcall SetShadowColor(const System::Uitypes::TColor Value);
	void __fastcall SetShadowOffset(const int Value);
	void __fastcall SetHatchStyleMirror(const Advgdip::HatchStyle Value);
	void __fastcall SetPictureLeft(const int Value);
	void __fastcall SetPictureTop(const int Value);
	void __fastcall SetBackGroundPicture(Advgdip::TAdvGDIPPicture* const Value);
	void __fastcall SetBackGroundPictureLeft(const int Value);
	void __fastcall SetBackGroundPicturePosition(const TFillPicturePosition Value);
	void __fastcall SetBackGroundPictureTop(const int Value);
	void __fastcall SetPictureHeight(const int Value);
	void __fastcall SetPictureSize(const TFillPictureSize Value);
	void __fastcall SetPictureWidth(const int Value);
	void __fastcall SetRoundingType(const TFillRoundingType Value);
	void __fastcall SetFocus(const bool Value);
	void __fastcall SetFocusColor(const System::Uitypes::TColor Value);
	void __fastcall SetAngle(const int Value);
	void __fastcall SetBorderOpacity(const System::Byte Value);
	void __fastcall SetBackGroundPictureMode(const TFillPictureMode Value);
	void __fastcall SetGlow(const TGlowMode Value);
	void __fastcall SetGlowGradientColor(const System::Uitypes::TColor Value);
	void __fastcall SetGlowRadialColor(const System::Uitypes::TColor Value);
	void __fastcall SetBackGroundPictureAspectRatio(const bool Value);
	void __fastcall SetPictureAspectRatio(const bool Value);
	void __fastcall SetBackGroundPictureAspectMode(const TPictureMode Value);
	void __fastcall SetPictureAspectMode(const TPictureMode Value);
	void __fastcall SetShadowType(const TShadowType Value);
	
protected:
	void __fastcall Changed();
	void __fastcall PictureChanged(System::TObject* Sender);
	
public:
	__fastcall TGDIPFill();
	__fastcall virtual ~TGDIPFill();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	void __fastcall DrawGradientBackGround(Advgdip::TGPGraphics* Graphics, const Advgdip::TGPRectF &R, bool Mirror, System::Byte oc, System::Byte octo, System::Byte ocmr, System::Byte ocmrto);
	Advgdip::TGPRectF __fastcall Fill(Advgdip::TGPGraphics* Graphics, const Advgdip::TGPRectF &R, System::Byte ABorderOpacity = (System::Byte)(0xff), System::Byte AOpacity = (System::Byte)(0xff), System::Byte AOpacityTo = (System::Byte)(0xff), System::Byte AOpacityMirror = (System::Byte)(0xff), System::Byte AOpacityMirrorTo = (System::Byte)(0xff));
	void __fastcall DrawGlow(Advgdip::TGPGraphics* Graphics, const Advgdip::TGPRectF &R);
	void __fastcall BeginUpdate();
	void __fastcall EndUpdate();
	void __fastcall SaveToClipBoard();
	void __fastcall LoadFromClipBoard();
	__property bool Focus = {read=FFocus, write=SetFocus, default=0};
	__property System::Uitypes::TColor FocusColor = {read=FFocusColor, write=SetFocusColor, default=0};
	__property Advgdip::TGPRectF FocusRect = {read=FFocusRect, write=FFocusRect};
	void __fastcall SaveToFile(System::UnicodeString FileName, System::UnicodeString Section)/* overload */;
	void __fastcall SaveToFile(System::Inifiles::TIniFile* ini, System::UnicodeString Section)/* overload */;
	void __fastcall LoadFromFile(System::UnicodeString FileName, System::UnicodeString Section)/* overload */;
	void __fastcall LoadFromFile(System::Inifiles::TIniFile* ini, System::UnicodeString Section)/* overload */;
	
__published:
	__property System::Uitypes::TColor Color = {read=FColor, write=SetColor, default=12632256};
	__property System::Uitypes::TColor ColorTo = {read=FColorTo, write=SetColorTo, default=8421504};
	__property System::Uitypes::TColor ColorMirror = {read=FColorMirror, write=SetColorMirror, nodefault};
	__property System::Uitypes::TColor ColorMirrorTo = {read=FColorMirrorTo, write=SetColorMirrorTo, nodefault};
	__property Advgdip::TAdvGradientType GradientType = {read=FGradientType, write=SetGradientType, nodefault};
	__property Advgdip::TAdvGradientType GradientMirrorType = {read=FGradientMirrorType, write=SetGradientMirrorType, nodefault};
	__property Advgdip::HatchStyle HatchStyle = {read=FHatchStyle, write=SetHatchStyle, default=0};
	__property Advgdip::HatchStyle HatchStyleMirror = {read=FHatchStyleMirror, write=SetHatchStyleMirror, default=0};
	__property bool BackGroundPictureAspectRatio = {read=FBackGroundPictureAspectRatio, write=SetBackGroundPictureAspectRatio, default=0};
	__property TFillPictureMode BackGroundPictureMode = {read=FBackGroundPictureMode, write=SetBackGroundPictureMode, default=1};
	__property Advgdip::TAdvGDIPPicture* BackGroundPicture = {read=FBackGroundPicture, write=SetBackGroundPicture};
	__property TFillPicturePosition BackGroundPicturePosition = {read=FBackGroundPicturePosition, write=SetBackGroundPicturePosition, default=0};
	__property int BackGroundPictureLeft = {read=FBackGroundPictureLeft, write=SetBackGroundPictureLeft, default=0};
	__property int BackGroundPictureTop = {read=FBackGroundPictureTop, write=SetBackGroundPictureTop, default=0};
	__property TPictureMode BackGroundPictureAspectMode = {read=FBackGroundPictureAspectMode, write=SetBackGroundPictureAspectMode, default=0};
	__property Advgdip::TAdvGDIPPicture* Picture = {read=FPicture, write=SetPicture};
	__property TFillPicturePosition PicturePosition = {read=FPicturePosition, write=SetPicturePosition, default=0};
	__property int PictureLeft = {read=FPictureLeft, write=SetPictureLeft, default=0};
	__property int PictureTop = {read=FPictureTop, write=SetPictureTop, default=0};
	__property TFillPictureSize PictureSize = {read=FpictureSize, write=SetPictureSize, default=0};
	__property int PictureWidth = {read=FpictureWidth, write=SetPictureWidth, default=50};
	__property int PictureHeight = {read=FpictureHeight, write=SetPictureHeight, default=50};
	__property bool PictureAspectRatio = {read=FPictureAspectRatio, write=SetPictureAspectRatio, default=0};
	__property TPictureMode PictureAspectMode = {read=FPictureAspectMode, write=SetPictureAspectMode, default=0};
	__property System::Byte Opacity = {read=FOpacity, write=SetOpacity, default=255};
	__property System::Byte OpacityTo = {read=FOpacityTo, write=SetOpacityTo, default=255};
	__property System::Byte OpacityMirror = {read=FOpacityMirror, write=SetOpacityMirror, default=255};
	__property System::Byte OpacityMirrorTo = {read=FOpacityMirrorTo, write=SetOpacityMirrorTo, default=255};
	__property System::Uitypes::TColor BorderColor = {read=FBorderColor, write=SetBorderColor, nodefault};
	__property System::Byte BorderOpacity = {read=FBorderOpacity, write=SetBorderOpacity, default=255};
	__property int BorderWidth = {read=FBorderWidth, write=SetBorderWidth, default=1};
	__property int Rounding = {read=FRounding, write=SetRounding, nodefault};
	__property TFillRoundingType RoundingType = {read=FRoundingType, write=SetRoundingType, default=3};
	__property System::Uitypes::TColor ShadowColor = {read=FShadowColor, write=SetShadowColor, default=8421504};
	__property int ShadowOffset = {read=FShadowOffset, write=SetShadowOffset, nodefault};
	__property TShadowType ShadowType = {read=FShadowType, write=SetShadowType, default=0};
	__property int Angle = {read=FAngle, write=SetAngle, default=0};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property TGlowMode Glow = {read=FGlow, write=SetGlow, nodefault};
	__property System::Uitypes::TColor GlowGradientColor = {read=FGlowGradientColor, write=SetGlowGradientColor, default=16777215};
	__property System::Uitypes::TColor GlowRadialColor = {read=FGlowRadialColor, write=SetGlowRadialColor, default=16777215};
};


enum DECLSPEC_DENUM TGDIPButtonLayout : unsigned char { blPictureLeft, blPictureRight, blPictureBottom, blPictureTop, blNone };

typedef void __fastcall (__closure *TFontStoredEvent)(System::TObject* Sender, bool &IsStored);

class PASCALIMPLEMENTATION TGDIPButton : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	int FUpdateCount;
	Vcl::Graphics::TFont* FFont;
	System::Classes::TNotifyEvent FOnChange;
	System::Classes::TNotifyEvent FOnFontChange;
	TFontStoredEvent FOnIsFontStored;
	TGDIPButtonLayout FLayout;
	int FSpacing;
	int FShiftDown;
	System::Classes::TAlignment FAlignment;
	System::Uitypes::TColor FFocusColor;
	System::Classes::TAlignment FPictureAlignment;
	bool FSimpleLayout;
	Gdippicturecontainer::TGDIPPictureContainer* FPictureContainer;
	Vcl::Imglist::TCustomImageList* FImageList;
	System::UnicodeString FPictureName;
	int FImageIndex;
	int FDisabledImageIndex;
	System::UnicodeString FDisabledPictureName;
	int FGlowPercentage;
	int FRounding;
	bool FPictureStretch;
	TPictureMode FPictureStretchMode;
	bool FWordWrapping;
	bool FSimpleLayoutBorder;
	void __fastcall SetFont(Vcl::Graphics::TFont* const Value);
	void __fastcall SetLayout(const TGDIPButtonLayout Value);
	void __fastcall SetSpacing(const int Value);
	void __fastcall SetShiftDown(const int Value);
	bool __fastcall IsFontStored();
	void __fastcall SetAlignment(const System::Classes::TAlignment Value);
	void __fastcall SetFocusColor(const System::Uitypes::TColor Value);
	void __fastcall SetPictureAlignment(const System::Classes::TAlignment Value);
	void __fastcall SetSimpleLayout(const bool Value);
	void __fastcall SetImageIndex(const int Value);
	void __fastcall SetPictureName(const System::UnicodeString Value);
	void __fastcall SetDisabledImageIndex(const int Value);
	void __fastcall SetDisabledPictureName(const System::UnicodeString Value);
	void __fastcall SetGlowPercentage(const int Value);
	void __fastcall SetRounding(const int Value);
	void __fastcall SetPictureStretch(const bool Value);
	void __fastcall SetPictureStretchMode(const TPictureMode Value);
	void __fastcall SetWordWrapping(const bool Value);
	void __fastcall SetSimpleLayoutBorder(const bool Value);
	
protected:
	void __fastcall FontChanged(System::TObject* Sender);
	virtual void __fastcall Changed();
	
public:
	void __fastcall BeginUpdate();
	void __fastcall EndUpdate();
	__fastcall virtual TGDIPButton();
	__fastcall virtual ~TGDIPButton();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	void __fastcall Draw(Advgdip::TGPGraphics* g, System::UnicodeString Caption, int x, int y, int Width, int Height, int VerticalSpacing, int HorizontalSpacing, System::Uitypes::TColor Color, System::Uitypes::TColor ColorDown, System::Uitypes::TColor BevelColor, System::Uitypes::TColor TextColor, bool Shadow, bool Down, bool Bevel, bool VerticalText, bool RightToLeft, TFillRoundingType RoundingType, Advgdip::TAdvGDIPPicture* APicture, int TextW, int TextH, bool WW, int AImageIndex, System::UnicodeString APictureName, Advgdip::TextRenderingHint ATextRendering = (Advgdip::TextRenderingHint)(0x0), float ADPIScale = 1.000000E+00f);
	void __fastcall DoNotification(System::Classes::TComponent* AOwner, System::Classes::TComponent* AComponent, System::Classes::TOperation AOperation);
	
__published:
	__property int GlowPercentage = {read=FGlowPercentage, write=SetGlowPercentage, default=100};
	__property System::Classes::TAlignment Alignment = {read=FAlignment, write=SetAlignment, default=2};
	__property System::Classes::TAlignment PictureAlignment = {read=FPictureAlignment, write=SetPictureAlignment, default=1};
	__property bool PictureStretch = {read=FPictureStretch, write=SetPictureStretch, default=0};
	__property TPictureMode PictureStretchMode = {read=FPictureStretchMode, write=SetPictureStretchMode, default=1};
	__property Vcl::Graphics::TFont* Font = {read=FFont, write=SetFont, stored=IsFontStored};
	__property TGDIPButtonLayout Layout = {read=FLayout, write=SetLayout, default=0};
	__property int Spacing = {read=FSpacing, write=SetSpacing, default=3};
	__property int ShiftDown = {read=FShiftDown, write=SetShiftDown, default=1};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property System::Classes::TNotifyEvent OnFontChange = {read=FOnFontChange, write=FOnFontChange};
	__property TFontStoredEvent OnIsFontStored = {read=FOnIsFontStored, write=FOnIsFontStored};
	__property System::Uitypes::TColor FocusColor = {read=FFocusColor, write=SetFocusColor, default=0};
	__property bool SimpleLayout = {read=FSimpleLayout, write=SetSimpleLayout, nodefault};
	__property bool SimpleLayoutBorder = {read=FSimpleLayoutBorder, write=SetSimpleLayoutBorder, default=0};
	__property Vcl::Imglist::TCustomImageList* ImageList = {read=FImageList, write=FImageList};
	__property Gdippicturecontainer::TGDIPPictureContainer* PictureContainer = {read=FPictureContainer, write=FPictureContainer};
	__property int ImageIndex = {read=FImageIndex, write=SetImageIndex, default=-1};
	__property System::UnicodeString PictureName = {read=FPictureName, write=SetPictureName};
	__property System::UnicodeString DisabledPictureName = {read=FDisabledPictureName, write=SetDisabledPictureName};
	__property int DisabledImageIndex = {read=FDisabledImageIndex, write=SetDisabledImageIndex, default=-1};
	__property int Rounding = {read=FRounding, write=SetRounding, default=8};
	__property bool WordWrapping = {read=FWordWrapping, write=SetWordWrapping, default=1};
};


class PASCALIMPLEMENTATION TGDIPDialogButton : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	Vcl::Graphics::TFont* FFont;
	System::Classes::TNotifyEvent FOnChange;
	TGDIPButtonLayout FLayout;
	int FSpacing;
	Advgdip::TGPRectF FCaptionRectF;
	bool FDrawCaption;
	Advgdip::TGPPointF FCaptionPos;
	int FRounding;
	void __fastcall SetFont(Vcl::Graphics::TFont* const Value);
	void __fastcall SetLayout(const TGDIPButtonLayout Value);
	void __fastcall SetSpacing(const int Value);
	void __fastcall SetRounding(const int Value);
	
protected:
	void __fastcall FontChanged(System::TObject* Sender);
	void __fastcall Changed();
	
public:
	__property bool DrawCaption = {read=FDrawCaption, write=FDrawCaption, default=1};
	__fastcall virtual TGDIPDialogButton();
	__fastcall virtual ~TGDIPDialogButton();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	void __fastcall Draw(Advgdip::TGPGraphics* g, System::UnicodeString Caption, int x, int y, int Width, int Height, System::Uitypes::TColor Color, System::Uitypes::TColor BorderColor, int BorderWidth, System::Byte BorderOpacity, System::Byte Opacity, bool Border, bool Down, Advgdip::TAdvGDIPPicture* Picture, bool WW);
	__property Advgdip::TGPRectF CaptionRect = {read=FCaptionRectF, write=FCaptionRectF};
	__property Advgdip::TGPPointF CaptionPos = {read=FCaptionPos, write=FCaptionPos};
	
__published:
	__property Vcl::Graphics::TFont* Font = {read=FFont, write=SetFont};
	__property TGDIPButtonLayout Layout = {read=FLayout, write=SetLayout, default=0};
	__property int Rounding = {read=FRounding, write=SetRounding, default=4};
	__property int Spacing = {read=FSpacing, write=SetSpacing, default=3};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
};


class PASCALIMPLEMENTATION TGDIPStatus : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	int FWidth;
	int FHeight;
	TGDIPFill* FFill;
	Vcl::Graphics::TFont* FFont;
	System::Classes::TNotifyEvent FOnChange;
	bool FAutoSize;
	int FSpacing;
	bool FGlow;
	void __fastcall SetFill(TGDIPFill* const Value);
	void __fastcall SetFont(Vcl::Graphics::TFont* const Value);
	void __fastcall SetSpacing(const int Value);
	void __fastcall SetGlow(const bool Value);
	
protected:
	void __fastcall FillChanged(System::TObject* Sender);
	void __fastcall FontChanged(System::TObject* Sender);
	void __fastcall Changed();
	
public:
	__fastcall TGDIPStatus();
	__fastcall virtual ~TGDIPStatus();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	void __fastcall Draw(Advgdip::TGPGraphics* g, int x, int y, int Width, int Height, bool AutoSize, System::UnicodeString Caption, float ADPISCale = 1.000000E+00f);
	int __fastcall GetWidth();
	int __fastcall GetHeight();
	void __fastcall CalculateSize(Advgdip::TGPGraphics* g, System::UnicodeString Caption, float ADPIScale = 1.000000E+00f);
	
__published:
	__property TGDIPFill* Fill = {read=FFill, write=SetFill};
	__property Vcl::Graphics::TFont* Font = {read=FFont, write=SetFont};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property int Spacing = {read=FSpacing, write=SetSpacing, default=0};
	__property bool Glow = {read=FGlow, write=SetGlow, default=1};
};


enum DECLSPEC_DENUM TGDIPProgressValueType : unsigned char { vtPercentage, vtAbsolute };

enum DECLSPEC_DENUM TGDIPProgressValuePosition : unsigned char { vpProgressCenter, vpProgressRight, vpCenter, vpLeft, vpRight, vpCustom };

typedef void __fastcall (__closure *TGDIPProgressDrawValueEvent)(System::TObject* Sender, System::UnicodeString ValueFormat, System::UnicodeString &ValueText);

enum DECLSPEC_DENUM TGDIPProgressDirection : unsigned char { pbdHorizontal, pbdVertical };

class PASCALIMPLEMENTATION TGDIPProgress : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	TGDIPFill* FBackGroundFill;
	System::UnicodeString FValueFormat;
	TGDIPProgressValueType FValueType;
	TGDIPFill* FProgressFill;
	int FValuePositionTop;
	int FValuePositionLeft;
	Vcl::Graphics::TFont* FFont;
	TGDIPProgressValuePosition FValuePosition;
	System::Classes::TNotifyEvent FOnChange;
	bool FValueVisible;
	Vcl::Graphics::TFont* FProgressFont;
	bool FTransparent;
	bool FShadows;
	bool FOverlays;
	TGDIPProgressDrawValueEvent FOnDrawValue;
	void __fastcall SetBackGroundFill(TGDIPFill* const Value);
	void __fastcall SetFont(Vcl::Graphics::TFont* const Value);
	void __fastcall SetProgressFill(TGDIPFill* const Value);
	void __fastcall SetValueFormat(const System::UnicodeString Value);
	void __fastcall SetValuePosition(const TGDIPProgressValuePosition Value);
	void __fastcall SetValuePositionLeft(const int Value);
	void __fastcall SetValuePositionTop(const int Value);
	void __fastcall SetValueType(const TGDIPProgressValueType Value);
	void __fastcall SetValueVisible(const bool Value);
	void __fastcall SetProgressFont(Vcl::Graphics::TFont* const Value);
	void __fastcall SetTransparent(const bool Value);
	void __fastcall SetShadows(const bool Value);
	void __fastcall SetOverlays(const bool Value);
	
protected:
	void __fastcall FontChanged(System::TObject* Sender);
	void __fastcall FillChanged(System::TObject* Sender);
	void __fastcall Changed();
	void __fastcall DrawBackGround(Advgdip::TGPGraphics* g, const Advgdip::TGPRectF &r);
	void __fastcall DrawShadows(Advgdip::TGPGraphics* g, const Advgdip::TGPRectF &r, TGDIPProgressDirection Direction);
	void __fastcall DrawValue(Advgdip::TGPGraphics* g, const System::Types::TRect &r, double min, double max, double position, TGDIPProgressDirection Direction, float ADPIScale = 1.000000E+00f);
	void __fastcall DrawProgress(Advgdip::TGPGraphics* g, const System::Types::TRect &r, double min, double max, double position, TGDIPProgressDirection Direction);
	void __fastcall DrawOverLay(Advgdip::TGPGraphics* g, const System::Types::TRect &r, TGDIPProgressDirection Direction);
	void __fastcall DrawGlow(Advgdip::TGPGraphics* g, const System::Types::TRect &r, double glowposition, double min, double max, double position, TGDIPProgressDirection Direction);
	System::Types::TRect __fastcall InsideRect(const System::Types::TRect &r);
	void __fastcall GetTextSize(Advgdip::TGPGraphics* g, const System::Types::TRect &r, System::UnicodeString s, Vcl::Graphics::TFont* ft, Advgdip::TGPRectF &sizer);
	
public:
	__fastcall TGDIPProgress();
	__fastcall virtual ~TGDIPProgress();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	void __fastcall Draw(Advgdip::TGPGraphics* g, const System::Types::TRect &r, double min, double max, double position, TGDIPProgressDirection Direction, float ADPIScale = 1.000000E+00f);
	Advgdip::TGPRectF __fastcall GetInsideRectF(const System::Types::TRect &r);
	Advgdip::TGPRectF __fastcall CalculateProgressRectangle(const System::Types::TRect &r, double min, double max, double pos, TGDIPProgressDirection Direction);
	
__published:
	__property bool Transparent = {read=FTransparent, write=SetTransparent, default=0};
	__property bool Shadows = {read=FShadows, write=SetShadows, default=1};
	__property bool Overlays = {read=FOverlays, write=SetOverlays, default=1};
	__property TGDIPFill* BackGroundFill = {read=FBackGroundFill, write=SetBackGroundFill};
	__property TGDIPFill* ProgressFill = {read=FProgressFill, write=SetProgressFill};
	__property Vcl::Graphics::TFont* Font = {read=FFont, write=SetFont};
	__property Vcl::Graphics::TFont* ProgressFont = {read=FProgressFont, write=SetProgressFont};
	__property System::UnicodeString ValueFormat = {read=FValueFormat, write=SetValueFormat};
	__property TGDIPProgressValueType ValueType = {read=FValueType, write=SetValueType, default=1};
	__property TGDIPProgressValuePosition ValuePosition = {read=FValuePosition, write=SetValuePosition, default=2};
	__property int ValuePositionLeft = {read=FValuePositionLeft, write=SetValuePositionLeft, default=0};
	__property int ValuePositionTop = {read=FValuePositionTop, write=SetValuePositionTop, default=0};
	__property bool ValueVisible = {read=FValueVisible, write=SetValueVisible, default=0};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property TGDIPProgressDrawValueEvent OnDrawValue = {read=FOnDrawValue, write=FOnDrawValue};
};


enum DECLSPEC_DENUM TLegendPosition : unsigned char { lpTop, lpBottom, lpNone };

typedef void __fastcall (__closure *TOnItemEvent)(System::TObject* Sender, int Index);

class PASCALIMPLEMENTATION TCapacityItem : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	System::UnicodeString FName;
	System::UnicodeString FHint;
	System::Uitypes::TColor FColor;
	int FTag;
	System::UnicodeString FDescription;
	double FValue;
	System::Uitypes::TColor FColorTo;
	System::UnicodeString FLegendFormat;
	double FDisplayValue;
	Advgdip::TGPRectF FDesRect;
	Advgdip::TGPRectF FFormatRect;
	Advgdip::TGPPointF FMarkPT;
	double FWidth;
	double FLeft;
	bool FAllowChange;
	void __fastcall SetColor(const System::Uitypes::TColor Value);
	void __fastcall SetDescription(const System::UnicodeString Value);
	void __fastcall SetHint(const System::UnicodeString Value);
	void __fastcall SetName(const System::UnicodeString Value);
	void __fastcall SetTag(const int Value);
	void __fastcall SetValue(const double Value);
	void __fastcall SetColorTo(const System::Uitypes::TColor Value);
	
protected:
	virtual void __fastcall SetIndex(int Value);
	void __fastcall Change();
	__property System::UnicodeString LegendFormat = {read=FLegendFormat, write=FLegendFormat};
	__property double DisplayValue = {read=FDisplayValue, write=FDisplayValue};
	
public:
	__fastcall virtual TCapacityItem(System::Classes::TCollection* Collection);
	__fastcall virtual ~TCapacityItem();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property double Left = {read=FLeft, write=FLeft};
	__property double Width = {read=FWidth, write=FWidth};
	
__published:
	__property double Value = {read=FValue, write=SetValue};
	__property System::Uitypes::TColor Color = {read=FColor, write=SetColor, nodefault};
	__property System::Uitypes::TColor ColorTo = {read=FColorTo, write=SetColorTo, nodefault};
	__property System::UnicodeString Name = {read=FName, write=SetName};
	__property System::UnicodeString Hint = {read=FHint, write=SetHint};
	__property System::UnicodeString Description = {read=FDescription, write=SetDescription};
	__property int Tag = {read=FTag, write=SetTag, default=0};
	__property bool AllowChange = {read=FAllowChange, write=FAllowChange, default=0};
};


class PASCALIMPLEMENTATION TCapacityItems : public System::Classes::TCollection
{
	typedef System::Classes::TCollection inherited;
	
public:
	TCapacityItem* operator[](int Index) { return this->Items[Index]; }
	
private:
	System::Classes::TPersistent* FOwner;
	System::Classes::TNotifyEvent FOnChange;
	TOnItemEvent FOnDeleteItem;
	TCapacityItem* FDownItem;
	TOnItemEvent FOnCreateItem;
	HIDESBASE TCapacityItem* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TCapacityItem* const Value);
	void __fastcall SetDownItem(TCapacityItem* const Value);
	
protected:
	void __fastcall Change();
	__property TCapacityItem* DownItem = {read=FDownItem, write=SetDownItem};
	
public:
	__fastcall TCapacityItems(System::Classes::TPersistent* AOwner);
	__property TCapacityItem* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
	HIDESBASE TCapacityItem* __fastcall Add();
	HIDESBASE TCapacityItem* __fastcall Insert(int Index);
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property TOnItemEvent OnDeleteItem = {read=FOnDeleteItem, write=FOnDeleteItem};
	__property TOnItemEvent OnCreateItem = {read=FOnCreateItem, write=FOnCreateItem};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TCapacityItems() { }
	
};


typedef void __fastcall (__closure *TGetCapacityFormatEvent)(System::TObject* Sender, System::UnicodeString &Format, double &Capacity);

typedef void __fastcall (__closure *TGetLegendFormatEvent)(System::TObject* Sender, TCapacityItem* Item, System::UnicodeString &Format, double &Value);

class PASCALIMPLEMENTATION TGDIPCapacityBar : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	TGDIPFill* FBackGroundFill;
	Vcl::Graphics::TFont* FCapacityFont;
	System::Classes::TNotifyEvent FOnChange;
	Vcl::Graphics::TFont* FLegendFont;
	bool FTransparent;
	System::UnicodeString FCapacityFormat;
	int FReflectionOpacityStart;
	bool FRounded;
	int FDivisions;
	int FReflectionAxis;
	System::Uitypes::TColor FColor;
	System::Uitypes::TColor FColorTo;
	int FReflectionOpacityEnd;
	System::UnicodeString FLegendFormat;
	bool FReflection;
	TLegendPosition FLegendPos;
	TGetLegendFormatEvent FOnGetLegendFormat;
	TGetCapacityFormatEvent FOnGetCapacityFormat;
	Advgdip::TGPRectF FCapDesRect;
	Advgdip::TGPRectF FCapFormatRect;
	Advgdip::TGPRectF FLegendRect;
	Advgdip::TGPRectF FBarRect;
	Advgdip::TGPPointF FFreeMarkPT;
	Advgdip::TGPRectF FFreeDesRect;
	Advgdip::TGPRectF FFreeFormatRect;
	int FOffsetX;
	int FOffsetY;
	int FTextGap;
	int FMarkSize;
	double FFreeSpace;
	System::UnicodeString FFreeFormat;
	double FFreeLeft;
	double FFreeWidth;
	Advgdip::TGPBitmap* FReflectionPic;
	bool FUpdateReflection;
	System::Uitypes::TColor FCapacityTextShadowColor;
	System::Uitypes::TColor FLegendTextShadowColor;
	bool FAutoFormatValues;
	bool FShowLegend;
	bool FShowTotal;
	bool FShowFree;
	void __fastcall SetBackGroundFill(TGDIPFill* const Value);
	void __fastcall SetCapacityFont(Vcl::Graphics::TFont* const Value);
	void __fastcall SetLegendFont(Vcl::Graphics::TFont* const Value);
	void __fastcall SetTransparent(const bool Value);
	void __fastcall SetCapacityFormat(const System::UnicodeString Value);
	void __fastcall SetColor(const System::Uitypes::TColor Value);
	void __fastcall SetColorTo(const System::Uitypes::TColor Value);
	void __fastcall SetDivisions(const int Value);
	void __fastcall SetLegendFormat(const System::UnicodeString Value);
	void __fastcall SetLegendPos(const TLegendPosition Value);
	void __fastcall SetReflectionAxis(const int Value);
	void __fastcall SetReflectionOpacityEnd(const int Value);
	void __fastcall SetReflectionOpacityStart(const int Value);
	void __fastcall SetRounded(const bool Value);
	void __fastcall SetReflection(const bool Value);
	void __fastcall SetOffsetX(const int Value);
	void __fastcall SetOffsetY(const int Value);
	void __fastcall SetTextGap(const int Value);
	void __fastcall SetFreeFormat(const System::UnicodeString Value);
	void __fastcall SetCapacityTextShadowColor(const System::Uitypes::TColor Value);
	void __fastcall SetLegendTextShadowColor(const System::Uitypes::TColor Value);
	void __fastcall SetAutoFormatValues(const bool Value);
	void __fastcall SetShowLegend(const bool Value);
	void __fastcall SetShowTotal(const bool Value);
	void __fastcall SetShowFree(const bool Value);
	
protected:
	System::UnicodeString __fastcall GetSizeValue(double AValue);
	void __fastcall FontChanged(System::TObject* Sender);
	void __fastcall BackGroundFillChanged(System::TObject* Sender);
	void __fastcall Changed();
	void __fastcall DrawBackGround(Advgdip::TGPGraphics* g, const Advgdip::TGPRectF &R);
	void __fastcall DrawCapacityDescription(Advgdip::TGPGraphics* g, const Advgdip::TGPRectF &R, System::UnicodeString CapacityDes, System::UnicodeString DesFormat);
	void __fastcall DrawLegend(Advgdip::TGPGraphics* g, const Advgdip::TGPRectF &R, TCapacityItems* Items, System::UnicodeString FreeDes, System::UnicodeString FreeDesFormat);
	void __fastcall DrawItem(Advgdip::TGPGraphics* g, TCapacityItem* Item)/* overload */;
	void __fastcall DrawItem(Advgdip::TGPGraphics* g, const Advgdip::TGPRectF &RF, System::Uitypes::TColor Clr, System::Uitypes::TColor ClrTo, int StartLeft)/* overload */;
	void __fastcall DrawBar(Advgdip::TGPGraphics* g, const Advgdip::TGPRectF &R, TCapacityItems* Items);
	System::Types::TRect __fastcall InsideRect(const System::Types::TRect &r);
	void __fastcall GetTextSize(Advgdip::TGPGraphics* g, const System::Types::TRect &r, System::UnicodeString s, Vcl::Graphics::TFont* ft, Advgdip::TGPRectF &sizer);
	void __fastcall CalculateCapacityBarRect(Advgdip::TGPGraphics* g, const System::Types::TRect &R, double TotalCapacity, TCapacityItems* Items, System::UnicodeString CapacityDes, System::UnicodeString DesFormat, System::UnicodeString FreeDes, System::UnicodeString FreeDesFormat);
	TCapacityItem* __fastcall PtOnItem(const System::Types::TPoint &pt, TCapacityItems* Items);
	TCapacityItem* __fastcall PtOnEdge(const System::Types::TPoint &pt, TCapacityItems* Items);
	void __fastcall UpdateReflection();
	__property TGetCapacityFormatEvent OnGetCapacityFormat = {read=FOnGetCapacityFormat, write=FOnGetCapacityFormat};
	__property TGetLegendFormatEvent OnGetLegendFormat = {read=FOnGetLegendFormat, write=FOnGetLegendFormat};
	__property int ReflectionAxis = {read=FReflectionAxis, write=SetReflectionAxis, default=1};
	__property double FreeSpace = {read=FFreeSpace};
	__property int TextGap = {read=FTextGap, write=SetTextGap, default=3};
	
public:
	__fastcall TGDIPCapacityBar();
	__fastcall virtual ~TGDIPCapacityBar();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	void __fastcall Draw(Advgdip::TGPGraphics* g, const System::Types::TRect &r, double TotalCapacity, TCapacityItems* Items, System::UnicodeString CapacityDes, System::UnicodeString DesFormat, System::UnicodeString FreeDes, System::UnicodeString FreeDesFormat, Advgdip::TAntiAlias AntiAlias);
	Advgdip::TGPRectF __fastcall GetInsideRectF(const System::Types::TRect &r);
	__property Advgdip::TGPRectF BarRect = {read=FBarRect};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	
__published:
	__property bool ShowLegend = {read=FShowLegend, write=SetShowLegend, default=1};
	__property bool ShowFree = {read=FShowFree, write=SetShowFree, default=1};
	__property bool ShowTotal = {read=FShowTotal, write=SetShowTotal, default=1};
	__property bool AutoFormatValues = {read=FAutoFormatValues, write=SetAutoFormatValues, nodefault};
	__property TGDIPFill* BackGroundFill = {read=FBackGroundFill, write=SetBackGroundFill};
	__property System::Uitypes::TColor Color = {read=FColor, write=SetColor, nodefault};
	__property System::Uitypes::TColor ColorTo = {read=FColorTo, write=SetColorTo, nodefault};
	__property Vcl::Graphics::TFont* CapacityFont = {read=FCapacityFont, write=SetCapacityFont};
	__property System::UnicodeString CapacityFormat = {read=FCapacityFormat, write=SetCapacityFormat};
	__property System::UnicodeString FreeFormat = {read=FFreeFormat, write=SetFreeFormat};
	__property int Divisions = {read=FDivisions, write=SetDivisions, default=20};
	__property TLegendPosition LegendPos = {read=FLegendPos, write=SetLegendPos, default=1};
	__property System::UnicodeString LegendFormat = {read=FLegendFormat, write=SetLegendFormat};
	__property Vcl::Graphics::TFont* LegendFont = {read=FLegendFont, write=SetLegendFont};
	__property bool Rounded = {read=FRounded, write=SetRounded, default=1};
	__property bool Reflection = {read=FReflection, write=SetReflection, default=1};
	__property int ReflectionOpacityStart = {read=FReflectionOpacityStart, write=SetReflectionOpacityStart, default=150};
	__property int ReflectionOpacityEnd = {read=FReflectionOpacityEnd, write=SetReflectionOpacityEnd, default=0};
	__property bool Transparent = {read=FTransparent, write=SetTransparent, default=0};
	__property int OffsetX = {read=FOffsetX, write=SetOffsetX, default=15};
	__property int OffsetY = {read=FOffsetY, write=SetOffsetY, default=8};
	__property System::Uitypes::TColor CapacityTextShadowColor = {read=FCapacityTextShadowColor, write=SetCapacityTextShadowColor, default=0};
	__property System::Uitypes::TColor LegendTextShadowColor = {read=FLegendTextShadowColor, write=SetLegendTextShadowColor, default=0};
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE System::Word CF_GDIPFILL;
extern DELPHI_PACKAGE void __fastcall GetAspectSize(double &w, double &h, double ow, double oh, double nw, double nh, TPictureMode mode);
extern DELPHI_PACKAGE void __fastcall DrawLed(Advgdip::TGPGraphics* g, const Advgdip::TGPRectF &r, TFillValueType ValueType, System::UnicodeString Format, System::UnicodeString TimeFormat, double Value, System::TDateTime TimeValue, System::Uitypes::TColor ColorOff, System::Byte ColorOffOpacity, System::Uitypes::TColor ColorStart, System::Uitypes::TColor ColorEnd, System::Byte OpacityStart, System::Byte OpacityEnd, Advgdip::TAdvGradientType GradientType, int Angle, Advgdip::HatchStyle HatchStyle, Advgdip::TAdvGDIPPicture* Picture, bool LeadingZeros = true);
extern DELPHI_PACKAGE Advgdip::TGPGraphicsPath* __fastcall CreateRoundRectangle(const Advgdip::TGPRectF &R, int Radius, TFillRoundingType RoundingType, bool Mirror)/* overload */;
}	/* namespace Gdipfill */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_GDIPFILL)
using namespace Gdipfill;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// GdipfillHPP
