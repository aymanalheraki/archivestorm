// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'ieanimation.pas' rev: 35.00 (Windows)

#ifndef IeanimationHPP
#define IeanimationHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <System.SyncObjs.hpp>
#include <iexBitmaps.hpp>
#include <System.Types.hpp>
#include <System.UITypes.hpp>
#include <Vcl.Graphics.hpp>
#include <hyiedefs.hpp>

//-- user supplied -----------------------------------------------------------

namespace Ieanimation
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TIEAnimationImageInfo;
class DELPHICLASS TIEAnimation;
class DELPHICLASS TIEHorizontalFlow;
class DELPHICLASS TIECircularFlow;
//-- type declarations -------------------------------------------------------
typedef void __fastcall (__closure *TIEAnimationGetImageInfoEvent)(System::TObject* Sender, int imageIndex, bool isVisible, int &imageWidth, int &imageHeight, System::WideString &text);

typedef void __fastcall (__closure *TIEAnimationGetImageEvent)(System::TObject* Sender, int imageIndex, Iexbitmaps::TIEBitmap* &image, System::WideString &text);

typedef void __fastcall (__closure *TIEAnimationReleaseImageEvent)(System::TObject* Sender, int imageIndex, Iexbitmaps::TIEBitmap* &image);

class PASCALIMPLEMENTATION TIEAnimationImageInfo : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	unsigned startTime;
	unsigned endTime;
	int startAlpha;
	int endAlpha;
	int lastAlpha;
	double startAngleX;
	double endAngleX;
	double lastAngleX;
	double startAngleY;
	double endAngleY;
	double lastAngleY;
	int startCenterX;
	int endCenterX;
	int lastCenterX;
	int startCenterY;
	int endCenterY;
	int lastCenterY;
	int startWidth;
	int endWidth;
	int lastWidth;
	int startHeight;
	int endHeight;
	int lastHeight;
	Hyiedefs::TIEQuadCoords lastCoords;
public:
	/* TObject.Create */ inline __fastcall TIEAnimationImageInfo() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TIEAnimationImageInfo() { }
	
};


class PASCALIMPLEMENTATION TIEAnimation : public System::TObject
{
	typedef System::TObject inherited;
	
	
private:
	typedef System::DynamicArray<TIEAnimationImageInfo*> _TIEAnimation__1;
	
	
private:
	TIEAnimationGetImageInfoEvent m_getImageInfo;
	TIEAnimationGetImageEvent m_getImage;
	TIEAnimationReleaseImageEvent m_releaseImage;
	_TIEAnimation__1 m_images;
	int m_currentImage;
	int m_viewWidth;
	int m_viewHeight;
	unsigned m_animDuration;
	int m_depth;
	bool m_needRefresh;
	bool m_showBorder;
	Vcl::Graphics::TPen* m_borderPen;
	int m_shadowAlphaMin;
	int m_shadowAlphaMax;
	Hyiedefs::TIERectangle m_lastScrollbarSlideRect;
	Hyiedefs::TIERectangle m_lastScrollbarBoundRect;
	bool m_showScrollbar;
	bool m_showText;
	Hyiedefs::TResampleFilter m_lastFrameZoomFilter;
	Hyiedefs::TResampleFilter m_FramesZoomFilter;
	System::Syncobjs::TCriticalSection* m_canvasCriticalSection;
	Vcl::Graphics::TFont* fFont;
	void __fastcall SetCurrentImage(int value);
	void __fastcall SetViewWidth(int value);
	void __fastcall SetViewHeight(int value);
	void __fastcall SetDepth(int value);
	int __fastcall GetImageCount();
	void __fastcall SetImageCount(int value);
	void __fastcall SetShowBorder(bool value);
	void __fastcall SetShadowAlphaMin(int value);
	void __fastcall SetShadowAlphaMax(int value);
	void __fastcall SetShowScrollbar(bool value);
	void __fastcall FreeImageInfo(int first, int last);
	TIEAnimationImageInfo* __fastcall GetImages(int idx);
	void __fastcall PaintBorder(int i, Iexbitmaps::TIEBitmap* dest);
	void __fastcall SetShowText(bool value);
	virtual bool __fastcall isVisible(const Hyiedefs::TIEQuadCoords &coords);
	void __fastcall SetFont(Vcl::Graphics::TFont* const Value);
	
protected:
	void __fastcall SetStartEndValues();
	virtual void __fastcall SetInitialValues(int first, int last);
	virtual void __fastcall SetStartValues();
	virtual void __fastcall SetEndValues();
	virtual bool __fastcall drawImage(Iexbitmaps::TIEBitmap* dest, int imageIndex);
	void __fastcall DoGetImageInfo(int imageIndex, bool isVisible, int &imageWidth, int &imageHeight, System::WideString &text);
	void __fastcall DoGetImage(int imageIndex, Iexbitmaps::TIEBitmap* &image, System::WideString &text);
	void __fastcall DoReleaseImage(int imageIndex, Iexbitmaps::TIEBitmap* &image);
	void __fastcall PaintScrollBar(Iexbitmaps::TIEBitmap* dest);
	void __fastcall PaintText(int posY, Iexbitmaps::TIEBitmap* dest);
	
public:
	__fastcall TIEAnimation();
	__fastcall virtual ~TIEAnimation();
	void __fastcall SetupEvents(TIEAnimationGetImageEvent getImage, TIEAnimationReleaseImageEvent releaseImage = 0x0, TIEAnimationGetImageInfoEvent getImageInfo = 0x0);
	void __fastcall RestartAnimation();
	virtual void __fastcall Display(Iexbitmaps::TIEBitmap* dest) = 0 ;
	int __fastcall FindImageAt(int X, int Y);
	void __fastcall MoveScrollbarSliderTo(int X);
	bool __fastcall IsInsideScrollbarSlider(int X, int Y);
	bool __fastcall IsInsideScrollbar(int X, int Y);
	void __fastcall DeleteImage(int imageIndex);
	void __fastcall InsertImage(int imageIndex);
	__property int ViewWidth = {read=m_viewWidth, write=SetViewWidth, nodefault};
	__property int ViewHeight = {read=m_viewHeight, write=SetViewHeight, nodefault};
	__property int Depth = {read=m_depth, write=SetDepth, nodefault};
	__property bool ShowBorder = {read=m_showBorder, write=SetShowBorder, nodefault};
	__property int ShadowAlphaMin = {read=m_shadowAlphaMin, write=SetShadowAlphaMin, nodefault};
	__property int ShadowAlphaMax = {read=m_shadowAlphaMax, write=SetShadowAlphaMax, nodefault};
	__property int ImageCount = {read=GetImageCount, write=SetImageCount, nodefault};
	__property TIEAnimationImageInfo* Images[int idx] = {read=GetImages};
	__property int CurrentImage = {read=m_currentImage, write=SetCurrentImage, nodefault};
	__property bool ShowScrollbar = {read=m_showScrollbar, write=SetShowScrollbar, nodefault};
	__property bool ShowText = {read=m_showText, write=SetShowText, nodefault};
	__property Vcl::Graphics::TFont* Font = {read=fFont, write=SetFont};
	__property Vcl::Graphics::TPen* BorderPen = {read=m_borderPen};
	__property Hyiedefs::TResampleFilter LastFrameZoomFilter = {read=m_lastFrameZoomFilter, write=m_lastFrameZoomFilter, nodefault};
	__property Hyiedefs::TResampleFilter FramesZoomFilter = {read=m_FramesZoomFilter, write=m_FramesZoomFilter, nodefault};
	__property unsigned AnimDuration = {read=m_animDuration, write=m_animDuration, nodefault};
	__property bool NeedRefresh = {read=m_needRefresh, write=m_needRefresh, nodefault};
};


class PASCALIMPLEMENTATION TIEHorizontalFlow : public TIEAnimation
{
	typedef TIEAnimation inherited;
	
private:
	int m_horizontalDistance;
	double m_imagesHorizontalPercentage;
	double m_imagesVerticalPercentage;
	double m_rotateAngle;
	double m_imagesZoom;
	double m_currentImageZoom;
	void __fastcall SetHorizontalDistance(int value);
	void __fastcall SetImagesHorizontalPercentage(double value);
	void __fastcall SetImagesVerticalPercentage(double value);
	void __fastcall SetRotateAngle(double value);
	void __fastcall SetImagesZoom(double value);
	void __fastcall SetCurrentImageZoom(double value);
	
protected:
	virtual void __fastcall SetInitialValues(int first, int last);
	virtual void __fastcall SetStartValues();
	virtual void __fastcall SetEndValues();
	
public:
	__fastcall TIEHorizontalFlow();
	__fastcall virtual ~TIEHorizontalFlow();
	virtual void __fastcall Display(Iexbitmaps::TIEBitmap* dest);
	__property int HorizontalDistance = {read=m_horizontalDistance, write=SetHorizontalDistance, nodefault};
	__property double ImagesHorizontalPercentage = {read=m_imagesHorizontalPercentage, write=SetImagesHorizontalPercentage};
	__property double ImagesVerticalPercentage = {read=m_imagesVerticalPercentage, write=SetImagesVerticalPercentage};
	__property double RotateAngle = {read=m_rotateAngle, write=SetRotateAngle};
	__property double ImagesZoom = {read=m_imagesZoom, write=SetImagesZoom};
	__property double CurrentImageZoom = {read=m_currentImageZoom, write=SetCurrentImageZoom};
};


class PASCALIMPLEMENTATION TIECircularFlow : public TIEAnimation
{
	typedef TIEAnimation inherited;
	
private:
	double m_imagesSizePercentage;
	double m_imagesZoom;
	double m_currentImageZoom;
	int m_visibleImages;
	double m_ellipseAngle;
	
protected:
	virtual void __fastcall SetInitialValues(int first, int last);
	virtual void __fastcall SetStartValues();
	virtual void __fastcall SetEndValues();
	void __fastcall SetImagesSizePercentage(double value);
	void __fastcall SetImagesZoom(double value);
	void __fastcall SetCurrentImageZoom(double value);
	void __fastcall SetVisibleImages(int value);
	void __fastcall SetEllipseAngle(double value);
	
public:
	__fastcall TIECircularFlow();
	__fastcall virtual ~TIECircularFlow();
	virtual void __fastcall Display(Iexbitmaps::TIEBitmap* dest);
	__property double ImagesSizePercentage = {read=m_imagesSizePercentage, write=SetImagesSizePercentage};
	__property double ImagesZoom = {read=m_imagesZoom, write=SetImagesZoom};
	__property double CurrentImageZoom = {read=m_currentImageZoom, write=SetCurrentImageZoom};
	__property int VisibleImages = {read=m_visibleImages, write=SetVisibleImages, nodefault};
	__property double EllipseAngle = {read=m_ellipseAngle, write=SetEllipseAngle};
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Ieanimation */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_IEANIMATION)
using namespace Ieanimation;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// IeanimationHPP
