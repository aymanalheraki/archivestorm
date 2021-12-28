// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'iexToolbars.pas' rev: 35.00 (Windows)

#ifndef IextoolbarsHPP
#define IextoolbarsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Vcl.ActnList.hpp>
#include <System.SysUtils.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.Clipbrd.hpp>
#include <Vcl.ImgList.hpp>
#include <hyieutils.hpp>
#include <iexBitmaps.hpp>
#include <hyiedefs.hpp>
#include <ieview.hpp>
#include <iexCanvasUtils.hpp>
#include <Vcl.ToolWin.hpp>

//-- user supplied -----------------------------------------------------------

namespace Iextoolbars
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TIECustomToolbarParams;
class DELPHICLASS TImageEnViewToolbarParams;
class DELPHICLASS TIERichEditToolbarParams;
class DELPHICLASS TCustomImageEnToolbar;
class DELPHICLASS TImageEnViewToolbar;
class DELPHICLASS TIERichEditToolbar;
class DELPHICLASS TImageEnViewHoverToolbar;
class DELPHICLASS TIERichEditHoverToolbar;
//-- type declarations -------------------------------------------------------
typedef void __fastcall (__closure *TIEAddButtonEvent)(System::TObject* Sender, int ToolbarID, int ButtonID, bool &Include);

typedef void __fastcall (__closure *TIEAddCustomButtonEvent)(System::TObject* Sender, int BeforeButtonID, bool &AddButton, int &BtnID, System::UnicodeString &BtnCaption, System::UnicodeString &BtnHint, int &BtnImgID);

enum DECLSPEC_DENUM TIEToolbarPosition : unsigned char { iepAbove, iepBelow, iepTop, iepBottom, iepAboveSelection, iepBelowSelection };

typedef void __fastcall (__closure *TIEActionEvent)(System::TObject* Sender, int ButtonID, bool &Handled);

enum DECLSPEC_DENUM TImageEnViewButton : unsigned char { ivbImageOpen, ivbImageSave, ivbImageSeek, ivbImagePrint, ivbImageZoom, ivbImageClipboard, ivbMouseZoomAndScroll, ivbMouseSelect, ivbMouseMeasure, ivbMouseLayerEditing, ivbImageEditRotate, ivbImageEditFlip, ivbImageEditOther, ivbImageEditDialogPreview, ivbImageEditColors, ivbImageEditColorPreview, ivbImageEditTools, ivbImageEditUndo, ivbLayersOpenSave, ivbLayersEdit, ivbLayersEditCurrent, ivbLayersGroup, ivbLayersStyle, ivbLayersRotate, ivbLayersOther, ivbLayersSize, ivbLayersFont, ivbLayersFontStyle, ivbLayersFontAlignment, ivbLayersProps, ivbLayersPropsDlg, ivbLayersMoveAndAlign };

typedef System::Set<TImageEnViewButton, TImageEnViewButton::ivbImageOpen, TImageEnViewButton::ivbLayersMoveAndAlign> TImageEnViewButtons;

enum DECLSPEC_DENUM TImageEnMViewButton : unsigned char { imbSelect, imbViewStyle, imbViewColumns, imbViewOther, imbSorting, imbFolderRefresh, imbFolderOpen, imbFolderEdit, imbFolderProperties, imbImagePrint, imbImageRotate, imbImageFlip, imbImageEditDialogPreview, imbImageImageColorPreview, imbFileExecute, imbFileClipboard, imbFileEdit, imbFileProperties };

typedef System::Set<TImageEnMViewButton, TImageEnMViewButton::imbSelect, TImageEnMViewButton::imbFileProperties> TImageEnMViewButtons;

enum DECLSPEC_DENUM TImageEnLayerMViewButton : unsigned char { ilbSelect, ilbViewStyle, ilbViewColumns, ilbViewOther, ilbLayersEdit, ilbLayersEditCurrent, ilbLayersGroup, ilbLayersRename, ilbLayersProps, ilbLayersUndo };

typedef System::Set<TImageEnLayerMViewButton, TImageEnLayerMViewButton::ilbSelect, TImageEnLayerMViewButton::ilbLayersUndo> TImageEnLayerMViewButtons;

enum DECLSPEC_DENUM TIERichEditButton : unsigned char { irbRichEditNew, irbRichEditOpen, irbRichEditSave, irbRichEditPrint, irbRichEditFont, irbRichEditFontStyle, irbRichEditAlignment, irbRichEditBullets, irbRichEditSelect, irbRichEditClipboard, irbRichEditOther, irbRichEditUndo, irbFindAndReplace, irbObjects, irbRichEditView, irbRichEditSpellChecking };

typedef System::Set<TIERichEditButton, TIERichEditButton::irbRichEditNew, TIERichEditButton::irbRichEditSpellChecking> TIERichEditButtons;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIECustomToolbarParams : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	int fImageHue;
	TIEToolbarPosition fPosition;
	System::Classes::TAlignment fAlignment;
	bool fWideToolbar;
	void __fastcall SetImageHue(int value);
	void __fastcall SetWideToolbar(bool value);
	
protected:
	TImageEnViewButtons fImageEnViewButtons;
	TIERichEditButtons fRichEditButtons;
	
public:
	__fastcall TIECustomToolbarParams();
	__property int ImageHue = {read=fImageHue, write=SetImageHue, nodefault};
	__property TIEToolbarPosition Position = {read=fPosition, write=fPosition, nodefault};
	__property System::Classes::TAlignment Alignment = {read=fAlignment, write=fAlignment, nodefault};
	__property bool WideToolbar = {read=fWideToolbar, write=SetWideToolbar, nodefault};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TIECustomToolbarParams() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TImageEnViewToolbarParams : public TIECustomToolbarParams
{
	typedef TIECustomToolbarParams inherited;
	
private:
	void __fastcall SetImageEnViewButtons(TImageEnViewButtons Value);
	
public:
	__fastcall TImageEnViewToolbarParams(TImageEnViewButtons Buttons, TIEToolbarPosition Position, System::Classes::TAlignment Alignment);
	__property TImageEnViewButtons Buttons = {read=fImageEnViewButtons, write=SetImageEnViewButtons, default=0};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TImageEnViewToolbarParams() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIERichEditToolbarParams : public TIECustomToolbarParams
{
	typedef TIECustomToolbarParams inherited;
	
private:
	void __fastcall SetRichEditButtons(TIERichEditButtons Value);
	
public:
	__fastcall TIERichEditToolbarParams(TIERichEditButtons Buttons, TIEToolbarPosition Position, System::Classes::TAlignment Alignment);
	__property TIERichEditButtons Buttons = {read=fRichEditButtons, write=SetRichEditButtons, default=0};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TIERichEditToolbarParams() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TCustomImageEnToolbar : public Vcl::Comctrls::TToolBar
{
	typedef Vcl::Comctrls::TToolBar inherited;
	
private:
	bool fLockUpdate;
	bool fHoverToolbar;
	bool fKeyboardShortcuts;
	Vcl::Actnlist::TActionList* fActionList;
	TIEActionEvent fOnActionExecute;
	TIEActionEvent fOnActionUpdate;
	TImageEnViewButtons fImageEnViewButtons;
	Ieview::TIEViewMode fImageEnViewButtonMode;
	TIERichEditButtons fRichEditButtons;
	int fImageHue;
	TIEAddButtonEvent fOnAddButton;
	Iexcanvasutils::TIEAddButtonImageEvent fOnAddButtonImage;
	TIEAddCustomButtonEvent fOnAddCustomButton;
	Vcl::Extctrls::TTimer* fUpdateTimer;
	bool fFullUpdatePending;
	bool fScaleFixPending;
	Vcl::Controls::TImageList* fImageList;
	Vcl::Controls::TImageList* fGrayImageList;
	int fLastButtonWidth;
	double fLastButtonScale;
	bool fAlwaysSetRedraw;
	bool fHideParent;
	bool fAutoScale;
	double fScaling;
	Vcl::Menus::TPopupMenu* fIERichEditAlignMenu;
	Vcl::Menus::TPopupMenu* fIEViewMouseSelectMenu;
	Vcl::Menus::TPopupMenu* fIEViewMouseMeasureMenu;
	Vcl::Menus::TPopupMenu* fIEViewMouseAddLayersMenu;
	Vcl::Menus::TPopupMenu* fIEViewEditColorsMenu;
	Vcl::Menus::TPopupMenu* fIEViewRetouchMenu;
	Vcl::Menus::TPopupMenu* fIELayersAddMenu;
	Vcl::Menus::TPopupMenu* fIELayersMoveMenu;
	Vcl::Menus::TPopupMenu* fIELayersAlignMenu;
	Vcl::Menus::TPopupMenu* fIEPdfViewerRotateView;
	double __fastcall CurrButtonScaling();
	void __fastcall SpacerPaint(System::TObject* Sender);
	void __fastcall ColorBoxPaint(System::TObject* Sender);
	void __fastcall PopupMenuButtonClick(System::TObject* Sender);
	void __fastcall cmbShapeChange(System::TObject* Sender);
	void __fastcall cmbShapeCloseUp(System::TObject* Sender);
	void __fastcall cmbShapeDrawItem(Vcl::Controls::TWinControl* Control, int Index, const System::Types::TRect &Rect, Winapi::Windows::TOwnerDrawState State);
	void __fastcall IERichEditFontBoxPaint(System::TObject* Sender);
	void __fastcall IERichEditFontBoxClick(System::TObject* Sender);
	void __fastcall IERichEditFontColorClick(System::TObject* Sender);
	void __fastcall IERichEditAlignMenuPopup(System::TObject* Sender);
	void __fastcall IERichEditAlignButtonClick(System::TObject* Sender);
	void __fastcall IERichEditAlignMenuItemClick(System::TObject* Sender);
	void __fastcall IEViewMenuPopup(System::TObject* Sender);
	void __fastcall IEViewMenuButtonClick(System::TObject* Sender);
	void __fastcall IEViewToolBrushSizePaint(System::TObject* Sender);
	void __fastcall IEViewToolBrushSizeClick(System::TObject* Sender);
	void __fastcall IEViewZoomBoxPaint(System::TObject* Sender);
	void __fastcall IEViewZoomBoxClick(System::TObject* Sender);
	void __fastcall IEViewToolColorClick(System::TObject* Sender);
	void __fastcall IELayerFillBoxClick(System::TObject* Sender);
	void __fastcall IELayerBorderSizeBoxPaint(System::TObject* Sender);
	void __fastcall IELayerBorderSizeBoxClick(System::TObject* Sender);
	void __fastcall IELayerBorderColorBoxClick(System::TObject* Sender);
	void __fastcall IELayerFontBoxPaint(System::TObject* Sender);
	void __fastcall IELayerFontBoxClick(System::TObject* Sender);
	void __fastcall IELayerFontColorClick(System::TObject* Sender);
	void __fastcall SetImageHue(const int v);
	void __fastcall SetKeyboardShortcuts(const bool v);
	void __fastcall SetAutoScale(const bool v);
	void __fastcall SetScaling(const double v);
	bool __fastcall ScalingIsStored();
	void __fastcall NotifyExecute(System::TObject* Sender, int ID);
	bool __fastcall DoActionExecute(System::TObject* Sender, int ButtonID);
	bool __fastcall DoActionUpdate(System::TObject* Sender, int ButtonID);
	void __fastcall ActionListExecute(System::Classes::TBasicAction* Action, bool &Handled);
	void __fastcall ActionListUpdate(System::Classes::TBasicAction* Action, bool &Handled);
	
protected:
	Vcl::Controls::TWinControl* fControl;
	bool fAutoHideButtons;
	int fCurrentStateID;
	bool fWideToolbar;
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall SetParent(Vcl::Controls::TWinControl* AParent);
	HIDESBASE virtual Vcl::Controls::TWinControl* __fastcall GetControl() = 0 ;
	virtual void __fastcall SetControl(Vcl::Controls::TWinControl* const Value);
	TImageEnViewButtons __fastcall GetImageEnViewButtons();
	void __fastcall SetImageEnViewButtons(const TImageEnViewButtons Value);
	Ieview::TIEViewMode __fastcall GetImageEnViewButtonMode();
	void __fastcall SetImageEnViewButtonMode(const Ieview::TIEViewMode Value);
	TIERichEditButtons __fastcall GetRichEditButtons();
	void __fastcall SetRichEditButtons(const TIERichEditButtons Value);
	void __fastcall UpdateToolbarEx(bool FullUpdate);
	void __fastcall UpdateTimer(System::TObject* Sender);
	void __fastcall SetLockUpdate(bool v);
	MESSAGE void __fastcall CMStyleChanged(Winapi::Messages::TMessage &Message);
	void __fastcall SetWideToolbar(const bool Value);
	virtual void __fastcall Loaded();
	void __fastcall CustomButtonClick(System::TObject* Sender);
	
public:
	__fastcall virtual TCustomImageEnToolbar(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomImageEnToolbar();
	HIDESBASE void __fastcall UpdateButtons();
	void __fastcall InitializeButtons _DEPRECATED_ATTRIBUTE1("Use UpdateButtons() instead - http://imageen.com/help/Compatibility.html") ();
	__property bool LockUpdate = {read=fLockUpdate, write=SetLockUpdate, nodefault};
	void __fastcall UpdateLanguage();
	DYNAMIC void __fastcall GetChildren(System::Classes::TGetChildProc Proc, System::Classes::TComponent* Root);
	void __fastcall UpdateToolbar(bool FullUpdate = false);
	TImageEnViewButtons __fastcall CurrentImageEnViewButtons();
	void __fastcall UpdateSize();
	
__published:
	__property bool AlwaysSetRedraw = {read=fAlwaysSetRedraw, write=fAlwaysSetRedraw, default=0};
	__property bool HideParent = {read=fHideParent, write=fHideParent, default=0};
	__property bool KeyboardShortcuts = {read=fKeyboardShortcuts, write=SetKeyboardShortcuts, default=1};
	__property int ImageHue = {read=fImageHue, write=SetImageHue, default=-1000};
	__property bool AutoScale = {read=fAutoScale, write=SetAutoScale, default=1};
	__property double Scaling = {read=fScaling, write=SetScaling, stored=ScalingIsStored};
	__property TIEAddButtonEvent OnAddButton = {read=fOnAddButton, write=fOnAddButton};
	__property Iexcanvasutils::TIEAddButtonImageEvent OnAddButtonImage = {read=fOnAddButtonImage, write=fOnAddButtonImage};
	__property TIEAddCustomButtonEvent OnAddCustomButton = {read=fOnAddCustomButton, write=fOnAddCustomButton};
	__property TIEActionEvent OnActionExecute = {read=fOnActionExecute, write=fOnActionExecute};
	__property TIEActionEvent OnActionUpdate = {read=fOnActionUpdate, write=fOnActionUpdate};
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomImageEnToolbar(HWND ParentWindow) : Vcl::Comctrls::TToolBar(ParentWindow) { }
	
private:
	void *__IIELanguageUpdatable;	// Hyiedefs::IIELanguageUpdatable 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {6274D2D8-3E4C-43F2-8157-229558BFB2F0}
	operator Hyiedefs::_di_IIELanguageUpdatable()
	{
		Hyiedefs::_di_IIELanguageUpdatable intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Hyiedefs::IIELanguageUpdatable*(void) { return (Hyiedefs::IIELanguageUpdatable*)&__IIELanguageUpdatable; }
	#endif
	
};


class PASCALIMPLEMENTATION TImageEnViewToolbar : public TCustomImageEnToolbar
{
	typedef TCustomImageEnToolbar inherited;
	
protected:
	virtual Vcl::Controls::TWinControl* __fastcall GetControl();
	virtual void __fastcall SetControl(Vcl::Controls::TWinControl* const Value);
	
__published:
	__property bool AutoHideButtons = {read=fAutoHideButtons, write=fAutoHideButtons, default=1};
	__property TImageEnViewButtons Buttons = {read=GetImageEnViewButtons, write=SetImageEnViewButtons, default=0};
	__property Ieview::TIEViewMode ButtonMode = {read=GetImageEnViewButtonMode, write=SetImageEnViewButtonMode, default=1};
	__property Vcl::Controls::TWinControl* AttachedImageEnView = {read=fControl, write=SetControl};
	__property bool WideToolbar = {read=fWideToolbar, write=SetWideToolbar, default=0};
public:
	/* TCustomImageEnToolbar.Create */ inline __fastcall virtual TImageEnViewToolbar(System::Classes::TComponent* AOwner) : TCustomImageEnToolbar(AOwner) { }
	/* TCustomImageEnToolbar.Destroy */ inline __fastcall virtual ~TImageEnViewToolbar() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TImageEnViewToolbar(HWND ParentWindow) : TCustomImageEnToolbar(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TIERichEditToolbar : public TCustomImageEnToolbar
{
	typedef TCustomImageEnToolbar inherited;
	
protected:
	virtual Vcl::Controls::TWinControl* __fastcall GetControl();
	virtual void __fastcall SetControl(Vcl::Controls::TWinControl* const Value);
	
__published:
	__property TIERichEditButtons Buttons = {read=GetRichEditButtons, write=SetRichEditButtons, default=47856};
	__property Vcl::Controls::TWinControl* AttachedRichEdit = {read=fControl, write=SetControl};
	__property bool WideToolbar = {read=fWideToolbar, write=SetWideToolbar, default=1};
public:
	/* TCustomImageEnToolbar.Create */ inline __fastcall virtual TIERichEditToolbar(System::Classes::TComponent* AOwner) : TCustomImageEnToolbar(AOwner) { }
	/* TCustomImageEnToolbar.Destroy */ inline __fastcall virtual ~TIERichEditToolbar() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TIERichEditToolbar(HWND ParentWindow) : TCustomImageEnToolbar(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TImageEnViewHoverToolbar : public Vcl::Forms::TCustomForm
{
	typedef Vcl::Forms::TCustomForm inherited;
	
private:
	Vcl::Extctrls::TTimer* fTimer;
	TImageEnViewToolbar* fToolbar;
	void __fastcall FormShow(System::TObject* Sender);
	void __fastcall UpdatePosition(System::TObject* Sender);
	HIDESBASE Vcl::Controls::TWinControl* __fastcall GetControl();
	void __fastcall SetControl(Vcl::Controls::TWinControl* const Value);
	Ieview::TIEViewMode __fastcall GetButtonMode();
	void __fastcall SetButtonMode(const Ieview::TIEViewMode Value);
	bool __fastcall GetLockUpdate();
	void __fastcall SetLockUpdate(const bool Value);
	int __fastcall GetCurrentStateID();
	
protected:
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	HIDESBASE MESSAGE void __fastcall WMMouseActivate(Winapi::Messages::TWMMouseActivate &Message);
	
public:
	__property Vcl::Controls::TWinControl* AttachedImageEnView = {read=GetControl, write=SetControl};
	__property Ieview::TIEViewMode ButtonMode = {read=GetButtonMode, write=SetButtonMode, nodefault};
	__property bool LockUpdate = {read=GetLockUpdate, write=SetLockUpdate, nodefault};
	TImageEnViewButtons __fastcall CurrentImageEnViewButtons();
	__property int CurrentStateID = {read=GetCurrentStateID, nodefault};
	__fastcall virtual TImageEnViewHoverToolbar(System::Classes::TComponent* AOwner, int StartLocked);
	void __fastcall FormDestroy(System::TObject* Sender);
public:
	/* TCustomForm.Create */ inline __fastcall virtual TImageEnViewHoverToolbar(System::Classes::TComponent* AOwner) : Vcl::Forms::TCustomForm(AOwner) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TImageEnViewHoverToolbar() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TImageEnViewHoverToolbar(HWND ParentWindow) : Vcl::Forms::TCustomForm(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TIERichEditHoverToolbar : public Vcl::Forms::TCustomForm
{
	typedef Vcl::Forms::TCustomForm inherited;
	
private:
	Vcl::Extctrls::TTimer* fTimer;
	TIERichEditToolbar* fToolbar;
	void __fastcall FormShow(System::TObject* Sender);
	void __fastcall UpdatePosition(System::TObject* Sender);
	HIDESBASE Vcl::Controls::TWinControl* __fastcall GetControl();
	void __fastcall SetControl(Vcl::Controls::TWinControl* const Value);
	bool __fastcall GetLockUpdate();
	void __fastcall SetLockUpdate(const bool Value);
	
protected:
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	HIDESBASE MESSAGE void __fastcall WMMouseActivate(Winapi::Messages::TWMMouseActivate &Message);
	
public:
	__property Vcl::Controls::TWinControl* AttachedRichEdit = {read=GetControl, write=SetControl};
	__property bool LockUpdate = {read=GetLockUpdate, write=SetLockUpdate, nodefault};
	__fastcall virtual TIERichEditHoverToolbar(System::Classes::TComponent* AOwner, int StartLocked);
	void __fastcall FormDestroy(System::TObject* Sender);
public:
	/* TCustomForm.Create */ inline __fastcall virtual TIERichEditHoverToolbar(System::Classes::TComponent* AOwner) : Vcl::Forms::TCustomForm(AOwner) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TIERichEditHoverToolbar() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TIERichEditHoverToolbar(HWND ParentWindow) : Vcl::Forms::TCustomForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::Int8 ITBRES_Image_Size = System::Int8(0x18);
static const System::Word Image_Viewing_Toolbar_ID = System::Word(0x2710);
static const System::Word Image_Editing_Toolbar_ID = System::Word(0x2711);
static const System::Word Layer_Editing_Toolbar_ID = System::Word(0x2712);
static const System::Word Image_Selection_Toolbar_ID = System::Word(0x2713);
static const System::Word Layer_Selection_Toolbar_ID = System::Word(0x2714);
static const System::Word Image_Viewing_PopupMenu_ID = System::Word(0x2af8);
static const System::Word Image_Editing_PopupMenu_ID = System::Word(0x2af9);
static const System::Word Layer_Editing_PopupMenu_ID = System::Word(0x2afa);
static const System::Word Image_Selection_PopupMenu_ID = System::Word(0x2afb);
static const System::Word Layer_Selection_PopupMenu_ID = System::Word(0x2afc);
static const System::Word MView_Default_PopupMenu_ID = System::Word(0x2ee0);
static const System::Word MView_Selection_PopupMenu_ID = System::Word(0x2ee1);
static const System::Word FolderMView_Default_PopupMenu_ID = System::Word(0x2ee2);
static const System::Word FolderMView_Selection_PopupMenu_ID = System::Word(0x2ee3);
static const System::Word LayerMView_Default_PopupMenu_ID = System::Word(0x2ee4);
static const System::Word LayerMView_Selection_PopupMenu_ID = System::Word(0x2ee5);
static const System::Word Rich_Editor_Toolbar_ID = System::Word(0x32c8);
static const System::Word IERichEditor_PopupMenu_ID = System::Word(0x36b0);
static const System::Word IEViewPromptToOpen_Button_ID = System::Word(0x3e8);
static const System::Word IEViewSave_Button_ID = System::Word(0x3e9);
static const System::Word IEViewPromptToSave_Button_ID = System::Word(0x3ea);
static const System::Word IEViewSeekFirst_Button_ID = System::Word(0x3eb);
static const System::Word IEViewSeekLast_Button_ID = System::Word(0x3ec);
static const System::Word IEViewSeekNext_Button_ID = System::Word(0x3ed);
static const System::Word IEViewSeekPrior_Button_ID = System::Word(0x3ee);
static const System::Word IEViewDoPrintPreviewDialog_Button_ID = System::Word(0x3ef);
static const System::Word IEViewZoomBox_Button_ID = System::Word(0x3f0);
static const System::Word IEViewZoomIn_Button_ID = System::Word(0x3f1);
static const System::Word IEViewZoomOut_Button_ID = System::Word(0x3f2);
static const System::Word IEViewZoomFullSize_Button_ID = System::Word(0x3f3);
static const System::Word IEViewCutToClipboard_Button_ID = System::Word(0x3f4);
static const System::Word IEViewCopyToClipboard_Button_ID = System::Word(0x3f5);
static const System::Word IEViewPasteFromClipboard_Button_ID = System::Word(0x3f6);
static const System::Word IEViewMouseZoomAndScroll_Button_ID = System::Word(0x3f7);
static const System::Word IEViewMouseSelect_PopupButton_ID = System::Word(0x3f8);
static const System::Word IEViewMouseMeasure_PopupButton_ID = System::Word(0x3f9);
static const System::Word IEViewMouseEditLayers_Button_ID = System::Word(0x3fa);
static const System::Word IEViewMouseAddLayers_PopupButton_ID = System::Word(0x3fb);
static const System::Word IEViewRotateLeft_Button_ID = System::Word(0x3fc);
static const System::Word IEViewRotateRight_Button_ID = System::Word(0x3fd);
static const System::Word IEViewRotateTool_Button_ID = System::Word(0x3fe);
static const System::Word IEViewFlipHorizontal_Button_ID = System::Word(0x3ff);
static const System::Word IEViewFlipVertical_Button_ID = System::Word(0x400);
static const System::Word IEViewCrop_Button_ID = System::Word(0x401);
static const System::Word IEViewDoEditPreviews_Button_ID = System::Word(0x402);
static const System::Word IEViewAutoImageEnhance_Button_ID = System::Word(0x403);
static const System::Word IEViewHistAutoEqualize_Button_ID = System::Word(0x404);
static const System::Word IEViewConvertToGray_Button_ID = System::Word(0x405);
static const System::Word IEViewNegative_Button_ID = System::Word(0x406);
static const System::Word IEViewEditColors_PopupButton_ID = System::Word(0x407);
static const System::Word IEViewDoAdjustPreviews_Button_ID = System::Word(0x408);
static const System::Word IEViewDoEffectPreviews_Button_ID = System::Word(0x409);
static const System::Word IEViewToolColor_Button_ID = System::Word(0x40a);
static const System::Word IEViewColorPicker_Button_ID = System::Word(0x40b);
static const System::Word IEViewBrushTool_Button_ID = System::Word(0x40c);
static const System::Word IEViewSprayTool_Button_ID = System::Word(0x40d);
static const System::Word IEViewCloneTool_Button_ID = System::Word(0x40e);
static const System::Word IEViewToolBrushSizeBox_Button_ID = System::Word(0x40f);
static const System::Word IEViewToolBrushSize_Button_ID = System::Word(0x410);
static const System::Word IEViewRetouchTools_PopupButton_ID = System::Word(0x411);
static const System::Word IEViewColorFillTool_Button_ID = System::Word(0x412);
static const System::Word IEViewEraserTool_Button_ID = System::Word(0x413);
static const System::Word IEViewUndo_Button_ID = System::Word(0x414);
static const System::Word IEViewRedo_Button_ID = System::Word(0x415);
static const System::Word IEViewMousePdfSelect_PopupButton_ID = System::Word(0x5dc);
static const System::Word IEViewMousePdfSelect_Button_ID = System::Word(0x5dd);
static const System::Word IEPdfViewerRotateView_PopupButton_ID = System::Word(0x5de);
static const System::Word IEPdfViewerFindDialog_Button_ID = System::Word(0x5df);
static const System::Word IEPdfViewerShowAllPages_Button_ID = System::Word(0x5e0);
static const System::Word IEPdfViewerDeletePage_Button_ID = System::Word(0x5e1);
static const System::Word IEPdfViewerDemotePage_Button_ID = System::Word(0x5e2);
static const System::Word IEPdfViewerPromotePage_Button_ID = System::Word(0x5e3);
static const System::Word IEPdfViewerImportPages_Button_ID = System::Word(0x5e4);
static const System::Word IEViewFitToWidth_Button_ID = System::Word(0x5e5);
static const System::Word IELayersPromptToOpen_Button_ID = System::Word(0x7d0);
static const System::Word IELayersSave_Button_ID = System::Word(0x7d1);
static const System::Word IELayersPromptToSave_Button_ID = System::Word(0x7d2);
static const System::Word IELayersNew_PopupButton_ID = System::Word(0x7d3);
static const System::Word IELayersMerge_Button_ID = System::Word(0x7d4);
static const System::Word IELayersMergeAll_Button_ID = System::Word(0x7d5);
static const System::Word IELayersMergeToBackground_Button_ID = System::Word(0x7d6);
static const System::Word IELayersRemoveCurrent_Button_ID = System::Word(0x7d7);
static const System::Word IELayersCropBackground_Button_ID = System::Word(0x7d8);
static const System::Word IELayerConvertToImageLayer_Button_ID = System::Word(0x7d9);
static const System::Word IELayersGroup_Button_ID = System::Word(0x7da);
static const System::Word IELayersUngroup_Button_ID = System::Word(0x7db);
static const System::Word IELayerBorder_Button_ID = System::Word(0x7dc);
static const System::Word IELayerBorderColorBox_Button_ID = System::Word(0x7dd);
static const System::Word IELayerBorderSizeBox_Button_ID = System::Word(0x7de);
static const System::Word IELayerBorderSize_Button_ID = System::Word(0x7df);
static const System::Word IELayerFill_Button_ID = System::Word(0x7e0);
static const System::Word IELayerFillBox_Button_ID = System::Word(0x7e1);
static const System::Word IELayerRotateLeft_Button_ID = System::Word(0x7e2);
static const System::Word IELayerRotateRight_Button_ID = System::Word(0x7e3);
static const System::Word IELayerFlipHorz_Button_ID = System::Word(0x7e4);
static const System::Word IELayerFlipVert_Button_ID = System::Word(0x7e5);
static const System::Word IELayerRestoreAspectRatio_Button_ID = System::Word(0x7e6);
static const System::Word IELayerSizeToFit_Button_ID = System::Word(0x7e7);
static const System::Word IEImageLayerRestoreSize_Button_ID = System::Word(0x7e8);
static const System::Word IELayerFontSelect_Button_ID = System::Word(0x7e9);
static const System::Word IELayerFontBox_Button_ID = System::Word(0x7ea);
static const System::Word IELayerFontSize_Button_ID = System::Word(0x7eb);
static const System::Word IELayerFontColorSelect_Button_ID = System::Word(0x7ec);
static const System::Word IELayerFontBold_Button_ID = System::Word(0x7ed);
static const System::Word IELayerFontItalic_Button_ID = System::Word(0x7ee);
static const System::Word IELayerFontUnderline_Button_ID = System::Word(0x7ef);
static const System::Word IELayerTextAlignLeft_Button_ID = System::Word(0x7f0);
static const System::Word IELayerTextAlignRight_Button_ID = System::Word(0x7f1);
static const System::Word IELayerTextAlignCenter_Button_ID = System::Word(0x7f2);
static const System::Word IELayerShapeBox_Button_ID = System::Word(0x7f3);
static const System::Word IELayerEditText_Button_ID = System::Word(0x7f4);
static const System::Word IELineLayerShowLabel_Button_ID = System::Word(0x7f5);
static const System::Word IELineLayerStartShape_Button_ID = System::Word(0x7f6);
static const System::Word IELineLayerEndShape_Button_ID = System::Word(0x7f7);
static const System::Word IEImageLayerExecuteOpenDialog_Button_ID = System::Word(0x7f8);
static const System::Word IEPolylineLayerPolylineClosed_Button_ID = System::Word(0x7f9);
static const System::Word IEAngleLayerIncreaseAngle_Button_ID = System::Word(0x7fa);
static const System::Word IEAngleLayerDecreaseAngle_Button_ID = System::Word(0x7fb);
static const System::Word IEAngleLayerInvertAngle_Button_ID = System::Word(0x7fc);
static const System::Word IELineLayerIncreaseCurve_Button_ID = System::Word(0x7fd);
static const System::Word IELineLayerDecreaseCurve_Button_ID = System::Word(0x7fe);
static const System::Word IELayersShowPropertiesDialog_Button_ID = System::Word(0x7ff);
static const System::Word IELayersMove_PopupButton_ID = System::Word(0x800);
static const System::Word IELayersMoveSendToBack_Button_ID = System::Word(0x801);
static const System::Word IELayersMoveSendBackward_Button_ID = System::Word(0x802);
static const System::Word IELayersMoveBringForward_Button_ID = System::Word(0x803);
static const System::Word IELayersMoveBringToFront_Button_ID = System::Word(0x804);
static const System::Word IELayersAlign_PopupButton_ID = System::Word(0x805);
static const System::Word MViewSelectAll_Button_ID = System::Word(0xbb8);
static const System::Word MViewStyle_Button_ID = System::Word(0xbb9);
static const System::Word MViewColumns_Button_ID = System::Word(0xbba);
static const System::Word MViewShowText_Button_ID = System::Word(0xbbb);
static const System::Word MViewSort_Button_ID = System::Word(0xbbc);
static const System::Word MViewDoPrintPreviewDialog_Button_ID = System::Word(0xbbd);
static const System::Word MViewRotateLeft_Button_ID = System::Word(0xbbe);
static const System::Word MViewRotateRight_Button_ID = System::Word(0xbbf);
static const System::Word MViewFlipHorizontal_Button_ID = System::Word(0xbc0);
static const System::Word MViewFlipVertical_Button_ID = System::Word(0xbc1);
static const System::Word MViewDoEditPreviews_Button_ID = System::Word(0xbc2);
static const System::Word MViewDoAdjustPreviews_Button_ID = System::Word(0xbc3);
static const System::Word MViewDoEffectPreviews_Button_ID = System::Word(0xbc4);
static const System::Word FolderMViewRefreshFileList_Button_ID = System::Word(0xfa0);
static const System::Word FolderMViewOpenParentFolder_Button_ID = System::Word(0xfa1);
static const System::Word FolderMViewExecuteExploreFolder_Button_ID = System::Word(0xfa2);
static const System::Word FolderMViewNewFolder_Button_ID = System::Word(0xfa3);
static const System::Word FolderMViewExecuteFolderProperties_Button_ID = System::Word(0xfa4);
static const System::Word FolderMViewExecuteOpenSelectedFile_Button_ID = System::Word(0xfa5);
static const System::Word FolderMViewExecuteEditSelectedFile_Button_ID = System::Word(0xfa6);
static const System::Word FolderMViewCutFilesToClipboard_Button_ID = System::Word(0xfa7);
static const System::Word FolderMViewCopyFilesToClipboard_Button_ID = System::Word(0xfa8);
static const System::Word FolderMViewPasteFilesFromClipboard_Button_ID = System::Word(0xfa9);
static const System::Word FolderMViewMoveFilesToFolder_Button_ID = System::Word(0xfaa);
static const System::Word FolderMViewCopyFilesToFolder_Button_ID = System::Word(0xfab);
static const System::Word FolderMViewDeleteFilesFromFolder_Button_ID = System::Word(0xfac);
static const System::Word FolderMViewRenameFile_Button_ID = System::Word(0xfad);
static const System::Word FolderMViewExecutePropertiesOfFile_Button_ID = System::Word(0xfae);
static const System::Word LayerMViewNew_Button_ID = System::Word(0x1388);
static const System::Word LayerMViewMerge_Button_ID = System::Word(0x1389);
static const System::Word LayerMViewMergeAll_Button_ID = System::Word(0x138a);
static const System::Word LayerMViewMergeToBackground_Button_ID = System::Word(0x138b);
static const System::Word LayerMViewRemoveCurrent_Button_ID = System::Word(0x138c);
static const System::Word LayerMViewConvertToImageLayer_Button_ID = System::Word(0x138d);
static const System::Word LayerMViewGroup_Button_ID = System::Word(0x138e);
static const System::Word LayerMViewUngroup_Button_ID = System::Word(0x138f);
static const System::Word LayerMViewRename_Button_ID = System::Word(0x1390);
static const System::Word LayerMViewShowPropertiesDialog_Button_ID = System::Word(0x1391);
static const System::Word LayerMViewUndo_Button_ID = System::Word(0x1392);
static const System::Word LayerMViewRedo_Button_ID = System::Word(0x1393);
static const System::Word IERichEditNewDocument_Button_ID = System::Word(0x1770);
static const System::Word IERichEditPromptToOpen_Button_ID = System::Word(0x1771);
static const System::Word IERichEditSave_Button_ID = System::Word(0x1772);
static const System::Word IERichEditPromptToSave_Button_ID = System::Word(0x1773);
static const System::Word IERichEditPromptToPrint_Button_ID = System::Word(0x1774);
static const System::Word IERichEditSelectFont_Button_ID = System::Word(0x1775);
static const System::Word IERichEditFontBox_Button_ID = System::Word(0x1776);
static const System::Word IERichEditFontSize_Button_ID = System::Word(0x1777);
static const System::Word IERichEditFontColor_Button_ID = System::Word(0x1778);
static const System::Word IERichEditBold_Button_ID = System::Word(0x1779);
static const System::Word IERichEditItalic_Button_ID = System::Word(0x177a);
static const System::Word IERichEditUnderline_Button_ID = System::Word(0x177b);
static const System::Word IERichEditAlign_PopupButton_ID = System::Word(0x177c);
static const System::Word IERichEditAlignLeft_Button_ID = System::Word(0x177d);
static const System::Word IERichEditAlignRight_Button_ID = System::Word(0x177e);
static const System::Word IERichEditAlignCenter_Button_ID = System::Word(0x177f);
static const System::Word IERichEditAlignJustify_Button_ID = System::Word(0x1780);
static const System::Word IERichEditBullets_Button_ID = System::Word(0x1781);
static const System::Word IERichEditNumbering_Button_ID = System::Word(0x1782);
static const System::Word IERichEditSelectAll_Button_ID = System::Word(0x1783);
static const System::Word IERichEditCut_Button_ID = System::Word(0x1784);
static const System::Word IERichEditCopy_Button_ID = System::Word(0x1785);
static const System::Word IERichEditPaste_Button_ID = System::Word(0x1786);
static const System::Word IERichEditPasteSpecial_Button_ID = System::Word(0x1787);
static const System::Word IERichEditDelete_Button_ID = System::Word(0x1788);
static const System::Word IERichEditUndo_Button_ID = System::Word(0x1789);
static const System::Word IERichEditRedo_Button_ID = System::Word(0x178a);
static const System::Word IERichEditFindDialog_Button_ID = System::Word(0x178b);
static const System::Word IERichEditFindNext_Button_ID = System::Word(0x178c);
static const System::Word IERichEditReplaceDialog_Button_ID = System::Word(0x178d);
static const System::Word IERichEditInsertImage_Button_ID = System::Word(0x178e);
static const System::Word IERichEditInsertObjectDialog_Button_ID = System::Word(0x178f);
static const System::Word IERichEditZoomFullSize_Button_ID = System::Word(0x1790);
static const System::Word IERichEditZoomOut_Button_ID = System::Word(0x1791);
static const System::Word IERichEditZoomIn_Button_ID = System::Word(0x1792);
static const System::Word IERichEditSpellChecking_Button_ID = System::Word(0x1793);
static const System::Word IECustom_Button_ID = System::Word(0x7530);
static const short Global_Default_Hue = short(-1000);
#define Default_Image_Viewing_Buttons (System::Set<TImageEnViewButton, TImageEnViewButton::ivbImageOpen, TImageEnViewButton::ivbLayersMoveAndAlign>() << TImageEnViewButton::ivbImageOpen << TImageEnViewButton::ivbImageSave << TImageEnViewButton::ivbImageSeek << TImageEnViewButton::ivbImagePrint << TImageEnViewButton::ivbImageZoom << TImageEnViewButton::ivbMouseZoomAndScroll << TImageEnViewButton::ivbMouseMeasure )
#define Default_Image_Editing_Buttons (System::Set<TImageEnViewButton, TImageEnViewButton::ivbImageOpen, TImageEnViewButton::ivbLayersMoveAndAlign>() << TImageEnViewButton::ivbImageOpen << TImageEnViewButton::ivbImageSave << TImageEnViewButton::ivbImageZoom << TImageEnViewButton::ivbImageClipboard << TImageEnViewButton::ivbMouseZoomAndScroll << TImageEnViewButton::ivbMouseSelect << TImageEnViewButton::ivbImageEditRotate << TImageEnViewButton::ivbImageEditFlip << TImageEnViewButton::ivbImageEditOther << TImageEnViewButton::ivbImageEditDialogPreview << TImageEnViewButton::ivbImageEditColors << TImageEnViewButton::ivbImageEditColorPreview << TImageEnViewButton::ivbImageEditTools << TImageEnViewButton::ivbImageEditUndo )
#define Default_Image_Selection_Buttons (System::Set<TImageEnViewButton, TImageEnViewButton::ivbImageOpen, TImageEnViewButton::ivbLayersMoveAndAlign>() << TImageEnViewButton::ivbImageClipboard << TImageEnViewButton::ivbImageEditOther << TImageEnViewButton::ivbImageEditDialogPreview << TImageEnViewButton::ivbImageEditColors << TImageEnViewButton::ivbImageEditColorPreview )
#define Default_Layer_Editing_Buttons (System::Set<TImageEnViewButton, TImageEnViewButton::ivbImageOpen, TImageEnViewButton::ivbLayersMoveAndAlign>() << TImageEnViewButton::ivbImageZoom << TImageEnViewButton::ivbImageClipboard << TImageEnViewButton::ivbMouseZoomAndScroll << TImageEnViewButton::ivbMouseLayerEditing << TImageEnViewButton::ivbImageEditUndo << TImageEnViewButton::ivbLayersOpenSave << TImageEnViewButton::ivbLayersEdit << TImageEnViewButton::ivbLayersEditCurrent << TImageEnViewButton::ivbLayersGroup << TImageEnViewButton::ivbLayersStyle << TImageEnViewButton::ivbLayersRotate << TImageEnViewButton::ivbLayersSize << TImageEnViewButton::ivbLayersFont << TImageEnViewButton::ivbLayersFontStyle << TImageEnViewButton::ivbLayersFontAlignment \
	<< TImageEnViewButton::ivbLayersProps << TImageEnViewButton::ivbLayersPropsDlg << TImageEnViewButton::ivbLayersMoveAndAlign )
#define Default_Layer_Selection_Buttons (System::Set<TImageEnViewButton, TImageEnViewButton::ivbImageOpen, TImageEnViewButton::ivbLayersMoveAndAlign>() << TImageEnViewButton::ivbLayersStyle << TImageEnViewButton::ivbLayersRotate << TImageEnViewButton::ivbLayersSize << TImageEnViewButton::ivbLayersFont << TImageEnViewButton::ivbLayersFontStyle << TImageEnViewButton::ivbLayersProps << TImageEnViewButton::ivbLayersPropsDlg )
#define Default_Pdf_Viewing_Buttons (System::Set<TImageEnViewButton, TImageEnViewButton::ivbImageOpen, TImageEnViewButton::ivbLayersMoveAndAlign>() << TImageEnViewButton::ivbImageOpen << TImageEnViewButton::ivbImageSeek << TImageEnViewButton::ivbImagePrint << TImageEnViewButton::ivbImageZoom << TImageEnViewButton::ivbMouseZoomAndScroll << TImageEnViewButton::ivbMouseSelect )
#define Default_Pdf_Editing_Buttons (System::Set<TImageEnViewButton, TImageEnViewButton::ivbImageOpen, TImageEnViewButton::ivbLayersMoveAndAlign>() << TImageEnViewButton::ivbImageOpen << TImageEnViewButton::ivbImageSave << TImageEnViewButton::ivbImageSeek << TImageEnViewButton::ivbImagePrint << TImageEnViewButton::ivbImageZoom << TImageEnViewButton::ivbImageClipboard << TImageEnViewButton::ivbMouseZoomAndScroll << TImageEnViewButton::ivbMouseSelect << TImageEnViewButton::ivbImageEditRotate << TImageEnViewButton::ivbImageEditOther )
#define Default_Image_Viewing_PopupItems (System::Set<TImageEnViewButton, TImageEnViewButton::ivbImageOpen, TImageEnViewButton::ivbLayersMoveAndAlign>() << TImageEnViewButton::ivbImagePrint << TImageEnViewButton::ivbImageZoom )
#define Default_Image_Editing_PopupItems (System::Set<TImageEnViewButton, TImageEnViewButton::ivbImageOpen, TImageEnViewButton::ivbLayersMoveAndAlign>() << TImageEnViewButton::ivbImageZoom << TImageEnViewButton::ivbImageClipboard << TImageEnViewButton::ivbImageEditRotate << TImageEnViewButton::ivbImageEditOther << TImageEnViewButton::ivbImageEditUndo )
#define Default_Image_Selection_PopupItems (System::Set<TImageEnViewButton, TImageEnViewButton::ivbImageOpen, TImageEnViewButton::ivbLayersMoveAndAlign>() << TImageEnViewButton::ivbImageClipboard << TImageEnViewButton::ivbImageEditOther )
#define Default_Layer_Editing_PopupItems (System::Set<TImageEnViewButton, TImageEnViewButton::ivbImageOpen, TImageEnViewButton::ivbLayersMoveAndAlign>() << TImageEnViewButton::ivbImageZoom << TImageEnViewButton::ivbImageClipboard << TImageEnViewButton::ivbImageEditUndo << TImageEnViewButton::ivbLayersEdit )
#define Default_Layer_Selection_PopupItems (System::Set<TImageEnViewButton, TImageEnViewButton::ivbImageOpen, TImageEnViewButton::ivbLayersMoveAndAlign>() << TImageEnViewButton::ivbLayersStyle << TImageEnViewButton::ivbLayersRotate << TImageEnViewButton::ivbLayersSize << TImageEnViewButton::ivbLayersProps << TImageEnViewButton::ivbLayersPropsDlg )
#define Default_Pdf_Viewing_PopupItems (System::Set<TImageEnViewButton, TImageEnViewButton::ivbImageOpen, TImageEnViewButton::ivbLayersMoveAndAlign>() << TImageEnViewButton::ivbImagePrint << TImageEnViewButton::ivbImageZoom )
#define Default_Pdf_Editing_PopupItems (System::Set<TImageEnViewButton, TImageEnViewButton::ivbImageOpen, TImageEnViewButton::ivbLayersMoveAndAlign>() << TImageEnViewButton::ivbImagePrint << TImageEnViewButton::ivbImageZoom << TImageEnViewButton::ivbImageEditRotate << TImageEnViewButton::ivbImageEditOther )
#define All_Layer_Buttons (System::Set<TImageEnViewButton, TImageEnViewButton::ivbImageOpen, TImageEnViewButton::ivbLayersMoveAndAlign>() << TImageEnViewButton::ivbMouseLayerEditing << TImageEnViewButton::ivbLayersOpenSave << TImageEnViewButton::ivbLayersEdit << TImageEnViewButton::ivbLayersEditCurrent << TImageEnViewButton::ivbLayersGroup << TImageEnViewButton::ivbLayersStyle << TImageEnViewButton::ivbLayersRotate << TImageEnViewButton::ivbLayersOther << TImageEnViewButton::ivbLayersSize << TImageEnViewButton::ivbLayersFont << TImageEnViewButton::ivbLayersFontStyle << TImageEnViewButton::ivbLayersFontAlignment << TImageEnViewButton::ivbLayersProps << TImageEnViewButton::ivbLayersPropsDlg << TImageEnViewButton::ivbLayersMoveAndAlign )
#define All_Image_Editing_Buttons (System::Set<TImageEnViewButton, TImageEnViewButton::ivbImageOpen, TImageEnViewButton::ivbLayersMoveAndAlign>() << TImageEnViewButton::ivbImageEditRotate << TImageEnViewButton::ivbImageEditFlip << TImageEnViewButton::ivbImageEditOther << TImageEnViewButton::ivbImageEditDialogPreview << TImageEnViewButton::ivbImageEditColors << TImageEnViewButton::ivbImageEditColorPreview << TImageEnViewButton::ivbImageEditTools << TImageEnViewButton::ivbImageEditUndo )
#define Other_Buttons (System::Set<TImageEnViewButton, TImageEnViewButton::ivbImageOpen, TImageEnViewButton::ivbLayersMoveAndAlign>() << TImageEnViewButton::ivbImageOpen << TImageEnViewButton::ivbImageSave << TImageEnViewButton::ivbImageSeek << TImageEnViewButton::ivbImagePrint << TImageEnViewButton::ivbImageZoom << TImageEnViewButton::ivbImageClipboard << TImageEnViewButton::ivbMouseZoomAndScroll << TImageEnViewButton::ivbMouseSelect << TImageEnViewButton::ivbMouseMeasure )
#define Default_ImageEnMView_General_PopupItems (System::Set<TImageEnMViewButton, TImageEnMViewButton::imbSelect, TImageEnMViewButton::imbFileProperties>() << TImageEnMViewButton::imbViewStyle << TImageEnMViewButton::imbViewColumns << TImageEnMViewButton::imbSorting )
#define Default_ImageEnMView_Selection_PopupItems (System::Set<TImageEnMViewButton, TImageEnMViewButton::imbSelect, TImageEnMViewButton::imbFileProperties>() << TImageEnMViewButton::imbSelect << TImageEnMViewButton::imbImagePrint << TImageEnMViewButton::imbImageRotate )
#define Default_ImageEnFolderMView_Selection_PopupItems (System::Set<TImageEnMViewButton, TImageEnMViewButton::imbSelect, TImageEnMViewButton::imbFileProperties>() << TImageEnMViewButton::imbImagePrint << TImageEnMViewButton::imbImageRotate << TImageEnMViewButton::imbFileExecute << TImageEnMViewButton::imbFileClipboard << TImageEnMViewButton::imbFileProperties )
#define Default_ImageEnFolderMView_General_PopupItems (System::Set<TImageEnMViewButton, TImageEnMViewButton::imbSelect, TImageEnMViewButton::imbFileProperties>() << TImageEnMViewButton::imbViewStyle << TImageEnMViewButton::imbViewColumns << TImageEnMViewButton::imbSorting << TImageEnMViewButton::imbFolderRefresh << TImageEnMViewButton::imbFolderEdit << TImageEnMViewButton::imbFolderProperties )
#define Default_ImageEnLayerMView_General_PopupItems (System::Set<TImageEnLayerMViewButton, TImageEnLayerMViewButton::ilbSelect, TImageEnLayerMViewButton::ilbLayersUndo>() << TImageEnLayerMViewButton::ilbViewStyle << TImageEnLayerMViewButton::ilbViewColumns << TImageEnLayerMViewButton::ilbLayersEdit << TImageEnLayerMViewButton::ilbLayersUndo )
#define Default_ImageEnLayerMView_Selection_PopupItems (System::Set<TImageEnLayerMViewButton, TImageEnLayerMViewButton::ilbSelect, TImageEnLayerMViewButton::ilbLayersUndo>() << TImageEnLayerMViewButton::ilbLayersEditCurrent << TImageEnLayerMViewButton::ilbLayersGroup << TImageEnLayerMViewButton::ilbLayersRename << TImageEnLayerMViewButton::ilbLayersProps )
#define Default_Rich_Editor_Buttons (System::Set<TIERichEditButton, TIERichEditButton::irbRichEditNew, TIERichEditButton::irbRichEditSpellChecking>() << TIERichEditButton::irbRichEditFont << TIERichEditButton::irbRichEditFontStyle << TIERichEditButton::irbRichEditAlignment << TIERichEditButton::irbRichEditBullets << TIERichEditButton::irbRichEditClipboard << TIERichEditButton::irbRichEditUndo << TIERichEditButton::irbFindAndReplace << TIERichEditButton::irbObjects << TIERichEditButton::irbRichEditSpellChecking )
#define Default_RichEditor_PopupItems (System::Set<TIERichEditButton, TIERichEditButton::irbRichEditNew, TIERichEditButton::irbRichEditSpellChecking>() << TIERichEditButton::irbRichEditSelect << TIERichEditButton::irbRichEditClipboard << TIERichEditButton::irbRichEditUndo )
#define Default_TextEditor_PopupItems (System::Set<TIERichEditButton, TIERichEditButton::irbRichEditNew, TIERichEditButton::irbRichEditSpellChecking>() << TIERichEditButton::irbRichEditSelect << TIERichEditButton::irbRichEditClipboard << TIERichEditButton::irbRichEditOther << TIERichEditButton::irbRichEditUndo )
static const System::Word ITBRES_MIN_INDEX = System::Word(0x7d0);
static const System::Word ITBRES_FORMAT_FONT_24 = System::Word(0x7d0);
static const System::Word ITBRES_FORMAT_BOLD_24 = System::Word(0x7d1);
static const System::Word ITBRES_FORMAT_ITALIC_24 = System::Word(0x7d2);
static const System::Word ITBRES_FORMAT_UNDERLINE_24 = System::Word(0x7d3);
static const System::Word ITBRES_UPDOWN_24 = System::Word(0x7d4);
static const System::Word ITBRES_FORMAT_ALIGN_LEFT_24 = System::Word(0x7d5);
static const System::Word ITBRES_FORMAT_ALIGN_RIGHT_24 = System::Word(0x7d6);
static const System::Word ITBRES_FORMAT_ALIGN_CENTER_24 = System::Word(0x7d7);
static const System::Word ITBRES_FORMAT_ALIGN_JUSTIFY_24 = System::Word(0x7d8);
static const System::Word ITBRES_FORMAT_LIST_BULLETS_24 = System::Word(0x7d9);
static const System::Word ITBRES_FORMAT_LIST_NUMBERED_24 = System::Word(0x7da);
static const System::Word ITBRES_CUT_24 = System::Word(0x7db);
static const System::Word ITBRES_COPY_24 = System::Word(0x7dc);
static const System::Word ITBRES_PASTE_24 = System::Word(0x7dd);
static const System::Word ITBRES_PASTE_PLAIN_24 = System::Word(0x7de);
static const System::Word ITBRES_UNDO_24 = System::Word(0x7df);
static const System::Word ITBRES_REDO_24 = System::Word(0x7e0);
static const System::Word ITBRES_OPEN_24 = System::Word(0x7e1);
static const System::Word ITBRES_SAVE_24 = System::Word(0x7e2);
static const System::Word ITBRES_PROMPTTOSAVE_24 = System::Word(0x7e3);
static const System::Word ITBRES_SEEKFIRST_24 = System::Word(0x7e4);
static const System::Word ITBRES_SEEKLAST_24 = System::Word(0x7e5);
static const System::Word ITBRES_ARROW_LEFT_24 = System::Word(0x7e6);
static const System::Word ITBRES_ARROW_RIGHT_24 = System::Word(0x7e7);
static const System::Word ITBRES_PRINTER_24 = System::Word(0x7e8);
static const System::Word ITBRES_COLORPICKER_24 = System::Word(0x7e9);
static const System::Word ITBRES_ZOOMFULLSIZE_24 = System::Word(0x7ea);
static const System::Word ITBRES_ZOOMIN_24 = System::Word(0x7eb);
static const System::Word ITBRES_ZOOMOUT_24 = System::Word(0x7ec);
static const System::Word ITBRES_MOUSEZOOMANDSCROLL_24 = System::Word(0x7ed);
static const System::Word ITBRES_MOUSESELECT_24 = System::Word(0x7ee);
static const System::Word ITBRES_MOUSEMEASURE_24 = System::Word(0x7ef);
static const System::Word ITBRES_SHOWPROPERTIESDIALOG_24 = System::Word(0x7f0);
static const System::Word ITBRES_NEWLAYER_24 = System::Word(0x7f1);
static const System::Word ITBRES_ROTATELEFT_24 = System::Word(0x7f2);
static const System::Word ITBRES_ROTATERIGHT_24 = System::Word(0x7f3);
static const System::Word ITBRES_FLIPHORIZONTAL_24 = System::Word(0x7f4);
static const System::Word ITBRES_FLIPVERTICAL_24 = System::Word(0x7f5);
static const System::Word ITBRES_CROP_24 = System::Word(0x7f6);
static const System::Word ITBRES_DOEDITPREVIEWS_24 = System::Word(0x7f7);
static const System::Word ITBRES_CONVERTTOGRAY_24 = System::Word(0x7f8);
static const System::Word ITBRES_NEGATIVE_24 = System::Word(0x7f9);
static const System::Word ITBRES_DOADJUSTPREVIEWS_24 = System::Word(0x7fa);
static const System::Word ITBRES_DOEFFECTPREVIEWS_24 = System::Word(0x7fb);
static const System::Word ITBRES_BRUSHTOOL_24 = System::Word(0x7fc);
static const System::Word ITBRES_SPRAYTOOL_24 = System::Word(0x7fd);
static const System::Word ITBRES_CLONETOOL_24 = System::Word(0x7fe);
static const System::Word ITBRES_COLORFILLTOOL_24 = System::Word(0x7ff);
static const System::Word ITBRES_ERASERTOOL_24 = System::Word(0x800);
static const System::Word ITBRES_ROTATETOOL_24 = System::Word(0x801);
static const System::Word ITBRES_MOUSEADDLAYERS_24 = System::Word(0x802);
static const System::Word ITBRES_MERGE_24 = System::Word(0x803);
static const System::Word ITBRES_MERGETOBACKGROUND_24 = System::Word(0x804);
static const System::Word ITBRES_REMOVECURRENT_24 = System::Word(0x805);
static const System::Word ITBRES_CROPBACKGROUND_24 = System::Word(0x806);
static const System::Word ITBRES_CONVERTTOIMAGELAYER_24 = System::Word(0x807);
static const System::Word ITBRES_GROUP_24 = System::Word(0x808);
static const System::Word ITBRES_UNGROUP_24 = System::Word(0x809);
static const System::Word ITBRES_FILL_24 = System::Word(0x80a);
static const System::Word ITBRES_BORDER_24 = System::Word(0x80b);
static const System::Word ITBRES_RESTOREASPECTRATIO_24 = System::Word(0x80c);
static const System::Word ITBRES_SIZETOFIT_24 = System::Word(0x80d);
static const System::Word ITBRES_RESTORESIZE_24 = System::Word(0x80e);
static const System::Word ITBRES_MOUSEEDITLAYERS_24 = System::Word(0x80f);
static const System::Word ITBRES_EDITTEXT_24 = System::Word(0x810);
static const System::Word ITBRES_SHOWLABEL_24 = System::Word(0x811);
static const System::Word ITBRES_OPENIMAGEDIALOG_24 = System::Word(0x812);
static const System::Word ITBRES_POLYLINECLOSED_24 = System::Word(0x813);
static const System::Word ITBRES_INVERTANGLE_24 = System::Word(0x814);
static const System::Word ITBRES_INCREASECURVE_24 = System::Word(0x815);
static const System::Word ITBRES_DECREASECURVE_24 = System::Word(0x816);
static const System::Word ITBRES_MOVESENDTOBACK_24 = System::Word(0x817);
static const System::Word ITBRES_MOVESENDBACKWARD_24 = System::Word(0x818);
static const System::Word ITBRES_MOVEBRINGFORWARD_24 = System::Word(0x819);
static const System::Word ITBRES_MOVEBRINGTOFRONT_24 = System::Word(0x81a);
static const System::Word ITBRES_ALIGNLAYERS_24 = System::Word(0x81b);
static const System::Word ITBRES_INCREASEANGLE_24 = System::Word(0x81c);
static const System::Word ITBRES_DECREASEANGLE_24 = System::Word(0x81d);
static const System::Word ITBRES_STARTSHAPE_24 = System::Word(0x81e);
static const System::Word ITBRES_ENDSHAPE_24 = System::Word(0x81f);
static const System::Word ITBRES_COLOR_PALETTE_24 = System::Word(0x820);
static const System::Word ITBRES_MERGEALL_24 = System::Word(0x821);
static const System::Word ITBRES_IMAGEEDIT_24 = System::Word(0x822);
static const System::Word ITBRES_SELECTALL_24 = System::Word(0x823);
static const System::Word ITBRES_VIEW_24 = System::Word(0x824);
static const System::Word ITBRES_COLUMNS_24 = System::Word(0x825);
static const System::Word ITBRES_SORTING_24 = System::Word(0x826);
static const System::Word ITBRES_OPENNEW_24 = System::Word(0x827);
static const System::Word ITBRES_NEWFOLDER_24 = System::Word(0x828);
static const System::Word ITBRES_PROPERTIES_24 = System::Word(0x829);
static const System::Word ITBRES_MOVEFILES_24 = System::Word(0x82a);
static const System::Word ITBRES_COPYFILES_24 = System::Word(0x82b);
static const System::Word ITBRES_DELETE_24 = System::Word(0x82c);
static const System::Word ITBRES_RENAME_24 = System::Word(0x82d);
static const System::Word ITBRES_REFRESH_24 = System::Word(0x82e);
static const System::Word ITBRES_GOUP_24 = System::Word(0x82f);
static const System::Word ITBRES_NEW_24 = System::Word(0x830);
static const System::Word ITBRES_AUTOFIX_24 = System::Word(0x831);
static const System::Word ITBRES_AUTOEQUALIZE_24 = System::Word(0x832);
static const System::Word ITBRES_RETOUCHTOOLS_24 = System::Word(0x833);
static const System::Word ITBRES_SEARCHFILE_24 = System::Word(0x834);
static const System::Word ITBRES_FILENEXT_24 = System::Word(0x835);
static const System::Word ITBRES_FILEREPLACE_24 = System::Word(0x836);
static const System::Word ITBRES_OBJECT_24 = System::Word(0x837);
static const System::Word ITBRES_IMAGE_24 = System::Word(0x838);
static const System::Word ITBRES_SHOWALLPAGES_24 = System::Word(0x839);
static const System::Word ITBRES_DOCUMENTROTATE_24 = System::Word(0x83a);
static const System::Word ITBRES_FITWIDTH_24 = System::Word(0x83b);
static const System::Word ITBRES_SEARCH_24 = System::Word(0x83c);
static const System::Word ITBRES_CLOUDOUTLINE_24 = System::Word(0x83d);
static const System::Word ITBRES_DRAW_24 = System::Word(0x83e);
static const System::Word ITBRES_FLASH_24 = System::Word(0x83f);
static const System::Word ITBRES_FORMATPAINT_24 = System::Word(0x840);
static const System::Word ITBRES_GRADIENTVERTICAL_24 = System::Word(0x841);
static const System::Word ITBRES_HAMMERWRENCH_24 = System::Word(0x842);
static const System::Word ITBRES_HELPCIRCLEOUTLIN_24 = System::Word(0x843);
static const System::Word ITBRES_HOMEOUTLINE_24 = System::Word(0x844);
static const System::Word ITBRES_INFORMATIONOUTLINE_24 = System::Word(0x845);
static const System::Word ITBRES_OPENINAPP_24 = System::Word(0x846);
static const System::Word ITBRES_PENCIL_24 = System::Word(0x847);
static const System::Word ITBRES_SHAPE_24 = System::Word(0x848);
static const System::Word ITBRES_SWAPVERTICAL_24 = System::Word(0x849);
static const System::Word ITBRES_TEXTBOXOUTLINE_24 = System::Word(0x84a);
static const System::Word ITBRES_TOOLTIPIMAGEOUTLINE_24 = System::Word(0x84b);
static const System::Word ITBRES_CART_24 = System::Word(0x84c);
static const System::Word ITBRES_FOLDERIMAGE_24 = System::Word(0x84d);
static const System::Word ITBRES_FOLDEROUTLINE_24 = System::Word(0x84e);
static const System::Word ITBRES_IMAGEMARKEROUTLINE_24 = System::Word(0x84f);
static const System::Word ITBRES_IMAGEMULTIPLEOUTLINE_24 = System::Word(0x850);
static const System::Word ITBRES_IMAGESEARCH_24 = System::Word(0x851);
static const System::Word ITBRES_MAPMARKER_24 = System::Word(0x852);
static const System::Word ITBRES_TAGTEXT_24 = System::Word(0x853);
static const System::Word ITBRES_LANGUAGE_24 = System::Word(0x854);
static const System::Word ITBRES_MAX_INDEX = System::Word(0x854);
static const System::Word ITBRES_IMPORTPAGES_24 = System::Word(0x81a);
static const System::Word ITBRES_DEMOTEPAGE_24 = System::Word(0x818);
static const System::Word ITBRES_PROMOTEPAGE_24 = System::Word(0x819);
static const System::Word ITBRES_FULLPAGE_24 = System::Word(0x830);
static const System::Word ITBRES_SPELLING_24 = System::Word(0x854);
extern DELPHI_PACKAGE int __fastcall GetStateID(System::TObject* lyr);
extern DELPHI_PACKAGE void __fastcall AddItemsToImageEnViewPopupMenu(Vcl::Menus::TPopupMenu* Popup, Vcl::Controls::TWinControl* IE, TImageEnViewButtons Items, int ToolbarID);
extern DELPHI_PACKAGE void __fastcall AddItemsToIERichEditPopupMenu(Vcl::Menus::TPopupMenu* Popup, Vcl::Controls::TWinControl* RE, TIERichEditButtons Items);
extern DELPHI_PACKAGE void __fastcall AddItemsToImageEnMViewPopupMenu(Vcl::Menus::TPopupMenu* Popup, Vcl::Controls::TWinControl* IEMView, TImageEnMViewButtons Items, int ToolbarID);
extern DELPHI_PACKAGE void __fastcall AddItemsToImageEnLayerMViewPopupMenu(Vcl::Menus::TPopupMenu* Popup, Vcl::Controls::TWinControl* IEMView, TImageEnLayerMViewButtons Items, int ToolbarID);
}	/* namespace Iextoolbars */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_IEXTOOLBARS)
using namespace Iextoolbars;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// IextoolbarsHPP
