// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'PictureContainer.pas' rev: 35.00 (Windows)

#ifndef PicturecontainerHPP
#define PicturecontainerHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Winapi.ActiveX.hpp>
#include <AdvTypes.hpp>
#include <System.Types.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

#pragma link "wininet.lib"
#pragma link "urlmon.lib"


namespace Picturecontainer
{
//-- forward type declarations -----------------------------------------------
struct TInternetContent;
class DELPHICLASS TDownLoadThread;
class DELPHICLASS THTMLPicture;
class DELPHICLASS THTMLPictureCache;
class DELPHICLASS THTMLImage;
class DELPHICLASS TPictureItem;
class DELPHICLASS TPictureCollection;
class DELPHICLASS TPictureContainer;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TPicturePosition : unsigned char { bpTopLeft, bpTopRight, bpBottomLeft, bpBottomRight, bpCenter, bpTiled, bpStretched };

typedef TInternetContent *PInternetContent;

struct DECLSPEC_DRECORD TInternetContent
{
public:
	bool Complete;
	THTMLPicture* HTMLPicture;
};


typedef void __fastcall (__closure *TDownloadErrorEvent)(System::TObject* Sender, System::UnicodeString err);

typedef void __fastcall (__closure *TDownloadCompleteEvent)(System::TObject* Sender);

typedef void __fastcall (__closure *TDownloadCancelEvent)(System::TObject* Sender, bool &Cancel);

typedef void __fastcall (__closure *TDownloadProgressEvent)(System::TObject* Sender, unsigned dwSize, unsigned dwTotSize);

class PASCALIMPLEMENTATION TDownLoadThread : public System::Classes::TThread
{
	typedef System::Classes::TThread inherited;
	
private:
	THTMLPicture* HTMLPicture;
	
protected:
	virtual void __fastcall Execute();
	
public:
	__fastcall TDownLoadThread(THTMLPicture* aHTMLPicture);
public:
	/* TThread.Destroy */ inline __fastcall virtual ~TDownLoadThread() { }
	
};


class PASCALIMPLEMENTATION THTMLPicture : public Advtypes::TAdvSVGBitmap
{
	typedef Advtypes::TAdvSVGBitmap inherited;
	
private:
	System::Classes::TMemoryStream* FDatastream;
	bool FIsEmpty;
	bool FStretched;
	_di_IPicture gpPicture;
	int FLogPixX;
	int FLogPixY;
	System::UnicodeString FURL;
	System::UnicodeString FID;
	int FHeight;
	int FWidth;
	bool FIsDB;
	bool FAsynch;
	bool FThreadBusy;
	int FFrame;
	int FFrameCount;
	System::Classes::TNotifyEvent FOnFrameChange;
	System::Word FFrameXPos;
	System::Word FFrameYPos;
	System::Word FFrameXSize;
	System::Word FFrameYSize;
	bool FFrameTransp;
	System::Word FFrameDisposal;
	System::Word FAnimMaxX;
	System::Word FAnimMaxY;
	int FNextCount;
	int FTimerCount;
	TDownloadProgressEvent FOnDownLoadProgress;
	TDownloadCancelEvent FOnDownLoadCancel;
	TDownloadCompleteEvent FOnDownLoadComplete;
	TDownloadErrorEvent FOnDownLoadError;
	void __fastcall LoadPicture();
	int __fastcall GetFrameCount();
	bool __fastcall IsGIFFile();
	int __fastcall GetFrameTime(int i);
	
protected:
	virtual bool __fastcall GetEmpty();
	virtual int __fastcall GetHeight();
	virtual int __fastcall GetWidth();
	virtual void __fastcall SetHeight(int Value);
	virtual void __fastcall SetWidth(int Value);
	virtual void __fastcall ReadData(System::Classes::TStream* Stream);
	virtual void __fastcall WriteData(System::Classes::TStream* Stream);
	void __fastcall DownLoadError(System::UnicodeString err);
	void __fastcall DownLoadComplete();
	void __fastcall DownLoadCancel(bool &cancel);
	void __fastcall DownLoadProgress(unsigned dwSize, unsigned dwTotSize);
	bool __fastcall GetStretched();
	void __fastcall SetStretched(const bool Value);
	
public:
	__fastcall virtual THTMLPicture()/* overload */;
	__fastcall virtual ~THTMLPicture();
	virtual void __fastcall DrawSVG(Vcl::Graphics::TCanvas* ACanvas, float X, float Y, float W, float H);
	virtual void __fastcall Draw(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &Rect);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	virtual void __fastcall LoadFromFile(const System::UnicodeString FileName);
	virtual void __fastcall LoadFromStream(System::Classes::TStream* Stream);
	virtual void __fastcall SaveToStream(System::Classes::TStream* Stream);
	void __fastcall LoadFromResourceName(NativeUInt Instance, const System::UnicodeString ResName);
	void __fastcall LoadFromResourceID(NativeUInt Instance, int ResID);
	void __fastcall LoadFromURL(System::UnicodeString url);
	virtual void __fastcall LoadFromClipboardFormat(System::Word AFormat, NativeUInt AData, HPALETTE APalette);
	virtual void __fastcall SaveToClipboardFormat(System::Word &AFormat, NativeUInt &AData, HPALETTE &APalette);
	__property bool Busy = {read=FThreadBusy, nodefault};
	__property bool Asynch = {read=FAsynch, write=FAsynch, nodefault};
	__property System::UnicodeString ID = {read=FID, write=FID};
	__property bool IsDB = {read=FIsDB, write=FIsDB, nodefault};
	__property bool IsGIF = {read=IsGIFFile, nodefault};
	__property int FrameCount = {read=GetFrameCount, nodefault};
	__property int FrameTime[int i] = {read=GetFrameTime};
	int __fastcall GetMaxHeight();
	int __fastcall GetMaxWidth();
	void __fastcall SetFrame(const int Value);
	void __fastcall FrameNext();
	void __fastcall FramePrev();
	bool __fastcall Step();
	__property int MaxWidth = {read=GetMaxWidth, nodefault};
	__property int MaxHeight = {read=GetMaxHeight, nodefault};
	__property System::Word FrameXPos = {read=FFrameXPos, nodefault};
	__property System::Word FrameYPos = {read=FFrameYPos, nodefault};
	
__published:
	__property bool Stretch = {read=GetStretched, write=SetStretched, nodefault};
	__property int Frame = {read=FFrame, write=SetFrame, nodefault};
	__property System::Classes::TNotifyEvent OnFrameChange = {read=FOnFrameChange, write=FOnFrameChange};
	__property TDownloadErrorEvent OnDownLoadError = {read=FOnDownLoadError, write=FOnDownLoadError};
	__property TDownloadCompleteEvent OnDownLoadComplete = {read=FOnDownLoadComplete, write=FOnDownLoadComplete};
	__property TDownloadCancelEvent OnDownLoadCancel = {read=FOnDownLoadCancel, write=FOnDownLoadCancel};
	__property TDownloadProgressEvent OnDownLoadProgress = {read=FOnDownLoadProgress, write=FOnDownLoadProgress};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION THTMLPictureCache : public System::Classes::TList
{
	typedef System::Classes::TList inherited;
	
public:
	THTMLPicture* operator[](int index) { return this->Items[index]; }
	
private:
	void __fastcall SetPicture(int Index, THTMLPicture* Value);
	THTMLPicture* __fastcall GetPicture(int Index);
	
public:
	__fastcall virtual ~THTMLPictureCache();
	__property THTMLPicture* Items[int index] = {read=GetPicture, write=SetPicture/*, default*/};
	THTMLPicture* __fastcall AddPicture();
	Vcl::Graphics::TGraphic* __fastcall FindPicture(System::UnicodeString ID);
	void __fastcall ClearPictures();
	bool __fastcall Animate();
public:
	/* TObject.Create */ inline __fastcall THTMLPictureCache() : System::Classes::TList() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION THTMLImage : public Vcl::Controls::TGraphicControl
{
	typedef Vcl::Controls::TGraphicControl inherited;
	
private:
	THTMLPicture* FHTMLPicture;
	TPicturePosition FPicturePosition;
	TDownloadCancelEvent FOnDownLoadCancel;
	TDownloadCompleteEvent FOnDownLoadComplete;
	TDownloadErrorEvent FOnDownLoadError;
	TDownloadProgressEvent FOnDownLoadProgress;
	void __fastcall SetHTMLPicture(THTMLPicture* const Value);
	void __fastcall PictureChanged(System::TObject* sender);
	void __fastcall SetPicturePosition(const TPicturePosition Value);
	void __fastcall DownLoadError(System::TObject* Sender, System::UnicodeString err);
	void __fastcall DownLoadComplete(System::TObject* Sender);
	void __fastcall DownLoadCancel(System::TObject* Sender, bool &Cancel);
	void __fastcall DownLoadProgress(System::TObject* Sender, unsigned dwSize, unsigned dwTotSize);
	
protected:
	virtual void __fastcall Paint();
	virtual void __fastcall Loaded();
	
public:
	__fastcall virtual THTMLImage(System::Classes::TComponent* AOwner);
	__fastcall virtual ~THTMLImage();
	
__published:
	__property THTMLPicture* HTMLPicture = {read=FHTMLPicture, write=SetHTMLPicture};
	__property TPicturePosition PicturePosition = {read=FPicturePosition, write=SetPicturePosition, nodefault};
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property Constraints;
	__property DragKind = {default=0};
	__property DragCursor = {default=-12};
	__property DragMode = {default=0};
	__property Hint = {default=0};
	__property ParentShowHint = {default=1};
	__property ShowHint;
	__property Visible = {default=1};
	__property OnClick;
	__property OnContextPopup;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDock;
	__property OnStartDock;
	__property OnEndDrag;
	__property OnMouseDown;
	__property OnMouseUp;
	__property OnMouseMove;
	__property OnStartDrag;
	__property TDownloadErrorEvent OnDownLoadError = {read=FOnDownLoadError, write=FOnDownLoadError};
	__property TDownloadCompleteEvent OnDownLoadComplete = {read=FOnDownLoadComplete, write=FOnDownLoadComplete};
	__property TDownloadCancelEvent OnDownLoadCancel = {read=FOnDownLoadCancel, write=FOnDownLoadCancel};
	__property TDownloadProgressEvent OnDownLoadProgress = {read=FOnDownLoadProgress, write=FOnDownLoadProgress};
};


typedef NativeInt TTagInt;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPictureItem : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	Vcl::Graphics::TGraphic* FPicture;
	NativeInt FTag;
	System::UnicodeString FName;
	void __fastcall SetPicture(Vcl::Graphics::TGraphic* const Value);
	
protected:
	virtual Vcl::Graphics::TGraphic* __fastcall CreatePicture();
	
public:
	__fastcall virtual TPictureItem(System::Classes::TCollection* Collection);
	__fastcall virtual ~TPictureItem();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	Vcl::Graphics::TPicture* __fastcall Bitmap();
	TPictureContainer* __fastcall Container();
	
__published:
	__property Vcl::Graphics::TGraphic* Picture = {read=FPicture, write=SetPicture};
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property NativeInt Tag = {read=FTag, write=FTag, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPictureCollection : public System::Classes::TOwnedCollection
{
	typedef System::Classes::TOwnedCollection inherited;
	
public:
	TPictureItem* operator[](int Index) { return this->Items[Index]; }
	
private:
	System::Classes::TComponent* FOwner;
	HIDESBASE TPictureItem* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TPictureItem* Value);
	
protected:
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	virtual System::Classes::TCollectionItemClass __fastcall GetItemClass();
	
public:
	__fastcall TPictureCollection(System::Classes::TComponent* AOwner);
	HIDESBASE TPictureItem* __fastcall Add();
	HIDESBASE TPictureItem* __fastcall Insert(int index);
	__property TPictureItem* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
	bool __fastcall Animate();
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TPictureCollection() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TPictureContainer : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	System::Classes::TList* FControls;
	Vcl::Graphics::TPicture* FPicture;
	TPictureCollection* FItems;
	System::Classes::TNotifyEvent FOnChange;
	void __fastcall SetItems(TPictureCollection* const Value);
	System::UnicodeString __fastcall GetVersion();
	void __fastcall SetVersion(const System::UnicodeString Value);
	
protected:
	virtual TPictureCollection* __fastcall CreateItems();
	virtual void __fastcall Changed();
	virtual int __fastcall GetVersionNr();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation AOperation);
	
public:
	__fastcall virtual TPictureContainer(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TPictureContainer();
	void __fastcall RegisterControl(Vcl::Controls::TControl* AControl);
	virtual Vcl::Graphics::TGraphic* __fastcall FindPicture(System::UnicodeString s);
	virtual Vcl::Graphics::TPicture* __fastcall FindBitmap(System::UnicodeString s);
	
__published:
	__property TPictureCollection* Items = {read=FItems, write=SetItems};
	__property System::UnicodeString Version = {read=GetVersion, write=SetVersion};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
};


//-- var, const, procedure ---------------------------------------------------
static const System::Int8 MAJ_VER = System::Int8(0x2);
static const System::Int8 MIN_VER = System::Int8(0x1);
static const System::Int8 REL_VER = System::Int8(0x1);
static const System::Int8 BLD_VER = System::Int8(0x0);
}	/* namespace Picturecontainer */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_PICTURECONTAINER)
using namespace Picturecontainer;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// PicturecontainerHPP
