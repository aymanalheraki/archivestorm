// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AdvEddd.pas' rev: 35.00 (Windows)

#ifndef AdvedddHPP
#define AdvedddHPP

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
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

namespace Adveddd
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TEnumFormats;
class DELPHICLASS TAEDropTarget;
class DELPHICLASS TAEDropSource;
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
	System::UnicodeString __fastcall SomeText(System::Word Format);
	bool __fastcall SomeFiles(System::Classes::TStringList* &Files);
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
	bool __fastcall HasRTF();
	System::UnicodeString __fastcall Text();
	System::UnicodeString __fastcall RTF();
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

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAEDropTarget : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
public:
	HRESULT __stdcall DragEnter(const _di_IDataObject DataObj, int grfKeyState, System::Types::TPoint pt, int &dwEffect);
	HRESULT __stdcall DragOver(int grfKeyState, System::Types::TPoint pt, int &dwEffect);
	HRESULT __stdcall DragLeave();
	HRESULT __stdcall Drop(const _di_IDataObject DataObj, int grfKeyState, System::Types::TPoint pt, int &dwEffect);
	
private:
	bool FOk;
	
public:
	__fastcall TAEDropTarget();
	virtual void __fastcall DropText(const System::Types::TPoint &pt, System::UnicodeString s);
	virtual void __fastcall DropRTF(const System::Types::TPoint &pt, System::UnicodeString s);
	virtual void __fastcall DropFiles(const System::Types::TPoint &pt, System::Classes::TStrings* Files);
	virtual void __fastcall DragMouseMove(const System::Types::TPoint &pt, bool &Allow);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TAEDropTarget() { }
	
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
class PASCALIMPLEMENTATION TAEDropSource : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	bool FNoAccept;
	
public:
	HRESULT __stdcall QueryContinueDrag(System::LongBool fEscapePressed, int grfKeyState);
	HRESULT __stdcall GiveFeedback(int dwEffect);
public:
	/* TObject.Create */ inline __fastcall TAEDropSource() : System::TInterfacedObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TAEDropSource() { }
	
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
	
public:
	__fastcall TSourceDataObject(const System::UnicodeString stxt, const System::UnicodeString srtf);
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
extern DELPHI_PACKAGE int __fastcall ScaleFromSmallFontsDimension(const int X);
extern DELPHI_PACKAGE void __fastcall SetRTFAware(bool value);
extern DELPHI_PACKAGE int __fastcall StandardEffect(System::Classes::TShiftState Keys);
extern DELPHI_PACKAGE HRESULT __fastcall StartTextDoDragDrop(System::UnicodeString stxt, System::UnicodeString srtf, int dwOKEffects, int &dwEffect);
}	/* namespace Adveddd */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ADVEDDD)
using namespace Adveddd;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AdvedddHPP
