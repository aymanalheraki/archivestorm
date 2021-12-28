// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'GDIPPictureContainer.pas' rev: 35.00 (Windows)

#ifndef GdippicturecontainerHPP
#define GdippicturecontainerHPP

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
#include <Vcl.Dialogs.hpp>
#include <System.Win.ComObj.hpp>
#include <Winapi.ActiveX.hpp>
#include <AdvGDIP.hpp>

//-- user supplied -----------------------------------------------------------

namespace Gdippicturecontainer
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TPictureItem;
class DELPHICLASS TPictureCollection;
class DELPHICLASS TGDIPPictureContainer;
class DELPHICLASS TAdvGDIPPictureCache;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TPictureItem : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	Advgdip::TAdvGDIPPicture* FPicture;
	int FTag;
	System::UnicodeString FName;
	void __fastcall SetPicture(Advgdip::TAdvGDIPPicture* const Value);
	
public:
	__fastcall virtual TPictureItem(System::Classes::TCollection* Collection);
	__fastcall virtual ~TPictureItem();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property Advgdip::TAdvGDIPPicture* Picture = {read=FPicture, write=SetPicture};
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property int Tag = {read=FTag, write=FTag, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPictureCollection : public System::Classes::TCollection
{
	typedef System::Classes::TCollection inherited;
	
public:
	TPictureItem* operator[](int Index) { return this->Items[Index]; }
	
private:
	System::Classes::TComponent* FOwner;
	HIDESBASE TPictureItem* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TPictureItem* Value);
	
protected:
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	
public:
	__fastcall TPictureCollection(System::Classes::TComponent* AOwner);
	HIDESBASE TPictureItem* __fastcall Add();
	HIDESBASE TPictureItem* __fastcall Insert(int index);
	__property TPictureItem* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TPictureCollection() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TGDIPPictureContainer : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	TPictureCollection* FItems;
	void __fastcall SetItems(TPictureCollection* const Value);
	System::UnicodeString __fastcall GetVersion();
	void __fastcall SetVersion(const System::UnicodeString Value);
	int __fastcall GetVersionNr();
	
public:
	__fastcall virtual TGDIPPictureContainer(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TGDIPPictureContainer();
	virtual Advgdip::TAdvGDIPPicture* __fastcall FindPicture(System::UnicodeString s);
	void __fastcall AddFromResource(System::UnicodeString ResourceName, System::UnicodeString PictureName);
	
__published:
	__property TPictureCollection* Items = {read=FItems, write=SetItems};
	__property System::UnicodeString Version = {read=GetVersion, write=SetVersion};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TAdvGDIPPictureCache : public System::Classes::TList
{
	typedef System::Classes::TList inherited;
	
public:
	Advgdip::TAdvGDIPPicture* operator[](int index) { return this->Items[index]; }
	
private:
	void __fastcall SetPicture(int Index, Advgdip::TAdvGDIPPicture* Value);
	Advgdip::TAdvGDIPPicture* __fastcall GetPicture(int Index);
	
public:
	__fastcall virtual ~TAdvGDIPPictureCache();
	__property Advgdip::TAdvGDIPPicture* Items[int index] = {read=GetPicture, write=SetPicture/*, default*/};
	Advgdip::TAdvGDIPPicture* __fastcall AddPicture();
	Advgdip::TAdvGDIPPicture* __fastcall FindPicture(System::UnicodeString ID);
	void __fastcall ClearPictures();
public:
	/* TObject.Create */ inline __fastcall TAdvGDIPPictureCache() : System::Classes::TList() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const System::Int8 MAJ_VER = System::Int8(0x1);
static const System::Int8 MIN_VER = System::Int8(0x0);
static const System::Int8 REL_VER = System::Int8(0x0);
static const System::Int8 BLD_VER = System::Int8(0x0);
}	/* namespace Gdippicturecontainer */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_GDIPPICTURECONTAINER)
using namespace Gdippicturecontainer;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// GdippicturecontainerHPP
