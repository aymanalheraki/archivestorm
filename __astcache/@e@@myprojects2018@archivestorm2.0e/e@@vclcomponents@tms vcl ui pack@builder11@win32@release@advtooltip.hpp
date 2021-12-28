// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AdvToolTip.pas' rev: 35.00 (Windows)

#ifndef AdvtooltipHPP
#define AdvtooltipHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <System.Classes.hpp>
#include <Winapi.Messages.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.Forms.hpp>
#include <System.Types.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Advtooltip
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TAdvToolTip;
class DELPHICLASS TAdvToolTipWindow;
class DELPHICLASS TAdvControlValidator;
class DELPHICLASS TAdvControlValidators;
class DELPHICLASS TAdvFormValidators;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TAdvToolTipPosition : unsigned char { ttTopRight, ttTopLeft, ttTopCenter, ttRight, ttBottomLeft, ttBottomCenter, ttBottomRight, ttCustom };

enum DECLSPEC_DENUM TAdvToolTipShape : unsigned char { tsBalloon, tsRectangle };

class PASCALIMPLEMENTATION TAdvToolTip : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	System::Uitypes::TColor FBorderColor;
	Vcl::Imglist::TCustomImageList* FImages;
	int FMaxWidth;
	System::Uitypes::TColor FColor;
	System::Uitypes::TColor FControlBorderColor;
	Vcl::Graphics::TFont* FFont;
	int FX;
	int FY;
	System::Uitypes::TImageIndex FImageIndex;
	TAdvToolTipPosition FPosition;
	int FRounding;
	TAdvToolTipShape FShape;
	int FMargin;
	void __fastcall SetFont(Vcl::Graphics::TFont* const Value);
	System::UnicodeString __fastcall GetVersion();
	
protected:
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	
public:
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__fastcall virtual TAdvToolTip(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TAdvToolTip();
	int __fastcall GetVersionNr();
	
__published:
	__property System::Uitypes::TColor ControlBorderColor = {read=FControlBorderColor, write=FControlBorderColor, default=255};
	__property System::Uitypes::TColor BorderColor = {read=FBorderColor, write=FBorderColor, default=255};
	__property System::Uitypes::TColor Color = {read=FColor, write=FColor, default=255};
	__property Vcl::Graphics::TFont* Font = {read=FFont, write=SetFont};
	__property System::Uitypes::TImageIndex ImageIndex = {read=FImageIndex, write=FImageIndex, default=-1};
	__property Vcl::Imglist::TCustomImageList* Images = {read=FImages, write=FImages};
	__property int Margin = {read=FMargin, write=FMargin, default=0};
	__property int MaxWidth = {read=FMaxWidth, write=FMaxWidth, default=0};
	__property TAdvToolTipPosition Position = {read=FPosition, write=FPosition, default=3};
	__property int Rounding = {read=FRounding, write=FRounding, default=2};
	__property TAdvToolTipShape Shape = {read=FShape, write=FShape, default=0};
	__property int X = {read=FX, write=FX, default=0};
	__property int Y = {read=FY, write=FY, default=0};
	__property System::UnicodeString Version = {read=GetVersion};
};


class PASCALIMPLEMENTATION TAdvToolTipWindow : public Vcl::Controls::TCustomControl
{
	typedef Vcl::Controls::TCustomControl inherited;
	
private:
	TAdvToolTip* FInternalToolTip;
	Vcl::Controls::TControl* FControl;
	System::Uitypes::TColor FColor;
	System::UnicodeString FText;
	TAdvToolTip* FToolTip;
	bool FBorderSet;
	System::Uitypes::TColor FOldBorderColor;
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TWMEraseBkgnd &Message);
	HIDESBASE MESSAGE void __fastcall WMPaint(Winapi::Messages::TWMPaint &Message);
	HIDESBASE void __fastcall SetColor(const System::Uitypes::TColor Value);
	HIDESBASE void __fastcall SetText(const System::UnicodeString Value);
	TAdvToolTip* __fastcall ToolTipInfo();
	
protected:
	virtual void __fastcall Paint();
	virtual void __fastcall CreateWnd();
	void __fastcall DoSetRegion();
	virtual void __fastcall DoMeasure();
	virtual void __fastcall DoPosition();
	
public:
	__fastcall virtual TAdvToolTipWindow(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TAdvToolTipWindow();
	HIDESBASE void __fastcall Show(Vcl::Controls::TControl* Control, TAdvToolTip* ToolTip = (TAdvToolTip*)(0x0));
	HIDESBASE void __fastcall Hide();
	
__published:
	__property System::Uitypes::TColor Color = {read=FColor, write=SetColor, default=255};
	__property Font;
	__property System::UnicodeString Text = {read=FText, write=SetText};
	__property OnClick;
	__property Visible = {default=1};
public:
	/* TWinControl.CreateParented */ inline __fastcall TAdvToolTipWindow(HWND ParentWindow) : Vcl::Controls::TCustomControl(ParentWindow) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TAdvControlValidator : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	Vcl::Controls::TControl* FControl;
	int FTag;
	System::UnicodeString FText;
	
__published:
	__property Vcl::Controls::TControl* Control = {read=FControl, write=FControl};
	__property System::UnicodeString Text = {read=FText, write=FText};
	__property int Tag = {read=FTag, write=FTag, nodefault};
public:
	/* TCollectionItem.Create */ inline __fastcall virtual TAdvControlValidator(System::Classes::TCollection* Collection) : System::Classes::TCollectionItem(Collection) { }
	/* TCollectionItem.Destroy */ inline __fastcall virtual ~TAdvControlValidator() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAdvControlValidators : public System::Classes::TOwnedCollection
{
	typedef System::Classes::TOwnedCollection inherited;
	
public:
	/* TOwnedCollection.Create */ inline __fastcall TAdvControlValidators(System::Classes::TPersistent* AOwner, System::Classes::TCollectionItemClass ItemClass) : System::Classes::TOwnedCollection(AOwner, ItemClass) { }
	
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TAdvControlValidators() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TAdvFormValidators : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	TAdvControlValidators* FValidators;
	TAdvToolTip* FToolTip;
	void __fastcall SetValidators(TAdvControlValidators* const Value);
	
protected:
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	
public:
	__fastcall virtual TAdvFormValidators(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TAdvFormValidators();
	
__published:
	__property TAdvToolTip* ToolTip = {read=FToolTip, write=FToolTip};
	__property TAdvControlValidators* Validators = {read=FValidators, write=SetValidators};
};


//-- var, const, procedure ---------------------------------------------------
static const System::Int8 MAJ_VER = System::Int8(0x1);
static const System::Int8 MIN_VER = System::Int8(0x0);
static const System::Int8 REL_VER = System::Int8(0x0);
static const System::Int8 BLD_VER = System::Int8(0x2);
extern DELPHI_PACKAGE void __fastcall ShowValidator(Vcl::Controls::TControl* AControl, System::UnicodeString AText, TAdvToolTip* AToolTip = (TAdvToolTip*)(0x0));
extern DELPHI_PACKAGE void __fastcall HideValidator(Vcl::Controls::TControl* AControl);
}	/* namespace Advtooltip */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ADVTOOLTIP)
using namespace Advtooltip;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AdvtooltipHPP
