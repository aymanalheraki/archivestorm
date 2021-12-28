// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AsgHTMLE.pas' rev: 35.00 (Windows)

#ifndef AsghtmleHPP
#define AsghtmleHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Vcl.Graphics.hpp>
#include <PictureContainer.hpp>
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.ImgList.hpp>
#include <Winapi.Messages.hpp>
#include <AdvXPVS.hpp>
#include <System.Types.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Asghtmle
{
//-- forward type declarations -----------------------------------------------
//-- type declarations -------------------------------------------------------
//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE bool IsWinXP;
extern DELPHI_PACKAGE System::WideChar ASG_ATTR_DELIM;
extern DELPHI_PACKAGE bool ASG_KEEP_LINEBREAKS;
extern DELPHI_PACKAGE void __fastcall SetHighLightColors(System::Uitypes::TColor AColor, System::Uitypes::TColor ATextColor);
extern DELPHI_PACKAGE void __fastcall PrintBitmap(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &DestRect, Vcl::Graphics::TBitmap* Bitmap);
extern DELPHI_PACKAGE System::UnicodeString __fastcall UnFixMarkup(System::UnicodeString su, bool SpecialChars = true);
extern DELPHI_PACKAGE System::UnicodeString __fastcall FixMarkup(System::UnicodeString su, bool SpecialChars = true);
extern DELPHI_PACKAGE System::UnicodeString __fastcall FixNonBreaking(System::UnicodeString su);
extern DELPHI_PACKAGE void __fastcall ParseControl(System::UnicodeString Tag, System::UnicodeString &ControlType, System::UnicodeString &ControlID, System::UnicodeString &ControlValue, System::UnicodeString &ControlWidth, System::UnicodeString &ControlHeight, System::UnicodeString &ControlProp, System::UnicodeString &ControlLen);
extern DELPHI_PACKAGE bool __fastcall HasHTMLControl(System::UnicodeString HTML);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetNextControlID(System::UnicodeString HTML, System::UnicodeString ControlID);
extern DELPHI_PACKAGE System::UnicodeString __fastcall ClearRadioControls(System::UnicodeString HTML);
extern DELPHI_PACKAGE bool __fastcall GetControlValue(System::UnicodeString HTML, System::UnicodeString ControlID, System::UnicodeString &ControlValue);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetControlProp(System::UnicodeString HTML, System::UnicodeString ControlID);
extern DELPHI_PACKAGE int __fastcall GetControlMaxLen(System::UnicodeString HTML, System::UnicodeString ControlID);
extern DELPHI_PACKAGE bool __fastcall SetControlValue(System::UnicodeString &HTML, System::UnicodeString ControlID, System::UnicodeString ControlValue);
extern DELPHI_PACKAGE bool __fastcall HTMLDrawEx(Vcl::Graphics::TCanvas* Canvas, System::UnicodeString s, const System::Types::TRect &fr, Vcl::Imglist::TCustomImageList* FImages, int XPos, int YPos, int FocusLink, int HoverLink, int ShadowOffset, bool CheckHotSpot, bool CheckHeight, bool Print, bool Selected, bool Blink, bool HoverStyle, bool WordWrap, bool Down, System::UnicodeString DownID, double ResFactor, System::Uitypes::TColor URLColor, System::Uitypes::TColor HoverColor, System::Uitypes::TColor HoverFontColor, System::Uitypes::TColor ShadowColor, System::UnicodeString &AnchorVal, System::UnicodeString &StripVal, System::UnicodeString &FocusAnchor, System::UnicodeString &AnchorHint, int &XSize, int &YSize, int &HyperLinks, int &MouseLink, System::Types::TRect &HoverRect, System::Types::TRect &ControlRect,
	System::UnicodeString &CID, System::UnicodeString &CV, System::UnicodeString &CT, Picturecontainer::THTMLPictureCache* ic, Picturecontainer::TPictureContainer* pc, NativeUInt WinHandle, float DPIScale, System::Classes::TBiDiMode BidiMode = (System::Classes::TBiDiMode)(0x0));
extern DELPHI_PACKAGE System::UnicodeString __fastcall HTMLStrip(System::UnicodeString s);
extern DELPHI_PACKAGE System::UnicodeString __fastcall HiLight(System::UnicodeString s, System::UnicodeString h, System::UnicodeString tag, bool DoCase, bool FullText);
extern DELPHI_PACKAGE System::UnicodeString __fastcall UnHiLight(System::UnicodeString s, System::UnicodeString tag);
}	/* namespace Asghtmle */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ASGHTMLE)
using namespace Asghtmle;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AsghtmleHPP
