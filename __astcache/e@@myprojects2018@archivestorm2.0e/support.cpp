//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "publicf.h"

#include "Support.h"
#include "Main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "RzCmboBx"
#pragma link "RzPanel"
#pragma link "RzEdit"
#pragma link "AdvEdit"
#pragma link "AeroButtons"
#pragma resource "*.dfm"
TFSupport *FSupport;
//---------------------------------------------------------------------------
__fastcall TFSupport::TFSupport(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFSupport::btnSendClick(TObject *Sender)
{
	if(txtName->Text.Trim() == "" ||  txtEmail->Text.Trim() == "")
	{
		ShowMessage("Please fill in the Parent field and the E-mail field");
		return;
	}

	TOSVersion *ver;

	AnsiString winver = ver->Major + " / " + ver->Name + " / " + ver->Minor + " / " + ver->Build + " / " + ver->ServicePackMajor;
	this->Cursor = crAppStart;

	IdSMTP1->Username = "support@astorm.net";
	IdSMTP1->Password = "#amsco100";
	IdSMTP1->Host = "astorm.net";
	IdSMTP1->Port = 25;

	TIdMessage *IdMessage1 = new  TIdMessage(NULL);

	AnsiString msg1 = "";
	msg1 = msg1 + " Name : " + txtName->Text + "<br>";
	msg1 = msg1 + " E-Mail : " + txtName->Text + "<br>";
	msg1 = msg1 + " Mobile : " + txtMobile->Text + "<br>";
	msg1 = msg1 + " Message : " +
	StringReplace(txtComment->Text.Trim(), "\n", "<br>",TReplaceFlags() << rfReplaceAll) + "<br>";


	IdMessage1->ContentType = "text/html";
	IdMessage1->Encoding = meMIME;


	IdMessage1->CharSet = "windows-1256";
	IdMessage1->Subject = "ArchiveStorm Support";
	IdMessage1->Body->Add(msg1);

	IdMessage1->From->Text = "support@astorm.net";
	IdMessage1->From->Name = txtName->Text;
	IdMessage1->Recipients->EMailAddresses = "support@astorm.net";


	try {
		IdSMTP1->Connect();
		IdSMTP1->Authenticate();

		IdSMTP1->Send(IdMessage1);
		ShowMessage("Finished Send Information to Support");
		IdSMTP1->Disconnect();
		this->Cursor = crDefault;
	}
	catch(Exception &e)
	{
	  ShowMessage("There was a problem connecting to the Internet - please make sure you're connected to the Internet and try again");
	  this->Cursor = crDefault;
	  return;
	}

	Close();
}
//---------------------------------------------------------------------------





void __fastcall TFSupport::btnExitClick(TObject *Sender)
{
	Close();
}
//---------------------------------------------------------------------------

