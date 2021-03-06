//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "publicf.h"

#include "ArcFiles.h"
//#include "FlvPlayer.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "AdvDataLabel"
#pragma link "AdvEdit"
#pragma link "AdvGrid"
#pragma link "AdvObj"
#pragma link "BaseGrid"
#pragma link "CurvyControls"
#pragma link "RzCmboBx"
#pragma link "RzLabel"
#pragma link "RzPanel"
#pragma link "RzShellDialogs"
#pragma link "AeroButtons"
#pragma link "AdvUtil"
#pragma resource "*.dfm"
TFArcFiles *FArcFiles;
//---------------------------------------------------------------------------
__fastcall TFArcFiles::TFArcFiles(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFArcFiles::FormCreate(TObject *Sender)
{
  if(PixelsPerInch !=96)
  {
	  ScaleBy(96,PixelsPerInch);
  }

	//--------------- DocSG

		fileSG->FixedRows = 1;
		fileSG->FixedCols = 1;
		fileSG->ColCount = 8;
		fileSG->RowCount = 2;
		fileSG->Cols[0]->Text = "";
		fileSG->Cols[1]->Text = "ID";

		fileSG->Cols[2]->Text = "";

		fileSG->Cols[3]->Text = "File Name";
		fileSG->Cols[4]->Text = "File Size";

		fileSG->Cols[5]->Text = "";
		fileSG->Cols[6]->Text = "Title";
		fileSG->Cols[7]->Text = "File Description";

		fileSG->DefaultRowHeight = 22;

		fileSG->ColWidths[0] = 20;
		fileSG->ColWidths[1] = 0;
		fileSG->ColWidths[2] = 22;
		fileSG->ColWidths[3] = 140;
		fileSG->ColWidths[4] = 80;
		fileSG->ColWidths[5] = 22;
		fileSG->ColWidths[6] = 0;
		fileSG->ColWidths[7] = 250;
		fileSG->Canvas->TextFlags = ETO_NUMERICSLATIN;
//----------------------------------------------------------------------------
	ComboFillA(cmbMainGroup,"SELECT * FROM maingroups","mgroupName","mgroupID",true);
	ComboFillA(cmbTypes,"SELECT * FROM arctypes","typeName","typeID",true);
	ComboFillA(cmbUsers,"SELECT * FROM users","userFullName","userID",true);
	FillFileSG();

}
//---------------------------------------------------------------------------
void __fastcall TFArcFiles::FillFileSG()
{

	FMain->getVars();

	AnsiString str0="",str1="",str2="",str3="",str4="",str5="",str6="";
	fileSG->FixedRows = 1;

   if(txtImageSearch->Text.Trim() == "")
   {
	str0 = "";
   }
   else
   {
	str0 = " AND ( addfiles.fileDesc LIKE '%" + txtImageSearch->Text.Trim() + "%' ";
	str0 = str0 + " OR addfiles.fileName LIKE '%" + txtImageSearch->Text.Trim() + "%' ) ";
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
		str6 = " AND addfiles.userID = " + cmbUsers->Value;
	}


	WideString strS = "";
	strS = strS + " SELECT addfiles.arcID,arcmain.arcSubject,addfiles.fileDesc,addfiles.fileID,addfiles.fileName,";
	strS = strS + "addfiles.filePostDate,addfiles.fileSize,";
	strS = strS + "users.userFullName,maingroups.mgroupName,subgroups.sgroupName,";
	strS = strS + " arcTypes.typeName,arcSecurity.secName,arcmain.arcID From addfiles ";
	strS = strS + " LEFT JOIN arcmain on arcmain.arcID = addfiles.arcID ";
	strS = strS + " LEFT JOIN users on addfiles.userID = users.userID ";
	strS = strS + " LEFT JOIN maingroups on arcmain.mgroupID = maingroups.mgroupID";
	strS = strS + " LEFT JOIN subgroups on arcmain.sgroupID = subgroups.sgroupID";
	strS = strS + " LEFT JOIN arcTypes on arcmain.typeID = arcTypes.typeID";
	strS = strS + " LEFT JOIN arcSecurity on arcmain.secID = arcSecurity.secID ";

	strS = strS + " WHERE addfiles.fileID=addfiles.fileID "	 + str0 + str1 + str2 + str3 + str4 + str5 + str6;

	TFDConnection *connDB = new TFDConnection(NULL);
	TFDQuery *Q = SelectQ(strS,connDB);
	SendMessage(fileSG->Handle, WM_SETREDRAW, FALSE, 0);
	if(Q->RecordCount > 0)
	{
	fileSG->RowCount = Q->RecordCount + 1;
	lblCount->Caption = Q->RecordCount;

		for(int i=0;i<Q->RecordCount;i++)
		{
		   //	fileSG->Cells[0][i+1] = i+1;
			fileSG->Cells[1][i+1] = Q->FieldByName("fileID")->AsInteger;
			fileSG->Cells[2][i+1] = "";
			fileSG->Cells[3][i+1] = Q->FieldByName("fileName")->AsAnsiString;
			fileSG->Cells[4][i+1] = FormatByteSize(Q->FieldByName("fileSize")->AsLongWord);
			fileSG->Cells[6][i+1] = Q->FieldByName("arcSubject")->AsAnsiString;
			fileSG->Cells[7][i+1] = Q->FieldByName("fileDesc")->AsAnsiString;
			if(Q->FieldByName("fileDesc")->AsAnsiString == "")
			{
				fileSG->Cells[7][i+1] = Q->FieldByName("fileName")->AsAnsiString;
			}
			else
			{
				fileSG->Cells[7][i+1] = Q->FieldByName("fileDesc")->AsAnsiString;
			}
			//fileSG->RemoveImageIdx(2,OldRow);
			fileSG->AddImageIdx(2,i+1,0,Advgrid::haCenter,Advgrid::vaCenter);
			//fileSG->RemoveImageIdx(5,OldRow);
			fileSG->AddImageIdx(5,i+1,1,Advgrid::haCenter,Advgrid::vaCenter);

			Q->Next();
		}
		fileSG->Group(6);
	}
	else
	{
		fileSG->RowCount = 2;
		fileSG->Rows[1]->Clear();
		lblCount->Caption = "0";
	}
	SendMessage(fileSG->Handle, WM_SETREDRAW, TRUE, 0);
	fileSG->Invalidate();

	Q->Close();
	connDB->Close();
}

//---------------------------------------------------------------------------
void __fastcall TFArcFiles::fileSGGetAlignment(TObject *Sender, int ARow, int ACol,
          TAlignment &HAlign, TVAlignment &VAlign)
{
	if(ACol == 0 || ACol == 4)
	{
	 HAlign = taCenter;
	}

}
//---------------------------------------------------------------------------
void __fastcall TFArcFiles::fileSGDblClickCell(TObject *Sender, int ARow, int ACol)

{

	int aa = 0;
	if(ACol == 5 && ARow > 0 && fileSG->GetImageIdx(5,ARow,aa) == true)
	{
	   //-------------------- copy to temporary folder --------------

			AnsiString strSql = "Select * FROM addfiles WHERE fileID = " + fileSG->Cells[1][fileSG->Row];

			TFDConnection *connDB = new TFDConnection(NULL);
			TFDQuery *stdQ = SelectQ(strSql,connDB);

			AnsiString vFileName = stdQ->FieldByName("fileName")->AsString.Trim();
		  //  ShowMessage(vFileName);
			TStream *st1 = stdQ->CreateBlobStream((TBlobField *) stdQ->FieldByName("fileArc"),bmRead);
			st1->Position = 0;
			AnsiString vTempFile = GetEnvironmentVariable("temp") + "\\temp" + ExtractFileExt(vFileName);
			TFileStream *stOut = new TFileStream(vTempFile,fmCreate);
            stOut->CopyFrom(st1,st1->Size);

			st1->Free();
			stOut->Free();
//
//			  TZDecompressionStream *zStream;
//			   TFileStream *inStream = new TFileStream(vFileName+".z", fmOpenRead);
//
//			  inStream->Read((void*)FileSizeByName(vFileName+".z") ,sizeof(FileSizeByName(vFileName+".z")));

			  // create the out file
			 // AnsiString vTempFile = GetEnvironmentVariable("temp") + "\\temp" + ExtractFileExt(vFileName);
			 //  TFileStream *outStream= new TFileStream(vTempFile, fmCreate);

			 //  ShowMessage(vTempFile);
			  // decompress

//			  zStream = new TZDecompressionStream(inStream);
			 // outStream->CopyFrom(inStream,FileSizeByName(vTempFile));

			 // outStream->Free();
			 // inStream->Free();

			 //ShellExecute(NULL,"open",vTempFile.c_str(),0,0,1);
			 //  system(vTempFile.c_str());

			   SHELLEXECUTEINFO ExecuteInfo = { 0 };
    ExecuteInfo.cbSize       = sizeof(ExecuteInfo);
    ExecuteInfo.fMask        = 0;
    ExecuteInfo.hwnd         = 0;
	ExecuteInfo.lpVerb       = "open";                      // Operation to perform
	ExecuteInfo.lpFile       = vTempFile.c_str();  // Application name
//    ExecuteInfo.lpParameters = "c:\\example.txt";           // Additional parameters
	ExecuteInfo.lpDirectory  = 0;                           // Default directory
	ExecuteInfo.nShow        = SW_SHOW;
	ExecuteInfo.hInstApp     = 0;
	if(ShellExecuteEx(&ExecuteInfo) == FALSE)
	{
        ShowMessage("Error to operate the file");
    }


	}

	if(ACol == 2 && ARow > 0 && fileSG->GetImageIdx(2,ARow,aa) == true)
	{

		RzSaveDialog1->FileName = fileSG->Cells[3][fileSG->Row];
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




void __fastcall TFArcFiles::fileSGGetCellColor(TObject *Sender, int ARow, int ACol,
          TGridDrawState AState, TBrush *ABrush, TFont *AFont)
{
	if((ACol==3 || ACol == 5 || ACol == 7) && ARow != 0)
	{
			ABrush->Color = static_cast<TColor>(RGB(240, 240, 240));
	   		AFont->Color = clWindowText;
	}
  if(fileSG->IsNode(ARow))
  {
			ABrush->Color = clGray;
			AFont->Color = clWhite;
			AFont->Style = TFontStyles() << fsBold;
  }
}
//---------------------------------------------------------------------------

void __fastcall TFArcFiles::fileSGGridHint(TObject *Sender, int ARow, int ACol, UnicodeString &hintstr)

{
   if(ARow == fileSG->Row  && fileSG->Cells[1][1] != "")
   {

		if(ARow > 0 && ACol == 2)
		{
			hintstr = "Export to external directory";
		}
		if(ARow > 0 && ACol == 5)
		{
			hintstr = "File Operate";
		}
	}






}
//---------------------------------------------------------------------------

void __fastcall TFArcFiles::fileSGGetCellCursor(TObject *Sender, int ACol, int ARow,
		  int X, int Y, TCursor &ACursor)
{
   if(ARow == fileSG->Row && fileSG->Cells[1][ARow] != "")
   {
		if(ACol == 2 || ACol == 5)
		{
			ACursor = crHandPoint;
		}
   }
   else
   {
		   ACursor = crDefault;
   }
}
//---------------------------------------------------------------------------


void __fastcall TFArcFiles::txtImageSearchKeyPress(TObject *Sender, System::WideChar &Key)

{
	if(Key == 13)
	{
        fileSG->UnGroup();
		FillFileSG();
	}
}
//---------------------------------------------------------------------------

void __fastcall TFArcFiles::Image2Click(TObject *Sender)
{
	fileSG->UnGroup();
	FillFileSG();
}
//---------------------------------------------------------------------------


void __fastcall TFArcFiles::btnExpandAllClick(TObject *Sender)
{
   //	fileSG->UnGroup();
	fileSG->ExpandAll();
}
//---------------------------------------------------------------------------

void __fastcall TFArcFiles::btnCollapseAllClick(TObject *Sender)
{
   //	fileSG->UnGroup();
	fileSG->ContractAll();
}
//---------------------------------------------------------------------------





void __fastcall TFArcFiles::cmbMainGroupChange(TObject *Sender)
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

		fileSG->UnGroup();
		FillFileSG();
}
//---------------------------------------------------------------------------

void __fastcall TFArcFiles::cmbSubGroupChange(TObject *Sender)
{
		fileSG->UnGroup();
		FillFileSG();
}
//---------------------------------------------------------------------------

void __fastcall TFArcFiles::cmbTypesChange(TObject *Sender)
{
		fileSG->UnGroup();
		FillFileSG();
}
//---------------------------------------------------------------------------

void __fastcall TFArcFiles::cmbUsersChange(TObject *Sender)
{
		fileSG->UnGroup();
		FillFileSG();
}
//---------------------------------------------------------------------------

