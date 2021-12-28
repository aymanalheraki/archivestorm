// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AdvControlDropDown.pas' rev: 35.00 (Windows)

#ifndef AdvcontroldropdownHPP
#define AdvcontroldropdownHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <Winapi.Windows.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Winapi.Messages.hpp>
#include <AdvDropDown.hpp>
#include <Vcl.Mask.hpp>
#include <Vcl.StdCtrls.hpp>
#include <AdvStyleIF.hpp>

//-- user supplied -----------------------------------------------------------

namespace Advcontroldropdown
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TAdvControlDropDown;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TAdvControlDropDown : public Advdropdown::TAdvDropDown
{
	typedef Advdropdown::TAdvDropDown inherited;
	
protected:
	virtual void __fastcall Loaded();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation AOperation);
	
__published:
	__property Control;
	__property ReturnIsTab = {default=0};
	__property UIStyle = {default=8};
public:
	/* TAdvCustomDropDown.Create */ inline __fastcall virtual TAdvControlDropDown(System::Classes::TComponent* AOwner) : Advdropdown::TAdvDropDown(AOwner) { }
	/* TAdvCustomDropDown.Destroy */ inline __fastcall virtual ~TAdvControlDropDown() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TAdvControlDropDown(HWND ParentWindow) : Advdropdown::TAdvDropDown(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Advcontroldropdown */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ADVCONTROLDROPDOWN)
using namespace Advcontroldropdown;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AdvcontroldropdownHPP
