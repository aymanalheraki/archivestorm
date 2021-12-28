// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'ALXPVS.pas' rev: 35.00 (Windows)

#ifndef AlxpvsHPP
#define AlxpvsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>

//-- user supplied -----------------------------------------------------------

namespace Alxpvs
{
//-- forward type declarations -----------------------------------------------
//-- type declarations -------------------------------------------------------
//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE NativeUInt __stdcall (*OpenThemeData)(NativeUInt hwnd, System::WideChar * pszClassList);
extern DELPHI_PACKAGE NativeUInt __stdcall (*CloseThemeData)(NativeUInt hTheme);
extern DELPHI_PACKAGE NativeUInt __stdcall (*DrawThemeBackground)(NativeUInt hTheme, HDC hdc, int iPartId, int iStateId, const System::Types::PRect pRect, const System::Types::PRect pClipRect);
extern DELPHI_PACKAGE System::LongBool __stdcall (*IsThemeActive)(void);
}	/* namespace Alxpvs */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ALXPVS)
using namespace Alxpvs;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AlxpvsHPP
