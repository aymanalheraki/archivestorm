// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'iemview.pas' rev: 35.00 (Windows)

#ifndef IemviewHPP
#define IemviewHPP

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
#include <System.Types.hpp>
#include <System.UITypes.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Clipbrd.hpp>
#include <Vcl.StdCtrls.hpp>
#include <iexBitmaps.hpp>
#include <hyiedefs.hpp>
#include <imageenview.hpp>
#include <imageenproc.hpp>
#include <imageenio.hpp>
#include <ieview.hpp>
#include <iemio.hpp>
#include <ieanimation.hpp>
#include <iexTransitions.hpp>
#include <hyieutils.hpp>
#include <iexWPD.hpp>
#include <Vcl.Menus.hpp>

//-- user supplied -----------------------------------------------------------

namespace Iemview
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TIEStarter;
class DELPHICLASS TIECachedIcon;
class DELPHICLASS TIECachedIconList;
class DELPHICLASS TIEMDiskCache;
class DELPHICLASS TIEMViewerGestures;
class DELPHICLASS TIECustomMView;
class DELPHICLASS TImageEnMView;
//-- type declarations -------------------------------------------------------
typedef void __fastcall (__closure *TIEImageAddEvent)(System::TObject* Sender, int idx, const System::UnicodeString sFilename, bool IsFolder, bool IsHiddenFile, __int64 FileSizeBytes, System::TDateTime CreateDate, System::TDateTime EditDate, bool &Allow);

typedef void __fastcall (__closure *TIEImageSelectEvent)(System::TObject* Sender, int idx);

enum DECLSPEC_DENUM TIEHintSource : unsigned char { iehsControl, iehsThumbnail, iehsCheckbox, iehsButton };

typedef void __fastcall (__closure *TIEGetHintEvent)(System::TObject* Sender, TIEHintSource HintSource, int Idx, int ButtonIdx, System::UnicodeString &HintStr);

typedef void __fastcall (__closure *TIESelectionChangingEvent)(System::TObject* Sender, int NewIndex, bool &Allow);

typedef void __fastcall (__closure *TIECheckboxClickEvent)(System::TObject* Sender, int idx, bool &bChecked);

typedef void __fastcall (__closure *TIEImageIDRequestEvent)(System::TObject* Sender, int Index, int ID, Vcl::Graphics::TBitmap* &Bitmap);

typedef void __fastcall (__closure *TIEImageIDRequestExEvent)(System::TObject* Sender, int Index, int ID, Iexbitmaps::TIEBitmap* &Bitmap);

typedef void __fastcall (__closure *TIEGetLoadFilenameEvent)(System::TObject* Sender, int Index, System::UnicodeString &Filename);

typedef void __fastcall (__closure *TIEMProgressEvent)(System::TObject* Sender, int per, int idx);

typedef void __fastcall (__closure *TIEWrongImageEvent)(System::TObject* Sender, Iexbitmaps::TIEBitmap* OutBitmap, int idx, bool &Handled);

typedef void __fastcall (__closure *TIEImageDrawEvent)(System::TObject* Sender, int idx, int Left, int Top, Vcl::Graphics::TCanvas* Canvas);

typedef void __fastcall (__closure *TIEImageDraw2Event)(System::TObject* Sender, int idx, int Left, int Top, const System::Types::TRect &ImageRect, Vcl::Graphics::TCanvas* Canvas);

typedef void __fastcall (__closure *TIEImageDrawEventEx)(System::TObject* Sender, int idx, int Left, int Top, Vcl::Graphics::TBitmap* Dest, System::Types::TRect &ThumbRect);

typedef void __fastcall (__closure *TIEGetColorsEvent)(System::TObject* Sender, int Idx, bool IsSelected, bool IsHover, System::Uitypes::TColor &BackgroundColor, Hyiedefs::TIEBackgroundStyle &BackgroundStyle, System::Uitypes::TColor &BorderColor, int &BorderWidth);

typedef void __fastcall (__closure *TIEImageOutEvent)(System::TObject* Sender, int idx, Iexbitmaps::TIEBitmap* OutBitmap);

typedef void __fastcall (__closure *TIEImageAtPosEvent)(System::TObject* Sender, int &idx, int x, int y);

typedef void __fastcall (__closure *TIECreateImageEvent)(System::TObject* Sender, int idx);

typedef void __fastcall (__closure *TIEDestroyImageEvent)(System::TObject* Sender, int idx);

typedef void __fastcall (__closure *TIEProcessStreamEvent)(System::TObject* Sender, System::Classes::TStream* Stream, System::Byte Version);

typedef void __fastcall (__closure *TIECreateParamsEvent)(System::TObject* Sender, int idx, Iexbitmaps::TIOParams* Params);

typedef void __fastcall (__closure *TIEGetButtonEvent)(System::TObject* Sender, int ThumbIndex, int ButtonIndex, Iexbitmaps::TIEBitmap* &Bitmap);

typedef void __fastcall (__closure *TIEButtonClickEvent)(System::TObject* Sender, int ThumbIndex, int ButtonIndex);

typedef int __fastcall (*TIEImageEnMViewSortCompare)(int Item1, int Item2);

typedef int __fastcall (__closure *TIEImageEnMViewSortCompareEx)(int Item1, int Item2);

enum DECLSPEC_DENUM TIEImageEnMViewSortBy : unsigned char { iesbFilename, iesbTopText, iesbBottomText, iesbInfoText, iesbImageSize, iesbFilenameWithoutPath, iesbFileExtension, iesbFileSize, iesbCreateDate, iesbEditDate, iesbFileType, iesbCustom, iesbNone };

enum DECLSPEC_DENUM TIEImageEnMViewIconSize : unsigned char { ieicStandardSize, ieicDoubleSize, ieicStretchHD, ieicStretchAll };

enum DECLSPEC_DENUM TIEMPopupMode : unsigned char { impDefault, impSelection };

typedef System::Set<TIEMPopupMode, TIEMPopupMode::impDefault, TIEMPopupMode::impSelection> TIEMPopupModes;

enum DECLSPEC_DENUM TIEMCheckboxType : unsigned char { iecbNone, iecbShowOnHover, iecbAlways };

enum DECLSPEC_DENUM TIEMCheckboxPos : unsigned char { iecpTopLeft, iecpTopRight, iecpBottomLeft, iecpBottomRight, iecpCenterLeft, iecpCenterRight, iecpAutomatic };

enum DECLSPEC_DENUM TIEMSelectMode : unsigned char { imsNever, imsAuto, imsAlways };

enum DECLSPEC_DENUM Iemview__1 : unsigned char { iesDescending, iesCaseSensitive, iesNaturalSorting };

typedef System::Set<Iemview__1, Iemview__1::iesDescending, Iemview__1::iesNaturalSorting> TIEMSortOptions;

enum DECLSPEC_DENUM TIEThumbSizeType : unsigned char { itsImage, itsCell, itsOuter };

enum DECLSPEC_DENUM TIEMLargeImageMethod : unsigned char { ieliDelayed, ieliThumbnail };

enum DECLSPEC_DENUM TIEImageEnMViewDefaultText : unsigned char { iedtNone, iedtFilename, iedtFilenameNoExt, iedtFilePath, iedtImageDimensions, iedtImageDimAndSize, iedtFileSize, iedtFileCreateDate, iedtFileCreateDateTime, iedtFileCreateDateAndSize, iedtFileEditDate, iedtFileEditDateTime, iedtFileEditDateAndSize, iedtFileType, iedtFileExt, iedtLayerName, iedtLayerNameKind, iedtLayerNameInfo, iedtLayerDescription, iedtLayerKind, iedtLayerPosition, iedtLayerSize, iedtLayerSizeAndPos, iedtCustom };

enum DECLSPEC_DENUM TIEStoreType : unsigned char { ietNormal, ietThumb, ietFastThumb };

enum DECLSPEC_DENUM TIEFolderImageType : unsigned char { ieftSupportedImage, ieftFile, ieftFolder };

enum DECLSPEC_DENUM TIEMTextPos : unsigned char { iemtpTop, iemtpBottom, iemtpInfo };

enum DECLSPEC_DENUM TIEImageCacheReusage : unsigned char { iecrNone, iecrLoose, iecrStrict };

typedef void __fastcall (__closure *TIEGetTextEvent)(System::TObject* Sender, int Index, TIEMTextPos Position, System::WideString &Text);

typedef void __fastcall (__closure *TIEGetTextExEvent)(System::TObject* Sender, int Index, TIEMTextPos Position, System::WideString &Text, Vcl::Graphics::TFont* Font, Vcl::Graphics::TBrushStyle &BackgroundStyle, System::Uitypes::TColor &BackgroundColor, Hyieutils::TIEMTruncSide &TruncSide);

typedef void __fastcall (__closure *TIEEditTextEvent)(System::TObject* Sender, int Index, TIEMTextPos Position, System::UnicodeString &Text, bool &Allow);

enum DECLSPEC_DENUM TIEMThumbnailOptionsExItems : unsigned char { ietxCenterThumbnailColumn, ietxShowIconForUnknownFormat, ietxShowIconWhileLoading, ietxShowShadowForIcons, ietxShowShadowForFolders, ietxEnableInternalIcons, ietxStretchSmallImages, ietxOnlyShowIcons, ietxFillWithImgBackground, ietxDrawTextFullWidth, ietxAutoPadThumbnailColumns, ietxCenterSingleFrame, ietxShowPreviewWhileDragging };

typedef System::Set<TIEMThumbnailOptionsExItems, TIEMThumbnailOptionsExItems::ietxCenterThumbnailColumn, TIEMThumbnailOptionsExItems::ietxShowPreviewWhileDragging> TIEMThumbnailOptionsEx;

enum DECLSPEC_DENUM Iemview__2 : unsigned char { ieixLoadOnlyByFileExt, ieixWantParams, ieixRemoveCorrupted };

typedef System::Set<Iemview__2, Iemview__2::ieixLoadOnlyByFileExt, Iemview__2::ieixRemoveCorrupted> TIEMIOOptionsEx;

enum DECLSPEC_DENUM Iemview__3 : unsigned char { mmiScroll, mmiSelect };

typedef System::Set<Iemview__3, Iemview__3::mmiScroll, Iemview__3::mmiSelect> TIEMMouseInteract;

enum DECLSPEC_DENUM Iemview__4 : unsigned char { mkiMoveSelected, mkiLetterNavigation };

typedef System::Set<Iemview__4, Iemview__4::mkiMoveSelected, Iemview__4::mkiLetterNavigation> TIEMKeyInteract;

enum DECLSPEC_DENUM TIEMDisplayMode : unsigned char { mdGrid, mdSingle };

enum DECLSPEC_DENUM TIESeek : unsigned char { iskLeft, iskRight, iskUp, iskDown, iskFirst, iskLast, iskPagDown, iskPagUp, iskPrior, iskNext };

enum DECLSPEC_DENUM TIEMStyle : unsigned char { iemsFlat, iemsACD, iemsFlatAndWide, iemsColumns, iemsFilenames };

enum DECLSPEC_DENUM Iemview__5 : unsigned char { iemoRegion, iemoSelectOnMouseUp, iemoLeaveOneSelected, iemoRegionOnShift, iemoOptimizeForDragging, iemoSelectOnRightClick, iemoForceCTRLKey, iemoHideSelectionRect, iemoDontSortMultiSelection };

typedef System::Set<Iemview__5, Iemview__5::iemoRegion, Iemview__5::iemoDontSortMultiSelection> TIEMultiSelectionOptions;

typedef void __fastcall (__closure *TIEPlayFrameEvent)(System::TObject* Sender, int Index, bool &ShowFrame);

typedef void __fastcall (__closure *TIEShowFrameEvent)(System::TObject* Sender, int Index, const System::UnicodeString Filename, bool &ShowFrame);

class PASCALIMPLEMENTATION TIEStarter : public System::Classes::TThread
{
	typedef System::Classes::TThread inherited;
	
public:
	TIECustomMView* mview;
	NativeUInt resumeEvent;
	__fastcall TIEStarter();
	__fastcall virtual ~TIEStarter();
	virtual void __fastcall Execute();
};


enum DECLSPEC_DENUM TCachedIconType : unsigned char { citFullDraw, citIconOnly };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIECachedIcon : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	Iexbitmaps::TIEBitmap* Bmp;
	System::UnicodeString Ext;
	__fastcall TIECachedIcon(Iexbitmaps::TIEBitmap* aBmp, const System::UnicodeString sExt);
	__fastcall virtual ~TIECachedIcon();
	bool __fastcall MatchesExt(const System::UnicodeString sExt);
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TIECachedIconList : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TIECustomMView* fOwner;
	int fMaxIconCount;
	System::Classes::TList* fDataList;
	bool fOwnerSoftShadowEnabled;
	double fOwnerSoftShadowRadius;
	bool fEnabled;
	void __fastcall ClearLastItem();
	int __fastcall LookUpExt(const System::UnicodeString sExt);
	System::UnicodeString __fastcall GetCacheName(TCachedIconType aType, const System::UnicodeString sFilename, bool bIsFolder);
	
public:
	__property bool Enabled = {read=fEnabled, write=fEnabled, nodefault};
	__fastcall TIECachedIconList(TIECustomMView* Owner, int iMaxIconCount);
	__fastcall virtual ~TIECachedIconList();
	void __fastcall Clear();
	bool __fastcall RetrieveFromCache(TCachedIconType aType, const System::UnicodeString sFilename, bool bIsFolder, Iexbitmaps::TIEBitmap* &Dest, bool bWantCopy);
	void __fastcall SaveToCache(Iexbitmaps::TIEBitmap* Image, TCachedIconType aType, const System::UnicodeString sFilename, bool bIsFolder);
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEMDiskCache : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	bool fEnabled;
	System::UnicodeString fExcludedTypes;
	System::UnicodeString fCurrentFolder;
	System::UnicodeString fFolder;
	int fMinWidth;
	int fMinHeight;
	int fSaveFormat;
	Imageenio::TImageEnIO* fLoadIO;
	Imageenio::TImageEnIO* fSaveIO;
	Iexbitmaps::TIEMultiBitmap* fPendingImages;
	void __fastcall SetFolder(const System::UnicodeString v);
	System::UnicodeString __fastcall GetSaveFolder(bool CanCreate);
	void __fastcall ProcessingPendingSaves(System::TObject* Sender);
	
protected:
	bool __fastcall LoadFromCache(Iexbitmaps::TIEBitmap* &DestBmp, const System::UnicodeString HashName);
	void __fastcall SaveToCache(Iexbitmaps::TIEBitmap* SrcBmp, const System::UnicodeString HashName);
	bool __fastcall CanCacheFile(const System::UnicodeString Filename, int ImgWidth, int ImgHeight);
	
public:
	__fastcall TIEMDiskCache();
	__fastcall virtual ~TIEMDiskCache();
	int __fastcall CleanUp(int MaxDays, bool DeleteFolder = false);
	void __fastcall CacheInfo(/* out */ System::UnicodeString &Path, /* out */ int &Count, /* out */ __int64 &Size);
	int __fastcall ParseCacheFolder(const System::UnicodeString Folder, bool DeleteFiles, int MaxDays, bool DeleteFolder, /* out */ int &Count, /* out */ __int64 &Size);
	__property System::UnicodeString ExcludedTypes = {read=fExcludedTypes, write=fExcludedTypes};
	__property int SaveFormat = {read=fSaveFormat, write=fSaveFormat, default=3};
	
__published:
	__property bool Enabled = {read=fEnabled, write=fEnabled, default=0};
	__property System::UnicodeString Folder = {read=fFolder, write=SetFolder};
	__property int MinWidth = {read=fMinWidth, write=fMinWidth, default=800};
	__property int MinHeight = {read=fMinHeight, write=fMinHeight, default=800};
};

#pragma pack(pop)

typedef void __fastcall (__closure *TIEAnimationTextEvent)(System::TObject* Sender, int imageIndex, System::WideString &text);

enum DECLSPEC_DENUM TIEAfterEvent : unsigned char { ieaeMouseDown, ieaeMouseUp, ieaeKeyDown, ieaeKeyUp, ieaePaint, ieaeScroll };

typedef void __fastcall (__closure *TIEAfterEventEvent)(System::TObject* Sender, TIEAfterEvent Event);

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEMViewerGestures : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Imageenview::TIEGesturePanOptions* fPan;
	Imageenview::TIEGestureZoomOptions* fZoom;
	bool __fastcall GetEnabled();
	
public:
	__fastcall TIEMViewerGestures();
	__fastcall virtual ~TIEMViewerGestures();
	__property bool Enabled = {read=GetEnabled, nodefault};
	__property Imageenview::TIEGesturePanOptions* Pan = {read=fPan};
	__property Imageenview::TIEGestureZoomOptions* Zoom = {read=fZoom};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TIECustomMView : public Ieview::TIEView
{
	typedef Ieview::TIEView inherited;
	
private:
	bool fMDown;
	Iexbitmaps::TIEBitmap* fBackBuffer;
	int fHSVX1;
	int fHSVY1;
	int fHoverLastIdx;
	System::Types::TPoint fHoverLastPos;
	double fRXScroll;
	double fRYScroll;
	int fViewX;
	int fViewY;
	Iexbitmaps::TIEVirtualImageList* fCacheList;
	TIECachedIconList* fIconCache;
	TIEStoreType fStoreType;
	int fThumbWidth;
	int fThumbHeight;
	double fZoom;
	int fHorzBorder;
	int fVertBorder;
	int fVWidth;
	int fVHeight;
	Imageenview::TViewChangeEvent fOnViewChange;
	TIEImageAtPosEvent fOnImageAtPos;
	TIECreateImageEvent fOnCreateImage;
	TIEDestroyImageEvent fOnDestroyImage;
	TIECreateParamsEvent fOnCreateParams;
	TIEMProgressEvent fOnDrawProgress;
	TIEWrongImageEvent fOnWrongImage;
	TIEGetHintEvent fOnGetHint;
	NativeUInt fHDrawDib;
	TIEImageIDRequestEvent fOnImageIDRequest;
	TIEImageIDRequestExEvent fOnImageIDRequestEx;
	TIEGetLoadFilenameEvent fOnGetLoadFilename;
	TIEImageDrawEvent fOnImageDraw;
	TIEImageDraw2Event fOnImageDraw2;
	TIEImageOutEvent fOnImageOut;
	Hyiedefs::TIEProgressEvent fOnIOProgress;
	int fBottomGap;
	int fUpperGap;
	int fTopTextHeight;
	int fInfoTextHeight;
	int fBottomTextHeight;
	int fLeftGap;
	int fRightGap;
	int fTextMargin;
	int fTextBlockWidth;
	TIEMDisplayMode fDisplayMode;
	int fGridWidth;
	int fCurrentGridWidth;
	int fHSX1;
	int fHSY1;
	int fHSIdx;
	int fLHSIdx;
	bool fHSIdxSelected;
	int fSelectIdxOnMouseUp;
	float fCurrScaling;
	int fLastRegionIdx;
	int fShiftStartIdx;
	int fLastMouseMoveX;
	int fLastMouseMoveY;
	Imageenio::TImageEnIO* fImageEnIO;
	int fLockPaint;
	int fLockUpdate;
	bool fOptimizePainting;
	Hyiedefs::TResampleFilter fThumbnailResampleFilter;
	Hyiedefs::TResampleFilter fThumbnailDisplayFilter;
	int fThumbnailClipping;
	bool fDestroying;
	TIEMStyle fStyle;
	bool fAutoAdjustStyle;
	bool fDoubleClicking;
	System::Uitypes::TColor fThumbnailsBackground;
	System::Uitypes::TColor fThumbnailsBackgroundSelected;
	System::Uitypes::TColor fThumbnailsBackgroundHover;
	int fThumbnailsBorderWidth;
	System::Uitypes::TColor fThumbnailsBorderColor;
	bool fThumbnailsBorderCurved;
	bool fThumbnailsInternalBorder;
	System::Uitypes::TColor fThumbnailsInternalBorderColor;
	bool fUpdating;
	TIEImageEnMViewIconSize fIconSize;
	int fThumbsRounded;
	bool fEnableAdjustOrientation;
	bool fEnableLoadEXIFThumbnails;
	bool fEnableLoadExplorerThumbnails;
	bool fWicFastLoading;
	bool fEnableAlphaChannel;
	Hyiedefs::TIEBackgroundStyle fThumbnailsBackgroundStyle;
	bool fFillThumbnail;
	TIEImageEnMViewSortCompare fCurrentCompare;
	TIEImageEnMViewSortCompareEx fCurrentCompareEx;
	TIEImageEnMViewSortBy fCurrentSortBy;
	TIEMSortOptions fCurrentSortOptions;
	int fDeproritizeLargeImages;
	TIEMLargeImageMethod fDeproritizeLargeImageMethod;
	int fThreadPoolSize;
	System::Classes::TList* fThreadPoolIO;
	System::Classes::TList* fThreadRequests;
	TIEStarter* fThreadStarter;
	System::Classes::TList* fLookAheadList;
	int fSelectedImage;
	int fPrevSelectedImage;
	bool fVisibleSelection;
	int fSelectionBorderWidth;
	int fSelectionBorderWidthNoFocus;
	System::Uitypes::TColor fThumbnailsSelectedBorderColor;
	TIEImageSelectEvent fOnImageSelect;
	TIEImageSelectEvent fOnImageDeselect;
	TIESelectionChangingEvent fOnSelectionChanging;
	System::Classes::TNotifyEvent fOnSelectionChanged;
	TIEImageAddEvent fOnImageAdd;
	Iexbitmaps::TIEMViewImageNotifyEvent fOnImageAdded;
	Iexbitmaps::TIEMViewImageNotifyEvent fOnImageLoaded;
	TIEGetTextEvent fOnGetText;
	TIEGetTextExEvent fOnGetTextEx;
	TIEEditTextEvent fOnEditText;
	TIEMMouseInteract fMouseInteract;
	TIEMThumbnailOptionsEx fThumbnailOptionsEx;
	TIEMIOOptionsEx fIOOptionsEx;
	TIEMKeyInteract fKeyInteract;
	Iexbitmaps::TIEBitmap* fSelectedBitmap;
	bool fMultiSelecting;
	bool fEnableMultiSelect;
	bool fHaveMultiselected;
	bool fSelectInclusive;
	TIEMultiSelectionOptions fMultiSelectionOptions;
	bool fSelectImages;
	bool fChangedSel;
	System::Uitypes::TColor fSelectedFontColor;
	bool fPlaying;
	int fPlayTimer;
	bool fPlayLoop;
	double fPlaySpeed;
	bool fTimerInProgress;
	int fFrame;
	TIEMDisplayMode fSaveDM;
	int fSaveSel;
	Iextransitions::TIETransitionEffects* fTransition;
	Iextransitions::TIETransitionType fTransitionEffect;
	int fTransitionDuration;
	Hyiedefs::TIEProgressEvent fOnProgress;
	Ieview::TIETask fProgressTask;
	TIEImageDrawEvent fOnBeforeImageDraw;
	TIEImageDrawEventEx fOnBeforeImageDrawEx;
	TIEGetColorsEvent fOnGetColors;
	bool fEnableImageCaching;
	Hyiedefs::TIEVSoftShadow* fSoftShadow;
	bool fShowText;
	Iexbitmaps::TIEBitmap* fThumbnailFrame;
	Iexbitmaps::TIEBitmap* fThumbnailFrameSelected;
	System::Types::TRect fThumbnailFrameRect;
	System::Classes::TList* fMultiOnDemands;
	int fMaintainInvisibleImages;
	int fLookAhead;
	System::Classes::TNotifyEvent fOnAllDisplayed;
	System::Classes::TNotifyEvent fOnChanged;
	bool fAllDisplayed;
	bool fUserAction;
	System::Classes::TNotifyEvent fOnFinishWork;
	Imageenio::TIEAcquireBitmapEvent fOnAcquireBitmap;
	Imageenio::TIEPrintPageEvent fOnPrintPage;
	Imageenproc::TIEOnUndoRedoEvent fOnUndoRedo;
	TIEPlayFrameEvent fOnPlayFrame;
	System::Syncobjs::TCriticalSection* fThreadCS;
	Vcl::Graphics::TFont* fBottomTextFont;
	Vcl::Graphics::TFont* fTopTextFont;
	Vcl::Graphics::TFont* fInfoTextFont;
	Vcl::Graphics::TBrushStyle fTextBackgroundStyle;
	System::Uitypes::TColor fTextBackgroundColor;
	Hyieutils::TIEMTruncSide fTextTruncSide;
	bool fDrawMouseSelection;
	System::Types::TRect fDrawMouseSelectionRect;
	bool fCheckThumbBoundsOnSelect;
	TIEAfterEventEvent fOnAfterEvent;
	System::Classes::TStringList* fFileTypeList;
	Iexbitmaps::TIEBitmap* fMissingFileIcon;
	Iexbitmaps::TIEBitmap* fDefaultFileIcon;
	bool fAnnotationsVisible;
	TIEImageCacheReusage fImageCacheReusage;
	System::StaticArray<int, 3> fTextColumnWidths;
	TIEMDiskCache* fDiskCache;
	System::UnicodeString fFilter;
	int fUnfilteredCount;
	TIEShowFrameEvent fOnFilter;
	System::StaticArray<int, 3> fTextColsCurrentRight;
	int fResizingTextColIdx;
	int fResizingTextColClickX;
	int fResizingTextColWidth;
	Ieanimation::TIEAnimation* fAnimation;
	Vcl::Extctrls::TTimer* fAnimationTimer;
	bool fAnimationDraggingSlider;
	TIEAnimationTextEvent fOnAnimationText;
	Vcl::Extctrls::TTimer* fDragScrollTimer;
	int fDragScrollCount;
	TIEMCheckboxType fCheckboxes;
	TIEMCheckboxPos fCheckboxPos;
	TIECheckboxClickEvent fOnCheckboxClick;
	int fCheckedCount;
	Vcl::Graphics::TBitmap* fCheckedBitmap;
	Vcl::Graphics::TBitmap* fUncheckedBitmap;
	System::Types::TPoint fCheckboxMargins;
	TIEImageEnMViewDefaultText fDefaultTopText;
	TIEImageEnMViewDefaultText fDefaultInfoText;
	TIEImageEnMViewDefaultText fDefaultBottomText;
	TIEMViewerGestures* fGestures;
	Imageenview::TIEImageEnGestureEvent fOnImageEnGesture;
	int fGestureStartX;
	int fGestureStartY;
	int fGestureBaseViewX;
	int fGestureBaseViewY;
	double fGestureBaseZoom;
	int fGestureStartValue;
	System::Classes::TList* fMultiSelectedImages;
	bool fMultiSelectedNeedSorting;
	Vcl::Extctrls::TTimer* fImageEnViewTimer;
	bool fReadOnly;
	Vcl::Stdctrls::TEdit* fEditor;
	int fEditorIndex;
	TIEMTextPos fEditorField;
	System::Types::TRect fTopTextRect;
	System::Types::TRect fInfoTextRect;
	System::Types::TRect fBottomTextRect;
	TIEMPopupModes fPopupMenus;
	Vcl::Menus::TPopupMenu* fPopup;
	void __fastcall InitializeDragScrollTimer();
	void __fastcall TerminateDragScrollTimer();
	void __fastcall DragScrollTimer(System::TObject* Sender);
	System::Types::TPoint __fastcall ThumbnailsOrigin();
	int __fastcall CurrentTextBlockWidth();
	void __fastcall GetMaxViewXY(int &mx, int &my);
	void __fastcall SetViewX(int v);
	void __fastcall SetViewY(int v);
	int __fastcall GetImageX(int idx);
	int __fastcall GetImageY(int idx);
	int __fastcall GetImageCol(int idx);
	int __fastcall GetImageRow(int idx);
	bool __fastcall CalcImageFiltered(const System::UnicodeString Filename, int idx);
	bool __fastcall GetImageFiltered(int idx);
	void __fastcall SetThumbWidth(int v);
	void __fastcall SetThumbHeight(int v);
	int __fastcall GetCurrThumbWidth();
	int __fastcall GetCurrThumbHeight();
	int __fastcall GetCurrHorizBorder();
	void __fastcall SetZoom(double value);
	bool __fastcall IsZoomStored();
	double __fastcall CurrScaling(bool AllowScaling = true);
	int __fastcall GetUnfilteredCount();
	int __fastcall GetImageCount();
	void __fastcall SetImageTopText(int idx, const System::WideString v);
	void __fastcall SetImageBottomText(int idx, const System::WideString v);
	void __fastcall SetImageInfoText(int idx, const System::WideString v);
	void __fastcall SetImageFileName(int idx, const System::WideString v);
	System::WideString __fastcall GetImageFileName(int idx);
	void __fastcall SetImageID(int idx, int v);
	int __fastcall GetImageID(int idx);
	void __fastcall SetImageTag(int idx, int v);
	int __fastcall GetImageTag(int idx);
	void __fastcall SetImageUserPointer(int idx, void * v);
	void * __fastcall GetImageUserPointer(int idx);
	System::WideString __fastcall GetImageFileType(int idx);
	void __fastcall SetHorzBorder(int v);
	void __fastcall SetVertBorder(int v);
	void __fastcall SetSelectedImageAlwaysVisible(bool v);
	bool __fastcall DeleteImageNU(int idx, bool bBatchProcessing = false);
	void __fastcall DeleteAllImages();
	void __fastcall SetCheckboxes(TIEMCheckboxType v);
	void __fastcall SetCheckboxPos(TIEMCheckboxPos v);
	bool __fastcall GetChecked(int index);
	void __fastcall SetChecked(int index, bool v);
	void __fastcall SetVisibleSelection(bool v);
	void __fastcall SetSelectionBorderWidth(int v);
	void __fastcall SetSelectionBorderWidthNoFocus(int v);
	void __fastcall SetThumbnailsSelectedBorderColor(System::Uitypes::TColor v);
	void __fastcall SetSelectedImage(int v);
	void __fastcall SetSelectedImageEx(int v, bool QuickPaint);
	void __fastcall SetFilter(const System::UnicodeString Value);
	void __fastcall SetBottomGap(int v);
	void __fastcall SetUpperGap(int v);
	int __fastcall GetSideGap();
	void __fastcall SetSideGap(int v);
	void __fastcall SetLeftGap(int v);
	void __fastcall SetRightGap(int v);
	int __fastcall GapOrDefault(int Gap, bool Horz = false);
	void __fastcall SetTextMargin(int v);
	void __fastcall SetTextBlockWidth(int v);
	void __fastcall SetImageBackground(int idx, System::Uitypes::TColor v);
	System::Uitypes::TColor __fastcall GetImageBackground(int idx);
	void __fastcall SetImageDelayTime(int idx, double v);
	double __fastcall GetImageDelayTime(int idx);
	bool __fastcall ObtainImageThreaded(int idx, int priority);
	void __fastcall SetDisplayMode(TIEMDisplayMode v);
	void __fastcall SetGridWidth(int v);
	void __fastcall SetPlaying(bool v);
	void __fastcall PlayFrame();
	void __fastcall SetSelectedImageNU(int v, bool InvalidateImg = false);
	void __fastcall DeselectNU(bool InvalidateImg = false);
	void __fastcall DeselectNU_SelImages(bool InvalidateImg = false);
	void __fastcall SetVisibleFrame(int v);
	TIEMMouseInteract __fastcall GetMouseInteract();
	TIEMKeyInteract __fastcall GetKeyInteract();
	bool __fastcall GetMultiSelectedImagesAutoSort();
	void __fastcall SetMultiSelectedImagesAutoSort(bool v);
	bool __fastcall GetDrawImageBackground();
	void __fastcall SetDrawImageBackground(bool v);
	void __fastcall ReadLegacyDrawImageBackground(System::Classes::TReader* Reader);
	void __fastcall ReadLegacySideGap(System::Classes::TReader* Reader);
	void __fastcall ReadLegacyBooleanProp(System::Classes::TReader* Reader);
	void __fastcall ReadLegacyStringProp(System::Classes::TReader* Reader);
	void __fastcall SetImageCacheSize(int v);
	int __fastcall GetImageCacheSize();
	void __fastcall SetImageCacheUseDisk(bool v);
	bool __fastcall GetImageCacheUseDisk();
	bool __fastcall GetTransitionRunning();
	System::WideString __fastcall GetImageTopText(int idx);
	System::WideString __fastcall GetImageBottomText(int idx);
	System::WideString __fastcall GetImageInfoText(int idx);
	void __fastcall SetEnableMultiSelect(bool Value);
	int __fastcall GetMultiSelectedImages(int index);
	int __fastcall GetMultiSelectedImagesCount();
	Hyiedefs::TIEArrayOfInteger __fastcall GetMultiSelectedImagesList();
	int __fastcall GetTextColumnWidths(TIEMTextPos Col);
	void __fastcall SetTextColumnWidths(TIEMTextPos Col, int value);
	int __fastcall CurrentTextColumnWidths(TIEMTextPos Col);
	void __fastcall SetThumbnailsBorderWidth(int Value);
	void __fastcall SetThumbnailsBorderColor(System::Uitypes::TColor Value);
	void __fastcall SetThumbnailsBorderCurved(bool Value);
	void __fastcall SetThumbnailsInternalBorder(bool Value);
	void __fastcall SetThumbnailsInternalBorderColor(System::Uitypes::TColor Value);
	bool __fastcall GetEnableResamplingOnMinor();
	void __fastcall SetEnableResamplingOnMinor(bool Value);
	void __fastcall SetTrackMouseSelection(bool Value);
	bool __fastcall GetTrackMouseSelection();
	void __fastcall SetIconSize(TIEImageEnMViewIconSize Value);
	Iexbitmaps::TIEBitmap* __fastcall GenerateRenderImage(int Index, Iexbitmaps::TIEImageInfo* info, int iDrawImgW, int iDrawImgH, /* out */ int &ww, /* out */ int &hh);
	void __fastcall DrawImage(Vcl::Graphics::TBitmap* DestBitmap, Iexbitmaps::TIEImageInfo* info, bool IsSelected, int Index);
	void __fastcall DrawColumnsHeaderRow(Vcl::Graphics::TBitmap* DestBitmap);
	void __fastcall ThreadFinish(System::TObject* Sender);
	int __fastcall GetImageBitCount(int idx);
	int __fastcall GetMaximumViewX();
	int __fastcall GetMaximumViewY();
	void __fastcall SetEnableImageCaching(bool v);
	bool __fastcall SetImageFromStreamOrFile(int idx, System::Classes::TStream* Stream, const System::WideString FileName, int SourceImageIndex, int FileFormat);
	void __fastcall SetEnableAlphaChannel(bool v);
	void __fastcall SetThumbnailsBackgroundStyle(Hyiedefs::TIEBackgroundStyle v);
	void __fastcall SetFillThumbnail(bool Value);
	void __fastcall SetAnnotationsVisible(bool Value);
	void __fastcall SetShowText(bool Value);
	void __fastcall SetThumbnailClipping(int Value);
	void __fastcall SetSelectedFontColor(System::Uitypes::TColor v);
	void __fastcall SetThumbnailDisplayFilter(Hyiedefs::TResampleFilter v);
	void __fastcall SetThumbnailResampleFilter(Hyiedefs::TResampleFilter v);
	int __fastcall GetJobsRunning();
	int __fastcall GetJobsWaiting();
	int __fastcall SortCompareFunction(int index1, int index2);
	int __fastcall SortCompareBy(int index1, int index2);
	Imageenio::TImageEnIO* __fastcall GetOnDemandIO(const System::WideString filename, int &FrameIndex);
	void __fastcall ClearOnDemandIOList();
	void __fastcall LoadMultiOnDemand(Imageenio::TImageEnIO* io, int frameindex, double &dt);
	bool __fastcall IsOnDemand(Iexbitmaps::TIEImageInfo* info);
	bool __fastcall IsLookAhead(int idx);
	int __fastcall fThreadRequests_Index(int idx);
	virtual void __fastcall SetOnFinishWork(System::Classes::TNotifyEvent v);
	virtual System::Classes::TNotifyEvent __fastcall GetOnFinishWork();
	void __fastcall DoFinishWork();
	virtual void __fastcall SetOnAcquireBitmap(Imageenio::TIEAcquireBitmapEvent v);
	virtual Imageenio::TIEAcquireBitmapEvent __fastcall GetOnAcquireBitmap();
	virtual void __fastcall SetOnPrintPage(Imageenio::TIEPrintPageEvent v);
	virtual Imageenio::TIEPrintPageEvent __fastcall GetOnPrintPage();
	System::UnicodeString __fastcall GetImageEnVersion();
	void __fastcall SetImageEnVersion(System::UnicodeString Value);
	void __fastcall AbortImageLoading(int idx);
	void __fastcall Sort2(TIEImageEnMViewSortCompare Compare, TIEImageEnMViewSortCompareEx CompareEx);
	int __fastcall ImageAtPosWithCheckEvent(int x, int y, bool checkBounds, bool bRelativeToWindow = true);
	void __fastcall SetAnimation(Ieanimation::TIEAnimation* value);
	void __fastcall AnimGetImageInfo(System::TObject* Sender, int imageIndex, bool isVisible, int &ImageWidth, int &ImageHeight, System::WideString &text);
	void __fastcall AnimGetImage(System::TObject* Sender, int imageIndex, Iexbitmaps::TIEBitmap* &image, System::WideString &text);
	void __fastcall AnimReleaseImage(System::TObject* Sender, int imageIndex, Iexbitmaps::TIEBitmap* &image);
	void __fastcall AnimPaintTo(Iexbitmaps::TIEBitmap* dest);
	void __fastcall AnimTimer(System::TObject* Sender);
	bool __fastcall BiDiModeIsRTL();
	void __fastcall CheckSelectedImageIsVisible();
	void __fastcall ProcessUndoRedo(System::TObject* Sender, bool bIsUndo, Imageenproc::TIEUndoSource Source, System::TObject* UndoObj, int iIndex, bool &bHandled);
	bool __fastcall CheckSelectionChangingAllowed(int NewIdx);
	void __fastcall DoSelectionChanged();
	HIDESBASE MESSAGE void __fastcall WMGestureNotify(Hyiedefs::TIEWMGestureNotify &Msg);
	MESSAGE void __fastcall WMEnabled(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall WMGesture(Winapi::Messages::TMessage &Msg);
	virtual void __fastcall DoImageEnGestureEvent(const Hyiedefs::TIEGESTUREINFO &GInfo, bool &Handled);
	double __fastcall PerformZoomSnap(double Value);
	bool __fastcall IEMBitmap_IsTIEDBMultiBitmap();
	int __fastcall GetStyleInt();
	void __fastcall SetStyleInt(int v);
	void __fastcall SetShowThumbnailHint(const bool Value);
	void __fastcall SetDefaultTopText(TIEImageEnMViewDefaultText Value);
	void __fastcall SetDefaultInfoText(TIEImageEnMViewDefaultText Value);
	void __fastcall SetDefaultBottomText(TIEImageEnMViewDefaultText Value);
	void __fastcall UpdateTopTextHeight(bool bHasText);
	void __fastcall UpdateInfoTextHeight(bool bHasText);
	void __fastcall UpdateBottomTextHeight(bool bHasText);
	void __fastcall TopTextFontChange(System::TObject* Sender);
	void __fastcall InfoTextFontChange(System::TObject* Sender);
	void __fastcall BottomTextFontChange(System::TObject* Sender);
	void __fastcall SetInfoTextFont(Vcl::Graphics::TFont* Value);
	void __fastcall SetTopTextFont(Vcl::Graphics::TFont* Value);
	void __fastcall SetBottomTextFont(Vcl::Graphics::TFont* Value);
	bool __fastcall IsTopTextFontStored();
	bool __fastcall IsInfoTextFontStored();
	bool __fastcall IsBottomTextFontStored();
	bool __fastcall IsThumbSizeStored();
	bool __fastcall IsBorderStored();
	bool __fastcall IsGapStored();
	void __fastcall TextEditorKeyUp(System::TObject* Sender, System::Word &Key, System::Classes::TShiftState Shift);
	void __fastcall TextEditorKeyPress(System::TObject* Sender, System::WideChar &Key);
	Iexbitmaps::TIEBitmap* __fastcall GetResampledImage(Iexbitmaps::TIEBaseBitmap* srcImage);
	System::WideString __fastcall GetSelectedFilename();
	void __fastcall SetSelectedFilename(const System::WideString Value);
	bool __fastcall SelectSeekEx(TIESeek pos, int SelectStartIdx = 0xffffffff);
	System::UnicodeString __fastcall GetFileDisplayName(const System::UnicodeString sFilename, bool IsFolder = false);
	void __fastcall SetAttachedImageEnView(Imageenview::TImageEnView* atViewer);
	void __fastcall DelayedUpdateAttachedImageEnView();
	void __fastcall ImageEnViewTimerEvent(System::TObject* Sender);
	void __fastcall ImageEnViewButtonClick(System::TObject* Sender, Ieview::TIEVButton Button, System::Uitypes::TMouseButton MouseButton, System::Classes::TShiftState Shift, bool &Handled);
	void __fastcall SetPopupMenus(TIEMPopupModes v);
	
protected:
	Iemio::TImageEnMIO* fImageEnMIO;
	Imageenproc::TImageEnProc* fImageEnProc;
	Iexwpd::TIEPortableDevices* fPortableDevices;
	Iexbitmaps::TIECustomMultiBitmap* fIEMBitmap;
	bool fIEMBitmapIsExternal;
	bool fShowThumbnailHint;
	bool fDragging;
	bool fSelectedImageAlwaysVisible;
	Imageenview::TImageEnView* fImageEnView;
	void *fImageEnViewChangeHandle;
	System::UnicodeString fImageEnViewFilename;
	int fButtonCount;
	System::Types::TPoint fButtonSize;
	TIEGetButtonEvent fOnGetButton;
	TIEButtonClickEvent fOnButtonClick;
	System::Types::TPoint fButtonMargins;
	int fButtonSpacing;
	TIEMCheckboxPos fButtonPos;
	bool fButtonsVert;
	void __fastcall InitIEFolderMViewProperties();
	void __fastcall InitIELayerMViewProperties();
	void __fastcall DoDrawVersion();
	virtual void __fastcall DoGetHint(System::TObject* Sender, TIEHintSource HintSource, int ImageIdx, int ButtonIdx, System::UnicodeString &HintStr);
	Iexbitmaps::TIECustomMultiBitmap* __fastcall GetIEMBitmap();
	virtual Iemio::TImageEnMIO* __fastcall GetImageEnMIO();
	virtual Imageenproc::TImageEnProc* __fastcall GetImageEnProc();
	void __fastcall SetStoreType(TIEStoreType v);
	MESSAGE void __fastcall IEMAutoScroll(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall IEMRenameFile(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Message);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMVScroll(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMHScroll(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMTimer(Winapi::Messages::TWMTimer &Message);
	MESSAGE void __fastcall CMWantSpecialKey(Winapi::Messages::TWMKey &Msg);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CNKEYUP(Winapi::Messages::TMessage &Message);
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall DblClick();
	HIDESBASE MESSAGE void __fastcall WMLButtonDblClk(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall CMHintShow(Winapi::Messages::TMessage &Message);
	virtual void __fastcall ViewChange(int c);
	DYNAMIC bool __fastcall PaletteChanged(bool Foreground);
	virtual void __fastcall SetBackground(System::Uitypes::TColor cl);
	virtual Vcl::Graphics::TBitmap* __fastcall GetFBitmap();
	virtual Iexbitmaps::TIEBitmap* __fastcall GetIEBitmap();
	void __fastcall SetThumbnailOptionsEx(TIEMThumbnailOptionsEx v);
	void __fastcall SetIOOptionsEx(TIEMIOOptionsEx v);
	virtual void __fastcall SetMouseInteract(TIEMMouseInteract v);
	virtual void __fastcall SetKeyInteract(TIEMKeyInteract v);
	int __fastcall GetImageWidth(int idx);
	int __fastcall GetImageHeight(int idx);
	int __fastcall GetImageOriginalWidth(int idx);
	int __fastcall GetImageOriginalHeight(int idx);
	System::TDateTime __fastcall GetImageCreateDate(int idx);
	__int64 __fastcall GetImageFileSize(int idx);
	System::TDateTime __fastcall GetImageEditDate(int idx);
	TIEFolderImageType __fastcall GetImageType(int idx);
	void __fastcall SetImageOriginalWidth(int idx, int Value);
	void __fastcall SetImageOriginalHeight(int idx, int Value);
	void __fastcall SetImageCreateDate(int idx, System::TDateTime Value);
	void __fastcall SetImageFileSize(int idx, __int64 Value);
	void __fastcall SetImageEditDate(int idx, System::TDateTime Value);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyUp(System::Word &Key, System::Classes::TShiftState Shift);
	void __fastcall SelectAtPos(int X, int Y, System::Classes::TShiftState Shift);
	virtual void __fastcall SetOnProgress(Hyiedefs::TIEProgressEvent v);
	virtual Hyiedefs::TIEProgressEvent __fastcall GetOnProgress();
	virtual void __fastcall ClearThreadsAndRequests();
	void __fastcall ClearCache();
	virtual void __fastcall DoWrongImage(Iexbitmaps::TIEBitmap* OutBitmap, int idx, Iexbitmaps::TIESourceType &ASourceType);
	virtual void __fastcall DoImageSelect(int idx);
	virtual void __fastcall DoImageDeselect(int idx);
	void __fastcall DoChanged();
	void __fastcall DoImageAdded(int idx);
	virtual void __fastcall DoAfterEvent(TIEAfterEvent e);
	void __fastcall SwapImages(int idx1, int idx2);
	int __fastcall IsRequested(int idx);
	void __fastcall PaintBackgroundTo(Vcl::Graphics::TBitmap* DestBitmap, bool UseClipRect, const System::Types::TRect &ClipRect);
	int __fastcall ImageAtPosEx(int x, int y, bool CheckBounds, bool RelativeToWindow = true);
	System::WideString __fastcall _ReplaceDefaultText(const TIEImageEnMViewDefaultText DefaultText, int idx);
	void __fastcall GetFileDetailsForImage(int idx);
	virtual System::UnicodeString __fastcall GetHintStr(int idx);
	void __fastcall AppendExampleImages(int Count = 0xffffffff);
	void __fastcall DrawCheckbox(Vcl::Graphics::TCanvas* ACanvas, int Index, const System::Types::TRect &ThumbRect, bool IsSelected, bool bRelativeToView = false)/* overload */;
	void __fastcall DrawCheckbox(Vcl::Graphics::TCanvas* ACanvas, int Index, bool IsSelected, bool bRelativeToView = false)/* overload */;
	int __fastcall CheckboxAtPos(int X, int Y);
	void __fastcall ClickCheckboxAtPos(int X, int Y);
	System::Types::TRect __fastcall ThumbToCheckboxRect(const System::Types::TRect &ThumbRect, bool bRelativeToView = false);
	System::Types::TRect __fastcall ThumbToCheckboxRectEx(TIEMCheckboxPos Pos, int ChkBoxWidth, int ChkBoxHeight, const System::Types::TPoint &Margins, const System::Types::TRect &ThumbRect, bool bRelativeToView = false);
	int __fastcall CurrentCheckboxSpacing();
	int __fastcall ButtonWidth(bool AutoHide);
	System::Types::TRect __fastcall ThumbToButtonRect(int ButtonIdx, const System::Types::TRect &ThumbRect, bool bRelativeToView = false);
	void __fastcall DrawButtons(Vcl::Graphics::TBitmap* DestBitmap, int ThumbIndex, const System::Types::TRect &ThumbRect);
	int __fastcall ButtonAtPos(int X, int Y, int &ButtonIndex);
	void __fastcall ClickButtonAtPos(int X, int Y);
	virtual void __fastcall ClickColumnsHeaderRowCell(TIEMTextPos Col);
	virtual void __fastcall DrawColumnsHeaderRowCell(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &Rect, TIEMTextPos Col);
	virtual void __fastcall SetStyle(TIEMStyle value);
	int __fastcall CurrentHeaderRowHeight();
	virtual void __fastcall DoGetText(System::TObject* Sender, int Index, TIEMTextPos Position, System::WideString &Text);
	void __fastcall ConvertFilenamesToIDs(System::Classes::TStrings* ssFiles);
	virtual void __fastcall Loaded();
	HIDESBASE MESSAGE void __fastcall CMParentFontChanged(Vcl::Controls::TCMParentFontChanged &Message);
	TIEImageEnMViewDefaultText __fastcall DefaultTextForPosition(TIEMTextPos Position);
	int __fastcall NextUnfilteredIndex(int Index, int Direction = 0xffffffff, int Count = 0x0);
	bool __fastcall AnimationActive();
	void __fastcall RestartAnimation();
	void __fastcall Reset(bool DoClearContent = false, bool DoClearCache = true);
	System::WideString __fastcall GetImageFileNameEx(int idx, bool NormalizeShortcuts);
	virtual void __fastcall AttachedImageEnViewChange(System::TObject* Sender, Ieview::TIEChangeType Change);
	virtual void __fastcall UpdateAttachedImageEnView();
	virtual void __fastcall DoWMMouseWheel(int Direction, int MouseX, int MouseY);
	DYNAMIC void __fastcall DoContextPopup(const System::Types::TPoint &MousePos, bool &Handled);
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	__property bool AnnotationsVisible = {read=fAnnotationsVisible, write=SetAnnotationsVisible, nodefault};
	__property bool EnableAdjustOrientation = {read=fEnableAdjustOrientation, write=fEnableAdjustOrientation, nodefault};
	__property int MaintainInvisibleImages = {read=fMaintainInvisibleImages, write=fMaintainInvisibleImages, nodefault};
	__property bool EnableLoadEXIFThumbnails = {read=fEnableLoadEXIFThumbnails, write=fEnableLoadEXIFThumbnails, nodefault};
	__property bool EnableLoadExplorerThumbnails = {read=fEnableLoadExplorerThumbnails, write=fEnableLoadExplorerThumbnails, nodefault};
	__property bool WicFastLoading = {read=fWicFastLoading, write=fWicFastLoading, nodefault};
	__property int DeproritizeLargeImages = {read=fDeproritizeLargeImages, write=fDeproritizeLargeImages, nodefault};
	__property TIEMLargeImageMethod DeproritizeLargeImageMethod = {read=fDeproritizeLargeImageMethod, write=fDeproritizeLargeImageMethod, nodefault};
	__property int JobsRunning = {read=GetJobsRunning, nodefault};
	__property int JobsWaiting = {read=GetJobsWaiting, nodefault};
	__property int LookAhead = {read=fLookAhead, write=fLookAhead, nodefault};
	__property int ImageWidth[int idx] = {read=GetImageWidth};
	__property int ImageHeight[int idx] = {read=GetImageHeight};
	__property int ImageOriginalWidth[int idx] = {read=GetImageOriginalWidth, write=SetImageOriginalWidth};
	__property int ImageOriginalHeight[int idx] = {read=GetImageOriginalHeight, write=SetImageOriginalHeight};
	__property int ImageBitCount[int idx] = {read=GetImageBitCount};
	__property int ImageX[int idx] = {read=GetImageX};
	__property int ImageY[int idx] = {read=GetImageY};
	__property int ImageRow[int idx] = {read=GetImageRow};
	__property int ImageCol[int idx] = {read=GetImageCol};
	__property System::WideString ImageFileName[int idx] = {read=GetImageFileName, write=SetImageFileName};
	__property int ImageID[int idx] = {read=GetImageID, write=SetImageID};
	__property int ImageTag[int idx] = {read=GetImageTag, write=SetImageTag};
	__property void * ImageUserPointer[int idx] = {read=GetImageUserPointer, write=SetImageUserPointer};
	__property System::Uitypes::TColor ImageBackground[int idx] = {read=GetImageBackground, write=SetImageBackground};
	__property double ImageDelayTime[int idx] = {read=GetImageDelayTime, write=SetImageDelayTime};
	__property System::TDateTime ImageCreateDate[int idx] = {read=GetImageCreateDate, write=SetImageCreateDate};
	__property System::TDateTime ImageEditDate[int idx] = {read=GetImageEditDate, write=SetImageEditDate};
	__property __int64 ImageFileSize[int idx] = {read=GetImageFileSize, write=SetImageFileSize};
	__property System::WideString ImageTopText[int idx] = {read=GetImageTopText, write=SetImageTopText};
	__property System::WideString ImageBottomText[int idx] = {read=GetImageBottomText, write=SetImageBottomText};
	__property System::WideString ImageInfoText[int idx] = {read=GetImageInfoText, write=SetImageInfoText};
	__property System::WideString ImageFileType[int idx] = {read=GetImageFileType};
	__property TIEFolderImageType ImageType[int idx] = {read=GetImageType};
	__property bool ImageFiltered[int idx] = {read=GetImageFiltered};
	__property System::WideString SelectedFilename = {read=GetSelectedFilename, write=SetSelectedFilename};
	__property bool Playing = {read=fPlaying, write=SetPlaying, nodefault};
	__property bool PlayLoop = {read=fPlayLoop, write=fPlayLoop, nodefault};
	__property double PlaySpeed = {read=fPlaySpeed, write=fPlaySpeed};
	__property bool TransitionRunning = {read=GetTransitionRunning, nodefault};
	__property Iemio::TImageEnMIO* MIO = {read=GetImageEnMIO};
	__property Imageenproc::TImageEnProc* Proc = {read=GetImageEnProc};
	__property Ieanimation::TIEAnimation* Animation = {read=fAnimation, write=SetAnimation};
	__property Iexbitmaps::TIEBitmap* MissingFileIcon = {read=fMissingFileIcon};
	__property Iexbitmaps::TIEBitmap* DefaultFileIcon = {read=fDefaultFileIcon};
	__property System::UnicodeString Filter = {read=fFilter, write=SetFilter};
	__property TIEMIOOptionsEx IOOptionsEx = {read=fIOOptionsEx, write=SetIOOptionsEx, default=0};
	__property TIEMDiskCache* DiskCache = {read=fDiskCache, write=fDiskCache};
	__property TIECreateParamsEvent OnCreateParams = {read=fOnCreateParams, write=fOnCreateParams};
	__property TIEImageIDRequestEvent OnImageIDRequest = {read=fOnImageIDRequest, write=fOnImageIDRequest};
	__property TIEImageIDRequestExEvent OnImageIDRequestEx = {read=fOnImageIDRequestEx, write=fOnImageIDRequestEx};
	__property TIEGetLoadFilenameEvent OnGetLoadFilename = {read=fOnGetLoadFilename, write=fOnGetLoadFilename};
	__property Hyiedefs::TIEProgressEvent OnIOProgress = {read=fOnIOProgress, write=fOnIOProgress};
	__property TIEWrongImageEvent OnWrongImage = {read=fOnWrongImage, write=fOnWrongImage};
	__property TIEMDisplayMode DisplayMode = {read=fDisplayMode, write=SetDisplayMode, default=0};
	__property Iextransitions::TIETransitionType TransitionEffect = {read=fTransitionEffect, write=fTransitionEffect, default=0};
	__property int TransitionDuration = {read=fTransitionDuration, write=fTransitionDuration, default=1000};
	__property int ThreadPoolSize = {read=fThreadPoolSize, write=fThreadPoolSize, default=10};
	__property bool EnableAlphaChannel = {read=fEnableAlphaChannel, write=SetEnableAlphaChannel, default=1};
	__property bool EnableMultiSelect = {read=fEnableMultiSelect, write=SetEnableMultiSelect, default=0};
	__property Hyiedefs::TIEProgressEvent OnProgress = {read=GetOnProgress, write=SetOnProgress};
	__property Imageenio::TIEAcquireBitmapEvent OnAcquireBitmap = {read=GetOnAcquireBitmap, write=SetOnAcquireBitmap};
	__property Imageenio::TIEPrintPageEvent OnPrintPage = {read=GetOnPrintPage, write=SetOnPrintPage};
	__property Imageenproc::TIEOnUndoRedoEvent OnUndoRedo = {read=fOnUndoRedo, write=fOnUndoRedo};
	__property System::Classes::TNotifyEvent OnFinishWork = {read=GetOnFinishWork, write=SetOnFinishWork};
	__property TIEPlayFrameEvent OnPlayFrame = {read=fOnPlayFrame, write=fOnPlayFrame};
	__property TIEShowFrameEvent OnFilter = {read=fOnFilter, write=fOnFilter};
	__property TIEAnimationTextEvent OnAnimationText = {read=fOnAnimationText, write=fOnAnimationText};
	
public:
	__fastcall virtual TIECustomMView(System::Classes::TComponent* Owner);
	__fastcall virtual ~TIECustomMView();
	__property Iexbitmaps::TIECustomMultiBitmap* IEMBitmap = {read=GetIEMBitmap};
	__property int MouseDownThumbIndex = {read=fHSIdx, nodefault};
	virtual void __fastcall Update();
	void __fastcall UpdateEx(bool UpdateCache, bool RepositionSelection = false);
	HIDESBASE virtual void __fastcall PaintTo(Vcl::Graphics::TBitmap* DestBitmap);
	void __fastcall PaintToEx(Vcl::Graphics::TBitmap* DestBitmap, const System::Types::TRect &PaintRect);
	virtual void __fastcall PaintToCanvas(Vcl::Graphics::TCanvas* DestCanvas, const System::Types::TRect &PaintRect);
	virtual void __fastcall Paint();
	__property ClientWidth;
	__property ClientHeight;
	__property int ViewX = {read=fViewX, write=SetViewX, nodefault};
	__property int ViewY = {read=fViewY, write=SetViewY, nodefault};
	__property int MaximumViewX = {read=GetMaximumViewX, nodefault};
	__property int MaximumViewY = {read=GetMaximumViewY, nodefault};
	void __fastcall SetViewXY(int x, int y);
	void __fastcall CenterSelected();
	void __fastcall CenterFrame();
	virtual void __fastcall LockPaint();
	virtual void __fastcall LockUpdate();
	virtual int __fastcall UnlockPaint();
	virtual int __fastcall UnlockUpdate();
	int __fastcall UnlockUpdateEx();
	virtual int __fastcall NPUnlockPaint();
	System::Types::TPoint __fastcall ThumbSizeInfo(TIEThumbSizeType Data);
	void __fastcall ImageEnViewButtonState(System::TObject* Sender, Ieview::TIEVButton Button, bool &Visible, bool &Enabled);
	bool __fastcall ShowTextEditor(bool AtCursor = false)/* overload */;
	void __fastcall ShowTextEditor(int idx, TIEMTextPos Position)/* overload */;
	void __fastcall HideTextEditor(bool EnactChanges = false)/* overload */;
	System::Types::TRect __fastcall GetTextRect(int idx, TIEMTextPos Position);
	__property TIEImageCacheReusage ImageCacheReusage = {read=fImageCacheReusage, write=fImageCacheReusage, nodefault};
	void * __fastcall FindImageInCache(int idx, const System::UnicodeString sFilename);
	bool __fastcall ObtainImageNow(int idx, bool FullResolution = false);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	__property bool OptimizePainting = {read=fOptimizePainting, write=fOptimizePainting, default=1};
	__property int LockPaintCount = {read=fLockPaint, nodefault};
	__property int LockUpdateCount = {read=fLockUpdate, nodefault};
	__property Hyiedefs::TIEVSoftShadow* SoftShadow = {read=fSoftShadow};
	__property bool FillThumbnail = {read=fFillThumbnail, write=SetFillThumbnail, nodefault};
	void __fastcall SetModernStyling(bool bAutoGridWidth = false, int iThumbWidth = 0x0, int iThumbHeight = 0x0, bool bSoftShadow = true, bool DarkColors = false);
	__property int ThumbsRounded = {read=fThumbsRounded, write=fThumbsRounded, nodefault};
	__property Iexbitmaps::TIEBitmap* ThumbnailFrame = {read=fThumbnailFrame, write=fThumbnailFrame};
	__property Iexbitmaps::TIEBitmap* ThumbnailFrameSelected = {read=fThumbnailFrameSelected, write=fThumbnailFrameSelected};
	__property System::Types::TRect ThumbnailFrameRect = {read=fThumbnailFrameRect, write=fThumbnailFrameRect};
	__property MouseCapture;
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	int __fastcall CalcGridWidth();
	int __fastcall CalcGridHeight();
	void __fastcall EnsureImageLoaded(int idx);
	__property int VisibleFrame = {read=fFrame, write=SetVisibleFrame, nodefault};
	void __fastcall ClearImageCache(int idx);
	__property bool EnableImageCaching = {read=fEnableImageCaching, write=SetEnableImageCaching, default=1};
	virtual System::WideString __fastcall GetDisplayText(const System::WideString ws, int idx, const TIEImageEnMViewDefaultText DefaultText = (TIEImageEnMViewDefaultText)(0x0))/* overload */;
	virtual System::WideString __fastcall GetDisplayText(int idx, TIEMTextPos Position, bool CallOnGetText = false, bool FieldRenaming = false)/* overload */;
	virtual bool __fastcall SetDisplayText(int idx, TIEMTextPos Position, const System::WideString NewText);
	__property Vcl::Graphics::TBrushStyle TextBackgroundStyle = {read=fTextBackgroundStyle, write=fTextBackgroundStyle, nodefault};
	__property int TextColumnWidths[TIEMTextPos Col] = {read=GetTextColumnWidths, write=SetTextColumnWidths};
	__property System::Uitypes::TColor TextBackgroundColor = {read=fTextBackgroundColor, write=fTextBackgroundColor, nodefault};
	__property Hyieutils::TIEMTruncSide TextTruncSide = {read=fTextTruncSide, write=fTextTruncSide, nodefault};
	__property bool ShowText = {read=fShowText, write=SetShowText, nodefault};
	void __fastcall UpdateImage(int idx);
	void __fastcall InvalidateImage(int idx);
	void __fastcall InsertImageEx(int idx, TIEMSelectMode SelectMode = (TIEMSelectMode)(0x0));
	int __fastcall AppendImageEx(Iexbitmaps::TIEBitmap* Bitmap = (Iexbitmaps::TIEBitmap*)(0x0));
	__property int ImageCount = {read=GetImageCount, nodefault};
	__property int UnfilteredCount = {read=GetUnfilteredCount, nodefault};
	void __fastcall UpdateThumbCoords();
	void __fastcall Clear();
	Vcl::Graphics::TBitmap* __fastcall GetBitmap(int idx, bool FullResolution = false);
	void __fastcall ReleaseBitmap(int idx, bool saveChanges = true);
	Iexbitmaps::TIEBitmap* __fastcall GetTIEBitmap(int idx, bool FullResolution = false);
	int __fastcall GetImageVisibility(int idx);
	int __fastcall ImageAtPos(int x, int y, bool checkBounds = true);
	int __fastcall ImageAtGridPos(int row, int col);
	int __fastcall InsertingPoint(int x, int y);
	void __fastcall SetThumbnailSize(int Width, int Height, bool SetImageSize = false);
	__property int ThumbnailClipping = {read=fThumbnailClipping, write=SetThumbnailClipping, default=0};
	__property TIEImageEnMViewIconSize IconSize = {read=fIconSize, write=SetIconSize, nodefault};
	void __fastcall CopyToIEBitmap(int idx, Iexbitmaps::TIEBitmap* bmp, bool FullResolution = false);
	bool __fastcall IsVisibleInRect(int idx, const System::Types::TRect &Rect);
	bool __fastcall IsVisible(int idx);
	void __fastcall ReloadImage(int idx);
	void __fastcall PrepareSpaceFor(int Width, int Height, int Bitcount, int ImageCount);
	__property bool ImageCacheUseDisk = {read=GetImageCacheUseDisk, write=SetImageCacheUseDisk, nodefault};
	__property int SelectedImage = {read=fSelectedImage, write=SetSelectedImage, nodefault};
	__property bool SelectedImageAlwaysVisible = {read=fSelectedImageAlwaysVisible, write=SetSelectedImageAlwaysVisible, nodefault};
	void __fastcall Deselect();
	void __fastcall CopySelection(TIECustomMView* SourceMView);
	__property bool CheckThumbBoundsOnSelect = {read=fCheckThumbBoundsOnSelect, write=fCheckThumbBoundsOnSelect, nodefault};
	__property bool MultiSelecting = {read=fMultiSelecting, write=fMultiSelecting, nodefault};
	__property int MultiSelectedImages[int index] = {read=GetMultiSelectedImages};
	__property int MultiSelectedImagesCount = {read=GetMultiSelectedImagesCount, nodefault};
	__property Hyiedefs::TIEArrayOfInteger MultiSelectedImagesList = {read=GetMultiSelectedImagesList};
	void __fastcall MultiSelectSortList();
	void __fastcall UnselectImage(int idx);
	void __fastcall ToggleSelectImage(int idx);
	void __fastcall SelectImage(int idx);
	void __fastcall SelectAll();
	void __fastcall BeginSelectImages();
	void __fastcall EndSelectImages();
	bool __fastcall IsSelected(int idx);
	void __fastcall DisplayImageAt(int idx, int x, int y);
	void __fastcall IEBeginDrag(bool Immediate, int Threshold = 0xffffffff);
	void __fastcall IEEndDrag();
	virtual void __fastcall SaveSnapshot(System::Classes::TStream* Stream, bool SaveCache = true, bool Compressed = false, bool SaveParams = false)/* overload */;
	virtual void __fastcall SaveSnapshot(System::WideString FileName, bool SaveCache = true, bool Compressed = false, bool SaveParams = false)/* overload */;
	void __fastcall SaveSnapshotEx(System::Classes::TStream* Stream, int ClassID, bool SaveCache, bool Compressed, bool SaveParams, TIEProcessStreamEvent GetExtraParams);
	virtual bool __fastcall LoadSnapshot(System::Classes::TStream* Stream)/* overload */;
	virtual bool __fastcall LoadSnapshot(System::WideString FileName)/* overload */;
	bool __fastcall LoadSnapshotEx(System::Classes::TStream* Stream, int ClassID, TIEProcessStreamEvent SetExtraParams);
	int __fastcall Seek(Imageenio::TIEIOSeekDestination Destination);
	bool __fastcall SelectSeek(TIESeek pos)/* overload */;
	bool __fastcall SelectSeek(System::WideChar C)/* overload */;
	__property TIEMCheckboxPos CheckboxPos = {read=fCheckboxPos, write=SetCheckboxPos, nodefault};
	int __fastcall CheckedCount();
	__property bool Checked[int index] = {read=GetChecked, write=SetChecked};
	void __fastcall SetCheckboxParams(int iHorzMargin, int iVertMargin, Vcl::Graphics::TBitmap* CustomCheckedImage = (Vcl::Graphics::TBitmap*)(0x0), Vcl::Graphics::TBitmap* CustomUncheckedImage = (Vcl::Graphics::TBitmap*)(0x0));
	void __fastcall CheckAll();
	void __fastcall UncheckAll();
	__property TIEMViewerGestures* Gestures = {read=fGestures};
	void __fastcall SetAllText(TIEImageEnMViewDefaultText TopText, TIEImageEnMViewDefaultText InfoText, TIEImageEnMViewDefaultText BottomText);
	__property int TextBlockWidth = {read=fTextBlockWidth, write=SetTextBlockWidth, nodefault};
	__property int SelectionWidthNoFocus = {read=fSelectionBorderWidthNoFocus, write=SetSelectionBorderWidthNoFocus, nodefault};
	__property bool ThumbnailsBorderCurved = {read=fThumbnailsBorderCurved, write=SetThumbnailsBorderCurved, nodefault};
	void __fastcall ProbeLastSort(/* out */ TIEImageEnMViewSortBy &OrderBy, /* out */ bool &Ascending, /* out */ bool &CaseSensitive);
	void __fastcall SetStyleEx(TIEMStyle aStyle, TIEImageEnMViewDefaultText TopText, TIEImageEnMViewDefaultText InfoText, TIEImageEnMViewDefaultText BottomText, double iThumbZoom = 0.000000E+00, bool bAdjustSpacing = true, bool bAdjustStyle = true, bool bAdjustFont = true, bool bAdjustGrid = false);
	void __fastcall SetIEBitmapEx(int idx, Iexbitmaps::TIEBaseBitmap* srcImage, Iexbitmaps::TIOParams* Params = (Iexbitmaps::TIOParams*)(0x0), bool CallOnImageLoaded = false);
	void __fastcall DeleteImage(int idx);
	void __fastcall SetImage(int idx, Vcl::Graphics::TBitmap* srcImage)/* overload */;
	void __fastcall SetImage(int idx, Iexbitmaps::TIEBaseBitmap* srcImage)/* overload */;
	void __fastcall SetImage(int idx, int width, int height, Hyieutils::TIEPixelFormat PixelFormat)/* overload */;
	void __fastcall SetImageEx(int idx, Vcl::Graphics::TBitmap* srcImage);
	bool __fastcall SetImageFromFile(int idx, const System::WideString FileName, int SourceImageIndex = 0x0, int FileFormat = 0x0);
	bool __fastcall SetImageFromStream(int idx, System::Classes::TStream* Stream, int SourceImageIndex = 0x0, int FileFormat = 0x0);
	void __fastcall SetExternalMBitmap(Iexbitmaps::TIECustomMultiBitmap* value);
	int __fastcall FilenameToIndex(const System::UnicodeString sFilename);
	__property Ieview::TIETask ProgressTask = {read=fProgressTask, write=fProgressTask, nodefault};
	__property Vcl::Graphics::TFont* DefaultBottomTextFont = {read=fBottomTextFont};
	__property Vcl::Graphics::TFont* DefaultTopTextFont = {read=fTopTextFont};
	__property Vcl::Graphics::TFont* DefaultInfoTextFont = {read=fInfoTextFont};
	__property Vcl::Graphics::TBrushStyle DefaultTextBackgroundStyle = {read=fTextBackgroundStyle, write=fTextBackgroundStyle, nodefault};
	__property bool EnableResamplingOnMinor = {read=GetEnableResamplingOnMinor, write=SetEnableResamplingOnMinor, nodefault};
	__property bool TrackMouseSelection = {read=GetTrackMouseSelection, write=SetTrackMouseSelection, nodefault};
	__property bool SelectionAntialiased = {read=fThumbnailsBorderCurved, write=SetThumbnailsBorderCurved, nodefault};
	__property bool DrawImageBackground = {read=GetDrawImageBackground, write=SetDrawImageBackground, nodefault};
	__property int SideGap = {read=GetSideGap, write=SetSideGap, nodefault};
	__property bool MultiSelectedImagesAutoSort = {read=GetMultiSelectedImagesAutoSort, write=SetMultiSelectedImagesAutoSort, nodefault};
	
__published:
	__property Imageenview::TImageEnView* AttachedImageEnView = {read=fImageEnView, write=SetAttachedImageEnView};
	__property int GridWidth = {read=fGridWidth, write=SetGridWidth, nodefault};
	__property TIEStoreType StoreType = {read=fStoreType, write=SetStoreType, nodefault};
	__property int ThumbWidth = {read=fThumbWidth, write=SetThumbWidth, stored=IsThumbSizeStored, nodefault};
	__property int ThumbHeight = {read=fThumbHeight, write=SetThumbHeight, stored=IsThumbSizeStored, nodefault};
	__property int HorizBorder = {read=fHorzBorder, write=SetHorzBorder, stored=IsBorderStored, nodefault};
	__property int VertBorder = {read=fVertBorder, write=SetVertBorder, stored=IsBorderStored, nodefault};
	__property int BottomGap = {read=fBottomGap, write=SetBottomGap, stored=IsGapStored, nodefault};
	__property int UpperGap = {read=fUpperGap, write=SetUpperGap, stored=IsGapStored, nodefault};
	__property int LeftGap = {read=fLeftGap, write=SetLeftGap, stored=IsGapStored, nodefault};
	__property int TextMargin = {read=fTextMargin, write=SetTextMargin, nodefault};
	__property int RightGap = {read=fRightGap, write=SetRightGap, default=-1};
	__property TIEMThumbnailOptionsEx ThumbnailOptionsEx = {read=fThumbnailOptionsEx, write=SetThumbnailOptionsEx, nodefault};
	__property TIEMPopupModes PopupMenus = {read=fPopupMenus, write=SetPopupMenus, nodefault};
	__property double Zoom = {read=fZoom, write=SetZoom, stored=IsZoomStored};
	__property Imageenview::TViewChangeEvent OnViewChange = {read=fOnViewChange, write=fOnViewChange};
	__property TIEImageAtPosEvent OnImageAtPos = {read=fOnImageAtPos, write=fOnImageAtPos};
	__property TIECreateImageEvent OnCreateImage = {read=fOnCreateImage, write=fOnCreateImage};
	__property TIEDestroyImageEvent OnDestroyImage = {read=fOnDestroyImage, write=fOnDestroyImage};
	__property TIEImageDrawEvent OnBeforeImageDraw = {read=fOnBeforeImageDraw, write=fOnBeforeImageDraw};
	__property TIEImageDrawEventEx OnBeforeImageDrawEx = {read=fOnBeforeImageDrawEx, write=fOnBeforeImageDrawEx};
	__property TIEGetColorsEvent OnGetColors = {read=fOnGetColors, write=fOnGetColors};
	__property TIEImageDrawEvent OnImageDraw = {read=fOnImageDraw, write=fOnImageDraw};
	__property TIEImageDraw2Event OnImageDraw2 = {read=fOnImageDraw2, write=fOnImageDraw2};
	__property TIEImageOutEvent OnImageOut = {read=fOnImageOut, write=fOnImageOut};
	__property TIEImageSelectEvent OnImageSelect = {read=fOnImageSelect, write=fOnImageSelect};
	__property TIEImageAddEvent OnImageAdd = {read=fOnImageAdd, write=fOnImageAdd};
	__property Iexbitmaps::TIEMViewImageNotifyEvent OnImageAdded = {read=fOnImageAdded, write=fOnImageAdded};
	__property Iexbitmaps::TIEMViewImageNotifyEvent OnImageLoaded = {read=fOnImageLoaded, write=fOnImageLoaded};
	__property TIEGetTextEvent OnGetText = {read=fOnGetText, write=fOnGetText};
	__property TIEGetTextExEvent OnGetTextEx = {read=fOnGetTextEx, write=fOnGetTextEx};
	__property TIEEditTextEvent OnEditText = {read=fOnEditText, write=fOnEditText};
	__property TIEImageSelectEvent OnImageDeselect = {read=fOnImageDeselect, write=fOnImageDeselect};
	__property TIESelectionChangingEvent OnSelectionChanging = {read=fOnSelectionChanging, write=fOnSelectionChanging};
	__property System::Classes::TNotifyEvent OnSelectionChanged = {read=fOnSelectionChanged, write=fOnSelectionChanged};
	__property TIEMProgressEvent OnDrawProgress = {read=fOnDrawProgress, write=fOnDrawProgress};
	__property TIEGetHintEvent OnGetHint = {read=fOnGetHint, write=fOnGetHint};
	__property TIECheckboxClickEvent OnCheckboxClick = {read=fOnCheckboxClick, write=fOnCheckboxClick};
	__property TIEMCheckboxType Checkboxes = {read=fCheckboxes, write=SetCheckboxes, default=0};
	__property bool VisibleSelection = {read=fVisibleSelection, write=SetVisibleSelection, default=1};
	__property TIEMMouseInteract MouseInteract = {read=GetMouseInteract, write=SetMouseInteract, default=2};
	__property TIEMKeyInteract KeyInteract = {read=GetKeyInteract, write=SetKeyInteract, default=1};
	__property int SelectionWidth = {read=fSelectionBorderWidth, write=SetSelectionBorderWidth, default=1};
	__property System::Uitypes::TColor SelectionColor = {read=fThumbnailsSelectedBorderColor, write=SetThumbnailsSelectedBorderColor, default=13542013};
	__property int ImageCacheSize = {read=GetImageCacheSize, write=SetImageCacheSize, default=100};
	__property TIEMStyle Style = {read=fStyle, write=SetStyle, nodefault};
	__property bool AutoAdjustStyle = {read=fAutoAdjustStyle, write=fAutoAdjustStyle, nodefault};
	__property System::Uitypes::TColor ThumbnailsBackground = {read=fThumbnailsBackground, write=fThumbnailsBackground, default=536870911};
	__property System::Uitypes::TColor ThumbnailsBackgroundSelected = {read=fThumbnailsBackgroundSelected, write=fThumbnailsBackgroundSelected, default=16575194};
	__property System::Uitypes::TColor ThumbnailsBackgroundHover = {read=fThumbnailsBackgroundHover, write=fThumbnailsBackgroundHover, default=16774117};
	__property int ThumbnailsBorderWidth = {read=fThumbnailsBorderWidth, write=SetThumbnailsBorderWidth, default=1};
	__property System::Uitypes::TColor ThumbnailsBorderColor = {read=fThumbnailsBorderColor, write=SetThumbnailsBorderColor, default=-16777201};
	__property bool ThumbnailsInternalBorder = {read=fThumbnailsInternalBorder, write=SetThumbnailsInternalBorder, default=0};
	__property System::Uitypes::TColor ThumbnailsInternalBorderColor = {read=fThumbnailsInternalBorderColor, write=SetThumbnailsInternalBorderColor, default=0};
	__property TIEMultiSelectionOptions MultiSelectionOptions = {read=fMultiSelectionOptions, write=fMultiSelectionOptions, nodefault};
	__property Hyiedefs::TIEBackgroundStyle ThumbnailsBackgroundStyle = {read=fThumbnailsBackgroundStyle, write=SetThumbnailsBackgroundStyle, default=0};
	__property System::Classes::TNotifyEvent OnAllDisplayed = {read=fOnAllDisplayed, write=fOnAllDisplayed};
	__property System::Classes::TNotifyEvent OnChanged = {read=fOnChanged, write=fOnChanged};
	__property TIEAfterEventEvent OnAfterEvent = {read=fOnAfterEvent, write=fOnAfterEvent};
	__property Imageenview::TIEImageEnGestureEvent OnImageEnGesture = {read=fOnImageEnGesture, write=fOnImageEnGesture};
	__property TIEImageEnMViewDefaultText DefaultTopText = {read=fDefaultTopText, write=SetDefaultTopText, nodefault};
	__property TIEImageEnMViewDefaultText DefaultInfoText = {read=fDefaultInfoText, write=SetDefaultInfoText, nodefault};
	__property TIEImageEnMViewDefaultText DefaultBottomText = {read=fDefaultBottomText, write=SetDefaultBottomText, nodefault};
	__property System::UnicodeString ImageEnVersion = {read=GetImageEnVersion, write=SetImageEnVersion, stored=false};
	__property OnMouseWheel;
	__property OnMouseWheelDown;
	__property OnMouseWheelUp;
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property bool ShowThumbnailHint = {read=fShowThumbnailHint, write=SetShowThumbnailHint, default=0};
	__property Hyiedefs::TResampleFilter ThumbnailResampleFilter = {read=fThumbnailResampleFilter, write=SetThumbnailResampleFilter, default=9};
	__property Hyiedefs::TResampleFilter ThumbnailDisplayFilter = {read=fThumbnailDisplayFilter, write=SetThumbnailDisplayFilter, default=0};
	__property System::Uitypes::TColor SelectedFontColor = {read=fSelectedFontColor, write=SetSelectedFontColor, default=536870911};
	__property bool ReadOnly = {read=fReadOnly, write=fReadOnly, default=0};
	__property Vcl::Graphics::TFont* BottomTextFont = {read=fBottomTextFont, write=SetBottomTextFont, stored=IsBottomTextFontStored};
	__property Vcl::Graphics::TFont* TopTextFont = {read=fTopTextFont, write=SetTopTextFont, stored=IsTopTextFontStored};
	__property Vcl::Graphics::TFont* InfoTextFont = {read=fInfoTextFont, write=SetInfoTextFont, stored=IsInfoTextFontStored};
	__property BiDiMode;
	__property ParentFont = {default=0};
	__property DragCursor = {default=-12};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property Visible = {default=1};
	__property TabOrder = {default=-1};
	__property TabStop = {default=0};
	__property OnClick;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDrag;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnStartDrag;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnContextPopup;
	__property OnGesture;
public:
	/* TWinControl.CreateParented */ inline __fastcall TIECustomMView(HWND ParentWindow) : Ieview::TIEView(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TImageEnMView : public TIECustomMView
{
	typedef TIECustomMView inherited;
	
private:
	void __fastcall FillFromWPDPath(const System::WideString Path, int Limit = 0xffffffff, bool AllowUnknownFormats = false, const System::WideString ExcludeExtensions = System::WideString(), const System::WideString FilterMask = System::WideString(), bool IncludeVideoFiles = false, TIEImageEnMViewDefaultText DefaultTopText = (TIEImageEnMViewDefaultText)(0x0), TIEImageEnMViewDefaultText DefaultInfoText = (TIEImageEnMViewDefaultText)(0x0), TIEImageEnMViewDefaultText DefaultBottomText = (TIEImageEnMViewDefaultText)(0x1), bool bShowHiddenFiles = false, bool bShowFolders = false, const System::UnicodeString FilenameFilter = System::UnicodeString());
	bool __fastcall _LoadPDFPage(int Index, int PDFIndex);
	
protected:
	virtual void __fastcall Initialize();
	
public:
	__property AnnotationsVisible;
	__property EnableAdjustOrientation;
	__property MaintainInvisibleImages;
	__property EnableLoadEXIFThumbnails;
	__property EnableLoadExplorerThumbnails;
	__property WicFastLoading;
	__property DeproritizeLargeImages;
	__property DeproritizeLargeImageMethod;
	__property JobsRunning;
	__property JobsWaiting;
	__property LookAhead;
	__property ImageWidth;
	__property ImageHeight;
	__property ImageOriginalWidth;
	__property ImageOriginalHeight;
	__property ImageBitCount;
	__property ImageX;
	__property ImageY;
	__property ImageRow;
	__property ImageCol;
	__property ImageFileName;
	__property ImageID;
	__property ImageTag;
	__property ImageUserPointer;
	__property ImageBackground;
	__property ImageDelayTime;
	__property ImageCreateDate;
	__property ImageEditDate;
	__property ImageFileSize;
	__property ImageTopText;
	__property ImageBottomText;
	__property ImageInfoText;
	__property ImageFileType;
	__property ImageType;
	__property ImageFiltered;
	__property SelectedFilename = {default=0};
	__property Playing;
	__property PlayLoop;
	__property PlaySpeed = {default=0};
	__property TransitionRunning;
	__property MIO;
	__property Proc;
	__property Animation;
	__property MissingFileIcon;
	__property DefaultFileIcon;
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	void __fastcall AssignEx(System::TObject* Source, bool CopyParams = false);
	void __fastcall AddThumbButtons(int Count, int Width, int Height, TIEGetButtonEvent GetButtonEvent, TIEButtonClickEvent ButtonClickEvent, TIEMCheckboxPos Position = (TIEMCheckboxPos)(0x6), bool AlignVert = false, int HMargin = 0x4, int VMargin = 0x4, int Spacing = 0x4);
	void __fastcall LoadFromFileOnDemand(const System::WideString FileName, bool Append = false);
	int __fastcall RemoveBlankPages(double Tolerance = 0.000000E+00, bool Complete = true, bool LeftToRight = true);
	int __fastcall RemoveDuplicates();
	bool __fastcall FillWithDrives();
	void __fastcall FillFromList(System::Classes::TStrings* ssFiles, const System::UnicodeString Directory = System::UnicodeString(), bool LoadOnDemand = true, TIEImageEnMViewDefaultText DefaultTopText = (TIEImageEnMViewDefaultText)(0x0), TIEImageEnMViewDefaultText DefaultInfoText = (TIEImageEnMViewDefaultText)(0x0), TIEImageEnMViewDefaultText DefaultBottomText = (TIEImageEnMViewDefaultText)(0x1), bool GetFileInfo = false);
	void __fastcall FillFromDirectory(const System::WideString Directory, Hyiedefs::TIEFolderFileTypes FileTypes, const System::WideString FilterMask = System::WideString(), bool LoadOnDemand = true, TIEImageEnMViewDefaultText DefaultTopText = (TIEImageEnMViewDefaultText)(0x0), TIEImageEnMViewDefaultText DefaultInfoText = (TIEImageEnMViewDefaultText)(0x0), TIEImageEnMViewDefaultText DefaultBottomText = (TIEImageEnMViewDefaultText)(0x1), bool bShowHiddenFiles = false, bool bShowFolders = false)/* overload */;
	void __fastcall FillFromDirectory(const System::WideString Directory, int Limit = 0xffffffff, bool AllowUnknownFormats = false, const System::WideString ExcludeExtensions = System::WideString(), bool DetectFileFormat = false, const System::WideString FilterMask = System::WideString(), bool IncludeVideoFiles = false, bool LoadOnDemand = true, TIEImageEnMViewDefaultText DefaultTopText = (TIEImageEnMViewDefaultText)(0x0), TIEImageEnMViewDefaultText DefaultInfoText = (TIEImageEnMViewDefaultText)(0x0), TIEImageEnMViewDefaultText DefaultBottomText = (TIEImageEnMViewDefaultText)(0x1), bool bShowHiddenFiles = false, bool bShowFolders = false, const System::UnicodeString FilenameFilter = System::UnicodeString())/* overload */;
	void __fastcall CreateMorphingSequence(Imageenview::TImageEnView* Source, Imageenview::TImageEnView* Target, int FramesCount);
	void __fastcall InsertImage(int Idx)/* overload */;
	void __fastcall InsertImage(int Idx, System::Classes::TStream* Stream, int FileFormat = 0x0)/* overload */;
	void __fastcall InsertImage(int Idx, Iexbitmaps::TIEBitmap* Bitmap)/* overload */;
	void __fastcall InsertImage(int Idx, Vcl::Graphics::TBitmap* Bitmap)/* overload */;
	void __fastcall InsertImage(int Idx, int Width, int Height, Hyieutils::TIEPixelFormat PixelFormat = (Hyieutils::TIEPixelFormat)(0x5))/* overload */;
	void __fastcall InsertImage(int Idx, const System::UnicodeString FileName)/* overload */;
	void __fastcall InsertImage(int Idx, const System::UnicodeString FileName, bool LoadOnDemand, TIEImageEnMViewDefaultText DefaultTopText = (TIEImageEnMViewDefaultText)(0x0), TIEImageEnMViewDefaultText DefaultInfoText = (TIEImageEnMViewDefaultText)(0x0), TIEImageEnMViewDefaultText DefaultBottomText = (TIEImageEnMViewDefaultText)(0x1), bool bSelectIt = true)/* overload */;
	void __fastcall AssignLayers(Imageenview::TImageEnView* Source, bool HighlightSel, bool DoClear = true, TIEMTextPos TextPos = (TIEMTextPos)(0x0), bool Reversed = false);
	void __fastcall AssignPDFDocument(System::TObject* Source, bool HighlightSel, bool DoClear = true, TIEMTextPos TextPos = (TIEMTextPos)(0x1), bool OnDemand = false);
	void __fastcall InsertTransitionFrames(int Idx, int iFrameCount, Iextransitions::TIETransitionType Effect, int iWidth = 0xffffffff, int iHeight = 0xffffffff, System::Uitypes::TColor BackgroundColor = (System::Uitypes::TColor)(0xffffffff), Hyiedefs::TResampleFilter ResamplingFilter = (Hyiedefs::TResampleFilter)(0x9))/* overload */;
	void __fastcall InsertTransitionFrames(int Idx, int iFrameCount, Iextransitions::TIETransitionType Effect, const System::Types::TRect &StartRect, const System::Types::TRect &EndRect, bool RectMaintainAspectRatio = true, int iWidth = 0xffffffff, int iHeight = 0xffffffff, bool bStretchSmall = false, System::Uitypes::TColor BackgroundColor = (System::Uitypes::TColor)(0xffffffff), Hyiedefs::TResampleFilter ResamplingFilter = (Hyiedefs::TResampleFilter)(0x9), int Smoothing = 0xff, Iextransitions::TIETransitionTiming Timing = (Iextransitions::TIETransitionTiming)(0x0))/* overload */;
	void __fastcall InsertTransitionFramesEx _DEPRECATED_ATTRIBUTE1("Use InsertTransitionFrames instead - http://imageen.com/help/Compatibility.html") (int Idx, int iFrameCount, Iextransitions::TIETransitionType Effect, const System::Types::TRect &StartRect, const System::Types::TRect &EndRect, bool RectMaintainAspectRatio = true, int iWidth = 0xffffffff, int iHeight = 0xffffffff, bool bStretchSmall = false, System::Uitypes::TColor BackgroundColor = (System::Uitypes::TColor)(0xffffffff), Hyiedefs::TResampleFilter ResamplingFilter = (Hyiedefs::TResampleFilter)(0x9), int Smoothing = 0x60, Iextransitions::TIETransitionTiming Timing = (Iextransitions::TIETransitionTiming)(0x0));
	void __fastcall MoveImage(int idx, int destination);
	void __fastcall MoveSelectedImagesTo(int beforeImage, bool UseDisplayOrder = true);
	void __fastcall Sort(TIEImageEnMViewSortCompare Compare)/* overload */;
	void __fastcall Sort(TIEImageEnMViewSortCompareEx Compare)/* overload */;
	void __fastcall Sort(TIEImageEnMViewSortBy OrderBy, bool Ascending = true, bool CaseSensitive = true)/* overload */;
	void __fastcall Sort(TIEImageEnMViewSortBy OrderBy, TIEMSortOptions SortOptions)/* overload */;
	int __fastcall AppendImage()/* overload */;
	int __fastcall AppendImage(System::Classes::TStream* Stream, int FileFormat = 0x0)/* overload */;
	int __fastcall AppendImage(Iexbitmaps::TIEBitmap* Bitmap)/* overload */;
	int __fastcall AppendImage(Vcl::Graphics::TBitmap* Bitmap)/* overload */;
	int __fastcall AppendImage(int Width, int Height, Hyieutils::TIEPixelFormat PixelFormat = (Hyieutils::TIEPixelFormat)(0x5))/* overload */;
	int __fastcall AppendImage(const System::UnicodeString FileName)/* overload */;
	int __fastcall AppendImage(const System::UnicodeString FileName, bool LoadOnDemand, TIEImageEnMViewDefaultText DefaultTopText = (TIEImageEnMViewDefaultText)(0x0), TIEImageEnMViewDefaultText DefaultInfoText = (TIEImageEnMViewDefaultText)(0x0), TIEImageEnMViewDefaultText DefaultBottomText = (TIEImageEnMViewDefaultText)(0x1), bool bSelectIt = true)/* overload */;
	int __fastcall AppendImage2 _DEPRECATED_ATTRIBUTE1("Use AppendImage instead - http://imageen.com/help/Compatibility.html") (int Width, int Height, Hyieutils::TIEPixelFormat PixelFormat = (Hyieutils::TIEPixelFormat)(0x5));
	int __fastcall AppendSplit(Iexbitmaps::TIEBitmap* SourceGrid, int cellWidth, int cellHeight, int maxCount = 0x0);
	void __fastcall DeleteSelectedImages();
	void __fastcall SetIEBitmap _DEPRECATED_ATTRIBUTE1("Use SetImage instead - http://imageen.com/help/Compatibility.html") (int idx, Iexbitmaps::TIEBaseBitmap* srcImage);
	void __fastcall GetImageToFile(int idx, const System::WideString FileName);
	void __fastcall GetImageToStream(int idx, System::Classes::TStream* Stream, int ImageFormat);
	void __fastcall SetImageRect(int idx, Vcl::Graphics::TBitmap* srcImage, int x1, int y1, int x2, int y2)/* overload */;
	void __fastcall SetImageRect(int idx, Iexbitmaps::TIEBitmap* srcImage, int x1, int y1, int x2, int y2)/* overload */;
	int __fastcall SelectedFilenames(System::Classes::TStrings* Dest);
	virtual void __fastcall ShowDesignPreview(Ieview::TIEDesignTimeView PreviewMode = (Ieview::TIEDesignTimeView)(0x1), int Count = 0xffffffff);
	
__published:
	__property Filter = {default=0};
	__property IOOptionsEx = {default=0};
	__property DiskCache;
	__property OnCreateParams;
	__property OnImageIDRequest;
	__property OnImageIDRequestEx;
	__property OnGetLoadFilename;
	__property OnIOProgress;
	__property OnWrongImage;
	__property DisplayMode = {default=0};
	__property TransitionEffect = {default=0};
	__property TransitionDuration = {default=1000};
	__property ThreadPoolSize = {default=10};
	__property EnableAlphaChannel = {default=1};
	__property EnableMultiSelect = {default=0};
	__property ThumbnailDisplayFilter = {default=0};
	__property ThumbnailResampleFilter = {default=9};
	__property ThumbnailClipping = {default=0};
	__property OnProgress;
	__property OnAcquireBitmap;
	__property OnPrintPage;
	__property OnUndoRedo;
	__property OnFinishWork;
	__property OnPlayFrame;
	__property OnFilter;
	__property OnAnimationText;
public:
	/* TIECustomMView.Create */ inline __fastcall virtual TImageEnMView(System::Classes::TComponent* Owner) : TIECustomMView(Owner) { }
	/* TIECustomMView.Destroy */ inline __fastcall virtual ~TImageEnMView() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TImageEnMView(HWND ParentWindow) : TIECustomMView(ParentWindow) { }
	
};


enum DECLSPEC_DENUM TFilterMatchPos : unsigned char { _fpAnywhere, _fpAtStart, _fpAtEnd };

//-- var, const, procedure ---------------------------------------------------
#define TImageEnFolderMView_ClassName L"TImageEnFolderMView"
#define TImageEnLayerMView_ClassName L"TImageEnLayerMView"
static const TIEMStyle IEMView_Default_Style = (TIEMStyle)(0);
static const TIEMStyle IEFolderMView_Default_Style = (TIEMStyle)(0);
static const TIEMStyle IELayerMView_Default_Style = (TIEMStyle)(2);
#define IEMView_Default_Zoom  (1.000000E+02)
#define IEFolderMView_Default_Zoom  (1.000000E+02)
#define IELayerMView_Default_Zoom  (3.333000E+01)
static const System::Int8 IEMView_Default_GridWidth = System::Int8(-1);
static const System::Int8 IEFolderMView_Default_GridWidth = System::Int8(-1);
static const System::Int8 IELayerMView_Default_GridWidth = System::Int8(0x1);
static const System::Int8 IEMView_Default_ThumbSize = System::Int8(0x64);
static const System::Byte IEFolderMView_Default_ThumbSize = System::Byte(0x82);
static const System::Int8 IELayerMView_Default_ThumbSize = System::Int8(0x78);
static const TIEStoreType IEMView_Default_StoreType = (TIEStoreType)(0);
static const TIEStoreType IEFolderMView_Default_StoreType = (TIEStoreType)(2);
static const TIEStoreType IELayerMView_Default_StoreType = (TIEStoreType)(1);
static const System::Int8 IEMView_Default_LookAhead = System::Int8(0x0);
static const System::Int8 IEFolderMView_Default_LookAhead = System::Int8(0x14);
static const System::Int8 IELayerMView_Default_LookAhead = System::Int8(0x0);
static const System::Int8 IEMView_Default_Border = System::Int8(0x4);
static const System::Int8 IEFolderMView_Default_Border = System::Int8(0x8);
static const System::Int8 IELayerMView_Default_Border = System::Int8(0x8);
static const System::Int8 IEMView_Default_TextMargin = System::Int8(0x0);
static const System::Int8 IEFolderMView_Default_TextMargin = System::Int8(0x4);
static const System::Int8 IELayerMView_Default_TextMargin = System::Int8(0x4);
static const System::Int8 IEMView_Default_Gap = System::Int8(0x0);
static const System::Int8 IEFolderMView_Default_Gap = System::Int8(0x6);
static const System::Int8 IELayerMView_Default_Gap = System::Int8(0x4);
#define IEMView_Default_MultiSelectionOptions System::Set<System::Byte>()
#define IELayerMView_Default_MultiSelectionOptions (System::Set<Iemview__5, Iemview__5::iemoRegion, Iemview__5::iemoDontSortMultiSelection>() << Iemview__5::iemoRegion << Iemview__5::iemoOptimizeForDragging << Iemview__5::iemoSelectOnRightClick << Iemview__5::iemoHideSelectionRect )
#define IEFolderMView_Default_MultiSelectionOptions (System::Set<Iemview__5, Iemview__5::iemoRegion, Iemview__5::iemoDontSortMultiSelection>() << Iemview__5::iemoRegion << Iemview__5::iemoOptimizeForDragging << Iemview__5::iemoSelectOnRightClick )
static const TIEImageEnMViewDefaultText IEMView_Default_DefaultTopText = (TIEImageEnMViewDefaultText)(0);
static const TIEImageEnMViewDefaultText IEMView_Default_DefaultInfoText = (TIEImageEnMViewDefaultText)(0);
static const TIEImageEnMViewDefaultText IEMView_Default_DefaultBottomText = (TIEImageEnMViewDefaultText)(0);
static const TIEImageEnMViewDefaultText IEFolderMView_Default_DefaultTopText = (TIEImageEnMViewDefaultText)(0);
static const TIEImageEnMViewDefaultText IEFolderMView_Default_DefaultInfoText = (TIEImageEnMViewDefaultText)(0);
static const TIEImageEnMViewDefaultText IEFolderMView_Default_DefaultBottomText = (TIEImageEnMViewDefaultText)(1);
static const TIEImageEnMViewDefaultText IELayerMView_Default_DefaultTopText = (TIEImageEnMViewDefaultText)(17);
static const TIEImageEnMViewDefaultText IELayerMView_Default_DefaultInfoText = (TIEImageEnMViewDefaultText)(22);
static const TIEImageEnMViewDefaultText IELayerMView_Default_DefaultBottomText = (TIEImageEnMViewDefaultText)(0);
#define IEMView_Default_ThumbnailOptionsEx (System::Set<TIEMThumbnailOptionsExItems, TIEMThumbnailOptionsExItems::ietxCenterThumbnailColumn, TIEMThumbnailOptionsExItems::ietxShowPreviewWhileDragging>() << TIEMThumbnailOptionsExItems::ietxShowIconForUnknownFormat << TIEMThumbnailOptionsExItems::ietxShowIconWhileLoading << TIEMThumbnailOptionsExItems::ietxEnableInternalIcons << TIEMThumbnailOptionsExItems::ietxStretchSmallImages << TIEMThumbnailOptionsExItems::ietxAutoPadThumbnailColumns << TIEMThumbnailOptionsExItems::ietxCenterSingleFrame << TIEMThumbnailOptionsExItems::ietxShowPreviewWhileDragging )
#define IEFolderMView_Default_ThumbnailOptionsEx (System::Set<TIEMThumbnailOptionsExItems, TIEMThumbnailOptionsExItems::ietxCenterThumbnailColumn, TIEMThumbnailOptionsExItems::ietxShowPreviewWhileDragging>() << TIEMThumbnailOptionsExItems::ietxShowIconForUnknownFormat << TIEMThumbnailOptionsExItems::ietxShowIconWhileLoading << TIEMThumbnailOptionsExItems::ietxEnableInternalIcons << TIEMThumbnailOptionsExItems::ietxStretchSmallImages << TIEMThumbnailOptionsExItems::ietxAutoPadThumbnailColumns << TIEMThumbnailOptionsExItems::ietxCenterSingleFrame << TIEMThumbnailOptionsExItems::ietxShowPreviewWhileDragging )
#define IELayerMView_Default_ThumbnailOptionsEx (System::Set<TIEMThumbnailOptionsExItems, TIEMThumbnailOptionsExItems::ietxCenterThumbnailColumn, TIEMThumbnailOptionsExItems::ietxShowPreviewWhileDragging>() << TIEMThumbnailOptionsExItems::ietxCenterThumbnailColumn << TIEMThumbnailOptionsExItems::ietxShowIconForUnknownFormat << TIEMThumbnailOptionsExItems::ietxShowIconWhileLoading << TIEMThumbnailOptionsExItems::ietxEnableInternalIcons << TIEMThumbnailOptionsExItems::ietxStretchSmallImages << TIEMThumbnailOptionsExItems::ietxAutoPadThumbnailColumns << TIEMThumbnailOptionsExItems::ietxCenterSingleFrame << TIEMThumbnailOptionsExItems::ietxShowPreviewWhileDragging )
static const bool IEMView_Default_AutoAdjustStyle = false;
static const bool IEFolderMView_Default_AutoAdjustStyle = false;
static const bool IELayerMView_Default_AutoAdjustStyle = true;
#define IEMView_Default_PopupMenus System::Set<System::Byte>()
#define IEFolderMView_Default_PopupMenus System::Set<System::Byte>()
#define IELayerMView_Default_PopupMenus (System::Set<TIEMPopupMode, TIEMPopupMode::impDefault, TIEMPopupMode::impSelection>() << TIEMPopupMode::impDefault << TIEMPopupMode::impSelection )
#define IEM_Path_Index_Delimiter L"::"
#define IEM_Filename L"$IEM_FILENAME$"
#define IEM_FilenameNoExt L"$IEM_FILENAMENOEXT$"
#define IEM_FilePath L"$IEM_FILEPATH$"
#define IEM_ImageDimensions L"$IEM_IMAGE_DIMENSIONS$"
#define IEM_ImageDimAndSize L"$IEM_IMAGE_DIM_AND_SIZE$"
#define IEM_FileSize L"$IEM_FILESIZE$"
#define IEM_FileCreateDate L"$IEM_FILECREATEDATE$"
#define IEM_FileCreateDateTime L"$IEM_FILECREATEDATETIME$"
#define IEM_FileCreateDateAndSize L"$IEM_FILECREATEDATE_AND_SIZE$"
#define IEM_FileEditDate L"$IEM_FILEEDITDATE$"
#define IEM_FileEditDateTime L"$IEM_FILEEDITDATETIME$"
#define IEM_FileEditDateAndSize L"$IEM_FILEEDITDATE_AND_SIZE$"
#define IEM_FileType L"$IEM_FILETYPE$"
#define IEM_FileExt L"$IEM_FILEEXT$"
#define IEM_ImageDict L"$IEM_IMAGEDICT$"
#define IEF_Desktop_Folder L"IEF_DESKTOP_FOLDER"
#define IEF_Drives_Folder L"IEF_DRIVES_FOLDER"
#define IEF_Connected_Devices L"IEF_CONNECTED_DEVICES"
#define IEF_Root_Directory L"IEF_ROOT_DIRECTORY"
#define IEF_AppExe_Folder L"IEF_APPEXE_FOLDER"
#define IEF_MyDocuments_Folder L"IEF_MYDOCUMENTS_FOLDER"
#define IEF_MyPictures_Folder L"IEF_MYPICTURES_FOLDER"
#define IEF_MyVideos_Folder L"IEF_MYVIDEOS_FOLDER"
static const System::Int8 Max_Icon_Images_To_Cache = System::Int8(0x32);
static const int Thumbnail_Background_When_Disabled = int(-16777194);
static const int Thumbnail_Border_When_Disabled = int(-16777200);
static const int Text_Color_When_Disabled = int(-16777199);
static const System::Word IMVRES_DEFAULT_IMAGE = System::Word(0x3e8);
static const System::Word IMVRES_BROKEN_IMAGE = System::Word(0x3e9);
static const System::Word IMVRES_EYE_ICON_16 = System::Word(0x3ea);
static const System::Word IMVRES_NOEYE_ICON_16 = System::Word(0x3eb);
static const System::Word IMVRES_LOCK_ICON_16 = System::Word(0x3ec);
static const System::Word IMVRES_UNLOCK_ICON_16 = System::Word(0x3ed);
static const System::Word IMVRES_LINK_ICON_16 = System::Word(0x3ee);
static const System::Word IMVRES_UNLINK_ICON_16 = System::Word(0x3ef);
static const System::Word IMVRES_EYE_ICON_20 = System::Word(0x3f0);
static const System::Word IMVRES_NOEYE_ICON_20 = System::Word(0x3f1);
static const System::Word IMVRES_LOCK_ICON_20 = System::Word(0x3f2);
static const System::Word IMVRES_UNLOCK_ICON_20 = System::Word(0x3f3);
static const System::Word IMVRES_LINK_ICON_20 = System::Word(0x3f4);
static const System::Word IMVRES_UNLINK_ICON_20 = System::Word(0x3f5);
static const System::Int8 Button_Size_Small = System::Int8(0x10);
static const System::Int8 Button_Size_Large = System::Int8(0x14);
extern DELPHI_PACKAGE System::UnicodeString __fastcall IEMDefaultTextToStr(TIEImageEnMViewDefaultText DefaultText);
extern DELPHI_PACKAGE void __fastcall InitTextFilter(const System::UnicodeString StrFilter, /* out */ System::UnicodeString &MatchText, /* out */ TFilterMatchPos &MatchPosition);
extern DELPHI_PACKAGE bool __fastcall MatchesTextFilter(const System::UnicodeString s, const System::UnicodeString MatchText, const TFilterMatchPos MatchPosition)/* overload */;
extern DELPHI_PACKAGE bool __fastcall MatchesTextFilter(const System::UnicodeString s, const System::UnicodeString StrFilter)/* overload */;
extern DELPHI_PACKAGE bool __fastcall MatchesIndexFilter(const int Index, const System::UnicodeString StrFilter);
extern DELPHI_PACKAGE void __fastcall GetFillFromDirectoryParams(Hyiedefs::TIEFolderFileTypes FileTypes, const System::UnicodeString Mask, /* out */ bool &bAllowUnknownFormats, /* out */ bool &bIncludeVideoFiles, /* out */ System::UnicodeString &sFilterMask);
}	/* namespace Iemview */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_IEMVIEW)
using namespace Iemview;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// IemviewHPP
