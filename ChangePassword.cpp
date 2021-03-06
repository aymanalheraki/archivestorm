//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "publicf.h"

#include "ChangePassword.h"
#include "Main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "RzButton"
#pragma link "AeroButtons"
#pragma resource "*.dfm"
TFChangePassword *FChangePassword;
//---------------------------------------------------------------------------
__fastcall TFChangePassword::TFChangePassword(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFChangePassword::btnSaveClick(TObject *Sender)
{
	if(FMain->vUserPassword == txtCurrentPassword->Text.Trim())
	{
		WideString strS = "UPDATE Users set userLogPassword='" + txtNewPassword->Text.Trim() + "' WHERE UserID=" + FMain->vUserID;
		CommandSQL(strS);

		ShowMessage("Changed Password successfully");
		Close();
	}
	else
	{
		ShowMessage("Current number incorrect - please check the current number and try again");
        txtCurrentPassword->Text = "";
		txtCurrentPassword->SetFocus();
	}
}
//---------------------------------------------------------------------------
void __fastcall TFChangePassword::btnExitClick(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------
void __fastcall TFChangePassword::FormCreate(TObject *Sender)
{
	ChangeLanguage("E");
}
//---------------------------------------------------------------------------

