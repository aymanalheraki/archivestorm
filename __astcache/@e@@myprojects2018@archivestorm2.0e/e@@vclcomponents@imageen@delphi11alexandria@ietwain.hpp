// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'ietwain.pas' rev: 35.00 (Windows)

#ifndef IetwainHPP
#define IetwainHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <System.Classes.hpp>
#include <hyieutils.hpp>

//-- user supplied -----------------------------------------------------------

namespace Ietwain
{
//-- forward type declarations -----------------------------------------------
struct TW_RANGE;
struct TW_ARRAY;
struct TW_ENUMERATION;
struct TW_FIX32;
struct TW_FRAME;
struct TW_IMAGELAYOUT;
struct TW_EVENT;
struct TW_SETUPMEMXFER;
struct TW_SETUPFILEXFER;
struct TW_MEMORY;
struct TW_IMAGEMEMXFER;
struct TW_IMAGEINFO;
struct TW_ONEVALUE;
struct TW_CAPABILITY;
struct TW_STATUS;
struct TW_PENDINGXFERS;
struct TW_USERINTERFACE;
struct TW_VERSION;
struct TW_IDENTITY;
struct TW_CUSTOMDSDATA;
struct TIEDRect;
struct TIETWSourceCaps;
struct TIETwainShared;
class DELPHICLASS TIETwainParams;
//-- type declarations -------------------------------------------------------
typedef unsigned TW_UINT32;

typedef System::Word TW_UINT16;

typedef void * TW_MEMREF;

typedef int TW_INT32;

typedef short TW_INT16;

typedef System::StaticArray<char, 34> TW_STR32;

typedef System::StaticArray<char, 256> TW_STR255;

typedef System::WordBool TW_BOOL;

typedef NativeUInt TW_HANDLE;

typedef System::Byte TW_UINT8;

typedef TW_ONEVALUE *pTW_ONEVALUE;

typedef System::WordBool *pTW_BOOL;

typedef TW_IMAGEMEMXFER *pTW_IMAGEMEMXFER;

typedef TW_FIX32 *pTW_FIX32;

typedef TW_ENUMERATION *pTW_ENUMERATION;

typedef TW_ARRAY *pTW_ARRAY;

typedef TW_RANGE *pTW_RANGE;

typedef System::Word *pTW_UINT16;

typedef short *pTW_INT16;

typedef TW_IDENTITY *pTW_IDENTITY;

typedef int *pTW_INT32;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TW_RANGE
{
public:
	System::Word ItemType;
	unsigned MinValue;
	unsigned MaxValue;
	unsigned StepSize;
	unsigned DefaultValue;
	unsigned CurrentValue;
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD TW_ARRAY
{
public:
	System::Word ItemType;
	unsigned NumItems;
	System::StaticArray<System::Byte, 2> ItemList;
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD TW_ENUMERATION
{
public:
	System::Word ItemType;
	unsigned NumItems;
	unsigned CurrentIndex;
	unsigned DefaultIndex;
	System::StaticArray<System::Byte, 2> ItemList;
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD TW_FIX32
{
public:
	short Whole;
	System::Word Frac;
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD TW_FRAME
{
public:
	TW_FIX32 Left;
	TW_FIX32 Top;
	TW_FIX32 Right;
	TW_FIX32 Bottom;
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD TW_IMAGELAYOUT
{
public:
	TW_FRAME Frame;
	unsigned DocumentNumber;
	unsigned PageNumber;
	unsigned FrameNumber;
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD TW_EVENT
{
public:
	void *pEvent;
	System::Word TWMessage;
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD TW_SETUPMEMXFER
{
public:
	unsigned MinBufSize;
	unsigned MaxBufSize;
	unsigned Preferred;
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD TW_SETUPFILEXFER
{
public:
	TW_STR255 FileName;
	System::Word Format;
	short VRefNum;
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD TW_MEMORY
{
public:
	unsigned Flags;
	unsigned Length;
	void *TheMem;
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD TW_IMAGEMEMXFER
{
public:
	System::Word Compression;
	unsigned BytesPerRow;
	unsigned Columns;
	unsigned Rows;
	unsigned XOffset;
	unsigned YOffset;
	unsigned BytesWritten;
	TW_MEMORY Memory;
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD TW_IMAGEINFO
{
public:
	TW_FIX32 XResolution;
	TW_FIX32 YResolution;
	int ImageWidth;
	int ImageLength;
	short SamplesPerPixel;
	System::StaticArray<short, 8> BitsPerSample;
	short BitsPerPixel;
	System::WordBool Planar;
	short PixelType;
	System::Word Compression;
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD TW_ONEVALUE
{
public:
	System::Word ItemType;
	unsigned Item;
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD TW_CAPABILITY
{
public:
	System::Word Cap;
	System::Word ConType;
	NativeUInt hContainer;
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD TW_STATUS
{
public:
	System::Word ConditionCode;
	System::Word Reserved;
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD TW_PENDINGXFERS
{
public:
	System::Word Count;
	
public:
	union
	{
		struct 
		{
			unsigned Reserved;
		};
		struct 
		{
			unsigned EOJ;
		};
		
	};
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD TW_USERINTERFACE
{
public:
	System::WordBool ShowUI;
	System::WordBool ModalUI;
	NativeUInt hParent;
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD TW_VERSION
{
public:
	System::Word MajorNum;
	System::Word MinorNum;
	System::Word Language;
	System::Word Country;
	TW_STR32 Info;
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD TW_IDENTITY
{
public:
	unsigned Id;
	TW_VERSION Version;
	System::Word ProtocolMajor;
	System::Word ProtocolMinor;
	unsigned SupportedGroups;
	TW_STR32 Manufacturer;
	TW_STR32 ProductFamily;
	TW_STR32 ProductName;
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD TW_CUSTOMDSDATA
{
public:
	unsigned InfoLength;
	NativeUInt hData;
};
#pragma pack(pop)


typedef System::Word __stdcall (*DSMENTRYPROC)(pTW_IDENTITY pOrigin, pTW_IDENTITY pDest, unsigned DG, System::Word DAT, System::Word MSG, void * pData);

typedef DSMENTRYPROC TDSMEntryProc;

struct DECLSPEC_DRECORD TIEDRect
{
public:
	double Left;
	double Top;
	double Right;
	double Bottom;
};


enum DECLSPEC_DENUM TIETWFilter : unsigned char { ietwUndefined, ietwRed, ietwGreen, ietwBlue, ietwNone, ietwWhite, ietwCyan, ietwMagenta, ietwYellow, ietwBlack };

struct DECLSPEC_DRECORD TIETWSourceCaps
{
public:
	Hyieutils::TIEDoubleList* fXResolution;
	Hyieutils::TIEDoubleList* fYResolution;
	Hyieutils::TIEDoubleList* fXScaling;
	Hyieutils::TIEDoubleList* fYScaling;
	Hyieutils::TIEIntegerList* fPixelType;
	Hyieutils::TIEIntegerList* fBitDepth;
	double fGamma;
	double fPhysicalHeight;
	double fPhysicalWidth;
	bool fFeederEnabled;
	Hyieutils::TIEIntegerList* fOrientation;
	bool fIndicators;
	TIEDRect fAcquireFrame;
	bool fBufferedTransfer;
	bool fUseMemoryHandle;
	bool fFileTransfer;
	bool fDuplexEnabled;
	bool fAcquireFrameEnabled;
	bool fFeederLoaded;
	bool fDuplexSupported;
	bool fPaperDetectable;
	Hyieutils::TIEDoubleList* fContrast;
	Hyieutils::TIEDoubleList* fBrightness;
	Hyieutils::TIEDoubleList* fThreshold;
	Hyieutils::TIEDoubleList* fRotation;
	bool fUndefinedImageSize;
	Hyieutils::TIEIntegerList* fStandardSize;
	bool fAutoFeed;
	bool fAutoDeskew;
	bool fAutoBorderDetection;
	bool fAutoBright;
	bool fAutoRotate;
	int fAutoDiscardBlankPages;
	TIETWFilter fFilter;
	double fHighlight;
	double fShadow;
	int fAcceptedImages;
	bool fAutoScan;
	bool fDeviceOnline;
};


struct DECLSPEC_DRECORD TIETwainShared
{
public:
	NativeUInt hDSMLib;
	DSMENTRYPROC DSM_Entry;
	HWND hproxy;
};


typedef TIETwainShared *PIETwainShared;

class PASCALIMPLEMENTATION TIETwainParams : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Classes::TComponent* fOwner;
	bool fVisibleDialog;
	bool fShowSettingsOnly;
	System::Classes::TList* fSourceListData;
	int fSelectedSource;
	bool fSourceListDataValid;
	bool fCapabilitiesValid;
	TIETWSourceCaps fCapabilities;
	System::AnsiString fAppVersionInfo;
	System::AnsiString fAppManufacturer;
	System::AnsiString fAppProductFamily;
	System::AnsiString fAppProductName;
	bool fCompatibilityMode;
	System::Word fLanguage;
	System::Word fCountry;
	System::Classes::TMemoryStream* fSourceSettings;
	void __fastcall FillCapabilities();
	System::AnsiString __fastcall GetSourceName(int idx);
	int __fastcall GetSourceCount();
	Hyieutils::TIEDoubleList* __fastcall GetXResolution();
	Hyieutils::TIEDoubleList* __fastcall GetYResolution();
	Hyieutils::TIEDoubleList* __fastcall GetXScaling();
	Hyieutils::TIEDoubleList* __fastcall GetYScaling();
	Hyieutils::TIEDoubleList* __fastcall GetContrast();
	Hyieutils::TIEDoubleList* __fastcall GetBrightness();
	Hyieutils::TIEDoubleList* __fastcall GetThreshold();
	Hyieutils::TIEDoubleList* __fastcall GetRotation();
	Hyieutils::TIEIntegerList* __fastcall GetPixelType();
	Hyieutils::TIEIntegerList* __fastcall GetBitDepth();
	double __fastcall GetGamma();
	double __fastcall GetPhysicalHeight();
	double __fastcall GetPhysicalWidth();
	bool __fastcall GetFeederEnabled();
	bool __fastcall GetAutoFeed();
	bool __fastcall GetAutoDeskew();
	bool __fastcall GetAutoBorderDetection();
	bool __fastcall GetAutoBright();
	bool __fastcall GetAutoRotate();
	int __fastcall GetAutoDiscardBlankPages();
	TIETWFilter __fastcall GetFilter();
	double __fastcall GetHighlight();
	double __fastcall GetShadow();
	int __fastcall GetAcceptedImages();
	bool __fastcall GetAutoScan();
	bool __fastcall GetDeviceOnline();
	bool __fastcall GetUndefinedImageSize();
	Hyieutils::TIEIntegerList* __fastcall GetOrientation();
	Hyieutils::TIEIntegerList* __fastcall GetStandardSize();
	void __fastcall SetSelectedSource(int v);
	bool __fastcall GetIndicators();
	void __fastcall SetFeederEnabled(bool v);
	void __fastcall SetAutoFeed(bool v);
	void __fastcall SetAutoDeskew(bool v);
	void __fastcall SetAutoBorderDetection(bool v);
	void __fastcall SetAutoBright(bool v);
	void __fastcall SetAutoRotate(bool v);
	void __fastcall SetAutoDiscardBlankPages(int v);
	void __fastcall SetFilter(TIETWFilter v);
	void __fastcall SetHighlight(double v);
	void __fastcall SetShadow(double v);
	void __fastcall SetAcceptedImages(int v);
	void __fastcall SetAutoScan(bool v);
	void __fastcall SetUndefinedImageSize(bool v);
	void __fastcall SetIndicators(bool v);
	double __fastcall GetAcquireFrame(int idx);
	void __fastcall SetAcquireFrame(int idx, double v);
	bool __fastcall GetBufferedTransfer();
	void __fastcall SetBufferedTransfer(bool v);
	bool __fastcall GetUseMemoryHandle();
	void __fastcall SetUseMemoryHandle(bool v);
	bool __fastcall GetFileTransfer();
	void __fastcall SetFileTransfer(bool v);
	void __fastcall SetAppVersionInfo(const System::AnsiString v);
	void __fastcall SetAppManufacturer(const System::AnsiString v);
	void __fastcall SetAppProductFamily(const System::AnsiString v);
	void __fastcall SetAppProductName(const System::AnsiString v);
	void __fastcall SetDuplexEnabled(bool v);
	bool __fastcall GetDuplexEnabled();
	void __fastcall SetAcquireFrameEnabled(bool v);
	bool __fastcall GetAcquireFrameEnabled();
	bool __fastcall GetFeederLoaded();
	bool __fastcall GetDuplexSupported();
	bool __fastcall GetPaperDetectable();
	void __fastcall SetLogFile(const System::UnicodeString v);
	System::UnicodeString __fastcall GetLogFile();
	
public:
	TIETwainShared TwainShared;
	int LastError;
	System::AnsiString LastErrorStr;
	__property bool VisibleDialog = {read=fVisibleDialog, write=fVisibleDialog, nodefault};
	__property bool ShowSettingsOnly = {read=fShowSettingsOnly, write=fShowSettingsOnly, nodefault};
	__property System::Classes::TMemoryStream* SourceSettings = {read=fSourceSettings};
	__property bool SourceListValid = {read=fSourceListDataValid, nodefault};
	__property System::AnsiString SourceName[int idx] = {read=GetSourceName};
	__property int SourceCount = {read=GetSourceCount, nodefault};
	__property int SelectedSource = {read=fSelectedSource, write=SetSelectedSource, nodefault};
	__property System::UnicodeString LogFile = {read=GetLogFile, write=SetLogFile};
	__property bool CompatibilityMode = {read=fCompatibilityMode, write=fCompatibilityMode, nodefault};
	__property bool CapabilitiesValid = {read=fCapabilitiesValid, nodefault};
	__property System::Word Language = {read=fLanguage, write=fLanguage, nodefault};
	__property System::Word Country = {read=fCountry, write=fCountry, nodefault};
	__property Hyieutils::TIEDoubleList* XResolution = {read=GetXResolution};
	__property Hyieutils::TIEDoubleList* YResolution = {read=GetYResolution};
	__property Hyieutils::TIEDoubleList* XScaling = {read=GetXScaling};
	__property Hyieutils::TIEDoubleList* YScaling = {read=GetYScaling};
	__property Hyieutils::TIEIntegerList* PixelType = {read=GetPixelType};
	__property Hyieutils::TIEIntegerList* BitDepth = {read=GetBitDepth};
	__property double Gamma = {read=GetGamma};
	__property double PhysicalHeight = {read=GetPhysicalHeight};
	__property double PhysicalWidth = {read=GetPhysicalWidth};
	__property bool FeederEnabled = {read=GetFeederEnabled, write=SetFeederEnabled, nodefault};
	__property bool AutoFeed = {read=GetAutoFeed, write=SetAutoFeed, nodefault};
	__property bool AutoDeskew = {read=GetAutoDeskew, write=SetAutoDeskew, nodefault};
	__property bool AutoBorderDetection = {read=GetAutoBorderDetection, write=SetAutoBorderDetection, nodefault};
	__property bool AutoBright = {read=GetAutoBright, write=SetAutoBright, nodefault};
	__property bool AutoRotate = {read=GetAutoRotate, write=SetAutoRotate, nodefault};
	__property int AutoDiscardBlankPages = {read=GetAutoDiscardBlankPages, write=SetAutoDiscardBlankPages, nodefault};
	__property TIETWFilter Filter = {read=GetFilter, write=SetFilter, nodefault};
	__property double Highlight = {read=GetHighlight, write=SetHighlight};
	__property double Shadow = {read=GetShadow, write=SetShadow};
	__property int AcceptedImages = {read=GetAcceptedImages, write=SetAcceptedImages, nodefault};
	__property bool AutoScan = {read=GetAutoScan, write=SetAutoScan, nodefault};
	__property bool DeviceOnline = {read=GetDeviceOnline, nodefault};
	__property bool FeederLoaded = {read=GetFeederLoaded, nodefault};
	__property bool PaperDetectable = {read=GetPaperDetectable, nodefault};
	__property Hyieutils::TIEIntegerList* Orientation = {read=GetOrientation};
	__property bool ProgressIndicators = {read=GetIndicators, write=SetIndicators, nodefault};
	__property double AcquireFrameLeft = {read=GetAcquireFrame, write=SetAcquireFrame, index=0};
	__property double AcquireFrameTop = {read=GetAcquireFrame, write=SetAcquireFrame, index=1};
	__property double AcquireFrameRight = {read=GetAcquireFrame, write=SetAcquireFrame, index=2};
	__property double AcquireFrameBottom = {read=GetAcquireFrame, write=SetAcquireFrame, index=3};
	__property bool BufferedTransfer = {read=GetBufferedTransfer, write=SetBufferedTransfer, nodefault};
	__property bool UseMemoryHandle = {read=GetUseMemoryHandle, write=SetUseMemoryHandle, nodefault};
	__property bool FileTransfer = {read=GetFileTransfer, write=SetFileTransfer, nodefault};
	__property bool DuplexEnabled = {read=GetDuplexEnabled, write=SetDuplexEnabled, nodefault};
	__property bool DuplexSupported = {read=GetDuplexSupported, nodefault};
	__property bool AcquireFrameEnabled = {read=GetAcquireFrameEnabled, write=SetAcquireFrameEnabled, nodefault};
	__property Hyieutils::TIEDoubleList* Contrast = {read=GetContrast};
	__property Hyieutils::TIEDoubleList* Brightness = {read=GetBrightness};
	__property Hyieutils::TIEDoubleList* Threshold = {read=GetThreshold};
	__property Hyieutils::TIEDoubleList* Rotation = {read=GetRotation};
	__property bool UndefinedImageSize = {read=GetUndefinedImageSize, write=SetUndefinedImageSize, nodefault};
	__property Hyieutils::TIEIntegerList* StandardSize = {read=GetStandardSize};
	__property System::AnsiString AppVersionInfo = {read=fAppVersionInfo, write=SetAppVersionInfo};
	__property System::AnsiString AppManufacturer = {read=fAppManufacturer, write=SetAppManufacturer};
	__property System::AnsiString AppProductFamily = {read=fAppProductFamily, write=SetAppProductFamily};
	__property System::AnsiString AppProductName = {read=fAppProductName, write=SetAppProductName};
	__fastcall TIETwainParams(System::Classes::TComponent* Owner);
	__fastcall virtual ~TIETwainParams();
	void __fastcall SetDefaultParams();
	void __fastcall Assign(TIETwainParams* Source);
	bool __fastcall SelectSourceByName(const System::AnsiString sn);
	int __fastcall SourceNameToIndex(const System::UnicodeString sName);
	int __fastcall GetDefaultSource();
	void __fastcall Update();
	void __fastcall FreeResources();
	bool __fastcall GetFromScanner();
	bool __fastcall IsCapabilitySupported(System::Word cap);
	void __fastcall FillSourceList();
};


//-- var, const, procedure ---------------------------------------------------
static const System::Int8 TWON_PROTOCOLMAJOR = System::Int8(0x1);
static const System::Int8 TWON_PROTOCOLMINOR = System::Int8(0x9);
static const System::Int8 DG_IMAGE = System::Int8(0x2);
static const System::Int8 DG_CONTROL = System::Int8(0x1);
static const System::Int8 TWCC_SUCCESS = System::Int8(0x0);
static const System::Int8 TWCC_BUMMER = System::Int8(0x1);
static const System::Int8 TWCC_LOWMEMORY = System::Int8(0x2);
static const System::Int8 TWCC_NODS = System::Int8(0x3);
static const System::Int8 TWCC_MAXCONNECTIONS = System::Int8(0x4);
static const System::Int8 TWCC_OPERATIONERROR = System::Int8(0x5);
static const System::Int8 TWCC_BADCAP = System::Int8(0x6);
static const System::Int8 TWCC_BADPROTOCOL = System::Int8(0x9);
static const System::Int8 TWCC_BADVALUE = System::Int8(0xa);
static const System::Int8 TWCC_SEQERROR = System::Int8(0xb);
static const System::Int8 TWCC_BADDEST = System::Int8(0xc);
static const System::Int8 TWCC_CAPUNSUPPORTED = System::Int8(0xd);
static const System::Int8 TWCC_CAPBADOPERATION = System::Int8(0xe);
static const System::Int8 TWCC_CAPSEQERROR = System::Int8(0xf);
static const System::Int8 TWCC_DENIED = System::Int8(0x10);
static const System::Int8 TWCC_FILEEXISTS = System::Int8(0x11);
static const System::Int8 TWCC_FILENOTFOUND = System::Int8(0x12);
static const System::Int8 TWCC_NOTEMPTY = System::Int8(0x13);
static const System::Int8 TWCC_PAPERJAM = System::Int8(0x14);
static const System::Int8 TWCC_PAPERDOUBLEFEED = System::Int8(0x15);
static const System::Int8 TWCC_FILEWRITEERROR = System::Int8(0x16);
static const System::Int8 TWCC_CHECKDEVICEONLINE = System::Int8(0x17);
static const System::Int8 TWCC_NOMEDIA = System::Int8(0x1d);
static const System::Int8 TWRC_SUCCESS = System::Int8(0x0);
static const System::Int8 TWRC_FAILURE = System::Int8(0x1);
static const System::Int8 DAT_CUSTOMDSDATA = System::Int8(0xc);
static const System::Int8 DAT_PARENT = System::Int8(0x4);
static const System::Word MSG_OPENDSM = System::Word(0x301);
static const System::Word MSG_CLOSEDSM = System::Word(0x302);
static const System::Int8 DAT_USERINTERFACE = System::Int8(0x9);
static const System::Word MSG_DISABLEDS = System::Word(0x501);
static const System::Int8 DAT_IDENTITY = System::Int8(0x3);
static const System::Word MSG_CLOSEDS = System::Word(0x402);
static const System::Word MSG_USERSELECT = System::Word(0x403);
static const System::Int8 DAT_STATUS = System::Int8(0x8);
static const System::Int8 MSG_GET = System::Int8(0x1);
static const System::Int8 MSG_GETFIRST = System::Int8(0x4);
static const System::Int8 TWRC_ENDOFLIST = System::Int8(0x7);
static const System::Int8 MSG_GETNEXT = System::Int8(0x5);
static const System::Word MSG_OPENDS = System::Word(0x401);
static const System::Word MSG_ENABLEDS = System::Word(0x502);
static const System::Word MSG_ENABLEDSUIONLY = System::Word(0x503);
static const System::Word TWON_DONTCARE16 = System::Word(0xffff);
static const System::Int8 DAT_CAPABILITY = System::Int8(0x1);
static const System::Int8 TWON_ONEVALUE = System::Int8(0x5);
static const System::Int8 TWTY_STR255 = System::Int8(0xc);
static const System::Int8 MSG_SET = System::Int8(0x6);
static const System::Int8 DAT_PENDINGXFERS = System::Int8(0x5);
static const System::Word MSG_ENDXFER = System::Word(0x701);
static const System::Int8 MSG_RESET = System::Int8(0x7);
static const System::Int8 TWTY_BOOL = System::Int8(0x6);
static const System::Word DAT_IMAGEINFO = System::Word(0x101);
static const System::Int8 DAT_SETUPMEMXFER = System::Int8(0x6);
static const unsigned TWON_DONTCARE32 = unsigned(0xffffffff);
static const System::Int8 TWMF_APPOWNS = System::Int8(0x1);
static const System::Int8 TWMF_HANDLE = System::Int8(0x10);
static const System::Word DAT_IMAGEMEMXFER = System::Word(0x103);
static const System::Int8 TWRC_XFERDONE = System::Int8(0x6);
static const System::Int8 TWRC_CANCEL = System::Int8(0x3);
static const System::Word DAT_IMAGENATIVEXFER = System::Word(0x104);
static const System::Int8 DAT_SETUPFILEXFER = System::Int8(0x7);
static const System::Int8 TWFF_BMP = System::Int8(0x2);
static const System::Word DAT_IMAGEFILEXFER = System::Word(0x105);
static const System::Int8 MSG_NULL = System::Int8(0x0);
static const System::Int8 DAT_EVENT = System::Int8(0x2);
static const System::Word MSG_PROCESSEVENT = System::Word(0x601);
static const System::Int8 TWRC_DSEVENT = System::Int8(0x4);
static const System::Int8 TWRC_NOTDSEVENT = System::Int8(0x5);
static const System::Word MSG_XFERREADY = System::Word(0x101);
static const System::Word MSG_CLOSEDSREQ = System::Word(0x102);
static const System::Word MSG_CLOSEDSOK = System::Word(0x103);
static const System::Word DAT_IMAGELAYOUT = System::Word(0x102);
static const System::Int8 TWON_ENUMERATION = System::Int8(0x4);
static const System::Int8 TWON_ARRAY = System::Int8(0x3);
static const System::Int8 TWON_RANGE = System::Int8(0x6);
static const System::Int8 TWTY_INT16 = System::Int8(0x1);
static const System::Int8 TWTY_UINT16 = System::Int8(0x4);
static const System::Int8 TWTY_INT32 = System::Int8(0x2);
static const System::Int8 TWTY_FIX32 = System::Int8(0x7);
static const System::Int8 TWPF_CHOCOLATE = System::Int8(0x0);
static const System::Int8 TWPF_VANILLA = System::Int8(0x1);
static const System::Int8 TWPC_CHUNKY = System::Int8(0x0);
static const System::Int8 TWSX_MEMORY = System::Int8(0x2);
static const System::Int8 TWOR_ROT0 = System::Int8(0x0);
static const System::Int8 TWOR_PORTRAIT = System::Int8(0x0);
static const System::Int8 MSG_GETDEFAULT = System::Int8(0x3);
static const System::Int8 TWMF_POINTER = System::Int8(0x8);
static const System::Int8 TWCP_NONE = System::Int8(0x0);
static const System::Word ACAP_AUDIOFILEFORMAT = System::Word(0x1201);
static const System::Word ACAP_XFERMECH = System::Word(0x1202);
static const System::Word CAP_ALARMS = System::Word(0x1018);
static const System::Word CAP_ALARMVOLUME = System::Word(0x1019);
static const System::Word CAP_AUTHOR = System::Word(0x1000);
static const System::Word CAP_AUTOFEED = System::Word(0x1007);
static const System::Word CAP_AUTOMATICCAPTURE = System::Word(0x101a);
static const System::Word CAP_AUTOSCAN = System::Word(0x1010);
static const System::Word CAP_BATTERYMINUTES = System::Word(0x1032);
static const System::Word CAP_BATTERYPERCENTAGE = System::Word(0x1033);
static const System::Word CAP_CAMERAENABLED = System::Word(0x1036);
static const System::Word CAP_CAMERAORDER = System::Word(0x1037);
static const System::Word CAP_CAMERAPREVIEWUI = System::Word(0x1021);
static const System::Word CAP_CAMERASIDE = System::Word(0x1034);
static const System::Word CAP_CAPTION = System::Word(0x1001);
static const System::Word CAP_CLEARBUFFERS = System::Word(0x101d);
static const System::Word CAP_CLEARPAGE = System::Word(0x1008);
static const System::Word CAP_CUSTOMDSDATA = System::Word(0x1015);
static const System::Word CAP_DEVICEEVENT = System::Word(0x1022);
static const System::Word CAP_DEVICEONLINE = System::Word(0x100f);
static const System::Word CAP_DEVICETIMEDATE = System::Word(0x101f);
static const System::Word CAP_DUPLEX = System::Word(0x1012);
static const System::Word CAP_DUPLEXENABLED = System::Word(0x1013);
static const System::Word CAP_ENABLEDSUIONLY = System::Word(0x1014);
static const System::Word CAP_ENDORSER = System::Word(0x1016);
static const System::Word CAP_EXTENDEDCAPS = System::Word(0x1006);
static const System::Word CAP_FEEDERALIGNMENT = System::Word(0x102d);
static const System::Word CAP_FEEDERENABLED = System::Word(0x1002);
static const System::Word CAP_FEEDERLOADED = System::Word(0x1003);
static const System::Word CAP_FEEDERORDER = System::Word(0x102e);
static const System::Word CAP_FEEDERPOCKET = System::Word(0x103a);
static const System::Word CAP_FEEDERPREP = System::Word(0x1039);
static const System::Word CAP_FEEDPAGE = System::Word(0x1009);
static const System::Word CAP_FILESYSTEM = System::Word(0x1025);
static const System::Word CAP_INDICATORS = System::Word(0x100b);
static const System::Word CAP_JOBCONTROL = System::Word(0x1017);
static const System::Word CAP_LANGUAGE = System::Word(0x102c);
static const System::Word CAP_MAXBATCHBUFFERS = System::Word(0x101e);
static const System::Word CAP_MICRENABLED = System::Word(0x1038);
static const System::Word CAP_PAGEMULTIPLEACQUIRE = System::Word(0x1023);
static const System::Word CAP_PAPERBINDING = System::Word(0x102f);
static const System::Word CAP_PAPERDETECTABLE = System::Word(0x100d);
static const System::Word CAP_PASSTHRU = System::Word(0x1031);
static const System::Word CAP_POWERSUPPLY = System::Word(0x1020);
static const System::Word CAP_PRINTER = System::Word(0x1026);
static const System::Word CAP_PRINTERENABLED = System::Word(0x1027);
static const System::Word CAP_PRINTERINDEX = System::Word(0x1028);
static const System::Word CAP_PRINTERMODE = System::Word(0x1029);
static const System::Word CAP_PRINTERSTRING = System::Word(0x102a);
static const System::Word CAP_PRINTERSUFFIX = System::Word(0x102b);
static const System::Word CAP_REACQUIREALLOWED = System::Word(0x1030);
static const System::Word CAP_REWINDPAGE = System::Word(0x100a);
static const System::Word CAP_SEGMENTED = System::Word(0x1035);
static const System::Word CAP_SERIALNUMBER = System::Word(0x1024);
static const System::Word CAP_SUPPORTEDCAPS = System::Word(0x1005);
static const System::Word CAP_SUPPORTEDCAPSEXT = System::Word(0x100c);
static const System::Word CAP_THUMBNAILSENABLED = System::Word(0x1011);
static const System::Word CAP_TIMEBEFOREFIRSTCAPTURE = System::Word(0x101b);
static const System::Word CAP_TIMEBETWEENCAPTURES = System::Word(0x101c);
static const System::Word CAP_TIMEDATE = System::Word(0x1004);
static const System::Word CAP_UICONTROLLABLE = System::Word(0x100e);
static const System::Int8 CAP_XFERCOUNT = System::Int8(0x1);
static const System::Word ICAP_AUTOBRIGHT = System::Word(0x1100);
static const System::Word ICAP_AUTOMATICBORDERDETECTION = System::Word(0x1150);
static const System::Word ICAP_AUTOMATICDESKEW = System::Word(0x1151);
static const System::Word ICAP_AUTOMATICROTATE = System::Word(0x1152);
static const System::Word ICAP_AUTOSIZE = System::Word(0x1156);
static const System::Word ICAP_BARCODEDETECTIONENABLED = System::Word(0x1137);
static const System::Word ICAP_BARCODEMAXRETRIES = System::Word(0x113c);
static const System::Word ICAP_BARCODEMAXSEARCHPRIORITIES = System::Word(0x1139);
static const System::Word ICAP_BARCODESEARCHMODE = System::Word(0x113b);
static const System::Word ICAP_BARCODESEARCHPRIORITIES = System::Word(0x113a);
static const System::Word ICAP_BARCODETIMEOUT = System::Word(0x113d);
static const System::Word ICAP_BITDEPTH = System::Word(0x112b);
static const System::Word ICAP_BITDEPTHREDUCTION = System::Word(0x112c);
static const System::Word ICAP_BITORDER = System::Word(0x111c);
static const System::Word ICAP_BITORDERCODES = System::Word(0x1126);
static const System::Word ICAP_BRIGHTNESS = System::Word(0x1101);
static const System::Word ICAP_CCITTKFACTOR = System::Word(0x111d);
static const System::Word ICAP_COMPRESSION = System::Word(0x100);
static const System::Word ICAP_CONTRAST = System::Word(0x1103);
static const System::Word ICAP_CUSTHALFTONE = System::Word(0x1104);
static const System::Word ICAP_EXPOSURETIME = System::Word(0x1105);
static const System::Word ICAP_EXTIMAGEINFO = System::Word(0x112f);
static const System::Word ICAP_FEEDERTYPE = System::Word(0x1154);
static const System::Word ICAP_FILTER = System::Word(0x1106);
static const System::Word ICAP_FLASHUSED = System::Word(0x1107);
static const System::Word ICAP_FLASHUSED2 = System::Word(0x1146);
static const System::Word ICAP_FLIPROTATION = System::Word(0x1136);
static const System::Word ICAP_FRAMES = System::Word(0x1114);
static const System::Word ICAP_GAMMA = System::Word(0x1108);
static const System::Word ICAP_HALFTONES = System::Word(0x1109);
static const System::Word ICAP_HIGHLIGHT = System::Word(0x110a);
static const System::Word ICAP_ICCPROFILE = System::Word(0x1155);
static const System::Word ICAP_IMAGEDATASET = System::Word(0x112e);
static const System::Word ICAP_IMAGEFILEFORMAT = System::Word(0x110c);
static const System::Word ICAP_IMAGEFILTER = System::Word(0x1147);
static const System::Word ICAP_JPEGPIXELTYPE = System::Word(0x1128);
static const System::Word ICAP_JPEGQUALITY = System::Word(0x1153);
static const System::Word ICAP_LAMPSTATE = System::Word(0x110d);
static const System::Word ICAP_LIGHTPATH = System::Word(0x111e);
static const System::Word ICAP_LIGHTSOURCE = System::Word(0x110e);
static const System::Word ICAP_MAXFRAMES = System::Word(0x111a);
static const System::Word ICAP_MINIMUMHEIGHT = System::Word(0x1130);
static const System::Word ICAP_MINIMUMWIDTH = System::Word(0x1131);
static const System::Word ICAP_NOISEFILTER = System::Word(0x1148);
static const System::Word ICAP_ORIENTATION = System::Word(0x1110);
static const System::Word ICAP_OVERSCAN = System::Word(0x1149);
static const System::Word ICAP_PATCHCODEDETECTIONENABLED = System::Word(0x113f);
static const System::Word ICAP_PATCHCODEMAXRETRIES = System::Word(0x1144);
static const System::Word ICAP_PATCHCODEMAXSEARCHPRIORITIES = System::Word(0x1141);
static const System::Word ICAP_PATCHCODESEARCHMODE = System::Word(0x1143);
static const System::Word ICAP_PATCHCODESEARCHPRIORITIES = System::Word(0x1142);
static const System::Word ICAP_PATCHCODETIMEOUT = System::Word(0x1145);
static const System::Word ICAP_PHYSICALHEIGHT = System::Word(0x1112);
static const System::Word ICAP_PHYSICALWIDTH = System::Word(0x1111);
static const System::Word ICAP_PIXELFLAVOR = System::Word(0x111f);
static const System::Word ICAP_PIXELFLAVORCODES = System::Word(0x1127);
static const System::Word ICAP_PIXELTYPE = System::Word(0x101);
static const System::Word ICAP_PLANARCHUNKY = System::Word(0x1120);
static const System::Word ICAP_ROTATION = System::Word(0x1121);
static const System::Word ICAP_SHADOW = System::Word(0x1113);
static const System::Word ICAP_SUPPORTEDBARCODETYPES = System::Word(0x1138);
static const System::Word ICAP_SUPPORTEDPATCHCODETYPES = System::Word(0x1140);
static const System::Word ICAP_SUPPORTEDSIZES = System::Word(0x1122);
static const System::Word ICAP_THRESHOLD = System::Word(0x1123);
static const System::Word ICAP_TILES = System::Word(0x111b);
static const System::Word ICAP_TIMEFILL = System::Word(0x112a);
static const System::Word ICAP_UNDEFINEDIMAGESIZE = System::Word(0x112d);
static const System::Word ICAP_UNITS = System::Word(0x102);
static const System::Word ICAP_XFERMECH = System::Word(0x103);
static const System::Word ICAP_XNATIVERESOLUTION = System::Word(0x1116);
static const System::Word ICAP_XRESOLUTION = System::Word(0x1118);
static const System::Word ICAP_XSCALING = System::Word(0x1124);
static const System::Word ICAP_YNATIVERESOLUTION = System::Word(0x1117);
static const System::Word ICAP_YRESOLUTION = System::Word(0x1119);
static const System::Word ICAP_YSCALING = System::Word(0x1125);
static const System::Word ICAP_ZOOMFACTOR = System::Word(0x113e);
static const System::Word ICAP_AUTODISCARDBLANKPAGES = System::Word(0x1134);
static const System::Int8 TWLG_DAN = System::Int8(0x0);
static const System::Int8 TWLG_DUT = System::Int8(0x1);
static const System::Int8 TWLG_ENG = System::Int8(0x2);
static const System::Int8 TWLG_FCF = System::Int8(0x3);
static const System::Int8 TWLG_FIN = System::Int8(0x4);
static const System::Int8 TWLG_FRN = System::Int8(0x5);
static const System::Int8 TWLG_GER = System::Int8(0x6);
static const System::Int8 TWLG_ICE = System::Int8(0x7);
static const System::Int8 TWLG_ITN = System::Int8(0x8);
static const System::Int8 TWLG_NOR = System::Int8(0x9);
static const System::Int8 TWLG_POR = System::Int8(0xa);
static const System::Int8 TWLG_SPA = System::Int8(0xb);
static const System::Int8 TWLG_SWE = System::Int8(0xc);
static const System::Int8 TWLG_USA = System::Int8(0xd);
static const System::Word TWLG_USERLOCALE = System::Word(0xffff);
static const System::Int8 TWLG_AFRIKAANS = System::Int8(0xe);
static const System::Int8 TWLG_ALBANIA = System::Int8(0xf);
static const System::Int8 TWLG_ARABIC = System::Int8(0x10);
static const System::Int8 TWLG_ARABIC_ALGERIA = System::Int8(0x11);
static const System::Int8 TWLG_ARABIC_BAHRAIN = System::Int8(0x12);
static const System::Int8 TWLG_ARABIC_EGYPT = System::Int8(0x13);
static const System::Int8 TWLG_ARABIC_IRAQ = System::Int8(0x14);
static const System::Int8 TWLG_ARABIC_JORDAN = System::Int8(0x15);
static const System::Int8 TWLG_ARABIC_KUWAIT = System::Int8(0x16);
static const System::Int8 TWLG_ARABIC_LEBANON = System::Int8(0x17);
static const System::Int8 TWLG_ARABIC_LIBYA = System::Int8(0x18);
static const System::Int8 TWLG_ARABIC_MOROCCO = System::Int8(0x19);
static const System::Int8 TWLG_ARABIC_OMAN = System::Int8(0x1a);
static const System::Int8 TWLG_ARABIC_QATAR = System::Int8(0x1b);
static const System::Int8 TWLG_ARABIC_SAUDIARABIA = System::Int8(0x1c);
static const System::Int8 TWLG_ARABIC_SYRIA = System::Int8(0x1d);
static const System::Int8 TWLG_ARABIC_TUNISIA = System::Int8(0x1e);
static const System::Int8 TWLG_ARABIC_UAE = System::Int8(0x1f);
static const System::Int8 TWLG_ARABIC_YEMEN = System::Int8(0x20);
static const System::Int8 TWLG_BASQUE = System::Int8(0x21);
static const System::Int8 TWLG_BYELORUSSIAN = System::Int8(0x22);
static const System::Int8 TWLG_BULGARIAN = System::Int8(0x23);
static const System::Int8 TWLG_CATALAN = System::Int8(0x24);
static const System::Int8 TWLG_CHINESE = System::Int8(0x25);
static const System::Int8 TWLG_CHINESE_HONGKONG = System::Int8(0x26);
static const System::Int8 TWLG_CHINESE_PRC = System::Int8(0x27);
static const System::Int8 TWLG_CHINESE_SINGAPORE = System::Int8(0x28);
static const System::Int8 TWLG_CHINESE_SIMPLIFIED = System::Int8(0x29);
static const System::Int8 TWLG_CHINESE_TAIWAN = System::Int8(0x2a);
static const System::Int8 TWLG_CHINESE_TRADITIONAL = System::Int8(0x2b);
static const System::Int8 TWLG_CROATIA = System::Int8(0x2c);
static const System::Int8 TWLG_CZECH = System::Int8(0x2d);
static const System::Int8 TWLG_DANISH = System::Int8(0x0);
static const System::Int8 TWLG_DUTCH = System::Int8(0x1);
static const System::Int8 TWLG_DUTCH_BELGIAN = System::Int8(0x2e);
static const System::Int8 TWLG_ENGLISH = System::Int8(0x2);
static const System::Int8 TWLG_ENGLISH_AUSTRALIAN = System::Int8(0x2f);
static const System::Int8 TWLG_ENGLISH_CANADIAN = System::Int8(0x30);
static const System::Int8 TWLG_ENGLISH_IRELAND = System::Int8(0x31);
static const System::Int8 TWLG_ENGLISH_NEWZEALAND = System::Int8(0x32);
static const System::Int8 TWLG_ENGLISH_SOUTHAFRICA = System::Int8(0x33);
static const System::Int8 TWLG_ENGLISH_UK = System::Int8(0x34);
static const System::Int8 TWLG_ENGLISH_USA = System::Int8(0xd);
static const System::Int8 TWLG_ESTONIAN = System::Int8(0x35);
static const System::Int8 TWLG_FAEROESE = System::Int8(0x36);
static const System::Int8 TWLG_FARSI = System::Int8(0x37);
static const System::Int8 TWLG_FINNISH = System::Int8(0x4);
static const System::Int8 TWLG_FRENCH = System::Int8(0x5);
static const System::Int8 TWLG_FRENCH_BELGIAN = System::Int8(0x38);
static const System::Int8 TWLG_FRENCH_CANADIAN = System::Int8(0x3);
static const System::Int8 TWLG_FRENCH_LUXEMBOURG = System::Int8(0x39);
static const System::Int8 TWLG_FRENCH_SWISS = System::Int8(0x3a);
static const System::Int8 TWLG_GERMAN = System::Int8(0x6);
static const System::Int8 TWLG_GERMAN_AUSTRIAN = System::Int8(0x3b);
static const System::Int8 TWLG_GERMAN_LUXEMBOURG = System::Int8(0x3c);
static const System::Int8 TWLG_GERMAN_LIECHTENSTEIN = System::Int8(0x3d);
static const System::Int8 TWLG_GERMAN_SWISS = System::Int8(0x3e);
static const System::Int8 TWLG_GREEK = System::Int8(0x3f);
static const System::Int8 TWLG_HEBREW = System::Int8(0x40);
static const System::Int8 TWLG_HUNGARIAN = System::Int8(0x41);
static const System::Int8 TWLG_ICELANDIC = System::Int8(0x7);
static const System::Int8 TWLG_INDONESIAN = System::Int8(0x42);
static const System::Int8 TWLG_ITALIAN = System::Int8(0x8);
static const System::Int8 TWLG_ITALIAN_SWISS = System::Int8(0x43);
static const System::Int8 TWLG_JAPANESE = System::Int8(0x44);
static const System::Int8 TWLG_KOREAN = System::Int8(0x45);
static const System::Int8 TWLG_KOREAN_JOHAB = System::Int8(0x46);
static const System::Int8 TWLG_LATVIAN = System::Int8(0x47);
static const System::Int8 TWLG_LITHUANIAN = System::Int8(0x48);
static const System::Int8 TWLG_NORWEGIAN = System::Int8(0x9);
static const System::Int8 TWLG_NORWEGIAN_BOKMAL = System::Int8(0x49);
static const System::Int8 TWLG_NORWEGIAN_NYNORSK = System::Int8(0x4a);
static const System::Int8 TWLG_POLISH = System::Int8(0x4b);
static const System::Int8 TWLG_PORTUGUESE = System::Int8(0xa);
static const System::Int8 TWLG_PORTUGUESE_BRAZIL = System::Int8(0x4c);
static const System::Int8 TWLG_ROMANIAN = System::Int8(0x4d);
static const System::Int8 TWLG_RUSSIAN = System::Int8(0x4e);
static const System::Int8 TWLG_SERBIAN_LATIN = System::Int8(0x4f);
static const System::Int8 TWLG_SLOVAK = System::Int8(0x50);
static const System::Int8 TWLG_SLOVENIAN = System::Int8(0x51);
static const System::Int8 TWLG_SPANISH = System::Int8(0xb);
static const System::Int8 TWLG_SPANISH_MEXICAN = System::Int8(0x52);
static const System::Int8 TWLG_SPANISH_MODERN = System::Int8(0x53);
static const System::Int8 TWLG_SWEDISH = System::Int8(0xc);
static const System::Int8 TWLG_THAI = System::Int8(0x54);
static const System::Int8 TWLG_TURKISH = System::Int8(0x55);
static const System::Int8 TWLG_UKRANIAN = System::Int8(0x56);
static const System::Int8 TWLG_ASSAMESE = System::Int8(0x57);
static const System::Int8 TWLG_BENGALI = System::Int8(0x58);
static const System::Int8 TWLG_BIHARI = System::Int8(0x59);
static const System::Int8 TWLG_BODO = System::Int8(0x5a);
static const System::Int8 TWLG_DOGRI = System::Int8(0x5b);
static const System::Int8 TWLG_GUJARATI = System::Int8(0x5c);
static const System::Int8 TWLG_HARYANVI = System::Int8(0x5d);
static const System::Int8 TWLG_HINDI = System::Int8(0x5e);
static const System::Int8 TWLG_KANNADA = System::Int8(0x5f);
static const System::Int8 TWLG_KASHMIRI = System::Int8(0x60);
static const System::Int8 TWLG_MALAYALAM = System::Int8(0x61);
static const System::Int8 TWLG_MARATHI = System::Int8(0x62);
static const System::Int8 TWLG_MARWARI = System::Int8(0x63);
static const System::Int8 TWLG_MEGHALAYAN = System::Int8(0x64);
static const System::Int8 TWLG_MIZO = System::Int8(0x65);
static const System::Int8 TWLG_NAGA = System::Int8(0x66);
static const System::Int8 TWLG_ORISSI = System::Int8(0x67);
static const System::Int8 TWLG_PUNJABI = System::Int8(0x68);
static const System::Int8 TWLG_PUSHTU = System::Int8(0x69);
static const System::Int8 TWLG_SERBIAN_CYRILLIC = System::Int8(0x6a);
static const System::Int8 TWLG_SIKKIMI = System::Int8(0x6b);
static const System::Int8 TWLG_SWEDISH_FINLAND = System::Int8(0x6c);
static const System::Int8 TWLG_TAMIL = System::Int8(0x6d);
static const System::Int8 TWLG_TELUGU = System::Int8(0x6e);
static const System::Int8 TWLG_TRIPURI = System::Int8(0x6f);
static const System::Int8 TWLG_URDU = System::Int8(0x70);
static const System::Int8 TWLG_VIETNAMESE = System::Int8(0x71);
static const System::Word TWCY_AFGHANISTAN = System::Word(0x3e9);
static const System::Byte TWCY_ALGERIA = System::Byte(0xd5);
static const System::Word TWCY_AMERICANSAMOA = System::Word(0x2ac);
static const System::Int8 TWCY_ANDORRA = System::Int8(0x21);
static const System::Word TWCY_ANGOLA = System::Word(0x3ea);
static const System::Word TWCY_ANGUILLA = System::Word(0x1f9a);
static const System::Word TWCY_ANTIGUA = System::Word(0x1f9b);
static const System::Int8 TWCY_ARGENTINA = System::Int8(0x36);
static const System::Word TWCY_ARUBA = System::Word(0x129);
static const System::Byte TWCY_ASCENSIONI = System::Byte(0xf7);
static const System::Int8 TWCY_AUSTRALIA = System::Int8(0x3d);
static const System::Int8 TWCY_AUSTRIA = System::Int8(0x2b);
static const System::Word TWCY_BAHAMAS = System::Word(0x1f9c);
static const System::Word TWCY_BAHRAIN = System::Word(0x3cd);
static const System::Word TWCY_BANGLADESH = System::Word(0x370);
static const System::Word TWCY_BARBADOS = System::Word(0x1f9d);
static const System::Int8 TWCY_BELGIUM = System::Int8(0x20);
static const System::Word TWCY_BELIZE = System::Word(0x1f5);
static const System::Byte TWCY_BENIN = System::Byte(0xe5);
static const System::Word TWCY_BERMUDA = System::Word(0x1f9e);
static const System::Word TWCY_BHUTAN = System::Word(0x3eb);
static const System::Word TWCY_BOLIVIA = System::Word(0x24f);
static const System::Word TWCY_BOTSWANA = System::Word(0x10b);
static const System::Int8 TWCY_BRITAIN = System::Int8(0x6);
static const System::Word TWCY_BRITVIRGINIS = System::Word(0x1f9f);
static const System::Int8 TWCY_BRAZIL = System::Int8(0x37);
static const System::Word TWCY_BRUNEI = System::Word(0x2a1);
static const System::Word TWCY_BULGARIA = System::Word(0x167);
static const System::Word TWCY_BURKINAFASO = System::Word(0x3ec);
static const System::Word TWCY_BURMA = System::Word(0x3ed);
static const System::Word TWCY_BURUNDI = System::Word(0x3ee);
static const System::Byte TWCY_CAMAROON = System::Byte(0xed);
static const System::Int8 TWCY_CANADA = System::Int8(0x2);
static const System::Byte TWCY_CAPEVERDEIS = System::Byte(0xee);
static const System::Word TWCY_CAYMANIS = System::Word(0x1fa0);
static const System::Word TWCY_CENTRALAFREP = System::Word(0x3ef);
static const System::Word TWCY_CHAD = System::Word(0x3f0);
static const System::Int8 TWCY_CHILE = System::Int8(0x38);
static const System::Int8 TWCY_CHINA = System::Int8(0x56);
static const System::Word TWCY_CHRISTMASIS = System::Word(0x3f1);
static const System::Word TWCY_COCOSIS = System::Word(0x3f1);
static const System::Int8 TWCY_COLOMBIA = System::Int8(0x39);
static const System::Word TWCY_COMOROS = System::Word(0x3f2);
static const System::Word TWCY_CONGO = System::Word(0x3f3);
static const System::Word TWCY_COOKIS = System::Word(0x3f4);
static const System::Word TWCY_COSTARICA = System::Word(0x1fa);
static const System::Int8 TWCY_CUBA = System::Int8(0x5);
static const System::Word TWCY_CYPRUS = System::Word(0x165);
static const System::Int8 TWCY_CZECHOSLOVAKIA = System::Int8(0x2a);
static const System::Int8 TWCY_DENMARK = System::Int8(0x2d);
static const System::Word TWCY_DJIBOUTI = System::Word(0x3f5);
static const System::Word TWCY_DOMINICA = System::Word(0x1fa1);
static const System::Word TWCY_DOMINCANREP = System::Word(0x1fa2);
static const System::Word TWCY_EASTERIS = System::Word(0x3f6);
static const System::Word TWCY_ECUADOR = System::Word(0x251);
static const System::Int8 TWCY_EGYPT = System::Int8(0x14);
static const System::Word TWCY_ELSALVADOR = System::Word(0x1f7);
static const System::Word TWCY_EQGUINEA = System::Word(0x3f7);
static const System::Byte TWCY_ETHIOPIA = System::Byte(0xfb);
static const System::Word TWCY_FALKLANDIS = System::Word(0x3f8);
static const System::Word TWCY_FAEROEIS = System::Word(0x12a);
static const System::Word TWCY_FIJIISLANDS = System::Word(0x2a7);
static const System::Word TWCY_FINLAND = System::Word(0x166);
static const System::Int8 TWCY_FRANCE = System::Int8(0x21);
static const System::Word TWCY_FRANTILLES = System::Word(0x254);
static const System::Word TWCY_FRGUIANA = System::Word(0x252);
static const System::Word TWCY_FRPOLYNEISA = System::Word(0x2b1);
static const System::Word TWCY_FUTANAIS = System::Word(0x413);
static const System::Byte TWCY_GABON = System::Byte(0xf1);
static const System::Byte TWCY_GAMBIA = System::Byte(0xdc);
static const System::Int8 TWCY_GERMANY = System::Int8(0x31);
static const System::Byte TWCY_GHANA = System::Byte(0xe9);
static const System::Word TWCY_GIBRALTER = System::Word(0x15e);
static const System::Int8 TWCY_GREECE = System::Int8(0x1e);
static const System::Word TWCY_GREENLAND = System::Word(0x12b);
static const System::Word TWCY_GRENADA = System::Word(0x1fa3);
static const System::Word TWCY_GRENEDINES = System::Word(0x1f4f);
static const System::Word TWCY_GUADELOUPE = System::Word(0x24e);
static const System::Word TWCY_GUAM = System::Word(0x29f);
static const System::Word TWCY_GUANTANAMOBAY = System::Word(0x1517);
static const System::Word TWCY_GUATEMALA = System::Word(0x1f6);
static const System::Byte TWCY_GUINEA = System::Byte(0xe0);
static const System::Word TWCY_GUINEABISSAU = System::Word(0x3f9);
static const System::Word TWCY_GUYANA = System::Word(0x250);
static const System::Word TWCY_HAITI = System::Word(0x1fd);
static const System::Word TWCY_HONDURAS = System::Word(0x1f8);
static const System::Word TWCY_HONGKONG = System::Word(0x354);
static const System::Int8 TWCY_HUNGARY = System::Int8(0x24);
static const System::Word TWCY_ICELAND = System::Word(0x162);
static const System::Int8 TWCY_INDIA = System::Int8(0x5b);
static const System::Int8 TWCY_INDONESIA = System::Int8(0x3e);
static const System::Int8 TWCY_IRAN = System::Int8(0x62);
static const System::Word TWCY_IRAQ = System::Word(0x3c4);
static const System::Word TWCY_IRELAND = System::Word(0x161);
static const System::Word TWCY_ISRAEL = System::Word(0x3cc);
static const System::Int8 TWCY_ITALY = System::Int8(0x27);
static const System::Byte TWCY_IVORYCOAST = System::Byte(0xe1);
static const System::Word TWCY_JAMAICA = System::Word(0x1f4a);
static const System::Int8 TWCY_JAPAN = System::Int8(0x51);
static const System::Word TWCY_JORDAN = System::Word(0x3c2);
static const System::Byte TWCY_KENYA = System::Byte(0xfe);
static const System::Word TWCY_KIRIBATI = System::Word(0x3fa);
static const System::Int8 TWCY_KOREA = System::Int8(0x52);
static const System::Word TWCY_KUWAIT = System::Word(0x3c5);
static const System::Word TWCY_LAOS = System::Word(0x3fb);
static const System::Word TWCY_LEBANON = System::Word(0x3fc);
static const System::Byte TWCY_LIBERIA = System::Byte(0xe7);
static const System::Byte TWCY_LIBYA = System::Byte(0xda);
static const System::Int8 TWCY_LIECHTENSTEIN = System::Int8(0x29);
static const System::Word TWCY_LUXENBOURG = System::Word(0x160);
static const System::Word TWCY_MACAO = System::Word(0x355);
static const System::Word TWCY_MADAGASCAR = System::Word(0x3fd);
static const System::Word TWCY_MALAWI = System::Word(0x109);
static const System::Int8 TWCY_MALAYSIA = System::Int8(0x3c);
static const System::Word TWCY_MALDIVES = System::Word(0x3c0);
static const System::Word TWCY_MALI = System::Word(0x3fe);
static const System::Word TWCY_MALTA = System::Word(0x164);
static const System::Word TWCY_MARSHALLIS = System::Word(0x2b4);
static const System::Word TWCY_MAURITANIA = System::Word(0x3ff);
static const System::Byte TWCY_MAURITIUS = System::Byte(0xe6);
static const System::Int8 TWCY_MEXICO = System::Int8(0x3);
static const System::Word TWCY_MICRONESIA = System::Word(0x2b3);
static const System::Word TWCY_MIQUELON = System::Word(0x1fc);
static const System::Int8 TWCY_MONACO = System::Int8(0x21);
static const System::Word TWCY_MONGOLIA = System::Word(0x400);
static const System::Word TWCY_MONTSERRAT = System::Word(0x1f4b);
static const System::Byte TWCY_MOROCCO = System::Byte(0xd4);
static const System::Word TWCY_MOZAMBIQUE = System::Word(0x401);
static const System::Word TWCY_NAMIBIA = System::Word(0x108);
static const System::Word TWCY_NAURU = System::Word(0x402);
static const System::Word TWCY_NEPAL = System::Word(0x3d1);
static const System::Int8 TWCY_NETHERLANDS = System::Int8(0x1f);
static const System::Word TWCY_NETHANTILLES = System::Word(0x257);
static const System::Word TWCY_NEVIS = System::Word(0x1f4c);
static const System::Word TWCY_NEWCALEDONIA = System::Word(0x2af);
static const System::Int8 TWCY_NEWZEALAND = System::Int8(0x40);
static const System::Word TWCY_NICARAGUA = System::Word(0x1f9);
static const System::Byte TWCY_NIGER = System::Byte(0xe3);
static const System::Byte TWCY_NIGERIA = System::Byte(0xea);
static const System::Word TWCY_NIUE = System::Word(0x403);
static const System::Word TWCY_NORFOLKI = System::Word(0x404);
static const System::Int8 TWCY_NORWAY = System::Int8(0x2f);
static const System::Word TWCY_OMAN = System::Word(0x3c8);
static const System::Int8 TWCY_PAKISTAN = System::Int8(0x5c);
static const System::Word TWCY_PALAU = System::Word(0x405);
static const System::Word TWCY_PANAMA = System::Word(0x1fb);
static const System::Word TWCY_PARAGUAY = System::Word(0x253);
static const System::Int8 TWCY_PERU = System::Int8(0x33);
static const System::Int8 TWCY_PHILLIPPINES = System::Int8(0x3f);
static const System::Word TWCY_PITCAIRNIS = System::Word(0x406);
static const System::Word TWCY_PNEWGUINEA = System::Word(0x2a3);
static const System::Int8 TWCY_POLAND = System::Int8(0x30);
static const System::Word TWCY_PORTUGAL = System::Word(0x15f);
static const System::Word TWCY_QATAR = System::Word(0x3ce);
static const System::Word TWCY_REUNIONI = System::Word(0x407);
static const System::Int8 TWCY_ROMANIA = System::Int8(0x28);
static const System::Byte TWCY_RWANDA = System::Byte(0xfa);
static const System::Word TWCY_SAIPAN = System::Word(0x29e);
static const System::Int8 TWCY_SANMARINO = System::Int8(0x27);
static const System::Word TWCY_SAOTOME = System::Word(0x409);
static const System::Word TWCY_SAUDIARABIA = System::Word(0x3c6);
static const System::Byte TWCY_SENEGAL = System::Byte(0xdd);
static const System::Word TWCY_SEYCHELLESIS = System::Word(0x40a);
static const System::Word TWCY_SIERRALEONE = System::Word(0x40b);
static const System::Int8 TWCY_SINGAPORE = System::Int8(0x41);
static const System::Word TWCY_SOLOMONIS = System::Word(0x40c);
static const System::Word TWCY_SOMALI = System::Word(0x40d);
static const System::Int8 TWCY_SOUTHAFRICA = System::Int8(0x1b);
static const System::Int8 TWCY_SPAIN = System::Int8(0x22);
static const System::Int8 TWCY_SRILANKA = System::Int8(0x5e);
static const System::Word TWCY_STHELENA = System::Word(0x408);
static const System::Word TWCY_STKITTS = System::Word(0x1f4d);
static const System::Word TWCY_STLUCIA = System::Word(0x1f4e);
static const System::Word TWCY_STPIERRE = System::Word(0x1fc);
static const System::Word TWCY_STVINCENT = System::Word(0x1f4f);
static const System::Word TWCY_SUDAN = System::Word(0x40e);
static const System::Word TWCY_SURINAME = System::Word(0x255);
static const System::Word TWCY_SWAZILAND = System::Word(0x10c);
static const System::Int8 TWCY_SWEDEN = System::Int8(0x2e);
static const System::Int8 TWCY_SWITZERLAND = System::Int8(0x29);
static const System::Word TWCY_SYRIA = System::Word(0x40f);
static const System::Word TWCY_TAIWAN = System::Word(0x376);
static const System::Byte TWCY_TANZANIA = System::Byte(0xff);
static const System::Int8 TWCY_THAILAND = System::Int8(0x42);
static const System::Word TWCY_TOBAGO = System::Word(0x1f50);
static const System::Byte TWCY_TOGO = System::Byte(0xe4);
static const System::Word TWCY_TONGAIS = System::Word(0x2a4);
static const System::Word TWCY_TRINIDAD = System::Word(0x1f50);
static const System::Byte TWCY_TUNISIA = System::Byte(0xd8);
static const System::Int8 TWCY_TURKEY = System::Int8(0x5a);
static const System::Word TWCY_TURKSCAICOS = System::Word(0x1f51);
static const System::Word TWCY_TUVALU = System::Word(0x410);
static const System::Word TWCY_UGANDA = System::Word(0x100);
static const System::Int8 TWCY_USSR = System::Int8(0x7);
static const System::Word TWCY_UAEMIRATES = System::Word(0x3cb);
static const System::Int8 TWCY_UNITEDKINGDOM = System::Int8(0x2c);
static const System::Int8 TWCY_USA = System::Int8(0x1);
static const System::Word TWCY_URUGUAY = System::Word(0x256);
static const System::Word TWCY_VANUATU = System::Word(0x411);
static const System::Int8 TWCY_VATICANCITY = System::Int8(0x27);
static const System::Int8 TWCY_VENEZUELA = System::Int8(0x3a);
static const System::Word TWCY_WAKE = System::Word(0x412);
static const System::Word TWCY_WALLISIS = System::Word(0x413);
static const System::Word TWCY_WESTERNSAHARA = System::Word(0x414);
static const System::Word TWCY_WESTERNSAMOA = System::Word(0x415);
static const System::Word TWCY_YEMEN = System::Word(0x416);
static const System::Int8 TWCY_YUGOSLAVIA = System::Int8(0x26);
static const System::Byte TWCY_ZAIRE = System::Byte(0xf3);
static const System::Word TWCY_ZAMBIA = System::Word(0x104);
static const System::Word TWCY_ZIMBABWE = System::Word(0x107);
static const System::Word TWCY_ALBANIA = System::Word(0x163);
static const System::Word TWCY_ARMENIA = System::Word(0x176);
static const System::Word TWCY_AZERBAIJAN = System::Word(0x3e2);
static const System::Word TWCY_BELARUS = System::Word(0x177);
static const System::Word TWCY_BOSNIAHERZGO = System::Word(0x183);
static const System::Word TWCY_CAMBODIA = System::Word(0x357);
static const System::Word TWCY_CROATIA = System::Word(0x181);
static const System::Word TWCY_CZECHREPUBLIC = System::Word(0x1a4);
static const System::Byte TWCY_DIEGOGARCIA = System::Byte(0xf6);
static const System::Word TWCY_ERITREA = System::Word(0x123);
static const System::Word TWCY_ESTONIA = System::Word(0x174);
static const System::Word TWCY_GEORGIA = System::Word(0x3e3);
static const System::Word TWCY_LATVIA = System::Word(0x173);
static const System::Word TWCY_LESOTHO = System::Word(0x10a);
static const System::Word TWCY_LITHUANIA = System::Word(0x172);
static const System::Word TWCY_MACEDONIA = System::Word(0x185);
static const System::Word TWCY_MAYOTTEIS = System::Word(0x10d);
static const System::Word TWCY_MOLDOVA = System::Word(0x175);
static const System::Int8 TWCY_MYANMAR = System::Int8(0x5f);
static const System::Word TWCY_NORTHKOREA = System::Word(0x352);
static const System::Word TWCY_PUERTORICO = System::Word(0x313);
static const System::Int8 TWCY_RUSSIA = System::Int8(0x7);
static const System::Word TWCY_SERBIA = System::Word(0x17d);
static const System::Word TWCY_SLOVAKIA = System::Word(0x1a5);
static const System::Word TWCY_SLOVENIA = System::Word(0x182);
static const System::Int8 TWCY_SOUTHKOREA = System::Int8(0x52);
static const System::Word TWCY_UKRAINE = System::Word(0x17c);
static const System::Word TWCY_USVIRGINIS = System::Word(0x154);
static const System::Int8 TWCY_VIETNAM = System::Int8(0x54);
static const System::Int8 Twain_PixelType_BW = System::Int8(0x0);
static const System::Int8 Twain_PixelType_Grayscale = System::Int8(0x1);
static const System::Int8 Twain_PixelType_FullRGB = System::Int8(0x2);
static const System::Int8 Twain_PixelType_Palette = System::Int8(0x3);
static const System::Int8 Twain_PixelType_CMY = System::Int8(0x4);
static const System::Int8 Twain_PixelType_CMYK = System::Int8(0x5);
static const System::Int8 Twain_PixelType_YUV = System::Int8(0x6);
static const System::Int8 Twain_PixelType_YUVK = System::Int8(0x7);
static const System::Int8 Twain_PixelType_CIEXYZ = System::Int8(0x8);
static const System::Int8 Twain_Orientation_NoRotate = System::Int8(0x0);
static const System::Int8 Twain_Orientation_Rotate90 = System::Int8(0x1);
static const System::Int8 Twain_Orientation_Rotate180 = System::Int8(0x2);
static const System::Int8 Twain_Orientation_Rotate270 = System::Int8(0x3);
static const System::Int8 Twain_AutoDiscard_Disable = System::Int8(-2);
static const System::Int8 Twain_AutoDiscard_DiscardBlank = System::Int8(-1);
extern DELPHI_PACKAGE System::UnicodeString iegTwainLogName;
extern DELPHI_PACKAGE System::TextFile iegTwainLogFile;
}	/* namespace Ietwain */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_IETWAIN)
using namespace Ietwain;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// IetwainHPP
