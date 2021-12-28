// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'CurvyControls.pas' rev: 35.00 (Windows)

#ifndef CurvycontrolsHPP
#define CurvycontrolsHPP

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
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <System.Math.hpp>
#include <GDIPFill.hpp>
#include <AdvGDIP.hpp>
#include <Winapi.UxTheme.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.ImgList.hpp>
#include <System.Types.hpp>
#include <AdvStyleIF.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Curvycontrols
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TCurvyPanel;
class DELPHICLASS TCurvyControl;
class DELPHICLASS TCurvyControls;
class DELPHICLASS TCurvyControlPanel;
class DELPHICLASS TEmptyEdit;
class DELPHICLASS TCurvyEdit;
class DELPHICLASS TCurvyMemo;
class DELPHICLASS TBorderlessCustomComboBox;
class DELPHICLASS TBorderlessComboBox;
class DELPHICLASS TCurvyCombo;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TCurvyPanel : public Vcl::Controls::TCustomControl
{
	typedef Vcl::Controls::TCustomControl inherited;
	
private:
	int FRounding;
	System::Uitypes::TColor FColor;
	System::Uitypes::TColor FShadowColor;
	System::Uitypes::TColor FBorderColor;
	int FIndentRight;
	int FIndentLeft;
	int FBorderWidth;
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TWMEraseBkgnd &Message);
	HIDESBASE MESSAGE void __fastcall WMPaint(Winapi::Messages::TWMPaint &Message);
	void __fastcall SetRounding(const int Value);
	HIDESBASE void __fastcall SetColor(const System::Uitypes::TColor Value);
	void __fastcall SetBorderColor(const System::Uitypes::TColor Value);
	HIDESBASE void __fastcall SetBorderWidth(const int Value);
	
protected:
	virtual bool __fastcall IsPanel();
	virtual void __fastcall ColorChanged();
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall Paint();
	__property int IndentLeft = {read=FIndentLeft, write=FIndentLeft, nodefault};
	__property int IndentRight = {read=FIndentRight, write=FIndentRight, nodefault};
	
public:
	__fastcall virtual TCurvyPanel(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCurvyPanel();
	__property System::Uitypes::TColor ShadowColor = {read=FShadowColor, write=FShadowColor, nodefault};
	
__published:
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property System::Uitypes::TColor BorderColor = {read=FBorderColor, write=SetBorderColor, default=8421504};
	__property int BorderWidth = {read=FBorderWidth, write=SetBorderWidth, default=1};
	__property System::Uitypes::TColor Color = {read=FColor, write=SetColor, default=-16777211};
	__property Constraints;
	__property int Rounding = {read=FRounding, write=SetRounding, default=8};
	__property StyleElements = {default=7};
	__property TabOrder = {default=-1};
	__property TabStop = {default=0};
	__property Visible = {default=1};
	__property OnMouseDown;
	__property OnMouseUp;
	__property OnAlignPosition;
	__property OnMouseActivate;
	__property OnMouseLeave;
	__property OnMouseEnter;
	__property OnMouseMove;
	__property OnDockDrop;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnUnDock;
	__property OnStartDock;
	__property OnStartDrag;
	__property OnCanResize;
	__property OnContextPopup;
	__property OnResize;
public:
	/* TWinControl.CreateParented */ inline __fastcall TCurvyPanel(HWND ParentWindow) : Vcl::Controls::TCustomControl(ParentWindow) { }
	
};


enum DECLSPEC_DENUM TControlPosition : unsigned char { cpLeftInControl, cpRightInControl, cpLeft, cpRight };

enum DECLSPEC_DENUM TControlState : unsigned char { csNormal, csHover, csDown };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCurvyControl : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	int FImageIndex;
	int FImageIndexHover;
	int FImageIndexDown;
	Advgdip::TAdvGDIPPicture* FPicture;
	Advgdip::TAdvGDIPPicture* FPictureHover;
	Advgdip::TAdvGDIPPicture* FPictureDown;
	System::UnicodeString FHint;
	bool FDropDown;
	Vcl::Menus::TPopupMenu* FPopupMenu;
	TControlPosition FPosition;
	TControlState FState;
	int __fastcall GetImageIndex();
	int __fastcall GetImageIndexDown();
	int __fastcall GetImageIndexHover();
	Advgdip::TAdvGDIPPicture* __fastcall GetPicture();
	Advgdip::TAdvGDIPPicture* __fastcall GetPictureHover();
	Advgdip::TAdvGDIPPicture* __fastcall GetPicureDown();
	void __fastcall SetDropDown(const bool Value);
	void __fastcall SetImageIndex(const int Value);
	void __fastcall SetImageIndexDown(const int Value);
	void __fastcall SetImageIndexHover(const int Value);
	void __fastcall SetPicture(Advgdip::TAdvGDIPPicture* const Value);
	void __fastcall SetPictureDown(Advgdip::TAdvGDIPPicture* const Value);
	void __fastcall SetPictureHover(Advgdip::TAdvGDIPPicture* const Value);
	void __fastcall SetPosition(const TControlPosition Value);
	HIDESBASE void __fastcall Changed();
	void __fastcall PictureChanged(System::TObject* Sender);
	void __fastcall SetState(const TControlState Value);
	
protected:
	__property TControlState State = {read=FState, write=SetState, nodefault};
	
public:
	__fastcall virtual TCurvyControl(System::Classes::TCollection* Collection);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__fastcall virtual ~TCurvyControl();
	
