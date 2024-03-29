// ---------------------------------------------------------------------------

#include <vcl.h>
#include <System.AnsiStrings.hpp>
#pragma hdrstop
#include "publicf.h"

#include "RegisterPC.h"
#include "Main.h"
// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "RzCmboBx"
#pragma link "RzPanel"
#pragma link "RzEdit"
#pragma link "RzLabel"
#pragma link "AdvEdit"
#pragma link "AeroButtons"
#pragma resource "*.dfm"
TFRegisterPC *FRegisterPC;
AnsiString snR, RegNum;

// ---------------------------------------------------------------------------
__fastcall TFRegisterPC::TFRegisterPC(TComponent* Owner) : TForm(Owner) {
}

// ---------------------------------------------------------------------------
void __fastcall TFRegisterPC::FormCreate(TObject *Sender) {
	snR = StringToHex(AnsiString(FMain->ComputerID).c_str());
	txtHDDSerial->Text = snR;

	AnsiString encc = myEncrypt(snR.c_str(), AnsiString("#radah99").c_str());

	RegNum = encc.c_str();
}
// ---------------------------------------------------------------------------

void __fastcall TFRegisterPC::btnRegisterClick(TObject *Sender) {
	if (txtRegisterKey->Text.Trim().Length() == 0) {
		ShowMessage("Please enter the registration number before pressing Activate");
		return;
	}

	AnsiString r1 = RegNum.Trim();

	if (r1.Trim() == txtRegisterKey->Text.Trim()) {
		ShowMessage("The Number is Correct - Restart the program to work on the active version");

		Application->Terminate();
	}
	else {
		ShowMessage("Invalid input number - please check numbers and case and try again");
		txtRegisterKey->SetFocus();
		return;
	}

   //	WriteRegistry(RegNum);
	UpdateRegKey("ArchiveStormKey",RegNum);
	// if( == 1)
	// {
	// ShowMessage("��� ����� ������� �����");
	// }
}
// ---------------------------------------------------------------------------


void __fastcall TFRegisterPC::btnSendEmailClick(TObject *Sender) {
	if (txtName->Text.Trim() == "" || txtEmail->Text.Trim() == "" )
	{
		ShowMessage("All fields must be filled in to correspond with the company");
		return;
	}

	this->Cursor = crAppStart;

	IdSMTP1->Username = "support@astorm.net";
	IdSMTP1->Password = "#amsco100";
	IdSMTP1->Host = "astorm.net";
	IdSMTP1->Port = 25;
	TIdMessage *IdMessage1 = new TIdMessage(NULL);

	// IdMessage1->Subject = ;
	AnsiString msg1 = "";
	msg1 = msg1 + " Program owner : " + txtName->Text + "<br>";
	msg1 = msg1 + " E-Mail : " + txtEmail->Text + "<br>";
	msg1 = msg1 + " Mobile : " + txtMobile->Text + "<br>";

	msg1 = msg1 + " Program version : " + FMain->programVer + "<br>";
	msg1 = msg1 + " Computer No : " + txtHDDSerial->Text.Trim() + "<br>";
//	const char *s1 = AnsiString("\n").c_str();
//	const char *s2 = AnsiString("<br>").c_str();

	msg1 = msg1 + " Pay Information : " + StringReplace
		(txtMoneyInfo->Text.Trim(), "\n", "<br>",
		TReplaceFlags() << rfReplaceAll) + "<br>";

	// IdMessage1->IsEncoded = true;
	IdMessage1->ContentType = "text/html";
	// IdMessage1->AddHeader("Content-Type: text/html; charset=windows-1256");

	// TIdTransfer *Tr;

	// IdMessage1->Encoding = meMIME;
	// TEncoding *te = NULL;;
	IdMessage1->Encoding = meMIME;

	IdMessage1->CharSet = "windows-1256";
	IdMessage1->Subject = "Activate ArchiveStorm";
	IdMessage1->Body->Add(msg1);

	IdMessage1->From->Text = "support@astorm.net";
	IdMessage1->From->Name = "Lite Archiving System";
	IdMessage1->Recipients->EMailAddresses = "support@astorm.net";
	// IdMessage1->Body->Text = AnsiToUtf8(msg1);
	try {
		IdSMTP1->Connect();
		IdSMTP1->Authenticate();

		// IdMessage1->Headers = IdMessage1->LastGeneratedHeaders;

		IdSMTP1->Send(IdMessage1);
		ShowMessage("Registration data and device code were sent to the AStorm Company");
		IdSMTP1->Disconnect();
		this->Cursor = crDefault;
	}
	catch (Exception &e) {
		ShowMessage(
			"There was a problem connecting to the Internet - please make sure you're connected to the Internet and try again");
		this->Cursor = crDefault;
		return;
	}

}
// ---------------------------------------------------------------------------



void __fastcall TFRegisterPC::btnExitClick(TObject *Sender)
{
	Close();
}
//---------------------------------------------------------------------------


