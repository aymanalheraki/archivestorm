// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'GDIPicture.pas' rev: 35.00 (Windows)

#ifndef GdipictureHPP
#define GdipictureHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <System.SysUtils.hpp>
#include <AdvGDIP.hpp>
#include <System.Win.ComObj.hpp>
#include <Winapi.ActiveX.hpp>
#include <AdvTypes.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <System.UITypes.hpp>
#include <System.AnsiStrings.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

namespace Gdipicture
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TGDIPPicture;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TPictureFormat : unsigned char { pfBMP, pfGIF, pfJPG, pfPNG, pfICO, pfTiff, pfMetaFile, pfNone };

class PASCALIMPLEMENTATION TGDIPPicture : public Advtypes::TAdvSVGBitmap
{
	typedef Advtypes::TAdvSVGBitmap inherited;
	
private:
	System::UnicodeString FFileName;
	System::Classes::TMemoryStream* FDatastream;
	bool FIsEmpty;
	int FWidth;
	int FHeight;
	bool FDoubleBuffered;
	System::Uitypes::TColor FBackgroundColor;
	bool FTransparentBitmap;
	System::Classes::TNotifyEvent FOnClear;
	int FAngle;
	Vcl::Graphics::TGraphic* __fastcall GetGraphic();
	
protected:
	virtual bool __fastcall GetEmpty();
	virtual int __fastcall GetHeight();
	virtual int __fastcall GetWidth();
	virtual void __fastcall SetHeight(int Value);
	virtual void __fastcall SetWidth(int Value);
	virtual void __fastcall ReadData(System::Classes::TStream* Stream);
	virtual void __fastcall WriteData(System::Classes::TStream* Stream);
	TPictureFormat __fastcall GetPictureFormat();
	void __fastcall DoChange();
	
public:
	System::UnicodeString __fastcall GetFileName();
	__fastcall virtual TGDIPPicture()/* overload */;
	__fastcall virtual ~TGDIPPicture();
	virtual void __fastcall DrawSVG(Advgdip::TGPGraphics* Graphics, float X, float Y, float W, float H);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	void __fastcall DrawImage(Advgdip::TGPGraphics* Graphics, int X, int Y);
	void __fastcall DrawImageRect(Advgdip::TGPGraphics* Graphics, int X, int Y, int W, int H);
	virtual void __fastcall Draw(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &Rect);
	virtual void __fastcall LoadFromFile(const System::UnicodeString FileName);
	virtual void __fastcall LoadFromStream(System::Classes::TStream* Stream);
	virtual void __fastcall SaveToStream(System::Classes::TStream* Stream);
	void __fastcall LoadFromResourceName(NativeUInt Instance, const System::UnicodeString ResName);
	void __fastcall LoadFromResourceID(NativeUInt Instance, int ResID);
	void __fastcall LoadFromURL(System::UnicodeString URL);
	virtual void __fastcall LoadFromClipboardFormat(System::Word AFormat, NativeUInt AData, HPALETTE APalette);
	virtual void __fastcall SaveToClipboardFormat(System::Word &AFormat, NativeUInt &AData, HPALETTE &APalette);
	__property bool DoubleBuffered = {read=FDoubleBuffered, write=FDoubleBuffered, nodefault};
	__property System::Uitypes::TColor BackgroundColor = {read=FBackgroundColor, write=FBackgroundColor, nodefault};
	__property int Angle = {read=FAngle, write=FAngle, nodefault};
	bool __fastcall GetImageSizes();
	__property bool TransparentBitmap = {read=FTransparentBitmap, write=FTransparentBitmap, nodefault};
	__property TPictureFormat PictureFormat = {read=GetPictureFormat, nodefault};
	__property Vcl::Graphics::TGraphic* Graphic = {read=GetGraphic};
	
__published:
	__property System::Classes::TNotifyEvent OnClear = {read=FOnClear, write=FOnClear};
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE System::ResourceString _GDIPERRMSG;
#define Gdipicture_GDIPERRMSG System::LoadResourceString(&Gdipicture::_GDIPERRMSG)
}	/* namespace Gdipicture */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_GDIPICTURE)
using namespace Gdipicture;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// GdipictureHPP
