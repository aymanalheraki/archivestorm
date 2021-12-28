// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'iewia.pas' rev: 35.00 (Windows)

#ifndef IewiaHPP
#define IewiaHPP

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
#include <Vcl.ComCtrls.hpp>
#include <iexBitmaps.hpp>
#include <Winapi.ActiveX.hpp>

//-- user supplied -----------------------------------------------------------

namespace Iewia
{
//-- forward type declarations -----------------------------------------------
struct WIA_DATA_CALLBACK_HEADER;
__interface DELPHIINTERFACE IWiaDataCallback;
typedef System::DelphiInterface<IWiaDataCallback> _di_IWiaDataCallback;
struct WIA_DATA_TRANSFER_INFO;
class DELPHICLASS TWiaDataCallBack;
__interface DELPHIINTERFACE IWiaEventCallback;
typedef System::DelphiInterface<IWiaEventCallback> _di_IWiaEventCallback;
class DELPHICLASS TWiaEventCallBack;
__interface DELPHIINTERFACE IWiaDataTransfer;
typedef System::DelphiInterface<IWiaDataTransfer> _di_IWiaDataTransfer;
__interface DELPHIINTERFACE IEnumWiaItem;
typedef System::DelphiInterface<IEnumWiaItem> _di_IEnumWiaItem;
__interface DELPHIINTERFACE IWiaItem;
typedef System::DelphiInterface<IWiaItem> _di_IWiaItem;
__interface DELPHIINTERFACE IWiaPropertyStorage;
typedef System::DelphiInterface<IWiaPropertyStorage> _di_IWiaPropertyStorage;
__interface DELPHIINTERFACE IEnumWIA_DEV_INFO;
typedef System::DelphiInterface<IEnumWIA_DEV_INFO> _di_IEnumWIA_DEV_INFO;
__interface DELPHIINTERFACE IWiaDevMgr;
typedef System::DelphiInterface<IWiaDevMgr> _di_IWiaDevMgr;
class DELPHICLASS TIEWiaDeviceInfo;
class DELPHICLASS TIEWiaItem;
struct TIEWProcessingInfo;
class DELPHICLASS TIEWiaValues;
class DELPHICLASS TIEWia;
//-- type declarations -------------------------------------------------------
struct DECLSPEC_DRECORD WIA_DATA_CALLBACK_HEADER
{
public:
	int lSize;
	GUID guidFormatID;
	int lBufferSize;
	int lPageCount;
};


typedef WIA_DATA_CALLBACK_HEADER *PWIA_DATA_CALLBACK_HEADER;

typedef bool __fastcall (__closure *TIEWGetPage)(PWIA_DATA_CALLBACK_HEADER header, void * data, int datalen);

__interface  INTERFACE_UUID("{A558A866-A5B0-11D2-A08F-00C04F72DC3C}") IWiaDataCallback  : public System::IInterface 
{
	virtual HRESULT __stdcall BandedDataCallback(int lMessage, int lStatus, int lPercentComplete, int lOffset, int lLength, int lReserved, int lResLength, System::PByte pbBuffer) = 0 ;
};

struct DECLSPEC_DRECORD WIA_DATA_TRANSFER_INFO
{
public:
	unsigned ulSize;
	unsigned ulSection;
	unsigned ulBufferSize;
	System::LongBool bDoubleBuffer;
	unsigned ulReserved1;
	unsigned ulReserved2;
	unsigned ulReserved3;
};


typedef WIA_DATA_TRANSFER_INFO *PWIA_DATA_TRANSFER_INFO;

typedef bool __fastcall (__closure *TIEWiaOnProgress)(int percentage);

class PASCALIMPLEMENTATION TWiaDataCallBack : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
public:
	WIA_DATA_CALLBACK_HEADER header;
	System::Byte *data;
	int datalen;
	TIEWGetPage OnGetPage;
	TIEWiaOnProgress OnProgress;
	HRESULT __stdcall BandedDataCallback(int lMessage, int lStatus, int lPercentComplete, int lOffset, int lLength, int lReserved, int lResLength, System::PByte pbBuffer);
	__fastcall TWiaDataCallBack();
	__fastcall virtual ~TWiaDataCallBack();
private:
	void *__IWiaDataCallback;	// IWiaDataCallback 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {A558A866-A5B0-11D2-A08F-00C04F72DC3C}
	operator _di_IWiaDataCallback()
	{
		_di_IWiaDataCallback intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IWiaDataCallback*(void) { return (IWiaDataCallback*)&__IWiaDataCallback; }
	#endif
	
};


typedef TWiaDataCallBack* *PWiaDataCallBAck;

__interface  INTERFACE_UUID("{AE6287B0-0084-11D2-973B-00A0C9068F2E}") IWiaEventCallback  : public System::IInterface 
{
	virtual HRESULT __stdcall ImageEventCallback(System::PGUID pEventGUID, System::WideChar * bstrEventDescription, System::WideChar * bstrDeviceID, System::WideChar * bstrDeviceDescription, unsigned dwDeviceType, System::WideChar * bstrFullItemName, unsigned &pulEventType, unsigned ulReserved) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TWiaEventCallBack : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
public:
	System::TObject* WIA;
	HRESULT __stdcall ImageEventCallback(System::PGUID pEventGUID, System::WideChar * bstrEventDescription, System::WideChar * bstrDeviceID, System::WideChar * bstrDeviceDescription, unsigned dwDeviceType, System::WideChar * bstrFullItemName, unsigned &pulEventType, unsigned ulReserved);
	__fastcall TWiaEventCallBack(System::TObject* inWIA);
	__fastcall virtual ~TWiaEventCallBack();
private:
	void *__IWiaEventCallback;	// IWiaEventCallback 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {AE6287B0-0084-11D2-973B-00A0C9068F2E}
	operator _di_IWiaEventCallback()
	{
		_di_IWiaEventCallback intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IWiaEventCallback*(void) { return (IWiaEventCallback*)&__IWiaEventCallback; }
	#endif
	
};

#pragma pack(pop)

typedef TWiaEventCallBack* *PWiaEventCallBAck;

__interface  INTERFACE_UUID("{A6CEF998-A5B0-11D2-A08F-00C04F72DC3C}") IWiaDataTransfer  : public System::IInterface 
{
	virtual HRESULT __stdcall idtGetData() = 0 ;
	virtual HRESULT __stdcall idtGetBandedData(PWIA_DATA_TRANSFER_INFO pWiaDataTransInfo, _di_IWiaDataCallback pIWiaDataCallback) = 0 ;
	virtual HRESULT __stdcall idtQueryGetData() = 0 ;
	virtual HRESULT __stdcall idtEnumWIA_FORMAT_INFO() = 0 ;
	virtual HRESULT __stdcall idtGetExtendedTransferInfo() = 0 ;
};

__interface  INTERFACE_UUID("{5E8383FC-3391-11D2-9A33-00C04FA36145}") IEnumWiaItem  : public System::IInterface 
{
	virtual HRESULT __stdcall Next(int celt, /* out */ _di_IWiaItem &ppIWiaItem, int &pceltFetched) = 0 ;
	virtual HRESULT __stdcall Skip() = 0 ;
	virtual HRESULT __stdcall Reset() = 0 ;
	virtual HRESULT __stdcall Clone() = 0 ;
	virtual HRESULT __stdcall GetCount() = 0 ;
};

typedef System::StaticArray<System::_di_IInterface, 1> TIWiaItemArray;

typedef TIWiaItemArray *PIWiaItemArray;

__interface  INTERFACE_UUID("{4DB1AD10-3391-11D2-9A33-00C04FA36145}") IWiaItem  : public System::IInterface 
{
	virtual HRESULT __stdcall GetItemType(int &pItemType) = 0 ;
	virtual HRESULT __stdcall AnalyzeItem(int lFlags) = 0 ;
	virtual HRESULT __stdcall EnumChildItems(/* out */ _di_IEnumWiaItem &ppIEnumWiaItem) = 0 ;
	virtual HRESULT __stdcall DeleteItem(int lFlags) = 0 ;
	virtual HRESULT __stdcall CreateChildItem() = 0 ;
	virtual HRESULT __stdcall EnumRegisterEventInfo() = 0 ;
	virtual HRESULT __stdcall FindItemByName() = 0 ;
	virtual HRESULT __stdcall DeviceDlg(HWND hwndParent, int lFlags, int lIntent, /* out */ int &plItemCount, /* out */ PIWiaItemArray &ppIWiaItem) = 0 ;
	virtual HRESULT __stdcall DeviceCommand(int lFlags, System::PGUID pCmdGUID, _di_IWiaItem &pIWiaItem) = 0 ;
	virtual HRESULT __stdcall GetRootItem() = 0 ;
	virtual HRESULT __stdcall EnumDeviceCapabilities() = 0 ;
	virtual HRESULT __stdcall DumpItemData() = 0 ;
	virtual HRESULT __stdcall DumpDrvItemData() = 0 ;
	virtual HRESULT __stdcall DumpTreeItemData() = 0 ;
	virtual HRESULT __stdcall Diagnostic() = 0 ;
};

__interface  INTERFACE_UUID("{98B5E8A0-29CC-491A-AAC0-E6DB4FDCCEB6}") IWiaPropertyStorage  : public System::IInterface 
{
	virtual HRESULT __stdcall ReadMultiple(int cpspec, void * rgpspec, void * rgpropvar) = 0 ;
	virtual HRESULT __stdcall WriteMultiple(int cpspec, void * rgpspec, void * rgpropvar, int propidNameFirst) = 0 ;
	virtual HRESULT __stdcall DeleteMultiple() = 0 ;
	virtual HRESULT __stdcall ReadPropertyNames(int cpropid, void * rgpspec, System::WideChar * &name) = 0 ;
	virtual HRESULT __stdcall WritePropertyNames() = 0 ;
	virtual HRESULT __stdcall DeletePropertyNames() = 0 ;
	virtual HRESULT __stdcall Commit() = 0 ;
	virtual HRESULT __stdcall Revert() = 0 ;
	virtual HRESULT __stdcall Enum() = 0 ;
	virtual HRESULT __stdcall SetTimes() = 0 ;
	virtual HRESULT __stdcall SetClass() = 0 ;
	virtual HRESULT __stdcall Stat() = 0 ;
	virtual HRESULT __stdcall GetPropertyAttributes(int cpspec, void * rgpspec, int &rgflags, void * rgpropvar) = 0 ;
	virtual HRESULT __stdcall GetCount() = 0 ;
	virtual HRESULT __stdcall GetPropertyStream() = 0 ;
	virtual HRESULT __stdcall SetPropertyStream() = 0 ;
};

__interface  INTERFACE_UUID("{5E38B83C-8CF1-11D1-BF92-0060081ED811}") IEnumWIA_DEV_INFO  : public System::IInterface 
{
	virtual HRESULT __stdcall Next(int celt, /* out */ _di_IWiaPropertyStorage &rgelt, int &pceltFetched) = 0 ;
	virtual HRESULT __stdcall Skip() = 0 ;
	virtual HRESULT __stdcall Reset() = 0 ;
	virtual HRESULT __stdcall Clone() = 0 ;
	virtual HRESULT __stdcall GetCount(int &celt) = 0 ;
};

typedef _di_IEnumWIA_DEV_INFO *PIEnumWIA_DEV_INFO;

typedef PIEnumWIA_DEV_INFO *PPIEnumWIA_DEV_INFO;

__interface  INTERFACE_UUID("{5EB2502A-8CF1-11D1-BF92-0060081ED811}") IWiaDevMgr  : public System::IInterface 
{
	virtual HRESULT __stdcall EnumDeviceInfo(int lFlag, /* out */ _di_IEnumWIA_DEV_INFO &ppIEnum) = 0 ;
	virtual HRESULT __stdcall CreateDevice(System::WideString bstrDeviceID, /* out */ _di_IWiaItem &ppWiaItemRoot) = 0 ;
	virtual HRESULT __stdcall SelectDeviceDlg() = 0 ;
	virtual HRESULT __stdcall SelectDeviceDlgID(HWND hwndParent, int lDeviceType, int lFlags, System::WideChar * &pbstrDeviceID) = 0 ;
	virtual HRESULT __stdcall GetImageDlg() = 0 ;
	virtual HRESULT __stdcall RegisterEventCallbackProgram() = 0 ;
	virtual HRESULT __stdcall RegisterEventCallbackInterface(int lFlags, System::WideChar * bstrDeviceID, System::PGUID pEventGUID, _di_IWiaEventCallback pIWiaEventCallback, System::_di_IInterface &pEventObject) = 0 ;
	virtual HRESULT __stdcall RegisterEventCallbackCLSID() = 0 ;
	virtual HRESULT __stdcall AddDeviceDlg() = 0 ;
};

typedef _di_IWiaDevMgr IID_IWiaDevMgr;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEWiaDeviceInfo : public System::TObject
{
	typedef System::TObject inherited;
	
	
private:
	enum DECLSPEC_DENUM _TIEWiaDeviceInfo__1 : unsigned char { iewScanner, iewDigitalCamera, iewStreamingVideo };
	
	
public:
	System::UnicodeString Name;
	System::UnicodeString ID;
	_TIEWiaDeviceInfo__1 DeviceType;
	System::UnicodeString DriverVersion;
	System::UnicodeString PortName;
	System::UnicodeString ServerName;
	System::UnicodeString Vendor;
public:
	/* TObject.Create */ inline __fastcall TIEWiaDeviceInfo() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TIEWiaDeviceInfo() { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM Iewia__4 : unsigned char { witFree, witImage, witFile, witFolder, witRoot, witAnalyze, witAudio, witDevice, witDeleted, witDisconnected, witHPanorama, witVPanorama, witBurst, witStorage, witTransfer, witGenerated, witHasAttachments, witVideo, witTwainCapabilityPassThrough, witRemoved, witMask };

typedef System::Set<Iewia__4, Iewia__4::witFree, Iewia__4::witMask> TIEWiaItemType;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEWiaItem : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	_di_IWiaItem This;
	System::Classes::TList* Children;
	TIEWiaItemType ItemType;
	__fastcall TIEWiaItem();
	__fastcall virtual ~TIEWiaItem();
};

#pragma pack(pop)

struct DECLSPEC_DRECORD TIEWProcessingInfo
{
public:
	int DPIX;
	int DPIY;
};


enum DECLSPEC_DENUM Iewia__6 : unsigned char { iewaRead, iewaWrite, iewaSyncRequired, iewaNone, iewaRange, iewaList, iewaFlag, iewaCacheable };

typedef System::Set<Iewia__6, Iewia__6::iewaRead, Iewia__6::iewaCacheable> TIEWiaAttrib;

typedef System::StaticArray<System::Variant, 67108864> variantarray;

typedef variantarray *pvariantarray;

class PASCALIMPLEMENTATION TIEWiaValues : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	variantarray *fValues;
	System::Variant __fastcall GetValues(int idx);
	
public:
	System::Variant max;
	System::Variant min;
	int count;
	System::Variant normal;
	System::Variant step;
	__fastcall TIEWiaValues();
	__fastcall virtual ~TIEWiaValues();
	__property System::Variant values[int idx] = {read=GetValues};
};


enum DECLSPEC_DENUM TIETransferFormat : unsigned char { ietfDefault, ietfBitmap, ietfJpeg, ietfRawBitmap };

enum DECLSPEC_DENUM TIEWiaEvent : unsigned char { ieeNone, ieeTreeUpdated, ieeItemCreated, ieeItemDeleted };

class PASCALIMPLEMENTATION TIEWia : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	bool fOLEInitialized;
	_di_IWiaDevMgr fIWiaDevMgr;
	System::Classes::TList* fDevicesInfo;
	TIEWiaItem* fRoot;
	System::Classes::TComponent* fOwner;
	Iexbitmaps::TIEMultiCallBack fMultiCallBack;
	System::_di_IInterface fEventCallBack1;
	System::_di_IInterface fEventCallBack2;
	System::_di_IInterface fEventCallBack3;
	TIEWiaOnProgress fOnProgress;
	bool fTakePicture;
	bool fDeleteTakenPicture;
	System::UnicodeString fSaveTransferBufferAs;
	TIETransferFormat fTransferFormat;
	int fCurrentIndex;
	System::Classes::TNotifyEvent fItemsTreeUpdated;
	TIEWiaEvent fLastEvent;
	void __fastcall FillDevices();
	void __fastcall FillItemChildren(TIEWiaItem* parent);
	TIEWiaDeviceInfo* __fastcall GetDevicesInfo(int idx);
	int __fastcall GetDevicesInfoCount();
	void __fastcall EmptyDeviceInfo();
	TIEWiaItem* __fastcall GetRoot();
	bool __fastcall GetPage(PWIA_DATA_CALLBACK_HEADER header, void * data, int datalen);
	void __fastcall CheckConnectToDefault();
	bool __fastcall ConnectToEx(int idx, bool bMakeWiaDefault);
	bool __fastcall GetDefaultItem(TIEWiaItem* &item, bool LastItem);
	void __fastcall DoItemsTreeUpdated();
	void __fastcall ClearRootItems();
	
public:
	Iexbitmaps::TIEBitmap* ProcessingBitmap;
	TIEWProcessingInfo ProcessingInfo;
	__fastcall TIEWia(System::Classes::TComponent* Owner);
	__fastcall virtual ~TIEWia();
	__property TIEWiaDeviceInfo* DevicesInfo[int idx] = {read=GetDevicesInfo};
	__property int DevicesInfoCount = {read=GetDevicesInfoCount, nodefault};
	bool __fastcall ConnectToUsingDialog();
	__property int ConnectedDeviceIndex = {read=fCurrentIndex, nodefault};
	__property TIEWiaItem* Device = {read=GetRoot};
	void __fastcall UpdateItems();
	bool __fastcall ConnectTo(int Idx = 0x0)/* overload */;
	bool __fastcall ConnectTo(const System::UnicodeString sName)/* overload */;
	bool __fastcall ShowAcquireDialog(bool SystemDialog = false);
	bool __fastcall Transfer(TIEWiaItem* item = (TIEWiaItem*)(0x0), bool MultiPage = false);
	__property bool TakePicture = {read=fTakePicture, write=fTakePicture, nodefault};
	__property bool DeleteTakenPicture = {read=fDeleteTakenPicture, write=fDeleteTakenPicture, nodefault};
	__property TIEWiaOnProgress OnProgress = {read=fOnProgress, write=fOnProgress};
	__property Iexbitmaps::TIEMultiCallBack OnGetPage = {read=fMultiCallBack, write=fMultiCallBack};
	__property System::Classes::TNotifyEvent OnItemsTreeUpdated = {read=fItemsTreeUpdated, write=fItemsTreeUpdated};
	__property TIEWiaEvent LastEvent = {read=fLastEvent, nodefault};
	System::Variant __fastcall GetDeviceProperty(unsigned PropId);
	bool __fastcall SetDeviceProperty(unsigned PropId, int val);
	bool __fastcall SetItemProperty(unsigned PropId, int val, TIEWiaItem* item = (TIEWiaItem*)(0x0));
	bool __fastcall SetDevicePropertyVariant(unsigned PropId, const System::Variant &val);
	bool __fastcall SetItemPropertyVariant(unsigned PropId, const System::Variant &val, TIEWiaItem* item = (TIEWiaItem*)(0x0));
	System::Variant __fastcall GetItemProperty(unsigned PropId, TIEWiaItem* item = (TIEWiaItem*)(0x0));
	void __fastcall GetItemPropertyAttrib(unsigned PropId, TIEWiaItem* item, TIEWiaAttrib &attrib, TIEWiaValues* &values);
	void __fastcall FillTreeView(Vcl::Comctrls::TTreeNodes* Items, bool IncludeDescription);
	__property System::UnicodeString SaveTransferBufferAs = {read=fSaveTransferBufferAs, write=fSaveTransferBufferAs};
	__property TIETransferFormat TransferFormat = {read=fTransferFormat, write=fTransferFormat, nodefault};
	bool __fastcall GetItemThumbnail(TIEWiaItem* item, Iexbitmaps::TIEBitmap* destBitmap);
	void __fastcall DeleteItem(TIEWiaItem* item);
	bool __fastcall IsItemDeleted(TIEWiaItem* item);
	int __fastcall SourceNameToIndex(const System::UnicodeString sName);
	void __fastcall Refresh();
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE GUID WiaImgFmt_UNDEFINED;
extern DELPHI_PACKAGE GUID WiaImgFmt_RAWRGB;
extern DELPHI_PACKAGE GUID WiaImgFmt_MEMORYBMP;
extern DELPHI_PACKAGE GUID WiaImgFmt_BMP;
extern DELPHI_PACKAGE GUID WiaImgFmt_EMF;
extern DELPHI_PACKAGE GUID WiaImgFmt_WMF;
extern DELPHI_PACKAGE GUID WiaImgFmt_JPEG;
extern DELPHI_PACKAGE GUID WiaImgFmt_PNG;
extern DELPHI_PACKAGE GUID WiaImgFmt_GIF;
extern DELPHI_PACKAGE GUID WiaImgFmt_TIFF;
extern DELPHI_PACKAGE GUID WiaImgFmt_EXIF;
extern DELPHI_PACKAGE GUID WiaImgFmt_PHOTOCD;
extern DELPHI_PACKAGE GUID WiaImgFmt_FLASHPIX;
extern DELPHI_PACKAGE GUID WiaImgFmt_ICO;
extern DELPHI_PACKAGE GUID WiaImgFmt_CIFF;
extern DELPHI_PACKAGE GUID WiaImgFmt_PICT;
extern DELPHI_PACKAGE GUID WiaImgFmt_JPEG2K;
extern DELPHI_PACKAGE GUID WiaImgFmt_JPEG2KX;
extern DELPHI_PACKAGE GUID WiaImgFmt_RTF;
extern DELPHI_PACKAGE GUID WiaImgFmt_XML;
extern DELPHI_PACKAGE GUID WiaImgFmt_HTML;
extern DELPHI_PACKAGE GUID WiaImgFmt_TXT;
extern DELPHI_PACKAGE GUID WiaImgFmt_MPG;
extern DELPHI_PACKAGE GUID WiaImgFmt_AVI;
extern DELPHI_PACKAGE GUID WiaImgFmt_ASF;
extern DELPHI_PACKAGE GUID WiaImgFmt_SCRIPT;
extern DELPHI_PACKAGE GUID WiaImgFmt_EXEC;
extern DELPHI_PACKAGE GUID WiaImgFmt_UNICODE16;
extern DELPHI_PACKAGE GUID WiaImgFmt_DPOF;
extern DELPHI_PACKAGE GUID WiaAudFmt_WAV;
extern DELPHI_PACKAGE GUID WiaAudFmt_MP3;
extern DELPHI_PACKAGE GUID WiaAudFmt_AIFF;
extern DELPHI_PACKAGE GUID WiaAudFmt_WMA;
static const System::Int8 WIA_DIP_DEV_ID = System::Int8(0x2);
static const System::Int8 WIA_DIP_DEV_NAME = System::Int8(0x7);
static const System::Int8 WIA_DIP_SERVER_NAME = System::Int8(0x8);
static const System::Int8 WIA_DIP_DEV_DESC = System::Int8(0x4);
static const System::Int8 WIA_DIP_DEV_TYPE = System::Int8(0x5);
static const System::Int8 WIA_DIP_DRIVER_VERSION = System::Int8(0xf);
static const System::Int8 WIA_DIP_PORT_NAME = System::Int8(0x6);
static const System::Int8 WIA_DIP_VEND_DESC = System::Int8(0x3);
static const System::Int8 StiDeviceTypeDefault = System::Int8(0x0);
static const System::Int8 StiDeviceTypeScanner = System::Int8(0x1);
static const System::Int8 StiDeviceTypeDigitalCamera = System::Int8(0x2);
static const System::Int8 StiDeviceTypeStreamingVideo = System::Int8(0x3);
static const System::Int8 WiaItemTypeFree = System::Int8(0x0);
static const System::Int8 WiaItemTypeImage = System::Int8(0x1);
static const System::Int8 WiaItemTypeFile = System::Int8(0x2);
static const System::Int8 WiaItemTypeFolder = System::Int8(0x4);
static const System::Int8 WiaItemTypeRoot = System::Int8(0x8);
static const System::Int8 WiaItemTypeAnalyze = System::Int8(0x10);
static const System::Int8 WiaItemTypeAudio = System::Int8(0x20);
static const System::Int8 WiaItemTypeDevice = System::Int8(0x40);
static const System::Byte WiaItemTypeDeleted = System::Byte(0x80);
static const System::Word WiaItemTypeDisconnected = System::Word(0x100);
static const System::Word WiaItemTypeHPanorama = System::Word(0x200);
static const System::Word WiaItemTypeVPanorama = System::Word(0x400);
static const System::Word WiaItemTypeBurst = System::Word(0x800);
static const System::Word WiaItemTypeStorage = System::Word(0x1000);
static const System::Word WiaItemTypeTransfer = System::Word(0x2000);
static const System::Word WiaItemTypeGenerated = System::Word(0x4000);
static const System::Word WiaItemTypeHasAttachments = System::Word(0x8000);
static const int WiaItemTypeVideo = int(0x10000);
static const int WiaItemTypeTwainCapabilityPassThrough = int(0x20000);
static const unsigned WiaItemTypeRemoved = unsigned(0x80000000);
static const unsigned WiaItemTypeMask = unsigned(0x8003ffff);
static const System::Int8 TYMED_HGLOBAL = System::Int8(0x1);
static const System::Int8 TYMED_FILE = System::Int8(0x2);
static const System::Int8 TYMED_ISTREAM = System::Int8(0x4);
static const System::Int8 TYMED_ISTORAGE = System::Int8(0x8);
static const System::Int8 TYMED_GDI = System::Int8(0x10);
static const System::Int8 TYMED_MFPICT = System::Int8(0x20);
static const System::Int8 TYMED_ENHMF = System::Int8(0x40);
static const System::Int8 TYMED_NULL = System::Int8(0x0);
static const System::Int8 IT_MSG_DATA_HEADER = System::Int8(0x1);
static const System::Int8 IT_MSG_DATA = System::Int8(0x2);
static const System::Int8 IT_MSG_STATUS = System::Int8(0x3);
static const System::Int8 IT_MSG_TERMINATION = System::Int8(0x4);
static const System::Int8 IT_MSG_NEW_PAGE = System::Int8(0x5);
static const System::Int8 IT_MSG_FILE_PREVIEW_DATA = System::Int8(0x6);
static const System::Int8 IT_MSG_FILE_PREVIEW_DATA_HEADER = System::Int8(0x7);
static const System::Byte WIA_TYMED_CALLBACK = System::Byte(0x80);
static const System::Word WIA_TYMED_MULTIPAGE_FILE = System::Word(0x100);
static const System::Word WIA_TYMED_MULTIPAGE_CALLBACK = System::Word(0x200);
static const System::Word WIA_RESERVED_FOR_NEW_PROPS = System::Word(0x400);
static const System::Int8 WIA_DIP_FIRST = System::Int8(0x2);
static const System::Word WIA_DPA_FIRST = System::Word(0x402);
static const System::Word WIA_DPC_FIRST = System::Word(0x802);
static const System::Word WIA_DPS_FIRST = System::Word(0xc02);
static const System::Word WIA_IPA_FIRST = System::Word(0x1002);
static const System::Word WIA_IPC_FIRST = System::Word(0x1402);
static const System::Int8 WIA_DIP_REMOTE_DEV_ID = System::Int8(0x9);
static const System::Int8 WIA_DIP_UI_CLSID = System::Int8(0xa);
static const System::Int8 WIA_DIP_HW_CONFIG = System::Int8(0xb);
static const System::Int8 WIA_DIP_BAUDRATE = System::Int8(0xc);
static const System::Int8 WIA_DIP_STI_GEN_CAPABILITIES = System::Int8(0xd);
static const System::Int8 WIA_DIP_WIA_VERSION = System::Int8(0xe);
static const System::Word WIA_DPA_FIRMWARE_VERSION = System::Word(0x402);
static const System::Word WIA_DPA_CONNECT_STATUS = System::Word(0x403);
static const System::Word WIA_DPA_DEVICE_TIME = System::Word(0x404);
static const System::Word WIA_DPA_LAST = System::Word(0x405);
static const System::Word WIA_IPS_FIRST = System::Word(0x1802);
static const System::Word WIA_IPS_CUR_INTENT = System::Word(0x1802);
static const System::Word WIA_IPS_XRES = System::Word(0x1803);
static const System::Word WIA_IPS_YRES = System::Word(0x1804);
static const System::Word WIA_IPS_XPOS = System::Word(0x1805);
static const System::Word WIA_IPS_YPOS = System::Word(0x1806);
static const System::Word WIA_IPS_XEXTENT = System::Word(0x1807);
static const System::Word WIA_IPS_YEXTENT = System::Word(0x1808);
static const System::Word WIA_IPS_PHOTOMETRIC_INTERP = System::Word(0x1809);
static const System::Word WIA_IPS_BRIGHTNESS = System::Word(0x180a);
static const System::Word WIA_IPS_CONTRAST = System::Word(0x180b);
static const System::Word WIA_IPS_ORIENTATION = System::Word(0x180c);
static const System::Word WIA_IPS_ROTATION = System::Word(0x180d);
static const System::Word WIA_IPS_MIRROR = System::Word(0x180e);
static const System::Word WIA_IPS_THRESHOLD = System::Word(0x180f);
static const System::Word WIA_IPS_INVERT = System::Word(0x1810);
static const System::Word WIA_IPS_WARM_UP_TIME = System::Word(0x1811);
static const System::Word WIA_DPS_HORIZONTAL_BED_SIZE = System::Word(0xc02);
static const System::Word WIA_DPS_VERTICAL_BED_SIZE = System::Word(0xc03);
static const System::Word WIA_DPS_HORIZONTAL_SHEET_FEED_SIZE = System::Word(0xc04);
static const System::Word WIA_DPS_VERTICAL_SHEET_FEED_SIZE = System::Word(0xc05);
static const System::Word WIA_DPS_SHEET_FEEDER_REGISTRATION = System::Word(0xc06);
static const System::Word WIA_DPS_HORIZONTAL_BED_REGISTRATION = System::Word(0xc07);
static const System::Word WIA_DPS_VERTICAL_BED_REGISTRATION = System::Word(0xc08);
static const System::Word WIA_DPS_PLATEN_COLOR = System::Word(0xc09);
static const System::Word WIA_DPS_PAD_COLOR = System::Word(0xc0a);
static const System::Word WIA_DPS_FILTER_SELECT = System::Word(0xc0b);
static const System::Word WIA_DPS_DITHER_SELECT = System::Word(0xc0c);
static const System::Word WIA_DPS_DITHER_PATTERN_DATA = System::Word(0xc0d);
static const System::Word WIA_DPS_DOCUMENT_HANDLING_CAPABILITIES = System::Word(0xc0e);
static const System::Word WIA_DPS_DOCUMENT_HANDLING_STATUS = System::Word(0xc0f);
static const System::Word WIA_DPS_DOCUMENT_HANDLING_SELECT = System::Word(0xc10);
static const System::Word WIA_DPS_DOCUMENT_HANDLING_CAPACITY = System::Word(0xc11);
static const System::Word WIA_DPS_OPTICAL_XRES = System::Word(0xc12);
static const System::Word WIA_DPS_OPTICAL_YRES = System::Word(0xc13);
static const System::Word WIA_DPS_ENDORSER_CHARACTERS = System::Word(0xc14);
static const System::Word WIA_DPS_ENDORSER_STRING = System::Word(0xc15);
static const System::Word WIA_DPS_SCAN_AHEAD_PAGES = System::Word(0xc16);
static const System::Word WIA_DPS_MAX_SCAN_TIME = System::Word(0xc17);
static const System::Word WIA_DPS_PAGES = System::Word(0xc18);
static const System::Word WIA_DPS_PAGE_SIZE = System::Word(0xc19);
static const System::Word WIA_DPS_PAGE_WIDTH = System::Word(0xc1a);
static const System::Word WIA_DPS_PAGE_HEIGHT = System::Word(0xc1b);
static const System::Word WIA_DPS_PREVIEW = System::Word(0xc1c);
static const System::Word WIA_DPS_TRANSPARENCY = System::Word(0xc1d);
static const System::Word WIA_DPS_TRANSPARENCY_SELECT = System::Word(0xc1e);
static const System::Word WIA_DPS_SHOW_PREVIEW_CONTROL = System::Word(0xc1f);
static const System::Word WIA_DPS_MIN_HORIZONTAL_SHEET_FEED_SIZE = System::Word(0xc20);
static const System::Word WIA_DPS_MIN_VERTICAL_SHEET_FEED_SIZE = System::Word(0xc21);
static const System::Word WIA_IPA_ITEM_NAME = System::Word(0x1002);
static const System::Word WIA_IPA_FULL_ITEM_NAME = System::Word(0x1003);
static const System::Word WIA_IPA_ITEM_TIME = System::Word(0x1004);
static const System::Word WIA_IPA_ITEM_FLAGS = System::Word(0x1005);
static const System::Word WIA_IPA_ACCESS_RIGHTS = System::Word(0x1006);
static const System::Word WIA_IPA_DATATYPE = System::Word(0x1007);
static const System::Word WIA_IPA_DEPTH = System::Word(0x1008);
static const System::Word WIA_IPA_PREFERRED_FORMAT = System::Word(0x1009);
static const System::Word WIA_IPA_FORMAT = System::Word(0x100a);
static const System::Word WIA_IPA_COMPRESSION = System::Word(0x100b);
static const System::Word WIA_IPA_TYMED = System::Word(0x100c);
static const System::Word WIA_IPA_CHANNELS_PER_PIXEL = System::Word(0x100d);
static const System::Word WIA_IPA_BITS_PER_CHANNEL = System::Word(0x100e);
static const System::Word WIA_IPA_PLANAR = System::Word(0x100f);
static const System::Word WIA_IPA_PIXELS_PER_LINE = System::Word(0x1010);
static const System::Word WIA_IPA_BYTES_PER_LINE = System::Word(0x1011);
static const System::Word WIA_IPA_NUMBER_OF_LINES = System::Word(0x1012);
static const System::Word WIA_IPA_GAMMA_CURVES = System::Word(0x1013);
static const System::Word WIA_IPA_ITEM_SIZE = System::Word(0x1014);
static const System::Word WIA_IPA_COLOR_PROFILE = System::Word(0x1015);
static const System::Word WIA_IPA_MIN_BUFFER_SIZE = System::Word(0x1016);
static const System::Word WIA_IPA_BUFFER_SIZE = System::Word(0x1016);
static const System::Word WIA_IPA_REGION_TYPE = System::Word(0x1017);
static const System::Word WIA_IPA_ICM_PROFILE_NAME = System::Word(0x1018);
static const System::Word WIA_IPA_APP_COLOR_MAPPING = System::Word(0x1019);
static const System::Word WIA_IPA_PROP_STREAM_COMPAT_ID = System::Word(0x101a);
static const System::Word WIA_IPA_FILENAME_EXTENSION = System::Word(0x101b);
static const System::Word WIA_IPA_SUPPRESS_PROPERTY_PAGE = System::Word(0x101c);
static const System::Word WIA_IPA_LAST = System::Word(0x101c);
static const System::Word WIA_DPC_PICTURES_TAKEN = System::Word(0x802);
static const System::Word WIA_DPC_PICTURES_REMAINING = System::Word(0x803);
static const System::Word WIA_DPC_EXPOSURE_MODE = System::Word(0x804);
static const System::Word WIA_DPC_EXPOSURE_COMP = System::Word(0x805);
static const System::Word WIA_DPC_EXPOSURE_TIME = System::Word(0x806);
static const System::Word WIA_DPC_FNUMBER = System::Word(0x807);
static const System::Word WIA_DPC_FLASH_MODE = System::Word(0x808);
static const System::Word WIA_DPC_FOCUS_MODE = System::Word(0x809);
static const System::Word WIA_DPC_FOCUS_MANUAL_DIST = System::Word(0x80a);
static const System::Word WIA_DPC_ZOOM_POSITION = System::Word(0x80b);
static const System::Word WIA_DPC_PAN_POSITION = System::Word(0x80c);
static const System::Word WIA_DPC_TILT_POSITION = System::Word(0x80d);
static const System::Word WIA_DPC_TIMER_MODE = System::Word(0x80e);
static const System::Word WIA_DPC_TIMER_VALUE = System::Word(0x80f);
static const System::Word WIA_DPC_POWER_MODE = System::Word(0x810);
static const System::Word WIA_DPC_BATTERY_STATUS = System::Word(0x811);
static const System::Word WIA_DPC_THUMB_WIDTH = System::Word(0x812);
static const System::Word WIA_DPC_THUMB_HEIGHT = System::Word(0x813);
static const System::Word WIA_DPC_PICT_WIDTH = System::Word(0x814);
static const System::Word WIA_DPC_PICT_HEIGHT = System::Word(0x815);
static const System::Word WIA_DPC_DIMENSION = System::Word(0x816);
static const System::Word WIA_DPC_COMPRESSION_SETTING = System::Word(0x817);
static const System::Word WIA_DPC_FOCUS_METERING = System::Word(0x818);
static const System::Word WIA_DPC_TIMELAPSE_INTERVAL = System::Word(0x819);
static const System::Word WIA_DPC_TIMELAPSE_NUMBER = System::Word(0x81a);
static const System::Word WIA_DPC_BURST_INTERVAL = System::Word(0x81b);
static const System::Word WIA_DPC_BURST_NUMBER = System::Word(0x81c);
static const System::Word WIA_DPC_EFFECT_MODE = System::Word(0x81d);
static const System::Word WIA_DPC_DIGITAL_ZOOM = System::Word(0x81e);
static const System::Word WIA_DPC_SHARPNESS = System::Word(0x81f);
static const System::Word WIA_DPC_CONTRAST = System::Word(0x820);
static const System::Word WIA_DPC_CAPTURE_MODE = System::Word(0x821);
static const System::Word WIA_DPC_CAPTURE_DELAY = System::Word(0x822);
static const System::Word WIA_DPC_EXPOSURE_INDEX = System::Word(0x823);
static const System::Word WIA_DPC_EXPOSURE_METERING_MODE = System::Word(0x824);
static const System::Word WIA_DPC_FOCUS_METERING_MODE = System::Word(0x825);
static const System::Word WIA_DPC_FOCUS_DISTANCE = System::Word(0x826);
static const System::Word WIA_DPC_FOCAL_LENGTH = System::Word(0x827);
static const System::Word WIA_DPC_RGB_GAIN = System::Word(0x828);
static const System::Word WIA_DPC_WHITE_BALANCE = System::Word(0x829);
static const System::Word WIA_DPC_UPLOAD_URL = System::Word(0x82a);
static const System::Word WIA_DPC_ARTIST = System::Word(0x82b);
static const System::Word WIA_DPC_COPYRIGHT_INFO = System::Word(0x82c);
static const System::Word WIA_IPC_THUMBNAIL = System::Word(0x1402);
static const System::Word WIA_IPC_THUMB_WIDTH = System::Word(0x1403);
static const System::Word WIA_IPC_THUMB_HEIGHT = System::Word(0x1404);
static const System::Word WIA_IPC_AUDIO_AVAILABLE = System::Word(0x1405);
static const System::Word WIA_IPC_AUDIO_DATA_FORMAT = System::Word(0x1406);
static const System::Word WIA_IPC_AUDIO_DATA = System::Word(0x1407);
static const System::Word WIA_IPC_NUM_PICT_PER_ROW = System::Word(0x1408);
static const System::Word WIA_IPC_SEQUENCE = System::Word(0x1409);
static const System::Word WIA_IPC_TIMEDELAY = System::Word(0x140a);
static const System::Int8 WIA_WHITEBALANCE_MANUAL = System::Int8(0x1);
static const System::Int8 WIA_WHITEBALANCE_AUTO = System::Int8(0x2);
static const System::Int8 WIA_WHITEBALANCE_ONEPUSH_AUTO = System::Int8(0x3);
static const System::Int8 WIA_WHITEBALANCE_DAYLIGHT = System::Int8(0x4);
static const System::Int8 WIA_WHITEBALANCE_FLORESCENT = System::Int8(0x5);
static const System::Int8 WIA_WHITEBALANCE_TUNGSTEN = System::Int8(0x6);
static const System::Int8 WIA_WHITEBALANCE_FLASH = System::Int8(0x7);
static const System::Int8 WIA_FOCUSMODE_MANUAL = System::Int8(0x1);
static const System::Int8 WIA_FOCUSMODE_AUTO = System::Int8(0x2);
static const System::Int8 WIA_FOCUSMODE_MACROAUTO = System::Int8(0x3);
static const System::Int8 WIA_EXPOSUREMETERING_AVERAGE = System::Int8(0x1);
static const System::Int8 WIA_EXPOSUREMETERING_CENTERWEIGHT = System::Int8(0x2);
static const System::Int8 WIA_EXPOSUREMETERING_MULTISPOT = System::Int8(0x3);
static const System::Int8 WIA_EXPOSUREMETERING_CENTERSPOT = System::Int8(0x4);
static const System::Int8 WIA_FLASHMODE_AUTO = System::Int8(0x1);
static const System::Int8 WIA_FLASHMODE_OFF = System::Int8(0x2);
static const System::Int8 WIA_FLASHMODE_FILL = System::Int8(0x3);
static const System::Int8 WIA_FLASHMODE_REDEYE_AUTO = System::Int8(0x4);
static const System::Int8 WIA_FLASHMODE_REDEYE_FILL = System::Int8(0x5);
static const System::Int8 WIA_FLASHMODE_EXTERNALSYNC = System::Int8(0x6);
static const System::Int8 WIA_EXPOSUREMODE_MANUAL = System::Int8(0x1);
static const System::Int8 WIA_EXPOSUREMODE_AUTO = System::Int8(0x2);
static const System::Int8 WIA_EXPOSUREMODE_APERTURE_PRIORITY = System::Int8(0x3);
static const System::Int8 WIA_EXPOSUREMODE_SHUTTER_PRIORITY = System::Int8(0x4);
static const System::Int8 WIA_EXPOSUREMODE_PROGRAM_CREATIVE = System::Int8(0x5);
static const System::Int8 WIA_EXPOSUREMODE_PROGRAM_ACTION = System::Int8(0x6);
static const System::Int8 WIA_EXPOSUREMODE_PORTRAIT = System::Int8(0x7);
static const System::Int8 WIA_CAPTUREMODE_NORMAL = System::Int8(0x1);
static const System::Int8 WIA_CAPTUREMODE_BURST = System::Int8(0x2);
static const System::Int8 WIA_CAPTUREMODE_TIMELAPSE = System::Int8(0x3);
static const System::Int8 WIA_EFFECTMODE_STANDARD = System::Int8(0x1);
static const System::Int8 WIA_EFFECTMODE_BW = System::Int8(0x2);
static const System::Int8 WIA_EFFECTMODE_SEPIA = System::Int8(0x3);
static const System::Int8 WIA_FOCUSMETERING_CENTERSPOT = System::Int8(0x1);
static const System::Int8 WIA_FOCUSMETERING_MULTISPOT = System::Int8(0x2);
static const System::Int8 WIA_POWERMODE_LINE = System::Int8(0x1);
static const System::Int8 WIA_POWERMODE_BATTERY = System::Int8(0x2);
static const System::Int8 WIA_LEFT_JUSTIFIED = System::Int8(0x0);
static const System::Int8 WIA_CENTERED = System::Int8(0x1);
static const System::Int8 WIA_RIGHT_JUSTIFIED = System::Int8(0x2);
static const System::Int8 WIA_TOP_JUSTIFIED = System::Int8(0x0);
static const System::Int8 WIA_BOTTOM_JUSTIFIED = System::Int8(0x2);
static const System::Int8 WIA_PORTRAIT = System::Int8(0x0);
static const System::Int8 WIA_LANDSCAPE = System::Int8(0x1);
static const System::Int8 WIA_ROT180 = System::Int8(0x2);
static const System::Int8 WIA_ROT270 = System::Int8(0x3);
static const System::Int8 WIA_MIRRORED = System::Int8(0x1);
static const System::Int8 WIA_FEEDER = System::Int8(0x1);
static const System::Int8 WIA_FLATBED = System::Int8(0x2);
static const System::Int8 WIA_DUPLEX = System::Int8(0x4);
static const System::Int8 WIA_FRONT_FIRST = System::Int8(0x8);
static const System::Int8 WIA_BACK_FIRST = System::Int8(0x10);
static const System::Int8 WIA_FRONT_ONLY = System::Int8(0x20);
static const System::Int8 WIA_BACK_ONLY = System::Int8(0x40);
static const System::Byte WIA_NEXT_PAGE = System::Byte(0x80);
static const System::Word WIA_PREFEED = System::Word(0x100);
static const System::Word WIA_AUTO_ADVANCE = System::Word(0x200);
static const System::Int8 WIA_LIGHT_SOURCE_PRESENT_DETECT = System::Int8(0x1);
static const System::Int8 WIA_LIGHT_SOURCE_PRESENT = System::Int8(0x2);
static const System::Int8 WIA_LIGHT_SOURCE_DETECT_READY = System::Int8(0x4);
static const System::Int8 WIA_LIGHT_SOURCE_READY = System::Int8(0x8);
static const System::Int8 WIA_LIGHT_SOURCE_SELECT = System::Int8(0x1);
static const System::Int8 WIA_SCAN_AHEAD_ALL = System::Int8(0x0);
static const System::Int8 WIA_ALL_PAGES = System::Int8(0x0);
static const System::Int8 WIA_FINAL_SCAN = System::Int8(0x0);
static const System::Int8 WIA_PREVIEW_SCAN = System::Int8(0x1);
static const System::Int8 WIA_SHOW_PREVIEW_CONTROL = System::Int8(0x0);
static const System::Int8 WIA_DONT_SHOW_PREVIEW_CONTROL = System::Int8(0x1);
extern DELPHI_PACKAGE System::AnsiString WIA_ENDORSER_TOK_DATE;
extern DELPHI_PACKAGE System::AnsiString WIA_ENDORSER_TOK_TIME;
extern DELPHI_PACKAGE System::AnsiString WIA_ENDORSER_TOK_PAGE_COUNT;
extern DELPHI_PACKAGE System::AnsiString WIA_ENDORSER_TOK_DAY;
extern DELPHI_PACKAGE System::AnsiString WIA_ENDORSER_TOK_MONTH;
extern DELPHI_PACKAGE System::AnsiString WIA_ENDORSER_TOK_YEAR;
static const System::Int8 WIA_PAGE_A4 = System::Int8(0x0);
static const System::Int8 WIA_PAGE_LETTER = System::Int8(0x1);
static const System::Int8 WIA_PAGE_CUSTOM = System::Int8(0x2);
static const System::Int8 WIA_COMPRESSION_NONE = System::Int8(0x0);
static const System::Int8 WIA_COMPRESSION_BI_RLE4 = System::Int8(0x1);
static const System::Int8 WIA_COMPRESSION_BI_RLE8 = System::Int8(0x2);
static const System::Int8 WIA_COMPRESSION_G3 = System::Int8(0x3);
static const System::Int8 WIA_COMPRESSION_G4 = System::Int8(0x4);
static const System::Int8 WIA_COMPRESSION_JPEG = System::Int8(0x5);
static const System::Int8 WIA_PACKED_PIXEL = System::Int8(0x0);
static const System::Int8 WIA_PLANAR = System::Int8(0x1);
static const System::Int8 WIA_DATA_THRESHOLD = System::Int8(0x0);
static const System::Int8 WIA_DATA_DITHER = System::Int8(0x1);
static const System::Int8 WIA_DATA_GRAYSCALE = System::Int8(0x2);
static const System::Int8 WIA_DATA_COLOR = System::Int8(0x3);
static const System::Int8 WIA_DATA_COLOR_THRESHOLD = System::Int8(0x4);
static const System::Int8 WIA_DATA_COLOR_DITHER = System::Int8(0x5);
static const System::Int8 WIA_PROPPAGE_SCANNER_ITEM_GENERAL = System::Int8(0x1);
static const System::Int8 WIA_PROPPAGE_CAMERA_ITEM_GENERAL = System::Int8(0x2);
static const System::Int8 WIA_INTENT_IMAGE_TYPE_COLOR = System::Int8(0x1);
static const System::Int8 WIA_INTENT_IMAGE_TYPE_GRAYSCALE = System::Int8(0x2);
static const System::Int8 WIA_INTENT_IMAGE_TYPE_TEXT = System::Int8(0x4);
static const System::Int8 WIA_INTENT_IMAGE_TYPE_MASK = System::Int8(0xf);
static const int WIA_INTENT_MINIMIZE_SIZE = int(0x10000);
static const int WIA_INTENT_MAXIMIZE_QUALITY = int(0x20000);
static const int WIA_INTENT_BEST_PREVIEW = int(0x40000);
static const int WIA_INTENT_SIZE_MASK = int(0xf0000);
static const System::Int8 WIA_PHOTO_WHITE_1 = System::Int8(0x0);
static const System::Int8 WIA_PHOTO_WHITE_0 = System::Int8(0x1);
static const System::Int8 WIA_RANGE_MIN = System::Int8(0x0);
static const System::Int8 WIA_RANGE_NOM = System::Int8(0x1);
static const System::Int8 WIA_RANGE_MAX = System::Int8(0x2);
static const System::Int8 WIA_RANGE_STEP = System::Int8(0x3);
static const System::Int8 WIA_RANGE_NUM_ELEMS = System::Int8(0x4);
static const System::Int8 WIA_LIST_COUNT = System::Int8(0x0);
static const System::Int8 WIA_LIST_NOM = System::Int8(0x1);
static const System::Int8 WIA_LIST_VALUES = System::Int8(0x2);
static const System::Int8 WIA_LIST_NUM_ELEMS = System::Int8(0x2);
static const System::Int8 WIA_FLAG_NOM = System::Int8(0x0);
static const System::Int8 WIA_FLAG_VALUES = System::Int8(0x1);
static const System::Int8 WIA_FLAG_NUM_ELEMS = System::Int8(0x2);
static const System::Int8 WIA_PROP_READ = System::Int8(0x1);
static const System::Int8 WIA_PROP_WRITE = System::Int8(0x2);
static const System::Int8 WIA_PROP_RW = System::Int8(0x3);
static const System::Int8 WIA_PROP_SYNC_REQUIRED = System::Int8(0x4);
static const System::Int8 WIA_PROP_NONE = System::Int8(0x8);
static const System::Int8 WIA_PROP_RANGE = System::Int8(0x10);
static const System::Int8 WIA_PROP_LIST = System::Int8(0x20);
static const System::Int8 WIA_PROP_FLAG = System::Int8(0x40);
static const int WIA_PROP_CACHEABLE = int(0x10000);
static const System::Byte WIA_ITEM_CAN_BE_DELETED = System::Byte(0x80);
static const System::Int8 WIA_ITEM_READ = System::Int8(0x1);
static const System::Int8 WIA_ITEM_WRITE = System::Int8(0x2);
static const System::Byte WIA_ITEM_RD = System::Byte(0x81);
static const System::Byte WIA_ITEM_RWD = System::Byte(0x83);
static const System::Int8 WIA_DEVICE_NOT_CONNECTED = System::Int8(0x0);
static const System::Int8 WIA_DEVICE_CONNECTED = System::Int8(0x1);
static const System::Int8 WIA_FEED = System::Int8(0x1);
static const System::Int8 WIA_FLAT = System::Int8(0x2);
static const System::Int8 WIA_DUP = System::Int8(0x4);
static const System::Int8 WIA_DETECT_FLAT = System::Int8(0x8);
static const System::Int8 WIA_DETECT_SCAN = System::Int8(0x10);
static const System::Int8 WIA_DETECT_FEED = System::Int8(0x20);
static const System::Int8 WIA_DETECT_DUP = System::Int8(0x40);
static const System::Byte WIA_DETECT_FEED_AVAIL = System::Byte(0x80);
static const System::Word WIA_DETECT_DUP_AVAIL = System::Word(0x100);
static const System::Int8 WIA_FEED_READY = System::Int8(0x1);
static const System::Int8 WIA_FLAT_READY = System::Int8(0x2);
static const System::Int8 WIA_DUP_READY = System::Int8(0x4);
static const System::Int8 WIA_FLAT_COVER_UP = System::Int8(0x8);
static const System::Int8 WIA_PATH_COVER_UP = System::Int8(0x10);
static const System::Int8 WIA_PAPER_JAM = System::Int8(0x20);
}	/* namespace Iewia */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_IEWIA)
using namespace Iewia;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// IewiaHPP
