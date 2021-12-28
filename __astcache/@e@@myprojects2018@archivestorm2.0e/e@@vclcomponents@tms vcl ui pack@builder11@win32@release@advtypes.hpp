// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AdvTypes.pas' rev: 35.00 (Windows)

#ifndef AdvtypesHPP
#define AdvtypesHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Vcl.BaseImageCollection.hpp>
#include <System.UITypes.hpp>
#include <System.Types.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <System.SysUtils.hpp>
#include <Vcl.Controls.hpp>
#include <System.Math.hpp>

//-- user supplied -----------------------------------------------------------

namespace Advtypes
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE IAdvProductInfo;
typedef System::DelphiInterface<IAdvProductInfo> _di_IAdvProductInfo;
class DELPHICLASS TAdvSVGImport;
class DELPHICLASS TAdvSVGBitmap;
class DELPHICLASS TAdvSVGImageCollectionItem;
class DELPHICLASS TAdvSVGImageCollectionItems;
class DELPHICLASS TAdvSVGImageCollection;
class DELPHICLASS TAdvBitmap;
struct TRectFHelper /* Helper for record 'System::Types::TRectF' */;
struct TAdvBitmapHelper /* Helper for class 'Vcl::Graphics::TPicture*' */;
struct TAdvObjectHelper /* Helper for class 'System::TObject*' */;
class DELPHICLASS TAdvMargins;
class DELPHICLASS TAdvPoint;
class DELPHICLASS TAdvScaledBitmap;
class DELPHICLASS TAdvScaledBitmaps;
__interface DELPHIINTERFACE IAdvCustomEditor;
typedef System::DelphiInterface<IAdvCustomEditor> _di_IAdvCustomEditor;
template<typename T> class DELPHICLASS TAdvOwnedCollection__1;
class DELPHICLASS TAdvPersistent;
//-- type declarations -------------------------------------------------------
__interface  INTERFACE_UUID("{C53329EA-7B3A-4507-AD9E-88ACD6A85054}") IAdvProductInfo  : public System::IInterface 
{
	virtual System::UnicodeString __fastcall GetVersion() = 0 ;
	virtual System::UnicodeString __fastcall GetDocURL() = 0 ;
	virtual System::UnicodeString __fastcall GetTipsURL() = 0 ;
};

typedef System::Uitypes::TMouseButton TAdvMouseButton;

typedef System::Uitypes::TColor TAdvSVGImportColor;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAdvSVGImport : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Types::TRectF FViewRect;
	bool FGrayScale;
	System::Uitypes::TColor FCustomFillColor;
	System::Uitypes::TColor FCustomStrokeColor;
	System::Uitypes::TColor FTintColor;
	float FCustomOpacity;
	
public:
	virtual bool __fastcall HasElements() = 0 ;
	virtual int __fastcall ElementCount() = 0 ;
	virtual TAdvBitmap* __fastcall GenerateBitmap(float AWidth = -1.000000E+00f, float AHeight = -1.000000E+00f) = 0 ;
	__fastcall virtual TAdvSVGImport();
	virtual void __fastcall Clear() = 0 ;
	virtual void __fastcall Draw(Vcl::Graphics::TCanvas* const ACanvas, const System::Types::TRectF &ARect, bool ANative = false) = 0 ;
	virtual void __fastcall LoadFromText(const System::UnicodeString AText) = 0 ;
	virtual void __fastcall LoadFromFile(const System::UnicodeString AFile) = 0 ;
	virtual void __fastcall LoadFromStream(System::Classes::TStream* const AStream) = 0 ;
	virtual void __fastcall SaveToStream(System::Classes::TStream* const AStream) = 0 ;
	virtual void __fastcall SaveToFile(const System::UnicodeString AFile) = 0 ;
	__property System::Types::TRectF ViewRect = {read=FViewRect, write=FViewRect};
	__property bool GrayScale = {read=FGrayScale, write=FGrayScale, default=0};
	__property System::Uitypes::TColor CustomFillColor = {read=FCustomFillColor, write=FCustomFillColor, nodefault};
	__property System::Uitypes::TColor CustomStrokeColor = {read=FCustomStrokeColor, write=FCustomStrokeColor, nodefault};
	__property System::Uitypes::TColor TintColor = {read=FTintColor, write=FTintColor, nodefault};
	__property float CustomOpacity = {read=FCustomOpacity, write=FCustomOpacity};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TAdvSVGImport() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TAdvSVGBitmap : public Vcl::Graphics::TGraphic
{
	typedef Vcl::Graphics::TGraphic inherited;
	
private:
	TAdvSVGImport* FSVG;
	System::Classes::TMemoryStream* FStream;
	System::Sysutils::TFileName FFileName;
	void __fastcall SetFileName(const System::Sysutils::TFileName Value);
	
protected:
	virtual bool __fastcall GetEmpty();
	virtual int __fastcall GetWidth();
	virtual int __fastcall GetHeight();
	virtual void __fastcall ReadData(System::Classes::TStream* Stream);
	virtual void __fastcall WriteData(System::Classes::TStream* Stream);
	
public:
	__fastcall virtual TAdvSVGBitmap()/* overload */;
	__fastcall virtual ~TAdvSVGBitmap();
	__classmethod virtual bool __fastcall CanLoadFromStream(System::Classes::TStream* Stream);
	virtual bool __fastcall HasSVG();
	virtual void __fastcall Draw(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &Rect);
	void __fastcall Clear();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	virtual void __fastcall AssignTo(System::Classes::TPersistent* Dest);
	virtual void __fastcall LoadFromFile(const System::UnicodeString Filename);
	virtual void __fastcall LoadFromStream(System::Classes::TStream* Stream);
	virtual void __fastcall SaveToStream(System::Classes::TStream* Stream);
	virtual void __fastcall SaveToFile(const System::UnicodeString FileName);
	__property System::Sysutils::TFileName FileName = {read=FFileName, write=SetFileName};
	__property TAdvSVGImport* SVG = {read=FSVG};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TAdvSVGImageCollectionItem : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	Vcl::Graphics::TPicture* FData;
	System::UnicodeString FName;
	bool FGrayScale;
	System::Uitypes::TColor FCustomFillColor;
	System::Uitypes::TColor FCustomStrokeColor;
	System::Uitypes::TColor FTintColor;
	float FCustomOpacity;
	void __fastcall SetData(Vcl::Graphics::TPicture* const Value);
	void __fastcall SetName(const System::UnicodeString Value);
	bool __fastcall IsTintColorStored();
	bool __fastcall IsCustomFillColorStored();
	bool __fastcall IsCustomStrokeColorStored();
	bool __fastcall IsCustomOpacityStored();
	
public:
	__fastcall virtual TAdvSVGImageCollectionItem(System::Classes::TCollection* Collection);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	virtual System::UnicodeString __fastcall GetDisplayName();
	__fastcall virtual ~TAdvSVGImageCollectionItem();
	
__published:
	__property Vcl::Graphics::TPicture* Data = {read=FData, write=SetData};
	__property System::UnicodeString Name = {read=FName, write=SetName};
	__property bool GrayScale = {read=FGrayScale, write=FGrayScale, default=0};
	__property System::Uitypes::TColor TintColor = {read=FTintColor, write=FTintColor, stored=IsTintColorStored, nodefault};
	__property System::Uitypes::TColor CustomFillColor = {read=FCustomFillColor, write=FCustomFillColor, stored=IsCustomFillColorStored, nodefault};
	__property System::Uitypes::TColor CustomStrokeColor = {read=FCustomStrokeColor, write=FCustomStrokeColor, stored=IsCustomStrokeColorStored, nodefault};
	__property float CustomOpacity = {read=FCustomOpacity, write=FCustomOpacity, stored=IsCustomOpacityStored};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAdvSVGImageCollectionItems : public System::Classes::TOwnedCollection
{
	typedef System::Classes::TOwnedCollection inherited;
	
public:
	TAdvSVGImageCollectionItem* operator[](int Index) { return this->Items[Index]; }
	
private:
	HIDESBASE TAdvSVGImageCollectionItem* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TAdvSVGImageCollectionItem* Value);
	
public:
	HIDESBASE TAdvSVGImageCollectionItem* __fastcall Add();
	__property TAdvSVGImageCollectionItem* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
public:
	/* TOwnedCollection.Create */ inline __fastcall TAdvSVGImageCollectionItems(System::Classes::TPersistent* AOwner, System::Classes::TCollectionItemClass ItemClass) : System::Classes::TOwnedCollection(AOwner, ItemClass) { }
	
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TAdvSVGImageCollectionItems() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TAdvSVGImageCollection : public Vcl::Baseimagecollection::TCustomImageCollection
{
	typedef Vcl::Baseimagecollection::TCustomImageCollection inherited;
	
private:
	TAdvSVGImageCollectionItems* FImages;
	void __fastcall SetImages(TAdvSVGImageCollectionItems* const Value);
	
protected:
	virtual int __fastcall GetCount();
	
public:
	__fastcall virtual TAdvSVGImageCollection(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TAdvSVGImageCollection();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	virtual void __fastcall Draw(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, int AIndex, bool AProportional = false)/* overload */;
	HIDESBASE virtual void __fastcall Draw(Vcl::Graphics::TCanvas* ACanvas, int X, int Y, int AIndex, bool AProportional = false)/* overload */;
	virtual bool __fastcall IsIndexAvailable(int AIndex);
	virtual int __fastcall GetIndexByName(const System::UnicodeString AName);
	virtual System::UnicodeString __fastcall GetNameByIndex(int AIndex);
	virtual TAdvSVGImageCollectionItem* __fastcall GetItemByIndex(int AIndex);
	virtual Vcl::Graphics::TBitmap* __fastcall GetBitmap(int AIndex, int AWidth, int AHeight)/* overload */;
	
__published:
	__property TAdvSVGImageCollectionItems* Images = {read=FImages, write=SetImages};
};


typedef Vcl::Graphics::TGraphic TAdvDrawBitmap;

typedef Vcl::Graphics::TPicture TAdvBitmapHelperClass;

class PASCALIMPLEMENTATION TAdvBitmap : public Vcl::Graphics::TPicture
{
	typedef Vcl::Graphics::TPicture inherited;
	
private:
	TAdvSVGImport* __fastcall GetSVG();
	
public:
	virtual bool __fastcall HasSVG();
	__property TAdvSVGImport* SVG = {read=GetSVG};
public:
	/* TPicture.Create */ inline __fastcall TAdvBitmap() : Vcl::Graphics::TPicture() { }
	/* TPicture.Destroy */ inline __fastcall virtual ~TAdvBitmap() { }
	
};


typedef System::DynamicArray<System::UnicodeString> TAdvObjectExcludePropertyListArray;

class PASCALIMPLEMENTATION TAdvMargins : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	float FRight;
	float FBottom;
	float FTop;
	float FLeft;
	System::Classes::TNotifyEvent FOnChange;
	void __fastcall SetBottom(const float Value);
	void __fastcall SetLeft(const float Value);
	void __fastcall SetRight(const float Value);
	void __fastcall SetTop(const float Value);
	bool __fastcall IsLeftStored();
	bool __fastcall IsTopStored();
	bool __fastcall IsRightStored();
	bool __fastcall IsBottomStored();
	
protected:
	void __fastcall Changed();
	
public:
	__fastcall TAdvMargins()/* overload */;
	__fastcall TAdvMargins(const System::Types::TRectF &ARect)/* overload */;
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	bool __fastcall Empty();
	System::Types::TRectF __fastcall Rect();
	System::Types::TRectF __fastcall PaddingRect(const System::Types::TRectF &R);
	
__published:
	__property float Left = {read=FLeft, write=SetLeft, stored=IsLeftStored};
	__property float Top = {read=FTop, write=SetTop, stored=IsTopStored};
	__property float Right = {read=FRight, write=SetRight, stored=IsRightStored};
	__property float Bottom = {read=FBottom, write=SetBottom, stored=IsBottomStored};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TAdvMargins() { }
	
};


class PASCALIMPLEMENTATION TAdvPoint : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	float FY;
	float FX;
	System::Classes::TNotifyEvent FOnChange;
	void __fastcall SetX(const float Value);
	void __fastcall SetY(const float Value);
	bool __fastcall IsXStored();
	bool __fastcall IsYStored();
	
protected:
	void __fastcall Changed();
	
public:
	__fastcall TAdvPoint()/* overload */;
	__fastcall TAdvPoint(const System::Types::TPointF &APoint)/* overload */;
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property float X = {read=FX, write=SetX, stored=IsXStored};
	__property float Y = {read=FY, write=SetY, stored=IsYStored};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TAdvPoint() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TAdvScaledBitmap : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	TAdvBitmap* FBitmap;
	float FScale;
	System::UnicodeString FBitmapName;
	bool __fastcall IsScaleStored();
	void __fastcall SetBitmap(TAdvBitmap* const Value);
	void __fastcall SetScale(const float Value);
	void __fastcall SetBitmapName(const System::UnicodeString Value);
	
protected:
	void __fastcall BitmapChanged(System::TObject* Sender);
	
public:
	__fastcall virtual TAdvScaledBitmap(System::Classes::TCollection* Collection);
	__fastcall virtual ~TAdvScaledBitmap();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property TAdvBitmap* Bitmap = {read=FBitmap, write=SetBitmap};
	__property System::UnicodeString BitmapName = {read=FBitmapName, write=SetBitmapName};
	__property float Scale = {read=FScale, write=SetScale, stored=IsScaleStored};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TAdvScaledBitmaps : public System::Classes::TOwnedCollection
{
	typedef System::Classes::TOwnedCollection inherited;
	
public:
	TAdvScaledBitmap* operator[](int Index) { return this->Items[Index]; }
	
private:
	System::Classes::TNotifyEvent FOnChange;
	TAdvScaledBitmap* __fastcall GetItems(int Index);
	void __fastcall SetItems(int Index, TAdvScaledBitmap* const Value);
	TAdvBitmap* __fastcall GetBitmap(float Scale);
	void __fastcall SetBitmap(float Scale, TAdvBitmap* const Value);
	
protected:
	virtual void __fastcall Update(System::Classes::TCollectionItem* Item);
	
public:
	__fastcall TAdvScaledBitmaps(System::Classes::TPersistent* AOwner);
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	HIDESBASE TAdvScaledBitmap* __fastcall Add(float Scale = 1.000000E+00f)/* overload */;
	TAdvScaledBitmap* __fastcall AddBitmapFromFile(System::UnicodeString FileName, float Scale = 1.000000E+00f);
	TAdvScaledBitmap* __fastcall AddBitmapFromResource(System::UnicodeString ResourceName, float Scale = 1.000000E+00f)/* overload */;
	TAdvScaledBitmap* __fastcall AddBitmapFromResource(System::UnicodeString ResourceName, NativeUInt AInstance, float Scale = 1.000000E+00f)/* overload */;
	TAdvScaledBitmap* __fastcall AddBitmap(TAdvBitmap* Bitmap, float Scale = 1.000000E+00f);
	TAdvScaledBitmap* __fastcall AddBitmapName(System::UnicodeString BitmapName, float Scale = 1.000000E+00f);
	TAdvScaledBitmap* __fastcall AddDrawBitmap(Vcl::Graphics::TGraphic* Bitmap, float Scale = 1.000000E+00f);
	HIDESBASE TAdvScaledBitmap* __fastcall Insert(int Index)/* overload */;
	HIDESBASE TAdvScaledBitmap* __fastcall Insert(int Index, float Scale)/* overload */;
	TAdvBitmap* __fastcall GetBitmapByScale(float Scale);
	TAdvScaledBitmap* __fastcall GetItemByScale(float Scale);
	__property TAdvScaledBitmap* Items[int Index] = {read=GetItems, write=SetItems/*, default*/};
	__property TAdvBitmap* Bitmaps[float Scale] = {read=GetBitmap, write=SetBitmap};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TAdvScaledBitmaps() { }
	
};


enum DECLSPEC_DENUM TAdvPictureFormat : unsigned char { pfBMP, pfGIF, pfJPG, pfPNG, pfICO, pfTiff, pfMetaFile, pfNone };

__interface  INTERFACE_UUID("{CC0C60B7-75F3-47CE-8A7F-8005A19F12E8}") IAdvCustomEditor  : public System::IInterface 
{
	virtual void __fastcall SetText(System::UnicodeString AValue) = 0 ;
	virtual void __fastcall SetSelStart(int AValue) = 0 ;
	virtual void __fastcall SetSelLength(int AValue) = 0 ;
	virtual int __fastcall GetTextLength() = 0 ;
};

#pragma pack(push,4)
// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T> class PASCALIMPLEMENTATION TAdvOwnedCollection__1 : public System::Classes::TOwnedCollection
{
	typedef System::Classes::TOwnedCollection inherited;
	
	
public:
	class DELPHICLASS TEnumerator;
	// Template declaration generated by Delphi parameterized types is
	// used only for accessing Delphi variables and fields.
	// Don't instantiate with new type parameters in user code.
	class PASCALIMPLEMENTATION TEnumerator : public System::TObject
	{
		typedef System::TObject inherited;
		
	private:
		int FIndex;
		TAdvOwnedCollection__1<T>* FCol;
		
	public:
		__fastcall TEnumerator(TAdvOwnedCollection__1<T>* ACol);
		T __fastcall GetCurrent();
		bool __fastcall MoveNext();
		__property T Current = {read=GetCurrent};
		HIDESBASE System::UnicodeString __fastcall ToJSON()/* overload */;
		HIDESBASE void __fastcall FromJSON(const System::UnicodeString Value);
		__property System::UnicodeString JSON = {read=ToJSON, write=FromJSON};
		HIDESBASE System::UnicodeString __fastcall ToJSON(TAdvObjectExcludePropertyListArray AExcludedProperties)/* overload */;
		HIDESBASE void __fastcall Log();
		HIDESBASE void __fastcall SaveToJSONFile(const System::UnicodeString AFileName);
		HIDESBASE void __fastcall LoadFromJSONFile(const System::UnicodeString AFileName);
		HIDESBASE void __fastcall SaveToJSONStream(System::Classes::TStream* const AStream);
		HIDESBASE void __fastcall LoadFromJSONStream(System::Classes::TStream* const AStream);
	public:
		/* TObject.Destroy */ inline __fastcall virtual ~TEnumerator() { }
		
	};
	
	
	
public:
	HIDESBASE TEnumerator* __fastcall GetEnumerator();
	HIDESBASE T __fastcall GetItem(int AIndex);
public:
	/* TOwnedCollection.Create */ inline __fastcall TAdvOwnedCollection__1(System::Classes::TPersistent* AOwner, System::Classes::TCollectionItemClass ItemClass) : System::Classes::TOwnedCollection(AOwner, ItemClass) { }
	
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TAdvOwnedCollection__1() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAdvPersistent : public System::Classes::TInterfacedPersistent
{
	typedef System::Classes::TInterfacedPersistent inherited;
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TAdvPersistent() { }
	
public:
	/* TObject.Create */ inline __fastcall TAdvPersistent() : System::Classes::TInterfacedPersistent() { }
	
};

#pragma pack(pop)

typedef System::Types::TValueRelationship TAdvValueRelationShip;

//-- var, const, procedure ---------------------------------------------------
#define TAdvBaseDocURL L"https://download.tmssoftware.com/Download/Manuals/TMS%20Co"\
	L"mponent%20Pack%20Quick%20Start.pdf"
#define TAdvBaseTipsURL L"https://www.tmssoftware.com/site/tmsvcluipack.asp?s=faq"
static const int pidWeb = int(0x10000);
static const System::Int8 TMSPlatformsDesktop = System::Int8(0x3);
static const System::Int8 TMSPlatforms = System::Int8(0x3);
static const System::Int8 TMSPlatformsWeb = System::Int8(0x3);
static const System::Int8 TMSPlatformsWebDesktop = System::Int8(0x3);
static const System::Int8 KEY_CANCEL = System::Int8(0x3);
static const System::Int8 KEY_CONTROL = System::Int8(0x11);
static const System::Int8 KEY_SHIFT = System::Int8(0x10);
static const System::Int8 KEY_ESCAPE = System::Int8(0x1b);
static const System::Int8 KEY_INSERT = System::Int8(0x2d);
static const System::Int8 KEY_DELETE = System::Int8(0x2e);
static const System::Int8 KEY_TAB = System::Int8(0x9);
static const System::Int8 KEY_SUBTRACT = System::Int8(0x6d);
static const System::Int8 KEY_ADD = System::Int8(0x6b);
static const System::Int8 KEY_MULTIPLY = System::Int8(0x6a);
static const System::Int8 KEY_DIVIDE = System::Int8(0x6f);
static const System::Int8 KEY_PRIOR = System::Int8(0x21);
static const System::Int8 KEY_NEXT = System::Int8(0x22);
static const System::Int8 KEY_UP = System::Int8(0x26);
static const System::Int8 KEY_DOWN = System::Int8(0x28);
static const System::Int8 KEY_RIGHT = System::Int8(0x27);
static const System::Int8 KEY_LEFT = System::Int8(0x25);
static const System::Int8 KEY_HOME = System::Int8(0x24);
static const System::Int8 KEY_END = System::Int8(0x23);
static const System::Int8 KEY_RETURN = System::Int8(0xd);
static const System::Int8 KEY_SPACE = System::Int8(0x20);
static const System::Int8 KEY_MENU = System::Int8(0x12);
static const System::Int8 KEY_BACK = System::Int8(0x8);
static const System::Int8 KEY_F1 = System::Int8(0x70);
static const System::Int8 KEY_F2 = System::Int8(0x71);
static const System::Int8 KEY_F3 = System::Int8(0x72);
static const System::Int8 KEY_F4 = System::Int8(0x73);
static const System::Int8 KEY_F5 = System::Int8(0x74);
static const System::Int8 KEY_F6 = System::Int8(0x75);
static const System::Int8 KEY_F7 = System::Int8(0x76);
static const System::Int8 KEY_F8 = System::Int8(0x77);
static const System::Int8 KEY_F9 = System::Int8(0x78);
static const System::Int8 KEY_F10 = System::Int8(0x79);
static const System::Int8 KEY_F11 = System::Int8(0x7a);
static const System::Int8 KEY_F12 = System::Int8(0x7b);
extern DELPHI_PACKAGE void __fastcall Register(void);
extern DELPHI_PACKAGE System::UnicodeString __fastcall CreateNewGUID(void);
extern DELPHI_PACKAGE bool __fastcall CharIsHex(System::WideChar AChar);
extern DELPHI_PACKAGE bool __fastcall CharIsLetter(System::WideChar AChar);
extern DELPHI_PACKAGE bool __fastcall CharIsNumber(System::WideChar AChar);
extern DELPHI_PACKAGE bool __fastcall CharIsLetterOrNumber(System::WideChar AChar);
extern DELPHI_PACKAGE bool __fastcall CharInArray(System::WideChar AChar, System::WideChar *ACharArray, const int ACharArray_High);
extern DELPHI_PACKAGE bool __fastcall IsBitmapEmpty(Vcl::Graphics::TPicture* ABitmap);
extern DELPHI_PACKAGE Vcl::Graphics::TGraphic* __fastcall BitmapToDrawBitmap(Vcl::Graphics::TPicture* ABitmap)/* overload */;
extern DELPHI_PACKAGE bool __fastcall EqualRectEx(const System::Types::TRect &R1, const System::Types::TRect &R2)/* overload */;
extern DELPHI_PACKAGE bool __fastcall EqualRectEx(const System::Types::TRectF &R1, const System::Types::TRectF &R2)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IntersectRectEx(const System::Types::TRectF &Rect1, const System::Types::TRectF &Rect2)/* overload */;
extern DELPHI_PACKAGE bool __fastcall OffsetRectEx(System::Types::TRect &R, int DX, int DY)/* overload */;
extern DELPHI_PACKAGE bool __fastcall OffsetRectEx(System::Types::TRectF &R, float DX, float DY)/* overload */;
extern DELPHI_PACKAGE void __fastcall InflateRectEx(System::Types::TRectF &R, float DX, float DY);
extern DELPHI_PACKAGE bool __fastcall PtInRectEx(const System::Types::TRectF &Rect, const System::Types::TPointF &P);
extern DELPHI_PACKAGE int __fastcall RectWidthEx(const System::Types::TRect &Rect)/* overload */;
extern DELPHI_PACKAGE int __fastcall RectHeightEx(const System::Types::TRect &Rect)/* overload */;
extern DELPHI_PACKAGE float __fastcall RectWidthEx(const System::Types::TRectF &Rect)/* overload */;
extern DELPHI_PACKAGE float __fastcall RectHeightEx(const System::Types::TRectF &Rect)/* overload */;
extern DELPHI_PACKAGE System::Types::TRectF __fastcall RectCenterAtEx(const System::Types::TRectF &Rect, const System::Types::TRectF &ADesignatedArea);
extern DELPHI_PACKAGE System::Types::TRectF __fastcall RectSnapToPixelEx(const System::Types::TRectF &Rect, const float AScale, const bool APlaceBetweenPixels);
extern DELPHI_PACKAGE System::Types::TRectF __fastcall RectFitIntoEx(const System::Types::TRectF &Rect, const System::Types::TRectF &ADesignatedArea, /* out */ float &Ratio)/* overload */;
extern DELPHI_PACKAGE System::Types::TRectF __fastcall RectFitIntoEx(const System::Types::TRectF &Rect, const System::Types::TRectF &ADesignatedArea)/* overload */;
extern DELPHI_PACKAGE System::Types::TRect __fastcall RectCenterEx(System::Types::TRect &R, const System::Types::TRect &B)/* overload */;
extern DELPHI_PACKAGE System::Types::TRectF __fastcall RectCenterEx(System::Types::TRectF &R, const System::Types::TRectF &B)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IntersectRectEx(/* out */ System::Types::TRectF &Rect, const System::Types::TRectF &R1, const System::Types::TRectF &R2)/* overload */;
extern DELPHI_PACKAGE System::Types::TRectF __fastcall EmptyRect(void);
extern DELPHI_PACKAGE bool __fastcall RectIsEmpty(const System::Types::TRectF &R);
extern DELPHI_PACKAGE System::Types::TValueRelationship __fastcall CompareValueEx(const System::Extended A, const System::Extended B, System::Extended Epsilon = 0.000000E+00);
extern DELPHI_PACKAGE bool __fastcall RectIntersectsWithEx(const System::Types::TRectF &ARect, const System::Types::TRectF &R);
extern DELPHI_PACKAGE System::Types::TPointF __fastcall CenterPointEx(const System::Types::TRectF &R);
extern DELPHI_PACKAGE System::Types::TRectF __fastcall MakeRectF(float Left, float Top, float Width, float Height);
extern DELPHI_PACKAGE float __fastcall GetPointLength(const System::Types::TPointF &Point);
extern DELPHI_PACKAGE System::Types::TRect __fastcall ConvertToRect(const System::Types::TRect &Rect)/* overload */;
extern DELPHI_PACKAGE System::Types::TRect __fastcall ConvertToRect(const System::Types::TRectF &Rect)/* overload */;
extern DELPHI_PACKAGE System::Types::TRectF __fastcall ConvertToRectF(const System::Types::TRectF &Rect)/* overload */;
extern DELPHI_PACKAGE System::Types::TRectF __fastcall ConvertToRectF(const System::Types::TRect &Rect)/* overload */;
extern DELPHI_PACKAGE System::Types::TPoint __fastcall ConvertToPoint(const System::Types::TPoint &Point)/* overload */;
extern DELPHI_PACKAGE System::Types::TPoint __fastcall ConvertToPoint(const System::Types::TPointF &Point)/* overload */;
extern DELPHI_PACKAGE System::Types::TPointF __fastcall ConvertToPointF(const System::Types::TPointF &Point)/* overload */;
extern DELPHI_PACKAGE System::Types::TPointF __fastcall ConvertToPointF(const System::Types::TPoint &Point)/* overload */;
extern DELPHI_PACKAGE System::Types::TSize __fastcall ConvertToSize(const System::Types::TSize &Size)/* overload */;
extern DELPHI_PACKAGE System::Types::TSize __fastcall ConvertToSize(const System::Types::TSizeF &Size)/* overload */;
extern DELPHI_PACKAGE System::Types::TSizeF __fastcall ConvertToSizeF(const System::Types::TSizeF &Size)/* overload */;
extern DELPHI_PACKAGE System::Types::TSizeF __fastcall ConvertToSizeF(const System::Types::TSize &Size)/* overload */;
}	/* namespace Advtypes */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ADVTYPES)
using namespace Advtypes;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AdvtypesHPP
