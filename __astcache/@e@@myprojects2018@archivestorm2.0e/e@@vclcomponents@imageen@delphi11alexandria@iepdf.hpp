// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'iepdf.pas' rev: 35.00 (Windows)

#ifndef IepdfHPP
#define IepdfHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.UITypes.hpp>
#include <System.Types.hpp>
#include <Winapi.Windows.hpp>
#include <Vcl.Graphics.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <hyieutils.hpp>
#include <hyiedefs.hpp>
#include <iexBitmaps.hpp>

//-- user supplied -----------------------------------------------------------

namespace Iepdf
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TIEPDFObject;
class DELPHICLASS TIEPDFRefObject;
class DELPHICLASS TIEPDFBooleanObject;
class DELPHICLASS TIEPDFIntegerObject;
class DELPHICLASS TIEPDFRealObject;
class DELPHICLASS TIEPDFStringObject;
class DELPHICLASS TIEPDFNameObject;
class DELPHICLASS TIEPDFArrayObject;
class DELPHICLASS TIEPDFDictionaryObject;
class DELPHICLASS TIEPDFStreamObject;
class DELPHICLASS TIEPDFBuilder;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEPDFObject : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	int Index;
	int Position;
	bool DontFree;
	__fastcall TIEPDFObject();
	__fastcall virtual ~TIEPDFObject();
	virtual void __fastcall Write(System::Classes::TStream* Stream) = 0 ;
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEPDFRefObject : public TIEPDFObject
{
	typedef TIEPDFObject inherited;
	
public:
	int ObjectNumber;
	int GenerationNumber;
	__fastcall TIEPDFRefObject(int ObjNumber, int GenNumber);
	virtual void __fastcall Write(System::Classes::TStream* Stream);
public:
	/* TIEPDFObject.Destroy */ inline __fastcall virtual ~TIEPDFRefObject() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEPDFBooleanObject : public TIEPDFObject
{
	typedef TIEPDFObject inherited;
	
public:
	bool Value;
	__fastcall TIEPDFBooleanObject(bool vv);
	virtual void __fastcall Write(System::Classes::TStream* Stream);
public:
	/* TIEPDFObject.Destroy */ inline __fastcall virtual ~TIEPDFBooleanObject() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEPDFIntegerObject : public TIEPDFObject
{
	typedef TIEPDFObject inherited;
	
public:
	int Value;
	__fastcall TIEPDFIntegerObject(int vv);
	virtual void __fastcall Write(System::Classes::TStream* Stream);
public:
	/* TIEPDFObject.Destroy */ inline __fastcall virtual ~TIEPDFIntegerObject() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TIEPDFRealObject : public TIEPDFObject
{
	typedef TIEPDFObject inherited;
	
public:
	double Value;
	__fastcall TIEPDFRealObject(double vv);
	virtual void __fastcall Write(System::Classes::TStream* Stream);
public:
	/* TIEPDFObject.Destroy */ inline __fastcall virtual ~TIEPDFRealObject() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEPDFStringObject : public TIEPDFObject
{
	typedef TIEPDFObject inherited;
	
public:
	System::AnsiString Value;
	__fastcall TIEPDFStringObject(const System::AnsiString vv);
	virtual void __fastcall Write(System::Classes::TStream* Stream);
public:
	/* TIEPDFObject.Destroy */ inline __fastcall virtual ~TIEPDFStringObject() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEPDFNameObject : public TIEPDFObject
{
	typedef TIEPDFObject inherited;
	
public:
	System::AnsiString Value;
	__fastcall TIEPDFNameObject(const System::AnsiString vv);
	virtual void __fastcall Write(System::Classes::TStream* Stream);
public:
	/* TIEPDFObject.Destroy */ inline __fastcall virtual ~TIEPDFNameObject() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEPDFArrayObject : public TIEPDFObject
{
	typedef TIEPDFObject inherited;
	
public:
	System::Classes::TList* Items;
	__fastcall TIEPDFArrayObject();
	__fastcall virtual ~TIEPDFArrayObject();
	virtual void __fastcall Write(System::Classes::TStream* Stream);
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEPDFDictionaryObject : public TIEPDFObject
{
	typedef TIEPDFObject inherited;
	
public:
	System::Classes::TStringList* items;
	__fastcall TIEPDFDictionaryObject();
	__fastcall virtual ~TIEPDFDictionaryObject();
	virtual void __fastcall Write(System::Classes::TStream* Stream);
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEPDFStreamObject : public TIEPDFObject
{
	typedef TIEPDFObject inherited;
	
	
private:
	typedef System::DynamicArray<System::Byte> _TIEPDFStreamObject__1;
	
	
public:
	_TIEPDFStreamObject__1 databuf;
	TIEPDFDictionaryObject* dict;
	Hyieutils::TIETemporaryFileStream* cache;
	int cacheLength;
	__fastcall TIEPDFStreamObject();
	__fastcall TIEPDFStreamObject(void * copydata, int copylength);
	__fastcall virtual ~TIEPDFStreamObject();
	virtual void __fastcall Write(System::Classes::TStream* Stream);
	void __fastcall FlushToCache();
	void __fastcall AddContent(void * data, int datalen);
};

#pragma pack(pop)

enum DECLSPEC_DENUM TIEPDFRenderingMode : unsigned char { iepdfFillText, iepdfStrokeText, iepdfFillStroke };

enum DECLSPEC_DENUM TIEPDFEndingCap : unsigned char { iepdfButtCaps, iepdfRoundCaps, iepdfProjectingSqCaps };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEPDFBuilder : public System::TObject
{
	typedef System::TObject inherited;
	
	
private:
	typedef System::DynamicArray<Hyiedefs::TDPoint> _TIEPDFBuilder__1;
	
	
private:
	System::Classes::TList* indirectObjects;
	System::Classes::TList* pages;
	System::Classes::TList* images;
	System::Classes::TList* contentStreams;
	TIEPDFDictionaryObject* resources;
	TIEPDFDictionaryObject* catalog;
	System::Classes::TStringList* fonts;
	TIEPDFDictionaryObject* info;
	System::StaticArray<bool, 256> usedStrokeTransps;
	System::StaticArray<bool, 256> usedFillTransps;
	_TIEPDFBuilder__1 pagesSizes;
	int fPageIndex;
	TIEPDFStreamObject* __fastcall GetPageContentStream(int pageIndex);
	void __fastcall AddExternalGraphicState_number(System::UnicodeString Name, System::UnicodeString Operator_, double Value);
	System::UnicodeString __fastcall GetStrokeTransparencyID(double Opacity);
	System::UnicodeString __fastcall GetFillTransparencyID(double Opacity);
	void __fastcall WriteHeader(System::Classes::TStream* Stream);
	void __fastcall WriteFooter(System::Classes::TStream* Stream);
	void __fastcall AddIndirectObject(TIEPDFObject* obj);
	TIEPDFDictionaryObject* __fastcall AddCatalog();
	TIEPDFDictionaryObject* __fastcall AddPageTree();
	void __fastcall WriteIndirectObjects(System::Classes::TStream* Stream);
	void __fastcall AddContent(int PageIndex, System::AnsiString Content);
	void __fastcall AdjustCoords(int PageIndex, double &X, double &Y);
	void __fastcall OP_SaveState(System::AnsiString &str);
	void __fastcall OP_RestoreState(System::AnsiString &str);
	void __fastcall OP_Translation(System::AnsiString &str, double X, double Y);
	void __fastcall OP_ScaleImage(System::AnsiString &str, double Width, double Height);
	void __fastcall OP_Rotate(System::AnsiString &str, double Angle);
	void __fastcall OP_FillTransparency(System::AnsiString &str, double Value);
	void __fastcall OP_StrokeTransparency(System::AnsiString &str, double Value);
	void __fastcall OP_XObject(System::AnsiString &str, const System::UnicodeString ID);
	void __fastcall OP_FillColor(System::AnsiString &str, System::Uitypes::TColor Color);
	void __fastcall OP_StrokeColor(System::AnsiString &str, System::Uitypes::TColor Color);
	void __fastcall OP_StrokeWidth(System::AnsiString &str, double Width);
	void __fastcall OP_Text(System::AnsiString &str, int FontIndex, double FontSize, int RenderingMode, const System::AnsiString Text);
	void __fastcall OP_LinePath(System::AnsiString &str, Hyiedefs::TDPoint *Points, const int Points_High);
	void __fastcall OP_StrokePath(System::AnsiString &str);
	void __fastcall OP_FillAndStrokePath(System::AnsiString &str);
	void __fastcall OP_ClosePath(System::AnsiString &str);
	void __fastcall OP_EndingCap(System::AnsiString &str, int EndingCap);
	void __fastcall OP_MovePath(System::AnsiString &str, const Hyiedefs::TDPoint &P);
	void __fastcall OP_BezierPath(System::AnsiString &str, Hyiedefs::TDPoint *Points, const int Points_High);
	int __fastcall GetPageCount();
	void __fastcall SetInfoTags(const System::UnicodeString PDF_Title, const System::UnicodeString PDF_Author, const System::UnicodeString PDF_Subject, const System::UnicodeString PDF_Keywords, const System::UnicodeString PDF_Creator, const System::UnicodeString PDF_Producer, System::TDateTime CreationDateTime);
	
public:
	__fastcall TIEPDFBuilder();
	__fastcall virtual ~TIEPDFBuilder();
	void __fastcall SaveToStream(System::Classes::TStream* fs, const System::UnicodeString PDF_Title = System::UnicodeString(), const System::UnicodeString PDF_Author = System::UnicodeString(), const System::UnicodeString PDF_Subject = System::UnicodeString(), const System::UnicodeString PDF_Keywords = System::UnicodeString(), const System::UnicodeString PDF_Creator = System::UnicodeString(), const System::UnicodeString PDF_Producer = System::UnicodeString(), System::TDateTime CreationDateTime = 0.000000E+00);
	void __fastcall SaveToFile(const System::WideString FileName, const System::UnicodeString PDF_Title = System::UnicodeString(), const System::UnicodeString PDF_Author = System::UnicodeString(), const System::UnicodeString PDF_Subject = System::UnicodeString(), const System::UnicodeString PDF_Keywords = System::UnicodeString(), const System::UnicodeString PDF_Creator = System::UnicodeString(), const System::UnicodeString PDF_Producer = System::UnicodeString(), System::TDateTime CreationDateTime = 0.000000E+00);
	int __fastcall AddPage(int PaperWidth, int PaperHeight)/* overload */;
	int __fastcall AddPage(Iexbitmaps::TIOPDFPaperSize Size)/* overload */;
	int __fastcall AddPageWithImage(Iexbitmaps::TIEBitmap* Bitmap, Iexbitmaps::TIOParams* IOParams)/* overload */;
	int __fastcall AddPageWithImage(Iexbitmaps::TIEBitmap* Bitmap, Iexbitmaps::TIOParams* IOParams, Hyiedefs::TProgressRec &Progress)/* overload */;
	int __fastcall AddPageWithLayers(System::Classes::TList* LayersList, Iexbitmaps::TIOParams* IOParams)/* overload */;
	int __fastcall AddPageWithLayers(System::Classes::TList* LayersList, Iexbitmaps::TIOParams* IOParams, Hyiedefs::TProgressRec &Progress)/* overload */;
	void __fastcall AddText(double X, double Y, const System::AnsiString Text, double FontSize = 1.800000E+01, const System::WideString FontName = L"Times-Roman", double Rotation = 0.000000E+00, System::Uitypes::TColor FillColor = (System::Uitypes::TColor)(0x0), double FillOpacity = 1.000000E+00, System::Uitypes::TColor BorderColor = (System::Uitypes::TColor)(0x0), double BorderOpacity = 1.000000E+00, TIEPDFRenderingMode RenderingMode = (TIEPDFRenderingMode)(0x0), double LineWidth = 1.000000E+00)/* overload */;
	void __fastcall AddText(double X, double Y, const System::AnsiString Text, double FontSize, Vcl::Graphics::TFont* Font, double Rotation = 0.000000E+00, double Opacity = 1.000000E+00)/* overload */;
	void __fastcall AddText(const System::Types::TRect &Rect, System::AnsiString Text, double FontSize, Vcl::Graphics::TFont* Font, double Rotation = 0.000000E+00, double Opacity = 1.000000E+00)/* overload */;
	void __fastcall AddImage(double X, double Y, int Width, int Height, Iexbitmaps::TIEBitmap* Bitmap, double Rotation, double Opacity, Iexbitmaps::TIOParams* IOParams, Hyiedefs::TProgressRec &Progress)/* overload */;
	void __fastcall AddImage(double X, double Y, int Width, int Height, Iexbitmaps::TIEBitmap* Bitmap, double Rotation = 0.000000E+00, double Opacity = 1.000000E+00, Iexbitmaps::TIOPDFCompression Compression = (Iexbitmaps::TIOPDFCompression)(0x0))/* overload */;
	void __fastcall AddLinePath(Hyiedefs::TDPoint *Points, const int Points_High, System::Uitypes::TColor LineColor, double LineWidth = 1.000000E+00, double LineOpacity = 1.000000E+00, TIEPDFEndingCap EndingCap = (TIEPDFEndingCap)(0x0), bool Filled = false, System::Uitypes::TColor FillColor = (System::Uitypes::TColor)(0x0), double FillOpacity = 1.000000E+00)/* overload */;
	void __fastcall AddLinePath(System::Types::TPoint *Points, const int Points_High, int PointCount, System::Uitypes::TColor LineColor, double LineWidth = 1.000000E+00, double LineOpacity = 1.000000E+00, TIEPDFEndingCap EndingCap = (TIEPDFEndingCap)(0x0), bool Filled = false, System::Uitypes::TColor FillColor = (System::Uitypes::TColor)(0x0), double FillOpacity = 1.000000E+00)/* overload */;
	void __fastcall AddEllipse(double X1, double Y1, double X2, double Y2, System::Uitypes::TColor LineColor, double LineWidth = 1.000000E+00, double LineOpacity = 1.000000E+00, bool Filled = false, System::Uitypes::TColor FillColor = (System::Uitypes::TColor)(0x0), double FillOpacity = 1.000000E+00);
	bool __fastcall AddShape(double X1, double Y1, double X2, double Y2, Hyiedefs::TIEShape Shape, int Angle, System::Uitypes::TColor LineColor, double LineWidth = 1.000000E+00, double LineOpacity = 1.000000E+00, bool Filled = false, System::Uitypes::TColor FillColor = (System::Uitypes::TColor)(0x0), double FillOpacity = 1.000000E+00);
	__property int CurrentPageIndex = {read=fPageIndex, write=fPageIndex, nodefault};
	__property int PageCount = {read=GetPageCount, nodefault};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Iepdf */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_IEPDF)
using namespace Iepdf;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// IepdfHPP
