// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'imageenio.pas' rev: 35.00 (Windows)

#ifndef ImageenioHPP
#define ImageenioHPP

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
#include <System.SyncObjs.hpp>
#include <ieview.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <hyiedefs.hpp>
#include <iexBitmaps.hpp>
#include <Vcl.Dialogs.hpp>
#include <hyieutils.hpp>
#include <iegdiplus.hpp>
#include <iepdf.hpp>
#include <System.Types.hpp>
#include <System.UITypes.hpp>
#include <iexAcquire.hpp>
#include <ietwain.hpp>
#include <iexDCIM.hpp>
#include <iewia.hpp>
#include <ieds.hpp>
#include <iemmf.hpp>
#include <Vcl.Printers.hpp>
#include <iexUserInteractions.hpp>

//-- user supplied -----------------------------------------------------------

namespace Imageenio
{
//-- forward type declarations -----------------------------------------------
struct TStreamJpegHeader;
struct PCXSHead;
struct TIFFSHead;
struct TAviStreamInfoA_Ex;
struct TAviStreamInfoW_Ex;
class DELPHICLASS TIOPrintPreviewParams;
class DELPHICLASS TImageEnIO;
//-- type declarations -------------------------------------------------------
typedef System::StaticArray<System::UnicodeString, 55> Imageenio__1;

enum DECLSPEC_DENUM TIETextFormat : unsigned char { ietfPascal, ietfHex, ietfBase64, ietfASCIIArt };

typedef void __fastcall (__closure *TIEAcquireBitmapEvent)(System::TObject* Sender, Iexbitmaps::TIEBitmap* ABitmap, int DpiX, int DpiY, bool &Handled);

typedef void __fastcall (__closure *TIEAfterAcquireBitmapEvent)(System::TObject* Sender, int index);

struct DECLSPEC_DRECORD TStreamJpegHeader
{
public:
	System::StaticArray<char, 5> ID;
	int dim;
};


struct DECLSPEC_DRECORD PCXSHead
{
public:
	System::StaticArray<char, 5> ID;
	int dim;
};


struct DECLSPEC_DRECORD TIFFSHead
{
public:
	System::StaticArray<char, 5> ID;
	int dim;
};


enum DECLSPEC_DENUM TIEVerticalPos : unsigned char { ievpTop, ievpCenter, ievpBottom };

enum DECLSPEC_DENUM TIEHorizontalPos : unsigned char { iehpLeft, iehpCenter, iehpRight };

enum DECLSPEC_DENUM TIESize : unsigned char { iesNormal, iesFitToPage, iesFitToPageStretch, iesFillPage, iesSpecifiedSize, iesMultiplePages };

typedef void __fastcall (__closure *TIEPrintPageEvent)(System::TObject* Sender, int Index, bool ThumbnailPrinting, int DpiX, int DpiY, double PrintWidth, double PrintHeight, System::UnicodeString &Heading, Vcl::Graphics::TFont* HeadingFont);

enum DECLSPEC_DENUM TIECreateAVIFileResult : unsigned char { ieaviOK, ieaviNOCOMPRESSOR, ieaviMEMORY, ieaviUNSUPPORTED, ieaviUNKNOWNERROR };

typedef void __fastcall (__closure *TIEIOPreviewEvent)(System::TObject* Sender, Vcl::Forms::TForm* PreviewForm);

typedef void __fastcall (__closure *TIEDoPreviewsEvent)(System::TObject* Sender, bool &Handled);

enum DECLSPEC_DENUM TIECSSource : unsigned char { iecsScreen, iecsPrimary, iecsForegroundWindow, iecsForegroundWindowClient, iecsForegroundWindow2, iecsSpecifiedWindow, iecsSpecifiedWindowClient, iecsSpecifiedWindow2, iecsSpecifiedMonitor };

enum DECLSPEC_DENUM TIEDialogType : unsigned char { iedtDialog, iedtMaxi };

enum DECLSPEC_DENUM TIEDialogsMeasureUnit : unsigned char { ieduInches, ieduCm, ieduSelectableDefInches, ieduSelectableDefCm };

struct DECLSPEC_DRECORD TAviStreamInfoA_Ex
{
public:
	unsigned fccType;
	unsigned fccHandler;
	unsigned dwFlags;
	unsigned dwCaps;
	System::Word wPriority;
	System::Word wLanguage;
	unsigned dwScale;
	unsigned dwRate;
	unsigned dwStart;
	unsigned dwLength;
	unsigned dwInitialFrames;
	unsigned dwSuggestedBufferSize;
	unsigned dwQuality;
	unsigned dwSampleSize;
	System::Types::TRect rcFrame;
	unsigned dwEditCount;
	unsigned dwFormatChangeCount;
	System::StaticArray<char, 64> szName;
};


struct DECLSPEC_DRECORD TAviStreamInfoW_Ex
{
public:
	unsigned fccType;
	unsigned fccHandler;
	unsigned dwFlags;
	unsigned dwCaps;
	System::Word wPriority;
	System::Word wLanguage;
	unsigned dwScale;
	unsigned dwRate;
	unsigned dwStart;
	unsigned dwLength;
	unsigned dwInitialFrames;
	unsigned dwSuggestedBufferSize;
	unsigned dwQuality;
	unsigned dwSampleSize;
	System::Types::TRect rcFrame;
	unsigned dwEditCount;
	unsigned dwFormatChangeCount;
	System::StaticArray<System::WideChar, 64> szName;
};


typedef TAviStreamInfoW_Ex TAviStreamInfo_Ex;

enum DECLSPEC_DENUM TIOPrintPreviewPosition : unsigned char { ppTopLeft, ppTop, ppTopRight, ppLeft, ppCenter, ppRight, ppBottomLeft, ppBottom, ppBottomRight };

enum DECLSPEC_DENUM TIOPrintPreviewSize : unsigned char { psNormal, psFitToPage, psStretchToPage, psFillPage, psSpecifiedSize, psMultiplePages };

enum DECLSPEC_DENUM TIOPrintPreviewThumbnailStyle : unsigned char { ptFlat, ptSoftShadow, ptBorder, ptCellBorder };

class PASCALIMPLEMENTATION TIOPrintPreviewParams : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	double fMarginTop;
	double fMarginLeft;
	double fMarginRight;
	double fMarginBottom;
	TIOPrintPreviewPosition fPosition;
	TIOPrintPreviewSize fSize;
	double fWidth;
	double fHeight;
	double fGamma;
	bool fPrintSelected;
	bool fPrintThumbnails;
	int fThumbnailColumns;
	int fThumbnailRows;
	double fThumbnailSpacing;
	TIOPrintPreviewThumbnailStyle fThumbnailStyle;
	bool fThumbnailShowText;
	int fContactSheetWidth;
	int fContactSheetHeight;
	int fContactSheetMargins;
	int fContactSheetSpacing;
	int fHeadingSize;
	System::Uitypes::TColor fHeadingColor;
	int fDlgWidth;
	int fDlgHeight;
	bool fDlgMaximized;
	int fMaxiDlgWidth;
	int fMaxiDlgHeight;
	bool fMaxiDlgMaximized;
	
public:
	__fastcall TIOPrintPreviewParams();
	__property double MarginTop = {read=fMarginTop, write=fMarginTop};
	__property double MarginLeft = {read=fMarginLeft, write=fMarginLeft};
	__property double MarginRight = {read=fMarginRight, write=fMarginRight};
	__property double MarginBottom = {read=fMarginBottom, write=fMarginBottom};
	__property TIOPrintPreviewPosition Position = {read=fPosition, write=fPosition, nodefault};
	__property TIOPrintPreviewSize Size = {read=fSize, write=fSize, nodefault};
	__property double Width = {read=fWidth, write=fWidth};
	__property double Height = {read=fHeight, write=fHeight};
	__property double Gamma = {read=fGamma, write=fGamma};
	__property bool PrintSelected = {read=fPrintSelected, write=fPrintSelected, nodefault};
	__property bool PrintThumbnails = {read=fPrintThumbnails, write=fPrintThumbnails, nodefault};
	__property int ThumbnailColumns = {read=fThumbnailColumns, write=fThumbnailColumns, nodefault};
	__property int ThumbnailRows = {read=fThumbnailRows, write=fThumbnailRows, nodefault};
	__property double ThumbnailSpacing = {read=fThumbnailSpacing, write=fThumbnailSpacing};
	__property TIOPrintPreviewThumbnailStyle ThumbnailStyle = {read=fThumbnailStyle, write=fThumbnailStyle, nodefault};
	__property bool ThumbnailShowText = {read=fThumbnailShowText, write=fThumbnailShowText, nodefault};
	__property int ContactSheetWidth = {read=fContactSheetWidth, write=fContactSheetWidth, nodefault};
	__property int ContactSheetHeight = {read=fContactSheetHeight, write=fContactSheetHeight, nodefault};
	__property int ContactSheetSpacing = {read=fContactSheetSpacing, write=fContactSheetSpacing, nodefault};
	__property int ContactSheetMargins = {read=fContactSheetMargins, write=fContactSheetMargins, nodefault};
	__property System::Uitypes::TColor HeadingColor = {read=fHeadingColor, write=fHeadingColor, nodefault};
	__property int HeadingSize = {read=fHeadingSize, write=fHeadingSize, nodefault};
	__property int DlgWidth = {read=fDlgWidth, write=fDlgWidth, nodefault};
	__property int DlgHeight = {read=fDlgHeight, write=fDlgHeight, nodefault};
	__property bool DlgMaximized = {read=fDlgMaximized, write=fDlgMaximized, nodefault};
	__property int MaxiDlgWidth = {read=fMaxiDlgWidth, write=fMaxiDlgWidth, nodefault};
	__property int MaxiDlgHeight = {read=fMaxiDlgHeight, write=fMaxiDlgHeight, nodefault};
	__property bool MaxiDlgMaximized = {read=fMaxiDlgMaximized, write=fMaxiDlgMaximized, nodefault};
	void __fastcall SaveToFile(const System::WideString FileName);
	void __fastcall LoadFromFile(const System::WideString FileName);
	void __fastcall SaveToStream(System::Classes::TStream* Stream);
	void __fastcall LoadFromStream(System::Classes::TStream* Stream);
	void __fastcall SetProperty(System::WideString Prop, System::WideString Value);
	System::WideString __fastcall GetProperty(const System::WideString Prop);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TIOPrintPreviewParams() { }
	
};


