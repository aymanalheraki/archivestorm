// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'ieopensavedlg.pas' rev: 35.00 (Windows)

#ifndef IeopensavedlgHPP
#define IeopensavedlgHPP

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
#include <Winapi.CommDlg.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.Clipbrd.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Dialogs.hpp>
#include <hyieutils.hpp>
#include <hyiedefs.hpp>
#include <imageenio.hpp>
#include <imageenview.hpp>
#include <iexBitmaps.hpp>
#include <ievect.hpp>
#include <iemview.hpp>
#include <iemio.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Ieopensavedlg
{
//-- forward type declarations -----------------------------------------------
struct TIEOpenFileNameEx;
class DELPHICLASS TIECommonDialog;
class DELPHICLASS TOpenImageEnDialog;
class DELPHICLASS TSaveImageEnDialog;
//-- type declarations -------------------------------------------------------
struct DECLSPEC_DRECORD TIEOpenFileNameEx
{
public:
	unsigned lStructSize;
	HWND hWndOwner;
	NativeUInt hInstance;
	void *lpstrFilter;
	void *lpstrCustomFilter;
	unsigned nMaxCustFilter;
	unsigned nFilterIndex;
	void *lpstrFile;
	unsigned nMaxFile;
	void *lpstrFileTitle;
	unsigned nMaxFileTitle;
	void *lpstrInitialDir;
	void *lpstrTitle;
	unsigned Flags;
	System::Word nFileOffset;
	System::Word nFileExtension;
	void *lpstrDefExt;
	NativeInt lCustData;
	unsigned __stdcall (*lpfnHook)(HWND Wnd, unsigned Msg, NativeUInt wParam, NativeInt lParam);
	void *lpTemplateName;
	void *pvReserved;
	unsigned dwReserved;
	unsigned FlagsEx;
};


typedef TIEOpenFileNameEx *PIEOpenFileNameEx;

typedef void __fastcall (__closure *TIEFileDlgPreviewEvent)(System::TObject* Sender, System::TObject* Viewer, System::UnicodeString FileName, bool ParamsOnly);

enum DECLSPEC_DENUM TIEDBorderStyle : unsigned char { iepsDefault, iepsCropped, iepsCropShadow, iepsSoftShadow };

enum DECLSPEC_DENUM TIECommonDialogView : unsigned char { iedvDefault, iedvSmallIcons, iedvMediumIcons, iedvLargeIcons, iedvExtraLargeIcons, iedvTiles, iedvList, iedvDetails };

enum DECLSPEC_DENUM TIEPreviewSize : unsigned char { iespDefault, iespTall, iespLarge };

class PASCALIMPLEMENTATION TIECommonDialog : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	bool fCtl3D;
	void *fDefWndProc;
	System::Classes::THelpContext fHelpContext;
	HWND fHandle;
	void *fObjectInstance;
	System::WideChar *fTemplate;
	System::Classes::TNotifyEvent fOnClose;
	System::Classes::TNotifyEvent fOnShow;
	bool fShowPlacesBar;
	TIECommonDialogView fFileView;
	Vcl::Extctrls::TTimer* fWatchTimer;
	MESSAGE void __fastcall WMDestroy(Winapi::Messages::TWMNoParams &Message);
	MESSAGE void __fastcall WMInitDialog(Winapi::Messages::TWMInitDialog &Message);
	MESSAGE void __fastcall WMNCDestroy(Winapi::Messages::TWMNoParams &Message);
	void __fastcall MainWndProc(Winapi::Messages::TMessage &Message);
	
protected:
	bool fExtendedDialog;
	DYNAMIC void __fastcall DoClose();
	DYNAMIC void __fastcall DoShow();
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	virtual bool __fastcall MessageHook(Winapi::Messages::TMessage &Msg);
	virtual System::LongBool __fastcall TaskModalDialog(void * DialogFunc, void *DialogData);
	virtual bool __fastcall Execute() = 0 ;
	__property System::WideChar * Template = {read=fTemplate, write=fTemplate};
	System::WideString __fastcall ExtractFilter(void * ss, int idx);
	
public:
	__fastcall virtual TIECommonDialog(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TIECommonDialog();
	virtual void __fastcall DefaultHandler(void *Message);
	__property HWND Handle = {read=fHandle, nodefault};
	
__published:
	__property bool Ctl3D = {read=fCtl3D, write=fCtl3D, default=0};
	__property System::Classes::THelpContext HelpContext = {read=fHelpContext, write=fHelpContext, default=0};
	__property System::Classes::TNotifyEvent OnClose = {read=fOnClose, write=fOnClose};
	__property System::Classes::TNotifyEvent OnShow = {read=fOnShow, write=fOnShow};
	__property bool ShowPlacesBar = {read=fShowPlacesBar, write=fShowPlacesBar, default=1};
	__property TIECommonDialogView FileView = {read=fFileView, write=fFileView, default=0};
	__property bool ExtendedDialog = {read=fExtendedDialog, write=fExtendedDialog, default=1};
};


class PASCALIMPLEMENTATION TOpenImageEnDialog : public TIECommonDialog
{
	typedef TIECommonDialog inherited;
	
private:
	bool m_blnInSelectionChange;
	Ievect::TImageEnVect* fImageEnView;
	Iemview::TImageEnMView* fImageEnMView;
	Vcl::Extctrls::TPanel* fPicturePanel;
	Vcl::Stdctrls::TLabel* fPicLabel1;
	Vcl::Stdctrls::TLabel* fPicLabel2;
	Vcl::Stdctrls::TLabel* fPicLabel3;
	Vcl::Extctrls::TPanel* fInfoPanel;
	Vcl::Stdctrls::TLabel* fInfoLabel1;
	Vcl::Stdctrls::TLabel* fInfoLabel2;
	Vcl::Buttons::TSpeedButton* fPreviewButton;
	Vcl::Stdctrls::TComboBox* fZoomComboBox;
	Vcl::Comctrls::TProgressBar* fProgressBar;
	Vcl::Buttons::TSpeedButton* fPlayButton;
	bool fAlwaysAnimate;
	Vcl::Stdctrls::TButton* fAdvancedButton;
	Vcl::Stdctrls::TCheckBox* fPreviewCheck;
	__int64 fFileSize;
	int fFrames;
	System::WideString fSelType;
	bool fAutoSetFilter;
	int fAutoSetFilterFileType;
	bool fAutoAdjustDPI;
	bool fFilteredAdjustDPI;
	bool fGetExifThumbnail;
	System::Classes::TStrings* fHistoryList;
	System::Uitypes::TOpenOptions fOptions;
	System::UnicodeString fFilter;
	int fFilterIndex;
	int fFilterDefault;
	int fCurrentFilterIndex;
	System::UnicodeString fInitialDir;
	System::UnicodeString fTitle;
	System::UnicodeString fDefaultExt;
	System::WideString fFileNameW;
	System::Classes::TStrings* fFiles;
	Hyieutils::TIEWideStrings* fFilesW;
	Vcl::Dialogs::TFileEditStyle fFileEditStyle;
	System::Classes::TNotifyEvent fOnSelectionChange;
	System::Classes::TNotifyEvent fOnFolderChange;
	System::Classes::TNotifyEvent fOnTypeChange;
	Vcl::Forms::TCloseQueryEvent fOnCanClose;
	TIEDBorderStyle fPreviewBorderStyle;
	Hyiedefs::TIEShowFormats fShowFormats;
	System::UnicodeString fExtendedFilters;
	bool fShowAllFrames;
	int fSelectedFrame;
	void *OpenFileNameExShadow;
	System::Classes::TNotifyEvent fOnCreateCustomControls;
	System::Classes::TNotifyEvent fOnDestroyCustomControls;
	TIEFileDlgPreviewEvent fOnPreviewFile;
	bool fPreviewIsFullSize;
	TIEPreviewSize fPreviewSize;
	bool fModernDialog;
	System::Sysutils::TFileName __fastcall GetFileName();
	System::WideString __fastcall GetFileNameW();
	System::WideString __fastcall GetLongFileName();
	System::WideString __fastcall GetFileName2();
	int __fastcall GetFilterIndex();
	void __fastcall ReadFileEditStyle(System::Classes::TReader* Reader);
	void __fastcall SetHistoryList(System::Classes::TStrings* v);
	void __fastcall SetInitialDir(const System::UnicodeString v);
	void __fastcall PreviewClick(System::TObject* Sender);
	void __fastcall PreviewKeyPress(System::TObject* Sender, System::WideChar &Key);
	void __fastcall ZoomComboChange(System::TObject* Sender);
	void __fastcall ImageEnIOProgress(System::TObject* Sender, int per);
	void __fastcall ShowIOParams(Iexbitmaps::TIOParams* params);
	void __fastcall DoCheckPreview(System::TObject* Sender);
	void __fastcall SetPreviewBorderStyle(TIEDBorderStyle v);
	void __fastcall SetZoomFilter(Hyiedefs::TResampleFilter v);
	Hyiedefs::TResampleFilter __fastcall GetZoomFilter();
	void __fastcall SetAlwaysAnimate(bool v);
	void __fastcall SetAutoSetFilter(const bool v);
	void __fastcall SetAutoSetFilterFileType(const int v);
	void __fastcall SetShowFormats(const Hyiedefs::TIEShowFormats v);
	void __fastcall SetFileName(System::Sysutils::TFileName v);
	void __fastcall SetPreviewSize(const TIEPreviewSize v);
	void __fastcall UpdateBackground();
	bool __fastcall IsCustomFilter();
	void __fastcall UpdateLayout();
	
protected:
	bool fShowPreview;
	void __fastcall PlayClick(System::TObject* Sender);
	bool __fastcall CanClose(TIEOpenFileNameEx &OpenFileName);
	DYNAMIC bool __fastcall DoCanClose();
	System::LongBool __fastcall DoExecute(void * Func);
	DYNAMIC void __fastcall DoSelectionChange();
	DYNAMIC void __fastcall DoFolderChange();
	DYNAMIC void __fastcall DoTypeChange();
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	void __fastcall GetFileNames(TIEOpenFileNameEx &OpenFileName);
	virtual System::Types::TRect __fastcall GetStaticRect();
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	virtual void __fastcall SetZoom();
	DYNAMIC void __fastcall DoClose();
	DYNAMIC void __fastcall DoShow();
	void __fastcall SetLang();
	void __fastcall OnMViewSelect(System::TObject* Sender, int idx);
	void __fastcall DoAllDisplayed(System::TObject* Sender);
	bool __fastcall LoadPreview(bool LoadImage, bool FullSize);
	bool __fastcall NeedLoadPreviewFullSize();
	int __fastcall SelectedZoom();
	
public:
	__fastcall virtual TOpenImageEnDialog(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TOpenImageEnDialog();
	virtual bool __fastcall Execute();
	__property Vcl::Dialogs::TFileEditStyle FileEditStyle = {read=fFileEditStyle, write=fFileEditStyle, nodefault};
	__property System::Classes::TStrings* Files = {read=fFiles};
	__property Hyieutils::TIEWideStrings* FilesW = {read=fFilesW};
	__property System::Classes::TStrings* HistoryList = {read=fHistoryList, write=SetHistoryList};
	__property Vcl::Extctrls::TPanel* PicturePanel = {read=fPicturePanel};
	__property Vcl::Extctrls::TPanel* InfoPanel = {read=fInfoPanel};
	__property Vcl::Stdctrls::TCheckBox* PreviewCheckBox = {read=fPreviewCheck};
	__property int SelectedFrame = {read=fSelectedFrame, write=fSelectedFrame, nodefault};
	__property System::WideString FileNameW = {read=GetFileNameW, write=fFileNameW};
	System::UnicodeString __fastcall DefaultFilter();
	
__published:
	__property System::UnicodeString DefaultExt = {read=fDefaultExt, write=fDefaultExt};
	__property System::Sysutils::TFileName FileName = {read=GetFileName, write=SetFileName};
	__property System::UnicodeString Filter = {read=fFilter, write=fFilter, stored=IsCustomFilter};
	__property int FilterIndex = {read=GetFilterIndex, write=fFilterIndex, default=1};
	__property int FilterDefault = {read=fFilterDefault, write=fFilterDefault, default=-1};
	__property System::UnicodeString InitialDir = {read=fInitialDir, write=SetInitialDir};
	__property System::Uitypes::TOpenOptions Options = {read=fOptions, write=fOptions, default=524292};
	__property System::UnicodeString Title = {read=fTitle, write=fTitle};
	__property Vcl::Forms::TCloseQueryEvent OnCanClose = {read=fOnCanClose, write=fOnCanClose};
	__property System::Classes::TNotifyEvent OnFolderChange = {read=fOnFolderChange, write=fOnFolderChange};
	__property System::Classes::TNotifyEvent OnSelectionChange = {read=fOnSelectionChange, write=fOnSelectionChange};
	__property System::Classes::TNotifyEvent OnTypeChange = {read=fOnTypeChange, write=fOnTypeChange};
	__property bool AutoSetFilter = {read=fAutoSetFilter, write=SetAutoSetFilter, default=1};
	__property int AutoSetFilterFileType = {read=fAutoSetFilterFileType, write=SetAutoSetFilterFileType, default=-1};
	__property bool AlwaysAnimate = {read=fAlwaysAnimate, write=SetAlwaysAnimate, default=0};
	__property TIEDBorderStyle PreviewBorderStyle = {read=fPreviewBorderStyle, write=SetPreviewBorderStyle, default=0};
	__property bool AutoAdjustDPI = {read=fAutoAdjustDPI, write=fAutoAdjustDPI, default=0};
	__property bool GetExifThumbnail = {read=fGetExifThumbnail, write=fGetExifThumbnail, default=0};
	__property bool FilteredAdjustDPI = {read=fFilteredAdjustDPI, write=fFilteredAdjustDPI, default=0};
	__property Hyiedefs::TResampleFilter ZoomFilter = {read=GetZoomFilter, write=SetZoomFilter, default=9};
	__property bool ShowAllFrames = {read=fShowAllFrames, write=fShowAllFrames, default=1};
	__property Hyiedefs::TIEShowFormats ShowFormats = {read=fShowFormats, write=SetShowFormats, default=0};
	__property TIEPreviewSize PreviewSize = {read=fPreviewSize, write=SetPreviewSize, default=0};
	__property bool ModernDialog = {read=fModernDialog, write=fModernDialog, default=0};
	__property System::UnicodeString ExtendedFilters = {read=fExtendedFilters, write=fExtendedFilters};
	__property System::Classes::TNotifyEvent OnCreateCustomControls = {read=fOnCreateCustomControls, write=fOnCreateCustomControls};
	__property System::Classes::TNotifyEvent OnDestroyCustomControls = {read=fOnDestroyCustomControls, write=fOnDestroyCustomControls};
	__property TIEFileDlgPreviewEvent OnPreviewFile = {read=fOnPreviewFile, write=fOnPreviewFile};
};


enum DECLSPEC_DENUM Ieopensavedlg__3 : unsigned char { sdShowPreview, sdShowAdvanced };

typedef System::Set<Ieopensavedlg__3, Ieopensavedlg__3::sdShowPreview, Ieopensavedlg__3::sdShowAdvanced> TIESaveDlgOpt;

class PASCALIMPLEMENTATION TSaveImageEnDialog : public TOpenImageEnDialog
{
	typedef TOpenImageEnDialog inherited;
	
private:
	TIESaveDlgOpt fExOptions;
	bool fAutoMultiOnly;
	System::Classes::TComponent* fAttachedImageEnIO;
	void __fastcall OnWatchTimer(System::TObject* Sender);
	void __fastcall DoAdvanced(System::TObject* Sender);
	void __fastcall SetAttachedImageEnIO(System::Classes::TComponent* v);
	void __fastcall SetAutoMultiOnly(const bool v);
	
protected:
	DYNAMIC void __fastcall DoTypeChange();
	virtual void __fastcall SetFileNameExt();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	void __fastcall GetAdvancedType(Hyieutils::TPreviewParams &pp, int &ft);
	void __fastcall EnableDisableAdvanced();
	
public:
	__fastcall virtual TSaveImageEnDialog(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TSaveImageEnDialog();
	virtual bool __fastcall Execute();
	
__published:
	__property bool AutoMultiOnly = {read=fAutoMultiOnly, write=SetAutoMultiOnly, default=1};
	__property TIESaveDlgOpt ExOptions = {read=fExOptions, write=fExOptions, default=3};
	__property System::Classes::TComponent* AttachedImageEnIO = {read=fAttachedImageEnIO, write=SetAttachedImageEnIO};
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Ieopensavedlg */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_IEOPENSAVEDLG)
using namespace Ieopensavedlg;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// IeopensavedlgHPP
