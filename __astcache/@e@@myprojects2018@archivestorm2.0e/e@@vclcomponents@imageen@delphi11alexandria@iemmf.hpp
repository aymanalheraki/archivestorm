// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'iemmf.pas' rev: 35.00 (Windows)

#ifndef IemmfHPP
#define IemmfHPP

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
#include <Winapi.ActiveX.hpp>
#include <System.Contnrs.hpp>
#include <System.SyncObjs.hpp>
#include <System.Types.hpp>
#include <System.UITypes.hpp>
#include <hyieutils.hpp>
#include <hyiedefs.hpp>
#include <Vcl.Dialogs.hpp>
#include <iexBitmaps.hpp>

//-- user supplied -----------------------------------------------------------

namespace Iemmf
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE IE_IMFAttributes;
typedef System::DelphiInterface<IE_IMFAttributes> _di_IE_IMFAttributes;
__interface DELPHIINTERFACE IE_IMFActivate;
typedef System::DelphiInterface<IE_IMFActivate> _di_IE_IMFActivate;
__interface DELPHIINTERFACE IE_IMFMediaBuffer;
typedef System::DelphiInterface<IE_IMFMediaBuffer> _di_IE_IMFMediaBuffer;
__interface DELPHIINTERFACE IE_IMF2DBuffer;
typedef System::DelphiInterface<IE_IMF2DBuffer> _di_IE_IMF2DBuffer;
__interface DELPHIINTERFACE IE_IMFSample;
typedef System::DelphiInterface<IE_IMFSample> _di_IE_IMFSample;
__interface DELPHIINTERFACE IE_IMFMediaEvent;
typedef System::DelphiInterface<IE_IMFMediaEvent> _di_IE_IMFMediaEvent;
__interface DELPHIINTERFACE IE_IMFSourceReaderCallback;
typedef System::DelphiInterface<IE_IMFSourceReaderCallback> _di_IE_IMFSourceReaderCallback;
__interface DELPHIINTERFACE IE_IMFAsyncResult;
typedef System::DelphiInterface<IE_IMFAsyncResult> _di_IE_IMFAsyncResult;
__interface DELPHIINTERFACE IE_IMFAsyncCallback;
typedef System::DelphiInterface<IE_IMFAsyncCallback> _di_IE_IMFAsyncCallback;
__interface DELPHIINTERFACE IE_IMFMediaEventGenerator;
typedef System::DelphiInterface<IE_IMFMediaEventGenerator> _di_IE_IMFMediaEventGenerator;
__interface DELPHIINTERFACE IE_IMFMediaType;
typedef System::DelphiInterface<IE_IMFMediaType> _di_IE_IMFMediaType;
__interface DELPHIINTERFACE IE_IMFMediaTypeHandler;
typedef System::DelphiInterface<IE_IMFMediaTypeHandler> _di_IE_IMFMediaTypeHandler;
__interface DELPHIINTERFACE IE_IMFStreamDescriptor;
typedef System::DelphiInterface<IE_IMFStreamDescriptor> _di_IE_IMFStreamDescriptor;
__interface DELPHIINTERFACE IE_IMFPresentationDescriptor;
typedef System::DelphiInterface<IE_IMFPresentationDescriptor> _di_IE_IMFPresentationDescriptor;
__interface DELPHIINTERFACE IE_IMFMediaSource;
typedef System::DelphiInterface<IE_IMFMediaSource> _di_IE_IMFMediaSource;
__interface DELPHIINTERFACE IE_IMFSourceReader;
typedef System::DelphiInterface<IE_IMFSourceReader> _di_IE_IMFSourceReader;
__interface DELPHIINTERFACE IE_IMFByteStream;
typedef System::DelphiInterface<IE_IMFByteStream> _di_IE_IMFByteStream;
__interface DELPHIINTERFACE IE_IMFStreamSink;
typedef System::DelphiInterface<IE_IMFStreamSink> _di_IE_IMFStreamSink;
__interface DELPHIINTERFACE IE_IMFClock;
typedef System::DelphiInterface<IE_IMFClock> _di_IE_IMFClock;
__interface DELPHIINTERFACE IE_IMFPresentationTimeSource;
typedef System::DelphiInterface<IE_IMFPresentationTimeSource> _di_IE_IMFPresentationTimeSource;
__interface DELPHIINTERFACE IE_IMFClockStateSink;
typedef System::DelphiInterface<IE_IMFClockStateSink> _di_IE_IMFClockStateSink;
__interface DELPHIINTERFACE IE_IMFPresentationClock;
typedef System::DelphiInterface<IE_IMFPresentationClock> _di_IE_IMFPresentationClock;
__interface DELPHIINTERFACE IE_IMFMediaSink;
typedef System::DelphiInterface<IE_IMFMediaSink> _di_IE_IMFMediaSink;
__interface DELPHIINTERFACE IE_IMFCollection;
typedef System::DelphiInterface<IE_IMFCollection> _di_IE_IMFCollection;
struct IE_MFT_INPUT_STREAM_INFO;
struct IE_MFT_OUTPUT_STREAM_INFO;
struct IE_MFT_OUTPUT_DATA_BUFFER;
__interface DELPHIINTERFACE IE_IMFTransform;
typedef System::DelphiInterface<IE_IMFTransform> _di_IE_IMFTransform;
__interface DELPHIINTERFACE IE_IWMResamplerProps;
typedef System::DelphiInterface<IE_IWMResamplerProps> _di_IE_IWMResamplerProps;
__interface DELPHIINTERFACE IE_IMFSourceReaderEx;
typedef System::DelphiInterface<IE_IMFSourceReaderEx> _di_IE_IMFSourceReaderEx;
struct IE_MFRECT;
__interface DELPHIINTERFACE IE_IMFVideoProcessorControl;
typedef System::DelphiInterface<IE_IMFVideoProcessorControl> _di_IE_IMFVideoProcessorControl;
class DELPHICLASS TIEMFDeviceList;
__interface DELPHIINTERFACE IIEMFCallbackHandler;
typedef System::DelphiInterface<IIEMFCallbackHandler> _di_IIEMFCallbackHandler;
class DELPHICLASS TIEMFReceivedSample;
class DELPHICLASS TIEMediaFoundationSourceReaderCallback;
class DELPHICLASS TIEMediaFoundationVideoSampleDecoder;
__interface DELPHIINTERFACE IIEMediaFoundationReaderNotifyReceiver;
typedef System::DelphiInterface<IIEMediaFoundationReaderNotifyReceiver> _di_IIEMediaFoundationReaderNotifyReceiver;
class DELPHICLASS TIEMediaFoundationReaderWindowNotifyReceiver;
class DELPHICLASS TIEMediaFoundationAudioResampler;
class DELPHICLASS TIEMediaFoundationAudioRenderer;
class DELPHICLASS TIEMediaFoundationVideoProcessor;
class DELPHICLASS TIEMediaFoundationSourceReader;
//-- type declarations -------------------------------------------------------
__interface  INTERFACE_UUID("{2CD2D921-C447-44A7-A13C-4ADABFC247E3}") IE_IMFAttributes  : public System::IInterface 
{
	virtual HRESULT __stdcall GetItem(const GUID &guidKey, tagPROPVARIANT &pValue) = 0 ;
	virtual HRESULT __stdcall GetItemType(const GUID &guidKey, /* out */ unsigned &pType) = 0 ;
	virtual HRESULT __stdcall CompareItem(const GUID &guidKey, const tagPROPVARIANT &Value, /* out */ System::LongBool &pbResult) = 0 ;
	virtual HRESULT __stdcall Compare(_di_IE_IMFAttributes pTheirs, unsigned MatchType, /* out */ System::LongBool &pbResult) = 0 ;
	virtual HRESULT __stdcall GetUINT32(const GUID &guidKey, /* out */ unsigned &punValue) = 0 ;
	virtual HRESULT __stdcall GetUINT64(const GUID &guidKey, /* out */ unsigned __int64 &punValue) = 0 ;
	virtual HRESULT __stdcall GetDouble(const GUID &guidKey, /* out */ double &pfValue) = 0 ;
	virtual HRESULT __stdcall GetGUID(const GUID &guidKey, /* out */ GUID &pguidValue) = 0 ;
	virtual HRESULT __stdcall GetStringLength(const GUID &guidKey, /* out */ unsigned &pcchLength) = 0 ;
	virtual HRESULT __stdcall GetString(const GUID &guidKey, System::WideChar * pwszValue, unsigned cchBufSize, unsigned &pcchLength) = 0 ;
	virtual HRESULT __stdcall GetAllocatedString(const GUID &guidKey, /* out */ System::WideChar * &ppwszValue, /* out */ unsigned &pcchLength) = 0 ;
	virtual HRESULT __stdcall GetBlobSize(const GUID &guidKey, /* out */ unsigned &pcbBlobSize) = 0 ;
	virtual HRESULT __stdcall GetBlob(const GUID &guidKey, System::PByte pBuf, unsigned cbBufSize, unsigned &pcbBlobSize) = 0 ;
	virtual HRESULT __stdcall GetAllocatedBlob(const GUID &guidKey, /* out */ System::PByte &ppBuf, /* out */ unsigned &pcbSize) = 0 ;
	virtual HRESULT __stdcall GetUnknown(const GUID &guidKey, const GUID &riid, /* out */ void *ppv) = 0 ;
	virtual HRESULT __stdcall SetItem(const GUID &guidKey, const tagPROPVARIANT &Value) = 0 ;
	virtual HRESULT __stdcall DeleteItem(const GUID &guidKey) = 0 ;
	virtual HRESULT __stdcall DeleteAllItems() = 0 ;
	virtual HRESULT __stdcall SetUINT32(const GUID &guidKey, unsigned unValue) = 0 ;
	virtual HRESULT __stdcall SetUINT64(const GUID &guidKey, unsigned __int64 unValue) = 0 ;
	virtual HRESULT __stdcall SetDouble(const GUID &guidKey, double fValue) = 0 ;
	virtual HRESULT __stdcall SetGUID(const GUID &guidKey, const GUID &guidValue) = 0 ;
	virtual HRESULT __stdcall SetString(const GUID &guidKey, System::WideChar * wszValue) = 0 ;
	virtual HRESULT __stdcall SetBlob(const GUID &guidKey, System::PByte pBuf, unsigned cbBufSize) = 0 ;
	virtual HRESULT __stdcall SetUnknown(const GUID &guidKey, System::_di_IInterface pUnknown) = 0 ;
	virtual HRESULT __stdcall LockStore() = 0 ;
	virtual HRESULT __stdcall UnlockStore() = 0 ;
	virtual HRESULT __stdcall GetCount(/* out */ unsigned &pcItems) = 0 ;
	virtual HRESULT __stdcall GetItemByIndex(unsigned unIndex, /* out */ GUID &pguidKey, tagPROPVARIANT &pValue) = 0 ;
	virtual HRESULT __stdcall CopyAllItems(_di_IE_IMFAttributes pDest) = 0 ;
};

__interface  INTERFACE_UUID("{7FEE9E9A-4A89-47A6-899C-B6A53A70FB67}") IE_IMFActivate  : public IE_IMFAttributes 
{
	virtual HRESULT __stdcall ActivateObject(const GUID &riid, /* out */ void *ppv) = 0 ;
	virtual HRESULT __stdcall ShutdownObject() = 0 ;
	virtual HRESULT __stdcall DetachObject() = 0 ;
};

__interface  INTERFACE_UUID("{045FA593-8799-42B8-BC8D-8968C6453507}") IE_IMFMediaBuffer  : public System::IInterface 
{
	virtual HRESULT __stdcall Lock(/* out */ System::PByte &ppbBuffer, /* out */ unsigned &pcbMaxLength, /* out */ unsigned &pcbCurrentLength) = 0 ;
	virtual HRESULT __stdcall Unlock() = 0 ;
	virtual HRESULT __stdcall GetCurrentLength(/* out */ unsigned &pcbCurrentLength) = 0 ;
	virtual HRESULT __stdcall SetCurrentLength(unsigned cbCurrentLength) = 0 ;
	virtual HRESULT __stdcall GetMaxLength(/* out */ unsigned &pcbMaxLength) = 0 ;
};

__interface  INTERFACE_UUID("{7DC9D5F9-9ED9-44EC-9BBF-0600BB589FBB}") IE_IMF2DBuffer  : public System::IInterface 
{
	virtual HRESULT __stdcall Lock2D(/* out */ System::PByte &pbScanline0, /* out */ int &plPitch) = 0 ;
	virtual HRESULT __stdcall Unlock2D() = 0 ;
	virtual HRESULT __stdcall GetScanline0AndPitch(/* out */ System::PByte &pbScanline0, /* out */ int &plPitch) = 0 ;
	virtual HRESULT __stdcall IsContiguousFormat(/* out */ System::LongBool &pfIsContiguous) = 0 ;
	virtual HRESULT __stdcall GetContiguousLength(/* out */ unsigned &pcbLength) = 0 ;
	virtual HRESULT __stdcall ContiguousCopyTo(System::PByte pbDestBuffer, unsigned cbDestBuffer) = 0 ;
	virtual HRESULT __stdcall ContiguousCopyFrom(System::PByte pbSrcBuffer, unsigned cbSrcBuffer) = 0 ;
};

__interface  INTERFACE_UUID("{C40A00F2-B93A-4D80-AE8C-5A1C634F58E4}") IE_IMFSample  : public IE_IMFAttributes 
{
	virtual HRESULT __stdcall GetSampleFlags(/* out */ unsigned &pdwSampleFlags) = 0 ;
	virtual HRESULT __stdcall SetSampleFlags(unsigned dwSampleFlags) = 0 ;
	virtual HRESULT __stdcall GetSampleTime(/* out */ __int64 &phnsSampleTime) = 0 ;
	virtual HRESULT __stdcall SetSampleTime(__int64 hnsSampleTime) = 0 ;
	virtual HRESULT __stdcall GetSampleDuration(/* out */ __int64 &phnsSampleDuration) = 0 ;
	virtual HRESULT __stdcall SetSampleDuration(__int64 hnsSampleDuration) = 0 ;
	virtual HRESULT __stdcall GetBufferCount(/* out */ unsigned &pdwBufferCount) = 0 ;
	virtual HRESULT __stdcall GetBufferByIndex(unsigned dwIndex, /* out */ void *IE_IMFMediaBuffer) = 0 ;
	virtual HRESULT __stdcall ConvertToContiguousBuffer(/* out */ _di_IE_IMFMediaBuffer &ppBuffer) = 0 ;
	virtual HRESULT __stdcall AddBuffer(_di_IE_IMFMediaBuffer pBuffer) = 0 ;
	virtual HRESULT __stdcall RemoveBufferByIndex(unsigned dwIndex) = 0 ;
	virtual HRESULT __stdcall RemoveAllBuffers() = 0 ;
	virtual HRESULT __stdcall GetTotalLength(/* out */ unsigned &pcbTotalLength) = 0 ;
	virtual HRESULT __stdcall CopyToBuffer(_di_IE_IMFMediaBuffer pBuffer) = 0 ;
};

__interface  INTERFACE_UUID("{DF598932-F10C-4E39-BBA2-C308F101DAA3}") IE_IMFMediaEvent  : public IE_IMFAttributes 
{
	virtual HRESULT __stdcall GetType(/* out */ unsigned &pmet) = 0 ;
	virtual HRESULT __stdcall GetExtendedType(/* out */ GUID &pguidExtendedType) = 0 ;
	virtual HRESULT __stdcall GetStatus(/* out */ HRESULT &phrStatus) = 0 ;
	virtual HRESULT __stdcall GetValue(/* out */ tagPROPVARIANT &pvValue) = 0 ;
};

__interface  INTERFACE_UUID("{DEEC8D99-FA1D-4D82-84C2-2C8969944867}") IE_IMFSourceReaderCallback  : public System::IInterface 
{
	virtual HRESULT __stdcall OnReadSample(HRESULT hrStatus, unsigned dwStreamIndex, unsigned dwStreamFlags, __int64 llTimestamp, _di_IE_IMFSample pSample) = 0 ;
	virtual HRESULT __stdcall OnFlush(unsigned dwStreamIndex) = 0 ;
	virtual HRESULT __stdcall OnEvent(unsigned dwStreamIndex, _di_IE_IMFMediaEvent pEvent) = 0 ;
};

__interface  INTERFACE_UUID("{AC6B7889-0740-4D51-8619-905994A55CC6}") IE_IMFAsyncResult  : public System::IInterface 
{
	virtual HRESULT __stdcall GetState(/* out */ System::_di_IInterface &ppunkState) = 0 ;
	virtual HRESULT __stdcall GetStatus() = 0 ;
	virtual HRESULT __stdcall SetStatus(HRESULT hrStatus) = 0 ;
	virtual HRESULT __stdcall GetObject(/* out */ System::_di_IInterface &ppObject) = 0 ;
	virtual System::_di_IInterface __fastcall GetStateNoAddRef() = 0 ;
};

__interface  INTERFACE_UUID("{A27003CF-2354-4F2A-8D6A-AB7CFF15437E}") IE_IMFAsyncCallback  : public System::IInterface 
{
	virtual HRESULT __stdcall GetParameters(/* out */ unsigned &pdwFlags, /* out */ unsigned &pdwQueue) = 0 ;
	virtual HRESULT __stdcall Invoke(_di_IE_IMFAsyncResult pAsyncResult) = 0 ;
};

__interface  INTERFACE_UUID("{2CD0BD52-BCD5-4B89-B62C-EADC0C031E7D}") IE_IMFMediaEventGenerator  : public System::IInterface 
{
	virtual HRESULT __stdcall GetEvent(unsigned dwFlags, /* out */ _di_IE_IMFMediaEvent &ppEvent) = 0 ;
	virtual HRESULT __stdcall BeginGetEvent(_di_IE_IMFAsyncCallback pCallback, System::_di_IInterface punkState) = 0 ;
	virtual HRESULT __stdcall EndGetEvent(_di_IE_IMFAsyncResult pResult, /* out */ _di_IE_IMFMediaEvent &ppEvent) = 0 ;
	virtual HRESULT __stdcall QueueEvent(unsigned met, const GUID &guidExtendedType, HRESULT hrStatus, const tagPROPVARIANT &pvValue) = 0 ;
};

__interface  INTERFACE_UUID("{44AE0FA8-EA31-4109-8D2E-4CAE4997C555}") IE_IMFMediaType  : public IE_IMFAttributes 
{
	virtual HRESULT __stdcall GetMajorType(/* out */ GUID &pguidMajorType) = 0 ;
	virtual HRESULT __stdcall IsCompressedFormat(/* out */ System::LongBool &pfCompressed) = 0 ;
	virtual HRESULT __stdcall IsEqual(_di_IE_IMFMediaType pIMediaType, /* out */ unsigned &pdwFlags) = 0 ;
	virtual HRESULT __stdcall GetRepresentation(GUID guidRepresentation, /* out */ void * &ppvRepresentation) = 0 ;
	virtual HRESULT __stdcall FreeRepresentation(GUID guidRepresentation, void * pvRepresentation) = 0 ;
};

__interface  INTERFACE_UUID("{E93DCF6C-4B07-4E1E-8123-AA16ED6EADF5}") IE_IMFMediaTypeHandler  : public System::IInterface 
{
	virtual HRESULT __stdcall IsMediaTypeSupported(_di_IE_IMFMediaType pMediaType, /* out */ _di_IE_IMFMediaType &ppMediaType) = 0 ;
	virtual HRESULT __stdcall GetMediaTypeCount(/* out */ unsigned &pdwTypeCount) = 0 ;
	virtual HRESULT __stdcall GetMediaTypeByIndex(unsigned dwIndex, /* out */ _di_IE_IMFMediaType &ppType) = 0 ;
	virtual HRESULT __stdcall SetCurrentMediaType(_di_IE_IMFMediaType pMediaType) = 0 ;
	virtual HRESULT __stdcall GetCurrentMediaType(/* out */ _di_IE_IMFMediaType &ppMediaType) = 0 ;
	virtual HRESULT __stdcall GetMajorType(/* out */ GUID &pguidMajorType) = 0 ;
};

__interface  INTERFACE_UUID("{56C03D9C-9DBB-45F5-AB4B-D80F47C05938}") IE_IMFStreamDescriptor  : public IE_IMFAttributes 
{
	virtual HRESULT __stdcall GetStreamIdentifier(/* out */ unsigned &pdwStreamIdentifier) = 0 ;
	virtual HRESULT __stdcall GetMediaTypeHandler(/* out */ _di_IE_IMFMediaTypeHandler &ppMediaTypeHandler) = 0 ;
};

__interface  INTERFACE_UUID("{03CB2711-24D7-4DB6-A17F-F3A7A479A536}") IE_IMFPresentationDescriptor  : public IE_IMFAttributes 
{
	virtual HRESULT __stdcall GetStreamDescriptorCount(/* out */ unsigned &pdwDescriptorCount) = 0 ;
	virtual HRESULT __stdcall GetStreamDescriptorByIndex(unsigned dwIndex, /* out */ System::LongBool &pfSelected, /* out */ _di_IE_IMFStreamDescriptor &ppDescriptor) = 0 ;
	virtual HRESULT __stdcall SelectStream(unsigned dwDescriptorIndex) = 0 ;
	virtual HRESULT __stdcall DeselectStream(unsigned dwDescriptorIndex) = 0 ;
	virtual HRESULT __stdcall Clone(/* out */ _di_IE_IMFPresentationDescriptor &ppPresentationDescriptor) = 0 ;
};

__interface  INTERFACE_UUID("{279A808D-AEC7-40C8-9C6B-A6B492C78A66}") IE_IMFMediaSource  : public IE_IMFMediaEventGenerator 
{
	virtual HRESULT __stdcall GetCharacteristics(/* out */ unsigned &pdwCharacteristics) = 0 ;
	virtual HRESULT __stdcall CreatePresentationDescriptor(/* out */ _di_IE_IMFPresentationDescriptor &ppPresentationDescriptor) = 0 ;
	virtual HRESULT __stdcall Start(_di_IE_IMFPresentationDescriptor pPresentationDescriptor, const GUID &pguidTimeFormat, const tagPROPVARIANT &pvarStartPosition) = 0 ;
	virtual HRESULT __stdcall Stop() = 0 ;
	virtual HRESULT __stdcall Pause() = 0 ;
	virtual HRESULT __stdcall Shutdown() = 0 ;
};

__interface  INTERFACE_UUID("{70AE66F2-C809-4E4F-8915-BDCB406B7993}") IE_IMFSourceReader  : public System::IInterface 
{
	virtual HRESULT __stdcall GetStreamSelection(unsigned dwStreamIndex, /* out */ System::LongBool &pfSelected) = 0 ;
	virtual HRESULT __stdcall SetStreamSelection(unsigned dwStreamIndex, System::LongBool fSelected) = 0 ;
	virtual HRESULT __stdcall GetNativeMediaType(unsigned dwStreamIndex, unsigned dwMediaTypeIndex, /* out */ _di_IE_IMFMediaType &ppMediaType) = 0 ;
	virtual HRESULT __stdcall GetCurrentMediaType(unsigned dwStreamIndex, /* out */ _di_IE_IMFMediaType &ppMediaType) = 0 ;
	virtual HRESULT __stdcall SetCurrentMediaType(unsigned dwStreamIndex, unsigned* pdwReserved, _di_IE_IMFMediaType pMediaType) = 0 ;
	virtual HRESULT __stdcall SetCurrentPosition(const GUID &guidTimeFormat, const tagPROPVARIANT &varPosition) = 0 ;
	virtual HRESULT __stdcall ReadSample(unsigned dwStreamIndex, unsigned dwControlFlags, /* out */ unsigned &pdwActualStreamIndex, /* out */ unsigned &pdwStreamFlags, /* out */ __int64 &pllTimestamp, _di_IE_IMFSample &ppSample) = 0 ;
	virtual HRESULT __stdcall Flush(unsigned dwStreamIndex) = 0 ;
	virtual HRESULT __stdcall GetServiceForStream(unsigned dwStreamIndex, const GUID &guidService, const GUID &riid, /* out */ void *ppvObject) = 0 ;
	virtual HRESULT __stdcall GetPresentationAttribute(unsigned dwStreamIndex, const GUID &guidAttribute, /* out */ tagPROPVARIANT &pvarAttribute) = 0 ;
};

__interface  INTERFACE_UUID("{AD4C1B00-4BF7-422F-9175-756693D9130D}") IE_IMFByteStream  : public System::IInterface 
{
	virtual HRESULT __stdcall GetCapabilities(/* out */ unsigned &pdwCapabilities) = 0 ;
	virtual HRESULT __stdcall GetLength(/* out */ unsigned __int64 &pqwLength) = 0 ;
	virtual HRESULT __stdcall SetLength(unsigned __int64 qwLength) = 0 ;
	virtual HRESULT __stdcall GetCurrentPosition(/* out */ unsigned __int64 &pqwPosition) = 0 ;
	virtual HRESULT __stdcall SetCurrentPosition(unsigned __int64 qwPosition) = 0 ;
	virtual HRESULT __stdcall IsEndOfStream(/* out */ System::LongBool &pfEndOfStream) = 0 ;
	virtual HRESULT __stdcall Read(System::PByte pb, unsigned cb, /* out */ unsigned &pcbRead) = 0 ;
	virtual HRESULT __stdcall BeginRead(System::PByte pb, unsigned cb, _di_IE_IMFAsyncCallback pCallback, System::_di_IInterface punkState) = 0 ;
	virtual HRESULT __stdcall EndRead(_di_IE_IMFAsyncResult pResult, /* out */ unsigned &pcbRead) = 0 ;
	virtual HRESULT __stdcall Write(System::PByte pb, unsigned cb, /* out */ unsigned &pcbWritten) = 0 ;
	virtual HRESULT __stdcall BeginWrite(System::PByte pb, unsigned cb, _di_IE_IMFAsyncCallback pCallback, System::_di_IInterface punkState) = 0 ;
	virtual HRESULT __stdcall EndWrite(_di_IE_IMFAsyncResult pResult, /* out */ unsigned &pcbWritten) = 0 ;
	virtual HRESULT __stdcall Seek(unsigned SeekOrigin, __int64 llSeekOffset, unsigned dwSeekFlags, /* out */ unsigned __int64 &pqwCurrentPosition) = 0 ;
	virtual HRESULT __stdcall Flush() = 0 ;
	virtual HRESULT __stdcall Close() = 0 ;
};

__interface  INTERFACE_UUID("{0A97B3CF-8E7C-4A3D-8F8C-0C843DC247FB}") IE_IMFStreamSink  : public IE_IMFMediaEventGenerator 
{
	virtual HRESULT __stdcall GetMediaSink() = 0 ;
	virtual HRESULT __stdcall GetIdentifier(/* out */ unsigned &pdwIdentifier) = 0 ;
	virtual HRESULT __stdcall GetMediaTypeHandler(/* out */ _di_IE_IMFMediaTypeHandler &ppHandler) = 0 ;
	virtual HRESULT __stdcall ProcessSample(_di_IE_IMFSample pSample) = 0 ;
	virtual HRESULT __stdcall PlaceMarker(unsigned eMarkerType, const tagPROPVARIANT &pvarMarkerValue, const tagPROPVARIANT &pvarContextValue) = 0 ;
	virtual HRESULT __stdcall Flush() = 0 ;
};

__interface  INTERFACE_UUID("{2EB1E945-18B8-4139-9B1A-D5D584818530}") IE_IMFClock  : public System::IInterface 
{
	virtual HRESULT __stdcall GetClockCharacteristics(/* out */ unsigned &pdwCharacteristics) = 0 ;
	virtual HRESULT __stdcall GetCorrelatedTime(unsigned dwReserved, /* out */ __int64 &pllClockTime, /* out */ __int64 &phnsSystemTime) = 0 ;
	virtual HRESULT __stdcall GetContinuityKey(/* out */ unsigned &pdwContinuityKey) = 0 ;
	virtual HRESULT __stdcall GetState(unsigned dwReserved, /* out */ unsigned &peClockState) = 0 ;
	virtual HRESULT __stdcall GetProperties() = 0 ;
};

__interface  INTERFACE_UUID("{7FF12CCE-F76F-41C2-863B-1666C8E5E139}") IE_IMFPresentationTimeSource  : public IE_IMFClock 
{
	virtual HRESULT __stdcall GetUnderlyingClock(/* out */ _di_IE_IMFClock &ppClock) = 0 ;
};

__interface  INTERFACE_UUID("{F6696E82-74F7-4F3D-A178-8A5E09C3659F}") IE_IMFClockStateSink  : public System::IInterface 
{
	virtual HRESULT __stdcall OnClockStart(__int64 hnsSystemTime, __int64 llClockStartOffset) = 0 ;
	virtual HRESULT __stdcall OnClockStop(__int64 hnsSystemTime) = 0 ;
	virtual HRESULT __stdcall OnClockPause(__int64 hnsSystemTime) = 0 ;
	virtual HRESULT __stdcall OnClockRestart(__int64 hnsSystemTime) = 0 ;
	virtual HRESULT __stdcall OnClockSetRate(__int64 hnsSystemTime, float flRate) = 0 ;
};

__interface  INTERFACE_UUID("{868CE85C-8EA9-4F55-AB82-B009A910A805}") IE_IMFPresentationClock  : public IE_IMFClock 
{
	virtual HRESULT __stdcall SetTimeSource(_di_IE_IMFPresentationTimeSource pTimeSource) = 0 ;
	virtual HRESULT __stdcall GetTimeSource(/* out */ _di_IE_IMFPresentationTimeSource &ppTimeSource) = 0 ;
	virtual HRESULT __stdcall GetTime(/* out */ __int64 &phnsClockTime) = 0 ;
	virtual HRESULT __stdcall AddClockStateSink(_di_IE_IMFClockStateSink pStateSink) = 0 ;
	virtual HRESULT __stdcall RemoveClockStateSink(_di_IE_IMFClockStateSink pStateSink) = 0 ;
	virtual HRESULT __stdcall Start(__int64 llClockStartOffset) = 0 ;
	virtual HRESULT __stdcall Stop() = 0 ;
	virtual HRESULT __stdcall Pause() = 0 ;
};

__interface  INTERFACE_UUID("{6EF2A660-47C0-4666-B13D-CBB717F2FA2C}") IE_IMFMediaSink  : public System::IInterface 
{
	virtual HRESULT __stdcall GetCharacteristics(/* out */ unsigned &pdwCharacteristics) = 0 ;
	virtual HRESULT __stdcall AddStreamSink(unsigned dwStreamSinkIdentifier, _di_IE_IMFMediaType pMediaType, /* out */ _di_IE_IMFStreamSink &ppStreamSink) = 0 ;
	virtual HRESULT __stdcall RemoveStreamSink(unsigned dwStreamSinkIdentifier) = 0 ;
	virtual HRESULT __stdcall GetStreamSinkCount(/* out */ unsigned &pcStreamSinkCount) = 0 ;
	virtual HRESULT __stdcall GetStreamSinkByIndex(unsigned dwIndex, /* out */ _di_IE_IMFStreamSink &ppStreamSink) = 0 ;
	virtual HRESULT __stdcall GetStreamSinkById(unsigned dwStreamSinkIdentifier, /* out */ _di_IE_IMFStreamSink &ppStreamSink) = 0 ;
	virtual HRESULT __stdcall SetPresentationClock(_di_IE_IMFPresentationClock pPresentationClock) = 0 ;
	virtual HRESULT __stdcall GetPresentationClock(/* out */ _di_IE_IMFPresentationClock &ppPresentationClock) = 0 ;
	virtual HRESULT __stdcall Shutdown() = 0 ;
};

__interface  INTERFACE_UUID("{5BC8A76B-869A-46A3-9B03-FA218A66AEBE}") IE_IMFCollection  : public System::IInterface 
{
	virtual HRESULT __stdcall GetElementCount(/* out */ unsigned &pcElements) = 0 ;
	virtual HRESULT __stdcall GetElement(unsigned dwElementIndex, /* out */ System::_di_IInterface &ppUnkElement) = 0 ;
	virtual HRESULT __stdcall AddElement(System::_di_IInterface pUnkElement) = 0 ;
	virtual HRESULT __stdcall RemoveElement(unsigned dwElementIndex, /* out */ System::_di_IInterface &ppUnkElement) = 0 ;
	virtual HRESULT __stdcall InsertElementAt(unsigned dwIndex, System::_di_IInterface pUnknown) = 0 ;
	virtual HRESULT __stdcall RemoveAllElements() = 0 ;
};

struct DECLSPEC_DRECORD IE_MFT_INPUT_STREAM_INFO
{
public:
	__int64 hnsMaxLatency;
	unsigned dwFlags;
	unsigned cbSize;
	unsigned cbMaxLookahead;
	unsigned cbAlignment;
};


struct DECLSPEC_DRECORD IE_MFT_OUTPUT_STREAM_INFO
{
public:
	unsigned dwFlags;
	unsigned cbSize;
	unsigned cbAlignment;
};


struct DECLSPEC_DRECORD IE_MFT_OUTPUT_DATA_BUFFER
{
public:
	unsigned dwStreamID;
	_di_IE_IMFSample pSample;
	unsigned dwStatus;
	_di_IE_IMFCollection pEvents;
};


typedef IE_MFT_OUTPUT_DATA_BUFFER *PIE_MFT_OUTPUT_DATA_BUFFER;

__interface  INTERFACE_UUID("{BF94C121-5B05-4E6F-8000-BA598961414D}") IE_IMFTransform  : public System::IInterface 
{
	virtual HRESULT __stdcall GetStreamLimits(/* out */ unsigned &pdwInputMinimum, /* out */ unsigned &pdwInputMaximum, /* out */ unsigned &pdwOutputMinimum, /* out */ unsigned &pdwOutputMaximum) = 0 ;
	virtual HRESULT __stdcall GetStreamCount(/* out */ unsigned &pcInputStreams, /* out */ unsigned &pcOutputStreams) = 0 ;
	virtual HRESULT __stdcall GetStreamIDs(unsigned dwInputIDArraySize, /* out */ unsigned &pdwInputIDs, unsigned dwOutputIDArraySize, /* out */ unsigned &pdwOutputIDs) = 0 ;
	virtual HRESULT __stdcall GetInputStreamInfo(unsigned dwInputStreamID, /* out */ IE_MFT_INPUT_STREAM_INFO &pStreamInfo) = 0 ;
	virtual HRESULT __stdcall GetOutputStreamInfo(unsigned dwOutputStreamID, /* out */ IE_MFT_OUTPUT_STREAM_INFO &pStreamInfo) = 0 ;
	virtual HRESULT __stdcall GetAttributes(/* out */ _di_IE_IMFAttributes &pAttributes) = 0 ;
	virtual HRESULT __stdcall GetInputStreamAttributes(unsigned dwInputStreamID, /* out */ _di_IE_IMFAttributes &pAttributes) = 0 ;
	virtual HRESULT __stdcall GetOutputStreamAttributes(unsigned dwOutputStreamID, /* out */ _di_IE_IMFAttributes &pAttributes) = 0 ;
	virtual HRESULT __stdcall DeleteInputStream(unsigned dwStreamID) = 0 ;
	virtual HRESULT __stdcall AddInputStreams(unsigned cStreams, unsigned* adwStreamIDs) = 0 ;
	virtual HRESULT __stdcall GetInputAvailableType(unsigned dwInputStreamID, unsigned dwTypeIndex, /* out */ _di_IE_IMFMediaType &ppType) = 0 ;
	virtual HRESULT __stdcall GetOutputAvailableType(unsigned dwOutputStreamID, unsigned dwTypeIndex, /* out */ _di_IE_IMFMediaType &ppType) = 0 ;
	virtual HRESULT __stdcall SetInputType(unsigned dwInputStreamID, _di_IE_IMFMediaType pType, unsigned dwFlags) = 0 ;
	virtual HRESULT __stdcall SetOutputType(unsigned dwOutputStreamID, _di_IE_IMFMediaType pType, unsigned dwFlags) = 0 ;
	virtual HRESULT __stdcall GetInputCurrentType(unsigned dwInputStreamID, /* out */ _di_IE_IMFMediaType &ppType) = 0 ;
	virtual HRESULT __stdcall GetOutputCurrentType(unsigned dwOutputStreamID, /* out */ _di_IE_IMFMediaType &ppType) = 0 ;
	virtual HRESULT __stdcall GetInputStatus(unsigned dwInputStreamID, /* out */ unsigned &pdwFlags) = 0 ;
	virtual HRESULT __stdcall GetOutputStatus(/* out */ unsigned &pdwFlags) = 0 ;
	virtual HRESULT __stdcall SetOutputBounds(__int64 hnsLowerBound, __int64 hnsUpperBound) = 0 ;
	virtual HRESULT __stdcall ProcessEvent(unsigned dwInputStreamID, _di_IE_IMFMediaEvent pEvent) = 0 ;
	virtual HRESULT __stdcall ProcessMessage(unsigned eMessage, NativeInt ulParam) = 0 ;
	virtual HRESULT __stdcall ProcessInput(unsigned dwInputStreamID, _di_IE_IMFSample pSample, unsigned dwFlags) = 0 ;
	virtual HRESULT __stdcall ProcessOutput(unsigned dwFlags, unsigned cOutputBufferCount, PIE_MFT_OUTPUT_DATA_BUFFER pOutputSamples, unsigned &pdwStatus) = 0 ;
};

__interface  INTERFACE_UUID("{E7E9984F-F09F-4DA4-903F-6E2E0EFE56B5}") IE_IWMResamplerProps  : public System::IInterface 
{
	virtual HRESULT __stdcall SetHalfFilterLength(int lhalfFilterLen) = 0 ;
	virtual HRESULT __stdcall SetUserChannelMtx(Winapi::Windows::PSingle userChannelMtx) = 0 ;
};

__interface  INTERFACE_UUID("{7B981CF0-560E-4116-9875-B099895F23D7}") IE_IMFSourceReaderEx  : public IE_IMFSourceReader 
{
	virtual HRESULT __stdcall SetNativeMediaType(unsigned dwStreamIndex, _di_IE_IMFMediaType pMediaType, /* out */ unsigned &pdwStreamFlags) = 0 ;
	virtual HRESULT __stdcall AddTransformForStream(unsigned dwStreamIndex, System::_di_IInterface pTransformOrActivate) = 0 ;
	virtual HRESULT __stdcall RemoveAllTransformsForStream(unsigned dwStreamIndex) = 0 ;
	virtual HRESULT __stdcall GetTransformForStream(unsigned dwStreamIndex, unsigned dwTransformIndex, /* out */ GUID &pGuidCategory, /* out */ _di_IE_IMFTransform &ppTransform) = 0 ;
};

