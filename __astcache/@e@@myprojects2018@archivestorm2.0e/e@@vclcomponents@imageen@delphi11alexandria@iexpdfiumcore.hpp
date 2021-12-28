// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'iexPdfiumCore.pas' rev: 35.00 (Windows)

#ifndef IexpdfiumcoreHPP
#define IexpdfiumcoreHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.WinSpool.hpp>
#include <System.Types.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <System.Contnrs.hpp>
#include <iexPdfiumLib.hpp>
#include <Vcl.Graphics.hpp>
#include <hyiedefs.hpp>

//-- user supplied -----------------------------------------------------------

namespace Iexpdfiumcore
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS EPdfException;
class DELPHICLASS EPdfUnsupportedFeatureException;
class DELPHICLASS EPdfArgumentOutOfRange;
class DELPHICLASS _TPdfBitmapHideCreator;
class DELPHICLASS TPdfBitmap;
struct TPdfFormFillHandler;
class DELPHICLASS TPdfPage;
struct TPdfAttachment;
class DELPHICLASS TPdfAttachmentList;
class DELPHICLASS TPdfDocument;
class DELPHICLASS TPdfDocumentPrinter;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION EPdfException : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EPdfException(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EPdfException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EPdfException(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EPdfException(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EPdfException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EPdfException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EPdfException(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EPdfException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPdfException(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPdfException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPdfException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPdfException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EPdfException() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EPdfUnsupportedFeatureException : public EPdfException
{
	typedef EPdfException inherited;
	
public:
	/* Exception.Create */ inline __fastcall EPdfUnsupportedFeatureException(const System::UnicodeString Msg) : EPdfException(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EPdfUnsupportedFeatureException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EPdfException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EPdfUnsupportedFeatureException(NativeUInt Ident)/* overload */ : EPdfException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EPdfUnsupportedFeatureException(System::PResStringRec ResStringRec)/* overload */ : EPdfException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EPdfUnsupportedFeatureException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EPdfException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EPdfUnsupportedFeatureException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EPdfException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EPdfUnsupportedFeatureException(const System::UnicodeString Msg, int AHelpContext) : EPdfException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EPdfUnsupportedFeatureException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EPdfException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPdfUnsupportedFeatureException(NativeUInt Ident, int AHelpContext)/* overload */ : EPdfException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPdfUnsupportedFeatureException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EPdfException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPdfUnsupportedFeatureException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EPdfException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPdfUnsupportedFeatureException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EPdfException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EPdfUnsupportedFeatureException() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EPdfArgumentOutOfRange : public EPdfException
{
	typedef EPdfException inherited;
	
public:
	/* Exception.Create */ inline __fastcall EPdfArgumentOutOfRange(const System::UnicodeString Msg) : EPdfException(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EPdfArgumentOutOfRange(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EPdfException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EPdfArgumentOutOfRange(NativeUInt Ident)/* overload */ : EPdfException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EPdfArgumentOutOfRange(System::PResStringRec ResStringRec)/* overload */ : EPdfException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EPdfArgumentOutOfRange(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EPdfException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EPdfArgumentOutOfRange(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EPdfException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EPdfArgumentOutOfRange(const System::UnicodeString Msg, int AHelpContext) : EPdfException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EPdfArgumentOutOfRange(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EPdfException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPdfArgumentOutOfRange(NativeUInt Ident, int AHelpContext)/* overload */ : EPdfException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPdfArgumentOutOfRange(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EPdfException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPdfArgumentOutOfRange(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EPdfException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPdfArgumentOutOfRange(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EPdfException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EPdfArgumentOutOfRange() { }
	
};

#pragma pack(pop)

typedef void __fastcall (__closure *TPdfUnsupportedFeatureHandler)(int nType, const System::UnicodeString Typ);

typedef bool __fastcall (*TPdfDocumentCustomReadProc)(void * Param, unsigned Position, System::PByte Buffer, unsigned Size);

enum DECLSPEC_DENUM TPdfPageRotation : unsigned char { prNormal, pr90Clockwise, pr180, pr90CounterClockwise };

enum DECLSPEC_DENUM TPdfDocumentSaveOption : unsigned char { dsoIncremental = 1, dsoNoIncremental, dsoRemoveSecurity };

enum DECLSPEC_DENUM TPdfDocumentLoadOption : unsigned char { dloMemory, dloMMF, dloOnDemand };

enum DECLSPEC_DENUM TPdfDocumentPageMode: signed char { dpmUnknown = -1, dpmUseNone, dpmUseOutlines, dpmUseThumbs, dpmFullScreen, dpmUseOC, dpmUseAttachments };

enum DECLSPEC_DENUM TPdfPrintMode : unsigned char { pmEMF, pmTextMode, pmPostScript2, pmPostScript3, pmPostScriptPassThrough2, pmPostScriptPassThrough3, pmEMFImageMasks };

enum DECLSPEC_DENUM Iexpdfiumcore__4 : unsigned char { ieppAllowPageRange, ieppPrintTextWithGDI, ieppHideFormHighlighting, ieppFitPageToPrintArea };

typedef System::Set<Iexpdfiumcore__4, Iexpdfiumcore__4::ieppAllowPageRange, Iexpdfiumcore__4::ieppFitPageToPrintArea> TIEPdfPrintOptions;

enum DECLSPEC_DENUM TPdfFileIdType : unsigned char { pfiPermanent, pfiChanging };

enum DECLSPEC_DENUM TPdfBitmapFormat : unsigned char { bfGrays = 1, bfBGR, bfBGRx, bfBGRA };

enum DECLSPEC_DENUM TPdfFormFieldType : unsigned char { fftUnknown, fftPushButton, fftCheckBox, fftRadioButton, fftComboBox, fftListBox, fftTextField, fftSignature };

enum DECLSPEC_DENUM TPdfObjectType : unsigned char { otUnknown, otBoolean, otNumber, otString, otName, otArray, otDictinary, otStream, otNullObj, otReference };

#pragma pack(push,4)
class PASCALIMPLEMENTATION _TPdfBitmapHideCreator : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	HIDESBASE void __fastcall Create();
public:
	/* TObject.Create */ inline __fastcall _TPdfBitmapHideCreator() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~_TPdfBitmapHideCreator() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPdfBitmap : public _TPdfBitmapHideCreator
{
	typedef _TPdfBitmapHideCreator inherited;
	
private:
	Iexpdfiumlib::__FPDF_PTRREC *fBitmap;
	bool fOwnsBitmap;
	int fWidth;
	int fHeight;
	int fBytesPerScanLine;
	
public:
	__fastcall TPdfBitmap(Iexpdfiumlib::FPDF_BITMAP ABitmap, bool AOwnsBitmap)/* overload */;
	__fastcall TPdfBitmap(int AWidth, int AHeight, bool AAlpha)/* overload */;
	__fastcall TPdfBitmap(int AWidth, int AHeight, TPdfBitmapFormat AFormat)/* overload */;
	__fastcall TPdfBitmap(int AWidth, int AHeight, TPdfBitmapFormat AFormat, void * ABuffer, int ABytesPerScanline)/* overload */;
	__fastcall virtual ~TPdfBitmap();
	void __fastcall FillRect(int ALeft, int ATop, int AWidth, int AHeight, unsigned AColor);
	void * __fastcall GetBuffer();
	__property int Width = {read=fWidth, nodefault};
	__property int Height = {read=fHeight, nodefault};
	__property int BytesPerScanline = {read=fBytesPerScanLine, nodefault};
	__property Iexpdfiumlib::FPDF_BITMAP Bitmap = {read=fBitmap};
};

#pragma pack(pop)

typedef TPdfFormFillHandler *PPdfFormFillHandler;

struct DECLSPEC_DRECORD TPdfFormFillHandler
{
public:
	Iexpdfiumlib::FPDF_FORMFILLINFO FormFillInfo;
	TPdfDocument* Document;
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TPdfPage : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TPdfDocument* fDocument;
	Iexpdfiumlib::__FPDF_PTRREC *fPdfiumPage;
	float fWidth;
	float fHeight;
	bool fTransparency;
	TPdfPageRotation fRotation;
	Iexpdfiumlib::__FPDF_PTRREC *fTextHandle;
	Iexpdfiumlib::__FPDF_PTRREC *fSearchHandle;
	Iexpdfiumlib::__FPDF_PTRREC *fLinkHandle;
	bool fLoadError;
	
protected:
	__fastcall TPdfPage(TPdfDocument* ADocument, Iexpdfiumlib::FPDF_PAGE APage);
	
private:
	void __fastcall UpdateMetrics();
	void __fastcall SetRotation(const TPdfPageRotation Value);
	bool __fastcall BeginText();
	bool __fastcall BeginWebLinks();
	void __fastcall AfterOpen();
	bool __fastcall IsValidForm();
	int __fastcall GetMouseModifier(const System::Classes::TShiftState Shift);
	int __fastcall GetKeyModifier(NativeInt KeyData);
	Iexpdfiumlib::FPDF_PAGE __fastcall GetHandle();
	bool __fastcall TextPosIsValid(int TextStart, int TextLength);
	
public:
	void __fastcall Open();
	__fastcall virtual ~TPdfPage();
	void __fastcall Close();
	bool __fastcall IsLoaded();
	void __fastcall Draw(HDC DC, int X, int Y, int Width, int Height, TPdfPageRotation Rotate = (TPdfPageRotation)(0x0), const int DrawFlags = 0x0);
	void __fastcall DrawToPdfBitmap(TPdfBitmap* APdfBitmap, int X, int Y, int Width, int Height, TPdfPageRotation Rotate = (TPdfPageRotation)(0x0), const int DrawFlags = 0x0);
	void __fastcall DrawFormToPdfBitmap(TPdfBitmap* APdfBitmap, int X, int Y, int Width, int Height, TPdfPageRotation Rotate = (TPdfPageRotation)(0x0), const int DrawFlags = 0x0);
	Hyiedefs::TDPoint __fastcall DeviceToPage(int X, int Y, int Width, int Height, int DeviceX, int DeviceY, TPdfPageRotation Rotate = (TPdfPageRotation)(0x0))/* overload */;
	System::Types::TPoint __fastcall PageToDevice(int X, int Y, int Width, int Height, double PageX, double PageY, TPdfPageRotation Rotate = (TPdfPageRotation)(0x0))/* overload */;
	Hyiedefs::TDRect __fastcall DeviceToPage(int X, int Y, int Width, int Height, const System::Types::TRect &R, TPdfPageRotation Rotate = (TPdfPageRotation)(0x0))/* overload */;
	System::Types::TRect __fastcall PageToDevice(int X, int Y, int Width, int Height, const Hyiedefs::TDRect &R, TPdfPageRotation Rotate = (TPdfPageRotation)(0x0))/* overload */;
	void __fastcall ApplyChanges();
	bool __fastcall FormEventFocus(const System::Classes::TShiftState Shift, double PageX, double PageY);
	bool __fastcall FormEventMouseWheel(const System::Classes::TShiftState Shift, int WheelDelta, double PageX, double PageY);
	bool __fastcall FormEventMouseMove(const System::Classes::TShiftState Shift, double PageX, double PageY);
	bool __fastcall FormEventLButtonDown(const System::Classes::TShiftState Shift, double PageX, double PageY);
	bool __fastcall FormEventLButtonUp(const System::Classes::TShiftState Shift, double PageX, double PageY);
	bool __fastcall FormEventRButtonDown(const System::Classes::TShiftState Shift, double PageX, double PageY);
	bool __fastcall FormEventRButtonUp(const System::Classes::TShiftState Shift, double PageX, double PageY);
	bool __fastcall FormEventKeyDown(System::Word KeyCode, NativeInt KeyData);
	bool __fastcall FormEventKeyUp(System::Word KeyCode, NativeInt KeyData);
	bool __fastcall FormEventKeyPress(System::Word Key, NativeInt KeyData);
	bool __fastcall FormEventKillFocus();
	System::UnicodeString __fastcall FormGetFocusedText();
	System::UnicodeString __fastcall FormGetSelectedText();
	bool __fastcall FormReplaceSelection(const System::UnicodeString ANewText);
	bool __fastcall FormSelectAllText();
	bool __fastcall FormCanUndo();
	bool __fastcall FormCanRedo();
	bool __fastcall FormUndo();
	bool __fastcall FormRedo();
	bool __fastcall BeginFind(const System::UnicodeString SearchString, bool MatchCase, bool MatchWholeWord, bool FromEnd);
	bool __fastcall FindNext(int &CharIndex, int &Count);
	bool __fastcall FindPrev(int &CharIndex, int &Count);
	void __fastcall EndFind();
	bool __fastcall CanFindNext();
	int __fastcall GetCharCount();
	System::WideChar __fastcall ReadChar(int CharIndex);
	double __fastcall GetCharFontSize(int CharIndex);
	Hyiedefs::TDRect __fastcall GetCharBox(int CharIndex);
	int __fastcall GetCharIndexAt(double PageX, double PageY, double ToleranceX, double ToleranceY);
	System::UnicodeString __fastcall ReadText(int CharIndex, int Count);
	System::UnicodeString __fastcall GetTextAt(const Hyiedefs::TDRect &R)/* overload */;
	System::UnicodeString __fastcall GetTextAt(double Left, double Top, double Right, double Bottom)/* overload */;
	int __fastcall GetTextRectCount(int CharIndex, int Count);
	Hyiedefs::TDRect __fastcall GetTextRect(int RectIndex);
	TPdfFormFieldType __fastcall HasFormFieldAtPoint(double X, double Y);
	int __fastcall GetWebLinkCount();
	System::UnicodeString __fastcall GetWebLinkURL(int LinkIndex);
	int __fastcall GetWebLinkRectCount(int LinkIndex);
	Hyiedefs::TDRect __fastcall GetWebLinkRect(int LinkIndex, int RectIndex);
	__property Iexpdfiumlib::FPDF_PAGE Handle = {read=GetHandle};
	__property float Width = {read=fWidth};
	__property float Height = {read=fHeight};
	__property bool Transparency = {read=fTransparency, nodefault};
	__property TPdfPageRotation Rotation = {read=fRotation, write=SetRotation, nodefault};
	__property bool LoadError = {read=fLoadError, write=fLoadError, nodefault};
};

#pragma pack(pop)

typedef void __fastcall (__closure *TPdfFormInvalidateEvent)(TPdfDocument* Document, TPdfPage* Page, const Hyiedefs::TDRect &PageRect);

typedef void __fastcall (__closure *TPdfFormOutputSelectedRectEvent)(TPdfDocument* Document, TPdfPage* Page, const Hyiedefs::TDRect &PageRect);

typedef void __fastcall (__closure *TPdfFormGetCurrentPageEvent)(TPdfDocument* Document, TPdfPage* &CurrentPage);

typedef void __fastcall (__closure *TPdfFormFieldFocusEvent)(TPdfDocument* Document, System::WideChar * Value, int ValueLen, bool FieldFocused);

struct DECLSPEC_DRECORD TPdfAttachment
{
private:
	TPdfDocument* fDocument;
	Iexpdfiumlib::__FPDF_PTRREC *fHandle;
	void __fastcall CheckValid();
	System::UnicodeString __fastcall GetName();
	System::UnicodeString __fastcall GetKeyValue(const System::UnicodeString Key);
	void __fastcall SetKeyValue(const System::UnicodeString Key, const System::UnicodeString Value);
	int __fastcall GetContentSize();
	
public:
	void __fastcall SetContent(const System::DynamicArray<System::Byte> ABytes)/* overload */;
	void __fastcall SetContent(const System::DynamicArray<System::Byte> ABytes, NativeInt Index, int Count)/* overload */;
	void __fastcall SetContent(System::PByte ABytes, int Count)/* overload */;
	void __fastcall SetContent(const System::RawByteString Value)/* overload */;
	void __fastcall SetContent(const System::UnicodeString Value, System::Sysutils::TEncoding* Encoding = (System::Sysutils::TEncoding*)(0x0))/* overload */;
	void __fastcall LoadFromStream(System::Classes::TStream* Stream);
	void __fastcall LoadFromFile(const System::UnicodeString FileName);
	void __fastcall GetContent(System::DynamicArray<System::Byte> &ABytes)/* overload */;
	void __fastcall GetContent(System::PByte Buffer)/* overload */;
	void __fastcall GetContent(System::RawByteString &Value)/* overload */;
	void __fastcall GetContent(System::UnicodeString &Value, System::Sysutils::TEncoding* Encoding = (System::Sysutils::TEncoding*)(0x0))/* overload */;
	System::DynamicArray<System::Byte> __fastcall GetContentAsBytes();
	System::RawByteString __fastcall GetContentAsRawByteString();
	System::UnicodeString __fastcall GetContentAsString(System::Sysutils::TEncoding* Encoding = (System::Sysutils::TEncoding*)(0x0));
	void __fastcall SaveToStream(System::Classes::TStream* Stream);
	void __fastcall SaveToFile(const System::UnicodeString FileName);
	bool __fastcall HasContent();
	bool __fastcall HasKey(const System::UnicodeString Key);
	TPdfObjectType __fastcall GetValueType(const System::UnicodeString Key);
	__property System::UnicodeString Name = {read=GetName};
	__property System::UnicodeString Values[const System::UnicodeString Key] = {read=GetKeyValue, write=SetKeyValue};
	__property int ContentSize = {read=GetContentSize};
	__property Iexpdfiumlib::FPDF_ATTACHMENT Handle = {read=fHandle};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TPdfAttachmentList : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	TPdfAttachment operator[](int Index) { return this->Items[Index]; }
	
private:
	TPdfDocument* fDocument;
	int __fastcall GetCount();
	TPdfAttachment __fastcall GetItem(int Index);
	
public:
	__fastcall TPdfAttachmentList(TPdfDocument* ADocument);
	TPdfAttachment __fastcall Add(const System::UnicodeString Name);
	void __fastcall Delete(int Index);
	__property int Count = {read=GetCount, nodefault};
	__property TPdfAttachment Items[int Index] = {read=GetItem/*, default*/};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TPdfAttachmentList() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TPdfDocument : public System::TObject
{
	typedef System::TObject inherited;
	
	
private:
	struct TCustomLoadDataRec;
	typedef TCustomLoadDataRec *PCustomLoadDataRec;
	
	struct DECLSPEC_DRECORD TCustomLoadDataRec
	{
	public:
		void *Param;
		TPdfDocumentCustomReadProc GetBlock;
		Iexpdfiumlib::FPDF_FILEACCESS FileAccess;
	};
	
	
	
private:
	Iexpdfiumlib::__FPDF_PTRREC *fDocument;
	System::Contnrs::TObjectList* fPages;
	TPdfAttachmentList* fAttachments;
	System::UnicodeString fFileName;
	NativeUInt fFileHandle;
	NativeUInt fFileMapping;
	System::Byte *fBuffer;
	System::DynamicArray<System::Byte> fBytes;
	bool fClosing;
	bool fUnsupportedFeatures;
	TCustomLoadDataRec *fCustomLoadData;
	bool fEnableTransparency;
	bool fEnableWorkarounds;
	Iexpdfiumlib::__FPDF_PTRREC *fForm;
	TPdfFormFillHandler fFormFillHandler;
	bool fFormModified;
	TPdfFormInvalidateEvent fOnFormInvalidate;
	TPdfFormOutputSelectedRectEvent fOnFormOutputSelectedRect;
	TPdfFormGetCurrentPageEvent fOnFormGetCurrentPage;
	TPdfFormFieldFocusEvent fOnFormFieldFocus;
	TPdfPrintMode fPrintMode;
	TIEPdfPrintOptions fPrintOptions;
	void __fastcall InternLoadFromMem(System::PByte Buffer, NativeInt Size, const System::AnsiString APassword);
	void __fastcall InternLoadFromCustom(TPdfDocumentCustomReadProc ReadFunc, unsigned ASize, void * AParam, const System::AnsiString APassword);
	TPdfPage* __fastcall GetPage(int Index);
	int __fastcall GetPageCount();
	void __fastcall ExtractPage(TPdfPage* APage);
	Iexpdfiumlib::FPDF_PAGE __fastcall ReloadPage(TPdfPage* APage);
	bool __fastcall GetActive();
	void __fastcall CheckActive();
	int __fastcall GetSecurityHandlerRevision();
	int __fastcall GetDocPermissions();
	int __fastcall GetFileVersion();
	Hyiedefs::TDPoint __fastcall GetPageSize(int Index);
	TPdfDocumentPageMode __fastcall GetPageMode();
	void __fastcall DocumentLoaded();
	TPdfPage* __fastcall FindPage(Iexpdfiumlib::FPDF_PAGE Page);
	
public:
	__fastcall TPdfDocument();
	__fastcall virtual ~TPdfDocument();
	void __fastcall LoadFromCustom(TPdfDocumentCustomReadProc ReadFunc, unsigned ASize, void * AParam, const System::AnsiString APassword = System::AnsiString());
	void __fastcall LoadFromActiveStream(System::Classes::TStream* Stream, const System::AnsiString APassword = System::AnsiString());
	void __fastcall LoadFromActiveBuffer(void * Buffer, NativeInt Size, const System::AnsiString APassword = System::AnsiString());
	void __fastcall LoadFromBytes(const System::DynamicArray<System::Byte> ABytes, const System::AnsiString APassword = System::AnsiString())/* overload */;
	void __fastcall LoadFromBytes(const System::DynamicArray<System::Byte> ABytes, NativeInt AIndex, NativeInt ACount, const System::AnsiString APassword = System::AnsiString())/* overload */;
	void __fastcall LoadFromStream(System::Classes::TStream* AStream, const System::AnsiString APassword = System::AnsiString());
	void __fastcall LoadFromFile(const System::UnicodeString AFileName, const System::AnsiString APassword = System::AnsiString(), TPdfDocumentLoadOption ALoadOption = (TPdfDocumentLoadOption)(0x1));
	void __fastcall Close();
	void __fastcall SaveToFile(const System::UnicodeString AFileName, TPdfDocumentSaveOption Option = (TPdfDocumentSaveOption)(0x3), int FileVersion = 0xffffffff);
	void __fastcall SaveToStream(System::Classes::TStream* Stream, TPdfDocumentSaveOption Option = (TPdfDocumentSaveOption)(0x3), int FileVersion = 0xffffffff);
	void __fastcall SaveToBytes(System::DynamicArray<System::Byte> &Bytes, TPdfDocumentSaveOption Option = (TPdfDocumentSaveOption)(0x3), int FileVersion = 0xffffffff);
	bool __fastcall NewDocument();
	bool __fastcall ImportPages(TPdfDocument* Source, const System::UnicodeString Range = System::UnicodeString(), int Index = 0xffffffff);
	void __fastcall DeletePage(int Index);
	TPdfPage* __fastcall NewPage(double Width, double Height, int Index = 0xffffffff);
	bool __fastcall ApplyViewerPreferences(TPdfDocument* Source);
	bool __fastcall IsPageLoaded(int PageIndex);
	System::UnicodeString __fastcall GetFileIdentifier(TPdfFileIdType IdType);
	System::UnicodeString __fastcall GetMetaText(const System::UnicodeString TagName);
	__property System::UnicodeString FileName = {read=fFileName};
	__property int PageCount = {read=GetPageCount, nodefault};
	__property TPdfPage* Pages[int Index] = {read=GetPage};
	__property Hyiedefs::TDPoint PageSizes[int Index] = {read=GetPageSize};
	__property TPdfAttachmentList* Attachments = {read=fAttachments};
	__property bool Active = {read=GetActive, nodefault};
	__property int SecurityHandlerRevision = {read=GetSecurityHandlerRevision, nodefault};
	__property int DocPermissions = {read=GetDocPermissions, nodefault};
	__property int FileVersion = {read=GetFileVersion, nodefault};
	__property TPdfDocumentPageMode PageMode = {read=GetPageMode, nodefault};
	__property bool UnsupportedFeatures = {read=fUnsupportedFeatures, nodefault};
	__property bool EnableWorkarounds = {read=fEnableWorkarounds, write=fEnableWorkarounds, nodefault};
	__property bool EnableTransparency = {read=fEnableTransparency, nodefault};
	__property Iexpdfiumlib::FPDF_DOCUMENT Handle = {read=fDocument};
	__property Iexpdfiumlib::FPDF_FORMHANDLE FormHandle = {read=fForm};
	__property bool FormModified = {read=fFormModified, write=fFormModified, nodefault};
	__property TPdfFormInvalidateEvent OnFormInvalidate = {read=fOnFormInvalidate, write=fOnFormInvalidate};
	__property TPdfFormOutputSelectedRectEvent OnFormOutputSelectedRect = {read=fOnFormOutputSelectedRect, write=fOnFormOutputSelectedRect};
	__property TPdfFormGetCurrentPageEvent OnFormGetCurrentPage = {read=fOnFormGetCurrentPage, write=fOnFormGetCurrentPage};
	__property TPdfFormFieldFocusEvent OnFormFieldFocus = {read=fOnFormFieldFocus, write=fOnFormFieldFocus};
	__property TPdfPrintMode PrintMode = {read=fPrintMode, write=fPrintMode, nodefault};
	__property TIEPdfPrintOptions PrintOptions = {read=fPrintOptions, write=fPrintOptions, nodefault};
	void __fastcall UpdateFormFieldHighlight();
};


typedef void __fastcall (__closure *TPdfDocumentPrinterStatusEvent)(System::TObject* Sender, int CurrentPageNum, int PageCount);

class PASCALIMPLEMENTATION TPdfDocumentPrinter : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	int fBeginPrintCounter;
	HDC fPrinterDC;
	TPdfDocumentPrinterStatusEvent fOnPrintStatus;
	bool fBeginDocCalled;
	bool fPagePrinted;
	TPdfPrintMode fPrintMode;
	TIEPdfPrintOptions fPrintOptions;
	bool __fastcall PrinterStartDoc(const System::UnicodeString AJobTitle);
	void __fastcall PrinterEndDoc();
	void __fastcall InternPrintPage(TPdfPage* APage, double X, double Y, double Width, double Height, bool PrintAnnotations);
	
public:
	__fastcall TPdfDocumentPrinter();
	bool __fastcall BeginPrint(const System::UnicodeString AJobTitle = System::UnicodeString());
	void __fastcall EndPrint();
	bool __fastcall Print(TPdfDocument* ADocument, int FromPage, int ToPage, bool PrintAnnotations)/* overload */;
	bool __fastcall Print(TPdfDocument* ADocument, bool PrintAnnotations)/* overload */;
	__property TPdfPrintMode PrintMode = {read=fPrintMode, write=fPrintMode, nodefault};
	__property TIEPdfPrintOptions PrintOptions = {read=fPrintOptions, write=fPrintOptions, nodefault};
	__property TPdfDocumentPrinterStatusEvent OnPrintStatus = {read=fOnPrintStatus, write=fOnPrintStatus};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TPdfDocumentPrinter() { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const int Default_Selection_Color = int(0xff901e);
static const int Default_Highlight_Color = int(0x328efe);
static const int Default_Form_Field_Color = int(0xff901e);
static const System::Int8 Default_Form_Field_Alpha = System::Int8(0x19);
static const System::Int8 PDF_DPI = System::Int8(0x48);
extern DELPHI_PACKAGE System::UnicodeString PDFiumDllDir;
extern DELPHI_PACKAGE System::UnicodeString PDFiumDllFileName;
extern DELPHI_PACKAGE System::UnicodeString PDFiumResDir;
extern DELPHI_PACKAGE TPdfUnsupportedFeatureHandler __fastcall SetThreadPdfUnsupportedFeatureHandler(const TPdfUnsupportedFeatureHandler Handler);
extern DELPHI_PACKAGE bool __fastcall InitPDFiumLib(bool ExeFolderOnly);
}	/* namespace Iexpdfiumcore */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_IEXPDFIUMCORE)
using namespace Iexpdfiumcore;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// IexpdfiumcoreHPP
