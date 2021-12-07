//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "publicf.h"

#include "ImageShow.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "AdvEdit"
#pragma link "ievect"
#pragma link "ieview"
#pragma link "imageenview"
#pragma link "RzPanel"
#pragma link "AeroButtons"
#pragma link "ieopensavedlg"
#pragma link "RzLabel"
#pragma link "RzButton"
#pragma link "RzRadChk"
#pragma link "hyiedefs"
#pragma link "hyieutils"
#pragma link "iesettings"
#pragma link "iexBitmaps"
#pragma link "iexRulers"
#pragma resource "*.dfm"
TFImageShow *FImageShow;
//---------------------------------------------------------------------------
__fastcall TFImageShow::TFImageShow(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFImageShow::FormShow(TObject *Sender)
{
		AnsiString strSql = "Select * FROM addImages WHERE imageID = " + imageID;
		TLiteConnection *connDB = new TLiteConnection(NULL);
		TLiteQuery *stdQ = SelectQ(strSql,connDB);

		if(stdQ->RecordCount > 0)
		{
			TMemoryStream *st1 = (TMemoryStream*)stdQ->CreateBlobStream((TBlobField *) stdQ->FieldByName("imageArc"),bmRead);
			ImageEnVect1->IO->LoadFromStream(st1);
			ImageEnVect1->Update();
			lblImageName->Caption = stdQ->FieldByName("imageName")->AsString;
			lblImageSize->Caption = FormatFloat("##,###",(stdQ->FieldByName("imageSize")->AsInteger/1024));
			lblImageDesc->Caption = stdQ->FieldByName("imageDesc")->AsString;
			st1->Free();

		}
		stdQ->Close();
		connDB->Close();

}
//---------------------------------------------------------------------------
void __fastcall TFImageShow::FormClose(TObject *Sender, TCloseAction &Action)
{
ImageEnVect1->IO->FreeOnRelease();
}
//---------------------------------------------------------------------------

void __fastcall TFImageShow::btnPrintClick(TObject *Sender)
{
		ImageEnVect1->IO->PrintPreviewParams->MarginTop = 0;
		ImageEnVect1->IO->PrintPreviewParams->MarginBottom = 0;
		ImageEnVect1->IO->PrintPreviewParams->MarginLeft = 0;
		ImageEnVect1->IO->PrintPreviewParams->MarginRight = 0;
		ImageEnVect1->IO->DoPrintPreviewDialog(iedtMaxi,Caption,false);
}
//---------------------------------------------------------------------------
void __fastcall TFImageShow::btnSaveAsClick(TObject *Sender)
{
    SaveImageEnDialog1->FileName = lblImageName->Caption.Trim();
	if(SaveImageEnDialog1->Execute())
	{

		ImageEnVect1->IO->SaveToFile(SaveImageEnDialog1->FileName,ImageEnVect1->IO->Params->FileType);
	}
}
//---------------------------------------------------------------------------


void __fastcall TFImageShow::ImageEnVect1DblClick(TObject *Sender)
{

	if(ImageEnVect1->AutoFit == false)
	{
	   ImageEnVect1->AutoFit = true;
	   ImageEnVect1->Update();
	   ImageEnVect1->Refresh();
	}
	else
	{
	   ImageEnVect1->AutoFit = false;
	   ImageEnVect1->Update();
	   ImageEnVect1->Refresh();
	}
}
//---------------------------------------------------------------------------
void __fastcall TFImageShow::rbAutoShrinkClick(TObject *Sender)
{
	if(rbAutoShrink->Checked == true)
	{
	   ImageEnVect1->AutoFit = false;
	   ImageEnVect1->AutoShrink = true;
	   ImageEnVect1->Update();
	   ImageEnVect1->Refresh();
	}
}
//---------------------------------------------------------------------------

void __fastcall TFImageShow::rbAutoFitClick(TObject *Sender)
{
	if(rbAutoFit->Checked == true)
	{
	   ImageEnVect1->AutoFit = true;
	   ImageEnVect1->AutoShrink = false;
	   ImageEnVect1->Update();
	   ImageEnVect1->Refresh();
	}
}
//---------------------------------------------------------------------------

