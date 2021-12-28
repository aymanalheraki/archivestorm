// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'iexBitmaps.pas' rev: 35.00 (Windows)

#ifndef IexbitmapsHPP
#define IexbitmapsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <Vcl.Forms.hpp>
#include <System.Classes.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.ImgList.hpp>
#include <System.Contnrs.hpp>
#include <System.SysUtils.hpp>
#include <System.SyncObjs.hpp>
#include <hyiedefs.hpp>
#include <System.UITypes.hpp>
#include <ievision.hpp>
#include <iegdiplus.hpp>
#include <Vcl.Dialogs.hpp>
#include <iexTransitions.hpp>
#include <hyieutils.hpp>
#include <iexClasses.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

namespace Iexbitmaps
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TIEMarkerList;
struct TIPTCInfo;
class DELPHICLASS TIEIPTCInfoList;
class DELPHICLASS TIEBaseBitmap;
struct IE_PROFILE;
class DELPHICLASS TIEICC;
class DELPHICLASS TIEBitmap;
class DELPHICLASS TIEMask;
struct TIEVirtualImageInfo;
struct TIEVirtualToReleaseBmp;
struct TIEVirtualFreeBlock;
class DELPHICLASS TIEVirtualImageList;
class DELPHICLASS TIEDibbitmap;
struct OIAN_MARK_ATTRIBUTES;
class DELPHICLASS TIEImagingObject;
class DELPHICLASS TIEImagingAnnot;
class DELPHICLASS TIEImageEnAnnot;
class DELPHICLASS TIEWorkBitmap;
struct TIEWicCodecInfo;
class DELPHICLASS TIOParams;
class DELPHICLASS TIOMultiParams;
struct TIEDicomTag;
class DELPHICLASS TIEDicomTags;
class DELPHICLASS TIEGraphicBase;
class DELPHICLASS TIEImageInfo;
class DELPHICLASS TIECustomMultiBitmap;
class DELPHICLASS TIEMultiBitmap;
class DELPHICLASS TIETIFFImage;
class DELPHICLASS TIEGIFImage;
class DELPHICLASS TIEJpegImage;
class DELPHICLASS TIEPCXImage;
class DELPHICLASS TIEBMPImage;
class DELPHICLASS TIEICOImage;
class DELPHICLASS TIEPNGImage;
class DELPHICLASS TIETGAImage;
class DELPHICLASS TIEPXMImage;
class DELPHICLASS TIEJP2Image;
class DELPHICLASS TIEJ2KImage;
class DELPHICLASS TIEPSDImage;
class DELPHICLASS TIENativeImage;
class DELPHICLASS TIEPDFImage;
class DELPHICLASS EIERFBError;
class DELPHICLASS TIERFBMessageThread;
class DELPHICLASS TIERFBClient;
class DELPHICLASS TIE3DES;
class DELPHICLASS TIEImageListItem;
class DELPHICLASS TIEImageList;
__interface DELPHIINTERFACE IIELoadPicture;
typedef System::DelphiInterface<IIELoadPicture> _di_IIELoadPicture;
class DELPHICLASS TIEVCLStreamProvider;
class DELPHICLASS TIEFileFormatInfo;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEMarkerList : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Classes::TList* fData;
	Hyieutils::TIEIntegerList* fType;
	int __fastcall GetCount();
	char * __fastcall GetMarkerData(int idx);
	System::Classes::TStream* __fastcall GetMarkerStream(int idx);
	System::Byte __fastcall GetMarkerType(int idx);
	System::Word __fastcall GetMarkerLength(int idx);
	int __fastcall SortCompare(int Index1, int Index2);
	void __fastcall SortSwap(int Index1, int Index2);
	
public:
	__fastcall TIEMarkerList();
	__fastcall virtual ~TIEMarkerList();
	int __fastcall AddMarker(System::Byte marker, char * data, System::Word datalen);
	void __fastcall SetMarker(int idx, System::Byte marker, char * data, System::Word datalen);
	void __fastcall InsertMarker(int idx, char * data, System::Byte marker, System::Word datalen);
	void __fastcall Clear();
	void __fastcall ClearExcept(System::Byte *types, const int types_High);
	__property char * MarkerData[int idx] = {read=GetMarkerData};
	__property System::Classes::TStream* MarkerStream[int idx] = {read=GetMarkerStream};
	__property System::Word MarkerLength[int idx] = {read=GetMarkerLength};
	__property System::Byte MarkerType[int idx] = {read=GetMarkerType};
	int __fastcall IndexOf(System::Byte marker);
	void __fastcall SaveToStream(System::Classes::TStream* Stream);
	void __fastcall LoadFromStream(System::Classes::TStream* Stream);
	void __fastcall DeleteMarker(int idx);
	void __fastcall DeleteMarkerInstances(System::Byte markerType);
	__property int Count = {read=GetCount, nodefault};
	void __fastcall Assign(TIEMarkerList* Source);
	void __fastcall Sort();
};

#pragma pack(pop)

#pragma pack(push,1)
struct DECLSPEC_DRECORD TIPTCInfo
{
public:
	int fRecord;
	int fDataSet;
	int fLength;
};
#pragma pack(pop)


typedef TIPTCInfo *PIPTCInfo;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEIPTCInfoList : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Classes::TList* fBuffer;
	System::Classes::TList* fInfo;
	bool fUserChanged;
	System::UnicodeString __fastcall GetStrings(int idx);
	void __fastcall SetStrings(int idx, const System::UnicodeString Value);
	int __fastcall GetRecordNumber(int idx);
	void __fastcall SetRecordNumber(int idx, int Value);
	int __fastcall GetDataSet(int idx);
	void __fastcall SetDataSet(int idx, int Value);
	int __fastcall GetCount();
	
public:
	__fastcall TIEIPTCInfoList();
	__fastcall virtual ~TIEIPTCInfoList();
	__property System::UnicodeString StringItem[int idx] = {read=GetStrings, write=SetStrings};
	__property int RecordNumber[int idx] = {read=GetRecordNumber, write=SetRecordNumber};
	__property int DataSet[int idx] = {read=GetDataSet, write=SetDataSet};
	int __fastcall AddStringItem(int ARecordNumber, int ADataSet, const System::AnsiString Value);
	int __fastcall AddBufferItem(int ARecordNumber, int ADataSet, void * Buffer, int BufferLength);
	void __fastcall InsertStringItem(int idx, int ARecordNumber, int ADataSet, const System::AnsiString Value);
	void __fastcall Clear();
	int __fastcall IndexOf(int ARecordNumber, int ADataSet);
	void __fastcall DeleteItem(int idx);
	__property int Count = {read=GetCount, nodefault};
	void __fastcall Assign(TIEIPTCInfoList* Source);
	void __fastcall SaveToStream(System::Classes::TStream* Stream);
	void __fastcall LoadFromStream(System::Classes::TStream* Stream);
	bool __fastcall LoadFromStandardBuffer(void * Buffer, int BufferLength);
	void __fastcall SaveToStandardBuffer(void * &Buffer, int &BufferLength, bool WriteHeader);
	__property bool UserChanged = {read=fUserChanged, write=fUserChanged, nodefault};
	void * __fastcall GetItemData(int idx);
	int __fastcall GetItemLength(int idx);
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEBaseBitmap : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	Hyieutils::TIEDataAccess fAccess;
	virtual void * __fastcall GetScanLine(int Row) = 0 ;
	virtual int __fastcall GetBitCount() = 0 ;
	virtual int __fastcall GetHeight() = 0 ;
	virtual int __fastcall GetWidth() = 0 ;
	virtual void __fastcall SetWidth(int Value) = 0 ;
	virtual void __fastcall SetHeight(int Value) = 0 ;
	virtual Hyieutils::TIEPixelFormat __fastcall GetPixelFormat() = 0 ;
	virtual int __fastcall GetRowLen() = 0 ;
	virtual void * __fastcall GetPaletteBuffer() = 0 ;
	virtual Hyiedefs::TRGB __fastcall GetPalette(int index) = 0 ;
	virtual void __fastcall SetPalette(int index, Hyiedefs::TRGB Value) = 0 ;
	virtual int __fastcall GetPaletteLen() = 0 ;
	virtual int __fastcall GetPaletteUsed() = 0 ;
	virtual void __fastcall SetPaletteUsed(int Value) = 0 ;
	
public:
	__property void * Scanline[int row] = {read=GetScanLine};
	__property int BitCount = {read=GetBitCount, nodefault};
	__property int Width = {read=GetWidth, write=SetWidth, nodefault};
	__property int Height = {read=GetHeight, write=SetHeight, nodefault};
	__property Hyieutils::TIEPixelFormat PixelFormat = {read=GetPixelFormat, nodefault};
	virtual bool __fastcall Allocate(int ImageWidth, int ImageHeight, Hyieutils::TIEPixelFormat ImagePixelFormat) = 0 /* overload */;
	virtual bool __fastcall Allocate(int ImageWidth, int ImageHeight, System::Uitypes::TColor FillColor, int Alpha = 0xff) = 0 /* overload */;
	virtual void __fastcall Assign(System::TObject* Source) = 0 ;
	virtual void __fastcall AssignImage(TIEBaseBitmap* Source) = 0 ;
	__property int RowLen = {read=GetRowLen, nodefault};
	__property Hyieutils::TIEDataAccess Access = {read=fAccess, write=fAccess, nodefault};
	__property Hyiedefs::TRGB Palette[int index] = {read=GetPalette, write=SetPalette};
	__property void * PaletteBuffer = {read=GetPaletteBuffer};
	__property int PaletteUsed = {read=GetPaletteUsed, write=SetPaletteUsed, nodefault};
	__property int PaletteLength = {read=GetPaletteLen, nodefault};
	virtual void __fastcall CopyPaletteTo(TIEBaseBitmap* Dest) = 0 ;
public:
	/* TObject.Create */ inline __fastcall TIEBaseBitmap() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TIEBaseBitmap() { }
	
};

#pragma pack(pop)

struct DECLSPEC_DRECORD IE_PROFILE
{
public:
	unsigned dwType;
	void *pProfileData;
	unsigned cbDataSize;
};


typedef IE_PROFILE *IE_PPROFILE;

typedef NativeUInt IE_HPROFILE;

typedef NativeUInt *IE_PHPROFILE;

typedef NativeUInt IE_HTRANSFORM;

typedef System::LongBool __stdcall (*TIE_ICMProgressProcCallback)(unsigned ulMax, unsigned ulCurrent, NativeInt ulCallbackData);

typedef NativeUInt __stdcall (*TIE_OpenColorProfile)(IE_PPROFILE pProfile, unsigned dwDesiredAccess, unsigned dwShareMode, unsigned dwCreationMode);

typedef System::LongBool __stdcall (*TIE_CloseColorProfile)(NativeUInt hProfile);

typedef NativeUInt __stdcall (*TIE_CreateMultiProfileTransform)(IE_PHPROFILE pahProfiles, unsigned nProfiles, unsigned* padwIntent, unsigned nIntents, unsigned dwFlags, unsigned indexPreferredCMM);

typedef System::LongBool __stdcall (*TIE_DeleteColorTransform)(NativeUInt hColorTransform);

typedef System::LongBool __stdcall (*TIE_TranslateColors)(NativeUInt hColorTransform, void * paInputColors, unsigned nColors, unsigned ctInput, void * paOutputColors, unsigned ctOutput);

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEICC : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	bool fUseLCMS;
	System::Byte *fRaw;
	int fRawLen;
	void *fProfile;
	Hyieutils::TIEMemStream* fProfileStream;
	NativeUInt fMSProfile;
	bool fApplied;
	void *fTransform;
	int fInputFormat;
	int fOutputFormat;
	TIEICC* fDestination;
	int fIntent;
	int fFlags;
	NativeUInt fMSTransform;
	System::AnsiString fCopyright;
	System::AnsiString fDescription;
	System::AnsiString fInputColorSpace;
	System::AnsiString fOutputColorSpace;
	void __fastcall OpenProfileFromRaw();
	void __fastcall CloseProfileFromRaw();
	void __fastcall ExtractInfo();
	
public:
	__property NativeUInt MSTransform = {read=fMSTransform, nodefault};
	__fastcall TIEICC(bool UseLCMS);
	__fastcall virtual ~TIEICC();
	void __fastcall LoadFromBuffer(void * buffer, int bufferlen);
	void __fastcall Clear();
	void __fastcall SaveToStream(System::Classes::TStream* Stream, bool StandardICC);
	void __fastcall LoadFromStream(System::Classes::TStream* Stream, bool StandardICC);
	void __fastcall LoadFromFile(const System::UnicodeString FileName);
	void __fastcall Assign(TIEICC* source);
	bool __fastcall IsValid();
	__property bool IsApplied = {read=fApplied, nodefault};
	__property System::PByte Raw = {read=fRaw};
	__property int RawLength = {read=fRawLen, nodefault};
	void __fastcall Assign_sRGBProfile();
	void __fastcall Assign_LabProfile(double WhitePoint_x, double WhitePoint_y, double WhitePoint_Y_);
	void __fastcall Assign_LabProfileFromTemp(int TempK);
	void __fastcall Assign_LabProfileD50();
	void __fastcall Assign_XYZProfile();
	void __fastcall Assign_AdobeRGB1998();
	void __fastcall Assign_CMYKProfile();
	bool __fastcall InitTransform(TIEICC* Destination, int InputFormat, int OutputFormat, int Intent, int Flags);
	void __fastcall FreeTransform();
	bool __fastcall Transform(TIEICC* Destination, int InputFormat, int OutputFormat, int Intent, int Flags, void * InputBuffer, void * OutputBuffer, int ImageWidth);
	bool __fastcall Apply(TIEBaseBitmap* SourceBitmap, int SourceFormat, TIEBaseBitmap* DestinationBitmap, int DestinationFormat, TIEICC* DestinationProfile, int Intent, int Flags);
	bool __fastcall Apply2(TIEBaseBitmap* Bitmap, int SourceFormat, int DestinationFormat, TIEICC* DestinationProfile, int Intent, int Flags);
	bool __fastcall ConvertBitmap(TIEBaseBitmap* Bitmap, Hyieutils::TIEPixelFormat DestPixelFormat, TIEICC* DestProfile);
	bool __fastcall IsTransforming();
	bool __fastcall CheckTransform(int InputFormat)/* overload */;
	bool __fastcall CheckTransform(Hyiedefs::TIECMSColorSpace InputFormat)/* overload */;
	__property System::AnsiString Copyright = {read=fCopyright};
	__property System::AnsiString Description = {read=fDescription};
	__property System::AnsiString InputColorSpace = {read=fInputColorSpace};
	__property System::AnsiString OutputColorSpace = {read=fOutputColorSpace};
};

#pragma pack(pop)

enum DECLSPEC_DENUM TIELocation : unsigned char { ieMemory, ieFile, ieTBitmap };

enum DECLSPEC_DENUM TIEMemoryAllocator : unsigned char { iemaVCL, iemaSystem, iemaAuto };

enum DECLSPEC_DENUM TIEBitmapOrigin : unsigned char { ieboBOTTOMLEFT, ieboTOPLEFT };

enum DECLSPEC_DENUM TIEMergeMethod : unsigned char { iemmMax, iemmMin, iemmAdd, iemmSubtract, iemmReplaceWithSrc };

typedef void __fastcall (__closure *TIEMultiCallBack)(TIEBitmap* Bitmap, System::TObject* &IOParams, int ImDpiX, int ImDpiY);

enum DECLSPEC_DENUM Iexbitmaps__5 : unsigned char { ierAnnotations, ierDicomTags, ierEXIF, ierICC, ierIPTC, ierJPEGMarkers, ierXMP, ierOtherTextMeta };

typedef System::Set<Iexbitmaps__5, Iexbitmaps__5::ierAnnotations, Iexbitmaps__5::ierOtherTextMeta> TIEMetaInfoItems;

typedef void __fastcall (__closure *TIERenderVirtualPixel)(System::TObject* Sender, int SrcX, int SrcY, void *outval);

class PASCALIMPLEMENTATION TIEBitmap : public TIEBaseBitmap
{
	typedef TIEBaseBitmap inherited;
	
	
private:
	typedef System::DynamicArray<Hyiedefs::TRGB> _TIEBitmap__1;
	
	
private:
	Hyieutils::TIEFileBuffer* fmemmap;
	void *fWorkingMap;
	_TIEBitmap__1 fRGBPalette;
	int fPaletteUsed;
	TIEBitmap* fAlphaChannel;
	void *fMemory;
	void *fRealMemory;
	Vcl::Graphics::TBitmap* fBitmap;
	Hyiedefs::TIEArrayOfPointer fBitmapScanlines;
	System::Classes::TList* fScanlinesToUnMapPtr;
	System::Classes::TList* fScanlinesToUnMapRow;
	TIEBitmapOrigin fOrigin;
	System::UnicodeString fFilename;
	int fFileType;
	int fWidth;
	int fHeight;
	int fBitCount;
	int fChannelCount;
	__int64 fRowLen;
	Hyieutils::TIEPixelFormat fPixelFormat;
	bool fIsAlpha;
	TIELocation fLocation;
	bool fFull;
	bool fEncapsulatedFromTBitmap;
	bool fEncapsulatedFromMemory;
	__int64 fMinFileSize;
	Hyieutils::TIEDitherMethod fDefaultDitherMethod;
	TIEICC* fColorProfile;
	TIEICC* fRenderColorProfile;
	double fBlackValue;
	double fWhiteValue;
	System::StaticArray<int, 4> fChannelOffset;
	bool fEnableChannelOffset;
	int fContrast;
	TIEMask* fAdjustmentsMask;
	Hyiedefs::TIEArrayOfTRGB fColorMap;
	int fBitAlignment;
	TIEMemoryAllocator fMemoryAllocator;
	bool fFullReallocate;
	int fCanvasCurrentAlpha;
	Iegdiplus::TIECanvas* fIECanvas;
	System::Classes::TNotifyEvent fOnChanged;
	Hyiedefs::TIEProgressEvent fOnProgress;
	bool fModified;
	int fFragmentsCount;
	int fRowsPerFragment;
	Hyiedefs::TPointerArray *fFragments;
	TIERenderVirtualPixel fOnRenderVirtualPixel;
	System::TObject* fVirtualBitmapProvider;
	void *fVirtualBitmapRowBuffer;
	bool fIsVirtual;
	TIEBitmap* fROIOriginalBitmap;
	System::Types::TRect fROIOriginalRect;
	Iegdiplus::TIECanvas* fROICanvas;
	bool fIsResource;
	System::Contnrs::TObjectList* fSavedBitmaps;
	bool fWicFastLoading;
	bool __fastcall AllocateImage();
	void __fastcall SetPixelFormat(Hyieutils::TIEPixelFormat Value);
	void __fastcall ConvertToPixelFormat(Hyieutils::TIEPixelFormat DestPixelFormat);
	bool __fastcall GetPixels_ie1g(int x, int y);
	System::Byte __fastcall GetPixels_ie8(int x, int y);
	System::Word __fastcall GetPixels_ie16g(int x, int y);
	Hyiedefs::TRGB __fastcall GetPixels_ie24RGB(int x, int y);
	Hyiedefs::TRGBA __fastcall GetPixels_ie32RGB(int x, int y);
	float __fastcall GetPixels_ie32f(int x, int y);
	Hyiedefs::TCMYK __fastcall GetPixels_ieCMYK(int x, int y);
	Hyiedefs::TCIELab __fastcall GetPixels_ieCIELab(int x, int y);
	Hyiedefs::TRGB48 __fastcall GetPixels_ie48RGB(int x, int y);
	Hyiedefs::PRGB __fastcall GetPPixels_ie24RGB(int x, int y);
	Hyiedefs::PRGBA __fastcall GetPPixels_ie32RGB(int x, int y);
	Hyiedefs::PRGB48 __fastcall GetPPixels_ie48RGB(int x, int y);
	Hyiedefs::TRGB __fastcall GetPixels(int x, int y);
	void __fastcall SetPixels(int x, int y, Hyiedefs::TRGB value);
	void __fastcall SetPixels_ie1g(int x, int y, bool Value);
	void __fastcall SetPixels_ie8(int x, int y, System::Byte Value);
	void __fastcall SetPixels_ie16g(int x, int y, System::Word Value);
	void __fastcall SetPixels_ie24RGB(int x, int y, Hyiedefs::TRGB Value);
	void __fastcall SetPixels_ie32RGB(int x, int y, Hyiedefs::TRGBA Value);
	void __fastcall SetPixels_ie32f(int x, int y, float Value);
	void __fastcall SetPixels_ieCMYK(int x, int y, Hyiedefs::TCMYK Value);
	void __fastcall SetPixels_ieCIELab(int x, int y, Hyiedefs::TCIELab Value);
	void __fastcall SetPixels_ie48RGB(int x, int y, const Hyiedefs::TRGB48 &Value);
	System::Byte __fastcall GetAlpha(int x, int y);
	void __fastcall SetAlpha(int x, int y, System::Byte Value);
	void __fastcall SetLocation(TIELocation Value);
	void __fastcall UpdateTBitmapPalette();
	void __fastcall CopyPaletteFromTBitmap(Vcl::Graphics::TBitmap* source, int colors);
	void __fastcall FreeBitmapScanlines();
	void __fastcall BuildBitmapScanlines();
	Vcl::Graphics::TBitmap* __fastcall GetVclBitmap();
	void __fastcall SetChannelOffset(int idx, int value);
	int __fastcall GetChannelOffset(int idx);
	void __fastcall SetBitAlignment(int value);
	int __fastcall GetChannelCount();
	void __fastcall SetChannelCount(int Value);
	void __fastcall SetCanvasCurrentAlpha(int v);
	void __fastcall FragmentedAlloc();
	void __fastcall FreeFragments();
	void __fastcall AllocateMemory(__int64 size, void * &StartBuffer, void * &AlignedBuffer);
	void __fastcall SetOrigin(TIEBitmapOrigin value);
	void __fastcall SetVirtualBitmapProvider(System::TObject* value);
	void __fastcall SetOnRenderVirtualPixel(TIERenderVirtualPixel value);
	void __fastcall ReleaseROI();
	void __fastcall DestroyMe(System::TObject* Sender);
	void * __fastcall GetMemory();
	TIEMask* __fastcall GetAdjustmentsMask();
	TIOParams* __fastcall GetParams();
	bool __fastcall GetParamsEnabled();
	void __fastcall SetParamsEnabled(const bool Value);
	void __fastcall UpdateOwner();
	void __fastcall SetModified(bool Value);
	void __fastcall AssignMetaInfo(TIEBitmap* Source, bool AssignParams);
	void __fastcall BlendAlpha(System::Uitypes::TColor BackgroundColor);
	void __fastcall SetMemoryAllocator(TIEMemoryAllocator Value);
	
protected:
	TIOParams* fIOParams;
	Vcl::Graphics::TCanvas* __fastcall GetCanvas();
	Iegdiplus::TIECanvas* __fastcall GetIECanvas();
	virtual TIEBitmap* __fastcall GetAlphaChannel();
	virtual TIEBitmap* __fastcall GetAlphaChannelOpt();
	virtual int __fastcall GetBitCount();
	void __fastcall SetBitCount(int Value);
	virtual int __fastcall GetWidth();
	virtual int __fastcall GetHeight();
	virtual void __fastcall SetWidth(int Value);
	virtual void __fastcall SetHeight(int Value);
	virtual int __fastcall GetRowLen();
	void __fastcall SetRowLen(int Value);
	virtual void * __fastcall GetScanLine(int Row);
	virtual Hyieutils::TIEPixelFormat __fastcall GetPixelFormat();
	virtual void __fastcall SetPalette(int index, Hyiedefs::TRGB Value);
	virtual void __fastcall SetPaletteUsed(int Value);
	void __fastcall FreeAllMaps();
	virtual void __fastcall Render_ie24RGB(TIEBitmap* Dest, System::PInteger XLUT, System::PInteger YLUT, int xSrc, int ySrc, int xDst, int yDst, int cx1, int cy1, int cx2, int cy2, int rx, int ry, bool SolidBackground, Hyieutils::TIERenderOperation RenderOperation);
	virtual void __fastcall Render_ie24RGB_alpha(TIEBitmap* Dest, int Transparency, bool UseAlpha, System::PByte SimAlphaRow, System::PInteger XLUT, System::PInteger YLUT, int xSrc, int ySrc, int xDst, int yDst, int cx1, int cy1, int cx2, int cy2, int rx, int ry, bool SolidBackground, Hyieutils::TIERenderOperation RenderOperation, double Opacity);
	virtual void __fastcall Render_ie32RGB(TIEBitmap* Dest, System::PInteger XLUT, System::PInteger YLUT, int xSrc, int ySrc, int xDst, int yDst, int cx1, int cy1, int cx2, int cy2, int rx, int ry, bool SolidBackground, Hyieutils::TIERenderOperation RenderOperation);
	virtual void __fastcall Render_ie32RGB_alpha(TIEBitmap* Dest, int Transparency, bool UseAlpha, System::PByte SimAlphaRow, System::PInteger XLUT, System::PInteger YLUT, int xSrc, int ySrc, int xDst, int yDst, int cx1, int cy1, int cx2, int cy2, int rx, int ry, bool SolidBackground, Hyieutils::TIERenderOperation RenderOperation, double Opacity);
	virtual void __fastcall Render_ie1g(TIEBitmap* Dest, System::PInteger XLUT, System::PInteger YLUT, int xSrc, int ySrc, int xDst, int yDst, int cx1, int cy1, int cx2, int cy2, int rx, int ry, bool SolidBackground);
	virtual void __fastcall Render_ie1g_alpha(TIEBitmap* Dest, int Transparency, bool UseAlpha, System::PByte SimAlphaRow, System::PInteger XLUT, System::PInteger YLUT, int xSrc, int ySrc, int xDst, int yDst, int cx1, int cy1, int cx2, int cy2, int rx, int ry, bool SolidBackground, double Opacity);
	virtual void __fastcall Render_ie8g(TIEBitmap* Dest, System::PInteger XLUT, System::PInteger YLUT, int xSrc, int ySrc, int xDst, int yDst, int cx1, int cy1, int cx2, int cy2, int rx, int ry, bool SolidBackground);
	virtual void __fastcall Render_ie8g_alpha(TIEBitmap* Dest, int Transparency, bool UseAlpha, System::PByte SimAlphaRow, System::PInteger XLUT, System::PInteger YLUT, int xSrc, int ySrc, int xDst, int yDst, int cx1, int cy1, int cx2, int cy2, int rx, int ry, bool SolidBackground, double Opacity);
	virtual void __fastcall Render_ie8p(TIEBitmap* Dest, System::PInteger XLUT, System::PInteger YLUT, int xSrc, int ySrc, int xDst, int yDst, int cx1, int cy1, int cx2, int cy2, int rx, int ry, bool SolidBackground);
	virtual void __fastcall Render_ie8p_alpha(TIEBitmap* Dest, int Transparency, bool UseAlpha, System::PByte SimAlphaRow, System::PInteger XLUT, System::PInteger YLUT, int xSrc, int ySrc, int xDst, int yDst, int cx1, int cy1, int cx2, int cy2, int rx, int ry, bool SolidBackground, double Opacity);
	virtual void __fastcall Render_ie16g(TIEBitmap* Dest, System::PInteger XLUT, System::PInteger YLUT, int xSrc, int ySrc, int xDst, int yDst, int cx1, int cy1, int cx2, int cy2, int rx, int ry, bool SolidBackground);
	virtual void __fastcall Render_ie16g_alpha(TIEBitmap* Dest, int Transparency, bool UseAlpha, System::PByte SimAlphaRow, System::PInteger XLUT, System::PInteger YLUT, int xSrc, int ySrc, int xDst, int yDst, int cx1, int cy1, int cx2, int cy2, int rx, int ry, bool SolidBackground, double Opacity);
	virtual void __fastcall Render_ie32f(TIEBitmap* Dest, System::PInteger XLUT, System::PInteger YLUT, int xSrc, int ySrc, int xDst, int yDst, int cx1, int cy1, int cx2, int cy2, int rx, int ry, bool SolidBackground);
	virtual void __fastcall Render_ie32f_alpha(TIEBitmap* Dest, int Transparency, bool UseAlpha, System::PByte SimAlphaRow, System::PInteger XLUT, System::PInteger YLUT, int xSrc, int ySrc, int xDst, int yDst, int cx1, int cy1, int cx2, int cy2, int rx, int ry, bool SolidBackground, double Opacity);
	virtual void __fastcall Render_ieCMYK(TIEBitmap* Dest, System::PInteger XLUT, System::PInteger YLUT, int xSrc, int ySrc, int xDst, int yDst, int cx1, int cy1, int cx2, int cy2, int rx, int ry, bool SolidBackground);
	virtual void __fastcall Render_ieCMYK_alpha(TIEBitmap* Dest, int Transparency, bool UseAlpha, System::PByte SimAlphaRow, System::PInteger XLUT, System::PInteger YLUT, int xSrc, int ySrc, int xDst, int yDst, int cx1, int cy1, int cx2, int cy2, int rx, int ry, bool SolidBackground, double Opacity);
	virtual void __fastcall Render_ieCIELab(TIEBitmap* Dest, System::PInteger XLUT, System::PInteger YLUT, int xSrc, int ySrc, int xDst, int yDst, int cx1, int cy1, int cx2, int cy2, int rx, int ry, bool SolidBackground);
	virtual void __fastcall Render_ieCIELab_alpha(TIEBitmap* Dest, int Transparency, bool UseAlpha, System::PByte SimAlphaRow, System::PInteger XLUT, System::PInteger YLUT, int xSrc, int ySrc, int xDst, int yDst, int cx1, int cy1, int cx2, int cy2, int rx, int ry, bool SolidBackground, double Opacity);
	virtual void __fastcall Render_ie48RGB(TIEBitmap* Dest, System::PInteger XLUT, System::PInteger YLUT, int xSrc, int ySrc, int xDst, int yDst, int cx1, int cy1, int cx2, int cy2, int rx, int ry, bool SolidBackground, Hyieutils::TIERenderOperation RenderOperation);
	virtual void __fastcall Render_ie48RGB_alpha(TIEBitmap* Dest, int Transparency, bool UseAlpha, System::PByte SimAlphaRow, System::PInteger XLUT, System::PInteger YLUT, int xSrc, int ySrc, int xDst, int yDst, int cx1, int cy1, int cx2, int cy2, int rx, int ry, bool SolidBackground, Hyieutils::TIERenderOperation RenderOperation, double Opacity);
	virtual void __fastcall Render_ieVirtual(TIEBitmap* Dest, System::PInteger XLUT, System::PInteger YLUT, int xSrc, int ySrc, int xDst, int yDst, int cx1, int cy1, int cx2, int cy2, int rx, int ry, bool SolidBackground, Hyieutils::TIERenderOperation RenderOperation);
	virtual void __fastcall Render_ieVirtual_alpha(TIEBitmap* Dest, int Transparency, bool UseAlpha, System::PByte SimAlphaRow, System::PInteger XLUT, System::PInteger YLUT, int xSrc, int ySrc, int xDst, int yDst, int cx1, int cy1, int cx2, int cy2, int rx, int ry, bool SolidBackground, Hyieutils::TIERenderOperation RenderOperation, double Opacity);
	
public:
	System::Classes::TComponent* fOwner;
	__fastcall virtual TIEBitmap()/* overload */;
	__fastcall TIEBitmap(int ImageWidth, int ImageHeight, Hyieutils::TIEPixelFormat ImagePixelFormat)/* overload */;
	__fastcall TIEBitmap(int ImageWidth, int ImageHeight, System::Uitypes::TColor FillColor, int Alpha)/* overload */;
	__fastcall TIEBitmap(const System::UnicodeString FileName, TIOParams* IOParams)/* overload */;
	__fastcall TIEBitmap(TIEBitmap* image)/* overload */;
	__fastcall TIEBitmap(TIEBitmap* image, const System::Types::TRect &Rect)/* overload */;
	__fastcall TIEBitmap(Vcl::Graphics::TBitmap* image, const System::Types::TRect &Rect)/* overload */;
	__fastcall TIEBitmap(Vcl::Graphics::TBitmap* image)/* overload */;
	__fastcall TIEBitmap(void * Buffer, int BufferSize, int Format)/* overload */;
	__fastcall TIEBitmap(int ImageWidth, int ImageHeight, TIELocation ImageLocation);
	__fastcall virtual ~TIEBitmap();
	TIEBitmap* __fastcall CreateROIBitmap(const System::Types::TRect &Rect, Hyieutils::TIEPixelFormat ROIPixelFormat = (Hyieutils::TIEPixelFormat)(0x0), bool PerformAlphaCompositing = false);
	Iegdiplus::TIECanvas* __fastcall CreateROICanvas(const System::Types::TRect &Rect, bool AntiAlias = true, bool UseGDIPlus = true, bool PerformAlphaCompositing = false)/* overload */;
	Iegdiplus::TIECanvas* __fastcall CreateROICanvas(bool AntiAlias = true, bool UseGDIPlus = true, bool PerformAlphaCompositing = false)/* overload */;
	virtual Hyiedefs::TRGB __fastcall GetPalette(int index);
	virtual void * __fastcall GetPaletteBuffer();
	virtual int __fastcall GetPaletteLen();
	virtual int __fastcall GetPaletteUsed();
	__property System::UnicodeString Filename = {read=fFilename, write=fFilename};
	__property int FileType = {read=fFileType, write=fFileType, nodefault};
	__property int Width = {read=GetWidth, write=SetWidth, nodefault};
	__property int Height = {read=GetHeight, write=SetHeight, nodefault};
	__property Hyieutils::TIEPixelFormat PixelFormat = {read=GetPixelFormat, write=SetPixelFormat, nodefault};
	virtual void __fastcall Assign(System::TObject* Source);
	void __fastcall AssignEx(System::TObject* Source, bool AssignParams = false);
	virtual void __fastcall AssignImage(TIEBaseBitmap* Source);
	void __fastcall AssignRect(System::TObject* Source, const System::Types::TRect &SourceRect, bool AssignParams = false);
	__property void * ScanLine[int Row] = {read=GetScanLine};
	virtual void * __fastcall GetSegment(int Row, int Col, int Width);
	void __fastcall UpdateFromTBitmap();
	void __fastcall AdjustCanvasOrientation();
	void __fastcall Negative();
	void __fastcall StretchValues();
	void __fastcall Normalize();
	void __fastcall FixContrast();
	void __fastcall FixChannelOffset();
	bool __fastcall CheckFormat(Hyieutils::TIEPixelFormatSet AllowedFormats, bool AutoConvert);
	void __fastcall Rectangle(int X1, int Y1, int X2, int Y2, System::Uitypes::TColor PenColor, int PenWidth = 0x1, int PenTransparency = 0xff, System::Uitypes::TColor BrushColor = (System::Uitypes::TColor)(0x1fffffff), int BrushTransparency = 0xff);
	__property void * Memory = {read=GetMemory};
	Ievision::_di_TIEVisionImage __fastcall GetIEVisionImage();
	void __fastcall AssignIEVisionImage(Ievision::_di_TIEVisionImage Source);
	bool __fastcall Read(const System::UnicodeString FileName, TIOParams* IOParams = (TIOParams*)(0x0), bool bCheckUnknown = true)/* overload */;
	bool __fastcall Read(System::Classes::TStream* Stream, int FileType = 0x0, TIOParams* IOParams = (TIOParams*)(0x0))/* overload */;
	bool __fastcall Read(void * Buffer, int BufferSize, int FileType = 0x0, TIOParams* IOParams = (TIOParams*)(0x0))/* overload */;
	bool __fastcall Write(const System::UnicodeString FileName, TIOParams* IOParams = (TIOParams*)(0x0))/* overload */;
	bool __fastcall Write(const System::UnicodeString FileName, int FileType, TIOParams* IOParams = (TIOParams*)(0x0))/* overload */;
	bool __fastcall Write(System::Classes::TStream* Stream, int FileType, TIOParams* IOParams = (TIOParams*)(0x0))/* overload */;
	void __fastcall SaveState();
	void __fastcall RestoreState();
	System::AnsiString __fastcall GetHash(Hyieutils::TIEHashAlgorithm Algorithm = (Hyieutils::TIEHashAlgorithm)(0x8003));
	__property Hyiedefs::TIEArrayOfPointer TBitmapScanlines = {read=fBitmapScanlines};
	__property Vcl::Graphics::TCanvas* Canvas = {read=GetCanvas};
	__property Iegdiplus::TIECanvas* IECanvas = {read=GetIECanvas};
	__property bool EncapsulatedFromTBitmap = {read=fEncapsulatedFromTBitmap, write=fEncapsulatedFromTBitmap, nodefault};
	__property bool EncapsulatedFromMemory = {read=fEncapsulatedFromMemory, write=fEncapsulatedFromMemory, nodefault};
	__property int Rowlen = {read=GetRowLen, write=SetRowLen, nodefault};
	virtual bool __fastcall Allocate(int ImageWidth, int ImageHeight, Hyieutils::TIEPixelFormat ImagePixelFormat = (Hyieutils::TIEPixelFormat)(0x5))/* overload */;
	virtual bool __fastcall Allocate(int ImageWidth, int ImageHeight, System::Uitypes::TColor FillColor, int Alpha = 0xff)/* overload */;
	void __fastcall EncapsulateTBitmap(Vcl::Graphics::TBitmap* obj, bool DoFreeImage = false);
	void __fastcall EncapsulateMemory(void * mem, int bmpWidth, int bmpHeight, Hyieutils::TIEPixelFormat bmpPixelFormat, bool DoFreeImage, TIEBitmapOrigin Origin = (TIEBitmapOrigin)(0x0));
	void __fastcall FreeImage(bool freeAlpha = true);
	void __fastcall SwitchTo(TIEBitmap* Target);
	__property TIEBitmap* AlphaChannel = {read=GetAlphaChannel};
	__property TIEBitmap* AlphaChannelOpt = {read=GetAlphaChannelOpt};
	bool __fastcall HasAlphaChannel(bool Validate = false);
	void __fastcall SyncAlphaChannel(bool AntiAlias = true);
	void __fastcall ReplaceAlphaChannel(TIEBitmap* Value);
	TIEBitmap* __fastcall DetachAlphaChannel(bool CreateIfNotExists = false);
	__property bool IsAlpha = {read=fIsAlpha, write=fIsAlpha, nodefault};
	__property TIELocation Location = {read=fLocation, write=SetLocation, nodefault};
	void __fastcall AddToImageList(Vcl::Imglist::TCustomImageList* Dest);
	void __fastcall CopyToTBitmap(Vcl::Graphics::TBitmap* Dest);
	void __fastcall CopyWithMask1(TIEBitmap* Dest, TIEMask* SourceMask, System::Uitypes::TColor Background)/* overload */;
	void __fastcall CopyWithMask1(TIEBitmap* Dest, TIEMask* SourceMask)/* overload */;
	void __fastcall CopyWithMask2(TIEBitmap* Dest, TIEMask* DestMask);
	void __fastcall CopyFromMemory(void * SrcBuffer, int SrcWidth, int SrcHeight, Hyieutils::TIEPixelFormat SrcPixelFormat, TIEBitmapOrigin SrcOrigin, int SrcRowLen);
	void __fastcall CopyFromTBitmap(Vcl::Graphics::TBitmap* Source);
	void __fastcall CopyFromTIEMask(TIEMask* Source);
	void __fastcall CopyToTIEMask(TIEMask* Dest);
	void __fastcall CopyToEx(TIEBitmap* Dest, int SrcX, int SrcY, int DstX, int DstY, int RectWidth, int RectHeight, bool CopyAlpha, TIEMergeMethod AlphaMerge = (TIEMergeMethod)(0x4), bool EllipticalCopy = false);
	void __fastcall CopyRectTo(TIEBitmap* Dest, int SrcX, int SrcY, int DstX, int DstY, int RectWidth, int RectHeight, bool CopyAlpha = false);
	bool __fastcall CopyToClipboard(bool IncludeImageEnFormat = true, bool IncludePNGFormat = false, int DpiX = 0xc8, int DpiY = 0xc8);
	bool __fastcall PasteFromClipboard();
	void __fastcall MergeRectTo(TIEBitmap* Dest, int SrcX, int SrcY, int DstX, int DstY, int RectWidth, int RectHeight, TIEMergeMethod MergeMethod = (TIEMergeMethod)(0x0), double MergePercent = 1.000000E+00, bool EllipticalMerge = false);
	void __fastcall MergeAlphaRectTo(TIEBitmap* Dest, int SrcX, int SrcY, int DstX, int DstY, int RectWidth, int RectHeight, TIEMergeMethod MergeMethod = (TIEMergeMethod)(0x0), double MergePercent = 1.000000E+00);
	virtual void * __fastcall GetRow(int Row);
	virtual void __fastcall FreeRow(int Row);
	void __fastcall Resize(int NewWidth, int NewHeight, double BackgroundValue = 0.000000E+00, int FillAlpha = 0xff, Hyieutils::TIEHAlign HorizAlign = (Hyieutils::TIEHAlign)(0x0), Hyieutils::TIEVAlign VertAlign = (Hyieutils::TIEVAlign)(0x0))/* overload */;
	void __fastcall Resize(int AddLeft, int AddTop, int AddRight, int AddBottom, double BackgroundValue, int FillAlpha = 0xff)/* overload */;
	void __fastcall Resample(int NewWidth, int NewHeight, Hyiedefs::TResampleFilter FilterType = (Hyiedefs::TResampleFilter)(0x0), bool MaintainAspectRatio = false, bool ShrinkOnly = false)/* overload */;
	void __fastcall Resample(double ScaleBy, Hyiedefs::TResampleFilter FilterType = (Hyiedefs::TResampleFilter)(0x0))/* overload */;
	void __fastcall Rotate(double Angle, Hyiedefs::TIEAntialiasMode AntiAliasMode = (Hyiedefs::TIEAntialiasMode)(0x1), System::Uitypes::TColor BackgroundColor = (System::Uitypes::TColor)(0xffffff))/* overload */;
	void __fastcall Rotate _DEPRECATED_ATTRIBUTE1("Remove the AntiAlias parameter - http://imageen.com/help/Compatibility.html") (double Angle, bool AntiAlias, Hyiedefs::TIEAntialiasMode AntialiasMode, System::Uitypes::TColor BackgroundColor)/* overload */;
	void __fastcall RotateEx(double Angle, Hyiedefs::TIEAntialiasMode AntialiasMode, System::Uitypes::TColor BackgroundColor, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender);
	void __fastcall Flip(Hyiedefs::TFlipDir Dir);
	void __fastcall Crop(int x1, int y1, int x2, int y2, System::Uitypes::TColor FillColor = (System::Uitypes::TColor)(0xffffff))/* overload */;
	void __fastcall Crop(const System::Types::TRect &Rect, System::Uitypes::TColor FillColor = (System::Uitypes::TColor)(0xffffff))/* overload */;
	bool __fastcall CropAlpha();
	__property Vcl::Graphics::TBitmap* VclBitmap = {read=GetVclBitmap, write=fBitmap};
	void __fastcall MoveRegion(int x1, int y1, int x2, int y2, int DstX, int DstY, double BackgroundValue, bool FillSource = true);
	void __fastcall CopyFromTDibBitmap(TIEDibbitmap* Source);
	void __fastcall MergeFromTDibBitmap(TIEDibbitmap* Source, int x, int y);
	void __fastcall CopyToTDibBitmap(TIEDibbitmap* Dest, int source_x, int source_y, int sourceWidth, int sourceHeight);
	void __fastcall CopyFromDIB(NativeUInt Source)/* overload */;
	void __fastcall CopyFromDIB(void * BitmapInfo, void * Pixels = (void *)(0x0))/* overload */;
	NativeUInt __fastcall CreateDIB()/* overload */;
	NativeUInt __fastcall CreateDIB(int x1, int y1, int x2, int y2)/* overload */;
	__property bool Pixels_ie1g[int x][int y] = {read=GetPixels_ie1g, write=SetPixels_ie1g};
	__property System::Byte Pixels_ie8[int x][int y] = {read=GetPixels_ie8, write=SetPixels_ie8};
	__property System::Word Pixels_ie16g[int x][int y] = {read=GetPixels_ie16g, write=SetPixels_ie16g};
	__property Hyiedefs::TRGB Pixels_ie24RGB[int x][int y] = {read=GetPixels_ie24RGB, write=SetPixels_ie24RGB};
	__property Hyiedefs::TRGBA Pixels_ie32RGB[int x][int y] = {read=GetPixels_ie32RGB, write=SetPixels_ie32RGB};
	__property float Pixels_ie32f[int x][int y] = {read=GetPixels_ie32f, write=SetPixels_ie32f};
	__property Hyiedefs::TCMYK Pixels_ieCMYK[int x][int y] = {read=GetPixels_ieCMYK, write=SetPixels_ieCMYK};
	__property Hyiedefs::TCIELab Pixels_ieCIELab[int x][int y] = {read=GetPixels_ieCIELab, write=SetPixels_ieCIELab};
	__property Hyiedefs::TRGB48 Pixels_ie48RGB[int x][int y] = {read=GetPixels_ie48RGB, write=SetPixels_ie48RGB};
	__property Hyiedefs::PRGB PPixels_ie24RGB[int x][int y] = {read=GetPPixels_ie24RGB};
	__property Hyiedefs::PRGBA PPixels_ie32RGB[int x][int y] = {read=GetPPixels_ie32RGB};
	__property Hyiedefs::PRGB48 PPixels_ie48RGB[int x][int y] = {read=GetPPixels_ie48RGB};
	__property Hyiedefs::TRGB Pixels[int x][int y] = {read=GetPixels, write=SetPixels};
	__property System::Byte Alpha[int x][int y] = {read=GetAlpha, write=SetAlpha};
	void __fastcall RenderToTIEBitmap(TIEBitmap* Dest, System::PInteger &XLUT, System::PInteger &YLUT, System::Types::PRect UpdRect, int xDst, int yDst, int dxDst, int dyDst, int xSrc, int ySrc, int dxSrc, int dySrc, bool EnableAlpha, bool SolidBackground, int Transparency, Hyiedefs::TResampleFilter Filter, bool FreeTables, Hyieutils::TIERenderOperation RenderOperation = (Hyieutils::TIERenderOperation)(0x0), double Opacity = 1.000000E+00);
	void __fastcall RenderToTBitmap(Vcl::Graphics::TBitmap* Dest, System::PInteger &XLUT, System::PInteger &YLUT, System::Types::PRect UpdRect, int xDst, int yDst, int dxDst, int dyDst, int xSrc, int ySrc, int dxSrc, int dySrc, bool EnableAlpha, bool SolidBackground, int Transparency, Hyiedefs::TResampleFilter Filter, bool FreeTables, Hyieutils::TIERenderOperation RenderOperation = (Hyieutils::TIERenderOperation)(0x0), double Opacity = 1.000000E+00);
	void __fastcall RenderToTBitmapEx(Vcl::Graphics::TBitmap* Dest, int xDst, int yDst, int dxDst, int dyDst, int xSrc, int ySrc, int dxSrc, int dySrc, int Transparency = 0xff, Hyiedefs::TResampleFilter Filter = (Hyiedefs::TResampleFilter)(0x0), Hyieutils::TIERenderOperation RenderOperation = (Hyieutils::TIERenderOperation)(0x0), double Opacity = 1.000000E+00)/* overload */;
	void __fastcall RenderToTIEBitmapEx(TIEBitmap* Dest, int xDst, int yDst, int dxDst, int dyDst, int xSrc, int ySrc, int dxSrc, int dySrc, bool bEnableAlpha = true, int Transparency = 0xff, Hyiedefs::TResampleFilter Filter = (Hyiedefs::TResampleFilter)(0x0), Hyieutils::TIERenderOperation RenderOperation = (Hyieutils::TIERenderOperation)(0x0), double Opacity = 1.000000E+00);
	void __fastcall RenderToCanvasWithAlpha(Vcl::Graphics::TCanvas* Dest, int xDst, int yDst, int dxDst, int dyDst, int xSrc, int ySrc, int dxSrc, int dySrc, int Transparency = 0xff, Hyiedefs::TResampleFilter Filter = (Hyiedefs::TResampleFilter)(0x0), Hyieutils::TIERenderOperation RenderOperation = (Hyieutils::TIERenderOperation)(0x0), double Opacity = 1.000000E+00);
	void __fastcall StretchRectTo(TIEBitmap* Dest, int xDst, int yDst, int dxDst, int dyDst, int xSrc, int ySrc, int dxSrc, int dySrc, Hyiedefs::TResampleFilter Filter, int Transparency = 0xff, double Opacity = 1.000000E+00);
	void __fastcall RenderToCanvas(Vcl::Graphics::TCanvas* DestCanvas, int xDst, int yDst, int dxDst, int dyDst, Hyiedefs::TResampleFilter Filter, double Gamma = 0.000000E+00, System::Uitypes::TColor BackgroundColor = (System::Uitypes::TColor)(0xffffff), bool MaintainAR = false)/* overload */;
	void __fastcall RenderToCanvas(Vcl::Graphics::TCanvas* DestCanvas, const System::Types::TRect &DestRect, Hyiedefs::TResampleFilter Filter, double Gamma = 0.000000E+00, System::Uitypes::TColor BackgroundColor = (System::Uitypes::TColor)(0xffffff), bool MaintainAR = false)/* overload */;
	void __fastcall DrawToCanvas(Vcl::Graphics::TCanvas* DestCanvas, int xDst, int yDst);
	void __fastcall DrawToCanvasWithAlpha(Vcl::Graphics::TCanvas* DestCanvas, int xDst, int yDst, int Transparency = 0xff, double Opacity = 1.000000E+00);
	void __fastcall DrawToTIEBitmap(TIEBitmap* Dest, int XDest, int YDest)/* overload */;
	void __fastcall DrawToTIEBitmap(TIEBitmap* Dest, int XDest, int YDest, const Hyiedefs::TIERectangle &SrcRect)/* overload */;
	void __fastcall DrawToTIEBitmap(TIEBitmap* Dest, const Hyiedefs::TIERectangle &DestRect, const Hyiedefs::TIERectangle &SrcRect, Hyiedefs::TResampleFilter Filter = (Hyiedefs::TResampleFilter)(0x5))/* overload */;
	void __fastcall SynchronizeRGBA(bool RGBAtoAlpha, bool UpdatePixelFormat = false);
	void __fastcall MergeWithAlpha(TIEBitmap* Bitmap, int DstX = 0x0, int DstY = 0x0, int DstWidth = 0xffffffff, int DstHeight = 0xffffffff, int Transparency = 0xff, Hyiedefs::TResampleFilter ResampleFilter = (Hyiedefs::TResampleFilter)(0x0), Hyieutils::TIERenderOperation Operation = (Hyieutils::TIERenderOperation)(0x0), bool Resample = true, int SrcX = 0x0, int SrcY = 0x0, double Opacity = 1.000000E+00);
	void __fastcall Changed();
	__property bool Full = {read=fFull, write=fFull, nodefault};
	__property TIEBitmapOrigin Origin = {read=fOrigin, write=SetOrigin, nodefault};
	System::UnicodeString __fastcall DrawBanner(const System::UnicodeString Msg = System::UnicodeString(), bool AtTop = false);
	bool __fastcall SyncFull();
	void __fastcall Fill(double Value)/* overload */;
	void __fastcall Fill(Hyiedefs::TRGBA Value)/* overload */;
	void __fastcall FillRect(int x1, int y1, int x2, int y2, double Value);
	void __fastcall GradientFill(double StartValue, double EndValue, Hyiedefs::TIEGradientDir Direction = (Hyiedefs::TIEGradientDir)(0x1));
	void __fastcall GradientFillRect(int x1, int y1, int x2, int y2, double StartValue, double EndValue, Hyiedefs::TIEGradientDir Direction = (Hyiedefs::TIEGradientDir)(0x1));
	void __fastcall AlphaFill(System::Byte Value, bool Scaled = false)/* overload */;
	void __fastcall AlphaFill(System::Byte StartValue, System::Byte EndValue, Hyiedefs::TIEGradientDir Direction = (Hyiedefs::TIEGradientDir)(0x1))/* overload */;
	void __fastcall AlphaFillRect(int x1, int y1, int x2, int y2, System::Byte Value, bool Scaled = false)/* overload */;
	void __fastcall AlphaFillRect(int x1, int y1, int x2, int y2, System::Byte StartValue, System::Byte EndValue, Hyiedefs::TIEGradientDir Direction = (Hyiedefs::TIEGradientDir)(0x1))/* overload */;
	__property __int64 MinFileSize = {read=fMinFileSize, write=fMinFileSize};
	void __fastcall RemoveAlphaChannel(bool Merge = false, System::Uitypes::TColor BackgroundColor = (System::Uitypes::TColor)(0xffffff));
	void __fastcall FeatherAlphaEdges(int FeatherDepth, bool Quick = false);
	void __fastcall SetTransparentColors(Hyiedefs::TRGB MinColor, Hyiedefs::TRGB MaxColor, int Alpha)/* overload */;
	void __fastcall SetTransparentColors(System::Uitypes::TColor MinColor, System::Uitypes::TColor MaxColor, int Alpha)/* overload */;
	void __fastcall SetColorFromAlpha(int MinAlpha, int MaxAlpha, System::Uitypes::TColor Color);
	__property Hyieutils::TIEDitherMethod DefaultDitherMethod = {read=fDefaultDitherMethod, write=fDefaultDitherMethod, nodefault};
	__property double BlackValue = {read=fBlackValue, write=fBlackValue};
	__property double WhiteValue = {read=fWhiteValue, write=fWhiteValue};
	void __fastcall AssignColorMap(Hyiedefs::TIEArrayOfTRGB Map);
	void __fastcall AutoCalcBWValues();
	__property int ChannelOffset[int idx] = {read=GetChannelOffset, write=SetChannelOffset};
	__property int Contrast = {read=fContrast, write=fContrast, nodefault};
	__property TIEMask* AdjustmentsMask = {read=GetAdjustmentsMask};
	bool __fastcall IsGrayScale(int Tolerance = 0x0);
	bool __fastcall IsAllBlack();
	bool __fastcall IsBlank();
	__property int BitAlignment = {read=fBitAlignment, write=SetBitAlignment, nodefault};
	bool __fastcall IsEmpty();
	void __fastcall Clear();
	void __fastcall CopyAndConvertFormat(TIEBitmap* Source);
	__property int ChannelCount = {read=GetChannelCount, write=SetChannelCount, nodefault};
	__property int BitCount = {read=GetBitCount, write=SetBitCount, nodefault};
	__property TIEMemoryAllocator MemoryAllocator = {read=fMemoryAllocator, write=SetMemoryAllocator, nodefault};
	int __fastcall CalcRAWSize();
	void __fastcall SaveRAWToBufferOrStream(void * Buffer, System::Classes::TStream* Stream, bool StreamHasSize = true);
	bool __fastcall LoadRAWFromBufferOrStream(void * Buffer, System::Classes::TStream* Stream);
	void __fastcall LoadFromResource(NativeUInt Instance, const System::UnicodeString ResName, System::WideChar * ResType, int Format = 0x0)/* overload */;
	void __fastcall LoadFromResource(NativeUInt Instance, const int ResID, System::WideChar * ResType, int Format = 0x0)/* overload */;
	__property int CanvasCurrentAlpha = {read=fCanvasCurrentAlpha, write=SetCanvasCurrentAlpha, nodefault};
	virtual void __fastcall CopyPaletteTo(TIEBaseBitmap* Dest);
	__property int FragmentsCount = {read=fFragmentsCount, nodefault};
	__property System::Classes::TNotifyEvent OnChanged = {read=fOnChanged, write=fOnChanged};
	__property Hyiedefs::TIEProgressEvent OnProgress = {read=fOnProgress, write=fOnProgress};
	__property bool Modified = {read=fModified, write=SetModified, nodefault};
	__property TIERenderVirtualPixel OnRenderVirtualPixel = {read=fOnRenderVirtualPixel, write=SetOnRenderVirtualPixel};
	__property System::TObject* VirtualBitmapProvider = {read=fVirtualBitmapProvider, write=SetVirtualBitmapProvider};
	__property bool IsVirtual = {read=fIsVirtual, nodefault};
	__property TIEICC* ColorProfile = {read=fColorProfile};
	__property bool ParamsEnabled = {read=GetParamsEnabled, write=SetParamsEnabled, nodefault};
	__property TIOParams* Params = {read=GetParams};
	__property bool WicFastLoading = {read=fWicFastLoading, write=fWicFastLoading, nodefault};
};


class PASCALIMPLEMENTATION TIEMask : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	int fWidth;
	int fHeight;
	int fBitsperpixel;
	__int64 fRowlen;
	System::Byte *fBits;
	int fX1;
	int fY1;
	int fX2;
	int fY2;
	Hyiedefs::TBitmapInfoHeader256 fBitmapInfoHeader1;
	System::Byte *fTmpBmp;
	int fTmpBmpWidth;
	int fTmpBmpHeight;
	Hyiedefs::TPointerArray *fTmpBmpScanline;
	bool fFull;
	Vcl::Graphics::TBitmap* fDrawPixelBitmap;
	Hyiedefs::TRGB *fDrawPixelPtr;
	int __fastcall DrawHorizontalLine(int Alpha, int xleft, int xright, int y);
	void __fastcall DrawSinglePolygon(int Alpha, Hyiedefs::PPointArray SelPoly, int SelPolyCount);
	void * __fastcall GetScanLine(int Row);
	void __fastcall CheckMemoryAllocation();
	System::PByte __fastcall GetBits();
	void __fastcall SetBitsPerPixel(int value);
	
public:
	__fastcall TIEMask();
	__fastcall virtual ~TIEMask();
	void __stdcall SetPixel(int x, int y, int Alpha);
	int __stdcall GetPixel(int x, int y);
	void __fastcall SetRectangle(const System::Types::TRect &Rect, int Alpha)/* overload */;
	void __fastcall SetRectangle(int x1, int y1, int x2, int y2, int Alpha)/* overload */;
	void __fastcall SetEllipse(int CenterX, int CenterY, int Width, int Height, int Alpha);
	void __fastcall AllocateBits(int width, int height, int bitsperpixel, bool resetSelRect = true);
	void __fastcall Resize(int NewWidth, int NewHeight);
	void __fastcall FreeBits();
	void __fastcall CopyBitmap(Vcl::Graphics::TBitmap* Dest, Vcl::Graphics::TBitmap* Source, bool dstonlymask, bool srconlymask);
	void __fastcall CopyIEBitmap(TIEBitmap* Dest, TIEBitmap* Source, bool dstonlymask, bool srconlymask, bool UseAlphaChannel);
	void __fastcall CopyIEBitmapAlpha(TIEBitmap* Dest, TIEBitmap* Source, bool dstonlymask, bool srconlymask);
	void __fastcall DrawPolygon(int Alpha, Hyiedefs::PPointArray SelPoly, int SelPolyCount)/* overload */;
	void __fastcall DrawPolygon(int Alpha, System::PInteger Alphas, Hyiedefs::PPointArray SelPoly, int SelPolyCount)/* overload */;
	void __fastcall CombineWithAlpha(TIEBitmap* SourceAlpha, int ox, int oy, bool SynchronizeBoundingRect);
	void __fastcall Fill(int Alpha = 0xff);
	void __fastcall Empty();
	bool __fastcall IsPointInside(int x, int y);
	void __fastcall TranslateBitmap(int &ox, int &oy, bool CutSel);
	void __fastcall InvertCanvas(Vcl::Graphics::TCanvas* Dest, int xDst, int yDst, int dxDst, int dyDst, int xMask, int yMask, int dxMask, int dyMask);
	void __fastcall DrawOuter(Vcl::Graphics::TBitmap* Dest, int xDst, int yDst, int dxDst, int dyDst, int xMask, int yMask, int dxMask, int dyMask, int AlphaBlend = 0xffffffff, System::Uitypes::TColor Color = (System::Uitypes::TColor)(0x0));
	void __fastcall DrawOutline(Vcl::Graphics::TCanvas* Dest, int xDst, int yDst, int dxDst, int dyDst, int xMask, int yMask, int dxMask, int dyMask, int AniCounter, System::Uitypes::TColor Color1, System::Uitypes::TColor Color2, System::Types::PRect actualRect = (System::Types::PRect)(0x0));
	void __fastcall Negative(int MaxVal);
	bool __fastcall SyncFull();
	void __fastcall SyncRect();
	void __fastcall Intersect(int x1, int y1, int x2, int y2);
	TIEMask* __fastcall CreateResampledMask(int NewWidth, int NewHeight);
	__property int Width = {read=fWidth, nodefault};
	__property int Height = {read=fHeight, nodefault};
	__property int BitsPerPixel = {read=fBitsperpixel, write=SetBitsPerPixel, nodefault};
	__property int X1 = {read=fX1, write=fX1, nodefault};
	__property int Y1 = {read=fY1, write=fY1, nodefault};
	__property int X2 = {read=fX2, write=fX2, nodefault};
	__property int Y2 = {read=fY2, write=fY2, nodefault};
	bool __fastcall IsEmpty();
	__property void * ScanLine[int row] = {read=GetScanLine};
	void __fastcall Assign(TIEMask* Source)/* overload */;
	void __fastcall Assign(TIEBitmap* Source, bool AdaptSource = true)/* overload */;
	__property __int64 Rowlen = {read=fRowlen};
	__property System::PByte Bits = {read=GetBits};
	__property bool Full = {read=fFull, write=fFull, nodefault};
private:
	void *__IIEMask;	// Hyiedefs::IIEMask 
	
public:
	operator Hyiedefs::IIEMask*(void) { return (Hyiedefs::IIEMask*)&__IIEMask; }
	
};


struct DECLSPEC_DRECORD TIEVirtualImageInfo
{
public:
	__int64 pos;
	__int64 vsize;
	void *ptr;
	bool bitmapped;
	int orig_width;
	int orig_height;
	bool HasAlphaChannel;
	Hyieutils::TIEDataAccess currentaccess;
	int ImWidth;
	int ImHeight;
	int ImBitCount;
	Hyieutils::TIEPixelFormat ImPixelFormat;
	unsigned Identifier;
};


typedef TIEVirtualImageInfo *PIEVirtualImageInfo;

struct DECLSPEC_DRECORD TIEVirtualToReleaseBmp
{
public:
	TIEVirtualImageInfo *info;
	TIEBitmap* bmp;
	int refcount;
};


typedef TIEVirtualToReleaseBmp *PIEVirtualToReleaseBmp;

struct DECLSPEC_DRECORD TIEVirtualFreeBlock
{
public:
	__int64 pos;
	unsigned vsize;
};


typedef TIEVirtualFreeBlock *PIEVirtualFreeBlock;

class PASCALIMPLEMENTATION TIEVirtualImageList : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Hyieutils::TIEFileBuffer* fmemmap;
	bool fUseDisk;
	__int64 fSize;
	System::Classes::TList* fImageInfo;
	System::Classes::TList* fToDiscardList;
	System::Classes::TList* fFreeBlocks;
	__int64 fInsPos;
	unsigned fAllocationBlock;
	int fMaxImagesInMemory;
	int fImagesInMemory;
	System::Classes::TList* fBmpToRelease;
	unsigned fLastVImageSize;
	System::UnicodeString fDescriptor;
	System::Syncobjs::TCriticalSection* fLock;
	int __fastcall GetImageCount();
	int __fastcall BmpToReleaseIndexOf(void * image);
	void __fastcall MergeConsecutiveBlocks();
	
protected:
	void __fastcall ReAllocateBits();
	void __fastcall FreeBits();
	void __fastcall RemoveImageInfo(int idx, bool deleteItem);
	void __fastcall DiscardImage(PIEVirtualImageInfo info);
	void __fastcall DiscardOne();
	void __fastcall DiscardAll();
	void __fastcall MapImage(void * image, Hyieutils::TIEDataAccess access);
	bool __fastcall AllocImage(void * image, int Width, int Height, int Bitcount, Hyieutils::TIEPixelFormat PixelFormat, bool HasAlpha, bool MapNow);
	void __fastcall DirectCopyToBitmap(void * image, TIEBitmap* bitmap);
	void __fastcall CreateEx();
	void __fastcall DestroyEx();
	
public:
	__fastcall TIEVirtualImageList(const System::UnicodeString Descriptor, bool UseDisk);
	__fastcall virtual ~TIEVirtualImageList();
	void __fastcall PrepareSpaceFor(int Width, int Height, int Bitcount, int ImageCount);
	void * __fastcall AddBlankImage(int Width, int Height, int Bitcount, Hyieutils::TIEPixelFormat PixelFormat, bool HasAlpha, bool MapNow);
	void * __fastcall AddBitmap(Vcl::Graphics::TBitmap* bitmap);
	void * __fastcall AddIEBitmap(TIEBaseBitmap* bitmap);
	void * __fastcall AddIEBitmapNoMap(TIEBaseBitmap* bitmap);
	void * __fastcall AddBitmapRect(Vcl::Graphics::TBitmap* bitmap, int xsrc, int ysrc, int dxsrc, int dysrc);
	void __fastcall CopyToIEBitmap(void * image, TIEBitmap* bitmap);
	void __fastcall CopyFromIEBitmap(void * image, TIEBitmap* bitmap);
	TIEBitmap* __fastcall GetBitmap(void * image);
	void __fastcall ReleaseBitmap(TIEBitmap* bitmap, bool changed);
	void __fastcall ReleaseBitmapByImage(void * image, bool changed);
	__property int MaxImagesInMemory = {read=fMaxImagesInMemory, write=fMaxImagesInMemory, nodefault};
	__property int ImageCount = {read=GetImageCount, nodefault};
	void __fastcall Delete(void * image);
	int __fastcall GetImageWidth(void * image);
	int __fastcall GetImageHeight(void * image);
	int __fastcall GetImageOriginalWidth(void * image);
	int __fastcall GetImageOriginalHeight(void * image);
	void __fastcall SetImageOriginalWidth(void * image, int Value);
	void __fastcall SetImageOriginalHeight(void * image, int Value);
	void __fastcall SetImageIdentifier(void * image, const System::WideString Value);
	int __fastcall GetImageBitCount(void * image);
	void * __fastcall GetImageBits(void * image, /* out */ TIEBitmapOrigin &origin);
	Hyieutils::TIEPixelFormat __fastcall GetImagePixelFormat(void * image);
	void * __fastcall GetImagePalette(void * image);
	void * __fastcall GetAlphaBits(void * image, /* out */ TIEBitmapOrigin &origin);
	__int64 __fastcall GetImageFilePos(void * image);
	int __fastcall FindImageIndex(void * image);
	void * __fastcall GetImageFromIndex(int index);
	void * __fastcall GetImageByIdentifier(const System::UnicodeString value);
	void __fastcall SaveToStream(System::Classes::TStream* Stream);
	bool __fastcall LoadFromStream(System::Classes::TStream* Stream);
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEDibbitmap : public TIEBaseBitmap
{
	typedef TIEBaseBitmap inherited;
	
private:
	unsigned fWidth;
	unsigned fHeight;
	unsigned fBitCount;
	unsigned fRowLen;
	NativeUInt fHDC;
	NativeUInt fDIB;
	Hyiedefs::TBitmapInfoHeader256 fBitmapInfoHeader1;
	void *fBits;
	
protected:
	virtual int __fastcall GetBitCount();
	virtual int __fastcall GetWidth();
	virtual int __fastcall GetHeight();
	virtual void __fastcall SetWidth(int Value);
	virtual void __fastcall SetHeight(int Value);
	virtual Hyieutils::TIEPixelFormat __fastcall GetPixelFormat();
	virtual int __fastcall GetRowLen();
	virtual void * __fastcall GetScanLine(int row);
	virtual Hyiedefs::TRGB __fastcall GetPalette(int index);
	virtual void * __fastcall GetPaletteBuffer();
	virtual void __fastcall SetPalette(int index, Hyiedefs::TRGB Value);
	virtual int __fastcall GetPaletteLen();
	virtual int __fastcall GetPaletteUsed();
	virtual void __fastcall SetPaletteUsed(int Value);
	
public:
	__fastcall TIEDibbitmap();
	__fastcall virtual ~TIEDibbitmap();
	bool __fastcall AllocateBits(unsigned BmpWidth, unsigned BmpHeight, unsigned BmpBitCount);
	virtual bool __fastcall Allocate(int ImageWidth, int ImageHeight, Hyieutils::TIEPixelFormat ImagePixelFormat)/* overload */;
	void __fastcall FreeBits();
	__property NativeUInt HDC = {read=fHDC, nodefault};
	__property NativeUInt DIB = {read=fDIB, nodefault};
	__property unsigned Width = {read=fWidth, nodefault};
	__property unsigned Height = {read=fHeight, nodefault};
	__property unsigned BitCount = {read=fBitCount, nodefault};
	__property void * Scanline[int row] = {read=GetScanLine};
	__property void * Bits = {read=fBits};
	__property int Rowlen = {read=GetRowLen, nodefault};
	void __fastcall CopyToTBitmap(Vcl::Graphics::TBitmap* Dest);
	virtual void __fastcall Assign(System::TObject* Source);
	virtual void __fastcall AssignImage(TIEBaseBitmap* Source);
	virtual void __fastcall CopyPaletteTo(TIEBaseBitmap* Dest);
	/* Hoisted overloads: */
	
public:
	inline bool __fastcall  Allocate(int ImageWidth, int ImageHeight, System::Uitypes::TColor FillColor, int Alpha = 0xff){ return TIEBaseBitmap::Allocate(ImageWidth, ImageHeight, FillColor, Alpha); }
	
};

#pragma pack(pop)

struct DECLSPEC_DRECORD OIAN_MARK_ATTRIBUTES
{
public:
	int uType;
	System::Types::TRect lrBounds;
	tagRGBQUAD rgbColor1;
	tagRGBQUAD rgbColor2;
	System::LongBool bHighlighting;
	System::LongBool bTransparent;
	unsigned uLineSize;
	unsigned uReserved1;
	unsigned uReserved2;
	tagLOGFONTA lfFont;
	unsigned bReserved3;
	int Time;
	System::LongBool bVisible;
	unsigned dwReserved4;
	System::StaticArray<int, 10> lReserved;
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEImagingObject : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	OIAN_MARK_ATTRIBUTES attrib;
	Hyiedefs::TIEPointArray *points;
	int pointsLen;
	char *text;
	TIEBitmap* image;
	
public:
	__fastcall TIEImagingObject();
	__fastcall virtual ~TIEImagingObject();
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEImagingAnnot : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::TObject* fParent;
	bool fUserChanged;
	System::Classes::TList* fObjects;
	TIEImagingObject* __fastcall GetObject(int idx);
	int __fastcall GetObjectsCount();
	
public:
	__fastcall TIEImagingAnnot();
	__fastcall virtual ~TIEImagingAnnot();
	void __fastcall LoadFromStandardBuffer(void * buffer, int buflen);
	void __fastcall SaveToStandardBuffer(void * &Buffer, int &BufferLength);
	__property bool UserChanged = {read=fUserChanged, write=fUserChanged, nodefault};
	void __fastcall Clear();
	void __fastcall Assign(TIEImagingAnnot* Source);
	void __fastcall SaveToStream(System::Classes::TStream* Stream);
	void __fastcall LoadFromStream(System::Classes::TStream* Stream);
	void __fastcall CopyToTImageEnVect(System::TObject* Target = (System::TObject*)(0x0));
	void __fastcall CopyFromTImageEnVect(System::TObject* Target = (System::TObject*)(0x0));
	void __fastcall CopyToTImageEnView(System::TObject* Target = (System::TObject*)(0x0));
	void __fastcall CopyFromTImageEnView(System::TObject* Target = (System::TObject*)(0x0));
	void __fastcall DrawToBitmap(TIEBitmap* target, bool Antialias);
	__property TIEImagingObject* Objects[int idx] = {read=GetObject};
	__property int ObjectsCount = {read=GetObjectsCount, nodefault};
	__property System::TObject* Parent = {read=fParent, write=fParent};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEImageEnAnnot : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::TObject* fParent;
	System::Classes::TMemoryStream* fData;
	bool fIEVectObjects;
	int __fastcall GetObjectsCount();
	
public:
	__fastcall TIEImageEnAnnot(System::TObject* parent);
	__fastcall virtual ~TIEImageEnAnnot();
	__classmethod bool __fastcall BufferContainsImageEnAnnot(void * buffer, int buflen, /* out */ bool &IsIEVectObjects);
	__classmethod bool __fastcall TIFFContainsImageEnAnnot(System::Classes::TStream* Stream, int ImageIndex)/* overload */;
	__classmethod bool __fastcall TIFFContainsImageEnAnnot(const System::WideString Filename, int ImageIndex)/* overload */;
	void __fastcall LoadFromBuffer(void * buffer, int buflen);
	void __fastcall SaveToBuffer(void * &Buffer, int &BufferLength);
	void __fastcall Clear();
	void __fastcall Assign(TIEImageEnAnnot* Source);
	void __fastcall SaveToStream(System::Classes::TStream* Stream);
	void __fastcall LoadFromStream(System::Classes::TStream* Stream);
	void __fastcall CopyToTImageEnVect(System::TObject* Target = (System::TObject*)(0x0));
	void __fastcall CopyFromTImageEnVect(System::TObject* Target = (System::TObject*)(0x0));
	void __fastcall CopyToTImageEnView(System::TObject* Target = (System::TObject*)(0x0));
	void __fastcall CopyFromTImageEnView(System::TObject* Target = (System::TObject*)(0x0));
	void __fastcall DrawToBitmap(TIEBitmap* target, bool Antialias);
	bool __fastcall IsEmpty();
	__property System::TObject* Parent = {read=fParent};
	__property int ObjectsCount = {read=GetObjectsCount, nodefault};
	__property bool HasVectorialObjects = {read=fIEVectObjects, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEWorkBitmap : public System::TObject
{
	typedef System::TObject inherited;
	
	
private:
	typedef System::DynamicArray<void *> _TIEWorkBitmap__1;
	
	
private:
	int fWidth;
	int fHeight;
	int fBitCount;
	int fRowLen;
	void *fBits;
	int fRowsPerFragment;
	_TIEWorkBitmap__1 fFragments;
	void * __fastcall GetScanline(int row);
	void __fastcall FragmentedAlloc();
	void __fastcall FreeFragments();
	
public:
	__fastcall TIEWorkBitmap(int BmpWidth, int BmpHeight, int BmpBitCount);
	__fastcall virtual ~TIEWorkBitmap();
	void __fastcall AllocateBits(int BmpWidth, int BmpHeight, int BmpBitCount);
	void __fastcall FreeBits();
	__property int Width = {read=fWidth, nodefault};
	__property int Height = {read=fHeight, nodefault};
	__property int BitCount = {read=fBitCount, nodefault};
	__property void * Scanline[int row] = {read=GetScanline};
	__property void * Bits = {read=fBits};
	__property int Rowlen = {read=fRowLen, nodefault};
	System::PByte __fastcall GetPByte(int row, int col);
	PWORD __fastcall GetPWord(int row, int col);
	Hyiedefs::PRGB __fastcall GetPRGB(int row, int col);
	System::PDouble __fastcall GetPDouble(int row, int col);
	Winapi::Windows::PSingle __fastcall GetPSingle(int row, int col);
	System::PInteger __fastcall GetPInteger(int row, int col);
	void __fastcall SetBit(int row, int col, int value);
};

#pragma pack(pop)

enum DECLSPEC_DENUM TIOPSCompression : unsigned char { ioPS_RLE, ioPS_G4FAX, ioPS_G3FAX2D, ioPS_JPEG };

enum DECLSPEC_DENUM TIOPDFCompression : unsigned char { ioPDF_UNCOMPRESSED, ioPDF_RLE, ioPDF_G4FAX, ioPDF_G3FAX2D, ioPDF_JPEG, ioPDF_LZW };

enum DECLSPEC_DENUM Iexbitmaps__41 : unsigned char { iepioShrinkOnly, iepioCentered };

typedef System::Set<Iexbitmaps__41, Iexbitmaps__41::iepioShrinkOnly, Iexbitmaps__41::iepioCentered> TIOPDFImageOptions;

enum DECLSPEC_DENUM TIOPDFPaperSize : unsigned char { iepA0, iepA1, iepA2, iepA3, iepA4, iepA5, iepA6, iepB5, iepLetter, iepLegal, iepLedger, iepTabloid, iepAuto, iepUnknown };

enum DECLSPEC_DENUM TIOTIFFCompression : unsigned char { ioTIFF_UNCOMPRESSED, ioTIFF_CCITT1D, ioTIFF_G3FAX1D, ioTIFF_G3FAX2D, ioTIFF_G4FAX, ioTIFF_LZW, ioTIFF_OLDJPEG, ioTIFF_JPEG, ioTIFF_PACKBITS, ioTIFF_ZIP, ioTIFF_DEFLATE, ioTIFF_UNKNOWN };

enum DECLSPEC_DENUM TIOTIFFPhotometInterpret : unsigned char { ioTIFF_WHITEISZERO, ioTIFF_BLACKISZERO, ioTIFF_RGB, ioTIFF_RGBPALETTE, ioTIFF_TRANSPMASK, ioTIFF_CMYK, ioTIFF_YCBCR, ioTIFF_CIELAB };

enum DECLSPEC_DENUM TIOJPEGColorspace : unsigned char { ioJPEG_RGB, ioJPEG_GRAYLEV, ioJPEG_YCbCr, ioJPEG_CMYK, ioJPEG_YCbCrK };

enum DECLSPEC_DENUM TIOJ2000ColorSpace : unsigned char { ioJ2000_GRAYLEV, ioJ2000_RGB, ioJ2000_YCbCr };

enum DECLSPEC_DENUM TIOJ2000ScalableBy : unsigned char { ioJ2000_Rate, ioJ2000_Resolution };

enum DECLSPEC_DENUM TIOJPEGDctMethod : unsigned char { ioJPEG_ISLOW, ioJPEG_IFAST, ioJPEG_FLOAT };

enum DECLSPEC_DENUM TIOJPEGCromaSubsampling : unsigned char { ioJPEG_MEDIUM, ioJPEG_HIGH, ioJPEG_NONE };

enum DECLSPEC_DENUM TIOJPEGScale : unsigned char { ioJPEG_AUTOCALC, ioJPEG_FULLSIZE, ioJPEG_HALF, ioJPEG_QUARTER, ioJPEG_EIGHTH };

enum DECLSPEC_DENUM TIOBMPVersion : unsigned char { ioBMP_BM, ioBMP_BM3, ioBMP_BMOS2V1, ioBMP_BMOS2V2, ioBMP_V4, ioBMP_V5 };

enum DECLSPEC_DENUM TIOBMPCompression : unsigned char { ioBMP_UNCOMPRESSED, ioBMP_RLE };

enum DECLSPEC_DENUM TIOPCXCompression : unsigned char { ioPCX_UNCOMPRESSED, ioPCX_RLE };

enum DECLSPEC_DENUM TIOPNGFilter : unsigned char { ioPNG_FILTER_NONE, ioPNG_FILTER_SUB, ioPNG_FILTER_PAETH, ioPNG_FILTER_UP, ioPNG_FILTER_AVG, ioPNG_FILTER_ALL };

enum DECLSPEC_DENUM TIEGIFAction : unsigned char { ioGIF_None, ioGIF_DontRemove, ioGIF_DrawBackground, ioGIF_RestorePrev };

typedef System::StaticArray<System::Types::TSize, 16> TIOICOSizes;

typedef System::StaticArray<int, 16> TIOICOBitCount;

enum DECLSPEC_DENUM TIOBMPRAWChannelOrder : unsigned char { coRGB, coBGR };

enum DECLSPEC_DENUM TIOBMPRAWDataFormat : unsigned char { dfBinary, dfTextDecimal, dfTextHex };

enum DECLSPEC_DENUM TIOBMPRAWPlanes : unsigned char { plInterleaved, plPlanar };

enum DECLSPEC_DENUM TIOByteOrder : unsigned char { ioBigEndian, ioLittleEndian };

enum DECLSPEC_DENUM TIEDicomRange : unsigned char { iedrAdjust, iedrSetBlackWhite };

enum DECLSPEC_DENUM TIOICOFormat : unsigned char { ieifICO, ieifPNG };

enum DECLSPEC_DENUM TIEDicomCompression : unsigned char { iedcUncompressed_Implicit, iedcUncompressed, iedcUncompressed_BE, iedcRLE, iedcLSJPEG1, iedcLSJPEG2, iedcJPEG, iedcJPEG12Bit, iedcJPEG2000, iedcLosslessJPEG2000, iedcMPEG };

enum DECLSPEC_DENUM TIERAWEmbeddedJpegLoading : unsigned char { ierlDefault, ierlScaled, ierlWIC };

enum DECLSPEC_DENUM TIERAWInterpolation : unsigned char { ieRAWInterpolationLinear, ieRAWInterpolationVNG, ieRAWInterpolationPPG, ieRAWInterpolationAHD, ieRAWInterpolationDCB };

enum DECLSPEC_DENUM TIERAWHighlight : unsigned char { ieRAWHighlightClip, ieRAWHighlightUnclip, ieRAWHighlightBlend, ieRAWHighlightRebuild1, ieRAWHighlightRebuild2, ieRAWHighlightRebuild3, ieRAWHighlightRebuild4, ieRAWHighlightRebuild5, ieRAWHighlightRebuild6, ieRAWHighlightRebuild7 };

enum DECLSPEC_DENUM TIERAWOutputColorSpace : unsigned char { iercsRAW, iercsSRGB, iercsADOBE, iercsWIDE, iercsPROPHOTO, iercsXYZ };

struct DECLSPEC_DRECORD TIEWicCodecInfo
{
public:
	System::WideString Name;
	System::WideString Author;
	System::WideString Version;
};


class PASCALIMPLEMENTATION TIOParams : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::TObject* fAttachedTo;
	Hyieutils::TIEDictionary* fDict;
	int fBitsPerSample;
	System::WideString fFileName;
	int fSamplesPerPixel;
	int fWidth;
	int fHeight;
	bool fAutoScaleImport;
	int fLoadToWidth;
	int fLoadToHeight;
	int fFileType;
	int fImageCount;
	bool fGetThumbnail;
	bool fGetMetaData;
	bool fIsResource;
	bool fEnableAdjustOrientation;
	int fOriginalWidth;
	int fOriginalHeight;
	TIOTIFFCompression fTIFF_Compression;
	int fTIFF_ImageIndex;
	int fTIFF_SubIndex;
	int fTIFF_NewSubfileType;
	TIOTIFFPhotometInterpret fTIFF_PhotometInterpret;
	int fTIFF_PlanarConf;
	int fTIFF_XPos;
	int fTIFF_YPos;
	int fTIFF_GetTile;
	System::AnsiString fTIFF_DocumentName;
	System::AnsiString fTIFF_ImageDescription;
	System::AnsiString fTIFF_PageName;
	int fTIFF_PageNumber;
	int fTIFF_PageCount;
	int fTIFF_Orientation;
	bool fTIFF_EnableAdjustOrientation;
	int fTIFF_JPEGQuality;
	TIOJPEGColorspace fTIFF_JPEGColorSpace;
	int fTIFF_ZIPCompression;
	int fTIFF_StripCount;
	int fTIFF_ImageCount;
	int fTIFF_FillOrder;
	TIOByteOrder fTIFF_ByteOrder;
	Hyiedefs::TIEArrayOfByte fTIFF_PhotoshopImageResources;
	Hyiedefs::TIEArrayOfByte fTIFF_PhotoshopImageSourceData;
	bool fTIFF_BigTIFF;
	bool fTIFF_Normalize32fImages;
	int fDCX_ImageIndex;
	System::AnsiString fGIF_Version;
	int fGIF_ImageIndex;
	int fGIF_XPos;
	int fGIF_YPos;
	int fGIF_DelayTime;
	bool fGIF_FlagTranspColor;
	Hyiedefs::TRGB fGIF_TranspColor;
	bool fGIF_Interlaced;
	int fGIF_WinWidth;
	int fGIF_WinHeight;
	Hyiedefs::TRGB fGIF_Background;
	int fGIF_Ratio;
	System::Classes::TStringList* fGIF_Comments;
	TIEGIFAction fGIF_Action;
	bool fGIF_RAWLoad;
	int fGIF_ImageCount;
	TIOJPEGColorspace fJPEG_ColorSpace;
	int fJPEG_Quality;
	TIOJPEGDctMethod fJPEG_DCTMethod;
	TIOJPEGCromaSubsampling fJPEG_CromaSubsampling;
	bool fJPEG_OptimalHuffman;
	int fJPEG_Smooth;
	bool fJPEG_Progressive;
	TIOJPEGScale fJPEG_Scale;
	TIEMarkerList* fJPEG_MarkerList;
	int fJPEG_ScaleUsed;
	int fJPEG_WarningTot;
	int fJPEG_WarningCode;
	bool fJPEG_EnableAdjustOrientation;
	bool fJPEG_GetExifThumbnail;
	TIOJ2000ColorSpace fJ2000_ColorSpace;
	double fJ2000_Rate;
	TIOJ2000ScalableBy fJ2000_ScalableBy;
	int fJ2000_SubSamplingH;
	int fJ2000_SubSamplingV;
	int fJ2000_Reduce;
	double fJ2000_Quality;
	int fPCX_Version;
	TIOPCXCompression fPCX_Compression;
	TIOBMPVersion fBMP_Version;
	TIOBMPCompression fBMP_Compression;
	bool fBMP_HandleTransparency;
	int fICO_ImageIndex;
	Hyiedefs::TRGB fICO_Background;
	TIOICOFormat fICO_Format;
	int fCUR_ImageIndex;
	int fCUR_XHotSpot;
	int fCUR_YHotSpot;
	Hyiedefs::TRGB fCUR_Background;
	bool fPNG_Interlaced;
	Hyiedefs::TRGB fPNG_Background;
	TIOPNGFilter fPNG_Filter;
	int fPNG_Compression;
	System::Classes::TStringList* fPNG_TextKeys;
	System::Classes::TStringList* fPNG_TextValues;
	TIEDicomTags* fDICOM_Tags;
	double fDICOM_WindowCenterOffset;
	TIEDicomRange fDICOM_Range;
	int fDICOM_JPEGQuality;
	double fDICOM_J2000Rate;
	double fDICOM_RescaleIntercept;
	double fDICOM_RescaleSlope;
	double fDICOM_WindowCenter;
	double fDICOM_WindowWidth;
	TIEDicomCompression fDICOM_Compression;
	bool fDICOM_ContainsImage;
	int fTGA_XPos;
	int fTGA_YPos;
	bool fTGA_Compressed;
	System::AnsiString fTGA_Descriptor;
	System::AnsiString fTGA_Author;
	System::TDateTime fTGA_Date;
	System::AnsiString fTGA_ImageName;
	Hyiedefs::TRGB fTGA_Background;
	double fTGA_AspectRatio;
	double fTGA_Gamma;
	bool fTGA_GrayLevel;
	TIEIPTCInfoList* fIPTC_Info;
	TIEImagingAnnot* fImagingAnnot;
	TIEImageEnAnnot* fImageEnAnnot;
	System::Classes::TStringList* fPXM_Comments;
	System::Classes::TList* fEXIF_Tags;
	bool fEXIF_HasEXIFData;
	int fEXIF_Orientation;
	TIEBitmap* fEXIF_Bitmap;
	System::AnsiString fEXIF_ImageDescription;
	System::AnsiString fEXIF_Make;
	System::AnsiString fEXIF_Model;
	double fEXIF_XResolution;
	double fEXIF_YResolution;
	int fEXIF_ResolutionUnit;
	System::AnsiString fEXIF_Software;
	System::AnsiString fEXIF_Artist;
	System::AnsiString fEXIF_DateTime;
	System::StaticArray<double, 2> fEXIF_WhitePoint;
	System::StaticArray<double, 6> fEXIF_PrimaryChromaticities;
	System::StaticArray<double, 3> fEXIF_YCbCrCoefficients;
	int fEXIF_YCbCrPositioning;
	System::StaticArray<double, 6> fEXIF_ReferenceBlackWhite;
	System::AnsiString fEXIF_Copyright;
	double fEXIF_ExposureTime;
	double fEXIF_FNumber;
	int fEXIF_ExposureProgram;
	System::StaticArray<int, 2> fEXIF_ISOSpeedRatings;
	System::AnsiString fEXIF_ExifVersion;
	System::AnsiString fEXIF_DateTimeOriginal;
	System::AnsiString fEXIF_DateTimeDigitized;
	double fEXIF_CompressedBitsPerPixel;
	double fEXIF_ShutterSpeedValue;
	double fEXIF_ApertureValue;
	double fEXIF_BrightnessValue;
	double fEXIF_ExposureBiasValue;
	double fEXIF_MaxApertureValue;
	double fEXIF_SubjectDistance;
	int fEXIF_MeteringMode;
	int fEXIF_LightSource;
	int fEXIF_Flash;
	double fEXIF_FocalLength;
	System::AnsiString fEXIF_SubsecTime;
	System::AnsiString fEXIF_SubsecTimeOriginal;
	System::AnsiString fEXIF_SubsecTimeDigitized;
	System::AnsiString fEXIF_FlashPixVersion;
	int fEXIF_ColorSpace;
	int fEXIF_ExifImageWidth;
	int fEXIF_ExifImageHeight;
	System::AnsiString fEXIF_RelatedSoundFile;
	double fEXIF_FocalPlaneXResolution;
	double fEXIF_FocalPlaneYResolution;
	int fEXIF_FocalPlaneResolutionUnit;
	double fEXIF_ExposureIndex;
	int fEXIF_SensingMethod;
	int fEXIF_FileSource;
	int fEXIF_SceneType;
	System::WideString fEXIF_UserComment;
	System::AnsiString fEXIF_UserCommentCode;
	Iexclasses::TIETagsHandler* fEXIF_MakerNote;
	int fEXIF_XPRating;
	System::WideString fEXIF_XPTitle;
	System::WideString fEXIF_XPComment;
	System::WideString fEXIF_XPAuthor;
	System::WideString fEXIF_XPKeywords;
	System::WideString fEXIF_XPSubject;
	int fEXIF_ExposureMode;
	int fEXIF_WhiteBalance;
	double fEXIF_DigitalZoomRatio;
	int fEXIF_FocalLengthIn35mmFilm;
	int fEXIF_SceneCaptureType;
	int fEXIF_GainControl;
	int fEXIF_Contrast;
	int fEXIF_Saturation;
	int fEXIF_Sharpness;
	int fEXIF_SubjectDistanceRange;
	System::AnsiString fEXIF_ImageUniqueID;
	System::AnsiString fEXIF_GPSVersionID;
	System::AnsiString fEXIF_GPSLatitudeRef;
	double fEXIF_GPSLatitudeDegrees;
	double fEXIF_GPSLatitudeMinutes;
	double fEXIF_GPSLatitudeSeconds;
	System::AnsiString fEXIF_GPSLongitudeRef;
	double fEXIF_GPSLongitudeDegrees;
	double fEXIF_GPSLongitudeMinutes;
	double fEXIF_GPSLongitudeSeconds;
	System::AnsiString fEXIF_GPSAltitudeRef;
	double fEXIF_GPSAltitude;
	double fEXIF_GPSTimeStampHour;
	double fEXIF_GPSTimeStampMinute;
	double fEXIF_GPSTimeStampSecond;
	System::AnsiString fEXIF_GPSSatellites;
	System::AnsiString fEXIF_GPSStatus;
	System::AnsiString fEXIF_GPSMeasureMode;
	double fEXIF_GPSDOP;
	System::AnsiString fEXIF_GPSSpeedRef;
	double fEXIF_GPSSpeed;
	System::AnsiString fEXIF_GPSTrackRef;
	double fEXIF_GPSTrack;
	System::AnsiString fEXIF_GPSImgDirectionRef;
	double fEXIF_GPSImgDirection;
	System::AnsiString fEXIF_GPSMapDatum;
	System::AnsiString fEXIF_GPSDestLatitudeRef;
	double fEXIF_GPSDestLatitudeDegrees;
	double fEXIF_GPSDestLatitudeMinutes;
	double fEXIF_GPSDestLatitudeSeconds;
	System::AnsiString fEXIF_GPSDestLongitudeRef;
	double fEXIF_GPSDestLongitudeDegrees;
	double fEXIF_GPSDestLongitudeMinutes;
	double fEXIF_GPSDestLongitudeSeconds;
	System::AnsiString fEXIF_GPSDestBearingRef;
	double fEXIF_GPSDestBearing;
	System::AnsiString fEXIF_GPSDestDistanceRef;
	double fEXIF_GPSDestDistance;
	System::AnsiString fEXIF_GPSDateStamp;
	System::AnsiString fEXIF_InteropIndex;
	System::AnsiString fEXIF_InteropVersion;
	System::AnsiString fEXIF_CameraOwnerName;
	System::AnsiString fEXIF_BodySerialNumber;
	System::AnsiString fEXIF_LensMake;
	System::AnsiString fEXIF_LensModel;
	System::AnsiString fEXIF_LensSerialNumber;
	double fEXIF_Gamma;
	System::StaticArray<int, 4> fEXIF_SubjectArea;
	int fEXIF_SubjectLocationX;
	int fEXIF_SubjectLocationY;
	int fAVI_FrameCount;
	double fAVI_FrameDelayTime;
	int fMEDIAFILE_FrameCount;
	double fMEDIAFILE_FrameDelayTime;
	int fPS_PaperWidth;
	int fPS_PaperHeight;
	TIOPSCompression fPS_Compression;
	System::AnsiString fPS_Title;
	int fPDF_PaperWidth;
	int fPDF_PaperHeight;
	int fPDF_PageMargin;
	TIOPDFImageOptions fPDF_ImageOptions;
	TIOPDFCompression fPDF_Compression;
	System::WideString fPDF_Title;
	System::WideString fPDF_Author;
	System::WideString fPDF_Subject;
	System::WideString fPDF_Keywords;
	System::WideString fPDF_Creator;
	System::WideString fPDF_Producer;
	System::WideString fPDF_CreationDate;
	System::WideString fPDF_ModDate;
	System::UnicodeString fPDF_FileVersion;
	bool fRAW_HalfSize;
	double fRAW_Gamma;
	double fRAW_GammaToeSlope;
	double fRAW_Bright;
	double fRAW_RedScale;
	double fRAW_BlueScale;
	bool fRAW_QuickInterpolate;
	TIERAWInterpolation fRAW_Interpolation;
	bool fRAW_UseAutoWB;
	bool fRAW_UseCameraWB;
	bool fRAW_FourColorRGB;
	TIERAWOutputColorSpace fRAW_OutputColorSpace;
	bool fRAW_GetEmbeddedJpeg;
	TIERAWEmbeddedJpegLoading fRAW_EmbeddedJpegLoading;
	int fRAW_EmbeddedJpegMinWidth;
	int fRAW_EmbeddedJpegMinHeight;
	System::AnsiString fRAW_Camera;
	bool fRAW_GetExifThumbnail;
	bool fRAW_AutoAdjustColors;
	System::AnsiString fRAW_ExtraParams;
	bool fRAW_AutoBright;
	TIERAWHighlight fRAW_Highlight;
	System::StaticArray<double, 4> fRAW_UserWhiteBalance;
	TIOBMPRAWChannelOrder fBMPRAW_ChannelOrder;
	TIOBMPRAWPlanes fBMPRAW_Planes;
	int fBMPRAW_RowAlign;
	int fBMPRAW_HeaderSize;
	TIOBMPRAWDataFormat fBMPRAW_DataFormat;
	bool fPSD_LoadLayers;
	bool fPSD_ReplaceLayers;
	bool fPSD_HasPremultipliedAlpha;
	bool fPSD_HasMergedImage;
	bool fPSD_LargeDocumentFormat;
	System::AnsiString fPSD_SelectLayer;
	double fHDP_ImageQuality;
	bool fHDP_Lossless;
	System::AnsiString fXMP_Info;
	bool fPendingXMPMerge;
	int fIEN_Compression;
	System::WideString fIEN_Description;
	bool fIEN_GetThumbnail;
	bool fIEN_StoreBackground;
	int fSVG_ImageCompression;
	TIEWicCodecInfo fWIC_CodecInfo;
	Hyiedefs::TTIFFLZWDecompFunc fTIFF_LZWDecompFunc;
	Hyiedefs::TTIFFLZWCompFunc fTIFF_LZWCompFunc;
	Hyiedefs::TGIFLZWDecompFunc fGIF_LZWDecompFunc;
	Hyiedefs::TGIFLZWCompFunc fGIF_LZWCompFunc;
	bool fNativePixelFormat;
	void __fastcall SetWidth(int v);
	void __fastcall SetHeight(int v);
	System::UnicodeString __fastcall GetFileTypeStr();
	System::UnicodeString __fastcall GetImageInfoStr();
	void __fastcall SetEXIF_WhitePoint(int index, double v);
	double __fastcall GetEXIF_WhitePoint(int index);
	void __fastcall SetEXIF_PrimaryChromaticities(int index, double v);
	double __fastcall GetEXIF_PrimaryChromaticities(int index);
	void __fastcall SetEXIF_YCbCrCoefficients(int index, double v);
	double __fastcall GetEXIF_YCbCrCoefficients(int index);
	void __fastcall SetEXIF_ReferenceBlackWhite(int index, double v);
	double __fastcall GetEXIF_ReferenceBlackWhite(int index);
	void __fastcall SetEXIF_ISOSpeedRatings(int index, int v);
	int __fastcall GetEXIF_ISOSpeedRatings(int index);
	void __fastcall SetEXIF_SubjectArea(int index, int v);
	int __fastcall GetEXIF_SubjectArea(int index);
	void __fastcall SetDpi(int Value);
	void __fastcall SetTIFF_Orientation(int Value);
	void __fastcall SetEXIF_Orientation(int Value);
	void __fastcall SetEXIF_XResolution(double Value);
	void __fastcall SetEXIF_YResolution(double Value);
	TIEICC* __fastcall GetInputICC();
	TIEICC* __fastcall GetOutputICC();
	TIEICC* __fastcall GetDefaultICC();
	TIEImagingAnnot* __fastcall GetImagingAnnot();
	int __fastcall GetImageIndex();
	void __fastcall SetImageIndex(int value);
	int __fastcall GetImageCount();
	void __fastcall SetImageCount(int value);
	void __fastcall SetGetThumbnail(bool value);
	void __fastcall SetJPEG_GetExifThumbnail(bool value);
	void __fastcall SetRAW_UserWhiteBalance(int idx, double value);
	double __fastcall GetRAW_UserWhiteBalance(int idx);
	void __fastcall SetEnableAdjustOrientation(bool value);
	void __fastcall EXIFTagsAdd(int tag);
	void __fastcall EXIFTagsDel(int tag);
	void __fastcall SetEXIF_ExposureTime(double value);
	void __fastcall SetEXIF_FNumber(double value);
	void __fastcall SetEXIF_ExposureProgram(int value);
	void __fastcall SetEXIF_CompressedBitsPerPixel(double value);
	void __fastcall SetEXIF_ShutterSpeedValue(double value);
	void __fastcall SetEXIF_ApertureValue(double value);
	void __fastcall SetEXIF_BrightnessValue(double value);
	void __fastcall SetEXIF_ExposureBiasValue(double value);
	void __fastcall SetEXIF_MaxApertureValue(double value);
	void __fastcall SetEXIF_SubjectDistance(double value);
	void __fastcall SetEXIF_MeteringMode(int value);
	void __fastcall SetEXIF_LightSource(int value);
	void __fastcall SetEXIF_Flash(int value);
	void __fastcall SetEXIF_FocalLength(double value);
	void __fastcall SetEXIF_ColorSpace(int value);
	void __fastcall SetEXIF_ExifImageWidth(int value);
	void __fastcall SetEXIF_ExifImageHeight(int value);
	void __fastcall SetEXIF_FocalPlaneXResolution(double value);
	void __fastcall SetEXIF_FocalPlaneYResolution(double value);
	void __fastcall SetEXIF_FocalPlaneResolutionUnit(int value);
	void __fastcall SetEXIF_ExposureIndex(double value);
	void __fastcall SetEXIF_SensingMethod(int value);
	void __fastcall SetEXIF_FileSource(int value);
	void __fastcall SetEXIF_SceneType(int value);
	void __fastcall SetDpiX(int Value);
	void __fastcall SetDpiY(int Value);
	double __fastcall GetEXIF_GPSLatitude();
	void __fastcall SetEXIF_GPSLatitude(double value);
	double __fastcall GetEXIF_GPSLongitude();
	void __fastcall SetEXIF_GPSLongitude(double value);
	System::TDateTime __fastcall GetEXIF_DateTime2();
	void __fastcall SetEXIF_DateTime2(const System::TDateTime Value);
	System::TDateTime __fastcall GetEXIF_DateTimeOriginal2();
	void __fastcall SetEXIF_DateTimeOriginal2(const System::TDateTime Value);
	System::TDateTime __fastcall GetEXIF_DateTimeDigitized2();
	void __fastcall SetEXIF_DateTimeDigitized2(const System::TDateTime Value);
	System::UnicodeString __fastcall GetEXIF_GPSLatitude_Str();
	System::UnicodeString __fastcall GetEXIF_GPSLongitude_Str();
	void __fastcall SetEXIF_Gamma(double value);
	void __fastcall SetEXIF_SubjectLocationX(int value);
	void __fastcall SetEXIF_SubjectLocationY(int value);
	System::UnicodeString __fastcall GetEXIF_ApertureValue2();
	System::UnicodeString __fastcall GetEXIF_ExposureTime2();
	System::UnicodeString __fastcall GetEXIF_FNumber2();
	System::UnicodeString __fastcall GetEXIF_MaxApertureValue2();
	System::UnicodeString __fastcall GetEXIF_ShutterSpeedValue2();
	System::UnicodeString __fastcall GetEXIF_XResolution2();
	System::UnicodeString __fastcall GetEXIF_YResolution2();
	void __fastcall SetEXIF_ApertureValue2(const System::UnicodeString value);
	void __fastcall SetEXIF_ExposureTime2(System::UnicodeString value);
	void __fastcall SetEXIF_FNumber2(System::UnicodeString value);
	void __fastcall SetEXIF_MaxApertureValue2(const System::UnicodeString value);
	void __fastcall SetEXIF_ShutterSpeedValue2(System::UnicodeString value);
	void __fastcall SetEXIF_XResolution2(System::UnicodeString value);
	void __fastcall SetEXIF_YResolution2(System::UnicodeString value);
	System::UnicodeString __fastcall GetIPTC_Photoshop(int FieldID);
	void __fastcall SetIPTC_Photoshop(int FieldID, const System::UnicodeString Value);
	int __fastcall GetImageDelayTime();
	void __fastcall SetImageDelayTime(int Value);
	TIEDicomTags* __fastcall GetDICOM_Tags();
	TIEDicomCompression __fastcall GetDICOM_Compression();
	void __fastcall SetDICOM_Compression(TIEDicomCompression Value);
	double __fastcall GetDICOM_FrameTime();
	void __fastcall SetDICOM_FrameTime(double Value);
	void __fastcall SetXMP_Info(const System::AnsiString Value);
	Hyieutils::TIEDictionary* __fastcall GetDict();
	TIOPDFPaperSize __fastcall GetPDF_PaperSize();
	void __fastcall SetPDF_PaperSize(const TIOPDFPaperSize value);
	TIOPDFPaperSize __fastcall GetPS_PaperSize();
	void __fastcall SetPS_PaperSize(const TIOPDFPaperSize value);
	System::TObject* __fastcall GetImageEnIO();
	
public:
	int fDpiX;
	int fDpiY;
	Hyiedefs::TRGBROW *fColorMap;
	int fColorMapCount;
	int fIEN_LayerCount;
	int fIEN_Version;
	int fImageIndex;
	TIOICOSizes ICO_Sizes;
	TIOICOBitCount ICO_BitCount;
	TIEICC* fInputICC;
	TIEICC* fOutputICC;
	TIEICC* fDefaultICC;
	__property System::WideString FileName = {read=fFileName, write=fFileName};
	__property System::UnicodeString FileTypeStr = {read=GetFileTypeStr};
	__property System::UnicodeString ImageInfoStr = {read=GetImageInfoStr};
	__property int FileType = {read=fFileType, write=fFileType, nodefault};
	__property int BitsPerSample = {read=fBitsPerSample, write=fBitsPerSample, nodefault};
	__property int SamplesPerPixel = {read=fSamplesPerPixel, write=fSamplesPerPixel, nodefault};
	__property int Width = {read=fWidth, write=SetWidth, nodefault};
	__property int Height = {read=fHeight, write=SetHeight, nodefault};
	__property bool AutoScaleImport = {read=fAutoScaleImport, write=fAutoScaleImport, nodefault};
	__property int LoadToWidth = {read=fLoadToWidth, write=fLoadToWidth, nodefault};
	__property int LoadToHeight = {read=fLoadToHeight, write=fLoadToHeight, nodefault};
	__property int DpiX = {read=fDpiX, write=SetDpiX, nodefault};
	__property int DpiY = {read=fDpiY, write=SetDpiY, nodefault};
	__property int Dpi = {read=fDpiX, write=SetDpi, nodefault};
	__property Hyiedefs::PRGBROW ColorMap = {read=fColorMap};
	__property int ColorMapCount = {read=fColorMapCount, nodefault};
	__property bool GetMetaData = {read=fGetMetaData, write=fGetMetaData, nodefault};
	__property Hyieutils::TIEDictionary* Dict = {read=GetDict};
	__property bool NativePixelFormat = {read=fNativePixelFormat, write=fNativePixelFormat, nodefault};
	__property bool IsResource = {read=fIsResource, write=fIsResource, nodefault};
	__property int ImageIndex = {read=GetImageIndex, write=SetImageIndex, nodefault};
	__property int ImageCount = {read=GetImageCount, write=SetImageCount, nodefault};
	__property int ImageDelayTime = {read=GetImageDelayTime, write=SetImageDelayTime, nodefault};
	__property bool GetThumbnail = {read=fGetThumbnail, write=SetGetThumbnail, nodefault};
	__property bool EnableAdjustOrientation = {read=fEnableAdjustOrientation, write=SetEnableAdjustOrientation, nodefault};
	__property TIEICC* InputICCProfile = {read=GetInputICC};
	__property TIEICC* OutputICCProfile = {read=GetOutputICC};
	__property TIEICC* DefaultICCProfile = {read=GetDefaultICC};
	__property TIEIPTCInfoList* IPTC_Info = {read=fIPTC_Info};
	__property System::UnicodeString IPTC_Photoshop[int FieldID] = {read=GetIPTC_Photoshop, write=SetIPTC_Photoshop};
	__property TIEImagingAnnot* ImagingAnnot = {read=GetImagingAnnot};
	__property TIEImageEnAnnot* ImageEnAnnot = {read=fImageEnAnnot};
	__property TIOTIFFCompression TIFF_Compression = {read=fTIFF_Compression, write=fTIFF_Compression, nodefault};
	__property int TIFF_ImageIndex = {read=fTIFF_ImageIndex, write=SetImageIndex, nodefault};
	__property int TIFF_SubIndex = {read=fTIFF_SubIndex, write=fTIFF_SubIndex, nodefault};
	__property int TIFF_ImageCount = {read=fTIFF_ImageCount, write=SetImageCount, nodefault};
	__property TIOTIFFPhotometInterpret TIFF_PhotometInterpret = {read=fTIFF_PhotometInterpret, write=fTIFF_PhotometInterpret, nodefault};
	__property int TIFF_PlanarConf = {read=fTIFF_PlanarConf, write=fTIFF_PlanarConf, nodefault};
	__property int TIFF_NewSubfileType = {read=fTIFF_NewSubfileType, write=fTIFF_NewSubfileType, nodefault};
	__property int TIFF_XPos = {read=fTIFF_XPos, write=fTIFF_XPos, nodefault};
	__property int TIFF_GetTile = {read=fTIFF_GetTile, write=fTIFF_GetTile, nodefault};
	__property int TIFF_YPos = {read=fTIFF_YPos, write=fTIFF_YPos, nodefault};
	__property System::AnsiString TIFF_DocumentName = {read=fTIFF_DocumentName, write=fTIFF_DocumentName};
	__property System::AnsiString TIFF_ImageDescription = {read=fTIFF_ImageDescription, write=fTIFF_ImageDescription};
	__property System::AnsiString TIFF_PageName = {read=fTIFF_PageName, write=fTIFF_PageName};
	__property int TIFF_PageNumber = {read=fTIFF_PageNumber, write=fTIFF_PageNumber, nodefault};
	__property int TIFF_PageCount = {read=fTIFF_PageCount, write=fTIFF_PageCount, nodefault};
	__property int TIFF_Orientation = {read=fTIFF_Orientation, write=SetTIFF_Orientation, nodefault};
	__property bool TIFF_EnableAdjustOrientation = {read=fTIFF_EnableAdjustOrientation, write=fTIFF_EnableAdjustOrientation, nodefault};
	__property int TIFF_JPEGQuality = {read=fTIFF_JPEGQuality, write=fTIFF_JPEGQuality, nodefault};
	__property TIOJPEGColorspace TIFF_JPEGColorSpace = {read=fTIFF_JPEGColorSpace, write=fTIFF_JPEGColorSpace, nodefault};
	__property int TIFF_FillOrder = {read=fTIFF_FillOrder, write=fTIFF_FillOrder, nodefault};
	__property int TIFF_ZIPCompression = {read=fTIFF_ZIPCompression, write=fTIFF_ZIPCompression, nodefault};
	__property int TIFF_StripCount = {read=fTIFF_StripCount, write=fTIFF_StripCount, nodefault};
	__property TIOByteOrder TIFF_ByteOrder = {read=fTIFF_ByteOrder, write=fTIFF_ByteOrder, nodefault};
	__property Hyiedefs::TIEArrayOfByte TIFF_PhotoshopImageResources = {read=fTIFF_PhotoshopImageResources, write=fTIFF_PhotoshopImageResources};
	__property Hyiedefs::TIEArrayOfByte TIFF_PhotoshopImageSourceData = {read=fTIFF_PhotoshopImageSourceData, write=fTIFF_PhotoshopImageSourceData};
	__property bool TIFF_BigTIFF = {read=fTIFF_BigTIFF, write=fTIFF_BigTIFF, nodefault};
	__property bool TIFF_Normalize32fImages = {read=fTIFF_Normalize32fImages, write=fTIFF_Normalize32fImages, nodefault};
	__property System::AnsiString GIF_Version = {read=fGIF_Version, write=fGIF_Version};
	__property int GIF_ImageIndex = {read=fGIF_ImageIndex, write=SetImageIndex, nodefault};
	__property int GIF_ImageCount = {read=fGIF_ImageCount, write=SetImageCount, nodefault};
	__property int GIF_XPos = {read=fGIF_XPos, write=fGIF_XPos, nodefault};
	__property int GIF_YPos = {read=fGIF_YPos, write=fGIF_YPos, nodefault};
	__property int GIF_DelayTime = {read=fGIF_DelayTime, write=fGIF_DelayTime, nodefault};
	__property bool GIF_FlagTranspColor = {read=fGIF_FlagTranspColor, write=fGIF_FlagTranspColor, nodefault};
	__property Hyiedefs::TRGB GIF_TranspColor = {read=fGIF_TranspColor, write=fGIF_TranspColor};
	__property bool GIF_Interlaced = {read=fGIF_Interlaced, write=fGIF_Interlaced, nodefault};
	__property int GIF_WinWidth = {read=fGIF_WinWidth, write=fGIF_WinWidth, nodefault};
	__property int GIF_WinHeight = {read=fGIF_WinHeight, write=fGIF_WinHeight, nodefault};
	__property Hyiedefs::TRGB GIF_Background = {read=fGIF_Background, write=fGIF_Background};
	__property int GIF_Ratio = {read=fGIF_Ratio, write=fGIF_Ratio, nodefault};
	__property System::Classes::TStringList* GIF_Comments = {read=fGIF_Comments};
	__property TIEGIFAction GIF_Action = {read=fGIF_Action, write=fGIF_Action, nodefault};
	__property bool GIF_RAWLoad = {read=fGIF_RAWLoad, write=fGIF_RAWLoad, nodefault};
	__property int DCX_ImageIndex = {read=fDCX_ImageIndex, write=SetImageIndex, nodefault};
	__property TIOJPEGColorspace JPEG_ColorSpace = {read=fJPEG_ColorSpace, write=fJPEG_ColorSpace, nodefault};
	__property int JPEG_Quality = {read=fJPEG_Quality, write=fJPEG_Quality, nodefault};
	__property TIOJPEGDctMethod JPEG_DCTMethod = {read=fJPEG_DCTMethod, write=fJPEG_DCTMethod, nodefault};
	__property TIOJPEGCromaSubsampling JPEG_CromaSubsampling = {read=fJPEG_CromaSubsampling, write=fJPEG_CromaSubsampling, nodefault};
	__property bool JPEG_OptimalHuffman = {read=fJPEG_OptimalHuffman, write=fJPEG_OptimalHuffman, nodefault};
	__property int JPEG_Smooth = {read=fJPEG_Smooth, write=fJPEG_Smooth, nodefault};
	__property bool JPEG_Progressive = {read=fJPEG_Progressive, write=fJPEG_Progressive, nodefault};
	__property TIOJPEGScale JPEG_Scale = {read=fJPEG_Scale, write=fJPEG_Scale, nodefault};
	__property TIEMarkerList* JPEG_MarkerList = {read=fJPEG_MarkerList};
	__property int JPEG_Scale_Used = {read=fJPEG_ScaleUsed, write=fJPEG_ScaleUsed, nodefault};
	__property int JPEG_WarningTot = {read=fJPEG_WarningTot, write=fJPEG_WarningTot, nodefault};
	__property int JPEG_WarningCode = {read=fJPEG_WarningCode, write=fJPEG_WarningCode, nodefault};
	__property int JPEG_OriginalWidth = {read=fOriginalWidth, write=fOriginalWidth, nodefault};
	__property int JPEG_OriginalHeight = {read=fOriginalHeight, write=fOriginalHeight, nodefault};
	__property int OriginalWidth = {read=fOriginalWidth, write=fOriginalWidth, nodefault};
	__property int OriginalHeight = {read=fOriginalHeight, write=fOriginalHeight, nodefault};
	__property bool JPEG_EnableAdjustOrientation = {read=fJPEG_EnableAdjustOrientation, write=fJPEG_EnableAdjustOrientation, nodefault};
	__property bool JPEG_GetExifThumbnail = {read=fJPEG_GetExifThumbnail, write=SetJPEG_GetExifThumbnail, nodefault};
	__property TIOJ2000ColorSpace J2000_ColorSpace = {read=fJ2000_ColorSpace, write=fJ2000_ColorSpace, nodefault};
	__property int J2000_Reduce = {read=fJ2000_Reduce, write=fJ2000_Reduce, nodefault};
	__property double J2000_Rate = {read=fJ2000_Rate, write=fJ2000_Rate};
	__property double J2000_Quality = {read=fJ2000_Quality, write=fJ2000_Quality};
	__property int J2000_SubSamplingH = {read=fJ2000_SubSamplingH, write=fJ2000_SubSamplingH, nodefault};
	__property int J2000_SubSamplingV = {read=fJ2000_SubSamplingV, write=fJ2000_SubSamplingV, nodefault};
	__property TIOJ2000ScalableBy J2000_ScalableBy = {read=fJ2000_ScalableBy, write=fJ2000_ScalableBy, nodefault};
	__property int PCX_Version = {read=fPCX_Version, write=fPCX_Version, nodefault};
	__property TIOPCXCompression PCX_Compression = {read=fPCX_Compression, write=fPCX_Compression, nodefault};
	__property TIOBMPVersion BMP_Version = {read=fBMP_Version, write=fBMP_Version, nodefault};
	__property TIOBMPCompression BMP_Compression = {read=fBMP_Compression, write=fBMP_Compression, nodefault};
	__property bool BMP_HandleTransparency = {read=fBMP_HandleTransparency, write=fBMP_HandleTransparency, nodefault};
	__property int ICO_ImageIndex = {read=fICO_ImageIndex, write=SetImageIndex, nodefault};
	__property Hyiedefs::TRGB ICO_Background = {read=fICO_Background, write=fICO_Background};
	__property TIOICOFormat ICO_Format = {read=fICO_Format, write=fICO_Format, nodefault};
	__property int CUR_ImageIndex = {read=fCUR_ImageIndex, write=SetImageIndex, nodefault};
	__property int CUR_XHotSpot = {read=fCUR_XHotSpot, write=fCUR_XHotSpot, nodefault};
	__property int CUR_YHotSpot = {read=fCUR_YHotSpot, write=fCUR_YHotSpot, nodefault};
	__property Hyiedefs::TRGB CUR_Background = {read=fCUR_Background, write=fCUR_Background};
	__property TIEDicomTags* DICOM_Tags = {read=GetDICOM_Tags};
	__property double DICOM_WindowCenterOffset = {read=fDICOM_WindowCenterOffset, write=fDICOM_WindowCenterOffset};
	__property double DICOM_RescaleIntercept = {read=fDICOM_RescaleIntercept, write=fDICOM_RescaleIntercept};
	__property double DICOM_RescaleSlope = {read=fDICOM_RescaleSlope, write=fDICOM_RescaleSlope};
	__property double DICOM_WindowCenter = {read=fDICOM_WindowCenter, write=fDICOM_WindowCenter};
	__property double DICOM_WindowWidth = {read=fDICOM_WindowWidth, write=fDICOM_WindowWidth};
	__property TIEDicomRange DICOM_Range = {read=fDICOM_Range, write=fDICOM_Range, nodefault};
	__property TIEDicomCompression DICOM_Compression = {read=GetDICOM_Compression, write=SetDICOM_Compression, nodefault};
	__property bool DICOM_ContainsImage = {read=fDICOM_ContainsImage, write=fDICOM_ContainsImage, nodefault};
	__property int DICOM_JPEGQuality = {read=fDICOM_JPEGQuality, write=fDICOM_JPEGQuality, nodefault};
	__property double DICOM_J2000Rate = {read=fDICOM_J2000Rate, write=fDICOM_J2000Rate};
	__property double DICOM_FrameTime = {read=GetDICOM_FrameTime, write=SetDICOM_FrameTime};
	__property bool PNG_Interlaced = {read=fPNG_Interlaced, write=fPNG_Interlaced, nodefault};
	__property Hyiedefs::TRGB PNG_Background = {read=fPNG_Background, write=fPNG_Background};
	__property TIOPNGFilter PNG_Filter = {read=fPNG_Filter, write=fPNG_Filter, nodefault};
	__property int PNG_Compression = {read=fPNG_Compression, write=fPNG_Compression, nodefault};
	__property System::Classes::TStringList* PNG_TextKeys = {read=fPNG_TextKeys};
	__property System::Classes::TStringList* PNG_TextValues = {read=fPNG_TextValues};
	__property bool PSD_LoadLayers = {read=fPSD_LoadLayers, write=fPSD_LoadLayers, nodefault};
	__property bool PSD_ReplaceLayers = {read=fPSD_ReplaceLayers, write=fPSD_ReplaceLayers, nodefault};
	__property bool PSD_HasPremultipliedAlpha = {read=fPSD_HasPremultipliedAlpha, write=fPSD_HasPremultipliedAlpha, nodefault};
	__property bool PSD_HasMergedImage = {read=fPSD_HasMergedImage, write=fPSD_HasMergedImage, nodefault};
	__property bool PSD_LargeDocumentFormat = {read=fPSD_LargeDocumentFormat, write=fPSD_LargeDocumentFormat, nodefault};
	__property System::AnsiString PSD_SelectLayer = {read=fPSD_SelectLayer, write=fPSD_SelectLayer};
	__property double HDP_ImageQuality = {read=fHDP_ImageQuality, write=fHDP_ImageQuality};
	__property bool HDP_Lossless = {read=fHDP_Lossless, write=fHDP_Lossless, nodefault};
	__property int TGA_XPos = {read=fTGA_XPos, write=fTGA_XPos, nodefault};
	__property int TGA_YPos = {read=fTGA_YPos, write=fTGA_YPos, nodefault};
	__property bool TGA_Compressed = {read=fTGA_Compressed, write=fTGA_Compressed, nodefault};
	__property System::AnsiString TGA_Descriptor = {read=fTGA_Descriptor, write=fTGA_Descriptor};
	__property System::AnsiString TGA_Author = {read=fTGA_Author, write=fTGA_Author};
	__property System::TDateTime TGA_Date = {read=fTGA_Date, write=fTGA_Date};
	__property System::AnsiString TGA_ImageName = {read=fTGA_ImageName, write=fTGA_ImageName};
	__property Hyiedefs::TRGB TGA_Background = {read=fTGA_Background, write=fTGA_Background};
	__property double TGA_AspectRatio = {read=fTGA_AspectRatio, write=fTGA_AspectRatio};
	__property double TGA_Gamma = {read=fTGA_Gamma, write=fTGA_Gamma};
	__property bool TGA_GrayLevel = {read=fTGA_GrayLevel, write=fTGA_GrayLevel, nodefault};
	__property int AVI_FrameCount = {read=fAVI_FrameCount, write=SetImageCount, nodefault};
	__property double AVI_FrameDelayTime = {read=fAVI_FrameDelayTime, write=fAVI_FrameDelayTime};
	__property int MEDIAFILE_FrameCount = {read=fMEDIAFILE_FrameCount, write=SetImageCount, nodefault};
	__property double MEDIAFILE_FrameDelayTime = {read=fMEDIAFILE_FrameDelayTime, write=fMEDIAFILE_FrameDelayTime};
	__property System::Classes::TStringList* PXM_Comments = {read=fPXM_Comments};
	__property int PS_PaperWidth = {read=fPS_PaperWidth, write=fPS_PaperWidth, nodefault};
	__property int PS_PaperHeight = {read=fPS_PaperHeight, write=fPS_PaperHeight, nodefault};
	__property TIOPDFPaperSize PS_PaperSize = {read=GetPS_PaperSize, write=SetPS_PaperSize, nodefault};
	__property TIOPSCompression PS_Compression = {read=fPS_Compression, write=fPS_Compression, nodefault};
	__property System::AnsiString PS_Title = {read=fPS_Title, write=fPS_Title};
	__property int PDF_PaperWidth = {read=fPDF_PaperWidth, write=fPDF_PaperWidth, nodefault};
	__property int PDF_PaperHeight = {read=fPDF_PaperHeight, write=fPDF_PaperHeight, nodefault};
	__property TIOPDFPaperSize PDF_PaperSize = {read=GetPDF_PaperSize, write=SetPDF_PaperSize, nodefault};
	__property int PDF_PageMargin = {read=fPDF_PageMargin, write=fPDF_PageMargin, nodefault};
	__property TIOPDFImageOptions PDF_ImageOptions = {read=fPDF_ImageOptions, write=fPDF_ImageOptions, nodefault};
	__property TIOPDFCompression PDF_Compression = {read=fPDF_Compression, write=fPDF_Compression, nodefault};
	__property System::WideString PDF_Title = {read=fPDF_Title, write=fPDF_Title};
	__property System::WideString PDF_Author = {read=fPDF_Author, write=fPDF_Author};
	__property System::WideString PDF_Subject = {read=fPDF_Subject, write=fPDF_Subject};
	__property System::WideString PDF_Keywords = {read=fPDF_Keywords, write=fPDF_Keywords};
	__property System::WideString PDF_Creator = {read=fPDF_Creator, write=fPDF_Creator};
	__property System::WideString PDF_Producer = {read=fPDF_Producer, write=fPDF_Producer};
	__property System::WideString PDF_CreateDate = {read=fPDF_CreationDate, write=fPDF_CreationDate};
	__property System::WideString PDF_ModifyDate = {read=fPDF_ModDate, write=fPDF_ModDate};
	__property System::UnicodeString PDF_FileVersion = {read=fPDF_FileVersion, write=fPDF_FileVersion};
	__property System::Classes::TList* EXIF_Tags = {read=fEXIF_Tags};
	__property bool EXIF_HasEXIFData = {read=fEXIF_HasEXIFData, write=fEXIF_HasEXIFData, nodefault};
	__property TIEBitmap* EXIF_Bitmap = {read=fEXIF_Bitmap, write=fEXIF_Bitmap};
	__property System::AnsiString EXIF_ImageDescription = {read=fEXIF_ImageDescription, write=fEXIF_ImageDescription};
	__property System::AnsiString EXIF_Make = {read=fEXIF_Make, write=fEXIF_Make};
	__property System::AnsiString EXIF_Model = {read=fEXIF_Model, write=fEXIF_Model};
	__property int EXIF_Orientation = {read=fEXIF_Orientation, write=SetEXIF_Orientation, nodefault};
	__property double EXIF_XResolution = {read=fEXIF_XResolution, write=SetEXIF_XResolution};
	__property double EXIF_YResolution = {read=fEXIF_YResolution, write=SetEXIF_YResolution};
	__property int EXIF_ResolutionUnit = {read=fEXIF_ResolutionUnit, write=fEXIF_ResolutionUnit, nodefault};
	__property System::AnsiString EXIF_Software = {read=fEXIF_Software, write=fEXIF_Software};
	__property System::AnsiString EXIF_Artist = {read=fEXIF_Artist, write=fEXIF_Artist};
	__property System::AnsiString EXIF_DateTime = {read=fEXIF_DateTime, write=fEXIF_DateTime};
	__property System::TDateTime EXIF_DateTime2 = {read=GetEXIF_DateTime2, write=SetEXIF_DateTime2};
	__property double EXIF_WhitePoint[int index] = {read=GetEXIF_WhitePoint, write=SetEXIF_WhitePoint};
	__property double EXIF_PrimaryChromaticities[int index] = {read=GetEXIF_PrimaryChromaticities, write=SetEXIF_PrimaryChromaticities};
	__property double EXIF_YCbCrCoefficients[int index] = {read=GetEXIF_YCbCrCoefficients, write=SetEXIF_YCbCrCoefficients};
	__property int EXIF_YCbCrPositioning = {read=fEXIF_YCbCrPositioning, write=fEXIF_YCbCrPositioning, nodefault};
	__property double EXIF_ReferenceBlackWhite[int index] = {read=GetEXIF_ReferenceBlackWhite, write=SetEXIF_ReferenceBlackWhite};
	__property System::AnsiString EXIF_Copyright = {read=fEXIF_Copyright, write=fEXIF_Copyright};
	__property double EXIF_ExposureTime = {read=fEXIF_ExposureTime, write=SetEXIF_ExposureTime};
	__property double EXIF_FNumber = {read=fEXIF_FNumber, write=SetEXIF_FNumber};
	__property int EXIF_ExposureProgram = {read=fEXIF_ExposureProgram, write=SetEXIF_ExposureProgram, nodefault};
	__property int EXIF_ISOSpeedRatings[int index] = {read=GetEXIF_ISOSpeedRatings, write=SetEXIF_ISOSpeedRatings};
	__property System::AnsiString EXIF_ExifVersion = {read=fEXIF_ExifVersion, write=fEXIF_ExifVersion};
	__property System::AnsiString EXIF_DateTimeOriginal = {read=fEXIF_DateTimeOriginal, write=fEXIF_DateTimeOriginal};
	__property System::TDateTime EXIF_DateTimeOriginal2 = {read=GetEXIF_DateTimeOriginal2, write=SetEXIF_DateTimeOriginal2};
	__property System::AnsiString EXIF_DateTimeDigitized = {read=fEXIF_DateTimeDigitized, write=fEXIF_DateTimeDigitized};
	__property System::TDateTime EXIF_DateTimeDigitized2 = {read=GetEXIF_DateTimeDigitized2, write=SetEXIF_DateTimeDigitized2};
	__property double EXIF_CompressedBitsPerPixel = {read=fEXIF_CompressedBitsPerPixel, write=SetEXIF_CompressedBitsPerPixel};
	__property double EXIF_ShutterSpeedValue = {read=fEXIF_ShutterSpeedValue, write=SetEXIF_ShutterSpeedValue};
	__property double EXIF_ApertureValue = {read=fEXIF_ApertureValue, write=SetEXIF_ApertureValue};
	__property double EXIF_BrightnessValue = {read=fEXIF_BrightnessValue, write=SetEXIF_BrightnessValue};
	__property double EXIF_ExposureBiasValue = {read=fEXIF_ExposureBiasValue, write=SetEXIF_ExposureBiasValue};
	__property double EXIF_MaxApertureValue = {read=fEXIF_MaxApertureValue, write=SetEXIF_MaxApertureValue};
	__property double EXIF_SubjectDistance = {read=fEXIF_SubjectDistance, write=SetEXIF_SubjectDistance};
	__property int EXIF_MeteringMode = {read=fEXIF_MeteringMode, write=SetEXIF_MeteringMode, nodefault};
	__property int EXIF_LightSource = {read=fEXIF_LightSource, write=SetEXIF_LightSource, nodefault};
	__property int EXIF_Flash = {read=fEXIF_Flash, write=SetEXIF_Flash, nodefault};
	__property double EXIF_FocalLength = {read=fEXIF_FocalLength, write=SetEXIF_FocalLength};
	__property System::AnsiString EXIF_SubsecTime = {read=fEXIF_SubsecTime, write=fEXIF_SubsecTime};
	__property System::AnsiString EXIF_SubsecTimeOriginal = {read=fEXIF_SubsecTimeOriginal, write=fEXIF_SubsecTimeOriginal};
	__property System::AnsiString EXIF_SubsecTimeDigitized = {read=fEXIF_SubsecTimeDigitized, write=fEXIF_SubsecTimeDigitized};
	__property System::AnsiString EXIF_FlashPixVersion = {read=fEXIF_FlashPixVersion, write=fEXIF_FlashPixVersion};
	__property int EXIF_ColorSpace = {read=fEXIF_ColorSpace, write=SetEXIF_ColorSpace, nodefault};
	__property int EXIF_ExifImageWidth = {read=fEXIF_ExifImageWidth, write=SetEXIF_ExifImageWidth, nodefault};
	__property int EXIF_ExifImageHeight = {read=fEXIF_ExifImageHeight, write=SetEXIF_ExifImageHeight, nodefault};
	__property System::AnsiString EXIF_RelatedSoundFile = {read=fEXIF_RelatedSoundFile, write=fEXIF_RelatedSoundFile};
	__property double EXIF_FocalPlaneXResolution = {read=fEXIF_FocalPlaneXResolution, write=SetEXIF_FocalPlaneXResolution};
	__property double EXIF_FocalPlaneYResolution = {read=fEXIF_FocalPlaneYResolution, write=SetEXIF_FocalPlaneYResolution};
	__property int EXIF_FocalPlaneResolutionUnit = {read=fEXIF_FocalPlaneResolutionUnit, write=SetEXIF_FocalPlaneResolutionUnit, nodefault};
	__property double EXIF_ExposureIndex = {read=fEXIF_ExposureIndex, write=SetEXIF_ExposureIndex};
	__property int EXIF_SensingMethod = {read=fEXIF_SensingMethod, write=SetEXIF_SensingMethod, nodefault};
	__property int EXIF_FileSource = {read=fEXIF_FileSource, write=SetEXIF_FileSource, nodefault};
	__property int EXIF_SceneType = {read=fEXIF_SceneType, write=SetEXIF_SceneType, nodefault};
	__property System::WideString EXIF_UserComment = {read=fEXIF_UserComment, write=fEXIF_UserComment};
	__property System::AnsiString EXIF_UserCommentCode = {read=fEXIF_UserCommentCode, write=fEXIF_UserCommentCode};
	__property Iexclasses::TIETagsHandler* EXIF_MakerNote = {read=fEXIF_MakerNote};
	__property System::WideString EXIF_XPTitle = {read=fEXIF_XPTitle, write=fEXIF_XPTitle};
	__property int EXIF_XPRating = {read=fEXIF_XPRating, write=fEXIF_XPRating, nodefault};
	__property System::WideString EXIF_XPComment = {read=fEXIF_XPComment, write=fEXIF_XPComment};
	__property System::WideString EXIF_XPAuthor = {read=fEXIF_XPAuthor, write=fEXIF_XPAuthor};
	__property System::WideString EXIF_XPKeywords = {read=fEXIF_XPKeywords, write=fEXIF_XPKeywords};
	__property System::WideString EXIF_XPSubject = {read=fEXIF_XPSubject, write=fEXIF_XPSubject};
	__property int EXIF_ExposureMode = {read=fEXIF_ExposureMode, write=fEXIF_ExposureMode, nodefault};
	__property int EXIF_WhiteBalance = {read=fEXIF_WhiteBalance, write=fEXIF_WhiteBalance, nodefault};
	__property double EXIF_DigitalZoomRatio = {read=fEXIF_DigitalZoomRatio, write=fEXIF_DigitalZoomRatio};
	__property int EXIF_FocalLengthIn35mmFilm = {read=fEXIF_FocalLengthIn35mmFilm, write=fEXIF_FocalLengthIn35mmFilm, nodefault};
	__property int EXIF_SceneCaptureType = {read=fEXIF_SceneCaptureType, write=fEXIF_SceneCaptureType, nodefault};
	__property int EXIF_GainControl = {read=fEXIF_GainControl, write=fEXIF_GainControl, nodefault};
	__property int EXIF_Contrast = {read=fEXIF_Contrast, write=fEXIF_Contrast, nodefault};
	__property int EXIF_Saturation = {read=fEXIF_Saturation, write=fEXIF_Saturation, nodefault};
	__property int EXIF_Sharpness = {read=fEXIF_Sharpness, write=fEXIF_Sharpness, nodefault};
	__property int EXIF_SubjectDistanceRange = {read=fEXIF_SubjectDistanceRange, write=fEXIF_SubjectDistanceRange, nodefault};
	__property System::AnsiString EXIF_ImageUniqueID = {read=fEXIF_ImageUniqueID, write=fEXIF_ImageUniqueID};
	__property System::AnsiString EXIF_CameraOwnerName = {read=fEXIF_CameraOwnerName, write=fEXIF_CameraOwnerName};
	__property System::AnsiString EXIF_BodySerialNumber = {read=fEXIF_BodySerialNumber, write=fEXIF_BodySerialNumber};
	__property System::AnsiString EXIF_LensMake = {read=fEXIF_LensMake, write=fEXIF_LensMake};
	__property System::AnsiString EXIF_LensModel = {read=fEXIF_LensModel, write=fEXIF_LensModel};
	__property System::AnsiString EXIF_LensSerialNumber = {read=fEXIF_LensSerialNumber, write=fEXIF_LensSerialNumber};
	__property double EXIF_Gamma = {read=fEXIF_Gamma, write=SetEXIF_Gamma};
	__property int EXIF_SubjectArea[int Index] = {read=GetEXIF_SubjectArea, write=SetEXIF_SubjectArea};
	__property int EXIF_SubjectLocationX = {read=fEXIF_SubjectLocationX, write=SetEXIF_SubjectLocationX, nodefault};
	__property int EXIF_SubjectLocationY = {read=fEXIF_SubjectLocationY, write=SetEXIF_SubjectLocationY, nodefault};
	__property System::AnsiString EXIF_GPSVersionID = {read=fEXIF_GPSVersionID, write=fEXIF_GPSVersionID};
	__property double EXIF_GPSLatitude = {read=GetEXIF_GPSLatitude, write=SetEXIF_GPSLatitude};
	__property System::UnicodeString EXIF_GPSLatitude_Str = {read=GetEXIF_GPSLatitude_Str};
	__property System::AnsiString EXIF_GPSLatitudeRef = {read=fEXIF_GPSLatitudeRef, write=fEXIF_GPSLatitudeRef};
	__property double EXIF_GPSLatitudeDegrees = {read=fEXIF_GPSLatitudeDegrees, write=fEXIF_GPSLatitudeDegrees};
	__property double EXIF_GPSLatitudeMinutes = {read=fEXIF_GPSLatitudeMinutes, write=fEXIF_GPSLatitudeMinutes};
	__property double EXIF_GPSLatitudeSeconds = {read=fEXIF_GPSLatitudeSeconds, write=fEXIF_GPSLatitudeSeconds};
	__property double EXIF_GPSLongitude = {read=GetEXIF_GPSLongitude, write=SetEXIF_GPSLongitude};
	__property System::UnicodeString EXIF_GPSLongitude_Str = {read=GetEXIF_GPSLongitude_Str};
	__property System::AnsiString EXIF_GPSLongitudeRef = {read=fEXIF_GPSLongitudeRef, write=fEXIF_GPSLongitudeRef};
	__property double EXIF_GPSLongitudeDegrees = {read=fEXIF_GPSLongitudeDegrees, write=fEXIF_GPSLongitudeDegrees};
	__property double EXIF_GPSLongitudeMinutes = {read=fEXIF_GPSLongitudeMinutes, write=fEXIF_GPSLongitudeMinutes};
	__property double EXIF_GPSLongitudeSeconds = {read=fEXIF_GPSLongitudeSeconds, write=fEXIF_GPSLongitudeSeconds};
	__property System::AnsiString EXIF_GPSAltitudeRef = {read=fEXIF_GPSAltitudeRef, write=fEXIF_GPSAltitudeRef};
	__property double EXIF_GPSAltitude = {read=fEXIF_GPSAltitude, write=fEXIF_GPSAltitude};
	__property double EXIF_GPSTimeStampHour = {read=fEXIF_GPSTimeStampHour, write=fEXIF_GPSTimeStampHour};
	__property double EXIF_GPSTimeStampMinute = {read=fEXIF_GPSTimeStampMinute, write=fEXIF_GPSTimeStampMinute};
	__property double EXIF_GPSTimeStampSecond = {read=fEXIF_GPSTimeStampSecond, write=fEXIF_GPSTimeStampSecond};
	__property System::AnsiString EXIF_GPSSatellites = {read=fEXIF_GPSSatellites, write=fEXIF_GPSSatellites};
	__property System::AnsiString EXIF_GPSStatus = {read=fEXIF_GPSStatus, write=fEXIF_GPSStatus};
	__property System::AnsiString EXIF_GPSMeasureMode = {read=fEXIF_GPSMeasureMode, write=fEXIF_GPSMeasureMode};
	__property double EXIF_GPSDOP = {read=fEXIF_GPSDOP, write=fEXIF_GPSDOP};
	__property System::AnsiString EXIF_GPSSpeedRef = {read=fEXIF_GPSSpeedRef, write=fEXIF_GPSSpeedRef};
	__property double EXIF_GPSSpeed = {read=fEXIF_GPSSpeed, write=fEXIF_GPSSpeed};
	__property System::AnsiString EXIF_GPSTrackRef = {read=fEXIF_GPSTrackRef, write=fEXIF_GPSTrackRef};
	__property double EXIF_GPSTrack = {read=fEXIF_GPSTrack, write=fEXIF_GPSTrack};
	__property System::AnsiString EXIF_GPSImgDirectionRef = {read=fEXIF_GPSImgDirectionRef, write=fEXIF_GPSImgDirectionRef};
	__property double EXIF_GPSImgDirection = {read=fEXIF_GPSImgDirection, write=fEXIF_GPSImgDirection};
	__property System::AnsiString EXIF_GPSMapDatum = {read=fEXIF_GPSMapDatum, write=fEXIF_GPSMapDatum};
	__property System::AnsiString EXIF_GPSDestLatitudeRef = {read=fEXIF_GPSDestLatitudeRef, write=fEXIF_GPSDestLatitudeRef};
	__property double EXIF_GPSDestLatitudeDegrees = {read=fEXIF_GPSDestLatitudeDegrees, write=fEXIF_GPSDestLatitudeDegrees};
	__property double EXIF_GPSDestLatitudeMinutes = {read=fEXIF_GPSDestLatitudeMinutes, write=fEXIF_GPSDestLatitudeMinutes};
	__property double EXIF_GPSDestLatitudeSeconds = {read=fEXIF_GPSDestLatitudeSeconds, write=fEXIF_GPSDestLatitudeSeconds};
	__property System::AnsiString EXIF_GPSDestLongitudeRef = {read=fEXIF_GPSDestLongitudeRef, write=fEXIF_GPSDestLatitudeRef};
	__property double EXIF_GPSDestLongitudeDegrees = {read=fEXIF_GPSDestLongitudeDegrees, write=fEXIF_GPSDestLongitudeDegrees};
	__property double EXIF_GPSDestLongitudeMinutes = {read=fEXIF_GPSDestLongitudeMinutes, write=fEXIF_GPSDestLongitudeMinutes};
	__property double EXIF_GPSDestLongitudeSeconds = {read=fEXIF_GPSDestLongitudeSeconds, write=fEXIF_GPSDestLongitudeSeconds};
	__property System::AnsiString EXIF_GPSDestBearingRef = {read=fEXIF_GPSDestBearingRef, write=fEXIF_GPSDestBearingRef};
	__property double EXIF_GPSDestBearing = {read=fEXIF_GPSDestBearing, write=fEXIF_GPSDestBearing};
	__property System::AnsiString EXIF_GPSDestDistanceRef = {read=fEXIF_GPSDestDistanceRef, write=fEXIF_GPSDestDistanceRef};
	__property double EXIF_GPSDestDistance = {read=fEXIF_GPSDestDistance, write=fEXIF_GPSDestDistance};
	__property System::AnsiString EXIF_GPSDateStamp = {read=fEXIF_GPSDateStamp, write=fEXIF_GPSDateStamp};
	__property System::AnsiString EXIF_InteropIndex = {read=fEXIF_InteropIndex, write=fEXIF_InteropIndex};
	__property System::AnsiString EXIF_InteropVersion = {read=fEXIF_InteropVersion, write=fEXIF_InteropVersion};
	__property System::UnicodeString EXIF_ApertureValue2 = {read=GetEXIF_ApertureValue2, write=SetEXIF_ApertureValue2};
	__property System::UnicodeString EXIF_ExposureTime2 = {read=GetEXIF_ExposureTime2, write=SetEXIF_ExposureTime2};
	__property System::UnicodeString EXIF_FNumber2 = {read=GetEXIF_FNumber2, write=SetEXIF_FNumber2};
	__property System::UnicodeString EXIF_MaxApertureValue2 = {read=GetEXIF_MaxApertureValue2, write=SetEXIF_MaxApertureValue2};
	__property System::UnicodeString EXIF_ShutterSpeedValue2 = {read=GetEXIF_ShutterSpeedValue2, write=SetEXIF_ShutterSpeedValue2};
	__property System::UnicodeString EXIF_XResolution2 = {read=GetEXIF_XResolution2, write=SetEXIF_XResolution2};
	__property System::UnicodeString EXIF_YResolution2 = {read=GetEXIF_YResolution2, write=SetEXIF_YResolution2};
	__property System::AnsiString XMP_Info = {read=fXMP_Info, write=SetXMP_Info};
	__property bool RAW_HalfSize = {read=fRAW_HalfSize, write=fRAW_HalfSize, nodefault};
	__property double RAW_Gamma = {read=fRAW_Gamma, write=fRAW_Gamma};
	__property double RAW_GammaToeSlope = {read=fRAW_GammaToeSlope, write=fRAW_GammaToeSlope};
	__property double RAW_Bright = {read=fRAW_Bright, write=fRAW_Bright};
	__property bool RAW_AutoBright = {read=fRAW_AutoBright, write=fRAW_AutoBright, nodefault};
	__property TIERAWHighlight RAW_Highlight = {read=fRAW_Highlight, write=fRAW_Highlight, nodefault};
	__property double RAW_RedScale = {read=fRAW_RedScale, write=fRAW_RedScale};
	__property double RAW_BlueScale = {read=fRAW_BlueScale, write=fRAW_BlueScale};
	__property bool RAW_QuickInterpolate = {read=fRAW_QuickInterpolate, write=fRAW_QuickInterpolate, nodefault};
	__property TIERAWInterpolation RAW_Interpolation = {read=fRAW_Interpolation, write=fRAW_Interpolation, nodefault};
	__property bool RAW_UseAutoWB = {read=fRAW_UseAutoWB, write=fRAW_UseAutoWB, nodefault};
	__property System::AnsiString RAW_ExtraParams = {read=fRAW_ExtraParams, write=fRAW_ExtraParams};
	__property bool RAW_UseCameraWB = {read=fRAW_UseCameraWB, write=fRAW_UseCameraWB, nodefault};
	__property bool RAW_FourColorRGB = {read=fRAW_FourColorRGB, write=fRAW_FourColorRGB, nodefault};
	__property TIERAWOutputColorSpace RAW_OutputColorSpace = {read=fRAW_OutputColorSpace, write=fRAW_OutputColorSpace, nodefault};
	__property bool RAW_GetEmbeddedJpeg = {read=fRAW_GetEmbeddedJpeg, write=fRAW_GetEmbeddedJpeg, nodefault};
	__property TIERAWEmbeddedJpegLoading RAW_EmbeddedJpegLoading = {read=fRAW_EmbeddedJpegLoading, write=fRAW_EmbeddedJpegLoading, nodefault};
	__property int RAW_EmbeddedJpegMinWidth = {read=fRAW_EmbeddedJpegMinWidth, write=fRAW_EmbeddedJpegMinWidth, nodefault};
	__property int RAW_EmbeddedJpegMinHeight = {read=fRAW_EmbeddedJpegMinHeight, write=fRAW_EmbeddedJpegMinHeight, nodefault};
	__property double RAW_UserWhiteBalance[int idx] = {read=GetRAW_UserWhiteBalance, write=SetRAW_UserWhiteBalance};
	__property System::AnsiString RAW_Camera = {read=fRAW_Camera, write=fRAW_Camera};
	__property bool RAW_GetExifThumbnail = {read=fRAW_GetExifThumbnail, write=fRAW_GetExifThumbnail, nodefault};
	__property bool RAW_AutoAdjustColors = {read=fRAW_AutoAdjustColors, write=fRAW_AutoAdjustColors, nodefault};
	__property TIOBMPRAWChannelOrder BMPRAW_ChannelOrder = {read=fBMPRAW_ChannelOrder, write=fBMPRAW_ChannelOrder, nodefault};
	__property TIOBMPRAWPlanes BMPRAW_Planes = {read=fBMPRAW_Planes, write=fBMPRAW_Planes, nodefault};
	__property int BMPRAW_RowAlign = {read=fBMPRAW_RowAlign, write=fBMPRAW_RowAlign, nodefault};
	__property int BMPRAW_HeaderSize = {read=fBMPRAW_HeaderSize, write=fBMPRAW_HeaderSize, nodefault};
	__property TIOBMPRAWDataFormat BMPRAW_DataFormat = {read=fBMPRAW_DataFormat, write=fBMPRAW_DataFormat, nodefault};
	__property int IEN_Compression = {read=fIEN_Compression, write=fIEN_Compression, nodefault};
	__property System::WideString IEN_Description = {read=fIEN_Description, write=fIEN_Description};
	__property int IEN_LayerCount = {read=fIEN_LayerCount, nodefault};
	__property int IEN_Version = {read=fIEN_Version, nodefault};
	__property bool IEN_GetThumbnail = {read=fIEN_GetThumbnail, write=fIEN_GetThumbnail, nodefault};
	__property bool IEN_StoreBackground = {read=fIEN_StoreBackground, write=fIEN_StoreBackground, nodefault};
	__property int SVG_ImageCompression = {read=fSVG_ImageCompression, write=fSVG_ImageCompression, nodefault};
	__property TIEWicCodecInfo WIC_CodecInfo = {read=fWIC_CodecInfo, write=fWIC_CodecInfo};
	__property Hyiedefs::TTIFFLZWDecompFunc TIFF_LZWDecompFunc = {read=fTIFF_LZWDecompFunc, write=fTIFF_LZWDecompFunc};
	__property Hyiedefs::TTIFFLZWCompFunc TIFF_LZWCompFunc = {read=fTIFF_LZWCompFunc, write=fTIFF_LZWCompFunc};
	__property Hyiedefs::TGIFLZWDecompFunc GIF_LZWDecompFunc = {read=fGIF_LZWDecompFunc, write=fGIF_LZWDecompFunc};
	__property Hyiedefs::TGIFLZWCompFunc GIF_LZWCompFunc = {read=fGIF_LZWCompFunc, write=fGIF_LZWCompFunc};
	__fastcall TIOParams(System::TObject* AttachTo);
	__fastcall virtual ~TIOParams();
	void __fastcall SetDefaultParams();
	void __fastcall OptimizeLoadingParams(int DisplayWidth, int DisplayHeight, bool AllowThumbnails = true);
	void __fastcall Assign(TIOParams* Source);
	void __fastcall AssignCompressionInfo(TIOParams* Source, bool IncludePDFInfo = false);
	void __fastcall SaveToFile(const System::WideString FileName);
	void __fastcall SaveToStream(System::Classes::TStream* Stream);
	void __fastcall LoadFromFile(const System::WideString FileName, bool CheckMagicString = true);
	void __fastcall LoadFromStream(System::Classes::TStream* Stream, bool CheckMagicString = true);
	__property System::TObject* ImageEnIO = {read=GetImageEnIO};
	void __fastcall ResetInfo(TIEMetaInfoItems ResetItems = TIEMetaInfoItems() );
	TIEMetaInfoItems __fastcall ContainsInfo();
	void __fastcall ResetEXIF();
	void __fastcall CheckHasEXIFData();
	System::WideString __fastcall GetProperty(const System::WideString Prop);
	void __fastcall SetProperty(const System::UnicodeString Prop, System::WideString Value);
	void __fastcall UpdateEXIFThumbnail(int Width = 0xa0, int Height = 0xa0, Hyiedefs::TResampleFilter ResampleFilter = (Hyiedefs::TResampleFilter)(0x1), bool bMaintainAspectRatio = true);
	void __fastcall FreeColorMap();
	void __fastcall AdjustGPSCoordinates();
	void __fastcall UpdateBPSAndSPP(Hyieutils::TIEPixelFormat PixelFormat);
	System::UnicodeString __fastcall ReadIPTCField(int iRecNo, int iFieldIndex)/* overload */;
	void __fastcall ReadIPTCField(int iRecNo, int iFieldIndex, System::Classes::TStrings* Dest)/* overload */;
	void __fastcall WriteIPTCField(int iRecNo, int iFieldIndex, const System::UnicodeString Value)/* overload */;
	void __fastcall WriteIPTCField(int iRecNo, int iFieldIndex, System::Classes::TStrings* ssValues)/* overload */;
	void __fastcall ClearIPTCField(int iRecNo, int iFieldIndex);
	bool __fastcall Read(const System::WideString FileName, int Format = 0x0)/* overload */;
	bool __fastcall Read(const System::WideString FileName, bool bUseExtension)/* overload */;
	bool __fastcall Read(System::Classes::TStream* Stream, int Format = 0x0)/* overload */;
	bool __fastcall Read(void * Buffer, int BufferSize, int Format = 0x0)/* overload */;
};


typedef TIOParams TIOParamsVals _DEPRECATED_ATTRIBUTE1("Use TIOParams instead - http://imageen.com/help/Compatib"
	"ility.html") ;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIOMultiParams : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Classes::TList* fParamsList;
	int __fastcall GetCount();
	TIOParams* __fastcall GetParams(int idx);
	void __fastcall RemoveParam(int idx);
	void __fastcall InsertParam(int idx);
	void __fastcall MoveParam(int idx, int Destination);
	void __fastcall MoveParams(Hyiedefs::TIEArrayOfInteger IndexGroup, int Destination);
	void __fastcall SwapParams(int idx1, int idx2);
	void __fastcall CheckAllocated(int idx);
	
public:
	__fastcall TIOMultiParams();
	__fastcall virtual ~TIOMultiParams();
	void __fastcall UpdateEx(int Operation, int Idx, int ExtraParam)/* overload */;
	void __fastcall UpdateEx(int Operation, int Idx, int ExtraParam, Hyiedefs::TIEArrayOfInteger IndexGroup)/* overload */;
	void __fastcall Allocate(int Count);
	void __fastcall Clear();
	void __fastcall Assign(System::TObject* Source);
	void __fastcall DuplicateCompressionInfo(bool IncludePDFInfo = false);
	__property int Count = {read=GetCount, nodefault};
	__property TIOParams* Params[int idx] = {read=GetParams};
	bool __fastcall Read(const System::WideString FileName, int Format = 0x0)/* overload */;
	bool __fastcall Read(const System::WideString FileName, bool bUseExtension)/* overload */;
	bool __fastcall Read(System::Classes::TStream* Stream, int Format = 0x0)/* overload */;
	bool __fastcall Read(void * Buffer, int BufferSize, int Format = 0x0)/* overload */;
};

#pragma pack(pop)

enum DECLSPEC_DENUM TIEDicomTagSource : unsigned char { dsStandard, dsDeprecated, dsProprietary };

enum DECLSPEC_DENUM TIEDicomTagType : unsigned char { dvAE, dvAS, dvAT, dvCS, dvDA, dvDS, dvDT, dvFD, dvFL, dvIS, dvLO, dvLT, dvOB, dvOF, dvOW, dvPN, dvSH, dvSL, dvSQ, dvSS, dvST, dvTM, dvUI, dvUL, dvUN, dvUR, dvUS, dvUT, dvUSorSS, dvUnknown };

struct DECLSPEC_DRECORD TIEDicomTag
{
public:
	System::Word Group;
	System::Word Element;
	TIEDicomTagType DataType;
	void *Data;
	int DataLen;
	System::Contnrs::TObjectList* Children;
};


typedef TIEDicomTag *PIEDicomTag;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEDicomTags : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Classes::TList* fTags;
	bool fSorted;
	int __fastcall GetCount();
	void __fastcall FreeTag(int Index);
	int __fastcall SetTag(PIEDicomTag Tag, bool ReplaceIfExist);
	
public:
	__fastcall TIEDicomTags();
	__fastcall virtual ~TIEDicomTags();
	void __fastcall Clear();
	void __fastcall SaveToStream(System::Classes::TStream* Stream);
	void __fastcall LoadFromStream(System::Classes::TStream* Stream);
	void __fastcall Assign(TIEDicomTags* Source);
	int __fastcall AddTag(System::Word Group, System::Word Element, TIEDicomTagType DataType, void * Data, int DataLen, System::Contnrs::TObjectList* Children = (System::Contnrs::TObjectList*)(0x0));
	int __fastcall IndexOf(System::Word Group, System::Word Element)/* overload */;
	PIEDicomTag __fastcall GetTag(int Index)/* overload */;
	PIEDicomTag __fastcall GetTag(System::Word Group, System::Word Element)/* overload */;
	System::AnsiString __fastcall GetTagString(int Index)/* overload */;
	System::AnsiString __fastcall GetTagString(System::Word Group, System::Word Element)/* overload */;
	double __fastcall GetTagNumeric(int Index, double Default = 0.000000E+00)/* overload */;
	double __fastcall GetTagNumeric(System::Word Group, System::Word Element, double Default = 0.000000E+00)/* overload */;
	System::Contnrs::TObjectList* __fastcall GetTagChildren(System::Word Group, System::Word Element)/* overload */;
	System::Contnrs::TObjectList* __fastcall GetTagChildren(int Index)/* overload */;
	void __fastcall SetTagNumeric(System::Word Group, System::Word Element, double Value, bool ReplaceIfExist = true);
	void __fastcall SetTagString(System::Word Group, System::Word Element, System::AnsiString Value, bool ReplaceIfExist = true);
	void __fastcall SetTagByteBuffer(System::Word Group, System::Word Element, System::PByte Buffer, int Length, bool ReplaceIfExist = true);
	void __fastcall DeleteTag(int Index)/* overload */;
	void __fastcall DeleteTag(System::Word Group, System::Word Element, bool DeleteAllInstances = false)/* overload */;
	void __fastcall DeleteGroup(System::Word Group);
	TIEDicomTags* __fastcall FindNestedTag(System::Word Group, System::Word Element, /* out */ int &Index, TIEDicomTags* StartFrom = (TIEDicomTags*)(0x0))/* overload */;
	TIEDicomTags* __fastcall FindNestedTag(System::Word Group, System::Word Element, /* out */ int &Index, System::Contnrs::TObjectList* StartFrom)/* overload */;
	__property int Count = {read=GetCount, nodefault};
	void __fastcall CopyTag(TIEDicomTags* SourceTags, int Index)/* overload */;
	void __fastcall CopyTag(TIEDicomTags* SourceTags, System::Word Group, System::Word Element)/* overload */;
	void __fastcall AnonymizeTag(System::Word Group, System::Word Element, const System::AnsiString AnonymizeStr = "Anonymous");
	__property bool Sorted = {read=fSorted, write=fSorted, nodefault};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TIEGraphicBase : public Vcl::Graphics::TGraphic
{
	typedef Vcl::Graphics::TGraphic inherited;
	
private:
	System::TObject* fio;
	TIEBitmap* bmp;
	int fFiletype;
	Hyiedefs::TResampleFilter fResampleFilter;
	
protected:
	virtual void __fastcall Draw(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &Rect);
	virtual bool __fastcall GetEmpty();
	virtual int __fastcall GetHeight();
	virtual int __fastcall GetWidth();
	virtual void __fastcall SetHeight(int Value);
	virtual void __fastcall SetWidth(int Value);
	virtual void __fastcall WriteData(System::Classes::TStream* Stream);
	virtual void __fastcall ReadData(System::Classes::TStream* Stream);
	
public:
	__fastcall virtual TIEGraphicBase()/* overload */;
	__fastcall virtual ~TIEGraphicBase();
	virtual void __fastcall LoadFromStream(System::Classes::TStream* Stream);
	virtual void __fastcall SaveToStream(System::Classes::TStream* Stream);
	virtual void __fastcall LoadFromClipboardFormat(System::Word AFormat, NativeUInt AData, HPALETTE APalette);
	virtual void __fastcall SaveToClipboardFormat(System::Word &AFormat, NativeUInt &AData, HPALETTE &APalette);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property System::TObject* IO = {read=fio};
	__property Hyiedefs::TResampleFilter ResampleFilter = {read=fResampleFilter, write=fResampleFilter, nodefault};
	__property TIEBitmap* IEBitmap = {read=bmp};
	virtual void __fastcall AssignTo(System::Classes::TPersistent* Dest);
};


enum DECLSPEC_DENUM TIESourceType : unsigned char { iestDefault, iestFileIcon, iestFolderIcon, iestDeviceIcon, iestCustomImage };

class PASCALIMPLEMENTATION TIEImageInfo : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	System::TObject* parent;
	void *image;
	void *cacheImage;
	int X;
	int Y;
	int row;
	int col;
	System::Uitypes::TColor Background;
	System::WideString Filename;
	int ID;
	double DTime;
	System::WideString TopText;
	System::WideString BottomText;
	System::WideString InfoText;
	System::Types::TRect InternalRect;
	int Tag;
	void *userPointer;
	Hyieutils::TIEDictionary* userDict;
	TIESourceType SourceType;
	bool Checked;
	System::TDateTime CreateDate;
	System::TDateTime EditDate;
	__int64 FileSize;
	int FileTypeIndex;
	System::AnsiString Hash;
	bool Filtered;
	__fastcall TIEImageInfo(System::TObject* Parent_);
	__fastcall virtual ~TIEImageInfo();
	__classmethod TIEImageInfo* __fastcall CreateFromStream(System::TObject* Parent, System::Classes::TStream* Stream, System::Byte StreamVersion, bool LoadCache, TIEVirtualImageList* Images, TIEVirtualImageList* Caches);
	void __fastcall SaveToStream(System::Classes::TStream* Stream, bool SaveCache, TIEVirtualImageList* Images, TIEVirtualImageList* Caches);
};


enum DECLSPEC_DENUM Iexbitmaps__02 : unsigned char { iessoCompressed, iessoSaveIOParams };

typedef System::Set<Iexbitmaps__02, Iexbitmaps__02::iessoCompressed, Iexbitmaps__02::iessoSaveIOParams> TIESaveSnapshotOptions;

typedef void __fastcall (__closure *TIEImageNotifyEvent)(System::TObject* Sender, int idx);

typedef void __fastcall (__closure *TIEMViewImageNotifyEvent)(System::TObject* Sender, int idx);

class PASCALIMPLEMENTATION TIECustomMultiBitmap : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	int fImageCacheSize;
	bool fImageCacheUseDisk;
	TIOMultiParams* fParamsList;
	int fLockUpdate;
	TIEImageNotifyEvent fOnChanged;
	Hyiedefs::TIEProgressEvent fOnProgress;
	TIEMViewImageNotifyEvent fOnImageLoaded;
	bool fModified;
	System::UnicodeString fFilename;
	bool fParamsEnabled;
	int __fastcall GetImageBitCount(int idx);
	int __fastcall GetImageCount();
	System::AnsiString __fastcall GetImageHash(int idx);
	int __fastcall GetImageHeight(int idx);
	int __fastcall GetImageOriginalHeight(int idx);
	int __fastcall GetImageOriginalWidth(int idx);
	int __fastcall GetImageTag(int idx);
	void * __fastcall GetImageUserPointer(int idx);
	int __fastcall GetImageWidth(int idx);
	void __fastcall SetImageCacheSize(int v);
	void __fastcall SetImageCacheUseDisk(bool v);
	void __fastcall SetImageOriginalHeight(int idx, int Value);
	void __fastcall SetImageOriginalWidth(int idx, int Value);
	void __fastcall SetImageTag(int idx, int v);
	void __fastcall SetImageUserPointer(int idx, void * v);
	System::Uitypes::TColor __fastcall GetImageBackground(int idx);
	void __fastcall SetImageBackground(int idx, System::Uitypes::TColor v);
	double __fastcall GetImageDelayTime(int idx);
	void __fastcall SetImageDelayTime(int idx, double v);
	TIOParams* __fastcall GetParams(int idx);
	bool __fastcall GetParamsEnabled();
	void __fastcall SetParamsEnabled(const bool Value);
	void __fastcall UpdateParams(int Operation, int Idx, int ExtraParam);
	void __fastcall FreeImageInfo(int idx);
	void __fastcall SetImageEx(int idx, TIEBaseBitmap* srcImage);
	void __fastcall CheckImageLoaded(int idx);
	System::WideString __fastcall GetImageFileName(int idx);
	Hyieutils::TIEDictionary* __fastcall GetImageDictionary(int idx);
	void __fastcall SetImageFileName(int idx, const System::WideString v);
	void __fastcall SetModified(bool Value);
	void __fastcall DoProgress(int pos, int tot);
	
protected:
	bool fUpdatePending;
	virtual void __fastcall CheckAllocated(int idx);
	void __fastcall AllocateVirtual(int Count);
	bool __fastcall ValidateIndex(int idx);
	void __fastcall Changed(int idx);
	
public:
	System::Uitypes::TColor fBackground;
	TIEVirtualImageList* fImageList;
	System::Classes::TList* fImageInfo;
	System::Classes::TComponent* fOwner;
	__fastcall virtual TIECustomMultiBitmap()/* overload */;
	__fastcall TIECustomMultiBitmap(bool bCacheToDisk)/* overload */;
	__fastcall virtual ~TIECustomMultiBitmap();
	TIEImageInfo* __fastcall GetImageInfo(int idx);
	virtual int __fastcall AppendImage()/* overload */;
	virtual int __fastcall AppendImage(System::Classes::TStream* Stream, int FileFormat = 0x0)/* overload */;
	virtual int __fastcall AppendImage(TIEBitmap* Bitmap)/* overload */;
	virtual int __fastcall AppendImage(TIECustomMultiBitmap* MBitmap)/* overload */;
	virtual int __fastcall AppendImage(Vcl::Graphics::TBitmap* Bitmap)/* overload */;
	virtual int __fastcall AppendImage(int Width, int Height, Hyieutils::TIEPixelFormat PixelFormat = (Hyieutils::TIEPixelFormat)(0x5))/* overload */;
	virtual int __fastcall AppendImage(const System::UnicodeString FileName)/* overload */;
	virtual void __fastcall InsertImage(int Idx)/* overload */;
	virtual void __fastcall InsertImage(int Idx, System::Classes::TStream* Stream, int FileFormat = 0x0)/* overload */;
	virtual void __fastcall InsertImage(int Idx, TIEBitmap* Bitmap)/* overload */;
	virtual void __fastcall InsertImage(int Idx, TIECustomMultiBitmap* MBitmap)/* overload */;
	virtual void __fastcall InsertImage(int Idx, Vcl::Graphics::TBitmap* Bitmap)/* overload */;
	virtual void __fastcall InsertImage(int Idx, int Width, int Height, Hyieutils::TIEPixelFormat PixelFormat = (Hyieutils::TIEPixelFormat)(0x5))/* overload */;
	virtual void __fastcall InsertImage(int Idx, const System::UnicodeString FileName)/* overload */;
	int __fastcall IndexOf(const System::AnsiString Hash)/* overload */;
	int __fastcall IndexOf(TIEBitmap* Bitmap)/* overload */;
	void __fastcall GetImageToFile(int idx, const System::WideString FileName, TIOParams* IOParams = (TIOParams*)(0x0));
	void __fastcall GetImageToStream(int idx, System::Classes::TStream* Stream, int ImageFormat, TIOParams* IOParams = (TIOParams*)(0x0));
	Vcl::Graphics::TBitmap* __fastcall GetBitmap(int idx);
	TIEBitmap* __fastcall GetTIEBitmap(int idx);
	virtual void __fastcall ReleaseBitmap(int idx, bool SaveChanges);
	void __fastcall CopyToIEBitmap(int idx, TIEBitmap* bmp);
	virtual void __fastcall DeleteImage(int idx);
	void __fastcall PrepareSpaceFor(int Width, int Height, int Bitcount, int ImageCount);
	virtual void __fastcall SetImage(int idx, Vcl::Graphics::TBitmap* srcImage)/* overload */;
	virtual void __fastcall SetImage(int idx, TIEBaseBitmap* srcImage)/* overload */;
	virtual void __fastcall SetImage(int idx, int width, int height, Hyieutils::TIEPixelFormat PixelFormat)/* overload */;
	virtual bool __fastcall SetImage(int idx, const System::WideString FileName, int SourceImageIndex = 0x0, int FileFormat = 0x0)/* overload */;
	virtual bool __fastcall SetImage(int idx, System::Classes::TStream* Stream, int SourceImageIndex = 0x0, int FileFormat = 0x0)/* overload */;
	void __fastcall SaveSnapshot(System::Classes::TStream* Stream, TIESaveSnapshotOptions Options = (TIESaveSnapshotOptions() << Iexbitmaps__02::iessoCompressed << Iexbitmaps__02::iessoSaveIOParams ))/* overload */;
	void __fastcall SaveSnapshot(const System::WideString FileName, TIESaveSnapshotOptions Options = (TIESaveSnapshotOptions() << Iexbitmaps__02::iessoCompressed << Iexbitmaps__02::iessoSaveIOParams ))/* overload */;
	bool __fastcall LoadSnapshot(System::Classes::TStream* Stream)/* overload */;
	bool __fastcall LoadSnapshot(const System::WideString FileName)/* overload */;
	__property bool ImageCacheUseDisk = {read=fImageCacheUseDisk, write=SetImageCacheUseDisk, nodefault};
	__property int ImageCacheSize = {read=fImageCacheSize, write=SetImageCacheSize, nodefault};
	__property int Count = {read=GetImageCount, nodefault};
	__property int ImageWidth[int idx] = {read=GetImageWidth};
	__property System::AnsiString ImageHash[int idx] = {read=GetImageHash};
	__property int ImageHeight[int idx] = {read=GetImageHeight};
	__property int ImageOriginalWidth[int idx] = {read=GetImageOriginalWidth, write=SetImageOriginalWidth};
	__property int ImageOriginalHeight[int idx] = {read=GetImageOriginalHeight, write=SetImageOriginalHeight};
	__property int ImageBitCount[int idx] = {read=GetImageBitCount};
	__property int ImageTag[int idx] = {read=GetImageTag, write=SetImageTag};
	__property void * ImageUserPointer[int idx] = {read=GetImageUserPointer, write=SetImageUserPointer};
	__property System::WideString ImageFilename[int idx] = {read=GetImageFileName, write=SetImageFileName};
	__property Hyieutils::TIEDictionary* ImageDictionary[int idx] = {read=GetImageDictionary};
	__property bool ParamsEnabled = {read=GetParamsEnabled, write=SetParamsEnabled, nodefault};
	__property TIOParams* Params[int idx] = {read=GetParams};
	virtual void __fastcall Flip(int idx, Hyiedefs::TFlipDir Dir);
	virtual void __fastcall Rotate(int idx, double Angle, Hyiedefs::TIEAntialiasMode AntialiasMode = (Hyiedefs::TIEAntialiasMode)(0x1), System::Uitypes::TColor BackgroundColor = (System::Uitypes::TColor)(0xffffff));
	virtual void __fastcall Resample(int idx, double ScaleBy, Hyiedefs::TResampleFilter FilterType = (Hyiedefs::TResampleFilter)(0x0))/* overload */;
	virtual void __fastcall Resample(int idx, int NewWidth, int NewHeight, Hyiedefs::TResampleFilter FilterType = (Hyiedefs::TResampleFilter)(0x0), bool MaintainAspectRatio = false, bool ShrinkOnly = false)/* overload */;
	void __fastcall FlipAll(Hyiedefs::TFlipDir Dir);
	void __fastcall RotateAll(double Angle, Hyiedefs::TIEAntialiasMode AntialiasMode = (Hyiedefs::TIEAntialiasMode)(0x1), System::Uitypes::TColor BackgroundColor = (System::Uitypes::TColor)(0xffffff));
	void __fastcall ResampleAll(double ScaleBy, Hyiedefs::TResampleFilter FilterType = (Hyiedefs::TResampleFilter)(0x0))/* overload */;
	void __fastcall ResampleAll(int NewWidth, int NewHeight, Hyiedefs::TResampleFilter FilterType = (Hyiedefs::TResampleFilter)(0x0), bool MaintainAspectRatio = false, bool ShrinkOnly = false)/* overload */;
	__property System::Uitypes::TColor ImageBackground[int idx] = {read=GetImageBackground, write=SetImageBackground};
	__property double ImageDelayTime[int idx] = {read=GetImageDelayTime, write=SetImageDelayTime};
	__property TIOMultiParams* ParamsList = {read=fParamsList};
	void __fastcall Clear();
	void __fastcall LockUpdate();
	int __fastcall UnlockUpdate();
	virtual void __fastcall Update();
	virtual void __fastcall UpdateEx(bool bFullUpdate = true);
	bool __fastcall Read(const System::UnicodeString FileName, TIOMultiParams* IOParams = (TIOMultiParams*)(0x0), bool bCheckUnknown = false, bool OnDemand = false)/* overload */;
	bool __fastcall Read(System::Classes::TStream* Stream, int FileType = 0x0, TIOMultiParams* IOParams = (TIOMultiParams*)(0x0))/* overload */;
	bool __fastcall Read(void * Buffer, int BufferSize, int FileType = 0x0, TIOMultiParams* IOParams = (TIOMultiParams*)(0x0))/* overload */;
	bool __fastcall Write(const System::UnicodeString FileName, TIOMultiParams* IOParams = (TIOMultiParams*)(0x0))/* overload */;
	bool __fastcall Write(const System::UnicodeString FileName, int FileType, TIOMultiParams* IOParams = (TIOMultiParams*)(0x0))/* overload */;
	bool __fastcall Write(System::Classes::TStream* Stream, int FileType, TIOMultiParams* IOParams = (TIOMultiParams*)(0x0))/* overload */;
	void __fastcall DuplicateCompressionInfo(bool IncludePDFInfo = false);
	__property int LockUpdateCount = {read=fLockUpdate, nodefault};
	virtual bool __fastcall SetImageFromStreamOrFile(int idx, System::Classes::TStream* Stream, const System::WideString FileName, int SourceImageIndex, int FileFormat);
	virtual void __fastcall SetActiveImage(int idx);
	virtual bool __fastcall InternalLoadImageByID_Assigned();
	virtual void __fastcall InternalLoadImageByID(System::TObject* Sender, int Index, int ID, TIEBitmap* &Bitmap, TIOParams* IOParams);
	__property System::UnicodeString Filename = {read=fFilename, write=fFilename};
	__property TIEImageNotifyEvent OnChanged = {read=fOnChanged, write=fOnChanged};
	__property Hyiedefs::TIEProgressEvent OnProgress = {read=fOnProgress, write=fOnProgress};
	__property bool Modified = {read=fModified, write=SetModified, nodefault};
	__property TIEMViewImageNotifyEvent OnImageLoaded = {read=fOnImageLoaded, write=fOnImageLoaded};
};


class PASCALIMPLEMENTATION TIEMultiBitmap : public TIECustomMultiBitmap
{
	typedef TIECustomMultiBitmap inherited;
	
public:
	__fastcall TIEMultiBitmap(int ImageWidth, int ImageHeight, int PageCount, Hyieutils::TIEPixelFormat ImagePixelFormat)/* overload */;
	__fastcall TIEMultiBitmap(TIECustomMultiBitmap* MBitmap)/* overload */;
	__fastcall TIEMultiBitmap(const System::UnicodeString FileName)/* overload */;
	void __fastcall Assign(System::TObject* Source, bool CopyParams = true);
	int __fastcall AppendSplit(TIEBitmap* SourceGrid, int cellWidth, int cellHeight, int maxCount = 0x0);
	void __fastcall MoveImage(int idx, int destination);
	void __fastcall SwapImages(int idx1, int idx2);
	void __fastcall InsertTransitionFrames(int Idx, int iFrameCount, Iextransitions::TIETransitionType Effect, int iWidth = 0xffffffff, int iHeight = 0xffffffff, System::Uitypes::TColor BackgroundColor = (System::Uitypes::TColor)(0x0), Hyiedefs::TResampleFilter ResamplingFilter = (Hyiedefs::TResampleFilter)(0x9))/* overload */;
	void __fastcall InsertTransitionFrames(int Idx, int iFrameCount, Iextransitions::TIETransitionType Effect, const System::Types::TRect &StartRect, const System::Types::TRect &EndRect, bool RectMaintainAspectRatio = true, int iWidth = 0xffffffff, int iHeight = 0xffffffff, bool bStretchSmall = false, System::Uitypes::TColor BackgroundColor = (System::Uitypes::TColor)(0x0), Hyiedefs::TResampleFilter ResamplingFilter = (Hyiedefs::TResampleFilter)(0x9), int Smoothing = 0xff, Iextransitions::TIETransitionTiming Timing = (Iextransitions::TIETransitionTiming)(0x0))/* overload */;
	void __fastcall InsertTransitionFramesEx _DEPRECATED_ATTRIBUTE1("Use InsertTransitionFrames instead - http://imageen.com/help/Compatibility.html") (int Idx, int iFrameCount, Iextransitions::TIETransitionType Effect, const System::Types::TRect &StartRect, const System::Types::TRect &EndRect, bool RectMaintainAspectRatio = true, int iWidth = 0xffffffff, int iHeight = 0xffffffff, bool bStretchSmall = false, System::Uitypes::TColor BackgroundColor = (System::Uitypes::TColor)(0x0), Hyiedefs::TResampleFilter ResamplingFilter = (Hyiedefs::TResampleFilter)(0x9), int Smoothing = 0x60, Iextransitions::TIETransitionTiming Timing = (Iextransitions::TIETransitionTiming)(0x0));
	int __fastcall RemoveBlankPages(double Tolerance = 0.000000E+00, bool Complete = true, bool LeftToRight = true);
	int __fastcall RemoveDuplicates();
	void __fastcall SetImageRect(int idx, Vcl::Graphics::TBitmap* srcImage, int x1, int y1, int x2, int y2)/* overload */;
	void __fastcall SetImageRect(int idx, TIEBitmap* srcImage, int x1, int y1, int x2, int y2)/* overload */;
	void __fastcall FillFromList(System::Classes::TStrings* ssFiles, const System::UnicodeString Directory = System::UnicodeString());
	void __fastcall FillFromDirectory(const System::WideString Directory, int Limit = 0xffffffff, bool AllowUnknownFormats = false, const System::WideString ExcludeExtensions = System::WideString(), bool DetectFileFormat = false, const System::WideString FilterMask = System::WideString(), bool bGetHiddenFiles = false);
public:
	/* TIECustomMultiBitmap.Create */ inline __fastcall virtual TIEMultiBitmap()/* overload */ : TIECustomMultiBitmap() { }
	/* TIECustomMultiBitmap.Create */ inline __fastcall TIEMultiBitmap(bool bCacheToDisk)/* overload */ : TIECustomMultiBitmap(bCacheToDisk) { }
	/* TIECustomMultiBitmap.Destroy */ inline __fastcall virtual ~TIEMultiBitmap() { }
	
};


class PASCALIMPLEMENTATION TIETIFFImage : public TIEGraphicBase
{
	typedef TIEGraphicBase inherited;
	
public:
	/* TIEGraphicBase.Create */ inline __fastcall virtual TIETIFFImage()/* overload */ : TIEGraphicBase() { }
	/* TIEGraphicBase.Destroy */ inline __fastcall virtual ~TIETIFFImage() { }
	
};


class PASCALIMPLEMENTATION TIEGIFImage : public TIEGraphicBase
{
	typedef TIEGraphicBase inherited;
	
public:
	/* TIEGraphicBase.Create */ inline __fastcall virtual TIEGIFImage()/* overload */ : TIEGraphicBase() { }
	/* TIEGraphicBase.Destroy */ inline __fastcall virtual ~TIEGIFImage() { }
	
};


class PASCALIMPLEMENTATION TIEJpegImage : public TIEGraphicBase
{
	typedef TIEGraphicBase inherited;
	
public:
	/* TIEGraphicBase.Create */ inline __fastcall virtual TIEJpegImage()/* overload */ : TIEGraphicBase() { }
	/* TIEGraphicBase.Destroy */ inline __fastcall virtual ~TIEJpegImage() { }
	
};


class PASCALIMPLEMENTATION TIEPCXImage : public TIEGraphicBase
{
	typedef TIEGraphicBase inherited;
	
public:
	/* TIEGraphicBase.Create */ inline __fastcall virtual TIEPCXImage()/* overload */ : TIEGraphicBase() { }
	/* TIEGraphicBase.Destroy */ inline __fastcall virtual ~TIEPCXImage() { }
	
};


class PASCALIMPLEMENTATION TIEBMPImage : public TIEGraphicBase
{
	typedef TIEGraphicBase inherited;
	
public:
	/* TIEGraphicBase.Create */ inline __fastcall virtual TIEBMPImage()/* overload */ : TIEGraphicBase() { }
	/* TIEGraphicBase.Destroy */ inline __fastcall virtual ~TIEBMPImage() { }
	
};


class PASCALIMPLEMENTATION TIEICOImage : public TIEGraphicBase
{
	typedef TIEGraphicBase inherited;
	
public:
	/* TIEGraphicBase.Create */ inline __fastcall virtual TIEICOImage()/* overload */ : TIEGraphicBase() { }
	/* TIEGraphicBase.Destroy */ inline __fastcall virtual ~TIEICOImage() { }
	
};


class PASCALIMPLEMENTATION TIEPNGImage : public TIEGraphicBase
{
	typedef TIEGraphicBase inherited;
	
public:
	/* TIEGraphicBase.Create */ inline __fastcall virtual TIEPNGImage()/* overload */ : TIEGraphicBase() { }
	/* TIEGraphicBase.Destroy */ inline __fastcall virtual ~TIEPNGImage() { }
	
};


class PASCALIMPLEMENTATION TIETGAImage : public TIEGraphicBase
{
	typedef TIEGraphicBase inherited;
	
public:
	/* TIEGraphicBase.Create */ inline __fastcall virtual TIETGAImage()/* overload */ : TIEGraphicBase() { }
	/* TIEGraphicBase.Destroy */ inline __fastcall virtual ~TIETGAImage() { }
	
};


class PASCALIMPLEMENTATION TIEPXMImage : public TIEGraphicBase
{
	typedef TIEGraphicBase inherited;
	
public:
	/* TIEGraphicBase.Create */ inline __fastcall virtual TIEPXMImage()/* overload */ : TIEGraphicBase() { }
	/* TIEGraphicBase.Destroy */ inline __fastcall virtual ~TIEPXMImage() { }
	
};


class PASCALIMPLEMENTATION TIEJP2Image : public TIEGraphicBase
{
	typedef TIEGraphicBase inherited;
	
public:
	/* TIEGraphicBase.Create */ inline __fastcall virtual TIEJP2Image()/* overload */ : TIEGraphicBase() { }
	/* TIEGraphicBase.Destroy */ inline __fastcall virtual ~TIEJP2Image() { }
	
};


class PASCALIMPLEMENTATION TIEJ2KImage : public TIEGraphicBase
{
	typedef TIEGraphicBase inherited;
	
public:
	/* TIEGraphicBase.Create */ inline __fastcall virtual TIEJ2KImage()/* overload */ : TIEGraphicBase() { }
	/* TIEGraphicBase.Destroy */ inline __fastcall virtual ~TIEJ2KImage() { }
	
};


class PASCALIMPLEMENTATION TIEPSDImage : public TIEGraphicBase
{
	typedef TIEGraphicBase inherited;
	
public:
	/* TIEGraphicBase.Create */ inline __fastcall virtual TIEPSDImage()/* overload */ : TIEGraphicBase() { }
	/* TIEGraphicBase.Destroy */ inline __fastcall virtual ~TIEPSDImage() { }
	
};


class PASCALIMPLEMENTATION TIENativeImage : public TIEGraphicBase
{
	typedef TIEGraphicBase inherited;
	
public:
	/* TIEGraphicBase.Create */ inline __fastcall virtual TIENativeImage()/* overload */ : TIEGraphicBase() { }
	/* TIEGraphicBase.Destroy */ inline __fastcall virtual ~TIENativeImage() { }
	
};


