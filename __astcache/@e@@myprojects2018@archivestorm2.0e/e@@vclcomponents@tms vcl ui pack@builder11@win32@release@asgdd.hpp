// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'asgdd.pas' rev: 35.00 (Windows)

#ifndef AsgddHPP
#define AsgddHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <Winapi.ActiveX.hpp>
#include <Vcl.StdCtrls.hpp>
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <System.SysUtils.hpp>
#include <Vcl.Forms.hpp>
#include <Winapi.ShlObj.hpp>
#include <Vcl.Dialogs.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

namespace Asgdd
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TEnumFormats;
class DELPHICLASS TASGDropTarget;
class DELPHICLASS TASGDropSource;
class DELPHICLASS TSourceDataObject;
class DELPHICLASS TSourceEnumFormatEtc;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TEnumFormats : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	_di_IDataObject FDataObject;
	_di_IEnumFORMATETC FEnumerator;
	tagFORMATETC FFormatEtc;
	bool FValid;
	int FCount;
	System::Classes::TStringList* FFiles;
	void __fastcall SetDataObject(_di_IDataObject Value);
	int __fastcall SomeInt(System::Word Format);
	System::UnicodeString __fastcall SomeText(System::Word Format);
	System::UnicodeString __fastcall SomeRTF(System::Word Format);
	System::UnicodeString __fastcall SomeURI(System::Word Format);
	bool __fastcall SomeFiles(System::Classes::TStringList* &Files);
	System::Classes::TMemoryStream* __fastcall SomeStream(System::Word Format);
	System::UnicodeString __fastcall SaveTempFile(const _di_IDataObject DataObj, int AIndex, System::UnicodeString AFileName);
	int __fastcall SomeFileContents(const _di_IDataObject DataObj, System::Classes::TStringList* &Files);
	int __fastcall GetAspect();
	void __fastcall SetAspect(int value);
	System::Word __fastcall GetcfFormat();
	void __fastcall SetcfFormat(System::Word value);
	int __fastcall GetlIndex();
	void __fastcall SetlIndex(int value);
	int __fastcall GetTymed();
	void __fastcall SetTymed(int value);
	
public:
	__fastcall TEnumFormats(_di_IDataObject DataObject);
	__fastcall virtual ~TEnumFormats();
	bool __fastcall Reset();
	bool __fastcall Next();
	bool __fastcall HasFormat(System::Word ClipFormat);
	NativeUInt __fastcall Handle(int Tymed);
	NativeUInt __fastcall GlobalHandle();
	bool __fastcall HasText();
	bool __fastcall HasFile();
	bool __fastcall HasFileContents();
	bool __fastcall HasRTF();
	bool __fastcall HasCol();
	bool __fastcall HasURL();
	bool __fastcall HasURI();
	bool __fastcall HasGridCells();
	System::UnicodeString __fastcall Text();
	System::UnicodeString __fastcall RTF();
	System::UnicodeString __fastcall URI();
	System::Classes::TMemoryStream* __fastcall Stream();
	int __fastcall Col();
	__property int Count = {read=FCount, nodefault};
	__property _di_IDataObject DataObject = {read=FDataObject, write=SetDataObject};
	__property bool Valid = {read=FValid, nodefault};
	__property tagFORMATETC FormatEtc = {read=FFormatEtc};
	__property int Aspect = {read=GetAspect, write=SetAspect, nodefault};
	__property System::Word Format = {read=GetcfFormat, write=SetcfFormat, nodefault};
	__property int Index = {read=GetlIndex, write=SetlIndex, nodefault};
	__property int Medium = {read=GetTymed, write=SetTymed, nodefault};
};

#pragma pack(pop)

enum DECLSPEC_DENUM TDropFormat : unsigned char { dfText, dfFile, dfCol, dfRTF, dfURL, dfGridCells, dfURI, dfFileContents };

typedef System::Set<TDropFormat, TDropFormat::dfText, TDropFormat::dfFileContents> TDropFormats;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TASGDropTarget : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
public:
	HRESULT __stdcall DragEnter(const _di_IDataObject DataObj, int grfKeyState, System::Types::TPoint pt, int &dwEffect);
	HRESULT __stdcall DragOver(int grfKeyState, System::Types::TPoint pt, int &dwEffect);
	HRESULT __stdcall DragLeave();
	HRESULT __stdcall Drop(const _di_IDataObject DataObj, int grfKeyState, System::Types::TPoint pt, int &dwEffect);
	
private:
	bool FOk;
	bool FIsURI;
	bool FAcceptText;
	bool FAcceptFiles;
	bool FAcceptCols;
	bool FAcceptURLs;
	TDropFormats FDropFormats;
	
public:
	__fastcall TASGDropTarget();
	virtual bool __fastcall DropText(const System::Types::TPoint &pt, System::UnicodeString s) = 0 ;
	virtual void __fastcall DropStream(const System::Types::TPoint &pt, System::Classes::TMemoryStream* ms) = 0 ;
	virtual void __fastcall DropCol(const System::Types::TPoint &pt, int col) = 0 ;
	virtual void __fastcall DropRTF(const System::Types::TPoint &pt, System::UnicodeString s) = 0 ;
	virtual void __fastcall DropFiles(const System::Types::TPoint &pt, System::Classes::TStrings* files) = 0 ;
	virtual void __fastcall DropFileContents(const System::Types::TPoint &pt) = 0 ;
	virtual void __fastcall DropURL(const System::Types::TPoint &pt, System::UnicodeString s) = 0 ;
	virtual void __fastcall DragMouseMove(const System::Types::TPoint &pt, bool &Allow, TDropFormats DropFormats);
	virtual void __fastcall DragMouseEnter() = 0 ;
	virtual void __fastcall DragMouseLeave() = 0 ;
	__property bool AcceptText = {read=FAcceptText, write=FAcceptText, nodefault};
	__property bool AcceptFiles = {read=FAcceptFiles, write=FAcceptFiles, nodefault};
	__property bool AcceptCols = {read=FAcceptCols, write=FAcceptCols, nodefault};
	__property bool AcceptURLs = {read=FAcceptURLs, write=FAcceptURLs, nodefault};
	__property TDropFormats DropFormats = {read=FDropFormats, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TASGDropTarget() { }
	
private:
	void *__IDropTarget;	// IDropTarget 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {00000122-0000-0000-C000-000000000046}
	operator _di_IDropTarget()
	{
		_di_IDropTarget intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IDropTarget*(void) { return (IDropTarget*)&__IDropTarget; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TASGDropSource : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	bool FNoAccept;
	
protected:
	virtual void __fastcall DragDropStop();
	
public:
	__fastcall TASGDropSource();
	HRESULT __stdcall QueryContinueDrag(System::LongBool fEscapePressed, int grfKeyState);
	HRESULT __stdcall GiveFeedback(int dwEffect);
	virtual void __fastcall CurrentEffect(int dwEffect);
	virtual void __fastcall QueryDrag();
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TASGDropSource() { }
	
private:
	void *__IDropSource;	// IDropSource 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {00000121-0000-0000-C000-000000000046}
	operator _di_IDropSource()
	{
		_di_IDropSource intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IDropSource*(void) { return (IDropSource*)&__IDropSource; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSourceDataObject : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	System::UnicodeString textdata;
	System::UnicodeString rtfdata;
	int scolidx;
	System::Classes::TMemoryStream* memstr;
	
public:
	__fastcall TSourceDataObject(const System::UnicodeString stxt, const System::UnicodeString srtf, int sidx, System::Classes::TMemoryStream* ms);
	HRESULT __stdcall GetData(const tagFORMATETC &formatetc, /* out */ tagSTGMEDIUM &medium);
	HRESULT __stdcall GetDataHere(const tagFORMATETC &formatetc, /* out */ tagSTGMEDIUM &medium);
	HRESULT __stdcall QueryGetData(const tagFORMATETC &formatetc);
	HRESULT __stdcall SetData(const tagFORMATETC &formatetc, tagSTGMEDIUM &medium, System::LongBool fRelease);
	HRESULT __stdcall GetCanonicalFormatEtc(const tagFORMATETC &formatetcIn, /* out */ tagFORMATETC &formatetcOut);
	HRESULT __stdcall EnumFormatEtc(int dwDirection, /* out */ _di_IEnumFORMATETC &enumFormatEtc);
	HRESULT __stdcall DAdvise(const tagFORMATETC &formatetc, int advf, const _di_IAdviseSink advSink, /* out */ int &dwConnection);
	HRESULT __stdcall DUnadvise(int dwConnection);
	HRESULT __stdcall EnumDAdvise(/* out */ _di_IEnumSTATDATA &enumAdvise);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TSourceDataObject() { }
	
private:
	void *__IDataObject;	// IDataObject 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {0000010E-0000-0000-C000-000000000046}
	operator _di_IDataObject()
	{
		_di_IDataObject intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IDataObject*(void) { return (IDataObject*)&__IDataObject; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSourceEnumFormatEtc : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
protected:
	int FIndex;
	bool FHasCol;
	bool FHasGridCells;
	
public:
	HRESULT __stdcall Next(int CountRequested, /* out */ void *FormatEtcArray, System::PLongInt PCountFetched);
	HRESULT __stdcall Skip(int count);
	HRESULT __stdcall Reset();
	HRESULT __stdcall Clone(/* out */ _di_IEnumFORMATETC &enumFmt);
public:
	/* TObject.Create */ inline __fastcall TSourceEnumFormatEtc() : System::TInterfacedObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TSourceEnumFormatEtc() { }
	
private:
	void *__IEnumFORMATETC;	// IEnumFORMATETC 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {00000103-0000-0000-C000-000000000046}
	operator _di_IEnumFORMATETC()
	{
		_di_IEnumFORMATETC intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IEnumFORMATETC*(void) { return (IEnumFORMATETC*)&__IEnumFORMATETC; }
	#endif
	
};

#pragma pack(pop)

typedef System::StaticArray<tagFORMATETC, 20> TFormatEtcArray;

typedef TFormatEtcArray *PFormatEtcArray;

//-- var, const, procedure ---------------------------------------------------
static const System::Int8 deNone = System::Int8(0x0);
static const System::Int8 deMove = System::Int8(0x2);
static const System::Int8 deCopy = System::Int8(0x1);
static const System::Int8 deLink = System::Int8(0x4);
static const unsigned deScroll = unsigned(0x80000000);
static const System::Int8 ddGet = System::Int8(0x1);
static const System::Int8 ddSet = System::Int8(0x2);
static const System::Int8 tsGlobal = System::Int8(0x1);
static const System::Int8 tsFile = System::Int8(0x2);
static const System::Int8 tsStream = System::Int8(0x4);
static const System::Int8 tsStorage = System::Int8(0x8);
static const System::Int8 tsGDI = System::Int8(0x10);
static const System::Int8 tsMetafilePict = System::Int8(0x20);
static const System::Int8 tsEnhMetafile = System::Int8(0x40);
static const System::Int8 tsNull = System::Int8(0x0);
extern DELPHI_PACKAGE void __fastcall SetRTFAware(bool value);
extern DELPHI_PACKAGE int __fastcall StandardEffect(System::Classes::TShiftState Keys, int DefEffect);
extern DELPHI_PACKAGE HRESULT __fastcall StartTextDoDragDrop(TASGDropSource* DropSource, System::UnicodeString stxt, System::UnicodeString srtf, System::Classes::TMemoryStream* ms, int dwOKEffects, int &dwEffect);
extern DELPHI_PACKAGE HRESULT __fastcall StartColDoDragDrop(TASGDropSource* DropSource, int column, int dwOKEffects, int &dwEffect);
}	/* namespace Asgdd */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ASGDD)
using namespace Asgdd;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AsgddHPP
