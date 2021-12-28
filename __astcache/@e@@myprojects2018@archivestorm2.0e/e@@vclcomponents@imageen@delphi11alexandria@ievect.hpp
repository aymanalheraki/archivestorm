// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'ievect.pas' rev: 35.00 (Windows)

#ifndef IevectHPP
#define IevectHPP

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
#include <Vcl.Menus.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <imageenview.hpp>
#include <hyieutils.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <iexBitmaps.hpp>
#include <hyiedefs.hpp>
#include <ietextc.hpp>
#include <iegdiplus.hpp>
#include <System.UITypes.hpp>
#include <System.Types.hpp>
#include <ieview.hpp>

//-- user supplied -----------------------------------------------------------

namespace Ievect
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TIEMemoEditCharInfo;
struct TIEVBitmap;
class DELPHICLASS TIEExtendedObject;
struct TIEVObject;
class DELPHICLASS TImageEnVect;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEMemoEditCharInfo : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	Vcl::Graphics::TFont* Font;
	Hyiedefs::TIEAlignment Align;
	__fastcall TIEMemoEditCharInfo();
	__fastcall virtual ~TIEMemoEditCharInfo();
};

#pragma pack(pop)

enum DECLSPEC_DENUM TIEVArrowShape : unsigned char { iesNone, iesInArrow, iesOutArrow };

enum DECLSPEC_DENUM TIEVRulerType : unsigned char { iertRuler, iertQuoteBegin, iertQuoteCenter, iertQuoteEnd };

enum DECLSPEC_DENUM TIEVValType : unsigned char { ievtArea, ievtLength };

enum DECLSPEC_DENUM TIELabelPos : unsigned char { ielBegin, ielEnd };

enum DECLSPEC_DENUM TIERotateCenter : unsigned char { ierObject, ierImage };

enum DECLSPEC_DENUM TIEVObjectKind : unsigned char { iekNONE, iekLINE, iekBOX, iekELLIPSE, iekARC, iekBITMAP, iekTEXT, iekRULER, iekPOLYLINE, iekANGLE, iekMEMO, iekLINELABEL, iekEXTENDED };

struct DECLSPEC_DRECORD TIEVBitmap
{
public:
	Iexbitmaps::TIEBitmap* fBitmap;
	int fRefCount;
};


typedef System::DynamicArray<TIEVBitmap> TIEArrayOfTIEVBitmap;

enum DECLSPEC_DENUM Ievect__2 : unsigned char { ievsSelectable, ievsMoveable, ievsSizeable, ievsVisible, ievsHideGrips };

typedef System::Set<Ievect__2, Ievect__2::ievsSelectable, Ievect__2::ievsHideGrips> TIEVStyle;

typedef TIEVObject *PIEVObject;

enum DECLSPEC_DENUM TIELabelBorder : unsigned char { ielNone, ielRectangle, ielRoundRect, ielEllipse };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEExtendedObject : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::TObject* fParent;
	TIEVObject *fObject;
	int fHOBJ;
	NativeUInt hfont;
	NativeUInt hpred;
	bool fMouseOver;
	
public:
	__fastcall TIEExtendedObject();
	__property System::TObject* Parent = {read=fParent, write=fParent};
	__property int HOBJ = {read=fHOBJ, nodefault};
	__property bool MouseOver = {read=fMouseOver, nodefault};
	void __fastcall Repaint();
	void __fastcall CreateFont(Vcl::Graphics::TCanvas* Canvas, int Height)/* overload */;
	void __fastcall CreateFont(Iegdiplus::TIECanvas* Canvas, int Height)/* overload */;
	void __fastcall DestroyFont(Vcl::Graphics::TCanvas* Canvas)/* overload */;
	void __fastcall DestroyFont(Iegdiplus::TIECanvas* Canvas)/* overload */;
	virtual void __fastcall Initialize();
	virtual void __fastcall Finalize();
	virtual void __fastcall Instance(int AssignedHOBJ);
	virtual void __fastcall SaveToStream(System::Classes::TStream* Stream);
	virtual bool __fastcall LoadFromStream(System::Classes::TStream* Stream);
	virtual TIEExtendedObject* __fastcall Clone();
	virtual void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall MouseEnter();
	virtual void __fastcall MouseLeave();
	virtual void __fastcall KeyDown(System::Word CharCode, System::Classes::TShiftState Shift);
	virtual void __fastcall Draw(Iexbitmaps::TIEBitmap* Bitmap, int x1, int y1, int x2, int y2, bool isAlpha, double ZoomX, double ZoomY);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TIEExtendedObject() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TIEExtendedObjectClass;

struct DECLSPEC_DRECORD TIEVObject
{
public:
	int x1;
	int y1;
	int x2;
	int y2;
	TIEVObjectKind Kind;
	int Transparency;
	void *UserData;
	int UserDataLength;
	bool AspectRatio;
	Hyieutils::TIERenderOperation BlendOperation;
	int Layer;
	TIEVArrowShape BeginShape;
	TIEVArrowShape EndShape;
	int ShapeWidth;
	int ShapeHeight;
	System::Uitypes::TColor LabelBrushColor;
	Vcl::Graphics::TBrushStyle LabelBrushStyle;
	TIELabelPos LabelPosition;
	TIELabelBorder LabelBorder;
	System::Types::TRect DrawnLabelBox;
	System::Uitypes::TColor PenColor;
	Vcl::Graphics::TPenStyle PenStyle;
	int PenWidth;
	System::Uitypes::TColor BrushColor;
	Vcl::Graphics::TBrushStyle BrushStyle;
	bool BoxHighlight;
	double a1;
	double a2;
	int BitmapIdx;
	bool BitmapBorder;
	System::WideChar *Text;
	tagLOGFONTW *LogFont;
	Hyiedefs::TIEFontQuality FontQuality;
	Hyiedefs::TIEAlignment TextAlign;
	bool TextAutoSize;
	bool FontLocked;
	Hyiedefs::TDPointArray *CurvedPos;
	int CurvedLen;
	int CurvedCharRot;
	bool CurvedStretch;
	bool TextEditable;
	bool MaintainTextAlignmentOnRotate;
	Hyiedefs::IntegerArray *TextFormatRef;
	System::Classes::TList* TextFormat;
	int LineSpace;
	System::Uitypes::TColor MemoBorderColor;
	Vcl::Graphics::TPenStyle MemoBorderStyle;
	int MemoFixedHeight;
	bool MemoHasBitmap;
	double MemoMarginLeft;
	double MemoMarginTop;
	double MemoMarginRight;
	double MemoMarginBottom;
	Vcl::Graphics::TBrushStyle MemoCharsBrushStyle;
	char *Name;
	int ID;
	TIEVStyle Style;
	Hyiedefs::TIEUnits RulerUnit;
	TIEVRulerType RulerType;
	void *PolyPoints;
	int PolyPointsCount;
	int PolyPointsAllocated;
	int PolyBaseX1;
	int PolyBaseY1;
	int PolyBaseX2;
	int PolyBaseY2;
	bool PolyClosed;
	void *DrawnPoints;
	int DrawnPointsCount;
	int DrawnPointsAllocated;
	System::StaticArray<System::Types::TPoint, 3> AnglePoints;
	int lx1;
	int ly1;
	int lx2;
	int ly2;
	System::Types::TRect plim;
	int pwidth;
	Hyiedefs::TIEVSoftShadow* softShadow;
	TIEExtendedObject* extendedObject;
	int GroupIndex;
};


typedef System::StaticArray<TIEVObject, 4194304> TIEVObjectArray;

typedef TIEVObjectArray *PIEVObjectArray;

enum DECLSPEC_DENUM TIEMouseInteractVtItems : unsigned char { miArea, miLineLen, miPutLine, miPutBox, miPutEllipse, miPutBitmap, miPutText, miObjectSelect, miDragLen, miPutRuler, miPutPolyLine, miPutAngle, miPutMemo, miPutLineLabel, miEditPolyline, miUnStampMode, miPutExtendedObject };

typedef System::Set<TIEMouseInteractVtItems, TIEMouseInteractVtItems::miArea, TIEMouseInteractVtItems::miPutExtendedObject> TIEMouseInteractVt;

typedef void __fastcall (__closure *TIEVMeasureHintEvent)(System::TObject* Sender, System::UnicodeString &Text, double Value);

typedef void __fastcall (__closure *TIEOnPresentMeasure)(System::TObject* Sender, System::UnicodeString &Text, double Value, TIEVValType ValType);

typedef void __fastcall (__closure *TIEVDragLenEndEvent)(System::TObject* Sender, double Value);

typedef void __fastcall (__closure *TIEVNewObject)(System::TObject* Sender, int hobj);

typedef void __fastcall (__closure *TIEUserSelectObject)(System::TObject* Sender, int hobj);

enum DECLSPEC_DENUM TIEVGripping : unsigned char { iegrNone, iegrTopLeft, iegrBottomRight, iegrTranslation, iegrTopRight, iegrBottomLeft, iegrLeft, iegrRight, iegrUpper, iegrBottom, iegrAngle0, iegrAngle1, iegrAngle2 };

typedef void __fastcall (__closure *TIEVObjectMoveResizeEvent)(System::TObject* Sender, int hobj, int Grip, int &OffsetX, int &OffsetY);

typedef void __fastcall (__closure *TIEVObjectClickEvent)(System::TObject* Sender, int hobj);

typedef void __fastcall (__closure *TIEVTextEditEvent)(System::TObject* Sender, int hobj, System::TObject* VisualObject);

typedef void __fastcall (__closure *TIEDrawObjectEvent)(System::TObject* Sender, int hobj, Iexbitmaps::TIEBitmap* destination, Iegdiplus::TIECanvas* destCanvas, const System::Types::TRect &destRect, bool drawingAlpha, bool &handled);

enum DECLSPEC_DENUM TIEPolylineEndingMode : unsigned char { ieemDoubleClick, ieemManual, ieemMouseUp };

enum DECLSPEC_DENUM TIEVUndoMode : unsigned char { ieumSeparated, ieumShared };

class PASCALIMPLEMENTATION TImageEnVect : public Imageenview::TImageEnView
{
	typedef Imageenview::TImageEnView inherited;
	
private:
	Iexbitmaps::TIEBitmap* fCacheBitmap;
	TIEMouseInteractVt fMouseInteractVt;
	System::AnsiString fExtendedObjectToPut;
	double fScale;
	Hyiedefs::TIEUnits fMUnit;
	double fCoefX;
	double fCoefY;
	int fFloatPrecision;
	int fFloatDigits;
	bool fMeasureTrack;
	int fVMoveX;
	int fVMoveY;
	System::Classes::TNotifyEvent fOnSelectObject;
	TIEUserSelectObject fOnUserSelectObject;
	TIEUserSelectObject fOnUserDeselectObject;
	TIEVMeasureHintEvent fOnMeasureHint;
	TIEOnPresentMeasure fOnPresentMeasure;
	TIEVDragLenEndEvent fOnDragLenEnd;
	bool fZoomObjectsWidth;
	System::Classes::TNotifyEvent fOnVectorialChanged;
	System::Classes::TNotifyEvent fOnBeforeVectorialChanged;
	double fLastHintValue;
	int fMaxSelectionDistance;
	int fMaxMovingDistance;
	int flx;
	int fly;
	Vcl::Graphics::TBitmap* fHintSaveBitmap;
	bool fShowHint;
	int fHintX;
	int fHintY;
	int fMovX;
	int fMovY;
	Vcl::Graphics::TFont* fMeasureHintFont;
	Vcl::Graphics::TBrush* fMeasureHintBrush;
	System::Uitypes::TColor fMeasureHintBorder1;
	System::Uitypes::TColor fMeasureHintBorder2;
	Imageenview::TIEGripShape fObjGripShape;
	int fObjGripSize;
	Vcl::Graphics::TPen* fObjGripPen;
	Vcl::Graphics::TBrush* fObjGripBrush;
	TIEVObject *fMemoWriteFormattedString;
	System::UnicodeString fMemoFormattedString;
	bool fUseCentralGrip;
	int fCurPolylineGrip;
	int fCurPolylineIntraGrip;
	bool fSelectOnMouseDown;
	bool fSelectOnMouseDown_WasSelected;
	bool fDoubleClicking;
	bool fVectorialChanged;
	Vcl::Graphics::TPicture* fObjGripImage;
	bool fObjBoxInnerSelectable;
	Vcl::Graphics::TPen* fInsertingPen;
	int fObjCount;
	Hyiedefs::IntegerArray *fObj;
	bool fVectorialChanging;
	TIEVObjectKind fInserting;
	int fInsertingPolylineObject;
	int fInsertingPolylineLastX;
	int fInsertingPolylineLastY;
	int fInsertingAngleObject;
	TIEVObject fNewObj;
	Hyiedefs::IntegerArray *fSelObj;
	int fSelObjCount;
	TIEVGripping fGripping;
	int fTextEditing;
	Hyiedefs::TIEEdit* fTextEdit;
	Ietextc::TIETextControl* fMemoEdit;
	bool fObjAntialias;
	TIEVObjectArray *fObjHeap;
	int fObjHeapCount;
	TIEArrayOfTIEVBitmap fBitmaps;
	bool fShareBitmaps;
	bool fAllObjectsHidden;
	TIEVNewObject fOnNewObject;
	Hyiedefs::TResampleFilter fBitmapResampleFilter;
	TIEVObjectMoveResizeEvent fOnObjectMoveResize;
	TIEVObjectClickEvent fOnObjectClick;
	TIEVObjectClickEvent fOnObjectDblClick;
	TIEVObjectClickEvent fOnObjectOver;
	Vcl::Controls::TKeyEvent fOnTextKeyDown;
	int fObjDrawed;
	bool fObjGraphicRender;
	bool fCenterNewObjects;
	System::Classes::TNotifyEvent fOnActivateTextEdit;
	TIEVTextEditEvent fOnTextEdit;
	System::Classes::TNotifyEvent fOnDeactivateTextEdit;
	bool fAllowOutOfBitmapMoving;
	bool fEnableRangeObjectsSelection;
	bool fObjEditOnNewText;
	TIEDrawObjectEvent fOnBeforeDrawObject;
	TIEDrawObjectEvent fOnAfterDrawObject;
	TIEPolylineEndingMode fPolylineEndingMode;
	Imageenview::TIEPolylineClosingMode fPolylineClosingMode;
	bool fAllowOutOfBitmapPolylines;
	int fMouseOver;
	bool fObjRulerQuoteHorizon;
	bool fObjAngleShowSmall;
	bool fFastDrawing;
	bool fObjEnableFastDrawing;
	bool fObjBitmapHandleTransparencyOnSel;
	bool fObjAnchorToLayers;
	int fMouseDownLayer;
	System::Classes::TList* fObjUndoList;
	int fObjUndoLimit;
	bool fObjAutoUndo;
	TIEVUndoMode fObjUndoMode;
	bool fSavedUndo;
	void __fastcall HintRestore();
	void __fastcall HintShow(int x, int y);
	void __fastcall SetAllObjectsHidden(bool Value);
	void __fastcall TextEditKeyDown(System::TObject* Sender, System::Word &Key, System::Classes::TShiftState Shift);
	void __fastcall TextEditOnChange(System::TObject* Sender);
	void __fastcall MemoEditKeyDown(System::TObject* Sender, System::Word &Key, System::Classes::TShiftState Shift);
	void __fastcall CalcCoef(double &cx, double &cy, Hyiedefs::TIEUnits mu);
	double __fastcall CalcRulerQuoteLen(int x1, int y1, int x2, int y2, Hyiedefs::TIEUnits mu);
	void __fastcall DrawRuler(Iegdiplus::TIECanvas* wcanvas, double QuoteLength, int x1, int y1, int x2, int y2, Hyiedefs::TIEUnits um, System::Uitypes::TColor Color, int PW, TIEVRulerType RulerType, double zx, double zy, System::Types::TRect &plim, Winapi::Windows::PLogFontW logfont);
	void __fastcall DrawAngle(Iegdiplus::TIECanvas* wcanvas, System::Types::TPoint *AnglePoints, const int AnglePoints_High, System::Uitypes::TColor Color, int PW, System::Types::TRect &plim, bool usezoom, int mul, double zx, double zy, Winapi::Windows::PLogFontW logfont, int layer);
	void __fastcall RemoveVObjData(TIEVObject &obj);
	void __fastcall RemoveMemoTextData(TIEVObject &obj);
	void __fastcall RemoveVObjDataAll();
	int __fastcall AddVObject(const TIEVObject &aObj);
	void __fastcall RemoveVObject(int hobj);
	PIEVObject __fastcall GetObj(int hobj);
	bool __fastcall DrawObject(TIEVObject &aobj, int hobj, Iexbitmaps::TIEBitmap* BBitmap, bool CheckLimits, bool UseZoom, int mul, bool drawingalpha, int layer, bool rendering, bool copyingBack);
	void __fastcall DrawObjects(bool re, Iexbitmaps::TIEBitmap* BBitmap, bool antialias, int OnlyThis, int layer, bool copyingBack);
	void __fastcall DrawObjectText(Iegdiplus::TIECanvas* wcanvas, int x1, int y1, int x2, int y2, TIEVObject &aobj, int hobj, double zx, double zy, bool drawingalpha, System::Types::TRect &plim, bool estimateSizeOnly);
	void __fastcall DrawObjectGrips(Vcl::Graphics::TCanvas* Canvas, const TIEVObject &aobj);
	int __fastcall FindNearObj(int ScrX, int ScrY, double &ds, bool mustbeselectable);
	int __fastcall FindPolylineIntraPoint(int x, int y);
	double __fastcall CalcDistPtObj(PIEVObject Obj, int x, int y);
	void __fastcall DrawSelGrips(Vcl::Graphics::TCanvas* Canvas);
	int __fastcall FindSelGrip(int x, int y, TIEVGripping &gr);
	void __fastcall UnSelObjectEx(int hobj, bool bDeselectGroup);
	void __fastcall TranslateObject(int o, int ox, int oy);
	void __fastcall ChangeObjectCoor(int o, int ox1, int oy1, int ox2, int oy2, bool DoAspectRatio, int grip);
	void __fastcall SelInRect(int aobj, int xx1, int yy1, int xx2, int yy2);
	void __fastcall DrawObjectLineLabel(Iegdiplus::TIECanvas* wcanvas, int lx1, int ly1, int lx2, int ly2, TIEVObject &aobj, double zx, double zy, System::Types::TRect &plim, bool estimateSizeOnly);
	void __fastcall AddSelObjectNS(int hobj, bool bSelectGroup);
	void __fastcall SelectByGroupIndex(int iGroupIndex, bool bSelect);
	void __fastcall ActivateTextEdit();
	void __fastcall RemoveTextEdit();
	void __fastcall SaveObj(System::Classes::TStream* Stream, int hobj);
	int __fastcall ReadObj(System::Classes::TStream* Stream, System::Byte ver, bool LoadBitmapIdx, int BitmapIdxOffset);
	void __fastcall CalcZxZyPolyline(PIEVObject Obj, double &zx, double &zy);
	TIEVObjectKind __fastcall GetObjKind(int hobj);
	void __fastcall SetObjKind(int hobj, TIEVObjectKind v);
	System::Uitypes::TColor __fastcall GetObjPenColor(int hobj);
	void __fastcall SetObjPenColor(int hobj, System::Uitypes::TColor v);
	Vcl::Graphics::TPenStyle __fastcall GetObjPenStyle(int hobj);
	void __fastcall SetObjPenStyle(int hobj, Vcl::Graphics::TPenStyle v);
	int __fastcall GetObjPenWidth(int hobj);
	void __fastcall SetObjPenWidth(int hobj, int v);
	System::Uitypes::TColor __fastcall GetObjBrushColor(int hobj);
	void __fastcall SetObjBrushColor(int hobj, System::Uitypes::TColor v);
	Vcl::Graphics::TBrushStyle __fastcall GetObjBrushStyle(int hobj);
	void __fastcall SetObjBrushStyle(int hobj, Vcl::Graphics::TBrushStyle v);
	bool __fastcall GetObjBoxHighLight(int hobj);
	void __fastcall SetObjBoxHighLight(int hobj, bool v);
	Iexbitmaps::TIEBitmap* __fastcall GetObjBitmap(int hobj);
	void __fastcall SetObjBitmap(int hobj, Iexbitmaps::TIEBitmap* v);
	Iexbitmaps::TIEBitmap* __fastcall GetObjBitmapAlpha(int hobj);
	void __fastcall SetObjBitmapAlpha(int hobj, Iexbitmaps::TIEBitmap* v);
	int __fastcall GetSelObjects(int idx);
	void __fastcall SetObjBeginShape(int hobj, TIEVArrowShape v);
	TIEVArrowShape __fastcall GetObjBeginShape(int hobj);
	void __fastcall SetObjEndShape(int hobj, TIEVArrowShape v);
	TIEVArrowShape __fastcall GetObjEndShape(int hobj);
	void __fastcall SetObjLabelPos(int hobj, TIELabelPos v);
	TIELabelPos __fastcall GetObjLabelPos(int hobj);
	void __fastcall SetObjLabelBorder(int hobj, TIELabelBorder v);
	TIELabelBorder __fastcall GetObjLabelBorder(int hobj);
	void __fastcall SetObjShapeWidth(int hobj, int v);
	int __fastcall GetObjShapeWidth(int hobj);
	void __fastcall SetObjShapeHeight(int hobj, int v);
	int __fastcall GetObjShapeHeight(int hobj);
	void __fastcall SetObjText(int hobj, System::WideString v);
	System::WideString __fastcall GetObjText(int hobj);
	void __fastcall SetObjName(int hobj, System::AnsiString v);
	System::AnsiString __fastcall GetObjName(int hobj);
	void __fastcall SetObjUserData(int hobj, void * v);
	void * __fastcall GetObjUserData(int hobj);
	void __fastcall SetObjAspectRatio(int hobj, bool v);
	bool __fastcall GetObjAspectRatio(int hobj);
	void __fastcall SetObjUserDataLength(int hobj, int v);
	int __fastcall GetObjUserDataLength(int hobj);
	void __fastcall SetObjFontAngle(int hobj, double v);
	double __fastcall GetObjFontAngle(int hobj);
	int __fastcall GetObjFontHeight(int hobj);
	void __fastcall SetObjFontHeight(int hobj, int v);
	System::UnicodeString __fastcall GetObjFontName(int hobj);
	void __fastcall SetObjFontName(int hobj, System::UnicodeString v);
	System::Uitypes::TFontStyles __fastcall GetObjFontStyles(int hobj);
	void __fastcall SetObjFontStyles(int hobj, System::Uitypes::TFontStyles v);
	void __fastcall SetObjTextAlign(int hobj, Hyiedefs::TIEAlignment v);
	Hyiedefs::TIEAlignment __fastcall GetObjTextAlign(int hobj);
	void __fastcall SetObjTextAutoSize(int hobj, bool v);
	bool __fastcall GetObjTextAutoSize(int hobj);
	void __fastcall SetObjTextCurveCharRot(int hobj, double v);
	double __fastcall GetObjTextCurveCharRot(int hobj);
	void __fastcall SetObjTextCurveStretch(int hobj, bool v);
	bool __fastcall GetObjTextCurveStretch(int hobj);
	void __fastcall SetObjTextEditable(int hobj, bool v);
	bool __fastcall GetObjTextEditable(int hobj);
	void __fastcall SetObjTextMaintainAlignmentOnRotate(int hobj, bool v);
	bool __fastcall GetObjTextMaintainAlignmentOnRotate(int hobj);
	void __fastcall SetObjMemoLineSpace(int hobj, int v);
	int __fastcall GetObjMemoLineSpace(int hobj);
	void __fastcall SetObjMemoHasBitmap(int hobj, bool v);
	bool __fastcall GetObjMemoHasBitmap(int hobj);
	void __fastcall SetObjMemoCharsBrushStyle(int hobj, Vcl::Graphics::TBrushStyle v);
	Vcl::Graphics::TBrushStyle __fastcall GetObjMemoCharsBrushStyle(int hobj);
	void __fastcall SetObjMemoMarginLeft(int hobj, double v);
	double __fastcall GetObjMemoMarginLeft(int hobj);
	void __fastcall SetObjMemoMarginTop(int hobj, double v);
	double __fastcall GetObjMemoMarginTop(int hobj);
	void __fastcall SetObjMemoMarginRight(int hobj, double v);
	double __fastcall GetObjMemoMarginRight(int hobj);
	void __fastcall SetObjMemoMarginBottom(int hobj, double v);
	double __fastcall GetObjMemoMarginBottom(int hobj);
	void __fastcall SetObjLeft(int hobj, int v);
	void __fastcall SetObjRight(int hobj, int v);
	int __fastcall GetObjLeft(int hobj);
	int __fastcall GetObjRight(int hobj);
	void __fastcall SetObjTop(int hobj, int v);
	void __fastcall SetObjBottom(int hobj, int v);
	int __fastcall GetObjTop(int hobj);
	int __fastcall GetObjBottom(int hobj);
	void __fastcall SetObjWidth(int hobj, int v);
	int __fastcall GetObjWidth(int hobj);
	void __fastcall SetObjHeight(int hobj, int v);
	int __fastcall GetObjHeight(int hobj);
	void __fastcall SetObjRulerUnit(int hobj, Hyiedefs::TIEUnits v);
	Hyiedefs::TIEUnits __fastcall GetObjRulerUnit(int hobj);
	void __fastcall SetObjRulerType(int hobj, TIEVRulerType v);
	TIEVRulerType __fastcall GetObjRulerType(int hobj);
	void __fastcall SetObjBlendOperation(int hobj, Hyieutils::TIERenderOperation v);
	Hyieutils::TIERenderOperation __fastcall GetObjBlendOperation(int hobj);
	void __fastcall SetObjLayer(int hobj, int value);
	int __fastcall GetObjLayer(int hobj);
	void __fastcall SetObjTransparency(int hobj, int v);
	int __fastcall GetObjTransparency(int hobj);
	void __fastcall SetObjID(int hobj, int v);
	int __fastcall GetObjID(int hobj);
	void __fastcall SetObjStyle(int hobj, TIEVStyle v);
	TIEVStyle __fastcall GetObjStyle(int hobj);
	void __fastcall SetZoomObjectsWidth(bool Value);
	System::Types::TRect __fastcall GetObjectsExtents();
	System::Types::TPoint __fastcall GetObjPolylinePoints(int hobj, int index);
	int __fastcall GetObjPolylinePointsCount(int hobj);
	bool __fastcall GetObjPolylineClosed(int hobj);
	void __fastcall SetObjPolylineClosed(int hobj, bool Value);
	Hyiedefs::TIEVSoftShadow* __fastcall GetObjSoftShadow(int hobj);
	void __fastcall DrawGrip(Vcl::Graphics::TCanvas* destcanvas, Iegdiplus::TIECanvas* destiecanvas, int x, int y, int ty);
	bool __fastcall InGrip(int xg, int yg, int xp, int yp);
	System::Uitypes::TColor __fastcall GetObjLabelBrushColor(int hobj);
	void __fastcall SetObjLabelBrushColor(int hobj, System::Uitypes::TColor v);
	Vcl::Graphics::TBrushStyle __fastcall GetObjLabelBrushStyle(int hobj);
	void __fastcall SetObjLabelBrushStyle(int hobj, Vcl::Graphics::TBrushStyle v);
	bool __fastcall GetObjFontLocked(int hobj);
	void __fastcall SetObjFontLocked(int hobj, bool value);
	Hyiedefs::TIEFontQuality __fastcall GetObjFontQuality(int hobj);
	int __fastcall GetObjGroupIndex(int hobj);
	void __fastcall SetObjFontQuality(int hobj, Hyiedefs::TIEFontQuality value);
	void __fastcall SetObjGroupIndex(int hobj, int value);
	System::Uitypes::TColor __fastcall GetObjMemoBorderColor(int hobj);
	void __fastcall SetObjMemoBorderColor(int hobj, System::Uitypes::TColor value);
	Vcl::Graphics::TPenStyle __fastcall GetObjMemoBorderStyle(int hobj);
	void __fastcall SetObjMemoBorderStyle(int hobj, Vcl::Graphics::TPenStyle value);
	void __fastcall SetObjMemoFixedHeight(int hobj, int value);
	int __fastcall GetObjMemoFixedHeight(int hobj);
	bool __fastcall GetObjBitmapBorder(int hobj);
	void __fastcall SetObjBitmapBorder(int hobj, bool value);
	double __fastcall GetObjArcStartingAngle(int hobj);
	void __fastcall SetObjArcStartingAngle(int hobj, double v);
	double __fastcall GetObjArcEndingAngle(int hobj);
	void __fastcall SetObjArcEndingAngle(int hobj, double v);
	TIEExtendedObject* __fastcall GetObjExtendedObject(int hobj);
	void __fastcall SetExtendedObjectToPut(System::AnsiString value);
	void __fastcall SetObjRulerQuoteHorizon(bool value);
	void __fastcall SetObjAngleShowSmall(bool value);
	Iexbitmaps::TIEBitmap* __fastcall GetBitmap(int idx);
	Iexbitmaps::TIEBitmap* __fastcall GetBitmapAlpha(int idx);
	void __fastcall FreeBitmap(int idx);
	int __fastcall AllocBitmap();
	void __fastcall PackBMP();
	int __fastcall FindBitmap(Iexbitmaps::TIEBitmap* SBitmap);
	void __fastcall SetObjBitmapNU(int hobj, Iexbitmaps::TIEBitmap* v);
	void __fastcall SetObjBitmapIdxNU(int hobj, int idx);
	void __fastcall SetBitmapResampleFilter(Hyiedefs::TResampleFilter v);
	bool __fastcall GetObjCanUndo();
	int __fastcall GetObjUndoCount();
	void __fastcall SetObjAntialias(bool value);
	void __fastcall MouseSelect(System::Classes::TShiftState Shift, int x, int y, bool MouseDown);
	void __fastcall SetObjTextEditMode(int hobj);
	int __fastcall GetObjTextEditMode();
	void __fastcall SetOnTextEditCursorMoved(System::Classes::TNotifyEvent value);
	System::Classes::TNotifyEvent __fastcall GetOnTextEditCursorMoved();
	System::Types::TRect __fastcall GetSelectedObjectsRect();
	void __fastcall DrawObjectsToBitmapEx(Iexbitmaps::TIEBitmap* target, bool Antialias, int OnlyThis, int layer, bool AdaptBitmapPixelFormat);
	void __fastcall SetObjGripImage(Vcl::Graphics::TPicture* Value);
	void __fastcall DoObjSaveUndo();
	double __fastcall CalcDistPtBitmap(PIEVObject Obj, int x, int y);
	void __fastcall ObjResetPolylinePoints(TIEVObject &obj);
	void __fastcall StretchTextRectEx(Vcl::Graphics::TCanvas* WCanvas, TIEVObject &aobj);
	System::Types::TPoint __fastcall GetObjAnglePoints(int hobj, int index);
	void __fastcall GetObjectBoundingBox(TIEVObject &aobj, int hobj, int &x1, int &y1, int &x2, int &y2);
	void __fastcall SetDefaultObjectProperties(TIEVObject &aObj);
	int __fastcall GetMaxTextLength();
	void __fastcall SetMaxTextLength(const int Value);
	
protected:
	int fVStable;
	int fObjLockPaint;
	Vcl::Extctrls::TTimer* fMouseStableTimer;
	virtual void __fastcall DrawLineInserting(bool restore);
	virtual void __fastcall DrawBoxInserting(bool restore);
	virtual void __fastcall DrawEllipseInserting(bool restore);
	virtual void __fastcall DrawRulerInserting();
	virtual void __fastcall DrawAngleInserting();
	void __fastcall MouseStableTimerEvent(System::TObject* Sender);
	void __fastcall VPaintTo(Vcl::Graphics::TBitmap* BBitmap);
	virtual void __fastcall SetMouseInteractGeneral(Imageenview::TIEMouseInteract v);
	void __fastcall SetMouseInteractVt(TIEMouseInteractVt v);
	TIEMouseInteractVt __fastcall GetMouseInteract();
	void __fastcall SetMUnit(Hyiedefs::TIEUnits v);
	HIDESBASE void __fastcall SetScale(double v);
	void __fastcall SetFloatDigits(int v);
	void __fastcall SetFloatPrecision(int v);
	void __fastcall UpdateHint(int x, int y);
	virtual void __fastcall ViewChange(int c);
	virtual void __fastcall SubMouseMoveScroll(int scx, int scy);
	void __fastcall ReInsertVObject(int hobj, int pos);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	HIDESBASE MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Message);
	HIDESBASE MESSAGE void __fastcall WMKillFocus(Winapi::Messages::TWMKillFocus &Msg);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Winapi::Messages::TWMSetFocus &Msg);
	HIDESBASE MESSAGE void __fastcall WMKeyDown(Winapi::Messages::TWMKey &Msg);
	HIDESBASE MESSAGE void __fastcall WMGetDlgCode(Winapi::Messages::TMessage &message);
	virtual void __fastcall DoVectorialChanged();
	virtual void __fastcall UpdateTextEdit();
	void __fastcall DrawBitmapObject(Iexbitmaps::TIEBitmap* BBitmap, const TIEVObject &aobj, int x1, int y1, int x2, int y2, int realPenWidth, bool rendering);
	virtual void __fastcall DoObjectMoveResize(int hobj, TIEVGripping Grip, int &OffsetX, int &OffsetY);
	virtual void __fastcall DoObjectClick(int hobj);
	virtual void __fastcall DoObjectDblClick(int hobj);
	virtual void __fastcall DoObjectOver(int hobj);
	int __fastcall CountAnglePoints(System::Types::TPoint *AnglePoints, const int AnglePoints_High);
	int __fastcall AdjustCoords(const TIEVObject &aobj, int &x1, int &y1, int &x2, int &y2, int &x3, int &y3, double zx, double zy);
	virtual void __fastcall SetObjGraphicRender(bool Value);
	int __fastcall VXBmp2Scr(int x, bool UseZoom, int mul, int layer)/* overload */;
	int __fastcall VXBmp2Scr(int x, int layer)/* overload */;
	int __fastcall VYBmp2Scr(int y, bool UseZoom, int mul, int layer)/* overload */;
	int __fastcall VYBmp2Scr(int y, int layer)/* overload */;
	int __fastcall VXScr2Bmp(int x, int layer);
	int __fastcall VYScr2Bmp(int y, int layer);
	void __fastcall VGetLayerCoords(int &LyrOffX, int &LyrOffY, int &LyrExtX, int &LyrExtY, int layer);
	int __fastcall VFindLayerAt(int x, int y, bool SelectablesOnly = true);
	virtual void __fastcall AfterDrawLayer(int layerIndex, Iexbitmaps::TIEBitmap* DestBitmap, const System::Types::TRect &DestRect);
	void __fastcall CheckClosePolyline(int hPolylineObj);
	virtual void __fastcall DoBeforeVectorialChange();
	void __fastcall DrawPolylinePoints(Vcl::Graphics::TCanvas* Canvas);
	int __fastcall FindPolylinePoint(int x, int y);
	void __fastcall RecalcPolylineBox(PIEVObject Obj);
	void __fastcall RotateObjectEx(PIEVObject obj, double angle, double vsin, double vcos, int basex, int basey);
	void __fastcall CalcRotateValues(PIEVObject obj, double angle, TIERotateCenter center, int &basex, int &basey, double &vsin, double &vcos);
	void __fastcall UnSelAllObjectsNU();
	void __fastcall AddSelObjectEx(int hobj, bool bSelectGroup);
	virtual void __fastcall DoNewObject(int hobj);
	virtual void __fastcall DoUserSelectObject(int hobj);
	virtual void __fastcall DoUserDeselectObject(int hobj);
	
