// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AdvHintInfo.pas' rev: 35.00 (Windows)

#ifndef AdvhintinfoHPP
#define AdvhintinfoHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <System.Classes.hpp>
#include <GDIPicture.hpp>

//-- user supplied -----------------------------------------------------------

namespace Advhintinfo
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TAdvHintInfo;
__interface DELPHIINTERFACE ITMSOfficeHint;
typedef System::DelphiInterface<ITMSOfficeHint> _di_ITMSOfficeHint;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TAdvHintInfo : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	Gdipicture::TGDIPPicture* FPicture;
	bool FShowHelp;
	System::Classes::TStrings* FNotes;
	System::UnicodeString FTitle;
	System::WideString FWideTitle;
	System::WideString FWideNotes;
	void __fastcall SetNotes(System::Classes::TStrings* const Value);
	void __fastcall SetPicture(Gdipicture::TGDIPPicture* const Value);
	
public:
	__fastcall TAdvHintInfo();
	__fastcall virtual ~TAdvHintInfo();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property System::WideString WideTitle = {read=FWideTitle, write=FWideTitle};
	__property System::WideString WideNotes = {read=FWideNotes, write=FWideNotes};
	bool __fastcall IsEmpty();
	
__published:
	__property System::UnicodeString Title = {read=FTitle, write=FTitle};
	__property System::Classes::TStrings* Notes = {read=FNotes, write=SetNotes};
	__property Gdipicture::TGDIPPicture* Picture = {read=FPicture, write=SetPicture};
	__property bool ShowHelp = {read=FShowHelp, write=FShowHelp, default=0};
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{B7E98AA5-9E7A-4036-BF26-AB2F557A5CDD}") ITMSOfficeHint  : public System::IInterface 
{
	virtual void __fastcall GetOfficeHint(const System::Types::TPoint &PT, TAdvHintInfo* &HintInfo) = 0 ;
};

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Advhintinfo */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ADVHINTINFO)
using namespace Advhintinfo;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AdvhintinfoHPP
