// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AdvGroupBox.pas' rev: 35.00 (Windows)

#ifndef AdvgroupboxHPP
#define AdvgroupboxHPP

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
#include <Vcl.StdCtrls.hpp>
#include <Vcl.ImgList.hpp>
#include <AdvStyleIF.hpp>
#include <System.UITypes.hpp>
#include <Vcl.Menus.hpp>

//-- user supplied -----------------------------------------------------------

namespace Advgroupbox
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TWinCtrl;
class DELPHICLASS TGroupBoxCheck;
class DELPHICLASS TAdvCustomGroupBox;
class DELPHICLASS TAdvGroupBox;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TCaptionPosition : unsigned char { cpTopLeft, cpTopRight, cpTopCenter, cpBottomLeft, cpBottomRight, cpBottomCenter };

enum DECLSPEC_DENUM TBorderStyle : unsigned char { bsNone, bsSingle, bsDouble };

enum DECLSPEC_DENUM TCheckBoxPos : unsigned char { cpLeft, cpRight };

enum DECLSPEC_DENUM TCheckBoxAction : unsigned char { caNone, caDisable, caCheckAll, caControlsDisable };

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


class PASCALIMPLEMENTATION TGroupBoxCheck : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	System::UnicodeString FHint;
	Vcl::Stdctrls::TCheckBoxState FState;
	bool FThemed;
	bool FAllowGrayed;
	System::Classes::TNotifyEvent FOnChange;
	TCheckBoxAction FAction;
	TCheckBoxPos FPosition;
	bool FVisible;
	bool FHot;
	bool FDown;
	TAdvCustomGroupBox* FGroupBox;
	void __fastcall SetAction(const TCheckBoxAction Value);
	void __fastcall SetAllowGrayed(const bool Value);
	void __fastcall SetChecked(const bool Value);
	void __fastcall SetPosition(const TCheckBoxPos Value);
	void __fastcall SetState(const Vcl::Stdctrls::TCheckBoxState Value);
	void __fastcall SetThemed(const bool Value);
	void __fastcall SetVisible(const bool Value);
	void __fastcall SetDown(const bool Value);
	void __fastcall SetHot(const bool Value);
	bool __fastcall GetChecked();
	void __fastcall SetHint(const System::UnicodeString Value);
	
protected:
	void __fastcall Changed();
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property bool Down = {read=FDown, write=SetDown, default=0};
	__property bool Hot = {read=FHot, write=SetHot, default=0};
	__property TAdvCustomGroupBox* GroupBox = {read=FGroupBox};
	
public:
	__fastcall TGroupBoxCheck(TAdvCustomGroupBox* AOwner);
	__fastcall virtual ~TGroupBoxCheck();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property bool Checked = {read=GetChecked, write=SetChecked, default=0};
	__property TCheckBoxPos Position = {read=FPosition, write=SetPosition, default=0};
	__property TCheckBoxAction Action = {read=FAction, write=SetAction, default=1};
	__property System::UnicodeString Hint = {read=FHint, write=SetHint};
	__property bool AllowGrayed = {read=FAllowGrayed, write=SetAllowGrayed, default=0};
	__property Vcl::Stdctrls::TCheckBoxState State = {read=FState, write=SetState, default=0};
	__property bool Themed = {read=FThemed, write=SetThemed, default=1};
	__property bool Visible = {read=FVisible, write=SetVisible, default=0};
};


enum DECLSPEC_DENUM TGroupBoxAutoSize : unsigned char { gasNone, gasVertical, gasHorizontal, gasBoth };

class PASCALIMPLEMENTATION TAdvCustomGroupBox : public Vcl::Stdctrls::TCustomGroupBox
{
	typedef Vcl::Stdctrls::TCustomGroupBox inherited;
	
private:
	bool FTransparent;
	System::Uitypes::TColor FBorderColor;
	int FImageIndex;
	Vcl::Imglist::TCustomImageList* FImages;
	TBorderStyle FBorderStyle;
	TCaptionPosition FCaptionPosition;
	bool FRoundEdges;
	TGroupBoxCheck* FCheckBox;
	System::Classes::TNotifyEvent FOnCheckBoxClick;
	System::Uitypes::TColor FDisabledFontColor;
	Advstyleif::TTMSStyle FTMSStyle;
	bool FDesignTime;
	TGroupBoxAutoSize FAutoSize;
	Vcl::Graphics::TFont* FCaptionFont;
	bool FUseCaptionFont;
	bool FIsSizing;
	HIDESBASE MESSAGE void __fastcall CMEnabledChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMHintShow(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall CMColorChanged(Winapi::Messages::TMessage &Message);
	void __fastcall SetTransparent(const bool Value);
	void __fastcall SetBorderColor(const System::Uitypes::TColor Value);
	void __fastcall SetImageIndex(const int Value);
	void __fastcall SetImages(Vcl::Imglist::TCustomImageList* const Value);
	System::UnicodeString __fastcall GetVersion();
	void __fastcall SetVersion(const System::UnicodeString Value);
	void __fastcall SetBorderStyle(const TBorderStyle Value);
	void __fastcall SetCaptionPosition(const TCaptionPosition Value);
	void __fastcall SetRoundEdges(const bool Value);
	void __fastcall SetCheckBox(TGroupBoxCheck* const Value);
	void __fastcall OnCheckBoxChanged(System::TObject* Sender);
	virtual void __fastcall SetDisabledFontColor(const System::Uitypes::TColor Value);
	void __fastcall SetUIStyle(const Advstyleif::TTMSStyle Value);
	void __fastcall SetAutoSizeEx(const TGroupBoxAutoSize Value);
	void __fastcall SetCaptionFont(Vcl::Graphics::TFont* const Value);
	void __fastcall CaptionFontChanged(System::TObject* Sender);
	void __fastcall SetUseCaptionFont(const bool Value);
	
protected:
	virtual void __fastcall CreateWnd();
	virtual void __fastcall Loaded();
	virtual void __fastcall Paint();
	virtual void __fastcall PaintTransparency();
	virtual void __fastcall DisabledFontColorChanged();
	void __fastcall DrawCheck();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation AOperation);
	virtual void __fastcall AlignControls(Vcl::Controls::TControl* AControl, System::Types::TRect &Rect);
	virtual void __fastcall AdjustClientRect(System::Types::TRect &Rect);
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	int __fastcall GetCaptionHeight();
	System::Types::TRect __fastcall GetCaptionRect();
	int __fastcall GetBorderWidth();
	bool __fastcall HasCaption();
	System::Types::TRect __fastcall GetBorderRect();
	System::Types::TRect __fastcall CalculateRect(System::Types::TRect &CheckBoxR, System::Types::TRect &ImgTextR);
	System::Types::TRect __fastcall GetCheckBoxRect();
	void __fastcall ToggleCheck();
	bool __fastcall PtOnCaption(const System::Types::TPoint &P);
	virtual void __fastcall PerformCheckBoxAction();
	virtual void __fastcall DoGroupCheckClick();
	__property Vcl::Graphics::TFont* CaptionFont = {read=FCaptionFont, write=SetCaptionFont};
	__property TCaptionPosition CaptionPosition = {read=FCaptionPosition, write=SetCaptionPosition, default=0};
	__property TBorderStyle BorderStyle = {read=FBorderStyle, write=SetBorderStyle, default=1};
	__property System::Uitypes::TColor BorderColor = {read=FBorderColor, write=SetBorderColor, default=12632256};
	__property System::Uitypes::TColor DisabledFontColor = {read=FDisabledFontColor, write=SetDisabledFontColor, default=8421504};
	__property Vcl::Imglist::TCustomImageList* Images = {read=FImages, write=SetImages};
	__property int ImageIndex = {read=FImageIndex, write=SetImageIndex, default=-1};
	__property bool RoundEdges = {read=FRoundEdges, write=SetRoundEdges, default=0};
	__property bool Transparent = {read=FTransparent, write=SetTransparent, default=1};
	__property bool UseCaptionFont = {read=FUseCaptionFont, write=SetUseCaptionFont, default=0};
	__property System::UnicodeString Version = {read=GetVersion, write=SetVersion, stored=false};
	__property TGroupBoxCheck* CheckBox = {read=FCheckBox, write=SetCheckBox};
	__property System::Classes::TNotifyEvent OnCheckBoxClick = {read=FOnCheckBoxClick, write=FOnCheckBoxClick};
	void __fastcall DoAutoSize(TGroupBoxAutoSize sz);
	__property bool IsSizing = {read=FIsSizing, write=FIsSizing, nodefault};
	virtual void __fastcall AutoSizeControls();
	
public:
	__fastcall virtual TAdvCustomGroupBox(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TAdvCustomGroupBox();
	virtual void __fastcall SetComponentStyle(Advstyleif::TTMSStyle AStyle);
	virtual int __fastcall GetVersionNr();
	__property Advstyleif::TTMSStyle UIStyle = {read=FTMSStyle, write=SetUIStyle, default=8};
	__property TGroupBoxAutoSize AutoSize = {read=FAutoSize, write=SetAutoSizeEx, default=0};
public:
	/* TWinControl.CreateParented */ inline __fastcall TAdvCustomGroupBox(HWND ParentWindow) : Vcl::Stdctrls::TCustomGroupBox(ParentWindow) { }
	
private:
	void *__ITMSStyle;	// Advstyleif::ITMSStyle 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {11AC2DDC-C087-4298-AB6E-EA1B5017511B}
	operator Advstyleif::_di_ITMSStyle()
	{
		Advstyleif::_di_ITMSStyle intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Advstyleif::ITMSStyle*(void) { return (Advstyleif::ITMSStyle*)&__ITMSStyle; }
	#endif
	
};


class PASCALIMPLEMENTATION TAdvGroupBox : public TAdvCustomGroupBox
{
	typedef TAdvCustomGroupBox inherited;
	
__published:
	__property AutoSize = {default=0};
	__property BorderColor = {default=12632256};
	__property BorderStyle = {default=1};
	__property CaptionFont;
	__property CaptionPosition = {default=0};
	__property CheckBox;
	__property Images;
	__property ImageIndex = {default=-1};
	__property Transparent = {default=1};
	__property RoundEdges = {default=0};
	__property Version = {default=0};
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property BiDiMode;
	__property Caption = {default=0};
	__property Color = {default=-16777211};
	__property Constraints;
	__property Ctl3D = {default=0};
	__property DisabledFontColor = {default=8421504};
	__property DockSite = {default=0};
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property ParentBackground = {default=1};
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=1};
	__property ParentCtl3D = {default=0};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property Padding;
	__property StyleElements = {default=7};
	__property TabOrder = {default=-1};
	__property TabStop = {default=0};
	__property UseCaptionFont = {default=0};
	__property Visible = {default=1};
	__property OnClick;
	__property OnContextPopup;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDockDrop;
	__property OnDockOver;
	__property OnDragOver;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnGetSiteInfo;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnStartDock;
	__property OnStartDrag;
	__property OnUnDock;
	__property OnCheckBoxClick;
	__property UIStyle = {default=8};
public:
	/* TAdvCustomGroupBox.Create */ inline __fastcall virtual TAdvGroupBox(System::Classes::TComponent* AOwner) : TAdvCustomGroupBox(AOwner) { }
	/* TAdvCustomGroupBox.Destroy */ inline __fastcall virtual ~TAdvGroupBox() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TAdvGroupBox(HWND ParentWindow) : TAdvCustomGroupBox(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::Int8 MAJ_VER = System::Int8(0x1);
static const System::Int8 MIN_VER = System::Int8(0x3);
static const System::Int8 REL_VER = System::Int8(0x0);
static const System::Int8 BLD_VER = System::Int8(0x3);
}	/* namespace Advgroupbox */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ADVGROUPBOX)
using namespace Advgroupbox;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AdvgroupboxHPP
