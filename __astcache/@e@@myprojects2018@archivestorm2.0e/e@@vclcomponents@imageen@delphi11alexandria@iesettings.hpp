// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'iesettings.pas' rev: 35.00 (Windows)

#ifndef IesettingsHPP
#define IesettingsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.UITypes.hpp>
#include <Winapi.Windows.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <Vcl.Graphics.hpp>
#include <hyiedefs.hpp>
#include <hyieutils.hpp>
#include <iexBitmaps.hpp>
#include <iexToolbars.hpp>
#include <Vcl.ComCtrls.hpp>
#include <System.Contnrs.hpp>
#include <Vcl.Controls.hpp>
#include <iexCanvasUtils.hpp>
#include <iexUserInteractions.hpp>

//-- user supplied -----------------------------------------------------------

namespace Iesettings
{
//-- forward type declarations -----------------------------------------------
struct TIEVersion;
class DELPHICLASS TIEWordTransitionParams;
class DELPHICLASS TIEHintStyle;
class DELPHICLASS TIOParamDefaults;
class DELPHICLASS TIEPdfViewerDefaults;
class DELPHICLASS TIEImageEnGlobalSettings;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TIEEXIFInteroperabilityIndexUsage : unsigned char { ieiiNone, ieiiApplyOnly, ieiiApplyAndReset };

enum DECLSPEC_DENUM TIEEXIFMakerNotesHandling : unsigned char { iemhDiscard, iemhDecodeOrDiscardRaw, iemhDecodeOrMaintainRaw, iemhDecodeAndSaveRaw, iemhMaintainRawOnly };

enum DECLSPEC_DENUM TIEDICOMWindowingStrategy : unsigned char { iewsUseProvidedPixelRanges, iewsCalculateFromBitsStored, iewsCalculateFromActualPixels };

enum DECLSPEC_DENUM TIEDialogBackgroundStyle : unsigned char { iedbDefault, iedbPaper, iedbMetal, iedbCustom };

enum DECLSPEC_DENUM TIEDPIScaling : unsigned char { iedsDisabled, iedsEnabled, iedsDisabledInternalEx, iedsDisabledInternalFontEx };

enum DECLSPEC_DENUM Iesettings__1 : unsigned char { iepiIELib, iepiIEVision, iepiLanguages, iepiPDFium, iepiImageMagick };

typedef System::Set<Iesettings__1, Iesettings__1::iepiIELib, Iesettings__1::iepiImageMagick> TIEPlugIns;

enum DECLSPEC_DENUM Iesettings__2 : unsigned char { iemoIEView, iemoIEVect, iemoIEIntegrateIEVect, iemoMultiView, iemoFolderMView, iemoMViewAnimation, iemoShellComponents, iemoLayers, iemoLayerProps, iemoInteractiveTools, iemoPdfViewer, iemoAcquisition, iemoWPD, iemoDB, iemoIPDialog, iemoOpenSaveDialogs, iemoIODialog, iemoPrinting, iemoPrintDialogs, iemoWIC, iemoDirectShow, iemoMMF, iemoCMS, iemoTransitionEffects, iemoExtraTransitionEffects, iemoPresetImages, iemoRegisterQR, iemoBufferedStream, iemoNeuralNet, iemoResourceExtractor, iemoImagingAnnot, iemoImageEnAnnot, iemoTiffHandler, iemoFFT, iemoRFBProtocol, iemoUseGdiPlus, iemoSlippyMap, iemoShellThumbnails, iemoActions, iemoEquirectangularRenderer, iemoHashing, iemoVFW, iemoRichText, 
	iemoRichEditObjectSupport, iemoRichEditFindAndReplace, iemoToolbars, iemoPopups, iemoExtraControls, iemoTGraphic, iemoCanRegisterTPicture, iemoIEPenSupport, iemoRawFormats, iemoDicom, iemoIEN, iemoMetaFiles, iemoICOWriting, iemoSVGWriting, iemoPSD, iemoZLib, iemoAVI, iemoMiscPlugins, iemoNativeJPEG, iemoPNG, iemoNativePNG, iemoJPEG2000, iemoNativeJPEG2000, iemoPDF, iemoTwainTaskWindows, iemoRegisterTPicture, iemoCheckIELibVersion, iemoTIFFAdditionalChannel, iemoIEUseFileDialogClass, iemoOptimizeIEMView };

typedef System::Set<Iesettings__2, Iesettings__2::iemoIEView, Iesettings__2::iemoOptimizeIEMView> TImageEnModules;

enum DECLSPEC_DENUM TIEImagingEngine : unsigned char { ieenAuto, ieenNative, ieenDLL, ieenWIC, ieenLegacy };

enum DECLSPEC_DENUM Iesettings__3 : unsigned char { ieleNoAntiAlias, ieleNoImageFilters, ieleNoFeathering, ieleNoMasks, ieleNoRotationFilter, ieleNoSoftShadows, ieleNoTextSmoothing, ieleNoUpdateWhileSizing };

typedef System::Set<Iesettings__3, Iesettings__3::ieleNoAntiAlias, Iesettings__3::ieleNoUpdateWhileSizing> TIELayerFastDrawingEffects;

struct DECLSPEC_DRECORD TIEVersion
{
public:
	int Version;
	System::UnicodeString VersionStr;
	int Day;
	int Month;
	int Year;
	System::UnicodeString DateStr;
	System::UnicodeString IELibVersionStr;
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEWordTransitionParams : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	System::UnicodeString Word;
	System::UnicodeString FontName;
	System::Uitypes::TFontStyles Style;
	System::Word Quality;
public:
	/* TObject.Create */ inline __fastcall TIEWordTransitionParams() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TIEWordTransitionParams() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEHintStyle : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	System::Uitypes::TColor BorderColor;
	System::Uitypes::TColor FillColor;
	int Transparency;
public:
	/* TObject.Create */ inline __fastcall TIEHintStyle() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TIEHintStyle() { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM Iesettings__6 : unsigned char { iefImageEn, iefPNG };

typedef System::Set<Iesettings__6, Iesettings__6::iefImageEn, Iesettings__6::iefPNG> TIEClipboardCopyFormats;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIOParamDefaults : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	bool EnableAdjustOrientation;
	bool RAW_AutoAdjustColors;
	bool RAW_HalfSize;
	bool RAW_GetEmbeddedJpeg;
	int RAW_EmbeddedJpegMinWidth;
	int RAW_EmbeddedJpegMinHeight;
	Iexbitmaps::TIERAWEmbeddedJpegLoading RAW_EmbeddedJpegLoading;
	Iexbitmaps::TIERAWInterpolation RAW_Interpolation;
	bool RAW_QuickInterpolate;
	bool RAW_UseAutoWB;
	bool RAW_UseCameraWB;
	Iexbitmaps::TIOJPEGDctMethod JPEG_DCTMethod;
	int JPEG_Quality;
	Iexbitmaps::TIOJPEGScale JPEG_Scale;
	bool PSD_LoadLayers;
	Iexbitmaps::TIEDicomRange DICOM_Range;
public:
	/* TObject.Create */ inline __fastcall TIOParamDefaults() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TIOParamDefaults() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEPdfViewerDefaults : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	System::Uitypes::TColor SelectionColor;
	System::Uitypes::TColor HighlightColor;
	System::Uitypes::TColor FormFieldColor;
	int FormFieldAlpha;
	Iexuserinteractions::TIEPdfOptions Options;
	int DPI;
public:
	/* TObject.Create */ inline __fastcall TIEPdfViewerDefaults() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TIEPdfViewerDefaults() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TIEImageEnGlobalSettings : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Hyiedefs::TMsgLanguage fMsgLanguage;
	int fDefaultCoresCount;
	int fBufferedReadStreamSize;
	int fProcessingDelayInterval;
	Hyieutils::TIEOpSys fOpSys;
	bool fUnicodeOS;
	Hyiedefs::TResampleFilter fDefaultPreviewsZoomFilter;
	Hyiedefs::TResampleFilter fDefaultResampleFilter;
	Hyiedefs::TIEAntialiasMode fDefaultRotateAntiAlias;
	Hyieutils::TIEDialogCenter fDefDialogCenter;
	Vcl::Graphics::TFont* fDefaultDialogFont;
	double fDefaultDialogFont_Height;
	__int64 fDefMinFileSize;
	Hyiedefs::THistogramScale fDefaultPreviewHistogramScale;
	bool fAutoLocateOnDisk;
	bool fAutoFragmentBitmap;
	bool fUseGDIPlus;
	bool fUseButtonGlyphsInDialogs;
	Hyiedefs::TIEBackgroundStyle fPreviewImageBackgroundStyle;
	System::Uitypes::TColor fPreviewImageBackgroundColor;
	System::UnicodeString fPreviewAdditionalMultipageExts;
	int fSystemColors;
	bool fIsRemoteSession;
	int fSystemDPIX;
	int fSystemDPIY;
	int fDefaultDPIX;
	int fDefaultDPIY;
	bool fMMX;
	int fEdgeX;
	int fEdgeY;
	int fBorderX;
	int fBorderY;
	int fVScrollWidth;
	int fHScrollHeight;
	int fMinZoomDisplayGrid;
	int fCustomHintTimeout;
	int fGridMajorStep;
	int fGuidelineCount;
	Vcl::Graphics::TPen* fGridPen;
	System::Uitypes::TColor fSelectionGridColor;
	System::UnicodeString fMViewExplorerThumbnailExts;
	Hyiedefs::TGIFLZWDecompFunc fDefGIF_LZWDECOMPFUNC;
	Hyiedefs::TGIFLZWCompFunc fDefGIF_LZWCOMPFUNC;
	Hyiedefs::TTIFFLZWDecompFunc fDefTIFF_LZWDECOMPFUNC;
	Hyiedefs::TTIFFLZWCompFunc fDefTIFF_LZWCOMPFUNC;
	System::Classes::TList* fFileFormats;
	bool fUseCMYKProfile;
	bool fUseDefaultFileExists;
	System::Uitypes::TColor fDefEMFBackgroundColor;
	int fMaxImageEMFSize;
	int fMaxImageEMFMatrixSize;
	System::UnicodeString fDefTempPath;
	Iexbitmaps::TIEConvertColorFunction fConvertColorFunction;
	bool fEnableCMS;
	int fColorReductionAlgorithm;
	int fColorReductionQuality;
	int fObjectsTIFFTag;
	bool fUseRelativeStreams;
	Hyiedefs::TResampleFilter fPanZoomQualityFilter;
	int fRedToGrayCoef;
	int fGreenToGrayCoef;
	int fBlueToGrayCoef;
	TIEEXIFInteroperabilityIndexUsage fEXIFInteroperabilityIndexUsage;
	TIEEXIFMakerNotesHandling fEXIFMakerNotesHandling;
	double fPrintDialogMarginsIncrement;
	double fPrintDialogMarginsMinValue;
	TIEWordTransitionParams* fWordTransitionParams;
	bool fTransitionsDrawAlternative;
	Hyiedefs::TIEShape fTransitionsDrawShape;
	bool fApplyColorProfileOnRendering;
	bool fReleaseTwainResources;
	bool fReuseTwainWindowHandle;
	unsigned fTwainTransferBufferSize;
	bool fTwainCropBufferedTransferedImage;
	bool fModelessSelectTwainSource;
	bool fIsInsideTwain;
	int fIOPreviewsDialogWidth;
	int fIOPreviewsDialogHeight;
	int fImageProcMaxThreads;
	__int64 fImageProcThreadsMinSize;
	bool fDICOMKeepMainImageTag;
	TIEDICOMWindowingStrategy fDICOMWindowingStrategy;
	int fJPEG2000SliceMemoryThreshold;
	TIEDialogBackgroundStyle fDialogBackgroundStyle;
	Vcl::Graphics::TBitmap* fDialogBackgroundImage;
	System::UnicodeString fProxyAddress;
	System::UnicodeString fProxyUser;
	System::UnicodeString fProxyPassword;
	bool fEnableDLLMode;
	TIEImagingEngine fJPEGEngine;
	TIEImagingEngine fActiveJPEGEngine;
	TIEImagingEngine fPNGEngine;
	TIEImagingEngine fActivePNGEngine;
	TIEImagingEngine fJPEG2000Engine;
	TIEImagingEngine fActiveJPEG2000Engine;
	TIEImagingEngine fRawEngine;
	TIEImagingEngine fActiveRawEngine;
	int fOpenDialogMaxMultiSelFiles;
	System::UnicodeString fWICFileTypes;
	bool fAutoAdjustDPI;
	bool fAutoSetBitDepth;
	bool fUseEXIFDateTime;
	int fThumbnailSize;
	Hyiedefs::TIEShape fDefaultLayerShape;
	System::UnicodeString fDefaultLayerText;
	bool fDefaultLayerEnableFormatting;
	TIEDPIScaling fAutoScale;
	bool fEnableTheming;
	bool fUTF8EncodeImagingAnnot;
	int fMeasureDecimalPlaces;
	TIOParamDefaults* fIOParamDefaults;
	TIEPdfViewerDefaults* fPdfViewerDefaults;
	Hyiedefs::TIEUnits fDefaultMeasureUnit;
	int fLayerCurveQuality;
	TIELayerFastDrawingEffects fLayerFastDrawingEffects;
	int fLayerShadowAlphaThreshold;
	bool fLayerPropertiesAdvancedTab;
	int fLayerPropertiesDialogWidth;
	int fLayerPropertiesDialogHeight;
	int fLayerRotationGripMaxDist;
	System::UnicodeString fUnregisteredBanner;
	TIEHintStyle* fHintStyle;
	System::UnicodeString fColorDialogCustomColors;
	bool fUseWindowsOpenSaveDialogs;
	int fPolygonAutoCloseDistance;
	bool fIEVectBeingUsed;
	TIEClipboardCopyFormats fClipboardCopyFormats;
	TIEPlugIns fActivePlugIns;
	System::UnicodeString fDLLLoadingLog;
	Iextoolbars::TImageEnViewToolbarParams* fImageViewingToolbar;
	Iextoolbars::TImageEnViewToolbarParams* fImageEditingToolbar;
	Iextoolbars::TImageEnViewToolbarParams* fImageSelectionToolbar;
	Iextoolbars::TImageEnViewToolbarParams* fLayerEditingToolbar;
	Iextoolbars::TImageEnViewToolbarParams* fLayerSelectionToolbar;
	Iextoolbars::TImageEnViewToolbarParams* fPdfViewingToolbar;
	Iextoolbars::TImageEnViewToolbarParams* fPdfEditingToolbar;
	Iextoolbars::TIEAddButtonEvent fOnAddToolbarButton;
	Iexcanvasutils::TIEAddButtonImageEvent fOnAddToolbarButtonImage;
	bool fToolbarsAllowExtraControls;
	System::Contnrs::TObjectList* fToolbarList;
	Iextoolbars::TIERichEditToolbarParams* fRichEditorToolbar;
	Iextoolbars::TImageEnViewButtons fImageViewingPopupMenu;
	Iextoolbars::TImageEnViewButtons fImageEditingPopupMenu;
	Iextoolbars::TImageEnViewButtons fImageSelectionPopupMenu;
	Iextoolbars::TImageEnViewButtons fLayerEditingPopupMenu;
	Iextoolbars::TImageEnViewButtons fLayerSelectionPopupMenu;
	Iextoolbars::TImageEnViewButtons fPdfViewingPopupMenu;
	Iextoolbars::TImageEnViewButtons fPdfEditingPopupMenu;
	Iextoolbars::TImageEnMViewButtons fMViewDefaultPopupMenu;
	Iextoolbars::TImageEnMViewButtons fMViewSelectionPopupMenu;
	Iextoolbars::TImageEnMViewButtons fFolderMViewDefaultPopupMenu;
	Iextoolbars::TImageEnMViewButtons fFolderMViewSelectionPopupMenu;
	Iextoolbars::TImageEnLayerMViewButtons fLayerMViewDefaultPopupMenu;
	Iextoolbars::TImageEnLayerMViewButtons fLayerMViewSelectionPopupMenu;
	Iextoolbars::TIERichEditButtons fTextEditorPopupMenu;
	Iextoolbars::TIERichEditButtons fRichEditorPopupMenu;
	int fPopupMenuImageHue;
	Iextoolbars::TIEAddButtonEvent fOnAddPopupMenuItem;
	Vcl::Controls::TImageList* fPopupMenuImageList;
	void __fastcall SetMsgLanguage(Hyiedefs::TMsgLanguage value);
	void __fastcall SetImageProcMaxThreads(int value);
	TIEDialogBackgroundStyle __fastcall GetDialogBackgroundStyle();
	int __fastcall GetCoreCount();
	int __fastcall GetPointerDeviceCount();
	bool __fastcall GetUseGDIPlus();
	System::UnicodeString __fastcall GetColorDialogCustomColors();
	Vcl::Controls::TImageList* __fastcall GetPopupMenuImageList();
	System::UnicodeString __fastcall GetWICFileTypes();
	TIEVersion __fastcall GetImageEnVersion();
	TImageEnModules __fastcall GetModules();
	Iexbitmaps::TIEFileFormatInfo* __fastcall GetFileFormat(int Index);
	int __fastcall GetFileFormatCount();
	void __fastcall SetJPEGEngine(TIEImagingEngine en);
	void __fastcall SetPNGEngine(TIEImagingEngine en);
	void __fastcall SetJPEG2000Engine(TIEImagingEngine en);
	void __fastcall SetRawEngine(TIEImagingEngine en);
	System::Classes::TShortCut __fastcall GetMemoShortCuts(Hyiedefs::TIEKeyboardShortcut Shortcut);
	void __fastcall SetMemoShortCuts(Hyiedefs::TIEKeyboardShortcut Shortcut, System::Classes::TShortCut v);
	
public:
	Hyiedefs::TIEKeyboardShortcuts KeyboardShortcuts;
	Hyiedefs::TIEMeasureUnits MeasureUnits;
	__property int MeasureDecimalPlaces = {read=fMeasureDecimalPlaces, write=fMeasureDecimalPlaces, nodefault};
	__property int PolygonAutoCloseDistance = {read=fPolygonAutoCloseDistance, write=fPolygonAutoCloseDistance, nodefault};
	__property Iextoolbars::TImageEnViewToolbarParams* ImageViewingToolbar = {read=fImageViewingToolbar, write=fImageViewingToolbar};
	__property Iextoolbars::TImageEnViewToolbarParams* ImageEditingToolbar = {read=fImageEditingToolbar, write=fImageEditingToolbar};
	__property Iextoolbars::TImageEnViewToolbarParams* ImageSelectionToolbar = {read=fImageSelectionToolbar, write=fImageSelectionToolbar};
	__property Iextoolbars::TImageEnViewToolbarParams* LayerEditingToolbar = {read=fLayerEditingToolbar, write=fLayerEditingToolbar};
	__property Iextoolbars::TImageEnViewToolbarParams* LayerSelectionToolbar = {read=fLayerSelectionToolbar, write=fLayerSelectionToolbar};
	__property Iextoolbars::TImageEnViewToolbarParams* PdfViewingToolbar = {read=fPdfViewingToolbar, write=fPdfViewingToolbar};
	__property Iextoolbars::TImageEnViewToolbarParams* PdfEditingToolbar = {read=fPdfEditingToolbar, write=fPdfEditingToolbar};
	__property Iextoolbars::TIERichEditToolbarParams* RichEditorToolbar = {read=fRichEditorToolbar, write=fRichEditorToolbar};
	__property Iextoolbars::TIEAddButtonEvent OnAddToolbarButton = {read=fOnAddToolbarButton, write=fOnAddToolbarButton};
	__property Iexcanvasutils::TIEAddButtonImageEvent OnAddToolbarButtonImage = {read=fOnAddToolbarButtonImage, write=fOnAddToolbarButtonImage};
	__property bool ToolbarsAllowExtraControls = {read=fToolbarsAllowExtraControls, write=fToolbarsAllowExtraControls, nodefault};
	__property Iextoolbars::TIERichEditButtons RichEditorPopupMenu = {read=fRichEditorPopupMenu, write=fRichEditorPopupMenu, nodefault};
	__property Iextoolbars::TIERichEditButtons TextEditorPopupMenu = {read=fTextEditorPopupMenu, write=fTextEditorPopupMenu, nodefault};
	__property Iextoolbars::TImageEnViewButtons ImageViewingPopupMenu = {read=fImageViewingPopupMenu, write=fImageViewingPopupMenu, nodefault};
	__property Iextoolbars::TImageEnViewButtons ImageEditingPopupMenu = {read=fImageEditingPopupMenu, write=fImageEditingPopupMenu, nodefault};
	__property Iextoolbars::TImageEnViewButtons ImageSelectionPopupMenu = {read=fImageSelectionPopupMenu, write=fImageSelectionPopupMenu, nodefault};
	__property Iextoolbars::TImageEnViewButtons LayerEditingPopupMenu = {read=fLayerEditingPopupMenu, write=fLayerEditingPopupMenu, nodefault};
	__property Iextoolbars::TImageEnViewButtons LayerSelectionPopupMenu = {read=fLayerSelectionPopupMenu, write=fLayerSelectionPopupMenu, nodefault};
	__property Iextoolbars::TImageEnViewButtons PdfViewingPopupMenu = {read=fPdfViewingPopupMenu, write=fPdfViewingPopupMenu, nodefault};
	__property Iextoolbars::TImageEnViewButtons PdfEditingPopupMenu = {read=fPdfEditingPopupMenu, write=fPdfEditingPopupMenu, nodefault};
	__property Iextoolbars::TImageEnMViewButtons MViewDefaultPopupMenu = {read=fMViewDefaultPopupMenu, write=fMViewDefaultPopupMenu, nodefault};
	__property Iextoolbars::TImageEnMViewButtons MViewSelectionPopupMenu = {read=fMViewSelectionPopupMenu, write=fMViewSelectionPopupMenu, nodefault};
	__property Iextoolbars::TImageEnMViewButtons FolderMViewDefaultPopupMenu = {read=fFolderMViewDefaultPopupMenu, write=fFolderMViewDefaultPopupMenu, nodefault};
	__property Iextoolbars::TImageEnMViewButtons FolderMViewSelectionPopupMenu = {read=fFolderMViewSelectionPopupMenu, write=fFolderMViewSelectionPopupMenu, nodefault};
	__property Iextoolbars::TImageEnLayerMViewButtons LayerMViewDefaultPopupMenu = {read=fLayerMViewDefaultPopupMenu, write=fLayerMViewDefaultPopupMenu, nodefault};
	__property Iextoolbars::TImageEnLayerMViewButtons LayerMViewSelectionPopupMenu = {read=fLayerMViewSelectionPopupMenu, write=fLayerMViewSelectionPopupMenu, nodefault};
	__property int PopupMenuImageHue = {read=fPopupMenuImageHue, write=fPopupMenuImageHue, nodefault};
	__property Vcl::Controls::TImageList* PopupMenuImageList = {read=GetPopupMenuImageList};
	__property Iextoolbars::TIEAddButtonEvent OnAddPopupMenuItem = {read=fOnAddPopupMenuItem, write=fOnAddPopupMenuItem};
	__property bool UseWindowsOpenSaveDialogs = {read=fUseWindowsOpenSaveDialogs, write=fUseWindowsOpenSaveDialogs, nodefault};
	__fastcall TIEImageEnGlobalSettings();
	__fastcall virtual ~TIEImageEnGlobalSettings();
	void __fastcall DestroySingletonInstance();
	bool __fastcall MsgLanguage_IsEnglish();
	__property Hyiedefs::TMsgLanguage MsgLanguage = {read=fMsgLanguage, write=SetMsgLanguage, nodefault};
	__property System::UnicodeString WICFileTypes = {read=GetWICFileTypes, write=fWICFileTypes};
	__property int DefaultCoresCount = {read=fDefaultCoresCount, write=fDefaultCoresCount, nodefault};
	__property int BufferedReadStreamSize = {read=fBufferedReadStreamSize, write=fBufferedReadStreamSize, nodefault};
	__property int ProcessingDelayInterval = {read=fProcessingDelayInterval, write=fProcessingDelayInterval, nodefault};
	__property Hyieutils::TIEOpSys OpSys = {read=fOpSys, write=fOpSys, nodefault};
	__property bool TransitionsDrawAlternative = {read=fTransitionsDrawAlternative, write=fTransitionsDrawAlternative, nodefault};
	__property Hyiedefs::TIEShape TransitionsDrawShape = {read=fTransitionsDrawShape, write=fTransitionsDrawShape, nodefault};
	__property bool UnicodeOS = {read=fUnicodeOS, write=fUnicodeOS, nodefault};
	__property Hyiedefs::TResampleFilter DefaultPreviewsZoomFilter = {read=fDefaultPreviewsZoomFilter, write=fDefaultPreviewsZoomFilter, nodefault};
	__property Hyiedefs::THistogramScale DefaultPreviewHistogramScale = {read=fDefaultPreviewHistogramScale, write=fDefaultPreviewHistogramScale, nodefault};
	__property Hyiedefs::TResampleFilter DefaultResampleFilter = {read=fDefaultResampleFilter, write=fDefaultResampleFilter, nodefault};
	__property Hyiedefs::TIEAntialiasMode DefaultRotateAntiAlias = {read=fDefaultRotateAntiAlias, write=fDefaultRotateAntiAlias, nodefault};
	__property Hyieutils::TIEDialogCenter DefDialogCenter = {read=fDefDialogCenter, write=fDefDialogCenter};
	__property Vcl::Graphics::TFont* DefaultDialogFont = {read=fDefaultDialogFont, write=fDefaultDialogFont};
	__property double DefaultDialogFont_Height = {read=fDefaultDialogFont_Height, write=fDefaultDialogFont_Height};
	__property __int64 DefMinFileSize = {read=fDefMinFileSize, write=fDefMinFileSize};
	__property bool AutoLocateOnDisk = {read=fAutoLocateOnDisk, write=fAutoLocateOnDisk, nodefault};
	__property bool AutoFragmentBitmap = {read=fAutoFragmentBitmap, write=fAutoFragmentBitmap, nodefault};
	__property bool UseGDIPlus = {read=GetUseGDIPlus, write=fUseGDIPlus, nodefault};
	__property Hyiedefs::TIEBackgroundStyle PreviewImageBackgroundStyle = {read=fPreviewImageBackgroundStyle, write=fPreviewImageBackgroundStyle, nodefault};
	__property System::Uitypes::TColor PreviewImageBackgroundColor = {read=fPreviewImageBackgroundColor, write=fPreviewImageBackgroundColor, nodefault};
	__property System::UnicodeString PreviewAdditionalMultipageExts = {read=fPreviewAdditionalMultipageExts, write=fPreviewAdditionalMultipageExts};
	__property int SystemColors = {read=fSystemColors, write=fSystemColors, nodefault};
	__property bool IsRemoteSession = {read=fIsRemoteSession, write=fIsRemoteSession, nodefault};
	__property TIEVersion ImageEnVersion = {read=GetImageEnVersion};
	__property TImageEnModules ImageEnModules = {read=GetModules};
	__property int SystemDPIX = {read=fSystemDPIX, write=fSystemDPIX, nodefault};
	__property int SystemDPIY = {read=fSystemDPIY, write=fSystemDPIY, nodefault};
	__property TIEWordTransitionParams* WordTransitionParams = {read=fWordTransitionParams, write=fWordTransitionParams};
	__property int DefaultDPIX = {read=fDefaultDPIX, write=fDefaultDPIX, nodefault};
	__property int DefaultDPIY = {read=fDefaultDPIY, write=fDefaultDPIY, nodefault};
	__property int CoreCount = {read=GetCoreCount, nodefault};
	__property int PointerDeviceCount = {read=GetPointerDeviceCount, nodefault};
	__property bool MMX = {read=fMMX, write=fMMX, nodefault};
	__property int EdgeX = {read=fEdgeX, write=fEdgeX, nodefault};
	__property int EdgeY = {read=fEdgeY, write=fEdgeY, nodefault};
	__property int BorderX = {read=fBorderX, write=fBorderX, nodefault};
	__property int BorderY = {read=fBorderY, write=fBorderY, nodefault};
	__property int VScrollWidth = {read=fVScrollWidth, write=fVScrollWidth, nodefault};
	__property int HScrollHeight = {read=fHScrollHeight, write=fHScrollHeight, nodefault};
	__property int MinZoomDisplayGrid = {read=fMinZoomDisplayGrid, write=fMinZoomDisplayGrid, nodefault};
	__property int CustomHintTimeout = {read=fCustomHintTimeout, write=fCustomHintTimeout, nodefault};
	__property Vcl::Graphics::TPen* GridPen = {read=fGridPen, write=fGridPen};
	__property int GridMajorStep = {read=fGridMajorStep, write=fGridMajorStep, nodefault};
	__property int GuidelineCount = {read=fGuidelineCount, write=fGuidelineCount, nodefault};
	__property System::Uitypes::TColor SelectionGridColor = {read=fSelectionGridColor, write=fSelectionGridColor, nodefault};
	__property TIEClipboardCopyFormats ClipboardCopyFormats = {read=fClipboardCopyFormats, write=fClipboardCopyFormats, nodefault};
	__property System::UnicodeString MViewExplorerThumbnailExts = {read=fMViewExplorerThumbnailExts, write=fMViewExplorerThumbnailExts};
	__property Hyiedefs::TGIFLZWDecompFunc DefGIF_LZWDECOMPFUNC = {read=fDefGIF_LZWDECOMPFUNC, write=fDefGIF_LZWDECOMPFUNC};
	__property Hyiedefs::TGIFLZWCompFunc DefGIF_LZWCOMPFUNC = {read=fDefGIF_LZWCOMPFUNC, write=fDefGIF_LZWCOMPFUNC};
	__property Hyiedefs::TTIFFLZWDecompFunc DefTIFF_LZWDECOMPFUNC = {read=fDefTIFF_LZWDECOMPFUNC, write=fDefTIFF_LZWDECOMPFUNC};
	__property Hyiedefs::TTIFFLZWCompFunc DefTIFF_LZWCOMPFUNC = {read=fDefTIFF_LZWCOMPFUNC, write=fDefTIFF_LZWCOMPFUNC};
	__property bool UseButtonGlyphsInDialogs = {read=fUseButtonGlyphsInDialogs, write=fUseButtonGlyphsInDialogs, nodefault};
	__property bool UseCMYKProfile = {read=fUseCMYKProfile, write=fUseCMYKProfile, nodefault};
	__property bool UseDefaultFileExists = {read=fUseDefaultFileExists, write=fUseDefaultFileExists, nodefault};
	__property System::Uitypes::TColor DefEMFBackgroundColor = {read=fDefEMFBackgroundColor, write=fDefEMFBackgroundColor, nodefault};
	__property int MaxImageEMFSize = {read=fMaxImageEMFSize, write=fMaxImageEMFSize, nodefault};
	__property int MaxImageEMFMatrixSize = {read=fMaxImageEMFMatrixSize, write=fMaxImageEMFMatrixSize, nodefault};
	__property System::UnicodeString DefTempPath = {read=fDefTempPath, write=fDefTempPath};
	__property Iexbitmaps::TIEConvertColorFunction ConvertColorFunction = {read=fConvertColorFunction, write=fConvertColorFunction};
	__property bool EnableCMS = {read=fEnableCMS, write=fEnableCMS, nodefault};
	__property int ColorReductionAlgorithm = {read=fColorReductionAlgorithm, write=fColorReductionAlgorithm, nodefault};
	__property int ColorReductionQuality = {read=fColorReductionQuality, write=fColorReductionQuality, nodefault};
	__property int ObjectsTIFFTag = {read=fObjectsTIFFTag, write=fObjectsTIFFTag, nodefault};
	__property bool UseRelativeStreams = {read=fUseRelativeStreams, write=fUseRelativeStreams, nodefault};
	__property Hyiedefs::TResampleFilter PanZoomQualityFilter = {read=fPanZoomQualityFilter, write=fPanZoomQualityFilter, nodefault};
	__property int RedToGrayCoef = {read=fRedToGrayCoef, write=fRedToGrayCoef, nodefault};
	__property int GreenToGrayCoef = {read=fGreenToGrayCoef, write=fGreenToGrayCoef, nodefault};
	__property int BlueToGrayCoef = {read=fBlueToGrayCoef, write=fBlueToGrayCoef, nodefault};
	__property TIEEXIFInteroperabilityIndexUsage EXIFInteroperabilityIndexUsage = {read=fEXIFInteroperabilityIndexUsage, write=fEXIFInteroperabilityIndexUsage, nodefault};
	__property TIEEXIFMakerNotesHandling EXIFMakerNotesHandling = {read=fEXIFMakerNotesHandling, write=fEXIFMakerNotesHandling, nodefault};
	__property double PrintDialogMarginsIncrement = {read=fPrintDialogMarginsIncrement, write=fPrintDialogMarginsIncrement};
	__property double PrintDialogMarginsMinValue = {read=fPrintDialogMarginsMinValue, write=fPrintDialogMarginsMinValue};
	__property bool ApplyColorProfileOnRendering = {read=fApplyColorProfileOnRendering, write=fApplyColorProfileOnRendering, nodefault};
	__property bool ReleaseTwainResources = {read=fReleaseTwainResources, write=fReleaseTwainResources, nodefault};
	__property bool ReuseTwainWindowHandle = {read=fReuseTwainWindowHandle, write=fReuseTwainWindowHandle, nodefault};
	__property unsigned TwainTransferBufferSize = {read=fTwainTransferBufferSize, write=fTwainTransferBufferSize, nodefault};
	__property bool TwainCropBufferedTransferedImage = {read=fTwainCropBufferedTransferedImage, write=fTwainCropBufferedTransferedImage, nodefault};
	__property bool ModelessSelectTwainSource = {read=fModelessSelectTwainSource, write=fModelessSelectTwainSource, nodefault};
	__property bool IsInsideTwain = {read=fIsInsideTwain, write=fIsInsideTwain, nodefault};
	__property int IOPreviewsDialogWidth = {read=fIOPreviewsDialogWidth, write=fIOPreviewsDialogWidth, nodefault};
	__property int IOPreviewsDialogHeight = {read=fIOPreviewsDialogHeight, write=fIOPreviewsDialogHeight, nodefault};
	__property int ImageProcMaxThreads = {read=fImageProcMaxThreads, write=SetImageProcMaxThreads, nodefault};
	__property bool EnableDLLMode = {read=fEnableDLLMode, write=fEnableDLLMode, nodefault};
	__property bool DICOMKeepMainImageTag = {read=fDICOMKeepMainImageTag, write=fDICOMKeepMainImageTag, nodefault};
	__property TIEDICOMWindowingStrategy DICOMWindowingStrategy = {read=fDICOMWindowingStrategy, write=fDICOMWindowingStrategy, nodefault};
	__property int JPEG2000SliceMemoryThreshold = {read=fJPEG2000SliceMemoryThreshold, write=fJPEG2000SliceMemoryThreshold, nodefault};
	__property __int64 ImageProcThreadsMinSize = {read=fImageProcThreadsMinSize, write=fImageProcThreadsMinSize};
	__property TIEDialogBackgroundStyle DialogBackgroundStyle = {read=GetDialogBackgroundStyle, write=fDialogBackgroundStyle, nodefault};
	__property Vcl::Graphics::TBitmap* DialogBackgroundImage = {read=fDialogBackgroundImage, write=fDialogBackgroundImage};
	__property System::Classes::TList* FileFormats = {read=fFileFormats, write=fFileFormats};
	__property Iexbitmaps::TIEFileFormatInfo* FileFormat[int Index] = {read=GetFileFormat};
	__property int FileFormatCount = {read=GetFileFormatCount, nodefault};
	__property System::UnicodeString ProxyAddress = {read=fProxyAddress, write=fProxyAddress};
	__property System::UnicodeString ProxyUser = {read=fProxyUser, write=fProxyUser};
	__property TIEImagingEngine JPEGEngine = {read=fJPEGEngine, write=SetJPEGEngine, nodefault};
	TIEImagingEngine __fastcall ActiveJPEGEngine(bool Recheck = false);
	__property TIEImagingEngine PNGEngine = {read=fPNGEngine, write=SetPNGEngine, nodefault};
	TIEImagingEngine __fastcall ActivePNGEngine(bool Recheck = false);
	__property TIEImagingEngine JPEG2000Engine = {read=fJPEG2000Engine, write=SetJPEG2000Engine, nodefault};
	TIEImagingEngine __fastcall ActiveJPEG2000Engine(bool Recheck = false);
	__property TIEImagingEngine CameraRawEngine = {read=fRawEngine, write=SetRawEngine, nodefault};
	TIEImagingEngine __fastcall ActiveCameraRawEngine(bool Recheck = false);
	void __fastcall SetImagingEngines(TIEImagingEngine Engine);
	int __fastcall ActivePDFPlugIn();
	__property int OpenDialogMaxMultiSelFiles = {read=fOpenDialogMaxMultiSelFiles, write=fOpenDialogMaxMultiSelFiles, nodefault};
	__property bool UseEXIFDateTime = {read=fUseEXIFDateTime, write=fUseEXIFDateTime, nodefault};
	__property bool AutoAdjustDPI = {read=fAutoAdjustDPI, write=fAutoAdjustDPI, nodefault};
	__property bool AutoSetBitDepth = {read=fAutoSetBitDepth, write=fAutoSetBitDepth, nodefault};
	__property System::UnicodeString ProxyPassword = {read=fProxyPassword, write=fProxyPassword};
	__property int ThumbnailSize = {read=fThumbnailSize, write=fThumbnailSize, nodefault};
	__property Hyiedefs::TIEShape DefaultLayerShape = {read=fDefaultLayerShape, write=fDefaultLayerShape, nodefault};
	__property System::UnicodeString DefaultLayerText = {read=fDefaultLayerText, write=fDefaultLayerText};
	__property bool DefaultLayerEnableFormatting = {read=fDefaultLayerEnableFormatting, write=fDefaultLayerEnableFormatting, nodefault};
	__property int LayerCurveQuality = {read=fLayerCurveQuality, write=fLayerCurveQuality, nodefault};
	__property TIELayerFastDrawingEffects LayerFastDrawingEffects = {read=fLayerFastDrawingEffects, write=fLayerFastDrawingEffects, nodefault};
	__property int LayerShadowAlphaThreshold = {read=fLayerShadowAlphaThreshold, write=fLayerShadowAlphaThreshold, nodefault};
	__property int LayerRotationGripMaxDist = {read=fLayerRotationGripMaxDist, write=fLayerRotationGripMaxDist, nodefault};
	__property TIEDPIScaling AutoScale = {read=fAutoScale, write=fAutoScale, nodefault};
	__property bool EnableTheming = {read=fEnableTheming, write=fEnableTheming, nodefault};
	__property bool UTF8EncodeImagingAnnot = {read=fUTF8EncodeImagingAnnot, write=fUTF8EncodeImagingAnnot, nodefault};
	__property TIOParamDefaults* IOParamDefaults = {read=fIOParamDefaults, write=fIOParamDefaults};
	__property TIEPdfViewerDefaults* PdfViewerDefaults = {read=fPdfViewerDefaults, write=fPdfViewerDefaults};
	__property Hyiedefs::TIEUnits DefaultMeasureUnit = {read=fDefaultMeasureUnit, write=fDefaultMeasureUnit, nodefault};
	__property bool LayerPropertiesAdvancedTab = {read=fLayerPropertiesAdvancedTab, write=fLayerPropertiesAdvancedTab, nodefault};
	__property int LayerPropertiesDialogWidth = {read=fLayerPropertiesDialogWidth, write=fLayerPropertiesDialogWidth, nodefault};
	__property int LayerPropertiesDialogHeight = {read=fLayerPropertiesDialogHeight, write=fLayerPropertiesDialogHeight, nodefault};
	__property System::UnicodeString UnregisteredBanner = {read=fUnregisteredBanner, write=fUnregisteredBanner};
	__property TIEPlugIns ActivePlugIns = {read=fActivePlugIns, write=fActivePlugIns, nodefault};
	__property System::UnicodeString DLLLoadingLog = {read=fDLLLoadingLog, write=fDLLLoadingLog};
	TIEPlugIns __fastcall RegisterPlugIns(TIEPlugIns PlugIns = TIEPlugIns() , System::WideString IEVisionUserEmail = System::WideString(), System::WideString IEVisionUserSerial = System::WideString(), bool ExeFolderOnly = true);
	__property TIEHintStyle* HintStyle = {read=fHintStyle, write=fHintStyle};
	__property System::UnicodeString ColorDialogCustomColors = {read=GetColorDialogCustomColors, write=fColorDialogCustomColors};
	Hyiedefs::TMsgLanguages __fastcall GetLanguages();
	Hyiedefs::TMsgLanguage __fastcall CurrentMsgLanguage();
	void __fastcall SetLanguageWordA(const Hyiedefs::TMsgLanguage lang, const Hyiedefs::TMsgLanguageWords msg, const System::AnsiString trans);
	void __fastcall SetLanguageWord(const Hyiedefs::TMsgLanguage lang, const Hyiedefs::TMsgLanguageWords msg, const System::UnicodeString trans);
	System::UnicodeString __fastcall GetLanguageWord(const Hyiedefs::TMsgLanguageWords msg);
	void __fastcall UpdateLanguage();
	__property System::Classes::TShortCut MemoShortCuts[Hyiedefs::TIEKeyboardShortcut Shortcut] = {read=GetMemoShortCuts, write=SetMemoShortCuts};
	void __fastcall AddToolbar(Vcl::Comctrls::TToolBar* aToolbar);
	void __fastcall RemoveToolbar(Vcl::Comctrls::TToolBar* aToolbar);
	void __fastcall UpdateToolbars(bool FullUpdate = false);
	__property bool IEVectBeingUsed = {read=fIEVectBeingUsed, write=fIEVectBeingUsed, nodefault};
};


//-- var, const, procedure ---------------------------------------------------
static const TIEImagingEngine iecrAuto _DEPRECATED_ATTRIBUTE1("Use ieenAuto instead - http://imageen.com/help/Compatibi"
	"lity.html")  = (TIEImagingEngine)(0);
static const TIEImagingEngine iecrLibRaw _DEPRECATED_ATTRIBUTE1("Use ieenDLL instead - http://imageen.com/help/Compatibil"
	"ity.html")  = (TIEImagingEngine)(2);
static const TIEImagingEngine iecrWIC _DEPRECATED_ATTRIBUTE1("Use ieenWIC instead - http://imageen.com/help/Compatibil"
	"ity.html")  = (TIEImagingEngine)(3);
static const TIEImagingEngine iecrDCRaw _DEPRECATED_ATTRIBUTE1("Use ieenLegacy instead - http://imageen.com/help/Compati"
	"bility.html")  = (TIEImagingEngine)(4);
extern DELPHI_PACKAGE TIEImageEnGlobalSettings* __fastcall IEGlobalSettings(void);
extern DELPHI_PACKAGE void __fastcall AddToDLLLoadingLog(const System::UnicodeString log);
}	/* namespace Iesettings */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_IESETTINGS)
using namespace Iesettings;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// IesettingsHPP
