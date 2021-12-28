//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "splash.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "W7Classes"
#pragma link "RzLabel"
#pragma link "RzPanel"
#pragma resource "*.dfm"
TFsplash *Fsplash;
//---------------------------------------------------------------------------
__fastcall TFsplash::TFsplash(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFsplash::Timer1Timer(TObject *Sender)
{
	Close();
}
//---------------------------------------------------------------------------
void __fastcall TFsplash::Image1Click(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------

void __fastcall TFsplash::FormKeyPress(TObject *Sender, System::WideChar &Key)
{
	Close();
}
//---------------------------------------------------------------------------

