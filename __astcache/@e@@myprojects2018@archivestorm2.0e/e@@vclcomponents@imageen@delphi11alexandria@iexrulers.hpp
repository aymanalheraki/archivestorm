// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'iexRulers.pas' rev: 35.00 (Windows)

#ifndef IexrulersHPP
#define IexrulersHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.UITypes.hpp>
#include <System.Types.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <hyiedefs.hpp>

//-- user supplied -----------------------------------------------------------

namespace Iexrulers
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TIERuler;
class DELPHICLASS TIEViewRulerParams;
//-- type declarations -------------------------------------------------------
typedef System::StaticArray<System::Types::TPoint, 8> TIEPolyg;

enum DECLSPEC_DENUM TGripKind : unsigned char { gkTriangle, gkLeftTriangle, gkRightTriangle, gkArrow, gkArrow2, gkLine, gkRod, gkDiamond, gkCircle, gkNone };

enum DECLSPEC_DENUM TGripsDir : unsigned char { gdUp, gdDown };

enum DECLSPEC_DENUM TGripsXDir : unsigned char { gdLeft, gdRight };

enum DECLSPEC_DENUM TRulerDir : unsigned char { rdHorizontal, rdVertical };

typedef System::Set<TRulerDir, TRulerDir::rdHorizontal, TRulerDir::rdVertical> TRulerDirs;

enum DECLSPEC_DENUM TIERulerSnapping : unsigned char { iesnNone, iesnSnapToTick, iesnSnapToLabel, iesnSnapToWholeNumber };

enum DECLSPEC_DENUM TIERulerPosBase : unsigned char { ierbRuler, ierbBitmap, ierbScreen };

enum DECLSPEC_DENUM TIENegativeValueDisplay : unsigned char { ienvNever, ienvDisabled, ienvAlways };

typedef void __fastcall (__closure *TRulerGripPosChangeEvent)(System::TObject* Sender, TRulerDir RulerDir, int Grip, double NewPos);

typedef void __fastcall (__closure *TRulerClickEvent)(System::TObject* Sender, TRulerDir RulerDir, double Ps);

typedef void __fastcall (__closure *TRulerGetTextEvent)(System::TObject* Sender, TRulerDir RulerDir, double Value, System::UnicodeString &Text);

typedef void __fastcall (__closure *TRulerGripClickEvent)(System::TObject* Sender, TRulerDir RulerDir, int Grip, double GripPos);

typedef void __fastcall (__closure *TRulerSetGripPosEvent)(System::TObject* Sender, double &GripPos);

class PASCALIMPLEMENTATION TIERuler : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	double operator[](int g) { return this->GripsPos[g]; }
	
private:
	Vcl::Controls::TControl* fOwner;
	Vcl::Graphics::TBitmap* fBitmap;
	System::Uitypes::TColor fBackground;
	System::Classes::TList* fGrips;
	int fGripBaseDim;
	int fSelectedGrip;
	int fClickedGrip;
	int fSelGripSt;
	int fMX1;
	int fMY1;
	TGripsDir fGripsDir;
	bool fShowRuler;
	double fViewPos;
	double fDPU;
	double fFrequency;
	double fLabelFreq;
	System::Uitypes::TColor fRulerColor;
	TRulerDir fRulerDir;
	double fViewMin;
	double fViewMax;
	bool fFitInView;
	TIENegativeValueDisplay fDisplayNegativeValues;
	bool fHexLabels;
	int fMaxGripHeight;
	bool fInverted;
	double fScrollRate;
	int fOffsetX;
	int fOffsetY;
	int fLabelPrecision;
	int fMinLabelSpacing;
	System::Uitypes::TColor fGripPenColor;
	TGripKind fGripKindDefault;
	System::Uitypes::TColor fGripColorDefault;
	int fLockUpdateCount;
	bool fParentFont;
	Vcl::Graphics::TFont* fFont;
	int fGripIndexOffset;
	bool fShowBorder;
	Vcl::Controls::TStyleElements fStyleElements;
	void __fastcall SetBackground(System::Uitypes::TColor bk);
	void __fastcall SetGripsCount(int v);
	int __fastcall GetGripsCount();
	void __fastcall SetGripsPos(int i, double p);
	double __fastcall GetGripsPos(int i);
	void __fastcall SetGripsColor(int i, System::Uitypes::TColor p);
	System::Uitypes::TColor __fastcall GetGripsColor(int i);
	void __fastcall SetGripBaseDim(int v);
	void __fastcall SetGripsKind(int i, TGripKind v);
	TGripKind __fastcall GetGripsKind(int i);
	void __fastcall SetGripsDir(TGripsDir v);
	void __fastcall SetShowRuler(bool v);
	void __fastcall SetViewPos(double v);
	double __fastcall GetDPU();
	void __fastcall SetDPU(double v);
	void __fastcall SetFrequency(double v);
	void __fastcall SetLabelFreq(double v);
	void __fastcall SetRulerColor(System::Uitypes::TColor v);
	void __fastcall SetRulerDir(TRulerDir v);
	void __fastcall SetGripsMax(int i, double v);
	void __fastcall SetGripsMin(int i, double v);
	double __fastcall GetGripsMax(int i);
	double __fastcall GetGripsMin(int i);
	void __fastcall SetViewMin(double v);
	void __fastcall SetViewMax(double v);
	void __fastcall SetFitInView(bool v);
	void __fastcall SetHexLabels(bool v);
	void __fastcall SetInverted(bool v);
	void __fastcall SetOffsetX(int v);
	void __fastcall SetOffsetY(int v);
	void __fastcall SetLabelPrecision(int v);
	void __fastcall SetMinLabelSpacing(int v);
	void __fastcall SetGripPenColor(const System::Uitypes::TColor Value);
	void __fastcall SetGripKindDefault(const TGripKind Value);
	void __fastcall SetGripColorDefault(const System::Uitypes::TColor Value);
	int __fastcall GetClickedGrip(int x, int y);
	void __fastcall GetGripPoly(int gn, TIEPolyg &poly);
	void __fastcall GetGripRect(int gn, System::Types::TRect &rc);
	int __fastcall GetRulerHeight();
	void __fastcall RepaintGrips();
	void __fastcall RepaintRuler();
	void __fastcall RepaintBorder();
	void __fastcall AdjustGripLimits(int gn);
	void __fastcall AdjustViewLimits();
	void __fastcall SetShowBorder(const bool Value);
	int __fastcall GetAxisGripPos(int gn);
	int __fastcall GetAxisOffset();
	void __fastcall SetDisplayNegativeValues(const TIENegativeValueDisplay Value);
	void __fastcall SetParentFont(const bool v);
	Vcl::Graphics::TFont* __fastcall CurrFont(bool Scale = false);
	
protected:
	void __fastcall FontChange(System::TObject* Sender);
	
