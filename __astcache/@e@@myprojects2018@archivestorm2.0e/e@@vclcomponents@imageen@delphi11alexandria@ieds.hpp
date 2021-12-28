// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'ieds.pas' rev: 35.00 (Windows)

#ifndef IedsHPP
#define IedsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <Vcl.Graphics.hpp>
#include <iexBitmaps.hpp>
#include <System.Types.hpp>
#include <System.UITypes.hpp>
#include <hyiedefs.hpp>
#include <Vcl.Dialogs.hpp>
#include <Winapi.ActiveX.hpp>

//-- user supplied -----------------------------------------------------------

namespace Ieds
{
//-- forward type declarations -----------------------------------------------
struct IEREFERENCE_TIME;
struct IEAM_MEDIA_TYPE;
__interface DELPHIINTERFACE IIEStorage;
typedef System::DelphiInterface<IIEStorage> _di_IIEStorage;
__interface DELPHIINTERFACE IIEPersist;
typedef System::DelphiInterface<IIEPersist> _di_IIEPersist;
__interface DELPHIINTERFACE IIEPersistStream;
typedef System::DelphiInterface<IIEPersistStream> _di_IIEPersistStream;
__interface DELPHIINTERFACE IIEEnumMoniker;
typedef System::DelphiInterface<IIEEnumMoniker> _di_IIEEnumMoniker;
__interface DELPHIINTERFACE IIEBindCtx;
typedef System::DelphiInterface<IIEBindCtx> _di_IIEBindCtx;
__interface DELPHIINTERFACE IIEMoniker;
typedef System::DelphiInterface<IIEMoniker> _di_IIEMoniker;
__interface DELPHIINTERFACE IIECreateDevEnum;
typedef System::DelphiInterface<IIECreateDevEnum> _di_IIECreateDevEnum;
__interface DELPHIINTERFACE IIEErrorLog;
typedef System::DelphiInterface<IIEErrorLog> _di_IIEErrorLog;
struct TIECAGUID;
__interface DELPHIINTERFACE IIESpecifyPropertyPages;
typedef System::DelphiInterface<IIESpecifyPropertyPages> _di_IIESpecifyPropertyPages;
__interface DELPHIINTERFACE IIEAMVideoCompression;
typedef System::DelphiInterface<IIEAMVideoCompression> _di_IIEAMVideoCompression;
__interface DELPHIINTERFACE IIEReferenceClock;
typedef System::DelphiInterface<IIEReferenceClock> _di_IIEReferenceClock;
__interface DELPHIINTERFACE IIEPropertyBag;
typedef System::DelphiInterface<IIEPropertyBag> _di_IIEPropertyBag;
__interface DELPHIINTERFACE IIEMediaFilter;
typedef System::DelphiInterface<IIEMediaFilter> _di_IIEMediaFilter;
__interface DELPHIINTERFACE IIEEnumMediaTypes;
typedef System::DelphiInterface<IIEEnumMediaTypes> _di_IIEEnumMediaTypes;
__interface DELPHIINTERFACE IIEPin;
typedef System::DelphiInterface<IIEPin> _di_IIEPin;
__interface DELPHIINTERFACE IIEEnumPins;
typedef System::DelphiInterface<IIEEnumPins> _di_IIEEnumPins;
__interface DELPHIINTERFACE IIEBaseFilter;
typedef System::DelphiInterface<IIEBaseFilter> _di_IIEBaseFilter;
__interface DELPHIINTERFACE IIEFilterGraph;
typedef System::DelphiInterface<IIEFilterGraph> _di_IIEFilterGraph;
__interface DELPHIINTERFACE IIEAMAnalogVideoDecoder;
typedef System::DelphiInterface<IIEAMAnalogVideoDecoder> _di_IIEAMAnalogVideoDecoder;
__interface DELPHIINTERFACE IIEAMClockSlave;
typedef System::DelphiInterface<IIEAMClockSlave> _di_IIEAMClockSlave;
struct IEFILTER_INFO;
struct IEPIN_INFO;
__interface DELPHIINTERFACE IIEGraphBuilder;
typedef System::DelphiInterface<IIEGraphBuilder> _di_IIEGraphBuilder;
__interface DELPHIINTERFACE IIEFilterGraph2;
typedef System::DelphiInterface<IIEFilterGraph2> _di_IIEFilterGraph2;
__interface DELPHIINTERFACE IIEFileSinkFilter;
typedef System::DelphiInterface<IIEFileSinkFilter> _di_IIEFileSinkFilter;
__interface DELPHIINTERFACE IIEDMOWrapperFilter;
typedef System::DelphiInterface<IIEDMOWrapperFilter> _di_IIEDMOWrapperFilter;
__interface DELPHIINTERFACE IIEVideoWindow;
typedef System::DelphiInterface<IIEVideoWindow> _di_IIEVideoWindow;
__interface DELPHIINTERFACE IIECaptureGraphBuilder2;
typedef System::DelphiInterface<IIECaptureGraphBuilder2> _di_IIECaptureGraphBuilder2;
__interface DELPHIINTERFACE IIEMediaControl;
typedef System::DelphiInterface<IIEMediaControl> _di_IIEMediaControl;
__interface DELPHIINTERFACE IIEMediaSeeking;
typedef System::DelphiInterface<IIEMediaSeeking> _di_IIEMediaSeeking;
__interface DELPHIINTERFACE IIEMediaEvent;
typedef System::DelphiInterface<IIEMediaEvent> _di_IIEMediaEvent;
__interface DELPHIINTERFACE IIEMediaEventEx;
typedef System::DelphiInterface<IIEMediaEventEx> _di_IIEMediaEventEx;
struct IEVIDEOINFOHEADER;
__interface DELPHIINTERFACE IIEMediaSample;
typedef System::DelphiInterface<IIEMediaSample> _di_IIEMediaSample;
__interface DELPHIINTERFACE IIESampleGrabberCB;
typedef System::DelphiInterface<IIESampleGrabberCB> _di_IIESampleGrabberCB;
__interface DELPHIINTERFACE IIESampleGrabber;
typedef System::DelphiInterface<IIESampleGrabber> _di_IIESampleGrabber;
class DELPHICLASS TIESampleGrabberCB;
__interface DELPHIINTERFACE IIEAMStreamConfig;
typedef System::DelphiInterface<IIEAMStreamConfig> _di_IIEAMStreamConfig;
__interface DELPHIINTERFACE IIEAMCrossbar;
typedef System::DelphiInterface<IIEAMCrossbar> _di_IIEAMCrossbar;
__interface DELPHIINTERFACE IIEAMTuner;
typedef System::DelphiInterface<IIEAMTuner> _di_IIEAMTuner;
__interface DELPHIINTERFACE IIEAMTVTuner;
typedef System::DelphiInterface<IIEAMTVTuner> _di_IIEAMTVTuner;
__interface DELPHIINTERFACE IIEVideoFrameStep;
typedef System::DelphiInterface<IIEVideoFrameStep> _di_IIEVideoFrameStep;
__interface DELPHIINTERFACE IIEMediaDet;
typedef System::DelphiInterface<IIEMediaDet> _di_IIEMediaDet;
__interface DELPHIINTERFACE IIEMediaObject;
typedef System::DelphiInterface<IIEMediaObject> _di_IIEMediaObject;
__interface DELPHIINTERFACE IIEVMRWindowlessControl;
typedef System::DelphiInterface<IIEVMRWindowlessControl> _di_IIEVMRWindowlessControl;
__interface DELPHIINTERFACE IIEVMRFilterConfig;
typedef System::DelphiInterface<IIEVMRFilterConfig> _di_IIEVMRFilterConfig;
struct IEVMRFrequency;
struct IEVMRVideoDesc;
struct IEVMRDeinterlaceCaps;
__interface DELPHIINTERFACE IIEVMRDeinterlaceControl;
typedef System::DelphiInterface<IIEVMRDeinterlaceControl> _di_IIEVMRDeinterlaceControl;
struct IEDVD_HMSF_TIMECODE;
struct IEDVD_PLAYBACK_LOCATION2;
struct IEAM_DVD_RENDERSTATUS;
__interface DELPHIINTERFACE IIEDvdGraphBuilder;
typedef System::DelphiInterface<IIEDvdGraphBuilder> _di_IIEDvdGraphBuilder;
__interface DELPHIINTERFACE IIEDvdCmd;
typedef System::DelphiInterface<IIEDvdCmd> _di_IIEDvdCmd;
__interface DELPHIINTERFACE IIEDvdControl2;
typedef System::DelphiInterface<IIEDvdControl2> _di_IIEDvdControl2;
__interface DELPHIINTERFACE IIEDvdControl;
typedef System::DelphiInterface<IIEDvdControl> _di_IIEDvdControl;
__interface DELPHIINTERFACE IIEDvdInfo2;
typedef System::DelphiInterface<IIEDvdInfo2> _di_IIEDvdInfo2;
__interface DELPHIINTERFACE IIEVMRAspectRatioControl;
typedef System::DelphiInterface<IIEVMRAspectRatioControl> _di_IIEVMRAspectRatioControl;
__interface DELPHIINTERFACE IIEAMGraphStreams;
typedef System::DelphiInterface<IIEAMGraphStreams> _di_IIEAMGraphStreams;
class DELPHICLASS TIEVideoFormat;
class DELPHICLASS TIEDirectShow;
class DELPHICLASS TIEMediaReader;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TIETVStandard : unsigned char { ievsNONE, ievsNTSC_M, ievsNTSC_M_J, ievsNTSC_433, ievsPAL_B, ievsPAL_D, ievsPAL_H, ievsPAL_I, ievsPAL_M, ievsPAL_N, ievsPAL_60, ievsSECAM_B, ievsSECAM_D, ievsSECAM_G, ievsSECAM_H, ievsSECAM_K, ievsSECAM_K1, ievsSECAM_L, ievsSECAM_L1, ievsPAL_N_COMBO };

typedef System::Set<TIETVStandard, TIETVStandard::ievsNONE, TIETVStandard::ievsPAL_N_COMBO> TIETVStandards;

enum DECLSPEC_DENUM TIEDVDMenu : unsigned char { iedmTITLE, iedmROOT, iedmSUBPICTURE, iedmAUDIO, iedmANGLE, iedmCHAPTER };

#pragma pack(push,1)
struct DECLSPEC_DRECORD IEREFERENCE_TIME
{
public:
	unsigned lo32;
	unsigned hi32;
};
#pragma pack(pop)


typedef IEREFERENCE_TIME *PIEREFERENCE_TIME;

struct DECLSPEC_DRECORD IEAM_MEDIA_TYPE
{
public:
	GUID majortype;
	GUID subtype;
	System::LongBool bFixedSizeSamples;
	System::LongBool bTemporalCompression;
	unsigned lSampleSize;
	GUID formattype;
	System::_di_IInterface pUnk;
	unsigned cbFormat;
	System::Byte *pbFormat;
};


typedef IEAM_MEDIA_TYPE *PIEAM_MEDIA_TYPE;

__interface  INTERFACE_UUID("{0000000B-0000-0000-C000-000000000046}") IIEStorage  : public System::IInterface 
{
	virtual HRESULT __stdcall CreateStream(System::WideChar * pwcsName, int grfMode, int reserved1, int reserved2, /* out */ Hyiedefs::_di_IIEStream &stm) = 0 ;
	virtual HRESULT __stdcall OpenStream(System::WideChar * pwcsName, void * reserved1, unsigned grfMode, unsigned reserved2, /* out */ Hyiedefs::_di_IIEStream &ppstm) = 0 ;
	virtual HRESULT __stdcall CreateStorage() = 0 ;
	virtual HRESULT __stdcall OpenStorage() = 0 ;
	virtual HRESULT __stdcall CopyTo() = 0 ;
	virtual HRESULT __stdcall MoveElementTo() = 0 ;
	virtual HRESULT __stdcall Commit(int grfCommitFlags) = 0 ;
	virtual HRESULT __stdcall Revert() = 0 ;
	virtual HRESULT __stdcall EnumElements(unsigned reserved1, void * reserved2, unsigned reserved3, /* out */ void *ppenum) = 0 ;
	virtual HRESULT __stdcall DestroyElement() = 0 ;
	virtual HRESULT __stdcall RenameElement() = 0 ;
	virtual HRESULT __stdcall SetElementTimes() = 0 ;
	virtual HRESULT __stdcall SetClass() = 0 ;
	virtual HRESULT __stdcall SetStateBits() = 0 ;
	virtual HRESULT __stdcall Stat() = 0 ;
};

__interface  INTERFACE_UUID("{0000010C-0000-0000-C000-000000000046}") IIEPersist  : public System::IInterface 
{
	virtual HRESULT __stdcall GetClassID() = 0 ;
};

__interface  INTERFACE_UUID("{00000109-0000-0000-C000-000000000046}") IIEPersistStream  : public IIEPersist 
{
	virtual HRESULT __stdcall IsDirty() = 0 ;
	virtual HRESULT __stdcall Load(const Hyiedefs::_di_IIEStream stm) = 0 ;
	virtual HRESULT __stdcall Save(const Hyiedefs::_di_IIEStream stm, System::LongBool fClearDirty) = 0 ;
	virtual HRESULT __stdcall GetSizeMax() = 0 ;
};

typedef _di_IIEPersistStream IID_IIEPersistStream;

__interface  INTERFACE_UUID("{00000102-0000-0000-C000-000000000046}") IIEEnumMoniker  : public System::IInterface 
{
	virtual HRESULT __stdcall Next(int celt, /* out */ void *elt, void * pceltFetched) = 0 ;
	virtual HRESULT __stdcall Skip() = 0 ;
	virtual HRESULT __stdcall Reset() = 0 ;
	virtual HRESULT __stdcall Clone() = 0 ;
};

__interface  INTERFACE_UUID("{0000000E-0000-0000-C000-000000000046}") IIEBindCtx  : public System::IInterface 
{
	virtual HRESULT __stdcall RegisterObjectBound() = 0 ;
	virtual HRESULT __stdcall RevokeObjectBound() = 0 ;
	virtual HRESULT __stdcall ReleaseBoundObjects() = 0 ;
	virtual HRESULT __stdcall SetBindOptions() = 0 ;
	virtual HRESULT __stdcall GetBindOptions() = 0 ;
	virtual HRESULT __stdcall GetRunningObjectTable() = 0 ;
	virtual HRESULT __stdcall RegisterObjectParam() = 0 ;
	virtual HRESULT __stdcall GetObjectParam() = 0 ;
	virtual HRESULT __stdcall EnumObjectParam() = 0 ;
	virtual HRESULT __stdcall RevokeObjectParam() = 0 ;
};

__interface  INTERFACE_UUID("{0000000F-0000-0000-C000-000000000046}") IIEMoniker  : public IIEPersistStream 
{
	virtual HRESULT __stdcall BindToObject(const _di_IIEBindCtx bc, const _di_IIEMoniker mkToLeft, const GUID &iidResult, /* out */ void *vResult) = 0 ;
	virtual HRESULT __stdcall BindToStorage(const _di_IIEBindCtx bc, const _di_IIEMoniker mkToLeft, const GUID &iid, /* out */ void *vObj) = 0 ;
	virtual HRESULT __stdcall Reduce() = 0 ;
	virtual HRESULT __stdcall ComposeWith() = 0 ;
	virtual HRESULT __stdcall Enum() = 0 ;
	virtual HRESULT __stdcall IsEqual() = 0 ;
	virtual HRESULT __stdcall Hash() = 0 ;
	virtual HRESULT __stdcall IsRunning() = 0 ;
	virtual HRESULT __stdcall GetTimeOfLastChange() = 0 ;
	virtual HRESULT __stdcall Inverse() = 0 ;
	virtual HRESULT __stdcall CommonPrefixWith() = 0 ;
	virtual HRESULT __stdcall RelativePathTo() = 0 ;
	virtual HRESULT __stdcall GetDisplayName() = 0 ;
	virtual HRESULT __stdcall ParseDisplayName() = 0 ;
	virtual HRESULT __stdcall IsSystemMoniker() = 0 ;
};

__interface  INTERFACE_UUID("{29840822-5B84-11D0-BD3B-00A0C911CE86}") IIECreateDevEnum  : public System::IInterface 
{
	virtual HRESULT __stdcall CreateClassEnumerator(const GUID &clsidDeviceClass, _di_IIEEnumMoniker &ppEnumMoniker, unsigned dwFlags) = 0 ;
};

typedef _di_IIECreateDevEnum IID_IIECreateDevEnum;

__interface  INTERFACE_UUID("{3127CA40-446E-11CE-8135-00AA004BB851}") IIEErrorLog  : public System::IInterface 
{
	virtual HRESULT __stdcall AddError() = 0 ;
};

struct DECLSPEC_DRECORD TIECAGUID
{
public:
	int cElems;
	void *pElems;
};


__interface  INTERFACE_UUID("{B196B28B-BAB4-101A-B69C-00AA00341D07}") IIESpecifyPropertyPages  : public System::IInterface 
{
	virtual HRESULT __stdcall GetPages(/* out */ TIECAGUID &pages) = 0 ;
};

typedef _di_IIESpecifyPropertyPages IID_IIESpecifyPropertyPages;

__interface  INTERFACE_UUID("{C6E13343-30AC-11D0-A18C-00A0C9118956}") IIEAMVideoCompression  : public System::IInterface 
{
	virtual HRESULT __stdcall put_KeyFrameRate(int KeyFrameRate) = 0 ;
	virtual HRESULT __stdcall get_KeyFrameRate(int &pKeyFrameRate) = 0 ;
	virtual HRESULT __stdcall put_PFramesPerKeyFrame() = 0 ;
	virtual HRESULT __stdcall get_PFramesPerKeyFrame() = 0 ;
	virtual HRESULT __stdcall put_Quality(double Quality) = 0 ;
	virtual HRESULT __stdcall get_Quality(double &pQuality) = 0 ;
	virtual HRESULT __stdcall put_WindowSize() = 0 ;
	virtual HRESULT __stdcall get_WindowSize() = 0 ;
	virtual HRESULT __stdcall GetInfo() = 0 ;
	virtual HRESULT __stdcall OverrideKeyFrame() = 0 ;
	virtual HRESULT __stdcall OverrideFrameSize() = 0 ;
};

typedef _di_IIEAMVideoCompression IID_IIEAMVideoCompression;

__interface  INTERFACE_UUID("{56A86897-0AD4-11CE-B03A-0020AF0BA770}") IIEReferenceClock  : public System::IInterface 
{
	virtual HRESULT __stdcall GetTime() = 0 ;
	virtual HRESULT __stdcall AdviseTime() = 0 ;
	virtual HRESULT __stdcall AdvisePeriodic() = 0 ;
	virtual HRESULT __stdcall Unadvise() = 0 ;
};

typedef _di_IIEReferenceClock IID_IIEReferenceClock;

__interface  INTERFACE_UUID("{55272A00-42CB-11CE-8135-00AA004BB851}") IIEPropertyBag  : public System::IInterface 
{
	virtual HRESULT __stdcall Read(System::WideChar * pszPropName, System::OleVariant &pvar, const _di_IIEErrorLog pErrorLog) = 0 ;
	virtual HRESULT __stdcall Write() = 0 ;
};

typedef _di_IIEPropertyBag IID_IIEPropertyBag;

__interface  INTERFACE_UUID("{56A86899-0AD4-11CE-B03A-0020AF0BA770}") IIEMediaFilter  : public IIEPersist 
{
	virtual HRESULT __stdcall Stop() = 0 ;
	virtual HRESULT __stdcall Pause() = 0 ;
	virtual HRESULT __stdcall Run() = 0 ;
	virtual HRESULT __stdcall GetState() = 0 ;
	virtual HRESULT __stdcall SetSyncSource(_di_IIEReferenceClock pClock) = 0 ;
	virtual HRESULT __stdcall GetSyncSource() = 0 ;
};

typedef _di_IIEMediaFilter IID_IIEMediaFilter;

typedef PIEAM_MEDIA_TYPE *PPIEAM_MEDIA_TYPE;

__interface  INTERFACE_UUID("{89C31040-846B-11CE-97D3-00AA0055595A}") IIEEnumMediaTypes  : public System::IInterface 
{
	virtual HRESULT __stdcall Next(unsigned cMediaTypes, PPIEAM_MEDIA_TYPE ppMediaTypes, /* out */ unsigned &pcFetched) = 0 ;
	virtual HRESULT __stdcall Skip() = 0 ;
	virtual HRESULT __stdcall Reset() = 0 ;
	virtual HRESULT __stdcall Clone() = 0 ;
};

enum DECLSPEC_DENUM IEPIN_DIRECTION : unsigned char { IEPINDIR_INPUT, IEPINDIR_OUTPUT };

__interface  INTERFACE_UUID("{56A86891-0AD4-11CE-B03A-0020AF0BA770}") IIEPin  : public System::IInterface 
{
	virtual HRESULT __stdcall Connect(_di_IIEPin pReceivePin, PIEAM_MEDIA_TYPE pmt) = 0 ;
	virtual HRESULT __stdcall ReceiveConnection() = 0 ;
	virtual HRESULT __stdcall Disconnect() = 0 ;
	virtual HRESULT __stdcall ConnectedTo(_di_IIEPin &ppPin) = 0 ;
	virtual HRESULT __stdcall ConnectionMediaType(PIEAM_MEDIA_TYPE pmt) = 0 ;
	virtual HRESULT __stdcall QueryPinInfo(void * pInfo) = 0 ;
	virtual HRESULT __stdcall QueryDirection(/* out */ IEPIN_DIRECTION &PinDir) = 0 ;
	virtual HRESULT __stdcall QueryId() = 0 ;
	virtual HRESULT __stdcall QueryAccept(PIEAM_MEDIA_TYPE pmt) = 0 ;
	virtual HRESULT __stdcall EnumMediaTypes(/* out */ _di_IIEEnumMediaTypes &enum_) = 0 ;
	virtual HRESULT __stdcall QueryInternalConnections() = 0 ;
	virtual HRESULT __stdcall EndOfStream() = 0 ;
	virtual HRESULT __stdcall BeginFlush() = 0 ;
	virtual HRESULT __stdcall EndFlush() = 0 ;
	virtual HRESULT __stdcall NewSegment() = 0 ;
};

__interface  INTERFACE_UUID("{56A86892-0AD4-11CE-B03A-0020AF0BA770}") IIEEnumPins  : public System::IInterface 
{
	virtual HRESULT __stdcall Next(int cPins, _di_IIEPin &ppPins, int &pcFetched) = 0 ;
	virtual HRESULT __stdcall Skip() = 0 ;
	virtual HRESULT __stdcall Reset() = 0 ;
	virtual HRESULT __stdcall Clone() = 0 ;
};

__interface  INTERFACE_UUID("{56A86895-0AD4-11CE-B03A-0020AF0BA770}") IIEBaseFilter  : public IIEMediaFilter 
{
	virtual HRESULT __stdcall EnumPins(_di_IIEEnumPins &ppEnum) = 0 ;
	virtual HRESULT __stdcall FindPin(System::WideChar * Id, /* out */ _di_IIEPin &Pin) = 0 ;
	virtual HRESULT __stdcall QueryFilterInfo(void * pInfo) = 0 ;
	virtual HRESULT __stdcall JoinFilterGraph() = 0 ;
	virtual HRESULT __stdcall QueryVendorInfo() = 0 ;
};

typedef _di_IIEBaseFilter IID_IEBaseFilter;

__interface  INTERFACE_UUID("{56A8689F-0AD4-11CE-B03A-0020AF0BA770}") IIEFilterGraph  : public System::IInterface 
{
	virtual HRESULT __stdcall AddFilter(_di_IIEBaseFilter pFilter, System::WideChar * pName) = 0 ;
	virtual HRESULT __stdcall RemoveFilter(_di_IIEBaseFilter pFilter) = 0 ;
	virtual HRESULT __stdcall EnumFilters() = 0 ;
	virtual HRESULT __stdcall FindFilterByName(System::WideChar * pName, _di_IIEBaseFilter &ppFilter) = 0 ;
	virtual HRESULT __stdcall ConnectDirect(_di_IIEPin ppinOut, _di_IIEPin ppinIn, PIEAM_MEDIA_TYPE pmt) = 0 ;
	virtual HRESULT __stdcall Reconnect(_di_IIEPin ppin) = 0 ;
	virtual HRESULT __stdcall Disconnect(_di_IIEPin ppin) = 0 ;
	virtual HRESULT __stdcall SetDefaultSyncSource() = 0 ;
};

typedef _di_IIEFilterGraph IID_IIEFilterGraph;

__interface  INTERFACE_UUID("{C6E13350-30AC-11D0-A18C-00A0C9118956}") IIEAMAnalogVideoDecoder  : public System::IInterface 
{
	virtual HRESULT __stdcall get_AvailableTVFormats(System::PLongInt lAnalogVideoStandard) = 0 ;
	virtual HRESULT __stdcall put_TVFormat(int lAnalogVideoStandard) = 0 ;
	virtual HRESULT __stdcall get_TVFormat(System::PLongInt plAnalogVideoStandard) = 0 ;
	virtual HRESULT __stdcall get_HorizontalLocked(System::PLongInt plLocked) = 0 ;
	virtual HRESULT __stdcall put_VCRHorizontalLocking(int lVCRHorizontalLocking) = 0 ;
	virtual HRESULT __stdcall get_VCRHorizontalLocking(System::PLongInt plVCRHorizontalLocking) = 0 ;
	virtual HRESULT __stdcall get_NumberOfLines(System::PLongInt plNumberOfLines) = 0 ;
	virtual HRESULT __stdcall put_OutputEnable(int lOutputEnable) = 0 ;
	virtual HRESULT __stdcall get_OutputEnable(System::PLongInt plOutputEnable) = 0 ;
};

typedef _di_IIEAMAnalogVideoDecoder IID_IIEAMAnalogVideoDecoder;

__interface  INTERFACE_UUID("{9FD52741-176D-4B36-8F51-CA8F933223BE}") IIEAMClockSlave  : public System::IInterface 
{
	virtual HRESULT __stdcall SetErrorTolerance(unsigned dwTolerance) = 0 ;
	virtual HRESULT __stdcall GetErrorTolerance(unsigned* pdwTolerance) = 0 ;
};

typedef _di_IIEAMClockSlave IID_IIEAMClockSlave;

struct DECLSPEC_DRECORD IEFILTER_INFO
{
public:
	System::StaticArray<System::WideChar, 128> achName;
	_di_IIEFilterGraph pGraph;
};


struct DECLSPEC_DRECORD IEPIN_INFO
{
public:
	_di_IIEBaseFilter pFilter;
	int dir;
	System::StaticArray<System::WideChar, 128> achName;
};


__interface  INTERFACE_UUID("{56A868A9-0AD4-11CE-B03A-0020AF0BA770}") IIEGraphBuilder  : public IIEFilterGraph 
{
	virtual HRESULT __stdcall Connect(_di_IIEPin ppinOut, _di_IIEPin ppinIn) = 0 ;
	virtual HRESULT __stdcall Render(_di_IIEPin ppinOut) = 0 ;
	virtual HRESULT __stdcall RenderFile() = 0 ;
	virtual HRESULT __stdcall AddSourceFilter(System::WideChar * lpwstrFileName, System::WideChar * lpwstrFilterName, _di_IIEBaseFilter &ppFilter) = 0 ;
	virtual HRESULT __stdcall SetLogFile() = 0 ;
	virtual HRESULT __stdcall Abort() = 0 ;
	virtual HRESULT __stdcall ShouldOperationContinue() = 0 ;
};

typedef _di_IIEGraphBuilder IID_IIEGraphBuilder;

__interface  INTERFACE_UUID("{36B73882-C2C8-11CF-8B46-00805F6CEF60}") IIEFilterGraph2  : public IIEGraphBuilder 
{
	virtual HRESULT __stdcall AddSourceFilterForMoniker() = 0 ;
	virtual HRESULT __stdcall ReconnectEx(_di_IIEPin ppin, PIEAM_MEDIA_TYPE pmt) = 0 ;
	virtual HRESULT __stdcall RenderEx(_di_IIEPin pPinOut, unsigned dwFlags, unsigned* pvContext) = 0 ;
};

typedef _di_IIEFilterGraph2 IID_IIEFilterGraph2;

__interface  INTERFACE_UUID("{A2104830-7C70-11CF-8BCE-00AA00A3F1A6}") IIEFileSinkFilter  : public System::IInterface 
{
	virtual HRESULT __stdcall SetFileName() = 0 ;
	virtual HRESULT __stdcall GetCurFile() = 0 ;
};

__interface  INTERFACE_UUID("{52D6F586-9F0F-4824-8FC8-E32CA04930C2}") IIEDMOWrapperFilter  : public System::IInterface 
{
	virtual HRESULT __stdcall Init(const GUID &clsidDMO, const GUID &catDMO) = 0 ;
};

typedef _di_IIEDMOWrapperFilter IID_IIEDMOWrapperFilter;

__interface  INTERFACE_UUID("{56A868B4-0AD4-11CE-B03A-0020AF0BA770}") IIEVideoWindow  : public IDispatch 
{
	virtual HRESULT __stdcall put_Caption() = 0 ;
	virtual HRESULT __stdcall get_Caption() = 0 ;
	virtual HRESULT __stdcall put_WindowStyle() = 0 ;
	virtual HRESULT __stdcall get_WindowStyle() = 0 ;
	virtual HRESULT __stdcall put_WindowStyleEx() = 0 ;
	virtual HRESULT __stdcall get_WindowStyleEx() = 0 ;
	virtual HRESULT __stdcall put_AutoShow(int AutoShow) = 0 ;
	virtual HRESULT __stdcall get_AutoShow() = 0 ;
	virtual HRESULT __stdcall put_WindowState() = 0 ;
	virtual HRESULT __stdcall get_WindowState() = 0 ;
	virtual HRESULT __stdcall put_BackgroundPalette() = 0 ;
	virtual HRESULT __stdcall get_BackgroundPalette() = 0 ;
	virtual HRESULT __stdcall put_Visible() = 0 ;
	virtual HRESULT __stdcall get_Visible() = 0 ;
	virtual HRESULT __stdcall put_Left() = 0 ;
	virtual HRESULT __stdcall get_Left() = 0 ;
	virtual HRESULT __stdcall put_Width() = 0 ;
	virtual HRESULT __stdcall get_Width() = 0 ;
	virtual HRESULT __stdcall put_Top() = 0 ;
	virtual HRESULT __stdcall get_Top() = 0 ;
	virtual HRESULT __stdcall put_Height() = 0 ;
	virtual HRESULT __stdcall get_Height() = 0 ;
	virtual HRESULT __stdcall put_Owner() = 0 ;
	virtual HRESULT __stdcall get_Owner() = 0 ;
	virtual HRESULT __stdcall put_MessageDrain() = 0 ;
	virtual HRESULT __stdcall get_MessageDrain() = 0 ;
	virtual HRESULT __stdcall get_BorderColor() = 0 ;
	virtual HRESULT __stdcall put_BorderColor() = 0 ;
	virtual HRESULT __stdcall get_FullScreenMode() = 0 ;
	virtual HRESULT __stdcall put_FullScreenMode() = 0 ;
	virtual HRESULT __stdcall SetWindowForeground() = 0 ;
	virtual HRESULT __stdcall NotifyOwnerMessage() = 0 ;
	virtual HRESULT __stdcall SetWindowPosition() = 0 ;
	virtual HRESULT __stdcall GetWindowPosition() = 0 ;
	virtual HRESULT __stdcall GetMinIdealImageSize() = 0 ;
	virtual HRESULT __stdcall GetMaxIdealImageSize() = 0 ;
	virtual HRESULT __stdcall GetRestorePosition() = 0 ;
	virtual HRESULT __stdcall HideCursor() = 0 ;
	virtual HRESULT __stdcall IsCursorHidden() = 0 ;
};

typedef _di_IIEVideoWindow IID_IIEVideoWindow;

__interface  INTERFACE_UUID("{93E5A4E0-2D50-11D2-ABFA-00A0C9C6E38D}") IIECaptureGraphBuilder2  : public System::IInterface 
{
	virtual HRESULT __stdcall SetFiltergraph(_di_IIEGraphBuilder pfg) = 0 ;
	virtual HRESULT __stdcall GetFiltergraph() = 0 ;
	virtual HRESULT __stdcall SetOutputFileName(const GUID &pType, System::WideChar * lpwstrFile, _di_IIEBaseFilter &ppf, _di_IIEFileSinkFilter &pSink) = 0 ;
	virtual HRESULT __stdcall FindInterface(System::PGUID pCategory, System::PGUID pType, _di_IIEBaseFilter pf, const GUID &riid, System::_di_IInterface &ppint) = 0 ;
	virtual HRESULT __stdcall RenderStream(System::PGUID pCategory, System::PGUID pType, System::_di_IInterface pSource, _di_IIEBaseFilter pIntermediate, _di_IIEBaseFilter pSink) = 0 ;
	virtual HRESULT __stdcall ControlStream(System::PGUID pCategory, System::PGUID pType, _di_IIEBaseFilter pFilter, PIEREFERENCE_TIME pstart, PIEREFERENCE_TIME pstop, System::Word wStartCookie, System::Word wStopCookie) = 0 ;
	virtual HRESULT __stdcall AllocCapFile() = 0 ;
	virtual HRESULT __stdcall CopyCaptureFile() = 0 ;
	virtual HRESULT __stdcall FindPin(System::_di_IInterface pSource, int pindir, System::PGUID pCategory, System::PGUID pType, System::LongBool fUnconnected, int num, _di_IIEPin &ppPin) = 0 ;
};

typedef _di_IIECaptureGraphBuilder2 IID_IIECaptureGraphBuilder2;

enum DECLSPEC_DENUM TIEDirectShowState : unsigned char { gsStopped, gsPaused, gsRunning };

__interface  INTERFACE_UUID("{56A868B1-0AD4-11CE-B03A-0020AF0BA770}") IIEMediaControl  : public IDispatch 
{
	virtual HRESULT __stdcall Run() = 0 ;
	virtual HRESULT __stdcall Pause() = 0 ;
	virtual HRESULT __stdcall Stop() = 0 ;
	virtual HRESULT __stdcall GetState(unsigned msTimeout, int &pfs) = 0 ;
	virtual HRESULT __stdcall RenderFile() = 0 ;
	virtual HRESULT __stdcall AddSourceFilter() = 0 ;
	virtual HRESULT __stdcall get_FilterCollection() = 0 ;
	virtual HRESULT __stdcall get_RegFilterCollection() = 0 ;
	virtual HRESULT __stdcall StopWhenReady() = 0 ;
};

typedef _di_IIEMediaControl IID_IIEMediaControl;

__interface  INTERFACE_UUID("{36B73880-C2C8-11CF-8B46-00805F6CEF60}") IIEMediaSeeking  : public System::IInterface 
{
	virtual HRESULT __stdcall GetCapabilities() = 0 ;
	virtual HRESULT __stdcall CheckCapabilities() = 0 ;
	virtual HRESULT __stdcall IsFormatSupported() = 0 ;
	virtual HRESULT __stdcall QueryPreferredFormat() = 0 ;
	virtual HRESULT __stdcall GetTimeFormat(System::PGUID pFormat) = 0 ;
	virtual HRESULT __stdcall IsUsingTimeFormat() = 0 ;
	virtual HRESULT __stdcall SetTimeFormat(System::PGUID pFormat) = 0 ;
	virtual HRESULT __stdcall GetDuration(PIEREFERENCE_TIME pDuration) = 0 ;
	virtual HRESULT __stdcall GetStopPosition(__int64 &pstop) = 0 ;
	virtual HRESULT __stdcall GetCurrentPosition(PIEREFERENCE_TIME pCurrent) = 0 ;
	virtual HRESULT __stdcall ConvertTimeFormat(PIEREFERENCE_TIME pTarget, System::PGUID pTargetFormat, PIEREFERENCE_TIME Source, System::PGUID pSourceFormat) = 0 ;
	virtual HRESULT __stdcall SetPositions(PIEREFERENCE_TIME pCurrent, unsigned dwCurrentFlags, PIEREFERENCE_TIME pStop, unsigned dwStopFlags) = 0 ;
	virtual HRESULT __stdcall GetPositions(PIEREFERENCE_TIME pCurrent, PIEREFERENCE_TIME pStop) = 0 ;
	virtual HRESULT __stdcall GetAvailable(__int64 &pEarliest, __int64 &pLatest) = 0 ;
	virtual HRESULT __stdcall SetRate(double dRate) = 0 ;
	virtual HRESULT __stdcall GetRate(System::PDouble dRate) = 0 ;
	virtual HRESULT __stdcall GetPreroll() = 0 ;
};

typedef _di_IIEMediaSeeking IID_IIEMediaSeeking;

__interface  INTERFACE_UUID("{56A868B6-0AD4-11CE-B03A-0020AF0BA770}") IIEMediaEvent  : public IDispatch 
{
	virtual HRESULT __stdcall GetEventHandle() = 0 ;
	virtual HRESULT __stdcall GetEvent(int &lEventCode, int &lParam1, int &lParam2, int msTimeout) = 0 ;
	virtual HRESULT __stdcall WaitForCompletion(int msTimeout, int &pEvCode) = 0 ;
	virtual HRESULT __stdcall CancelDefaultHandling() = 0 ;
	virtual HRESULT __stdcall RestoreDefaultHandling() = 0 ;
	virtual HRESULT __stdcall FreeEventParams(int lEventCode, int lParam1, int lParam2) = 0 ;
};

typedef _di_IIEMediaEvent IID_IIEMediaEvent;

__interface  INTERFACE_UUID("{56A868C0-0AD4-11CE-B03A-0020AF0BA770}") IIEMediaEventEx  : public IIEMediaEvent 
{
	virtual HRESULT __stdcall SetNotifyWindow(NativeUInt hwnd, int lMsg, void * lInstanceData) = 0 ;
	virtual HRESULT __stdcall SetNotifyFlags() = 0 ;
	virtual HRESULT __stdcall GetNotifyFlags() = 0 ;
};

typedef _di_IIEMediaEventEx IID_IIEMediaEventEx;

struct DECLSPEC_DRECORD IEVIDEOINFOHEADER
{
public:
	System::Types::TRect rcSource;
	System::Types::TRect rcTarget;
	unsigned dwBitRate;
	unsigned dwBitErrorRate;
	IEREFERENCE_TIME AvgTimePerFrame;
	tagBITMAPINFOHEADER bmiHeader;
};


typedef IEVIDEOINFOHEADER *PIEVIDEOINFOHEADER;

__interface  INTERFACE_UUID("{56A8689A-0AD4-11CE-B03A-0020AF0BA770}") IIEMediaSample  : public System::IInterface 
{
	virtual HRESULT __stdcall GetPointer() = 0 ;
	virtual int __stdcall GetSize() = 0 ;
	virtual HRESULT __stdcall GetTime() = 0 ;
	virtual HRESULT __stdcall SetTime() = 0 ;
	virtual HRESULT __stdcall IsSyncPoint() = 0 ;
	virtual HRESULT __stdcall SetSyncPoint() = 0 ;
	virtual HRESULT __stdcall IsPreroll() = 0 ;
	virtual HRESULT __stdcall SetPreroll() = 0 ;
	virtual int __stdcall GetActualDataLength() = 0 ;
	virtual HRESULT __stdcall SetActualDataLength() = 0 ;
	virtual HRESULT __stdcall GetMediaType() = 0 ;
	virtual HRESULT __stdcall SetMediaType() = 0 ;
	virtual HRESULT __stdcall IsDiscontinuity() = 0 ;
	virtual HRESULT __stdcall SetDiscontinuity() = 0 ;
	virtual HRESULT __stdcall GetMediaTime() = 0 ;
	virtual HRESULT __stdcall SetMediaTime() = 0 ;
};

__interface  INTERFACE_UUID("{0579154A-2B53-4994-B0D0-E773148EFF85}") IIESampleGrabberCB  : public System::IInterface 
{
	virtual HRESULT __stdcall SampleCB(double SampleTime, _di_IIEMediaSample pSample) = 0 ;
	virtual HRESULT __stdcall BufferCB(double SampleTime, System::PByte pBuffer, int BufferLen) = 0 ;
};

__interface  INTERFACE_UUID("{6B652FFF-11FE-4FCE-92AD-0266B5D7C78F}") IIESampleGrabber  : public System::IInterface 
{
	virtual HRESULT __stdcall SetOneShot() = 0 ;
	virtual HRESULT __stdcall SetMediaType(PIEAM_MEDIA_TYPE pType) = 0 ;
	virtual HRESULT __stdcall GetConnectedMediaType(PIEAM_MEDIA_TYPE pType) = 0 ;
	virtual HRESULT __stdcall SetBufferSamples(System::LongBool BufferThem) = 0 ;
	virtual HRESULT __stdcall GetCurrentBuffer(System::PInteger pBufferSize, void * pBuffer) = 0 ;
	virtual HRESULT __stdcall GetCurrentSample() = 0 ;
	virtual HRESULT __stdcall SetCallback(_di_IIESampleGrabberCB pCallback, int WhichMethodToCallback) = 0 ;
};

typedef _di_IIESampleGrabber IID_IIESampleGrabber;

enum DECLSPEC_DENUM TIETimeFormat : unsigned char { tfNone, tfFrame, tfSample, tfField, tfByte, tfTime };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIESampleGrabberCB : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	System::TObject* fOwner;
	
public:
	__fastcall TIESampleGrabberCB(System::TObject* Owner);
	__fastcall virtual ~TIESampleGrabberCB();
	HRESULT __stdcall SampleCB(double SampleTime, _di_IIEMediaSample pSample);
	HRESULT __stdcall BufferCB(double SampleTime, System::PByte pBuffer, int BufferLen);
private:
	void *__IIESampleGrabberCB;	// IIESampleGrabberCB 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {0579154A-2B53-4994-B0D0-E773148EFF85}
	operator _di_IIESampleGrabberCB()
	{
		_di_IIESampleGrabberCB intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IIESampleGrabberCB*(void) { return (IIESampleGrabberCB*)&__IIESampleGrabberCB; }
	#endif
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{C6E13340-30AC-11D0-A18C-00A0C9118956}") IIEAMStreamConfig  : public System::IInterface 
{
	virtual HRESULT __stdcall SetFormat(PIEAM_MEDIA_TYPE pmt) = 0 ;
	virtual HRESULT __stdcall GetFormat(PIEAM_MEDIA_TYPE &ppmt) = 0 ;
	virtual HRESULT __stdcall GetNumberOfCapabilities(int &piCount, int &piSize) = 0 ;
	virtual HRESULT __stdcall GetStreamCaps(int iIndex, PIEAM_MEDIA_TYPE &ppmt, void * pSCC) = 0 ;
};

typedef _di_IIEAMStreamConfig IID_IIEAMStreamConfig;

__interface  INTERFACE_UUID("{C6E13380-30AC-11D0-A18C-00A0C9118956}") IIEAMCrossbar  : public System::IInterface 
{
	virtual HRESULT __stdcall get_PinCounts(int &OutputPinCount, int &InputPinCount) = 0 ;
	virtual HRESULT __stdcall CanRoute(int OutputPinIndex, int InputPinIndex) = 0 ;
	virtual HRESULT __stdcall Route(int OutputPinIndex, int InputPinIndex) = 0 ;
	virtual HRESULT __stdcall get_IsRoutedTo(int OutputPinIndex, int &InputPinIndex) = 0 ;
	virtual HRESULT __stdcall get_CrossbarPinInfo(System::LongBool IsInputPin, int PinIndex, int &PinIndexRelated, int &PhysicalType) = 0 ;
};

typedef _di_IIEAMCrossbar IID_IIEAMCrossBar;

__interface  INTERFACE_UUID("{211A8761-03AC-11D1-8D13-00AA00BD8339}") IIEAMTuner  : public System::IInterface 
{
	virtual HRESULT __stdcall put_Channel(int lChannel, int lVideoSubChannel, int lAudioSubChannel) = 0 ;
	virtual HRESULT __stdcall get_Channel(int &plChannel, int &plVideoSubChannel, int &plAudioSubChannel) = 0 ;
	virtual HRESULT __stdcall ChannelMinMax() = 0 ;
	virtual HRESULT __stdcall put_CountryCode() = 0 ;
	virtual HRESULT __stdcall get_CountryCode() = 0 ;
	virtual HRESULT __stdcall put_TuningSpace(int lTuningSpace) = 0 ;
	virtual HRESULT __stdcall get_TuningSpace() = 0 ;
	virtual HRESULT __stdcall Logon() = 0 ;
	virtual HRESULT __stdcall Logout() = 0 ;
	virtual HRESULT __stdcall SignalPresent(int &plSignalStrength) = 0 ;
	virtual HRESULT __stdcall put_Mode() = 0 ;
	virtual HRESULT __stdcall get_Mode() = 0 ;
	virtual HRESULT __stdcall GetAvailableModes() = 0 ;
	virtual HRESULT __stdcall RegisterNotificationCallBack() = 0 ;
	virtual HRESULT __stdcall UnRegisterNotificationCallBack() = 0 ;
};

typedef _di_IIEAMTuner IID_IIEAMTuner;

__interface  INTERFACE_UUID("{211A8766-03AC-11D1-8D13-00AA00BD8339}") IIEAMTVTuner  : public IIEAMTuner 
{
	virtual HRESULT __stdcall get_AvailableTVFormats() = 0 ;
	virtual HRESULT __stdcall get_TVFormat() = 0 ;
	virtual HRESULT __stdcall AutoTune(int lChannel, int &plFoundSignal) = 0 ;
	virtual HRESULT __stdcall StoreAutoTune() = 0 ;
	virtual HRESULT __stdcall get_NumInputConnections() = 0 ;
	virtual HRESULT __stdcall put_InputType() = 0 ;
	virtual HRESULT __stdcall get_InputType() = 0 ;
	virtual HRESULT __stdcall put_ConnectInput() = 0 ;
	virtual HRESULT __stdcall get_ConnectInput() = 0 ;
	virtual HRESULT __stdcall get_VideoFrequency() = 0 ;
	virtual HRESULT __stdcall get_AudioFrequency() = 0 ;
};

typedef _di_IIEAMTVTuner IID_IIEAMTVTuner;

__interface  INTERFACE_UUID("{E46A9787-2B71-444D-A4B5-1FAB7B708D6A}") IIEVideoFrameStep  : public System::IInterface 
{
	virtual HRESULT __stdcall Step(unsigned dwFrames, System::_di_IInterface pStepObject) = 0 ;
	virtual HRESULT __stdcall CanStep(int bMultiple, System::_di_IInterface pStepObject) = 0 ;
	virtual HRESULT __stdcall CancelStep() = 0 ;
};

typedef _di_IIEVideoFrameStep IID_IIEVideoFrameStep;

__interface  INTERFACE_UUID("{65BD0710-24D2-4FF7-9324-ED2E5D3ABAFA}") IIEMediaDet  : public System::IInterface 
{
	virtual HRESULT __stdcall get_Filter(System::_di_IInterface &pVal) = 0 ;
	virtual HRESULT __stdcall put_Filter(System::_di_IInterface newVal) = 0 ;
	virtual HRESULT __stdcall get_OutputStreams(System::PInteger pVal) = 0 ;
	virtual HRESULT __stdcall get_CurrentStream(System::PInteger pVal) = 0 ;
	virtual HRESULT __stdcall put_CurrentStream(int newVal) = 0 ;
	virtual HRESULT __stdcall get_StreamType(System::PGUID pVal) = 0 ;
	virtual HRESULT __stdcall get_StreamTypeB(System::WideChar * &pVal) = 0 ;
	virtual HRESULT __stdcall get_StreamLength(System::PDouble pVal) = 0 ;
	virtual HRESULT __stdcall get_Filename(System::WideChar * &pVal) = 0 ;
	virtual HRESULT __stdcall put_Filename(System::WideChar * newVal) = 0 ;
	virtual HRESULT __stdcall GetBitmapBits(double StreamTime, System::PInteger pBufferSize, char * pBuffer, int Width, int Height) = 0 ;
	virtual HRESULT __stdcall WriteBitmapBits(double StreamTime, int Width, int Height, System::WideChar * Filename) = 0 ;
	virtual HRESULT __stdcall get_StreamMediaType(PIEAM_MEDIA_TYPE pVal) = 0 ;
	virtual HRESULT __stdcall GetSampleGrabber(_di_IIESampleGrabber &ppVal) = 0 ;
	virtual HRESULT __stdcall get_FrameRate(System::PDouble pVal) = 0 ;
	virtual HRESULT __stdcall EnterBitmapGrabMode(double SeekTime) = 0 ;
};

typedef _di_IIEMediaDet IID_IIEMediaDet;

__interface  INTERFACE_UUID("{D8AD0F58-5494-4102-97C5-EC798E59BCF4}") IIEMediaObject  : public System::IInterface 
{
	virtual HRESULT __stdcall GetStreamCount() = 0 ;
	virtual HRESULT __stdcall GetInputStreamInfo() = 0 ;
	virtual HRESULT __stdcall GetOutputStreamInfo() = 0 ;
	virtual HRESULT __stdcall GetInputType() = 0 ;
	virtual HRESULT __stdcall GetOutputType() = 0 ;
	virtual HRESULT __stdcall SetInputType() = 0 ;
	virtual HRESULT __stdcall SetOutputType() = 0 ;
	virtual HRESULT __stdcall GetInputCurrentType() = 0 ;
	virtual HRESULT __stdcall GetOutputCurrentType() = 0 ;
	virtual HRESULT __stdcall GetInputSizeInfo() = 0 ;
	virtual HRESULT __stdcall GetOutputSizeInfo() = 0 ;
	virtual HRESULT __stdcall GetInputMaxLatency() = 0 ;
	virtual HRESULT __stdcall SetInputMaxLatency() = 0 ;
	virtual HRESULT __stdcall Flush() = 0 ;
	virtual HRESULT __stdcall Discontinuity() = 0 ;
	virtual HRESULT __stdcall AllocateStreamingResources() = 0 ;
	virtual HRESULT __stdcall FreeStreamingResources() = 0 ;
	virtual HRESULT __stdcall GetInputStatus() = 0 ;
	virtual HRESULT __stdcall ProcessInput() = 0 ;
	virtual HRESULT __stdcall ProcessOutput() = 0 ;
	virtual HRESULT __stdcall Lock() = 0 ;
};

typedef _di_IIEMediaObject IID_IIEMediaObject;

__interface  INTERFACE_UUID("{0EB1088C-4DCD-46F0-878F-39DAE86A51B7}") IIEVMRWindowlessControl  : public System::IInterface 
{
	virtual HRESULT __stdcall GetNativeVideoSize(System::PInteger lpWidth, System::PInteger lpHeight, System::PInteger lpARWidth, System::PInteger lpARHeight) = 0 ;
	virtual HRESULT __stdcall GetMinIdealVideoSize(System::PInteger lpWidth, System::PInteger lpHeight) = 0 ;
	virtual HRESULT __stdcall GetMaxIdealVideoSize(System::PInteger lpWidth, System::PInteger lpHeight) = 0 ;
	virtual HRESULT __stdcall SetVideoPosition(System::Types::PRect lpSRCRect, System::Types::PRect lpDSTRect) = 0 ;
	virtual HRESULT __stdcall GetVideoPosition(System::Types::PRect lpSRCRect, System::Types::PRect lpDSTRect) = 0 ;
	virtual HRESULT __stdcall GetAspectRatioMode(unsigned* lpAspectRatioMode) = 0 ;
	virtual HRESULT __stdcall SetAspectRatioMode(unsigned AspectRatioMode) = 0 ;
	virtual HRESULT __stdcall SetVideoClippingWindow(NativeUInt hwnd) = 0 ;
	virtual HRESULT __stdcall RepaintVideo(NativeUInt hwnd, NativeUInt hdc) = 0 ;
	virtual HRESULT __stdcall DisplayModeChanged() = 0 ;
	virtual HRESULT __stdcall GetCurrentImage(System::PByte &lpDib) = 0 ;
	virtual HRESULT __stdcall SetBorderColor(unsigned Clr) = 0 ;
	virtual HRESULT __stdcall GetBorderColor(unsigned* lpClr) = 0 ;
	virtual HRESULT __stdcall SetColorKey(unsigned Clr) = 0 ;
	virtual HRESULT __stdcall GetColorKey(unsigned* lpClr) = 0 ;
};

typedef _di_IIEVMRWindowlessControl IID_IIEVMRWindowlessControl;

__interface  INTERFACE_UUID("{9E5530C5-7034-48B4-BB46-0B8A6EFC8E36}") IIEVMRFilterConfig  : public System::IInterface 
{
	virtual HRESULT __stdcall SetImageCompositor() = 0 ;
	virtual HRESULT __stdcall SetNumberOfStreams(unsigned dwMaxStreams) = 0 ;
	virtual HRESULT __stdcall GetNumberOfStreams(unsigned* pdwMaxStreams) = 0 ;
	virtual HRESULT __stdcall SetRenderingPrefs(unsigned dwRenderFlags) = 0 ;
	virtual HRESULT __stdcall GetRenderingPrefs(unsigned* pdwRenderFlags) = 0 ;
	virtual HRESULT __stdcall SetRenderingMode(unsigned Mode) = 0 ;
	virtual HRESULT __stdcall GetRenderingMode(unsigned* pMode) = 0 ;
};

typedef _di_IIEVMRFilterConfig IID_IIEVMRFilterConfig;

#pragma pack(push,1)
struct DECLSPEC_DRECORD IEVMRFrequency
{
public:
	unsigned dwNumerator;
	unsigned dwDenominator;
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD IEVMRVideoDesc
{
public:
	unsigned dwSize;
	unsigned dwSampleWidth;
	unsigned dwSampleHeight;
	System::LongBool SingleFieldPerSample;
	unsigned dwFourCC;
	IEVMRFrequency InputSampleFreq;
	IEVMRFrequency OutputFrameFreq;
};
#pragma pack(pop)


typedef IEVMRVideoDesc *PIEVMRVideoDesc;

#pragma pack(push,1)
struct DECLSPEC_DRECORD IEVMRDeinterlaceCaps
{
public:
	unsigned dwSize;
	unsigned dwNumPreviousOutputFrames;
	unsigned dwNumForwardRefSamples;
	unsigned dwNumBackwardRefSamples;
	unsigned DeinterlaceTechnology;
};
#pragma pack(pop)


typedef IEVMRDeinterlaceCaps *PIEVMRDeinterlaceCaps;

__interface  INTERFACE_UUID("{BB057577-0DB8-4E6A-87A7-1A8C9A505A0F}") IIEVMRDeinterlaceControl  : public System::IInterface 
{
	virtual HRESULT __stdcall GetNumberOfDeinterlaceModes(PIEVMRVideoDesc lpVideoDescription, unsigned* lpdwNumDeinterlaceModes, System::PGUID lpDeinterlaceModes) = 0 ;
	virtual HRESULT __stdcall GetDeinterlaceModeCaps(System::PGUID lpDeinterlaceMode, PIEVMRVideoDesc lpVideoDescription, PIEVMRDeinterlaceCaps lpDeinterlaceCaps) = 0 ;
	virtual HRESULT __stdcall GetDeinterlaceMode(unsigned dwStreamID, System::PGUID lpDeinterlaceMode) = 0 ;
	virtual HRESULT __stdcall SetDeinterlaceMode(unsigned dwStreamID, System::PGUID lpDeinterlaceMode) = 0 ;
	virtual HRESULT __stdcall GetDeinterlacePrefs(unsigned* lpdwDeinterlacePrefs) = 0 ;
	virtual HRESULT __stdcall SetDeinterlacePrefs(unsigned dwDeinterlacePrefs) = 0 ;
	virtual HRESULT __stdcall GetActualDeinterlaceMode(unsigned dwStreamID, System::PGUID lpDeinterlaceMode) = 0 ;
};

typedef _di_IIEVMRDeinterlaceControl IID_IIEVMRDeinterlaceControl;

struct DECLSPEC_DRECORD IEDVD_HMSF_TIMECODE
{
public:
	System::Byte bHours;
	System::Byte bMinutes;
	System::Byte bSeconds;
	System::Byte bFrames;
};


struct DECLSPEC_DRECORD IEDVD_PLAYBACK_LOCATION2
{
public:
	unsigned TitleNum;
	unsigned ChapterNum;
	IEDVD_HMSF_TIMECODE TimeCode;
	unsigned TimeCodeFlags;
};


#pragma pack(push,1)
struct DECLSPEC_DRECORD IEAM_DVD_RENDERSTATUS
{
public:
	HRESULT hrVPEStatus;
	System::LongBool bDVDVolInvalid;
	System::LongBool bDVDVolUnknown;
	System::LongBool bNoLine21In;
	System::LongBool bNoLine21Out;
	int iNumStreams;
	int iNumStreamsFailed;
	unsigned dwFailedStreamsFlag;
};
#pragma pack(pop)


typedef IEAM_DVD_RENDERSTATUS *PIEAM_DVD_RENDERSTATUS;

__interface  INTERFACE_UUID("{FCC152B6-F372-11D0-8E00-00C04FD7C08B}") IIEDvdGraphBuilder  : public System::IInterface 
{
	virtual HRESULT __stdcall GetFiltergraph(_di_IIEGraphBuilder &ppGB) = 0 ;
	virtual HRESULT __stdcall GetDvdInterface(const GUID &riid, /* out */ void *ppint) = 0 ;
	virtual HRESULT __stdcall RenderDvdVideoVolume(System::WideChar * lpcwszPathName, unsigned dwFlags, PIEAM_DVD_RENDERSTATUS pStatus) = 0 ;
};

__interface  INTERFACE_UUID("{5A4A97E4-94EE-4A55-9751-74B5643AA27D}") IIEDvdCmd  : public System::IInterface 
{
	virtual HRESULT __stdcall WaitForStart() = 0 ;
	virtual HRESULT __stdcall WaitForEnd() = 0 ;
};

typedef _di_IIEDvdCmd *PIIEDvdCmd;

__interface  INTERFACE_UUID("{33BC7430-EEC0-11D2-8201-00A0C9D74842}") IIEDvdControl2  : public System::IInterface 
{
	virtual HRESULT __stdcall PlayTitle(unsigned uiTitle, unsigned dwFlags, PIIEDvdCmd ppCmd) = 0 ;
	virtual HRESULT __stdcall PlayChapterInTitle(unsigned ulTitle, unsigned ulChapter, unsigned dwFlags, _di_IIEDvdCmd &ppCmd) = 0 ;
	virtual HRESULT __stdcall PlayAtTimeInTitle(unsigned uiTitle, IEDVD_HMSF_TIMECODE &pTime, unsigned dwFlags, _di_IIEDvdCmd &ppCmd) = 0 ;
	virtual HRESULT __stdcall Stop() = 0 ;
	virtual HRESULT __stdcall ReturnFromSubmenu() = 0 ;
	virtual HRESULT __stdcall PlayAtTime() = 0 ;
	virtual HRESULT __stdcall PlayChapter(unsigned ulChapter, unsigned dwFlags, PIIEDvdCmd ppCmd) = 0 ;
	virtual HRESULT __stdcall PlayPrevChapter() = 0 ;
	virtual HRESULT __stdcall ReplayChapter() = 0 ;
	virtual HRESULT __stdcall PlayNextChapter(unsigned dwFlags, PIIEDvdCmd ppCmd) = 0 ;
	virtual HRESULT __stdcall PlayForwards(double dwSpeed, unsigned dwFlags, _di_IIEDvdCmd &ppCmd) = 0 ;
	virtual HRESULT __stdcall PlayBackwards(double dwSpeed, unsigned dwFlags, _di_IIEDvdCmd &ppCmd) = 0 ;
	virtual HRESULT __stdcall ShowMenu(unsigned MenuID, unsigned dwFlags, _di_IIEDvdCmd &ppCmd) = 0 ;
	virtual HRESULT __stdcall Resume(unsigned dwFlags, _di_IIEDvdCmd &ppCmd) = 0 ;
	virtual HRESULT __stdcall SelectRelativeButton() = 0 ;
	virtual HRESULT __stdcall ActivateButton() = 0 ;
	virtual HRESULT __stdcall SelectButton() = 0 ;
	virtual HRESULT __stdcall SelectAndActivateButton() = 0 ;
	virtual HRESULT __stdcall StillOff() = 0 ;
	virtual HRESULT __stdcall Pause(System::LongBool bState) = 0 ;
	virtual HRESULT __stdcall SelectAudioStream() = 0 ;
	virtual HRESULT __stdcall SelectSubpictureStream() = 0 ;
	virtual HRESULT __stdcall SetSubpictureState() = 0 ;
	virtual HRESULT __stdcall SelectAngle() = 0 ;
	virtual HRESULT __stdcall SelectParentalLevel() = 0 ;
	virtual HRESULT __stdcall SelectParentalCountry() = 0 ;
	virtual HRESULT __stdcall SelectKaraokeAudioPresentationMode() = 0 ;
	virtual HRESULT __stdcall SelectVideoModePreference(unsigned SelectVideoModePreference) = 0 ;
	virtual HRESULT __stdcall SetDVDDirectory(System::WideChar * path) = 0 ;
	virtual HRESULT __stdcall ActivateAtPosition() = 0 ;
	virtual HRESULT __stdcall SelectAtPosition(System::Types::TPoint piont) = 0 ;
	virtual HRESULT __stdcall PlayChaptersAutoStop() = 0 ;
	virtual HRESULT __stdcall AcceptParentalLevelChange() = 0 ;
	virtual HRESULT __stdcall SetOption(int flag, System::LongBool Enable) = 0 ;
	virtual HRESULT __stdcall SetState() = 0 ;
	virtual HRESULT __stdcall PlayPeriodInTitleAutoStop() = 0 ;
	virtual HRESULT __stdcall SetGPRM() = 0 ;
	virtual HRESULT __stdcall SelectDefaultMenuLanguage() = 0 ;
	virtual HRESULT __stdcall SelectDefaultAudioLanguage() = 0 ;
	virtual HRESULT __stdcall SelectDefaultSubpictureLanguage() = 0 ;
};

typedef _di_IIEDvdControl2 IID_IIEDvdControl2;

__interface  INTERFACE_UUID("{A70EFE61-E2A3-11D0-A9BE-00AA0061BE93}") IIEDvdControl  : public System::IInterface 
{
	virtual HRESULT __stdcall TitlePlay(unsigned uiTitle) = 0 ;
	virtual HRESULT __stdcall ChapterPlay() = 0 ;
	virtual HRESULT __stdcall TimePlay() = 0 ;
	virtual HRESULT __stdcall StopForResume() = 0 ;
	virtual HRESULT __stdcall GoUp() = 0 ;
	virtual HRESULT __stdcall TimeSearch() = 0 ;
	virtual HRESULT __stdcall ChapterSearch() = 0 ;
	virtual HRESULT __stdcall PrevPGSearch() = 0 ;
	virtual HRESULT __stdcall TopPGSearch() = 0 ;
	virtual HRESULT __stdcall NextPGSearch() = 0 ;
	virtual HRESULT __stdcall ForwardScan() = 0 ;
	virtual HRESULT __stdcall BackwardScan() = 0 ;
	virtual HRESULT __stdcall MenuCall() = 0 ;
	virtual HRESULT __stdcall Resume() = 0 ;
	virtual HRESULT __stdcall UpperButtonSelect() = 0 ;
	virtual HRESULT __stdcall LowerButtonSelect() = 0 ;
	virtual HRESULT __stdcall LeftButtonSelect() = 0 ;
	virtual HRESULT __stdcall RightButtonSelect() = 0 ;
	virtual HRESULT __stdcall ButtonActivate() = 0 ;
	virtual HRESULT __stdcall ButtonSelectAndActivate() = 0 ;
	virtual HRESULT __stdcall StillOff() = 0 ;
	virtual HRESULT __stdcall PauseOn() = 0 ;
	virtual HRESULT __stdcall PauseOff() = 0 ;
	virtual HRESULT __stdcall MenuLanguageSelect() = 0 ;
	virtual HRESULT __stdcall AudioStreamChange() = 0 ;
	virtual HRESULT __stdcall SubpictureStreamChange() = 0 ;
	virtual HRESULT __stdcall AngleChange() = 0 ;
	virtual HRESULT __stdcall ParentalLevelSelect() = 0 ;
	virtual HRESULT __stdcall ParentalCountrySelect() = 0 ;
	virtual HRESULT __stdcall KaraokeAudioPresentationModeChange() = 0 ;
	virtual HRESULT __stdcall VideoModePreferrence() = 0 ;
	virtual HRESULT __stdcall SetRoot() = 0 ;
	virtual HRESULT __stdcall MouseActivate() = 0 ;
	virtual HRESULT __stdcall MouseSelect() = 0 ;
	virtual HRESULT __stdcall ChapterPlayAutoStop() = 0 ;
};

typedef _di_IIEDvdControl IID_IIEDvdControl;

__interface  INTERFACE_UUID("{34151510-EEC0-11D2-8201-00A0C9D74842}") IIEDvdInfo2  : public System::IInterface 
{
	virtual HRESULT __stdcall GetCurrentDomain() = 0 ;
	virtual HRESULT __stdcall GetCurrentLocation(IEDVD_PLAYBACK_LOCATION2 &pLocation) = 0 ;
	virtual HRESULT __stdcall GetTotalTitleTime(IEDVD_HMSF_TIMECODE &pTotalTime, unsigned &pulTimeCodeFlags) = 0 ;
	virtual HRESULT __stdcall GetCurrentButton() = 0 ;
	virtual HRESULT __stdcall GetCurrentAngle() = 0 ;
	virtual HRESULT __stdcall GetCurrentAudio() = 0 ;
	virtual HRESULT __stdcall GetCurrentSubpicture() = 0 ;
	virtual HRESULT __stdcall GetCurrentUOPS() = 0 ;
	virtual HRESULT __stdcall GetAllSPRMs() = 0 ;
	virtual HRESULT __stdcall GetAllGPRMs() = 0 ;
	virtual HRESULT __stdcall GetAudioLanguage() = 0 ;
	virtual HRESULT __stdcall GetSubpictureLanguage() = 0 ;
	virtual HRESULT __stdcall GetTitleAttributes() = 0 ;
	virtual HRESULT __stdcall GetVMGAttributes() = 0 ;
	virtual HRESULT __stdcall GetCurrentVideoAttributes() = 0 ;
	virtual HRESULT __stdcall GetAudioAttributes() = 0 ;
	virtual HRESULT __stdcall GetKaraokeAttributes() = 0 ;
	virtual HRESULT __stdcall GetSubpictureAttributes() = 0 ;
	virtual HRESULT __stdcall GetDVDVolumeInfo(unsigned &pulNumOfVolumes, unsigned &pulVolume, unsigned &pSide, unsigned &pulNumOfTitles) = 0 ;
	virtual HRESULT __stdcall GetDVDTextNumberOfLanguages() = 0 ;
	virtual HRESULT __stdcall GetDVDTextLanguageInfo() = 0 ;
	virtual HRESULT __stdcall GetDVDTextStringAsNative() = 0 ;
	virtual HRESULT __stdcall GetDVDTextStringAsUnicode() = 0 ;
	virtual HRESULT __stdcall GetPlayerParentalLevel() = 0 ;
	virtual HRESULT __stdcall GetNumberOfChapters(unsigned ulTitle, unsigned &pulNumOfChapters) = 0 ;
	virtual HRESULT __stdcall GetTitleParentalLevels() = 0 ;
	virtual HRESULT __stdcall GetDVDDirectory() = 0 ;
	virtual HRESULT __stdcall IsAudioStreamEnabled() = 0 ;
	virtual HRESULT __stdcall GetDiscID(void * pszwPath, __int64 &pullDiscID) = 0 ;
	virtual HRESULT __stdcall GetState() = 0 ;
	virtual HRESULT __stdcall GetMenuLanguages() = 0 ;
	virtual HRESULT __stdcall GetButtonAtPosition() = 0 ;
	virtual HRESULT __stdcall GetCmdFromEvent() = 0 ;
	virtual HRESULT __stdcall GetDefaultMenuLanguage() = 0 ;
	virtual HRESULT __stdcall GetDefaultAudioLanguage() = 0 ;
	virtual HRESULT __stdcall GetDefaultSubpictureLanguage() = 0 ;
	virtual HRESULT __stdcall GetDecoderCaps() = 0 ;
	virtual HRESULT __stdcall GetButtonRect() = 0 ;
	virtual HRESULT __stdcall IsSubpictureStreamEnabled() = 0 ;
};

typedef _di_IIEDvdInfo2 IID_IIEDvdInfo2;

__interface  INTERFACE_UUID("{EDE80B5C-BAD6-4623-B537-65586C9F8DFD}") IIEVMRAspectRatioControl  : public System::IInterface 
{
	virtual HRESULT __stdcall GetAspectRatioMode(unsigned* lpdwARMode) = 0 ;
	virtual HRESULT __stdcall SetAspectRatioMode(unsigned dwARMode) = 0 ;
};

typedef _di_IIEVMRAspectRatioControl IID_IIEVMRAspectRatioControl;

__interface  INTERFACE_UUID("{632105FA-072E-11D3-8AF9-00C04FB6BD3D}") IIEAMGraphStreams  : public System::IInterface 
{
	virtual HRESULT __stdcall FindUpstreamInterface() = 0 ;
	virtual HRESULT __stdcall SyncUsingStreamOffset(System::LongBool bUseStreamOffset) = 0 ;
	virtual HRESULT __stdcall SetMaxGraphLatency(IEREFERENCE_TIME rtMaxGraphLatency) = 0 ;
};

typedef _di_IIEAMGraphStreams IID_IIEAMGraphStreams;

enum DECLSPEC_DENUM TIEPropertyPages : unsigned char { iepVideoInput, iepAudioInput, iepVideoCodec, iepAudioCodec, iepVideoInputSource, iepTuner };

enum DECLSPEC_DENUM TIEPropertyPagesType : unsigned char { ietFilter, ietInput, ietOutput };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEVideoFormat : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	System::AnsiString Format;
	int BitRate;
	System::AnsiString VideoStandard;
	int MinWidth;
	int MinHeight;
	int MaxWidth;
	int MaxHeight;
	int GranularityX;
	int GranularityY;
	int BitmapWidth;
	int BitmapHeight;
public:
	/* TObject.Create */ inline __fastcall TIEVideoFormat() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TIEVideoFormat() { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TIEReferenceClock : unsigned char { rcDefault, rcNone, rcSystemClock, rcVideoInput, rcVideoOutput, rcAudioInput, rcAudioOutput };

enum DECLSPEC_DENUM TIEDSCapturemode : unsigned char { iedscCapture, iedscPreview };

enum DECLSPEC_DENUM TIEDSRunResult : unsigned char { iedsSuccess, iedsError, iedsBusy };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEDirectShow : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	bool fOLEInitialized;
	System::Classes::TStringList* fAudioInputs;
	System::Classes::TStringList* fVideoInputs;
	System::Classes::TStringList* fVideoCodecs;
	System::Classes::TStringList* fAudioCodecs;
	System::Classes::TList* fVideoFormats;
	System::Classes::TStringList* fVideoInputSources;
	_di_IIEBaseFilter fCurColor;
	_di_IIEBaseFilter fCurAudioInput;
	_di_IIEBaseFilter fCurVideoInput;
	_di_IIEBaseFilter fCurFileInput;
	System::AnsiString fFileInput;
	_di_IIEBaseFilter fCurVideoCodec;
	_di_IIEBaseFilter fCurAudioCodec;
	_di_IIEAMVideoCompression fIAMVideoCompression;
	System::AnsiString fFileOutput;
	_di_IIEGraphBuilder fGraph;
	_di_IIECaptureGraphBuilder2 fBuilder;
	_di_IIEMediaControl fControl;
	_di_IIEMediaSeeking fMediaSeeking;
	_di_IIEMediaEventEx fMediaEvent;
	_di_IIEAMStreamConfig fStreamConfig;
	_di_IIEBaseFilter fCrossBarFilter;
	_di_IIEAMCrossbar fCrossBar;
	_di_IIEAMTVTuner fTuner;
	_di_IIEBaseFilter fTunerFilter;
	_di_IIEVideoFrameStep fVideoFrameStep;
	_di_IIEAMAnalogVideoDecoder fAnalogVideoDecoder;
	_di_IIEAMClockSlave fClockSlave;
	_di_IIEBaseFilter fSampleGrabber;
	_di_IIESampleGrabber fSampleGrabberFilter;
	bool fEnableSampleGrabber;
	TIESampleGrabberCB* fSampleGrabberCB;
	System::Byte *fSampleGrabberTempBuffer;
	int fSampleGrabberTempBufferLen;
	GUID fSampleGrabberCapturePixelFormat;
	_di_IIEBaseFilter fNullRenderer;
	_di_IIEBaseFilter fAVIDecompressor;
	_di_IIEBaseFilter fMPEG2Demultiplexer;
	_di_IIEBaseFilter fMPEG2Decoder;
	_di_IIEBaseFilter fColorConverterDMO;
	bool fRenderVideo;
	_di_IIEBaseFilter fVideoMixingRenderer;
	_di_IIEVMRFilterConfig fVMRFilterConfig;
	_di_IIEVMRWindowlessControl fVMRWindowlessControl;
	_di_IIEPin fVMRSavedPin1;
	_di_IIEPin fVMRSavedPin2;
	NativeUInt fNotifyWindow;
	int fNewFrameMessage;
	int fEventMessage;
	bool fAcceptNextFrame;
	bool fEndOfStream;
	bool fRenderaudio;
	TIEReferenceClock fReferenceClock;
	int fClockErrorTolerance;
	_di_IIEReferenceClock fSystemClock;
	TIEDSCapturemode fCaptureMode;
	System::WideString fDVDInputPath;
	_di_IIEDvdControl2 fDVDControl2;
	_di_IIEDvdInfo2 fDVDInfo2;
	System::Classes::TStringList* __fastcall GetAudioInputs();
	System::Classes::TStringList* __fastcall GetVideoInputs();
	System::Classes::TStringList* __fastcall GetVideoCodecs();
	System::Classes::TStringList* __fastcall GetAudioCodecs();
	void __fastcall SetPosition(__int64 v);
	__int64 __fastcall GetPosition();
	__int64 __fastcall GetDuration();
	bool __fastcall GetGraphCreated();
	void __fastcall SetRate(double value);
	double __fastcall GetRate();
	void __fastcall SetXTimeFormat(TIETimeFormat value);
	TIETimeFormat __fastcall GetXTimeFormat();
	void __fastcall SetVideoCodecQuality(double value);
	double __fastcall GetVideoCodecQuality();
	bool __fastcall ShowFilterPropertyPages(_di_IIEBaseFilter filter, bool checkOnly);
	bool __fastcall ShowPinPropertyPages(_di_IIEPin pin, bool checkOnly);
	void __fastcall FillVideoFormats();
	void __fastcall ClearVideoFormats();
	TIEVideoFormat* __fastcall GetVideoFormats(int i);
	int __fastcall GetVideoFormatsCount();
	void __fastcall FillVideoInputSources();
	int __fastcall GetInputSource();
	void __fastcall SetInputSource(int value);
	void __fastcall SetVideoTunerChannel(int value);
	int __fastcall GetVideoTunerChannel();
	void __fastcall DVDConnect();
	void __fastcall StdConnect();
	void __fastcall VMRDisconnectInPin();
	void __fastcall VMRReconnectInPin();
	void __fastcall ConnectCrossbarAudioDecoder();
	void __fastcall VMRCreate();
	
public:
	__fastcall TIEDirectShow();
	__fastcall virtual ~TIEDirectShow();
	__property System::Classes::TStringList* AudioInputs = {read=GetAudioInputs};
	__property System::Classes::TStringList* VideoInputs = {read=GetVideoInputs};
	__property System::Classes::TStringList* VideoCodecs = {read=GetVideoCodecs};
	__property System::Classes::TStringList* AudioCodecs = {read=GetAudioCodecs};
	void __fastcall SetVideoInput(int idx, int instanceIndex = 0x0, int width = 0x0, int height = 0x0, System::AnsiString format = System::AnsiString(), int bitRate = 0x0);
	void __fastcall SetAudioInput(int idx, int instanceIndex = 0x0);
	void __fastcall SetVideoCodec(int idx);
	void __fastcall SetAudioCodec(int idx);
	__property System::AnsiString FileInput = {read=fFileInput, write=fFileInput};
	__property System::AnsiString FileOutput = {read=fFileOutput, write=fFileOutput};
	void __fastcall SaveGraph(System::AnsiString filename);
	void __fastcall Connect();
	void __fastcall Disconnect();
	__property bool Connected = {read=GetGraphCreated, nodefault};
	TIEDSRunResult __fastcall Run();
	void __fastcall Stop();
	void __fastcall Pause();
	__property double Rate = {read=GetRate, write=SetRate};
	TIEDirectShowState __fastcall State();
	__property __int64 Position = {read=GetPosition, write=SetPosition};
	__property __int64 Duration = {read=GetDuration};
	__property bool EndOfStream = {read=fEndOfStream, write=fEndOfStream, nodefault};
	__property bool EnableSampleGrabber = {read=fEnableSampleGrabber, write=fEnableSampleGrabber, nodefault};
	void __fastcall GetSample(Iexbitmaps::TIEBitmap* DestBitmap, bool resample = true);
	__property TIETimeFormat TimeFormat = {read=GetXTimeFormat, write=SetXTimeFormat, nodefault};
	void __fastcall BufferToTIEBitmap(System::PByte buffer, int len, Iexbitmaps::TIEBitmap* DestBitmap);
	void __fastcall SetNotifyWindow(NativeUInt WindowHandle, int NewFrameMessage, int EventMessage);
	bool __fastcall GetEventCode(int &Event);
	__property double VideoCodecQuality = {read=GetVideoCodecQuality, write=SetVideoCodecQuality};
	bool __fastcall ShowPropertyPages(TIEPropertyPages proppages, TIEPropertyPagesType proptype, bool checkOnly = false);
	void __fastcall SetCurrentVideoFormat(int width, int height, System::AnsiString format = System::AnsiString());
	void __fastcall GetCurrentVideoFormat(int &width, int &height, System::AnsiString &format);
	__property TIEVideoFormat* VideoFormats[int i] = {read=GetVideoFormats};
	__property int VideoFormatsCount = {read=GetVideoFormatsCount, nodefault};
	__property System::Classes::TStringList* VideoInputSources = {read=fVideoInputSources};
	__property int VideoInputSource = {read=GetInputSource, write=SetInputSource, nodefault};
	__property int TunerChannel = {read=GetVideoTunerChannel, write=SetVideoTunerChannel, nodefault};
	bool __fastcall TunerFindSignal();
	TIETVStandards __fastcall GetSupportedTVStandards();
	void __fastcall SetTVStandard(TIETVStandard Value);
	void __fastcall SetVCRHorizontalLocking(bool Value);
	__property bool RenderAudio = {read=fRenderaudio, write=fRenderaudio, nodefault};
	bool __fastcall Step(int frames);
	__int64 __fastcall ConvertTimeFormat(__int64 source, TIETimeFormat sourceFormat, TIETimeFormat targetFormat);
	__int64 __fastcall GetAverageTimePerFrame();
	__property NativeUInt NotifyWindow = {read=fNotifyWindow, nodefault};
	__property bool AcceptNextFrame = {read=fAcceptNextFrame, write=fAcceptNextFrame, nodefault};
	__property TIEReferenceClock ReferenceClock = {read=fReferenceClock, write=fReferenceClock, nodefault};
	__property int ClockErrorTolerance = {read=fClockErrorTolerance, write=fClockErrorTolerance, nodefault};
	__property bool RenderVideo = {read=fRenderVideo, write=fRenderVideo, nodefault};
	void __fastcall SetVideoRenderRect(const System::Types::TRect &SrcRect, const System::Types::TRect &DstRect);
	void __fastcall GetVideoRenderRect(System::Types::TRect &SrcRect, System::Types::TRect &DstRect);
	void __fastcall GetVideoRenderNativeSize(int &Width, int &Height);
	void __fastcall RepaintVideo(NativeUInt hwnd, NativeUInt hdc);
	__property System::WideString DVDInputPath = {read=fDVDInputPath, write=fDVDInputPath};
	void __fastcall DVDSelectAt(int x, int y);
	void __fastcall DVDActivateButton();
	void __fastcall DVDPlayAt(int Title, int Chapter)/* overload */;
	void __fastcall DVDPlayAt(int Title, int Hours, int Minutes, int Seconds, int Frames)/* overload */;
	System::AnsiString __fastcall DVDGetProperty(System::AnsiString Prop, System::AnsiString SubProp = System::AnsiString());
	void __fastcall DVDPlayAdvanced(bool PlayForward, double Speed);
	void __fastcall DVDShowMenu(TIEDVDMenu Menu);
	__property TIEDSCapturemode CaptureMode = {read=fCaptureMode, write=fCaptureMode, nodefault};
	__property _di_IIEGraphBuilder GraphBuilder = {read=fGraph};
	__property GUID SampleGrabberCapturePixelFormat = {read=fSampleGrabberCapturePixelFormat, write=fSampleGrabberCapturePixelFormat};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TIEMediaReader : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::AnsiString fFileName;
	_di_IIEMediaDet fMediaDet;
	double fFrameRate;
	double fLength;
	__int64 fFrameCount;
	int fFrameWidth;
	int fFrameHeight;
	
public:
	__fastcall TIEMediaReader(const System::AnsiString FileName);
	__fastcall virtual ~TIEMediaReader();
	__property double FrameRate = {read=fFrameRate};
	__property double Length = {read=fLength};
	__property __int64 FrameCount = {read=fFrameCount};
	void __fastcall GetSample(__int64 frame, Iexbitmaps::TIEBitmap* OutBitmap);
	__property int FrameWidth = {read=fFrameWidth, nodefault};
	__property int FrameHeight = {read=fFrameHeight, nodefault};
};


//-- var, const, procedure ---------------------------------------------------
static const System::Int8 IEEC_ACTIVATE = System::Int8(0x13);
static const System::Int8 IEEC_BUFFERING_DATA = System::Int8(0x11);
static const System::Word IEEC_BUILT = System::Word(0x300);
static const System::Int8 IEEC_CLOCK_CHANGED = System::Int8(0xd);
static const System::Int8 IEEC_CLOCK_UNSET = System::Int8(0x51);
static const System::Int8 IEEC_CODECAPI_EVENT = System::Int8(0x57);
static const System::Int8 IEEC_COMPLETE = System::Int8(0x1);
static const System::Int8 IEEC_DEVICE_LOST = System::Int8(0x1f);
static const System::Int8 IEEC_DISPLAY_CHANGED = System::Int8(0x16);
static const System::Int8 IEEC_END_OF_SEGMENT = System::Int8(0x1c);
static const System::Int8 IEEC_ERROR_STILLPLAYING = System::Int8(0x8);
static const System::Int8 IEEC_ERRORABORT = System::Int8(0x3);
static const System::Int8 IEEC_EXTDEVICE_MODE_CHANGE = System::Int8(0x31);
static const System::Int8 IEEC_FULLSCREEN_LOST = System::Int8(0x12);
static const System::Int8 IEEC_GRAPH_CHANGED = System::Int8(0x50);
static const System::Int8 IEEC_LENGTH_CHANGED = System::Int8(0x1e);
static const System::Int8 IEEC_NEED_RESTART = System::Int8(0x14);
static const System::Int8 IEEC_NOTIFY_WINDOW = System::Int8(0x19);
static const System::Int8 IEEC_OLE_EVENT = System::Int8(0x18);
static const System::Int8 IEEC_OPENING_FILE = System::Int8(0x10);
static const System::Int8 IEEC_PALETTE_CHANGED = System::Int8(0x9);
static const System::Int8 IEEC_PAUSED = System::Int8(0xe);
static const System::Int8 IEEC_PREPROCESS_COMPLETE = System::Int8(0x56);
static const System::Int8 IEEC_QUALITY_CHANGE = System::Int8(0xb);
static const System::Int8 IEEC_REPAINT = System::Int8(0x5);
static const System::Int8 IEEC_SEGMENT_STARTED = System::Int8(0x1d);
static const System::Int8 IEEC_SHUTTING_DOWN = System::Int8(0xc);
static const System::Word IEEC_SNDDEV_IN_ERROR = System::Word(0x200);
static const System::Word IEEC_SNDDEV_OUT_ERROR = System::Word(0x201);
static const System::Int8 IEEC_STARVATION = System::Int8(0x17);
static const System::Int8 IEEC_STATE_CHANGE = System::Int8(0x32);
static const System::Int8 IEEC_STEP_COMPLETE = System::Int8(0x24);
static const System::Int8 IEEC_STREAM_CONTROL_STARTED = System::Int8(0x1b);
static const System::Int8 IEEC_STREAM_CONTROL_STOPPED = System::Int8(0x1a);
static const System::Int8 IEEC_STREAM_ERROR_STILLPLAYING = System::Int8(0x7);
static const System::Int8 IEEC_STREAM_ERROR_STOPPED = System::Int8(0x6);
static const System::Int8 IEEC_TIMECODE_AVAILABLE = System::Int8(0x30);
static const System::Word IEEC_UNBUILT = System::Word(0x301);
static const System::Int8 IEEC_USERABORT = System::Int8(0x2);
static const System::Int8 IEEC_VIDEO_SIZE_CHANGED = System::Int8(0xa);
static const System::Int8 IEEC_VMR_RENDERDEVICE_SET = System::Int8(0x53);
static const System::Int8 IEEC_VMR_SURFACE_FLIPPED = System::Int8(0x54);
static const System::Int8 IEEC_VMR_RECONNECTION_FAILED = System::Int8(0x55);
static const System::Int8 IEEC_WINDOW_DESTROYED = System::Int8(0x15);
static const System::Word IEEC_WMT_EVENT = System::Word(0x252);
static const System::Word IEEC_WMT_INDEX_EVENT = System::Word(0x251);
static const System::Word IEEC_USER = System::Word(0x8000);
static const System::Word IEEC_DVD_DOMAIN_CHANGE = System::Word(0x101);
static const System::Word IEEC_DVD_TITLE_CHANGE = System::Word(0x102);
static const System::Word IEEC_DVD_CHAPTER_START = System::Word(0x103);
static const System::Word IEEC_DVD_AUDIO_STREAM_CHANGE = System::Word(0x104);
static const System::Word IEEC_DVD_SUBPICTURE_STREAM_CHANGE = System::Word(0x105);
static const System::Word IEEC_DVD_ANGLE_CHANGE = System::Word(0x106);
static const System::Word IEEC_DVD_BUTTON_CHANGE = System::Word(0x107);
static const System::Word IEEC_DVD_VALID_UOPS_CHANGE = System::Word(0x108);
static const System::Word IEEC_DVD_STILL_ON = System::Word(0x109);
static const System::Word IEEC_DVD_STILL_OFF = System::Word(0x10a);
static const System::Word IEEC_DVD_CURRENT_TIME = System::Word(0x10b);
static const System::Word IEEC_DVD_ERROR = System::Word(0x10c);
static const System::Word IEEC_DVD_WARNING = System::Word(0x10d);
static const System::Word IEEC_DVD_CHAPTER_AUTOSTOP = System::Word(0x10e);
static const System::Word IEEC_DVD_NO_FP_PGC = System::Word(0x10f);
static const System::Word IEEC_DVD_PLAYBACK_RATE_CHANGE = System::Word(0x110);
static const System::Word IEEC_DVD_PARENTAL_LEVEL_CHANGE = System::Word(0x111);
static const System::Word IEEC_DVD_PLAYBACK_STOPPED = System::Word(0x112);
static const System::Word IEEC_DVD_ANGLES_AVAILABLE = System::Word(0x113);
static const System::Word IEEC_DVD_PLAYPERIOD_AUTOSTOP = System::Word(0x114);
static const System::Word IEEC_DVD_BUTTON_AUTO_ACTIVATED = System::Word(0x115);
static const System::Word IEEC_DVD_CMD_START = System::Word(0x116);
static const System::Word IEEC_DVD_CMD_END = System::Word(0x117);
static const System::Word IEEC_DVD_DISC_EJECTED = System::Word(0x118);
static const System::Word IEEC_DVD_DISC_INSERTED = System::Word(0x119);
static const System::Word IEEC_DVD_CURRENT_HMSF_TIME = System::Word(0x11a);
static const System::Word IEEC_DVD_KARAOKE_MODE = System::Word(0x11b);
static const System::Word IEEC_DVD_PROGRAM_CELL_CHANGE = System::Word(0x11c);
static const System::Word IEEC_DVD_TITLE_SET_CHANGE = System::Word(0x11d);
static const System::Word IEEC_DVD_PROGRAM_CHAIN_CHANGE = System::Word(0x11e);
static const System::Word IEEC_DVD_VOBU_Offset = System::Word(0x11f);
static const System::Word IEEC_DVD_VOBU_Timestamp = System::Word(0x120);
static const System::Word IEEC_DVD_GPRM_Change = System::Word(0x121);
static const System::Word IEEC_DVD_SPRM_Change = System::Word(0x122);
static const System::Word IEEC_DVD_BeginNavigationCommands = System::Word(0x123);
static const System::Word IEEC_DVD_NavigationCommand = System::Word(0x124);
static const System::Byte IEMAX_FILTER_NAME = System::Byte(0x80);
}	/* namespace Ieds */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_IEDS)
using namespace Ieds;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// IedsHPP
