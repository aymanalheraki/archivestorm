// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AdvImagePickerDropDown.pas' rev: 35.00 (Windows)

#ifndef AdvimagepickerdropdownHPP
#define AdvimagepickerdropdownHPP

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
#include <AdvStyleIF.hpp>
#include <System.SysUtils.hpp>
#include <System.Types.hpp>
#include <Vcl.Mask.hpp>
#include <Vcl.StdCtrls.hpp>
#include <System.UITypes.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>

//-- user supplied -----------------------------------------------------------

namespace Advimagepickerdropdown
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TImageItem;
class DELPHICLASS TImageItems;
class DELPHICLASS TAdvImagePickerDropDown;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TImageItem : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	Vcl::Controls::TCaption FCaption;
	int FImageIndex;
	bool FEnabled;
	Vcl::Graphics::TPicture* FImage;
	System::Types::TRect FRect;
	System::UnicodeString FHint;
	void __fastcall SetCaption(const Vcl::Controls::TCaption Value);
	void __fastcall SetImage(Vcl::Graphics::TPicture* const Value);
	void __fastcall SetImageIndex(const int Value);
	
protected:
	HIDESBASE void __fastcall Changed();
	__property System::Types::TRect Rect = {read=FRect, write=FRect};
	__property bool Enabled = {read=FEnabled, write=FEnabled, default=1};
	
public:
	__fastcall virtual TImageItem(System::Classes::TCollection* Collection);
	__fastcall virtual ~TImageItem();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property Vcl::Controls::TCaption Caption = {read=FCaption, write=SetCaption};
	__property int ImageIndex = {read=FImageIndex, write=SetImageIndex, default=-1};
	__property Vcl::Graphics::TPicture* Image = {read=FImage, write=SetImage};
	__property System::UnicodeString Hint = {read=FHint, write=FHint};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TImageItems : public System::Classes::TCollection
{
	typedef System::Classes::TCollection inherited;
	
public:
	TImageItem* operator[](int Index) { return this->Items[Index]; }
	
private:
	System::Classes::TPersistent* FMyOwner;
	System::Classes::TNotifyEvent FOnChange;
	HIDESBASE TImageItem* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TImageItem* const Value);
	
protected:
	void __fastcall Change();
	
public:
	__fastcall TImageItems(System::Classes::TPersistent* AOwner);
	__property TImageItem* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
	HIDESBASE TImageItem* __fastcall Add();
	HIDESBASE TImageItem* __fastcall Insert(int Index);
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TImageItems() { }
	
};


class PASCALIMPLEMENTATION TAdvImagePickerDropDown : public Advdropdown::TAdvCustomDropDown
{
	typedef Advdropdown::TAdvCustomDropDown inherited;
	
private:
	Advdropdown::TAdvCustomItemSelector* FItemSelector;
	int FColumns;
	Advdropdown::TItemLayout FLayout;
	TImageItems* FItems;
	int FItemIndex;
	System::Classes::TNotifyEvent FOnSelect;
	Advdropdown::TOnDrawSelectedItem FOnDrawSelectedImage;
	Advdropdown::TItemAppearance* FItemAppearance;
	bool FInternalCall;
	Vcl::Extctrls::TTimer* FKeyTimer;
	System::UnicodeString FCurSearch;
	int FOldItemIndex;
	Advdropdown::TDrawItemEvent FOnDrawItem;
	HIDESBASE MESSAGE void __fastcall WMPaint(Winapi::Messages::TWMPaint &Message);
	HIDESBASE MESSAGE void __fastcall WMKeyDown(Winapi::Messages::TWMKey &Msg);
	void __fastcall DrawSelectedImage();
	void __fastcall OnItemsChanged(System::TObject* Sender);
	void __fastcall OnSelectorItemSelect(System::TObject* Sender);
	void __fastcall OnKeyTimerTime(System::TObject* Sender);
	void __fastcall OnItemSelectorDrawItem(System::TObject* Sender, Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &R, int Index);
	void __fastcall SetColumns(const int Value);
	void __fastcall SetItemIndex(const int Value);
	void __fastcall SetLayout(const Advdropdown::TItemLayout Value);
	void __fastcall SetItems(TImageItems* const Value);
	void __fastcall AssignedItemsToItemSelector();
	void __fastcall SetSelectorProperties();
	void __fastcall SetItemAppearance(Advdropdown::TItemAppearance* const Value);
	int __fastcall GetImageIndex();
	void __fastcall SetImageIndex(const int Value);
	
protected:
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall CreateDropDownForm();
	virtual void __fastcall BeforeDropDown();
	virtual void __fastcall OnHideDropDown();
	virtual void __fastcall UpdateDropDownSize();
	virtual void __fastcall DoHideDropDown(bool Canceled);
	virtual void __fastcall SetEditRect();
	virtual void __fastcall SetSelectionColorStyle(const Advdropdown::TSelectionColorStyle Value);
	virtual void __fastcall HandleMouseWheelDown();
	virtual void __fastcall HandleMouseWheelUp();
	virtual void __fastcall DrawBackGround();
	
public:
	__fastcall virtual TAdvImagePickerDropDown(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TAdvImagePickerDropDown();
	virtual void __fastcall SetComponentStyle(Advstyleif::TTMSStyle AStyle);
	HIDESBASE void __fastcall SelectFirst();
	void __fastcall SelectLast();
	HIDESBASE void __fastcall SelectNext();
	void __fastcall SelectPrevious();
	void __fastcall AddImagesFromFolder(System::UnicodeString AFolder, bool SetImageCaption = false);
	void __fastcall AddImagesFromImageList();
	__property int ImageIndex = {read=GetImageIndex, write=SetImageIndex, nodefault};
	
__published:
	__property int Columns = {read=FColumns, write=SetColumns, default=1};
	__property TImageItems* Items = {read=FItems, write=SetItems};
	__property int ItemIndex = {read=FItemIndex, write=SetItemIndex, default=-1};
	__property Advdropdown::TItemLayout Layout = {read=FLayout, write=SetLayout, default=1};
	__property Advdropdown::TItemAppearance* ItemAppearance = {read=FItemAppearance, write=SetItemAppearance};
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
	__property Cursor = {default=-2};
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
	__property DropDownSizeable = {default=1};
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
	__property TabStop = {default=1};
	__property TabOrder = {default=-1};
	__property System::Classes::TNotifyEvent OnSelect = {read=FOnSelect, write=FOnSelect};
	__property Advdropdown::TOnDrawSelectedItem OnDrawSelectedImage = {read=FOnDrawSelectedImage, write=FOnDrawSelectedImage};
	__property Advdropdown::TDrawItemEvent OnDrawItem = {read=FOnDrawItem, write=FOnDrawItem};
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
	/* TWinControl.CreateParented */ inline __fastcall TAdvImagePickerDropDown(HWND ParentWindow) : Advdropdown::TAdvCustomDropDown(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Advimagepickerdropdown */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ADVIMAGEPICKERDROPDOWN)
using namespace Advimagepickerdropdown;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AdvimagepickerdropdownHPP
