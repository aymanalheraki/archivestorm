// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'iexDCIM.pas' rev: 35.00 (Windows)

#ifndef IexdcimHPP
#define IexdcimHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.UITypes.hpp>
#include <Winapi.Windows.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <Vcl.Graphics.hpp>
#include <iexWPD.hpp>
#include <Vcl.ComCtrls.hpp>
#include <iexBitmaps.hpp>
#include <hyiedefs.hpp>

//-- user supplied -----------------------------------------------------------

namespace Iexdcim
{
//-- forward type declarations -----------------------------------------------
struct TIEPortableDevicesSource;
class DELPHICLASS TIEDcimAcquire;
//-- type declarations -------------------------------------------------------
struct DECLSPEC_DRECORD TIEPortableDevicesSource
{
public:
	System::WideString Name;
	System::WideString Path;
	System::WideString DeviceID;
	System::WideString DeviceName;
	System::WideString FolderID;
	bool IsDrive;
};


typedef TIEPortableDevicesSource *PIEPortableDevicesSource;

class PASCALIMPLEMENTATION TIEDcimAcquire : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Classes::TComponent* fOwner;
	System::UnicodeString fAcquireFormats;
	bool fAborting;
	System::WideString fSelectedDeviceID;
	System::WideString fSelectedFolderID;
	bool fSourcesInitialized;
	System::Classes::TList* fSources;
	Iexwpd::TIEPortableDeviceLogEvent fOnLog;
	Iexwpd::TIEPortableDevices* fPortableDevices;
	bool __fastcall CheckSourcesInitialized();
	int __fastcall GetSelectedSource();
	void __fastcall SetSelectedSource(int Value);
	TIEPortableDevicesSource __fastcall GetSources(int Index);
	int __fastcall GetSourceCount();
	void __fastcall SetOnLog(Iexwpd::TIEPortableDeviceLogEvent Value);
	void __fastcall Clear();
	
public:
	__fastcall TIEDcimAcquire(System::Classes::TComponent* Owner);
	__fastcall virtual ~TIEDcimAcquire();
	__property System::UnicodeString AcquireFormats = {read=fAcquireFormats, write=fAcquireFormats};
	__property bool Aborting = {read=fAborting, write=fAborting, nodefault};
	bool __fastcall Acquire(Iexbitmaps::TIEBitmap* DestBitmap, System::TObject* DestIOParams = (System::TObject*)(0x0))/* overload */;
	bool __fastcall Acquire(Iexbitmaps::TIEMultiCallBack OnGetImage, Hyiedefs::TIEProgressEvent OnProgress = 0x0)/* overload */;
	bool __fastcall AcquireEx(bool bMultiple, Iexbitmaps::TIEBitmap* DestBitmap, System::TObject* DestIOParams, Iexbitmaps::TIEMultiCallBack OnGetImage, const System::UnicodeString sDestPath, bool bDeleteFromSource, Hyiedefs::TIEProgressEvent OnProgress);
	bool __fastcall CopyImages(const System::UnicodeString sDestPath, Hyiedefs::TIEProgressEvent OnProgress = 0x0, bool bDeleteFromSource = false);
	__property int SelectedSource = {read=GetSelectedSource, write=SetSelectedSource, nodefault};
	int __fastcall SourceNameToIndex(const System::UnicodeString sName);
	bool __fastcall Refresh();
	__property TIEPortableDevicesSource Sources[int Index] = {read=GetSources};
	__property int SourceCount = {read=GetSourceCount, nodefault};
	__property Iexwpd::TIEPortableDeviceLogEvent OnLog = {read=fOnLog, write=SetOnLog};
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Iexdcim */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_IEXDCIM)
using namespace Iexdcim;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// IexdcimHPP
