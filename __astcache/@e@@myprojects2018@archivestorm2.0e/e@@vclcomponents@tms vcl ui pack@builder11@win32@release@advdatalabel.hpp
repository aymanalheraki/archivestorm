// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AdvDataLabel.pas' rev: 35.00 (Windows)

#ifndef AdvdatalabelHPP
#define AdvdatalabelHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <System.Types.hpp>
#include <Vcl.Controls.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <System.UITypes.hpp>
#include <Vcl.Menus.hpp>

//-- user supplied -----------------------------------------------------------

namespace Advdatalabel
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TAdvCustomDataLabel;
class DELPHICLASS TAdvDataLabel;
class DELPHICLASS TDataItem;
class DELPHICLASS TDataCollection;
class DELPHICLASS TAdvDataList;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TDataType : unsigned char { dtString, dtInteger, dtFloat, dtDateTime };

enum DECLSPEC_DENUM TEllipsis : unsigned char { elNone, elEnd, elPath };

class PASCALIMPLEMENTATION TAdvCustomDataLabel : public Vcl::Controls::TGraphicControl
{
	typedef Vcl::Controls::TGraphicControl inherited;
	
private:
	int FCaptionMargin;
	System::Classes::TAlignment FCaptionAlignment;
	System::Classes::TAlignment FDataAlignment;
	Vcl::Graphics::TFont* FDataFont;
	int FDataIndent;
	TEllipsis FDataEllipsis;
	TEllipsis FCaptionEllipsis;
	System::UnicodeString FSeparator;
	bool FURLUnderline;
	System::Uitypes::TColor FURLColor;
	bool FShowAccelChar;
	void __fastcall SetCaptionMargin(const int Value);
	void __fastcall SetCaptionAlignment(const System::Classes::TAlignment Value);
	void __fastcall SetDataAlignment(const System::Classes::TAlignment Value);
	void __fastcall SetDataIndent(const int Value);
	void __fastcall SetDataFont(Vcl::Graphics::TFont* const Value);
	void __fastcall SetCaptionEllipsis(const TEllipsis Value);
	void __fastcall SetDataEllipsis(const TEllipsis Value);
	void __fastcall SetSeparator(const System::UnicodeString Value);
	void __fastcall SetURLColor(const System::Uitypes::TColor Value);
	void __fastcall SetURLUnderline(const bool Value);
	System::UnicodeString __fastcall GetVersion();
	void __fastcall SetVersion(const System::UnicodeString Value);
	int __fastcall GetVersionNr();
	void __fastcall SetShowAccelChar(const bool Value);
	
protected:
	void __fastcall DrawItem(System::UnicodeString Caption, System::UnicodeString Data, Vcl::Graphics::TFont* DataFont, System::Classes::TAlignment AAlignment, TEllipsis AEllipsis, const System::Types::TRect &ARect, bool Selected);
	
public:
	__fastcall virtual TAdvCustomDataLabel(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TAdvCustomDataLabel();
	__property System::Classes::TAlignment CaptionAlignment = {read=FCaptionAlignment, write=SetCaptionAlignment, default=0};
	__property TEllipsis CaptionEllipsis = {read=FCaptionEllipsis, write=SetCaptionEllipsis, default=0};
	__property int CaptionMargin = {read=FCaptionMargin, write=SetCaptionMargin, nodefault};
	__property System::Classes::TAlignment DataAlignment = {read=FDataAlignment, write=SetDataAlignment, default=0};
	__property TEllipsis DataEllipsis = {read=FDataEllipsis, write=SetDataEllipsis, default=0};
	__property Vcl::Graphics::TFont* DataFont = {read=FDataFont, write=SetDataFont};
	__property int DataIndent = {read=FDataIndent, write=SetDataIndent, default=60};
	__property System::UnicodeString Separator = {read=FSeparator, write=SetSeparator};
	__property bool ShowAccelChar = {read=FShowAccelChar, write=SetShowAccelChar, default=1};
	__property System::Uitypes::TColor URLColor = {read=FURLColor, write=SetURLColor, default=16711680};
	__property bool URLUnderline = {read=FURLUnderline, write=SetURLUnderline, default=1};
	__property System::UnicodeString Version = {read=GetVersion, write=SetVersion};
};


class PASCALIMPLEMENTATION TAdvDataLabel : public TAdvCustomDataLabel
{
	typedef TAdvCustomDataLabel inherited;
	
private:
	System::UnicodeString FCaption;
	System::UnicodeString FData;
	System::UnicodeString FDataFormat;
	int FDataAsInt;
	double FDataAsFloat;
	System::TDateTime FDataAsDateTime;
	TDataType FDataType;
	System::UnicodeString FDataFloatFormat;
	System::UnicodeString FDataDateFormat;
	System::UnicodeString FDataIntFormat;
	bool FSelected;
	System::Uitypes::TCursor FOldCursor;
	System::Classes::TNotifyEvent FOnAnchorClick;
	System::UnicodeString FDataHint;
	bool FDataURL;
	bool FInData;
	void __fastcall SetCaption(const System::UnicodeString Value);
	void __fastcall SetData(const System::UnicodeString Value);
	void __fastcall SetDataAsDate(const System::TDateTime Value);
	void __fastcall SetDataAsDateTime(const System::TDateTime Value);
	void __fastcall SetDataAsFloat(const double Value);
	void __fastcall SetDataAsInt(const int Value);
	void __fastcall SetDataAsTime(const System::TDateTime Value);
	void __fastcall SetDataFormat(const System::UnicodeString Value);
	void __fastcall SetDataDateFormat(const System::UnicodeString Value);
	void __fastcall SetDataFloatFormat(const System::UnicodeString Value);
	void __fastcall SetDataIntFormat(const System::UnicodeString Value);
	void __fastcall SetSelected(const bool Value);
	void __fastcall SetDataURL(const bool Value);
	HIDESBASE MESSAGE void __fastcall CMHintShow(Winapi::Messages::TMessage &Msg);
	
protected:
	DYNAMIC void __fastcall DblClick();
	DYNAMIC void __fastcall Click();
	virtual void __fastcall Paint();
	virtual void __fastcall Loaded();
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	System::Types::TRect __fastcall GetDataRect();
	virtual System::UnicodeString __fastcall GetDataString();
	virtual System::UnicodeString __fastcall GetCaptionString();
	virtual void __fastcall DoAnchorClick();
	
public:
	__fastcall virtual TAdvDataLabel(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TAdvDataLabel();
	__property int DataAsInt = {read=FDataAsInt, write=SetDataAsInt, nodefault};
	__property double DataAsFloat = {read=FDataAsFloat, write=SetDataAsFloat};
	__property System::TDateTime DataAsDate = {read=FDataAsDateTime, write=SetDataAsDate};
	__property System::TDateTime DataAsTime = {read=FDataAsDateTime, write=SetDataAsTime};
	__property System::TDateTime DataAsDateTime = {read=FDataAsDateTime, write=SetDataAsDateTime};
	__property bool Selected = {read=FSelected, write=SetSelected, nodefault};
	
__published:
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property Constraints;
	__property System::UnicodeString Caption = {read=FCaption, write=SetCaption};
	__property CaptionAlignment = {default=0};
	__property CaptionEllipsis = {default=0};
	__property System::UnicodeString Data = {read=FData, write=SetData};
	__property Font;
	__property DataAlignment = {default=0};
	__property DataEllipsis = {default=0};
	__property DataFont;
	__property System::UnicodeString DataFormat = {read=FDataFormat, write=SetDataFormat};
	__property DataIndent = {default=60};
	__property System::UnicodeString DataIntFormat = {read=FDataIntFormat, write=SetDataIntFormat};
	__property System::UnicodeString DataFloatFormat = {read=FDataFloatFormat, write=SetDataFloatFormat};
	__property System::UnicodeString DataDateFormat = {read=FDataDateFormat, write=SetDataDateFormat};
	__property System::UnicodeString DataHint = {read=FDataHint, write=FDataHint};
	__property bool DataURL = {read=FDataURL, write=SetDataURL, default=0};
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property PopupMenu;
	__property Separator = {default=0};
	__property ShowAccelChar = {default=1};
	__property ShowHint;
	__property URLColor = {default=16711680};
	__property URLUnderline = {default=1};
	__property Version = {default=0};
	__property System::Classes::TNotifyEvent OnAnchorClick = {read=FOnAnchorClick, write=FOnAnchorClick};
	__property OnClick;
	__property OnContextPopup;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDock;
	__property OnEndDrag;
	__property Touch;
	__property OnGesture;
	__property OnMouseDown;
	__property OnMouseActivate;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnStartDock;
	__property OnStartDrag;
};


class PASCALIMPLEMENTATION TDataItem : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	System::UnicodeString FCaption;
	System::UnicodeString FData;
	System::UnicodeString FDataFormat;
	int FDataAsInt;
	double FDataAsFloat;
	System::TDateTime FDataAsDateTime;
	TDataType FDataType;
	System::UnicodeString FDataFloatFormat;
	System::UnicodeString FDataDateFormat;
	System::UnicodeString FDataIntFormat;
	System::UnicodeString FDataHint;
	bool FDataURL;
	Vcl::Graphics::TFont* FDataFont;
	TEllipsis FDataEllipsis;
	System::Classes::TAlignment FDataAlignment;
	void __fastcall SetCaption(const System::UnicodeString Value);
	void __fastcall SetData(const System::UnicodeString Value);
	void __fastcall SetDataAsDate(const System::TDateTime Value);
	void __fastcall SetDataAsDateTime(const System::TDateTime Value);
	void __fastcall SetDataAsFloat(const double Value);
	void __fastcall SetDataAsInt(const int Value);
	void __fastcall SetDataAsTime(const System::TDateTime Value);
	void __fastcall SetDataDateFormat(const System::UnicodeString Value);
	void __fastcall SetDataFloatFormat(const System::UnicodeString Value);
	void __fastcall SetDataFormat(const System::UnicodeString Value);
	void __fastcall SetDataIntFormat(const System::UnicodeString Value);
	void __fastcall SetDataURL(const bool Value);
	void __fastcall SetDataFont(Vcl::Graphics::TFont* const Value);
	void __fastcall SetDataEllipsis(const TEllipsis Value);
	void __fastcall SetDataAlignment(const System::Classes::TAlignment Value);
	
public:
	__fastcall virtual TDataItem(System::Classes::TCollection* Collection);
	__fastcall virtual ~TDataItem();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	HIDESBASE void __fastcall Changed();
	System::UnicodeString __fastcall GetCaptionString();
	System::UnicodeString __fastcall GetDataString();
	__property int DataAsInt = {read=FDataAsInt, write=SetDataAsInt, nodefault};
	__property double DataAsFloat = {read=FDataAsFloat, write=SetDataAsFloat};
	__property System::TDateTime DataAsDate = {read=FDataAsDateTime, write=SetDataAsDate};
	__property System::TDateTime DataAsTime = {read=FDataAsDateTime, write=SetDataAsTime};
	__property System::TDateTime DataAsDateTime = {read=FDataAsDateTime, write=SetDataAsDateTime};
	
__published:
	__property System::UnicodeString Caption = {read=FCaption, write=SetCaption};
	__property System::UnicodeString Data = {read=FData, write=SetData};
	__property System::Classes::TAlignment DataAlignment = {read=FDataAlignment, write=SetDataAlignment, default=0};
	__property TEllipsis DataEllipsis = {read=FDataEllipsis, write=SetDataEllipsis, default=0};
	__property Vcl::Graphics::TFont* DataFont = {read=FDataFont, write=SetDataFont};
	__property System::UnicodeString DataFormat = {read=FDataFormat, write=SetDataFormat};
	__property System::UnicodeString DataIntFormat = {read=FDataIntFormat, write=SetDataIntFormat};
	__property System::UnicodeString DataFloatFormat = {read=FDataFloatFormat, write=SetDataFloatFormat};
	__property System::UnicodeString DataDateFormat = {read=FDataDateFormat, write=SetDataDateFormat};
	__property System::UnicodeString DataHint = {read=FDataHint, write=FDataHint};
	__property bool DataURL = {read=FDataURL, write=SetDataURL, default=0};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TDataCollection : public System::Classes::TCollection
{
	typedef System::Classes::TCollection inherited;
	
public:
	TDataItem* operator[](int Index) { return this->Items[Index]; }
	
private:
	TAdvDataList* FList;
	HIDESBASE TDataItem* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TDataItem* const Value);
	
protected:
	virtual void __fastcall Update(System::Classes::TCollectionItem* Item);
	
public:
	__fastcall TDataCollection(TAdvDataList* AOwner);
	HIDESBASE TDataItem* __fastcall Add();
	HIDESBASE TDataItem* __fastcall Insert(int Index);
	__property TDataItem* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TDataCollection() { }
	
};

#pragma pack(pop)

typedef void __fastcall (__closure *TAnchorEvent)(System::TObject* Sender, int Index);

class PASCALIMPLEMENTATION TAdvDataList : public TAdvCustomDataLabel
{
	typedef TAdvCustomDataLabel inherited;
	
private:
	TDataCollection* FData;
	int FHintItem;
	System::Uitypes::TCursor FOldCursor;
	TAnchorEvent FOnAnchorClick;
	void __fastcall SetData(TDataCollection* const Value);
	
protected:
	virtual void __fastcall Paint();
	virtual void __fastcall Loaded();
	HIDESBASE MESSAGE void __fastcall CMHintShow(Winapi::Messages::TMessage &Msg);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall DoAnchorClick(int Index);
	
public:
	__fastcall virtual TAdvDataList(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TAdvDataList();
	int __fastcall XYToItem(int X, int Y);
	System::Types::TRect __fastcall GetItemRect(int Index);
	System::Types::TRect __fastcall GetDataRect(int Index);
	
__published:
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property Constraints;
	__property CaptionAlignment = {default=0};
	__property CaptionEllipsis = {default=0};
	__property TDataCollection* Data = {read=FData, write=SetData};
	__property DataFont;
	__property DataIndent = {default=60};
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property PopupMenu;
	__property Separator = {default=0};
	__property ShowHint;
	__property Version = {default=0};
	__property TAnchorEvent OnAnchorClick = {read=FOnAnchorClick, write=FOnAnchorClick};
	__property OnClick;
	__property OnContextPopup;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnGesture;
	__property Touch;
	__property OnMouseDown;
	__property OnMouseActivate;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnStartDock;
	__property OnStartDrag;
};


//-- var, const, procedure ---------------------------------------------------
static const System::Int8 MAJ_VER = System::Int8(0x1);
static const System::Int8 MIN_VER = System::Int8(0x0);
static const System::Int8 REL_VER = System::Int8(0x1);
static const System::Int8 BLD_VER = System::Int8(0x0);
}	/* namespace Advdatalabel */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ADVDATALABEL)
using namespace Advdatalabel;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AdvdatalabelHPP
