// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'ieview.pas' rev: 35.00 (Windows)

#ifndef IeviewHPP
#define IeviewHPP

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
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <iexBitmaps.hpp>
#include <System.UITypes.hpp>
#include <hyiedefs.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

namespace Ieview
{
//-- forward type declarations -----------------------------------------------
struct TWMPointerUpdate;
class DELPHICLASS TIEScrollBarParams;
class DELPHICLASS TIEMouseWheelParams;
class DELPHICLASS TIEView;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TIETask : unsigned char { ietUnknown, ietLoading, ietSaving, ietOtherIO, ietAcquisition, ietPrinting, ietFilling, ietProcessing, ietAnalysis, ietResampling, ietRotating, ietLayers, ietSearching };

typedef POINTER_INPUT_TYPE *PPointerInputType;

typedef POINTER_INPUT_TYPE TPointerInputType;

typedef POINTER_FLAGS *PPointerFlags;

typedef POINTER_FLAGS TPointerFlags;

typedef tagPOINTER_BUTTON_CHANGE_TYPE TPointerButtonChangeType;

typedef tagPOINTER_INFO *PPointerInfo;

typedef tagPOINTER_INFO TPointerInfo;

typedef PEN_FLAGS *PPenFlags;

typedef PEN_FLAGS TPenFlags;

typedef PEN_MASK *PPenMask;

typedef PEN_MASK TPenMask;

typedef tagPOINTER_PEN_INFO *PPointerPenInfo;

typedef tagPOINTER_PEN_INFO TPointerPenInfo;

enum DECLSPEC_DENUM Ieview__1 : unsigned char { ptrNew, ptrInRange, ptrContact, ptrPrimaryAction, ptrSecondaryAction, ptrThirdButton, ptrFourthButton, ptrFifthButton, ptrPrimaryPointer, ptrConfident, ptrCanceled };

typedef System::Set<Ieview__1, Ieview__1::ptrNew, Ieview__1::ptrCanceled> TIEPointerFlags;

struct DECLSPEC_DRECORD TWMPointerUpdate
{
public:
	unsigned Msg;
	System::Word PointerID;
	System::Word Flag;
	
public:
	union
	{
		struct 
		{
			System::Types::TSmallPoint Pos;
			NativeInt Result;
		};
		struct 
		{
			short XPos;
			short YPos;
		};
		
	};
};


enum DECLSPEC_DENUM TIEPointerEventType : unsigned char { iepeDown, iepeMove, iepeUp, iepeHover, iepeOther };

typedef void __fastcall (__closure *TIEPointerEvent)(System::TObject* Sender, TIEPointerEventType Event, System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y, int Pressure);

typedef void __fastcall (__closure *TIEPointerExEvent)(System::TObject* Sender, TIEPointerEventType &Event, System::Uitypes::TMouseButton &Button, System::Classes::TShiftState &Shift, int X, int Y, int Pressure, TIEPointerFlags Flags, const tagPOINTER_PEN_INFO &Info);

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEScrollBarParams : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	int fLineStep;
	int fPageStep;
	bool fTracking;
	
public:
	__fastcall TIEScrollBarParams();
	__fastcall virtual ~TIEScrollBarParams();
	__property int LineStep = {read=fLineStep, write=fLineStep, nodefault};
	__property int PageStep = {read=fPageStep, write=fPageStep, nodefault};
	__property bool Tracking = {read=fTracking, write=fTracking, nodefault};
};

#pragma pack(pop)

enum DECLSPEC_DENUM TIEMouseWheelParamsAction : unsigned char { iemwNone, iemwVScroll, iemwZoom, iemwNavigate, iemwZoomView };

enum DECLSPEC_DENUM TIEMouseWheelParamsVariation : unsigned char { iemwAbsolute, iemwPercentage };

enum DECLSPEC_DENUM TIEMouseWheelParamsZoomPosition : unsigned char { iemwCenter, iemwMouse };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEMouseWheelParams : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	bool fInvertDirection;
	TIEMouseWheelParamsAction fAction;
	TIEMouseWheelParamsAction fActionDefault;
	TIEMouseWheelParamsVariation fVariation;
	int fValue;
	TIEMouseWheelParamsZoomPosition fZoomPosition;
	bool __fastcall IsActionStored();
	
public:
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__fastcall TIEMouseWheelParams(TIEMouseWheelParamsAction DefaultAction);
	__fastcall virtual ~TIEMouseWheelParams();
	
__published:
	__property bool InvertDirection = {read=fInvertDirection, write=fInvertDirection, default=0};
	__property TIEMouseWheelParamsAction Action = {read=fAction, write=fAction, stored=IsActionStored, nodefault};
	__property TIEMouseWheelParamsVariation Variation = {read=fVariation, write=fVariation, default=1};
	__property int Value = {read=fValue, write=fValue, default=8};
	__property TIEMouseWheelParamsZoomPosition ZoomPosition = {read=fZoomPosition, write=fZoomPosition, default=0};
};

#pragma pack(pop)

enum DECLSPEC_DENUM TIECursorShape : unsigned char { iecsDefault, iecsCircle, iecsRectangle, iecsRoundRect };

enum DECLSPEC_DENUM TIEViewMode : unsigned char { ievViewing, ievEditing, ievLayerEditing, ievSelection, ievLayerSelection, ievPdfViewing, ievPdfEditing };

typedef System::Set<TIEViewMode, TIEViewMode::ievViewing, TIEViewMode::ievPdfEditing> TIEViewModes;

enum DECLSPEC_DENUM TIEVButton : unsigned char { iebtPrevious, iebtNext, iebtZoomIn, iebtZoomOut };

typedef System::Set<TIEVButton, TIEVButton::iebtPrevious, TIEVButton::iebtZoomOut> TIEVButtons;

typedef void __fastcall (__closure *TIEVButtonClickEvent)(System::TObject* Sender, TIEVButton Button, System::Uitypes::TMouseButton MouseButton, System::Classes::TShiftState Shift, bool &Handled);

typedef void __fastcall (__closure *TIEVButtonStateEvent)(System::TObject* Sender, TIEVButton Button, bool &Visible, bool &Enabled);

enum DECLSPEC_DENUM TIEChangeType : unsigned char { iectGeneral, iectDestroying, iectImageChange, iectLayerSelection, iectMViewContent, iectDocChange };

typedef void __fastcall (__closure *TIEBitmapChangeEvent)(System::TObject* Sender, TIEChangeType Change);

typedef TIEBitmapChangeEvent *PIEBitmapChangeEvent;

enum DECLSPEC_DENUM TIEUpdateReason : unsigned char { ieurDefault, ieurScrolled, ieurZoomed, ieurSelectionChanged, ieurComponentStuffChanged, ieurImageEdited, ieurIO };

enum DECLSPEC_DENUM TIEDlgType : unsigned char { iefLayerProperties, iefProcPreview, iefPrintPreview, iefMaxiPrintPreview, iefMultiPrintPreview, iefIOPreview, iefAcquireSource, iefMultiSavePreview, iefBrushProperties };

typedef void __fastcall (__closure *TOnShowDialogEvent)(System::TObject* Sender, TIEDlgType DlgType, Vcl::Forms::TForm* Form);

typedef void __fastcall (__closure *TIEActionExecuteEvent)(System::TObject* Sender, System::TObject* Action, int ID);

enum DECLSPEC_DENUM TIEWallpaperStyle : unsigned char { iewoNormal, iewoStretch, iewoTile };

enum DECLSPEC_DENUM TIEDesignTimeView : unsigned char { dvBlank, dvDemoPreview, dvLivePreview };

typedef void __fastcall (__closure *TIEZoomEvent)(System::TObject* Sender, double &NewZoom);

class PASCALIMPLEMENTATION TIEView : public Vcl::Controls::TCustomControl
{
	typedef Vcl::Controls::TCustomControl inherited;
	
private:
	Vcl::Forms::TFormBorderStyle fBorderStyle;
	System::Classes::TList* fBmpChange;
	System::Classes::TNotifyEvent fOnMouseEnter;
	System::Classes::TNotifyEvent fOnMouseLeave;
	TIEUpdateReason fUpdateReason;
	TOnShowDialogEvent fOnShowDialog;
	TIEActionExecuteEvent fOnActionExecute;
	TIEMouseWheelParams* fMouseWheelParams;
	TIEMouseWheelParams* fMouseWheelParamsAlt;
	bool fFlatScrollBars;
	void __fastcall SetDrawVersion(bool v);
	void __fastcall SetDesignPreview(TIEDesignTimeView v);
	void __fastcall SetBorderStyle(Vcl::Forms::TBorderStyle Value);
	void __fastcall SetMouseWheelParams(TIEMouseWheelParams* v);
	void __fastcall SetMouseWheelParamsAlt(TIEMouseWheelParams* v);
	void __fastcall SetScrollBarsAlwaysVisible(bool v);
	System::Uitypes::TScrollStyle __fastcall GetCurrentScrollBars();
	bool __fastcall GetCtl3D();
	HIDESBASE void __fastcall SetCtl3D(bool v);
	void __fastcall SetGradientEndColor(System::Uitypes::TColor v);
	void __fastcall SetBackgroundColor2(System::Uitypes::TColor v);
	void __fastcall SetWallpaper(Vcl::Graphics::TPicture* v);
	void __fastcall SetWallpaperStyle(TIEWallpaperStyle v);
	void __fastcall SetBackgroundStyle(Hyiedefs::TIEBackgroundStyle v);
	
protected:
	bool fInitialized;
	bool fDrawVersion;
	TIEDesignTimeView fDesignPreview;
	System::Uitypes::TColor fBackground;
	Hyiedefs::TIEBackgroundStyle fBackgroundStyle;
	System::Uitypes::TColor fGradientEndColor;
	System::Uitypes::TColor fBackgroundColor2;
	int fChessboardSize;
	Vcl::Graphics::TBrushStyle fChessboardBrushStyle;
	TIEZoomEvent fOnZoomIn;
	TIEZoomEvent fOnZoomOut;
	Vcl::Graphics::TPicture* fWallpaper;
	TIEWallpaperStyle fWallpaperStyle;
	System::Uitypes::TScrollStyle fScrollBars;
	bool fHScrollBarVisible;
	TIEScrollBarParams* fHScrollBarParams;
	bool fVScrollBarVisible;
	TIEScrollBarParams* fVScrollBarParams;
	bool fScrollBarsAlwaysVisible;
	virtual void __fastcall CreateWnd();
	virtual void __fastcall Initialize() = 0 ;
	bool __fastcall csDesigning_in_ComponentState_Ex();
	virtual void __fastcall SetBackground(System::Uitypes::TColor cl);
	virtual Vcl::Graphics::TBitmap* __fastcall GetFBitmap();
	virtual Iexbitmaps::TIEBitmap* __fastcall GetIEBitmap();
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMNCPaint(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMMouseWheel(Winapi::Messages::TMessage &Message);
	virtual void __fastcall DoWMMouseWheel(int Direction, int MouseX, int MouseY) = 0 ;
	virtual void __fastcall ShowDesignPreview(TIEDesignTimeView PreviewMode = (TIEDesignTimeView)(0x1), int Count = 0xffffffff) = 0 ;
	void __fastcall UpdateScrollbar(System::Uitypes::TScrollStyle SB, double PageSize, double nPos, bool Enab = true);
	void __fastcall ShowScrollBar(System::Uitypes::TScrollStyle SB, bool bShow);
	virtual void __fastcall SetScrollBars(System::Uitypes::TScrollStyle v);
	
public:
	virtual void __fastcall LockPaint() = 0 ;
	virtual int __fastcall UnlockPaint() = 0 ;
	virtual int __fastcall NPUnlockPaint() = 0 ;
	virtual void __fastcall ImageChange(int ChangeSource);
	__fastcall virtual TIEView(System::Classes::TComponent* Owner);
	__fastcall virtual ~TIEView();
	__property Vcl::Graphics::TBitmap* Bitmap = {read=GetFBitmap};
	__property Iexbitmaps::TIEBitmap* IEBitmap = {read=GetIEBitmap};
	virtual void __fastcall CallBitmapChangeEvents(TIEChangeType Change = (TIEChangeType)(0x0));
	void * __fastcall RegisterBitmapChangeEvent(TIEBitmapChangeEvent callbackMethod);
	void __fastcall RemoveBitmapChangeEvent(void * callbackHandle);
	Vcl::Graphics::TCanvas* __fastcall GetCanvas();
	__property TIEUpdateReason UpdateReason = {read=fUpdateReason, write=fUpdateReason, nodefault};
	__property bool FlatScrollBars = {read=fFlatScrollBars, write=fFlatScrollBars, nodefault};
	__property System::Uitypes::TScrollStyle CurrentScrollBars = {read=GetCurrentScrollBars, nodefault};
	__property bool ScrollBarsAlwaysVisible = {read=fScrollBarsAlwaysVisible, write=SetScrollBarsAlwaysVisible, default=0};
	__property TIEScrollBarParams* VScrollBarParams = {read=fVScrollBarParams};
	__property TIEScrollBarParams* HScrollBarParams = {read=fHScrollBarParams};
	void __fastcall SetChessboardStyle(int Size = 0x10, Vcl::Graphics::TBrushStyle BrushStyle = (Vcl::Graphics::TBrushStyle)(0x0), System::Uitypes::TColor Color1 = (System::Uitypes::TColor)(0x1fffffff), System::Uitypes::TColor Color2 = (System::Uitypes::TColor)(0x1fffffff));
	
__published:
	__property bool DrawVersion = {read=fDrawVersion, write=SetDrawVersion, default=0};
	__property TIEDesignTimeView DesignTimeView = {read=fDesignPreview, write=SetDesignPreview, default=1};
	__property System::Uitypes::TColor Background = {read=fBackground, write=SetBackground, nodefault};
	__property Hyiedefs::TIEBackgroundStyle BackgroundStyle = {read=fBackgroundStyle, write=SetBackgroundStyle, default=0};
	__property System::Uitypes::TColor GradientEndColor = {read=fGradientEndColor, write=SetGradientEndColor, default=-16777200};
	__property System::Uitypes::TColor BackgroundColor2 = {read=fBackgroundColor2, write=SetBackgroundColor2, default=536870911};
	__property Vcl::Graphics::TPicture* Wallpaper = {read=fWallpaper, write=SetWallpaper};
	__property TIEWallpaperStyle WallpaperStyle = {read=fWallpaperStyle, write=SetWallpaperStyle, default=0};
	__property TIEMouseWheelParams* MouseWheelParams = {read=fMouseWheelParams, write=SetMouseWheelParams};
	__property TIEMouseWheelParams* MouseWheelParamsAlt = {read=fMouseWheelParamsAlt, write=SetMouseWheelParamsAlt};
	__property Ctl3D = {read=GetCtl3D, write=SetCtl3D, default=0};
	__property ParentCtl3D = {default=0};
	__property System::Classes::TNotifyEvent OnMouseEnter = {read=fOnMouseEnter, write=fOnMouseEnter};
	__property System::Classes::TNotifyEvent OnMouseLeave = {read=fOnMouseLeave, write=fOnMouseLeave};
	__property TIEZoomEvent OnZoomIn = {read=fOnZoomIn, write=fOnZoomIn};
	__property TIEZoomEvent OnZoomOut = {read=fOnZoomOut, write=fOnZoomOut};
	__property TOnShowDialogEvent OnShowDialog = {read=fOnShowDialog, write=fOnShowDialog};
	__property TIEActionExecuteEvent OnActionExecute = {read=fOnActionExecute, write=fOnActionExecute};
	__property System::Uitypes::TScrollStyle ScrollBars = {read=fScrollBars, write=SetScrollBars, default=3};
	__property Vcl::Forms::TBorderStyle BorderStyle = {read=fBorderStyle, write=SetBorderStyle, default=1};
	__property OnEnter;
	__property OnExit;
	__property OnResize;
	__property StyleElements = {default=7};
	__property StyleName = {default=0};
	__property Touch;
public:
	/* TWinControl.CreateParented */ inline __fastcall TIEView(HWND ParentWindow) : Vcl::Controls::TCustomControl(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::Word SCROLLBAR_MAX = System::Word(0xffff);
static const System::Word Max_Pressure = System::Word(0x400);
static const System::Int8 iecsIO = System::Int8(0x0);
static const System::Int8 iecsProc = System::Int8(0x1);
static const System::Int8 iecsBitmap = System::Int8(0x2);
static const System::Int8 iecsLayer = System::Int8(0x3);
extern DELPHI_PACKAGE void __fastcall IEDrawBackground(Vcl::Graphics::TCanvas* Canvas, Vcl::Graphics::TBitmap* Bitmap, Hyiedefs::TIEBackgroundStyle BackgroundStyle, System::Uitypes::TColor Background, System::Uitypes::TColor BackgroundColor2, int DestX, int DestY, int Width, int Height, int x1, int y1, int x2, int y2, int ChessboardSize, Vcl::Graphics::TBrushStyle ChessboardBrushStyle, System::Uitypes::TColor GradientEndColor, Vcl::Graphics::TPicture* Wallpaper, TIEWallpaperStyle WallpaperStyle, Iexbitmaps::TIEBitmap* LiveBackground, bool HonorClippingRect, Vcl::Controls::TControl* AControl = (Vcl::Controls::TControl*)(0x0), bool DesigningState = false);
extern DELPHI_PACKAGE void __fastcall IESetScrollBar(HWND hWnd, int nBar, int nMinPos, int nMaxPos, double PageSize, double nPos, bool bRedraw = true, bool ShowDisabled = false);
extern DELPHI_PACKAGE int __fastcall IESetScrollPos(HWND hWnd, int nBar, double nPos, bool bRedraw = true);
extern DELPHI_PACKAGE System::LongBool __fastcall IEShowScrollBar(HWND hWnd, int wBar, System::LongBool bShow);
extern DELPHI_PACKAGE System::LongBool __fastcall IEEnableScrollBar(HWND hWnd, unsigned SB, bool Enab);
}	/* namespace Ieview */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_IEVIEW)
using namespace Ieview;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// IeviewHPP
