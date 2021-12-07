//---------------------------------------------------------------------------

#include <vcl.h>
#include <StrUtils.hpp>
#include <SysUtils.hpp>
#include <shlobj.h>
#include <System.hpp>
#pragma hdrstop
#include "publicf.h"

#include "AddImages.h"
#include "Main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "ieview"
#pragma link "imageenview"
#pragma link "iemview"
#pragma link "ievect"
#pragma link "AdvEdit"
#pragma link "RzPanel"
#pragma link "ieopensavedlg"
#pragma link "AdvGrid"
#pragma link "AdvObj"
#pragma link "BaseGrid"
#pragma link "RzShellDialogs"
#pragma link "RzTabs"
#pragma link "AeroButtons"
#pragma link "iemio"
#pragma link "RzLabel"
#pragma link "RzCmboBx"
#pragma link "imageenio"
#pragma link "W7Labels"
#pragma link "AdvUtil"
#pragma link "hyiedefs"
#pragma link "hyieutils"
#pragma link "iesettings"
#pragma link "iexBitmaps"
#pragma link "iexRulers"
#pragma link "iexLayers"
#pragma link "iexToolbars"
#pragma resource "*.dfm"
TFAddImages *FAddImages;
//---------------------------------------------------------------------------
__fastcall TFAddImages::TFAddImages(TComponent* Owner)
	: TForm(Owner)
{
//SetWindowLong(ImageEnMView1->Handle,GWL_EXSTYLE, WS_EX_LAYOUTRTL);
//InvalidateRect(ImageEnMView1->Handle,0,True);
}
//---------------------------------------------------------------------------

void __fastcall TFAddImages::FormCreate(TObject *Sender)
{
		imageSG->FixedCols = 0;
		imageSG->FixedRows = 1;
		imageSG->FixedCols = 1;
		imageSG->ColCount = 9;
		imageSG->RowCount = 2;

		imageSG->Cols[0]->Text = "ã";
		imageSG->Cols[1]->Text = "";
		imageSG->Cols[2]->Text = "";
		imageSG->Cols[3]->Text = "";
		imageSG->Cols[4]->Text = "Image Name";	 //
		imageSG->Cols[5]->Text = "Image size";	 //
		imageSG->Cols[6]->Text = "Addition date";
		imageSG->Cols[7]->Text = "Image Description";
		imageSG->Cols[8]->Text = "";


		imageSG->DefaultRowHeight = 24;

		imageSG->ColWidths[0] = 35;
		imageSG->ColWidths[1] = 0;

		imageSG->ColWidths[2] = 24;
		imageSG->ColWidths[3] = 24;

		imageSG->ColWidths[4] = 200;
		imageSG->ColWidths[5] = 70;
		imageSG->ColWidths[6] = 150;
		imageSG->ColWidths[7] = 200;
		imageSG->ColWidths[8] = 22;

		imageSG->ColumnSize->Stretch = true;
		imageSG->ColumnSize->StretchColumn = 7;

		imageDescChange = 0;

}
//----------------------------------------------------------------------------
void __fastcall TFAddImages::FormShow(TObject *Sender)
{
  if(PixelsPerInch != 96)
  {
	  ScaleBy(96,PixelsPerInch);
  }

	FillImagesSG();

}
//---------------------------------------------------------------------------
  void __fastcall TFAddImages::FillImagesSG()
{
	AnsiString str0="",str1="",str2="",str3="";


//   if(txtImageSearch->Text.Trim() == "")
//   {
//	str0 = "";
//   }
//   else
//   {
//	str0 = " AND ( addImages.imageDesc LIKE '%" + txtImageSearch->Text.Trim() + "%' ";
//	str0 = str0 + " OR addImages.imageName LIKE '%" + txtImageSearch->Text.Trim() + "%' ) ";
//   }


	WideString sql = "";
	sql += " SELECT addImages.*,users.userFullName From addImages ";
	sql += " LEFT JOIN users on addImages.userID = users.userID ";
	sql += " WHERE addImages.arcID = " + arcID;

	TLiteConnection *connDB = new TLiteConnection(NULL);
	TLiteQuery *Q = SelectQ(sql,connDB);
	SendMessage(imageSG->Handle, WM_SETREDRAW, FALSE, 0);
	if(Q->RecordCount > 0)
	{
		imageSG->RowCount = Q->RecordCount + 1;
		lblImageCount->Caption = Q->RecordCount;
		for(int i=0;i<Q->RecordCount;i++)
		{
			imageSG->Cells[0][i+1] = i+1;
			imageSG->Cells[1][i+1] = Q->FieldByName("imageID")->AsString;
			imageSG->Cells[4][i+1] = Q->FieldByName("imageName")->AsString;
			imageSG->Cells[5][i+1] = FormatByteSize(Q->FieldByName("imageSize")->AsLongWord);
			imageSG->Cells[6][i+1] = Q->FieldByName("imagePostDate")->AsDateTime;
			imageSG->Cells[7][i+1] = Q->FieldByName("imageDesc")->AsAnsiString;
			imageSG->Cells[8][i+1] = Q->FieldByName("userFullName")->AsAnsiString;

			Q->Next();
		}
	}
	else
	{
		imageSG->RowCount = 2;
		imageSG->Rows[1]->Clear();
	}
	SendMessage(imageSG->Handle, WM_SETREDRAW, TRUE, 0);
	imageSG->Invalidate();
	Q->Close();
	connDB->Close();
}

//---------------------------------------------------------------------------
void __fastcall TFAddImages::btnGetImageFromFileClick(TObject *Sender)
{

//	ImageEnVect1->Clear();
//	if(OpenImageEnDialog1->Execute())
//	{
//		lblFilesSaved->Caption = "File Save to DB : 1 /" + AnsiString(OpenImageEnDialog1->FilesW->Count);
//		for(int i=0;i < OpenImageEnDialog1->FilesW->Count;i++)
//		{
//			int vFS = FileSizeByName(OpenImageEnDialog1->FilesW->Strings[i]);
//			if(vFS < 100000000)
//			{
//			vImageFileName =  Sysutils::ExtractFileName(OpenImageEnDialog1->FilesW->Strings[i]);
//			ImageEnMView1->MIO->LoadFromFile(OpenImageEnDialog1->FilesW->Strings[i]);
//
//			ImageEnMView1->Update();
//			scanFlag = 2;
//			SaveImage();
//			lblFilesSaved->Caption = "File Save to DB : " + AnsiString(i+1) + " / " + AnsiString(OpenImageEnDialog1->FilesW->Count);
//			lblFilesSaved->Update();
//			}
//			else
//			{
//					lblMSG->Caption = "ÇáãáÝÇÊ ÃßÈÑ ãä 100 ãíÌÇ áã íÊã ÍÝÙåÇ";
//			}
//		}
//
//
//		FillImagesSG();
//	 }





 	ImageEnMView1->Clear();

	if (OpenImageEnDialog1->Execute())
	{
		lblFilesSaved->Caption = "File Save to DB : 1 /" + AnsiString(OpenImageEnDialog1->FilesW->Count);
		int i;
		for (i = 0; i < OpenImageEnDialog1->FilesW->Count; i++)
		{
			int vFS = FileSizeByName(OpenImageEnDialog1->FilesW->Strings[i]);
			if (vFS < 100000000)
			{
				vImageFileName = Sysutils::ExtractFileName(OpenImageEnDialog1->FilesW->Strings[i]);
				ImageEnMView1->MIO->LoadFromFileAuto(OpenImageEnDialog1->FilesW->Strings[i]);

				ImageEnMView1->Update();
				scanFlag = 2;
				SaveImage();
				lblFilesSaved->Caption = "File Save to DB : " + AnsiString(i + 1) + " / " + AnsiString(OpenImageEnDialog1->FilesW->Count);
				lblFilesSaved->Update();
			}
			else {
				lblMSG->Caption = "Files size Greater then 100 MB Not saved";
			}
		}

		AnsiString msg1 = "Count of Images Saved " + AnsiString(i);
		msg1 = msg1 + " " + "Successfully";

		FillImagesSG();

		ShowMessage(msg1);

	}

}
//---------------------------------------------------------------------------

