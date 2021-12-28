// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'iexClasses.pas' rev: 35.00 (Windows)

#ifndef IexclassesHPP
#define IexclassesHPP

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
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <hyiedefs.hpp>

//-- user supplied -----------------------------------------------------------

namespace Iexclasses
{
//-- forward type declarations -----------------------------------------------
struct TTIFFColor;
struct TTIFFHeader;
struct TTIFFTAG;
struct TBigTIFFTAG;
class DELPHICLASS TIETIFFIFDReader;
class DELPHICLASS TIETIFFIFDWriter;
class DELPHICLASS TIETIFTagsReader;
struct TIEEXIFMakerNoteDeviceInfo;
class DELPHICLASS TIETagsHandler;
class DELPHICLASS TIETagsHandlerRelocator;
class DELPHICLASS TIETIFFHandler;
class DELPHICLASS TIEBufferedReadStream;
class DELPHICLASS TIEBufferedWriteStream;
//-- type declarations -------------------------------------------------------
#pragma pack(push,1)
struct DECLSPEC_DRECORD TTIFFColor
{
public:
	System::Word R;
	System::Word G;
	System::Word B;
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD TTIFFHeader
{
public:
	System::Word Id;
	System::Word Ver;
	unsigned PosIFD;
};
#pragma pack(pop)


typedef TTIFFHeader *PTIFFHeader;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TTIFFTAG
{
public:
	System::Word IdTag;
	System::Word DataType;
	int DataNum;
	unsigned DataPos;
};
#pragma pack(pop)


typedef TTIFFTAG *PTIFFTAG;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TBigTIFFTAG
{
public:
	System::Word IdTag;
	System::Word DataType;
	__int64 DataNum;
	__int64 DataPos;
};
#pragma pack(pop)


typedef System::StaticArray<TTIFFTAG, 134217728> TIFD;

typedef TIFD *PIFD;

typedef System::StaticArray<TBigTIFFTAG, 67108864> TBigIFD;

typedef TBigIFD *PBigIFD;

class PASCALIMPLEMENTATION TIETIFFIFDReader : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	bool LittleEndian;
	System::Classes::TStream* Stream;
	TIFD *IFD;
	TBigIFD *BigIFD;
	int NumTags;
	__int64 StreamBase;
	bool IsBigTIFF;
	int DataPosSize;
	__fastcall TIETIFFIFDReader();
	__fastcall virtual ~TIETIFFIFDReader();
	bool __fastcall ReadIFD(int ImageIndex, __int64 Offset, int &ImageCount);
	void __fastcall Assign(TIETIFFIFDReader* Source);
	void __fastcall Clear();
	__int64 __fastcall GetDataNum(int tagIndex);
	System::Word __fastcall GetDataType(int tagIndex);
	__int64 __fastcall GetDataPos(int tagIndex);
	__int64 __fastcall GetItem(int tagIndex, __int64 dataIndex);
	__int64 __fastcall GetDataLengthInBytes(int tagIndex);
	int __fastcall FindTAG(System::Word tagID);
	__int64 __fastcall ReadInteger(System::Word tagID, __int64 idx, __int64 def);
	double __fastcall ReadRational(System::Word tagID, int idx, double defaultValue);
	double __fastcall ReadURational(System::Word tagID, int idx, double defaultValue);
	int __fastcall ReadArrayIntegers(Hyiedefs::pint64array &ar, System::Word tagID);
	Hyiedefs::TIEArrayOfByte __fastcall ReadRawDataAsArrayOfByte(System::Word tagID);
	void * __fastcall ReadRawData(System::Word tagID, int &Size);
	System::AnsiString __fastcall ReadString(System::Word tagID, bool truncToEZ);
	System::WideString __fastcall ReadWideString(System::Word tagID);
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TIETIFFIFDWriter : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Classes::TList* Items;
	int __fastcall GetCount();
	PTIFFTAG __fastcall GetTag(int Index);
	
public:
	__fastcall TIETIFFIFDWriter();
	__fastcall virtual ~TIETIFFIFDWriter();
	void __fastcall AddTag(System::Word IdTag, System::Word DataType, int DataNum, unsigned DataPos);
	void __fastcall ReorderTags();
	void __fastcall WriteSingleLong(int tag, int val);
	void __fastcall WriteSingleUndefined(int tag, unsigned val, System::Classes::TList* writeIfInList = (System::Classes::TList*)(0x0));
	void __fastcall WriteMiniString(int tag, System::AnsiString ss);
	void __fastcall WriteMiniByteString(int tag, System::AnsiString ss);
	void __fastcall WriteSingleShort(int tag, System::Word val, System::Classes::TList* writeIfInList = (System::Classes::TList*)(0x0));
	void __fastcall WriteSingleByte(int tag, System::Byte val);
	void __fastcall WriteSingleRational(System::Classes::TStream* Stream, int tag, double value, bool &Aborting, System::Classes::TList* writeIfInList = (System::Classes::TList*)(0x0));
	void __fastcall WriteMultiRational(System::Classes::TStream* Stream, int tag, double *values, const int values_High, bool &Aborting);
	void __fastcall WriteString(System::Classes::TStream* Stream, int tag, System::AnsiString ss, bool &Aborting);
	void __fastcall WriteWideString(System::Classes::TStream* Stream, int tag, System::WideString ss, bool &Aborting);
	void __fastcall WriteArrayOfByte(System::Classes::TStream* Stream, System::Word Tag, System::Word DataType, Hyiedefs::TIEArrayOfByte Buffer, bool &Aborting);
	void __fastcall WriteMultiLongEx(System::Classes::TStream* Stream, int tag, unsigned *arr, const int arr_High, int arraylen, bool &Aborting);
	void __fastcall WriteMultiShort(System::Classes::TStream* Stream, int tag, const System::Word *vals, const int vals_High, bool &Aborting);
	__property int Count = {read=GetCount, nodefault};
	__property PTIFFTAG Tag[int Index] = {read=GetTag};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIETIFTagsReader : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Classes::TStream* fFileStream;
	System::Classes::TStream* fStream;
	TIETIFFIFDReader* fIFD;
	int fNumi;
	
public:
	__fastcall TIETIFTagsReader(const System::UnicodeString FileName, int ImageIndex);
	__fastcall TIETIFTagsReader(System::Classes::TStream* Stream, int ImageIndex);
	__fastcall TIETIFTagsReader(TIETIFTagsReader* tagReader, int IFDTag);
	__fastcall virtual ~TIETIFTagsReader();
	__property int ImageCount = {read=fNumi, nodefault};
	bool __fastcall TagExists(int Tag);
	int __fastcall TagLength(int Tag);
	__int64 __fastcall GetInteger(int Tag);
	int __fastcall GetIntegerIndexed(int Tag, int index);
	double __fastcall GetRational(int Tag, double defaultValue = 0.000000E+00);
	double __fastcall GetRationalIndexed(int Tag, int index, double defVal = 0.000000E+00);
	int __fastcall GetIntegerArray(int Tag, Hyiedefs::pint64array &ar);
	void * __fastcall GetRawData(int Tag);
	System::AnsiString __fastcall GetString(int Tag);
	System::AnsiString __fastcall GetMiniString(int Tag);
public:
	/* TObject.Create */ inline __fastcall TIETIFTagsReader() : System::TObject() { }
	
};

#pragma pack(pop)

struct DECLSPEC_DRECORD TIEEXIFMakerNoteDeviceInfo
{
	
private:
	enum DECLSPEC_DENUM _TIEEXIFMakerNoteDeviceInfo__1 : unsigned char { iemnAbsolute, iemnTIFFHeader, iemnEXIFSegment };
	
	enum DECLSPEC_DENUM _TIEEXIFMakerNoteDeviceInfo__2 : unsigned char { iemnNONE, iemnTIFF, iemnIFDOFFSET };
	
	enum DECLSPEC_DENUM _TIEEXIFMakerNoteDeviceInfo__3 : unsigned char { ieboFromEXIF, ieboFromTIFFHeader, ieboLittleEndian, ieboBigEndian };
	
	
public:
	System::AnsiString signature;
	int sigbypass;
	_TIEEXIFMakerNoteDeviceInfo__1 base;
	_TIEEXIFMakerNoteDeviceInfo__2 headerType;
	TTIFFHeader TIFFHeader;
	_TIEEXIFMakerNoteDeviceInfo__3 byteOrder;
};


typedef void __fastcall (__closure *TIETagsHandlerAddTagFunc)(int tagPosition, bool littleEndian, TTIFFTAG &tag);

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIETagsHandler : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	void *fUnparsedData;
	int fUnparsedDataLength;
	TIEEXIFMakerNoteDeviceInfo fEXIFMakerInfo;
	System::Classes::TMemoryStream* fData;
	TIETIFFIFDReader* fIFD;
	void __fastcall SetUnparsedData(void * value);
	TIEEXIFMakerNoteDeviceInfo __fastcall CheckHeader(void * buffer, int bufferLen);
	
public:
	__fastcall TIETagsHandler();
	__fastcall virtual ~TIETagsHandler();
	__property System::Classes::TMemoryStream* Data = {read=fData};
	void __fastcall Update();
	void __fastcall Assign(TIETagsHandler* source);
	void __fastcall Clear();
	bool __fastcall TagExists(int Tag);
	int __fastcall TagLength(int Tag);
	int __fastcall GetInteger(int Tag);
	int __fastcall GetIntegerIndexed(int Tag, int index);
	double __fastcall GetRational(int Tag, double defaultValue = 0.000000E+00);
	double __fastcall GetRationalIndexed(int Tag, int index, double defVal = 0.000000E+00);
	int __fastcall GetIntegerArray(int Tag, Hyiedefs::pint64array &ar);
	void * __fastcall GetRawData(int Tag);
	System::AnsiString __fastcall GetString(int Tag);
	System::AnsiString __fastcall GetMiniString(int Tag);
	int __fastcall GetDataType(int Tag);
	__property void * UnparsedData = {read=fUnparsedData, write=SetUnparsedData};
	__property int UnparsedDataLength = {read=fUnparsedDataLength, write=fUnparsedDataLength, nodefault};
	void __fastcall ReadFromStreamUnparse(System::Classes::TStream* stream, int size);
	void __fastcall ReadFromStream(System::Classes::TStream* stream, int size, bool littleEndian, __int64 exifSegmentPos, bool clearOnFail, TIETagsHandlerAddTagFunc addTagFunc = 0x0);
	int __fastcall WriteToStream(System::Classes::TStream* stream, __int64 exifSegmentPos);
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TIETagsHandlerRelocator : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Classes::TStream* Stream;
	__int64 Position;
	__int64 Offset;
	bool LittleEndian;
	TIETagsHandler* TagsHandler;
	void __fastcall AddTagFunc(int tagPosition, bool littleEndian, TTIFFTAG &tag);
	
public:
	__fastcall TIETagsHandlerRelocator(System::Classes::TStream* Stream_, __int64 Position_, __int64 Offset_, bool LittleEndian_);
	__fastcall virtual ~TIETagsHandlerRelocator();
	void __fastcall Relocate();
};


enum DECLSPEC_DENUM TIETagType : unsigned char { ttUnknown, ttByte, ttAscii, ttShort, ttLong, ttRational, ttSByte, ttUndefined, ttSShort, ttSLong, ttSRational, ttFloat, ttDouble, ttLongOffset };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIETIFFHandler : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	bool fBigEndian;
	System::Word fVersion;
	System::Classes::TList* fPages;
	System::Classes::TList* fBuffers;
	bool __fastcall ReadHeader(System::Classes::TStream* Stream);
	System::Word __fastcall xword(System::Word value);
	unsigned __fastcall xdword(unsigned value);
	int __fastcall GetIntegerByCode(int page, int tagcode, int idx)/* overload */;
	int __fastcall GetIntegerByCode(System::Classes::TList* ifd, int tagcode, int idx)/* overload */;
	void __fastcall SortTags(int pageIndex)/* overload */;
	void __fastcall SortTags(System::Classes::TList* ifd)/* overload */;
	void * __fastcall GetValueRAWEx(int pageIndex, int tagIndex, int arrayIndex, int &tagType)/* overload */;
	void * __fastcall GetValueRAWEx(PTIFFTAG tag, int arrayIndex)/* overload */;
	bool __fastcall GetLittleEndian();
	void __fastcall CheckPairTag(int tagCode, int &tgpos, int &tglen)/* overload */;
	bool __fastcall CheckPairTag(int tagCode)/* overload */;
	bool __fastcall CheckIFD(int tagCode);
	bool __fastcall ReadIFD(System::Classes::TStream* Stream, System::Classes::TList* Pages, System::Classes::TList* ifd, int insertPos);
	int __fastcall FindTag(System::Classes::TList* ifd, int tagCode)/* overload */;
	void __fastcall DeleteTag(int pageIndex, int tagIndex, bool checkOffsetTags)/* overload */;
	void __fastcall DeleteTag(System::Classes::TList* ifd, int tagIndex, bool checkOffsetTags)/* overload */;
	void __fastcall WriteIFD(System::Classes::TStream* Stream, System::Classes::TList* ifd, __int64 &dataPos);
	int __fastcall GetInteger(System::Classes::TList* ifd, int tagIndex, int arrayIndex)/* overload */;
	void __fastcall SetValue(System::Classes::TList* ifd, int tagCode, TIETagType tagType, const System::Variant &value)/* overload */;
	void __fastcall SetValueRAW(System::Classes::TList* ifd, int tagCode, TIETagType tagType, int dataNum, void * buffer)/* overload */;
	void __fastcall CopyTag(System::Classes::TList* src_ifd, int srcTagIndex, TIETIFFHandler* source, System::Classes::TList* dst_ifd)/* overload */;
	void __fastcall init();
	
public:
	__fastcall TIETIFFHandler()/* overload */;
	__fastcall TIETIFFHandler(const System::UnicodeString FileName)/* overload */;
	__fastcall TIETIFFHandler(System::Classes::TStream* Stream)/* overload */;
	__fastcall virtual ~TIETIFFHandler();
	bool __fastcall ReadFile(const System::UnicodeString FileName);
	bool __fastcall ReadStream(System::Classes::TStream* Stream);
	bool __fastcall InsertTIFFStream(System::Classes::TStream* Stream, int pageIndex);
	bool __fastcall InsertTIFFFile(const System::UnicodeString FileName, int pageIndex);
	bool __fastcall InsertPageAsFile(const System::UnicodeString FileName, int pageIndex);
	bool __fastcall InsertPageAsStream(System::Classes::TStream* Stream, int pageIndex);
	bool __fastcall InsertPageAsImage(System::TObject* viewer, int pageIndex);
	void __fastcall WriteFile(const System::UnicodeString FileName, int page = 0xffffffff);
	void __fastcall WriteStream(System::Classes::TStream* Stream, int page = 0xffffffff);
	void __fastcall FreeData();
	int __fastcall GetTagsCount(int pageIndex);
	int __fastcall GetPagesCount();
	int __fastcall GetTagCode(int pageIndex, int tagIndex);
	TIETagType __fastcall GetTagType(int pageIndex, int tagIndex);
	int __fastcall GetTagLength(int pageIndex, int tagIndex);
	int __fastcall GetTagLengthInBytes(int pageIndex, int tagIndex);
	int __fastcall FindTag(int pageIndex, int tagCode)/* overload */;
	void __fastcall DeleteTag(int pageIndex, int tagIndex)/* overload */;
	System::AnsiString __fastcall GetTagDescription(int pageIndex, int tagIndex);
	void __fastcall ChangeTagCode(int pageIndex, int tagIndex, int newCode);
	int __fastcall GetInteger(int pageIndex, int tagIndex, int arrayIndex)/* overload */;
	System::AnsiString __fastcall GetString(int pageIndex, int tagIndex);
	double __fastcall GetFloat(int pageIndex, int tagIndex, int arrayIndex);
	System::Variant __fastcall GetValue(int pageIndex, int tagIndex, int arrayIndex);
	void __fastcall SaveTagToFile(int pageIndex, int tagIndex, const System::UnicodeString fileName);
	void * __fastcall GetValueRAW(int pageIndex, int tagIndex, int arrayIndex);
	void __fastcall SetValue(int pageIndex, int tagCode, TIETagType tagType, const System::Variant &value)/* overload */;
	void __fastcall SetValueRAW(int pageIndex, int tagCode, TIETagType tagType, int dataNum, void * buffer)/* overload */;
	void __fastcall CopyTag(int srcPageIndex, int srcTagIndex, TIETIFFHandler* source, int dstPageIndex)/* overload */;
	void __fastcall DeletePage(int pageIndex);
	void __fastcall ExchangePage(int Index1, int Index2);
	void __fastcall MovePage(int CurIndex, int NewIndex);
	int __fastcall InsertPage(int pageIndex = 0xffffffff)/* overload */;
	int __fastcall InsertPage(int pageIndex, TIETIFFHandler* sourceHandler, int sourcePage)/* overload */;
	__property bool LittleEndian = {read=GetLittleEndian, nodefault};
	__property System::Word Version = {read=fVersion, write=fVersion, nodefault};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TIEBufferedReadStream : public System::Classes::TStream
{
	typedef System::Classes::TStream inherited;
	
	
private:
	typedef System::DynamicArray<System::Byte> _TIEBufferedReadStream__1;
	
	
private:
	System::Classes::TStream* fStream;
	int fBufferSize;
	_TIEBufferedReadStream__1 fMemory;
	__int64 fPosition;
	int fPositionBuf;
	__int64 fSize;
	__int64 fRelativePosition;
	bool fOverPosition;
	void __fastcall AllocBufferSize(int BufferSize);
	void __fastcall LoadData();
	
public:
	__fastcall TIEBufferedReadStream(System::Classes::TStream* InputStream, int BufferSize, bool UseRelativePosition);
	__fastcall virtual ~TIEBufferedReadStream();
	virtual int __fastcall Read(void *Buffer, int Count)/* overload */;
	virtual int __fastcall Write(const void *Buffer, int Count)/* overload */;
	virtual __int64 __fastcall Seek(const __int64 Offset, System::Classes::TSeekOrigin Origin)/* overload */;
	__property bool OverPosition = {read=fOverPosition, nodefault};
	/* Hoisted overloads: */
	
public:
	inline int __fastcall  Read(System::DynamicArray<System::Byte> Buffer, int Offset, int Count){ return System::Classes::TStream::Read(Buffer, Offset, Count); }
	inline int __fastcall  Read(System::DynamicArray<System::Byte> &Buffer, int Count){ return System::Classes::TStream::Read(Buffer, Count); }
	inline int __fastcall  Write(const System::DynamicArray<System::Byte> Buffer, int Offset, int Count){ return System::Classes::TStream::Write(Buffer, Offset, Count); }
	inline int __fastcall  Write(const System::DynamicArray<System::Byte> Buffer, int Count){ return System::Classes::TStream::Write(Buffer, Count); }
	inline int __fastcall  Seek(int Offset, System::Word Origin){ return System::Classes::TStream::Seek(Offset, Origin); }
	inline __int64 __fastcall  Seek(const __int64 Offset, System::Word Origin){ return System::Classes::TStream::Seek(Offset, Origin); }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEBufferedWriteStream : public System::Classes::TStream
{
	typedef System::Classes::TStream inherited;
	
private:
	System::Classes::TStream* fStream;
	System::Sysutils::TByteArray *fMemory;
	int fBufferSize;
	int fBufferPos;
	void __fastcall FlushData();
	
public:
	__fastcall TIEBufferedWriteStream(System::Classes::TStream* InputStream, int BufferSize);
	__fastcall virtual ~TIEBufferedWriteStream();
	virtual int __fastcall Read(void *Buffer, int Count)/* overload */;
	virtual int __fastcall Write(const void *Buffer, int Count)/* overload */;
	virtual __int64 __fastcall Seek(const __int64 Offset, System::Classes::TSeekOrigin Origin)/* overload */;
	/* Hoisted overloads: */
	
public:
	inline int __fastcall  Read(System::DynamicArray<System::Byte> Buffer, int Offset, int Count){ return System::Classes::TStream::Read(Buffer, Offset, Count); }
	inline int __fastcall  Read(System::DynamicArray<System::Byte> &Buffer, int Count){ return System::Classes::TStream::Read(Buffer, Count); }
	inline int __fastcall  Write(const System::DynamicArray<System::Byte> Buffer, int Offset, int Count){ return System::Classes::TStream::Write(Buffer, Offset, Count); }
	inline int __fastcall  Write(const System::DynamicArray<System::Byte> Buffer, int Count){ return System::Classes::TStream::Write(Buffer, Count); }
	inline int __fastcall  Seek(int Offset, System::Word Origin){ return System::Classes::TStream::Seek(Offset, Origin); }
	inline __int64 __fastcall  Seek(const __int64 Offset, System::Word Origin){ return System::Classes::TStream::Seek(Offset, Origin); }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE System::Word __fastcall IECSwapWord(System::Word i, bool sc);
extern DELPHI_PACKAGE int __fastcall IECSwapDWord(int i, bool sc);
extern DELPHI_PACKAGE __int64 __fastcall IECSwapInt64(__int64 i, bool sc);
extern DELPHI_PACKAGE System::Word __fastcall IEStreamReadWord(System::Classes::TStream* Stream, bool bigEndian);
extern DELPHI_PACKAGE unsigned __fastcall IEStreamReadDWord(System::Classes::TStream* Stream, bool bigEndian);
extern DELPHI_PACKAGE __int64 __fastcall IEStreamReadInt64(System::Classes::TStream* Stream, bool bigEndian);
extern DELPHI_PACKAGE int __fastcall IEStreamWordAlign(System::Classes::TStream* Stream, bool &Aborting);
extern DELPHI_PACKAGE void __fastcall IEStreamWriteLn(System::Classes::TStream* Stream, const System::AnsiString Text);
extern DELPHI_PACKAGE void __fastcall IEStreamWriteByte(System::Classes::TStream* Stream, System::Byte Value);
}	/* namespace Iexclasses */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_IEXCLASSES)
using namespace Iexclasses;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// IexclassesHPP
