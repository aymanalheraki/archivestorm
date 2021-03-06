//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "publicf.h"

#include "Vars.h"
#include "Main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "ieview"
#pragma link "imageenview"
#pragma link "RzButton"
#pragma link "RzEdit"
#pragma link "RzPanel"
#pragma link "RzTabs"
#pragma link "AdvEdit"
#pragma link "RzRadChk"
#pragma link "RzCmboBx"
#pragma link "AeroButtons"
#pragma link "hyiedefs"
#pragma link "hyieutils"
#pragma link "iesettings"
#pragma link "iexBitmaps"
#pragma link "AdvOfficeButtons"
#pragma link "iexRulers"
#pragma link "iexLayers"
#pragma link "iexToolbars"
#pragma link "iexUserInteractions"
#pragma link "imageenio"
#pragma link "imageenproc"
#pragma resource "*.dfm"
TFVars *FVars;
//---------------------------------------------------------------------------
__fastcall TFVars::TFVars(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFVars::btnSaveClick(TObject *Sender)
{




	AnsiString strSQL = "UPDATE vars SET logo = :blobImage ";
	strSQL = strSQL + ",name1='" + txtName1->Text.Trim();
	strSQL = strSQL + "',name2='" + txtName2->Text.Trim();
	strSQL = strSQL + "',name3='" + txtName3->Text.Trim();
	strSQL = strSQL + "' WHERE id=1";


	  TMemoryStream *stImage = new TMemoryStream();
	  if(ImageEnView1->IsEmpty2)
	  {
		stImage->Clear();
	  }
	  else
	  {
		ImageEnView1->IO->SaveToStreamPNG(stImage);
	  }

	try
	{

		TFDConnection *connDB = new TFDConnection(Application);

		connDB->Params->Database = FMain->DataFile;
		connDB->Open();
		TFDQuery *stdQ = new TFDQuery(NULL);
		stdQ->Connection = connDB;
		stdQ->SQL->Text = strSQL;
		stdQ->ParamByName("blobImage")->LoadFromStream(stImage,ftBlob);
		stdQ->ExecSQL();
		stdQ->Close();
		connDB->Close();


	}catch(Exception *e)
	{
		ShowMessage(e->Message);
	}

	ShowMessage("Successfully Saved");
}
//---------------------------------------------------------------------------

void __fastcall TFVars::FormShow(TObject *Sender)
{

	AnsiString strSQL = "SELECT * FROM vars WHERE id=1";
	TFDConnection *connDB = new TFDConnection(NULL);
	TFDQuery *Q = SelectQ(strSQL,connDB);
	int vDateC = Q->FieldByName("dateC")->AsInteger;
	txtName1->Text = Q->FieldByName("Name1")->AsAnsiString;
	txtName2->Text = Q->FieldByName("Name2")->AsAnsiString;
	txtName3->Text = Q->FieldByName("Name3")->AsAnsiString;

	if(Q->FieldByName("logo")->IsNull == false)
	{
		TStream *stImage = Q->CreateBlobStream((TBlobField *) Q->FieldByName("logo"),bmRead);
		ImageEnView1->IO->LoadFromStreamPNG(stImage);
	}

		Q->Close();
		connDB->Close();

	oldName1 = txtName1->Text;
	oldName2 = txtName2->Text;
	oldName3 = txtName3->Text;

}
//---------------------------------------------------------------------------

void __fastcall TFVars::btnGetImageClick(TObject *Sender)
{
	if(OpenPictureDialog1->Execute())
	{
		ImageEnView1->IO->LoadFromFileAuto(OpenPictureDialog1->FileName);
	}
}
//---------------------------------------------------------------------------

void __fastcall TFVars::btnDeleteImageClick(TObject *Sender)
{
	ImageEnView1->Clear();
	ImageEnView1->Blank();
}
//---------------------------------------------------------------------------






void __fastcall TFVars::btnExitClick(TObject *Sender)
{
    Close();
}
//---------------------------------------------------------------------------