public:
	TRulerGripPosChangeEvent fOnRulerGripPosChange;
	TRulerGripClickEvent fOnRulerGripClick;
	TRulerGripClickEvent fOnRulerGripDblClick;
	TRulerClickEvent fOnRulerClick;
	TRulerGetTextEvent fOnRulerGetText;
	__fastcall TIERuler(Vcl::Controls::TControl* Owner);
	__fastcall virtual ~TIERuler();
	void __fastcall Update();
	void __fastcall UpdateEx(bool RepaintAll, bool DoInvalidate);
	void __fastcall LockUpdate();
	void __fastcall UnlockUpdate(bool RepaintAll = true, bool DoInvalidate = true);
	__property double GripsPos[int g] = {read=GetGripsPos, write=SetGripsPos/*, default*/};
	__property System::Uitypes::TColor GripsColor[int g] = {read=GetGripsColor, write=SetGripsColor};
	__property TGripKind GripsKind[int g] = {read=GetGripsKind, write=SetGripsKind};
	__property double GripsMin[int g] = {read=GetGripsMin, write=SetGripsMin};
	__property double GripsMax[int g] = {read=GetGripsMax, write=SetGripsMax};
	__property double ScrollRate = {read=fScrollRate, write=fScrollRate};
	void __fastcall DrawToCanvas(Vcl::Graphics::TCanvas* Canvas, int X, int Y);
	void __fastcall HandleMouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall HandleMouseMove(System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall HandleMouseMoveEx(System::Classes::TShiftState Shift, int X, int Y, TRulerSetGripPosEvent SetGripCallBack);
	void __fastcall HandleMouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall UpdateSize(int Width, int Height);
	__property double ViewPos = {read=fViewPos, write=SetViewPos};
	__property System::Uitypes::TColor Background = {read=fBackground, write=SetBackground, default=-16777201};
	__property System::Uitypes::TColor GripPenColor = {read=fGripPenColor, write=SetGripPenColor, default=-16777210};
	__property int GripBaseDim = {read=fGripBaseDim, write=SetGripBaseDim, default=12};
	__property TGripsDir GripsDir = {read=fGripsDir, write=SetGripsDir, default=0};
	__property bool ShowRuler = {read=fShowRuler, write=SetShowRuler, default=1};
	__property double DotPerUnit = {read=GetDPU, write=SetDPU};
	__property double Frequency = {read=fFrequency, write=SetFrequency};
	__property double LabelFrequency = {read=fLabelFreq, write=SetLabelFreq};
	__property System::Uitypes::TColor RulerColor = {read=fRulerColor, write=SetRulerColor, default=-16777201};
	__property TRulerDir RulerDir = {read=fRulerDir, write=SetRulerDir, default=0};
	__property double ViewMin = {read=fViewMin, write=SetViewMin};
	__property double ViewMax = {read=fViewMax, write=SetViewMax};
	__property int LabelPrecision = {read=fLabelPrecision, write=SetLabelPrecision, default=3};
	__property int MinLabelSpacing = {read=fMinLabelSpacing, write=SetMinLabelSpacing, default=30};
	__property TGripKind GripKindDefault = {read=fGripKindDefault, write=SetGripKindDefault, default=0};
	__property System::Uitypes::TColor GripColorDefault = {read=fGripColorDefault, write=SetGripColorDefault, default=-16777201};
	__property int OffsetX = {read=fOffsetX, write=SetOffsetX, default=0};
	__property int OffsetY = {read=fOffsetY, write=SetOffsetY, default=0};
	__property int MaxGripHeight = {read=fMaxGripHeight, write=fMaxGripHeight, nodefault};
	__property bool Inverted = {read=fInverted, write=SetInverted, default=0};
	__property bool FitInView = {read=fFitInView, write=SetFitInView, default=0};
	__property TIENegativeValueDisplay DisplayNegativeValues = {read=fDisplayNegativeValues, write=SetDisplayNegativeValues, default=1};
	__property int GripsCount = {read=GetGripsCount, write=SetGripsCount, default=1};
	__property bool HexLabels = {read=fHexLabels, write=SetHexLabels, default=0};
	__property bool ShowBorder = {read=fShowBorder, write=SetShowBorder, default=0};
	__property int LockUpdateCount = {read=fLockUpdateCount, nodefault};
	__property int SelectedGrip = {read=fSelectedGrip, write=fSelectedGrip, nodefault};
	__property Vcl::Graphics::TFont* Font = {read=fFont};
	__property bool ParentFont = {read=fParentFont, write=SetParentFont, nodefault};
	__property Vcl::Controls::TStyleElements StyleElements = {read=fStyleElements, write=fStyleElements, default=7};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEViewRulerParams : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Vcl::Controls::TControl* fOwner;
	TIERuler* fHorzRuler;
	TIERuler* fVertRuler;
	TIERulerSnapping fSnapGrips;
	bool fConstrainGrips;
	Hyiedefs::TIEUnits fUnits;
	Hyiedefs::TIEUnits fWasUnits;
	TGripsDir fHorzPos;
	TGripsXDir fVertPos;
	int fHorzHeight;
	int fVertWidth;
	TIERulerPosBase fGripsPosBase;
	int fLastMouseMoveX;
	int fLastMouseMoveY;
	System::Classes::TShiftState fLastMouseMoveShift;
	bool fLastMouseMoveResult;
	double __fastcall GetHorzGripsPos(int i);
	void __fastcall SetHorzGripsPos(int i, double p);
	System::Uitypes::TColor __fastcall GetHorzGripsColor(int i);
	void __fastcall SetHorzGripsColor(int i, System::Uitypes::TColor p);
	double __fastcall GetHorzGripsMin(int i);
	void __fastcall SetHorzGripsMin(int i, double v);
	double __fastcall GetHorzGripsMax(int i);
	void __fastcall SetHorzGripsMax(int i, double v);
	double __fastcall GetVertGripsPos(int i);
	void __fastcall SetVertGripsPos(int i, double p);
	System::Uitypes::TColor __fastcall GetVertGripsColor(int i);
	void __fastcall SetVertGripsColor(int i, System::Uitypes::TColor p);
	double __fastcall GetVertGripsMin(int i);
	void __fastcall SetVertGripsMin(int i, double v);
	double __fastcall GetVertGripsMax(int i);
	void __fastcall SetVertGripsMax(int i, double v);
	int __fastcall GetMinLabelSpacing();
	void __fastcall SetMinLabelSpacing(int v);
	double __fastcall GetFrequency();
	void __fastcall SetFrequency(double v);
	double __fastcall GetLabelFrequency();
	void __fastcall SetLabelFrequency(double v);
	bool __fastcall GetShowMeasure();
	void __fastcall SetShowMeasure(bool v);
	System::Uitypes::TColor __fastcall GetMeasureColor();
	void __fastcall SetMeasureColor(System::Uitypes::TColor v);
	System::Uitypes::TColor __fastcall GetColor();
	void __fastcall SetColor(System::Uitypes::TColor c);
	bool __fastcall GetHorzInverted();
	void __fastcall SetHorzInverted(bool v);
	bool __fastcall GetVertInverted();
	void __fastcall SetVertInverted(bool v);
	int __fastcall GetLabelPrecision();
	void __fastcall SetLabelPrecision(int v);
	double __fastcall GetScrollRate();
	void __fastcall SetScrollRate(const double Value);
	TGripKind __fastcall GetCursorGripKind();
	void __fastcall SetCursorGripKind(const TGripKind Value);
	TGripKind __fastcall GetGripKindDefault();
	void __fastcall SetGripKindDefault(const TGripKind Value);
	System::Uitypes::TColor __fastcall GetGripColorDefault();
	void __fastcall SetGripColorDefault(const System::Uitypes::TColor Value);
	System::Uitypes::TColor __fastcall GetGripPenColor();
	void __fastcall SetGripPenColor(const System::Uitypes::TColor Value);
	int __fastcall GetHorzGripsCount();
	void __fastcall SetHorzGripsCount(int v);
	TGripKind __fastcall GetHorzGripsKind(int i);
	void __fastcall SetHorzGripsKind(int i, TGripKind v);
	int __fastcall GetVertGripsCount();
	void __fastcall SetVertGripsCount(int v);
	TGripKind __fastcall GetVertGripsKind(int i);
	void __fastcall SetVertGripsKind(int i, TGripKind v);
	int __fastcall GetGripWidth();
	void __fastcall SetGripWidth(int v);
	int __fastcall GetGripHeight();
	void __fastcall SetGripHeight(const int Value);
	Vcl::Graphics::TFont* __fastcall GetFont();
	void __fastcall FontChange(System::TObject* Sender);
	bool __fastcall GetParentFont();
	void __fastcall SetParentFont(bool v);
	void __fastcall SetSnapGrips(TIERulerSnapping Value);
	void __fastcall SetConstrainGrips(bool Value);
	bool __fastcall GetAlignToImage();
	void __fastcall SetAlignToImage(bool Value);
	TIENegativeValueDisplay __fastcall GetDisplayNegativeValues();
	void __fastcall SetDisplayNegativeValues(TIENegativeValueDisplay Value);
	void __fastcall SetUnits(Hyiedefs::TIEUnits Value);
	void __fastcall SetHorzPos(TGripsDir Value);
	void __fastcall SetVertPos(TGripsXDir Value);
	void __fastcall SetHorzHeight(int Value);
	int __fastcall CurrHorzHeight();
	void __fastcall SetVertWidth(int Value);
	int __fastcall CurrVertWidth();
	System::Types::TRect __fastcall GetHorzRulerRect();
	System::Types::TRect __fastcall GetVertRulerRect();
	void __fastcall MouseMoveOutsideRuler(System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall ConstrainGripsCB(System::TObject* Sender, double &GripPos);
	void __fastcall CheckGripBounds();
	double __fastcall ImageLeftOnHorzRuler();
	double __fastcall ImageRightOnHorzRuler();
	double __fastcall ImageTopOnVertRuler();
	double __fastcall ImageBottomOnVertRuler();
	double __fastcall ApplyHorzConstraints(double value, TIERulerSnapping DoSnapGrips = (TIERulerSnapping)(0x0), bool DoConstrainGrips = false);
	double __fastcall ApplyVertConstraints(double value, TIERulerSnapping DoSnapGrips = (TIERulerSnapping)(0x0), bool DoConstrainGrips = false);
	double __fastcall ScrToRulerX(int X);
	int __fastcall RulerToScrX(double Pos);
	double __fastcall ScrToRulerY(int Y);
	int __fastcall RulerToScrY(double Pos);
	double __fastcall ValueToRulerX(double Value, TIERulerPosBase ValueBase);
	double __fastcall RulerToValueX(double Pos, TIERulerPosBase ValueBase);
	double __fastcall ValueToRulerY(double Value, TIERulerPosBase ValueBase);
	double __fastcall RulerToValueY(double Pos, TIERulerPosBase ValueBase);
	bool __fastcall HorzRulerVisible();
	bool __fastcall VertRulerVisible();
	void __fastcall LockUpdate();
	void __fastcall UnlockUpdate(bool DoUpdate = true, bool DoInvalidate = true);
	TRulerClickEvent __fastcall GetOnRulerClick();
	TRulerGetTextEvent __fastcall GetOnRulerGetText();
	TRulerGripClickEvent __fastcall GetOnRulerGripClick();
	TRulerGripClickEvent __fastcall GetOnRulerGripDblClick();
	TRulerGripPosChangeEvent __fastcall GetOnRulerPosChange();
	void __fastcall SetOnRulerClick(const TRulerClickEvent Value);
	void __fastcall SetOnRulerGetText(const TRulerGetTextEvent Value);
	void __fastcall SetOnRulerGripClick(const TRulerGripClickEvent Value);
	void __fastcall SetOnRulerGripDblClick(const TRulerGripClickEvent Value);
	void __fastcall SetOnRulerPosChange(const TRulerGripPosChangeEvent Value);
	bool __fastcall GetShowBorder();
	void __fastcall SetShowBorder(const bool Value);
	Vcl::Controls::TStyleElements __fastcall GetStyleElements();
	void __fastcall SetStyleElements(Vcl::Controls::TStyleElements v);
	
public:
	__fastcall TIEViewRulerParams(Vcl::Controls::TControl* Owner);
	__fastcall virtual ~TIEViewRulerParams();
	__property double HorzGripsPos[int g] = {read=GetHorzGripsPos, write=SetHorzGripsPos};
	__property System::Uitypes::TColor HorzGripsColor[int g] = {read=GetHorzGripsColor, write=SetHorzGripsColor};
	__property TGripKind HorzGripsKind[int g] = {read=GetHorzGripsKind, write=SetHorzGripsKind};
	__property double HorzGripsMin[int g] = {read=GetHorzGripsMin, write=SetHorzGripsMin};
	__property double HorzGripsMax[int g] = {read=GetHorzGripsMax, write=SetHorzGripsMax};
	__property double VertGripsPos[int g] = {read=GetVertGripsPos, write=SetVertGripsPos};
	__property System::Uitypes::TColor VertGripsColor[int g] = {read=GetVertGripsColor, write=SetVertGripsColor};
	__property TGripKind VertGripsKind[int g] = {read=GetVertGripsKind, write=SetVertGripsKind};
	__property double VertGripsMin[int g] = {read=GetVertGripsMin, write=SetVertGripsMin};
	__property double VertGripsMax[int g] = {read=GetVertGripsMax, write=SetVertGripsMax};
	__property double ScrollRate = {read=GetScrollRate, write=SetScrollRate};
	__property System::Uitypes::TColor Color = {read=GetColor, write=SetColor, default=-16777201};
	__property System::Uitypes::TColor GripPenColor = {read=GetGripPenColor, write=SetGripPenColor, default=-16777210};
	__property int GripWidth = {read=GetGripWidth, write=SetGripWidth, default=12};
	__property int GripHeight = {read=GetGripHeight, write=SetGripHeight, nodefault};
	__property bool ShowMeasure = {read=GetShowMeasure, write=SetShowMeasure, default=1};
	__property double Frequency = {read=GetFrequency, write=SetFrequency};
	__property double LabelFrequency = {read=GetLabelFrequency, write=SetLabelFrequency};
	__property System::Uitypes::TColor MeasureColor = {read=GetMeasureColor, write=SetMeasureColor, default=-16777201};
	__property int LabelPrecision = {read=GetLabelPrecision, write=SetLabelPrecision, default=3};
	__property int MinLabelSpacing = {read=GetMinLabelSpacing, write=SetMinLabelSpacing, default=30};
	__property Vcl::Controls::TStyleElements StyleElements = {read=GetStyleElements, write=SetStyleElements, default=7};
	__property TGripKind CursorGripKind = {read=GetCursorGripKind, write=SetCursorGripKind, default=5};
	__property TGripKind GripKindDefault = {read=GetGripKindDefault, write=SetGripKindDefault, default=0};
	__property System::Uitypes::TColor GripColorDefault = {read=GetGripColorDefault, write=SetGripColorDefault, default=-16777194};
	__property int HorzGripsCount = {read=GetHorzGripsCount, write=SetHorzGripsCount, default=1};
	__property int VertGripsCount = {read=GetVertGripsCount, write=SetVertGripsCount, default=1};
	__property TGripsDir HorzPos = {read=fHorzPos, write=SetHorzPos, default=0};
	__property TGripsXDir VertPos = {read=fVertPos, write=SetVertPos, default=0};
	__property bool HorzInverted = {read=GetHorzInverted, write=SetHorzInverted, default=0};
	__property bool VertInverted = {read=GetVertInverted, write=SetVertInverted, default=0};
	__property bool ShowBorder = {read=GetShowBorder, write=SetShowBorder, default=1};
	__property TIERulerPosBase GripsPosBase = {read=fGripsPosBase, write=fGripsPosBase, nodefault};
	__property Vcl::Graphics::TFont* Font = {read=GetFont};
	__property bool ParentFont = {read=GetParentFont, write=SetParentFont, nodefault};
	__property TIERulerSnapping SnapGrips = {read=fSnapGrips, write=SetSnapGrips, default=0};
	__property bool ConstrainGrips = {read=fConstrainGrips, write=SetConstrainGrips, default=1};
	__property Hyiedefs::TIEUnits Units = {read=fUnits, write=SetUnits, default=0};
	__property int HorzHeight = {read=fHorzHeight, write=SetHorzHeight, default=40};
	__property int VertWidth = {read=fVertWidth, write=SetVertWidth, default=40};
	__property TIENegativeValueDisplay DisplayNegativeValues = {read=GetDisplayNegativeValues, write=SetDisplayNegativeValues, default=1};
	__property bool AlignToImage = {read=GetAlignToImage, write=SetAlignToImage, default=0};
	__property TRulerGripPosChangeEvent OnRulerGripPosChange = {read=GetOnRulerPosChange, write=SetOnRulerPosChange};
	__property TRulerGripClickEvent OnRulerGripClick = {read=GetOnRulerGripClick, write=SetOnRulerGripClick};
	__property TRulerGripClickEvent OnRulerGripDblClick = {read=GetOnRulerGripDblClick, write=SetOnRulerGripDblClick};
	__property TRulerClickEvent OnRulerClick = {read=GetOnRulerClick, write=SetOnRulerClick};
	__property TRulerGetTextEvent OnRulerGetText = {read=GetOnRulerGetText, write=SetOnRulerGetText};
	void __fastcall Update(bool DoInvalidate = true);
	void __fastcall Paint(Vcl::Graphics::TCanvas* Canvas);
	bool __fastcall HandleMouseMove(System::Classes::TShiftState Shift, int X, int Y);
	bool __fastcall HandleMouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	bool __fastcall HandleMouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall HandleSpecialKey(System::Word CharCode, System::Classes::TShiftState Shift);
	__property System::Types::TRect HorzRulerRect = {read=GetHorzRulerRect};
	__property System::Types::TRect VertRulerRect = {read=GetVertRulerRect};
	int __fastcall RulerAreaLeft();
	int __fastcall RulerAreaRight();
	int __fastcall RulerAreaTop();
	int __fastcall RulerAreaBottom();
	void __fastcall ScrollToHorzGrip(int g);
	void __fastcall ScrollToVertGrip(int g);
	__property TIERuler* HorzRuler = {read=fHorzRuler};
	__property TIERuler* VertRuler = {read=fVertRuler};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const System::Int8 IEMAXPOLYGLINES = System::Int8(0x8);
static const System::Int8 ViewPos_Default = System::Int8(0x0);
static const System::Int8 DotPerUnit_Default = System::Int8(0x1);
static const System::Int8 Frequency_Default = System::Int8(0xa);
static const System::Int8 LabelFreq_Default = System::Int8(0x28);
static const System::Int8 ViewMin_Default = System::Int8(0x0);
static const System::Int8 ViewMax_Default = System::Int8(0x0);
static const System::Int8 MaxGripHeight_Default = System::Int8(0xf);
static const int Background_Default = int(-16777201);
static const int GripPenColor_Default = int(-16777210);
static const System::Int8 GripBaseDim_Default = System::Int8(0xc);
static const TGripsDir GripsDir_Default = (TGripsDir)(0);
static const bool ShowRuler_Default = true;
static const int RulerColor_Default = int(-16777201);
static const TRulerDir RulerDir_Default = (TRulerDir)(0);
static const System::Int8 LabelPrecision_Default = System::Int8(0x3);
static const System::Int8 MinLabelSpacing_Default = System::Int8(0x1e);
static const TGripKind GripKindDefault_Default = (TGripKind)(0);
static const int GripColorDefault_Default = int(-16777201);
static const System::Int8 OffsetX_Default = System::Int8(0x0);
static const System::Int8 OffsetY_Default = System::Int8(0x0);
static const bool Inverted_Default = false;
static const bool FitInView_Default = false;
static const System::Int8 GripsCount_Default = System::Int8(0x1);
static const bool HexLabels_Default = false;
static const bool ShowBorder_Default = false;
}	/* namespace Iexrulers */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_IEXRULERS)
using namespace Iexrulers;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// IexrulersHPP
