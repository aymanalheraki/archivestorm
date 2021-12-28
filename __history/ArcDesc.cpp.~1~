//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "publicf.h"

#include "ArcDesc.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "RzEdit"
#pragma link "AdvEdit"
#pragma resource "*.dfm"
TFArcDesc *FArcDesc;
//---------------------------------------------------------------------------
__fastcall TFArcDesc::TFArcDesc(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFArcDesc::FormShow(TObject *Sender)
{
	AnsiString strSql = "Select * FROM arcmain WHERE arcID = " + arcID;

	TLiteConnection *connDB = new TLiteConnection(NULL);
	TLiteQuery *Q = SelectQ(strSql,connDB);

	lblArcSubject->Caption = Q->FieldByName("arcSubject")->AsString;
	txtDesc->Text = Q->FieldByName("arcDesc")->AsString;
}
//---------------------------------------------------------------------------