__published:
	__property bool DropDown = {read=FDropDown, write=SetDropDown, default=0};
	__property System::UnicodeString Hint = {read=FHint, write=FHint};
	__property int ImageIndex = {read=GetImageIndex, write=SetImageIndex, default=-1};
	__property int ImageIndexHover = {read=GetImageIndexHover, write=SetImageIndexHover, default=-1};
	__property int ImageIndexDown = {read=GetImageIndexDown, write=SetImageIndexDown, default=-1};
	__property Advgdip::TAdvGDIPPicture* Picture = {read=GetPicture, write=SetPicture};
	__property Advgdip::TAdvGDIPPicture* PictureHover = {read=GetPictureHover, write=SetPictureHover};
	__property Advgdip::TAdvGDIPPicture* PictureDown = {read=GetPicureDown, write=SetPictureDown};
	__property TControlPosition Position = {read=FPosition, write=SetPosition, default=1};
	__property Vcl::Menus::TPopupMenu* PopupMenu = {read=FPopupMenu, write=FPopupMenu};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TCurvyControls : public System::Classes::TOwnedCollection
{
	typedef System::Classes::TOwnedCollection inherited;
	
public:
	TCurvyControl* operator[](int Index) { return this->Items[Index]; }
	
private:
	int FLeftSize;
	int FLeftControlSize;
	int FRightSize;
	int FRightControlSize;
	int FImageListImageWidth;
	int FImageListImageHeight;
	System::Classes::TNotifyEvent FOnChange;
	HIDESBASE TCurvyControl* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TCurvyControl* const Value);
	
protected:
	void __fastcall GetSizes();
	System::Types::TPoint __fastcall GetControlSize(int index);
	__property int LeftSize = {read=FLeftSize, nodefault};
	__property int LeftControlSize = {read=FLeftControlSize, nodefault};
	__property int RightSize = {read=FRightSize, nodefault};
	__property int RightControlSize = {read=FRightControlSize, nodefault};
	__property int ImageListImageWidth = {read=FImageListImageWidth, write=FImageListImageWidth, nodefault};
	__property int ImageListImageHeight = {read=FImageListImageHeight, write=FImageListImageHeight, nodefault};
	virtual void __fastcall Update(System::Classes::TCollectionItem* Item);
	
public:
	__fastcall TCurvyControls(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCurvyControls();
	HIDESBASE TCurvyControl* __fastcall Add();
	HIDESBASE TCurvyControl* __fastcall Insert(int Index);
	__property TCurvyControl* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
};


typedef void __fastcall (__closure *TControlClickEvent)(System::TObject* Sender, int Index);

class PASCALIMPLEMENTATION TCurvyControlPanel : public TCurvyPanel
{
	typedef TCurvyPanel inherited;
	
private:
	TCurvyControls* FCurvyControls;
	Vcl::Imglist::TCustomImageList* FImages;
	TControlClickEvent FOnControlClick;
	void __fastcall SetCurvyControls(TCurvyControls* const Value);
	void __fastcall SetImages(Vcl::Imglist::TCustomImageList* const Value);
	
protected:
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall CMHintShow(Vcl::Controls::TCMHintShow &Msg);
	void __fastcall ControlsChanged(System::TObject* Sender);
	void __fastcall PaintControl(int x, int y, int index);
	int __fastcall HandleControls(int x, int y, int &ctrlx, bool dopaint);
	int __fastcall ControlAtXY(int x, int y);
	virtual void __fastcall DoControlClick(int index);
	void __fastcall UpdateControl();
	virtual void __fastcall UpdateEditControl();
	virtual void __fastcall Paint();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation AOperation);
	System::UnicodeString __fastcall GetVersion();
	void __fastcall SetVersion(const System::UnicodeString Value);
	int __fastcall GetVersionNr();
	
public:
	__fastcall virtual TCurvyControlPanel(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCurvyControlPanel();
	__property Vcl::Imglist::TCustomImageList* Images = {read=FImages, write=SetImages};
	__property TCurvyControls* Controls = {read=FCurvyControls, write=SetCurvyControls};
	__property TControlClickEvent OnControlClick = {read=FOnControlClick, write=FOnControlClick};
	
__published:
	__property System::UnicodeString Version = {read=GetVersion, write=SetVersion};
public:
	/* TWinControl.CreateParented */ inline __fastcall TCurvyControlPanel(HWND ParentWindow) : TCurvyPanel(ParentWindow) { }
	
};


enum DECLSPEC_DENUM THideEmptyText : unsigned char { heOnText, heOnFocus };

class PASCALIMPLEMENTATION TEmptyEdit : public Vcl::Stdctrls::TEdit
{
	typedef Vcl::Stdctrls::TEdit inherited;
	
private:
	System::UnicodeString FEmptyText;
	THideEmptyText FHideEmptyText;
	HIDESBASE MESSAGE void __fastcall WMKillFocus(Winapi::Messages::TWMKillFocus &Msg);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Winapi::Messages::TWMSetFocus &Msg);
	HIDESBASE MESSAGE void __fastcall WMPaint(Winapi::Messages::TWMPaint &Msg);
	void __fastcall SetEmptyText(const System::UnicodeString Value);
	
public:
	__property System::UnicodeString EmptyText = {read=FEmptyText, write=SetEmptyText};
	__property THideEmptyText HideEmptyText = {read=FHideEmptyText, write=FHideEmptyText, default=0};
public:
	/* TCustomEdit.Create */ inline __fastcall virtual TEmptyEdit(System::Classes::TComponent* AOwner) : Vcl::Stdctrls::TEdit(AOwner) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TEmptyEdit(HWND ParentWindow) : Vcl::Stdctrls::TEdit(ParentWindow) { }
	/* TWinControl.Destroy */ inline __fastcall virtual ~TEmptyEdit() { }
	
};


class PASCALIMPLEMENTATION TCurvyEdit : public TCurvyControlPanel
{
	typedef TCurvyControlPanel inherited;
	
private:
	TEmptyEdit* FEdit;
	System::Classes::TNotifyEvent FOnClick;
	System::Classes::TNotifyEvent FOnChange;
	System::Classes::TNotifyEvent FOnDblClick;
	System::Classes::TNotifyEvent FOnEnter;
	System::Classes::TNotifyEvent FOnExit;
	Vcl::Controls::TKeyEvent FOnKeyDown;
	Vcl::Controls::TKeyPressEvent FOnKeyPress;
	Vcl::Controls::TKeyEvent FOnKeyUp;
	Vcl::Controls::TMouseEvent FOnMouseDown;
	Vcl::Controls::TMouseMoveEvent FOnMouseMove;
	Vcl::Controls::TMouseEvent FOnMouseUp;
	System::Classes::TNotifyEvent FOnMouseEnter;
	System::Classes::TNotifyEvent FOnMouseLeave;
	HIDESBASE Vcl::Controls::TCaption __fastcall GetText();
	HIDESBASE void __fastcall SetText(const Vcl::Controls::TCaption Value);
	System::Classes::TAlignment __fastcall GetAlignment();
	void __fastcall SetAlignment(const System::Classes::TAlignment Value);
	System::Uitypes::TEditCharCase __fastcall GetCharCase();
	void __fastcall SetCharCase(const System::Uitypes::TEditCharCase Value);
	bool __fastcall GetAutoSelect();
	void __fastcall SetAutoSelect(const bool Value);
	bool __fastcall GetEnabledEx();
	void __fastcall SetEnabledEx(const bool Value);
	bool __fastcall GetHideSelection();
	int __fastcall GetMaxLength();
	void __fastcall SetHideSelection(const bool Value);
	void __fastcall SetMaxLength(const int Value);
	Vcl::Controls::TImeMode __fastcall GetImeMode();
	Vcl::Controls::TImeName __fastcall GetImeName();
	void __fastcall SetImeMode(const Vcl::Controls::TImeMode Value);
	void __fastcall SetImeName(const Vcl::Controls::TImeName Value);
	bool __fastcall GetNumbersOnly();
	void __fastcall SetNumbersOnly(const bool Value);
	bool __fastcall GetOEMConvert();
	void __fastcall SetOEMConvert(const bool Value);
	System::WideChar __fastcall GetPasswordChar();
	void __fastcall SetPasswordChar(const System::WideChar Value);
	Vcl::Menus::TPopupMenu* __fastcall GetPopupMenuEx();
	HIDESBASE void __fastcall SetPopupMenu(Vcl::Menus::TPopupMenu* const Value);
	bool __fastcall GetReadOnly();
	void __fastcall SetReadOnly(const bool Value);
	System::UnicodeString __fastcall GetTextHint();
	void __fastcall SetTextHint(const System::UnicodeString Value);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMParentFontChanged(Vcl::Controls::TCMParentFontChanged &Message);
	HIDESBASE MESSAGE void __fastcall CMBiDiModeChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMParentBiDiModeChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Winapi::Messages::TMessage &Message);
	System::Uitypes::TCursor __fastcall GetDragCursor();
	System::Uitypes::TDragKind __fastcall GetDragKind();
	HIDESBASE System::Uitypes::TDragMode __fastcall GetDragMode();
	void __fastcall SetDragCursor(const System::Uitypes::TCursor Value);
	void __fastcall SetDragKind(const System::Uitypes::TDragKind Value);
	void __fastcall SetDragModeI(const System::Uitypes::TDragMode Value);
	System::UnicodeString __fastcall GetEmptyText();
	void __fastcall SetEmptyText(const System::UnicodeString Value);
	int __fastcall GetSelLength();
	int __fastcall GetSelStart();
	void __fastcall SetSelLength(const int Value);
	void __fastcall SetSelStart(const int Value);
	System::UnicodeString __fastcall GetSelText();
	void __fastcall SetSelText(const System::UnicodeString Value);
	void __fastcall SetHideEmptyText(const THideEmptyText Value);
	THideEmptyText __fastcall GetHideEmptyText();
	
protected:
	virtual void __fastcall CreateWnd();
	DYNAMIC void __fastcall Resize();
	virtual void __fastcall Loaded();
	virtual bool __fastcall IsPanel();
	virtual void __fastcall ColorChanged();
	void __fastcall EditClick(System::TObject* Sender);
	void __fastcall EditChange(System::TObject* Sender);
	void __fastcall EditDblClick(System::TObject* Sender);
	void __fastcall EditEnter(System::TObject* Sender);
	void __fastcall EditExit(System::TObject* Sender);
	void __fastcall EditKeyDown(System::TObject* Sender, System::Word &Key, System::Classes::TShiftState Shift);
	void __fastcall EditKeyUp(System::TObject* Sender, System::Word &Key, System::Classes::TShiftState Shift);
	void __fastcall EditKeyPress(System::TObject* Sender, System::WideChar &Key);
	void __fastcall EditMouseDown(System::TObject* Sender, System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall EditMouseUp(System::TObject* Sender, System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall EditMouseMove(System::TObject* Sender, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall EditMouseLeave(System::TObject* Sender);
	void __fastcall EditMouseEnter(System::TObject* Sender);
	virtual void __fastcall UpdateEditControl();
	HIDESBASE void __fastcall SetTabStop(const bool Value);
	bool __fastcall GetTabStop();
	
public:
	__fastcall virtual TCurvyEdit(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCurvyEdit();
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	virtual void __fastcall SetFocus();
	DYNAMIC bool __fastcall CanFocus();
	void __fastcall SelectAll();
	__property TEmptyEdit* Edit = {read=FEdit};
	__property int SelStart = {read=GetSelStart, write=SetSelStart, nodefault};
	__property int SelLength = {read=GetSelLength, write=SetSelLength, nodefault};
	__property System::UnicodeString SelText = {read=GetSelText, write=SetSelText};
	
__published:
	__property Align = {default=0};
	__property System::Classes::TAlignment Alignment = {read=GetAlignment, write=SetAlignment, default=0};
	__property bool AutoSelect = {read=GetAutoSelect, write=SetAutoSelect, default=1};
	__property BiDiMode;
	__property System::Uitypes::TEditCharCase CharCase = {read=GetCharCase, write=SetCharCase, default=0};
	__property Controls;
	__property System::Uitypes::TCursor DragCursor = {read=GetDragCursor, write=SetDragCursor, default=-12};
	__property System::Uitypes::TDragKind DragKind = {read=GetDragKind, write=SetDragKind, default=0};
	__property System::Uitypes::TDragMode DragMode = {read=GetDragMode, write=SetDragModeI, default=0};
	__property System::UnicodeString EmptyText = {read=GetEmptyText, write=SetEmptyText};
	__property bool Enabled = {read=GetEnabledEx, write=SetEnabledEx, default=1};
	__property Font;
	__property THideEmptyText HideEmptyText = {read=GetHideEmptyText, write=SetHideEmptyText, default=0};
	__property bool HideSelection = {read=GetHideSelection, write=SetHideSelection, default=1};
	__property Images;
	__property Vcl::Controls::TImeMode ImeMode = {read=GetImeMode, write=SetImeMode, default=3};
	__property Vcl::Controls::TImeName ImeName = {read=GetImeName, write=SetImeName};
	__property int MaxLength = {read=GetMaxLength, write=SetMaxLength, default=0};
	__property bool NumbersOnly = {read=GetNumbersOnly, write=SetNumbersOnly, default=0};
	__property bool OEMConvert = {read=GetOEMConvert, write=SetOEMConvert, default=0};
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=1};
	__property ParentFont = {default=1};
	__property ParentCustomHint = {default=1};
	__property System::WideChar PasswordChar = {read=GetPasswordChar, write=SetPasswordChar, default=0};
	__property Vcl::Menus::TPopupMenu* PopupMenu = {read=GetPopupMenuEx, write=SetPopupMenu};
	__property bool ReadOnly = {read=GetReadOnly, write=SetReadOnly, default=0};
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property bool TabStop = {read=GetTabStop, write=SetTabStop, nodefault};
	__property Vcl::Controls::TCaption Text = {read=GetText, write=SetText};
	__property System::UnicodeString TextHint = {read=GetTextHint, write=SetTextHint};
	__property Touch;
	__property System::Classes::TNotifyEvent OnClick = {read=FOnClick, write=FOnClick};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property OnControlClick;
	__property System::Classes::TNotifyEvent OnDblClick = {read=FOnDblClick, write=FOnDblClick};
	__property System::Classes::TNotifyEvent OnEnter = {read=FOnEnter, write=FOnEnter};
	__property System::Classes::TNotifyEvent OnExit = {read=FOnExit, write=FOnExit};
	__property Vcl::Controls::TKeyEvent OnKeyDown = {read=FOnKeyDown, write=FOnKeyDown};
	__property Vcl::Controls::TKeyPressEvent OnKeyPress = {read=FOnKeyPress, write=FOnKeyPress};
	__property Vcl::Controls::TKeyEvent OnKeyUp = {read=FOnKeyUp, write=FOnKeyUp};
	__property Vcl::Controls::TMouseEvent OnMouseDown = {read=FOnMouseDown, write=FOnMouseDown};
	__property Vcl::Controls::TMouseMoveEvent OnMouseMove = {read=FOnMouseMove, write=FOnMouseMove};
	__property Vcl::Controls::TMouseEvent OnMouseUp = {read=FOnMouseUp, write=FOnMouseUp};
	__property System::Classes::TNotifyEvent OnMouseLeave = {read=FOnMouseLeave, write=FOnMouseLeave};
	__property System::Classes::TNotifyEvent OnMouseEnter = {read=FOnMouseEnter, write=FOnMouseEnter};
public:
	/* TWinControl.CreateParented */ inline __fastcall TCurvyEdit(HWND ParentWindow) : TCurvyControlPanel(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TCurvyMemo : public TCurvyPanel
{
	typedef TCurvyPanel inherited;
	
private:
	Vcl::Stdctrls::TMemo* FEdit;
	System::Classes::TStringList* FLines;
	System::Classes::TNotifyEvent FOnClick;
	System::Classes::TNotifyEvent FOnChange;
	System::Classes::TNotifyEvent FOnDblClick;
	System::Classes::TNotifyEvent FOnEnter;
	System::Classes::TNotifyEvent FOnExit;
	Vcl::Controls::TKeyEvent FOnKeyDown;
	Vcl::Controls::TKeyPressEvent FOnKeyPress;
	Vcl::Controls::TKeyEvent FOnKeyUp;
	Vcl::Controls::TMouseEvent FOnMouseDown;
	Vcl::Controls::TMouseMoveEvent FOnMouseMove;
	Vcl::Controls::TMouseEvent FOnMouseUp;
	System::Classes::TNotifyEvent FOnMouseEnter;
	System::Classes::TNotifyEvent FOnMouseLeave;
	bool FStopChange;
	System::Classes::TAlignment __fastcall GetAlignment();
	void __fastcall SetAlignment(const System::Classes::TAlignment Value);
	System::Uitypes::TEditCharCase __fastcall GetCharCase();
	void __fastcall SetCharCase(const System::Uitypes::TEditCharCase Value);
	bool __fastcall GetEnabledEx();
	void __fastcall SetEnabledEx(const bool Value);
	bool __fastcall GetHideSelection();
	int __fastcall GetMaxLength();
	void __fastcall SetHideSelection(const bool Value);
	void __fastcall SetMaxLength(const int Value);
	Vcl::Controls::TImeMode __fastcall GetImeMode();
	Vcl::Controls::TImeName __fastcall GetImeName();
	void __fastcall SetImeMode(const Vcl::Controls::TImeMode Value);
	void __fastcall SetImeName(const Vcl::Controls::TImeName Value);
	bool __fastcall GetOEMConvert();
	void __fastcall SetOEMConvert(const bool Value);
	Vcl::Menus::TPopupMenu* __fastcall GetPopupMenuEx();
	HIDESBASE void __fastcall SetPopupMenu(Vcl::Menus::TPopupMenu* const Value);
	bool __fastcall GetReadOnly();
	void __fastcall SetReadOnly(const bool Value);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMParentFontChanged(Vcl::Controls::TCMParentFontChanged &Message);
	HIDESBASE MESSAGE void __fastcall CMBiDiModeChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMParentBiDiModeChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Winapi::Messages::TMessage &Message);
	System::Uitypes::TScrollStyle __fastcall GetScrollStyle();
	void __fastcall SetScrollStyle(const System::Uitypes::TScrollStyle Value);
	System::Uitypes::TCursor __fastcall GetDragCursor();
	System::Uitypes::TDragKind __fastcall GetDragKind();
	HIDESBASE System::Uitypes::TDragMode __fastcall GetDragMode();
	void __fastcall SetDragCursor(const System::Uitypes::TCursor Value);
	void __fastcall SetDragKind(const System::Uitypes::TDragKind Value);
	void __fastcall SetDragModeI(const System::Uitypes::TDragMode Value);
	System::Classes::TStrings* __fastcall GetLines();
	void __fastcall SetLines(System::Classes::TStrings* const Value);
	int __fastcall GetSelLength();
	int __fastcall GetSelStart();
	void __fastcall SetSelLength(const int Value);
	void __fastcall SetSelStart(const int Value);
	System::UnicodeString __fastcall GetSelText();
	void __fastcall SetSelText(const System::UnicodeString Value);
	bool __fastcall GetWordWrap();
	void __fastcall SetWordWrap(const bool Value);
	
protected:
	virtual void __fastcall CreateWnd();
	DYNAMIC void __fastcall Resize();
	virtual bool __fastcall IsPanel();
	virtual void __fastcall ColorChanged();
	void __fastcall LinesChanged(System::TObject* Sender);
	void __fastcall EditClick(System::TObject* Sender);
	void __fastcall EditChange(System::TObject* Sender);
	void __fastcall EditDblClick(System::TObject* Sender);
	void __fastcall EditEnter(System::TObject* Sender);
	void __fastcall EditExit(System::TObject* Sender);
	void __fastcall EditKeyDown(System::TObject* Sender, System::Word &Key, System::Classes::TShiftState Shift);
	void __fastcall EditKeyUp(System::TObject* Sender, System::Word &Key, System::Classes::TShiftState Shift);
	void __fastcall EditKeyPress(System::TObject* Sender, System::WideChar &Key);
	void __fastcall EditMouseDown(System::TObject* Sender, System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall EditMouseUp(System::TObject* Sender, System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall EditMouseMove(System::TObject* Sender, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall EditMouseLeave(System::TObject* Sender);
	void __fastcall EditMouseEnter(System::TObject* Sender);
	HIDESBASE void __fastcall SetTabStop(const bool Value);
	bool __fastcall GetTabStop();
	
public:
	__fastcall virtual TCurvyMemo(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCurvyMemo();
	virtual void __fastcall Loaded();
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	virtual void __fastcall SetFocus();
	DYNAMIC bool __fastcall CanFocus();
	__property Vcl::Stdctrls::TMemo* Memo = {read=FEdit};
	__property int SelStart = {read=GetSelStart, write=SetSelStart, nodefault};
	__property int SelLength = {read=GetSelLength, write=SetSelLength, nodefault};
	__property System::UnicodeString SelText = {read=GetSelText, write=SetSelText};
	void __fastcall SelectAll();
	
__published:
	__property Align = {default=0};
	__property System::Classes::TAlignment Alignment = {read=GetAlignment, write=SetAlignment, default=0};
	__property BiDiMode;
	__property System::Uitypes::TEditCharCase CharCase = {read=GetCharCase, write=SetCharCase, default=0};
	__property System::Uitypes::TCursor DragCursor = {read=GetDragCursor, write=SetDragCursor, default=-12};
	__property System::Uitypes::TDragKind DragKind = {read=GetDragKind, write=SetDragKind, default=0};
	__property System::Uitypes::TDragMode DragMode = {read=GetDragMode, write=SetDragModeI, default=0};
	__property bool Enabled = {read=GetEnabledEx, write=SetEnabledEx, default=1};
	__property Font;
	__property bool HideSelection = {read=GetHideSelection, write=SetHideSelection, default=1};
	__property Vcl::Controls::TImeMode ImeMode = {read=GetImeMode, write=SetImeMode, default=3};
	__property Vcl::Controls::TImeName ImeName = {read=GetImeName, write=SetImeName};
	__property System::Classes::TStrings* Lines = {read=GetLines, write=SetLines};
	__property int MaxLength = {read=GetMaxLength, write=SetMaxLength, default=0};
	__property bool OEMConvert = {read=GetOEMConvert, write=SetOEMConvert, default=0};
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=1};
	__property ParentFont = {default=1};
	__property ParentCustomHint = {default=1};
	__property Vcl::Menus::TPopupMenu* PopupMenu = {read=GetPopupMenuEx, write=SetPopupMenu};
	__property bool ReadOnly = {read=GetReadOnly, write=SetReadOnly, default=0};
	__property System::Uitypes::TScrollStyle ScrollBars = {read=GetScrollStyle, write=SetScrollStyle, default=0};
	__property bool WordWrap = {read=GetWordWrap, write=SetWordWrap, default=0};
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property bool TabStop = {read=GetTabStop, write=SetTabStop, nodefault};
	__property Touch;
	__property System::Classes::TNotifyEvent OnClick = {read=FOnClick, write=FOnClick};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property System::Classes::TNotifyEvent OnDblClick = {read=FOnDblClick, write=FOnDblClick};
	__property System::Classes::TNotifyEvent OnEnter = {read=FOnEnter, write=FOnEnter};
	__property System::Classes::TNotifyEvent OnExit = {read=FOnExit, write=FOnExit};
	__property Vcl::Controls::TKeyEvent OnKeyDown = {read=FOnKeyDown, write=FOnKeyDown};
	__property Vcl::Controls::TKeyPressEvent OnKeyPress = {read=FOnKeyPress, write=FOnKeyPress};
	__property Vcl::Controls::TKeyEvent OnKeyUp = {read=FOnKeyUp, write=FOnKeyUp};
	__property Vcl::Controls::TMouseEvent OnMouseDown = {read=FOnMouseDown, write=FOnMouseDown};
	__property Vcl::Controls::TMouseMoveEvent OnMouseMove = {read=FOnMouseMove, write=FOnMouseMove};
	__property Vcl::Controls::TMouseEvent OnMouseUp = {read=FOnMouseUp, write=FOnMouseUp};
	__property System::Classes::TNotifyEvent OnMouseLeave = {read=FOnMouseLeave, write=FOnMouseLeave};
	__property System::Classes::TNotifyEvent OnMouseEnter = {read=FOnMouseEnter, write=FOnMouseEnter};
public:
	/* TWinControl.CreateParented */ inline __fastcall TCurvyMemo(HWND ParentWindow) : TCurvyPanel(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TBorderlessCustomComboBox : public Vcl::Stdctrls::TCustomComboBox
{
	typedef Vcl::Stdctrls::TCustomComboBox inherited;
	
private:
	int FButtonWidth;
	bool FButtonHover;
	bool FForcePaint;
	bool FHasMouse;
	bool FOldButtonHover;
	int FDropDownWidth;
	void __fastcall DrawControlBorder(HDC DC);
	void __fastcall DrawBorders();
	HIDESBASE MESSAGE void __fastcall WMPaint(Winapi::Messages::TWMPaint &Message);
	HIDESBASE MESSAGE void __fastcall WMNCPaint(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CNCommand(Winapi::Messages::TWMCommand &Message);
	HIDESBASE void __fastcall SetDropDownWidth(const int Value);
	
protected:
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	bool __fastcall UsesCOM6();
	
public:
	__fastcall virtual TBorderlessCustomComboBox(System::Classes::TComponent* AOwner);
	virtual void __fastcall CreateWnd();
	__fastcall virtual ~TBorderlessCustomComboBox();
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	__property Text = {default=0};
	__property int DropDownWidth = {read=FDropDownWidth, write=SetDropDownWidth, nodefault};
public:
	/* TWinControl.CreateParented */ inline __fastcall TBorderlessCustomComboBox(HWND ParentWindow) : Vcl::Stdctrls::TCustomComboBox(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TBorderlessComboBox : public TBorderlessCustomComboBox
{
	typedef TBorderlessCustomComboBox inherited;
	
__published:
	__property Items;
	__property Text = {default=0};
public:
	/* TBorderlessCustomComboBox.Create */ inline __fastcall virtual TBorderlessComboBox(System::Classes::TComponent* AOwner) : TBorderlessCustomComboBox(AOwner) { }
	/* TBorderlessCustomComboBox.Destroy */ inline __fastcall virtual ~TBorderlessComboBox() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TBorderlessComboBox(HWND ParentWindow) : TBorderlessCustomComboBox(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TCurvyCombo : public TCurvyControlPanel
{
	typedef TCurvyControlPanel inherited;
	
private:
	System::Classes::TStringList* FItems;
	int FItemIndex;
	TBorderlessComboBox* FCombo;
	Vcl::Controls::TMouseEvent FOnMouseDown;
	System::Classes::TNotifyEvent FOnExit;
	System::Classes::TNotifyEvent FOnMouseEnter;
	Vcl::Controls::TMouseMoveEvent FOnMouseMove;
	Vcl::Controls::TMouseEvent FOnMouseUp;
	Vcl::Controls::TKeyPressEvent FOnKeyPress;
	Vcl::Controls::TKeyEvent FOnKeyDown;
	System::Classes::TNotifyEvent FOnDblClick;
	System::Classes::TNotifyEvent FOnChange;
	System::Classes::TNotifyEvent FOnEnter;
	System::Classes::TNotifyEvent FOnMouseLeave;
	Vcl::Controls::TKeyEvent FOnKeyUp;
	System::Classes::TNotifyEvent FOnClick;
	System::Classes::TNotifyEvent FOnCloseUp;
	System::Classes::TNotifyEvent FOnDropDown;
	System::Classes::TNotifyEvent FOnSelect;
	int FDropDownCount;
	int FDropDownWidth;
	HIDESBASE Vcl::Controls::TCaption __fastcall GetText();
	HIDESBASE void __fastcall SetText(const Vcl::Controls::TCaption Value);
	System::Classes::TStrings* __fastcall GetItems();
	void __fastcall SetItems(System::Classes::TStrings* const Value);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMParentFontChanged(Vcl::Controls::TCMParentFontChanged &Message);
	HIDESBASE MESSAGE void __fastcall CMBiDiModeChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMParentBiDiModeChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Winapi::Messages::TMessage &Message);
	bool __fastcall GetAutoCloseUp();
	bool __fastcall GetAutoComplete();
	int __fastcall GetAutoCompleteDelay();
	void __fastcall SetAutoCompleteDelay(const int Value);
	bool __fastcall GetAutoDropDown();
	void __fastcall SetAutoCloseUp(const bool Value);
	void __fastcall SetAutoComplete(const bool Value);
	void __fastcall SetAutoDropDown(const bool Value);
	System::Uitypes::TEditCharCase __fastcall GetCharCase();
	void __fastcall SetCharCase(const System::Uitypes::TEditCharCase Value);
	bool __fastcall GetEnabledEx();
	void __fastcall SetEnabledEx(const bool Value);
	Vcl::Controls::TImeMode __fastcall GetImeMode();
	Vcl::Controls::TImeName __fastcall GetImeName();
	void __fastcall SetImeMode(const Vcl::Controls::TImeMode Value);
	void __fastcall SetImeName(const Vcl::Controls::TImeName Value);
	Vcl::Menus::TPopupMenu* __fastcall GetPopupMenuEx();
	HIDESBASE void __fastcall SetPopupMenu(Vcl::Menus::TPopupMenu* const Value);
	System::UnicodeString __fastcall GetTextHint();
	void __fastcall SetTextHint(const System::UnicodeString Value);
	int __fastcall GetItemIndex();
	void __fastcall SetItemIndex(const int Value);
	Vcl::Stdctrls::TComboBoxStyle __fastcall GetStyle();
	void __fastcall SetStyle(const Vcl::Stdctrls::TComboBoxStyle Value);
	System::Uitypes::TCursor __fastcall GetDragCursor();
	System::Uitypes::TDragKind __fastcall GetDragKind();
	HIDESBASE System::Uitypes::TDragMode __fastcall GetDragMode();
	void __fastcall SetDragCursor(const System::Uitypes::TCursor Value);
	void __fastcall SetDragKind(const System::Uitypes::TDragKind Value);
	void __fastcall SetDragModeI(const System::Uitypes::TDragMode Value);
	int __fastcall GetSelLength();
	int __fastcall GetSelStart();
	System::UnicodeString __fastcall GetSelText();
	void __fastcall SetSelLength(const int Value);
	void __fastcall SetSelStart(const int Value);
	void __fastcall SetSelText(const System::UnicodeString Value);
	bool __fastcall GetSorted();
	void __fastcall SetSorted(const bool Value);
	void __fastcall SetDropDownCount(const int Value);
	bool __fastcall GetTabStop();
	HIDESBASE void __fastcall SetTabStop(const bool Value);
	void __fastcall SetDropDownWidth(const int Value);
	
protected:
	virtual void __fastcall CreateWnd();
	DYNAMIC void __fastcall Resize();
	virtual bool __fastcall IsPanel();
	virtual void __fastcall ColorChanged();
	virtual void __fastcall ItemsChanged(System::TObject* Sender);
	virtual void __fastcall Loaded();
	void __fastcall ComboClick(System::TObject* Sender);
	void __fastcall ComboChange(System::TObject* Sender);
	void __fastcall ComboDblClick(System::TObject* Sender);
	void __fastcall ComboEnter(System::TObject* Sender);
	void __fastcall ComboExit(System::TObject* Sender);
	void __fastcall ComboKeyDown(System::TObject* Sender, System::Word &Key, System::Classes::TShiftState Shift);
	void __fastcall ComboKeyUp(System::TObject* Sender, System::Word &Key, System::Classes::TShiftState Shift);
	void __fastcall ComboKeyPress(System::TObject* Sender, System::WideChar &Key);
	void __fastcall ComboMouseDown(System::TObject* Sender, System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall ComboMouseUp(System::TObject* Sender, System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall ComboMouseMove(System::TObject* Sender, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall ComboMouseLeave(System::TObject* Sender);
	void __fastcall ComboMouseEnter(System::TObject* Sender);
	void __fastcall ComboDropDown(System::TObject* Sender);
	void __fastcall ComboCloseUp(System::TObject* Sender);
	void __fastcall ComboSelect(System::TObject* Sender);
	void __fastcall UpdateCombo();
	HIDESBASE void __fastcall UpdateControl();
	virtual void __fastcall UpdateEditControl();
	
public:
	__fastcall virtual TCurvyCombo(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCurvyCombo();
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	__property TBorderlessComboBox* Combo = {read=FCombo};
	virtual void __fastcall SetFocus();
	DYNAMIC bool __fastcall CanFocus();
	__property int SelStart = {read=GetSelStart, write=SetSelStart, nodefault};
	__property int SelLength = {read=GetSelLength, write=SetSelLength, nodefault};
	__property System::UnicodeString SelText = {read=GetSelText, write=SetSelText};
	
__published:
	__property Align = {default=0};
	__property bool AutoCloseUp = {read=GetAutoCloseUp, write=SetAutoCloseUp, default=0};
	__property bool AutoComplete = {read=GetAutoComplete, write=SetAutoComplete, default=1};
	__property int AutoCompleteDelay = {read=GetAutoCompleteDelay, write=SetAutoCompleteDelay, default=500};
	__property bool AutoDropDown = {read=GetAutoDropDown, write=SetAutoDropDown, default=0};
	__property BiDiMode;
	__property System::Uitypes::TEditCharCase CharCase = {read=GetCharCase, write=SetCharCase, default=0};
	__property Controls;
	__property System::Uitypes::TCursor DragCursor = {read=GetDragCursor, write=SetDragCursor, default=-12};
	__property System::Uitypes::TDragKind DragKind = {read=GetDragKind, write=SetDragKind, default=0};
	__property System::Uitypes::TDragMode DragMode = {read=GetDragMode, write=SetDragModeI, default=0};
	__property int DropDownCount = {read=FDropDownCount, write=SetDropDownCount, default=8};
	__property int DropDownWidth = {read=FDropDownWidth, write=SetDropDownWidth, default=0};
	__property bool Enabled = {read=GetEnabledEx, write=SetEnabledEx, default=1};
	__property Images;
	__property Vcl::Controls::TImeMode ImeMode = {read=GetImeMode, write=SetImeMode, default=3};
	__property Vcl::Controls::TImeName ImeName = {read=GetImeName, write=SetImeName};
	__property int ItemIndex = {read=GetItemIndex, write=SetItemIndex, default=-1};
	__property System::Classes::TStrings* Items = {read=GetItems, write=SetItems};
	__property Font;
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=1};
	__property ParentFont = {default=1};
	__property ParentCustomHint = {default=1};
	__property Vcl::Menus::TPopupMenu* PopupMenu = {read=GetPopupMenuEx, write=SetPopupMenu};
	__property ShowHint;
	__property bool Sorted = {read=GetSorted, write=SetSorted, nodefault};
	__property Vcl::Stdctrls::TComboBoxStyle Style = {read=GetStyle, write=SetStyle, default=0};
	__property TabOrder = {default=-1};
	__property bool TabStop = {read=GetTabStop, write=SetTabStop, nodefault};
	__property Vcl::Controls::TCaption Text = {read=GetText, write=SetText};
	__property System::UnicodeString TextHint = {read=GetTextHint, write=SetTextHint};
	__property Touch;
	__property System::Classes::TNotifyEvent OnClick = {read=FOnClick, write=FOnClick};
	__property System::Classes::TNotifyEvent OnCloseUp = {read=FOnCloseUp, write=FOnCloseUp};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property OnControlClick;
	__property System::Classes::TNotifyEvent OnDblClick = {read=FOnDblClick, write=FOnDblClick};
	__property System::Classes::TNotifyEvent OnDropDown = {read=FOnDropDown, write=FOnDropDown};
	__property System::Classes::TNotifyEvent OnEnter = {read=FOnEnter, write=FOnEnter};
	__property System::Classes::TNotifyEvent OnExit = {read=FOnExit, write=FOnExit};
	__property Vcl::Controls::TKeyEvent OnKeyDown = {read=FOnKeyDown, write=FOnKeyDown};
	__property Vcl::Controls::TKeyPressEvent OnKeyPress = {read=FOnKeyPress, write=FOnKeyPress};
	__property Vcl::Controls::TKeyEvent OnKeyUp = {read=FOnKeyUp, write=FOnKeyUp};
	__property Vcl::Controls::TMouseEvent OnMouseDown = {read=FOnMouseDown, write=FOnMouseDown};
	__property Vcl::Controls::TMouseMoveEvent OnMouseMove = {read=FOnMouseMove, write=FOnMouseMove};
	__property Vcl::Controls::TMouseEvent OnMouseUp = {read=FOnMouseUp, write=FOnMouseUp};
	__property System::Classes::TNotifyEvent OnMouseLeave = {read=FOnMouseLeave, write=FOnMouseLeave};
	__property System::Classes::TNotifyEvent OnMouseEnter = {read=FOnMouseEnter, write=FOnMouseEnter};
	__property System::Classes::TNotifyEvent OnSelect = {read=FOnSelect, write=FOnSelect};
public:
	/* TWinControl.CreateParented */ inline __fastcall TCurvyCombo(HWND ParentWindow) : TCurvyControlPanel(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::Int8 MAJ_VER = System::Int8(0x1);
static const System::Int8 MIN_VER = System::Int8(0x2);
static const System::Int8 REL_VER = System::Int8(0x2);
static const System::Int8 BLD_VER = System::Int8(0x2);
}	/* namespace Curvycontrols */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_CURVYCONTROLS)
using namespace Curvycontrols;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// CurvycontrolsHPP
