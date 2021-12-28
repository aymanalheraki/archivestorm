// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AdvDetailDropDown.pas' rev: 35.00 (Windows)

#ifndef AdvdetaildropdownHPP
#define AdvdetaildropdownHPP

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
#include <Vcl.ImgList.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <System.Math.hpp>
#include <AdvDropDown.hpp>
#include <AsgHTMLE.hpp>
#include <AdvStyleIF.hpp>
#include <System.SysUtils.hpp>
#include <System.Types.hpp>
#include <Vcl.Mask.hpp>
#include <Vcl.StdCtrls.hpp>
#include <System.UITypes.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>

//-- user supplied -----------------------------------------------------------

namespace Advdetaildropdown
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TDetailItem;
class DELPHICLASS TDetailItems;
class DELPHICLASS TAdvDetailDropDown;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TDetailItem : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	Vcl::Controls::TCaption FCaption;
	int FImageIndex;
	bool FEnabled;
	Vcl::Graphics::TPicture* FImage;
	System::Types::TRect FRect;
	System::UnicodeString FNotes;
	System::TObject* FItemObject;
	int FTag;
	void __fastcall SetCaption(const Vcl::Controls::TCaption Value);
	void __fastcall SetImage(Vcl::Graphics::TPicture* const Value);
	void __fastcall SetImageIndex(const int Value);
	
protected:
	HIDESBASE void __fastcall Changed();
	__property System::Types::TRect Rect = {read=FRect, write=FRect};
	__property bool Enabled = {read=FEnabled, write=FEnabled, default=1};
	
public:
	__fastcall virtual TDetailItem(System::Classes::TCollection* Collection);
	__fastcall virtual ~TDetailItem();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property Vcl::Controls::TCaption Caption = {read=FCaption, write=SetCaption};
	__property int ImageIndex = {read=FImageIndex, write=SetImageIndex, default=-1};
	__property Vcl::Graphics::TPicture* Image = {read=FImage, write=SetImage};
	__property System::UnicodeString Notes = {read=FNotes, write=FNotes};
	__property int Tag = {read=FTag, write=FTag, nodefault};
	__property System::TObject* ItemObject = {read=FItemObject, write=FItemObject};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TDetailItems : public System::Classes::TCollection
{
	typedef System::Classes::TCollection inherited;
	
public:
	TDetailItem* operator[](int Index) { return this->Items[Index]; }
	
private:
	System::Classes::TPersistent* FMyOwner;
	System::Classes::TNotifyEvent FOnChange;
	HIDESBASE TDetailItem* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TDetailItem* const Value);
	
protected:
	void __fastcall Change();
	
public:
	__fastcall TDetailItems(System::Classes::TPersistent* AOwner);
	__property TDetailItem* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
	HIDESBASE TDetailItem* __fastcall Add();
	HIDESBASE TDetailItem* __fastcall Insert(int Index);
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	int __fastcall IndexOf(System::UnicodeString AValue);
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TDetailItems() { }
	
};


