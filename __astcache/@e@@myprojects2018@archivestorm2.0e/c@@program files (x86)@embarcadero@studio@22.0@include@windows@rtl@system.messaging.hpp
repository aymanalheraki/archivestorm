﻿// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'System.Messaging.pas' rev: 35.00 (Windows)

#ifndef System_MessagingHPP
#define System_MessagingHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <System.Generics.Collections.hpp>
#include <System.Generics.Defaults.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

namespace System
{
namespace Messaging
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TMessageBase;
template<typename T> class DELPHICLASS TMessage__1;
template<typename T> class DELPHICLASS TObjectMessage__1;
__interface DELPHIINTERFACE TMessageListener;
typedef System::DelphiInterface<TMessageListener> _di_TMessageListener;
class DELPHICLASS TMessageManager;
//-- type declarations -------------------------------------------------------
#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TMessageBase : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	/* TObject.Create */ inline __fastcall TMessageBase() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TMessageBase() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T> class PASCALIMPLEMENTATION TMessage__1 : public TMessageBase
{
	typedef TMessageBase inherited;
	
protected:
	T FValue;
	
public:
	__fastcall TMessage__1(const T AValue);
	__fastcall virtual ~TMessage__1();
	__property T Value = {read=FValue};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T> class PASCALIMPLEMENTATION TObjectMessage__1 : public TMessage__1<T>
{
	typedef TMessage__1<T> inherited;
	
protected:
	bool FOwnsObject;
	
public:
	__fastcall TObjectMessage__1(const T AValue, bool AOwnsObject);
	__fastcall virtual ~TObjectMessage__1();
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

__interface TMessageListener  : public System::IInterface 
{
	virtual void __fastcall Invoke(System::TObject* const Sender, TMessageBase* const M) = 0 ;
};

typedef void __fastcall (__closure *TMessageListenerMethod)(System::TObject* const Sender, TMessageBase* const M);

struct TListenerWithId;
#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TMessageManager : public System::TObject
{
	typedef System::TObject inherited;
	
	
protected:
#ifndef _WIN64
	#pragma pack(push,8)
#endif /* not _WIN64 */
	struct DECLSPEC_DRECORD TListenerWithId
	{
	public:
		int Id;
		_di_TMessageListener Listener;
		TMessageListenerMethod ListenerMethod;
	};
#ifndef _WIN64
	#pragma pack(pop)
#endif /* not _WIN64 */
	
	
	typedef TListenerWithId *PListenerWithId;
	
	class DELPHICLASS TListenerList;
#ifndef _WIN64
	#pragma pack(push,8)
#endif /* not _WIN64 */
	class PASCALIMPLEMENTATION TListenerList : public System::Generics::Collections::TList__1<TMessageManager::TListenerWithId>
	{
		typedef System::Generics::Collections::TList__1<TMessageManager::TListenerWithId> inherited;
		
	private:
		int FProcessing;
		void __fastcall IterateAndSend(System::TObject* const Sender, TMessageBase* const AMessage);
		void __fastcall Compact();
		
	private:
		int FRemoveCount;
		void __fastcall Unsubscribe(int Index, bool Immediate);
		void __fastcall SendMessage(System::TObject* const Sender, TMessageBase* const AMessage);
		__classmethod void __fastcall InternalCopyListener(TMessageManager::PListenerWithId FromListener, TMessageManager::PListenerWithId ToListener);
	public:
		/* {System_Generics_Collections}TList<System_Messaging_TMessageManager_TListenerWithId>.Create */ inline __fastcall TListenerList()/* overload */ : System::Generics::Collections::TList__1<TMessageManager::TListenerWithId>() { }
		/* {System_Generics_Collections}TList<System_Messaging_TMessageManager_TListenerWithId>.Create */ inline __fastcall TListenerList(const System::DelphiInterface<System::Generics::Defaults::IComparer__1<TMessageManager::TListenerWithId> > AComparer)/* overload */ : System::Generics::Collections::TList__1<TMessageManager::TListenerWithId>(AComparer) { }
		/* {System_Generics_Collections}TList<System_Messaging_TMessageManager_TListenerWithId>.Create */ inline __fastcall TListenerList(System::Generics::Collections::TEnumerable__1<TMessageManager::TListenerWithId>* const Collection)/* overload */ : System::Generics::Collections::TList__1<TMessageManager::TListenerWithId>(Collection) { }
		/* {System_Generics_Collections}TList<System_Messaging_TMessageManager_TListenerWithId>.Create */ inline __fastcall TListenerList(const TMessageManager::TListenerWithId *Values, const int Values_High)/* overload */ : System::Generics::Collections::TList__1<TMessageManager::TListenerWithId>(Values, Values_High) { }
		/* {System_Generics_Collections}TList<System_Messaging_TMessageManager_TListenerWithId>.Destroy */ inline __fastcall virtual ~TListenerList() { }
		
	};
	
#ifndef _WIN64
	#pragma pack(pop)
#endif /* not _WIN64 */
	
	typedef System::Generics::Collections::TObjectDictionary__2<System::TClass,TListenerList*>* TListenerRegistry;
	
	
private:
	System::Generics::Collections::TObjectDictionary__2<System::TClass,TListenerList*>* FListeners;
	int FLastId;
	void __fastcall RegisterMessageClass(const System::TClass AMessageClass);
	static TMessageManager* FDefaultManager;
	static TMessageManager* __fastcall GetDefaultManager();
	__classmethod int __fastcall SearchListener(const TListenerWithId *ArrayToSearch, const int ArrayToSearch_High, int Id, int AMinValue, int AMaxValue);
	
public:
	__fastcall TMessageManager();
	__fastcall virtual ~TMessageManager();
	
private:
	// __classmethod void __fastcall UnInitialize@();
	
public:
	int __fastcall SubscribeToMessage(const System::TClass AMessageClass, const _di_TMessageListener AListener)/* overload */;
	int __fastcall SubscribeToMessage(const System::TClass AMessageClass, const TMessageListenerMethod AListenerMethod)/* overload */;
	void __fastcall Unsubscribe(const System::TClass AMessageClass, int Id, bool Immediate = false)/* overload */;
	void __fastcall Unsubscribe(const System::TClass AMessageClass, const _di_TMessageListener AListener, bool Immediate = false)/* overload */;
	void __fastcall Unsubscribe(const System::TClass AMessageClass, const TMessageListenerMethod AListenerMethod, bool Immediate = false)/* overload */;
	void __fastcall SendMessage(System::TObject* const Sender, TMessageBase* AMessage)/* overload */;
	void __fastcall SendMessage(System::TObject* const Sender, TMessageBase* AMessage, bool ADispose)/* overload */;
	/* static */ __property TMessageManager* DefaultManager = {read=GetDefaultManager};
	
private:
	// __classmethod void __fastcall Create@();
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Messaging */
}	/* namespace System */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SYSTEM_MESSAGING)
using namespace System::Messaging;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SYSTEM)
using namespace System;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// System_MessagingHPP
