﻿//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Help.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

#pragma link "RzEdit"
#pragma link "HTMLText"
#pragma resource "*.dfm"
TFHelp *FHelp;
//---------------------------------------------------------------------------
__fastcall TFHelp::TFHelp(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFHelp::FormShow(TObject *Sender)
{
//		TResourceStream* help = new TResourceStream((int)HInstance, L"help1", L"RT_RCDATA");
//		RV->PlainText = false;
//
//		RV->Lines->LoadFromStream(help);
//		RV->Refresh();
//		RV->Update();
//		help->Free();
}
//---------------------------------------------------------------------------

void __fastcall TFHelp::FormResize(TObject *Sender)
{
		RV->Refresh();
		RV->Update();
}
//---------------------------------------------------------------------------

