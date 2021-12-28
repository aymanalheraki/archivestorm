// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'asgcheck.pas' rev: 35.00 (Windows)

#ifndef AsgcheckHPP
#define AsgcheckHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <Vcl.Controls.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Asgcheck
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TAdvStringGridCheck;
class DELPHICLASS TCapitalCheck;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TAdvStringGridCheck : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	bool FGotoCell;
	bool FAutoCorrect;
	bool FAutoMarkError;
	bool FUseCorrect;
	bool FUseMarkError;
	System::Classes::TComponent* FGrid;
	System::Uitypes::TModalResult FLastResult;
	
protected:
	System::UnicodeString __fastcall HiLight(System::UnicodeString s, System::UnicodeString h, System::UnicodeString tag, bool DoCase);
	System::UnicodeString __fastcall ReplaceOnce(const System::UnicodeString S, const System::UnicodeString OldPattern, const System::UnicodeString NewPattern);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation AOperation);
	
public:
	__fastcall virtual TAdvStringGridCheck(System::Classes::TComponent* AOwner);
	virtual System::UnicodeString __fastcall MarkError(int ACol, int ARow, System::UnicodeString s);
	virtual System::UnicodeString __fastcall Correct(int ACol, int ARow, System::UnicodeString s);
	virtual void __fastcall StartCheck();
	virtual void __fastcall StopCheck();
	__property System::Classes::TComponent* Grid = {read=FGrid, write=FGrid};
	__property System::Uitypes::TModalResult LastResult = {read=FLastResult, write=FLastResult, nodefault};
	
__published:
	__property bool AutoCorrect = {read=FAutoCorrect, write=FAutoCorrect, nodefault};
	__property bool AutoMarkError = {read=FAutoMarkError, write=FAutoMarkError, nodefault};
	__property bool GotoCell = {read=FGotoCell, write=FGotoCell, nodefault};
	__property bool UseCorrect = {read=FUseCorrect, write=FUseCorrect, nodefault};
	__property bool UseMarkError = {read=FUseMarkError, write=FUseMarkError, nodefault};
public:
	/* TComponent.Destroy */ inline __fastcall virtual ~TAdvStringGridCheck() { }
	
};


class PASCALIMPLEMENTATION TCapitalCheck : public TAdvStringGridCheck
{
	typedef TAdvStringGridCheck inherited;
	
public:
	virtual System::UnicodeString __fastcall Correct(int ACol, int ARow, System::UnicodeString s);
public:
	/* TAdvStringGridCheck.Create */ inline __fastcall virtual TCapitalCheck(System::Classes::TComponent* AOwner) : TAdvStringGridCheck(AOwner) { }
	
public:
	/* TComponent.Destroy */ inline __fastcall virtual ~TCapitalCheck() { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Asgcheck */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ASGCHECK)
using namespace Asgcheck;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AsgcheckHPP
