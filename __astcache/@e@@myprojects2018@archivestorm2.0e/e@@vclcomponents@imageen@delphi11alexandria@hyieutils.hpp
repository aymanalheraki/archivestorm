// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'hyieutils.pas' rev: 35.00 (Windows)

#ifndef HyieutilsHPP
#define HyieutilsHPP

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
#include <hyiedefs.hpp>
#include <System.SysUtils.hpp>
#include <Vcl.Controls.hpp>
#include <ievision.hpp>
#include <System.Contnrs.hpp>
#include <System.Math.hpp>
#include <Vcl.Dialogs.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Hyieutils
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TImageEnPaletteDialog;
class DELPHICLASS TIEWideStrings;
class DELPHICLASS TIEDirContent;
class DELPHICLASS TIEExecutorThread;
class DELPHICLASS TIEExecutor;
class DELPHICLASS TIEThreadPool;
class DELPHICLASS TIEDictionaryValueWideString;
class DELPHICLASS TIEDictionaryValueInteger;
class DELPHICLASS TIEDictionaryValueDouble;
class DELPHICLASS TIEDictionaryValueBoolean;
class DELPHICLASS TIEDictionaryBucket;
class DELPHICLASS TIEStrStrEnumerator;
class DELPHICLASS TIEDictionary;
class DELPHICLASS TIEDictionaryParser;
class DELPHICLASS TIEHashStream;
class DELPHICLASS TIEMemStream;
class DELPHICLASS TIEClientSocket;
class DELPHICLASS TIEByteArray;
class DELPHICLASS TIEIntegerMapItem;
class DELPHICLASS TIEIntegerMap;
class DELPHICLASS TIERGBMap;
class DELPHICLASS TNulStream;
class DELPHICLASS TIEList;
class DELPHICLASS TIEDoubleList;
class DELPHICLASS TIEIntegerList;
class DELPHICLASS TIERecordList;
class DELPHICLASS TIETemporaryFileStream;
class DELPHICLASS TIEWideFileStream;
struct TIEFileBufferItem;
class DELPHICLASS TIEFileBuffer;
class DELPHICLASS TIEResourceBookmark;
class DELPHICLASS TIEResourceExtractor;
class DELPHICLASS TIERandomGenerator;
class DELPHICLASS TIEFPExceptionsDisabler;
class DELPHICLASS TIEStringSplitter;
//-- type declarations -------------------------------------------------------
typedef int TIOFileType;

enum DECLSPEC_DENUM TIEMTruncSide : unsigned char { iemtsLeft, iemtsRight };

enum DECLSPEC_DENUM Hyieutils__1 : unsigned char { iedRead, iedWrite };

typedef System::Set<Hyieutils__1, Hyieutils__1::iedRead, Hyieutils__1::iedWrite> TIEDataAccess;

enum DECLSPEC_DENUM TIEDitherMethod : unsigned char { ieOrdered, ieThreshold, ieDithering };

enum DECLSPEC_DENUM TIEHAlign : unsigned char { iehLeft, iehCenter, iehRight };

enum DECLSPEC_DENUM TIEVAlign : unsigned char { ievTop, ievCenter, ievBottom };

enum DECLSPEC_DENUM TIEPixelFormat : unsigned char { ieNull, ie1g, ie8p, ie8g, ie16g, ie24RGB, ie32f, ieCMYK, ie48RGB, ieCIELab, ie32RGB };

typedef System::Set<TIEPixelFormat, TIEPixelFormat::ieNull, TIEPixelFormat::ie32RGB> TIEPixelFormatSet;

typedef int __fastcall (__closure *TIECompareFunction)(int Index1, int Index2);

typedef void __fastcall (__closure *TIESwapFunction)(int Index1, int Index2);

typedef void __fastcall (*TIEDialogCenter)(HWND Wnd);

enum DECLSPEC_DENUM TFitMethod : unsigned char { _fmFitWithinRect, _fmFillRect_WithOverlap };

enum DECLSPEC_DENUM TIERenderOperation : unsigned char { ielNormal, ielAdd, ielSub, ielDiv, ielMul, ielOR, ielAND, ielXOR, ielMAX, ielMIN, ielAverage, ielScreen, ielNegation, ielExclusion, ielOverlay, ielHardLight, ielSoftLight, ielXFader, ielColorEdge, ielColorBurn, ielInverseColorDodge, ielInverseColorBurn, ielSoftDodge, ielSoftBurn, ielReflect, ielGlow, ielFreeze, ielEat, ielSubtractive, ielInterpolation, ielStamp, ielRed, ielGreen, ielBlue, ielHue, ielSaturation, ielColor, ielLuminosity, ielStereoBW, ielStereoColor, ielStereoColorDubois, ielStereoEven, ielStereoOdd, ielLuminosity2 };

enum DECLSPEC_DENUM TIEOpSys : unsigned char { ieosWin95, ieosWin98, ieosWinME, ieosWinNT4, ieosWin2000, ieosWinXP, ieosWin2003, ieosWinVista, ieosWin7, ieosWin8, ieosWin10, ieosUnknown };

enum DECLSPEC_DENUM TIEShadowType : unsigned char { iestNone, iestSolid, iestSmooth1, iestSmooth2 };

enum DECLSPEC_DENUM Hyieutils__2 : unsigned char { ppALL, ppAUTO, ppJPEG, ppTIFF, ppGIF, ppBMP, ppPCX, ppPNG, ppTGA, ppJ2000 };

typedef System::Set<Hyieutils__2, Hyieutils__2::ppALL, Hyieutils__2::ppJ2000> TPreviewParams;

enum DECLSPEC_DENUM TIOPreviewsParamsItems : unsigned char { ioppDefaultLockPreview, ioppApplyButton };

typedef System::Set<TIOPreviewsParamsItems, TIOPreviewsParamsItems::ioppDefaultLockPreview, TIOPreviewsParamsItems::ioppApplyButton> TIOPreviewsParams;

class PASCALIMPLEMENTATION TImageEnPaletteDialog : public Vcl::Forms::TForm
{
	typedef Vcl::Forms::TForm inherited;
	
private:
	int fMouseCol;
	Hyiedefs::TRGBROW *fPalette;
	int fNumCol;
	void __fastcall FormPaint(System::TObject* Sender);
	void __fastcall FormShow(System::TObject* Sender);
	void __fastcall FormMouseMove(System::TObject* Sender, System::Classes::TShiftState Shift, int x, int y);
	void __fastcall FormClick(System::TObject* Sender);
	void __fastcall UpdateLayout(Vcl::Forms::TForm* Form);
	
public:
	Vcl::Stdctrls::TButton* ButtonCancel;
	System::Uitypes::TColor SelCol;
	__property int NumCol = {read=fNumCol, nodefault};
	__fastcall virtual TImageEnPaletteDialog(System::Classes::TComponent* AOwner);
	void __fastcall SetPalette(Hyiedefs::TRGB *Palette, const int Palette_High, int NumCol);
	void __fastcall SetCustomPos(int PosX, int PosY);
	bool __fastcall Execute();
public:
	/* TCustomForm.CreateNew */ inline __fastcall virtual TImageEnPaletteDialog(System::Classes::TComponent* AOwner, int Dummy) : Vcl::Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TImageEnPaletteDialog() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TImageEnPaletteDialog(HWND ParentWindow) : Vcl::Forms::TForm(ParentWindow) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEWideStrings : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	System::WideString operator[](int idx) { return this->Strings[idx]; }
	
private:
	System::Classes::TList* fStrings;
	System::WideChar * __fastcall CreateCopyBuffer(const System::WideString S);
	int __fastcall GetCount();
	System::WideString __fastcall GetString(int idx);
	void __fastcall SetString(int idx, const System::WideString S);
	
public:
	__fastcall TIEWideStrings();
	__fastcall virtual ~TIEWideStrings();
	void __fastcall Clear();
	__property int Count = {read=GetCount, nodefault};
	int __fastcall Add(const System::WideString S);
	__property System::WideString Strings[int idx] = {read=GetString, write=SetString/*, default*/};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TIEDirContent : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	bool fFirstGot;
	NativeUInt fHandle;
	_WIN32_FIND_DATAW fFindData;
	bool fIsDir;
	bool fIsHidden;
	__int64 fFileSizeBytes;
	System::TDateTime fCreateDate;
	System::TDateTime fEditDate;
	System::TDateTime fAccessDate;
	System::UnicodeString fDirectory;
	bool fCheckLinks;
	
public:
	__fastcall TIEDirContent(const System::WideString dir, bool CheckDirLinks);
	__fastcall virtual ~TIEDirContent();
	bool __fastcall GetItem(/* out */ System::WideString &sFilename, bool bGetFiles = true, bool bGetDirs = false, bool bGetHidden = true);
	__property bool IsFolder = {read=fIsDir, nodefault};
	__property bool IsHiddenFile = {read=fIsHidden, nodefault};
	__property __int64 FileSizeBytes = {read=fFileSizeBytes};
	__property System::TDateTime CreateDate = {read=fCreateDate};
	__property System::TDateTime EditDate = {read=fEditDate};
	__property System::TDateTime AccessDate = {read=fAccessDate};
	__property bool CheckLinks = {read=fCheckLinks, write=fCheckLinks, nodefault};
	__classmethod void __fastcall PopulateStrings(const System::WideString path, System::Classes::TStrings* strings, bool bGetFiles = true, bool bGetDirs = false, bool bGetHidden = true, bool IncludePath = false);
};


typedef void __fastcall (__closure *TIEExecutorFunc)(void);

class PASCALIMPLEMENTATION TIEExecutorThread : public System::Classes::TThread
{
	typedef System::Classes::TThread inherited;
	
private:
	TIEExecutorFunc fExecFunc;
	
protected:
	__fastcall TIEExecutorThread(TIEExecutorFunc execFunc);
	
private:
	virtual void __fastcall Execute();
public:
	/* TThread.Destroy */ inline __fastcall virtual ~TIEExecutorThread() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEExecutor : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TIEExecutorThread* fThread;
	
public:
	__fastcall TIEExecutor(bool execInThread);
	__fastcall virtual ~TIEExecutor();
	virtual void __fastcall Execute() = 0 ;
	System::Classes::TThread* __fastcall GetThread();
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEThreadPool : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	TIEExecutor* operator[](int idx) { return this->Threads[idx]; }
	
private:
	System::Classes::TList* fThreads;
	TIEExecutor* __fastcall GetThreads(int idx);
	
public:
	__fastcall TIEThreadPool();
	__fastcall virtual ~TIEThreadPool();
	void __fastcall Add(TIEExecutor* Thread);
	void __fastcall Join();
	void __fastcall WaitFor();
	__property TIEExecutor* Threads[int idx] = {read=GetThreads/*, default*/};
};

#pragma pack(pop)

typedef unsigned __fastcall (*TIEStrHashFunction)(const System::WideString str, unsigned bucketCount);

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEDictionaryValueWideString : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	System::WideString value;
	__fastcall TIEDictionaryValueWideString(const System::WideString value);
	__fastcall virtual ~TIEDictionaryValueWideString();
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEDictionaryValueInteger : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	int value;
	__fastcall TIEDictionaryValueInteger(int value);
	__fastcall virtual ~TIEDictionaryValueInteger();
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TIEDictionaryValueDouble : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	double value;
	__fastcall TIEDictionaryValueDouble(double value);
	__fastcall virtual ~TIEDictionaryValueDouble();
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEDictionaryValueBoolean : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	bool value;
	__fastcall TIEDictionaryValueBoolean(bool value);
	__fastcall virtual ~TIEDictionaryValueBoolean();
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEDictionaryBucket : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	System::WideString key;
	System::TObject* value;
	TIEDictionaryBucket* next;
	__fastcall TIEDictionaryBucket(const System::WideString key_, System::TObject* const value_, TIEDictionaryBucket* next_)/* overload */;
	__fastcall virtual ~TIEDictionaryBucket();
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEStrStrEnumerator : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	unsigned bucket;
	TIEDictionaryBucket* item;
	__fastcall TIEStrStrEnumerator();
	__fastcall virtual ~TIEStrStrEnumerator();
};

#pragma pack(pop)

enum DECLSPEC_DENUM TIEDictionaryParserLang : unsigned char { ieplJSON, ieplXML, ieplStructure };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEDictionary : public System::TObject
{
	typedef System::TObject inherited;
	
	
private:
	typedef System::DynamicArray<TIEDictionaryBucket*> _TIEDictionary__1;
	
	
private:
	bool m_initDone;
	unsigned m_bucketCount;
	_TIEDictionary__1 m_buckets;
	TIEStrHashFunction m_hashFunction;
	bool m_caseSensitive;
	int m_count;
	void __fastcall CheckInit();
	TIEDictionaryBucket* __fastcall GetInBucket(unsigned bucket, const System::WideString key, /* out */ TIEDictionaryBucket* &lastItem);
	void __fastcall DumpJSON(System::TObject* obj, System::Classes::TStream* Stream)/* overload */;
	void __fastcall DumpJSON(System::Contnrs::TObjectList* obj, System::Classes::TStream* Stream)/* overload */;
	void __fastcall DumpJSON(System::Classes::TStream* Stream)/* overload */;
	System::WideString __fastcall DumpJSON()/* overload */;
	System::WideString __fastcall DumpXML(System::TObject* obj)/* overload */;
	System::WideString __fastcall DumpXML(System::Contnrs::TObjectList* obj)/* overload */;
	System::WideString __fastcall DumpXML()/* overload */;
	void __fastcall DumpStructure(int indent, System::TObject* obj, System::Classes::TStream* Stream)/* overload */;
	void __fastcall DumpStructure(int indent, System::Contnrs::TObjectList* obj, System::Classes::TStream* Stream)/* overload */;
	void __fastcall DumpStructure(int indent, System::Classes::TStream* Stream)/* overload */;
	System::UnicodeString __fastcall DumpStructure()/* overload */;
	System::WideString __fastcall EncodeString(const System::WideString Text);
	System::TObject* __fastcall FindInDictionaries(const System::WideString key);
	unsigned __fastcall execHash(const System::WideString str, unsigned bucketCount);
	bool __fastcall keysMatch(const System::WideString key1, const System::WideString key2);
	System::Contnrs::TObjectList* __fastcall cloneList(System::Contnrs::TObjectList* src);
	TIEDictionary* __fastcall cloneDictionary(TIEDictionary* src);
	System::TObject* __fastcall cloneObject(System::TObject* src);
	
public:
	__fastcall TIEDictionary(unsigned buckets, TIEStrHashFunction hashFunction, bool caseSensitive)/* overload */;
	__fastcall TIEDictionary(unsigned buckets, bool caseSensitive)/* overload */;
	__fastcall virtual ~TIEDictionary();
	void __fastcall Clear();
	bool __fastcall IsEmpty();
	bool __fastcall HasKey(const System::WideString key, bool recursive = true);
	System::TObject* __fastcall Get(const System::WideString key, bool silent = false, bool recursive = true);
	System::WideString __fastcall GetString(const System::WideString key, bool recursive = true);
	int __fastcall GetInteger(const System::WideString key, bool recursive = true);
	double __fastcall GetDouble(const System::WideString key, bool recursive = true);
	bool __fastcall GetBoolean(const System::WideString key, bool recursive = true);
	TIEDictionary* __fastcall GetDictionary(const System::WideString key, bool recursive = true);
	System::Contnrs::TObjectList* __fastcall GetList(const System::WideString key, bool recursive = true);
	void __fastcall Insert(const System::WideString key, System::TObject* value)/* overload */;
	void __fastcall Insert(const System::WideString key, System::WideString value)/* overload */;
	void __fastcall Insert(const System::WideString key, int value)/* overload */;
	void __fastcall Insert(const System::WideString key, double value)/* overload */;
	void __fastcall Insert(const System::WideString key, bool value)/* overload */;
	void __fastcall Insert(const System::WideString key, TIEDictionary* value)/* overload */;
	void __fastcall Insert(const System::WideString key, System::Contnrs::TObjectList* value)/* overload */;
	bool __fastcall Erase(const System::WideString key, bool freeValue = true);
	__property int Count = {read=m_count, nodefault};
	bool __fastcall GetNext(TIEStrStrEnumerator* current);
	System::WideString __fastcall Dump(TIEDictionaryParserLang dumpType);
	bool __fastcall Parse(const System::WideString text);
	void __fastcall Assign(TIEDictionary* Source);
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEDictionaryParser : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::WideString m_text;
	int m_textLen;
	int m_textPos;
	bool m_abort;
	TIEDictionaryParserLang m_lang;
	void __fastcall AbortParse();
	bool __fastcall IsToken(System::WideChar c);
	bool __fastcall IsSpace(System::WideChar c);
	void __fastcall ByPassSpaces();
	System::WideChar __fastcall GetChar();
	System::WideChar __fastcall PeekChar();
	System::WideChar __fastcall GetToken();
	System::WideChar __fastcall PeekToken();
	System::WideString __fastcall GetString();
	TIEDictionaryValueWideString* __fastcall ParseString();
	System::TObject* __fastcall ParseIdentifier();
	int __fastcall SavePos();
	void __fastcall RestorePos(int pos);
	System::WideString __fastcall DecodeString(const System::WideString Text);
	TIEDictionary* __fastcall JSON_ParseDictionary(TIEDictionary* mergeWith = (TIEDictionary*)(0x0));
	System::TObject* __fastcall JSON_ParseValue();
	System::Contnrs::TObjectList* __fastcall JSON_ParseArray();
	TIEDictionary* __fastcall XML_ParseContent(TIEDictionary* mergeWith = (TIEDictionary*)(0x0));
	System::WideString __fastcall XML_GetName();
	TIEDictionary* __fastcall XML_ParseAttributes();
	
public:
	__fastcall TIEDictionaryParser(const System::WideString Text);
	TIEDictionary* __fastcall Parse(TIEDictionary* mergeWith = (TIEDictionary*)(0x0));
	__property bool Aborted = {read=m_abort, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TIEDictionaryParser() { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TIEHashAlgorithm : unsigned short { iehaMD2 = 32769, iehaMD4, iehaMD5, iehaSHA, iehaSHA256 = 32780, iehaSHA384, iehaSHA512 };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEHashStream : public System::Classes::TStream
{
	typedef System::Classes::TStream inherited;
	
private:
	System::Classes::TMemoryStream* m_MemStream;
	void *m_CryptProvider;
	void *m_CryptHash;
	
public:
	__fastcall TIEHashStream(TIEHashAlgorithm Algorithm, bool Buffered);
	__fastcall virtual ~TIEHashStream();
	System::AnsiString __fastcall GetHash();
	virtual int __fastcall Write(const void *Buffer, int Count)/* overload */;
	virtual int __fastcall Read(void *Buffer, int Count)/* overload */;
	virtual __int64 __fastcall Seek(const __int64 Offset, System::Classes::TSeekOrigin Origin)/* overload */;
	void __fastcall SaveToFile(const System::WideString filename);
	void __fastcall SaveToStream(System::Classes::TStream* Stream);
	void __fastcall LoadFromFile(const System::WideString filename);
	void __fastcall LoadFromStream(System::Classes::TStream* Stream);
	/* Hoisted overloads: */
	
public:
	inline int __fastcall  Write(const System::DynamicArray<System::Byte> Buffer, int Offset, int Count){ return System::Classes::TStream::Write(Buffer, Offset, Count); }
	inline int __fastcall  Write(const System::DynamicArray<System::Byte> Buffer, int Count){ return System::Classes::TStream::Write(Buffer, Count); }
	inline int __fastcall  Read(System::DynamicArray<System::Byte> Buffer, int Offset, int Count){ return System::Classes::TStream::Read(Buffer, Offset, Count); }
	inline int __fastcall  Read(System::DynamicArray<System::Byte> &Buffer, int Count){ return System::Classes::TStream::Read(Buffer, Count); }
	inline int __fastcall  Seek(int Offset, System::Word Origin){ return System::Classes::TStream::Seek(Offset, Origin); }
	inline __int64 __fastcall  Seek(const __int64 Offset, System::Word Origin){ return System::Classes::TStream::Seek(Offset, Origin); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEMemStream : public System::Classes::TCustomMemoryStream
{
	typedef System::Classes::TCustomMemoryStream inherited;
	
public:
	__fastcall TIEMemStream(void * Ptr, int Size);
	virtual void __fastcall SetSize(int NewSize)/* overload */;
	virtual int __fastcall Write(const void *Buffer, int Count)/* overload */;
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TIEMemStream() { }
	
	/* Hoisted overloads: */
	
protected:
	inline void __fastcall  SetSize(const __int64 NewSize){ System::Classes::TStream::SetSize(NewSize); }
	
public:
	inline int __fastcall  Write(const System::DynamicArray<System::Byte> Buffer, int Offset, int Count){ return System::Classes::TStream::Write(Buffer, Offset, Count); }
	inline int __fastcall  Write(const System::DynamicArray<System::Byte> Buffer, int Count){ return System::Classes::TStream::Write(Buffer, Count); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEClientSocket : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	void *m_socket;
	bool m_littleEndian;
	bool __fastcall GetConnected();
	
public:
	__fastcall TIEClientSocket();
	__fastcall virtual ~TIEClientSocket();
	__property bool LittleEndian = {read=m_littleEndian, write=m_littleEndian, nodefault};
	void __fastcall ReceiveBuffer(void * buf, int len);
	bool __fastcall ReceiveBufferSilent(void * buf, int len);
	void __fastcall ReceivePad(int len);
	System::Byte __fastcall ReceiveByte();
	bool __fastcall ReceiveByteSilent(System::Byte &b);
	System::Word __fastcall ReceiveWord();
	unsigned __fastcall ReceiveDWord();
	void __fastcall SendBuffer(void * buf, int len);
	void __fastcall SendPad(int len);
	void __fastcall SendByte(System::Byte value);
	void __fastcall SendWord(System::Word value);
	void __fastcall SendDWord(unsigned value);
	void __fastcall Connect(const System::UnicodeString Address, System::Word Port);
	void __fastcall Disconnect();
	__property bool Connected = {read=GetConnected, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEByteArray : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	int fSize;
	int fRSize;
	int fBlockSize;
	void __fastcall SetSize(int v);
	
public:
	System::Sysutils::TByteArray *Data;
	__fastcall TIEByteArray(int InitBlockSize);
	__fastcall virtual ~TIEByteArray();
	void __fastcall AddByte(System::Byte v);
	__property int Size = {read=fSize, write=SetSize, nodefault};
	__property int BlockSize = {read=fBlockSize, write=fBlockSize, nodefault};
	void __fastcall Clear();
	int __fastcall AppendFromStream(System::Classes::TStream* Stream, int Count);
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEIntegerMapItem : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	int key;
	int value;
	TIEIntegerMapItem* nextitem;
public:
	/* TObject.Create */ inline __fastcall TIEIntegerMapItem() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TIEIntegerMapItem() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEIntegerMap : public System::TObject
{
	typedef System::TObject inherited;
	
	
private:
	typedef System::DynamicArray<TIEIntegerMapItem*> _TIEIntegerMap__1;
	
	
private:
	_TIEIntegerMap__1 fItems;
	int fIterateIndex;
	TIEIntegerMapItem* fIterateItem;
	int fKeysCount;
	int __fastcall HashFunc(int key);
	
public:
	__fastcall TIEIntegerMap(int bucketsCount);
	__fastcall virtual ~TIEIntegerMap();
	bool __fastcall Insert(int key)/* overload */;
	bool __fastcall Insert(int key, TIEIntegerMapItem* &item)/* overload */;
	bool __fastcall KeyExists(int key)/* overload */;
	__property int KeysCount = {read=fKeysCount, nodefault};
	void __fastcall Clear();
	bool __fastcall IterateBegin();
	bool __fastcall IterateNext();
	int __fastcall IterateGetKey()/* overload */;
	int __fastcall IterateGetValue()/* overload */;
	System::UnicodeString __fastcall DumpStats();
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIERGBMap : public TIEIntegerMap
{
	typedef TIEIntegerMap inherited;
	
public:
	HIDESBASE bool __fastcall Insert(const Hyiedefs::TRGB key)/* overload */;
	HIDESBASE bool __fastcall Insert(const Hyiedefs::TRGB key, int value)/* overload */;
	HIDESBASE bool __fastcall KeyExists(const Hyiedefs::TRGB key)/* overload */;
	HIDESBASE Hyiedefs::TRGB __fastcall IterateGetKey()/* overload */;
public:
	/* TIEIntegerMap.Create */ inline __fastcall TIERGBMap(int bucketsCount) : TIEIntegerMap(bucketsCount) { }
	/* TIEIntegerMap.Destroy */ inline __fastcall virtual ~TIERGBMap() { }
	
	/* Hoisted overloads: */
	
public:
	inline bool __fastcall  Insert(int key){ return TIEIntegerMap::Insert(key); }
	inline bool __fastcall  Insert(int key, TIEIntegerMapItem* &item){ return TIEIntegerMap::Insert(key, item); }
	inline bool __fastcall  KeyExists(int key){ return TIEIntegerMap::KeyExists(key); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TNulStream : public System::Classes::TStream
{
	typedef System::Classes::TStream inherited;
	
private:
	int fposition;
	int fsize;
	
public:
	__fastcall TNulStream();
	__fastcall virtual ~TNulStream();
	virtual int __fastcall Read(void *Buffer, int Count)/* overload */;
	virtual int __fastcall Write(const void *Buffer, int Count)/* overload */;
	virtual int __fastcall Seek(int Offset, System::Word Origin)/* overload */;
	/* Hoisted overloads: */
	
public:
	inline int __fastcall  Read(System::DynamicArray<System::Byte> Buffer, int Offset, int Count){ return System::Classes::TStream::Read(Buffer, Offset, Count); }
	inline int __fastcall  Read(System::DynamicArray<System::Byte> &Buffer, int Count){ return System::Classes::TStream::Read(Buffer, Count); }
	inline int __fastcall  Write(const System::DynamicArray<System::Byte> Buffer, int Offset, int Count){ return System::Classes::TStream::Write(Buffer, Offset, Count); }
	inline int __fastcall  Write(const System::DynamicArray<System::Byte> Buffer, int Count){ return System::Classes::TStream::Write(Buffer, Count); }
	inline __int64 __fastcall  Seek(const __int64 Offset, System::Classes::TSeekOrigin Origin){ return System::Classes::TStream::Seek(Offset, Origin); }
	inline __int64 __fastcall  Seek(const __int64 Offset, System::Word Origin){ return System::Classes::TStream::Seek(Offset, Origin); }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM Hyieutils__52 : unsigned char { ielItems, ielRange, ielCurrentValue };

typedef System::Set<Hyieutils__52, Hyieutils__52::ielItems, Hyieutils__52::ielCurrentValue> TIEListChanges;

typedef void __fastcall (__closure *TIEListCurrentValueEvent)(System::TObject* Sender, void * Value);

typedef int __fastcall (__closure *TIEListSortCompareFunc)(void * Item1, void * Item2);

class PASCALIMPLEMENTATION TIEList : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	int fCapacity;
	int fCount;
	TIEListCurrentValueEvent fOnGetCurrentValue;
	TIEListCurrentValueEvent fOnSetCurrentValue;
	void __fastcall ListQuickSort(int L, int R, TIEListSortCompareFunc SCompare);
	
protected:
	int fItemSize;
	void *fData;
	TIEListChanges fChanged;
	virtual void __fastcall SetCount(int v);
	int __fastcall AddItem(void * v);
	void __fastcall InsertItem(int idx, void * v);
	int __fastcall IndexOfItem(void * v);
	void * __fastcall BaseGetItem(int idx);
	void __fastcall BaseSetItem(int idx, void * v);
	void __fastcall DoGetCurrentValue(void * value);
	void __fastcall DoSetCurrentValue(void * value);
	__fastcall TIEList(TIEListCurrentValueEvent OnGetCurrentValue, TIEListCurrentValueEvent OnSetCurrentValue);
	
public:
	__fastcall virtual ~TIEList();
	virtual void __fastcall Delete(int idx);
	void __fastcall ExchangeItems(int idx1, int idx2);
	__property int Count = {read=fCount, write=SetCount, nodefault};
	virtual void __fastcall Clear();
	virtual void __fastcall Assign(TIEList* Source);
	void __fastcall Sort(TIEListSortCompareFunc Compare);
	__property TIEListChanges Changed = {read=fChanged, write=fChanged, nodefault};
};


class PASCALIMPLEMENTATION TIEDoubleList : public TIEList
{
	typedef TIEList inherited;
	
public:
	double operator[](int idx) { return this->Items[idx]; }
	
private:
	double fRangeMin;
	double fRangeMax;
	double fRangeStep;
	double fCurrentValue;
	double __fastcall GetItem(int idx);
	void __fastcall SetItem(int idx, double v);
	void __fastcall SetRangeMax(double v);
	void __fastcall SetRangeMin(double v);
	void __fastcall SetRangeStep(double v);
	void __fastcall SetCurrentValue(double v);
	double __fastcall GetCurrentValue();
	
public:
	__fastcall TIEDoubleList(TIEListCurrentValueEvent OnGetCurrentValue, TIEListCurrentValueEvent OnSetCurrentValue)/* overload */;
	int __fastcall Add(double v);
	void __fastcall Insert(int idx, double v);
	virtual void __fastcall Clear();
	int __fastcall IndexOf(double v);
	__property double RangeMin = {read=fRangeMin, write=SetRangeMin};
	__property double RangeMax = {read=fRangeMax, write=SetRangeMax};
	__property double RangeStep = {read=fRangeStep, write=SetRangeStep};
	__property double Items[int idx] = {read=GetItem, write=SetItem/*, default*/};
	virtual void __fastcall Assign(TIEList* Source);
	__property double CurrentValue = {read=GetCurrentValue, write=SetCurrentValue};
public:
	/* TIEList.Destroy */ inline __fastcall virtual ~TIEDoubleList() { }
	
};


class PASCALIMPLEMENTATION TIEIntegerList : public TIEList
{
	typedef TIEList inherited;
	
public:
	int operator[](int idx) { return this->Items[idx]; }
	
private:
	int fRangeMin;
	int fRangeMax;
	int fRangeStep;
	int fCurrentValue;
	int __fastcall GetItem(int idx);
	void __fastcall SetItem(int idx, int v);
	void __fastcall SetRangeMax(int v);
	void __fastcall SetRangeMin(int v);
	void __fastcall SetRangeStep(int v);
	void __fastcall SetCurrentValue(int v);
	int __fastcall GetCurrentValue();
	
public:
	__fastcall TIEIntegerList(TIEListCurrentValueEvent OnGetCurrentValue, TIEListCurrentValueEvent OnSetCurrentValue)/* overload */;
	int __fastcall Add(int v);
	void __fastcall Insert(int idx, int v);
	virtual void __fastcall Clear();
	int __fastcall IndexOf(int v);
	__property int RangeMin = {read=fRangeMin, write=SetRangeMin, nodefault};
	__property int RangeMax = {read=fRangeMax, write=SetRangeMax, nodefault};
	__property int RangeStep = {read=fRangeStep, write=SetRangeStep, nodefault};
	__property int Items[int idx] = {read=GetItem, write=SetItem/*, default*/};
	virtual void __fastcall Assign(TIEList* Source);
	__property int CurrentValue = {read=GetCurrentValue, write=SetCurrentValue, nodefault};
public:
	/* TIEList.Destroy */ inline __fastcall virtual ~TIEIntegerList() { }
	
};


class PASCALIMPLEMENTATION TIERecordList : public TIEList
{
	typedef TIEList inherited;
	
public:
	void * operator[](int idx) { return this->Items[idx]; }
	
private:
	void * __fastcall GetItem(int idx);
	void __fastcall SetItem(int idx, void * v);
	
public:
	__fastcall TIERecordList(int RecordSize, TIEListCurrentValueEvent OnGetCurrentValue, TIEListCurrentValueEvent OnSetCurrentValue)/* overload */;
	int __fastcall Add(void * v);
	void __fastcall Insert(int idx, void * v);
	int __fastcall IndexOf(void * v);
	__property void * Items[int idx] = {read=GetItem, write=SetItem/*, default*/};
public:
	/* TIEList.Destroy */ inline __fastcall virtual ~TIERecordList() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TIETemporaryFileStream : public System::Classes::THandleStream
{
	typedef System::Classes::THandleStream inherited;
	
private:
	NativeUInt FHandle;
	
public:
	__fastcall TIETemporaryFileStream(const System::UnicodeString FileName);
	__fastcall virtual ~TIETemporaryFileStream();
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEWideFileStream : public System::Classes::THandleStream
{
	typedef System::Classes::THandleStream inherited;
	
private:
	System::WideString FFileName;
	
public:
	__fastcall TIEWideFileStream(const System::WideString FileName, System::Word Mode);
	__fastcall virtual ~TIEWideFileStream();
	__property System::WideString FileName = {read=FFileName};
};

#pragma pack(pop)

struct DECLSPEC_DRECORD TIEFileBufferItem
{
public:
	__int64 Pos;
	__int64 Size;
	void *ptr;
	TIEDataAccess access;
};


typedef TIEFileBufferItem *PIEFileBufferItem;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEFileBuffer : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	int __fastcall IndexOf(void * ptr);
	
public:
	System::Classes::TStream* fSimFile;
	System::UnicodeString fFileName;
	System::Classes::TList* fMapped;
	__fastcall TIEFileBuffer();
	__fastcall virtual ~TIEFileBuffer();
	bool __fastcall AllocateFile(__int64 InSize, const System::UnicodeString Descriptor, bool UseDisk);
	void __fastcall ReAllocateFile(__int64 NewSize);
	void * __fastcall Map(__int64 InPos, __int64 InSize, TIEDataAccess DataAccess);
	void __fastcall UnMap(void * ptr);
	void __fastcall UnMapAll();
	bool __fastcall IsAllocated();
	void __fastcall DeAllocate();
	void __fastcall CopyTo(TIEFileBuffer* Dest, __int64 InPos, __int64 InSize)/* overload */;
	void __fastcall CopyTo(System::Classes::TStream* Dest, __int64 InPos, __int64 InSize)/* overload */;
	void __fastcall CopyFrom(__int64 DestPos, void * Source, __int64 Size);
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEResourceBookmark : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	int m_TypeIndex;
	int m_NameIndex;
	int m_FrameIndex;
	
public:
	__property int TypeIndex = {read=m_TypeIndex, nodefault};
	__property int NameIndex = {read=m_NameIndex, nodefault};
	__property int FrameIndex = {read=m_FrameIndex, nodefault};
	__fastcall TIEResourceBookmark(int TypeIndex_, int NameIndex_, int FrameIndex_);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TIEResourceBookmark() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEResourceExtractor : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	NativeUInt m_hlib;
	System::Classes::TStringList* m_typesList;
	System::Classes::TList* m_resourceBookmarks;
	int __fastcall GetTypesCount();
	int __fastcall GetNamesCount(int TypeIndex);
	System::AnsiString __fastcall GetTypes(int TypeIndex);
	System::AnsiString __fastcall GetNames(int TypeIndex, int NameIndex);
	System::AnsiString __fastcall GetFriendlyTypes(int TypeIndex);
	bool __fastcall GetIsValid();
	int __fastcall GetGroupCountFrames(int TypeIndex, int NameIndex);
	int __fastcall GetGroupFrameWidth(int TypeIndex, int NameIndex, int FrameIndex);
	int __fastcall GetGroupFrameHeight(int TypeIndex, int NameIndex, int FrameIndex);
	int __fastcall GetGroupFrameDepth(int TypeIndex, int NameIndex, int FrameIndex);
	System::AnsiString __fastcall GetGroupFrameName(int TypeIndex, int NameIndex, int FrameIndex);
	bool __fastcall GetIsGroup(int TypeIndex);
	bool __fastcall GetIsGrouped(int TypeIndex);
	
public:
	__fastcall TIEResourceExtractor(const System::WideString Filename);
	__fastcall virtual ~TIEResourceExtractor();
	__property int TypesCount = {read=GetTypesCount, nodefault};
	__property System::AnsiString Types[int TypeIndex] = {read=GetTypes};
	__property System::AnsiString FriendlyTypes[int TypeIndex] = {read=GetFriendlyTypes};
	__property int NamesCount[int TypeIndex] = {read=GetNamesCount};
	__property System::AnsiString Names[int TypeIndex][int NameIndex] = {read=GetNames};
	void * __fastcall GetBuffer(int TypeIndex, int NameIndex, int &BufferLength)/* overload */;
	void * __fastcall GetBuffer(const System::AnsiString TypeStr, const System::AnsiString NameStr, int &BufferLength)/* overload */;
	void * __fastcall GetBuffer(TIEResourceBookmark* ResourceBookmark, int &BufferLength)/* overload */;
	__property bool IsValid = {read=GetIsValid, nodefault};
	__property bool IsGroup[int TypeIndex] = {read=GetIsGroup};
	__property bool IsGrouped[int TypeIndex] = {read=GetIsGrouped};
	__property int GroupCountFrames[int TypeIndex][int NameIndex] = {read=GetGroupCountFrames};
	__property int GroupFrameWidth[int TypeIndex][int NameIndex][int FrameIndex] = {read=GetGroupFrameWidth};
	__property int GroupFrameHeight[int TypeIndex][int NameIndex][int FrameIndex] = {read=GetGroupFrameHeight};
	__property int GroupFrameDepth[int TypeIndex][int NameIndex][int FrameIndex] = {read=GetGroupFrameDepth};
	__property System::AnsiString GroupFrameName[int TypeIndex][int NameIndex][int FrameIndex] = {read=GetGroupFrameName};
	void __fastcall GetGroupAndFrame(int TypeIndex, int NameIndex, int &GroupTypeIndex, int &GroupIndex, int &GroupFrameIndex);
	int __fastcall IndexOfType(const System::AnsiString TypeName);
	void * __fastcall GetFrameBuffer(int TypeIndex, int NameIndex, int FrameIndex, int &BufferLength);
	TIEResourceBookmark* __fastcall GetResourceBookmark(int TypeIndex, int NameIndex, int FrameIndex = 0xffffffff);
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIERandomGenerator : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	unsigned x;
	unsigned y;
	unsigned z;
	unsigned w;
	
public:
	__fastcall TIERandomGenerator(unsigned Seed)/* overload */;
	__fastcall TIERandomGenerator(const System::AnsiString Seed)/* overload */;
	__fastcall TIERandomGenerator(unsigned Seed1, unsigned Seed2, unsigned Seed3, unsigned Seed4)/* overload */;
	unsigned __fastcall NextDWORD();
	__int64 __fastcall NextINT64();
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TIERandomGenerator() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEFPExceptionsDisabler : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Math::TFPUExceptionMask PrevExceptionMask;
	
public:
	__fastcall TIEFPExceptionsDisabler();
	__fastcall virtual ~TIEFPExceptionsDisabler();
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEStringSplitter : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	System::UnicodeString operator[](int Index) { return this->Strings[Index]; }
	
private:
	System::UnicodeString m_text;
	System::Classes::TStringList* m_strings;
	System::UnicodeString m_delimiters;
	bool m_bypassSpaces;
	void __fastcall SetText(const System::UnicodeString Text);
	System::UnicodeString __fastcall GetText();
	System::UnicodeString __fastcall GetString(int Index);
	int __fastcall GetCount();
	System::UnicodeString __fastcall GetDelimiters();
	void __fastcall SetDelimiters(const System::UnicodeString Value);
	bool __fastcall GetBypassSpaces();
	void __fastcall SetBypassSpaces(bool Value);
	bool __fastcall IsSpace(System::WideChar c);
	
protected:
	void __fastcall Update();
	
public:
	__fastcall TIEStringSplitter(const System::UnicodeString Text, const System::UnicodeString Delimiters);
	__fastcall virtual ~TIEStringSplitter();
	__property System::UnicodeString Text = {read=GetText, write=SetText};
	__property System::UnicodeString Strings[int Index] = {read=GetString/*, default*/};
	__property int Count = {read=GetCount, nodefault};
	__property System::UnicodeString Delimiters = {read=GetDelimiters, write=SetDelimiters};
	__property bool BypassSpaces = {read=GetBypassSpaces, write=SetBypassSpaces, nodefault};
};

#pragma pack(pop)

enum DECLSPEC_DENUM TIEURLType : unsigned char { ieurlUNKNOWN, ieurlHTTP, ieurlHTTPS, ieurlFTP };

//-- var, const, procedure ---------------------------------------------------
static const System::Int8 ioUnknown = System::Int8(0x0);
static const System::Int8 ioTIFF = System::Int8(0x1);
static const System::Int8 ioGIF = System::Int8(0x2);
static const System::Int8 ioJPEG = System::Int8(0x3);
static const System::Int8 ioPCX = System::Int8(0x4);
static const System::Int8 ioBMP = System::Int8(0x5);
static const System::Int8 ioICO = System::Int8(0x6);
static const System::Int8 ioCUR = System::Int8(0x7);
static const System::Int8 ioPNG = System::Int8(0x8);
static const System::Int8 ioWMF = System::Int8(0x9);
static const System::Int8 ioEMF = System::Int8(0xa);
static const System::Int8 ioTGA = System::Int8(0xb);
static const System::Int8 ioPXM = System::Int8(0xc);
static const System::Int8 ioJP2 = System::Int8(0xd);
static const System::Int8 ioJ2K = System::Int8(0xe);
static const System::Int8 ioAVI = System::Int8(0xf);
static const System::Int8 ioWBMP = System::Int8(0x10);
static const System::Int8 ioPS = System::Int8(0x11);
static const System::Int8 ioPDF = System::Int8(0x12);
static const System::Int8 ioDCX = System::Int8(0x13);
static const System::Int8 ioRAW = System::Int8(0x14);
static const System::Int8 ioBMPRAW = System::Int8(0x15);
static const System::Int8 ioWMV = System::Int8(0x16);
static const System::Int8 ioMPEG = System::Int8(0x17);
static const System::Int8 ioPSD = System::Int8(0x18);
static const System::Int8 ioIEV = System::Int8(0x19);
static const System::Int8 ioIEN = System::Int8(0x1a);
static const System::Int8 ioALL = System::Int8(0x1b);
static const System::Int8 ioDICOM = System::Int8(0x1c);
static const System::Int8 ioHDP = System::Int8(0x1d);
static const System::Int8 ioRAS = System::Int8(0x1e);
static const System::Int8 ioSVG = System::Int8(0x1f);
static const System::Int8 ioDDS = System::Int8(0x20);
static const System::Int8 ioHEIF = System::Int8(0x21);
static const System::Int8 ioWEBP = System::Int8(0x22);
static const System::Int8 ioWIC = System::Int8(0x63);
static const System::Word ioOtherDLLPlugIns = System::Word(0x1001);
static const System::Word ioMiscDLLPlugIns = System::Word(0x2000);
static const System::Word ioUSER = System::Word(0x2710);
static const System::Word iomscWPPDF = System::Word(0x201e);
static const System::Word ioDXF = System::Word(0x2329);
static const System::Int8 ioLYR _DEPRECATED_ATTRIBUTE1("Use ioIEN instead - http://imageen.com/help/Compatibilit"
	"y.html")  = System::Int8(0x1a);
extern DELPHI_PACKAGE System::Set<System::Byte, 0, 255> FileTypes_Supporting_Layer_Saving;
extern DELPHI_PACKAGE System::StaticArray<System::Byte, 21> FileType_Order;
extern DELPHI_PACKAGE System::LongBool __stdcall (*IEGetGestureInfo)(NativeUInt hGestureInfo, Hyiedefs::PIEGESTUREINFO pGestureInfo);
extern DELPHI_PACKAGE System::LongBool __stdcall (*IECloseGestureInfoHandle)(NativeUInt hGestureInfo);
extern DELPHI_PACKAGE System::LongBool __stdcall (*IESetGestureConfig)(NativeUInt hwnd, unsigned dwReserved, unsigned cIDS, Hyiedefs::PIEGESTURECONFIG pGestureConfig, unsigned cbSize);
extern DELPHI_PACKAGE System::LongBool __stdcall (*IEUnregisterTouchWindow)(NativeUInt hwnd);
extern DELPHI_PACKAGE NativeUInt mscms;
extern DELPHI_PACKAGE unsigned __fastcall IE_ELFHash(const System::WideString str, unsigned bucketCount);
extern DELPHI_PACKAGE unsigned __fastcall IE_RSHash(const System::WideString str, unsigned bucketCount);
extern DELPHI_PACKAGE unsigned __fastcall IE_JSHash(const System::WideString str, unsigned bucketCount);
extern DELPHI_PACKAGE unsigned __fastcall IE_MMHash(const System::WideString str, const unsigned Seed = (unsigned)(0x9747b28c));
extern DELPHI_PACKAGE System::WideChar * __fastcall IEWStrCopy(System::WideChar * Dest, const System::WideChar * Source);
extern DELPHI_PACKAGE void __fastcall GetAllFiles(const System::UnicodeString Path, System::Classes::TStrings* Dest, bool GetFiles = true, bool GetDirs = false, bool AllowHidden = false);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetFirstFile(const System::UnicodeString Path, bool GetFiles = true, bool GetDirs = false, bool AllowHidden = false);
extern DELPHI_PACKAGE bool __fastcall IEIsPrime(int x);
extern DELPHI_PACKAGE int __fastcall IENextPrime(int x);
extern DELPHI_PACKAGE void __fastcall IEQuickSort(int ItemsCount, TIECompareFunction CompareFunction, TIESwapFunction SwapFunction);
extern DELPHI_PACKAGE System::UnicodeString __fastcall IEGetTempFileName(System::UnicodeString Descriptor = System::UnicodeString(), System::UnicodeString Directory = System::UnicodeString(), System::UnicodeString FileExt = System::UnicodeString());
extern DELPHI_PACKAGE System::UnicodeString __fastcall IEGetNewFilename(const System::UnicodeString sBaseFilename, const System::WideChar sSepChar = (System::WideChar)(0x20));
extern DELPHI_PACKAGE int __fastcall IEFindNearestColor(Hyiedefs::TRGB color, Hyiedefs::TIEArrayOfTRGB palette, int colorCount);
extern DELPHI_PACKAGE __int64 __fastcall IEStreamFindString(System::Classes::TStream* Stream, const System::AnsiString Text, __int64 StopAtPos);
extern DELPHI_PACKAGE System::AnsiString __fastcall IEGetDosOutput(const System::AnsiString CommandLine, const System::AnsiString Work = "C:\\");
extern DELPHI_PACKAGE double __fastcall IEGPSConvertDMSToDegDec(double degrees, double minutes, double seconds, const System::AnsiString ref);
extern DELPHI_PACKAGE void __fastcall IEGPSConvertDegDecToDMS(const System::AnsiString dir, double value, double &degrees, double &minutes, double &seconds, System::AnsiString &ref);
extern DELPHI_PACKAGE int __fastcall IEGetCoresCount(void);
extern DELPHI_PACKAGE int __fastcall IEGetRequiredThreads(int ImageWidth, int ImageHeight);
extern DELPHI_PACKAGE bool __fastcall IEIsWindowsVistaOrNewer(void);
extern DELPHI_PACKAGE bool __fastcall IEIsKeyPressed(System::Word aKey);
extern DELPHI_PACKAGE System::Classes::TShiftState __fastcall IEGetShiftState(void);
extern DELPHI_PACKAGE Vcl::Graphics::TFont* __fastcall IEGetDefaultDialogFont(Vcl::Controls::TControl* Form = (Vcl::Controls::TControl*)(0x0));
extern DELPHI_PACKAGE double __fastcall IEGetDPIScaling(Vcl::Controls::TControl* Form);
extern DELPHI_PACKAGE bool __fastcall IEDPIScalingActive(void);
extern DELPHI_PACKAGE void __fastcall SetBoundsEx(Vcl::Controls::TControl* c, int ALeft, int ATop, int AWidth, int AHeight, bool ScreenScaling = false);
extern DELPHI_PACKAGE System::Types::TPoint __fastcall IEActiveScreenSize(Vcl::Forms::TForm* Form = (Vcl::Forms::TForm*)(0x0));
extern DELPHI_PACKAGE void __fastcall IECenterForm(Vcl::Forms::TForm* Form);
extern DELPHI_PACKAGE void __fastcall IECenterWindow(HWND Wnd);
extern DELPHI_PACKAGE void __fastcall IEPositionWindow(HWND Wnd, int X, int Y);
extern DELPHI_PACKAGE __int64 __fastcall IEGetMemory(bool freememory);
extern DELPHI_PACKAGE double __fastcall IEConvertToUnits(double Value, Hyiedefs::TIEUnits ValueUnit, Hyiedefs::TIEUnits OutUnit, double DPI = 0.000000E+00);
extern DELPHI_PACKAGE void __fastcall IECalcUnitsPerPixel(double DpiX, double DpiY, Hyiedefs::TIEUnits mu, /* out */ double &cx, /* out */ double &cy);
extern DELPHI_PACKAGE void __fastcall IESetPlim(System::Types::TRect &plim, int x, int y);
extern DELPHI_PACKAGE int __fastcall IESnapValue(double Value, double SnapStep, int TendingDir = 0x0);
extern DELPHI_PACKAGE System::Extended __fastcall IEArcCos(System::Extended X);
extern DELPHI_PACKAGE int __fastcall IEChordLenOnEllipse(int w, int h, int y);
extern DELPHI_PACKAGE double __fastcall IEDegreesToRadians(double Angle);
extern DELPHI_PACKAGE double __fastcall IERadiansToDegrees(double Rad);
extern DELPHI_PACKAGE double __fastcall IEAngle(double x1, double y1, double x2, double y2, double x3, double y3);
extern DELPHI_PACKAGE double __fastcall IEAngle2(double x1, double y1, double x2, double y2);
extern DELPHI_PACKAGE double __fastcall IEAngle3(int x1, int y1, int xc, int yc, int x2, int y2);
extern DELPHI_PACKAGE System::Uitypes::TFontStyles __fastcall IEExtractStylesFromLogFont(Winapi::Windows::PLogFontA logfont);
extern DELPHI_PACKAGE System::Uitypes::TFontStyles __fastcall IEExtractStylesFromLogFontW(Winapi::Windows::PLogFontW logfont);
extern DELPHI_PACKAGE void __fastcall IECopyLogFont(Winapi::Windows::PLogFontA src, Winapi::Windows::PLogFontW dst);
extern DELPHI_PACKAGE bool __fastcall CompareGUID(const GUID &g1, const GUID &g2);
extern DELPHI_PACKAGE System::AnsiString __fastcall IEConvertGUIDToString(System::PGUID g, char prefix = '\x7b', System::AnsiString sep = "-", char postfix = '\x7d');
extern DELPHI_PACKAGE void __fastcall IEConvertWStringToGUID(const System::WideString invar, System::PGUID gg);
extern DELPHI_PACKAGE void __fastcall IEConvertAStringToGUID(System::AnsiString invar, System::PGUID gg);
extern DELPHI_PACKAGE void __fastcall IEResetPrinter(void);
extern DELPHI_PACKAGE System::UnicodeString __fastcall IEGetActivePrinter(void);
extern DELPHI_PACKAGE void __fastcall IEGetFitResampleSize(int ImgWidth, int ImgHeight, int DestWidth, int DestHeight, /* out */ int &RWidth, /* out */ int &RHeight);
extern DELPHI_PACKAGE void __fastcall IEGetFitResampleSizeWithAutoCrop(int ImgWidth, int ImgHeight, int DestWidth, int DestHeight, /* out */ int &RWidth, /* out */ int &RHeight, int iAutoCropPercent, /* out */ int &RAutoWidth, /* out */ int &RAutoHeight);
extern DELPHI_PACKAGE int __fastcall IEASCII85EncodeBlock(System::PByte &inbytes, int buflen, char * &outstr, int &asciilen);
extern DELPHI_PACKAGE int __fastcall IEASCII85DecodeBlock(char * &instr, int buflen, System::PByte &outbytes);
extern DELPHI_PACKAGE int __fastcall IEPSRunLengthEncode(System::Sysutils::PByteArray inbytes, int inlen, System::Sysutils::PByteArray outbytes);
extern DELPHI_PACKAGE void __fastcall IEWriteStrLn(System::Classes::TStream* s, System::AnsiString ss);
extern DELPHI_PACKAGE System::WideChar __fastcall IEGetDecimalSeparator(void);
extern DELPHI_PACKAGE void __fastcall IESetDecimalSeparator(System::WideChar c);
extern DELPHI_PACKAGE System::AnsiString __fastcall IEFloatToStrA(System::Extended Value);
extern DELPHI_PACKAGE System::UnicodeString __fastcall IEFloatToStrS(System::Extended Value);
extern DELPHI_PACKAGE System::WideString __fastcall IEFloatToStrW(System::Extended Value);
extern DELPHI_PACKAGE bool __fastcall IEIsSpace(char c);
extern DELPHI_PACKAGE System::AnsiString __fastcall IERemoveCtrlCharsA(const System::AnsiString text);
extern DELPHI_PACKAGE System::UnicodeString __fastcall IERemoveCtrlCharsS(const System::UnicodeString text);
extern DELPHI_PACKAGE System::WideString __fastcall IERemoveCtrlCharsW(const System::WideString text);
extern DELPHI_PACKAGE bool __fastcall IERGBColorsMatch(Hyiedefs::TRGB rgb1, Hyiedefs::TRGB rgb2, int Tolerance = 0x0);
extern DELPHI_PACKAGE System::UnicodeString __fastcall IERGB2StrS(Hyiedefs::TRGB c);
extern DELPHI_PACKAGE System::WideString __fastcall IERGB2StrW(Hyiedefs::TRGB c);
extern DELPHI_PACKAGE System::UnicodeString __fastcall IEBool2StrS(bool v);
extern DELPHI_PACKAGE System::WideString __fastcall IEBool2StrW(bool v);
extern DELPHI_PACKAGE Hyiedefs::TRGB __fastcall IEStr2RGBW(const System::WideString rgbstr);
extern DELPHI_PACKAGE Hyiedefs::TRGB __fastcall IEStr2RGBS(const System::UnicodeString rgbstr);
extern DELPHI_PACKAGE bool __fastcall IEStr2BoolS(const System::UnicodeString v);
extern DELPHI_PACKAGE bool __fastcall IEStr2BoolW(const System::WideString v);
extern DELPHI_PACKAGE bool __fastcall IEStr2BoolA(const System::AnsiString v);
extern DELPHI_PACKAGE System::AnsiString __fastcall IEBool2StrA(const bool v);
extern DELPHI_PACKAGE System::Uitypes::TColor __fastcall IEStr2ColorDefS(const System::UnicodeString v, System::Uitypes::TColor ADefault);
extern DELPHI_PACKAGE void __fastcall IEInitialize_IELang(const System::WideString sDLLPath = System::WideString(), bool reinitialize = true);
extern DELPHI_PACKAGE void __fastcall IEFinalize_IELang(void);
extern DELPHI_PACKAGE bool __fastcall IELangAvailable(bool RaiseExcept = false, bool ExeFolderOnly = true);
extern DELPHI_PACKAGE void __fastcall IESetTranslationWord(const Hyiedefs::TMsgLanguage lang, const Hyiedefs::TMsgLanguageWords msg, const System::AnsiString trans);
extern DELPHI_PACKAGE void __fastcall IESetTranslationWordU(const Hyiedefs::TMsgLanguage lang, const Hyiedefs::TMsgLanguageWords msg, const System::UnicodeString trans);
extern DELPHI_PACKAGE System::UnicodeString __fastcall IEGetTranslationWord _DEPRECATED_ATTRIBUTE1("Use IEGlobalSettings().GetLanguageWord() instead - http://imageen.com/help/Compatibility.html") (const Hyiedefs::TMsgLanguageWords msg);
extern DELPHI_PACKAGE System::WideString __fastcall iemsg(const Hyiedefs::TMsgLanguageWords msg);
extern DELPHI_PACKAGE double __fastcall IEDistPoint2Point(int x1, int y1, int x2, int y2);
extern DELPHI_PACKAGE double __fastcall IEDistPoint2PointD(double x1, double y1, double x2, double y2);
extern DELPHI_PACKAGE double __fastcall _DistPoint2Line(int xp, int yp, int x1, int y1, int x2, int y2);
extern DELPHI_PACKAGE double __fastcall _DistPoint2Seg(int xp, int yp, int x1, int y1, int x2, int y2);
extern DELPHI_PACKAGE double __fastcall _DistPoint2Polyline(int x, int y, Hyiedefs::PPointArray PolyPoints, int PolyPointsCount, int ToSubX, int ToSubY, int ToAddX, int ToAddY, double ToMulX, double ToMulY, int penWidth, bool closed);
extern DELPHI_PACKAGE TIEOpSys __fastcall IEGetOpSys(void);
extern DELPHI_PACKAGE int __fastcall IEGetDisplayOrientation(void);
extern DELPHI_PACKAGE System::Extended __fastcall IEStrToFloatDefA(System::AnsiString s, System::Extended Def);
extern DELPHI_PACKAGE System::Extended __fastcall IEStrToFloatDefW(const System::WideString s, System::Extended Def);
extern DELPHI_PACKAGE System::Extended __fastcall IEStrToFloatDefS(const System::UnicodeString s, System::Extended Def);
extern DELPHI_PACKAGE System::Extended __fastcall IEStrToFloatDef(const System::UnicodeString s, System::Extended Def);
extern DELPHI_PACKAGE unsigned __fastcall IEStrLen(const char * Str);
extern DELPHI_PACKAGE unsigned __fastcall IEStrLenW(System::WideChar * Str);
extern DELPHI_PACKAGE char * __fastcall IEStrCopy(char * Dest, const char * Source);
extern DELPHI_PACKAGE System::WideChar * __fastcall IEStrCopyW(System::WideChar * Dest, System::WideChar * Source);
extern DELPHI_PACKAGE char * __fastcall IEStrPCopy(char * Dest, const System::AnsiString Source);
extern DELPHI_PACKAGE System::WideChar * __fastcall IEStrPCopyW(System::WideChar * Dest, const System::WideString Source);
extern DELPHI_PACKAGE System::WideChar * __fastcall IEStrPCopyWA(System::WideChar * Dest, Hyiedefs::TIEArrayOfAnsiChar Source);
extern DELPHI_PACKAGE char * __fastcall IEStrMove(char * Dest, const char * Source, unsigned Count);
extern DELPHI_PACKAGE char * __fastcall IEAnsiStrScan(char * Str, char Chr);
extern DELPHI_PACKAGE char * __fastcall IEStrScan(const char * Str, char Chr);
extern DELPHI_PACKAGE char * __fastcall IEStrRScan(const char * Str, char Chr);
extern DELPHI_PACKAGE bool __fastcall IETextToFloat(char * Buffer, void *Value, System::Sysutils::TFloatValue ValueType)/* overload */;
extern DELPHI_PACKAGE Hyiedefs::TIEArrayOfByte __fastcall IECopyArrayOfByte(const Hyiedefs::TIEArrayOfByte Input);
extern DELPHI_PACKAGE Hyiedefs::TIEArrayOfInteger __fastcall IECopyArrayOfInteger(const Hyiedefs::TIEArrayOfInteger Input);
extern DELPHI_PACKAGE Hyiedefs::TCIELab __fastcall IERGB2CIELAB(Hyiedefs::TRGB rgb);
extern DELPHI_PACKAGE Hyiedefs::TRGB __fastcall IECIELAB2RGB(const Hyiedefs::TCIELab lab);
extern DELPHI_PACKAGE Hyiedefs::TRGB48 __fastcall IERGB2RGB48(Hyiedefs::TRGB rgb);
extern DELPHI_PACKAGE void __fastcall IEDraw3DRect(Vcl::Graphics::TCanvas* Canvas, int x1, int y1, int x2, int y2, System::Uitypes::TColor cl1, System::Uitypes::TColor cl2);
extern DELPHI_PACKAGE void __fastcall IEDraw3DRect2(System::TObject* IECanvas, int x1, int y1, int x2, int y2, System::Uitypes::TColor cl1, System::Uitypes::TColor cl2);
extern DELPHI_PACKAGE void __fastcall IEDrawHint(Vcl::Graphics::TCanvas* Canvas, int &x, int &y, const System::UnicodeString ss, Vcl::Graphics::TFont* Font, Vcl::Graphics::TBrush* Brush, Vcl::Graphics::TBitmap* &SaveBitmap, int MaxWidth, int MaxHeight, System::Uitypes::TColor Border1, System::Uitypes::TColor Border2);
extern DELPHI_PACKAGE void __fastcall IEDrawHint2(Vcl::Controls::TControl* Form, Vcl::Graphics::TCanvas* Canvas, int x, int y, const System::UnicodeString ss, const System::UnicodeString minText, bool Center = false);
extern DELPHI_PACKAGE bool __fastcall IEDrawDibClose(NativeUInt hdd);
extern DELPHI_PACKAGE bool __fastcall IEDrawDibDraw(NativeUInt hdd, NativeUInt hDC, int xDst, int yDst, int dxDst, int dyDst, tagBITMAPINFOHEADER &lpbi, void * Bits, int xSrc, int ySrc, int dxSrc, int dySrc, unsigned wFlags);
extern DELPHI_PACKAGE NativeUInt __fastcall IEDrawDibOpen(void);
extern DELPHI_PACKAGE unsigned __fastcall IEDrawDibRealize(NativeUInt hdd, NativeUInt hDC, System::LongBool fBackground);
extern DELPHI_PACKAGE void __fastcall SafeStreamWrite(System::Classes::TStream* Stream, bool &Aborting, const void *Buffer, int Count);
extern DELPHI_PACKAGE bool __fastcall IEDirectoryExists(const System::UnicodeString Name);
extern DELPHI_PACKAGE bool __fastcall IEFileReadOnly(const System::UnicodeString Name);
extern DELPHI_PACKAGE void __fastcall IEForceDirectories(System::UnicodeString Dir);
extern DELPHI_PACKAGE int __fastcall _GetBitCount(int b);
extern DELPHI_PACKAGE int __fastcall IEGetFirstSetBit(int b);
extern DELPHI_PACKAGE int __fastcall _NColToBitsPixel(int NCol);
extern DELPHI_PACKAGE __int64 __fastcall IEBitmapRowLen(int Width, int BitCount, int align);
extern DELPHI_PACKAGE int __fastcall IEVCLPixelFormat2BitCount(Vcl::Graphics::TPixelFormat PixelFormat);
extern DELPHI_PACKAGE TIEPixelFormat __fastcall IEVCLPixelFormat2ImageEnPixelFormat(Vcl::Graphics::TPixelFormat PixelFormat);
extern DELPHI_PACKAGE int __fastcall IEVCLPixelFormat2RowLen(int Width, Vcl::Graphics::TPixelFormat PixelFormat);
extern DELPHI_PACKAGE Vcl::Graphics::TPixelFormat __fastcall IEBitCount2VCLPixelformat(int Bitcount);
extern DELPHI_PACKAGE int __fastcall IEPixelFormat2BitCount(TIEPixelFormat PixelFormat);
extern DELPHI_PACKAGE int __fastcall IEPixelFormat2ChannelCount(TIEPixelFormat PixelFormat);
extern DELPHI_PACKAGE void __fastcall ReverseBitsB(System::Byte &inp);
extern DELPHI_PACKAGE void __fastcall ReverseBits(unsigned &inp);
extern DELPHI_PACKAGE double __fastcall IEPower2(const double Base, const double Exponent);
extern DELPHI_PACKAGE void __fastcall DrawDibDrawEmu(NativeUInt hdd, NativeUInt hDC, int xDst, int yDst, int dxDst, int dyDst, tagBITMAPINFOHEADER &lpbi, void * Bits, int xSrc, int ySrc, int dxSrc, int dySrc, unsigned wFlags);
extern DELPHI_PACKAGE void __fastcall DrawDib(NativeUInt hDC, int xDst, int yDst, int dxDst, int dyDst, tagBITMAPINFOHEADER &lpbi, void * Bits, int xSrc, int ySrc, int dxSrc, int dySrc);
extern DELPHI_PACKAGE System::Word __fastcall IESwapWord(System::Word i);
extern DELPHI_PACKAGE void __fastcall IEChangeEndiannessWordArray(PWORD buffer, int items);
extern DELPHI_PACKAGE void __fastcall IEChangeEndiannessDWordArray(unsigned* buffer, int items);
extern DELPHI_PACKAGE int __fastcall IESwapDWord(int i);
extern DELPHI_PACKAGE __int64 __fastcall IESwapInt64(__int64 i);
extern DELPHI_PACKAGE void __fastcall _CastPolySelCC(const int x1, const int y1, int &x2, int &y2);
extern DELPHI_PACKAGE bool __fastcall IEIntersectRect(const System::Types::TRect &Rect1, const System::Types::TRect &Rect2);
extern DELPHI_PACKAGE bool __fastcall IERectInRect(const System::Types::TRect &aRect, const System::Types::TRect &InRect, double Allowance = 0.000000E+00);
extern DELPHI_PACKAGE bool __fastcall _RectXRect(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2);
extern DELPHI_PACKAGE int __fastcall _RectPRect(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2);
extern DELPHI_PACKAGE bool __fastcall IEPointInRect(int xx, int yy, int x1, int y1, int x2, int y2)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IEPointInRect(int xx, int yy, const System::Types::TRect &ARect)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IEPointInEllipse(int xx, int yy, const System::Types::TRect &EllipseBounds);
extern DELPHI_PACKAGE bool __fastcall _InRectO(int xx, int yy, int x1, int y1, int x2, int y2);
extern DELPHI_PACKAGE System::Types::TPoint __fastcall IEIntToControlPos(int Value);
extern DELPHI_PACKAGE int __fastcall IEControlPosAsInt(int X, int Y)/* overload */;
extern DELPHI_PACKAGE int __fastcall IEControlPosAsInt(System::TObject* Control)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IEPromptForColor(System::Uitypes::TColor &AColor, int PosX = 0x0, int PosY = 0x0)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IEPromptForColor(System::Uitypes::TColor &AColor, Hyiedefs::TRGB *Palette, const int Palette_High, int NumCol, int PosX = 0x0, int PosY = 0x0)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IEPromptForColor(System::Uitypes::TColor &AColor, Hyiedefs::PRGBROW Palette, int NumCol, int PosX = 0x0, int PosY = 0x0)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IEPromptForFont(Vcl::Graphics::TFont* Font, int PosX = 0x0, int PosY = 0x0);
extern DELPHI_PACKAGE bool __fastcall IEPromptForColor(System::Uitypes::TColor &AColor, System::TObject* AtControl)/* overload */;
extern DELPHI_PACKAGE int __fastcall FindExtInFileFilter(const System::UnicodeString Filter, const System::UnicodeString Ext, bool SaveDialog, bool ExcludeCommon = false);
extern DELPHI_PACKAGE int __fastcall FindFileTypeInFileFilter(const System::UnicodeString Filter, int FileType, bool SaveDialog);
extern DELPHI_PACKAGE System::UnicodeString __fastcall IEExecuteOpenDialog(const System::WideString Filter, const System::WideString Title = System::WideString(), bool MultiSelect = false, const System::WideString InitialFolder = System::WideString(), const System::WideString InitialFileName = System::WideString(), int FilterIndex = 0x0, int FilterFileType = 0xffffffff);
extern DELPHI_PACKAGE System::UnicodeString __fastcall IEExecuteOpenDialogEx(const System::WideString Filter, const System::WideString Title = System::WideString(), const System::WideString InitialFolder = System::WideString(), const System::WideString InitialFileName = System::WideString(), int FilterIndex = 0x0, int FilterFileType = 0xffffffff, System::Uitypes::TOpenOptions Options = (System::Uitypes::TOpenOptions() << System::Uitypes::TOpenOption::ofHideReadOnly << System::Uitypes::TOpenOption::ofEnableSizing ), System::Classes::TStrings* DestFiles = (System::Classes::TStrings*)(0x0));
extern DELPHI_PACKAGE System::UnicodeString __fastcall IEExecuteSaveDialog(const System::WideString Filter, const System::WideString Title = System::WideString(), const System::WideString InitialFolder = System::WideString(), const System::WideString InitialFileName = System::WideString(), int FilterIndex = 0x0, int FilterFileType = 0xffffffff, System::Uitypes::TOpenOptions Options = (System::Uitypes::TOpenOptions() << System::Uitypes::TOpenOption::ofHideReadOnly << System::Uitypes::TOpenOption::ofEnableSizing ));
extern DELPHI_PACKAGE HWND __fastcall IEFindHandle(System::Classes::TComponent* cmp);
extern DELPHI_PACKAGE System::UnicodeString __fastcall IEGetDLLFileVersion(const System::WideString filename);
extern DELPHI_PACKAGE void __fastcall IERightShadow(Vcl::Graphics::TCanvas* Canvas, Vcl::Graphics::TBitmap* DestBitmap, int x1, int y1, int x2, int y2, TIEShadowType st, System::Uitypes::TColor dstColor);
extern DELPHI_PACKAGE void __fastcall IEBottomShadow(Vcl::Graphics::TCanvas* Canvas, Vcl::Graphics::TBitmap* DestBitmap, int x1, int y1, int x2, int y2, TIEShadowType st, System::Uitypes::TColor dstColor);
extern DELPHI_PACKAGE void __fastcall IERectShadow(Vcl::Graphics::TBitmap* Bitmap, int x1, int y1, int x2, int y2, System::Uitypes::TColor dstColor);
extern DELPHI_PACKAGE void __fastcall IESaveStringToStream(System::Classes::TStream* Stream, const System::AnsiString ss)/* overload */;
extern DELPHI_PACKAGE void __fastcall IELoadStringFromStream(System::Classes::TStream* Stream, System::AnsiString &ss)/* overload */;
extern DELPHI_PACKAGE void __fastcall IESaveStringToStream(System::Classes::TStream* Stream, const System::UnicodeString ss)/* overload */;
extern DELPHI_PACKAGE void __fastcall IELoadStringFromStream(System::Classes::TStream* Stream, System::UnicodeString &ss)/* overload */;
extern DELPHI_PACKAGE void __fastcall IESaveStringToStreamW(System::Classes::TStream* Stream, const System::WideString ss);
extern DELPHI_PACKAGE void __fastcall IELoadStringFromStreamW(System::Classes::TStream* Stream, System::WideString &ss)/* overload */;
extern DELPHI_PACKAGE void __fastcall IELoadStringFromStreamW(System::Classes::TStream* Stream, System::UnicodeString &ss)/* overload */;
extern DELPHI_PACKAGE void __fastcall IESaveStringListToStream(System::Classes::TStream* Stream, System::Classes::TStringList* sl);
extern DELPHI_PACKAGE void __fastcall IELoadStringListFromStream(System::Classes::TStream* Stream, System::Classes::TStringList* sl);
extern DELPHI_PACKAGE void __fastcall IELoadFontFromStream(System::Classes::TStream* Stream, Vcl::Graphics::TFont* &Font);
extern DELPHI_PACKAGE void __fastcall IESaveFontToStream(System::Classes::TStream* Stream, Vcl::Graphics::TFont* const Font);
extern DELPHI_PACKAGE int __fastcall _GetNumCol(int BitsPerSample, int SamplesPerPixel);
extern DELPHI_PACKAGE void __fastcall IEBlendRGBA(Hyiedefs::TRGBA &src, Hyiedefs::TRGBA &dst, TIERenderOperation RenderOperation, int row);
extern DELPHI_PACKAGE void __fastcall IEBlend(Hyiedefs::TRGB &src, Hyiedefs::TRGB &dst, TIERenderOperation RenderOperation, int row);
extern DELPHI_PACKAGE bool __fastcall IEIsRemoteSession(void);
extern DELPHI_PACKAGE void __fastcall IEEncode64(System::Classes::TStream* SrcStream, System::Classes::TStream* DstStream, int linesize)/* overload */;
extern DELPHI_PACKAGE System::AnsiString __fastcall IEEncode64(System::PByte SrcBuffer, int SrcBufferLength, int linesize)/* overload */;
extern DELPHI_PACKAGE void __fastcall IEDecode64(System::Classes::TStream* SrcStream, System::Classes::TStream* DstStream)/* overload */;
extern DELPHI_PACKAGE Hyiedefs::TIEArrayOfByte __fastcall IEDecode64(System::AnsiString SrcString)/* overload */;
extern DELPHI_PACKAGE System::Types::TPoint __fastcall GetImageSizeWithinArea(int ImgWidth, int ImgHeight, int DestWidth, int DestHeight, bool bAllowStretching = true, TFitMethod FitMethod = (TFitMethod)(0x0));
extern DELPHI_PACKAGE double __fastcall IERectifiedRectangleAspectRatio(double x0, double y0, double x1, double y1, double x2, double y2, double x3, double y3, double cx, double cy);
extern DELPHI_PACKAGE System::Types::TRect __fastcall GetImageRectWithinArea(int ImgWidth, int ImgHeight, int DestWidth, int DestHeight, int HorzOffset = 0x0, int VertOffset = 0x0, bool bAllowStretching = true, bool bAllowShrinking = true, bool bCenterHorz = true, bool bCenterVert = true, int iAutoCropPercent = 0x0, TFitMethod FitMethod = (TFitMethod)(0x0))/* overload */;
extern DELPHI_PACKAGE System::Types::TRect __fastcall GetImageRectWithinArea(int ImgWidth, int ImgHeight, const System::Types::TRect &ADestRect, bool bAllowStretching = true, bool bAllowShrinking = true, bool bCenterHorz = true, bool bCenterVert = true, int iAutoCropPercent = 0x0, TFitMethod FitMethod = (TFitMethod)(0x0))/* overload */;
extern DELPHI_PACKAGE void __fastcall AdjustImageRectWithinArea(int ImgWidth, int ImgHeight, int &DrawLeft, int &DrawTop, int &DrawWidth, int &DrawHeight, bool bAllowStretching = true, bool bAllowShrinking = true, bool bCenterHorz = true, bool bCenterVert = true, int iAutoCropPercent = 0x0, TFitMethod FitMethod = (TFitMethod)(0x0));
extern DELPHI_PACKAGE System::Types::TRect __fastcall IEAdjustRectToAspectRatio(const System::Types::TRect &InRect, int ImgWidth, int ImgHeight, int DisplayWidth, int DisplayHeight, TFitMethod FitMethod = (TFitMethod)(0x0));
extern DELPHI_PACKAGE double __fastcall AngleToImageEnRotateAngle(double Angle);
extern DELPHI_PACKAGE double __fastcall ImageEnRotateAngleToAngle(double Angle);
extern DELPHI_PACKAGE double __fastcall IEGetReferenceAngle(double Angle);
extern DELPHI_PACKAGE void __fastcall IEFixAngle360(double &Angle)/* overload */;
extern DELPHI_PACKAGE void __fastcall IEFixAngle360(int &Angle)/* overload */;
extern DELPHI_PACKAGE void __fastcall IEFixAngle180(double &Angle)/* overload */;
extern DELPHI_PACKAGE void __fastcall IEFixAngle180(int &Angle)/* overload */;
extern DELPHI_PACKAGE int __fastcall IEBilinear(double needX, double needY, int centerValue, int rightValue, int bottomValue, int BottomRightValue);
extern DELPHI_PACKAGE double __fastcall GetNextZoomValue(double CurrentZoom, bool ZoomIn, double IdealZoom = 0.000000E+00);
extern DELPHI_PACKAGE void __fastcall IERGB2YCbCr(Hyiedefs::TRGB rgb, int &Y, int &Cb, int &Cr);
extern DELPHI_PACKAGE void __fastcall IEYCbCr2RGB(Hyiedefs::TRGB &rgb, int Y, int Cb, int Cr);
extern DELPHI_PACKAGE void * __fastcall IESystemAlloc(__int64 ASize);
extern DELPHI_PACKAGE void __fastcall IESystemFree(void *P);
extern DELPHI_PACKAGE void * __fastcall IEAutoAlloc(__int64 ASize, bool ForceSystem = false);
extern DELPHI_PACKAGE void __fastcall IEAutoFree(void *P);
extern DELPHI_PACKAGE void __fastcall IESilentGetMem(void *P, int Size);
extern DELPHI_PACKAGE System::ByteBool __fastcall IEMMXSupported(void);
extern DELPHI_PACKAGE void __fastcall IECreateOSXBackgroundPaper(Vcl::Graphics::TBitmap* bmp, int width, int height);
extern DELPHI_PACKAGE void __fastcall IECreateOSXBackgroundMetal(Vcl::Graphics::TBitmap* bmp, int width, int height);
extern DELPHI_PACKAGE System::Classes::TStringList* __fastcall IEEnumClipboardNames(void);
extern DELPHI_PACKAGE NativeUInt __fastcall IEGetClipboardDataByName(const System::UnicodeString name);
extern DELPHI_PACKAGE bool __fastcall IEOpenClipboard(void);
extern DELPHI_PACKAGE int __fastcall IEAlphaToOpacity(int Alpha);
extern DELPHI_PACKAGE int __fastcall IEOpacityToAlpha(int Opacity);
extern DELPHI_PACKAGE int __fastcall IEOpacityToAlphaD(double Opacity);
extern DELPHI_PACKAGE Hyiedefs::TDPoint __fastcall IECalcOrthogonalLinesIntersectingPoint(const Hyiedefs::TDPoint &FirstLinePoint, double FirstLineSlope, const Hyiedefs::TDPoint &SecondLinePoint);
extern DELPHI_PACKAGE bool __fastcall IECalcLinesIntersectionPoint(const Hyiedefs::TDPoint &p0, const Hyiedefs::TDPoint &p1, const Hyiedefs::TDPoint &p2, const Hyiedefs::TDPoint &p3, Hyiedefs::TDPoint &i);
extern DELPHI_PACKAGE bool __fastcall IECalcRectLineFirstIntersectionPointNI(Hyiedefs::TIEDPointArray rect, const Hyiedefs::TDPoint &LineStart, const Hyiedefs::TDPoint &LineEnd, Hyiedefs::TDPoint &i);
extern DELPHI_PACKAGE Hyiedefs::TDPoint __fastcall IECalcPolygonCentroid(Hyiedefs::TDPoint *polygon, const int polygon_High);
extern DELPHI_PACKAGE void __fastcall IERotatePoints(System::Types::TPoint *rpt, const int rpt_High, int PointCount, double Angle, int CenterX, int CenterY);
extern DELPHI_PACKAGE void __fastcall IERotateDPointsWithCenter(Hyiedefs::TDPoint *rpt, const int rpt_High, double Angle, double CenterX, double CenterY);
extern DELPHI_PACKAGE void __fastcall IERotateDPoints(Hyiedefs::TDPoint *rpt, const int rpt_High, double Angle);
extern DELPHI_PACKAGE void __fastcall IERotateTwoDPoints(double Angle, const Hyiedefs::TDPoint &P1, const Hyiedefs::TDPoint &P2, /* out */ Hyiedefs::TDPoint &OutP1, /* out */ Hyiedefs::TDPoint &OutP2);
extern DELPHI_PACKAGE void __fastcall IERotatePoint(int &px, int &py, double Angle, int CenterX = 0x0, int CenterY = 0x0);
extern DELPHI_PACKAGE System::Types::TSize __fastcall IERotatePoint2(int px, int py, double Angle, int CenterX = 0x0, int CenterY = 0x0);
extern DELPHI_PACKAGE void __fastcall IERotateDPoint(double &px, double &py, double Angle, double CenterX, double CenterY);
extern DELPHI_PACKAGE int __fastcall IERotatePointX(int px, int py, double Angle, int CenterX = 0x0, int CenterY = 0x0);
extern DELPHI_PACKAGE int __fastcall IERotatePointY(int px, int py, double Angle, int CenterX = 0x0, int CenterY = 0x0);
extern DELPHI_PACKAGE void __fastcall IECalcRotatedRectBoundingBox(const Hyiedefs::TIEDRectangle &Rectangle, const Hyiedefs::TDPoint &RotationCenter, double RotationAngle, /* out */ Hyiedefs::TIEDRectangle &bbox);
extern DELPHI_PACKAGE void __fastcall IECalcRotatedBitmapSize(int Width, int Height, const Hyiedefs::TDPoint &RotationCenter, double RotationAngle, /* out */ int &NewWidth, /* out */ int &NewHeight)/* overload */;
extern DELPHI_PACKAGE Hyiedefs::TDPoint __fastcall IECalcRotatedBitmapSize(int Width, int Height, double RotationAngle)/* overload */;
extern DELPHI_PACKAGE double __fastcall IECalcRotatedAR(double AR, double Angle);
extern DELPHI_PACKAGE System::Types::TPoint __fastcall IECalcRotatedBitmapSizePt(int Width, int Height, double RotationAngle);
extern DELPHI_PACKAGE void __fastcall IERotateBits(Hyiedefs::TIEArrayOfByte Bits, int Width, int Height, int RowAlignment, const Hyiedefs::TDPoint &RotationCenter, double RotationAngle, int Background, bool MaintainOriginalSize, /* out */ Hyiedefs::TIEArrayOfByte &outBits, /* out */ int &outWidth, /* out */ int &outHeight);
extern DELPHI_PACKAGE HICON __fastcall IECreateRotatedCursor(int CursorIntResource, double RotationAngle);
extern DELPHI_PACKAGE void __fastcall IEGetPointsRange(System::Types::TPoint *rpt, const int rpt_High, int PointCount, /* out */ int &MinX, /* out */ int &MinY, /* out */ int &MaxX, /* out */ int &MaxY);
extern DELPHI_PACKAGE void __fastcall IEGetDPointsRange(Hyiedefs::TDPoint *rpt, const int rpt_High, int PointCount, /* out */ double &MinX, /* out */ double &MinY, /* out */ double &MaxX, /* out */ double &MaxY);
extern DELPHI_PACKAGE void __fastcall IEScalePoints(System::Types::TPoint *rpt, const int rpt_High, int PointCount, int MinX, int MinY, int MaxX, int MaxY, bool MaintainAR = false);
extern DELPHI_PACKAGE void __fastcall IEScaleDPoints(Hyiedefs::TDPoint *rpt, const int rpt_High, int PointCount, double MinX, double MinY, double MaxX, double MaxY, bool MaintainAR = false);
extern DELPHI_PACKAGE bool __fastcall IEIsDPointInPoly(double x, double y, Hyiedefs::TDPoint *poly, const int poly_High);
extern DELPHI_PACKAGE bool __fastcall IEIsPointInPoly(int x, int y, System::Types::TPoint *poly, const int poly_High);
extern DELPHI_PACKAGE bool __fastcall IEIsPointInPoly2(int x, int y, Hyiedefs::PPointArray PolyPoints, int PolyPointsCount, int ToSubX, int ToSubY, int ToAddX, int ToAddY, double ToMulX, double ToMulY);
extern DELPHI_PACKAGE void __fastcall IECenterRectInRect(int OuterRectX1, int OuterRectY1, int OuterRectX2, int OuterRectY2, int &InnerRectX1, int &InnerRectY1, int &InnerRectX2, int &InnerRectY2);
extern DELPHI_PACKAGE void __fastcall CalcLineWithinRect(const System::Types::TRect &R, int Angle, /* out */ System::Types::TPoint &Pt1, /* out */ System::Types::TPoint &Pt2);
extern DELPHI_PACKAGE System::Types::TPoint __fastcall OffsetPoint(const System::Types::TPoint &Pt, double Dist, double Angle)/* overload */;
extern DELPHI_PACKAGE System::Types::TPoint __fastcall OffsetPoint(const System::Types::TPoint &Pt, double DistX, double DistY, double Angle)/* overload */;
extern DELPHI_PACKAGE Hyiedefs::TDPoint __fastcall OffsetPoint(const Hyiedefs::TDPoint &Pt, double DistX, double DistY, double Angle)/* overload */;
extern DELPHI_PACKAGE System::Types::TPoint __fastcall FindPointOnRectEdge(const System::Types::TRect &Rect, double Angle);
extern DELPHI_PACKAGE bool __fastcall IEIsLeftMouseButtonPressed(void);
extern DELPHI_PACKAGE System::AnsiString __fastcall IERGBToStr(Hyiedefs::TRGB rgb);
extern DELPHI_PACKAGE TIEURLType __fastcall IEGetURLTypeW(const System::WideString URL);
extern DELPHI_PACKAGE TIEURLType __fastcall IEGetURLTypeA(const System::AnsiString URL);
extern DELPHI_PACKAGE double __fastcall IEDistPoint2Ellipse(int x, int y, int x1, int y1, int x2, int y2, bool filled, int penWidth);
extern DELPHI_PACKAGE double __fastcall IEDist2Box(int x, int y, int x1, int y1, int x2, int y2, bool filled, int penWidth);
extern DELPHI_PACKAGE double __fastcall IEDistParallelLines(const Hyiedefs::TDPoint &FirstLinePointA, const Hyiedefs::TDPoint &FirstLinePointB, const Hyiedefs::TDPoint &SecondLinePoint);
extern DELPHI_PACKAGE void __fastcall IEConvertPointsToCurveAngles(const Hyiedefs::TDPoint &StartPt, const Hyiedefs::TDPoint &EndPt, double RadiusMult, /* out */ double &StartAngle, /* out */ double &SweepAngle, /* out */ double &Radius)/* overload */;
extern DELPHI_PACKAGE void __fastcall IEConvertPointsToCurveAngles(const System::Types::TPoint &StartPt, const System::Types::TPoint &EndPt, double RadiusMult, /* out */ double &StartAngle, /* out */ double &SweepAngle, /* out */ double &Radius)/* overload */;
extern DELPHI_PACKAGE double __fastcall IESignedTriangleArea(const Hyiedefs::TDPoint &Point1, const Hyiedefs::TDPoint &Point2, const Hyiedefs::TDPoint &Point3);
extern DELPHI_PACKAGE void __fastcall IEOrthogonalTranslate(const Hyiedefs::TDPoint &OrigSegmentA, const Hyiedefs::TDPoint &OrigSegmentB, const Hyiedefs::TDPoint &Point, /* out */ double &OffsetX, /* out */ double &OffsetY);
extern DELPHI_PACKAGE System::AnsiString __fastcall IETrim(const System::AnsiString v);
extern DELPHI_PACKAGE System::UnicodeString __fastcall IEExtractFileExtS(const System::UnicodeString FileName, bool includeDot = true);
extern DELPHI_PACKAGE System::AnsiString __fastcall IEExtractFileExtA(const System::AnsiString FileName, bool includeDot = true);
extern DELPHI_PACKAGE System::WideString __fastcall IEExtractFileExtW(const System::WideString FileName, bool includeDot = true);
extern DELPHI_PACKAGE System::UnicodeString __fastcall IEAddBackSlash(const System::UnicodeString Path);
extern DELPHI_PACKAGE bool __fastcall IEFilenameInExtensions(const System::UnicodeString sFileName, const System::UnicodeString sExtensions);
extern DELPHI_PACKAGE bool __fastcall IEFilenameIsExt(const System::UnicodeString FileName, const System::UnicodeString Ext);
extern DELPHI_PACKAGE bool __fastcall IEFileExtInExtensions(System::UnicodeString sFileExt, const System::UnicodeString sExtensions);
extern DELPHI_PACKAGE System::AnsiString __fastcall IEUpperCase(const System::AnsiString v);
extern DELPHI_PACKAGE System::AnsiString __fastcall IELowerCase(const System::AnsiString v);
extern DELPHI_PACKAGE System::AnsiString __fastcall IEIntToStr(int v);
extern DELPHI_PACKAGE System::UnicodeString __fastcall IEFormat(const System::UnicodeString Format_, const System::TVarRec *Args, const int Args_High);
extern DELPHI_PACKAGE System::AnsiString __fastcall IEFormatA(const System::UnicodeString Format_, const System::TVarRec *Args, const int Args_High);
extern DELPHI_PACKAGE System::AnsiString __fastcall IEIntToFormattedStr(int v, int iMaxDigitsOfPrecision = 0x0);
extern DELPHI_PACKAGE System::UnicodeString __fastcall IEBytesToStr(int v, int iThreshold = 0x19000);
extern DELPHI_PACKAGE System::UnicodeString __fastcall IEBytesToStr2(__int64 iBytes);
extern DELPHI_PACKAGE int __fastcall IEStrToIntDef(const System::AnsiString s, int def);
extern DELPHI_PACKAGE System::AnsiString __fastcall IECopy(const System::AnsiString S, int Index, int Count);
extern DELPHI_PACKAGE System::AnsiString __fastcall IEFloatToStrFA(System::Extended Value, System::Sysutils::TFloatFormat Format, int Precision, int Digits);
extern DELPHI_PACKAGE System::UnicodeString __fastcall IEFloatToStrFS(System::Extended Value, System::Sysutils::TFloatFormat Format, int Precision, int Digits);
extern DELPHI_PACKAGE System::AnsiString __fastcall IEIntToHex(int Value, int Digits);
extern DELPHI_PACKAGE int __fastcall IEPos(const System::AnsiString Substr, const System::AnsiString S);
extern DELPHI_PACKAGE int __fastcall IEPosEx(const System::UnicodeString SubStr, const System::UnicodeString S, unsigned Offset = (unsigned)(0x1));
extern DELPHI_PACKAGE System::UnicodeString __fastcall IEExtractFileDrive(const System::UnicodeString FileName);
extern DELPHI_PACKAGE System::AnsiString __fastcall IEExtractFilePathA(const System::AnsiString FileName);
extern DELPHI_PACKAGE System::WideString __fastcall IEExtractFilePathW(const System::WideString FileName);
extern DELPHI_PACKAGE System::WideString __fastcall IEExtractFileNameW(const System::WideString FileName);
extern DELPHI_PACKAGE System::UnicodeString __fastcall IEExtractFileNameWithoutExt(const System::UnicodeString FileName);
extern DELPHI_PACKAGE char * __fastcall IEStrDup(char * s);
extern DELPHI_PACKAGE System::WideChar * __fastcall IEStrDupW(System::WideChar * s);
extern DELPHI_PACKAGE bool __fastcall IEFileExists(const System::UnicodeString FileName);
extern DELPHI_PACKAGE bool __fastcall IEFileExistsW(const System::WideString FileName);
extern DELPHI_PACKAGE void __fastcall IEDrawGrayedOut(Vcl::Graphics::TCanvas* Canvas, int XDst, int YDst, int WidthDst, int HeightDst, int SX1, int SY1, int SX2, int SY2);
extern DELPHI_PACKAGE __int64 __fastcall IECopyFrom(System::Classes::TStream* Dest, System::Classes::TStream* Source, __int64 Count);
extern DELPHI_PACKAGE void __fastcall IEDecimalToFraction(double value, int &numerator, int &denominator, double accuracy = 5.000000E-09);
extern DELPHI_PACKAGE void __fastcall IECopyTList(System::Classes::TList* source, System::Classes::TList* dest);
extern DELPHI_PACKAGE NativeInt __fastcall IESendMessageTimeout(HWND hWnd, unsigned Msg, NativeUInt wParam, NativeInt lParam, unsigned fuFlags, unsigned uTimeout, void * lpdwResult);
extern DELPHI_PACKAGE int __fastcall IETextWidthW(Vcl::Graphics::TCanvas* Canvas, const System::WideString Text);
extern DELPHI_PACKAGE int __fastcall IETextHeightW(Vcl::Graphics::TCanvas* Canvas, const System::WideString Text);
extern DELPHI_PACKAGE System::WideString __fastcall IETruncateStr(const System::WideString Caption, TIEMTruncSide TruncSide, Vcl::Graphics::TCanvas* ACanvas, int iMaxWidth);
extern DELPHI_PACKAGE System::UnicodeString __fastcall IEConcatStr(const System::UnicodeString Value1, const System::UnicodeString Value2, const System::UnicodeString Delimiter);
extern DELPHI_PACKAGE System::TDateTime __fastcall IEFileTimeToDateTime(const _FILETIME &ft);
extern DELPHI_PACKAGE _FILETIME __fastcall IEDateTimeToFileTime(System::TDateTime dt);
extern DELPHI_PACKAGE System::TDateTime __fastcall IEDateTimeToUTC(System::TDateTime dt);
extern DELPHI_PACKAGE __int64 __fastcall IEGetFileSize(const System::UnicodeString FileName);
extern DELPHI_PACKAGE bool __fastcall IEIsFolder(const System::UnicodeString FilePath);
extern DELPHI_PACKAGE __int64 __fastcall IELargeFileSize(unsigned nFileSizeHigh, unsigned nFileSizeLow);
extern DELPHI_PACKAGE bool __fastcall IEGetFileDetails(const System::UnicodeString sFilename, /* out */ __int64 &iFileSizeBytes, /* out */ System::TDateTime &dtCreateDate, /* out */ System::TDateTime &dtEditDate);
extern DELPHI_PACKAGE bool __fastcall IEFileSetDate(const System::UnicodeString sFilename, System::TDateTime DateTime);
extern DELPHI_PACKAGE System::UnicodeString __fastcall IEFloatToFormatString(const System::Extended Value, const int DecimalCount, const bool StripZeros = true);
extern DELPHI_PACKAGE Hyiedefs::TRGB __fastcall IEVisionBGR8ToTRGB(Ievision::TIEVisionBGR8 visionBGR8);
extern DELPHI_PACKAGE Ievision::TIEVisionBGR8 __fastcall IETRGBToVisionBGR8(Hyiedefs::TRGB rgb);
extern DELPHI_PACKAGE void __fastcall IEVisionConvPixelFormat(TIEPixelFormat PixelFormat, /* out */ Ievision::TIEVisionChannelFormat &channelFormat, /* out */ int &channelCount)/* overload */;
extern DELPHI_PACKAGE TIEPixelFormat __fastcall IEVisionConvPixelFormat(Ievision::TIEVisionChannelFormat channelFormat, int channelCount)/* overload */;
extern DELPHI_PACKAGE void __fastcall IESwap(int &a, int &b)/* overload */;
extern DELPHI_PACKAGE void __fastcall IESwap(double &a, double &b)/* overload */;
extern DELPHI_PACKAGE void __fastcall IESwap(bool &a, bool &b)/* overload */;
extern DELPHI_PACKAGE void __fastcall IESwap(Hyiedefs::TIELayerMagnification &a, Hyiedefs::TIELayerMagnification &b)/* overload */;
extern DELPHI_PACKAGE void __fastcall IESwap(TIERenderOperation &a, TIERenderOperation &b)/* overload */;
extern DELPHI_PACKAGE void __fastcall IESwap(void * &a, void * &b)/* overload */;
extern DELPHI_PACKAGE void __fastcall IESwap(Hyiedefs::TResampleFilter &a, Hyiedefs::TResampleFilter &b)/* overload */;
extern DELPHI_PACKAGE void __fastcall IESwap(System::AnsiString &a, System::AnsiString &b)/* overload */;
extern DELPHI_PACKAGE void __fastcall IESwap(System::UnicodeString &a, System::UnicodeString &b)/* overload */;
extern DELPHI_PACKAGE void __fastcall IESwap(GUID &a, GUID &b)/* overload */;
extern DELPHI_PACKAGE void __fastcall IESwap(Hyiedefs::TRGB &a, Hyiedefs::TRGB &b)/* overload */;
extern DELPHI_PACKAGE void __fastcall IESwap(Hyiedefs::TIEArrayOfTRGB &a, Hyiedefs::TIEArrayOfTRGB &b)/* overload */;
extern DELPHI_PACKAGE void __fastcall IESwap(System::Types::TRect &a, System::Types::TRect &b)/* overload */;
extern DELPHI_PACKAGE void __fastcall IESwap(Hyiedefs::TIEShape &a, Hyiedefs::TIEShape &b)/* overload */;
extern DELPHI_PACKAGE void __fastcall IESwap(System::Uitypes::TColor &a, System::Uitypes::TColor &b)/* overload */;
extern DELPHI_PACKAGE void __fastcall IESwap(Vcl::Graphics::TFont* &a, Vcl::Graphics::TFont* &b)/* overload */;
extern DELPHI_PACKAGE void __fastcall IESwap(System::Types::TPoint &a, System::Types::TPoint &b)/* overload */;
extern DELPHI_PACKAGE void __fastcall IESwap(Hyiedefs::TDPoint &a, Hyiedefs::TDPoint &b)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IEIsEqual(const System::Types::TPoint &p1, const System::Types::TPoint &p2)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IEIsEqual(const System::Types::TRect &r1, const System::Types::TRect &r2)/* overload */;
extern DELPHI_PACKAGE unsigned __fastcall IESetupTimeout(void);
extern DELPHI_PACKAGE bool __fastcall IEIsTimeoutExpired(unsigned startTime, unsigned timeout);
extern DELPHI_PACKAGE Hyiedefs::TIERectangle __fastcall IERectangle(int x, int y, int width, int height)/* overload */;
extern DELPHI_PACKAGE Hyiedefs::TIERectangle __fastcall IERectangle(const System::Types::TRect &Rect)/* overload */;
extern DELPHI_PACKAGE System::Types::TRect __fastcall IERectangleToRect(const Hyiedefs::TIERectangle &Rect);
extern DELPHI_PACKAGE void __fastcall IEInitialize_gestures(void);
extern DELPHI_PACKAGE void __fastcall IEFinalize_gestures(void);
extern DELPHI_PACKAGE bool __fastcall IEHasGestures(void);
extern DELPHI_PACKAGE void __fastcall IEBezier2D4Controls(const System::Types::TPoint &p0, const System::Types::TPoint &c0, const System::Types::TPoint &c1, const System::Types::TPoint &p1, Hyiedefs::PPointArray pResultArray, int nSteps);
extern DELPHI_PACKAGE bool __fastcall IEDrawGradient(const System::Types::TRect &R, Vcl::Graphics::TCanvas* Canvas, System::Uitypes::TColor ColorStart, System::Uitypes::TColor ColorStop, bool bVertical);
extern DELPHI_PACKAGE void __fastcall IEPixelFormatToBPSAndSPP(TIEPixelFormat PixelFormat, /* out */ int &iBitsPerSample, /* out */ int &iSamplesPerPixel);
extern DELPHI_PACKAGE void __fastcall BitCountToBPSAndSPP(int BitCount, bool bAllow32bit, /* out */ int &iBitsPerSample, /* out */ int &iSamplesPerPixel);
extern DELPHI_PACKAGE Hyiedefs::TProgressRec __fastcall ProgressRec(System::TObject* Sender, Hyiedefs::TIEProgressEvent OnProgress, bool &bAborting)/* overload */;
extern DELPHI_PACKAGE Hyiedefs::TProgressRec __fastcall ProgressRec(System::TObject* Sender, Hyiedefs::TIEProgressEvent OnProgress, Hyiedefs::pboolean pAborting = (Hyiedefs::pboolean)(0x0))/* overload */;
extern DELPHI_PACKAGE Hyiedefs::TProgressRec __fastcall NullProgressRec(bool &bAborting, bool bResetAborting = true)/* overload */;
extern DELPHI_PACKAGE Hyiedefs::TProgressRec __fastcall NullProgressRec(Hyiedefs::pboolean pAborting = (Hyiedefs::pboolean)(0x0), bool bResetAborting = true)/* overload */;
extern DELPHI_PACKAGE bool __fastcall DoProgress(Hyiedefs::TProgressRec &Progress, int Perc)/* overload */;
extern DELPHI_PACKAGE bool __fastcall DoProgress(Hyiedefs::TProgressRec &Progress, int Perc, int &LastPerc)/* overload */;
extern DELPHI_PACKAGE void __fastcall IESetStringA(System::AnsiString &S, char * Buffer, int Length);
extern DELPHI_PACKAGE System::Types::TRect __fastcall IECreateRect(int Left, int Top, int Right, int Bottom);
extern DELPHI_PACKAGE bool __fastcall IEIsNullRect(const System::Types::TRect &R);
extern DELPHI_PACKAGE void __fastcall IEInitializeImageEn(void);
extern DELPHI_PACKAGE void __fastcall IEFinalizeImageEn(void);
extern DELPHI_PACKAGE void __fastcall IEPrintLogWrite(const System::UnicodeString ss);
extern DELPHI_PACKAGE bool __fastcall AppendToLogFile(const System::UnicodeString Filename, const System::UnicodeString s, bool Reset = false);
extern DELPHI_PACKAGE void __fastcall iedswap(double &d1, double &d2);
extern DELPHI_PACKAGE void __fastcall i64swap(__int64 &v1, __int64 &v2);
extern DELPHI_PACKAGE Hyiedefs::TCMYK __fastcall CreateCMYK(System::Byte c, System::Byte m, System::Byte y, System::Byte k);
extern DELPHI_PACKAGE Hyiedefs::TRGB __fastcall CreateRGB(System::Byte r, System::Byte g, System::Byte b);
extern DELPHI_PACKAGE Hyiedefs::TRGB48 __fastcall CreateRGB48(System::Word r, System::Word g, System::Word b);
extern DELPHI_PACKAGE Hyiedefs::TRGBA __fastcall CreateRGBA(System::Byte r, System::Byte g, System::Byte b, System::Byte a);
extern DELPHI_PACKAGE Hyiedefs::TRGB __fastcall CreateRGBFromInt(int r, int g, int b);
extern DELPHI_PACKAGE System::Uitypes::TColor __fastcall TRGB2TColor(Hyiedefs::TRGB rgb);
extern DELPHI_PACKAGE System::Uitypes::TColor __fastcall RGB2TColor(int r, int g, int b);
extern DELPHI_PACKAGE int __fastcall IEColorToRGBVal(System::Uitypes::TColor Color);
extern DELPHI_PACKAGE Hyiedefs::TRGB __fastcall TColor2TRGB(System::Uitypes::TColor cl);
extern DELPHI_PACKAGE Hyiedefs::TRGBA __fastcall TColor2TRGBA(System::Uitypes::TColor cl, int transparency)/* overload */;
extern DELPHI_PACKAGE Hyiedefs::TRGBA __fastcall TRGB2TRGBA(int rgb, int Transparency = 0xff)/* overload */;
extern DELPHI_PACKAGE Hyiedefs::TRGBA __fastcall TRGB2TRGBA(Hyiedefs::TRGB rgb, int Transparency = 0xff)/* overload */;
extern DELPHI_PACKAGE Hyiedefs::TRGB __fastcall TRGBA2TRGB(Hyiedefs::TRGBA RGBA);
extern DELPHI_PACKAGE Hyiedefs::TRGBA __fastcall TColor2TRGBA(System::Uitypes::TColor cl)/* overload */;
extern DELPHI_PACKAGE Hyiedefs::TRGB __fastcall IEApplyAlphaToColor(Hyiedefs::TRGB rgb, int Alpha)/* overload */;
extern DELPHI_PACKAGE System::Uitypes::TColor __fastcall IEApplyAlphaToColor(System::Uitypes::TColor Color, int Alpha)/* overload */;
extern DELPHI_PACKAGE double __fastcall dmin(double v1, double v2);
extern DELPHI_PACKAGE double __fastcall dmax(double v1, double v2);
extern DELPHI_PACKAGE unsigned __fastcall dwmax(unsigned v1, unsigned v2);
extern DELPHI_PACKAGE int __fastcall imax(int v1, int v2);
extern DELPHI_PACKAGE int __fastcall imin(int v1, int v2);
extern DELPHI_PACKAGE unsigned __int64 __fastcall u64min(unsigned __int64 v1, unsigned __int64 v2);
extern DELPHI_PACKAGE __int64 __fastcall i64min(__int64 v1, __int64 v2);
extern DELPHI_PACKAGE __int64 __fastcall i64max(__int64 v1, __int64 v2);
extern DELPHI_PACKAGE int __fastcall ilimit(int vv, int min, int max);
extern DELPHI_PACKAGE double __fastcall dlimit(double vv, double min, double max);
extern DELPHI_PACKAGE int __fastcall blimit(int vv);
extern DELPHI_PACKAGE System::Word __fastcall wlimit(int vv);
extern DELPHI_PACKAGE void __fastcall iswap(int &B1, int &B2);
extern DELPHI_PACKAGE void __fastcall dwswap(unsigned &B1, unsigned &B2);
extern DELPHI_PACKAGE void __fastcall dswap(double &v1, double &v2);
extern DELPHI_PACKAGE bool __fastcall EqualRGB(Hyiedefs::TRGB rgb1, Hyiedefs::TRGB rgb2);
extern DELPHI_PACKAGE Hyiedefs::TRGB __fastcall OffsetRGB(Hyiedefs::TRGB rgb, int Offset);
extern DELPHI_PACKAGE System::Uitypes::TColor __fastcall IEAverageColor(System::Uitypes::TColor c1, System::Uitypes::TColor c2)/* overload */;
extern DELPHI_PACKAGE Hyiedefs::TRGB __fastcall IEAverageColor(Hyiedefs::TRGB rgb1, Hyiedefs::TRGB rgb2)/* overload */;
extern DELPHI_PACKAGE System::Uitypes::TColor __fastcall IERandomColor(bool PastelSet = false);
extern DELPHI_PACKAGE void __fastcall bswap(System::Byte &B1, System::Byte &B2);
extern DELPHI_PACKAGE void __fastcall OrdCor(int &x1, int &y1, int &x2, int &y2);
extern DELPHI_PACKAGE void __fastcall ColorToHSL(System::Uitypes::TColor cl, double &Hue, double &Sat, double &Lum);
extern DELPHI_PACKAGE void __fastcall RGB2HSL(Hyiedefs::TRGB px, double &Hue, double &Sat, double &Lum);
extern DELPHI_PACKAGE System::Uitypes::TColor __fastcall HSLToColor(double Hue, double Sat, double Lum);
extern DELPHI_PACKAGE void __fastcall HSL2RGB(Hyiedefs::TRGB &px, double Hue, double Sat, double Lum);
extern DELPHI_PACKAGE void __fastcall HSV2RGB(Hyiedefs::TRGB &px, int H, int S, int V);
extern DELPHI_PACKAGE System::Uitypes::TColor __fastcall HSVToColor(int h, int s, int v);
extern DELPHI_PACKAGE void __fastcall RGB2HSV(Hyiedefs::TRGB RGB, int &h, int &s, int &v);
extern DELPHI_PACKAGE void __fastcall ColorToHSV(System::Uitypes::TColor cl, int &h, int &s, int &v);
extern DELPHI_PACKAGE System::UnicodeString __fastcall ColorToHex(System::Uitypes::TColor Color);
extern DELPHI_PACKAGE void __fastcall YUV2RGB(int y, int u, int v, Hyiedefs::TRGB &RGB);
extern DELPHI_PACKAGE void __fastcall IERGBtoHSB(const System::Byte cRed, const System::Byte cGreen, const System::Byte cBlue, System::Word &H, System::Word &S, System::Word &B);
extern DELPHI_PACKAGE void __fastcall IEHSBtoRGB(const System::Word H, const System::Word S, const System::Word B, System::Byte &cRed, System::Byte &cGreen, System::Byte &cBlue);
extern DELPHI_PACKAGE void __fastcall IEInitialize_hyieutils(void);
extern DELPHI_PACKAGE void __fastcall IEFinalize_hyieutils(void);
}	/* namespace Hyieutils */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_HYIEUTILS)
using namespace Hyieutils;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// HyieutilsHPP
