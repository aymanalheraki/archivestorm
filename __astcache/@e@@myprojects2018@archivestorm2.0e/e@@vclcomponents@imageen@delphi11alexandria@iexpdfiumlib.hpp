// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'iexPdfiumLib.pas' rev: 35.00 (Windows)

#ifndef IexpdfiumlibHPP
#define IexpdfiumlibHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>

//-- user supplied -----------------------------------------------------------

namespace Iexpdfiumlib
{
//-- forward type declarations -----------------------------------------------
struct DECLSPEC_DRECORD __FPDF_PTRREC
{
};


struct FPDF_BSTR;
struct FS_MATRIX;
struct FS_RECTF;
struct FS_SIZEF;
struct FS_POINTF;
struct FPDF_LIBRARY_CONFIG;
struct FPDF_FILEACCESS;
struct FPDF_FILEHANDLER;
struct FPDF_COLORSCHEME;
struct FPDF_IMAGEOBJ_METADATA;
struct FPDF_FILEWRITE;
struct FPDF_SYSFONTINFO;
struct FPDF_CharsetFontMap;
struct UNSUPPORT_INFO;
struct FPDF_FORMFILLINFO;
//-- type declarations -------------------------------------------------------
typedef NativeUInt ieSIZE_T;

typedef int TIME_T;

typedef int *PTIME_T;

typedef int FPDF_TEXT_RENDERMODE;

typedef __FPDF_PTRREC *__PFPDF_PTRREC;

typedef __FPDF_PTRREC *FPDF_LINK;

typedef FPDF_LINK *PFPDF_LINK;

typedef __FPDF_PTRREC *FPDF_PAGE;

typedef FPDF_PAGE *PFPDF_PAGE;

typedef __FPDF_PTRREC *FPDF_ACTION;

typedef __FPDF_PTRREC *FPDF_ANNOTATION;

typedef __FPDF_PTRREC *FPDF_ATTACHMENT;

typedef __FPDF_PTRREC *FPDF_BITMAP;

typedef __FPDF_PTRREC *FPDF_BOOKMARK;

typedef __FPDF_PTRREC *FPDF_CLIPPATH;

typedef __FPDF_PTRREC *FPDF_DEST;

typedef __FPDF_PTRREC *FPDF_DOCUMENT;

typedef __FPDF_PTRREC *FPDF_FONT;

typedef __FPDF_PTRREC *FPDF_FORMHANDLE;

typedef __FPDF_PTRREC *FPDF_JAVASCRIPT_ACTION;

typedef __FPDF_PTRREC *FPDF_PAGELINK;

typedef __FPDF_PTRREC *FPDF_PAGEOBJECT;

typedef __FPDF_PTRREC *FPDF_PAGEOBJECTMARK;

typedef __FPDF_PTRREC *FPDF_PAGERANGE;

typedef __FPDF_PTRREC *FPDF_PATHSEGMENT;

typedef void *FPDF_RECORDER;

typedef __FPDF_PTRREC *FPDF_SCHHANDLE;

typedef __FPDF_PTRREC *FPDF_SIGNATURE;

typedef __FPDF_PTRREC *FPDF_STRUCTELEMENT;

typedef __FPDF_PTRREC *FPDF_STRUCTTREE;

typedef __FPDF_PTRREC *FPDF_TEXTPAGE;

typedef __FPDF_PTRREC *FPDF_WIDGET;

typedef int FPDF_BOOL;

typedef int FPDF_RESULT;

typedef unsigned FPDF_DWORD;

typedef float FS_FLOAT;

typedef float *PFS_FLOAT;

enum class DECLSPEC_DENUM FPDF_DUPLEXTYPE : unsigned char { DuplexUndefined, Simplex, DuplexFlipShortEdge, DuplexFlipLongEdge };

typedef System::WideChar * PFPDF_WCHAR;

typedef System::WideChar FPDF_WCHAR;

typedef char * FPDF_BYTESTRING;

typedef System::WideChar * FPDF_WIDESTRING;

typedef FPDF_BSTR *PFPDF_BSTR;

struct DECLSPEC_DRECORD FPDF_BSTR
{
public:
	char *str;
	int len;
};


typedef FPDF_BSTR *PFPdfBStr;

typedef FPDF_BSTR TFPdfBStr;

typedef char * FPDF_STRING;

typedef FS_MATRIX *PFS_MATRIX;

struct DECLSPEC_DRECORD FS_MATRIX
{
public:
	float a;
	float b;
	float c;
	float d;
	float e;
	float f;
};


typedef FS_MATRIX *PFSMatrix;

typedef FS_MATRIX TFSMatrix;

typedef FS_RECTF *PFS_RECTF;

struct DECLSPEC_DRECORD FS_RECTF
{
public:
	float left;
	float top;
	float right;
	float bottom;
};


typedef FS_RECTF *FS_LPCRECTF;

typedef FS_RECTF *PFSRectF;

typedef FS_RECTF TFSRectF;

typedef FS_SIZEF *PFS_SIZEF;

struct DECLSPEC_DRECORD FS_SIZEF
{
public:
	float width;
	float height;
};


typedef FS_SIZEF *PFSSizeF;

typedef FS_SIZEF TFSSizeF;

typedef FS_POINTF *PFS_POINTF;

struct DECLSPEC_DRECORD FS_POINTF
{
public:
	float x;
	float y;
};


typedef FS_POINTF *PFSPointF;

typedef FS_POINTF TFSPointF;

typedef FS_POINTF *FS_LPCPOINTF;

typedef int FPDF_ANNOTATION_SUBTYPE;

typedef int *PFPDF_ANNOTATION_SUBTYPE;

typedef int FPDF_ANNOT_APPEARANCEMODE;

typedef int FPDF_OBJECT_TYPE;

typedef FPDF_LIBRARY_CONFIG *PFPDF_LIBRARY_CONFIG;

struct DECLSPEC_DRECORD FPDF_LIBRARY_CONFIG
{
public:
	int version;
	char * *m_pUserFontPaths;
	void *m_pIsolate;
	unsigned m_v8EmbedderSlot;
	void *m_pPlatform;
};


typedef FPDF_LIBRARY_CONFIG *PFPdfLibraryConfig;

typedef FPDF_LIBRARY_CONFIG TFPdfLibraryConfig;

typedef void __cdecl (*TPDFiumEnsureTypefaceCharactersAccessible)(Winapi::Windows::PLogFontW font, System::WideChar * text, NativeUInt text_length);

typedef FPDF_FILEACCESS *PFPDF_FILEACCESS;

struct DECLSPEC_DRECORD FPDF_FILEACCESS
{
public:
	unsigned m_FileLen;
	int __cdecl (*m_GetBlock)(void * param, unsigned position, System::PByte pBuf, unsigned size);
	void *m_Param;
};


typedef FPDF_FILEACCESS *PFPdfFileAccess;

typedef FPDF_FILEACCESS TFPdfFileAccess;

typedef FPDF_FILEHANDLER *PFPDF_FILEHANDLER;

struct DECLSPEC_DRECORD FPDF_FILEHANDLER
{
public:
	void *clientData;
	void __cdecl (*Release)(void * clientData);
	unsigned __cdecl (*GetSize)(void * clientData);
	int __cdecl (*ReadBlock)(void * clientData, unsigned offset, void * buffer, unsigned size);
	int __cdecl (*WriteBlock)(void * clientData, unsigned offset, const void * buffer, unsigned size);
	int __cdecl (*Flush)(void * clientData);
	int __cdecl (*Truncate)(void * clientData, unsigned size);
};


typedef FPDF_FILEHANDLER *PFPdfFileHandler;

typedef FPDF_FILEHANDLER TFPdfFileHandler;

typedef FPDF_COLORSCHEME *PFPDF_COLORSCHEME;

struct DECLSPEC_DRECORD FPDF_COLORSCHEME
{
public:
	unsigned path_fill_color;
	unsigned path_stroke_color;
	unsigned text_fill_color;
	unsigned text_stroke_color;
};


typedef FPDF_COLORSCHEME *PFPdfColorScheme;

typedef FPDF_COLORSCHEME TFPdfColorScheme;

typedef FPDF_IMAGEOBJ_METADATA *PFPDF_IMAGEOBJ_METADATA;

struct DECLSPEC_DRECORD FPDF_IMAGEOBJ_METADATA
{
public:
	unsigned width;
	unsigned height;
	float horizontal_dpi;
	float vertical_dpi;
	unsigned bits_per_pixel;
	int colorspace;
	int marked_content_id;
};


typedef FPDF_IMAGEOBJ_METADATA *PFPdfImageObjMetaData;

typedef FPDF_IMAGEOBJ_METADATA TFPdfImageObjMetaData;

typedef FPDF_FILEWRITE *PFPDF_FILEWRITE;

struct DECLSPEC_DRECORD FPDF_FILEWRITE
{
public:
	int version;
	int __cdecl (*WriteBlock)(PFPDF_FILEWRITE pThis, void * pData, unsigned size);
};


typedef FPDF_FILEWRITE *PFPdfFileWrite;

typedef FPDF_FILEWRITE TFPdfFileWrite;

enum class DECLSPEC_DENUM FPDF_FILEIDTYPE : unsigned char { FILEIDTYPE_PERMANENT, FILEIDTYPE_CHANGING };

typedef FPDF_SYSFONTINFO *PFPDF_SYSFONTINFO;

struct DECLSPEC_DRECORD FPDF_SYSFONTINFO
{
public:
	int version;
	void __cdecl (*Release)(PFPDF_SYSFONTINFO pThis);
	void __cdecl (*EnumFonts)(PFPDF_SYSFONTINFO pThis, void * pMapper);
	void * __cdecl (*MapFont)(PFPDF_SYSFONTINFO pThis, int weight, int bItalic, int charset, int pitch_family, char * face, System::PInteger bExact);
	void * __cdecl (*GetFont)(PFPDF_SYSFONTINFO pThis, char * face);
	unsigned __cdecl (*GetFontData)(PFPDF_SYSFONTINFO pThis, void * hFont, unsigned table, System::WideChar * buffer, unsigned buf_size);
	unsigned __cdecl (*GetFaceName)(PFPDF_SYSFONTINFO pThis, void * hFont, char * buffer, unsigned buf_size);
	int __cdecl (*GetFontCharset)(PFPDF_SYSFONTINFO pThis, void * hFont);
	void __cdecl (*DeleteFont)(PFPDF_SYSFONTINFO pThis, void * hFont);
};


typedef FPDF_SYSFONTINFO *PFPdfSysFontInfo;

typedef FPDF_SYSFONTINFO TFPdfSysFontInfo;

typedef FPDF_CharsetFontMap *PFPDF_CharsetFontMap;

struct DECLSPEC_DRECORD FPDF_CharsetFontMap
{
public:
	int charset;
	char *fontname;
};


typedef FPDF_CharsetFontMap *PFPdfCharsetFontMap;

typedef FPDF_CharsetFontMap TFPdfCharsetFontMap;

typedef UNSUPPORT_INFO *PUNSUPPORT_INFO;

struct DECLSPEC_DRECORD UNSUPPORT_INFO
{
public:
	int version;
	void __cdecl (*FSDK_UnSupport_Handler)(PUNSUPPORT_INFO pThis, int nType);
};


typedef UNSUPPORT_INFO *PUnsupportInfo;

typedef UNSUPPORT_INFO TUnsupportInfo;

typedef void __cdecl (*TFPDFTimerCallback)(int idEvent);

typedef Winapi::Windows::PSystemTime PFPDF_SYSTEMTIME;

typedef _SYSTEMTIME FPDF_SYSTEMTIME;

typedef _SYSTEMTIME *PFPDFSystemTime;

typedef _SYSTEMTIME TFPDFSystemTime;

typedef FPDF_FORMFILLINFO *PFPDF_FORMFILLINFO;

struct DECLSPEC_DRECORD FPDF_FORMFILLINFO
{
public:
	int version;
	void __cdecl (*Release)(PFPDF_FORMFILLINFO pThis);
	void __cdecl (*FFI_Invalidate)(PFPDF_FORMFILLINFO pThis, FPDF_PAGE page, double left, double top, double right, double bottom);
	void __cdecl (*FFI_OutputSelectedRect)(PFPDF_FORMFILLINFO pThis, FPDF_PAGE page, double left, double top, double right, double bottom);
	void __cdecl (*FFI_SetCursor)(PFPDF_FORMFILLINFO pThis, int nCursorType);
	int __cdecl (*FFI_SetTimer)(PFPDF_FORMFILLINFO pThis, int uElapse, TFPDFTimerCallback lpTimerFunc);
	void __cdecl (*FFI_KillTimer)(PFPDF_FORMFILLINFO pThis, int nTimerID);
	_SYSTEMTIME __cdecl (*FFI_GetLocalTime)(PFPDF_FORMFILLINFO pThis);
	void __cdecl (*FFI_OnChange)(PFPDF_FORMFILLINFO pThis);
	FPDF_PAGE __cdecl (*FFI_GetPage)(PFPDF_FORMFILLINFO pThis, FPDF_DOCUMENT document, int nPageIndex);
	FPDF_PAGE __cdecl (*FFI_GetCurrentPage)(PFPDF_FORMFILLINFO pThis, FPDF_DOCUMENT document);
	int __cdecl (*FFI_GetRotation)(PFPDF_FORMFILLINFO pThis, FPDF_PAGE page);
	void __cdecl (*FFI_ExecuteNamedAction)(PFPDF_FORMFILLINFO pThis, char * namedAction);
	void __cdecl (*FFI_SetTextFieldFocus)(PFPDF_FORMFILLINFO pThis, System::WideChar * value, unsigned valueLen, int is_focus);
	void __cdecl (*FFI_DoURIAction)(PFPDF_FORMFILLINFO pThis, System::WideChar * bsURI);
	void __cdecl (*FFI_DoGoToAction)(PFPDF_FORMFILLINFO pThis, int nPageIndex, int zoomMode, Winapi::Windows::PSingle fPosArray, int sizeofArray);
	int xfa_disabled;
	void __cdecl (*FFI_DisplayCaret)(PFPDF_FORMFILLINFO pThis, FPDF_PAGE page, int bVisible, double left, double top, double right, double bottom);
	int __cdecl (*FFI_GetCurrentPageIndex)(PFPDF_FORMFILLINFO pThis, FPDF_DOCUMENT document);
	void __cdecl (*FFI_SetCurrentPage)(PFPDF_FORMFILLINFO pThis, FPDF_DOCUMENT document, int iCurPage);
	void __cdecl (*FFI_GotoURL)(PFPDF_FORMFILLINFO pThis, FPDF_DOCUMENT document, System::WideChar * wsURL);
	void __cdecl (*FFI_GetPageViewRect)(PFPDF_FORMFILLINFO pThis, FPDF_PAGE page, double &left, double &top, double &right, double &bottom);
	void __cdecl (*FFI_PageEvent)(PFPDF_FORMFILLINFO pThis, int page_count, unsigned event_type);
	int __cdecl (*FFI_PopupMenu)(PFPDF_FORMFILLINFO pThis, FPDF_PAGE page, FPDF_WIDGET hWidget, int menuFlag, float x, float y);
	PFPDF_FILEHANDLER __cdecl (*FFI_OpenFile)(PFPDF_FORMFILLINFO pThis, int fileFlag, System::WideChar * wsURL, char * mode);
	void __cdecl (*FFI_EmailTo)(PFPDF_FORMFILLINFO pThis, PFPDF_FILEHANDLER fileHandler, System::WideChar * pTo, System::WideChar * pSubject, System::WideChar * pCC, System::WideChar * pBcc, System::WideChar * pMsg);
	void __cdecl (*FFI_UploadTo)(PFPDF_FORMFILLINFO pThis, PFPDF_FILEHANDLER fileHandler, int fileFlag, System::WideChar * uploadTo);
	int __cdecl (*FFI_GetPlatform)(PFPDF_FORMFILLINFO pThis, void * platform_, int length);
	int __cdecl (*FFI_GetLanguage)(PFPDF_FORMFILLINFO pThis, void * language, int length);
	PFPDF_FILEHANDLER __cdecl (*FFI_DownloadFromURL)(PFPDF_FORMFILLINFO pThis, System::WideChar * URL);
	int __cdecl (*FFI_PostRequestURL)(PFPDF_FORMFILLINFO pThis, System::WideChar * wsURL, System::WideChar * wsData, System::WideChar * wsContentType, System::WideChar * wsEncode, System::WideChar * wsHeader, PFPDF_BSTR respone);
	int __cdecl (*FFI_PutRequestURL)(PFPDF_FORMFILLINFO pThis, System::WideChar * wsURL, System::WideChar * wsData, System::WideChar * wsEncode);
	void __cdecl (*FFI_OnFocusChange)(PFPDF_FORMFILLINFO param, FPDF_ANNOTATION annot, int page_index);
	void __cdecl (*FFI_DoURIActionWithKeyboardModifier)(PFPDF_FORMFILLINFO param, char * uri, int modifiers);
};


typedef FPDF_FORMFILLINFO *PFPDFFormFillInfo;

typedef FPDF_FORMFILLINFO TFPDFFormFillInfo;

typedef int FWL_EVENTFLAG;

typedef int FWL_VKEYCODE;

//-- var, const, procedure ---------------------------------------------------
static const System::Int8 FPDF_OBJECT_UNKNOWN = System::Int8(0x0);
static const System::Int8 FPDF_OBJECT_BOOLEAN = System::Int8(0x1);
static const System::Int8 FPDF_OBJECT_NUMBER = System::Int8(0x2);
static const System::Int8 FPDF_OBJECT_STRING = System::Int8(0x3);
static const System::Int8 FPDF_OBJECT_NAME = System::Int8(0x4);
static const System::Int8 FPDF_OBJECT_ARRAY = System::Int8(0x5);
static const System::Int8 FPDF_OBJECT_DICTIONARY = System::Int8(0x6);
static const System::Int8 FPDF_OBJECT_STREAM = System::Int8(0x7);
static const System::Int8 FPDF_OBJECT_NULLOBJ = System::Int8(0x8);
static const System::Int8 FPDF_OBJECT_REFERENCE = System::Int8(0x9);
static const System::Int8 FPDF_TEXTRENDERMODE_UNKNOWN = System::Int8(-1);
static const System::Int8 FPDF_TEXTRENDERMODE_FILL = System::Int8(0x0);
static const System::Int8 FPDF_TEXTRENDERMODE_STROKE = System::Int8(0x1);
static const System::Int8 FPDF_TEXTRENDERMODE_FILL_STROKE = System::Int8(0x2);
static const System::Int8 FPDF_TEXTRENDERMODE_INVISIBLE = System::Int8(0x3);
static const System::Int8 FPDF_TEXTRENDERMODE_FILL_CLIP = System::Int8(0x4);
static const System::Int8 FPDF_TEXTRENDERMODE_STROKE_CLIP = System::Int8(0x5);
static const System::Int8 FPDF_TEXTRENDERMODE_FILL_STROKE_CLIP = System::Int8(0x6);
static const System::Int8 FPDF_TEXTRENDERMODE_CLIP = System::Int8(0x7);
static const System::Int8 FPDF_TEXTRENDERMODE_LAST = System::Int8(0x7);
extern DELPHI_PACKAGE void __cdecl (*FPDF_InitLibrary)(void);
extern DELPHI_PACKAGE void __cdecl (*FPDF_InitLibraryWithConfig)(PFPDF_LIBRARY_CONFIG config);
extern DELPHI_PACKAGE void __cdecl (*FPDF_DestroyLibrary)(void);
static const System::Int8 FPDF_POLICY_MACHINETIME_ACCESS = System::Int8(0x0);
extern DELPHI_PACKAGE void __cdecl (*FPDF_SetSandBoxPolicy)(unsigned policy, int enable);
extern DELPHI_PACKAGE void __cdecl (*FPDF_SetTypefaceAccessibleFunc)(TPDFiumEnsureTypefaceCharactersAccessible func);
extern DELPHI_PACKAGE void __cdecl (*FPDF_SetPrintTextWithGDI)(int use_gdi);
extern DELPHI_PACKAGE int __cdecl (*FPDF_SetPrintMode)(int mode);
extern DELPHI_PACKAGE FPDF_DOCUMENT __cdecl (*FPDF_LoadDocument)(char * file_path, char * password);
extern DELPHI_PACKAGE FPDF_DOCUMENT __cdecl (*FPDF_LoadMemDocument)(void * data_buf, int size, char * password);
extern DELPHI_PACKAGE FPDF_DOCUMENT __cdecl (*FPDF_LoadMemDocument64)(void * data_buf, NativeUInt size, char * password);
extern DELPHI_PACKAGE FPDF_DOCUMENT __cdecl (*FPDF_LoadCustomDocument)(PFPDF_FILEACCESS pFileAccess, char * password);
extern DELPHI_PACKAGE int __cdecl (*FPDF_GetFileVersion)(FPDF_DOCUMENT doc, int &fileVersion);
static const System::Int8 FPDF_ERR_SUCCESS = System::Int8(0x0);
static const System::Int8 FPDF_ERR_UNKNOWN = System::Int8(0x1);
static const System::Int8 FPDF_ERR_FILE = System::Int8(0x2);
static const System::Int8 FPDF_ERR_FORMAT = System::Int8(0x3);
static const System::Int8 FPDF_ERR_PASSWORD = System::Int8(0x4);
static const System::Int8 FPDF_ERR_SECURITY = System::Int8(0x5);
static const System::Int8 FPDF_ERR_PAGE = System::Int8(0x6);
static const System::Int8 FPDF_ERR_XFALOAD = System::Int8(0x7);
static const System::Int8 FPDF_ERR_XFALAYOUT = System::Int8(0x8);
extern DELPHI_PACKAGE unsigned __cdecl (*FPDF_GetLastError)(void);
extern DELPHI_PACKAGE int __cdecl (*FPDF_DocumentHasValidCrossReferenceTable)(FPDF_DOCUMENT document);
extern DELPHI_PACKAGE unsigned __cdecl (*FPDF_GetDocPermissions)(FPDF_DOCUMENT document);
extern DELPHI_PACKAGE int __cdecl (*FPDF_GetSecurityHandlerRevision)(FPDF_DOCUMENT document);
extern DELPHI_PACKAGE int __cdecl (*FPDF_GetPageCount)(FPDF_DOCUMENT document);
extern DELPHI_PACKAGE FPDF_PAGE __cdecl (*FPDF_LoadPage)(FPDF_DOCUMENT document, int page_index);
extern DELPHI_PACKAGE float __cdecl (*FPDF_GetPageWidthF)(FPDF_PAGE page);
extern DELPHI_PACKAGE double __cdecl (*FPDF_GetPageWidth)(FPDF_PAGE page);
extern DELPHI_PACKAGE float __cdecl (*FPDF_GetPageHeightF)(FPDF_PAGE page);
extern DELPHI_PACKAGE double __cdecl (*FPDF_GetPageHeight)(FPDF_PAGE page);
extern DELPHI_PACKAGE int __cdecl (*FPDF_GetPageBoundingBox)(FPDF_PAGE page, PFS_RECTF rect);
extern DELPHI_PACKAGE int __cdecl (*FPDF_GetPageSizeByIndexF)(FPDF_DOCUMENT document, int page_index, PFS_SIZEF size);
extern DELPHI_PACKAGE int __cdecl (*FPDF_GetPageSizeByIndex)(FPDF_DOCUMENT document, int page_index, double &width, double &height);
static const System::Int8 FPDF_ANNOT = System::Int8(0x1);
static const System::Int8 FPDF_LCD_TEXT = System::Int8(0x2);
static const System::Int8 FPDF_NO_NATIVETEXT = System::Int8(0x4);
static const System::Int8 FPDF_GRAYSCALE = System::Int8(0x8);
static const System::Byte FPDF_DEBUG_INFO = System::Byte(0x80);
static const System::Word FPDF_NO_CATCH = System::Word(0x100);
static const System::Word FPDF_RENDER_LIMITEDIMAGECACHE = System::Word(0x200);
static const System::Word FPDF_RENDER_FORCEHALFTONE = System::Word(0x400);
static const System::Word FPDF_PRINTING = System::Word(0x800);
static const System::Word FPDF_RENDER_NO_SMOOTHTEXT = System::Word(0x1000);
static const System::Word FPDF_RENDER_NO_SMOOTHIMAGE = System::Word(0x2000);
static const System::Word FPDF_RENDER_NO_SMOOTHPATH = System::Word(0x4000);
static const System::Word FPDF_THUMBNAIL = System::Word(0x8000);
static const System::Int8 FPDF_REVERSE_BYTE_ORDER = System::Int8(0x10);
static const System::Int8 FPDF_CONVERT_FILL_TO_STROKE = System::Int8(0x20);
extern DELPHI_PACKAGE void __cdecl (*FPDF_RenderPage)(HDC DC, FPDF_PAGE page, int start_x, int start_y, int size_x, int size_y, int rotate, int flags);
extern DELPHI_PACKAGE void __cdecl (*FPDF_RenderPageBitmap)(FPDF_BITMAP bitmap, FPDF_PAGE page, int start_x, int start_y, int size_x, int size_y, int rotate, int flags);
extern DELPHI_PACKAGE void __cdecl (*FPDF_RenderPageBitmapWithMatrix)(FPDF_BITMAP bitmap, FPDF_PAGE page, PFS_MATRIX matrix, PFS_RECTF clipping, int flags);
extern DELPHI_PACKAGE void __cdecl (*FPDF_ClosePage)(FPDF_PAGE page);
extern DELPHI_PACKAGE void __cdecl (*FPDF_CloseDocument)(FPDF_DOCUMENT document);
extern DELPHI_PACKAGE void __cdecl (*FPDF_DeviceToPage)(FPDF_PAGE page, int start_x, int start_y, int size_x, int size_y, int rotate, int device_x, int device_y, double &page_x, double &page_y);
extern DELPHI_PACKAGE void __cdecl (*FPDF_PageToDevice)(FPDF_PAGE page, int start_x, int start_y, int size_x, int size_y, int rotate, double page_x, double page_y, int &device_x, int &device_y);
extern DELPHI_PACKAGE FPDF_BITMAP __cdecl (*FPDFBitmap_Create)(int width, int height, int alpha);
static const System::Int8 FPDFBitmap_Unknown = System::Int8(0x0);
static const System::Int8 FPDFBitmap_Gray = System::Int8(0x1);
static const System::Int8 FPDFBitmap_BGR = System::Int8(0x2);
static const System::Int8 FPDFBitmap_BGRx = System::Int8(0x3);
static const System::Int8 FPDFBitmap_BGRA = System::Int8(0x4);
extern DELPHI_PACKAGE FPDF_BITMAP __cdecl (*FPDFBitmap_CreateEx)(int width, int height, int format, void * first_scan, int stride);
extern DELPHI_PACKAGE int __cdecl (*FPDFBitmap_GetFormat)(FPDF_BITMAP bitmap);
extern DELPHI_PACKAGE void __cdecl (*FPDFBitmap_FillRect)(FPDF_BITMAP bitmap, int left, int top, int width, int height, unsigned color);
extern DELPHI_PACKAGE void * __cdecl (*FPDFBitmap_GetBuffer)(FPDF_BITMAP bitmap);
extern DELPHI_PACKAGE int __cdecl (*FPDFBitmap_GetWidth)(FPDF_BITMAP bitmap);
extern DELPHI_PACKAGE int __cdecl (*FPDFBitmap_GetHeight)(FPDF_BITMAP bitmap);
extern DELPHI_PACKAGE int __cdecl (*FPDFBitmap_GetStride)(FPDF_BITMAP bitmap);
extern DELPHI_PACKAGE void __cdecl (*FPDFBitmap_Destroy)(FPDF_BITMAP bitmap);
extern DELPHI_PACKAGE char * __cdecl (*FPDF_GetRecommendedV8Flags)(void);
extern DELPHI_PACKAGE void * __cdecl (*FPDF_GetArrayBufferAllocatorSharedInstance)(void);
extern DELPHI_PACKAGE int __cdecl (*FPDF_BStr_Init)(PFPDF_BSTR bstr);
extern DELPHI_PACKAGE int __cdecl (*FPDF_BStr_Set)(PFPDF_BSTR vstr, const char * cstr, int length);
extern DELPHI_PACKAGE int __cdecl (*FPDF_BStr_Clear)(PFPDF_BSTR bstr);
static const System::Int8 FPDF_COLORSPACE_UNKNOWN = System::Int8(0x0);
static const System::Int8 FPDF_COLORSPACE_DEVICEGRAY = System::Int8(0x1);
static const System::Int8 FPDF_COLORSPACE_DEVICERGB = System::Int8(0x2);
static const System::Int8 FPDF_COLORSPACE_DEVICECMYK = System::Int8(0x3);
static const System::Int8 FPDF_COLORSPACE_CALGRAY = System::Int8(0x4);
static const System::Int8 FPDF_COLORSPACE_CALRGB = System::Int8(0x5);
static const System::Int8 FPDF_COLORSPACE_LAB = System::Int8(0x6);
static const System::Int8 FPDF_COLORSPACE_ICCBASED = System::Int8(0x7);
static const System::Int8 FPDF_COLORSPACE_SEPARATION = System::Int8(0x8);
static const System::Int8 FPDF_COLORSPACE_DEVICEN = System::Int8(0x9);
static const System::Int8 FPDF_COLORSPACE_INDEXED = System::Int8(0xa);
static const System::Int8 FPDF_COLORSPACE_PATTERN = System::Int8(0xb);
static const System::Int8 FPDF_PAGEOBJ_UNKNOWN = System::Int8(0x0);
static const System::Int8 FPDF_PAGEOBJ_TEXT = System::Int8(0x1);
static const System::Int8 FPDF_PAGEOBJ_PATH = System::Int8(0x2);
static const System::Int8 FPDF_PAGEOBJ_IMAGE = System::Int8(0x3);
static const System::Int8 FPDF_PAGEOBJ_SHADING = System::Int8(0x4);
static const System::Int8 FPDF_PAGEOBJ_FORM = System::Int8(0x5);
static const System::Int8 FPDF_SEGMENT_UNKNOWN = System::Int8(-1);
static const System::Int8 FPDF_SEGMENT_LINETO = System::Int8(0x0);
static const System::Int8 FPDF_SEGMENT_BEZIERTO = System::Int8(0x1);
static const System::Int8 FPDF_SEGMENT_MOVETO = System::Int8(0x2);
static const System::Int8 FPDF_FILLMODE_NONE = System::Int8(0x0);
static const System::Int8 FPDF_FILLMODE_ALTERNATE = System::Int8(0x1);
static const System::Int8 FPDF_FILLMODE_WINDING = System::Int8(0x2);
static const System::Int8 FPDF_FONT_TYPE1 = System::Int8(0x1);
static const System::Int8 FPDF_FONT_TRUETYPE = System::Int8(0x2);
static const System::Int8 FPDF_LINECAP_BUTT = System::Int8(0x0);
static const System::Int8 FPDF_LINECAP_ROUND = System::Int8(0x1);
static const System::Int8 FPDF_LINECAP_PROJECTING_SQUARE = System::Int8(0x2);
static const System::Int8 FPDF_LINEJOIN_MITER = System::Int8(0x0);
static const System::Int8 FPDF_LINEJOIN_ROUND = System::Int8(0x1);
static const System::Int8 FPDF_LINEJOIN_BEVEL = System::Int8(0x2);
static const System::Int8 FPDF_PRINTMODE_EMF = System::Int8(0x0);
static const System::Int8 FPDF_PRINTMODE_TEXTONLY = System::Int8(0x1);
static const System::Int8 FPDF_PRINTMODE_POSTSCRIPT2 = System::Int8(0x2);
static const System::Int8 FPDF_PRINTMODE_POSTSCRIPT3 = System::Int8(0x3);
static const System::Int8 FPDF_PRINTMODE_POSTSCRIPT2_PASSTHROUGH = System::Int8(0x4);
static const System::Int8 FPDF_PRINTMODE_POSTSCRIPT3_PASSTHROUGH = System::Int8(0x5);
static const System::Int8 FPDF_PRINTMODE_EMF_IMAGE_MASKS = System::Int8(0x6);
extern DELPHI_PACKAGE FPDF_DOCUMENT __cdecl (*FPDF_CreateNewDocument)(void);
extern DELPHI_PACKAGE FPDF_PAGE __cdecl (*FPDFPage_New)(FPDF_DOCUMENT document, int page_index, double width, double height);
extern DELPHI_PACKAGE void __cdecl (*FPDFPage_Delete)(FPDF_DOCUMENT document, int page_index);
extern DELPHI_PACKAGE int __cdecl (*FPDFPage_GetRotation)(FPDF_PAGE page);
extern DELPHI_PACKAGE void __cdecl (*FPDFPage_SetRotation)(FPDF_PAGE page, int rotate);
extern DELPHI_PACKAGE int __cdecl (*FPDFPage_HasTransparency)(FPDF_PAGE page);
extern DELPHI_PACKAGE int __cdecl (*FPDFPage_GenerateContent)(FPDF_PAGE page);
extern DELPHI_PACKAGE int __cdecl (*FPDF_ImportPages)(FPDF_DOCUMENT dest_doc, FPDF_DOCUMENT src_doc, char * pagerange, int index);
extern DELPHI_PACKAGE FPDF_DOCUMENT __cdecl (*FPDF_ImportNPagesToOne)(FPDF_DOCUMENT src_doc, float output_width, float output_height, NativeUInt num_pages_on_x_axis, NativeUInt num_pages_on_y_axis);
extern DELPHI_PACKAGE int __cdecl (*FPDF_CopyViewerPreferences)(FPDF_DOCUMENT dest_doc, FPDF_DOCUMENT src_doc);
static const System::Int8 FPDF_INCREMENTAL = System::Int8(0x1);
static const System::Int8 FPDF_NO_INCREMENTAL = System::Int8(0x2);
static const System::Int8 FPDF_REMOVE_SECURITY = System::Int8(0x3);
extern DELPHI_PACKAGE int __cdecl (*FPDF_SaveAsCopy)(FPDF_DOCUMENT document, PFPDF_FILEWRITE pFileWrite, unsigned flags);
extern DELPHI_PACKAGE int __cdecl (*FPDF_SaveWithVersion)(FPDF_DOCUMENT document, PFPDF_FILEWRITE pFileWrite, unsigned flags, int fileVersion);
static const System::Int8 FLATTEN_FAIL = System::Int8(0x0);
static const System::Int8 FLATTEN_SUCCESS = System::Int8(0x1);
static const System::Int8 FLATTEN_NOTINGTODO = System::Int8(0x2);
extern DELPHI_PACKAGE int __cdecl (*FPDFPage_Flatten)(FPDF_PAGE page, int nFlag);
extern DELPHI_PACKAGE FPDF_TEXTPAGE __cdecl (*FPDFText_LoadPage)(FPDF_PAGE page);
extern DELPHI_PACKAGE void __cdecl (*FPDFText_ClosePage)(FPDF_TEXTPAGE text_page);
extern DELPHI_PACKAGE int __cdecl (*FPDFText_CountChars)(FPDF_TEXTPAGE text_page);
extern DELPHI_PACKAGE System::WideChar __cdecl (*FPDFText_GetUnicode)(FPDF_TEXTPAGE text_page, int index);
extern DELPHI_PACKAGE double __cdecl (*FPDFText_GetFontSize)(FPDF_TEXTPAGE text_page, int index);
extern DELPHI_PACKAGE unsigned __cdecl (*FPDFText_GetFontInfo)(FPDF_TEXTPAGE text_page, int index, void * buffer, unsigned buflen, System::PInteger flags);
extern DELPHI_PACKAGE int __cdecl (*FPDFText_GetFontWeight)(FPDF_TEXTPAGE text_page, int index);
extern DELPHI_PACKAGE int __cdecl (*FPDFText_GetTextRenderMode)(FPDF_TEXTPAGE text_page, int index);
extern DELPHI_PACKAGE int __cdecl (*FPDFText_GetFillColor)(FPDF_TEXTPAGE text_page, int index, unsigned &R, unsigned &G, unsigned &B, unsigned &A);
extern DELPHI_PACKAGE int __cdecl (*FPDFText_GetStrokeColor)(FPDF_TEXTPAGE text_page, int index, unsigned &R, unsigned &G, unsigned &B, unsigned &A);
extern DELPHI_PACKAGE float __cdecl (*FPDFText_GetCharAngle)(FPDF_TEXTPAGE text_page, int index);
extern DELPHI_PACKAGE void __cdecl (*FPDFText_GetCharBox)(FPDF_TEXTPAGE text_page, int index, double &left, double &right, double &bottom, double &top);
extern DELPHI_PACKAGE int __cdecl (*FPDFText_GetLooseCharBox)(FPDF_TEXTPAGE text_page, int index, PFS_RECTF rect);
extern DELPHI_PACKAGE int __cdecl (*FPDFText_GetMatrix)(FPDF_TEXTPAGE text_page, int index, PFS_MATRIX matrix);
extern DELPHI_PACKAGE int __cdecl (*FPDFText_GetCharOrigin)(FPDF_TEXTPAGE text_page, int index, double &x, double &y);
extern DELPHI_PACKAGE int __cdecl (*FPDFText_GetCharIndexAtPos)(FPDF_TEXTPAGE text_page, double x, double y, double xTorelance, double yTolerance);
extern DELPHI_PACKAGE int __cdecl (*FPDFText_GetText)(FPDF_TEXTPAGE text_page, int start_index, int count, System::WideChar * result);
extern DELPHI_PACKAGE int __cdecl (*FPDFText_CountRects)(FPDF_TEXTPAGE text_page, int start_index, int count);
extern DELPHI_PACKAGE void __cdecl (*FPDFText_GetRect)(FPDF_TEXTPAGE text_page, int rect_index, double &left, double &top, double &right, double &bottom);
extern DELPHI_PACKAGE int __cdecl (*FPDFText_GetBoundedText)(FPDF_TEXTPAGE text_page, double left, double top, double right, double bottom, System::WideChar * buffer, int buflen);
static const System::Int8 FPDF_MATCHCASE = System::Int8(0x1);
static const System::Int8 FPDF_MATCHWHOLEWORD = System::Int8(0x2);
static const System::Int8 FPDF_CONSECUTIVE = System::Int8(0x4);
extern DELPHI_PACKAGE FPDF_SCHHANDLE __cdecl (*FPDFText_FindStart)(FPDF_TEXTPAGE text_page, System::WideChar * findwhat, unsigned flags, int start_index);
extern DELPHI_PACKAGE int __cdecl (*FPDFText_FindNext)(FPDF_SCHHANDLE handle);
extern DELPHI_PACKAGE int __cdecl (*FPDFText_FindPrev)(FPDF_SCHHANDLE handle);
extern DELPHI_PACKAGE int __cdecl (*FPDFText_GetSchResultIndex)(FPDF_SCHHANDLE handle);
extern DELPHI_PACKAGE int __cdecl (*FPDFText_GetSchCount)(FPDF_SCHHANDLE handle);
extern DELPHI_PACKAGE void __cdecl (*FPDFText_FindClose)(FPDF_SCHHANDLE handle);
extern DELPHI_PACKAGE FPDF_PAGELINK __cdecl (*FPDFLink_LoadWebLinks)(FPDF_TEXTPAGE text_page);
extern DELPHI_PACKAGE int __cdecl (*FPDFLink_CountWebLinks)(FPDF_PAGELINK link_page);
extern DELPHI_PACKAGE int __cdecl (*FPDFLink_GetURL)(FPDF_PAGELINK link_page, int link_index, System::WideChar * buffer, int buflen);
extern DELPHI_PACKAGE int __cdecl (*FPDFLink_CountRects)(FPDF_PAGELINK link_page, int link_index);
extern DELPHI_PACKAGE void __cdecl (*FPDFLink_GetRect)(FPDF_PAGELINK link_page, int link_index, int rect_index, double &left, double &top, double &right, double &bottom);
extern DELPHI_PACKAGE int __cdecl (*FPDFLink_GetTextRange)(FPDF_PAGELINK link_page, int link_index, System::PInteger start_char_index, System::PInteger char_count);
extern DELPHI_PACKAGE void __cdecl (*FPDFLink_CloseWebLinks)(FPDF_PAGELINK link_page);
extern DELPHI_PACKAGE int __cdecl (*FPDFText_GetCharIndexFromTextIndex)(FPDF_TEXTPAGE text_page, int nTextIndex);
extern DELPHI_PACKAGE int __cdecl (*FPDFText_GetTextIndexFromCharIndex)(FPDF_TEXTPAGE text_page, int nCharIndex);
extern DELPHI_PACKAGE unsigned __cdecl (*FPDF_GetFileIdentifier)(FPDF_DOCUMENT document, FPDF_FILEIDTYPE id_type, void * buffer, unsigned buflen);
extern DELPHI_PACKAGE unsigned __cdecl (*FPDF_GetMetaText)(FPDF_DOCUMENT doc, char * tag, void * buffer, unsigned buflen);
extern DELPHI_PACKAGE unsigned __cdecl (*FPDF_GetPageLabel)(FPDF_DOCUMENT document, int page_index, void * buffer, unsigned buflen);
static const System::Int8 FXFONT_ANSI_CHARSET = System::Int8(0x0);
static const System::Int8 FXFONT_DEFAULT_CHARSET = System::Int8(0x1);
static const System::Int8 FXFONT_SYMBOL_CHARSET = System::Int8(0x2);
static const System::Byte FXFONT_SHIFTJIS_CHARSET = System::Byte(0x80);
static const System::Byte FXFONT_HANGEUL_CHARSET = System::Byte(0x81);
static const System::Byte FXFONT_GB2312_CHARSET = System::Byte(0x86);
static const System::Byte FXFONT_CHINESEBIG5_CHARSET = System::Byte(0x88);
static const System::Byte FXFONT_ARABIC_CHARSET = System::Byte(0xb2);
static const System::Byte FXFONT_CYRILLIC_CHARSET = System::Byte(0xcc);
static const System::Byte FXFONT_EASTERNEUROPEAN_CHARSET = System::Byte(0xee);
static const System::Int8 FXFONT_FF_FIXEDPITCH = System::Int8(0x1);
static const System::Int8 FXFONT_FF_ROMAN = System::Int8(0x10);
static const System::Int8 FXFONT_FF_SCRIPT = System::Int8(0x40);
static const System::Word FXFONT_FW_NORMAL = System::Word(0x190);
static const System::Word FXFONT_FW_BOLD = System::Word(0x2bc);
extern DELPHI_PACKAGE PFPDF_CharsetFontMap __cdecl (*FPDF_GetDefaultTTFMap)(void);
extern DELPHI_PACKAGE void __cdecl (*FPDF_AddInstalledFont)(void * mapper, char * face, int charset);
extern DELPHI_PACKAGE void __cdecl (*FPDF_SetSystemFontInfo)(PFPDF_SYSFONTINFO pFontInfo);
extern DELPHI_PACKAGE FPDF_SYSFONTINFO __cdecl (*FPDF_GetDefaultSystemFontInfo)(void);
extern DELPHI_PACKAGE void __cdecl (*FPDF_FreeDefaultSystemFontInfo)(PFPDF_SYSFONTINFO pFontInfo);
static const System::Int8 FPDF_UNSP_DOC_XFAFORM = System::Int8(0x1);
static const System::Int8 FPDF_UNSP_DOC_PORTABLECOLLECTION = System::Int8(0x2);
static const System::Int8 FPDF_UNSP_DOC_ATTACHMENT = System::Int8(0x3);
static const System::Int8 FPDF_UNSP_DOC_SECURITY = System::Int8(0x4);
static const System::Int8 FPDF_UNSP_DOC_SHAREDREVIEW = System::Int8(0x5);
static const System::Int8 FPDF_UNSP_DOC_SHAREDFORM_ACROBAT = System::Int8(0x6);
static const System::Int8 FPDF_UNSP_DOC_SHAREDFORM_FILESYSTEM = System::Int8(0x7);
static const System::Int8 FPDF_UNSP_DOC_SHAREDFORM_EMAIL = System::Int8(0x8);
static const System::Int8 FPDF_UNSP_ANNOT_3DANNOT = System::Int8(0xb);
static const System::Int8 FPDF_UNSP_ANNOT_MOVIE = System::Int8(0xc);
static const System::Int8 FPDF_UNSP_ANNOT_SOUND = System::Int8(0xd);
static const System::Int8 FPDF_UNSP_ANNOT_SCREEN_MEDIA = System::Int8(0xe);
static const System::Int8 FPDF_UNSP_ANNOT_SCREEN_RICHMEDIA = System::Int8(0xf);
static const System::Int8 FPDF_UNSP_ANNOT_ATTACHMENT = System::Int8(0x10);
static const System::Int8 FPDF_UNSP_ANNOT_SIG = System::Int8(0x11);
extern DELPHI_PACKAGE int __cdecl (*FSDK_SetUnSpObjProcessHandler)(PUNSUPPORT_INFO unsp_info);
static const System::Int8 PAGEMODE_UNKNOWN = System::Int8(-1);
static const System::Int8 PAGEMODE_USENONE = System::Int8(0x0);
static const System::Int8 PAGEMODE_USEOUTLINES = System::Int8(0x1);
static const System::Int8 PAGEMODE_USETHUMBS = System::Int8(0x2);
static const System::Int8 PAGEMODE_FULLSCREEN = System::Int8(0x3);
static const System::Int8 PAGEMODE_USEOC = System::Int8(0x4);
static const System::Int8 PAGEMODE_USEATTACHMENTS = System::Int8(0x5);
extern DELPHI_PACKAGE int __cdecl (*FPDFDoc_GetPageMode)(FPDF_DOCUMENT document);
static const System::Int8 FORMTYPE_NONE = System::Int8(0x0);
static const System::Int8 FORMTYPE_ACRO_FORM = System::Int8(0x1);
static const System::Int8 FORMTYPE_XFA_FULL = System::Int8(0x2);
static const System::Int8 FORMTYPE_XFA_FOREGROUND = System::Int8(0x3);
static const System::Int8 FORMTYPE_COUNT = System::Int8(0x4);
static const System::Int8 JSPLATFORM_ALERT_BUTTON_OK = System::Int8(0x0);
static const System::Int8 JSPLATFORM_ALERT_BUTTON_OKCANCEL = System::Int8(0x1);
static const System::Int8 JSPLATFORM_ALERT_BUTTON_YESNO = System::Int8(0x2);
static const System::Int8 JSPLATFORM_ALERT_BUTTON_YESNOCANCEL = System::Int8(0x3);
static const System::Int8 JSPLATFORM_ALERT_BUTTON_DEFAULT = System::Int8(0x0);
static const System::Int8 JSPLATFORM_ALERT_ICON_ERROR = System::Int8(0x0);
static const System::Int8 JSPLATFORM_ALERT_ICON_WARNING = System::Int8(0x1);
static const System::Int8 JSPLATFORM_ALERT_ICON_QUESTION = System::Int8(0x2);
static const System::Int8 JSPLATFORM_ALERT_ICON_STATUS = System::Int8(0x3);
static const System::Int8 JSPLATFORM_ALERT_ICON_ASTERISK = System::Int8(0x4);
static const System::Int8 JSPLATFORM_ALERT_ICON_DEFAULT = System::Int8(0x0);
static const System::Int8 JSPLATFORM_ALERT_RETURN_OK = System::Int8(0x1);
static const System::Int8 JSPLATFORM_ALERT_RETURN_CANCEL = System::Int8(0x2);
static const System::Int8 JSPLATFORM_ALERT_RETURN_NO = System::Int8(0x3);
static const System::Int8 JSPLATFORM_ALERT_RETURN_YES = System::Int8(0x4);
static const System::Int8 JSPLATFORM_BEEP_ERROR = System::Int8(0x0);
static const System::Int8 JSPLATFORM_BEEP_WARNING = System::Int8(0x1);
static const System::Int8 JSPLATFORM_BEEP_QUESTION = System::Int8(0x2);
static const System::Int8 JSPLATFORM_BEEP_STATUS = System::Int8(0x3);
static const System::Int8 JSPLATFORM_BEEP_DEFAULT = System::Int8(0x4);
static const System::Int8 FXCT_ARROW = System::Int8(0x0);
static const System::Int8 FXCT_NESW = System::Int8(0x1);
static const System::Int8 FXCT_NWSE = System::Int8(0x2);
static const System::Int8 FXCT_VBEAM = System::Int8(0x3);
static const System::Int8 FXCT_HBEAM = System::Int8(0x4);
static const System::Int8 FXCT_HAND = System::Int8(0x5);
static const System::Int8 FXFA_PAGEVIEWEVENT_POSTADDED = System::Int8(0x1);
static const System::Int8 FXFA_PAGEVIEWEVENT_POSTREMOVED = System::Int8(0x3);
static const System::Int8 FXFA_MENU_COPY = System::Int8(0x1);
static const System::Int8 FXFA_MENU_CUT = System::Int8(0x2);
static const System::Int8 FXFA_MENU_SELECTALL = System::Int8(0x4);
static const System::Int8 FXFA_MENU_UNDO = System::Int8(0x8);
static const System::Int8 FXFA_MENU_REDO = System::Int8(0x10);
static const System::Int8 FXFA_MENU_PASTE = System::Int8(0x20);
static const System::Int8 FXFA_SAVEAS_XML = System::Int8(0x1);
static const System::Int8 FXFA_SAVEAS_XDP = System::Int8(0x2);
extern DELPHI_PACKAGE FPDF_FORMHANDLE __cdecl (*FPDFDOC_InitFormFillEnvironment)(FPDF_DOCUMENT document, PFPDF_FORMFILLINFO formInfo);
extern DELPHI_PACKAGE void __cdecl (*FPDFDOC_ExitFormFillEnvironment)(FPDF_FORMHANDLE hHandle);
extern DELPHI_PACKAGE void __cdecl (*FORM_OnAfterLoadPage)(FPDF_PAGE page, FPDF_FORMHANDLE hHandle);
extern DELPHI_PACKAGE void __cdecl (*FORM_OnBeforeClosePage)(FPDF_PAGE page, FPDF_FORMHANDLE hHandle);
extern DELPHI_PACKAGE void __cdecl (*FORM_DoDocumentJSAction)(FPDF_FORMHANDLE hHandle);
extern DELPHI_PACKAGE void __cdecl (*FORM_DoDocumentOpenAction)(FPDF_FORMHANDLE hHandle);
static const System::Int8 FPDFDOC_AACTION_WC = System::Int8(0x10);
static const System::Int8 FPDFDOC_AACTION_WS = System::Int8(0x11);
static const System::Int8 FPDFDOC_AACTION_DS = System::Int8(0x12);
static const System::Int8 FPDFDOC_AACTION_WP = System::Int8(0x13);
static const System::Int8 FPDFDOC_AACTION_DP = System::Int8(0x14);
extern DELPHI_PACKAGE void __cdecl (*FORM_DoDocumentAAction)(FPDF_FORMHANDLE hHandle, int aaType);
static const System::Int8 FPDFPAGE_AACTION_OPEN = System::Int8(0x0);
static const System::Int8 FPDFPAGE_AACTION_CLOSE = System::Int8(0x1);
extern DELPHI_PACKAGE void __cdecl (*FORM_DoPageAAction)(FPDF_PAGE page, FPDF_FORMHANDLE hHandle, int aaType);
extern DELPHI_PACKAGE int __cdecl (*FORM_OnMouseMove)(FPDF_FORMHANDLE hHandle, FPDF_PAGE page, int modifier, double page_x, double page_y);
extern DELPHI_PACKAGE int __cdecl (*FORM_OnMouseWheel)(FPDF_FORMHANDLE hHandle, FPDF_PAGE page, int modifier, const PFS_POINTF page_coord, int delta_x, int delta_y);
extern DELPHI_PACKAGE int __cdecl (*FORM_OnFocus)(FPDF_FORMHANDLE hHandle, FPDF_PAGE page, int modifier, double page_x, double page_y);
extern DELPHI_PACKAGE int __cdecl (*FORM_OnLButtonDown)(FPDF_FORMHANDLE hHandle, FPDF_PAGE page, int modifier, double page_x, double page_y);
extern DELPHI_PACKAGE int __cdecl (*FORM_OnRButtonDown)(FPDF_FORMHANDLE hHandle, FPDF_PAGE page, int modifier, double page_x, double page_y);
extern DELPHI_PACKAGE int __cdecl (*FORM_OnLButtonUp)(FPDF_FORMHANDLE hHandle, FPDF_PAGE page, int modifier, double page_x, double page_y);
extern DELPHI_PACKAGE int __cdecl (*FORM_OnRButtonUp)(FPDF_FORMHANDLE hHandle, FPDF_PAGE page, int modifier, double page_x, double page_y);
extern DELPHI_PACKAGE int __cdecl (*FORM_OnLButtonDoubleClick)(FPDF_FORMHANDLE hHandle, FPDF_PAGE page, int modifier, double page_x, double page_y);
extern DELPHI_PACKAGE int __cdecl (*FORM_OnKeyDown)(FPDF_FORMHANDLE hHandle, FPDF_PAGE page, int nKeyCode, int modifier);
extern DELPHI_PACKAGE int __cdecl (*FORM_OnKeyUp)(FPDF_FORMHANDLE hHandle, FPDF_PAGE page, int nKeyCode, int modifier);
extern DELPHI_PACKAGE int __cdecl (*FORM_OnChar)(FPDF_FORMHANDLE hHandle, FPDF_PAGE page, int nChar, int modifier);
extern DELPHI_PACKAGE unsigned __cdecl (*FORM_GetFocusedText)(FPDF_FORMHANDLE hHandle, FPDF_PAGE page, void * buffer, unsigned buflen);
extern DELPHI_PACKAGE unsigned __cdecl (*FORM_GetSelectedText)(FPDF_FORMHANDLE hHandle, FPDF_PAGE page, void * buffer, unsigned buflen);
extern DELPHI_PACKAGE void __cdecl (*FORM_ReplaceSelection)(FPDF_FORMHANDLE hHandle, FPDF_PAGE page, System::WideChar * wsText);
extern DELPHI_PACKAGE int __cdecl (*FORM_SelectAllText)(FPDF_FORMHANDLE hHandle, FPDF_PAGE page);
extern DELPHI_PACKAGE int __cdecl (*FORM_CanUndo)(FPDF_FORMHANDLE hHandle, FPDF_PAGE page);
extern DELPHI_PACKAGE int __cdecl (*FORM_CanRedo)(FPDF_FORMHANDLE hHandle, FPDF_PAGE page);
extern DELPHI_PACKAGE int __cdecl (*FORM_Undo)(FPDF_FORMHANDLE hHandle, FPDF_PAGE page);
extern DELPHI_PACKAGE int __cdecl (*FORM_Redo)(FPDF_FORMHANDLE hHandle, FPDF_PAGE page);
extern DELPHI_PACKAGE int __cdecl (*FORM_ForceToKillFocus)(FPDF_FORMHANDLE hHandle);
extern DELPHI_PACKAGE int __cdecl (*FORM_GetFocusedAnnot)(FPDF_FORMHANDLE handle, int &page_index, FPDF_ANNOTATION &annot);
extern DELPHI_PACKAGE int __cdecl (*FORM_SetFocusedAnnot)(FPDF_FORMHANDLE handle, FPDF_ANNOTATION annot);
static const System::Int8 FPDF_FORMFIELD_UNKNOWN = System::Int8(0x0);
static const System::Int8 FPDF_FORMFIELD_PUSHBUTTON = System::Int8(0x1);
static const System::Int8 FPDF_FORMFIELD_CHECKBOX = System::Int8(0x2);
static const System::Int8 FPDF_FORMFIELD_RADIOBUTTON = System::Int8(0x3);
static const System::Int8 FPDF_FORMFIELD_COMBOBOX = System::Int8(0x4);
static const System::Int8 FPDF_FORMFIELD_LISTBOX = System::Int8(0x5);
static const System::Int8 FPDF_FORMFIELD_TEXTFIELD = System::Int8(0x6);
static const System::Int8 FPDF_FORMFIELD_SIGNATURE = System::Int8(0x7);
static const System::Int8 FPDF_FORMFIELD_XFA = System::Int8(0x8);
static const System::Int8 FPDF_FORMFIELD_XFA_CHECKBOX = System::Int8(0x9);
static const System::Int8 FPDF_FORMFIELD_XFA_COMBOBOX = System::Int8(0xa);
static const System::Int8 FPDF_FORMFIELD_XFA_IMAGEFIELD = System::Int8(0xb);
static const System::Int8 FPDF_FORMFIELD_XFA_LISTBOX = System::Int8(0xc);
static const System::Int8 FPDF_FORMFIELD_XFA_PUSHBUTTON = System::Int8(0xd);
static const System::Int8 FPDF_FORMFIELD_XFA_SIGNATURE = System::Int8(0xe);
static const System::Int8 FPDF_FORMFIELD_XFA_TEXTFIELD = System::Int8(0xf);
static const System::Int8 FPDF_FORMFIELD_COUNT = System::Int8(0x10);
extern DELPHI_PACKAGE int __cdecl (*FPDFPage_HasFormFieldAtPoint)(FPDF_FORMHANDLE hHandle, FPDF_PAGE page, double page_x, double page_y);
extern DELPHI_PACKAGE int __cdecl (*FPDFPage_FormFieldZOrderAtPoint)(FPDF_FORMHANDLE hHandle, FPDF_PAGE page, double page_x, double page_y);
extern DELPHI_PACKAGE void __cdecl (*FPDF_SetFormFieldHighlightColor)(FPDF_FORMHANDLE hHandle, int fieldType, unsigned Color);
extern DELPHI_PACKAGE void __cdecl (*FPDF_SetFormFieldHighlightAlpha)(FPDF_FORMHANDLE hHandle, System::Byte alpha);
extern DELPHI_PACKAGE void __cdecl (*FPDF_RemoveFormFieldHighlight)(FPDF_FORMHANDLE hHandle);
extern DELPHI_PACKAGE void __cdecl (*FPDF_FFLDraw)(FPDF_FORMHANDLE hHandle, FPDF_BITMAP bitmap, FPDF_PAGE page, int start_x, int start_y, int size_x, int size_y, int rotate, int flags);
extern DELPHI_PACKAGE int __cdecl (*FPDF_GetFormType)(FPDF_DOCUMENT document);
extern DELPHI_PACKAGE int __cdecl (*FORM_SetIndexSelected)(FPDF_FORMHANDLE hHandle, FPDF_PAGE page, int index, int selected);
extern DELPHI_PACKAGE int __cdecl (*FORM_IsIndexSelected)(FPDF_FORMHANDLE hHandle, FPDF_PAGE page, int index);
extern DELPHI_PACKAGE int __cdecl (*FPDF_LoadXFA)(FPDF_DOCUMENT document);
extern DELPHI_PACKAGE int __cdecl (*FPDFCatalog_IsTagged)(FPDF_DOCUMENT document);
extern DELPHI_PACKAGE int __cdecl (*FPDFDoc_GetAttachmentCount)(FPDF_DOCUMENT document);
extern DELPHI_PACKAGE FPDF_ATTACHMENT __cdecl (*FPDFDoc_AddAttachment)(FPDF_DOCUMENT document, System::WideChar * name);
extern DELPHI_PACKAGE FPDF_ATTACHMENT __cdecl (*FPDFDoc_GetAttachment)(FPDF_DOCUMENT document, int index);
extern DELPHI_PACKAGE int __cdecl (*FPDFDoc_DeleteAttachment)(FPDF_DOCUMENT document, int index);
extern DELPHI_PACKAGE unsigned __cdecl (*FPDFAttachment_GetName)(FPDF_ATTACHMENT attachment, System::WideChar * buffer, unsigned buflen);
extern DELPHI_PACKAGE int __cdecl (*FPDFAttachment_HasKey)(FPDF_ATTACHMENT attachment, char * key);
extern DELPHI_PACKAGE int __cdecl (*FPDFAttachment_GetValueType)(FPDF_ATTACHMENT attachment, char * key);
extern DELPHI_PACKAGE int __cdecl (*FPDFAttachment_SetStringValue)(FPDF_ATTACHMENT attachment, char * key, System::WideChar * value);
extern DELPHI_PACKAGE unsigned __cdecl (*FPDFAttachment_GetStringValue)(FPDF_ATTACHMENT attachment, char * key, System::WideChar * buffer, unsigned buflen);
extern DELPHI_PACKAGE int __cdecl (*FPDFAttachment_SetFile)(FPDF_ATTACHMENT attachment, FPDF_DOCUMENT document, void * contents, unsigned len);
extern DELPHI_PACKAGE int __cdecl (*FPDFAttachment_GetFile)(FPDF_ATTACHMENT attachment, void * buffer, unsigned buflen, unsigned &out_buflen);
static const System::Int8 FWL_EVENTFLAG_ShiftKey = System::Int8(0x1);
static const System::Int8 FWL_EVENTFLAG_ControlKey = System::Int8(0x2);
static const System::Int8 FWL_EVENTFLAG_AltKey = System::Int8(0x4);
static const System::Int8 FWL_EVENTFLAG_MetaKey = System::Int8(0x8);
static const System::Int8 FWL_EVENTFLAG_KeyPad = System::Int8(0x10);
static const System::Int8 FWL_EVENTFLAG_AutoRepeat = System::Int8(0x20);
static const System::Int8 FWL_EVENTFLAG_LeftButtonDown = System::Int8(0x40);
static const System::Byte FWL_EVENTFLAG_MiddleButtonDown = System::Byte(0x80);
static const System::Word FWL_EVENTFLAG_RightButtonDown = System::Word(0x100);
extern DELPHI_PACKAGE void __cdecl (*FPDF_InitEmbeddedLibraries)(const char * resourcePath);
extern DELPHI_PACKAGE FPDF_BITMAP __cdecl (*FPDFPage_GetThumbnailAsBitmap)(FPDF_PAGE page);
#define pdfium_dll L"iepdf32.dll"
extern DELPHI_PACKAGE unsigned __fastcall FPDF_ARGB(System::Byte a, System::Byte r, System::Byte g, System::Byte b);
extern DELPHI_PACKAGE System::Byte __fastcall FPDF_GetBValue(unsigned argb);
extern DELPHI_PACKAGE System::Byte __fastcall FPDF_GetGValue(unsigned argb);
extern DELPHI_PACKAGE System::Byte __fastcall FPDF_GetRValue(unsigned argb);
extern DELPHI_PACKAGE System::Byte __fastcall FPDF_GetAValue(unsigned argb);
extern DELPHI_PACKAGE bool __fastcall IS_XFA_FORMFIELD(int type_);
extern DELPHI_PACKAGE bool __fastcall PDF_USE_XFA(void);
extern DELPHI_PACKAGE void __fastcall InitPDFium(const System::UnicodeString DllPath = System::UnicodeString(), const System::UnicodeString ResPath = System::UnicodeString());
extern DELPHI_PACKAGE void __fastcall InitPDFiumEx(const System::UnicodeString DllFileName, const System::UnicodeString ResPath);
}	/* namespace Iexpdfiumlib */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_IEXPDFIUMLIB)
using namespace Iexpdfiumlib;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// IexpdfiumlibHPP
