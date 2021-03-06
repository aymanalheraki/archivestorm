//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "publicf.h"

#include "UsersAdd.h"
#include "UsersForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "RzButton"
#pragma link "RzPanel"
#pragma link "RzRadChk"
#pragma link "RzCmboBx"
#pragma link "AeroButtons"
#pragma resource "*.dfm"
TFUsersAdd *FUsersAdd;
//---------------------------------------------------------------------------
__fastcall TFUsersAdd::TFUsersAdd(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFUsersAdd::btnSaveClick(TObject *Sender)
{

	AnsiString vuserActive = "1";
	if(chkuserActive->Checked == true) vuserActive = "1";
	if(chkuserActive->Checked == false) vuserActive = "0";

	TDateTime nDate = Now();
	WideString strSQL = "";
	strSQL = "INSERT INTO users(userPostDate,userFullName,userLogID,userLogPassword,userActive,userNotes) VALUES ('";
	strSQL = strSQL + nDate.FormatString("YYYY-MM-DD HH:mm:ss") + "','";
	strSQL = strSQL + txtuserFullName->Text.Trim() + "','";
	strSQL = strSQL + txtuserLogID->Text.Trim() + "','";
	strSQL = strSQL + txtuserLogPassword->Text.Trim() + "',";
	strSQL = strSQL + vuserActive + ",'";
	strSQL = strSQL + txtuserNotes->Text.Trim() + "')";

	int lID = CommandSQL(strSQL);

	strSQL = "INSERT INTO usersperm(permUserID) VALUES (" + AnsiString(lID)+ ")";

	CommandSQL(strSQL);

    Close();


}
//---------------------------------------------------------------------------

void __fastcall TFUsersAdd::btnExitClick(TObject *Sender)
{
	Close();
}
//---------------------------------------------------------------------------