#pragma pack(push,1)
struct DECLSPEC_DRECORD IE_MFRECT
{
public:
	int left;
	int top;
	int right;
	int bottom;
};
#pragma pack(pop)


__interface  INTERFACE_UUID("{A3F675D5-6119-4F7F-A100-1D8B280F0EFB}") IE_IMFVideoProcessorControl  : public System::IInterface 
{
	virtual HRESULT __stdcall SetBorderColor() = 0 ;
	virtual HRESULT __stdcall SetSourceRectangle(IE_MFRECT &pSrcRect) = 0 ;
	virtual HRESULT __stdcall SetDestinationRectangle(IE_MFRECT &pDstRect) = 0 ;
	virtual HRESULT __stdcall SetMirror(unsigned eMirror) = 0 ;
	virtual HRESULT __stdcall SetRotation(unsigned eRotation) = 0 ;
	virtual HRESULT __stdcall SetConstrictionSize() = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEMFDeviceList : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Hyiedefs::TPointerArray *m_devices;
	unsigned m_devicesCount;
	bool m_populated;
	System::Classes::TStringList* m_names;
	
public:
	__fastcall TIEMFDeviceList();
	__fastcall virtual ~TIEMFDeviceList();
	void __fastcall Clear();
	void __fastcall Populate();
	__property bool Populated = {read=m_populated, nodefault};
	int __fastcall GetCount();
	System::WideString __fastcall GetName(int index);
	_di_IE_IMFActivate __fastcall GetDevice(int index);
	System::Classes::TStringList* __fastcall GetNames();
};

#pragma pack(pop)

__interface IIEMFCallbackHandler  : public System::IInterface 
{
	virtual HRESULT __fastcall OnReadSample(HRESULT hrStatus, unsigned dwStreamIndex, unsigned dwStreamFlags, __int64 llTimestamp, _di_IE_IMFSample pSample) = 0 ;
	virtual HRESULT __fastcall OnFlush(unsigned dwStreamIndex) = 0 ;
	virtual HRESULT __fastcall OnEvent(unsigned dwStreamIndex, _di_IE_IMFMediaEvent pEvent) = 0 ;
};

class PASCALIMPLEMENTATION TIEMFReceivedSample : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	_di_IE_IMFSample Sample;
	unsigned StreamIndex;
	unsigned StreamFlags;
	__int64 TimeStamp;
	_di_IE_IMFMediaType MediaType;
	System::WideString StreamType;
	__fastcall TIEMFReceivedSample(_di_IE_IMFSample sample, unsigned streamIndex, unsigned streamFlags, __int64 timeStamp, _di_IE_IMFMediaType mediaType);
	__fastcall virtual ~TIEMFReceivedSample();
	bool __fastcall DecodeSample(Iexbitmaps::TIEBitmap* destBitmap);
};


enum DECLSPEC_DENUM TIEMediaFoundationSourceReaderCallbackEventType : unsigned char { mfrceONREADSAMPLE, mfrceONFLUSH, mfrceONEVENT };

typedef HRESULT __fastcall (__closure *TIEMediaFoundationSourceReaderCallbackEvent)(TIEMediaFoundationSourceReaderCallbackEventType event, HRESULT hrStatus, unsigned dwStreamIndex, unsigned dwStreamFlags, __int64 llTimestamp, _di_IE_IMFSample pSample, _di_IE_IMFMediaEvent pEvent);

class PASCALIMPLEMENTATION TIEMediaFoundationSourceReaderCallback : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	TIEMediaFoundationSourceReaderCallbackEvent m_onCallBack;
	
protected:
	HRESULT __stdcall OnReadSample(HRESULT hrStatus, unsigned dwStreamIndex, unsigned dwStreamFlags, __int64 llTimestamp, _di_IE_IMFSample pSample);
	HRESULT __stdcall OnFlush(unsigned dwStreamIndex);
	HRESULT __stdcall OnEvent(unsigned dwStreamIndex, _di_IE_IMFMediaEvent pEvent);
	
public:
	__fastcall TIEMediaFoundationSourceReaderCallback(TIEMediaFoundationSourceReaderCallbackEvent OnCallBack);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TIEMediaFoundationSourceReaderCallback() { }
	