void __fastcall TFAddImages::btnGetImageFromScannerClick(TObject *Sender)
{

		TIEAcquireApis a;
		a.Contains(ieaTwain);
		a.Contains(ieaWIA);
		a.Contains(ieaDCIM);
		ImageEnMView1->MIO->AcquireParams->AutoFeed = true;
		if(ImageEnMView1->MIO->SelectAcquireSource(a))
		{
			if(ImageEnMView1->MIO->Acquire() )
			{
				scanFlag = 1;
				SaveImage();
				FillImagesSG();
				if(imageSG->RowCount > 0)
				{
					imageSG->Row = imageSG->RowCount - 1;
				}
			}
			ImageEnMView1->MIO->AcquireClose();
		}

}
//---------------------------------------------------------------------------
void __fastcall TFAddImages::FormClose(TObject *Sender, TCloseAction &Action)

{
		 ImageEnVect1->IO->FreeOnRelease();
		 ImageEnVect1->IO->AcquireClose();


}
//---------------------------------------------------------------------------

void __fastcall TFAddImages::SaveImage()
{

	TDateTime curDate = Now();
	AnsiString curHDate = GetOADate(curDate) + GetTime(curDate);


   //	ShowMessage(ImageEnMView1->ImageCount);

	if(ImageEnMView1->ImageCount > 0)
	{
	   for(int x = 0;x< ImageEnMView1->ImageCount;x++)
	   {
				TMemoryStream *streamIN = new TMemoryStream();

				ImageEnMView1->SelectImage(x);
				ImageEnMView1->CopyToIEBitmap(x, ImageEnVect2->IEBitmap);

				ImageEnVect2->RemoveAllObjects();
				ImageEnMView1->MIO->Params[0]->ImagingAnnot->CopyToTImageEnVect(ImageEnVect2);
				ImageEnVect2->Update();


				ImageEnVect2->IO->Params->JPEG_Quality = 80;
				ImageEnVect2->IO->SaveToStreamJpeg(streamIN);
				if(scanFlag == 1)
				{
				   	AnsiString fn = txtImageName->Text.Trim();
                    if(fn == "") fn = "imageScan";
					 vImageFileName = fn + " " + AnsiString(x+1);
				}


			 AnsiString	strSQL = "Insert into addImages (arcID,imageUserID,imagePostDate,";
			 strSQL = strSQL + "imageName,imageSize,imageArc) VALUES (";
			 strSQL = strSQL + arcID + "," + FMain->vUserID + ",'" + Now().FormatString("YYYY-MM-DD HH:mm:ss") + "','";
			 strSQL = strSQL + vImageFileName + "'," + streamIN->Size + ",:blobImage)";

			 ImageEnVect2->IO->SaveToStreamJpeg(streamIN);
			try
			{
				TLiteConnection *connDB = new TLiteConnection(Application);

				connDB->Database = FMain->DataFile;
				connDB->Options->Direct = true;
				connDB->Options->UseUnicode = true;
				connDB->Connected = true;
				TLiteQuery *stdQ = new TLiteQuery(NULL);
				stdQ->Connection = connDB;
				stdQ->LockMode = lmOptimistic;
				stdQ->CheckMode = cmRefresh;
				stdQ->SQL->Text = strSQL;
				stdQ->ParamByName("blobImage")->LoadFromStream(streamIN,ftBlob);
				stdQ->ExecSQL();
				stdQ->Close();
				connDB->Close();
			}catch(Exception *e)
			{
				ShowMessage(e->Message);
			}

			 streamIN->Free();

			// FormShow(Sender);
		}

		ImageEnMView1->Clear();
	}
}
//---------------------------------------------------------------------------
void __fastcall TFAddImages::btnPrintClick(TObject *Sender)
{

	if(!ImageEnVect1->IsEmpty2)
	{

		ImageEnVect1->IO->PrintPreviewParams->MarginTop = 0;
		ImageEnVect1->IO->PrintPreviewParams->MarginBottom = 0;
		ImageEnVect1->IO->PrintPreviewParams->MarginLeft = 0;
		ImageEnVect1->IO->PrintPreviewParams->MarginRight = 0;
		ImageEnVect1->IO->DoPrintPreviewDialog(iedtMaxi,Caption,false);
	}
	else
	{
		ShowMessage("There is no picture to print");
    }

}
//---------------------------------------------------------------------------


void __fastcall TFAddImages::ImageEnVect1DblClick(TObject *Sender)
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



void __fastcall TFAddImages::ImageEnVect1Progress(TObject *Sender, int per)
{
	PB1->Position = per;
}
//---------------------------------------------------------------------------



void __fastcall TFAddImages::imageSGCanEditCell(TObject *Sender, int ARow, int ACol,bool &CanEdit)
{
		if(ACol == 7)
		{
			CanEdit = true;
		}
		else
		{
			CanEdit = false;
		}
}
//---------------------------------------------------------------------------

void __fastcall TFAddImages::imageSGCellChanging(TObject *Sender, int OldRow, int OldCol,int NewRow, int NewCol, bool &Allow)
{
	 if(imageDescChange == 1)
	 {
		 if(OldCol == 7)
		 {
			AnsiString str22 = "UPDATE addImages SET imageDesc='";
			str22 = str22 + imageSG->Cells[OldCol][OldRow] + "' WHERE imageID=" + imageID;

			CommandSQL(str22);
			imageDescChange = 0;
			FillImagesSG();

		 }
	 }




}
//---------------------------------------------------------------------------

void __fastcall TFAddImages::imageSGClick(TObject *Sender)
{
	if (imageSG->Cells[0][imageSG->Row] != "" && imageSG->Row != 0)
	{
		imageID = imageSG->Cells[1][imageSG->Row];
		bool a1 = true;
		imageSGRowChanging(Sender, -1, imageSG->Row,a1);
		AnsiString strSql = "Select * FROM addImages WHERE imageID = " + imageID;
		TLiteConnection *connDB = new TLiteConnection(NULL);
		TLiteQuery *stdQ = SelectQ(strSql,connDB);
		TMemoryStream *st1 = (TMemoryStream*)stdQ->CreateBlobStream((TBlobField *) stdQ->FieldByName("imageArc"),bmRead);
		vImageFileName = stdQ->FieldByName("imageName")->AsString;
		ImageEnVect1->IO->LoadFromStream(st1);
//		FillFilesSG();
	}
	else
	{
		imageSG->RowCount = 2;
		imageSG->Rows[1]->Clear();
	}
}
//---------------------------------------------------------------------------

void __fastcall TFAddImages::imageSGDblClickCell(TObject *Sender, int ARow, int ACol)

{
	int aa = 0;
	if(ACol == 2 && ARow > 0 && imageSG->GetImageIdx(2,ARow,aa) == true)
	{
		if (Application->MessageBoxA(L"The file will be permanently deleted from the database - are you ok?",L"Delete alert",MB_YESNO | MB_ICONQUESTION ) == IDYES)
		{
			AnsiString imageID = imageSG->Cells[1][imageSG->Row];
			AnsiString strSQL = "DELETE FROM addImages WHERE imageID = " + imageID;
			CommandSQL(strSQL);

			AnsiString VChanges = "";
			VChanges = VChanges + "Attached file deleted : " +  imageSG->Cells[3][imageSG->Row]  + "\n";
			//SaveLog("16","7",VChanges);
            ImageEnVect1->Clear();
			FillImagesSG();
		}
	}
	if(ACol == 3 && ARow > 0 && imageSG->GetImageIdx(3,ARow,aa) == true)
	{
		SaveImageEnDialog1->FileName = imageSG->Cells[4][imageSG->Row];
		if(SaveImageEnDialog1->Execute())
		{
			if(SaveImageEnDialog1->Execute())
			{

				ImageEnVect1->IO->SaveToFile(SaveImageEnDialog1->FileName,ImageEnVect1->IO->Params->FileType);
			}
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TFAddImages::imageSGEditChange(TObject *Sender, int ACol, int ARow,
          UnicodeString Value)
{
	imageDescChange = 1;
}
//---------------------------------------------------------------------------

void __fastcall TFAddImages::imageSGGetAlignment(TObject *Sender, int ARow, int ACol,
          TAlignment &HAlign, TVAlignment &VAlign)
{
	if(ACol == 6 && ARow != 0) HAlign = taCenter;
}
//---------------------------------------------------------------------------

void __fastcall TFAddImages::imageSGGetCellCursor(TObject *Sender, int ACol, int ARow,
          int X, int Y, TCursor &ACursor)
{
   if(ARow == imageSG->Row)
   {
		if(ACol == 2||ACol==3)  ACursor =  crHandPoint;
   }
}
//---------------------------------------------------------------------------


void __fastcall TFAddImages::Image1Click(TObject *Sender)
{
	FillImagesSG();
}
//---------------------------------------------------------------------------



void __fastcall TFAddImages::txtImageSearchKeyPress(TObject *Sender, System::WideChar &Key)

{
	 if(Key == 13)
	 {
		FillImagesSG();
     }
}
//---------------------------------------------------------------------------






void __fastcall TFAddImages::imageSGKeyPress(TObject *Sender, System::WideChar &Key)

{
	 if(imageDescChange == 1)
	 {
		 if(imageSG->Col == 7 && Key == 13)
		 {
			AnsiString str22 = "UPDATE addImages SET imageDesc='";
			str22 = str22 + imageSG->Cells[7][imageSG->Row] + "' WHERE imageID=" + imageID;

			CommandSQL(str22);
			imageDescChange = 0;
			FillImagesSG();

		 }
	 }
}
//---------------------------------------------------------------------------

void __fastcall TFAddImages::imageSGRowChanging(TObject *Sender, int OldRow, int NewRow,
          bool &Allow)
{
			if(FMain->vPermArcImageDel == 1)
			{
				imageSG->RemoveImageIdx(2,OldRow);
				imageSG->AddImageIdx(2,NewRow,0,Advgrid::haCenter,Advgrid::vaCenter);
			}

			if(FMain->vPermArcImageExport == 1)
			{
				imageSG->RemoveImageIdx(3,OldRow);
				imageSG->AddImageIdx(3,NewRow,1,Advgrid::haCenter,Advgrid::vaCenter);
			}



				imageSG->RemoveImageIdx(8,OldRow);
				imageSG->AddImageIdx(8,NewRow,5,Advgrid::haCenter,Advgrid::vaCenter);



}
//---------------------------------------------------------------------------

void __fastcall TFAddImages::imageSGGridHint(TObject *Sender, int ARow, int ACol,
          UnicodeString &hintstr)
{


	if(ACol == 8 && ARow > 0)
	{

			AnsiString sql1 = "SELECT strftime(addImages.imagePostDate) as da,u.userFullName AS aUser from addImages ";
			sql1 = sql1 + "LEFT JOIN users u on addImages.imageUserID = u.userID ";
			sql1 = sql1 + " WHERE imageID = " + imageSG->Cells[1][ARow];
			TLiteConnection *connDB = new TLiteConnection(NULL);
			TLiteQuery *Q = SelectQ(sql1, connDB);
			if(Q->RecordCount > 0)
			{
				hintstr = "Addition : " + Q->FieldByName("aUser")->AsString + "\n"
						+ "Time : " + Q->FieldByName("da")->AsString;
			}
			else
			{
				hintstr = "";
			}
			Q->Close();
	}
}
//---------------------------------------------------------------------------

