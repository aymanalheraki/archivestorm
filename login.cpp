//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "publicf.h"

#include "login.h"
#include "Main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "RzLabel"
#pragma link "RzPanel"
#pragma link "RzEdit"
#pragma resource "*.dfm"
TFlogin *Flogin;

//---------------------------------------------------------------------------
__fastcall TFlogin::TFlogin(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFlogin::btnLogInClick(TObject *Sender)
{
		FMain->vLogInStatus = 0;
		WideString strS = "";
		strS = strS + "Select * From users WHERE userLogID='" + txtUserID->Text.Trim();
		strS = strS + "' AND userLogPassword='" + txtUserPassword->Text.Trim();
		strS = strS + "' AND userActive=1";

		TFDConnection *connDB = new TFDConnection(NULL);
		TFDQuery *Qc = SelectQ(strS,connDB);

			if (Qc->RecordCount > 0)
			{
				FMain->vUserID = Qc->FieldByName("userID")->AsInteger;
				FMain->vUserFullName = Qc->FieldByName("userFullName")->AsAnsiString;
				FMain->vUserPassword = Qc->FieldByName("userLogPassword")->AsAnsiString;

				AnsiString strSql = "SELECT * FROM UsersPerm WHERE permUserID = " + FMain->vUserID;

				TFDQuery *Q = SelectQ(strSql,connDB);


				FMain->vPermUsers = Q->FieldByName("permUsers")->AsInteger;
				FMain->vPermVars = Q->FieldByName("permVars")->AsInteger;
				FMain->vPermHijri = Q->FieldByName("permHijri")->AsInteger;
				FMain->vPermArcAdd = Q->FieldByName("permArcAdd")->AsInteger;
				FMain->vPermArcEdit = Q->FieldByName("permArcEdit")->AsInteger;
				FMain->vPermArcDel = Q->FieldByName("permArcDel")->AsInteger;
				FMain->vPermArcImageAdd = Q->FieldByName("permArcImageAdd")->AsInteger;
				FMain->vPermArcImageDel = Q->FieldByName("permArcImageDel")->AsInteger;
				FMain->vPermArcPrint = Q->FieldByName("permArcPrint")->AsInteger;
				FMain->vPermArcProcAdd = Q->FieldByName("permArcProcAdd")->AsInteger;
				FMain->vPermArcGroupAdd = Q->FieldByName("permArcGroupAdd")->AsInteger;
				FMain->vPermArcTypeAdd = Q->FieldByName("permArcTypeAdd")->AsInteger;
				FMain->vPermChangePassword = Q->FieldByName("permChangePassword")->AsInteger;
				FMain->vPermBackup = Q->FieldByName("permBackup")->AsInteger;
				FMain->vPermRestore = Q->FieldByName("permRestore")->AsInteger;
				FMain->vPermLogReport = Q->FieldByName("permLogReport")->AsInteger;
				FMain->vPermSecret = Q->FieldByName("permSecret")->AsInteger;
				FMain->vPermRepaire = Q->FieldByName("permRepaire")->AsInteger;
				FMain->vPermPath = Q->FieldByName("permPath")->AsInteger;
				FMain->vPermArcImageExport = Q->FieldByName("permArcImageExport")->AsInteger;
                FMain->vPermManageClass = Q->FieldByName("permManageClass")->AsInteger;
				FMain->vLogInStatus = 1;
				UpdateRegKey("arcUserID",txtUserID->Text.Trim());
				this->Close();

			}
			else
			{
				errorFlag = errorFlag + 1;
				lblMemo->Caption = "";
				lblMemo->Font->Color = clRed;
				AnsiString lbb = "Username or password not correct";
				lblMemo->Caption = lbb;

				FMain->vLogInStatus = 0;

				if(errorFlag > 3)
				{
				   Application->Terminate();
				}
				else
				{
					return;
                }

			}
			Qc->Close();
			connDB->Close();
			return;
}
//---------------------------------------------------------------------------
void __fastcall TFlogin::txtUserIDKeyPress(TObject *Sender, System::WideChar &Key)

{
	if(Key == 13)
	{
		txtUserPassword->SetFocus();
	}
}
//---------------------------------------------------------------------------

void __fastcall TFlogin::txtUserPasswordKeyPress(TObject *Sender, System::WideChar &Key)

{
	if(Key == 13)
	{
   	   btnLogInClick(Sender);
	}
}
//---------------------------------------------------------------------------
void __fastcall TFlogin::FormShow(TObject *Sender)
{
    FMain->vLogInStatus = 0;
	txtUserPassword->SetFocus();
	ChangeLanguage("E");
	if(ReadRegistry("arcUserID") != "0")
	{
		txtUserID->Text = ReadRegistry("arcUserID");
		AnsiString strS = "Select * From users WHERE userLogID='" + txtUserID->Text.Trim() + "' AND userActive=1";

		TFDConnection *connDB = new TFDConnection(NULL);
		TFDQuery *Qc = SelectQ(strS,connDB);
			if(Qc->RecordCount > 0)
			{
				if(Qc->FieldByName("userLogPassword")->AsAnsiString == "admin")
				{
					txtUserPassword->Text = "admin";
					txtUserPassword->PasswordChar = 0;
					lblMemo->Caption = "You can change password from help menu";
				}
				else
				{
					txtUserPassword->PasswordChar = '*';
				}
			}
			else
			{
				txtUserPassword->PasswordChar = '*';
			}
	}


	if(txtUserID->Text == "")
	{
		txtUserID->Text = "admin";
		txtUserPassword->Text = "admin";
		lblMemo->Caption = "You can change password from help menu";
    }

}
//---------------------------------------------------------------------------
void __fastcall TFlogin::btnExitClick(TObject *Sender)
{
    FMain->vLogInStatus = 0;
	Application->Terminate();
}
//---------------------------------------------------------------------------