private:
	void *__IE_IMFSourceReaderCallback;	// IE_IMFSourceReaderCallback 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {DEEC8D99-FA1D-4D82-84C2-2C8969944867}
	operator _di_IE_IMFSourceReaderCallback()
	{
		_di_IE_IMFSourceReaderCallback intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IE_IMFSourceReaderCallback*(void) { return (IE_IMFSourceReaderCallback*)&__IE_IMFSourceReaderCallback; }
	#endif
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEMediaFoundationVideoSampleDecoder : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	virtual System::WideString __fastcall GetSubType() = 0 ;
	virtual bool __fastcall Decode(unsigned width, unsigned height, int stride, void * buffer, unsigned bufferLen, Iexbitmaps::TIEBitmap* destBitmap) = 0 ;
public:
	/* TObject.Create */ inline __fastcall TIEMediaFoundationVideoSampleDecoder() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TIEMediaFoundationVideoSampleDecoder() { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{70E06CBA-1727-402B-857A-CC3679EDDC26}") IIEMediaFoundationReaderNotifyReceiver  : public System::IInterface 
{
	virtual void __fastcall ReceiveNotify(System::TObject* sender, Hyiedefs::TIEMediaFountationNotifyType notifyType, unsigned dwStreamIndex, unsigned dwStreamFlags, __int64 llTimestamp, _di_IE_IMFSample pSample, _di_IE_IMFMediaType mediaType, _di_IE_IMFMediaEvent pEvent) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEMediaFoundationReaderWindowNotifyReceiver : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	NativeUInt m_notifyWindow;
	unsigned m_notifyMessage;
	
public:
	__fastcall TIEMediaFoundationReaderWindowNotifyReceiver(NativeUInt notifyWindow, unsigned notifyMessage);
	__fastcall virtual ~TIEMediaFoundationReaderWindowNotifyReceiver();
	void __fastcall ReceiveNotify(System::TObject* sender, Hyiedefs::TIEMediaFountationNotifyType notifyType, unsigned dwStreamIndex, unsigned dwStreamFlags, __int64 llTimestamp, _di_IE_IMFSample pSample, _di_IE_IMFMediaType mediaType, _di_IE_IMFMediaEvent pEvent);
private:
	void *__IIEMediaFoundationReaderNotifyReceiver;	// IIEMediaFoundationReaderNotifyReceiver 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {70E06CBA-1727-402B-857A-CC3679EDDC26}
	operator _di_IIEMediaFoundationReaderNotifyReceiver()
	{
		_di_IIEMediaFoundationReaderNotifyReceiver intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IIEMediaFoundationReaderNotifyReceiver*(void) { return (IIEMediaFoundationReaderNotifyReceiver*)&__IIEMediaFoundationReaderNotifyReceiver; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEMediaFoundationAudioResampler : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	_di_IE_IMFTransform m_transform;
	unsigned m_outputBufferSize;
	
public:
	__fastcall TIEMediaFoundationAudioResampler();
	__fastcall virtual ~TIEMediaFoundationAudioResampler();
	bool __fastcall SetInputMediaType(_di_IE_IMFMediaType mediaType);
	bool __fastcall SetOutputMediaType(_di_IE_IMFMediaType mediaType);
	void __fastcall Start();
	void __fastcall Stop();
	bool __fastcall PushSample(_di_IE_IMFSample sample);
	_di_IE_IMFSample __fastcall GetSample();
};

#pragma pack(pop)

enum DECLSPEC_DENUM TIEMediaFoundationAudioRendererRole : unsigned char { iemfarrECONSOLE, iemfarrEMULTIMEDIA, iemfarrECOMMUNICATIONS };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEMediaFoundationAudioRenderer : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	_di_IE_IMFMediaSink m_mediaSink;
	_di_IE_IMFStreamSink m_streamSink;
	_di_IE_IMFPresentationClock m_presentationClock;
	unsigned m_streamIndex;
	TIEMediaFoundationAudioResampler* m_resampler;
	
public:
	__fastcall TIEMediaFoundationAudioRenderer(unsigned streamIndex, TIEMediaFoundationAudioRendererRole role);
	__fastcall virtual ~TIEMediaFoundationAudioRenderer();
	bool __fastcall SetMediaType(_di_IE_IMFMediaType mediaType);
	void __fastcall ReceiveNotify(System::TObject* sender, Hyiedefs::TIEMediaFountationNotifyType notifyType, unsigned dwStreamIndex, unsigned dwStreamFlags, __int64 llTimestamp, _di_IE_IMFSample pSample, _di_IE_IMFMediaType mediaType, _di_IE_IMFMediaEvent pEvent);
private:
	void *__IIEMediaFoundationReaderNotifyReceiver;	// IIEMediaFoundationReaderNotifyReceiver 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {70E06CBA-1727-402B-857A-CC3679EDDC26}
	operator _di_IIEMediaFoundationReaderNotifyReceiver()
	{
		_di_IIEMediaFoundationReaderNotifyReceiver intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IIEMediaFoundationReaderNotifyReceiver*(void) { return (IIEMediaFoundationReaderNotifyReceiver*)&__IIEMediaFoundationReaderNotifyReceiver; }
	#endif
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TIEMediaFoundationVideoProcessorMirror : unsigned char { mfpmNone, mfpmHorizontal, mfpmVertical };

enum DECLSPEC_DENUM TIEMediaFoundationVideoProcessorRotation : unsigned char { mfprNone, mfprNormal };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEMediaFoundationVideoProcessor : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	_di_IE_IMFTransform m_transform;
	_di_IE_IMFVideoProcessorControl m_control;
	unsigned m_outputBufferSize;
	bool m_started;
	_di_IE_IMFMediaBuffer m_mediaBuffer;
	bool __fastcall GetIsAvailable();
	
protected:
	bool __fastcall SetInputMediaType(_di_IE_IMFMediaType mediaType);
	bool __fastcall SetOutputMediaType(_di_IE_IMFMediaType mediaType);
	_di_IE_IMFMediaType __fastcall GetOutputMediaType();
	void __fastcall Start();
	void __fastcall Stop();
	__property bool Started = {read=m_started, nodefault};
	bool __fastcall PushSample(_di_IE_IMFSample sample)/* overload */;
	bool __fastcall PushSample(void * buffer, int bufferLen)/* overload */;
	_di_IE_IMFSample __fastcall GetSample()/* overload */;
	void __fastcall GetSample(void * destBuffer)/* overload */;
	
public:
	__fastcall TIEMediaFoundationVideoProcessor();
	__fastcall virtual ~TIEMediaFoundationVideoProcessor();
	__property bool IsAvailable = {read=GetIsAvailable, nodefault};
	void __fastcall SetSourceRectangle(const System::Types::TRect &rect);
	void __fastcall SetDestinationRectangle(const System::Types::TRect &rect);
	void __fastcall SetMirror(TIEMediaFoundationVideoProcessorMirror mirror);
	void __fastcall SetRotation(TIEMediaFoundationVideoProcessorRotation rotation);
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TIEMediaFoundationSourceReader : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Syncobjs::TCriticalSection* m_lock;
	bool m_isAvailable;
	TIEMFDeviceList* m_videoInputs;
	System::Classes::TInterfaceList* m_notifyReceivers;
	bool m_capturing;
	System::Contnrs::TObjectList* m_receivedSamples;
	__int64 m_firstTimeStamp;
	bool m_delayFramePost;
	int m_frameRequested;
	_di_IE_IMFMediaSource m_source;
	_di_IE_IMFSourceReader m_sourceReader;
	System::Contnrs::TObjectList* m_streams;
	System::Contnrs::TObjectList* m_selectedMediaType;
	_di_IE_IMFActivate m_selectedActivate;
	__int64 m_duration;
	TIEMediaFoundationVideoProcessor* m_videoProcessor;
	int m_samplesBufferSize;
	bool m_discardAudioSamples;
	
protected:
	void __fastcall PopulateStreams();
	void __fastcall PopulateSelectedMediaType();
	int __fastcall GetStreamCount();
	__int64 __fastcall GetDuration();
	System::Classes::TStringList* __fastcall GetVideoInputs();
	void __fastcall CheckVideoInputsPopulated();
	void __fastcall CheckVideoInputIndex(int index);
	bool __fastcall IsAsyncMode();
	TIEMFReceivedSample* __fastcall AddReceivedSample(TIEMFReceivedSample* sample);
	TIEMFReceivedSample* __fastcall PopReceivedSample(unsigned streamIndex);
	void __fastcall ClearReceivedSamples();
	HRESULT __fastcall SourceReaderCallback(TIEMediaFoundationSourceReaderCallbackEventType event, HRESULT hrStatus, unsigned dwStreamIndex, unsigned dwStreamFlags, __int64 llTimestamp, _di_IE_IMFSample pSample, _di_IE_IMFMediaEvent pEvent);
	bool __fastcall ReadSample(unsigned streamIndex)/* overload */;
	TIEMFReceivedSample* __fastcall ReadSample(System::WideString streamType)/* overload */;
	void __fastcall DrainSamples();
	bool __fastcall SetInput(_di_IE_IMFActivate activate);
	void __fastcall SendNotify(Hyiedefs::TIEMediaFountationNotifyType notifyType, unsigned dwStreamIndex, unsigned dwStreamFlags, __int64 llTimestamp, _di_IE_IMFSample pSample, _di_IE_IMFMediaType mediaType, _di_IE_IMFMediaEvent pEvent);
	_di_IE_IMFMediaType __fastcall GetCurrentMediaTypeIntf(int streamIndex)/* overload */;
	_di_IE_IMFMediaType __fastcall GetCurrentMediaTypeIntf(System::WideString streamType)/* overload */;
	bool __fastcall GetCapturing();
	void __fastcall DoVideoProcessing(_di_IE_IMFMediaType &mediaType, _di_IE_IMFSample &sample);
	void __fastcall SetupVideoProcessing();
	void __fastcall FinalizeVideoProcessing();
	TIEMediaFoundationVideoProcessor* __fastcall GetVideoProcessor();
	void __fastcall SetSamplesBufferSize(int value);
	
public:
	__fastcall TIEMediaFoundationSourceReader();
	__fastcall virtual ~TIEMediaFoundationSourceReader();
	void __fastcall Lock();
	void __fastcall Unlock();
	__property bool IsAvailable = {read=m_isAvailable, nodefault};
	void __fastcall PushNotifyReceiver(_di_IIEMediaFoundationReaderNotifyReceiver notifyReceiver);
	void __fastcall PopNotifyReceiver();
	void __fastcall ClearNotifyReceivers();
	__property System::Classes::TStringList* VideoInputs = {read=GetVideoInputs};
	void __fastcall UpdateVideoInputs();
	bool __fastcall SetVideoInput(int index)/* overload */;
	bool __fastcall SetVideoInput(System::WideString name)/* overload */;
	bool __fastcall SetFileInput(System::WideString filename);
	bool __fastcall SetURLInput(System::WideString URL);
	__property int StreamCount = {read=GetStreamCount, nodefault};
	int __fastcall IndexOfFirstStream(System::WideString streamType);
	System::WideString __fastcall GetStreamType(int streamIndex);
	void __fastcall SetSelectedStreams(int streamIndex, bool selected)/* overload */;
	void __fastcall SetSelectedStreams(System::WideString streamType, bool selected)/* overload */;
	int __fastcall GetMediaTypesCount(int streamIndex)/* overload */;
	int __fastcall GetMediaTypesCount(System::WideString streamType)/* overload */;
	Hyieutils::TIEDictionary* __fastcall GetMediaType(int streamIndex, int mediaTypeIndex)/* overload */;
	Hyieutils::TIEDictionary* __fastcall GetMediaType(System::WideString streamType, int mediaTypeIndex)/* overload */;
	bool __fastcall SelectMediaType(int streamIndex, int mediaTypeIndex)/* overload */;
	bool __fastcall SelectMediaType(System::WideString streamType, int mediaTypeIndex)/* overload */;
	bool __fastcall SetMediaTypeCustom(int streamIndex, System::WideString jsonDescription)/* overload */;
	bool __fastcall SetMediaTypeCustom(System::WideString streamType, System::WideString jsonDescription)/* overload */;
	bool __fastcall SetMediaTypeVideo(int streamIndex, System::WideString subTypeStr, int frameWidth = 0x0, int frameHeight = 0x0, double frameRate = 0.000000E+00, System::WideString videoLighting = System::WideString())/* overload */;
	bool __fastcall SetMediaTypeVideo(System::WideString subTypeStr, int frameWidth = 0x0, int frameHeight = 0x0, double frameRate = 0.000000E+00, System::WideString videoLighting = System::WideString())/* overload */;
	bool __fastcall SetMediaTypeAudio(int streamIndex, System::WideString subTypeStr)/* overload */;
	bool __fastcall SetMediaTypeAudio(System::WideString subTypeStr)/* overload */;
	Hyieutils::TIEDictionary* __fastcall GetCurrentMediaType(int streamIndex)/* overload */;
	Hyieutils::TIEDictionary* __fastcall GetCurrentMediaType(System::WideString streamType)/* overload */;
	void __fastcall SetPosition(__int64 position);
	__property __int64 Duration = {read=m_duration};
	bool __fastcall StartCapture();
	bool __fastcall PauseCapture();
	void __fastcall ResumeCapture();
	void __fastcall StopCapture();
	void __fastcall Flush();
	__property bool Capturing = {read=GetCapturing, nodefault};
	TIEMFReceivedSample* __fastcall GetNextSample();
	__property int SamplesBufferSize = {read=m_samplesBufferSize, write=SetSamplesBufferSize, nodefault};
	__property bool DiscardAudioSamples = {read=m_discardAudioSamples, write=m_discardAudioSamples, nodefault};
	__property TIEMediaFoundationVideoProcessor* VideoProcessor = {read=GetVideoProcessor};
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE GUID IE_IMF2DBuffer_GUID;
extern DELPHI_PACKAGE GUID IE_IMFMediaSource_GUID;
extern DELPHI_PACKAGE GUID IE_IMFPresentationTimeSource_GUID;
extern DELPHI_PACKAGE GUID IE_IMFTransform_GUID;
extern DELPHI_PACKAGE GUID IE_IWMResamplerProps_GUID;
extern DELPHI_PACKAGE GUID IE_IMFSourceReaderEx_GUID;
extern DELPHI_PACKAGE GUID IE_IMFVideoProcessorControl_GUID;
extern DELPHI_PACKAGE System::WideString IEMAJORTYPE_DICT_KEY;
extern DELPHI_PACKAGE System::WideString IESUBTYPE_DICT_KEY;
extern DELPHI_PACKAGE System::WideString IECOMPRESSED_DICT_KEY;
extern DELPHI_PACKAGE System::WideString IEAVGBITRATE_DICT_KEY;
extern DELPHI_PACKAGE System::WideString IEDEFAULTSTRIDE_DICT_KEY;
extern DELPHI_PACKAGE System::WideString IEFRAMERATE_DICT_KEY;
extern DELPHI_PACKAGE System::WideString IEFRAMERATEMAX_DICT_KEY;
extern DELPHI_PACKAGE System::WideString IEFRAMERATEMIN_DICT_KEY;
extern DELPHI_PACKAGE System::WideString IEFRAMEWIDTH_DICT_KEY;
extern DELPHI_PACKAGE System::WideString IEFRAMEHEIGHT_DICT_KEY;
extern DELPHI_PACKAGE System::WideString IEINTERLACEMODE_DICT_KEY;
extern DELPHI_PACKAGE System::WideString IEVIDEOLIGHTING_DICT_KEY;
extern DELPHI_PACKAGE System::WideString IEAUDIOBITSPERSAMPLE_DICT_KEY;
extern DELPHI_PACKAGE System::WideString IEAUDIOFLOATSAMPLESPERSECOND_DICT_KEY;
extern DELPHI_PACKAGE System::WideString IEAUDIONUMCHANNELS_DICT_KEY;
extern DELPHI_PACKAGE System::WideString IEAUDIOSAMPLESPERSECOND_DICT_KEY;
extern DELPHI_PACKAGE System::WideString IEAUDIOBLOCKALIGNMENT_DICT_KEY;
extern DELPHI_PACKAGE System::WideString IEALLSAMPLESINDEPENDENT_DICT_KEY;
extern DELPHI_PACKAGE System::WideString IEAUDIOPREFERWAVEFORMATEX_DICT_KEY;
extern DELPHI_PACKAGE System::WideString IEAUDIOAVGBYTESPERSECOND_DICT_KEY;
extern DELPHI_PACKAGE System::WideString IEVIDEOROTATION_DICT_KEY;
extern DELPHI_PACKAGE System::WideString IEPIXELASPECTRATIO_DICT_KEY;
extern DELPHI_PACKAGE System::WideString IESOURCECONTENTHINT_DICT_KEY;
#define mmf_ANY_STREAM L"Any"
#define mmf_VIDEO_STREAM L"Video"
#define mmf_AUDIO_STREAM L"Audio"
#define mmf_PROTECTED_STREAM L"Protected"
#define mmf_SAMI_STREAM L"SAMI"
#define mmf_SCRIPT_STREAM L"Script"
#define mmf_IMAGE_STREAM L"Image"
#define mmf_HTML_STREAM L"HTML"
#define mmf_BINARY_STREAM L"Binary"
#define mmf_FILETRANSFER_STREAM L"FileTransfer"
#define mmf_VideoFormat_RGB8 L"RGB8"
#define mmf_VideoFormat_RGB555 L"RGB555"
#define mmf_VideoFormat_RGB565 L"RGB565"
#define mmf_VideoFormat_RGB24 L"RGB24"
#define mmf_VideoFormat_RGB32 L"RGB32"
#define mmf_VideoFormat_ARGB32 L"ARGB32"
#define mmf_AudioFormat_PCM L"PCM"
#define mmf_AudioFormat_Float L"Float"
#define mmf_AudioFormat_DTS L"DTS"
#define mmf_AudioFormat_Dolby_AC3_SPDIF L"Dolby_AC3_SPDIF"
#define mmf_AudioFormat_DRM L"DRM"
#define mmf_AudioFormat_WMAudioV8 L"WMAudioV8"
#define mmf_AudioFormat_WMAudioV9 L"WMAudioV9"
#define mmf_AudioFormat_WMAudio_Lossless L"WMAudio_Lossless"
#define mmf_AudioFormat_WMASPDIF L"WMASPDIF"
#define mmf_AudioFormat_MSP1 L"MSP1"
#define mmf_AudioFormat_MP3 L"MP3"
#define mmf_AudioFormat_MPEG L"MPEG"
#define mmf_AudioFormat_AAC L"AAC"
#define mmf_AudioFormat_ADTS L"ADTS"
extern DELPHI_PACKAGE System::Contnrs::TObjectList* __fastcall IEMediaFoundationGetVideoSampleDecoders(void);
extern DELPHI_PACKAGE System::UnicodeString __fastcall IEMediaFoundationTimeToStr(__int64 time);
extern DELPHI_PACKAGE double __fastcall IEMediaFoundationTimeToSec(__int64 time);
extern DELPHI_PACKAGE __int64 __fastcall IESecToMediaFoundationTime(double sec);
}	/* namespace Iemmf */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_IEMMF)
using namespace Iemmf;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// IemmfHPP
