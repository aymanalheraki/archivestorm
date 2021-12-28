// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AdvMenus.pas' rev: 35.00 (Windows)

#ifndef AdvmenusHPP
#define AdvmenusHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Vcl.Forms.hpp>
#include <Winapi.Windows.hpp>
#include <System.Types.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.Controls.hpp>
#include <AdvGDIP.hpp>
#include <AdvStyleIF.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.ActnMan.hpp>
#include <Vcl.Themes.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Advmenus
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE IAdvMenu;
typedef System::DelphiInterface<IAdvMenu> _di_IAdvMenu;
class DELPHICLASS TButtonAppearance;
class DELPHICLASS TCustomAdvMenuStyler;
class DELPHICLASS TAdvMenuStyler;
class DELPHICLASS TGradientBar;
class DELPHICLASS TIconBar;
class DELPHICLASS TSelectedItem;
class DELPHICLASS TRootItem;
class DELPHICLASS TMenuGlyphs;
class DELPHICLASS TBarCaption;
class DELPHICLASS TSideBar;
class DELPHICLASS TBackground;
class DELPHICLASS TSeparator;
class DELPHICLASS TAdvMainMenu;
class DELPHICLASS TAdvPopupMenu;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TDrawStyle : unsigned char { dsNormal, dsTile, dsStretch };

enum DECLSPEC_DENUM TGradientDirection : unsigned char { gdVertical, gdHorizontal };

enum DECLSPEC_DENUM TGradientType : unsigned char { gtLeft, gtRight, gtBoth };

enum DECLSPEC_DENUM TBarPart : unsigned char { bpGradient, bpPicture, bpBackPicture, bpCaption, bpBorder, bpSplitter };

typedef System::Set<TBarPart, TBarPart::bpGradient, TBarPart::bpSplitter> TBarParts;

enum DECLSPEC_DENUM TSideBarPosition : unsigned char { spLeft, spRight };

enum DECLSPEC_DENUM TSideBarVisibleIn : unsigned char { viFirstVisible, viFirstLevel, viAnyLevel };

enum DECLSPEC_DENUM TDirection : unsigned char { dDownToUp, dUpToDown };

enum DECLSPEC_DENUM TSeparatorStyle : unsigned char { ssNormal, ssShortLine, ssCaption };

enum DECLSPEC_DENUM TBackgroundPosition : unsigned char { bpTopLeft, bpTopRight, bpBottomLeft, bpBottomRight, bpTopCenter, bpBottomCenter, bpTiled, bpStretched, bpCenter, bpXY };

enum DECLSPEC_DENUM TGlyphPosition : unsigned char { gpLeft, gpRight };

enum DECLSPEC_DENUM TPopopControlPosition : unsigned char { pcpBottomLeft, pcpBottomRight, pcbTopLeft, pcpTopRight, pcpCenter };

typedef void * IntPtr;

enum DECLSPEC_DENUM TActionImage : unsigned char { aiNormal, aiLarge };

__interface IAdvMenu  : public System::IInterface 
{
	virtual void __fastcall UpdateItems() = 0 ;
	virtual Vcl::Menus::TMenu* __fastcall GetSelf() = 0 ;
	virtual TCustomAdvMenuStyler* __fastcall GetMenuStyler() = 0 ;
	virtual TCustomAdvMenuStyler* __fastcall GetCurrentMenuStyler() = 0 ;
	virtual void __fastcall SetMenuStyler(TCustomAdvMenuStyler* const Value) = 0 ;
	virtual System::Byte __fastcall GetOpacity() = 0 ;
	virtual void __fastcall SetOpacity(const System::Byte Value) = 0 ;
	virtual bool __fastcall GetShowNotes() = 0 ;
	virtual void __fastcall SetShowNotes(const bool Value) = 0 ;
	virtual bool __fastcall GetIntlKeybShortCuts() = 0 ;
	virtual void __fastcall SetIntlKeybShortCuts(const bool Value) = 0 ;
	virtual void __fastcall SetActionImage(const TActionImage Value) = 0 ;
	virtual TActionImage __fastcall GetActionImage() = 0 ;
	virtual void __fastcall SetBidiMode(const System::Classes::TBiDiMode Value) = 0 ;
	virtual System::Classes::TBiDiMode __fastcall GetBidiMode() = 0 ;
	__property Vcl::Menus::TMenu* Self = {read=GetSelf};
	__property TCustomAdvMenuStyler* CurrentMenuStyler = {read=GetCurrentMenuStyler};
	__property TActionImage ActionImages = {read=GetActionImage, write=SetActionImage};
	__property TCustomAdvMenuStyler* MenuStyler = {read=GetMenuStyler, write=SetMenuStyler};
	__property System::Byte Opacity = {read=GetOpacity, write=SetOpacity};
	__property bool ShowNotes = {read=GetShowNotes, write=SetShowNotes};
	__property bool IntlKeybShortCuts = {read=GetIntlKeybShortCuts, write=SetIntlKeybShortCuts};
	__property System::Classes::TBiDiMode BidiMode = {read=GetBidiMode, write=SetBidiMode};
};

class PASCALIMPLEMENTATION TButtonAppearance : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	System::Classes::TNotifyEvent FOnChange;
	System::Uitypes::TColor FHoverColor;
	System::Uitypes::TColor FColorTo;
	System::Uitypes::TColor FColor;
	System::Uitypes::TColor FHoverColorTo;
	System::Uitypes::TColor FDownColorTo;
	System::Uitypes::TColor FDownColor;
	System::Uitypes::TColor FDownBorderColor;
	System::Uitypes::TColor FBorderColor;
	System::Uitypes::TColor FHoverBorderColor;
	TGradientDirection FGradientDirection;
	Vcl::Graphics::TFont* FCaptionFont;
	TGlyphPosition FGlyphPosition;
	bool FUseSystemFont;
	void __fastcall Change();
	void __fastcall SetBorderColor(const System::Uitypes::TColor Value);
	void __fastcall SetColor(const System::Uitypes::TColor Value);
	void __fastcall SetDownColor(const System::Uitypes::TColor Value);
	void __fastcall SetDownColorTo(const System::Uitypes::TColor Value);
	void __fastcall SetHoverColor(const System::Uitypes::TColor Value);
	void __fastcall SetHoverColorTo(const System::Uitypes::TColor Value);
	void __fastcall SetColorTo(const System::Uitypes::TColor Value);
	void __fastcall SetGradientDirection(const TGradientDirection Value);
	void __fastcall SetCaptionFont(Vcl::Graphics::TFont* const Value);
	void __fastcall SetGlyphPosition(const TGlyphPosition Value);
	void __fastcall SetUseSystemFont(const bool Value);
	
protected:
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property TGlyphPosition GlyphPosition = {read=FGlyphPosition, write=SetGlyphPosition, default=0};
	
public:
	__fastcall TButtonAppearance();
	__fastcall virtual ~TButtonAppearance();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property System::Uitypes::TColor Color = {read=FColor, write=SetColor, default=536870911};
	__property System::Uitypes::TColor ColorTo = {read=FColorTo, write=SetColorTo, default=536870911};
	__property System::Uitypes::TColor DownColor = {read=FDownColor, write=SetDownColor, default=11899525};
	__property System::Uitypes::TColor DownColorTo = {read=FDownColorTo, write=SetDownColorTo, default=536870911};
	__property System::Uitypes::TColor HoverColor = {read=FHoverColor, write=SetHoverColor, default=13811126};
	__property System::Uitypes::TColor HoverColorTo = {read=FHoverColorTo, write=SetHoverColorTo, default=536870911};
	__property TGradientDirection GradientDirection = {read=FGradientDirection, write=SetGradientDirection, default=0};
	__property System::Uitypes::TColor BorderColor = {read=FBorderColor, write=SetBorderColor, default=536870911};
	__property System::Uitypes::TColor DownBorderColor = {read=FDownBorderColor, write=FDownBorderColor, default=6956042};
	__property System::Uitypes::TColor HoverBorderColor = {read=FHoverBorderColor, write=FHoverBorderColor, default=6956042};
	__property Vcl::Graphics::TFont* CaptionFont = {read=FCaptionFont, write=SetCaptionFont};
	__property bool UseSystemFont = {read=FUseSystemFont, write=SetUseSystemFont, default=1};
};


class PASCALIMPLEMENTATION TCustomAdvMenuStyler : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	bool FUseSystemFont;
	TSeparator* FSeparator;
	TBackground* FBackground;
	Vcl::Graphics::TFont* FFont;
	TIconBar* FIconBar;
	TMenuGlyphs* FGlyphs;
	TRootItem* FRootItem;
	TSelectedItem* FSelectedItem;
	TSideBar* FSideBar;
	System::Uitypes::TColor FMenuBorderColor;
	bool FMenuBarUpdating;
	Vcl::Menus::TMenu* FMenu;
	Vcl::Graphics::TBitmap* FBackgroundBitmap;
	Vcl::Graphics::TFont* FNotesFont;
	Advgdip::TAntiAlias FAntiAlias;
	TButtonAppearance* FButtonAppearance;
	void __fastcall SetBackground(TBackground* const Value);
	void __fastcall SetFont(Vcl::Graphics::TFont* const Value);
	void __fastcall SetGlyphs(TMenuGlyphs* const Value);
	void __fastcall SetIconBar(TIconBar* const Value);
	void __fastcall SetRootItem(TRootItem* const Value);
	void __fastcall SetSelectedItem(TSelectedItem* const Value);
	void __fastcall SetSeparator(TSeparator* const Value);
	void __fastcall SetSideBar(TSideBar* const Value);
	void __fastcall SetUseSystemFont(const bool Value);
	void __fastcall SetMenu(Vcl::Menus::TMenu* const Value);
	void __fastcall SetNotesFont(Vcl::Graphics::TFont* const Value);
	void __fastcall SetAntiAlias(const Advgdip::TAntiAlias Value);
	void __fastcall SetTButtonAppearance(TButtonAppearance* const Value);
	
protected:
	__property bool MenuBarUpdating = {read=FMenuBarUpdating, write=FMenuBarUpdating, default=0};
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall Loaded();
	
public:
	__fastcall virtual TCustomAdvMenuStyler(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomAdvMenuStyler();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property Vcl::Menus::TMenu* Menu = {read=FMenu, write=SetMenu};
	__property Advgdip::TAntiAlias AntiAlias = {read=FAntiAlias, write=SetAntiAlias, nodefault};
	__property TBackground* Background = {read=FBackground, write=SetBackground};
	__property TIconBar* IconBar = {read=FIconBar, write=SetIconBar};
	__property TSelectedItem* SelectedItem = {read=FSelectedItem, write=SetSelectedItem};
	__property TRootItem* RootItem = {read=FRootItem, write=SetRootItem};
	__property TMenuGlyphs* Glyphs = {read=FGlyphs, write=SetGlyphs};
	__property TSideBar* SideBar = {read=FSideBar, write=SetSideBar};
	__property TSeparator* Separator = {read=FSeparator, write=SetSeparator};
	__property Vcl::Graphics::TFont* Font = {read=FFont, write=SetFont};
	__property Vcl::Graphics::TFont* NotesFont = {read=FNotesFont, write=SetNotesFont};
	__property bool UseSystemFont = {read=FUseSystemFont, write=SetUseSystemFont, default=1};
	__property System::Uitypes::TColor MenuBorderColor = {read=FMenuBorderColor, write=FMenuBorderColor, default=8158356};
	__property TButtonAppearance* ButtonAppearance = {read=FButtonAppearance, write=SetTButtonAppearance};
};


class PASCALIMPLEMENTATION TAdvMenuStyler : public TCustomAdvMenuStyler
{
	typedef TCustomAdvMenuStyler inherited;
	
__published:
	__property AntiAlias;
	__property Background;
	__property IconBar;
	__property SelectedItem;
	__property RootItem;
	__property Glyphs;
	__property SideBar;
	__property Separator;
	__property Font;
	__property NotesFont;
	__property UseSystemFont = {default=1};
	__property MenuBorderColor = {default=8158356};
	__property ButtonAppearance;
public:
	/* TCustomAdvMenuStyler.Create */ inline __fastcall virtual TAdvMenuStyler(System::Classes::TComponent* AOwner) : TCustomAdvMenuStyler(AOwner) { }
	/* TCustomAdvMenuStyler.Destroy */ inline __fastcall virtual ~TAdvMenuStyler() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TGradientBar : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	TGradientDirection FGradientDirection;
	Vcl::Menus::TMenu* FMenu;
	System::Uitypes::TColor __fastcall GetGradientColor(const int Index);
	void __fastcall SetGradientColor(const int Index, const System::Uitypes::TColor Value);
	void __fastcall SetGradientDirection(const TGradientDirection Value);
	
protected:
	System::Uitypes::TColor FColor;
	System::Uitypes::TColor FColorTo;
	
public:
	__fastcall TGradientBar(Vcl::Menus::TMenu* AMenu);
	__fastcall virtual ~TGradientBar();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property System::Uitypes::TColor Color = {read=GetGradientColor, write=SetGradientColor, index=0, default=14204335};
	__property System::Uitypes::TColor ColorTo = {read=GetGradientColor, write=SetGradientColor, index=1, default=536870911};
	__property TGradientDirection GradientDirection = {read=FGradientDirection, write=SetGradientDirection, default=0};
	__property Vcl::Menus::TMenu* Menu = {read=FMenu};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIconBar : public TGradientBar
{
	typedef TGradientBar inherited;
	
private:
	System::Uitypes::TColor FRadioBorder;
	System::Uitypes::TColor FCheckBorder;
	System::Uitypes::TColor FRadioColor;
	System::Uitypes::TColor FRadioColorTo;
	System::Uitypes::TColor FCheckColor;
	System::Uitypes::TColor FCheckColorTo;
	TGradientDirection FCheckGradientDirection;
	TGradientDirection FRadioGradientDirection;
	bool FDrawn;
	int FSize;
	System::Uitypes::TColor FSeparatorColor;
	System::Uitypes::TColor __fastcall GetCheckColor(const int Index);
	void __fastcall SetCheckColor(const int Index, const System::Uitypes::TColor Value);
	System::Uitypes::TColor __fastcall GetRadioColor(const int Index);
	void __fastcall SetRadioColor(const int Index, const System::Uitypes::TColor Value);
	void __fastcall SetSize(const int Value);
	
protected:
	__property bool Drawn = {read=FDrawn, write=FDrawn, nodefault};
	
public:
	__fastcall TIconBar(Vcl::Menus::TMenu* AMenu);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property Color = {index=0, default=16775673};
	__property ColorTo = {index=1, default=12296353};
	__property GradientDirection = {default=1};
	__property System::Uitypes::TColor CheckColor = {read=GetCheckColor, write=SetCheckColor, index=0, default=7323903};
	__property System::Uitypes::TColor CheckColorTo = {read=GetCheckColor, write=SetCheckColor, index=1, default=536870911};
	__property System::Uitypes::TColor CheckBorder = {read=FCheckBorder, write=FCheckBorder, default=7293771};
	__property TGradientDirection CheckGradientDirection = {read=FCheckGradientDirection, write=FCheckGradientDirection, default=0};
	__property System::Uitypes::TColor RadioColor = {read=GetRadioColor, write=SetRadioColor, index=0, default=7323903};
	__property System::Uitypes::TColor RadioColorTo = {read=GetRadioColor, write=SetRadioColor, index=1, default=536870911};
	__property System::Uitypes::TColor RadioBorder = {read=FRadioBorder, write=FRadioBorder, default=7293771};
	__property TGradientDirection RadioGradientDirection = {read=FRadioGradientDirection, write=FRadioGradientDirection, default=0};
	__property System::Uitypes::TColor SeparatorColor = {read=FSeparatorColor, write=FSeparatorColor, default=536870911};
	__property int Size = {read=FSize, write=SetSize, default=24};
public:
	/* TGradientBar.Destroy */ inline __fastcall virtual ~TIconBar() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSelectedItem : public TGradientBar
{
	typedef TGradientBar inherited;
	
private:
	System::Uitypes::TColor FRadioBorder;
	System::Uitypes::TColor FCheckBorder;
	System::Uitypes::TColor FRadioColor;
	System::Uitypes::TColor FRadioColorTo;
	System::Uitypes::TColor FCheckColor;
	System::Uitypes::TColor FCheckColorTo;
	TGradientDirection FCheckGradientDirection;
	TGradientDirection FRadioGradientDirection;
	System::Uitypes::TColor FBorderColor;
	Vcl::Graphics::TFont* FFont;
	bool FUseSystemFont;
	System::Uitypes::TColor FColorMirror;
	System::Uitypes::TColor FColorMirrorTo;
	Vcl::Graphics::TFont* FNotesFont;
	System::Uitypes::TColor __fastcall GetCheckColor(const int Index);
	void __fastcall SetCheckColor(const int Index, const System::Uitypes::TColor Value);
	System::Uitypes::TColor __fastcall GetRadioColor(const int Index);
	void __fastcall SetRadioColor(const int Index, const System::Uitypes::TColor Value);
	void __fastcall SetFont(Vcl::Graphics::TFont* const Value);
	void __fastcall SetNotesFont(Vcl::Graphics::TFont* const Value);
	void __fastcall SetUseSystemFont(const bool Value);
	
public:
	__fastcall TSelectedItem(Vcl::Menus::TMenu* AMenu);
	__fastcall virtual ~TSelectedItem();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property Color = {index=0, default=12775167};
	__property ColorTo = {index=1, default=536870911};
	__property System::Uitypes::TColor ColorMirror = {read=FColorMirror, write=FColorMirror, default=536870911};
	__property System::Uitypes::TColor ColorMirrorTo = {read=FColorMirrorTo, write=FColorMirrorTo, default=536870911};
	__property GradientDirection = {default=0};
	__property System::Uitypes::TColor BorderColor = {read=FBorderColor, write=FBorderColor, default=7293771};
	__property Vcl::Graphics::TFont* Font = {read=FFont, write=SetFont};
	__property Vcl::Graphics::TFont* NotesFont = {read=FNotesFont, write=SetNotesFont};
	__property bool UseSystemFont = {read=FUseSystemFont, write=SetUseSystemFont, default=1};
	__property System::Uitypes::TColor CheckColor = {read=GetCheckColor, write=SetCheckColor, index=0, default=4096254};
	__property System::Uitypes::TColor CheckColorTo = {read=GetCheckColor, write=SetCheckColor, index=1, default=536870911};
	__property System::Uitypes::TColor CheckBorder = {read=FCheckBorder, write=FCheckBorder, default=7293771};
	__property TGradientDirection CheckGradientDirection = {read=FCheckGradientDirection, write=FCheckGradientDirection, default=0};
	__property System::Uitypes::TColor RadioColor = {read=GetRadioColor, write=SetRadioColor, index=0, default=4096254};
	__property System::Uitypes::TColor RadioColorTo = {read=GetRadioColor, write=SetRadioColor, index=1, default=536870911};
	__property System::Uitypes::TColor RadioBorder = {read=FRadioBorder, write=FRadioBorder, default=7293771};
	__property TGradientDirection RadioGradientDirection = {read=FRadioGradientDirection, write=FRadioGradientDirection, default=0};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRootItem : public TGradientBar
{
	typedef TGradientBar inherited;
	
private:
	Vcl::Graphics::TFont* FFont;
	System::Uitypes::TColor FSelectedBorderColor;
	System::Uitypes::TColor FSelectedTextColor;
	bool FUseSystemFont;
	System::Uitypes::TColor FHoverTextColor;
	System::Uitypes::TColor FHoverBorderColor;
	System::Uitypes::TColor FSelectedColor;
	System::Uitypes::TColor FSelectedColorTo;
	System::Uitypes::TColor FSelectedColorMirror;
	System::Uitypes::TColor FSelectedColorMirrorTo;
	System::Uitypes::TColor FHoverColor;
	System::Uitypes::TColor FHoverColorTo;
	System::Uitypes::TColor FHoverColorMirror;
	System::Uitypes::TColor FHoverColorMirrorTo;
	TGradientDirection FHoverGradientDirection;
	TGradientDirection FSelectedGradientDirection;
	void __fastcall SetFont(Vcl::Graphics::TFont* const Value);
	void __fastcall SetUseSystemFont(const bool Value);
	System::Uitypes::TColor __fastcall GetSelectedColor(const int Index);
	void __fastcall SetSelectedColor(const int Index, const System::Uitypes::TColor Value);
	System::Uitypes::TColor __fastcall GetHoverColor(const int Index);
	void __fastcall SetHoverColor(const int Index, const System::Uitypes::TColor Value);
	
public:
	__fastcall TRootItem(Vcl::Menus::TMenu* AMenu);
	__fastcall virtual ~TRootItem();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	void __fastcall UpdateFont();
	
__published:
	__property Color = {index=0, default=15062999};
	__property ColorTo = {index=1, default=16249586};
	__property GradientDirection = {default=1};
	__property Vcl::Graphics::TFont* Font = {read=FFont, write=SetFont};
	__property bool UseSystemFont = {read=FUseSystemFont, write=SetUseSystemFont, default=1};
	__property System::Uitypes::TColor SelectedColor = {read=GetSelectedColor, write=SetSelectedColor, index=0, default=15919336};
	__property System::Uitypes::TColor SelectedColorTo = {read=GetSelectedColor, write=SetSelectedColor, index=1, default=13482169};
	__property System::Uitypes::TColor SelectedColorMirror = {read=GetSelectedColor, write=SetSelectedColor, index=2, default=536870911};
	__property System::Uitypes::TColor SelectedColorMirrorTo = {read=GetSelectedColor, write=SetSelectedColor, index=3, default=536870911};
	__property TGradientDirection SelectedGradientDirection = {read=FSelectedGradientDirection, write=FSelectedGradientDirection, default=0};
	__property System::Uitypes::TColor SelectedBorderColor = {read=FSelectedBorderColor, write=FSelectedBorderColor, default=9731196};
	__property System::Uitypes::TColor SelectedTextColor = {read=FSelectedTextColor, write=FSelectedTextColor, default=-16777208};
	__property System::Uitypes::TColor HoverColor = {read=GetHoverColor, write=SetHoverColor, index=0, default=13629183};
	__property System::Uitypes::TColor HoverColorTo = {read=GetHoverColor, write=SetHoverColor, index=1, default=10344703};
	__property System::Uitypes::TColor HoverColorMirror = {read=GetHoverColor, write=SetHoverColor, index=2, default=536870911};
	__property System::Uitypes::TColor HoverColorMirrorTo = {read=GetHoverColor, write=SetHoverColor, index=3, default=536870911};
	__property TGradientDirection HoverGradientDirection = {read=FHoverGradientDirection, write=FHoverGradientDirection, default=0};
	__property System::Uitypes::TColor HoverBorderColor = {read=FHoverBorderColor, write=FHoverBorderColor, default=7293771};
	__property System::Uitypes::TColor HoverTextColor = {read=FHoverTextColor, write=FHoverTextColor, default=-16777208};
};

#pragma pack(pop)

enum DECLSPEC_DENUM TResType : unsigned char { rtx1, rtx15, rtx2, rtundefined };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TMenuGlyphs : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	Vcl::Graphics::TBitmap* FSubMenu;
	Vcl::Graphics::TBitmap* FCheck;
	Vcl::Graphics::TBitmap* FRadio;
	Vcl::Menus::TMenu* FMenu;
	TResType FResType;
	void __fastcall SetSubMenu(Vcl::Graphics::TBitmap* const Value);
	void __fastcall SetCheck(Vcl::Graphics::TBitmap* const Value);
	void __fastcall SetRadio(Vcl::Graphics::TBitmap* const Value);
	
public:
	__fastcall TMenuGlyphs(Vcl::Menus::TMenu* AMenu);
	__fastcall virtual ~TMenuGlyphs();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property Vcl::Menus::TMenu* Menu = {read=FMenu};
	void __fastcall UpdateResources(float dpi);
	
__published:
	__property Vcl::Graphics::TBitmap* SubMenu = {read=FSubMenu, write=SetSubMenu};
	__property Vcl::Graphics::TBitmap* Check = {read=FCheck, write=SetCheck};
	__property Vcl::Graphics::TBitmap* Radio = {read=FRadio, write=SetRadio};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TBarCaption : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	System::UnicodeString FCaption;
	Vcl::Graphics::TFont* FFont;
	int FOffsetY;
	TDirection FDirection;
	System::Uitypes::TColor FShadowColor;
	System::Uitypes::TColor FHighlightColor;
	int FDepth;
	System::Classes::TAlignment FAlignment;
	Vcl::Menus::TMenu* FMenu;
	
protected:
	void __fastcall SetFont(Vcl::Graphics::TFont* Value);
	__property int OffsetY = {read=FOffsetY, write=FOffsetY, default=6};
	
public:
	__fastcall TBarCaption(Vcl::Menus::TMenu* AMenu);
	__fastcall virtual ~TBarCaption();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property System::Uitypes::TColor HighlightColor = {read=FHighlightColor, write=FHighlightColor, default=536870911};
	__property Vcl::Menus::TMenu* Menu = {read=FMenu};
	
__published:
	__property System::Classes::TAlignment Alignment = {read=FAlignment, write=FAlignment, default=0};
	__property System::UnicodeString Caption = {read=FCaption, write=FCaption};
	__property Vcl::Graphics::TFont* Font = {read=FFont, write=SetFont};
	__property System::Uitypes::TColor ShadowColor = {read=FShadowColor, write=FShadowColor, default=536870911};
	__property int Depth = {read=FDepth, write=FDepth, default=1};
	__property TDirection Direction = {read=FDirection, write=FDirection, default=0};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSideBar : public TBarCaption
{
	typedef TBarCaption inherited;
	
private:
	bool FVisible;
	TBackground* FBackground;
	TBackground* FImage;
	int FSplitterWidth;
	TSideBarPosition FPosition;
	int FSize;
	int FSplitterMargin;
	int FSplitterGradientWidth;
	TGradientType FSplitterGradientType;
	System::Uitypes::TColor FBorderColor;
	System::Uitypes::TColor FSplitterColor;
	System::Uitypes::TColor FSplitterColorTo;
	TSideBarVisibleIn FVisibleIn;
	int FPopupHeight;
	Vcl::Menus::TMenu* FMenu;
	TBackground* __fastcall GetImage();
	TBackground* __fastcall GetBackground();
	void __fastcall SetImage(TBackground* const Value);
	void __fastcall SetBackground(TBackground* const Value);
	void __fastcall SetVisible(bool Value);
	bool __fastcall GetVisible();
	
protected:
	__property int PopupHeight = {read=FPopupHeight, write=FPopupHeight, nodefault};
	__property TSideBarPosition Position = {read=FPosition, write=FPosition, default=0};
	
public:
	__fastcall TSideBar(Vcl::Menus::TMenu* AMenu);
	__fastcall virtual ~TSideBar();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property Vcl::Menus::TMenu* Menu = {read=FMenu};
	
__published:
	__property bool Visible = {read=GetVisible, write=SetVisible, default=0};
	__property TSideBarVisibleIn VisibleIn = {read=FVisibleIn, write=FVisibleIn, default=0};
	__property TBackground* Image = {read=GetImage, write=SetImage};
	__property TBackground* Background = {read=GetBackground, write=SetBackground};
	__property int Size = {read=FSize, write=FSize, default=24};
	__property System::Uitypes::TColor SplitterColor = {read=FSplitterColor, write=FSplitterColor, default=8421504};
	__property System::Uitypes::TColor SplitterColorTo = {read=FSplitterColorTo, write=FSplitterColorTo, default=536870911};
	__property int SplitterWidth = {read=FSplitterWidth, write=FSplitterWidth, default=1};
	__property int SplitterMargin = {read=FSplitterMargin, write=FSplitterMargin, default=0};
	__property int SplitterGradientWidth = {read=FSplitterGradientWidth, write=FSplitterGradientWidth, default=0};
	__property TGradientType SplitterGradientType = {read=FSplitterGradientType, write=FSplitterGradientType, default=2};
	__property System::Uitypes::TColor BorderColor = {read=FBorderColor, write=FBorderColor, default=10591645};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TBackground : public TGradientBar
{
	typedef TGradientBar inherited;
	
private:
	Vcl::Graphics::TPicture* FImage;
	int FOffsetX;
	int FOffsetY;
	TBackgroundPosition FPosition;
	int FMarginX;
	int FMarginY;
	Vcl::Graphics::TBitmap* FBitmap;
	Vcl::Menus::TMenu* FMenu;
	Vcl::Graphics::TPicture* __fastcall GetImage();
	Vcl::Graphics::TBitmap* __fastcall GetBitmap();
	
protected:
	void __fastcall SetImage(Vcl::Graphics::TPicture* Value);
	__property Vcl::Graphics::TBitmap* Bitmap = {read=GetBitmap, write=FBitmap};
	
public:
	__fastcall TBackground(Vcl::Menus::TMenu* AMenu);
	__fastcall virtual ~TBackground();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	void __fastcall CalcPicturePosition(const System::Types::TRect &ARect, int &X, int &Y);
	__property Vcl::Menus::TMenu* Menu = {read=FMenu};
	
__published:
	__property Vcl::Graphics::TPicture* Image = {read=GetImage, write=SetImage};
	__property TBackgroundPosition Position = {read=FPosition, write=FPosition, nodefault};
	__property int OffsetX = {read=FOffsetX, write=FOffsetX, default=0};
	__property int OffsetY = {read=FOffsetY, write=FOffsetY, default=0};
	__property int MarginX = {read=FMarginX, write=FMarginX, default=0};
	__property int MarginY = {read=FMarginY, write=FMarginY, default=0};
	__property Color = {index=0, default=16775933};
	__property ColorTo = {index=1, default=536870911};
	__property GradientDirection = {default=0};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSeparator : public TGradientBar
{
	typedef TGradientBar inherited;
	
private:
	TGradientType FGradientType;
	int FGradientWidth;
	int FMargin;
	int FWidth;
	Vcl::Menus::TMenu* FMenu;
	
public:
	__fastcall TSeparator(Vcl::Menus::TMenu* AMenu);
	__fastcall virtual ~TSeparator();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property Vcl::Menus::TMenu* Menu = {read=FMenu};
	
__published:
	__property Color = {index=0, default=9399662};
	__property ColorTo = {index=1, default=536870911};
	__property int Width = {read=FWidth, write=FWidth, default=1};
	__property TGradientType GradientType = {read=FGradientType, write=FGradientType, nodefault};
	__property int GradientWidth = {read=FGradientWidth, write=FGradientWidth, default=0};
	__property int Margin = {read=FMargin, write=FMargin, default=2};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TAdvMainMenu : public Vcl::Menus::TMainMenu
{
	typedef Vcl::Menus::TMainMenu inherited;
	
private:
	TCustomAdvMenuStyler* FMenuStyler;
	TCustomAdvMenuStyler* FInternalMenuStyler;
	TCustomAdvMenuStyler* FCurrentMenuStyler;
	System::Byte FOpacity;
	bool FShowNotes;
	bool FMenuUpdating;
	int FUpdateRef;
	NativeUInt FOldWndHandle;
	void *FOldWndProcPtr;
	bool FDirectUpdate;
	Vcl::Imglist::TCustomImageList* FDisabledImages;
	bool FIntlKeybShortCuts;
	TActionImage FActionImage;
	Advstyleif::TTMSStyle FTMSStyle;
	bool FDesignTime;
	TCustomAdvMenuStyler* __fastcall GetMenuStyler();
	TCustomAdvMenuStyler* __fastcall GetCurrentMenuStyler();
	void __fastcall SetMenuStyler(TCustomAdvMenuStyler* const Value);
	System::Byte __fastcall GetOpacity();
	void __fastcall SetOpacity(const System::Byte Value);
	bool __fastcall GetShowNotes();
	void __fastcall SetShowNotes(const bool Value);
	bool __fastcall GetIntlKeybShortCuts();
	void __fastcall SetIntlKeybShortCuts(const bool Value);
	void __fastcall SetActionImage(const TActionImage Value);
	TActionImage __fastcall GetActionImage();
	HIDESBASE void __fastcall SetBidiMode(const System::Classes::TBiDiMode Value);
	System::Classes::TBiDiMode __fastcall GetBidiMode();
	void __fastcall DrawMDIFormIcon(Vcl::Menus::TMenuItem* MI, const System::Types::TRect &MR);
	System::UnicodeString __fastcall GetVersion();
	void __fastcall SetVersion(const System::UnicodeString Value);
	void __fastcall SetUIStyle(const Advstyleif::TTMSStyle Value);
	
protected:
	HIDESBASE int __stdcall _AddRef();
	HIDESBASE int __stdcall _Release();
	Vcl::Menus::TMenu* __fastcall GetSelf();
	virtual void __fastcall MenuChanged(System::TObject* Sender, Vcl::Menus::TMenuItem* Source, bool Rebuild);
	virtual void __fastcall Loaded();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	void __fastcall AllocMenuStyler();
	void __fastcall MenuFontChanged(System::TObject* Sender);
	void __fastcall ActivateMDIChild(System::TObject* Sender);
	__property System::Byte Opacity = {read=GetOpacity, write=SetOpacity, default=255};
	virtual int __fastcall GetVersionNr();
	__property NativeUInt OldWndHandle = {read=FOldWndHandle, write=FOldWndHandle, nodefault};
	__property void * OldWndProcPtr = {read=FOldWndProcPtr, write=FOldWndProcPtr};
	__property TCustomAdvMenuStyler* CurrentMenuStyler = {read=GetCurrentMenuStyler};
	
public:
	__fastcall virtual TAdvMainMenu(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TAdvMainMenu();
	void __fastcall BeginUpdate();
	void __fastcall EndUpdate();
	HIDESBASE void __fastcall Merge(Vcl::Menus::TMainMenu* Menu);
	void __fastcall ExpandItemWidth(System::TObject* Sender, Vcl::Graphics::TCanvas* ACanvas, int &Width, int &Height);
	void __fastcall AdvancedDrawItem(System::TObject* Sender, Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, Winapi::Windows::TOwnerDrawState State);
	void __fastcall SetComponentStyle(Advstyleif::TTMSStyle AStyle);
	__property bool MenuUpdating = {read=FMenuUpdating, nodefault};
	__property bool DirectUpdate = {read=FDirectUpdate, write=FDirectUpdate, nodefault};
	void __fastcall Refresh();
	
__published:
	__property TActionImage ActionImages = {read=GetActionImage, write=SetActionImage, default=0};
	__property Vcl::Imglist::TCustomImageList* DisabledImages = {read=FDisabledImages, write=FDisabledImages};
	__property TCustomAdvMenuStyler* MenuStyler = {read=GetMenuStyler, write=SetMenuStyler};
	__property OwnerDraw = {default=1};
	__property bool IntlKeybShortCuts = {read=GetIntlKeybShortCuts, write=SetIntlKeybShortCuts, default=0};
	__property bool ShowNotes = {read=GetShowNotes, write=SetShowNotes, default=1};
	__property System::UnicodeString Version = {read=GetVersion, write=SetVersion};
	__property Advstyleif::TTMSStyle UIStyle = {read=FTMSStyle, write=SetUIStyle, default=8};
private:
	void *__IAdvMenu;	// IAdvMenu 
	void *__ITMSStyle;	// Advstyleif::ITMSStyle 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {00000000-0000-0000-C000-000000000046}
	operator System::_di_IInterface()
	{
		System::_di_IInterface intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator System::IInterface*(void) { return (System::IInterface*)&__IAdvMenu; }
	#endif
	operator IAdvMenu*(void) { return (IAdvMenu*)&__IAdvMenu; }
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {11AC2DDC-C087-4298-AB6E-EA1B5017511B}
	operator Advstyleif::_di_ITMSStyle()
	{
		Advstyleif::_di_ITMSStyle intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Advstyleif::ITMSStyle*(void) { return (Advstyleif::ITMSStyle*)&__ITMSStyle; }
	#endif
	
};


class PASCALIMPLEMENTATION TAdvPopupMenu : public Vcl::Menus::TPopupMenu
{
	typedef Vcl::Menus::TPopupMenu inherited;
	
private:
	TCustomAdvMenuStyler* FMenuStyler;
	TCustomAdvMenuStyler* FInternalMenuStyler;
	TCustomAdvMenuStyler* FCurrentMenuStyler;
	System::Byte FOpacity;
	bool FShowNotes;
	bool FMenuUpdating;
	int FUpdateRef;
	bool FDirectUpdate;
	Vcl::Imglist::TCustomImageList* FDisabledImages;
	bool FIntlKeybShortCuts;
	System::Classes::TNotifyEvent FOnClose;
	System::TObject* FItemObject;
	TActionImage FActionImage;
	Advstyleif::TTMSStyle FTMSStyle;
	TCustomAdvMenuStyler* __fastcall GetMenuStyler();
	TCustomAdvMenuStyler* __fastcall GetCurrentMenuStyler();
	void __fastcall SetMenuStyler(TCustomAdvMenuStyler* const Value);
	System::Byte __fastcall GetOpacity();
	void __fastcall SetOpacity(const System::Byte Value);
	bool __fastcall GetShowNotes();
	void __fastcall SetShowNotes(const bool Value);
	TActionImage __fastcall GetActionImage();
	void __fastcall SetActionImage(const TActionImage Value);
	bool __fastcall GetIntlKeybShortCuts();
	void __fastcall SetIntlKeybShortCuts(const bool Value);
	System::Classes::TBiDiMode __fastcall GetBidiMode();
	HIDESBASE void __fastcall SetBidiMode(const System::Classes::TBiDiMode Value);
	void __fastcall AllocMenuStyler();
	System::UnicodeString __fastcall GetVersion();
	void __fastcall SetVersion(const System::UnicodeString Value);
	void __fastcall SetUIStyle(const Advstyleif::TTMSStyle Value);
	
protected:
	HIDESBASE int __stdcall _AddRef();
	HIDESBASE int __stdcall _Release();
	virtual void __fastcall Loaded();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	Vcl::Menus::TMenu* __fastcall GetSelf();
	virtual void __fastcall MenuChanged(System::TObject* Sender, Vcl::Menus::TMenuItem* Source, bool Rebuild);
	__property System::Byte Opacity = {read=GetOpacity, write=SetOpacity, default=255};
	virtual int __fastcall GetVersionNr();
	__property TCustomAdvMenuStyler* CurrentMenuStyler = {read=GetCurrentMenuStyler};
	
public:
	__fastcall virtual TAdvPopupMenu(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TAdvPopupMenu();
	void __fastcall ExpandItemWidth(System::TObject* Sender, Vcl::Graphics::TCanvas* ACanvas, int &Width, int &Height);
	void __fastcall AdvancedDrawItem(System::TObject* Sender, Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, Winapi::Windows::TOwnerDrawState State);
	virtual void __fastcall Popup(int X, int Y)/* overload */;
	HIDESBASE virtual void __fastcall Popup(const System::Types::TPoint &P)/* overload */;
	void __fastcall PopupAtControl(Vcl::Controls::TControl* AControl, TPopopControlPosition Position = (TPopopControlPosition)(0x4), int DeltaX = 0x0, int DeltaY = 0x0);
	void __fastcall PopupAtCursor();
	void __fastcall BeginUpdate();
	void __fastcall EndUpdate();
	void __fastcall SetComponentStyle(Advstyleif::TTMSStyle AStyle);
	__property bool MenuUpdating = {read=FMenuUpdating, nodefault};
	__property bool DirectUpdate = {read=FDirectUpdate, write=FDirectUpdate, nodefault};
	__property System::TObject* ItemObject = {read=FItemObject, write=FItemObject};
	
__published:
	__property TActionImage ActionImages = {read=GetActionImage, write=SetActionImage, default=0};
	__property Vcl::Imglist::TCustomImageList* DisabledImages = {read=FDisabledImages, write=FDisabledImages};
	__property TCustomAdvMenuStyler* MenuStyler = {read=GetMenuStyler, write=SetMenuStyler};
	__property OwnerDraw = {default=1};
	__property bool IntlKeybShortCuts = {read=GetIntlKeybShortCuts, write=SetIntlKeybShortCuts, default=0};
	__property bool ShowNotes = {read=GetShowNotes, write=SetShowNotes, default=1};
	__property System::UnicodeString Version = {read=GetVersion, write=SetVersion};
	__property System::Classes::TNotifyEvent OnClose = {read=FOnClose, write=FOnClose};
	__property Advstyleif::TTMSStyle UIStyle = {read=FTMSStyle, write=SetUIStyle, nodefault};
private:
	void *__IAdvMenu;	// IAdvMenu 
	void *__ITMSStyle;	// Advstyleif::ITMSStyle 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {00000000-0000-0000-C000-000000000046}
	operator System::_di_IInterface()
	{
		System::_di_IInterface intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator System::IInterface*(void) { return (System::IInterface*)&__IAdvMenu; }
	#endif
	operator IAdvMenu*(void) { return (IAdvMenu*)&__IAdvMenu; }
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {11AC2DDC-C087-4298-AB6E-EA1B5017511B}
	operator Advstyleif::_di_ITMSStyle()
	{
		Advstyleif::_di_ITMSStyle intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Advstyleif::ITMSStyle*(void) { return (Advstyleif::ITMSStyle*)&__ITMSStyle; }
	#endif
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::Int8 MAJ_VER = System::Int8(0x2);
static const System::Int8 MIN_VER = System::Int8(0x7);
static const System::Int8 REL_VER = System::Int8(0x1);
static const System::Int8 BLD_VER = System::Int8(0x8);
extern DELPHI_PACKAGE System::ResourceString _AdvResourceRadioItem;
#define Advmenus_AdvResourceRadioItem System::LoadResourceString(&Advmenus::_AdvResourceRadioItem)
extern DELPHI_PACKAGE System::ResourceString _AdvResourceCheckItem;
#define Advmenus_AdvResourceCheckItem System::LoadResourceString(&Advmenus::_AdvResourceCheckItem)
extern DELPHI_PACKAGE System::ResourceString _AdvResourceSubMenuItem;
#define Advmenus_AdvResourceSubMenuItem System::LoadResourceString(&Advmenus::_AdvResourceSubMenuItem)
extern DELPHI_PACKAGE System::ResourceString _AdvWinKeyString;
#define Advmenus_AdvWinKeyString System::LoadResourceString(&Advmenus::_AdvWinKeyString)
static const System::Int8 MENUITEM_SPACING = System::Int8(0x2);
static const System::Int8 ItemTextOffset = System::Int8(0x8);
static const System::Int8 GlyphOffset = System::Int8(0x6);
static const System::Int8 MinItemHeight = System::Int8(0x10);
static const System::Int8 ItemHeightIncrement = System::Int8(0x0);
static const System::Int8 SystemImageWidth = System::Int8(0x8);
static const int TriangleColor = int(0);
static const System::Byte DefaultOpacity = System::Byte(0xff);
static const bool DefaultFlat = true;
static const bool DefaultUseSystemFont = true;
static const int DefaultMenuBorderColor = int(0x7c7c94);
static const int DefaultColor = int(0xd8bdaf);
static const int DefaultColorTo = int(536870911);
static const TGradientDirection DefaultMenuGradientDirection = (TGradientDirection)(0);
static const bool DefaultBarVisible = false;
static const TSideBarVisibleIn DefaultBarVisibleIn = (TSideBarVisibleIn)(0);
static const TSideBarPosition DefaultBarSide = (TSideBarPosition)(0);
static const System::Int8 DefaultBarSize = System::Int8(0x18);
static const int DefaultBarBorder = int(0xa19d9d);
static const int DefaultBarSplitterColor = int(8421504);
static const int DefaultBarSplitterColorTo = int(536870911);
static const System::Int8 DefaultBarSplitterWidth = System::Int8(0x1);
static const System::Int8 DefaultBarSplitterMargin = System::Int8(0x0);
static const System::Int8 DefaultBarSplitterGradientWidth = System::Int8(0x0);
static const TGradientType DefaultBarSplitterGradientType = (TGradientType)(2);
static const int DefaultItemColor = int(0xfffafd);
static const int DefaultItemColorTo = int(536870911);
static const TGradientDirection DefaultItemGradientDirection = (TGradientDirection)(0);
static const int DefaultTextColor = int(-16777208);
static const int DefaultRootItemColor = int(0xe5d7d7);
static const int DefaultRootItemColorTo = int(0xf7f2f2);
static const TGradientDirection DefaultRootItemGradientDirection = (TGradientDirection)(1);
static const int DefaultRootTextColor = int(-16777208);
static const int DefaultRootSelectedColor = int(0xf2e8e8);
static const int DefaultRootSelectedColorTo = int(0xcdb8b9);
static const TGradientDirection DefaultRootSelectedGradientDirection = (TGradientDirection)(0);
static const int DefaultRootSelectedBorder = int(0x947c7c);
static const int DefaultRootSelectedTextColor = int(-16777208);
static const int DefaultHoverColor = int(0xcff6ff);
static const int DefaultHoverColorTo = int(0x9dd8ff);
static const TGradientDirection DefaultHoverGradientDirection = (TGradientDirection)(0);
static const int DefaultHoverBorder = int(0x6f4b4b);
static const int DefaultHoverTextColor = int(-16777208);
static const int DefaultSelectedColor = int(0xc2eeff);
static const int DefaultSelectedColorTo = int(536870911);
static const TGradientDirection DefaultSelectedGradientDirection = (TGradientDirection)(0);
static const int DefaultSelectedBorder = int(0x6f4b4b);
static const int DefaultSelectedTextColor = int(-16777208);
static const int DefaultSelectedCheckColor = int(0x3e80fe);
static const int DefaultSelectedCheckColorTo = int(536870911);
static const int DefaultSelectedCheckBorder = int(0x6f4b4b);
static const TGradientDirection DefaultSelectedCheckGradientDirection = (TGradientDirection)(0);
static const int DefaultSelectedRadioColor = int(0x3e80fe);
static const int DefaultSelectedRadioColorTo = int(536870911);
static const int DefaultSelectedRadioBorder = int(0x6f4b4b);
static const TGradientDirection DefaultSelectedRadioGradientDirection = (TGradientDirection)(0);
static const System::Int8 DefaultIconBarSize = System::Int8(0x18);
static const System::Int8 MinIconBarSize = System::Int8(0x10);
static const int DefaultIconBarColor = int(0xfff9f9);
static const int DefaultIconBarColorTo = int(0xbba0a1);
static const TGradientDirection DefaultIconBarGradientDirection = (TGradientDirection)(1);
static const int DefaultCheckColor = int(0x6fc0ff);
static const int DefaultCheckColorTo = int(536870911);
static const int DefaultCheckBorder = int(0x6f4b4b);
static const TGradientDirection DefaultCheckGradientDirection = (TGradientDirection)(0);
static const int DefaultRadioColor = int(0x6fc0ff);
static const int DefaultRadioColorTo = int(536870911);
static const int DefaultRadioBorder = int(0x6f4b4b);
static const TGradientDirection DefaultRadioGradientDirection = (TGradientDirection)(0);
static const System::Int8 DefaultBarCaptionOffsetY = System::Int8(0x6);
static const System::Classes::TAlignment DefaultBarCaptionAlignment = (System::Classes::TAlignment)(0);
static const TDirection DefaultBarCaptionDirection = (TDirection)(0);
static const int DefaultBarCaptionShadowColor = int(536870911);
static const int DefaultBarCaptionHighlightColor = int(536870911);
static const System::Int8 DefaultBarCaptionDepth = System::Int8(0x1);
static const TBackgroundPosition DefaultBarBitmapPosition = (TBackgroundPosition)(8);
static const bool DefaultBarBitmapTransparent = true;
static const TDrawStyle DefaultBarBackBitmapDrawStyle = (TDrawStyle)(0);
static const TBackgroundPosition DefaultBarBackBitmapPosition = (TBackgroundPosition)(0);
static const bool DefaultBarBackBitmapTransparent = false;
static const System::Int8 DefaultSeparatorMargin = System::Int8(0x2);
static const System::Int8 DefaultSeparatorWidth = System::Int8(0x1);
static const int DefaultSeparatorColor = int(0x8f6d6e);
static const int DefaultSeparatorColorTo = int(536870911);
static const TGradientDirection DefaultSeparatorGradientDirection = (TGradientDirection)(1);
static const TGradientType DefaultSeparatorGradientType = (TGradientType)(2);
static const System::Int8 DefaultSeparatorGradientWidth = System::Int8(0x0);
extern DELPHI_PACKAGE int TriangleSize;
extern DELPHI_PACKAGE void __fastcall MeasureItem(Vcl::Menus::TMenuItem* MenuItem, Vcl::Graphics::TCanvas* ACanvas, int &Width, int &Height, bool SideBarVisible = false);
extern DELPHI_PACKAGE void __fastcall DrawMenuItemBackground(Vcl::Menus::TMenuItem* MenuItem, Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, Winapi::Windows::TOwnerDrawState State, bool SideBarVisible = false);
extern DELPHI_PACKAGE void __fastcall DrawMenuItemText(Vcl::Menus::TMenuItem* MenuItem, Vcl::Graphics::TCanvas* ACanvas, const System::UnicodeString ACaption, System::Types::TRect &Rect, Winapi::Windows::TOwnerDrawState State, int Flags);
extern DELPHI_PACKAGE void __fastcall DrawMenuItem(_di_IAdvMenu AdvMenu, Vcl::Menus::TMenuItem* MenuItem, Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, Winapi::Windows::TOwnerDrawState State);
extern DELPHI_PACKAGE void __fastcall DrawMenuItemEx(_di_IAdvMenu AdvMenu, Vcl::Menus::TMenuItem* MenuItem, Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, Winapi::Windows::TOwnerDrawState State);
extern DELPHI_PACKAGE void __fastcall DrawLineItem(_di_IAdvMenu AdvMenu, Vcl::Menus::TMenuItem* MenuItem, Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, Winapi::Windows::TOwnerDrawState State);
extern DELPHI_PACKAGE void __fastcall DrawFadeLine(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &AClipRect, const System::Types::TRect &ALineRect, System::Uitypes::TColor AColor, int AGradientWidth, bool AClip);
extern DELPHI_PACKAGE void __fastcall DrawBarCaption(_di_IAdvMenu AdvMenu, Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &AClipRect);
extern DELPHI_PACKAGE void __fastcall DrawGradient(Vcl::Graphics::TBitmap* ABitmap, Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, System::Uitypes::TColor ColorFrom, System::Uitypes::TColor ColorTo, TGradientDirection Direction);
extern DELPHI_PACKAGE void __fastcall DrawGradientClipped(Vcl::Graphics::TBitmap* ABitmap, Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, const System::Types::TRect &AClipRect, System::Uitypes::TColor ColorFrom, System::Uitypes::TColor ColorTo, TGradientDirection Direction);
extern DELPHI_PACKAGE void __fastcall DrawFramedGradient(Vcl::Graphics::TBitmap* ABitmap, Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, System::Uitypes::TColor ColorFrom, System::Uitypes::TColor ColorTo, TGradientDirection Direction, System::Uitypes::TColor BorderColor, bool Fill = true);
extern DELPHI_PACKAGE void __fastcall DrawFramedVistaGradient(Vcl::Graphics::TBitmap* ABitmap, Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, System::Uitypes::TColor ColorFrom, System::Uitypes::TColor ColorTo, System::Uitypes::TColor ColorMirrorFrom, System::Uitypes::TColor ColorMirrorTo, TGradientDirection Direction, System::Uitypes::TColor BorderColor, bool Fill = true);
extern DELPHI_PACKAGE void __fastcall DrawGradientEx(Vcl::Graphics::TBitmap* ABitmap, Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, System::Uitypes::TColor ColorFrom, System::Uitypes::TColor ColorTo, TGradientDirection Direction, TGradientType GradientType, int GradientWidth, int Margin);
extern DELPHI_PACKAGE void __fastcall DrawBarBorder(_di_IAdvMenu AdvMenu, Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect);
extern DELPHI_PACKAGE void __fastcall DrawBarSplitter(_di_IAdvMenu AdvMenu, Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect);
extern DELPHI_PACKAGE void __fastcall DrawImage(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, TBackground* AImage, bool BackGradient = true);
extern DELPHI_PACKAGE Vcl::Menus::TMenu* __fastcall GetParentMenuEx(Vcl::Menus::TMenuItem* MenuItem);
extern DELPHI_PACKAGE void __fastcall SetMenuItemEvents(Vcl::Menus::TMenu* Menu, Vcl::Menus::TMenuItem* MenuItem, Vcl::Menus::TMenuMeasureItemEvent ExpandItemWidth, Vcl::Menus::TAdvancedMenuDrawItemEvent AdvancedDrawItem, bool Recursive, bool AllowOwnerDrawn = true);
extern DELPHI_PACKAGE void __fastcall SetMenuOpacity(Vcl::Menus::TMenuItem* MenuItem, Vcl::Graphics::TCanvas* Canvas)/* overload */;
extern DELPHI_PACKAGE void __fastcall SetMenuOpacity(_di_IAdvMenu AdvMenu, const NativeUInt WindowHandle, const System::Byte Opacity)/* overload */;
extern DELPHI_PACKAGE void __fastcall DrawMenuWindowBorder(Vcl::Menus::TMenuItem* MenuItem, Vcl::Graphics::TCanvas* Canvas)/* overload */;
extern DELPHI_PACKAGE void __fastcall RefreshMenu(_di_IAdvMenu AdvMenu, const bool BarChanged, const bool WidthChanged);
extern DELPHI_PACKAGE Vcl::Menus::TMenuItem* __fastcall FirstVisibleItem(Vcl::Menus::TMenuItem* MenuItem);
extern DELPHI_PACKAGE Vcl::Menus::TMenuItem* __fastcall LastVisibleItem(Vcl::Menus::TMenuItem* MenuItem);
extern DELPHI_PACKAGE int __fastcall VisibleMenuIndex(Vcl::Menus::TMenuItem* MenuItem);
extern DELPHI_PACKAGE bool __fastcall IsInFirstVisibleMenu(Vcl::Menus::TMenuItem* MenuItem);
extern DELPHI_PACKAGE bool __fastcall IsInTopMenu(Vcl::Menus::TMenuItem* MenuItem);
extern DELPHI_PACKAGE bool __fastcall IsInFirstLevelMenu(Vcl::Menus::TMenuItem* MenuItem);
extern DELPHI_PACKAGE int __fastcall GetMenuItemLevel(Vcl::Menus::TMenuItem* MenuItem);
extern DELPHI_PACKAGE bool __fastcall IsSideBarVisible(Vcl::Menus::TMenuItem* MenuItem);
extern DELPHI_PACKAGE bool __fastcall IsInTopPopupMenu(Vcl::Menus::TMenuItem* MenuItem);
extern DELPHI_PACKAGE bool __fastcall IsFirstSubMenuItem(Vcl::Menus::TMenuItem* MenuItem);
extern DELPHI_PACKAGE bool __fastcall IsInTopMainMenu(Vcl::Menus::TMenuItem* MenuItem);
extern DELPHI_PACKAGE bool __fastcall IsAfterMenuBreak(Vcl::Menus::TMenuItem* MenuItem);
extern DELPHI_PACKAGE bool __fastcall AfterLastMenuBreak(Vcl::Menus::TMenuItem* MenuItem);
extern DELPHI_PACKAGE bool __fastcall IsRightAligned(Vcl::Menus::TMenuItem* MenuItem, NativeUInt MenuWnd);
extern DELPHI_PACKAGE bool __fastcall IsRightmost(Vcl::Menus::TMenuItem* MenuItem);
extern DELPHI_PACKAGE _di_IAdvMenu __fastcall GetAdvMenuIntf(Vcl::Menus::TMenu* AMenu);
extern DELPHI_PACKAGE _di_IAdvMenu __fastcall GetMenuItemIntf(Vcl::Menus::TMenuItem* AMenuItem);
extern DELPHI_PACKAGE System::UnicodeString __fastcall AdvShortCutToText(System::Classes::TShortCut ShortCut, bool Intl);
extern DELPHI_PACKAGE System::Types::TRect __fastcall GetMenuRect(Vcl::Menus::TMenuItem* MenuItem, NativeUInt MenuWnd);
extern DELPHI_PACKAGE NativeUInt __fastcall GetMenuWnd(Vcl::Menus::TMenu* Menu);
extern DELPHI_PACKAGE NativeUInt __fastcall GetMDIClientWnd(_di_IAdvMenu AdvMenu);
extern DELPHI_PACKAGE Vcl::Forms::TForm* __fastcall FindForm(NativeUInt Window);
extern DELPHI_PACKAGE void __fastcall DisableMenuAnimation(void);
extern DELPHI_PACKAGE void __fastcall RestoreMenuAnimation(void);
}	/* namespace Advmenus */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ADVMENUS)
using namespace Advmenus;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AdvmenusHPP
