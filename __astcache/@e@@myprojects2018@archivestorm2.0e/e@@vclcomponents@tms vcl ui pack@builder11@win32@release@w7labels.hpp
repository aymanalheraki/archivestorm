// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'W7Labels.pas' rev: 35.00 (Windows)

#ifndef W7labelsHPP
#define W7labelsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Winapi.Messages.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Graphics.hpp>
#include <W7Common.hpp>
#include <System.UITypes.hpp>
#include <Vcl.Menus.hpp>

//-- user supplied -----------------------------------------------------------

namespace W7labels
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TW7ActiveLabel;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TW7ActiveLabel : public Vcl::Stdctrls::TCustomLabel
{
	typedef Vcl::Stdctrls::TCustomLabel inherited;
	
private:
	bool FMouseInControl;
	System::Uitypes::TColor FMouseInColor;
	System::Uitypes::TColor FMouseOutColor;
	System::Uitypes::TCursor FMouseInCursor;
	System::Uitypes::TCursor FMouseOutCursor;
	System::Classes::TNotifyEvent FOnMouseEnter;
	System::Classes::TNotifyEvent FOnMouseLeave;
	
protected:
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Winapi::Messages::TMessage &Message);
	void __fastcall ChangeLook();
	
public:
	__fastcall virtual TW7ActiveLabel(System::Classes::TComponent* Aowner);
	__fastcall virtual ~TW7ActiveLabel();
	
__published:
	__property System::Uitypes::TColor MouseInColor = {read=FMouseInColor, write=FMouseInColor, nodefault};
	__property System::Uitypes::TColor MouseOutColor = {read=FMouseOutColor, write=FMouseOutColor, nodefault};
	__property System::Uitypes::TCursor MouseInCursor = {read=FMouseInCursor, write=FMouseInCursor, nodefault};
	__property System::Uitypes::TCursor MouseOutCursor = {read=FMouseOutCursor, write=FMouseOutCursor, nodefault};
	__property Align = {default=0};
	__property Alignment = {default=0};
	__property Anchors = {default=3};
	__property AutoSize = {default=1};
	__property BiDiMode;
	__property Caption = {default=0};
	__property Color;
	__property Constraints;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property EllipsisPosition = {default=0};
	__property Enabled = {default=1};
	__property FocusControl;
	__property Font;
	__property GlowSize = {default=0};
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowAccelChar = {default=1};
	__property ShowHint;
	__property Touch;
	__property Transparent;
	__property Layout = {default=0};
	__property Visible = {default=1};
	__property WordWrap = {default=0};
	__property OnClick;
	__property OnContextPopup;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnGesture;
	__property OnMouseActivate;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property System::Classes::TNotifyEvent OnMouseEnter = {read=FOnMouseEnter, write=FOnMouseEnter};
	__property System::Classes::TNotifyEvent OnMouseLeave = {read=FOnMouseLeave, write=FOnMouseLeave};
	__property OnStartDock;
	__property OnStartDrag;
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace W7labels */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_W7LABELS)
using namespace W7labels;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// W7labelsHPP
