//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "publicf.h"

#include "ProcAdd.h"
#include "Main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "RzCmboBx"
#pragma link "RzEdit"
#pragma link "RzPanel"
#pragma link "RzButton"
#pragma link "RzDTP"
#pragma link "AdvDateTimePicker"
#pragma link "AeroButtons"
#pragma link "RzLabel"
#pragma resource "*.dfm"
TFProcAdd *FProcAdd;
//---------------------------------------------------------------------------
__fastcall TFProcAdd::TFProcAdd(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFProcAdd::btnSaveClick(TObject *Sender)
{
   	if (cmbProcStatus->ItemIndex < 0)
	{
		ShowMessage("Please select Procedure status");
		return;
	}

	AnsiString strSQL = "INSERT INTO procmain (arcID,procPostDate,procStatus,procDesc,userID) VALUES (";
	strSQL += arcID + ",'" + Now().FormatString("YYYY-MM-DD HH:mm:ss") + "'," + cmbProcStatus->Value + ",'";
	strSQL += txtprocDesc->Text.Trim() + "'," + FMain->vUserID + ")";

 	CommandSQL(strSQL);
  Close();
}
//---------------------------------------------------------------------------

void __fastcall TFProcAdd::btnExitClick(TObject *Sender)
{
	Close();
}
//---------------------------------------------------------------------------

void __fastcall TFProcAdd::FormCreate(TObject *Sender)
{
	ComboFillA(cmbProcStatus, "SELECT * FROM procStatus WHERE procStatusID > 0 AND procStatusID != 4","procStatusName", "procStatusID", false);
}
//---------------------------------------------------------------------------

