// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'hyiedefs.pas' rev: 35.00 (Windows)

#ifndef HyiedefsHPP
#define HyiedefsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.UITypes.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Menus.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

namespace Hyiedefs
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS EIEException;
__interface DELPHIINTERFACE IIEMask;
typedef System::DelphiInterface<IIEMask> _di_IIEMask;
struct TIELayerMagnification;
struct TDrawDibTime;
struct TBitmapInfoHeader256;
struct TIEPoint;
struct TDPoint;
struct TDRect;
struct TIE3DPoint;
struct TIEQuadCoords;
struct TRGBA;
struct TRGB48;
struct TRGBA48;
struct TIELine;
struct TRGB;
struct TCMYK;
struct TCMYK16;
struct TCIELab;
struct TYCbCr;
class DELPHICLASS TIEVSoftShadow;
class DELPHICLASS TIEEdit;
struct TProgressRec;
struct THYIEGraphicHeader;
struct TIELANGUAGECHARINFO;
struct TCustomizedWord;
__interface DELPHIINTERFACE IIESequentialStream;
typedef System::DelphiInterface<IIESequentialStream> _di_IIESequentialStream;
struct DECLSPEC_DRECORD IE_STATSTG
{
};


__interface DELPHIINTERFACE IIEStream;
typedef System::DelphiInterface<IIEStream> _di_IIEStream;
struct TIERectangle;
__interface DELPHIINTERFACE IIELanguageUpdatable;
typedef System::DelphiInterface<IIELanguageUpdatable> _di_IIELanguageUpdatable;
struct TIECMSRGBCOLOR;
struct TIECMSCMYKCOLOR;
struct TIECMSXYZCOLOR;
struct TIECMSYxyCOLOR;
struct TIECMSLabCOLOR;
struct TIECMSGENERIC3CHANNEL;
struct TIECMSNAMEDCOLOR;
struct TIECMSHiFiCOLOR;
struct TIECMSAlignment;
struct TIECMSCOLOR;
struct TIEPOINTL;
struct TIEDeviceModeW;
struct TIEGestureNotifyStruct;
struct TIEWMGestureNotify;
struct TIEGESTUREINFO;
struct TIEGESTURECONFIG;
//-- type declarations -------------------------------------------------------
typedef System::Uitypes::TScrollStyle TIEScrollStyle;

#pragma pack(push,4)
class PASCALIMPLEMENTATION EIEException : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EIEException(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EIEException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EIEException(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EIEException(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EIEException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EIEException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EIEException(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EIEException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EIEException(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EIEException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EIEException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EIEException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EIEException() { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TIEAntialiasMode : unsigned char { ierNone, ierFast, ierBilinear, ierBicubic };

enum DECLSPEC_DENUM TFlipDir : unsigned char { fdHorizontal, fdVertical, fdNone };

enum DECLSPEC_DENUM TIEEnabled : unsigned char { enFalse, enTrue, enAuto };

enum DECLSPEC_DENUM TIEShowFormats : unsigned char { iesfImagesAndVideos, iesfImagesOnly, iesfVideosOnly, iesfAllOnly, iesfLayerFormatsOnly, iesfLayerFormatsPriority, iesfMultiImagesAndVideos, iesfMultiImagesOnly };

__interface IIEMask  : public System::IInterface 
{
	virtual void __stdcall SetPixel(int x, int y, int Alpha) = 0 ;
	virtual int __stdcall GetPixel(int x, int y) = 0 ;
};

enum DECLSPEC_DENUM TIEMagnifyStyle : unsigned char { iemRectangle, iemEllipse };

enum DECLSPEC_DENUM TIEMagnifySource : unsigned char { iemBackgroundLayer, iemCanvas };

struct DECLSPEC_DRECORD TIELayerMagnification
{
public:
	bool Enabled;
	double Rate;
	TIEMagnifyStyle Style;
	TIEMagnifySource Source;
};


enum DECLSPEC_DENUM TIECMSColorSpace : unsigned char { iecmsRGB, iecmsBGR, iecmsCMYK, iecmsCMYK6, iecmsCIELab, iecmsGray8, iecmsGray16, iecmsRGB48, iecmsRGB48_SE, iecmsYCBCR };

enum DECLSPEC_DENUM Hyiedefs__2 : unsigned char { iedaCopy, iedaMove };

typedef System::Set<Hyiedefs__2, Hyiedefs__2::iedaCopy, Hyiedefs__2::iedaMove> TIEFileDragDropActions;

typedef TBitmapInfoHeader256 *PBitmapInfoHeader256;

typedef unsigned TIESizeT;

typedef System::StaticArray<System::Types::TPoint, 134217728> TPointArray;

typedef TPointArray *PPointArray;

typedef System::StaticArray<TIEPoint, 134217728> TIEPointArray;

typedef TIEPointArray *PIEPointArray;

typedef System::StaticArray<void *, 134217728> TPointerArray;

typedef TPointerArray *PPointerArray;

typedef System::DynamicArray<System::Types::TPoint> TIEArrayOfTPoint;

typedef System::DynamicArray<char> TIEArrayOfAnsiChar;

typedef System::StaticArray<double, 134217728> TDoubleArray;

typedef TDoubleArray *PDoubleArray;

typedef System::StaticArray<unsigned, 134217728> TDWordArray;

typedef TDWordArray *PDWordArray;

typedef System::StaticArray<float, 134217728> TSingleArray;

typedef TSingleArray *PSingleArray;

typedef TRGBA *PRGBA;

typedef System::StaticArray<TRGBA, 134217728> TIERGBAPalette;

typedef TIERGBAPalette *PIERGBAPalette;

typedef TRGB *PRGB;

typedef System::StaticArray<TRGB, 134217728> TIERGBPalette;

typedef TIERGBPalette *PIERGBPalette;

typedef TCMYK *PCMYK;

typedef TCIELab *PCIELAB;

typedef System::StaticArray<TCIELab, 134217728> TCIELABROW;

typedef TCIELABROW *PCIELABROW;

typedef TYCbCr *PYCBCR;

typedef System::StaticArray<TCMYK, 134217728> TCMYKROW;

typedef TCMYKROW *PCMYKROW;

typedef System::StaticArray<TRGB, 134217728> TRGBROW;

typedef TRGBROW *PRGBROW;

typedef System::StaticArray<TRGBA, 134217728> TRGB32ROW;

typedef TRGB32ROW *PRGB32ROW;

typedef System::StaticArray<TRGB48, 134217728> TRGB48ROW;

typedef TRGB48ROW *PRGB48ROW;

typedef System::StaticArray<System::Byte, 134217728> TBYTEROW;

typedef TBYTEROW *PBYTEROW;

typedef System::StaticArray<PBYTEROW, 134217728> TBYTEROWS;

typedef TBYTEROWS *PBYTEROWS;

typedef System::StaticArray<int, 134217728> IntegerArray;

typedef IntegerArray *pIntegerArray;

typedef System::StaticArray<__int64, 134217728> int64array;

typedef int64array *pint64array;

typedef System::StaticArray<PRGB, 134217728> PRGBArray;

typedef PRGBArray *PPRGBArray;

typedef bool *pboolean;

typedef System::DynamicArray<double> TIEArrayOfDouble;

typedef System::DynamicArray<float> TIEArrayOfSingle;

typedef TProgressRec *PProgressRec;

typedef double *PIEDouble;

typedef NativeUInt hDrawDib;

struct DECLSPEC_DRECORD TDrawDibTime
{
public:
	int timeCount;
	int timeDraw;
	int timeDecompress;
	int timeDither;
	int timeStretch;
	int timeBlt;
	int timeSetDIBits;
};


#pragma pack(push,1)
struct DECLSPEC_DRECORD TBitmapInfoHeader256
{
public:
	unsigned biSize;
	int biWidth;
	int biHeight;
	System::Word biPlanes;
	System::Word biBitCount;
	unsigned biCompression;
	unsigned biSizeImage;
	int biXPelsPerMeter;
	int biYPelsPerMeter;
	unsigned biClrUsed;
	unsigned biClrImportant;
	System::StaticArray<tagRGBQUAD, 2> Palette;
};
#pragma pack(pop)


struct DECLSPEC_DRECORD TIEPoint
{
public:
	int X;
	int Y;
};


struct DECLSPEC_DRECORD TDPoint
{
public:
	double X;
	double Y;
	void __fastcall Offset(double XOffset, double YOffset);
	static TDPoint __fastcall Empty();
};


typedef System::StaticArray<TDPoint, 67108864> TDPointArray;

typedef TDPointArray *PDPointArray;

struct DECLSPEC_DRECORD TDRect
{
private:
	double __fastcall GetHeight();
	double __fastcall GetWidth();
	void __fastcall SetHeight(const double Value);
	void __fastcall SetWidth(const double Value);
	
public:
	__property double Width = {read=GetWidth, write=SetWidth};
	__property double Height = {read=GetHeight, write=SetHeight};
	void __fastcall Offset(double XOffset, double YOffset);
	static TDRect __fastcall Empty();
	
public:
	union
	{
		struct 
		{
			TDPoint TopLeft;
			TDPoint BottomRight;
		};
		struct 
		{
			double Left;
			double Top;
			double Right;
			double Bottom;
		};
		
	};
};


typedef System::DynamicArray<TDRect> TDRectArray;

typedef System::StaticArray<TDPoint, 2> TIEDRectangle;

typedef System::StaticArray<TDPoint, 4> TIEDRotatedRectangle;

typedef System::DynamicArray<TDPoint> TIEDPointArray;

typedef TDPoint TIE2DPoint _DEPRECATED_ATTRIBUTE1("Use TDPoint instead - http://imageen.com/help/Compatibil"
	"ity.html") ;

typedef TIEDPointArray TIE2DPointArray _DEPRECATED_ATTRIBUTE1("Use TIEDPointArray instead - http://imageen.com/help/Com"
	"patibility.html") ;

struct DECLSPEC_DRECORD TIE3DPoint
{
public:
	double x;
	double y;
	double z;
};


struct DECLSPEC_DRECORD TIEQuadCoords
{
public:
	int x0;
	int y0;
	int x1;
	int y1;
	int x2;
	int y2;
	int x3;
	int y3;
};


typedef System::StaticArray<short, 134217728> TIESmallIntArray;

typedef TIESmallIntArray *PIESmallIntArray;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRGBA
{
public:
	System::Byte b;
	System::Byte g;
	System::Byte r;
	System::Byte a;
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD TRGB48
{
public:
	System::Word r;
	System::Word g;
	System::Word b;
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD TRGBA48
{
public:
	System::Word r;
	System::Word g;
	System::Word b;
	System::Word a;
};
#pragma pack(pop)


typedef TRGBA48 *PRGBA48;

typedef TRGB48 *PRGB48;

struct DECLSPEC_DRECORD TIELine
{
public:
	System::Types::TPoint P;
	System::Types::TPoint Q;
};


typedef System::StaticArray<TIELine, 8193> TIELineArray;

typedef TIELineArray *PIELineArray;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRGB
{
public:
	System::Byte b;
	System::Byte g;
	System::Byte r;
};
#pragma pack(pop)


typedef System::DynamicArray<TRGB> TIEArrayOfTRGB;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TCMYK
{
public:
	System::Byte c;
	System::Byte m;
	System::Byte y;
	System::Byte k;
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD TCMYK16
{
public:
	System::Word c;
	System::Word m;
	System::Word y;
	System::Word k;
};
#pragma pack(pop)


typedef TCMYK16 *PCMYK16;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TCIELab
{
public:
	System::Byte l;
	System::Int8 a;
	System::Int8 b;
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD TYCbCr
{
public:
	System::Byte y;
	System::Byte Cb;
	System::Byte Cr;
};
#pragma pack(pop)


typedef System::DynamicArray<System::Byte> TIEArrayOfByte;

typedef System::DynamicArray<void *> TIEArrayOfPointer;

typedef System::DynamicArray<int> TIEArrayOfInteger;

typedef System::DynamicArray<unsigned> TIEArrayOfDWord;

enum DECLSPEC_DENUM TIEFolderFileTypes : unsigned char { iefAllImages, iefAllImagesAndVideos, iefAllFiles, iefCustom };

enum DECLSPEC_DENUM TIEDefaultFolder : unsigned char { iedfNone, iedfDesktop, iedfDrives, iedfRootDir, iedfMyDocuments, iedfMyPictures, iedfMyVideos, iedfDevices, iedfAppExe, iedfSpecified };

class PASCALIMPLEMENTATION TIEVSoftShadow : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	double fOffsetXD;
	double fOffsetYD;
	int __fastcall GetOffsetX();
	int __fastcall GetOffsetY();
	void __fastcall SetOffsetX(const int v);
	void __fastcall SetOffsetY(const int v);
	
public:
	bool Enabled;
	double Radius;
	int Intensity;
	TRGB ShadowColor;
	__property int OffsetX = {read=GetOffsetX, write=SetOffsetX, nodefault};
	__property int OffsetY = {read=GetOffsetY, write=SetOffsetY, nodefault};
	__fastcall TIEVSoftShadow();
	void __fastcall Assign(TIEVSoftShadow* Source);
	void __fastcall ReadFromStream(System::Classes::TStream* Stream, bool UseDouble = true, bool IncludeColor = true);
	void __fastcall WriteToStream(System::Classes::TStream* Stream, bool UseDouble = true, bool IncludeColor = true);
	void __fastcall SetByAngleAndDist(double Angle, double Distance);
	void __fastcall GetAngleAndDist(/* out */ double &Angle, /* out */ double &Distance);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TIEVSoftShadow() { }
	
};


class PASCALIMPLEMENTATION TIEEdit : public Vcl::Stdctrls::TEdit
{
	typedef Vcl::Stdctrls::TEdit inherited;
	
private:
	Vcl::Menus::TPopupMenu* fPopup;
	bool fPopupMenuAuto;
	MESSAGE void __fastcall CMWantSpecialKey(Winapi::Messages::TWMKey &Msg);
	
protected:
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	DYNAMIC void __fastcall DoContextPopup(const System::Types::TPoint &MousePos, bool &Handled);
	
public:
	__fastcall virtual TIEEdit(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TIEEdit();
	__property bool PopupMenuAuto = {read=fPopupMenuAuto, write=fPopupMenuAuto, default=1};
public:
	/* TWinControl.CreateParented */ inline __fastcall TIEEdit(HWND ParentWindow) : Vcl::Stdctrls::TEdit(ParentWindow) { }
	
};


typedef void __fastcall (__closure *TIEProgressEvent)(System::TObject* Sender, int per);

enum DECLSPEC_DENUM TIEJob : unsigned char { iejNOTHING, iejGENERALPROCESSING, iejVIDEOCAP_CONNECTING };

typedef void __fastcall (__closure *TIEJobEvent)(System::TObject* Sender, TIEJob job, int per);

struct DECLSPEC_DRECORD TProgressRec
{
public:
	TIEProgressEvent OnProgress;
	System::TObject* Sender;
	int val;
	int tot;
	double per1;
	double per2;
	bool *Aborting;
};


enum DECLSPEC_DENUM TResampleFilter : unsigned char { rfNone, rfTriangle, rfHermite, rfBell, rfBSpline, rfLanczos3, rfMitchell, rfNearest, rfLinear, rfFastLinear, rfBilinear, rfBicubic, rfProjectBW, rfProjectWB, rfWICNearestNeighbor, rfWICLinear, rfWICCubic, rfWICFant };

enum DECLSPEC_DENUM THistogramScale : unsigned char { iehsLinear, iehsLinearClipped, iehsLogarithmic };

struct DECLSPEC_DRECORD THYIEGraphicHeader
{
public:
	System::Word Count;
	System::Word HType;
	int Size;
};


enum DECLSPEC_DENUM TMsgLanguage : unsigned char { msSystem, msEnglish, msItalian, msGerman, msSpanish, msFrench, msPortuguese, msGreek, msRussian, msDutch, msSwedish, msPolish, msJapanese, msCzech, msFinnish, msFarsi, msChinese, msChineseTraditional, msDanish, msTurkish, msKorean, msHungarian, msArabic, msSerbian, msNorwegian, msSlovenian, msUser };

typedef System::DynamicArray<TMsgLanguage> TMsgLanguages;

enum DECLSPEC_DENUM TMsgLanguageWords : unsigned short { IEMSG_PREVIEW, IEMSG_SOURCE, IEMSG_RESULT, IEMSG_OK, IEMSG_CANCEL, IEMSG_LOCKPREVIEW, IEMSG_COPYRESULTTOSOURCE, IEMSG_CONTRAST, IEMSG_BRIGHTNESS, IEMSG_HUE, IEMSG_SATURATION, IEMSG_VALUE, IEMSG_BASECOLOR, IEMSG_NEWCOLOR, IEMSG_LUMINOSITY, IEMSG_RED, IEMSG_GREEN, IEMSG_BLUE, IEMSG_FILTERVALUES, IEMSG_PRESETS, IEMSG_DIVISOR, IEMSG_LOAD, IEMSG_SAVE, IEMSG_EQUALIZATION, IEMSG_THRESHOLD, IEMSG_EQUALIZE, IEMSG_HISTOGRAM, IEMSG_GRAY, IEMSG_LIGHT, IEMSG_LEFT, IEMSG_TOP, IEMSG_WIDTH, IEMSG_HEIGHT, IEMSG_COLOR, IEMSG_SOURCEIMAGEQUANTITY, IEMSG_LENS, IEMSG_REFRACTION, IEMSG_PARAMETERSPREVIEW, IEMSG_QUALITY, IEMSG_DCTMETHOD, IEMSG_SMOOTHINGFACTOR, IEMSG_GRAYSCALE, IEMSG_OPTIMALHUFFMAN, IEMSG_ORIGINALSIZE, 
	IEMSG_COMPRESSEDSIZE, IEMSG_ADVANCED, IEMSG_PROGRESSIVE, IEMSG_COMPRESSION, IEMSG_IMAGEINDEX, IEMSG_PHOTOMETRIC, IEMsg_DocumentInfo, IEMSG_NAME, IEMSG_DESCRIPTION, IEMSG_PAGENAME, IEMSG_PAGENUMBER, IEMSG_OF, IEMSG_INCH, IEMSG_COLORS, IEMSG_TRANSPARENT, IEMSG_TRANSPARENTCOLOR, IEMSG_INTERLACED, IEMSG_BACKGROUND, IEMSG_HORIZPOSITION, IEMSG_VERTPOSITION, IEMSG_DELAYTIME, IEMSG_FILTER, IEMSG_WAVE, IEMSG_AMPLITUDE, IEMSG_WAVELENGTH, IEMSG_PHASE, IEMSG_REFLECTIVE, IEMSG_USERFILTER, IEMSG_MORPHFILTER, IEMSG_WINDOWSIZE, IEMSG_MAXIMUM, IEMSG_MINIMUM, IEMSG_OPENING, IEMSG_CLOSING, IEMSG_ROTATE, IEMSG_FLIP, IEMsg_Horizontal, IEMsg_Vertical, IEMsg_HorzCenter, IEMsg_VertCenter, IEMsg_ClickToSetTheGradientColor, IEMsg_Diagonal, IEMsg_DiagCenter, IEMsg_Gradient, 
	IEMSG_FREQUENCYDOMAINIMAGE, IEMSG_SELECTTHEREGIONTOCLEAR, IEMSG_CLEAR, IEMSG_RESET, IEMSG_ANIMATE, IEMSG_LOADFILTER, IEMSG_SAVEFILTER, IEMSG_BUMPMAP, IEMSG_PRINT, IEMSG_MARGINS, IEMSG_INCHES, IEMSG_RIGHT, IEMSG_BOTTOM, IEMSG_POSITION, IEMSG_SIZE, IEMSG_NORMAL, IEMSG_FITTOPAGE, IEMSG_STRETCHTOPAGE, IEMSG_SPECIFIEDSIZE, IEMSG_GAMMACORRECTION, IEMSG_PRINTSETUP, IEMSG_LEFTMARGIN, IEMSG_TOPMARGIN, IEMSG_RIGHTMARGIN, IEMSG_BOTTOMMARGIN, IEMSG_LOCATIONSIZE, IEMSG_TOPLEFT, IEMSG_TOPCENTER, IEMSG_TOPRIGHT, IEMSG_CENTERLEFT, IEMSG_CENTER, IEMSG_CENTERRIGHT, IEMSG_BOTTOMLEFT, IEMSG_BOTTOMCENTER, IEMSG_BOTTOMRIGHT, IEMSG_CLOSE, IEMSG_APPLY, IEMSG_MEASUREUNITS, IEMSG_UNITS, IEMSG_RATE, IEMSG_FILE, IEMSG_MEM, IEMSG_LOCKPREVIEWHINT, IEMSG_PRINTALL, IEMSG_PRINTSELECTED, 
	IEMSG_ALLIMAGEFILES, IEMSG_ALLVIDEOFILES, IEMSG_ALLFILES, IEMSG_HSV, IEMSG_HSL, IEMSG_RGB, IEMSG_FFT, IEMSG_SHARPEN, IEMSG_CHANNELS, IEMSG_PIXELS, IEMSG_FRAMES, IEMSG_BIT, IEMSG_BYTE, IEMSG_DPI, IEMSG_KB, IEMSG_FIT, IEMSG_OTHER, IEMSG_COLUMNS, IEMSG_ROWS, IEMSG_STYLE, IEMSG_SPACING, IEMSG_SELECTACQUIREDEVICE, IEMSG_SELECTANACQUISITIONDEVICE, IEMSG_Page_X_of_X, IEMSG_X_Pages, IEMSG_Previous, IEMSG_Next, IEMSG_THUMBNAILS, IEMSG_LEVELS, IEMSG_INPUTLEVELS, IEMSG_OUTPUTLEVELS, IEMsg_None, IEMsg_ADDINNERSHADOW, IEMsg_ADJUSTBRIGHTNESSCONTRASTSATURATION, IEMsg_ADJUSTGAINOFFSET, IEMsg_AdjustLuminanceSaturation, IEMsg_ADJUSTTEMPERATURE, IEMsg_ADJUSTTINT, IEMsg_Automatic, IEMsg_AUTOSHARPEN, IEMsg_BLUR, IEMsg_AlphaFill, IEMsg_FloodFill, IEMsg_CASTCOLORRANGE, 
	IEMsg_CLEARSEL, IEMsg_COLORIZE, IEMsg_CONVERTTO, IEMsg_CONVERTTO24BIT, IEMsg_CONVERTTOPALETTE, IEMsg_CONVERTTOSEPIA, IEMsg_CONVOLVE, IEMsg_DECRYPT, IEMsg_DEINTERLACE, IEMsg_ReorderColorChannels, IEMsg_EDGEDETECT, IEMsg_ENCRYPT, IEMsg_FEATHEREDGES, IEMsg_FILL, IEMsg_FTCLEARZONE, IEMsg_HISTAUTOEQUALIZE, IEMsg_INTENSITY, IEMsg_AdjustHistogram, IEMsg_MAPGRAYTOCOLOR, IEMsg_MATCHHSVRANGE, IEMsg_MEDIANFILTER, IEMsg_MERGEWITHMASK, IEMsg_MERGE, IEMsg_Monochrome, IEMsg_MOTIONBLUR, IEMsg_PAINTMARK, IEMsg_PERSPECTIVEDRAW, IEMsg_ConvolutionFilter, IEMsg_PROJECTDRAW, IEMsg_RADIALSTRETCH, IEMsg_RANDOMIZE, IEMsg_REFLECTION, IEMsg_REMOVECHROMAKEY, IEMsg_REMOVEISOLATEDPIXELS, IEMsg_REMOVENOISE, IEMsg_RESIZECANVASXX, IEMsg_ROUNDIMAGE, IEMSG_ConvertToXColors, 
	IEMsg_SHIFTCHANNEL, IEMSG_TileImage, IEMsg_UNSHARPEN, IEMsg_WALLISFILTER, IEMsg_WHITEBALANCE, IEMsg_WRITEHIDDENDATA, IEMSG_AdjustHSV, IEMSG_AdjustHSL, IEMSG_AdjustRGB, IEMsg_ColorCurve, IEMsg_ResetAll, IEMsg_All, IEMSG_RESIZE, IEMSG_CURRENT, IEMSG_NEW, IEMSG_SCALE, IEMSG_MAINTAINASPECTRATIO, IEMSG_MAINTAINASPECTRATIO_HINT, IEMsg_ApplyQualityFilter, IEMsg_UseAFilterToImproveTheQualityOfTheImage, IEMsg_SoftShadow, IEMsg_AddSoftShadow, IEMsg_Radius, IEMsg_Offset, IEMsg_All_Glow, IEMsg_Inner_Glow_B, IEMsg_AutoEnhance, IEMsg_AutoEnhanceMethod, IEMsg_General, IEMsg_ToneMapping, IEMsg_Slope, IEMsg_Range, IEMsg_Gamma, IEMSG_Crop, IEMSG_CropImage, IEMsg_EditImage, IEMsg_Linear, IEMsg_LinearClipped, IEMsg_Logarithmic, IEMsg_ResizeImage, IEMsg_ConvertToGray, 
	IEMsg_InsertText, IEMsg_CropToSelection, IEMsg_Negative, IEMsg_RemoveRedEyes, IEMsg_SymmetricNearestNeighbour, IEMsg_Pixelize, IEMsg_PencilSketch, IEMsg_Cut, IEMsg_CutSelection, IEMsg_Copy, IEMsg_Paste, IEMsg_Filename, IEMSG_Folder, IEMSG_Dimensions, IEMSG_Type, IEMSG_DateCreated, IEMSG_DateModified, IEMsg_Properties, IEMsg_Caption, IEMsg_FillPage, IEMsg_MultiplePages, IEMsg_PagesAcross, IEMsg_PagesDown, IEMsg_PageCount, IEMsg_ImageCount, IEMsg_EditPointsOfLayerLines, IEMsg_RotateLayers, IEMsg_MoveLayers, IEMsg_ResizeLayers, IEMsg_RemoveLayer, IEMsg_ArrangeLayers, IEMsg_SetLayerProperties, IEMsg_ConvertToImageLayer, IEMsg_ConvertToPolylineLayer, IEMsg_MergeLayers, IEMsg_GroupLayers, IEMsg_UngroupLayers, IEMsg_CropBackgroundToSelection, IEMsg_EditLayerText, 
	IEMsg_SpecifyText, IEMsg_PaintBrush, IEMsg_Eraser, IEMsg_Retouch, IEMsg_CloneBrushTool, IEMsg_ROTATEANDCROP, IEMsg_SelectImage, IEMsg_XIsNotAValidFolder, IEMsg_SelectAFolderToOpen, IEMsg_AddImageLayers, IEMsg_AddShapeLayers, IEMsg_AddLineLayers, IEMsg_AddPolylineLayers, IEMsg_AddAngleLayers, IEMsg_AddTextLayers, IEMsg_NewImageLayer, IEMsg_NewShapeLayer, IEMsg_NewLineLayer, IEMsg_NewPolylineLayer, IEMsg_NewAngleLayer, IEMsg_NewTextLayer, IEMsg_NewMaskLayer, IEMsg_MeasureARectangularArea, IEMsg_MeasureTheDistanceBetweenTwoPoints, IEMsg_MeasureArea, IEMsg_MeasureLength, IEMsg_FlipHorizontal, IEMsg_FlipVertical, IEMsg_SaveContactSheets, IEMsg_PageX, IEMsg_Flat, IEMSG_BaseFilename, IEMsg_Heading, IEMsg_AddPageNumber, IEMsg_Specify, IEMsg_Border, 
	IEMsg_BorderWidth, IEMsg_SetTheWidthOfTheLayerBorder, IEMsg_Font, IEMsg_FontSize, IEMsg_SpecifyTheFontSize, IEMsg_FontColor, IEMsg_Blank, IEMsg_Mask, IEMsg_ZoomIn, IEMsg_ZoomOut, IEMsg_DeleteSelection, IEMsg_Image, IEMsg_Edit, IEMsg_View, IEMsg_Sorting, IEMsg_Language, IEMsg_Interaction, IEMsg_Tools, IEMsg_Help, IEMsg_AlignTextLeft, IEMsg_AlignTextRight, IEMsg_CenterText, IEMsg_JustifyText, IEMsg_SelectFont, IEMsg_Bold, IEMsg_Italic, IEMsg_Underline, IEMsg_Bullets, IEMsg_Numbering, IEMsg_Alignment, IEMsg_Find, IEMsg_SearchForTextInYourDocument, IEMsg_FindNext, IEMsg_FindNextInstanceOfTheText, IEMsg_Replace, IEMsg_BatchFindAndReplaceTextInYourDocument, IEMsg_BrowseForAnImageToInsertIntoYourDocument, IEMsg_InsertObject, IEMsg_InsertAnObjectIntoYourDocument, 
	IEMsg_PasteSpecial, IEMsg_CustomPasteContentFromTheClipboard, IEMsg_LoadAnImageFromFile, IEMsg_Shape, IEMsg_Rotation, IEMsg_LockAspectRatio, IEMsg_SelectColor, IEMsg_BrushSize, IEMsg_Circle, IEMsg_Rectangle, IEMsg_RoundRect, IEMsg_BrushProperties, IEMsg_ClickToSpecifyBrushProperties, IEMsg_LoadBrush, IEMsg_Lock, IEMsg_Feathering, IEMsg_Transparency, IEMsg_Opacity, IEMsg_Tolerance, IEMsg_EraserOpacity, IEMsg_SmudgePressure, IEMsg_BlurRadius, IEMsg_SmoothRadius, IEMsg_BlockSize, IEMsg_OpenFile, IEMsg_SaveAs, IEMsg_InsertImage, IEMsg_PastePlain, IEMsg_Default, IEMsg_CreateFolder, IEMsg_NameOfNewFolder, IEMsg_Acquire, IEMsg_AddFromFile, IEMsg_AddLayers, IEMsg_NewLayer, IEMsg_AdjustColors, IEMsg_AutoEqualizeColors, IEMsg_AutoRotateDisplay, IEMsg_AutoShrink, 
	IEMsg_AutoStretch, IEMsg_BringForward, IEMsg_BringToFront, IEMsg_CircularSelect, IEMsg_CopySelection, IEMsg_CropTransparency, IEMsg_Delete, IEMsg_DeselectAll, IEMsg_Deselect, IEMsg_InvertSelection, IEMsg_FirstFrame, IEMsg_FitImageToHeight, IEMsg_FitImageToWidth, IEMsg_FitImage, IEMsg_ImageEffects, IEMsg_ImageSaveProperties, IEMsg_LassoSelect, IEMsg_LastFrame, IEMsg_LoadFileAsLayer, IEMsg_LoopPlayback, IEMsg_MergeAllLayers, IEMsg_NextFrame, IEMsg_PasteAsLayer, IEMsg_PolygonSelect, IEMsg_PreviousFrame, IEMsg_PrintAllThumbnails, IEMsg_PrintPreview, IEMsg_PrintThumbnails, IEMsg_PrintToPage, IEMsg_RectangularSelect, IEMsg_Redo, IEMsg_Rotate180, IEMsg_RotateLeft, IEMsg_RotateRight, IEMsg_SaveProperties, IEMsg_ScrollImage, IEMsg_ScrollToCursor, 
	IEMsg_SelectAcquisitionSource, IEMsg_SelectAll, IEMsg_SelectAllContent, IEMsg_SelectByColor, IEMsg_Select, IEMsg_SendBackward, IEMsg_SendToBack, IEMsg_SingleFrameOnly, IEMsg_Undo, IEMsg_ZoomToFullSize, IEMsg_ZoomToSelection, IEMsg_ClearAllImages, IEMsg_ClearAll, IEMsg_ClearThisImage, IEMsg_ClearYourSelection, IEMsg_ClickTheImageAndDragTheMouseToScroll, IEMsg_ContinuouslyLoopThePlaybackOfAGIFOrAVIFile, IEMsg_CopyImageToTheClipboard, IEMsg_CopyCurrentImageOrSelectionToTheClipboard, IEMsg_CopyTheImageToTheClipboardAndRemoveIt, IEMsg_CutTheSelectionToTheClipboard, IEMsg_CopyTheCurrentSelectionToTheClipboard, IEMsg_DisplayAPreviewOfThisImageForPrinting, IEMsg_DisplayAPreviewOfYourPrinting, IEMsg_DisplayLargeImagesAtTheWindowSize, IEMsg_DisplayOnlyTheActiveFrame, 
	IEMsg_DisplaySmallImagesAtTheWindowSize, IEMsg_DisplayTheAnimationOfAGIFOrAVIFile, IEMsg_DisplayTheFirstFrameOfThisImage, IEMsg_DisplayTheImageAtFullSize, IEMsg_DisplayTheImageAtTheHeightOfTheWindow, IEMsg_DisplayTheImageAtTheSizeOfTheWindow, IEMsg_DisplayTheImageAtTheWidthOfTheWindow, IEMsg_DisplayTheImageLarger, IEMsg_DisplayTheImageSmaller, IEMsg_DisplayTheLastFrameOfThisImage, IEMsg_DisplayTheNextFrameOfThisImage, IEMsg_DisplayThePriorFrameOfThisImage, IEMsg_EditPointsOfAPolyline, IEMsg_EqualizesTheColorHistogramForTheSelectedRegion, IEMsg_FlipTheImageFromLeftToRight, IEMsg_FlipTheImageFromTopToBottom, IEMsg_InvertTheColorsOfTheImage, IEMsg_LeftClickTheImageToZoomInRightClickToZoomOut, IEMsg_MergeAllLayersOfTheImageIntoASingleOne, 
	IEMsg_MoveTheMouseToScrollTheImage, IEMsg_MoveTheSelectedLayerBackward, IEMsg_MoveTheSelectedLayerForward, IEMsg_PasteFromTheClipboard, IEMsg_PasteTheContentOfTheClipboardAsANewLayer, IEMsg_PerformColorEnhancementFunctionsOnTheImage, IEMsg_PerformAnIrregularSelectionOfYourImageByClickingTheMouse, IEMsg_PerformAnIrregularSelectionOfYourImageByDraggingTheMouse, IEMsg_PerformEffectsOnTheImage, IEMsg_PlaybackTheseFramesInSequence, IEMsg_PositionTheSelectedLayerBehindAllOthers, IEMsg_PrintAllImagesOfTheGridAsASheetOfThumbnails, IEMsg_PrintTheSelectedImagesAsASheetOfThumbnails, IEMsg_PrintThisImageAtItsOriginalSize, IEMsg_PrintThisImageToFitThePage, IEMsg_PromptForAnImageFileToLoadAsANewLayer, IEMsg_RedoTheLastActionThatWasUndone, 
	IEMsg_ReduceTheColorsOfTheImageToGrayscale, IEMsg_CropTheImageToTheCurrentSelection, IEMsg_RemoveTheRedEyeEffectFromTheSelection, IEMsg_RemoveTheSelectedImage, IEMsg_RemoveTheSelectedLayersFromTheImage, IEMsg_RemoveTheTransparentBordersFromTheSelectedLayers, IEMsg_RestartPlaybackAfterItCompletes, IEMsg_RetrieveAnImageFromACameraOrScanner, IEMsg_RetrieveImagesFromACameraOrScanner, IEMsg_RotateTheImage180Clockwise, IEMsg_RotateTheImage90Clockwise, IEMsg_RotateTheImage90CounterClockwise, IEMsg_SaveChangesToThisImageToFile, IEMsg_SaveThisImageToANewFilename, IEMsg_SelectACircularAreaOfYourImage, IEMsg_SelectAPortionOfYourImageOfASimilarColor, IEMsg_SelectARectangularAreaOfYourImage, IEMsg_SelectAllImagesInTheGrid, IEMsg_SelectAnAreaOfTheImageToZoomInto, 
	IEMsg_SelectTheCameraOrScannerToAcquireImagesFrom, IEMsg_SelectTheFirstFrame, IEMsg_SelectTheLastFrame, IEMsg_SelectTheNextFrame, IEMsg_SelectThePreviousFrame, IEMsg_SpecifyAdvancedPropertiesForAllImages, IEMsg_SpecifyAdvancedPropertiesForThisImage, IEMsg_UndoTheLastAction, IEMsg_UndoTheLastEdit, IEMsg_UseTheMouseToMoveLayers, IEMsg_UseTheMouseToResizeLayers, IEMsg_UseTheMouseToRotateLayers, IEMsg_ZoomToX, IEMsg_Zoom, IEMsg_DisplayImageAtXZoom, IEMsg_CustomRotate, IEMsg_RotateImageByACustomAngle, IEMsg_SpecifyANewSizeForTheImage, IEMsg_CopyFiles, IEMsg_CopyFilesToClipboard, IEMsg_CopyTheSelectedFilesToANewFolder, IEMsg_CopyTheSelectedFilesToTheClipboard, IEMsg_CutFilesToClipboard, IEMsg_CutTheSelectedFilesToTheClipboard, IEMsg_DeleteFiles, 
	IEMsg_DeleteTheSelectedFilesFromTheFolder, IEMsg_GoUp, IEMsg_MoveFiles, IEMsg_MoveTheSelectedFilesToANewFolder, IEMsg_OpenTheParentOfTheCurrentFolder, IEMsg_OpenTheSelectedFileInTheDefaultViewer, IEMsg_PasteFilesFromClipboard, IEMsg_PasteFilesFromTheClipboardToThisFolder, IEMsg_Refresh, IEMsg_RefreshTheFileListing, IEMsg_WhereDoYouWantToMoveTheseFiles, IEMsg_WhereDoYouWantToCopyTheseFiles, IEMsg_RenameFile, IEMsg_SpecifyANewNameForTheSelectedFile, IEMsg_SpecifyNewName, IEMsg_SelectFolder, IEMsg_CreateANewFolderAtTheCurrentLocation, IEMsg_PerformEditingFunctionsOnTheImage, IEMsg_PreviewEffects, IEMsg_PreviewEffectsToEditAndEnhanceTheImage, IEMsg_ThumbnailView, IEMsg_DisplayLargeThumbnails, IEMsg_DetailView, IEMsg_DisplayFileDetails, IEMsg_SortByX, 
	IEMsg_Ascending, IEMsg_Descending, IEMsg_SortAscending, IEMsg_SortDescending, IEMsg_SelectAllLayersOfTheImage, IEMsg_DeselectAllLayersOfTheImage, IEMsg_AddSelectedLayersToASelectionGroup, IEMsg_RemoveSelectedLayersFromSelectionGroup, IEMsg_MergeSelectedLayersIntoASingleLayer, IEMsg_ColumnView, IEMsg_DisplayFileColumns, IEMsg_LargeThumbnailView, IEMsg_DisplayThumbnails, IEMsg_FileListView, IEMsg_DisplayFileList, IEMsg_ShowColumnX, IEMsg_ShowRulers, IEMsg_ShowMeasurementRulersBesideImage, IEMsg_CapPixels, IEMsg_ShowMeasurementsInPixels, IEMsg_CapInches, IEMsg_ShowMeasurementsInInches, IEMsg_Millimeters, IEMsg_ShowMeasurementsInMillimeters, IEMsg_Centimeters, IEMsg_ShowMeasurementsInInCentimeters, IEMsg_PasteAnImageFromTheClipboard, IEMsg_IncludeSubFolders, 
	IEMsg_AlsoDisplayFilesFoundInSubfoldersOfThisFolder, IEMsg_EnableCropping, IEMsg_EnableCroppingModeToSelectAnAreaOfTheImageToMaintain, IEMsg_CancelCropping, IEMsg_ClearTheCurrentCropSelection, IEMsg_ClickAndDragToCreateAnImageLayer, IEMsg_ClickAndDragToCreateAShapeLayer, IEMsg_ClickAndDragToCreateALineLayer, IEMsg_ClickAndDragToCreateAPolylineLayer, IEMsg_ClickAndDragToCreateAnAngleLayer, IEMsg_ClickAndDragToCreateATextLayer, IEMsg_AlignLeftEdges, IEMsg_AlignRightEdges, IEMsg_AlignTopEdges, IEMsg_AlignBottomEdges, IEMsg_AlignHorizontalCenters, IEMsg_AlignVerticalCenters, IEMsg_MatchWidth, IEMsg_MatchHeight, IEMsg_AlignSelectedLayersToTheEdgeOfTheLeftmostLayer, IEMsg_AlignSelectedLayersToTheEdgeOfTheRightmostLayer, 
	IEMsg_AlignSelectedLayersToTheEdgeOfTheTopmostLayer, IEMsg_AlignSelectedLayersToTheEdgeOfTheBottommostLayer, IEMsg_AlignSelectedLayersToHaveTheSameHorizontalCenter, IEMsg_AlignSelectedLayersToHaveTheSameVerticalCenter, IEMsg_ResizeAllSelectedLayersToTheWidthOfTheWidestLayer, IEMsg_ResizeAllSelectedLayersToTheHeightOfTheTallestLayer, IEMsg_CropTheBackgroundImageToMatchSelectedLayers, IEMsg_FastPreview, IEMsg_ReducePreviewQualityToImprovePerformance, IEMsg_SizeToFit, IEMsg_DisplayTheCurrentLayer, IEMsg_BrowseForAnImageToLoadIntoTheLayer, IEMsg_RotateTheLayerCounterClockwise, IEMsg_RotateTheLayerClockwise, IEMsg_ConvertTheLayerToAnImage, IEMsg_ShowLabel, IEMsg_AttachATextLabelToThisLine, IEMsg_EditTheTextOfTheSelectedLayer, IEMsg_ResetRotation, 
	IEMsg_ResetTheRotationOfTheSelectedLayer, IEMsg_PaintOntoTheImage, IEMsg_SprayCan, IEMsg_SprayOntoTheImage, IEMsg_CloneContentFromOneAreaOfTheImageToAnother, IEMsg_DragToRotate, IEMsg_DragTheImageToFreelyRotate, IEMsg_DragToRotateAndCrop, IEMsg_DragTheImageToFreelyRotateAndCrop, IEMsg_ApplyASharpeningFilterToTheImage, IEMsg_AutomaticallyDisplayImagesWithTheCorrectOrientation, IEMsg_BringTheSelectedLayerToTheFrontOfAllOthers, IEMsg_AddAnImageToTheGridFromFile, IEMsg_AddANewLayerToThisImage, IEMsg_ShowGuidelines, IEMsg_ShowGuidelinesOverImage, IEMsg_UseTheMouseToEraseTheImage, IEMsg_ConvertTheLayerToEditablePoints, IEMsg_MeasureEllipse, IEMsg_MeasureACircularArea, IEMsg_MeasureAngle, IEMsg_MeasureAnAngleByClickingThreePoints, IEMsg_Area, IEMsg_Length, 
	IEMsg_MeasurePath, IEMsg_MeasureAPathOrAreaWithMultipleClicks, IEMsg_ZoomAndScroll, IEMsg_EditLayers, IEMsg_UseTheMouseToMoveResizeAndRotateLayers, IEMsg_EditLayerPoints, IEMsg_ClickOnALineToAddAPointCtrlClickToRemoveAPoint, IEMsg_ClickAndDragToDrawAPolylineLayer, IEMsg_ClickMultiplePointsToCreateAPolylineLayer, IEMsg_ClickThreePointsToCreateAnAngleLayer, IEMsg_DrawAPolyline, IEMsg_EnlargeFont, IEMsg_EnlargeTheFontSize, IEMsg_ReduceFont, IEMsg_ReduceTheFontSize, IEMsg_AlignTextOnLeft, IEMsg_AlignTextOnRight, IEMsg_AlignTextToCenter, IEMsg_ClickToReplaceTheColorOfAnAreaWithANewColor, IEMsg_ClickToReplaceTheColorOfAnAreaWithTransparency, IEMsg_ColorPicker, IEMsg_ClickTheImageToSelectAColor, IEMsg_AdjustBrightnessContrast, 
	IEMsg_ClickAndDragVerticallyToAdjustDisplayBrightnessOrHorizontallyToAdjustDisplayContrast, IEMsg_SelectTextAndImages, IEMsg_SelectTextAndImagesWithinTheCurrentPage, IEMsg_DocumentRotation, IEMsg_CropBackgroundToLayers, IEMsg_CropTheBackgroundImageToMatchAllLayers, IEMsg_SetLanguageToX, IEMsg_DisplayTheColorSelector, IEMsg_RemoveTheChromaKeyBackgroundFromTheImage, IEMsg_SaveImagesOfTheGridAsASheetOfThumbnails, IEMsg_RemoveAll, IEMsg_MergeToBackground, IEMsg_MergeTheSelectedLayerWithTheBackgroundImage, IEMsg_AutomaticallyEnhanceTheImageColors, IEMsg_DisplayThumbnailText, IEMsg_DisplayTextForThumbnails, IEMsg_EraseBackground, IEMsg_PaintTheBackgroundAreaOfTheImageToEraseIt, IEMsg_Smudge, IEMsg_UseMouseToSmudgeTheImage, 
	IEMsg_UseMouseToApplyRetouchEffectsToTheImage, IEMsg_Smooth, IEMsg_UseMouseToSmoothTheImage, IEMsg_UseMouseToBlurTheImage, IEMsg_UseMouseToAddMotionBlurTheImage, IEMsg_UseMouseToPixelizeTheImage, IEMsg_UseMouseToBrightenTheImage, IEMsg_Inpaint, IEMsg_UseMouseToFixBlemishesInTheImage, IEMsg_PDFViewing, IEMsg_EnableViewingOfPDFDocuments, IEMsg_ShowAllPages, IEMsg_DisplayAllPagesOfDocument, IEMsg_ShowImageWithDefaultRotation, IEMsg_ImportPages, IEMsg_ImportPagesIntoCurrentDocument, IEMsg_MovePageForward, IEMsg_MovePageTowardStartOfDocument, IEMsg_MovePageBack, IEMsg_MovePageTowardEndOfDocument, IEMsg_DeletePage, IEMsg_DeletePageFromDocument, IEMsg_HighlightSpellingErrors, IEMsg_HighlightSpellingErrorsHint, IEMsg_AddLinkToText, IEMsg_AddWebLinkToTheLayer, 
	IEMsg_RemoveLink, IEMsg_RemoveLinkFromTheLayer, IEMsg_ObscureTheSelectedImageArea, IEMsg_DeleteTheSelectedArea, IEMsg_InsertAngle, IEMsg_InsertEllipse, IEMsg_InsertLabelWithLine, IEMsg_InsertLine, IEMsg_InsertMemo, IEMsg_InsertPolyline, IEMsg_InsertRectangle, IEMsg_InsertRuler, IEMsg_MergeAllToBackground, IEMsg_Unstamp, IEMsg_EditPolyline, IEMsg_FreeHandPaintAnOpenPolygon, IEMsg_CropImageToObjects, IEMsg_AddALineObject, IEMsg_AddAMultiLineTextObject, IEMsg_AddANewLabelObjectWithALine, IEMsg_AddARulerObject, IEMsg_AddATextObject, IEMsg_AddAnAngleMeasurementObject, IEMsg_AddAnEllipticalObject, IEMsg_AddAnImageObject, IEMsg_AddARectangularObject, IEMsg_BringTheSelectedObjectToTheFrontOfAllOtherObjects, IEMsg_CopyTheSelectedObjectToTheClipboard, 
	IEMsg_MatchTheSizeOfTheBackgroundImageToAllOfTheObjectsItContains, IEMsg_MergeAllObjectsWithTheBackgroundLayer, IEMsg_MoveTheSelectedObjectToTheClipboard, IEMsg_PasteObjectFromTheClipboard, IEMsg_PositionTheSelectedObjectBehindAllOtherObjects, IEMsg_RemoveAllObjectsFromTheImage, IEMsg_RemoveTheSelectedObjectFromTheImage, IEMsg_RotateTheSelectedObject180Clockwise, IEMsg_RotateTheSelectedObject90Clockwise, IEMsg_RotateTheSelectedObject90CounterClockwise, IEMsg_SelectAllObjectsOfImage, IEMsg_SelectOrResizeAnObject, IEMsg_SingleClickingWillNotInsertANewObject, IEMsg_MeasureDistance, IEMsg_Above, IEMsg_AtEnd, IEMsg_AtStart, IEMsg_AutoAbove, IEMsg_AutoBelow, IEMsg_AutoSize, IEMsg_Below, IEMsg_ClickToSetTheBorderColor, IEMsg_ClickToSetTheFillColor, IEMsg_Hide, 
	IEMsg_Layer, IEMsg_UseAsMask, IEMsg_RemoveMask, IEMsg_UseLayerToMaskContentOfLayerBelow, IEMsg_Layout, IEMsg_Line, IEMsg_Operation, IEMsg_Points, IEMsg_Polyline, IEMsg_PolylineClosed, IEMsg_ReadOnly, IEMsg_Update, IEMsg_Wordwrap, IEMsg_RulerMode, IEMsg_EndShapes, IEMsg_LineLabel, IEMsg_BackgroundLayer, IEMsg_AllowMultilineText, IEMsg_CaptionDisplaysLengthAreaOfLayer, IEMsg_SoftenTheEdgesOfTheLayerWithTransparentFeathering, IEMsg_AutomaticallySizeTheLayerToFitTheContent, IEMsg_SetTheRotationOfTheLayer, IEMsg_Text, IEMsg_SelectTheShapeOfTheLayer, IEMsg_DisplayTheLayerPropertiesDialog, IEMsg_Visible, IEMsg_ResetSize, IEMsg_PreventResizingFromAffectingTheAspectRatioOfTheSelectedLayer, IEMsg_PreventMovementOfTheSelectedLayer, 
	IEMsg_RestoreTheOriginalAspectRatioOfTheSelectedLayer, IEMsg_ResizeTheLayerToMatchItsContent, IEMsg_AddASoftShadowToTheSelectedLayer, IEMsg_CropLayerToBackground, IEMsg_HideAnyPartOfTheSelectedLayerLyingOutsideTheBackground, IEMsg_LockPosition, IEMsg_JoinTheFirstAndLastPointsOfThePolylineToCreateAPolygon, IEMsg_RestoreTheOriginalSizeOfTheSelectedLayer, IEMsg_SelectANewFontForLayer, IEMsg_RestoreAspectRatio, IEMsg_LayerX, IEMsg_Inverted, IEMsg_Arrow, IEMsg_Diamond, IEMsg_ReverseArrow, IEMsg_Bar, IEMsg_Dot, IEMsg_Angle, IEMsg_InvertAngle, IEMsg_StartAngle, IEMsg_IncreaseAngle, IEMsg_DecreaseAngle, IEMsg_LineStartShape, IEMsg_LineEndShape, IEMsg_RenameLayer, IEMsg_SpecifyDisplayNameForLayer, IEMsg_ShowThisLayer, IEMsg_BorderThickness, 
	IEMsg_SpecifyWidthOfBorder, IEMsg_AddAColoredBorder, IEMsg_FillWithColor, IEMsg_OpacityOfColorFill, IEMsg_OpacityOfLayer, IEMsg_ApplyABlendingOperation, IEMsg_CustomizeTheShape, IEMsg_SpecifyTheStartingShapeForTheLine, IEMsg_SpecifyTheEndingShapeForTheLine, IEMsg_PreventEditingOfTheText, IEMsg_SpecifyTheAngleOfTheStartLine, IEMsg_SpecifyTheSweepBetweenTheStartAndEndLine, IEMsg_ReverseTheDirectionOfTheAngle, IEMsg_Curve, IEMsg_UseAMaskToHidePartsOfTheCurrentLayer, IEMsg_SmoothLine, IEMsg_SmoothEdgesOfThisPolyline, IEMsg_EnableTextFormatting, IEMsg_AllowRichTextFormattingToBeAppliedToLayer, IEMsg_RemoveFormatting, IEMsg_RemoveRichTextFormattingFromLayer, IEMsg_Outer_Glow, IEMsg_AddOuterGlowToTheSelectedLayer, IEMsg_Inner_Glow, 
	IEMsg_AddInnerGlowToTheSelectedLayer, IEMsg_Effects, IEMsg_SpecifySizeOfTheEffect, IEMsg_SpecifyColorOfTheEffect, IEMsg_IncreaseCurve, IEMsg_DecreaseCurve, IEMsg_AdjustTheCurvatureOfTheLine };

struct DECLSPEC_DRECORD TIELANGUAGECHARINFO
{
public:
	System::Uitypes::TFontCharset CharSet;
	System::UnicodeString FontName;
	System::Word CodePage;
};


typedef System::StaticArray<TIELANGUAGECHARINFO, 27> Hyiedefs__5;

struct DECLSPEC_DRECORD TCustomizedWord
{
public:
	TMsgLanguage Language;
	TMsgLanguageWords Word;
	System::UnicodeString Translation;
};


typedef System::StaticArray<System::UnicodeString, 878> Hyiedefs__6;

typedef System::DynamicArray<TCustomizedWord> Hyiedefs__7;

__interface  INTERFACE_UUID("{0C733A30-2A1C-11CE-ADE5-00AA0044773D}") IIESequentialStream  : public System::IInterface 
{
	virtual HRESULT __stdcall Read(void * pv, unsigned cb, unsigned* pcbRead) = 0 ;
	virtual HRESULT __stdcall Write(void * pv, unsigned cb, unsigned* pcbWritten) = 0 ;
};

__interface  INTERFACE_UUID("{0000000C-0000-0000-C000-000000000046}") IIEStream  : public IIESequentialStream 
{
	virtual HRESULT __stdcall Seek(__int64 dlibMove, unsigned dwOrigin, __int64 &plibNewPosition) = 0 ;
	virtual HRESULT __stdcall SetSize(__int64 libNewSize) = 0 ;
	virtual HRESULT __stdcall CopyTo(_di_IIEStream pstm, __int64 cb, __int64 &pcbRead, __int64 &pcbWritten) = 0 ;
	virtual HRESULT __stdcall Commit(unsigned grfCommitFlags) = 0 ;
	virtual HRESULT __stdcall Revert() = 0 ;
	virtual HRESULT __stdcall LockRegion(__int64 libOffset, __int64 cb, unsigned dwLockType) = 0 ;
	virtual HRESULT __stdcall UnlockRegion(__int64 libOffset, __int64 cb, unsigned dwLockType) = 0 ;
	virtual HRESULT __stdcall Stat(IE_STATSTG &pstatstg, unsigned grfStatFlag) = 0 ;
	virtual HRESULT __stdcall Clone(_di_IIEStream &ppstm) = 0 ;
};

#pragma pack(push,1)
struct DECLSPEC_DRECORD TIERectangle
{
public:
	int x;
	int y;
	int width;
	int height;
};
#pragma pack(pop)


enum DECLSPEC_DENUM TIEBackgroundStyle : unsigned char { iebsSolid, iebsHorizontal, iebsVertical, iebsFDiagonal, iebsBDiagonal, iebsCross, iebsDiagCross, iebsChessboard, iebsDiagonals, iebsCropped, iebsCropShadow, iebsGradient, iebsSoftShadow, iebsPhotoLike, iebsBlurredImage };

enum DECLSPEC_DENUM TIEKeyboardShortcut : unsigned char { iesLeftAlign, iesCenterAlign, iesRightAlign, iesJustified, iesCopy, iesCut, iesPaste, iesFontSelect, iesBold, iesItalic, iesUnderline, iesBackColorSelect, iesIncreaseFontSize, iesDecreaseFontSize, iesClearFormatting, iesSelectAll, iesProperties, iesDelete, iesSendBackward, iesBringForward, iesEditText, iesIncreaseBorder, iesDecreaseBorder, iesIncreaseCurve, iesDecreaseCurve, iesInvertAngle, iesFind, iesFindNext, iesReplace, iesRename, iesRefresh, iesOpenParent, iesSystemMenu };

typedef System::StaticArray<System::Classes::TShortCut, 33> TIEKeyboardShortcuts;

enum DECLSPEC_DENUM TIEGradientDir : unsigned char { gdHorizontal, gdVertical };

enum DECLSPEC_DENUM TIEGDIPlusGradient : unsigned char { gpgNone, gpgHorizontal, gpgVertical, gpgHorzCenter, gpgVertCenter, gpgDiagonal, gpgDiagonal2, gpgDiagCenter, gpgDiagCenter2, gpgLeft, gpgRight, gpgTop, gpgBottom, gpgTopLeft, gpgTopRight, gpgBottomLeft, gpgBottomRight };

enum DECLSPEC_DENUM TIEUnits : unsigned char { ieuPixels, ieuInches, ieuKM, ieuMeters, ieuCentimeters, ieuMillimeters, ieuMicrons, ieuNanometers, ieuFeet, ieuYards, ieuMiles };

typedef System::StaticArray<System::UnicodeString, 11> TIEMeasureUnits;

typedef void __fastcall (*TGIFLZWCompFunc)(System::Classes::TStream* Stream, int Height, int Width, bool Interlaced, char * FData, int BitsPerPixel);

typedef void __fastcall (*TGIFLZWDecompFunc)(System::Classes::TStream* Stream, int Height, int Width, bool Interlaced, char * FData, bool rawDecompress);

typedef System::PByte __fastcall (*TTIFFLZWDecompFunc)(System::PByte CompBuf, int CompBufLen, int linesCount, int LineSize, void * &Id, int FillOrder);

typedef void __fastcall (*TTIFFLZWCompFunc)(System::PByte indata, int inputlen, System::Classes::TStream* outstream, void * &id);

enum DECLSPEC_DENUM TIEFontQuality : unsigned char { iefqAntialiased, iefqClearType, iefqClearTypeNatural, iefqDefault, iefqDraft, iefqNonAntialiased, iefqProof };

enum DECLSPEC_DENUM TIEAlignment : unsigned char { iejLeft, iejRight, iejCenter, iejJustify };

enum DECLSPEC_DENUM TIELayout : unsigned char { ielTop, ielBottom, ielCenter };

enum DECLSPEC_DENUM TIECurve : unsigned char { iecNone, iecEllipse, iecCosine, iecVertical, iecHorizontal, iecArc };

enum DECLSPEC_DENUM TIEShape : unsigned char { iesEllipse, iesHalfEllipse, iesQuarterEllipse, iesEllipseSegment, iesRectangle, iesRoundRect, iesTriangle, iesCorner, iesDiamond, iesPentagon, iesHexagon, iesHeptagon, iesOctagon, iesCustomShape, iesStar5, iesStar6, iesCustomStar, iesArrowLeft, iesArrowRight, iesArrowUp, iesArrowDown, iesArrowLeftRight, iesArrowUpDown, iesArrowNW, iesArrowNE, iesArrowSW, iesArrowSE, iesFatArrowLeft, iesFatArrowRight, iesFatArrowUp, iesFatArrowDown, iesShootingArrowNW, iesShootingArrowNE, iesShootingArrowSW, iesShootingArrowSE, iesLightningLeft, iesLightningRight, iesExplosion, iesCustomExplosion, iesCross, iesHeart, iesDoubleHeart, iesCloud, iesMoon, iesSpeechBubbleLeftInShort, iesSpeechBubbleLeftOutShort, 
	iesSpeechBubbleRightInShort, iesSpeechBubbleRightOutShort, iesSpeechBubbleLeftInLong, iesSpeechBubbleLeftOutLong, iesSpeechBubbleRightInLong, iesSpeechBubbleRightOutLong, iesThoughtBubbleLeft, iesThoughtBubbleRight, iesShield, iesBadge, iesNamePlate, iesFrame, iesNarrowFrame, iesFatFrame, iesCircularFrame, iesPinLeft, iesPinRight, iesMarker, iesRainDrop, iesBanner, iesFemale, iesMale, iesMusic, iesPower, iesSmile, iesRainbow, iesCandy, iesSun, iesBrooch, iesCog, iesCog2, iesCustomCog, iesAsterisk, iesCustomAsterisk, iesClover, iesFlower, iesFlower2, iesCustomFlower, iesRadiance, iesCustomRadiance, iesCustomRadiance2, iesSplat, iesCrown, iesEnvelope, iesHandPointLeft, iesHandPointRight, iesTagLeft, iesTagRight, iesTagUp, iesTagDown, iesTag2Left, iesTag2Right, 
	iesTag2Up, iesTag2Down, iesChevronLeft, iesChevronRight, iesChevronUp, iesChevronDown, iesSimpleArrowLeft, iesSimpleArrowRight, iesSimpleArrowUp, iesSimpleArrowDown, iesSimpleArrowNW, iesSimpleArrowNE, iesSimpleArrowSW, iesSimpleArrowSE };

__interface  INTERFACE_UUID("{6274D2D8-3E4C-43F2-8157-229558BFB2F0}") IIELanguageUpdatable  : public System::IInterface 
{
	virtual void __fastcall UpdateLanguage() = 0 ;
};

enum DECLSPEC_DENUM TIEMediaFountationNotifyType : unsigned char { iemfnFRAME, iemfnSTARTINGCAPTURE, iemfnENDOFSTREAM };

typedef System::Word TIECMSGRAY;

struct DECLSPEC_DRECORD TIECMSRGBCOLOR
{
public:
	System::Word red;
	System::Word green;
	System::Word blue;
};


struct DECLSPEC_DRECORD TIECMSCMYKCOLOR
{
public:
	System::Word cyan;
	System::Word magenta;
	System::Word yellow;
	System::Word black;
};


struct DECLSPEC_DRECORD TIECMSXYZCOLOR
{
public:
	System::Word X;
	System::Word Y;
	System::Word Z;
};


struct DECLSPEC_DRECORD TIECMSYxyCOLOR
{
public:
	System::Word Y;
	System::Word x;
	System::Word y_;
};


struct DECLSPEC_DRECORD TIECMSLabCOLOR
{
public:
	System::Word L;
	System::Word a;
	System::Word b;
};


struct DECLSPEC_DRECORD TIECMSGENERIC3CHANNEL
{
public:
	System::Word ch1;
	System::Word ch2;
	System::Word ch3;
};


struct DECLSPEC_DRECORD TIECMSNAMEDCOLOR
{
public:
	unsigned dwIndex;
};


struct DECLSPEC_DRECORD TIECMSHiFiCOLOR
{
public:
	System::StaticArray<System::Byte, 8> channel;
};


struct DECLSPEC_DRECORD TIECMSAlignment
{
public:
	unsigned reserved1;
	void *reserved2;
};


struct DECLSPEC_DRECORD TIECMSCOLOR
{
	
public:
	union
	{
		struct 
		{
			TIECMSAlignment align;
		};
		struct 
		{
			TIECMSHiFiCOLOR hifi;
		};
		struct 
		{
			TIECMSNAMEDCOLOR named;
		};
		struct 
		{
			TIECMSGENERIC3CHANNEL gen3ch;
		};
		struct 
		{
			TIECMSLabCOLOR Lab;
		};
		struct 
		{
			TIECMSYxyCOLOR Yxy;
		};
		struct 
		{
			TIECMSXYZCOLOR XYZ;
		};
		struct 
		{
			TIECMSCMYKCOLOR cmyk;
		};
		struct 
		{
			TIECMSRGBCOLOR rgb;
		};
		struct 
		{
			System::Word gray;
		};
		
	};
};


typedef TIECMSCOLOR *PIECMSCOLOR;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TIEPOINTL
{
public:
	int x;
	int y;
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD TIEDeviceModeW
{
public:
	System::StaticArray<System::WideChar, 32> dmDeviceName;
	System::Word dmSpecVersion;
	System::Word dmDriverVersion;
	System::Word dmSize;
	System::Word dmDriverExtra;
	unsigned dmFields;
	TIEPOINTL dmPosition;
	unsigned dmDisplayOrientation;
	unsigned dmDisplayFixedOutput;
	short dmColor;
	short dmDuplex;
	short dmYResolution;
	short dmTTOption;
	short dmCollate;
	System::StaticArray<System::WideChar, 32> dmFormName;
	System::Word dmLogPixels;
	unsigned dmBitsPerPel;
	unsigned dmPelsWidth;
	unsigned dmPelsHeight;
	unsigned dmDisplayFlags;
	unsigned dmDisplayFrequency;
	unsigned dmICMMethod;
	unsigned dmICMIntent;
	unsigned dmMediaType;
	unsigned dmDitherType;
	unsigned dmICCManufacturer;
	unsigned dmICCModel;
	unsigned dmPanningWidth;
	unsigned dmPanningHeight;
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD TIEGestureNotifyStruct
{
public:
	unsigned cbSize;
	unsigned dwFlags;
	HWND hwndTarget;
	System::Types::TSmallPoint ptsLocation;
	unsigned dwInstanceID;
};
#pragma pack(pop)


typedef TIEGestureNotifyStruct *PIEGestureNotifyStruct;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TIEWMGestureNotify
{
public:
	unsigned Msg;
	NativeUInt Unused;
	TIEGestureNotifyStruct *NotifyStruct;
	int Result;
};
#pragma pack(pop)


struct DECLSPEC_DRECORD TIEGESTUREINFO
{
public:
	unsigned cbSize;
	unsigned dwFlags;
	unsigned dwID;
	HWND hwndTarget;
	System::Types::TSmallPoint ptsLocation;
	unsigned dwInstanceID;
	unsigned dwSequenceID;
	unsigned __int64 ullArguments;
	unsigned cbExtraArgs;
};


typedef TIEGESTUREINFO *PIEGESTUREINFO;

typedef NativeUInt HGESTUREINFO;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TIEGESTURECONFIG
{
public:
	unsigned dwID;
	unsigned dwWant;
	unsigned dwBlock;
};
#pragma pack(pop)


typedef TIEGESTURECONFIG *PIEGESTURECONFIG;

//-- var, const, procedure ---------------------------------------------------
static const int clNone_ = int(536870911);
static const int clPaleGreen = int(0x7fff00);
static const int clDarkPink = int(0xd670da);
static const int clDarkPurple = int(0x8b3d48);
static const System::Word clNeonGreen = System::Word(0xfc7c);
static const int clCharcoal = int(0x4f4f2f);
static const int clBabyBlue = int(0xebce87);
static const int clPaleOrange = int(0x7dbeff);
static const int clElectricBlue = int(0xff901e);
static const int clMustard = int(0x20a5da);
static const int clAppleGreen = int(0x32cd9a);
static const System::Word clGold = System::Word(0xd7ff);
static const int clPavement = int(0x908070);
static const int clLemon = int(0x9df5ff);
static const System::Word clOlive = System::Word(0x8080);
static const int clBurntOrange = int(0x1e69d2);
static const int clPastelBlue = int(0xed9564);
static const int clPaleYellow = int(0xa4e9fd);
static const int clTangerine = int(0x328efe);
static const int clPastelRed = int(0x3539e5);
static const int clRoyalBlue = int(0xff7642);
static const int clSalmonPink = int(0xb9daff);
static const int clBlackGray = int(0xdcdcdc);
static const int clDarkGray = int(0x4e4e4e);
static const int clMidDarkGray = int(0x6e6e6e);
static const int clMidGray = int(0xa0a0a0);
static const int clPaleGray = int(0xe1e1e1);
static const int clWhiteGray = int(0xeeeeee);
static const int clAlmostWhite = int(0xf9f9f9);
extern DELPHI_PACKAGE System::UnicodeString IEMAINNAME;
static const System::Word IEMAINVER = System::Word(0x3fc);
extern DELPHI_PACKAGE System::UnicodeString IEMAINVERSION;
static const System::Int8 IEMAINDATEDD = System::Int8(0xc);
static const System::Int8 IEMAINDATEMM = System::Int8(0x9);
static const System::Word IEMAINDATEYY = System::Word(0x7e5);
static const System::Word IEM_UPDATE = System::Word(0x1f58);
static const System::Word IEM_UPDATETBR = System::Word(0x1f59);
static const System::Word IEM_IMAGELOADED = System::Word(0x1f5a);
static const System::Word IEM_AUTOSCROLL = System::Word(0x1f62);
static const System::Word IEM_RENAME_FILE = System::Word(0x1f63);
static const System::Word IEM_NEWFRAME = System::Word(0x1f6c);
static const System::Word IEM_EVENT = System::Word(0x1f6d);
static const System::Word IEM_PROGRESS = System::Word(0x1f6e);
static const System::Word IEM_FINISHWORK = System::Word(0x1f6f);
static const System::Word IEM_MEDIAFOUNDATION = System::Word(0x1f76);
static const System::Word IEWM_MOUSEHWHEEL = System::Word(0x20e);
static const System::Word IEENTRYFORVARIABLECURSOR = System::Word(0x717);
static const int IEPrint_Preview_Margin_Color = int(12632256);
static const System::Int8 Zero_Alpha_Color = System::Int8(0x0);
static const int Full_Alpha_Color = int(0x2ffffff);
static const System::Int8 Default_GIF_Animation_Delay_MS = System::Int8(0x64);
static const char Degree_Symbol = '\xb0';
#define MM_Per_Inch  (2.540000E+01)
static const System::Extended Inches_Per_CM = 3.937008E-01;
static const System::Extended M_per_Inch = 2.540000E-02;
static const System::Extended KM_per_Inch = 2.540000E-05;
static const System::Extended CM_per_Inch = 2.540000E+00;
static const System::Extended Microns_per_Inch = 2.540000E+04;
static const System::Extended NM_per_Inch = 2.540000E+07;
static const System::Extended Feet_per_Inch = 8.333333E-02;
static const System::Extended Yards_per_Inch = 2.777778E-02;
static const System::Extended Miles_per_Inch = 1.578283E-05;
static const System::Int8 Trackbar_Thumb_Length = System::Int8(0x14);
extern DELPHI_PACKAGE System::StaticArray<__int64, 10350> IECMYKPROFILE;
static const System::WideChar IEDLLWNameExt = (System::WideChar)(0x57);
static const System::Int8 Align_Text_Top = System::Int8(0x0);
static const short Align_Text_Near_Top = short(-901);
static const short Align_Text_Vert_Center = short(-902);
static const short Align_Text_Near_Bottom = short(-903);
static const short Align_Text_Bottom = short(-904);
static const System::Int8 Align_Text_Left = System::Int8(0x0);
static const short Align_Text_Near_Left = short(-901);
static const short Align_Text_Horz_Center = short(-902);
static const short Align_Text_Near_Right = short(-903);
static const short Align_Text_Right = short(-904);
static const System::Int8 VK_A = System::Int8(0x41);
static const System::Int8 VK_B = System::Int8(0x42);
static const System::Int8 VK_C = System::Int8(0x43);
static const System::Int8 VK_D = System::Int8(0x44);
static const System::Int8 VK_E = System::Int8(0x45);
static const System::Int8 VK_F = System::Int8(0x46);
static const System::Int8 VK_G = System::Int8(0x47);
static const System::Int8 VK_H = System::Int8(0x48);
static const System::Int8 VK_I = System::Int8(0x49);
static const System::Int8 VK_J = System::Int8(0x4a);
static const System::Int8 VK_L = System::Int8(0x4c);
static const System::Int8 VK_M = System::Int8(0x4d);
static const System::Int8 VK_R = System::Int8(0x52);
static const System::Int8 VK_U = System::Int8(0x55);
static const System::Int8 VK_V = System::Int8(0x56);
static const System::Int8 VK_X = System::Int8(0x58);
static const System::Int8 VK_Y = System::Int8(0x59);
static const System::Int8 VK_Z = System::Int8(0x5a);
static const System::Byte VK_COMMA = System::Byte(0xbc);
static const System::Byte VK_PERIOD = System::Byte(0xbe);
static const System::Byte VK_OPENING_SQUARE_BRACKET = System::Byte(0xdb);
static const System::Byte VK_CLOSING_SQUARE_BRACKET = System::Byte(0xdd);
static const System::Word scShift = System::Word(0x2000);
static const System::Word scCtrl = System::Word(0x4000);
static const System::Word scAlt = System::Word(0x8000);
extern DELPHI_PACKAGE System::ResourceString _IERS_IELibNotFound;
#define Hyiedefs_IERS_IELibNotFound System::LoadResourceString(&Hyiedefs::_IERS_IELibNotFound)
static const System::Uitypes::TScrollStyle ssBoth_ = (System::Uitypes::TScrollStyle)(3);
static const System::Uitypes::TScrollStyle ssHorizontal_ = (System::Uitypes::TScrollStyle)(1);
static const System::Uitypes::TScrollStyle ssVertical_ = (System::Uitypes::TScrollStyle)(2);
static const System::Uitypes::TScrollStyle ssNone_ = (System::Uitypes::TScrollStyle)(0);
static const TMsgLanguage msChineseTraditionalBig5 = (TMsgLanguage)(17);
#define Languages_Requiring_Unicode (System::Set<TMsgLanguage, TMsgLanguage::msSystem, TMsgLanguage::msUser>() << TMsgLanguage::msGreek << TMsgLanguage::msRussian << TMsgLanguage::msPolish << TMsgLanguage::msJapanese << TMsgLanguage::msCzech << TMsgLanguage::msFarsi << TMsgLanguage::msChinese << TMsgLanguage::msChineseTraditional << TMsgLanguage::msTurkish << TMsgLanguage::msKorean << TMsgLanguage::msArabic )
extern DELPHI_PACKAGE Hyiedefs__5 IELANGUAGECHARINFO;
static const int IESELBREAK = int(0xfffff);
static const System::Word IETIFFTAG_TRANSFERFUNC = System::Word(0x12d);
static const System::Word IETIFFTAG_COLORMAP = System::Word(0x140);
static const System::Word IETIFFTAG_SUBIFD = System::Word(0x14a);
static const System::Word IETIFFTAG_XMP = System::Word(0x2bc);
static const System::Word IETIFFTAG_WANGIMAGING = System::Word(0x80a4);
static const System::Word IETIFFTAG_COPYRIGHT = System::Word(0x8298);
static const System::Word IETIFFTAG_IPTC = System::Word(0x83bb);
static const System::Word IETIFFTAG_PHOTOSHOP = System::Word(0x8649);
static const System::Word IETIFFTAG_EXIFIFD = System::Word(0x8769);
static const System::Word IETIFFTAG_ICC = System::Word(0x8773);
static const System::Word IETIFFTAG_EXIFGPSIFD = System::Word(0x8825);
static const System::Word IETIFFTAG_EPSTANDARD = System::Word(0x9216);
static const System::Word IETIFFTAG_INTEROPIFD = System::Word(0xa005);
static const System::Word IETIFFTAG_DNGVERSION = System::Word(0xc612);
static const System::Word IETIFFTAG_SUBIFD_OFFSET = System::Word(0x14a);
static const System::Word IETIFFTAG_TileWidth = System::Word(0x142);
static const System::Word IETIFFTAG_TileLength = System::Word(0x143);
static const System::Word IETIFFTAG_ImageWidth = System::Word(0x100);
static const System::Word IETIFFTAG_ImageHeight = System::Word(0x101);
static const System::Word IETIFFTAG_SampleFormat = System::Word(0x153);
static const System::Word IETIFFTAG_PhotometricInterpretation = System::Word(0x106);
static const System::Word IETIFFTAG_PlanarConfiguration = System::Word(0x11c);
static const System::Word IETIFFTAG_Orientation = System::Word(0x112);
static const System::Word IETIFFTAG_Compression = System::Word(0x103);
static const System::Word IETIFFTAG_Predictor = System::Word(0x13d);
static const System::Word IETIFFTAG_T4Options = System::Word(0x124);
static const System::Word IETIFFTAG_T6Options = System::Word(0x125);
static const System::Word IETIFFTAG_FillOrder = System::Word(0x10a);
static const System::Word IETIFFTAG_Software = System::Word(0x131);
static const System::Word IETIFFTAG_JPEGProc = System::Word(0x200);
static const System::Word IETIFFTAG_JPEGInterchangeFormat = System::Word(0x201);
static const System::Word IETIFFTAG_JPEGInterchangeFormatLength = System::Word(0x202);
static const System::Word IETIFFTAG_JPEGRestartInterval = System::Word(0x203);
static const System::Word IETIFFTAG_JPEGLosslessPredictors = System::Word(0x205);
static const System::Word IETIFFTAG_JPEGPointTransforms = System::Word(0x206);
static const System::Word IETIFFTAG_JPEGQTables = System::Word(0x207);
static const System::Word IETIFFTAG_JPEGDCTables = System::Word(0x208);
static const System::Word IETIFFTAG_JPEGACTables = System::Word(0x209);
static const System::Word IETIFFTAG_ExtraSamples = System::Word(0x152);
static const System::Word IETIFFTAG_YCbCrSubSampling = System::Word(0x212);
static const System::Word IETIFFTAG_StripOffsets = System::Word(0x111);
static const System::Word IETIFFTAG_StripByteCounts = System::Word(0x117);
static const System::Word IETIFFTAG_TileOffsets = System::Word(0x144);
static const System::Word IETIFFTAG_TileByteCounts = System::Word(0x145);
static const System::Word IETIFFTAG_JPEGTables = System::Word(0x15b);
static const System::Word IETIFFTAG_PhotoshopImageSourceData = System::Word(0x935c);
static const System::Word IETIFFTAG_DocumentName = System::Word(0x10d);
static const System::Word IETIFFTAG_ImageDescription = System::Word(0x10e);
static const System::Word IETIFFTAG_PageName = System::Word(0x11d);
static const System::Word IETIFFTAG_PageNumber = System::Word(0x129);
static const System::Word IETIFFTAG_PageCount = System::Word(0x129);
static const System::Byte IETIFFTAG_NewSubfileType = System::Byte(0xfe);
static const System::Word IETIFFTAG_Make = System::Word(0x10f);
static const System::Word IETIFFTAG_Model = System::Word(0x110);
static const System::Word IETIFFTAG_DateTime = System::Word(0x132);
static const System::Word IETIFFTAG_XResolution = System::Word(0x11a);
static const System::Word IETIFFTAG_YResolution = System::Word(0x11b);
static const System::Word IETIFFTAG_ResolutionUnit = System::Word(0x128);
static const System::Word IETIFFTAG_XPRating = System::Word(0x4746);
static const System::Word IETIFFTAG_XPTitle = System::Word(0x9c9b);
static const System::Word IETIFFTAG_XPComment = System::Word(0x9c9c);
static const System::Word IETIFFTAG_XPAuthor = System::Word(0x9c9d);
static const System::Word IETIFFTAG_XPKeywords = System::Word(0x9c9e);
static const System::Word IETIFFTAG_XPSubject = System::Word(0x9c9f);
static const System::Word IETIFFTAG_Artist = System::Word(0x13b);
static const System::Word IETIFFTAG_WhitePoint = System::Word(0x13e);
static const System::Word IETIFFTAG_YCbCrPositioning = System::Word(0x213);
static const System::Word IETIFFTAG_PrimaryChromaticities = System::Word(0x13f);
static const System::Word IETIFFTAG_YCbCrCoefficients = System::Word(0x211);
static const System::Word IETIFFTAG_ReferenceBlackWhite = System::Word(0x214);
static const System::Word IETIFFTAG_TIFF_XPos = System::Word(0x11e);
static const System::Word IETIFFTAG_TIFF_YPos = System::Word(0x11f);
static const System::Word IETIFFTAG_SamplesPerPixel = System::Word(0x115);
static const System::Word IETIFFTAG_BitsPerSample = System::Word(0x102);
static const System::Word IETIFFTAG_RowsPerStrip = System::Word(0x116);
static const System::Word IETIFFTAG_EXIFExposureTime = System::Word(0x829a);
static const System::Word IETIFFTAG_EXIFFNumber = System::Word(0x829d);
static const System::Word IETIFFTAG_EXIFExposureProgram = System::Word(0x8822);
static const System::Word IETIFFTAG_EXIFISOSpeedRatings = System::Word(0x8827);
static const System::Word IETIFFTAG_EXIFExifVersion = System::Word(0x9000);
static const System::Word IETIFFTAG_EXIFDateTimeOriginal = System::Word(0x9003);
static const System::Word IETIFFTAG_EXIFDateTimeDigitized = System::Word(0x9004);
static const System::Word IETIFFTAG_EXIFCompressedBitsPerPixel = System::Word(0x9102);
static const System::Word IETIFFTAG_EXIFShutterSpeedValue = System::Word(0x9201);
static const System::Word IETIFFTAG_EXIFApertureValue = System::Word(0x9202);
static const System::Word IETIFFTAG_EXIFBrightnessValue = System::Word(0x9203);
static const System::Word IETIFFTAG_EXIFExposureBiasValue = System::Word(0x9204);
static const System::Word IETIFFTAG_EXIFMaxApertureValue = System::Word(0x9205);
static const System::Word IETIFFTAG_EXIFSubjectDistance = System::Word(0x9206);
static const System::Word IETIFFTAG_EXIFMeteringMode = System::Word(0x9207);
static const System::Word IETIFFTAG_EXIFLightSource = System::Word(0x9208);
static const System::Word IETIFFTAG_EXIFFlash = System::Word(0x9209);
static const System::Word IETIFFTAG_EXIFFocalLength = System::Word(0x920a);
static const System::Word IETIFFTAG_EXIFSubsecTime = System::Word(0x9290);
static const System::Word IETIFFTAG_EXIFSubsecTimeOriginal = System::Word(0x9291);
static const System::Word IETIFFTAG_EXIFSubsecTimeDigitized = System::Word(0x9292);
static const System::Word IETIFFTAG_EXIFFlashPixVersion = System::Word(0xa000);
static const System::Word IETIFFTAG_EXIFColorSpace = System::Word(0xa001);
static const System::Word IETIFFTAG_EXIFExifImageWidth = System::Word(0xa002);
static const System::Word IETIFFTAG_EXIFExifImageHeight = System::Word(0xa003);
static const System::Word IETIFFTAG_EXIFRelatedSoundFile = System::Word(0xa004);
static const System::Word IETIFFTAG_EXIFFocalPlaneXResolution = System::Word(0xa20e);
static const System::Word IETIFFTAG_EXIFFocalPlaneYResolution = System::Word(0xa20f);
static const System::Word IETIFFTAG_EXIFFocalPlaneResolutionUnit = System::Word(0xa210);
static const System::Word IETIFFTAG_EXIFExposureIndex = System::Word(0xa215);
static const System::Word IETIFFTAG_EXIFSensingMethod = System::Word(0xa217);
static const System::Word IETIFFTAG_EXIFFileSource = System::Word(0xa300);
static const System::Word IETIFFTAG_EXIFSceneType = System::Word(0xa301);
static const System::Word IETIFFTAG_EXIFExposureMode = System::Word(0xa402);
static const System::Word IETIFFTAG_EXIFWhiteBalance = System::Word(0xa403);
static const System::Word IETIFFTAG_EXIFDigitalZoomRatio = System::Word(0xa404);
static const System::Word IETIFFTAG_EXIFFocalLengthIn35mmFilm = System::Word(0xa405);
static const System::Word IETIFFTAG_EXIFSceneCaptureType = System::Word(0xa406);
static const System::Word IETIFFTAG_EXIFGainControl = System::Word(0xa407);
static const System::Word IETIFFTAG_EXIFContrast = System::Word(0xa408);
static const System::Word IETIFFTAG_EXIFSaturation = System::Word(0xa409);
static const System::Word IETIFFTAG_EXIFSharpness = System::Word(0xa40a);
static const System::Word IETIFFTAG_EXIFSubjectDistanceRange = System::Word(0xa40c);
static const System::Word IETIFFTAG_EXIFImageUniqueID = System::Word(0xa420);
static const System::Word IETIFFTAG_EXIFCameraOwnerName = System::Word(0xa430);
static const System::Word IETIFFTAG_EXIFBodySerialNumber = System::Word(0xa431);
static const System::Word IETIFFTAG_EXIFLensMake = System::Word(0xa433);
static const System::Word IETIFFTAG_EXIFLensModel = System::Word(0xa434);
static const System::Word IETIFFTAG_EXIFLensSerialNumber = System::Word(0xa435);
static const System::Word IETIFFTAG_EXIFGamma = System::Word(0xa500);
static const System::Word IETIFFTAG_EXIFSubjectArea = System::Word(0x9214);
static const System::Word IETIFFTAG_EXIFSubjectLocation = System::Word(0xa214);
static const System::Word IETIFFTAG_EXIFUserComment = System::Word(0x9286);
static const System::Word IETIFFTAG_EXIFMAKERNOTE = System::Word(0x927c);
static const System::Int8 IETIFFTAG_EXIFGPSVersionID = System::Int8(0x0);
static const System::Int8 IETIFFTAG_EXIFGPSLatitudeRef = System::Int8(0x1);
static const System::Int8 IETIFFTAG_EXIFGPSLatitude = System::Int8(0x2);
static const System::Int8 IETIFFTAG_EXIFGPSLongitudeRef = System::Int8(0x3);
static const System::Int8 IETIFFTAG_EXIFGPSLongitude = System::Int8(0x4);
static const System::Int8 IETIFFTAG_EXIFGPSAltitudeRef = System::Int8(0x5);
static const System::Int8 IETIFFTAG_EXIFGPSAltitude = System::Int8(0x6);
static const System::Int8 IETIFFTAG_EXIFGPSTimeStamp = System::Int8(0x7);
static const System::Int8 IETIFFTAG_EXIFGPSSatellites = System::Int8(0x8);
static const System::Int8 IETIFFTAG_EXIFGPSStatus = System::Int8(0x9);
static const System::Int8 IETIFFTAG_EXIFGPSMeasureMode = System::Int8(0xa);
static const System::Int8 IETIFFTAG_EXIFGPSDOP = System::Int8(0xb);
static const System::Int8 IETIFFTAG_EXIFGPSSpeedRef = System::Int8(0xc);
static const System::Int8 IETIFFTAG_EXIFGPSSpeed = System::Int8(0xd);
static const System::Int8 IETIFFTAG_EXIFGPSTrackRef = System::Int8(0xe);
static const System::Int8 IETIFFTAG_EXIFGPSTrack = System::Int8(0xf);
static const System::Int8 IETIFFTAG_EXIFGPSImgDirectionRef = System::Int8(0x10);
static const System::Int8 IETIFFTAG_EXIFGPSImgDirection = System::Int8(0x11);
static const System::Int8 IETIFFTAG_EXIFGPSMapDatum = System::Int8(0x12);
static const System::Int8 IETIFFTAG_EXIFGPSDestLatitudeRef = System::Int8(0x13);
static const System::Int8 IETIFFTAG_EXIFGPSDestLatitude = System::Int8(0x14);
static const System::Int8 IETIFFTAG_EXIFGPSDestLongitudeRef = System::Int8(0x15);
static const System::Int8 IETIFFTAG_EXIFGPSDestLongitude = System::Int8(0x16);
static const System::Int8 IETIFFTAG_EXIFGPSDestBearingRef = System::Int8(0x17);
static const System::Int8 IETIFFTAG_EXIFGPSDestBearing = System::Int8(0x18);
static const System::Int8 IETIFFTAG_EXIFGPSDestDistanceRef = System::Int8(0x19);
static const System::Int8 IETIFFTAG_EXIFGPSDestDistance = System::Int8(0x1a);
static const System::Int8 IETIFFTAG_EXIFGPSDateStamp = System::Int8(0x1d);
static const System::Int8 IETIFFTAG_EXIFInteropIndex = System::Int8(0x1);
static const System::Int8 IETIFFTAG_EXIFInteropVersion = System::Int8(0x2);
static const System::Int8 IETIFFTYPE_BYTE = System::Int8(0x1);
static const System::Int8 IETIFFTYPE_ASCII = System::Int8(0x2);
static const System::Int8 IETIFFTYPE_SHORT = System::Int8(0x3);
static const System::Int8 IETIFFTYPE_LONG = System::Int8(0x4);
static const System::Int8 IETIFFTYPE_RATIONAL = System::Int8(0x5);
static const System::Int8 IETIFFTYPE_SBYTE = System::Int8(0x6);
static const System::Int8 IETIFFTYPE_UNDEFINED = System::Int8(0x7);
static const System::Int8 IETIFFTYPE_SSHORT = System::Int8(0x8);
static const System::Int8 IETIFFTYPE_SLONG = System::Int8(0x9);
static const System::Int8 IETIFFTYPE_SRATIONAL = System::Int8(0xa);
static const System::Int8 IETIFFTYPE_FLOAT = System::Int8(0xb);
static const System::Int8 IETIFFTYPE_DOUBLE = System::Int8(0xc);
static const System::Int8 IETIFFTYPE_IFDPOINTER = System::Int8(0xd);
static const System::Int8 IETIFFTYPE_UNICODE = System::Int8(0xe);
static const System::Int8 IETIFFTYPE_COMPLEX = System::Int8(0xf);
static const System::Int8 IETIFFTYPE_LONG8 = System::Int8(0x10);
static const System::Int8 IETIFFTYPE_SLONG8 = System::Int8(0x11);
static const System::Int8 IETIFFTYPE_IFD8 = System::Int8(0x12);
static const int IEBI_IYU1 = int(0x31555949);
static const int IEBI_IYU2 = int(0x32555949);
static const int IEBI_UYVY = int(0x59565955);
static const int IEBI_UYNV = int(0x564e5955);
static const int IEBI_cyuv = int(0x76757963);
static const int IEBI_YUY2 = int(0x32595559);
static const int IEBI_YUNV = int(0x564e5559);
static const int IEBI_YVYU = int(0x55595659);
static const int IEBI_Y41P = int(0x50313459);
static const int IEBI_Y211 = int(0x31313259);
static const int IEBI_Y41T = int(0x54313459);
static const int IEBI_Y42T = int(0x54323459);
static const int IEBI_CLJR = int(0x524a4c43);
static const int IEBI_YVU9 = int(0x39555659);
static const int IEBI_IF09 = int(0x39304649);
static const int IEBI_YV12 = int(0x32315659);
static const int IEBI_I420 = int(0x30323449);
static const int IEBI_IYUV = int(0x56555949);
static const int IEBI_CLPL = int(0x4c504c43);
#define Menu_Ellipsis L"..."
extern DELPHI_PACKAGE Hyiedefs__6 fActiveLanguageWords;
extern DELPHI_PACKAGE Hyiedefs__7 fCustomLanguageWords;
extern DELPHI_PACKAGE TMsgLanguage fActiveLanguage;
extern DELPHI_PACKAGE bool gAVIFILEinit;
static const TIEGDIPlusGradient grdNone = (TIEGDIPlusGradient)(0);
static const TIEGDIPlusGradient grdHorizontal = (TIEGDIPlusGradient)(1);
static const TIEGDIPlusGradient grdVertical = (TIEGDIPlusGradient)(2);
static const TIEGDIPlusGradient grdHorzCenter = (TIEGDIPlusGradient)(3);
static const TIEGDIPlusGradient grdVertCenter = (TIEGDIPlusGradient)(4);
static const TIEGDIPlusGradient grdDiagonal = (TIEGDIPlusGradient)(5);
static const TIEGDIPlusGradient grdDiagonal2 = (TIEGDIPlusGradient)(6);
static const TIEGDIPlusGradient grdDiagCentered = (TIEGDIPlusGradient)(7);
static const TIEGDIPlusGradient grdDiagCentered2 = (TIEGDIPlusGradient)(8);
static const TIEUnits ieruPixels _DEPRECATED_ATTRIBUTE1("Use ieuPixels instead - http://imageen.com/help/Compatib"
	"ility.html")  = (TIEUnits)(0);
static const TIEUnits ieruInches _DEPRECATED_ATTRIBUTE1("Use ieuInches instead - http://imageen.com/help/Compatib"
	"ility.html")  = (TIEUnits)(1);
static const TIEUnits ieruMillimeters _DEPRECATED_ATTRIBUTE1("Use ieuMillimeters instead - http://imageen.com/help/Com"
	"patibility.html")  = (TIEUnits)(5);
static const TIEUnits ieruCentimeters _DEPRECATED_ATTRIBUTE1("Use ieuCentimeters instead - http://imageen.com/help/Com"
	"patibility.html")  = (TIEUnits)(4);
#define Duplicated_Shapes (System::Set<TIEShape, TIEShape::iesEllipse, TIEShape::iesSimpleArrowSE>() << TIEShape::iesArrowRight << TIEShape::iesArrowUp << TIEShape::iesArrowDown << TIEShape::iesArrowUpDown << TIEShape::iesArrowNE << TIEShape::iesArrowSW << TIEShape::iesArrowSE << TIEShape::iesFatArrowRight << TIEShape::iesFatArrowUp << TIEShape::iesFatArrowDown << TIEShape::iesShootingArrowNE << TIEShape::iesShootingArrowSW << TIEShape::iesShootingArrowSE << TIEShape::iesLightningRight << TIEShape::iesSpeechBubbleRightInShort << TIEShape::iesSpeechBubbleRightOutShort << TIEShape::iesSpeechBubbleRightInLong << TIEShape::iesSpeechBubbleRightOutLong << TIEShape::iesThoughtBubbleRight << TIEShape::iesPinRight << TIEShape::iesHandPointRight << TIEShape::iesTagRight \
	<< TIEShape::iesTagUp << TIEShape::iesTagDown << TIEShape::iesTag2Right << TIEShape::iesTag2Up << TIEShape::iesTag2Down << TIEShape::iesChevronRight << TIEShape::iesChevronUp << TIEShape::iesChevronDown << TIEShape::iesSimpleArrowRight << TIEShape::iesSimpleArrowUp << TIEShape::iesSimpleArrowDown << TIEShape::iesSimpleArrowNE << TIEShape::iesSimpleArrowSW << TIEShape::iesSimpleArrowSE )
#define Shapes_Supporting_Modifier (System::Set<TIEShape, TIEShape::iesEllipse, TIEShape::iesSimpleArrowSE>() << TIEShape::iesEllipseSegment << TIEShape::iesCustomShape << TIEShape::iesCustomStar << TIEShape::iesCustomExplosion << TIEShape::iesCustomCog << TIEShape::iesCustomAsterisk << TIEShape::iesCustomFlower << TIEShape::iesCustomRadiance << TIEShape::iesCustomRadiance2 )
static const System::Int8 IECMSMAX_COLOR_CHANNELS = System::Int8(0x8);
static const System::Word IEWM_GESTURENOTIFY = System::Word(0x11a);
static const System::Word IEWM_GESTURE = System::Word(0x119);
static const System::Word IEWM_TOUCH = System::Word(0x240);
static const System::Word IEWM_TABLET_DEFBASE = System::Word(0x2c0);
static const System::Word IEWM_TABLET_FLICK = System::Word(0x2cb);
static const System::Int8 IEGID_BEGIN = System::Int8(0x1);
static const System::Int8 IEGID_END = System::Int8(0x2);
static const System::Int8 IEGID_ZOOM = System::Int8(0x3);
static const System::Int8 IEGID_PAN = System::Int8(0x4);
static const System::Int8 IEGID_ROTATE = System::Int8(0x5);
static const System::Int8 IEGID_TWOFINGERTAP = System::Int8(0x6);
static const System::Int8 IEGID_PRESSANDTAP = System::Int8(0x7);
static const System::Int8 IEGID_ROLLOVER = System::Int8(0x7);
static const System::Int8 IEGF_BEGIN = System::Int8(0x1);
static const System::Int8 IEGF_INERTIA = System::Int8(0x2);
static const System::Int8 IEGF_END = System::Int8(0x4);
static const System::Int8 IEGC_ALLGESTURES = System::Int8(0x1);
static const System::Int8 IEGC_ZOOM = System::Int8(0x1);
static const System::Int8 IEGC_PAN = System::Int8(0x1);
static const System::Int8 IEGC_PAN_WITH_SINGLE_FINGER_VERTICALLY = System::Int8(0x2);
static const System::Int8 IEGC_PAN_WITH_SINGLE_FINGER_HORIZONTALLY = System::Int8(0x4);
static const System::Int8 IEGC_PAN_WITH_GUTTER = System::Int8(0x8);
static const System::Int8 IEGC_PAN_WITH_INERTIA = System::Int8(0x10);
static const System::Int8 IEGC_ROTATE = System::Int8(0x1);
static const System::Int8 IEGC_TWOFINGERTAP = System::Int8(0x1);
static const System::Int8 IEGC_PRESSANDTAP = System::Int8(0x1);
static const System::Int8 IEGC_ROLLOVER = System::Int8(0x1);
extern DELPHI_PACKAGE System::UnicodeString __fastcall LanguageToStr(TMsgLanguage ALanguage, bool Localized = false);
extern DELPHI_PACKAGE TDPoint __fastcall IE2DPoint _DEPRECATED_ATTRIBUTE1("Use DPoint() instead - http://imageen.com/help/Compatibility.html") (double X, double Y);
extern DELPHI_PACKAGE TDPoint __fastcall DPoint(double X, double Y);
extern DELPHI_PACKAGE System::Types::TPoint __fastcall DPointToPoint(const TDPoint &pt);
extern DELPHI_PACKAGE TDPoint __fastcall PointToDPoint(const System::Types::TPoint &pt);
extern DELPHI_PACKAGE void __fastcall IEInitialize_hyiedefs(void);
extern DELPHI_PACKAGE void __fastcall IEFinalize_hyiedefs(void);
}	/* namespace Hyiedefs */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_HYIEDEFS)
using namespace Hyiedefs;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// HyiedefsHPP
