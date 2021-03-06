//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "publicf.h"

#include "ArcImages.h"
#include "ImageShow.h"
#include "Main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "AdvDataLabel"
#pragma link "AdvDateTimePicker"
#pragma link "AdvEdit"
#pragma link "AdvGrid"
#pragma link "AdvObj"
#pragma link "AeroButtons"
#pragma link "BaseGrid"
#pragma link "CurvyControls"
#pragma link "frxClass"
#pragma link "frxDBSet"
#pragma link "RzButton"
#pragma link "RzCmboBx"
#pragma link "RzLabel"
#pragma link "RzPanel"
#pragma link "RzRadChk"
#pragma link "ieview"
#pragma link "imageenview"
#pragma link "ievect"
#pragma link "AdvUtil"
#pragma link "hyiedefs"
#pragma link "hyieutils"
#pragma link "iesettings"
#pragma link "iexBitmaps"
#pragma link "iexRulers"
#pragma link "iexLayers"
#pragma link "iexToolbars"
#pragma link "iexUserInteractions"
#pragma link "imageenio"
#pragma link "imageenproc"
#pragma resource "*.dfm"
TFArcImages *FArcImages;

//---------------------------------------------------------------------------
__fastcall TFArcImages::TFArcImages(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFArcImages::FormCreate(TObject *Sender)
{
  if(PixelsPerInch !=96)
  {
	  ScaleBy(96,PixelsPerInch);
  }

	//--------------- DocSG

		imageSG->FixedRows = 1;
		imageSG->FixedCols = 1;
		imageSG->ColCount = 6;
		imageSG->RowCount = 2;
		imageSG->Cols[0]->Text = "";   //arcID
		imageSG->Cols[1]->Text = "id";   //arcID

		imageSG->Cols[2]->Text = "Title";

		imageSG->Cols[3]->Text = "File Name";
		imageSG->Cols[4]->Text = "File Size";
		imageSG->Cols[5]->Text = "Picture Description";




		imageSG->DefaultRowHeight = 22;

		imageSG->ColWidths[0] = 20;
		imageSG->ColWidths[1] = 0;
		imageSG->ColWidths[2] = 250;

		imageSG->ColWidths[3] = 200;
		imageSG->ColWidths[4] = 80;
		imageSG->ColWidths[5] = 75;


//		imageSG->ColumnSize->StretchColumn = 5;
//		imageSG->ColumnSize->Stretch = true;

//----------------------------------------------------------------------------
	ComboFillA(cmbMainGroup,"SELECT * FROM maingroups","mgroupName","mgroupID",true);


//----------------------------------------------------------------------------
	ComboFillA(cmbTypes,"SELECT * FROM arctypes","typeName","typeID",true);


	ComboFillA(cmbUsers,"SELECT * FROM users","userFullName","userID",true);


	  //	imageSG->Row = imageSG->RowCount - 1;

	  	FillImageSG();

	   //  Label3.Caption := Cells[ACol, 0];
//	  if(imageSG->GroupColumn != -1 && imageSG->Col >= imageSG->GroupColumn)
//	  {
//		imageSG->Col = imageSG->Col + 1;
//	  }
	  //	imageSG->GroupColumn = 2;
	//  imageSG->GroupColumn = 2;

}
//---------------------------------------------------------------------------
void __fastcall TFArcImages::FillImageSG()
{

//	imageSG->SaveFixedCells = false;
//	imageSG->AutoSizeColumns(false, 10);
//	imageSG->InsertCols(0, 1);
//
//	imageSG->ColWidths[0] = 20;
//	imageSG->QSortGroup();




	FMain->getVars();

	AnsiString str0="",str1="",str2="",str3="",str4="",str5="",str6="";
	imageSG->FixedRows = 1;

   if(txtImageSearch->Text.Trim() == "")
   {
	str0 = "";
   }
   else
   {
	str0 = " AND ( addImages.imageDesc LIKE '%" + txtImageSearch->Text.Trim() + "%' ";
	str0 = str0 + " OR addImages.imageName LIKE '%" + txtImageSearch->Text.Trim() + "%' ";
	str0 = str0 + " OR arcmain.arcSubject LIKE '%" + txtImageSearch->Text.Trim() + "%' ) ";
   }

	if(cmbMainGroup->Value > "0" )
	{
		str1 = " AND arcmain.mgroupID = " + cmbMainGroup->Value + " ";
	}
	else
	{
		str1 = "";
	}

	if(cmbSubGroup->Value > "0")
	{
		str2 = " AND arcmain.sgroupID = " + cmbSubGroup->Value + " ";
	}
	else
	{
		str2 = "";
	}
	if(cmbTypes->Value == "0")
	{
		str3="";
	}
	else
	{
		str3 = " AND arcmain.typeID=" + cmbTypes->Value + " ";
    }

	if(cmbUsers->Value == "0")
	{
		str6 = "";
	}
	else
	{
		str6 = " AND addImages.userID = " + cmbUsers->Value;
	}


	WideString strS = "";
	strS = strS + " SELECT addImages.arcID,addImages.imageDesc,addImages.imageID,addImages.imageName,";
	strS = strS + "addImages.imagePostDate,addImages.imageSize,";
	strS = strS + "users.userFullName,maingroups.mgroupName,subgroups.sgroupName,arcmain.arcSubject,";
	strS = strS + " arcTypes.typeName,arcSecurity.secName,arcmain.arcID From addImages ";
	strS = strS + " LEFT JOIN arcmain on arcmain.arcID = addImages.arcID ";
	strS = strS + " LEFT JOIN users on addImages.userID = users.userID ";
	strS = strS + " LEFT JOIN maingroups on arcmain.mgroupID = maingroups.mgroupID";
	strS = strS + " LEFT JOIN subgroups on arcmain.sgroupID = subgroups.sgroupID";
	strS = strS + " LEFT JOIN arcTypes on arcmain.typeID = arcTypes.typeID";
	strS = strS + " LEFT JOIN arcSecurity on arcmain.secID = arcSecurity.secID ";

	strS = strS + " WHERE addImages.imageID = addImages.imageID "	 + str0 + str1 + str2 + str3 + str4 + str5 + str6;

	TFDConnection *connDB = new TFDConnection(NULL);
	TFDQuery *Q = SelectQ(strS,connDB);

	SendMessage(imageSG->Handle, WM_SETREDRAW, FALSE, 0);
	if(Q->RecordCount > 0)
	{
		imageSG->RowCount = Q->RecordCount + 1;
		lblCount->Caption = Q->RecordCount;

		for(int i=0;i < Q->RecordCount; i++ )
		{
			//imageSG->Cells[0][i+1] = Q->FieldByName("")->AsAnsiString;
			imageSG->Cells[1][i+1] = Q->FieldByName("imageID")->AsInteger;
			imageSG->Cells[2][i+1] = Q->FieldByName("arcSubject")->AsAnsiString;
			imageSG->Cells[3][i+1] = Q->FieldByName("imageName")->AsAnsiString;
			imageSG->Cells[4][i+1] = FormatByteSize(Q->FieldByName("imageSize")->AsLongWord);
//			FormatFloat("##,###",(Q->FieldByName("fileSize")->AsInteger/1024));
			imageSG->Cells[5][i+1] = Q->FieldByName("imageDesc")->AsAnsiString;

			Q->Next();
		}
		imageSG->Group(2);
	}
	else
	{
		imageSG->RowCount = 2;
		imageSG->Rows[1]->Clear();
		lblCount->Caption = "0";
	}
	SendMessage(imageSG->Handle, WM_SETREDRAW, TRUE, 0);
	imageSG->Invalidate();


	Q->Close();
	connDB->Close();

}

//---------------------------------------------------------------------------
void __fastcall TFArcImages::txtImageSearchKeyPress(TObject *Sender, System::WideChar &Key)

{
	if(Key == 13)
	{
	   imageSG->UnGroup();
	   ImageEnVect1->Clear();
	   FillImageSG();
	}
}
//---------------------------------------------------------------------------
void __fastcall TFArcImages::Image2Click(TObject *Sender)
{
	  imageSG->UnGroup();
	  ImageEnVect1->Clear();
	  FillImageSG();
}
//---------------------------------------------------------------------------
void __fastcall TFArcImages::imageSGClick(TObject *Sender)
{

	if (imageSG->Cells[1][imageSG->Row] != "" && imageSG->Row != 0)
	{
		imageID = imageSG->Cells[1][imageSG->Row];

		if(isNumber(imageID.c_str()) == false)
		{
            ImageEnVect1->Clear();
			return;
		}else
		{

//		if(imageSG->IsNode(imageSG->Row) == true)
//		{
//			return;
//		}

		AnsiString strSql = "Select * FROM addImages WHERE imageID = " + imageID;
		TFDConnection *connDB = new TFDConnection(NULL);
		TFDQuery *stdQ = SelectQ(strSql,connDB);

		if(stdQ->RecordCount > 0)
		{
			TMemoryStream *st1 = (TMemoryStream*)stdQ->CreateBlobStream((TBlobField *) stdQ->FieldByName("imageArc"),bmRead);
			ImageEnVect1->IO->LoadFromStream(st1);


			AnsiString hint1 = "";
			hint1 = hint1 + "Original FileName : " + stdQ->FieldByName("imageName")->AsString;
			hint1 = hint1 + "\n" + "Image Type : " + AnsiString(ImageEnVect1->IO->Params->FileTypeStr);
			hint1 = hint1 + "\n" + "Dimensions : " + AnsiString(ImageEnVect1->Bitmap->Width) + " x " + AnsiString(ImageEnVect1->Bitmap->Height);
			hint1 = hint1 + "\n" + "Original File Size : " + FormatFloat("##,###",(stdQ->FieldByName("imageSize")->AsInteger/1024)) + " KB";
			ImageEnVect1->Hint = hint1;

				AnsiString dt = stdQ->FieldByName("imagePostDate")->AsString;
				lblFileDate->Caption = dt;

		   //	lblFileName->Caption = stdQ->FieldByName("fileName")->AsString;
            ImageEnVect1->Update();
			st1->Free();
		}
		stdQ->Close();
		connDB->Close();
       }
	}
	else
	{
		imageSG->RowCount = 2;
		imageSG->Rows[1]->Clear();
	  //	lblCount->Caption = "0";
	}


}
//---------------------------------------------------------------------------
void __fastcall TFArcImages::ImageEnVect1DblClick(TObject *Sender)
{
	if(imageSG->IsNode(imageSG->Row) == false)
	{
		TFImageShow *iShow = new TFImageShow(Application);
		iShow->imageID = imageID;
		iShow->ShowModal();
	}
}
//---------------------------------------------------------------------------
void __fastcall TFArcImages::imageSGGetAlignment(TObject *Sender, int ARow, int ACol,
		  TAlignment &HAlign, TVAlignment &VAlign)
{
	if(ACol == 0) HAlign = taCenter;
}
//---------------------------------------------------------------------------



void __fastcall TFArcImages::imageSGGetCellColor(TObject *Sender, int ARow, int ACol,
          TGridDrawState AState, TBrush *ABrush, TFont *AFont)
{
  if(imageSG->IsNode(ARow))
  {
	ABrush->Color = clGray;
	AFont->Color = clWhite;
	AFont->Style = TFontStyles() << fsBold ;
  }

}
//---------------------------------------------------------------------------

void __fastcall TFArcImages::imageSGDblClick(TObject *Sender)
{
//   //	ShowMessage(imageSG->Row);
//	if(imageSG->IsNode(imageSG->Row))
//	{
//		if(imageSG->Row == imageSG->RowCount+1 && imageSG->GetNodeState(imageSG->Row) == false)
//		{
//		   imageSG->ContractNode(imageSG->RowCount+1);
//		}
//		else
//		{
//		   imageSG->ExpandNode(imageSG->RowCount+1);
//		}
//
//		if(imageSG->Row != imageSG->RowCount+1)
//		{
//			if(imageSG->GetNodeState(imageSG->Row) == false)
//			{
//				imageSG->ContractNode(imageSG->Row);
//			}
//			else
//			{
//				imageSG->ExpandNode(imageSG->Row);
//			}
//		}
//
//	}
}
//---------------------------------------------------------------------------

void __fastcall TFArcImages::btnExpandAllClick(TObject *Sender)
{
	imageSG->ExpandAll();
}
//---------------------------------------------------------------------------

void __fastcall TFArcImages::btnCollapseAllClick(TObject *Sender)
{
	imageSG->ContractAll();
}
//---------------------------------------------------------------------------


void __fastcall TFArcImages::cmbMainGroupChange(TObject *Sender)
{
		if(cmbMainGroup->Value == "0")
		{
			cmbSubGroup->Enabled = false;
		}
		else
		{
			cmbSubGroup->Enabled = true;
			ComboFillA(cmbSubGroup,"SELECT * FROM subgroups WHERE sgroupMainGroupID = " + cmbMainGroup->Value,"sgroupName","sgroupID",true);
		}

		imageSG->UnGroup();
		ImageEnVect1->Clear();
		FillImageSG();
}
//---------------------------------------------------------------------------

void __fastcall TFArcImages::cmbSubGroupChange(TObject *Sender)
{
	imageSG->UnGroup();
	ImageEnVect1->Clear();
	FillImageSG();
}
//---------------------------------------------------------------------------

void __fastcall TFArcImages::cmbTypesChange(TObject *Sender)
{
	imageSG->UnGroup();
	ImageEnVect1->Clear();
	FillImageSG();
}
//---------------------------------------------------------------------------

void __fastcall TFArcImages::cmbUsersChange(TObject *Sender)
{
	imageSG->UnGroup();
	ImageEnVect1->Clear();
	FillImageSG();
}
//---------------------------------------------------------------------------

