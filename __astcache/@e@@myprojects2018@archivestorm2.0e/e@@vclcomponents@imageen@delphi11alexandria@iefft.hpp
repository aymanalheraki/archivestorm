// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'iefft.pas' rev: 35.00 (Windows)

#ifndef IefftHPP
#define IefftHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Vcl.Graphics.hpp>
#include <System.Classes.hpp>
#include <hyiedefs.hpp>
#include <iexBitmaps.hpp>

//-- user supplied -----------------------------------------------------------

namespace Iefft
{
//-- forward type declarations -----------------------------------------------
struct TIEComplexColor;
struct TIEComplex;
class DELPHICLASS TIEFtImage;
//-- type declarations -------------------------------------------------------
typedef System::StaticArray<float, 16385> TIEsinglearray;

typedef TIEsinglearray *PIEsinglearray;

typedef System::StaticArray<PIEsinglearray, 16385> TIECOMPLEX_IMAGE;

typedef TIECOMPLEX_IMAGE *PIECOMPLEX_IMAGE;

typedef double *PIEdouble;

typedef int *PIEinteger;

typedef float *PIEsingle;

typedef int *PIElongint;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TIEComplexColor
{
public:
	float *real_Red;
	float *imag_Red;
	float *real_Blue;
	float *imag_Blue;
	float *real_Green;
	float *imag_Green;
	float *imag_gray;
	float *real_gray;
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD TIEComplex
{
public:
	float real;
	float imag;
};
#pragma pack(pop)


enum DECLSPEC_DENUM TIEFtImageType : unsigned char { ieitUnknown, ieitRGB, ieitGrayscale };

typedef System::StaticArray<unsigned, 134217728> tdwordarray;

typedef tdwordarray *pdwordarray;

typedef System::StaticArray<int, 134217728> tlongintarray;

typedef tlongintarray *plongintarray;

class PASCALIMPLEMENTATION TIEFtImage : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	double *sintabpt;
	int *bittabpt;
	int *powers;
	int numpts;
	int nn;
	float direction;
	double scalef;
	int FFTN;
	bool NORMALIZE;
	TIECOMPLEX_IMAGE *fftr;
	TIECOMPLEX_IMAGE *fftg;
	TIECOMPLEX_IMAGE *fftb;
	TIECOMPLEX_IMAGE *fftgray;
	int fOX;
	int fOY;
	int fOrigBitmapWidth;
	int fOrigBitmapHeight;
	Hyiedefs::TIEProgressEvent fOnProgress;
	TIEFtImageType fImageType;
	void __fastcall image_fftoc(Iexbitmaps::TIEBitmap* image, PIECOMPLEX_IMAGE &output, int ch, Hyiedefs::TProgressRec &Progress);
	void __fastcall fftx(Iexbitmaps::TIEBitmap* image, int oc, PIECOMPLEX_IMAGE &output, int ch, Hyiedefs::TProgressRec &Progress);
	void __fastcall image_fftinv(PIECOMPLEX_IMAGE image, PIECOMPLEX_IMAGE &output, Hyiedefs::TProgressRec &Progress);
	void __fastcall pairsort(PIEsinglearray arr, pdwordarray iarr, int n);
	void __fastcall fqsort(PIEsinglearray arr, pdwordarray iarr, int l, int r);
	void __fastcall fftinvx(PIECOMPLEX_IMAGE image, int oc, PIECOMPLEX_IMAGE &output, Hyiedefs::TProgressRec &Progress);
	void __fastcall fft2d(PIECOMPLEX_IMAGE image, float direction, Hyiedefs::TProgressRec &Progress);
	void __fastcall filt_orig(PIECOMPLEX_IMAGE xarray);
	void __fastcall realtoint(PIECOMPLEX_IMAGE fim, plongintarray H);
	void __fastcall fft(PIEsinglearray data, float dir);
	void __fastcall _fft(PIEsinglearray tseries, int level, int chunk);
	void __fastcall fftinit(int nopts);
	int __fastcall bitrev(int bits);
	PIECOMPLEX_IMAGE __fastcall newcomplex(Iexbitmaps::TIEBitmap* im, int ch);
	PIECOMPLEX_IMAGE __fastcall dupcomplex(PIECOMPLEX_IMAGE im);
	void __fastcall filt_toint(PIECOMPLEX_IMAGE oimage, Iexbitmaps::TIEBitmap* output, int ch);
	TIEComplexColor __fastcall GetComplexImage(int x, int y);
	
protected:
	void __fastcall FreeAll();
	
public:
	__fastcall TIEFtImage();
	__fastcall virtual ~TIEFtImage();
	void __fastcall BuildFT(Iexbitmaps::TIEBitmap* fOrigBitmap, TIEFtImageType ImageType);
	void __fastcall BuildBitmap(Iexbitmaps::TIEBitmap* Bitmap);
	void __fastcall GetFTImage(Iexbitmaps::TIEBitmap* Bitmap);
	__classmethod void __fastcall CalcFFTImageSize(int ImageWidth, int ImageHeight, int &FFTImageWidthHeight);
	__classmethod void __fastcall CalcSuitableSourceSize(int OrigWidth, int OrigHeight, int &NewWidth, int &NewHeight);
	void __fastcall HiPass(int radius);
	void __fastcall LoPass(int radius);
	void __fastcall ClearZone(int x1, int y1, int x2, int y2, float vreal = 0.000000E+00f, float vimag = 0.000000E+00f)/* overload */;
	void __fastcall ClearZone(Iexbitmaps::TIEMask* mask, float vreal = 0.000000E+00f, float vimag = 0.000000E+00f)/* overload */;
	__property TIEComplexColor ComplexPixel[int x][int y] = {read=GetComplexImage};
	__property TIEFtImageType Imagetype = {read=fImageType, nodefault};
	__property int ComplexWidth = {read=FFTN, nodefault};
	__property int ComplexHeight = {read=FFTN, nodefault};
	void __fastcall Assign(TIEFtImage* Source);
	__property Hyiedefs::TIEProgressEvent OnProgress = {read=fOnProgress, write=fOnProgress};
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Iefft */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_IEFFT)
using namespace Iefft;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// IefftHPP