class PASCALIMPLEMENTATION TAdvDetailDropDown : public Advdropdown::TAdvCustomDropDown
{
	typedef Advdropdown::TAdvCustomDropDown inherited;
	
private:
	Advdropdown::TAdvCustomItemSelector* FItemSelector;
	Advdropdown::TItemLayout FLayout;
	TDetailItems* FItems;
	int FItemIndex;
	System::Classes::TNotifyEvent FOnSelect;
	Advdropdown::TOnDrawSelectedItem FOnDrawSelectedImage;
	Advdropdown::TItemAppearance* FItemAppearance;
	bool FInternalCall;
	Vcl::Extctrls::TTimer* FKeyTimer;
	System::UnicodeString FCurSearch;
	int FOldItemIndex;
	int FItemHeight;
	Vcl::Graphics::TFont* FCaptionFont;
	Vcl::Graphics::TFont* FNotesFont;
	bool FWorkMode;
	bool FItemChange;
	int FItemIdx;
	int FItemSel;
	System::UnicodeString FOldValue;
	bool FMatchCase;
	bool FMatchStart;
	System::Classes::TVerticalAlignment FImageVAlign;
	float FDPIScale;
	HIDESBASE MESSAGE void __fastcall WMPaint(Winapi::Messages::TWMPaint &Message);
	HIDESBASE MESSAGE void __fastcall WMKeyDown(Winapi::Messages::TWMKey &Msg);
	void __fastcall OnItemsChanged(System::TObject* Sender);
	void __fastcall OnSelectorItemSelect(System::TObject* Sender);
	void __fastcall OnKeyTimerTime(System::TObject* Sender);
	void __fastcall SetItemIndex(const int Value);
	void __fastcall SetLayout(const Advdropdown::TItemLayout Value);
	void __fastcall SetItems(TDetailItems* const Value);
	void __fastcall AssignedItemsToItemSelector();
	void __fastcall SetSelectorProperties();
	void __fastcall SetItemAppearance(Advdropdown::TItemAppearance* const Value);
	void __fastcall SetCaptionFont(Vcl::Graphics::TFont* const Value);
	void __fastcall SetNotesFont(Vcl::Graphics::TFont* const Value);
	
protected:
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyUp(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall CreateDropDownForm();
	virtual void __fastcall BeforeDropDown();
	virtual void __fastcall OnHideDropDown();
	virtual void __fastcall UpdateDropDownSize();
	virtual void __fastcall DoHideDropDown(bool Cancelled);
	virtual void __fastcall DoShowDropDown();
	virtual void __fastcall SetEditRect();
	virtual void __fastcall SetSelectionColorStyle(const Advdropdown::TSelectionColorStyle Value);
	void __fastcall DrawItem(System::TObject* Sender, Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &R, int Index);
	void __fastcall ItemSize(System::TObject* Sender, System::Types::TSize &ASize);
	void __fastcall DropDownResize(System::TObject* Sender);
	virtual void __fastcall OnDropDownSizing();
	DYNAMIC void __fastcall Change();
	virtual void __fastcall HandleMouseWheelDown();
	virtual void __fastcall HandleMouseWheelUp();
	DYNAMIC void __fastcall ChangeScale(int M, int D, bool isDpiChange)/* overload */;
	
public:
	__fastcall virtual TAdvDetailDropDown(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TAdvDetailDropDown();
	virtual void __fastcall SetComponentStyle(Advstyleif::TTMSStyle AStyle);
	HIDESBASE void __fastcall SelectFirst();
	void __fastcall SelectLast();
	HIDESBASE void __fastcall SelectNext();
	void __fastcall SelectPrevious();
	__property bool MatchCase = {read=FMatchCase, write=FMatchCase, default=0};
	__property bool MatchStart = {read=FMatchStart, write=FMatchStart, default=1};
	
__published:
	__property System::Classes::TVerticalAlignment ImageVAlign = {read=FImageVAlign, write=FImageVAlign, default=2};
	__property TDetailItems* Items = {read=FItems, write=SetItems};
	__property int ItemIndex = {read=FItemIndex, write=SetItemIndex, default=-1};
	__property int ItemHeight = {read=FItemHeight, write=FItemHeight, default=22};
	__property Advdropdown::TItemLayout Layout = {read=FLayout, write=SetLayout, default=1};
	__property Advdropdown::TItemAppearance* ItemAppearance = {read=FItemAppearance, write=SetItemAppearance};
	__property Vcl::Graphics::TFont* CaptionFont = {read=FCaptionFont, write=SetCaptionFont};
	__property Vcl::Graphics::TFont* NotesFont = {read=FNotesFont, write=SetNotesFont};
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property BevelEdges = {default=15};
	__property BevelInner = {index=0, default=2};
	__property BevelKind = {default=0};
	__property BevelOuter = {index=1, default=1};
	__property BevelWidth = {default=1};
	__property BiDiMode;
	__property BorderStyle = {default=1};
	__property Color = {default=-16777211};
	__property Constraints;
	__property Ctl3D;
	__property BorderColor = {default=536870911};
	__property DisabledBorder = {default=1};
	__property FocusBorderColor = {default=536870911};
	__property ImeMode = {default=3};
	__property ImeName = {default=0};
	__property MaxLength = {default=0};
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property Visible = {default=1};
	__property DropDownColor = {default=16777215};
	__property DropDownBorderColor = {default=0};
	__property DropDownBorderWidth = {default=1};
	__property DropDownShadow = {default=1};
	__property DropDownWidth = {default=0};
	__property DropDownHeight = {default=0};
	__property DropPosition = {default=0};
	__property DropDownButtonWidth = {default=17};
	__property DropDownButtonHint = {default=0};
	__property DropDownButtonGlyph;
	__property EditorEnabled = {default=1};
	__property Enabled = {default=1};
	__property Font;
	__property Images;
	__property LabelCaption = {default=0};
	__property LabelPosition = {default=0};
	__property LabelMargin = {default=4};
	__property LabelTransparent = {default=0};
	__property LabelAlwaysEnabled = {default=0};
	__property LabelFont;
	__property Version = {default=0};
	__property ButtonAppearance;
	__property DropDownHeader;
	__property DropDownFooter;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property ReturnIsTab = {default=0};
	__property TabStop = {default=1};
	__property TabOrder = {default=-1};
	__property System::Classes::TNotifyEvent OnSelect = {read=FOnSelect, write=FOnSelect};
	__property Advdropdown::TOnDrawSelectedItem OnDrawSelectedImage = {read=FOnDrawSelectedImage, write=FOnDrawSelectedImage};
	__property OnEnter;
	__property OnExit;
	__property OnChange;
	__property OnClick;
	__property OnDblClick;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDrag;
	__property OnBeforeDropDown;
	__property OnDropDown;
	__property OnDropUp;
	__property OnDropDownHeaderButtonClick;
	__property OnDropDownFooterButtonClick;
	__property OnDrawHeader;
	__property OnDrawFooter;
	__property OnGetHeaderText;
	__property OnGetFooterText;
	__property OnGetDropDownPos;
	__property UIStyle = {default=8};
public:
	/* TWinControl.CreateParented */ inline __fastcall TAdvDetailDropDown(HWND ParentWindow) : Advdropdown::TAdvCustomDropDown(ParentWindow) { }
	
	/* Hoisted overloads: */
	
protected:
	DYNAMIC inline void __fastcall  ChangeScale(int M, int D){ Vcl::Controls::TControl::ChangeScale(M, D); }
	
private:
	void *__ITMSStyle;	// Advstyleif::ITMSStyle 
	
public:
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
}	/* namespace Advdetaildropdown */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ADVDETAILDROPDOWN)
using namespace Advdetaildropdown;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AdvdetaildropdownHPP
