//---------------------------------------------------------------------------

#include <vcl.h>
#include <StrUtils.hpp>
#include <SysUtils.hpp>
#include <shlobj.h>
#include <System.hpp>
#pragma hdrstop
#include "publicf.h"

#include "AddFiles.h"
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
#pragma link "AdvUtil"
#pragma link "hyiedefs"
#pragma link "hyieutils"
#pragma link "iesettings"
#pragma link "iexBitmaps"
#pragma link "iexRulers"
#pragma link "iexLayers"
#pragma link "iexToolbars"
#pragma resource "*.dfm"
TFAddFiles *FAddFiles;
//---------------------------------------------------------------------------
__fastcall TFAddFiles::TFAddFiles(TComponent* Owner)
	: TForm(Owner)
{
//SetWindowLong(ImageEnMView1->Handle,GWL_EXSTYLE, WS_EX_LAYOUTRTL);
//InvalidateRect(ImageEnMView1->Handle,0,True);
}
//---------------------------------------------------------------------------

void __fastcall TFAddFiles::FormCreate(TObject *Sender)
{
//-----------------------------------------------------------------------
 		fileSG->FixedCols = 0;
		fileSG->FixedRows = 1;
		fileSG->FixedCols = 1;
		fileSG->ColCount = 9;
		fileSG->RowCount = 2;

		fileSG->Cols[0]->Text = "�";
		fileSG->Cols[1]->Text = "";
		fileSG->Cols[2]->Text = "";
		fileSG->Cols[3]->Text = "";
		fileSG->Cols[4]->Text = "File Name";	 //
		fileSG->Cols[5]->Text = "File size";	 //
		fileSG->Cols[6]->Text = "Addition Date";
		fileSG->Cols[7]->Text = "File Description";
		fileSG->Cols[8]->Text = "";


		fileSG->DefaultRowHeight = 24;

		fileSG->ColWidths[0] = 35;
		fileSG->ColWidths[1] = 24;

		fileSG->ColWidths[2] = 24;
		fileSG->ColWidths[3] = 24;

		fileSG->ColWidths[4] = 200;
		fileSG->ColWidths[5] = 70;
		fileSG->ColWidths[6] = 150;
		fileSG->ColWidths[7] = 200;
		fileSG->ColWidths[8] = 22;


		fileSG->ColumnSize->Stretch = true;
		fileSG->ColumnSize->StretchColumn = 7;

		fileDescChange = 0;
		imageDescChange = 0;


	 //	if(FMain->vPermArcImageExport == 0) btnSaveAs->Visible = false;


		if(FMain->vPermArcImageAdd == 0) btnAddFile->Visible = false;




}
//----------------------------------------------------------------------------
void __fastcall TFAddFiles::FormShow(TObject *Sender)
{
  if(PixelsPerInch != 96)
  {
	  ScaleBy(96,PixelsPerInch);
  }

	FillFilesSG();

}
//---------------------------------------------------------------------------
  void __fastcall TFAddFiles::FillFilesSG()
{
	AnsiString str0="",str1="",str2="",str3="";

   if(txtArcSearch->Text.Trim() == "")
   {
	str0 = "";
   }
   else
   {
	str0 = " AND ( addfiles.fileDesc LIKE '%" + txtArcSearch->Text.Trim() + "%' ";
	str0 = str0 + " OR addfiles.fileName LIKE '%" + txtArcSearch->Text.Trim() + "%' ) ";
   }

	WideString strS3 = "";
	strS3 = strS3 + " SELECT addfiles.*,users.userFullName From addfiles ";
	strS3 = strS3 + " LEFT JOIN users on addfiles.userID = users.userID ";
	strS3 = strS3 + " WHERE addfiles.arcID = " + arcID + str0;;

	TFDConnection *connDB = new TFDConnection(NULL);
	TFDQuery *Q = SelectQ(strS3,connDB);

	SendMessage(fileSG->Handle, WM_SETREDRAW, FALSE, 0);
	if(Q->RecordCount > 0)
	{
		fileSG->RowCount = Q->RecordCount + 1;
		lblFilesCount->Caption = Q->RecordCount;
		for(int i=0;i<Q->RecordCount;i++)
		{
			fileSG->Cells[0][i+1] = i+1;
			fileSG->Cells[1][i+1] = Q->FieldByName("fileID")->AsString;
			fileSG->Cells[4][i+1] = Q->FieldByName("fileName")->AsString;
			fileSG->Cells[5][i+1] = FormatByteSize(Q->FieldByName("fileSize")->AsLongWord);
			fileSG->Cells[6][i+1] = Q->FieldByName("filePostDate")->AsAnsiString;


			fileSG->Cells[7][i+1] = Q->FieldByName("fileDesc")->AsAnsiString;
		   //	fileSG->Cells[8][i+1] = Q->FieldByName("userFullName")->AsAnsiString;


			Q->Next();
		}
	}
	else
	{
		fileSG->RowCount = 2;
		fileSG->Rows[1]->Clear();
	}
	SendMessage(fileSG->Handle, WM_SETREDRAW, TRUE, 0);
	fileSG->Invalidate();
	Q->Close();
	connDB->Close();
}

//---------------------------------------------------------------------------


void __fastcall TFAddFiles::btnAddFileClick(TObject *Sender)
{

	TDateTime curDate = Now();
	AnsiString curHDate = GetOADate(curDate);

	if(RzOpenDialog1->Execute())
	{

		lblFilesSaved2->Caption = "Files Save to DB : 1 / " + AnsiString(RzOpenDialog1->Files->Count);
		for(int i = 0;i<RzOpenDialog1->Files->Count;i++)
		{
		   // ShowMessage(
			int vFS = FileSizeByName(RzOpenDialog1->Files->Strings[i]);
			if(vFS <= 20000000)
			{


				TFileStream *streamIn = new TFileStream(RzOpenDialog1->Files->Strings[i],fmOpenRead);


				AnsiString strSQL = "Insert into addfiles (arcID,userID,filePostDate,fileName,fileSize,fileArc) VALUES (";
				 strSQL = strSQL + arcID + "," + FMain->vUserID + ",'" + curDate.FormatString("YYYY-MM-DD HH:mm:ss") + "','" + ExtractFileName(RzOpenDialog1->Files->Strings[i]) + "'," + vFS + ",:blobFile)";

				try
				{






				TFDConnection *connDB = new TFDConnection(NULL);
				connDB->DriverName = "Sqlite";
				connDB->Params->Values["Database"] = FMain->DataFile;
				connDB->Open();
				TFDQuery *stdQ = new TFDQuery(NULL);
				stdQ->Connection = connDB;
				stdQ->SQL->Text = strSQL;
				stdQ->ParamByName("blobFile")->LoadFromStream(streamIn,ftBlob);
				stdQ->ExecSQL();
				stdQ->Close();
				connDB->Close();

					streamIn->Free();


					stdQ->Close();
					connDB->Close();

					lblFilesSaved2->Caption =  "File Save to DB : " + AnsiString(i+1) + " / " + AnsiString(RzOpenDialog1->Files->Count);
					lblFilesSaved2->Update();


				}catch(Exception *e)
				{
					ShowMessage(e->Message);
				}
			}
			else
			{
				lblMSG2->Caption = "Files size Greater then 100 MB Not saved";
			}
		}
		FillFilesSG();

	}
}
//---------------------------------------------------------------------------

void __fastcall TFAddFiles::fileSGCanEditCell(TObject *Sender, int ARow, int ACol,
		  bool &CanEdit)
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

void __fastcall TFAddFiles::fileSGGetCellCursor(TObject *Sender, int ACol, int ARow,
		  int X, int Y, TCursor &ACursor)
{
   if(ARow == fileSG->Row)
   {
		if(ACol == 2||ACol==3)  ACursor =  crHandPoint;
   }
}
//---------------------------------------------------------------------------

void __fastcall TFAddFiles::fileSGDblClickCell(TObject *Sender, int ARow, int ACol)

{
	int aa = 0;
	if(ACol == 2 && ARow > 0 && fileSG->GetImageIdx(2,ARow,aa) == true)
	{
		if (Application->MessageBoxA(L"The file will be permanently deleted from the database - are you ok?",L"Delete Alert",MB_YESNO | MB_ICONQUESTION ) == IDYES)
		{
			AnsiString fileID = fileSG->Cells[1][fileSG->Row];
			AnsiString strSQL = "DELETE FROM addfiles WHERE fileID = " + fileID;
			CommandSQL(strSQL);

			FillFilesSG();
		}
	}
	if(ACol == 3 && ARow > 0 && fileSG->GetImageIdx(3,ARow,aa) == true)
	{

		RzSaveDialog1->FileName = fileSG->Cells[4][fileSG->Row];

		if(RzSaveDialog1->Execute())
		{
			AnsiString strSql = "Select * FROM addfiles WHERE fileID = " + fileSG->Cells[1][fileSG->Row];

			TFDConnection *connDB = new TFDConnection(NULL);
			TFDQuery *stdQ = SelectQ(strSql,connDB);

			TStream *st1 = stdQ->CreateBlobStream((TBlobField *) stdQ->FieldByName("fileArc"),bmRead);
			st1->Position = 0;
			TFileStream *stOut = new TFileStream(RzSaveDialog1->FileName,fmCreate);
			stOut->CopyFrom(st1,st1->Size);

			st1->Free();
			stOut->Free();

			ShowMessage("Finish saved to external place.");
		}
	}
}
//---------------------------------------------------------------------------


void __fastcall TFAddFiles::fileSGClick(TObject *Sender)
{
	if (fileSG->Cells[0][fileSG->Row] != "" && fileSG->Row != 0)
	{
		fileID = fileSG->Cells[1][fileSG->Row];
		bool a1 = true;
		fileSGRowChanging(Sender, -1, fileSG->Row,a1);
	}
	else
	{
		fileSG->RowCount = 2;
		fileSG->Rows[1]->Clear();
	}
}
//---------------------------------------------------------------------------

void __fastcall TFAddFiles::fileSGGetAlignment(TObject *Sender, int ARow, int ACol,
          TAlignment &HAlign, TVAlignment &VAlign)
{
	if(ACol == 6 && ARow != 0) HAlign = taCenter;
}
//---------------------------------------------------------------------------

void __fastcall TFAddFiles::fileSGCellChanging(TObject *Sender, int OldRow, int OldCol,
          int NewRow, int NewCol, bool &Allow)
{
	 if(fileDescChange == 1)
	 {
		 if(OldCol == 7)
		 {
			AnsiString str22 = "UPDATE addfiles SET fileDesc='" + fileSG->Cells[OldCol][OldRow] + "' WHERE fileID=" + fileID;
			CommandSQL(str22);
			fileDescChange = 0;
			FillFilesSG();
		 }
	 }
}
//---------------------------------------------------------------------------

void __fastcall TFAddFiles::fileSGEditChange(TObject *Sender, int ACol, int ARow,
          UnicodeString Value)
{
	fileDescChange = 1;
}
//---------------------------------------------------------------------------

void __fastcall TFAddFiles::imageSGEditChange(TObject *Sender, int ACol, int ARow,
          UnicodeString Value)
{
	imageDescChange = 1;
}
//---------------------------------------------------------------------------

void __fastcall TFAddFiles::Image2Click(TObject *Sender)
{
	FillFilesSG();
}
//---------------------------------------------------------------------------

void __fastcall TFAddFiles::txtArcSearchKeyPress(TObject *Sender, System::WideChar &Key)

{
	if(Key == 13)
	{
	   FillFilesSG();
	}
}
//---------------------------------------------------------------------------



void __fastcall TFAddFiles::fileSGKeyPress(TObject *Sender, System::WideChar &Key)

{
	 if(fileDescChange == 1)
	 {
		if(fileSG->Col && Key == 13)
		{
			AnsiString str22 = "UPDATE addfiles SET fileDesc='" + fileSG->Cells[fileSG->Col][fileSG->Row] + "' WHERE fileID=" + fileID;
			CommandSQL(str22);
			fileDescChange = 0;
			FillFilesSG();
        }
	 }
}
//---------------------------------------------------------------------------

void __fastcall TFAddFiles::fileSGRowChanging(TObject *Sender, int OldRow, int NewRow,
          bool &Allow)
{
			if(FMain->vPermArcImageDel == 1)
			{
                fileSG->RemoveImageIdx(2,OldRow);
				fileSG->AddImageIdx(2,NewRow,0,Advgrid::haCenter,Advgrid::vaCenter);
			}

			if(FMain->vPermArcImageExport == 1)
			{
				fileSG->RemoveImageIdx(3,OldRow);
				fileSG->AddImageIdx(3,NewRow,1,Advgrid::haCenter,Advgrid::vaCenter);
			}


				fileSG->RemoveImageIdx(8,OldRow);
				fileSG->AddImageIdx(8,NewRow,5,Advgrid::haCenter,Advgrid::vaCenter);

}
//---------------------------------------------------------------------------

