//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "publicf.h"

#include "UsersEdit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "RzButton"
#pragma link "RzPanel"
#pragma link "RzRadChk"
#pragma link "RzCmboBx"
#pragma link "AeroButtons"
#pragma resource "*.dfm"
TFUsersEdit *FUsersEdit;
//---------------------------------------------------------------------------
__fastcall TFUsersEdit::TFUsersEdit(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFUsersEdit::FormShow(TObject *Sender)
{
	AnsiString strSql = "Select * FROM users WHERE UserID=" + UserID;
	TFDConnection *connDB = new TFDConnection(NULL);
	TFDQuery *Q = SelectQ(strSql,connDB);

	if(Q->RecordCount > 0)
	{
		txtuserID->Text = Q->FieldByName("userID")->AsInteger;
		txtuserFullName->Text = Q->FieldByName("userFullName")->AsString;
		txtuserLogID->Text = Q->FieldByName("userLogID")->AsString;
		txtuserLogPassword->Text = Q->FieldByName("userLogPassword")->AsString;
		txtuserNotes->Text = Q->FieldByName("userNotes")->AsString;
		chkuserActive->Checked = Q->FieldByName("userActive")->AsInteger;
		oldUserName = txtuserFullName->Text;
		oldLogID = txtuserLogID->Text;
	}
	Q->Close();
}
//---------------------------------------------------------------------------
void __fastcall TFUsersEdit::btnExitClick(TObject *Sender)
{
	Close();
}
//---------------------------------------------------------------------------

void __fastcall TFUsersEdit::btnSaveClick(TObject *Sender)
{
	TDateTime dateA = Now();
	AnsiString dtpE = ToDBGregDateTime(dateA);
	AnsiString dtpA = GetOADate(dateA);

	AnsiString vuserActive = "1";
	if(chkuserActive->Checked == true) vuserActive = "1";
	if(chkuserActive->Checked == false) vuserActive = "0";

	WideString strSQL = "";
	strSQL = "UPDATE users SET userFullName='" + txtuserFullName->Text.Trim();
	strSQL = strSQL + "',userLogID='" + txtuserLogID->Text.Trim();
	strSQL = strSQL + "',userLogPassword='" + txtuserLogPassword->Text.Trim();
	strSQL = strSQL + "',userNotes='" + txtuserNotes->Text.Trim();
	strSQL = strSQL + "',userActive=" + vuserActive;
	strSQL = strSQL + " WHERE UserID=" + UserID;
	CommandSQL(strSQL);

	Close();
}
//---------------------------------------------------------------------------

