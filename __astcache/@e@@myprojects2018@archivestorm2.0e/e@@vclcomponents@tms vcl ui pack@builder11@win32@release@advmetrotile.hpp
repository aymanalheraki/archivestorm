// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AdvMetroTile.pas' rev: 35.00 (Windows)

#ifndef AdvmetrotileHPP
#define AdvmetrotileHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <Winapi.Windows.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Graphics.hpp>
#include <Winapi.Messages.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <System.SysUtils.hpp>
#include <System.Math.hpp>
#include <Vcl.ActnList.hpp>
#include <GDIPicture.hpp>
#include <AdvGDIP.hpp>
#include <AdvStyleIF.hpp>
#include <AdvMetroRes.hpp>
#include <System.Types.hpp>
#include <PictureContainer.hpp>
#include <Vcl.ImgList.hpp>
#include <System.UITypes.hpp>
#include <System.Actions.hpp>
#include <Vcl.Menus.hpp>

//-- user supplied -----------------------------------------------------------

namespace Advmetrotile
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TMetroTileAppearance;
class DELPHICLASS TAdvMetroTileActionLink;
class DELPHICLASS TAdvCustomMetroTile;
class DELPHICLASS TAdvMetroTile;
class DELPHICLASS TWinCtrl;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TAdvToolButtonStyle : unsigned char { tasButton, tasCheck };

enum DECLSPEC_DENUM TAdvButtonState : unsigned char { absUp, absDisabled, absDown, absDropDown, absExclusive };

enum DECLSPEC_DENUM TTileLayout : unsigned char { tlPicLeft, tlPicRight, tlPicTop, tlPicBottom, tlPicBackground };

enum DECLSPEC_DENUM TTextVertAlignment : unsigned char { ttvaCenter, ttvaTop, ttvaBottom };

class PASCALIMPLEMENTATION TMetroTileAppearance : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	System::Classes::TNotifyEvent FOnChange;
	System::Uitypes::TColor FHoverBorderColor;
	System::Uitypes::TColor FHoverTextColor;
	System::Uitypes::TColor FDownBorderColor;
	System::Uitypes::TColor FHoverColor;
	System::Uitypes::TColor FDownTextColor;
	System::Uitypes::TColor FDownColor;
	System::Uitypes::TColor FBorderColor;
	System::Uitypes::TColor FTextColor;
	System::Uitypes::TColor FColor;
	System::Uitypes::TColor FDisabledColor;
	System::Uitypes::TColor FDisabledBorderColor;
	System::Uitypes::TColor FDisabledTextColor;
	void __fastcall SetBorderColor(const System::Uitypes::TColor Value);
	void __fastcall SetColor(const System::Uitypes::TColor Value);
	void __fastcall SetTextColor(const System::Uitypes::TColor Value);
	
protected:
	void __fastcall Changed();
	
public:
	__fastcall TMetroTileAppearance();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	
__published:
	__property System::Uitypes::TColor Color = {read=FColor, write=SetColor, default=16777215};
	__property System::Uitypes::TColor BorderColor = {read=FBorderColor, write=SetBorderColor, default=0};
	__property System::Uitypes::TColor TextColor = {read=FTextColor, write=SetTextColor, default=0};
	__property System::Uitypes::TColor HoverColor = {read=FHoverColor, write=FHoverColor, nodefault};
	__property System::Uitypes::TColor HoverBorderColor = {read=FHoverBorderColor, write=FHoverBorderColor, nodefault};
	__property System::Uitypes::TColor HoverTextColor = {read=FHoverTextColor, write=FHoverTextColor, nodefault};
	__property System::Uitypes::TColor DownColor = {read=FDownColor, write=FDownColor, nodefault};
	__property System::Uitypes::TColor DownBorderColor = {read=FDownBorderColor, write=FDownBorderColor, nodefault};
	__property System::Uitypes::TColor DownTextColor = {read=FDownTextColor, write=FDownTextColor, nodefault};
	__property System::Uitypes::TColor DisabledColor = {read=FDisabledColor, write=FDisabledColor, nodefault};
	__property System::Uitypes::TColor DisabledBorderColor = {read=FDisabledBorderColor, write=FDisabledBorderColor, nodefault};
	__property System::Uitypes::TColor DisabledTextColor = {read=FDisabledTextColor, write=FDisabledTextColor, nodefault};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TMetroTileAppearance() { }
	
};


class PASCALIMPLEMENTATION TAdvMetroTileActionLink : public Vcl::Controls::TControlActionLink
{
	typedef Vcl::Controls::TControlActionLink inherited;
	
protected:
	TAdvCustomMetroTile* FClient;
	virtual void __fastcall AssignClient(System::TObject* AClient);
	virtual bool __fastcall IsCheckedLinked();
	virtual bool __fastcall IsGroupIndexLinked();
	virtual void __fastcall SetGroupIndex(int Value);
	virtual void __fastcall SetChecked(bool Value);
public:
	/* TBasicActionLink.Create */ inline __fastcall virtual TAdvMetroTileActionLink(System::TObject* AClient) : Vcl::Controls::TControlActionLink(AClient) { }
	/* TBasicActionLink.Destroy */ inline __fastcall virtual ~TAdvMetroTileActionLink() { }
	
};


class PASCALIMPLEMENTATION TAdvCustomMetroTile : public Vcl::Controls::TCustomControl
{
	typedef Vcl::Controls::TCustomControl inherited;
	
private:
	int FGroupIndex;
	bool FDown;
	bool FAllowAllUp;
	bool FMouseInControl;
	bool FHot;
	System::Classes::TNotifyEvent FOnMouseLeave;
	System::Classes::TNotifyEvent FOnMouseEnter;
	TAdvToolButtonStyle FStyle;
	TAdvButtonState FState;
	bool FMouseDownInControl;
	bool FGrouped;
	bool FDragging;
	bool FPropHot;
	Vcl::Extctrls::TTimer* FUnHotTimer;
	bool FInitialDown;
	Gdipicture::TGDIPPicture* FIPicture;
	bool FShowFocusRect;
	bool FActive;
	TMetroTileAppearance* FAppearance;
	bool FShowCircle;
	bool FDefault;
	bool FCancel;
	System::Uitypes::TModalResult FModalResult;
	Vcl::Controls::TCaption FCaption;
	bool FPictureAutoColor;
	Picturecontainer::TPictureContainer* FPictureContainer;
	Vcl::Imglist::TCustomImageList* FImageList;
	bool FPictureAutoSize;
	int FPictureMarginHorz;
	int FPictureMarginVert;
	TTileLayout FLayout;
	int FTextMarginVert;
	int FTextMarginHorz;
	TTextVertAlignment FTextVertAlign;
	int FZoomOnHover;
	Vcl::Forms::TFormBorderStyle FBorderStyle;
	bool FPictureAutoBrighten;
	bool FFormScaled;
	void __fastcall UnHotTimerOnTime(System::TObject* Sender);
	void __fastcall UpdateExclusive();
	void __fastcall UpdateTracking();
	void __fastcall ButtonDown();
	void __fastcall OnPictureChanged(System::TObject* Sender);
	MESSAGE void __fastcall CNCommand(Winapi::Messages::TWMCommand &Message);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TWMEraseBkgnd &Message);
	HIDESBASE MESSAGE void __fastcall CMFocusChanged(Vcl::Controls::TCMFocusChanged &Message);
	HIDESBASE MESSAGE void __fastcall CMHintShow(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMEnabledChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMDialogKey(Winapi::Messages::TWMKey &Message);
	HIDESBASE MESSAGE void __fastcall CMDialogChar(Winapi::Messages::TWMKey &Message);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMLButtonUp(Winapi::Messages::TWMMouse &Msg);
	HIDESBASE MESSAGE void __fastcall WMPaint(Winapi::Messages::TWMPaint &Message);
	MESSAGE void __fastcall CMButtonPressed(Winapi::Messages::TMessage &Message);
	void __fastcall SetDown(bool Value);
	void __fastcall SetAllowAllUp(bool Value);
	void __fastcall SetGroupIndex(int Value);
	void __fastcall SetStyle(const TAdvToolButtonStyle Value);
	void __fastcall SetState(const TAdvButtonState Value);
	void __fastcall SetGrouped(const bool Value);
	System::UnicodeString __fastcall GetVersion();
	void __fastcall SetVersion(const System::UnicodeString Value);
	bool __fastcall GetHot();
	void __fastcall SetHot(const bool Value);
	void __fastcall SetIPicture(Gdipicture::TGDIPPicture* const Value);
	void __fastcall SetShowFocusRect(const bool Value);
	void __fastcall OnAppearanceChanged(System::TObject* Sender);
	void __fastcall SetAppearance(TMetroTileAppearance* const Value);
	void __fastcall SetShowCircle(const bool Value);
	void __fastcall SetDefault(const bool Value);
	void __fastcall SetCaption(const Vcl::Controls::TCaption Value);
	void __fastcall SetPictureAutoColor(const bool Value);
	void __fastcall SetImageList(Vcl::Imglist::TCustomImageList* const Value);
	void __fastcall SetPictureAutoSize(const bool Value);
	void __fastcall SetPictureContainer(Picturecontainer::TPictureContainer* const Value);
	void __fastcall SetLayout(const TTileLayout Value);
	void __fastcall SetPictureMarginHorz(const int Value);
	void __fastcall SetPictureMarginVert(const int Value);
	void __fastcall SetTextMarginHorz(const int Value);
	void __fastcall SetTextMarginVert(const int Value);
	void __fastcall SetBorderStyle(const Vcl::Forms::TBorderStyle Value);
	void __fastcall SetZoomOnHover(const int Value);
	
protected:
	virtual void __fastcall SetParent(Vcl::Controls::TWinControl* AParent);
	DYNAMIC Vcl::Controls::TControlActionLinkClass __fastcall GetActionLinkClass();
	DYNAMIC void __fastcall ActionChange(System::TObject* Sender, bool CheckDefaults);
	virtual void __fastcall Loaded();
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation AOperation);
	void __fastcall DrawButton();
	virtual void __fastcall DrawButtonContent(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &R);
	void __fastcall DrawMetroPicture(Advgdip::TGPGraphics* g, Gdipicture::TGDIPPicture* Pic, unsigned PicClr, const System::Types::TRect &DR, bool ColorAdapt, bool AutoSize);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	virtual void __fastcall Paint();
	DYNAMIC void __fastcall DoEnter();
	DYNAMIC void __fastcall DoExit();
	void __fastcall RefreshContent();
	__property bool MouseInControl = {read=FMouseInControl, nodefault};
	__property TAdvButtonState State = {read=FState, write=SetState, nodefault};
	__property Action;
	__property bool AllowAllUp = {read=FAllowAllUp, write=SetAllowAllUp, default=0};
	__property Anchors = {default=3};
	__property BiDiMode;
	__property Vcl::Forms::TBorderStyle BorderStyle = {read=FBorderStyle, write=SetBorderStyle, default=1};
	__property bool ShowFocusRect = {read=FShowFocusRect, write=SetShowFocusRect, default=0};
	__property bool Cancel = {read=FCancel, write=FCancel, default=0};
	__property Vcl::Controls::TCaption Caption = {read=FCaption, write=SetCaption};
	__property bool Default = {read=FDefault, write=SetDefault, default=0};
	__property System::Uitypes::TModalResult ModalResult = {read=FModalResult, write=FModalResult, default=0};
	__property Constraints;
	__property bool Grouped = {read=FGrouped, write=SetGrouped, default=0};
	__property int GroupIndex = {read=FGroupIndex, write=SetGroupIndex, default=0};
	__property bool Down = {read=FDown, write=SetDown, default=0};
	__property Enabled = {default=1};
	__property Font;
	__property bool Hot = {read=GetHot, write=SetHot, default=0};
	__property TMetroTileAppearance* Appearance = {read=FAppearance, write=SetAppearance};
	__property Vcl::Imglist::TCustomImageList* Images = {read=FImageList, write=SetImageList};
	__property TTileLayout Layout = {read=FLayout, write=SetLayout, default=2};
	__property Gdipicture::TGDIPPicture* Picture = {read=FIPicture, write=SetIPicture};
	__property bool PictureAutoBrighten = {read=FPictureAutoBrighten, write=FPictureAutoBrighten, default=0};
	__property bool PictureAutoColor = {read=FPictureAutoColor, write=SetPictureAutoColor, default=1};
	__property bool PictureAutoSize = {read=FPictureAutoSize, write=SetPictureAutoSize, default=1};
	__property Picturecontainer::TPictureContainer* PictureContainer = {read=FPictureContainer, write=SetPictureContainer};
	__property int PictureMarginVert = {read=FPictureMarginVert, write=SetPictureMarginVert, default=2};
	__property int PictureMarginHorz = {read=FPictureMarginHorz, write=SetPictureMarginHorz, default=2};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property ParentBiDiMode = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property bool ShowCircle = {read=FShowCircle, write=SetShowCircle, default=0};
	__property TAdvToolButtonStyle Style = {read=FStyle, write=SetStyle, default=0};
	__property int TextMarginHorz = {read=FTextMarginHorz, write=SetTextMarginHorz, default=2};
	__property int TextMarginVert = {read=FTextMarginVert, write=SetTextMarginVert, default=2};
	__property TTextVertAlignment TextVertAlign = {read=FTextVertAlign, write=FTextVertAlign, default=0};
	__property System::UnicodeString Version = {read=GetVersion, write=SetVersion};
	__property Visible = {default=1};
	__property int ZoomOnHover = {read=FZoomOnHover, write=SetZoomOnHover, default=0};
	__property OnClick;
	__property OnDblClick;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnKeyDown;
	__property OnKeyUp;
	__property OnKeyPress;
	__property System::Classes::TNotifyEvent OnMouseEnter = {read=FOnMouseEnter, write=FOnMouseEnter};
	__property System::Classes::TNotifyEvent OnMouseLeave = {read=FOnMouseLeave, write=FOnMouseLeave};
	
public:
	__fastcall virtual TAdvCustomMetroTile(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TAdvCustomMetroTile();
	DYNAMIC void __fastcall Click();
	virtual void __fastcall CreateWnd();
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	void __fastcall SetColorTones(const Advstyleif::TColorTones &ATones);
	virtual int __fastcall GetVersionNr();
public:
	/* TWinControl.CreateParented */ inline __fastcall TAdvCustomMetroTile(HWND ParentWindow) : Vcl::Controls::TCustomControl(ParentWindow) { }
	
private:
	void *__ITMSTones;	// Advstyleif::ITMSTones 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {1F492643-6699-4F25-8B34-3233FA735036}
	operator Advstyleif::_di_ITMSTones()
	{
		Advstyleif::_di_ITMSTones intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Advstyleif::ITMSTones*(void) { return (Advstyleif::ITMSTones*)&__ITMSTones; }
	#endif
	
};


class PASCALIMPLEMENTATION TAdvMetroTile : public TAdvCustomMetroTile
{
	typedef TAdvCustomMetroTile inherited;
	
__published:
	__property Action;
	__property Align = {default=0};
	__property AllowAllUp = {default=0};
	__property Anchors = {default=3};
	__property Appearance;
	__property BorderStyle = {default=1};
	__property Cancel = {default=0};
	__property Caption;
	__property Constraints;
	__property Default = {default=0};
	__property Down = {default=0};
	__property DragKind = {default=0};
	__property DragCursor = {default=-12};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property GroupIndex = {default=0};
	__property Images;
	__property Layout = {default=2};
	__property ModalResult = {default=0};
	__property Picture;
	__property PictureAutoBrighten = {default=0};
	__property PictureAutoColor = {default=1};
	__property PictureAutoSize = {default=1};
	__property PictureContainer;
	__property PictureMarginHorz = {default=2};
	__property PictureMarginVert = {default=2};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property ParentBiDiMode = {default=1};
	__property PopupMenu;
	__property ShowFocusRect = {default=0};
	__property ShowHint;
	__property Style = {default=0};
	__property TabOrder = {default=-1};
	__property TabStop = {default=0};
	__property TextMarginHorz = {default=2};
	__property TextMarginVert = {default=2};
	__property TextVertAlign = {default=0};
	__property Version = {default=0};
	__property Visible = {default=1};
	__property ZoomOnHover = {default=0};
	__property OnClick;
	__property OnContextPopup;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnStartDock;
	__property OnStartDrag;
public:
	/* TAdvCustomMetroTile.Create */ inline __fastcall virtual TAdvMetroTile(System::Classes::TComponent* AOwner) : TAdvCustomMetroTile(AOwner) { }
	/* TAdvCustomMetroTile.Destroy */ inline __fastcall virtual ~TAdvMetroTile() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TAdvMetroTile(HWND ParentWindow) : TAdvCustomMetroTile(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TWinCtrl : public Vcl::Controls::TWinControl
{
	typedef Vcl::Controls::TWinControl inherited;
	
public:
	void __fastcall PaintCtrls(HDC DC, Vcl::Controls::TControl* First);
public:
	/* TWinControl.Create */ inline __fastcall virtual TWinCtrl(System::Classes::TComponent* AOwner) : Vcl::Controls::TWinControl(AOwner) { }
	/* TWinControl.CreateParented */ inline __fastcall TWinCtrl(HWND ParentWindow) : Vcl::Controls::TWinControl(ParentWindow) { }
	/* TWinControl.Destroy */ inline __fastcall virtual ~TWinCtrl() { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::Int8 MAJ_VER = System::Int8(0x1);
static const System::Int8 MIN_VER = System::Int8(0x1);
static const System::Int8 REL_VER = System::Int8(0x4);
static const System::Int8 BLD_VER = System::Int8(0x0);
}	/* namespace Advmetrotile */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ADVMETROTILE)
using namespace Advmetrotile;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AdvmetrotileHPP
