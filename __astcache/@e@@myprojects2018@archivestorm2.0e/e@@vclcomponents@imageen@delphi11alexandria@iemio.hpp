// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'iemio.pas' rev: 35.00 (Windows)

#ifndef IemioHPP
#define IemioHPP

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
#include <Vcl.Forms.hpp>
#include <Vcl.Printers.hpp>
#include <System.UITypes.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <hyiedefs.hpp>
#include <imageenio.hpp>
#include <ieview.hpp>
#include <hyieutils.hpp>
#include <ietwain.hpp>
#include <iexAcquire.hpp>
#include <iexDCIM.hpp>
#include <iewia.hpp>
#include <iexBitmaps.hpp>

//-- user supplied -----------------------------------------------------------

namespace Iemio
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TImageEnMIO;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TImageEnMIO : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	Ieview::TIEView* fMView;
	void *fMViewBitmapChangeHandle;
	Iexbitmaps::TIECustomMultiBitmap* fIEMBitmap;
	bool fIEMBitmapCreated;
	bool fSimplifiedParamsDialogs;
	Iexacquire::TIEAcquireParams* fAcquireParams;
	Ietwain::TIETwainParams* fTwainParams;
	Iewia::TIEWia* fWIA;
	Iexdcim::TIEDcimAcquire* fDCIMParams;
	Hyieutils::TIOPreviewsParams fPreviewsParams;
	Vcl::Graphics::TFont* fPreviewFont;
	bool fPreviewFontEnabled;
	int fTwainNextToInsert;
	bool fAutoAdjustDPI;
	bool fFilteredAdjustDPI;
	Hyieutils::TIEDitherMethod fDefaultDitherMethod;
	bool fResetPrinter;
	Imageenio::TIEDialogsMeasureUnit fDialogsMeasureUnit;
	bool fNativePixelFormat;
	Hyiedefs::TResampleFilter fPrintingFilterOnSubsampling;
	bool fPrintingMaintainAR;
	Imageenio::TIEDoPreviewsEvent fOnDoPreviews;
	System::UnicodeString fLoadingFileName;
	System::UnicodeString fLastFilename;
	bool fAllowMalformedPages;
	void *fgrec;
	Imageenio::TIOPrintPreviewParams* fPrintPreviewParams;
	void __fastcall SetAttachedMView(Ieview::TIEView* v);
	Iexbitmaps::TIECustomMultiBitmap* __fastcall GetIEMBitmap();
	void __fastcall SetIEMBitmap(Iexbitmaps::TIECustomMultiBitmap* mbmp);
	void __fastcall SetAttachedIEMBitmap(Iexbitmaps::TIECustomMultiBitmap* mbmp);
	Iexbitmaps::TIOParams* __fastcall GetParams(int idx);
	Iexbitmaps::TIOParams* __fastcall GetParamsEx(int idx);
	void __fastcall SetPreviewFont(Vcl::Graphics::TFont* f);
	void __fastcall SetPreviewFontEnabled(bool Value);
	int __fastcall GetParamsCount();
	void __fastcall SetIOPreviewParams(Hyieutils::TIOPreviewsParams v);
	Hyieutils::TIOPreviewsParams __fastcall GetIOPreviewParams();
	System::UnicodeString __fastcall GetImageEnVersion();
	void __fastcall SetImageEnVersion(System::UnicodeString Value);
	void __fastcall SetAborting(bool Value);
	void __fastcall fMView_LockPaint();
	void __fastcall fMView_UnlockPaint();
	int __fastcall NextInsertionIndex();
	void __fastcall Attached_InsertImage(int idx);
	void __fastcall Attached_DeleteImage(int idx);
	void __fastcall Attached_SetIEBitmap(int idx, Iexbitmaps::TIEBaseBitmap* bmp);
	void __fastcall Attached_CopyToIEBitmap(int idx, Iexbitmaps::TIEBitmap* bmp);
	Iexbitmaps::TIEBitmap* __fastcall Attached_GetTIEBitmap(int idx, bool FullResolution = false);
	void __fastcall Attached_ReleaseBitmap(int idx, bool SaveChanges = true);
	void __fastcall Attached_OnImageLoaded(int idx);
	bool __fastcall IsAttached();
	Iexbitmaps::TIOMultiParams* __fastcall GetParamsList();
	bool __fastcall ParamsFromFileOrStream(const System::WideString FileName, System::Classes::TStream* Stream, int Format);
	void __fastcall SetProgressTask(const Ieview::TIETask v);
	void __fastcall LoadFromStreamPDF_PDFium(System::Classes::TStream* Stream, int Width = 0xffffffff, int Height = 0xffffffff, const System::AnsiString Password = System::AnsiString());
	System::WideString __fastcall GetProxyAddress();
	System::WideString __fastcall GetProxyUser();
	System::WideString __fastcall GetProxyPassword();
	void __fastcall SetProxyAddress(System::WideString Value);
	void __fastcall SetProxyUser(System::WideString Value);
	void __fastcall SetProxyPassword(System::WideString Value);
	
protected:
	bool fAborting;
	Hyiedefs::TIEProgressEvent fOnProgress;
	Ieview::TIETask fProgressTask;
	Imageenio::TIEAcquireBitmapEvent fOnAcquireBitmap;
	Imageenio::TIEPrintPageEvent fOnPrintPage;
	System::Classes::TNotifyEvent fOnAcquireClose;
	Imageenio::TIEAfterAcquireBitmapEvent fOnAfterAcquireBitmap;
	System::Classes::TNotifyEvent fOnFinishWork;
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	void __fastcall OnBitmapChange(System::TObject* Sender, Ieview::TIEChangeType Change);
	virtual void __fastcall DoFinishWork();
	void __fastcall CheckDPI(Iexbitmaps::TIOParams* p);
	virtual void __fastcall TWMultiCallBack(Iexbitmaps::TIEBitmap* Bitmap, System::TObject* &IOParams, int ImDpiX, int ImDpiY);
	virtual void __fastcall TWCloseCallBack();
	virtual Iewia::TIEWia* __fastcall GetWIAParams();
	bool __fastcall WiaOnProgress(int Percentage);
	Iexacquire::TIEAcquireSource __fastcall GetSelectedAcquireSource();
	void __fastcall PrintImagesEx(Vcl::Graphics::TCanvas* PrtCanvas, int DpiX, int DpiY, double pagewidth, double pageheight, bool bPreview, int Columns, int Rows, double HorizSpace, double VertSpace, bool PrintSelected, double MarginLeft, double MarginTop, double MarginRight, double MarginBottom, bool CellBorder, bool ShowText, bool DropShadow, System::Uitypes::TColor BorderColor = (System::Uitypes::TColor)(0x0), System::Uitypes::TColor BackgroundColor = (System::Uitypes::TColor)(0xffffff), const System::UnicodeString Heading = System::UnicodeString(), int HeadingHeight = 0x5, System::Uitypes::TColor HeadingColor = (System::Uitypes::TColor)(0x0), int iPageNo = 0x0, bool ImageBorder = false);
	
public:
	__fastcall virtual TImageEnMIO(System::Classes::TComponent* Owner);
	__fastcall TImageEnMIO(Iexbitmaps::TIECustomMultiBitmap* MBitmap);
	__fastcall virtual ~TImageEnMIO();
	void __fastcall Update();
	__property Hyieutils::TIEDitherMethod DefaultDitherMethod = {read=fDefaultDitherMethod, write=fDefaultDitherMethod, nodefault};
	__property Iexbitmaps::TIOParams* Params[int idx] = {read=GetParams};
	__property int ParamsCount = {read=GetParamsCount, nodefault};
	void __fastcall DuplicateCompressionInfo(bool IncludePDFInfo = false);
	__property Iexbitmaps::TIECustomMultiBitmap* IEMBitmap = {read=GetIEMBitmap, write=SetIEMBitmap};
	__property System::UnicodeString LastFilename = {read=fLastFilename};
	__property bool AllowMalformedPages = {read=fAllowMalformedPages, write=fAllowMalformedPages, nodefault};
	bool __fastcall DoPreviews(int idx, Hyieutils::TPreviewParams pp = (Hyieutils::TPreviewParams() << Hyieutils::Hyieutils__2::ppALL ));
	__property Iexacquire::TIEAcquireParams* AcquireParams = {read=fAcquireParams};
	__property Ietwain::TIETwainParams* TwainParams = {read=fTwainParams};
	__property Iexdcim::TIEDcimAcquire* DCIMParams = {read=fDCIMParams};
	__property Iewia::TIEWia* WIAParams = {read=GetWIAParams};
	bool __fastcall ParamsFromFile(const System::WideString FileName, int Format = 0x0)/* overload */;
	bool __fastcall ParamsFromFile(const System::WideString FileName, bool bUseExtension)/* overload */;
	bool __fastcall ParamsFromStream(System::Classes::TStream* Stream, int Format = 0x0);
	bool __fastcall ParamsFromBuffer(void * Buffer, int BufferSize, int Format = 0x0);
	__property bool Aborting = {read=fAborting, write=SetAborting, nodefault};
	bool __fastcall LoadFromFileGIF(const System::UnicodeString FileName);
	bool __fastcall LoadFromStreamGIF(System::Classes::TStream* Stream);
	void __fastcall SaveToFileGIF(const System::UnicodeString FileName, bool SelectedOnly = false);
	void __fastcall SaveToStreamGIF(System::Classes::TStream* Stream, bool SelectedOnly = false);
	bool __fastcall LoadFromFileCUR(const System::UnicodeString FileName);
	bool __fastcall LoadFromStreamCUR(System::Classes::TStream* Stream);
	bool __fastcall LoadFromFileDCX(const System::UnicodeString FileName);
	bool __fastcall LoadFromStreamDCX(System::Classes::TStream* Stream);
	void __fastcall SaveToFileDCX(const System::UnicodeString FileName, bool SelectedOnly = false);
	void __fastcall SaveToStreamDCX(System::Classes::TStream* Stream, bool SelectedOnly = false);
	bool __fastcall LoadFromFileDICOM(const System::UnicodeString FileName);
	bool __fastcall LoadFromStreamDICOM(System::Classes::TStream* Stream);
	void __fastcall SaveToFileDICOM(const System::UnicodeString FileName, bool SelectedOnly = false);
	void __fastcall SaveToStreamDICOM(System::Classes::TStream* Stream, bool SelectedOnly = false);
	bool __fastcall LoadFromFileTIFF(const System::UnicodeString FileName);
	bool __fastcall LoadFromStreamTIFF(System::Classes::TStream* Stream);
	void __fastcall SaveToFileTIFF(const System::UnicodeString FileName, bool SelectedOnly = false);
	void __fastcall SaveToStreamTIFF(System::Classes::TStream* Stream, bool SelectedOnly = false);
	bool __fastcall LoadFromFileAVI(const System::UnicodeString FileName);
	void __fastcall SaveToFileAVI(const System::UnicodeString FileName, const System::AnsiString Codec = System::AnsiString(), bool SelectedOnly = false, const System::WideString WavFilename = System::WideString());
	void __fastcall SaveToFilePS(const System::UnicodeString FileName, bool SelectedOnly = false);
	void __fastcall SaveToStreamPS(System::Classes::TStream* Stream, bool SelectedOnly = false);
	bool __fastcall LoadFromFilePDF(const System::UnicodeString FileName, int Width = 0xffffffff, int Height = 0xffffffff, const System::UnicodeString Password = System::UnicodeString());
	bool __fastcall LoadFromStreamPDF(System::Classes::TStream* Stream, int Width = 0xffffffff, int Height = 0xffffffff, const System::UnicodeString Password = System::UnicodeString());
	void __fastcall SaveToFilePDF(const System::UnicodeString FileName, bool SelectedOnly = false);
	void __fastcall SaveToStreamPDF(System::Classes::TStream* Stream, bool SelectedOnly = false);
	bool __fastcall LoadFromFileICO(const System::UnicodeString FileName);
	bool __fastcall LoadFromStreamICO(System::Classes::TStream* Stream);
	void __fastcall SaveToFileICO(const System::UnicodeString FileName, bool SelectedOnly = false);
	void __fastcall SaveToStreamICO(System::Classes::TStream* Stream, bool SelectedOnly = false);
	bool __fastcall LoadFromURL(const System::UnicodeString URL);
	bool __fastcall LoadFromMediaFile(const System::UnicodeString FileName);
	bool __fastcall Acquire(bool AppendAtEnd = false);
	bool __fastcall SelectAcquireSource(Iexacquire::TIEAcquireApis Apis = (Iexacquire::TIEAcquireApis() << Iexacquire::TIEAcquireApi::ieaTwain << Iexacquire::TIEAcquireApi::ieaWIA << Iexacquire::TIEAcquireApi::ieaDCIM ), int DeviceGlyphHue = 0xfffffc19);
	bool __fastcall SetAcquireSource(Iexacquire::TIEAcquireApi Api, const System::Variant &Location);
	__property Iexacquire::TIEAcquireSource SelectedAcquireSource = {read=GetSelectedAcquireSource};
	bool __fastcall TwainAcquireOpen();
	void __fastcall TwainAcquireClose();
	bool __fastcall AcquireOpen _DEPRECATED_ATTRIBUTE1("Use TwainAcquireOpen() instead - http://imageen.com/help/Compatibility.html") ();
	void __fastcall AcquireClose _DEPRECATED_ATTRIBUTE1("Use TwainAcquireClose() instead - http://imageen.com/help/Compatibility.html") ();
	void __fastcall LoadFromBuffer(void * Buffer, int BufferSize, int Format = 0x0);
	bool __fastcall LoadFromFile(const System::UnicodeString FileName, bool bCheckUnknown = false)/* overload */;
	bool __fastcall LoadFromFile(const System::UnicodeString FileName, int FileFormat)/* overload */;
	void __fastcall LoadFromFiles(const System::UnicodeString FileName, bool AutoDetect = false, bool LoadWhenViewed = false);
	void __fastcall SaveToFile(const System::UnicodeString FileName, int FileFormat = 0x0, bool SelectedOnly = false)/* overload */;
	void __fastcall SaveToFile _DEPRECATED_ATTRIBUTE1("Check parameters - http://imageen.com/help/Compatibility.html") (const System::UnicodeString FileName, bool SelectedOnly)/* overload */;
	void __fastcall SaveToStream(System::Classes::TStream* Stream, int FileFormat, bool SelectedOnly = false);
	bool __fastcall LoadFromFileAuto(const System::UnicodeString FileName);
	bool __fastcall LoadFromStream(System::Classes::TStream* Stream, int FileFormat = 0x0);
	bool __fastcall LoadFromFileFormat _DEPRECATED_ATTRIBUTE1("Use LoadFromFile instead - http://imageen.com/help/Compatibility.html") (const System::UnicodeString FileName, int FileFormat);
	bool __fastcall LoadFromStreamFormat _DEPRECATED_ATTRIBUTE1("Use LoadFromStream instead - http://imageen.com/help/Compatibility.html") (System::Classes::TStream* Stream, int FileFormat);
	System::UnicodeString __fastcall ExecuteOpenDialog(const System::WideString InitialDir = System::WideString(), const System::WideString InitialFileName = System::WideString(), bool AlwaysAnimate = false, int FilterIndex = 0x0, const System::WideString ExtendedFilters = System::WideString(), bool MultiSelect = false, const System::WideString Title = System::WideString(), const System::WideString Filter = System::WideString(), int DefaultFilter = 0xffffffff, int LimitToFileType = 0xffffffff, Hyiedefs::TIEShowFormats ShowFormats = (Hyiedefs::TIEShowFormats)(0x1))/* overload */;
	System::UnicodeString __fastcall ExecuteOpenDialog(const System::WideString Title, int DefaultFilter, int LimitToFileType = 0xffffffff, bool AlwaysAnimate = false, bool MultiSelect = false, Hyiedefs::TIEShowFormats ShowFormats = (Hyiedefs::TIEShowFormats)(0x1))/* overload */;
	System::UnicodeString __fastcall ExecuteSaveDialog(const System::WideString InitialDir = System::WideString(), const System::WideString InitialFileName = System::WideString(), bool AlwaysAnimate = false, int FilterIndex = 0x0, const System::WideString ExtendedFilters = System::WideString(), const System::WideString Title = System::WideString(), const System::WideString Filter = System::WideString(), int DefaultFilter = 0xffffffff, int LimitToFileType = 0xffffffff, bool OverwritePrompt = false, Hyiedefs::TIEShowFormats ShowFormats = (Hyiedefs::TIEShowFormats)(0x7))/* overload */;
	System::UnicodeString __fastcall ExecuteSaveDialog(const System::WideString Title, int DefaultFilter, int LimitToFileType = 0xffffffff, bool AlwaysAnimate = false, bool OverwritePrompt = false, Hyiedefs::TIEShowFormats ShowFormats = (Hyiedefs::TIEShowFormats)(0x7))/* overload */;
	bool __fastcall DoPrintPreviewDialog(const System::UnicodeString TaskName = System::UnicodeString(), bool PrintAnnotations = false, const System::UnicodeString Caption = System::UnicodeString(), bool ThumbnailPrinting = false);
	bool __fastcall DoSavePreviewDialog(const System::UnicodeString Caption = System::UnicodeString(), const System::UnicodeString Heading = System::UnicodeString());
	__property bool ResetPrinter = {read=fResetPrinter, write=fResetPrinter, nodefault};
	__property Imageenio::TIOPrintPreviewParams* PrintPreviewParams = {read=fPrintPreviewParams};
	__property bool NativePixelFormat = {read=fNativePixelFormat, write=fNativePixelFormat, nodefault};
	__property Hyiedefs::TResampleFilter PrintingFilterOnSubsampling = {read=fPrintingFilterOnSubsampling, write=fPrintingFilterOnSubsampling, nodefault};
	__property bool PrintingMaintainAR = {read=fPrintingMaintainAR, write=fPrintingMaintainAR, nodefault};
	__property System::WideString ProxyAddress = {read=GetProxyAddress, write=SetProxyAddress};
	__property System::WideString ProxyUser = {read=GetProxyUser, write=SetProxyUser};
	__property System::WideString ProxyPassword = {read=GetProxyPassword, write=SetProxyPassword};
	void __fastcall PrintImagePos(int ImageIndex, Vcl::Graphics::TCanvas* PrtCanvas, double x, double y, double Width, double Height, double GammaCorrection = 1.000000E+00, bool PrintAnnotations = false)/* overload */;
	void __fastcall PrintImagePos(int ImageIndex, double x, double y, double Width, double Height, double GammaCorrection = 1.000000E+00, bool PrintAnnotations = false)/* overload */;
	void __fastcall PrintImage(int ImageIndex, Vcl::Graphics::TCanvas* PrtCanvas = (Vcl::Graphics::TCanvas*)(0x0), double MarginLeft = 1.000000E+00, double MarginTop = 1.000000E+00, double MarginRight = 1.000000E+00, double MarginBottom = 1.000000E+00, Imageenio::TIEVerticalPos VerticalPos = (Imageenio::TIEVerticalPos)(0x1), Imageenio::TIEHorizontalPos HorizontalPos = (Imageenio::TIEHorizontalPos)(0x1), Imageenio::TIESize Size = (Imageenio::TIESize)(0x1), double SpecWidth = 0.000000E+00, double SpecHeight = 0.000000E+00, double GammaCorrection = 1.000000E+00, bool PrintAnnotations = false, const System::UnicodeString Heading = System::UnicodeString(), int HeadingHeight = 0x5, System::Uitypes::TColor HeadingColor = (System::Uitypes::TColor)(0x0))/* overload */;
	void __fastcall PrintImage(int ImageIndex, double Margins = 1.000000E+00, Imageenio::TIEVerticalPos VerticalPos = (Imageenio::TIEVerticalPos)(0x1), Imageenio::TIEHorizontalPos HorizontalPos = (Imageenio::TIEHorizontalPos)(0x1), Imageenio::TIESize Size = (Imageenio::TIESize)(0x1), double SpecWidth = 0.000000E+00, double SpecHeight = 0.000000E+00, double GammaCorrection = 1.000000E+00, bool PrintAnnotations = false, const System::UnicodeString Heading = System::UnicodeString(), int HeadingHeight = 0x5, System::Uitypes::TColor HeadingColor = (System::Uitypes::TColor)(0x0))/* overload */;
	void __fastcall PrintImages(int Columns = 0x2, int Rows = 0x2, double HorizSpace = 5.000000E-01, double VertSpace = 5.000000E-01, bool PrintSelected = false, double Margins = 0.000000E+00, bool CellBorder = true, bool ShowText = true, bool DropShadow = false, System::Uitypes::TColor BorderColor = (System::Uitypes::TColor)(0x0), const System::UnicodeString Heading = System::UnicodeString(), int HeadingHeight = 0x5, System::Uitypes::TColor HeadingColor = (System::Uitypes::TColor)(0x0), bool ImageBorder = false)/* overload */;
	void __fastcall PrintImages(Vcl::Graphics::TCanvas* PrtCanvas, int Columns = 0x2, int Rows = 0x2, double HorizSpace = 5.000000E-01, double VertSpace = 5.000000E-01, bool PrintSelected = false, double MarginLeft = 0.000000E+00, double MarginTop = 0.000000E+00, double MarginRight = 0.000000E+00, double MarginBottom = 0.000000E+00, bool CellBorder = true, bool ShowText = true, bool DropShadow = false, System::Uitypes::TColor BorderColor = (System::Uitypes::TColor)(0x0), const System::UnicodeString Heading = System::UnicodeString(), int HeadingHeight = 0x5, System::Uitypes::TColor HeadingColor = (System::Uitypes::TColor)(0x0), bool ImageBorder = false)/* overload */;
	void __fastcall PreviewPrintImages(Vcl::Graphics::TBitmap* DestBitmap, int MaxBitmapWidth, int MaxBitmapHeight, Vcl::Printers::TPrinter* PrinterObj, int Columns, int Rows, double HorizSpace, double VertSpace, bool PrintSelected, double MarginLeft, double MarginTop, double MarginRight, double MarginBottom, bool CellBorder, bool ShowText, bool DropShadow, System::Uitypes::TColor BorderColor = (System::Uitypes::TColor)(0x0), const System::UnicodeString Heading = System::UnicodeString(), int HeadingHeight = 0x5, System::Uitypes::TColor HeadingColor = (System::Uitypes::TColor)(0x0), int iPageNo = 0x0, bool ImageBorder = false);
	void __fastcall PrintImagesToFile(const System::UnicodeString sFilename, int iJpegQuality, int iImageWidth, int iImageHeight, int iColumns, int iRows, int iHorzSpace = 0x6, int iVertSpace = 0x6, bool bPrintSelectedOnly = false, int iHorzMargin = 0xc, int iVertMargin = 0xc, bool CellBorder = false, bool ShowText = true, bool DropShadow = true, System::Uitypes::TColor BackgroundColor = (System::Uitypes::TColor)(0xffffff), System::Uitypes::TColor BorderColor = (System::Uitypes::TColor)(0x0), const System::UnicodeString Heading = System::UnicodeString(), int HeadingHeight = 0x5, System::Uitypes::TColor HeadingColor = (System::Uitypes::TColor)(0x0), int iPageNo = 0xffffffff, bool ImageBorder = false);
	int __fastcall PrintImagesToBitmap(Iexbitmaps::TIEBitmap* Dest, int iImageWidth, int iImageHeight, int iColumns, int iRows, int iHorzSpace = 0x6, int iVertSpace = 0x6, bool bPrintSelectedOnly = false, int iHorzMargin = 0xc, int iVertMargin = 0xc, bool CellBorder = false, bool ShowText = true, bool DropShadow = true, System::Uitypes::TColor BackgroundColor = (System::Uitypes::TColor)(0xffffff), System::Uitypes::TColor BorderColor = (System::Uitypes::TColor)(0x0), const System::UnicodeString Heading = System::UnicodeString(), int HeadingHeight = 0x5, System::Uitypes::TColor HeadingColor = (System::Uitypes::TColor)(0x0), int iPageNo = 0x0, bool ImageBorder = false);
	__property Iexbitmaps::TIECustomMultiBitmap* AttachedIEMBitmap = {read=fIEMBitmap, write=SetAttachedIEMBitmap};
	__property Iexbitmaps::TIOMultiParams* ParamsList = {read=GetParamsList};
	__property Ieview::TIETask ProgressTask = {read=fProgressTask, nodefault};
	
__published:
	__property Ieview::TIEView* AttachedMView = {read=fMView, write=SetAttachedMView};
	__property Hyiedefs::TIEProgressEvent OnProgress = {read=fOnProgress, write=fOnProgress};
	__property Imageenio::TIEAcquireBitmapEvent OnAcquireBitmap = {read=fOnAcquireBitmap, write=fOnAcquireBitmap};
	__property System::Classes::TNotifyEvent OnAcquireClose = {read=fOnAcquireClose, write=fOnAcquireClose};
	__property Imageenio::TIEAfterAcquireBitmapEvent OnAfterAcquireBitmap = {read=fOnAfterAcquireBitmap, write=fOnAfterAcquireBitmap};
	__property Imageenio::TIEPrintPageEvent OnPrintPage = {read=fOnPrintPage, write=fOnPrintPage};
	__property Hyieutils::TIOPreviewsParams PreviewsParams = {read=GetIOPreviewParams, write=SetIOPreviewParams, default=0};
	__property Vcl::Graphics::TFont* PreviewFont = {read=fPreviewFont, write=SetPreviewFont};
	__property bool PreviewFontEnabled = {read=fPreviewFontEnabled, write=SetPreviewFontEnabled, default=0};
	__property bool AutoAdjustDPI = {read=fAutoAdjustDPI, write=fAutoAdjustDPI, default=0};
	__property bool FilteredAdjustDPI = {read=fFilteredAdjustDPI, write=fFilteredAdjustDPI, default=0};
	__property bool SimplifiedParamsDialogs = {read=fSimplifiedParamsDialogs, write=fSimplifiedParamsDialogs, default=1};
	__property System::Classes::TNotifyEvent OnFinishWork = {read=fOnFinishWork, write=fOnFinishWork};
	__property Imageenio::TIEDialogsMeasureUnit DialogsMeasureUnit = {read=fDialogsMeasureUnit, write=fDialogsMeasureUnit, default=0};
	__property Imageenio::TIEDoPreviewsEvent OnDoPreviews = {read=fOnDoPreviews, write=fOnDoPreviews};
	__property System::UnicodeString ImageEnVersion = {read=GetImageEnVersion, write=SetImageEnVersion, stored=false};
};


//-- var, const, procedure ---------------------------------------------------
static const System::Int8 IEM_SELECTED_IMAGES = System::Int8(-9);
static const System::Int8 IEM_ALL_IMAGES = System::Int8(-7);
extern DELPHI_PACKAGE bool __fastcall IsMultiFrameLoadFormat(int FileType);
extern DELPHI_PACKAGE bool __fastcall IsMultiFrameSaveFormat(int FileType);
}	/* namespace Iemio */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_IEMIO)
using namespace Iemio;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// IemioHPP
