//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "about.h"
#include "Main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "RzLabel"
#pragma link "RzEdit"
#pragma link "RzPanel"
#pragma resource "*.dfm"
TFabout *Fabout;
//---------------------------------------------------------------------------
__fastcall TFabout::TFabout(TComponent* Owner)
	: TForm(Owner)
{
  //	SetWindowLong(RichView1->Handle,GWL_EXSTYLE, WS_EX_LAYOUTRTL|WS_EX_NOINHERITLAYOUT);
  //	InvalidateRect(RichView1->Handle,0,True);
}
//---------------------------------------------------------------------------
void __fastcall TFabout::Image1Click(TObject *Sender)
{
	Close();
}
//---------------------------------------------------------------------------
void __fastcall TFabout::FormCreate(TObject *Sender)
{
   lblVer->Caption = FMain->programVer;
}
//---------------------------------------------------------------------------


void __fastcall TFabout::FormShow(TObject *Sender)
{
//		TResourceStream* eu = new TResourceStream((int)HInstance, L"eula1", L"RT_RCDATA");
//	    RV->PlainText = false;
//		RV->Lines->LoadFromStream(eu);
//		RV->Refresh();
//        eu->Free();
}
//---------------------------------------------------------------------------