public:
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	__fastcall virtual TImageEnVect(System::Classes::TComponent* Owner);
	__fastcall TImageEnVect(System::Classes::TComponent* Owner, int dummy);
	__fastcall virtual ~TImageEnVect();
	virtual void __fastcall Paint();
	virtual void __fastcall PaintToEx(Iexbitmaps::TIEBitmap* ABitmap, System::Types::PRect UpdRect, bool drawBackground, bool drawGadgets);
	virtual void __fastcall Assign(System::TObject* Source);
	virtual void __fastcall Update();
	__property System::AnsiString ExtendedObjectToPut = {read=fExtendedObjectToPut, write=SetExtendedObjectToPut};
	void __fastcall UpdateDpi();
	__property bool ObjGraphicRender = {read=fObjGraphicRender, write=SetObjGraphicRender, nodefault};
	__property TIEVGripping ObjGripping = {read=fGripping, nodefault};
	int __fastcall GetIndexFromObj(int hobj);
	virtual void __fastcall LayersRemove(int idx, bool SwapBackgroundProps = false);
	__property Ietextc::TIETextControl* MemoEdit = {read=fMemoEdit};
	__property int MaxTextLength = {read=GetMaxTextLength, write=SetMaxTextLength, nodefault};
	__property Vcl::Graphics::TPen* InsertingPen = {read=fInsertingPen};
	__property bool UseCentralGrip = {read=fUseCentralGrip, write=fUseCentralGrip, nodefault};
	__property int ObjGripSize = {read=fObjGripSize, write=fObjGripSize, nodefault};
	__property Imageenview::TIEGripShape ObjGripShape = {read=fObjGripShape, write=fObjGripShape, nodefault};
	__property Vcl::Graphics::TPen* ObjGripPen = {read=fObjGripPen};
	__property Vcl::Graphics::TBrush* ObjGripBrush = {read=fObjGripBrush};
	__property bool CenterNewObjects = {read=fCenterNewObjects, write=fCenterNewObjects, nodefault};
	double __fastcall GetSelectionArea();
	double __fastcall GetSelectionLen();
	System::Types::TPoint __fastcall GetSelectionCentroid();
	double __fastcall GetPolylineLen(int hobj);
	double __fastcall GetPolylineArea(int hobj);
	System::Types::TPoint __fastcall GetPolylineCentroid(int hobj);
	__property bool MeasureTrack = {read=fMeasureTrack, write=fMeasureTrack, default=1};
	void __fastcall SetScaleFromPixels(int px, double mm);
	__property double ScaleFactor = {read=fScale, write=SetScale};
	void __fastcall SetScaleFromSelectionLen(double mm);
	__property double MeasureCoefX = {read=fCoefX};
	__property double MeasureCoefY = {read=fCoefY};
	double __fastcall GetObjDiagLen(int hobj);
	virtual void __fastcall AddSelPoint(int x, int y);
	virtual void __fastcall Select(int x1, int y1, int x2, int y2, Imageenview::TIESelOp Op = (Imageenview::TIESelOp)(0x0));
	void __fastcall CancelInteracts();
	__property bool ObjBitmapHandleTransparencyOnSel = {read=fObjBitmapHandleTransparencyOnSel, write=fObjBitmapHandleTransparencyOnSel, nodefault};
	__property int ObjectsCount = {read=fObjCount, nodefault};
	__property System::Types::TRect ObjectsExtents = {read=GetObjectsExtents};
	__property TIEVObjectKind ObjKind[int hobj] = {read=GetObjKind, write=SetObjKind};
	__property System::Uitypes::TColor ObjPenColor[int hobj] = {read=GetObjPenColor, write=SetObjPenColor};
	__property Vcl::Graphics::TPenStyle ObjPenStyle[int hobj] = {read=GetObjPenStyle, write=SetObjPenStyle};
	__property int ObjPenWidth[int hobj] = {read=GetObjPenWidth, write=SetObjPenWidth};
	__property System::Uitypes::TColor ObjBrushColor[int hobj] = {read=GetObjBrushColor, write=SetObjBrushColor};
	__property Vcl::Graphics::TBrushStyle ObjBrushStyle[int hobj] = {read=GetObjBrushStyle, write=SetObjBrushStyle};
	__property bool ObjBoxHighlight[int hobj] = {read=GetObjBoxHighLight, write=SetObjBoxHighLight};
	__property System::Uitypes::TColor ObjLabelBrushColor[int hobj] = {read=GetObjLabelBrushColor, write=SetObjLabelBrushColor};
	__property Vcl::Graphics::TBrushStyle ObjLabelBrushStyle[int hobj] = {read=GetObjLabelBrushStyle, write=SetObjLabelBrushStyle};
	__property Iexbitmaps::TIEBitmap* ObjBitmap[int hobj] = {read=GetObjBitmap, write=SetObjBitmap};
	__property Iexbitmaps::TIEBitmap* ObjBitmapAlpha[int hobj] = {read=GetObjBitmapAlpha, write=SetObjBitmapAlpha};
	__property TIEVArrowShape ObjBeginShape[int hobj] = {read=GetObjBeginShape, write=SetObjBeginShape};
	__property TIEVArrowShape ObjEndShape[int hobj] = {read=GetObjEndShape, write=SetObjEndShape};
	__property int ObjShapeWidth[int hobj] = {read=GetObjShapeWidth, write=SetObjShapeWidth};
	__property int ObjShapeHeight[int hobj] = {read=GetObjShapeHeight, write=SetObjShapeHeight};
	__property TIELabelPos ObjLabelPosition[int hobj] = {read=GetObjLabelPos, write=SetObjLabelPos};
	__property TIELabelBorder ObjLabelBorder[int hobj] = {read=GetObjLabelBorder, write=SetObjLabelBorder};
	__property System::WideString ObjText[int hobj] = {read=GetObjText, write=SetObjText};
	__property bool ObjTextAutoSize[int hobj] = {read=GetObjTextAutoSize, write=SetObjTextAutoSize};
	__property double ObjTextCurveCharRot[int hobj] = {read=GetObjTextCurveCharRot, write=SetObjTextCurveCharRot};
	__property bool ObjTextCurveStretch[int hobj] = {read=GetObjTextCurveStretch, write=SetObjTextCurveStretch};
	__property bool ObjTextEditable[int hobj] = {read=GetObjTextEditable, write=SetObjTextEditable};
	__property bool ObjTextMaintainAlignmentOnRotate[int hobj] = {read=GetObjTextMaintainAlignmentOnRotate, write=SetObjTextMaintainAlignmentOnRotate};
	__property int ObjMemoLineSpace[int hobj] = {read=GetObjMemoLineSpace, write=SetObjMemoLineSpace};
	__property double ObjFontAngle[int hobj] = {read=GetObjFontAngle, write=SetObjFontAngle};
	__property int ObjFontHeight[int hobj] = {read=GetObjFontHeight, write=SetObjFontHeight};
	__property System::UnicodeString ObjFontName[int hobj] = {read=GetObjFontName, write=SetObjFontName};
	__property System::Uitypes::TFontStyles ObjFontStyles[int hobj] = {read=GetObjFontStyles, write=SetObjFontStyles};
	__property Hyiedefs::TIEAlignment ObjTextAlign[int hobj] = {read=GetObjTextAlign, write=SetObjTextAlign};
	__property int ObjLeft[int hobj] = {read=GetObjLeft, write=SetObjLeft};
	__property int ObjTop[int hobj] = {read=GetObjTop, write=SetObjTop};
	__property int ObjRight[int hobj] = {read=GetObjRight, write=SetObjRight};
	__property int ObjBottom[int hobj] = {read=GetObjBottom, write=SetObjBottom};
	__property int ObjWidth[int hobj] = {read=GetObjWidth, write=SetObjWidth};
	__property int ObjHeight[int hobj] = {read=GetObjHeight, write=SetObjHeight};
	__property System::AnsiString ObjName[int hobj] = {read=GetObjName, write=SetObjName};
	__property int ObjID[int hobj] = {read=GetObjID, write=SetObjID};
	__property TIEVStyle ObjStyle[int hobj] = {read=GetObjStyle, write=SetObjStyle};
	__property Hyiedefs::TIEUnits ObjRulerUnit[int hobj] = {read=GetObjRulerUnit, write=SetObjRulerUnit};
	__property TIEVRulerType ObjRulerType[int hobj] = {read=GetObjRulerType, write=SetObjRulerType};
	__property Hyieutils::TIERenderOperation ObjBlendOperation[int hobj] = {read=GetObjBlendOperation, write=SetObjBlendOperation};
	__property int ObjLayer[int hobj] = {read=GetObjLayer, write=SetObjLayer};
	__property int ObjTransparency[int hobj] = {read=GetObjTransparency, write=SetObjTransparency};
	__property System::Types::TPoint ObjPolylinePoints[int hobj][int index] = {read=GetObjPolylinePoints};
	__property int ObjPolylinePointsCount[int hobj] = {read=GetObjPolylinePointsCount};
	__property System::Types::TPoint ObjAnglePoints[int hobj][int index] = {read=GetObjAnglePoints};
	__property bool ObjPolylineClosed[int hobj] = {read=GetObjPolylineClosed, write=SetObjPolylineClosed};
	__property Hyiedefs::TIEVSoftShadow* ObjSoftShadow[int hobj] = {read=GetObjSoftShadow};
	__property int ObjGroupIndex[int hobj] = {read=GetObjGroupIndex, write=SetObjGroupIndex};
	__property bool ObjFontLocked[int hobj] = {read=GetObjFontLocked, write=SetObjFontLocked};
	__property Hyiedefs::TIEFontQuality ObjFontQuality[int hobj] = {read=GetObjFontQuality, write=SetObjFontQuality};
	__property System::Uitypes::TColor ObjMemoBorderColor[int hobj] = {read=GetObjMemoBorderColor, write=SetObjMemoBorderColor};
	__property Vcl::Graphics::TPenStyle ObjMemoBorderStyle[int hobj] = {read=GetObjMemoBorderStyle, write=SetObjMemoBorderStyle};
	__property int ObjMemoFixedHeight[int hobj] = {read=GetObjMemoFixedHeight, write=SetObjMemoFixedHeight};
	__property bool ObjMemoHasBitmap[int hobj] = {read=GetObjMemoHasBitmap, write=SetObjMemoHasBitmap};
	__property Vcl::Graphics::TBrushStyle ObjMemoCharsBrushStyle[int hobj] = {read=GetObjMemoCharsBrushStyle, write=SetObjMemoCharsBrushStyle};
	__property double ObjMemoMarginLeft[int hobj] = {read=GetObjMemoMarginLeft, write=SetObjMemoMarginLeft};
	__property double ObjMemoMarginTop[int hobj] = {read=GetObjMemoMarginTop, write=SetObjMemoMarginTop};
	__property double ObjMemoMarginRight[int hobj] = {read=GetObjMemoMarginRight, write=SetObjMemoMarginRight};
	__property double ObjMemoMarginBottom[int hobj] = {read=GetObjMemoMarginBottom, write=SetObjMemoMarginBottom};
	__property int ObjTextEditMode = {read=GetObjTextEditMode, write=SetObjTextEditMode, nodefault};
	__property bool ObjBitmapBorder[int hobj] = {read=GetObjBitmapBorder, write=SetObjBitmapBorder};
	__property double ObjArcStartingAngle[int hobj] = {read=GetObjArcStartingAngle, write=SetObjArcStartingAngle};
	__property double ObjArcEndingAngle[int hobj] = {read=GetObjArcEndingAngle, write=SetObjArcEndingAngle};
	__property void * ObjUserData[int hobj] = {read=GetObjUserData, write=SetObjUserData};
	__property int ObjUserDataLength[int hobj] = {read=GetObjUserDataLength, write=SetObjUserDataLength};
	__property bool ObjAspectRatio[int hobj] = {read=GetObjAspectRatio, write=SetObjAspectRatio};
	__property TIEExtendedObject* ObjExtendedObject[int hobj] = {read=GetObjExtendedObject};
	void __fastcall ObjSetTBitmap(int hobj, Vcl::Graphics::TBitmap* bmp);
	double __fastcall GetAngleValue(int hobj);
	void __fastcall SetObjPolylinePoints(int hobj, System::Types::TPoint *Points, const int Points_High);
	void __fastcall AddPolyLinePoint(int hobj, int X, int Y);
	void __fastcall RemovePolyLinePoint(int hobj, int Index);
	void __fastcall SetObjAnglePoints(int hobj, System::Types::TPoint *Points, const int Points_High);
	void __fastcall GetObjRect(int hobj, System::Types::TRect &Rect);
	void __fastcall SetObjRect(int hobj, const System::Types::TRect &Rect, bool bMaintainAspectRatio = false);
	__property bool AllObjectsHidden = {read=fAllObjectsHidden, write=SetAllObjectsHidden, nodefault};
	void __fastcall SetObjFont(int hobj, Vcl::Graphics::TFont* v);
	void __fastcall SetObjBitmapICO(int hobj, int ico, int iwidth, int iheight);
	bool __fastcall SetObjBitmapFromFile(int hobj, const System::WideString FileName);
	bool __fastcall SetObjBitmapFromStream(int hobj, System::Classes::TStream* Stream, int FileFormat = 0x0);
	void __fastcall SetObjFrontOf(int hobj, int refobj);
	void __fastcall SetObjBackTo(int hobj, int refobj);
	bool __fastcall ObjIsVisible(int hobj);
	__property bool ObjEditOnNewText = {read=fObjEditOnNewText, write=fObjEditOnNewText, nodefault};
	TIEMemoEditCharInfo* __fastcall MemoEditingGetCharInfo();
	void __fastcall MemoEditingSetCharInfo(TIEMemoEditCharInfo* info);
	bool __fastcall IsSelObject(int hobj);
	void __fastcall UnSelObject(int hobj);
	void __fastcall AddSelObject(int hobj);
	void __fastcall UnSelAllObjects();
	void __fastcall SelAllObjects();
	void __fastcall GroupObjects(bool bSelectedOnly = true);
	void __fastcall UngroupObjects(bool bSelectedOnly = true);
	__property int MaxSelectionDistance = {read=fMaxSelectionDistance, write=fMaxSelectionDistance, nodefault};
	__property int MaxMovingDistance = {read=fMaxMovingDistance, write=fMaxMovingDistance, nodefault};
	__property int SelObjects[int idx] = {read=GetSelObjects};
	__property int SelObjectsCount = {read=fSelObjCount, nodefault};
	__property bool EnableRangeObjectsSelection = {read=fEnableRangeObjectsSelection, write=fEnableRangeObjectsSelection, nodefault};
	__property bool ObjBoxInnerSelectable = {read=fObjBoxInnerSelectable, write=fObjBoxInnerSelectable, nodefault};
	void __fastcall RemoveAllObjects();
	void __fastcall RemoveObject(int hobj);
	int __fastcall AddNewObject(bool bDefaultProps = false)/* overload */;
	int __fastcall AddNewObject(TIEVObjectKind Kind, const System::Types::TRect &Rect, System::Uitypes::TColor Color, bool bDefaultProps = false)/* overload */;
	int __fastcall GetObjFromName(const System::AnsiString oName);
	int __fastcall GetObjFromID(int oID);
	int __fastcall GetObjFromIndex(int idx);
	int __fastcall CopyObjectTo(int hobj, TImageEnVect* Dest);
	void __fastcall CopyAllObjectsTo(Imageenview::TImageEnView* Dest);
	void __fastcall CopyAllLayersFrom(Imageenview::TImageEnView* Src, bool IncludeLayer0 = true, bool IncludeImageLayers = true);
	void __fastcall CopySelectedObjectsTo(TImageEnVect* Dest);
	int __fastcall FindObjectAt(int x, int y, double &Distance);
	int __fastcall CreatePolygonFromEdge(int x, int y, bool maxfilter, int tolerance);
	int __fastcall CreatePolygonsFromSelection();
	void __fastcall SetObjTextCurve(int hobj, double x, double y);
	void __fastcall SetObjTextCurveShape(int hobj, Hyiedefs::TIECurve shape, int phase, bool dforward);
	void __fastcall SetObjTextCurveFromPolyline(int hobj, int source);
	int __fastcall CreateImageFromSelectedArea(int feather = 0x0, bool smooth = false);
	void __fastcall CopyObjectsToBack(bool Antialias = true, bool AdaptBitmapPixelFormat = true);
	void __fastcall CopyObjectToBack(int hobj, bool Antialias = true, bool AdaptBitmapPixelFormat = true);
	void __fastcall DrawObjectsToBitmap(Iexbitmaps::TIEBitmap* target, bool Antialias = true, bool AdaptBitmapPixelFormat = true);
	void __fastcall DrawOneObjectToBitmap(int hobj, Iexbitmaps::TIEBitmap* target, bool Antialias = true, bool AdaptBitmapPixelFormat = true);
	void __fastcall SimplifyPolygon(int hobj, int MaxPoints);
	bool __fastcall RemovePolygonJaggedEdges(int hobj);
	System::UnicodeString __fastcall GetMemoFormattedString(int hobj);
	__property int ObjDrawed = {read=fObjDrawed, nodefault};
	bool __fastcall IsEditMode();
	void __fastcall RotateAllObjects(double angle, TIERotateCenter center);
	void __fastcall RotateObject(int hobj, double angle, TIERotateCenter center);
	void __fastcall AlignObjects(Imageenview::TIEAlignLayers Alignment, bool bSelectedOnly = true);
	void __fastcall StretchTextRect(int hobj);
	__property bool ObjRulerQuoteHorizon = {read=fObjRulerQuoteHorizon, write=SetObjRulerQuoteHorizon, nodefault};
	__property bool ObjAngleShowSmall = {read=fObjAngleShowSmall, write=SetObjAngleShowSmall, nodefault};
	__property bool AllowOutOfBitmapMoving = {read=fAllowOutOfBitmapMoving, write=fAllowOutOfBitmapMoving, nodefault};
	__property bool AllowOutOfBitmapPolylines = {read=fAllowOutOfBitmapPolylines, write=fAllowOutOfBitmapPolylines, nodefault};
	__property Vcl::Graphics::TFont* MeasureHintFont = {read=fMeasureHintFont};
	__property Vcl::Graphics::TBrush* MeasureHintBrush = {read=fMeasureHintBrush};
	__property System::Uitypes::TColor MeasureHintBorder1 = {read=fMeasureHintBorder1, write=fMeasureHintBorder1, nodefault};
	__property System::Uitypes::TColor MeasureHintBorder2 = {read=fMeasureHintBorder2, write=fMeasureHintBorder2, nodefault};
	void __fastcall SaveToFileIEV(const System::UnicodeString FileName, int hobj = 0xfffffffd);
	void __fastcall SaveToStreamIEV(System::Classes::TStream* Stream, int hobj = 0xfffffffd);
	bool __fastcall LoadFromFileIEV(const System::UnicodeString FileName, bool AppendObjects = false);
	bool __fastcall LoadFromStreamIEV(System::Classes::TStream* Stream, bool AppendObjects = false);
	bool __fastcall ImportDXF(const System::WideString FileName);
	void __fastcall SaveObjectsToTIFF(const System::UnicodeString fileName, int pageIndex = 0x0);
	void __fastcall LoadObjectsFromTIFF(const System::UnicodeString fileName, int pageIndex = 0x0);
	void __fastcall SaveToFileAll(const System::UnicodeString fileName, int imageCompression = 0xffffffff);
	void __fastcall SaveToStreamAll(System::Classes::TStream* Stream, int imageCompression = 0xffffffff);
	bool __fastcall LoadFromFileAll(const System::UnicodeString fileName);
	bool __fastcall LoadFromStreamAll(System::Classes::TStream* Stream);
	void __fastcall ObjCopyToClipboard();
	void __fastcall ObjCutToClipboard();
	void __fastcall ObjPasteFromClipboard(int OffsetX, int OffsetY);
	bool __fastcall ObjIsClipboardAvailable(bool bIncludeImages = true);
	void __fastcall ObjSaveUndo();
	void __fastcall ObjClearUndo();
	void __fastcall ObjClearAllUndo();
	__property bool ObjCanUndo = {read=GetObjCanUndo, nodefault};
	__property int ObjUndoCount = {read=GetObjUndoCount, nodefault};
	void __fastcall ObjUndoAt(int Position);
	void __fastcall ObjUndo();
	void __fastcall ObjLockPaint();
	void __fastcall ObjUnLockPaint();
	__property Imageenview::TIEPolylineClosingMode PolylineClosingMode = {read=fPolylineClosingMode, write=fPolylineClosingMode, nodefault};
	__property TIEPolylineEndingMode PolylineEndingMode = {read=fPolylineEndingMode, write=fPolylineEndingMode, nodefault};
	__property bool ObjEnableFastDrawing = {read=fObjEnableFastDrawing, write=fObjEnableFastDrawing, nodefault};
	__property bool ObjAnchorToLayers = {read=fObjAnchorToLayers, write=fObjAnchorToLayers, nodefault};
	
__published:
	__property TIEMouseInteractVt MouseInteractVt = {read=GetMouseInteract, write=SetMouseInteractVt, default=0};
	__property Hyiedefs::TIEUnits MUnit = {read=fMUnit, write=SetMUnit, default=0};
	__property int FloatDigits = {read=fFloatDigits, write=SetFloatDigits, default=2};
	__property int FloatPrecision = {read=fFloatPrecision, write=SetFloatPrecision, default=15};
	__property bool ShareBitmaps = {read=fShareBitmaps, write=fShareBitmaps, default=1};
	__property System::Classes::TNotifyEvent OnSelectObject = {read=fOnSelectObject, write=fOnSelectObject};
	__property TIEUserSelectObject OnUserSelectObject = {read=fOnUserSelectObject, write=fOnUserSelectObject};
	__property TIEUserSelectObject OnUserDeselectObject = {read=fOnUserDeselectObject, write=fOnUserDeselectObject};
	__property TIEVMeasureHintEvent OnMeasureHint = {read=fOnMeasureHint, write=fOnMeasureHint};
	__property TIEOnPresentMeasure OnPresentMeasure = {read=fOnPresentMeasure, write=fOnPresentMeasure};
	__property bool ZoomObjectsWidth = {read=fZoomObjectsWidth, write=SetZoomObjectsWidth, default=1};
	__property System::Classes::TNotifyEvent OnVectorialChanged = {read=fOnVectorialChanged, write=fOnVectorialChanged};
	__property System::Classes::TNotifyEvent OnBeforeVectorialChanged = {read=fOnBeforeVectorialChanged, write=fOnBeforeVectorialChanged};
	__property TIEVDragLenEndEvent OnDragLenEnd = {read=fOnDragLenEnd, write=fOnDragLenEnd};
	__property TIEVNewObject OnNewObject = {read=fOnNewObject, write=fOnNewObject};
	__property Hyiedefs::TResampleFilter BitmapResampleFilter = {read=fBitmapResampleFilter, write=SetBitmapResampleFilter, default=0};
	__property TIEVObjectMoveResizeEvent OnObjectMoveResize = {read=fOnObjectMoveResize, write=fOnObjectMoveResize};
	__property TIEVObjectClickEvent OnObjectClick = {read=fOnObjectClick, write=fOnObjectClick};
	__property TIEVObjectClickEvent OnObjectDblClick = {read=fOnObjectDblClick, write=fOnObjectDblClick};
	__property TIEVObjectClickEvent OnObjectOver = {read=fOnObjectOver, write=fOnObjectOver};
	__property int ObjUndoLimit = {read=fObjUndoLimit, write=fObjUndoLimit, default=1};
	__property bool ObjAutoUndo = {read=fObjAutoUndo, write=fObjAutoUndo, default=0};
	__property bool ObjAntialias = {read=fObjAntialias, write=SetObjAntialias, default=1};
	__property bool SelectOnMouseDown = {read=fSelectOnMouseDown, write=fSelectOnMouseDown, default=1};
	__property Vcl::Controls::TKeyEvent OnTextKeyDown = {read=fOnTextKeyDown, write=fOnTextKeyDown};
	__property System::Classes::TNotifyEvent OnActivateTextEdit = {read=fOnActivateTextEdit, write=fOnActivateTextEdit};
	__property TIEVTextEditEvent OnTextEdit = {read=fOnTextEdit, write=fOnTextEdit};
	__property System::Classes::TNotifyEvent OnDeactivateTextEdit = {read=fOnDeactivateTextEdit, write=fOnDeactivateTextEdit};
	__property System::Classes::TNotifyEvent OnTextEditCursorMoved = {read=GetOnTextEditCursorMoved, write=SetOnTextEditCursorMoved};
	__property TIEDrawObjectEvent OnBeforeDrawObject = {read=fOnBeforeDrawObject, write=fOnBeforeDrawObject};
	__property TIEDrawObjectEvent OnAfterDrawObject = {read=fOnAfterDrawObject, write=fOnAfterDrawObject};
	__property Vcl::Graphics::TPicture* ObjGripImage = {read=fObjGripImage, write=SetObjGripImage};
	__property TIEVUndoMode ObjUndoMode = {read=fObjUndoMode, write=fObjUndoMode, default=0};
	__property bool ShowLegacyWarning = {read=fShowLegacyWarning, write=SetShowLegacyWarning, default=1};
public:
	/* TWinControl.CreateParented */ inline __fastcall TImageEnVect(HWND ParentWindow) : Imageenview::TImageEnView(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::Int8 IENULLOBJ = System::Int8(-4);
static const System::Int8 IEDEFWIDTH = System::Int8(0x40);
static const System::Int8 IEDEFHEIGHT = System::Int8(0x40);
extern DELPHI_PACKAGE System::AnsiString IEVECTCLIPFORMAT_NAME;
extern DELPHI_PACKAGE System::AnsiString IEVMAGIC;
extern DELPHI_PACKAGE System::Byte IEVVER;
static const System::Int8 IEV_NEXT_INSERTED_OBJECT = System::Int8(-1);
static const System::Int8 IEV_PREVIOUS_INSERTED_OBJECT = System::Int8(-2);
static const System::Int8 IEV_ALL_SELECTED_OBJECTS = System::Int8(-9);
extern DELPHI_PACKAGE int IEVECTCLIPFORMAT;
extern DELPHI_PACKAGE bool __fastcall IETryIEV(System::Classes::TStream* Stream);
extern DELPHI_PACKAGE bool __fastcall IETryALL(System::Classes::TStream* Stream);
extern DELPHI_PACKAGE void __fastcall IEVRegisterExtendedObject(System::TClass classType, System::AnsiString name);
extern DELPHI_PACKAGE void __fastcall IEVRemoveExtendedObjects(void);
extern DELPHI_PACKAGE TIEExtendedObject* __fastcall IEVCreateExtendedObject(System::AnsiString name);
extern DELPHI_PACKAGE System::AnsiString __fastcall IEVGetExtendedObjectName(System::TClass classType);
extern DELPHI_PACKAGE void __fastcall IEInitialize_ievect(void);
extern DELPHI_PACKAGE void __fastcall IEFinalize_ievect(void);
}	/* namespace Ievect */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_IEVECT)
using namespace Ievect;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// IevectHPP
