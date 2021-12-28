﻿// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'IdSMTPBase.pas' rev: 35.00 (Windows)

#ifndef IdsmtpbaseHPP
#define IdsmtpbaseHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <IdGlobal.hpp>
#include <IdEMailAddress.hpp>
#include <IdMessage.hpp>
#include <IdMessageClient.hpp>
#include <IdReply.hpp>
#include <IdTCPClient.hpp>
#include <IdExplicitTLSClientServerBase.hpp>
#include <IdTCPConnection.hpp>
#include <IdComponent.hpp>
#include <IdBaseComponent.hpp>
#include <System.Classes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Idsmtpbase
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TIdSMTPBase;
//-- type declarations -------------------------------------------------------
typedef void __fastcall (__closure *TIdSMTPFailedRecipient)(System::TObject* Sender, const System::UnicodeString AAddress, const System::UnicodeString ACode, const System::UnicodeString AText, bool &VContinue);

typedef void __fastcall (__closure *TIdSMTPFailedEHLO)(System::TObject* Sender, const System::UnicodeString ACode, const System::UnicodeString AText, bool &VContinue);

class PASCALIMPLEMENTATION TIdSMTPBase : public Idmessageclient::TIdMessageClient
{
	typedef Idmessageclient::TIdMessageClient inherited;
	
protected:
	System::UnicodeString FMailAgent;
	System::UnicodeString FHeloName;
	bool FPipeline;
	bool FUseEhlo;
	bool FUseVerp;
	System::UnicodeString FVerpDelims;
	TIdSMTPFailedRecipient FOnFailedRecipient;
	TIdSMTPFailedEHLO FOnFailedEHLO;
	virtual bool __fastcall GetSupportsTLS();
	virtual Idreply::TIdReplyClass __fastcall GetReplyClass();
	virtual void __fastcall InitComponent();
	void __fastcall SendGreeting();
	virtual void __fastcall SetUseEhlo(const bool AValue);
	void __fastcall SetPipeline(const bool AValue);
	void __fastcall StartTLS();
	bool __fastcall FailedRecipientCanContinue(const System::UnicodeString AAddress);
	bool __fastcall WriteRecipientNoPipelining(Idemailaddress::TIdEMailAddressItem* const AEmailAddress);
	void __fastcall WriteRecipientsNoPipelining(Idemailaddress::TIdEMailAddressList* AList);
	void __fastcall SendNoPipelining(Idmessage::TIdMessage* AMsg, const System::UnicodeString AFrom, Idemailaddress::TIdEMailAddressList* ARecipients);
	void __fastcall WriteRecipientPipeLine(Idemailaddress::TIdEMailAddressItem* const AEmailAddress);
	void __fastcall WriteRecipientsPipeLine(Idemailaddress::TIdEMailAddressList* AList);
	void __fastcall SendPipelining(Idmessage::TIdMessage* AMsg, const System::UnicodeString AFrom, Idemailaddress::TIdEMailAddressList* ARecipients);
	virtual void __fastcall InternalSend(Idmessage::TIdMessage* AMsg, const System::UnicodeString AFrom, Idemailaddress::TIdEMailAddressList* ARecipients);
	
public:
	virtual void __fastcall Send(Idmessage::TIdMessage* AMsg)/* overload */;
	virtual void __fastcall Send(Idmessage::TIdMessage* AMsg, Idemailaddress::TIdEMailAddressList* ARecipients)/* overload */;
	virtual void __fastcall Send(Idmessage::TIdMessage* AMsg, const System::UnicodeString AFrom)/* overload */;
	virtual void __fastcall Send(Idmessage::TIdMessage* AMsg, Idemailaddress::TIdEMailAddressList* ARecipients, const System::UnicodeString AFrom)/* overload */;
	
__published:
	__property System::UnicodeString MailAgent = {read=FMailAgent, write=FMailAgent};
	__property System::UnicodeString HeloName = {read=FHeloName, write=FHeloName};
	__property bool UseEhlo = {read=FUseEhlo, write=SetUseEhlo, default=1};
	__property bool PipeLine = {read=FPipeline, write=SetPipeline, default=0};
	__property bool UseVerp = {read=FUseVerp, write=FUseVerp, default=0};
	__property System::UnicodeString VerpDelims = {read=FVerpDelims, write=FVerpDelims};
	__property TIdSMTPFailedRecipient OnFailedRecipient = {read=FOnFailedRecipient, write=FOnFailedRecipient};
	__property TIdSMTPFailedEHLO OnFailedEHLO = {read=FOnFailedEHLO, write=FOnFailedEHLO};
public:
	/* TIdMessageClient.Create */ inline __fastcall TIdSMTPBase(System::Classes::TComponent* AOwner)/* overload */ : Idmessageclient::TIdMessageClient(AOwner) { }
	/* TIdMessageClient.Destroy */ inline __fastcall virtual ~TIdSMTPBase() { }
	
public:
	/* TIdInitializerComponent.Create */ inline __fastcall TIdSMTPBase()/* overload */ : Idmessageclient::TIdMessageClient() { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const bool DEF_SMTP_PIPELINE = false;
static const bool IdDEF_UseEhlo = true;
static const bool IdDEF_UseVerp = false;
#define CAPAPIPELINE L"PIPELINING"
#define CAPAVERP L"VERP"
#define XMAILER_HEADER L"X-Mailer"
extern DELPHI_PACKAGE System::StaticArray<short, 2> RCPTTO_ACCEPT;
extern DELPHI_PACKAGE short MAILFROM_ACCEPT;
extern DELPHI_PACKAGE short DATA_ACCEPT;
extern DELPHI_PACKAGE short DATA_PERIOD_ACCEPT;
extern DELPHI_PACKAGE short RSET_ACCEPT;
#define RSET_CMD L"RSET"
#define MAILFROM_CMD L"MAIL FROM:"
#define RCPTTO_CMD L"RCPT TO:"
#define DATA_CMD L"DATA"
}	/* namespace Idsmtpbase */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_IDSMTPBASE)
using namespace Idsmtpbase;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// IdsmtpbaseHPP