class PASCALIMPLEMENTATION TIEPDFImage : public TIEGraphicBase
{
	typedef TIEGraphicBase inherited;
	
public:
	/* TIEGraphicBase.Create */ inline __fastcall virtual TIEPDFImage()/* overload */ : TIEGraphicBase() { }
	/* TIEGraphicBase.Destroy */ inline __fastcall virtual ~TIEPDFImage() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION EIERFBError : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EIERFBError(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EIERFBError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EIERFBError(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EIERFBError(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EIERFBError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EIERFBError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EIERFBError(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EIERFBError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EIERFBError(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EIERFBError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EIERFBError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EIERFBError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EIERFBError() { }
	
};

#pragma pack(pop)

typedef void __fastcall (__closure *TIERFBClipboardTextEvent)(System::TObject* Sender, System::AnsiString Text);

typedef void __fastcall (__closure *TIERFBUpdateRectEvent)(System::TObject* Sender, const System::Types::TRect &Rect);

class PASCALIMPLEMENTATION TIERFBMessageThread : public System::Classes::TThread
{
	typedef System::Classes::TThread inherited;
	
private:
	TIERFBClient* m_client;
	System::AnsiString m_clipboardText;
	System::Types::TRect m_updatedRect;
	void __fastcall CopyRawRow(System::PByte &src, System::PByte dst, int columns);
	void __fastcall msg_FrameBufferUpdate();
	void __fastcall msg_SetColourMapEntries();
	void __fastcall msg_Bell();
	void __fastcall msg_ServerCutText();
	void __fastcall DoOnUpdate();
	void __fastcall DoOnUpdateNonSync();
	void __fastcall DoOnUpdateRect();
	void __fastcall DoOnBell();
	void __fastcall DoOnClipboardText();
	void __fastcall DoOnUpdateScreenSize();
	void __fastcall UpdateCursorShape();
	
public:
	__fastcall TIERFBMessageThread(TIERFBClient* Client);
	__fastcall virtual ~TIERFBMessageThread();
	virtual void __fastcall Execute();
};


enum DECLSPEC_DENUM TIERFBPixelFormat : unsigned char { ierfbPalette256, ierfbRGB16, ierfbRGB32 };

class PASCALIMPLEMENTATION TIERFBClient : public System::TObject
{
	typedef System::TObject inherited;
	
	
private:
	typedef System::DynamicArray<Hyiedefs::TRGB48> _TIERFBClient__1;
	
	
private:
	Hyieutils::TIEClientSocket* m_socket;
	System::Types::TSize m_frameBufferSize;
	System::Byte m_bitsPerPixel;
	System::Byte m_depth;
	System::Byte m_bigEndianFlag;
	System::Byte m_trueColorFlag;
	System::Word m_redMax;
	System::Word m_greenMax;
	System::Word m_blueMax;
	System::Byte m_redShift;
	System::Byte m_greenShift;
	System::Byte m_blueShift;
	System::AnsiString m_name;
	TIEBitmap* m_frameBuffer;
	bool m_freeFrameBuffer;
	TIERFBUpdateRectEvent m_OnUpdateRect;
	System::Classes::TNotifyEvent m_OnUpdate;
	System::Classes::TNotifyEvent m_OnUpdateNonSync;
	System::Classes::TNotifyEvent m_OnBell;
	TIERFBClipboardTextEvent m_OnClipboardText;
	System::Classes::TNotifyEvent m_OnCursorShapeUpdated;
	System::Classes::TNotifyEvent m_OnUpdateScreenSize;
	TIERFBMessageThread* m_msgThread;
	_TIERFBClient__1 m_colorMap;
	TIERFBPixelFormat m_pixelFormat;
	TIEBitmap* m_cursor;
	System::Types::TPoint m_cursorPos;
	System::Types::TPoint m_cursorHotSpot;
	TIEBitmap* m_savedCursorArea;
	System::Types::TPoint m_savedCursorPos;
	System::Syncobjs::TCriticalSection* m_frameBufferLock;
	System::Syncobjs::TCriticalSection* m_socketSendLock;
	bool m_suspended;
	void __fastcall SendSetPixelFormat(TIERFBPixelFormat pixelFormat);
	bool __fastcall GetConnected();
	void __fastcall PaintCursor();
	void __fastcall RemoveCursor();
	void __fastcall SetSuspended(bool value);
	
public:
	__fastcall TIERFBClient(TIEBitmap* FrameBuffer);
	__fastcall virtual ~TIERFBClient();
	void __fastcall Connect(const System::UnicodeString Address, System::Word Port = (System::Word)(0x170c), const System::AnsiString Password = System::AnsiString());
	void __fastcall Disconnect();
	__property bool Connected = {read=GetConnected, nodefault};
	__property bool Suspended = {read=m_suspended, write=SetSuspended, nodefault};
	__property System::Types::TSize ScreenSize = {read=m_frameBufferSize};
	__property System::AnsiString ScreenName = {read=m_name};
	__property TIERFBPixelFormat ScreenPixelFormat = {read=m_pixelFormat, write=m_pixelFormat, default=2};
	void __fastcall SendRequestUpdate(System::Word x, System::Word y, System::Word width, System::Word height, bool incremental)/* overload */;
	void __fastcall SendRequestUpdate(bool incremental = true)/* overload */;
	void __fastcall SendPointerEvent(int x, int y, bool LeftButton, bool MiddleButton, bool RightButton);
	void __fastcall SendKeyEvent(unsigned xkey, bool down)/* overload */;
	void __fastcall SendKeyEvent(unsigned VirtualKey, unsigned KeyData, bool down)/* overload */;
	void __fastcall SendClipboard(const System::AnsiString Text);
	void __fastcall LockFrameBuffer();
	void __fastcall UnlockFrameBuffer();
	__property TIEBitmap* FrameBuffer = {read=m_frameBuffer};
	__property TIEBitmap* Cursor = {read=m_cursor};
	__property TIERFBUpdateRectEvent OnUpdateRect = {read=m_OnUpdateRect, write=m_OnUpdateRect};
	__property System::Classes::TNotifyEvent OnUpdate = {read=m_OnUpdate, write=m_OnUpdate};
	__property System::Classes::TNotifyEvent OnUpdateNonSync = {read=m_OnUpdateNonSync, write=m_OnUpdateNonSync};
	__property System::Classes::TNotifyEvent OnBell = {read=m_OnBell, write=m_OnBell};
	__property TIERFBClipboardTextEvent OnClipboardText = {read=m_OnClipboardText, write=m_OnClipboardText};
	__property System::Classes::TNotifyEvent OnCursorShapeUpdated = {read=m_OnCursorShapeUpdated, write=m_OnCursorShapeUpdated};
	__property System::Classes::TNotifyEvent OnUpdateScreenSize = {read=m_OnUpdateScreenSize, write=m_OnUpdateScreenSize};
};


enum DECLSPEC_DENUM TIE3DESMode : unsigned char { ie3desENCRYPT, ie3desDECRYPT };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIE3DES : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::StaticArray<unsigned, 32> KnL;
	void __fastcall scrunch(System::PByte outof, unsigned* into);
	void __fastcall unscrun(unsigned* outof, System::PByte into);
	void __fastcall desfunc(Hyiedefs::PDWordArray block, unsigned* keys);
	void __fastcall cookey(unsigned* raw1);
	void __fastcall usekey(unsigned* from);
	void __fastcall deskey(System::Sysutils::PByteArray key, TIE3DESMode edf);
	void __fastcall des(System::PByte inblock, System::PByte outblock);
	
public:
	__fastcall TIE3DES()/* overload */;
	__fastcall TIE3DES(const System::AnsiString Password, TIE3DESMode Mode)/* overload */;
	__fastcall virtual ~TIE3DES();
	void __fastcall Reset(const System::AnsiString Password, TIE3DESMode Mode)/* overload */;
	void __fastcall Reset(__int64 Password, TIE3DESMode Mode)/* overload */;
	void __fastcall Transform(System::PByte InBlock, System::PByte OutBlock, int Length);
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEImageListItem : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	TIEBitmap* image;
	System::WideString filename;
	__fastcall TIEImageListItem(TIEBitmap* image_, const System::WideString filename_);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TIEImageListItem() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEImageList : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	TIEBitmap* operator[](int idx) { return this->Image[idx]; }
	
private:
	System::Classes::TList* m_images;
	int __fastcall GetImageCount();
	TIEBitmap* __fastcall GetImage(int idx);
	void __fastcall SetImage(int idx, TIEBitmap* value);
	System::WideString __fastcall GetFilename(int idx);
	void __fastcall SetFilename(int idx, const System::WideString value);
	
public:
	__fastcall TIEImageList();
	__fastcall virtual ~TIEImageList();
	void __fastcall Clear();
	void __fastcall FillFromDirectory(const System::WideString Directory, int Limit = 0xffffffff, bool AllowUnknownFormats = false, const System::WideString ExcludeExtensions = System::WideString(), bool DetectFileFormat = false, const System::WideString FilterMask = System::WideString(), bool IncludeVideoFiles = false);
	int __fastcall AppendImageRef(TIEBitmap* image, const System::WideString filename);
	void __fastcall Remove(int imageIndex);
	__property int ImageCount = {read=GetImageCount, nodefault};
	__property TIEBitmap* Image[int idx] = {read=GetImage, write=SetImage/*, default*/};
	__property System::WideString Filename[int idx] = {read=GetFilename, write=SetFilename};
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{A7CC5606-1E6C-4A7D-972C-6464A392A278}") IIELoadPicture  : public System::IInterface 
{
	virtual void __fastcall LoadPicture() = 0 ;
};

enum DECLSPEC_DENUM TIEFindFormatMethod : unsigned char { ffContentOnly, ffVerifyByExtension, ffFallbackToExtension };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEVCLStreamProvider : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	System::Classes::TStream* m_stream;
	
public:
	__fastcall TIEVCLStreamProvider(System::Classes::TStream* Stream);
	__fastcall virtual ~TIEVCLStreamProvider();
	HRESULT __safecall size(__int64 &__size_result);
	HRESULT __safecall seek(__int64 offset, Ievision::TIEVisionSeekOffset whence);
	HRESULT __safecall tell(__int64 &__tell_result);
	HRESULT __safecall silent_read(void * ptr, __int64 size, __int64 &__silent_read_result);
	HRESULT __safecall silent_write(void * ptr, __int64 size, __int64 &__silent_write_result);
	HRESULT __safecall silent_getc(int &__silent_getc_result);
	HRESULT __safecall eof(System::LongBool &__eof_result);
private:
	void *__TIEVisionCustomStreamProvider;	// Ievision::TIEVisionCustomStreamProvider 
	
public:
	operator Ievision::TIEVisionCustomStreamProvider*(void) { return (Ievision::TIEVisionCustomStreamProvider*)&__TIEVisionCustomStreamProvider; }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TIEJpegTransform : unsigned char { jtNone, jtCut, jtHorizFlip, jtVertFlip, jtTranspose, jtTransverse, jtRotate90, jtRotate180, jtRotate270 };

enum DECLSPEC_DENUM TIEJpegCopyMarkers : unsigned char { jcCopyNone, jcCopyComments, jcCopyAll };

typedef void __fastcall (*TIEReadImageStream)(System::Classes::TStream* Stream, TIEBitmap* Bitmap, TIOParams* &IOParams, Hyiedefs::TProgressRec &Progress, bool Preview);

typedef void __fastcall (*TIEWriteImageStream)(System::Classes::TStream* Stream, TIEBitmap* Bitmap, TIOParams* &IOParams, Hyiedefs::TProgressRec &Progress);

typedef bool __fastcall (*TIETryImageStream)(System::Classes::TStream* Stream, int TryingFormat);

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEFileFormatInfo : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::UnicodeString __fastcall GetSuitableExtension();
	void __fastcall SetSuitableExtension(System::UnicodeString v);
	
public:
	int FileType;
	System::UnicodeString FullName;
	System::UnicodeString Extensions;
	bool InternalFormat;
	Hyieutils::TPreviewParams DialogPage;
	TIEReadImageStream ReadFunction;
	TIEWriteImageStream WriteFunction;
	TIETryImageStream TryFunction;
	__property System::UnicodeString SuitableExtension = {read=GetSuitableExtension, write=SetSuitableExtension};
	__fastcall TIEFileFormatInfo()/* overload */;
	__fastcall TIEFileFormatInfo(int FileType, const System::UnicodeString FullName, const System::UnicodeString Extensions, bool InternalFormat, Hyieutils::TPreviewParams DialogPage, TIEReadImageStream ReadFunction, TIEWriteImageStream WriteFunction, TIETryImageStream TryFunction)/* overload */;
	__fastcall TIEFileFormatInfo _DEPRECATED_ATTRIBUTE1("SuitableExtension parameter is no longer required - http://imageen.com/help/Compatibility.html") (int FileType, const System::UnicodeString FullName, const System::UnicodeString Extensions, const System::UnicodeString SuitableExtension, bool InternalFormat, Hyieutils::TPreviewParams DialogPage, TIEReadImageStream ReadFunction, TIEWriteImageStream WriteFunction, TIETryImageStream TryFunction)/* overload */;
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TIEFileFormatInfo() { }
	
};

#pragma pack(pop)

typedef void __fastcall (*TIEConvertColorFunction)(void * InputScanline, Hyiedefs::TIECMSColorSpace InputColorSpace, void * OutputScanline, Hyiedefs::TIECMSColorSpace OutputColorSpace, int ImageWidth, TIOParams* IOParams);

//-- var, const, procedure ---------------------------------------------------
static const System::Int8 IEMAXICOIMAGES = System::Int8(0x10);
static const System::Byte EXIF_THUMB_SIZE = System::Byte(0xa0);
static const System::Byte JPEG_APP0 = System::Byte(0xe0);
static const System::Byte JPEG_APP1 = System::Byte(0xe1);
static const System::Byte JPEG_APP2 = System::Byte(0xe2);
static const System::Byte JPEG_APP3 = System::Byte(0xe3);
static const System::Byte JPEG_APP4 = System::Byte(0xe4);
static const System::Byte JPEG_APP5 = System::Byte(0xe5);
static const System::Byte JPEG_APP6 = System::Byte(0xe6);
static const System::Byte JPEG_APP7 = System::Byte(0xe7);
static const System::Byte JPEG_APP8 = System::Byte(0xe8);
static const System::Byte JPEG_APP9 = System::Byte(0xe9);
static const System::Byte JPEG_APP10 = System::Byte(0xea);
static const System::Byte JPEG_APP11 = System::Byte(0xeb);
static const System::Byte JPEG_APP12 = System::Byte(0xec);
static const System::Byte JPEG_APP13 = System::Byte(0xed);
static const System::Byte JPEG_APP14 = System::Byte(0xee);
static const System::Byte JPEG_APP15 = System::Byte(0xef);
static const System::Byte JPEG_COM = System::Byte(0xfe);
static const System::Int8 PhotoShop_IPTC_Records = System::Int8(0x2);
static const System::Int8 IPTC_PS_Title = System::Int8(0x5);
static const System::Int8 IPTC_PS_Caption = System::Int8(0x78);
static const System::Int8 IPTC_PS_Keywords = System::Int8(0x19);
static const System::Int8 IPTC_PS_Category = System::Int8(0xf);
static const System::Int8 IPTC_PS_Category_2 = System::Int8(0x14);
static const System::Int8 IPTC_PS_City = System::Int8(0x5a);
static const System::Int8 IPTC_PS_State_Province = System::Int8(0x5f);
static const System::Int8 IPTC_PS_Country = System::Int8(0x65);
static const System::Int8 IPTC_PS_Instructions = System::Int8(0x28);
static const System::Int8 IPTC_PS_Date_Created = System::Int8(0x37);
static const System::Int8 IPTC_PS_Time_Created = System::Int8(0x3c);
static const System::Int8 IPTC_PS_Byline_1 = System::Int8(0x50);
static const System::Int8 IPTC_PS_Byline_2 = System::Int8(0x55);
static const System::Int8 IPTC_PS_Country_Code = System::Int8(0x64);
static const System::Int8 IPTC_PS_Transmission_Reference = System::Int8(0x67);
static const System::Int8 IPTC_PS_Credit = System::Int8(0x6e);
static const System::Int8 IPTC_PS_Source = System::Int8(0x73);
static const System::Int8 IPTC_PS_Writer = System::Int8(0x7a);
static const System::Int8 IPTC_PS_Edit_Status = System::Int8(0x7);
static const System::Int8 IPTC_PS_Urgency = System::Int8(0xa);
static const System::Int8 IPTC_PS_Fixture_Identifier = System::Int8(0x16);
static const System::Int8 IPTC_PS_Release_Date = System::Int8(0x1e);
static const System::Int8 IPTC_PS_Release_Time = System::Int8(0x23);
static const System::Int8 IPTC_PS_Reference_Service = System::Int8(0x2d);
static const System::Int8 IPTC_PS_Reference_Date = System::Int8(0x2f);
static const System::Int8 IPTC_PS_Reference_Number = System::Int8(0x32);
static const System::Int8 IPTC_PS_Originating_Program = System::Int8(0x41);
static const System::Int8 IPTC_PS_Program_Version = System::Int8(0x46);
static const System::Int8 IPTC_PS_Object_Cycle = System::Int8(0x4b);
static const System::Int8 IPTC_PS_Copyright_Notice = System::Int8(0x74);
static const System::Byte IPTC_PS_Image_Type = System::Byte(0x82);
static const System::Int8 _exoUnknown = System::Int8(0x0);
static const System::Int8 _exoCorrectOrientation = System::Int8(0x1);
static const System::Int8 _exoNeedsHorizontalFlip = System::Int8(0x2);
static const System::Int8 _exoNeeds180Rotate = System::Int8(0x3);
static const System::Int8 _exoNeedsVerticalFlip = System::Int8(0x4);
static const System::Int8 _exoNeedsHorzFlipAnd90RotateCW = System::Int8(0x5);
static const System::Int8 _exoNeeds90RotateCW = System::Int8(0x6);
static const System::Int8 _exoNeedsHorzFlipAnd270RotateCW = System::Int8(0x7);
static const System::Int8 _exoNeeds270RotateCW = System::Int8(0x8);
static const System::Int8 _exoNeedsHorzAndVertFlip = System::Int8(0x5);
static const System::Int8 _exoNeedsFlipHorzAnd90Rotate = System::Int8(0x7);
#define BMP_File_Extensions L"*.BMP;*.DIB;*.RLE"
#define CUR_File_Extensions L"*.CUR"
#define DCX_File_Extensions L"*.DCX"
#define DDS_File_Extensions L"*.DDS"
#define DICOM_File_Extensions L"*.DCM;*.DIC;*.DICOM;*.V2"
#define EMF_File_Extensions L"*.EMF"
#define GIF_File_Extensions L"*.GIF"
#define HDP_File_Extensions L"*.WDP;*.JXR;*.HDP"
#define ICO_File_Extensions L"*.ICO"
#define IEN_File_Extensions L"*.IEN;*.IMAGEEN;*.LYR"
#define IEV_File_Extensions L"*.IEV"
#define HEIF_File_Extensions L"*.HEIC;*.HEIF;*.HEICS;*.AVCS;*.HEIFS"
#define WEBP_File_Extensions L"*.WEBP"
#define JPEG_File_Extensions L"*.JPG;*.JPEG;*.JPE;*.JIF;*.JFIF"
#define J2K_File_Extensions L"*.J2K;*.JPC;*.J2C"
#define JP2_File_Extensions L"*.JP2"
#define PCX_File_Extensions L"*.PCX"
#define PDF_File_Extensions L"*.PDF;*.PDFA;*.EPDF"
#define PNG_File_Extensions L"*.PNG"
#define PS_File_Extensions L"*.PS;*.EPS"
#define PSD_File_Extensions L"*.PSD;*.PSB"
#define PXM_File_Extensions L"*.PXM;*.PBM;*.PGM;*.PPM"
#define SVG_File_Extensions L"*.SVG"
#define TGA_File_Extensions L"*.TGA;*.TARGA;*.VDA;*.ICB;*.VST;*.WIN"
#define TIFF_File_Extensions L"*.TIF;*.TIFF;*.FAX;*.G3F;*.G3N"
#define WBMP_File_Extensions L"*.WBMP"
#define VectAll_File_Extensions L"*.ALL"
#define WMF_File_Extensions L"*.WMF"
#define Camera_Raw_File_Extensions L"*.CRW;*.CR2;*.CR3;*.DNG;*.NEF;*.RAW;*.RAF;*.X3F;*.ORF;*.SR"\
	L"F;*.MRW;*.DCR;*.BAY;*.PEF;*.SR2;*.ARW;*.KDC;*.MEF;*.3FR;*."\
	L"K25;*.ERF;*.CAM;*.CS1;*.DC2;*.DCS;*.FFF;*.MDC;*.MOS;*.NRW;"\
	L"*.PTX;*.PXN;*.RDC;*.RW2;*.RWL;*.IIQ;*.SRW"
#define AVI_File_Extensions L"*.AVI"
#define MPEG_File_Extensions L"*.MPE;*.MPG;*.MPEG"
#define WMV_File_Extensions L"*.WMV"
#define Supported_Video_File_Extensions L"*.AVI;*.MPE;*.MPG;*.MPEG;*.WMV"
#define ALL_KNOWN_EXPLORER_VIDEO_FORMATS L"*.AVI;*.MPG;*.MPE;*.MPEG;*.WMV;*.ASF;*.IVF;*.WM;*.MP4;*.MO"\
	L"V;*.QT;*.RM;*.M2TS;*.MTS;*.MOD;"
#define Windows_MetaFile_Extensions L"*.emf;*.wmf"
static const System::Int8 IEM_OP_NONE = System::Int8(0x0);
static const System::Int8 IEM_OP_INSERT = System::Int8(0x1);
static const System::Int8 IEM_OP_DELETE = System::Int8(0x2);
static const System::Int8 IEM_OP_MOVE = System::Int8(0x3);
static const System::Int8 IEM_OP_SWAP = System::Int8(0x4);
static const System::Int8 IEM_OP_MOVEGROUP = System::Int8(0x5);
static const System::Int8 IEM_OP_CLEAR = System::Int8(0x6);
static const System::Int8 IEM_OP_ALLOCATE = System::Int8(0x7);
extern DELPHI_PACKAGE System::AnsiString IEEXIFUSERCOMMENTCODE_UNICODE;
extern DELPHI_PACKAGE System::AnsiString IEEXIFUSERCOMMENTCODE_ASCII;
extern DELPHI_PACKAGE System::AnsiString IEEXIFUSERCOMMENTCODE_JIS;
extern DELPHI_PACKAGE System::AnsiString IEEXIFUSERCOMMENTCODE_UNDEFINED;
static const System::Int8 IEMView_Snapshot_Version = System::Int8(0x5e);
static const System::Int8 IEMView_Snapshot_ClassID = System::Int8(0x64);
static const System::Int8 IEFolderMView_Snapshot_ClassID = System::Int8(0x65);
static const System::Int8 IEMBitmap_Snapshot_ClassID = System::Int8(0x66);
#define GPS_Version_ID L"2.2.0.0"
static const System::Int8 IEAnnotImageEmbedded = System::Int8(0x1);
static const System::Int8 IEAnnotImageReference = System::Int8(0x2);
static const System::Int8 IEAnnotStraightLine = System::Int8(0x3);
static const System::Int8 IEAnnotFreehandLine = System::Int8(0x4);
static const System::Int8 IEAnnotHollowRectangle = System::Int8(0x5);
static const System::Int8 IEAnnotFilledRectangle = System::Int8(0x6);
static const System::Int8 IEAnnotTypedText = System::Int8(0x7);
static const System::Int8 IEAnnotTextFromFile = System::Int8(0x8);
static const System::Int8 IEAnnotTextStamp = System::Int8(0x9);
static const System::Int8 IEAnnotAttachANote = System::Int8(0xa);
static const System::Int8 IEAnnotForm = System::Int8(0xc);
static const System::Int8 IEAnnotOCRRegion = System::Int8(0xd);
static const System::Int8 IEMAXCHANNELS = System::Int8(0x4);
extern DELPHI_PACKAGE TIE_OpenColorProfile IE_OpenColorProfile;
extern DELPHI_PACKAGE TIE_CloseColorProfile IE_CloseColorProfile;
extern DELPHI_PACKAGE TIE_CreateMultiProfileTransform IE_CreateMultiProfileTransform;
extern DELPHI_PACKAGE TIE_DeleteColorTransform IE_DeleteColorTransform;
extern DELPHI_PACKAGE TIE_TranslateColors IE_TranslateColors;
static const System::Int8 IE_COLOR_GRAY = System::Int8(0x1);
static const System::Int8 IE_COLOR_RGB = System::Int8(0x2);
static const System::Int8 IE_COLOR_XYZ = System::Int8(0x3);
static const System::Int8 IE_COLOR_Yxy = System::Int8(0x4);
static const System::Int8 IE_COLOR_Lab = System::Int8(0x5);
static const System::Int8 IE_COLOR_3_CHANNEL = System::Int8(0x6);
static const System::Int8 IE_COLOR_CMYK = System::Int8(0x7);
static const System::Int8 IE_COLOR_5_CHANNEL = System::Int8(0x8);
static const System::Int8 IE_COLOR_6_CHANNEL = System::Int8(0x9);
static const System::Int8 IE_COLOR_7_CHANNEL = System::Int8(0xa);
static const System::Int8 IE_COLOR_8_CHANNEL = System::Int8(0xb);
static const System::Int8 IE_COLOR_NAMED = System::Int8(0xc);
static const System::Int8 IE_PROFILE_READ = System::Int8(0x1);
static const System::Int8 IE_PROFILE_READWRITE = System::Int8(0x2);
static const System::Int8 IE_PROFILE_FILENAME = System::Int8(0x1);
static const System::Int8 IE_PROFILE_MEMBUFFER = System::Int8(0x2);
extern DELPHI_PACKAGE System::AnsiString IE_LCS_SIGNATURE;
static const System::Int8 IE_LCS_CALIBRATED_RGB = System::Int8(0x0);
extern DELPHI_PACKAGE System::AnsiString IE_LCS_sRGB;
extern DELPHI_PACKAGE System::AnsiString IE_LCS_WINDOWS_COLOR_SPACE;
static const System::Int8 IE_LCS_GM_BUSINESS = System::Int8(0x1);
static const System::Int8 IE_LCS_GM_GRAPHICS = System::Int8(0x2);
static const System::Int8 IE_LCS_GM_IMAGES = System::Int8(0x4);
static const System::Int8 IE_LCS_GM_ABS_COLORIMETRIC = System::Int8(0x8);
static const System::Int8 IE_PROOF_MODE = System::Int8(0x1);
static const System::Int8 IE_NORMAL_MODE = System::Int8(0x2);
static const System::Int8 IE_BEST_MODE = System::Int8(0x3);
static const int IE_ENABLE_GAMUT_CHECKING = int(0x10000);
static const int IE_USE_RELATIVE_COLORIMETRIC = int(0x20000);
static const int IE_FAST_TRANSLATE = int(0x40000);
static const System::Int8 IE_INDEX_DONT_CARE = System::Int8(0x0);
static const System::Int8 IE_INTENT_PERCEPTUAL = System::Int8(0x0);
static const System::Int8 IE_INTENT_RELATIVE_COLORIMETRIC = System::Int8(0x1);
static const System::Int8 IE_INTENT_SATURATION = System::Int8(0x2);
static const System::Int8 IE_INTENT_ABSOLUTE_COLORIMETRIC = System::Int8(0x3);
extern DELPHI_PACKAGE System::StaticArray<unsigned, 10> IE_CS2IF;
#define DICOM_NUMERIC_TAG_TYPES (System::Set<TIEDicomTagType, TIEDicomTagType::dvAE, TIEDicomTagType::dvUnknown>() << TIEDicomTagType::dvFD << TIEDicomTagType::dvFL << TIEDicomTagType::dvSL << TIEDicomTagType::dvSS << TIEDicomTagType::dvUL << TIEDicomTagType::dvUS << TIEDicomTagType::dvUSorSS )
#define DICOM_STRING_TAG_TYPES (System::Set<TIEDicomTagType, TIEDicomTagType::dvAE, TIEDicomTagType::dvUnknown>() << TIEDicomTagType::dvAE << TIEDicomTagType::dvAS << TIEDicomTagType::dvCS << TIEDicomTagType::dvDA << TIEDicomTagType::dvDS << TIEDicomTagType::dvDT << TIEDicomTagType::dvIS << TIEDicomTagType::dvLO << TIEDicomTagType::dvLT << TIEDicomTagType::dvPN << TIEDicomTagType::dvSH << TIEDicomTagType::dvST << TIEDicomTagType::dvTM << TIEDicomTagType::dvUI << TIEDicomTagType::dvUT )
#define DICOM_OTHER_TAG_TYPES (System::Set<TIEDicomTagType, TIEDicomTagType::dvAE, TIEDicomTagType::dvUnknown>() << TIEDicomTagType::dvAT << TIEDicomTagType::dvOB << TIEDicomTagType::dvOF << TIEDicomTagType::dvOW << TIEDicomTagType::dvSQ << TIEDicomTagType::dvUN << TIEDicomTagType::dvUR << TIEDicomTagType::dvUnknown )
extern DELPHI_PACKAGE System::StaticArray<System::Byte, 8> iebitmask1;
extern DELPHI_PACKAGE System::StaticArray<System::Byte, 256> ierevertbyte;
extern DELPHI_PACKAGE void __fastcall IECopyEXIF(System::TObject* source_, System::TObject* dest_, bool copyBitmap);
extern DELPHI_PACKAGE void __fastcall SaveEXIFToStandardBuffer(System::TObject* params, void * &Buffer, int &BufferLength, bool savePreamble);
extern DELPHI_PACKAGE bool __fastcall CheckEXIFFromStandardBuffer(void * Buffer, int BufferLength);
extern DELPHI_PACKAGE bool __fastcall LoadEXIFFromStandardBuffer(void * Buffer, int BufferLength, System::TObject* params, bool hasPreamble);
extern DELPHI_PACKAGE __int64 __fastcall IESearchEXIFInfo(System::Classes::TStream* Stream);
extern DELPHI_PACKAGE bool __fastcall IELoadEXIFFromTIFF(System::Classes::TStream* Stream, System::TObject* params, bool loadXMP)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IELoadParamsFromTIFF(System::Classes::TStream* Stream, System::TObject* params, int page)/* overload */;
extern DELPHI_PACKAGE System::TDateTime __fastcall EXIFDateToDateTime(const System::UnicodeString sEXIFDate);
extern DELPHI_PACKAGE System::UnicodeString __fastcall DateTimeToEXIFDate(System::TDateTime ADateTime);
extern DELPHI_PACKAGE bool __fastcall IEReadEXIFFromMOV(const System::WideString FileName, System::TObject* OutParams)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IEReadEXIFFromMOV(System::Classes::TStream* Stream, System::TObject* OutParams)/* overload */;
extern DELPHI_PACKAGE void __fastcall IERegisterFormats(void);
extern DELPHI_PACKAGE void __fastcall IEUnregisterFormats(void);
extern DELPHI_PACKAGE int __fastcall IEPDFPageCount(System::Classes::TStream* Stream, const System::UnicodeString Password = System::UnicodeString())/* overload */;
extern DELPHI_PACKAGE int __fastcall IEPDFPageCount(const System::WideString Filename, const System::UnicodeString Password = System::UnicodeString())/* overload */;
extern DELPHI_PACKAGE int __fastcall IEIFI(bool cond, int val1, int val2);
extern DELPHI_PACKAGE double __fastcall IEIFD(bool cond, double val1, double val2);
extern DELPHI_PACKAGE TIEBitmap* __fastcall IEIFB(bool cond, TIEBitmap* val1, TIEBitmap* val2);
extern DELPHI_PACKAGE void __fastcall IEAdjustEXIFOrientation(TIEBitmap* Bitmap, int Orientation);
extern DELPHI_PACKAGE HPALETTE __fastcall IECreateWinPalette(Hyiedefs::TRGB *ColorMap, const int ColorMap_High, int NCol);
extern DELPHI_PACKAGE HPALETTE __fastcall IECreatePalette(TIEBitmap* bmp);
extern DELPHI_PACKAGE HPALETTE __fastcall IECreateGrayPalette(void);
extern DELPHI_PACKAGE void __fastcall IESetGrayPalette(Vcl::Graphics::TBitmap* Bitmap);
extern DELPHI_PACKAGE bool __fastcall IEIsGrayPalette(Vcl::Graphics::TBitmap* Bitmap);
extern DELPHI_PACKAGE void __fastcall IECopyTBitmapPaletteToTIEBitmap(Vcl::Graphics::TBitmap* source, TIEBitmap* dest);
extern DELPHI_PACKAGE bool __fastcall IEHasShadedAlpha(TIEBitmap* image);
extern DELPHI_PACKAGE System::PByte __fastcall IEFindXMPFromJpegTag(void * Buffer, int BufferLength);
extern DELPHI_PACKAGE bool __fastcall IELoadXMPFromJpegTag(void * Buffer, int BufferLength, System::TObject* params);
extern DELPHI_PACKAGE void __fastcall IESaveXMPToJpegTag(System::TObject* params, void * &Buffer, int &BufferLength);
extern DELPHI_PACKAGE TIEDicomTagType __fastcall DicomStrToTag(const System::AnsiString s);
extern DELPHI_PACKAGE System::AnsiString __fastcall DicomTagToStr(TIEDicomTagType dt);
extern DELPHI_PACKAGE System::Word __fastcall IETIFFCalcTagSize(int tagType);
extern DELPHI_PACKAGE System::UnicodeString __fastcall TidyIPTCStr(const System::UnicodeString Value);
extern DELPHI_PACKAGE System::UnicodeString __fastcall DoubleToFraction(double dValue);
extern DELPHI_PACKAGE double __fastcall FractionToDouble(System::UnicodeString dValue);
extern DELPHI_PACKAGE System::UnicodeString __fastcall ApexToStr(double dBase, double dValue, const System::UnicodeString sPrepend);
extern DELPHI_PACKAGE double __fastcall StrToApex(double dBase, System::UnicodeString Value, const System::UnicodeString sPrepended);
extern DELPHI_PACKAGE System::UnicodeString __fastcall IEPaperSizeToStr(const TIOPDFPaperSize aSize);
extern DELPHI_PACKAGE TIOPDFPaperSize __fastcall IEStrToPaperSize(const System::UnicodeString sSize, TIOPDFPaperSize aDefault = (TIOPDFPaperSize)(0xd));
extern DELPHI_PACKAGE TIOPDFPaperSize __fastcall IEPointsToPaperSize(const int Width, const int Height);
extern DELPHI_PACKAGE System::Types::TPoint __fastcall IEPaperSizeToPoints(TIOPDFPaperSize Size);
extern DELPHI_PACKAGE TIOPDFPaperSize __fastcall IECalcPaperSize(const double Width, const double Height, bool Metric);
extern DELPHI_PACKAGE void __fastcall SplitOnDemandFilename(const System::WideString InFilename, /* out */ System::WideString &OutFilename, /* out */ int &FrameIndex);
extern DELPHI_PACKAGE void __fastcall IESwapIEBitmaps(TIEBitmap* &a, TIEBitmap* &b);
extern DELPHI_PACKAGE bool __fastcall JpegLosslessTransformStream(System::Classes::TStream* SourceStream, System::Classes::TStream* DestStream, TIEJpegTransform Transform, bool GrayScale, TIEJpegCopyMarkers CopyMarkers, const System::Types::TRect &CutRect, bool UpdateEXIF = true);
extern DELPHI_PACKAGE bool __fastcall JpegLosslessTransform(const System::WideString SourceFile, const System::WideString DestFile, TIEJpegTransform Transform, bool GrayScale, TIEJpegCopyMarkers CopyMarkers, const System::Types::TRect &CutRect, bool UpdateEXIF = true)/* overload */;
extern DELPHI_PACKAGE bool __fastcall JpegLosslessTransform(const System::WideString SourceFile, const System::WideString DestFile, TIEJpegTransform Transform, bool UpdateEXIF = true)/* overload */;
extern DELPHI_PACKAGE bool __fastcall JpegLosslessTransform(const System::WideString SourceFile, const System::WideString DestFile, int RotateAngle, bool UpdateEXIF = true)/* overload */;
extern DELPHI_PACKAGE bool __fastcall JpegLosslessTransform(const System::WideString SourceFile, const System::WideString DestFile, Hyiedefs::TFlipDir Direction, bool UpdateEXIF = true)/* overload */;
extern DELPHI_PACKAGE bool __fastcall JpegLosslessTransform2(const System::WideString FileName, TIEJpegTransform Transform, bool GrayScale, TIEJpegCopyMarkers CopyMarkers, const System::Types::TRect &CutRect, bool UpdateEXIF = true, bool ClearReadOnly = false)/* overload */;
extern DELPHI_PACKAGE bool __fastcall JpegLosslessTransform2(const System::WideString FileName, TIEJpegTransform Transform, bool UpdateEXIF = true, bool ClearReadOnly = false)/* overload */;
extern DELPHI_PACKAGE bool __fastcall JpegLosslessTransform2(const System::WideString FileName, int RotateAngle, bool UpdateEXIF = true)/* overload */;
extern DELPHI_PACKAGE bool __fastcall JpegLosslessTransform2(const System::WideString FileName, Hyiedefs::TFlipDir Direction, bool UpdateEXIF = true)/* overload */;
extern DELPHI_PACKAGE Hyiedefs::TRGB __fastcall IECMYK2RGB(Hyiedefs::TCMYK cmyk);
extern DELPHI_PACKAGE Hyiedefs::TRGB __fastcall IECMYK2RGBROW(Hyiedefs::PCMYK inrow, Hyiedefs::PRGB outrow, int width, System::PInteger alphaRow, TIEICC* colorProfile)/* overload */;
extern DELPHI_PACKAGE Hyiedefs::TRGB __fastcall IECMYK2RGBROW(Hyiedefs::PCMYK inrow, Hyiedefs::PRGB outrow, int width, System::PInteger alphaRow = (System::PInteger)(0x0))/* overload */;
extern DELPHI_PACKAGE Hyiedefs::TCMYK __fastcall IERGB2CMYK(const Hyiedefs::TRGB rgb);
extern DELPHI_PACKAGE void __fastcall IERGB2CMYKROW(Hyiedefs::PRGB inrow, Hyiedefs::PCMYK outrow, int width);
extern DELPHI_PACKAGE void __fastcall IEDefaultConvertColorFunction(void * InputScanline, Hyiedefs::TIECMSColorSpace InputColorSpace, void * OutputScanline, Hyiedefs::TIECMSColorSpace OutputColorSpace, int ImageWidth, TIOParams* IOParams);
extern DELPHI_PACKAGE System::AnsiString __fastcall IEAVISelectCodec(void);
extern DELPHI_PACKAGE System::Classes::TStringList* __fastcall IEAVIGetCodecs(void);
extern DELPHI_PACKAGE System::Classes::TStringList* __fastcall IEAVIGetCodecsDescription(void);
extern DELPHI_PACKAGE bool __fastcall IEIsExtIOPluginLoaded(const System::UnicodeString FileName);
extern DELPHI_PACKAGE int __fastcall IEAutoLoadIOPlugins _DEPRECATED_ATTRIBUTE1("Use TIEImageEnGlobalSettings.RegisterPlugIns instead - http://imageen.com/help/Compatibility.html") (void);
extern DELPHI_PACKAGE int __fastcall IEAddExtIOPlugin(const System::UnicodeString FileName);
extern DELPHI_PACKAGE void __fastcall IEOptimizeGIF(const System::WideString InputFile, const System::WideString OutputFile);
extern DELPHI_PACKAGE TIEFileFormatInfo* __fastcall IEFileFormatGetInfo(int FileType)/* overload */;
extern DELPHI_PACKAGE TIEFileFormatInfo* __fastcall IEFileFormatGetInfo(System::UnicodeString Extension)/* overload */;
extern DELPHI_PACKAGE TIEFileFormatInfo* __fastcall IEFileFormatGetInfo2 _DEPRECATED_ATTRIBUTE1("Use IEFileFormatGetInfo instead - http://imageen.com/help/Compatibility.html") (const System::UnicodeString Extension);
extern DELPHI_PACKAGE int __fastcall IEFileFormatGetExtCount(int FileType);
extern DELPHI_PACKAGE System::UnicodeString __fastcall IEFileFormatGetExt(int FileType, int idx);
extern DELPHI_PACKAGE void __fastcall IEFileFormatAdd(TIEFileFormatInfo* FileFormatInfo);
extern DELPHI_PACKAGE void __fastcall IEFileFormatRemove(int FileType);
extern DELPHI_PACKAGE bool __fastcall IsKnownFormat(const System::WideString FileName, bool bIncludeVideoFiles = false);
extern DELPHI_PACKAGE bool __fastcall IsKnownSaveFormat(const System::WideString FileName);
extern DELPHI_PACKAGE int __fastcall FindFileFormat(const System::WideString FileName, TIEFindFormatMethod FindMethod = (TIEFindFormatMethod)(0x0))/* overload */;
extern DELPHI_PACKAGE int __fastcall FindFileFormat _DEPRECATED_ATTRIBUTE1("Use newer FindFileFormat overload - http://imageen.com/help/Compatibility.html") (const System::WideString FileName, bool VerifyExtension)/* overload */;
extern DELPHI_PACKAGE int __fastcall FindStreamFormat(System::Classes::TStream* Stream);
extern DELPHI_PACKAGE bool __fastcall IEGetFromURL(const System::WideString URL, System::Classes::TStream* OutStream, const System::WideString ProxyAddress, const System::WideString ProxyUser, const System::WideString ProxyPassword, Hyiedefs::TIEProgressEvent OnProgress, System::TObject* Sender, Hyiedefs::pboolean Aborting, System::UnicodeString &FileExt);
extern DELPHI_PACKAGE int __fastcall DeleteGIFIm(const System::WideString FileName, int idx);
extern DELPHI_PACKAGE int __fastcall DeleteTIFFIm(const System::WideString FileName, int idx);
extern DELPHI_PACKAGE void __fastcall DeleteDCXIm(const System::WideString FileName, int idx);
extern DELPHI_PACKAGE int __fastcall DeleteTIFFImGroup(const System::WideString FileName, int *Indexes, const int Indexes_High);
extern DELPHI_PACKAGE int __fastcall EnumGIFIm(const System::WideString FileName);
extern DELPHI_PACKAGE int __fastcall EnumTIFFIm(const System::WideString FileName);
extern DELPHI_PACKAGE int __fastcall EnumDCXIm(const System::WideString FileName);
extern DELPHI_PACKAGE int __fastcall EnumTIFFStream(System::Classes::TStream* Stream);
extern DELPHI_PACKAGE int __fastcall EnumICOIm(const System::WideString FileName);
extern DELPHI_PACKAGE int __fastcall EnumCurIm(const System::WideString FileName);
extern DELPHI_PACKAGE bool __fastcall CheckAniGIF(const System::WideString FileName);
extern DELPHI_PACKAGE void __fastcall IEWriteICOImages(const System::WideString fileName, System::TObject* *images, const int images_High);
extern DELPHI_PACKAGE void __fastcall ExtractTIFFImageStream(System::Classes::TStream* SourceStream, System::Classes::TStream* OutStream, int idx);
extern DELPHI_PACKAGE void __fastcall ExtractTIFFImageFile(const System::WideString SourceFileName, const System::WideString OutFileName, int idx);
extern DELPHI_PACKAGE void __fastcall InsertTIFFImageStream(System::Classes::TStream* SourceStream, System::Classes::TStream* InsertingStream, System::Classes::TStream* OutStream, int idx);
extern DELPHI_PACKAGE void __fastcall InsertTIFFImageFile(const System::WideString SourceFileName, const System::WideString InsertingFileName, const System::WideString OutFileName, int idx);
extern DELPHI_PACKAGE void __fastcall IEAdjustDPI(TIEBitmap* &bmp, TIOParams* Params, bool UseFilter);
extern DELPHI_PACKAGE int __fastcall IEGetFileFramesCount(const System::WideString FileName);
extern DELPHI_PACKAGE int __fastcall IEFindNumberWithKnownFormat(const System::WideString Directory, bool bIncludeVideoFiles = true);
extern DELPHI_PACKAGE int __fastcall IECalcJpegFileQuality(const System::WideString FileName);
extern DELPHI_PACKAGE int __fastcall IECalcJpegStreamQuality(System::Classes::TStream* Stream);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetOpenSaveDialogFilter(bool IsSaveDialog, Hyiedefs::TIEShowFormats ShowFormats = (Hyiedefs::TIEShowFormats)(0x1), int LimitToType = 0xffffffff, const System::UnicodeString ExtendedFilters = System::UnicodeString(), int TruncExtCount = 0x0);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetAllSupportedFileExtensions(bool bLoadFormats, bool bSaveFormats, bool bVideoFormats = true);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetFileExtensionsOfType(int FileType);
extern DELPHI_PACKAGE int __fastcall IEExtToFileFormat(const System::UnicodeString ext);
extern DELPHI_PACKAGE int __fastcall IEFilenameToFileFormat(const System::UnicodeString FileName);
extern DELPHI_PACKAGE bool __fastcall IEFileIsOfFormat(const System::UnicodeString sFilename, int aFormat);
extern DELPHI_PACKAGE bool __fastcall IEIsInternalFormat(const System::UnicodeString ex);
extern DELPHI_PACKAGE void __fastcall IEInitialize_iexBitmaps(void);
extern DELPHI_PACKAGE void __fastcall IEFinalize_iexBitmaps(void);
}	/* namespace Iexbitmaps */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_IEXBITMAPS)
using namespace Iexbitmaps;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// IexbitmapsHPP
