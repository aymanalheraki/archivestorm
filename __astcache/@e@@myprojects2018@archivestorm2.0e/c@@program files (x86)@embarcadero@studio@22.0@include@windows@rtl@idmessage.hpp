﻿// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'IdMessage.pas' rev: 35.00 (Windows)

#ifndef IdmessageHPP
#define IdmessageHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <IdAttachment.hpp>
#include <IdBaseComponent.hpp>
#include <IdCoderHeader.hpp>
#include <IdEMailAddress.hpp>
#include <IdExceptionCore.hpp>
#include <IdHeaderList.hpp>
#include <IdMessageParts.hpp>
#include <IdException.hpp>
#include <System.SysUtils.hpp>

//-- user supplied -----------------------------------------------------------

namespace Idmessage
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TIdMIMEBoundary;
class DELPHICLASS TIdMessage;
class DELPHICLASS EIdTextInvalidCount;
class DELPHICLASS EIdMessageCannotLoad;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TIdMessagePriority : unsigned char { mpHighest, mpHigh, mpNormal, mpLow, mpLowest };

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TIdMIMEBoundary : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	System::Classes::TStrings* FBoundaryList;
	System::Classes::TStrings* FParentPartList;
	System::UnicodeString __fastcall GetBoundary();
	int __fastcall GetParentPart();
	
public:
	__fastcall TIdMIMEBoundary();
	__fastcall virtual ~TIdMIMEBoundary();
	void __fastcall Push(System::UnicodeString ABoundary, int AParentPart);
	void __fastcall Pop();
	void __fastcall Clear();
	int __fastcall Count();
	__property System::UnicodeString Boundary = {read=GetBoundary};
	__property int ParentPart = {read=GetParentPart, nodefault};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum DECLSPEC_DENUM TIdMessageFlags : unsigned char { mfAnswered, mfFlagged, mfDeleted, mfDraft, mfSeen, mfRecent };

typedef System::Set<TIdMessageFlags, TIdMessageFlags::mfAnswered, TIdMessageFlags::mfRecent> TIdMessageFlagsSet;

enum DECLSPEC_DENUM TIdMessageEncoding : unsigned char { meDefault, meMIME, mePlainText };

typedef void __fastcall (__closure *TIdInitializeIsoEvent)(System::WideChar &VHeaderEncoding, System::UnicodeString &VCharSet);

typedef void __fastcall (__closure *TIdCreateAttachmentEvent)(TIdMessage* const AMsg, System::Classes::TStrings* const AHeaders, Idattachment::TIdAttachment* &AAttachment);

class PASCALIMPLEMENTATION TIdMessage : public Idbasecomponent::TIdBaseComponent
{
	typedef Idbasecomponent::TIdBaseComponent inherited;
	
protected:
	System::UnicodeString FAttachmentTempDirectory;
	Idemailaddress::TIdEMailAddressList* FBccList;
	System::Classes::TStrings* FBody;
	System::UnicodeString FCharSet;
	Idemailaddress::TIdEMailAddressList* FCcList;
	System::UnicodeString FContentType;
	System::UnicodeString FContentTransferEncoding;
	System::UnicodeString FContentDisposition;
	System::TDateTime FDate;
	bool FIsEncoded;
	Idheaderlist::TIdHeaderList* FExtraHeaders;
	TIdMessageEncoding FEncoding;
	TIdMessageFlagsSet FFlags;
	Idemailaddress::TIdEMailAddressList* FFromList;
	Idheaderlist::TIdHeaderList* FHeaders;
	Idmessageparts::TIdMessageParts* FMessageParts;
	TIdMIMEBoundary* FMIMEBoundary;
	System::UnicodeString FMsgId;
	System::Classes::TStrings* FNewsGroups;
	bool FNoEncode;
	bool FNoDecode;
	TIdInitializeIsoEvent FOnInitializeISO;
	System::UnicodeString FOrganization;
	TIdMessagePriority FPriority;
	System::UnicodeString FSubject;
	Idemailaddress::TIdEMailAddressItem* FReceiptRecipient;
	Idemailaddress::TIdEMailAddressList* FRecipients;
	System::UnicodeString FReferences;
	System::UnicodeString FInReplyTo;
	Idemailaddress::TIdEMailAddressList* FReplyTo;
	Idemailaddress::TIdEMailAddressItem* FSender;
	System::UnicodeString FUID;
	System::UnicodeString FXProgram;
	TIdCreateAttachmentEvent FOnCreateAttachment;
	Idheaderlist::TIdHeaderList* FLastGeneratedHeaders;
	bool FConvertPreamble;
	bool FSavingToFile;
	bool FIsMsgSinglePartMime;
	bool FExceptionOnBlockedAttachments;
	virtual void __fastcall DoInitializeISO(System::WideChar &VHeaderEncoding, System::UnicodeString &VCharSet);
	System::UnicodeString __fastcall GetAttachmentEncoding();
	System::UnicodeString __fastcall GetInReplyTo();
	bool __fastcall GetUseNowForDate();
	Idemailaddress::TIdEMailAddressItem* __fastcall GetFrom();
	void __fastcall SetAttachmentEncoding(const System::UnicodeString AValue);
	void __fastcall SetAttachmentTempDirectory(const System::UnicodeString Value);
	void __fastcall SetBccList(Idemailaddress::TIdEMailAddressList* const AValue);
	void __fastcall SetBody(System::Classes::TStrings* const AValue);
	void __fastcall SetCCList(Idemailaddress::TIdEMailAddressList* const AValue);
	void __fastcall SetContentType(const System::UnicodeString AValue);
	void __fastcall SetEncoding(const TIdMessageEncoding AValue);
	void __fastcall SetExtraHeaders(Idheaderlist::TIdHeaderList* const AValue);
	void __fastcall SetFrom(Idemailaddress::TIdEMailAddressItem* const AValue);
	void __fastcall SetFromList(Idemailaddress::TIdEMailAddressList* const AValue);
	void __fastcall SetHeaders(Idheaderlist::TIdHeaderList* const AValue);
	void __fastcall SetInReplyTo(const System::UnicodeString AValue);
	void __fastcall SetMsgID(const System::UnicodeString AValue);
	void __fastcall SetNewsGroups(System::Classes::TStrings* const AValue);
	void __fastcall SetReceiptRecipient(Idemailaddress::TIdEMailAddressItem* const AValue);
	void __fastcall SetRecipients(Idemailaddress::TIdEMailAddressList* const AValue);
	void __fastcall SetReplyTo(Idemailaddress::TIdEMailAddressList* const AValue);
	void __fastcall SetSender(Idemailaddress::TIdEMailAddressItem* const AValue);
	void __fastcall SetUseNowForDate(const bool AValue);
	virtual void __fastcall InitComponent();
	
public:
	__fastcall virtual ~TIdMessage();
	void __fastcall AddHeader(const System::UnicodeString AValue);
	virtual void __fastcall Clear();
	void __fastcall ClearBody();
	void __fastcall ClearHeader();
	virtual void __fastcall GenerateHeader();
	void __fastcall InitializeISO(System::WideChar &VHeaderEncoding, System::UnicodeString &VCharSet);
	bool __fastcall IsBodyEncodingRequired();
	bool __fastcall IsBodyEmpty();
	void __fastcall LoadFromFile(const System::UnicodeString AFileName, const bool AHeadersOnly = false);
	void __fastcall LoadFromStream(System::Classes::TStream* AStream, const bool AHeadersOnly = false);
	virtual void __fastcall ProcessHeaders();
	void __fastcall SaveToFile(const System::UnicodeString AFileName, const bool AHeadersOnly = false);
	void __fastcall SaveToStream(System::Classes::TStream* AStream, const bool AHeadersOnly = false);
	virtual void __fastcall DoCreateAttachment(System::Classes::TStrings* const AHeaders, Idattachment::TIdAttachment* &VAttachment);
	__property TIdMessageFlagsSet Flags = {read=FFlags, write=FFlags, nodefault};
	__property bool IsEncoded = {read=FIsEncoded, write=FIsEncoded, nodefault};
	__property System::UnicodeString MsgId = {read=FMsgId, write=SetMsgID};
	__property Idheaderlist::TIdHeaderList* Headers = {read=FHeaders, write=SetHeaders};
	__property Idmessageparts::TIdMessageParts* MessageParts = {read=FMessageParts};
	__property TIdMIMEBoundary* MIMEBoundary = {read=FMIMEBoundary};
	__property System::UnicodeString UID = {read=FUID, write=FUID};
	__property bool IsMsgSinglePartMime = {read=FIsMsgSinglePartMime, write=FIsMsgSinglePartMime, nodefault};
	
__published:
	__property System::UnicodeString AttachmentEncoding = {read=GetAttachmentEncoding, write=SetAttachmentEncoding};
	__property System::Classes::TStrings* Body = {read=FBody, write=SetBody};
	__property Idemailaddress::TIdEMailAddressList* BccList = {read=FBccList, write=SetBccList};
	__property System::UnicodeString CharSet = {read=FCharSet, write=FCharSet};
	__property Idemailaddress::TIdEMailAddressList* CCList = {read=FCcList, write=SetCCList};
	__property System::UnicodeString ContentType = {read=FContentType, write=SetContentType};
	__property System::UnicodeString ContentTransferEncoding = {read=FContentTransferEncoding, write=FContentTransferEncoding};
	__property System::UnicodeString ContentDisposition = {read=FContentDisposition, write=FContentDisposition};
	__property System::TDateTime Date = {read=FDate, write=FDate};
	__property TIdMessageEncoding Encoding = {read=FEncoding, write=SetEncoding, nodefault};
	__property Idheaderlist::TIdHeaderList* ExtraHeaders = {read=FExtraHeaders, write=SetExtraHeaders};
	__property Idemailaddress::TIdEMailAddressList* FromList = {read=FFromList, write=SetFromList};
	__property Idemailaddress::TIdEMailAddressItem* From = {read=GetFrom, write=SetFrom};
	__property System::Classes::TStrings* NewsGroups = {read=FNewsGroups, write=SetNewsGroups};
	__property bool NoEncode = {read=FNoEncode, write=FNoEncode, default=0};
	__property bool NoDecode = {read=FNoDecode, write=FNoDecode, default=0};
	__property System::UnicodeString Organization = {read=FOrganization, write=FOrganization};
	__property TIdMessagePriority Priority = {read=FPriority, write=FPriority, default=2};
	__property Idemailaddress::TIdEMailAddressItem* ReceiptRecipient = {read=FReceiptRecipient, write=SetReceiptRecipient};
	__property Idemailaddress::TIdEMailAddressList* Recipients = {read=FRecipients, write=SetRecipients};
	__property System::UnicodeString References = {read=FReferences, write=FReferences};
	__property System::UnicodeString InReplyTo = {read=GetInReplyTo, write=SetInReplyTo};
	__property Idemailaddress::TIdEMailAddressList* ReplyTo = {read=FReplyTo, write=SetReplyTo};
	__property System::UnicodeString Subject = {read=FSubject, write=FSubject};
	__property Idemailaddress::TIdEMailAddressItem* Sender = {read=FSender, write=SetSender};
	__property bool UseNowForDate = {read=GetUseNowForDate, write=SetUseNowForDate, default=1};
	__property Idheaderlist::TIdHeaderList* LastGeneratedHeaders = {read=FLastGeneratedHeaders};
	__property bool ConvertPreamble = {read=FConvertPreamble, write=FConvertPreamble, nodefault};
	__property bool ExceptionOnBlockedAttachments = {read=FExceptionOnBlockedAttachments, write=FExceptionOnBlockedAttachments, default=0};
	__property System::UnicodeString AttachmentTempDirectory = {read=FAttachmentTempDirectory, write=SetAttachmentTempDirectory};
	__property TIdInitializeIsoEvent OnInitializeISO = {read=FOnInitializeISO, write=FOnInitializeISO};
	__property TIdCreateAttachmentEvent OnCreateAttachment = {read=FOnCreateAttachment, write=FOnCreateAttachment};
public:
	/* TIdBaseComponent.Create */ inline __fastcall TIdMessage(System::Classes::TComponent* AOwner)/* overload */ : Idbasecomponent::TIdBaseComponent(AOwner) { }
	
public:
	/* TIdInitializerComponent.Create */ inline __fastcall TIdMessage()/* overload */ : Idbasecomponent::TIdBaseComponent() { }
	
};


typedef void __fastcall (__closure *TIdMessageEvent)(System::Classes::TComponent* ASender, TIdMessage* &AMsg);

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EIdTextInvalidCount : public Idexceptioncore::EIdMessageException
{
	typedef Idexceptioncore::EIdMessageException inherited;
	
public:
	/* EIdException.Create */ inline __fastcall virtual EIdTextInvalidCount(const System::UnicodeString AMsg)/* overload */ : Idexceptioncore::EIdMessageException(AMsg) { }
	
public:
	/* Exception.CreateFmt */ inline __fastcall EIdTextInvalidCount(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : Idexceptioncore::EIdMessageException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EIdTextInvalidCount(NativeUInt Ident)/* overload */ : Idexceptioncore::EIdMessageException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EIdTextInvalidCount(System::PResStringRec ResStringRec)/* overload */ : Idexceptioncore::EIdMessageException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EIdTextInvalidCount(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : Idexceptioncore::EIdMessageException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EIdTextInvalidCount(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : Idexceptioncore::EIdMessageException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EIdTextInvalidCount(const System::UnicodeString Msg, int AHelpContext) : Idexceptioncore::EIdMessageException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EIdTextInvalidCount(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : Idexceptioncore::EIdMessageException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EIdTextInvalidCount(NativeUInt Ident, int AHelpContext)/* overload */ : Idexceptioncore::EIdMessageException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EIdTextInvalidCount(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Idexceptioncore::EIdMessageException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EIdTextInvalidCount(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Idexceptioncore::EIdMessageException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EIdTextInvalidCount(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Idexceptioncore::EIdMessageException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EIdTextInvalidCount() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EIdMessageCannotLoad : public Idexceptioncore::EIdMessageException
{
	typedef Idexceptioncore::EIdMessageException inherited;
	
public:
	/* EIdException.Create */ inline __fastcall virtual EIdMessageCannotLoad(const System::UnicodeString AMsg)/* overload */ : Idexceptioncore::EIdMessageException(AMsg) { }
	
public:
	/* Exception.CreateFmt */ inline __fastcall EIdMessageCannotLoad(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : Idexceptioncore::EIdMessageException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EIdMessageCannotLoad(NativeUInt Ident)/* overload */ : Idexceptioncore::EIdMessageException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EIdMessageCannotLoad(System::PResStringRec ResStringRec)/* overload */ : Idexceptioncore::EIdMessageException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EIdMessageCannotLoad(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : Idexceptioncore::EIdMessageException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EIdMessageCannotLoad(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : Idexceptioncore::EIdMessageException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EIdMessageCannotLoad(const System::UnicodeString Msg, int AHelpContext) : Idexceptioncore::EIdMessageException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EIdMessageCannotLoad(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : Idexceptioncore::EIdMessageException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EIdMessageCannotLoad(NativeUInt Ident, int AHelpContext)/* overload */ : Idexceptioncore::EIdMessageException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EIdMessageCannotLoad(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Idexceptioncore::EIdMessageException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EIdMessageCannotLoad(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Idexceptioncore::EIdMessageException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EIdMessageCannotLoad(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Idexceptioncore::EIdMessageException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EIdMessageCannotLoad() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

typedef System::StaticArray<System::UnicodeString, 6> Idmessage__5;

//-- var, const, procedure ---------------------------------------------------
static const bool ID_MSG_NODECODE = false;
static const bool ID_MSG_USESNOWFORDATE = true;
static const TIdMessagePriority ID_MSG_PRIORITY = (TIdMessagePriority)(2);
extern DELPHI_PACKAGE Idmessage__5 MessageFlags;
#define INREPLYTO L"In-Reply-To"
}	/* namespace Idmessage */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_IDMESSAGE)
using namespace Idmessage;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// IdmessageHPP