enum DECLSPEC_DENUM TIEIOSeekDestination : unsigned char { ieioSeekFirst, ieioSeekPrior, ieioSeekNext, ieioSeekLast };

typedef void __fastcall (__closure *TIEImageSeekEvent)(System::TObject* Sender, TIEIOSeekDestination Destination, const System::WideString FileName, int &NewIndex);

class PASCALIMPLEMENTATION TImageEnIO : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	Iexbitmaps::TIOParams* fParams;
	Vcl::Graphics::TBitmap* fBitmap;
	Iexbitmaps::TIEBitmap* fIEBitmap;
	bool fIEBitmapCreated;
	Ieview::TIEView* fImageEnView;
	void *fImageEnViewBitmapChangeHandle;
	Vcl::Extctrls::TImage* fTImage;
	System::Uitypes::TColor fBackground;
	Hyieutils::TIOPreviewsParams fPreviewsParams;
	bool fSimplifiedParamsDialogs;
	TIEDoPreviewsEvent fOnDoPreviews;
	bool fChangeBackground;
	Iexacquire::TIEAcquireParams* fAcquireParams;
	Ietwain::TIETwainParams* fTwainParams;
	Iexdcim::TIEDcimAcquire* fDCIMParams;
	bool fStreamHeaders;
	Vcl::Graphics::TFont* fPreviewFont;
	bool fPreviewFontEnabled;
	TIEIOPreviewEvent fOnIOPreview;
	TIEDialogsMeasureUnit fDialogsMeasureUnit;
	bool fAutoAdjustDPI;
	bool fFilteredAdjustDPI;
	void *fAVI_avf;
	void *fAVI_avs;
	void *fAVI_avs1;
	System::WideString fAVI_SaveFilename;
	System::WideString fAVI_TempFilename;
	System::WideString fAVI_WavFilename;
	void *fAVI_gf;
	TAviStreamInfoW_Ex fAVI_psi;
	void *fAVI_popts;
	int fAVI_idx;
	Ieds::TIEDirectShow* fOpenMediaFile;
	double fOpenMediaFileRate;
	int fOpenMediaFileMul;
	void *fPS_handle;
	Hyieutils::TIEWideFileStream* fPS_stream;
	Iepdf::TIEPDFBuilder* fPDF_handle;
	Hyieutils::TIEWideFileStream* fPDF_stream;
	System::Classes::TList* fAsyncThreads;
	NativeUInt fAsyncThreadsFinishEvent;
	System::Syncobjs::TCriticalSection* fAsyncThreadsCS;
	bool fAsyncMode;
	Hyiedefs::TResampleFilter fPrintingFilterOnSubsampling;
	bool fPrintingMaintainAR;
	bool fWicFastLoading;
	void *fgrec;
	Iewia::TIEWia* fWIA;
	Ieds::TIEDirectShow* fDShow;
	Iemmf::TIEMediaFoundationSourceReader* fMediaFoundationSourceReader;
	Hyieutils::TIEDitherMethod fDefaultDitherMethod;
	bool fResetPrinter;
	TIOPrintPreviewParams* fPrintPreviewParams;
	Iexbitmaps::TIEBitmap* fMergedGifBmp;
	System::WideString fMergedGifName;
	int fMergedGifIndex;
	Iexbitmaps::TIEGIFAction fMergedGifAction;
	Hyiedefs::TIERectangle fMergedGifBG;
	Hyieutils::TIEPixelFormat fMergedGifPF;
	bool fSeeking;
	void __fastcall SetAttachedBitmap(Vcl::Graphics::TBitmap* atBitmap);
	void __fastcall SetAttachedImageEn(Ieview::TIEView* atImageEn);
	System::Uitypes::TColor __fastcall GetReBackground();
	void __fastcall SetReBackground(System::Uitypes::TColor v);
	void __fastcall SetPreviewFont(Vcl::Graphics::TFont* f);
	void __fastcall SetPreviewFontEnabled(bool Value);
	void __fastcall SetTImage(Vcl::Extctrls::TImage* v);
	void __fastcall SetIOPreviewParams(Hyieutils::TIOPreviewsParams v);
	Hyieutils::TIOPreviewsParams __fastcall GetIOPreviewParams();
	bool __fastcall IsInsideAsyncThreads();
	int __fastcall GetAsyncRunning();
	int __fastcall GetThreadsCount();
	void __fastcall SetProgressTask(const Ieview::TIETask v);
	void __fastcall SetDefaultDitherMethod(Hyieutils::TIEDitherMethod Value);
	bool __fastcall WiaOnProgress(int Percentage);
	void __fastcall SetPrintLogFile(const System::UnicodeString v);
	System::UnicodeString __fastcall GetPrintLogFile();
	void __fastcall UpdateAPP138BimResolution();
	System::UnicodeString __fastcall GetImageEnVersion();
	void __fastcall SetImageEnVersion(System::UnicodeString Value);
	void __fastcall SetAborting(bool Value);
	bool __fastcall ParamsFromFileOrStream(const System::WideString FileName, System::Classes::TStream* Stream, int Format, bool ShowProgress = true);
	void __fastcall ParamsFromMetaFile(System::Classes::TStream* stream);
	System::WideString __fastcall GetProxyAddress();
	System::WideString __fastcall GetProxyUser();
	System::WideString __fastcall GetProxyPassword();
	void __fastcall SetProxyAddress(System::WideString Value);
	void __fastcall SetProxyUser(System::WideString Value);
	void __fastcall SetProxyPassword(System::WideString Value);
	void __fastcall CheckHaveValidBitmap(bool Saving);
	void __fastcall ParamsFromStreamIEN(System::Classes::TStream* Stream, bool LoadThumbnail = false);
	void __fastcall GeneratePrintBitmap(bool PrintAnnotations, bool PrintLayers);
	void __fastcall ResetModified(bool AllLayers = false);
	void __fastcall DoImageLoaded();
	void __fastcall UpdateBitDepth(int OutputFileType);
	void __fastcall LoadFromStreamPDF_PDFium(System::Classes::TStream* Stream, int Width = 0xffffffff, int Height = 0xffffffff, const System::AnsiString Password = System::AnsiString(), bool Preview = false);
	
protected:
	bool fAborting;
	Hyiedefs::TIEProgressEvent fOnIntProgress;
	Hyiedefs::TIEProgressEvent fOnProgress;
	Ieview::TIETask fProgressTask;
	System::Classes::TNotifyEvent fOnFinishWork;
	TIEAcquireBitmapEvent fOnAcquireBitmap;
	System::Classes::TNotifyEvent fOnAcquireClose;
	TIEPrintPageEvent fOnPrintPage;
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	void __fastcall OnBitmapChange(System::TObject* Sender, Ieview::TIEChangeType Change);
	bool __fastcall SyncLoadFromStreamJ2000(System::Classes::TStream* Stream, const System::WideString FileName, int FileType);
	void __fastcall SyncSaveToStreamJ2000(System::Classes::TStream* Stream, int Format);
	void __fastcall SetBitmap(Vcl::Graphics::TBitmap* bmp);
	void __fastcall SetIEBitmap(Iexbitmaps::TIEBitmap* bmp);
	void __fastcall SetAttachedIEBitmap(Iexbitmaps::TIEBitmap* bmp);
	virtual void __fastcall TWMultiCallBack(Iexbitmaps::TIEBitmap* Bitmap, System::TObject* &IOParams, int ImDpiX, int ImDpiY);
	virtual void __fastcall TWCloseCallBack();
	DYNAMIC void __fastcall DoAcquireBitmap(Iexbitmaps::TIEBitmap* ABitmap, int ImDpiX, int ImDpiY, bool &Handled);
	virtual void __fastcall DoFinishWork();
	virtual Vcl::Graphics::TBitmap* __fastcall GetBitmap();
	bool __fastcall MakeConsistentBitmap(bool Saving = false, Hyieutils::TIEPixelFormatSet AllowedFormats = Hyieutils::TIEPixelFormatSet() );
	virtual Iewia::TIEWia* __fastcall GetWIAParams();
	virtual Ieds::TIEDirectShow* __fastcall GetDShowParams();
	Iemmf::TIEMediaFoundationSourceReader* __fastcall GetMediaFoundationSourceReader();
	int __fastcall SyncLoadFromStreamGIF(System::Classes::TStream* Stream, const System::WideString FileName);
	bool __fastcall SyncLoadFromStreamPCX(System::Classes::TStream* Stream, bool StreamHead, const System::WideString FileName);
	bool __fastcall SyncLoadFromStreamDCX(System::Classes::TStream* Stream, const System::WideString FileName);
	void __fastcall SyncSaveToStreamDCX(System::Classes::TStream* Stream);
	int __fastcall SyncLoadFromStreamTIFF(System::Classes::TStream* Stream, bool StreamHead, const System::WideString FileName);
	bool __fastcall SyncLoadFromStreamBMP(System::Classes::TStream* Stream, const System::WideString FileName);
	void __fastcall SyncSaveToStreamJpeg(System::Classes::TStream* Stream, bool StreamHead);
	void __fastcall SyncSaveToStreamPS(System::Classes::TStream* Stream);
	void __fastcall SyncSaveToStreamPDF(System::Classes::TStream* Stream);
	void __fastcall SyncSaveToStreamDICOM(System::Classes::TStream* Stream);
	void __fastcall SyncSaveToStreamBMP(System::Classes::TStream* Stream);
	bool __fastcall SyncLoadFromStreamPSD(System::Classes::TStream* Stream, const System::WideString FileName);
	bool __fastcall SyncLoadFromStreamCUR(System::Classes::TStream* Stream, const System::WideString FileName);
	bool __fastcall SyncLoadFromStreamICO(System::Classes::TStream* Stream, const System::WideString FileName);
	bool __fastcall SyncLoadFromStreamWIC(System::Classes::TStream* Stream, const System::WideString FileName, int FileFormat);
	void __fastcall SyncSaveToStreamWIC(System::Classes::TStream* Stream, int FileFormat);
	bool __fastcall SyncLoadFromStreamRAW(System::Classes::TStream* Stream, const System::WideString FileName);
	bool __fastcall SyncLoadFromStreamBMPRAW(System::Classes::TStream* Stream, const System::WideString FileName);
	void __fastcall SyncSaveToStreamBMPRAW(System::Classes::TStream* Stream);
	bool __fastcall SyncLoadFromStreamTGA(System::Classes::TStream* Stream, const System::WideString FileName);
	bool __fastcall SyncLoadFromStreamPXM(System::Classes::TStream* Stream, const System::WideString FileName);
	bool __fastcall SyncLoadFromStreamWBMP(System::Classes::TStream* Stream, const System::WideString FileName);
	bool __fastcall SyncLoadFromStreamPNG(System::Classes::TStream* Stream, const System::UnicodeString Filename);
	bool __fastcall SyncLoadFromStreamJPEG(System::Classes::TStream* Stream, bool CheckHeader, const System::WideString FileName);
	bool __fastcall SyncLoadFromStreamDICOM(System::Classes::TStream* Stream, const System::WideString FileName);
	void __fastcall CheckDPI();
	void __fastcall SetNativePixelFormat(bool value);
	bool __fastcall GetNativePixelFormat();
	virtual void __fastcall DoIntProgress(System::TObject* Sender, int per);
	void __fastcall SyncSaveToStreamPSD(System::Classes::TStream* Stream);
	bool __fastcall LoadVectFile(const System::WideString fileName, int ft);
	bool __fastcall LoadVectStream(System::Classes::TStream* Stream, int ft);
	Iexacquire::TIEAcquireSource __fastcall GetSelectedAcquireSource();
	
public:
	Iexbitmaps::TIEBitmap* fPrintBitmap;
	bool fDoFreePrintBitmap;
	int fPrintIndex;
	Iexbitmaps::TIOParams* __fastcall GetParams();
	void __fastcall GetParamsEx(Iexbitmaps::TIOParams* &aParams);
	__fastcall virtual TImageEnIO(System::Classes::TComponent* Owner);
	__fastcall TImageEnIO(Iexbitmaps::TIEBitmap* Bitmap)/* overload */;
	__fastcall TImageEnIO(Vcl::Graphics::TBitmap* Bitmap)/* overload */;
	__fastcall virtual ~TImageEnIO();
	__property Vcl::Graphics::TBitmap* AttachedBitmap = {read=fBitmap, write=SetAttachedBitmap};
	__property Iexbitmaps::TIEBitmap* AttachedIEBitmap = {read=fIEBitmap, write=SetAttachedIEBitmap};
	void __fastcall Update();
	void __fastcall SyncGetHandle();
	void __fastcall AdjustDPI();
	__property bool ChangeBackground = {read=fChangeBackground, write=fChangeBackground, nodefault};
	__property int ThreadsCount = {read=GetThreadsCount, nodefault};
	__property Hyieutils::TIEDitherMethod DefaultDitherMethod = {read=fDefaultDitherMethod, write=SetDefaultDitherMethod, nodefault};
	virtual bool __fastcall DoPreviews(Hyieutils::TPreviewParams pp = (Hyieutils::TPreviewParams() << Hyieutils::Hyieutils__2::ppALL ));
	__property Vcl::Graphics::TBitmap* Bitmap = {read=GetBitmap, write=SetBitmap};
	__property Iexbitmaps::TIEBitmap* IEBitmap = {read=fIEBitmap, write=SetIEBitmap};
	__property Iexbitmaps::TIOParams* Params = {read=GetParams};
	void __fastcall AssignParams(System::TObject* Source);
	void __fastcall RecreatedTImageEnViewHandle();
	void __fastcall LoadFromResource(const System::WideString ModulePath, const System::UnicodeString ResourceType, const System::UnicodeString ResourceName, int Format);
	bool __fastcall LoadFromFileIEN(const System::WideString FileName, bool Append = false);
	bool __fastcall LoadFromStreamIEN(System::Classes::TStream* Stream, bool Append = false);
	void __fastcall SaveToStreamIEN(System::Classes::TStream* Stream);
	void __fastcall SaveToFileIEN(const System::WideString FileName);
	void __fastcall SaveToStreamSVG(System::Classes::TStream* Stream);
	void __fastcall SaveToFileSVG(const System::WideString FileName);
	void __fastcall SaveToFileJpeg(const System::WideString FileName);
	bool __fastcall LoadFromFileJpeg(const System::WideString FileName);
	void __fastcall SaveToStreamJpeg(System::Classes::TStream* Stream);
	bool __fastcall LoadFromStreamJpeg(System::Classes::TStream* Stream);
	bool __fastcall InjectJpegIPTC(const System::WideString FileName);
	bool __fastcall InjectJpegIPTCStream(System::Classes::TStream* InputStream, System::Classes::TStream* OutputStream);
	bool __fastcall InjectJpegEXIF(const System::WideString FileName);
	bool __fastcall InjectJpegEXIFStream(System::Classes::TStream* InputStream, System::Classes::TStream* OutputStream);
	bool __fastcall LoadFromFileDCX(const System::WideString FileName);
	bool __fastcall LoadFromStreamDCX(System::Classes::TStream* Stream);
	void __fastcall SaveToStreamDCX(System::Classes::TStream* Stream);
	void __fastcall SaveToFileDCX(const System::WideString FileName);
	void __fastcall InsertToFileDCX(const System::WideString FileName);
	bool __fastcall LoadFromFileJP2(const System::WideString FileName);
	bool __fastcall LoadFromFileJ2K(const System::WideString FileName);
	bool __fastcall LoadFromStreamJP2(System::Classes::TStream* Stream);
	bool __fastcall LoadFromStreamJ2K(System::Classes::TStream* Stream);
	void __fastcall SaveToStreamJP2(System::Classes::TStream* Stream);
	void __fastcall SaveToStreamJ2K(System::Classes::TStream* stream);
	void __fastcall SaveToFileJP2(const System::WideString FileName);
	void __fastcall SaveToFileJ2K(const System::WideString FileName);
	int __fastcall LoadFromFileGIF(const System::WideString FileName);
	void __fastcall SaveToFileGIF(const System::WideString FileName);
	int __fastcall InsertToFileGIF(const System::WideString FileName);
	int __fastcall LoadFromStreamGIF(System::Classes::TStream* Stream);
	void __fastcall SaveToStreamGIF(System::Classes::TStream* Stream);
	int __fastcall ReplaceFileGIF(const System::WideString FileName);
	void __fastcall SaveToStreamPCX(System::Classes::TStream* Stream);
	bool __fastcall LoadFromStreamPCX(System::Classes::TStream* Stream);
	void __fastcall SaveToFilePCX(const System::WideString FileName);
	bool __fastcall LoadFromFilePCX(const System::WideString FileName);
	int __fastcall LoadFromStreamTIFF(System::Classes::TStream* Stream);
	void __fastcall SaveToStreamTIFF(System::Classes::TStream* Stream);
	int __fastcall LoadFromFileTIFF(const System::WideString FileName);
	void __fastcall SaveToFileTIFF(const System::WideString FileName);
	int __fastcall InsertToFileTIFF(const System::WideString FileName);
	int __fastcall InsertToStreamTIFF(System::Classes::TStream* Stream);
	int __fastcall ReplaceFileTIFF(const System::WideString FileName);
	int __fastcall ReplaceStreamTIFF(System::Classes::TStream* Stream);
	bool __fastcall InjectTIFFEXIF(const System::WideString FileName, int pageIndex = 0x0)/* overload */;
	bool __fastcall InjectTIFFEXIF(const System::WideString InputFileName, const System::WideString OutputFileName, int pageIndex = 0x0)/* overload */;
	bool __fastcall InjectTIFFEXIF(System::Classes::TStream* InputStream, System::Classes::TStream* OutputStream, int pageIndex = 0x0)/* overload */;
	void __fastcall SaveToStreamBMP(System::Classes::TStream* Stream);
	bool __fastcall LoadFromStreamBMP(System::Classes::TStream* Stream);
	void __fastcall SaveToFileBMP(const System::WideString FileName);
	bool __fastcall LoadFromFileBMP(const System::WideString FileName);
	bool __fastcall LoadFromFileICO(const System::WideString FileName);
	bool __fastcall LoadFromStreamICO(System::Classes::TStream* Stream);
	void __fastcall SaveToStreamICO(System::Classes::TStream* Stream);
	void __fastcall SaveToFileICO(const System::WideString FileName);
	bool __fastcall LoadFromFileCUR(const System::WideString FileName);
	bool __fastcall LoadFromStreamCUR(System::Classes::TStream* Stream);
	bool __fastcall LoadFromFilePNG(const System::WideString FileName);
	bool __fastcall LoadFromStreamPNG(System::Classes::TStream* Stream);
	void __fastcall SaveToFilePNG(const System::WideString FileName);
	void __fastcall SaveToStreamPNG(System::Classes::TStream* Stream);
	bool __fastcall LoadFromFileDICOM(const System::WideString FileName);
	bool __fastcall LoadFromStreamDICOM(System::Classes::TStream* Stream);
	void __fastcall SaveToStreamDICOM(System::Classes::TStream* Stream);
	void __fastcall SaveToFileDICOM(const System::WideString FileName);
	bool __fastcall InjectDICOMTags(const System::WideString FileName)/* overload */;
	bool __fastcall InjectDICOMTags(const System::WideString InputFileName, const System::WideString OutputFileName)/* overload */;
	bool __fastcall InjectDICOMTags(System::Classes::TStream* InputStream, System::Classes::TStream* OutputStream)/* overload */;
	bool __fastcall LoadFromFileTGA(const System::WideString FileName);
	bool __fastcall LoadFromStreamTGA(System::Classes::TStream* Stream);
	void __fastcall SaveToFileTGA(const System::WideString FileName);
	void __fastcall SaveToStreamTGA(System::Classes::TStream* Stream);
	bool __fastcall ImportMetafile(Vcl::Graphics::TMetafile* meta, int Width = 0xffffffff, int Height = 0xffffffff, bool WithAlpha = true, System::Uitypes::TColor BackgroundFill = (System::Uitypes::TColor)(0x1fffffff), bool MaintainAR = false)/* overload */;
	bool __fastcall ImportMetafile(const System::WideString FileName, int Width = 0xffffffff, int Height = 0xffffffff, bool WithAlpha = true, System::Uitypes::TColor BackgroundFill = (System::Uitypes::TColor)(0x1fffffff), bool MaintainAR = false)/* overload */;
	bool __fastcall ImportMetafile(System::Classes::TStream* Stream, int Width = 0xffffffff, int Height = 0xffffffff, bool WithAlpha = true, System::Uitypes::TColor BackgroundFill = (System::Uitypes::TColor)(0x1fffffff), bool MaintainAR = false)/* overload */;
	bool __fastcall ImportMetafile(Iegdiplus::TIEMetafile* meta, int Width = 0xffffffff, int Height = 0xffffffff, bool WithAlpha = true, System::Uitypes::TColor BackgroundFill = (System::Uitypes::TColor)(0x1fffffff), bool MaintainAR = false)/* overload */;
	void __fastcall MergeMetafile(const System::WideString FileName, int x, int y, int Width = 0xffffffff, int Height = 0xffffffff);
	bool __fastcall LoadFromFilePXM(const System::WideString FileName);
	bool __fastcall LoadFromStreamPXM(System::Classes::TStream* Stream);
	void __fastcall SaveToFilePXM(const System::WideString FileName);
	void __fastcall SaveToStreamPXM(System::Classes::TStream* Stream);
	int __fastcall OpenAVIFile(const System::WideString FileName);
	void __fastcall CloseAVIFile();
	bool __fastcall LoadFromAVI(int FrameIndex);
	bool __fastcall IsOpenAVI();
	TIECreateAVIFileResult __fastcall CreateAVIFile(const System::WideString FileName, double Rate = 1.500000E+01, const System::AnsiString codec = "DIB ", const System::WideString WavFilename = System::WideString());
	void __fastcall SaveToAVI();
	int __fastcall OpenMediaFile(const System::WideString FileName);
	void __fastcall CloseMediaFile();
	bool __fastcall LoadFromMediaFile(int FrameIndex);
	bool __fastcall IsOpenMediaFile();
	bool __fastcall LoadFromFileWBMP(const System::WideString FileName);
	bool __fastcall LoadFromStreamWBMP(System::Classes::TStream* Stream);
	void __fastcall SaveToFileWBMP(const System::WideString FileName);
	void __fastcall SaveToStreamWBMP(System::Classes::TStream* Stream);
	void __fastcall CreatePSFile(const System::WideString FileName);
	void __fastcall SaveToPS();
	void __fastcall ClosePSFile();
	void __fastcall SaveToStreamPS(System::Classes::TStream* Stream);
	void __fastcall SaveToFilePS(const System::WideString FileName);
	void __fastcall CreatePDFFile(const System::WideString FileName);
	void __fastcall SaveToPDF();
	void __fastcall ClosePDFFile();
	void __fastcall SaveToStreamPDF(System::Classes::TStream* Stream);
	void __fastcall SaveToFilePDF(const System::WideString FileName);
	bool __fastcall LoadFromStreamPDF(System::Classes::TStream* Stream, int Width = 0xffffffff, int Height = 0xffffffff, const System::UnicodeString Password = System::UnicodeString());
	bool __fastcall LoadFromFilePDF(const System::WideString FileName, int Width = 0xffffffff, int Height = 0xffffffff, const System::UnicodeString Password = System::UnicodeString());
	bool __fastcall LoadFromStreamRAW(System::Classes::TStream* Stream);
	bool __fastcall LoadFromFileRAW(const System::WideString FileName);
	bool __fastcall LoadJpegFromFileCRW(const System::WideString FileName);
	bool __fastcall LoadFromStreamBMPRAW(System::Classes::TStream* Stream);
	bool __fastcall LoadFromFileBMPRAW(const System::WideString FileName);
	void __fastcall SaveToStreamBMPRAW(System::Classes::TStream* Stream);
	void __fastcall SaveToFileBMPRAW(const System::WideString FileName);
	bool __fastcall LoadFromStreamPSD(System::Classes::TStream* Stream);
	bool __fastcall LoadFromFilePSD(const System::WideString FileName);
	void __fastcall SaveToStreamPSD(System::Classes::TStream* Stream);
	void __fastcall SaveToFilePSD(const System::WideString FileName);
	bool __fastcall LoadFromStreamHDP(System::Classes::TStream* Stream);
	bool __fastcall LoadFromFileHDP(const System::WideString FileName);
	void __fastcall SaveToStreamHDP(System::Classes::TStream* Stream);
	void __fastcall SaveToFileHDP(const System::WideString FileName);
	bool __fastcall LoadFromStreamWIC(System::Classes::TStream* Stream, int FileFormat = 0x0);
	bool __fastcall LoadFromFileWIC(const System::WideString FileName, int FileFormat = 0x0);
	void __fastcall SaveToStreamWIC(System::Classes::TStream* Stream, int FileFormat);
	void __fastcall SaveToFileWIC(const System::WideString FileName, int FileFormat);
	DYNAMIC bool __fastcall LoadFromFile(const System::WideString FileName, int FileFormat)/* overload */;
	DYNAMIC bool __fastcall LoadFromFile(const System::WideString FileName, bool bCheckUnknown = true)/* overload */;
	DYNAMIC bool __fastcall LoadFromFileAuto(const System::WideString FileName);
	DYNAMIC void __fastcall SaveToFile(const System::WideString FileName, int ImageFormat = 0x0);
	DYNAMIC void __fastcall SaveToText(const System::WideString FileName, int ImageFormat = 0x0, TIETextFormat TextFormat = (TIETextFormat)(0x3))/* overload */;
	DYNAMIC void __fastcall SaveToText(System::Classes::TStream* Stream, int ImageFormat = 0x0, TIETextFormat TextFormat = (TIETextFormat)(0x3))/* overload */;
	void __fastcall LoadFromText(const System::WideString FileName, TIETextFormat TextFormat = (TIETextFormat)(0x2))/* overload */;
	void __fastcall LoadFromText(System::Classes::TStream* Stream, TIETextFormat TextFormat = (TIETextFormat)(0x2))/* overload */;
	DYNAMIC void __fastcall LoadFromBuffer(void * Buffer, int BufferSize, int Format = 0x0);
	DYNAMIC bool __fastcall LoadFromFileFormat _DEPRECATED_ATTRIBUTE1("Use LoadFromFile instead - http://imageen.com/help/Compatibility.html") (const System::WideString FileName, int FileFormat);
	DYNAMIC bool __fastcall LoadFromStreamFormat _DEPRECATED_ATTRIBUTE1("Use LoadFromStream instead - http://imageen.com/help/Compatibility.html") (System::Classes::TStream* Stream, int FileFormat);
	__property bool Aborting = {read=fAborting, write=SetAborting, nodefault};
	DYNAMIC bool __fastcall ParamsFromFile(const System::WideString FileName, int Format)/* overload */;
	DYNAMIC bool __fastcall ParamsFromFile(const System::WideString FileName, bool bUseExtension = false)/* overload */;
	DYNAMIC bool __fastcall ParamsFromStream(System::Classes::TStream* Stream, int Format = 0x0);
	DYNAMIC bool __fastcall ParamsFromBuffer(void * Buffer, int BufferSize, int Format = 0x0);
	DYNAMIC bool __fastcall ParamsFromFileFormat _DEPRECATED_ATTRIBUTE1("Use ParamsFromFile instead - http://imageen.com/help/Compatibility.html") (const System::WideString FileName, int Format);
	DYNAMIC bool __fastcall ParamsFromStreamFormat _DEPRECATED_ATTRIBUTE1("Use ParamsFromStream instead - http://imageen.com/help/Compatibility.html") (System::Classes::TStream* Stream, int Format);
	DYNAMIC bool __fastcall LoadFromStream(System::Classes::TStream* Stream, int FileFormat = 0x0);
	bool __fastcall LoadThumbnailFromExplorer(const System::WideString FileName, int DesiredWidth = 0x78, int DesiredHeight = 0x78);
	DYNAMIC void __fastcall SaveToStream(System::Classes::TStream* Stream, int FileType);
	int __fastcall Seek(TIEIOSeekDestination Destination, const System::WideString FileName = System::WideString())/* overload */;
	int __fastcall Seek(TIEIOSeekDestination Destination, System::Classes::TStream* Stream, int FileFormat = 0x0)/* overload */;
	System::WideString __fastcall ExecuteOpenDialog(const System::WideString InitialDir = System::WideString(), const System::WideString InitialFileName = System::WideString(), bool AlwaysAnimate = false, int FilterIndex = 0x0, const System::WideString ExtendedFilters = System::WideString(), const System::WideString Title = System::WideString(), const System::WideString Filter = System::WideString(), int DefaultFileType = 0xffffffff, int LimitToFileType = 0xffffffff, Hyiedefs::TIEShowFormats ShowFormats = (Hyiedefs::TIEShowFormats)(0x1))/* overload */;
	System::WideString __fastcall ExecuteOpenDialog(const System::WideString Title, int DefaultFileType, int LimitToFileType = 0xffffffff, bool AlwaysAnimate = false, Hyiedefs::TIEShowFormats ShowFormats = (Hyiedefs::TIEShowFormats)(0x1))/* overload */;
	System::WideString __fastcall ExecuteSaveDialog(const System::WideString InitialDir = System::WideString(), const System::WideString InitialFileName = System::WideString(), bool AlwaysAnimate = false, int FilterIndex = 0x0, const System::WideString ExtendedFilters = System::WideString(), const System::WideString Title = System::WideString(), const System::WideString Filter = System::WideString(), int DefaultFileType = 0xffffffff, int LimitToFileType = 0xffffffff, Hyiedefs::TIEShowFormats ShowFormats = (Hyiedefs::TIEShowFormats)(0x1), bool OverwritePrompt = false)/* overload */;
	System::WideString __fastcall ExecuteSaveDialog(const System::WideString Title, int DefaultFileType, int LimitToFileType = 0xffffffff, bool AlwaysAnimate = false, Hyiedefs::TIEShowFormats ShowFormats = (Hyiedefs::TIEShowFormats)(0x1), bool OverwritePrompt = false)/* overload */;
	bool __fastcall CaptureFromScreen(TIECSSource Source = (TIECSSource)(0x0), System::Uitypes::TCursor MouseCursor = (System::Uitypes::TCursor)(0xffffffff), NativeUInt Window = (NativeUInt)(0x0));
	bool __fastcall LoadFromURL(const System::WideString URL);
	bool __fastcall Acquire(bool bResetParams = false);
	bool __fastcall SelectAcquireSource(Iexacquire::TIEAcquireApis Apis = (Iexacquire::TIEAcquireApis() << Iexacquire::TIEAcquireApi::ieaTwain << Iexacquire::TIEAcquireApi::ieaWIA ), int DeviceGlyphHue = 0xfffffc19);
	bool __fastcall SetAcquireSource(Iexacquire::TIEAcquireApi Api, const System::Variant &Location);
	__property Iexacquire::TIEAcquireSource SelectedAcquireSource = {read=GetSelectedAcquireSource};
	bool __fastcall TwainAcquireOpen();
	void __fastcall TwainAcquireClose();
	bool __fastcall AcquireOpen _DEPRECATED_ATTRIBUTE1("Use TwainAcquireOpen() instead - http://imageen.com/help/Compatibility.html") ();
	void __fastcall AcquireClose _DEPRECATED_ATTRIBUTE1("Use TwainAcquireClose() instead - http://imageen.com/help/Compatibility.html") ();
	__property int AsyncRunning = {read=GetAsyncRunning, nodefault};
	__property bool AsyncMode = {read=fAsyncMode, write=fAsyncMode, nodefault};
	void __fastcall WaitThreads(bool AbortAll = false);
	void __fastcall SuspendThreads _DEPRECATED_ATTRIBUTE0 ();
	void __fastcall ResumeThreads _DEPRECATED_ATTRIBUTE0 ();
	__property Iexacquire::TIEAcquireParams* AcquireParams = {read=fAcquireParams};
	__property Ietwain::TIETwainParams* TwainParams = {read=fTwainParams};
	__property Iexdcim::TIEDcimAcquire* DCIMParams = {read=fDCIMParams};
	__property Iewia::TIEWia* WIAParams = {read=GetWIAParams};
	__property Ieds::TIEDirectShow* DShowParams = {read=GetDShowParams};
	__property Iemmf::TIEMediaFoundationSourceReader* MediaFoundationSourceReader = {read=GetMediaFoundationSourceReader};
	void __fastcall PrintImageEx(Iexbitmaps::TIEBitmap* PrintBMP, Vcl::Graphics::TCanvas* PrtCanvas, int dpix, int dpiy, double pagewidth, double pageheight, double MarginLeft, double MarginTop, double MarginRight, double MarginBottom, TIEVerticalPos VerticalPos, TIEHorizontalPos HorizontalPos, TIESize Size, double SpecWidth, double SpecHeight, double GammaCorrection, const System::UnicodeString Heading = System::UnicodeString(), int HeadingHeight = 0x5, System::Uitypes::TColor HeadingColor = (System::Uitypes::TColor)(0x0), bool bPrinting = true, int PreviewPage = 0xffffffff);
	void __fastcall PrintImagePos(Vcl::Graphics::TCanvas* PrtCanvas, double x, double y, double Width, double Height, double GammaCorrection = 1.000000E+00, bool PrintAnnotations = false, bool PrintLayers = false)/* overload */;
	void __fastcall PrintImagePos(double x, double y, double Width, double Height, double GammaCorrection = 1.000000E+00, bool PrintAnnotations = false, bool PrintLayers = false)/* overload */;
	void __fastcall PrintImagePosEx(Iexbitmaps::TIEBitmap* PrintBMP, Vcl::Graphics::TCanvas* PrtCanvas, int dpix, int dpiy, double x, double y, double Width, double Height, double GammaCorrection);
	void __fastcall PrintImage(Vcl::Graphics::TCanvas* PrtCanvas = (Vcl::Graphics::TCanvas*)(0x0), double MarginLeft = 1.000000E+00, double MarginTop = 1.000000E+00, double MarginRight = 1.000000E+00, double MarginBottom = 1.000000E+00, TIEVerticalPos VerticalPos = (TIEVerticalPos)(0x1), TIEHorizontalPos HorizontalPos = (TIEHorizontalPos)(0x1), TIESize Size = (TIESize)(0x1), double SpecWidth = 0.000000E+00, double SpecHeight = 0.000000E+00, double GammaCorrection = 1.000000E+00, bool PrintAnnotations = false, bool PrintLayers = false, const System::UnicodeString Heading = System::UnicodeString(), int HeadingHeight = 0x5, System::Uitypes::TColor HeadingColor = (System::Uitypes::TColor)(0x0))/* overload */;
	void __fastcall PrintImage(double Margins = 1.000000E+00, TIEVerticalPos VerticalPos = (TIEVerticalPos)(0x1), TIEHorizontalPos HorizontalPos = (TIEHorizontalPos)(0x1), TIESize Size = (TIESize)(0x1), double SpecWidth = 0.000000E+00, double SpecHeight = 0.000000E+00, double GammaCorrection = 1.000000E+00, bool PrintAnnotations = false, bool PrintLayers = false, const System::UnicodeString Heading = System::UnicodeString(), int HeadingHeight = 0x5, System::Uitypes::TColor HeadingColor = (System::Uitypes::TColor)(0x0))/* overload */;
	void __fastcall PreviewPrintImage(Vcl::Graphics::TBitmap* DestBitmap, int MaxBitmapWidth, int MaxBitmapHeight, Vcl::Printers::TPrinter* PrinterObj = (Vcl::Printers::TPrinter*)(0x0), double MarginLeft = 1.000000E+00, double MarginTop = 1.000000E+00, double MarginRight = 1.000000E+00, double MarginBottom = 1.000000E+00, TIEVerticalPos VerticalPos = (TIEVerticalPos)(0x1), TIEHorizontalPos HorizontalPos = (TIEHorizontalPos)(0x1), TIESize Size = (TIESize)(0x1), double SpecWidth = 0.000000E+00, double SpecHeight = 0.000000E+00, double GammaCorrection = 1.000000E+00, bool PrintAnnotations = false, bool PrintLayers = false, const System::UnicodeString Heading = System::UnicodeString(), int HeadingHeight = 0x5, System::Uitypes::TColor HeadingColor = (System::Uitypes::TColor)(0x0), int PreviewPage = 0xffffffff);
	void __fastcall PreviewPrintImageEx(Iexbitmaps::TIEBitmap* PrintBMP, Vcl::Graphics::TBitmap* DestBitmap, int MaxBitmapWidth, int MaxBitmapHeight, Vcl::Printers::TPrinter* PrinterObj, double MarginLeft, double MarginTop, double MarginRight, double MarginBottom, TIEVerticalPos VerticalPos, TIEHorizontalPos HorizontalPos, TIESize Size, double SpecWidth, double SpecHeight, double GammaCorrection, const System::UnicodeString Heading, int HeadingHeight, System::Uitypes::TColor HeadingColor, int PreviewPage = 0xffffffff);
	bool __fastcall DoPrintPreviewDialog(TIEDialogType DialogType = (TIEDialogType)(0x0), System::WideString TaskName = System::WideString(), bool PrintAnnotations = false, const System::WideString Caption = System::WideString(), bool PrintLayers = false);
	__property TIOPrintPreviewParams* PrintPreviewParams = {read=fPrintPreviewParams};
	__property Hyiedefs::TResampleFilter PrintingFilterOnSubsampling = {read=fPrintingFilterOnSubsampling, write=fPrintingFilterOnSubsampling, nodefault};
	__property bool PrintingMaintainAR = {read=fPrintingMaintainAR, write=fPrintingMaintainAR, nodefault};
	__property System::WideString ProxyAddress = {read=GetProxyAddress, write=SetProxyAddress};
	__property System::WideString ProxyUser = {read=GetProxyUser, write=SetProxyUser};
	__property System::WideString ProxyPassword = {read=GetProxyPassword, write=SetProxyPassword};
	__property bool ResetPrinter = {read=fResetPrinter, write=fResetPrinter, nodefault};
	__property System::UnicodeString PrintLogFile = {read=GetPrintLogFile, write=SetPrintLogFile};
	Iexuserinteractions::TIEPdfViewerInteraction* __fastcall GetActivePdfViewer();
	__property Ieview::TIETask ProgressTask = {read=fProgressTask, nodefault};
	
__published:
	__property Ieview::TIEView* AttachedImageEn = {read=fImageEnView, write=SetAttachedImageEn};
	__property System::Uitypes::TColor Background = {read=GetReBackground, write=SetReBackground, default=0};
	__property Hyiedefs::TIEProgressEvent OnProgress = {read=fOnProgress, write=fOnProgress};
	__property bool StreamHeaders = {read=fStreamHeaders, write=fStreamHeaders, default=0};
	__property Vcl::Graphics::TFont* PreviewFont = {read=fPreviewFont, write=SetPreviewFont};
	__property bool PreviewFontEnabled = {read=fPreviewFontEnabled, write=SetPreviewFontEnabled, default=0};
	__property Hyieutils::TIOPreviewsParams PreviewsParams = {read=GetIOPreviewParams, write=SetIOPreviewParams, default=0};
	__property Vcl::Extctrls::TImage* AttachedTImage = {read=fTImage, write=SetTImage};
	__property TIEIOPreviewEvent OnIOPreview = {read=fOnIOPreview, write=fOnIOPreview};
	__property TIEDialogsMeasureUnit DialogsMeasureUnit = {read=fDialogsMeasureUnit, write=fDialogsMeasureUnit, default=0};
	__property bool AutoAdjustDPI = {read=fAutoAdjustDPI, write=fAutoAdjustDPI, default=0};
	__property bool WicFastLoading = {read=fWicFastLoading, write=fWicFastLoading, default=0};
	__property bool FilteredAdjustDPI = {read=fFilteredAdjustDPI, write=fFilteredAdjustDPI, default=0};
	__property System::Classes::TNotifyEvent OnFinishWork = {read=fOnFinishWork, write=fOnFinishWork};
	__property TIEAcquireBitmapEvent OnAcquireBitmap = {read=fOnAcquireBitmap, write=fOnAcquireBitmap};
	__property System::Classes::TNotifyEvent OnAcquireClose = {read=fOnAcquireClose, write=fOnAcquireClose};
	__property TIEPrintPageEvent OnPrintPage = {read=fOnPrintPage, write=fOnPrintPage};
	__property bool SimplifiedParamsDialogs = {read=fSimplifiedParamsDialogs, write=fSimplifiedParamsDialogs, default=1};
	__property TIEDoPreviewsEvent OnDoPreviews = {read=fOnDoPreviews, write=fOnDoPreviews};
	__property bool NativePixelFormat = {read=GetNativePixelFormat, write=SetNativePixelFormat, default=0};
	__property System::UnicodeString ImageEnVersion = {read=GetImageEnVersion, write=SetImageEnVersion, stored=false};
};


typedef System::StaticArray<System::UnicodeString, 28> Imageenio__4;

//-- var, const, procedure ---------------------------------------------------
static const System::Int8 IETW_NONE = System::Int8(0x0);
static const System::Int8 IETW_A4LETTER = System::Int8(0x1);
static const System::Int8 IETW_B5LETTER = System::Int8(0x2);
static const System::Int8 IETW_USLETTER = System::Int8(0x3);
static const System::Int8 IETW_USLEGAL = System::Int8(0x4);
static const System::Int8 IETW_A5 = System::Int8(0x5);
static const System::Int8 IETW_B4 = System::Int8(0x6);
static const System::Int8 IETW_B6 = System::Int8(0x7);
static const System::Int8 IETW_USLEDGER = System::Int8(0x9);
static const System::Int8 IETW_USEXECUTIVE = System::Int8(0xa);
static const System::Int8 IETW_A3 = System::Int8(0xb);
static const System::Int8 IETW_B3 = System::Int8(0xc);
static const System::Int8 IETW_A6 = System::Int8(0xd);
static const System::Int8 IETW_C4 = System::Int8(0xe);
static const System::Int8 IETW_C5 = System::Int8(0xf);
static const System::Int8 IETW_C6 = System::Int8(0x10);
static const System::Int8 IETW_4A0 = System::Int8(0x11);
static const System::Int8 IETW_2A0 = System::Int8(0x12);
static const System::Int8 IETW_A0 = System::Int8(0x13);
static const System::Int8 IETW_A1 = System::Int8(0x14);
static const System::Int8 IETW_A2 = System::Int8(0x15);
static const System::Int8 IETW_A4 = System::Int8(0x1);
static const System::Int8 IETW_A7 = System::Int8(0x16);
static const System::Int8 IETW_A8 = System::Int8(0x17);
static const System::Int8 IETW_A9 = System::Int8(0x18);
static const System::Int8 IETW_A10 = System::Int8(0x19);
static const System::Int8 IETW_ISOB0 = System::Int8(0x1a);
static const System::Int8 IETW_ISOB1 = System::Int8(0x1b);
static const System::Int8 IETW_ISOB2 = System::Int8(0x1c);
static const System::Int8 IETW_ISOB3 = System::Int8(0xc);
static const System::Int8 IETW_ISOB4 = System::Int8(0x6);
static const System::Int8 IETW_ISOB5 = System::Int8(0x1d);
static const System::Int8 IETW_ISOB6 = System::Int8(0x7);
static const System::Int8 IETW_ISOB7 = System::Int8(0x1e);
static const System::Int8 IETW_ISOB8 = System::Int8(0x1f);
static const System::Int8 IETW_ISOB9 = System::Int8(0x20);
static const System::Int8 IETW_ISOB10 = System::Int8(0x21);
static const System::Int8 IETW_JISB0 = System::Int8(0x22);
static const System::Int8 IETW_JISB1 = System::Int8(0x23);
static const System::Int8 IETW_JISB2 = System::Int8(0x24);
static const System::Int8 IETW_JISB3 = System::Int8(0x25);
static const System::Int8 IETW_JISB4 = System::Int8(0x26);
static const System::Int8 IETW_JISB5 = System::Int8(0x2);
static const System::Int8 IETW_JISB6 = System::Int8(0x27);
static const System::Int8 IETW_JISB7 = System::Int8(0x28);
static const System::Int8 IETW_JISB8 = System::Int8(0x29);
static const System::Int8 IETW_JISB9 = System::Int8(0x2a);
static const System::Int8 IETW_JISB10 = System::Int8(0x2b);
static const System::Int8 IETW_C0 = System::Int8(0x2c);
static const System::Int8 IETW_C1 = System::Int8(0x2d);
static const System::Int8 IETW_C2 = System::Int8(0x2e);
static const System::Int8 IETW_C3 = System::Int8(0x2f);
static const System::Int8 IETW_C7 = System::Int8(0x30);
static const System::Int8 IETW_C8 = System::Int8(0x31);
static const System::Int8 IETW_C9 = System::Int8(0x32);
static const System::Int8 IETW_C10 = System::Int8(0x33);
static const System::Int8 IETW_USSTATEMENT = System::Int8(0x34);
static const System::Int8 IETW_BUSINESSCARD = System::Int8(0x35);
static const System::Int8 IETW_MAXSIZE = System::Int8(0x36);
extern DELPHI_PACKAGE Imageenio__1 Twain_Page_Sizes;
extern DELPHI_PACKAGE System::UnicodeString iegPrintLogFileName;
extern DELPHI_PACKAGE System::TextFile iegPrintLogFile;
#define PPP_MARGINTOP L"MARGINTOP"
#define PPP_MARGINLEFT L"MARGINLEFT"
#define PPP_MARGINRIGHT L"MARGINRIGHT"
#define PPP_MARGINBOTTOM L"MARGINBOTTOM"
#define PPP_POSITION L"POSITION"
#define PPP_SIZE L"SIZE"
#define PPP_WIDTH L"WIDTH"
#define PPP_HEIGHT L"HEIGHT"
#define PPP_GAMMA L"GAMMA"
#define PPP_PRINTSELECTED L"PRINTSELECTED"
#define PPP_PRINTTHUMBNAILS L"PRINTTHUMBNAILS"
#define PPP_THUMBNAILCOLUMNS L"THUMBNAILCOLUMNS"
#define PPP_THUMBNAILROWS L"THUMBNAILROWS"
#define PPP_THUMBNAILSPACING L"THUMBNAILSPACING"
#define PPP_THUMBNAILSTYLE L"THUMBNAILSTYLE"
#define PPP_THUMBNAILSHOWTEXT L"THUMBNAILSHOWTEXT"
#define PPP_CONTACTSHEETWIDTH L"CONTACTSHEETWIDTH"
#define PPP_CONTACTSHEETHEIGHT L"CONTACTSHEETHEIGHT"
#define PPP_CONTACTSHEETMARGINS L"CONTACTSHEETMARGINS"
#define PPP_CONTACTSHEETSPACING L"CONTACTSHEETSPACING"
#define PPP_HEADINGSIZE L"HEADINGSIZE"
#define PPP_HEADINGCOLOR L"HEADINGCOLOR"
#define PPP_DLGWIDTH L"DLGWIDTH"
#define PPP_DLGHEIGHT L"DLGHEIGHT"
#define PPP_DLGMAXIMIZED L"DLGMAXIMIZED"
#define PPP_MAXIDLGWIDTH L"MAXIDLGWIDTH"
#define PPP_MAXIDLGHEIGHT L"MAXIDLGHEIGHT"
#define PPP_MAXIDLGMAXIMIZED L"MAXIDLGMAXIMIZED"
static const System::Int8 PPP_Property_Count = System::Int8(0x1c);
extern DELPHI_PACKAGE Imageenio__4 PPP_Property_List;
extern DELPHI_PACKAGE int __fastcall IEFilenameToInternalFileType(const System::UnicodeString FileName, bool IncludeAVI = false, bool IncludeExternal = false);
extern DELPHI_PACKAGE void __fastcall IEInitialize_imageenio(void);
extern DELPHI_PACKAGE void __fastcall IEFinalize_imageenio(void);
}	/* namespace Imageenio */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_IMAGEENIO)
using namespace Imageenio;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// ImageenioHPP
