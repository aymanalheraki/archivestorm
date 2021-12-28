// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'iexWPD.pas' rev: 35.00 (Windows)

#ifndef IexwpdHPP
#define IexwpdHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.ActiveX.hpp>
#include <System.Win.ComObj.hpp>
#include <Vcl.ComCtrls.hpp>
#include <System.Classes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Iexwpd
{
//-- forward type declarations -----------------------------------------------
struct TIEPortableDevice;
struct TIEWPDObject;
struct TIEWPDObjectAdvancedProps;
class DELPHICLASS TIEPortableDevices;
//-- type declarations -------------------------------------------------------
typedef void __fastcall (__closure *TIEPortableDeviceLogEvent)(System::TObject* Sender, const System::UnicodeString sMsg);

enum DECLSPEC_DENUM TWPDDeviceTypes : unsigned char { WPD_DEVICE_TYPE_GENERIC, WPD_DEVICE_TYPE_CAMERA, WPD_DEVICE_TYPE_MEDIA_PLAYER, WPD_DEVICE_TYPE_PHONE, WPD_DEVICE_TYPE_VIDEO, WPD_DEVICE_TYPE_PERSONAL_INFORMATION_MANAGER, WPD_DEVICE_TYPE_AUDIO_RECORDER };

enum DECLSPEC_DENUM TWPDObjectFormat : unsigned char { _WPD_OBJECT_FORMAT_3GP, _WPD_OBJECT_FORMAT_AAC, _WPD_OBJECT_FORMAT_ABSTRACT_CONTACT, _WPD_OBJECT_FORMAT_ABSTRACT_CONTACT_GROUP, _WPD_OBJECT_FORMAT_ABSTRACT_MEDIA_CAST, _WPD_OBJECT_FORMAT_AIFF, _WPD_OBJECT_FORMAT_ALL, _WPD_OBJECT_FORMAT_ASF, _WPD_OBJECT_FORMAT_ASXPLAYLIST, _WPD_OBJECT_FORMAT_AUDIBLE, _WPD_OBJECT_FORMAT_AVI, _WPD_OBJECT_FORMAT_BMP, _WPD_OBJECT_FORMAT_CIFF, _WPD_OBJECT_FORMAT_DPOF, _WPD_OBJECT_FORMAT_EXECUTABLE, _WPD_OBJECT_FORMAT_EXIF, _WPD_OBJECT_FORMAT_FLAC, _WPD_OBJECT_FORMAT_FLASHPIX, _WPD_OBJECT_FORMAT_GIF, _WPD_OBJECT_FORMAT_HTML, _WPD_OBJECT_FORMAT_ICALENDAR, _WPD_OBJECT_FORMAT_ICON, _WPD_OBJECT_FORMAT_JFIF, _WPD_OBJECT_FORMAT_JP2, _WPD_OBJECT_FORMAT_JPX, 
	_WPD_OBJECT_FORMAT_M3UPLAYLIST, _WPD_OBJECT_FORMAT_M4A, _WPD_OBJECT_FORMAT_MHT_COMPILED_HTML, _WPD_OBJECT_FORMAT_MICROSOFT_EXCEL, _WPD_OBJECT_FORMAT_MICROSOFT_POWERPOINT, _WPD_OBJECT_FORMAT_MICROSOFT_WFC, _WPD_OBJECT_FORMAT_MICROSOFT_WORD, _WPD_OBJECT_FORMAT_MP2, _WPD_OBJECT_FORMAT_MP3, _WPD_OBJECT_FORMAT_MP4, _WPD_OBJECT_FORMAT_MPEG, _WPD_OBJECT_FORMAT_MPLPLAYLIST, _WPD_OBJECT_FORMAT_NETWORK_ASSOCIATION, _WPD_OBJECT_FORMAT_OGG, _WPD_OBJECT_FORMAT_PCD, _WPD_OBJECT_FORMAT_PICT, _WPD_OBJECT_FORMAT_PLSPLAYLIST, _WPD_OBJECT_FORMAT_PNG, _WPD_OBJECT_FORMAT_PROPERTIES_ONLY, _WPD_OBJECT_FORMAT_SCRIPT, _WPD_OBJECT_FORMAT_TEXT, _WPD_OBJECT_FORMAT_TIFF, _WPD_OBJECT_FORMAT_TIFFEP, _WPD_OBJECT_FORMAT_TIFFIT, _WPD_OBJECT_FORMAT_UNSPECIFIED, _WPD_OBJECT_FORMAT_VCALENDAR1, 
	_WPD_OBJECT_FORMAT_VCARD2, _WPD_OBJECT_FORMAT_VCARD3, _WPD_OBJECT_FORMAT_WAVE, _WPD_OBJECT_FORMAT_WINDOWSIMAGEFORMAT, _WPD_OBJECT_FORMAT_WMA, _WPD_OBJECT_FORMAT_WMV, _WPD_OBJECT_FORMAT_WPLPLAYLIST, _WPD_OBJECT_FORMAT_X509V3CERTIFICATE, _WPD_OBJECT_FORMAT_XML, _WPD_OBJECT_FORMAT_UNKNOWN };

enum DECLSPEC_DENUM TWPDContentType : unsigned char { _WPD_CONTENT_TYPE_ALL, _WPD_CONTENT_TYPE_APPOINTMENT, _WPD_CONTENT_TYPE_AUDIO, _WPD_CONTENT_TYPE_AUDIO_ALBUM, _WPD_CONTENT_TYPE_CALENDAR, _WPD_CONTENT_TYPE_CERTIFICATE, _WPD_CONTENT_TYPE_CONTACT, _WPD_CONTENT_TYPE_CONTACT_GROUP, _WPD_CONTENT_TYPE_DOCUMENT, _WPD_CONTENT_TYPE_EMAIL, _WPD_CONTENT_TYPE_FUNCTIONAL_OBJECT, _WPD_CONTENT_TYPE_GENERIC_FILE, _WPD_CONTENT_TYPE_GENERIC_MESSAGE, _WPD_CONTENT_TYPE_IMAGE, _WPD_CONTENT_TYPE_IMAGE_ALBUM, _WPD_CONTENT_TYPE_MEDIA_CAST, _WPD_CONTENT_TYPE_MEMO, _WPD_CONTENT_TYPE_MIXED_CONTENT_ALBUM, _WPD_CONTENT_TYPE_NETWORK_ASSOCIATION, _WPD_CONTENT_TYPE_PLAYLIST, _WPD_CONTENT_TYPE_PROGRAM, _WPD_CONTENT_TYPE_SECTION, _WPD_CONTENT_TYPE_TASK, _WPD_CONTENT_TYPE_TELEVISION, 
	_WPD_CONTENT_TYPE_UNSPECIFIED, _WPD_CONTENT_TYPE_VIDEO, _WPD_CONTENT_TYPE_VIDEO_ALBUM, _WPD_CONTENT_TYPE_WIRELESS_PROFILE, _WPD_CONTENT_TYPE_FOLDER, _WPD_CONTENT_TYPE_UNKNOWN };

enum DECLSPEC_DENUM TIEWPDObjectType : unsigned char { iewFile, iewFolder };

typedef System::Set<TIEWPDObjectType, TIEWPDObjectType::iewFile, TIEWPDObjectType::iewFolder> TIEWPDObjectTypes;

struct DECLSPEC_DRECORD TIEPortableDevice
{
public:
	System::WideString ID;
	System::WideString FriendlyName;
	System::WideString Description;
	System::WideString Manufacturer;
	TWPDDeviceTypes DeviceType;
	bool IsDrive;
};


typedef TIEPortableDevice *PIEPortableDevice;

struct DECLSPEC_DRECORD TIEWPDObject
{
public:
	System::WideString ID;
	System::WideString FriendlyName;
	System::WideString Filename;
	System::WideString Path;
	TIEWPDObjectType ObjectType;
	bool IsHidden;
	bool IsSystem;
	System::TDateTime DateCreated;
	System::TDateTime DateModified;
	unsigned __int64 SizeBytes;
};


typedef TIEWPDObject *PIEWPDObject;

struct DECLSPEC_DRECORD TIEWPDObjectAdvancedProps
{
public:
	System::WideString ObjectID;
	System::WideString ParentID;
	System::WideString FriendlyName;
	System::WideString Filename;
	System::WideString PersistentUniqueID;
	TWPDObjectFormat ObjectFormat;
	TWPDContentType ContentType;
	bool IsHidden;
	bool IsSystem;
	System::TDateTime DateCreated;
	System::TDateTime DateModified;
	unsigned __int64 SizeBytes;
};


class PASCALIMPLEMENTATION TIEPortableDevices : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Classes::TList* fDevices;
	System::Classes::TList* fObjects;
	bool fDevicesInitialized;
	bool fObjectsInitialized;
	bool fSorted;
	TIEPortableDeviceLogEvent fOnLog;
	System::UnicodeString fLastError;
	System::WideString fActiveDeviceID;
	System::WideString fActiveFolderID;
	bool fHideEmptyDevices;
	void __fastcall Clear();
	void __fastcall ClearObjectList();
	bool __fastcall DeviceContainsObjects(const System::WideString sDeviceID);
	void __fastcall AddToLog(const System::UnicodeString sMsg);
	TIEPortableDevice __fastcall GetDevices(int Index);
	int __fastcall GetDeviceCount();
	void __fastcall CheckDevicesInitialized();
	TIEWPDObject __fastcall GetObjects(int Index);
	int __fastcall GetObjectCount();
	void __fastcall CheckObjectsInitialized();
	void __fastcall SetActiveDeviceID(const System::WideString Value);
	void __fastcall SetActiveFolderID(const System::WideString Value);
	bool __fastcall GetCanNavigateToParent();
	
public:
	__fastcall TIEPortableDevices();
	__fastcall virtual ~TIEPortableDevices();
	__property System::WideString ActiveDeviceID = {read=fActiveDeviceID, write=SetActiveDeviceID};
	__property System::WideString ActiveFolderID = {read=fActiveFolderID, write=SetActiveFolderID};
	bool __fastcall RefreshDevices();
	__property TIEPortableDevice Devices[int Index] = {read=GetDevices};
	__property int DeviceCount = {read=GetDeviceCount, nodefault};
	int __fastcall DeviceIDToIndex(const System::WideString sDeviceID);
	bool __fastcall NavigateToFolderID(const System::WideString sFolderID, bool bIncludeSubFolders = false, TIEWPDObjectTypes GetTypes = (TIEWPDObjectTypes() << TIEWPDObjectType::iewFile << TIEWPDObjectType::iewFolder ))/* overload */;
	bool __fastcall NavigateToFolderID(const System::WideString sDeviceID, const System::WideString sFolderID, bool bIncludeSubFolders = false, TIEWPDObjectTypes GetTypes = (TIEWPDObjectTypes() << TIEWPDObjectType::iewFile << TIEWPDObjectType::iewFolder ))/* overload */;
	bool __fastcall NavigateToFolderPath(const System::WideString sPath, bool bIncludeSubFolders = false, TIEWPDObjectTypes GetTypes = (TIEWPDObjectTypes() << TIEWPDObjectType::iewFile << TIEWPDObjectType::iewFolder ))/* overload */;
	bool __fastcall NavigateToFolderPath(System::WideString sDeviceID, System::WideString sPath, bool bIncludeSubFolders = false, TIEWPDObjectTypes GetTypes = (TIEWPDObjectTypes() << TIEWPDObjectType::iewFile << TIEWPDObjectType::iewFolder ))/* overload */;
	bool __fastcall FindFilesOfType(const System::WideString sDeviceID, const System::WideString sFolderID, System::UnicodeString sFileExtensions, int iMaxDepth = 0x0)/* overload */;
	bool __fastcall FindFilesOfType(const System::WideString sFolderID, System::UnicodeString sFileExtensions, int iMaxDepth = 0x0)/* overload */;
	bool __fastcall FindFilesByName(const System::WideString sDeviceID, const System::WideString sFolderID, const System::WideString sSearchText, TIEWPDObjectTypes GetTypes = (TIEWPDObjectTypes() << TIEWPDObjectType::iewFile << TIEWPDObjectType::iewFolder ), int iMaxDepth = 0x0)/* overload */;
	bool __fastcall FindFilesByName(const System::WideString sFolderID, const System::WideString sSearchText, TIEWPDObjectTypes GetTypes = (TIEWPDObjectTypes() << TIEWPDObjectType::iewFile << TIEWPDObjectType::iewFolder ), int iMaxDepth = 0x0)/* overload */;
	bool __fastcall NavigateToParent();
	__property TIEWPDObject Objects[int Index] = {read=GetObjects};
	__property int ObjectCount = {read=GetObjectCount, nodefault};
	int __fastcall ObjectIDToIndex(const System::WideString sObjectID);
	bool __fastcall ObjectIsFolder(const System::WideString sObjectID)/* overload */;
	bool __fastcall ObjectIsFolder(int Index)/* overload */;
	bool __fastcall GetObjectAdvancedProps(const System::WideString sObjectID, /* out */ TIEWPDObjectAdvancedProps &DestProps)/* overload */;
	bool __fastcall GetObjectAdvancedProps(int Index, /* out */ TIEWPDObjectAdvancedProps &DestProps)/* overload */;
	bool __fastcall GetObjectAdvancedProps(const System::WideString sDeviceID, const System::WideString sObjectID, /* out */ TIEWPDObjectAdvancedProps &DestProps)/* overload */;
	bool __fastcall CopyFileFromDevice(const System::WideString sDeviceID, const System::WideString sObjectID, const System::WideString sDestFilename, bool Thumbnail = false, bool MoveFile = false)/* overload */;
	bool __fastcall CopyFileFromDevice(int Index, const System::WideString sDestFilename, bool Thumbnail = false, bool MoveFile = false)/* overload */;
	int __fastcall CopyFileFromDevice(System::Classes::TStrings* Indexes, const System::WideString sDestFolder, bool Thumbnail = false, bool MoveFile = false)/* overload */;
	bool __fastcall CopyStreamFromDevice(const System::WideString sDeviceID, const System::WideString sObjectID, System::Classes::TStream* DestStream, bool Thumbnail = false)/* overload */;
	bool __fastcall CopyStreamFromDevice(int Index, System::Classes::TStream* DestStream, bool Thumbnail = false)/* overload */;
	bool __fastcall Cancel();
	bool __fastcall CopyFileToDevice(const System::WideString sDeviceID, const System::WideString sFolderID, const System::WideString sSourceFilename, bool MoveFile = false)/* overload */;
	int __fastcall CopyFileToDevice(const System::WideString sDeviceID, const System::WideString sFolderID, System::Classes::TStrings* SourceFilenames, bool MoveFile = false)/* overload */;
	int __fastcall DeleteFromDevice(const System::WideString sDeviceID, const System::WideString sObjectID, bool bDeleteSubObjects, System::WideString &sResultText)/* overload */;
	int __fastcall DeleteFromDevice(const System::WideString sDeviceID, const System::WideString sObjectID, bool bDeleteSubObjects = true)/* overload */;
	int __fastcall DeleteFromDevice(const System::WideString sDeviceID, System::Classes::TStrings* ssObjectIDs, bool bDeleteSubObjects = true)/* overload */;
	int __fastcall DeleteFromDevice(const System::WideString sDeviceID, System::Classes::TStrings* ssObjectIDs, bool bDeleteSubObjects, System::WideString &sResultText)/* overload */;
	int __fastcall DeleteFromDevice(System::Classes::TStrings* Indexes, bool bDeleteSubObjects = true)/* overload */;
	System::WideString __fastcall LookupDeviceFriendlyName(const System::WideString sDeviceID);
	System::WideString __fastcall LookupDeviceID(const System::WideString FriendlyName);
	System::WideString __fastcall LookupObjectFriendlyName(const System::WideString sObjectID)/* overload */;
	System::WideString __fastcall LookupObjectFriendlyName(const System::WideString sDeviceID, const System::WideString sObjectID)/* overload */;
	System::WideString __fastcall PathToFolderID(const System::WideString sPath)/* overload */;
	System::WideString __fastcall PathToFolderID(const System::WideString sDeviceID, const System::WideString sPath)/* overload */;
	__property System::UnicodeString LastError = {read=fLastError};
	__property TIEPortableDeviceLogEvent OnLog = {read=fOnLog, write=fOnLog};
	__property bool CanNavigateToParent = {read=GetCanNavigateToParent, nodefault};
	__property bool Sorted = {read=fSorted, write=fSorted, nodefault};
	__property bool HideEmptyDevices = {read=fHideEmptyDevices, write=fHideEmptyDevices, nodefault};
};


//-- var, const, procedure ---------------------------------------------------
#define Windows_WPD_Prefix L"\\\\?\\"
#define ImageEn_WPD_Prefix L"WPD:"
extern DELPHI_PACKAGE bool __fastcall FileIsWPDItem(const System::UnicodeString FileName);
}	/* namespace Iexwpd */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_IEXWPD)
using namespace Iexwpd;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// IexwpdHPP
