//---------------------------------------------------------------------------

#include <vcl.h>
#include <System.DateUtils.hpp>
#pragma hdrstop
#include "publicf.h"

#include "ArcMain.h"
#include "Main.h"
#include "arcEdit.h"
#include "arcAdd.h"
#include "ArcDesc.h"
#include "AddImages.h"
#include "ProcAdd.h"
#include "AlarmAdd.h"
#include "AddImages.h"
#include "AddFiles.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "AdvDataLabel"
#pragma link "AdvDateTimePicker"
#pragma link "AdvEdit"
#pragma link "AdvGrid"
#pragma link "AdvMenus"
#pragma link "AdvObj"
#pragma link "AeroButtons"
#pragma link "BaseGrid"
#pragma link "CurvyControls"
#pragma link "RzButton"
#pragma link "RzCmboBx"
#pragma link "RzCommon"
#pragma link "RzLabel"
#pragma link "RzPanel"
#pragma link "RzRadChk"
#pragma link "RzShellDialogs"
#pragma link "RzDTP"
#pragma link "frxClass"
#pragma link "frxDBSet"
#pragma link "AdvDBLookupComboBox"
#pragma link "frxChBox"
#pragma link "AdvUtil"
#pragma link "fs_iinterpreter"
#pragma resource "*.dfm"
TFArcMain *FArcMain;
TFDQuery *Q;
TFDConnection *connDB;
//---------------------------------------------------------------------------
__fastcall TFArcMain::TFArcMain(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFArcMain::FormCreate(TObject *Sender)
{
  if(PixelsPerInch !=96)
  {
	  ScaleBy(96,PixelsPerInch);
  }

	//--------------- DocSG

		arcSG->FixedCols = 0;
		arcSG->FixedRows = 1;
		arcSG->FixedCols = 1;
		arcSG->ColCount = 20;
		arcSG->RowCount = 2;
		arcSG->Cols[0]->Text = "ID";   //arcID
		arcSG->Cols[1]->Text = "";   //
		arcSG->Cols[2]->Text = "";   //
		arcSG->Cols[3]->Text = "";   //
		arcSG->Cols[4]->Text = "";	 //
		arcSG->Cols[5]->Text = "Document Date";	 //
		arcSG->Cols[6]->Text = "MainGroup";
		arcSG->Cols[7]->Text = "SubGroup";
		arcSG->Cols[8]->Text = "Doc. Type";
		arcSG->Cols[9]->Text = "Sec.";
		arcSG->Cols[10]->Text = "";   //
		arcSG->Cols[11]->Text = "";   //

		arcSG->Cols[12]->Text = "";  // Alarm Image

		arcSG->Cols[13]->Text = "";  // Alarm Time Defference in days;

		arcSG->Cols[14]->Text = "Document Title";
		arcSG->Cols[15]->Text = "";
		arcSG->Cols[16]->Text = "";
		arcSG->Cols[17]->Text = "";
		arcSG->Cols[18]->Text = "";
		arcSG->Cols[19]->Text = "";

		arcSG->DefaultRowHeight = 24;

		arcSG->ColWidths[0] = 65;
		arcSG->ColWidths[1] = 20;
		arcSG->ColWidths[2] = 20;
		arcSG->ColWidths[3] = 20;

		arcSG->ColWidths[4] = 0;
		arcSG->ColWidths[5] = 90;
		arcSG->ColWidths[6] = 180;
		arcSG->ColWidths[7] = 180;
		arcSG->ColWidths[8] = 70;
		arcSG->ColWidths[9] = 45;
		arcSG->ColWidths[10] = 40;
		arcSG->ColWidths[11] = 40;
		arcSG->ColWidths[12] = 20;
		arcSG->ColWidths[13] = 40;


		arcSG->ColWidths[14] = 130;
		arcSG->ColWidths[15] = 20;
		arcSG->ColWidths[16] = 0;
		arcSG->ColWidths[17] = 25;
		arcSG->ColWidths[18] = 0;
		arcSG->ColWidths[19] = 22;

		arcSG->AddImageIdx(10,0,9,Advgrid::haCenter,Advgrid::vaCenter);
		arcSG->AddImageIdx(11,0,9,Advgrid::haCenter,Advgrid::vaCenter);
		arcSG->AddImageIdx(15,0,4,Advgrid::haCenter,Advgrid::vaCenter);
		arcSG->AddImageIdx(19,0,10,Advgrid::haCenter,Advgrid::vaCenter);




		ProcSG->FixedCols = 0;
		ProcSG->FixedRows = 1;
		ProcSG->FixedCols = 1;
		ProcSG->ColCount = 15;
		ProcSG->RowCount = 2;

		ProcSG->Cols[0]->Text = "No";   //arcID
		ProcSG->Cols[6]->Text = "Procedure Date";	 //
		ProcSG->Cols[7]->Text = "Procedure Status";
		ProcSG->Cols[8]->Text = "Procedure Description";


		ProcSG->DefaultRowHeight = 24;

		ProcSG->ColWidths[0] = 50;
		ProcSG->ColWidths[1] = 0;
		ProcSG->ColWidths[2] = 0;
		ProcSG->ColWidths[3] = 0;
		ProcSG->ColWidths[4] = 0;
		ProcSG->ColWidths[5] = 0;
		ProcSG->ColWidths[6] = 150;
		ProcSG->ColWidths[7] = 100;
		ProcSG->ColWidths[8] = 200;
		ProcSG->ColWidths[9] = 0;
		ProcSG->ColWidths[10] = 0;
		ProcSG->ColWidths[11] = 0;
		ProcSG->ColWidths[12] = 24;
		ProcSG->ColWidths[13] = 0;
		ProcSG->ColWidths[14] = 22;


        ProcSG->AddImageIdx(14,0,14,Advgrid::haLeft,Advgrid::vaCenter);

	if(FMain->vLogInStatus == 1)
	{
		if(FMain->vPermArcAdd == 1){btnArcAdd->Enabled = true;}else{btnArcAdd->Enabled = false;}
		if(FMain->vPermArcPrint == 1){btnArcPrint->Enabled = true;}else{btnArcPrint->Enabled = false;}

	}



}
//---------------------------------------------------------------------------

void __fastcall TFArcMain::FormShow(TObject *Sender)
{






		TDateTime dtN = Now();
		dtpTo->Date =  dtN.CurrentDate();
		dtpFrom->Date = IncDay(dtN,-30);

//----------------------------------------------------------------------------
	ComboFillA(cmbMainGroup,"SELECT * FROM maingroups","mgroupName","mgroupID",true);
//----------------------------------------------------------------------------
	ComboFillA(cmbTypes,"SELECT * FROM arctypes","typeName","typeID",true);
//----------------------------------------------------------------------------
	ComboFillA(cmbUsers,"SELECT * FROM users","userFullName","userID",true);
//----------------------------------------------------------------------------
	FillArcSG();
	arcSG->Row = arcSG->RowCount - 1;

}
//---------------------------------------------------------------------------
//-------------------------------------------------------------------------
void __fastcall TFArcMain::FillArcSG()
{

	FMain->getVars();

	if(FMain->vArcSGIndexes == "0")
	{
	   arcSG->ColWidths[6] = 0;
	   arcSG->ColWidths[7] = 0;
	}
	else
	{
		arcSG->ColWidths[6] = 165;
		arcSG->ColWidths[7] = 170;
	}




	AnsiString str0="",str1="",str2="",str3="",str4="",str5="",str6="",str7 = "",str8="",strDirection="";
	arcSG->FixedRows = 1;

   str0 = " AND ( arcmain.arcSubject LIKE '%" + txtArcSearch->Text.Trim() + "%' ";
   str0 = str0 + " OR arcmain.arcDesc LIKE '%" + txtArcSearch->Text.Trim() + "%' ";
   str0 = str0 + " OR addfiles.fileName LIKE '%" + txtArcSearch->Text.Trim() + "%' ";
   str0 = str0 + " OR addfiles.fileDesc LIKE '%" + txtArcSearch->Text.Trim() + "%' ) ";

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

	AnsiString typeValue = cmbTypes->Value;

	if(typeValue == "0")
	{
		str3="";
	}
	else
	{
		str3 = " AND arcmain.typeID=" + typeValue + " ";
    }

	if(FMain->vPermSecret == 1)
	{
		str4 = "";
	}
	else
	{
		str4 = " AND arcmain.secID <> 2 ";
	}


	if(chkActiveDate->Checked == true)
	{
		AnsiString curHDateFrom = dtpFrom->Date.FormatString("YYYY-MM-DD");
		AnsiString curHDateTo = IncDay(dtpTo->Date,1).FormatString("YYYY-MM-DD");
		str5 = " AND arcDate between '" + curHDateFrom + "' AND '" + curHDateTo + "' ";

	}

	if(cmbUsers->Value == "0")
	{
		str6 = "";
	}
	else
	{
		str6 = " AND arcmain.userID = " + cmbUsers->Value;
	}

	if(chkLate->Checked == true)
	{
		TDateTime dd = Now();
		str7 = " AND arcAlarm < '" + dd.FormatString("YYYY-MM-DD") + "' AND arcAlarm <> '' ";

	}
	else
	{
		str7 = "";
	}

	if(txtDemands->Text.Trim() != "" && txtDemands->Text.ToInt() > 0)
	{
		TDateTime iDate = IncDay(Now(),txtDemands->Text.ToInt()+1);
		TDateTime nowDate = Now();

		str8 = " AND arcAlarm < '" + iDate.FormatString("YYYY-MM-DD") + "' AND arcAlarm <> '' AND arcAlarm >= '" + nowDate.FormatString("YYYY-MM-DD") + "' ";
	}
	else
	{
		str8 = "";
	}


	if(cmbDirection->Value > "0")
	{
		strDirection = " AND arcmain.arcDirection = " + cmbDirection->Value;
	}


	WideString strS = "";
	strS = strS + " SELECT arcmain.*,users.userFullName,maingroups.mgroupName,subgroups.sgroupName, ";
	strS = strS + " arcTypes.typeName,arcSecurity.secName,";
	strS = strS + " (select count(addImages.arcID) as cc from addImages WHERE addImages.arcID = arcmain.arcID ) as iCount,";
	strS = strS + " (select count(addFiles.arcID) as cc from addFiles WHERE addFiles.arcID = arcmain.arcID ) as fCount, ";
	strS = strS + " Cast (( JulianDay(arcAlarm)  - JulianDay('now')) As Integer) as dateDiff, ";
	strS = strS + " (SELECT procmain.procStatus FROM procmain WHERE procmain.arcID = arcmain.arcID  ORDER BY procmain.procID DESC LIMIT 1) as tStatus  ";
	strS = strS + " From arcmain ";
 //   strS = strS + " LEFT JOIN procmain on arcmain.arcID = procmain.arcID ";
	strS = strS + " LEFT JOIN users on arcmain.userID = users.userID ";
	strS = strS + " LEFT JOIN maingroups on arcmain.mgroupID = maingroups.mgroupID";
	strS = strS + " LEFT JOIN subgroups on arcmain.sgroupID = subgroups.sgroupID";
	strS = strS + " LEFT JOIN arcTypes on arcmain.typeID = arcTypes.typeID";
	strS = strS + " LEFT JOIN arcSecurity on arcmain.secID = arcSecurity.secID ";
	strS = strS + " LEFT JOIN addfiles on addfiles.arcID = arcmain.arcID ";
	strS = strS + " WHERE  arcmain.arcID = arcmain.arcID " + str0 + str1 + str2 + str3 + str4 + str5 + str6 + str7 + str8 + strDirection;
	strS = strS + " GROUP BY addfiles.arcID,arcmain.arcID,arcmain.arcDirection ORDER BY arcmain.arcID ";

	if(FMain->reg == 0)
	{
      strS = strS + " Limit 50 ";
    }

   //	ShowMessage(strS);
	TFDConnection *connDB = new TFDConnection(NULL);

 //  TDateTime dtS = Now();


	Q = SelectQ(strS,connDB);


	if(FMain->reg == 0)
	{
		if( Q->RecordCount >= 20)
		{
			btnArcAdd->Enabled = false;
		}

	}


 // double dtt1 = MilliSecondSpan(Now(),dtS)/1000;
	SendMessage(arcSG->Handle, WM_SETREDRAW, FALSE, 0);
	if(Q->RecordCount > 0)
	{
	arcSG->RowCount = Q->RecordCount + 1;
	lblCount->Caption = Q->RecordCount;
		for(int i=0;i<Q->RecordCount;i++)
		{
			arcSG->Cells[0][i+1] = Q->FieldByName("arcID")->AsInteger;

			AnsiString OADate =  CDate(GetOADate( Q->FieldByName("arcDate")->AsDateTime ));
			if(FMain->DateType == 2)
			{
				arcSG->Cells[5][i+1] = Q->FieldByName("arcDate")->AsDateTime.FormatString("YYYY-MM-DD");
			}
			else
			{
				arcSG->Cells[5][i+1] =  OADate;
            }
			arcSG->Cells[6][i+1] = Q->FieldByName("mgroupName")->AsAnsiString;
			arcSG->Cells[7][i+1] = Q->FieldByName("sgroupName")->AsAnsiString;
			arcSG->Cells[8][i+1] = Q->FieldByName("typeName")->AsAnsiString;
			arcSG->Cells[9][i+1] = Q->FieldByName("secName")->AsAnsiString;
			if(Q->FieldByName("iCount")->AsInteger != 0)
			{
			   arcSG->Cells[10][i+1] = Q->FieldByName("iCount")->AsAnsiString;
			}
			else
			{
			   arcSG->Cells[10][i+1] = "";
			}

			if(Q->FieldByName("fCount")->AsInteger != 0)
			{
			   arcSG->Cells[11][i+1] = Q->FieldByName("fCount")->AsAnsiString;
			}
			else
			{
			   arcSG->Cells[11][i+1] = "";
            }

			arcSG->Cells[13][i+1] = Q->FieldByName("dateDiff")->AsAnsiString;

			arcSG->Cells[14][i+1] = Q->FieldByName("arcSubject")->AsAnsiString;
			arcSG->Cells[15][i+1] =     "" ;
			arcSG->Cells[16][i+1] =  Q->FieldByName("tStatus")->AsAnsiString;;

			Q->Next();
		}
	}
	else
	{
		arcSG->RowCount = 2;
		arcSG->Rows[1]->Clear();
		lblCount->Caption = "0";
	}
	SendMessage(arcSG->Handle, WM_SETREDRAW, TRUE, 0);
	arcSG->Invalidate();
	connDB->Close();
}

//---------------------------------------------------------------------------
void __fastcall TFArcMain::FillProcSG()
{
	AnsiString str1="",str2="",str3="";
	ProcSG->FixedRows = 1;


	WideString strS3 = "";
	strS3 = strS3 + " SELECT procmain.*,users.userFullName,procStatus.procStatusName From procmain ";
	strS3 = strS3 + " LEFT JOIN users on procmain.userID = users.userID ";
	strS3 = strS3 + " LEFT JOIN procStatus on procStatus.procStatusID = procmain.procStatus ";
	strS3 = strS3 + " WHERE arcID = " + arcID;


  //	ShowMessage(strS3);
	TFDConnection *connDB = new TFDConnection(NULL);
	TFDQuery *Q = SelectQ(strS3,connDB);


	if(Q->RecordCount > 0)
	{
		ProcSG->RowCount = Q->RecordCount + 1;
		//lblCount->Caption = Q->RecordCount;
		for(int i=0;i<Q->RecordCount;i++)
		{
			ProcSG->Cells[0][i+1] = i+1;
			ProcSG->Cells[1][i+1] = Q->FieldByName("procID")->AsAnsiString;
			AnsiString dt;
			if(FMain->DateType == 2)
			{
				dt = Q->FieldByName("procPostDate")->AsDateTime.FormatString("YYYY-MM-DD hh:mm tt");
			}
			if(FMain->DateType == 1)
			{
				dt = CDateTime(GetOADate( Q->FieldByName("procPostDate")->AsDateTime));
			}
			ProcSG->Cells[6][i+1] = dt;
			ProcSG->Cells[7][i+1] = Q->FieldByName("procStatusName")->AsAnsiString;
			ProcSG->Cells[8][i+1] = Q->FieldByName("procDesc")->AsAnsiString;

			Q->Next();
		}
        ProcSG->Row = ProcSG->RowCount - 1;
	}
	else
	{
		ProcSG->RowCount = 2;
		ProcSG->Rows[1]->Clear();
		//lblCount->Caption = "0";
	}
	Q->Close();
	connDB->Close();
}
//---------------------------------------------------------------------------
void __fastcall TFArcMain::arcSGDblClickCell(TObject *Sender, int ARow, int ACol)

{
	int aa = 0;
	if(ACol == 1 && ARow > 0 && arcSG->GetImageIdx(1,ARow,aa) == true)
	{

		if (Application->MessageBoxA(L"This document will be deleted and all images and files are attached - are you sure?",L"Delete Alert",MB_YESNO | MB_ICONQUESTION ) == IDYES)
		{
			arcID = arcSG->Cells[0][arcSG->Row];
			AnsiString strSQL = "DELETE FROM arcmain WHERE arcmain.arcID = " + arcID + ";";
			strSQL = strSQL + "DELETE FROM procmain WHERE procmain.arcID=" + arcID + ";";
			strSQL = strSQL + "DELETE FROM addfiles WHERE addfiles.arcID=" + arcID + ";";
			strSQL = strSQL + "DELETE FROM addImages WHERE addImages.arcID=" + arcID;
			CommandSQL(strSQL);
			//SaveLog("3","3","��� ����� ��� : " + arcID);
			ShowMessage("Deleted Done Successfully Record No : " + arcID);
			FillArcSG();
		}
	}
	if(ACol == 2 && ARow > 0 && arcSG->GetImageIdx(2,ARow,aa) == true)
	{
			AnsiString arcID = arcSG->Cells[0][arcSG->Row];
			TFarcEdit *farcedit = new TFarcEdit(this);
			farcedit->arcID = arcID;
			farcedit->ShowModal();
            delete farcedit;
			FillArcSG();
	}
	if(ACol == 10 && ARow > 0 && arcSG->GetImageIdx(10,ARow,aa) == true)
	{
			AnsiString arcID = arcSG->Cells[0][arcSG->Row];
			TFAddImages *fimageAdd = new TFAddImages(this);
			fimageAdd->arcID = arcID;
			fimageAdd->ShowModal();
			delete fimageAdd;
			FillArcSG();
	}
	if(ACol == 11 && ARow > 0 && arcSG->GetImageIdx(11,ARow,aa) == true)
	{
			AnsiString arcID = arcSG->Cells[0][arcSG->Row];
			TFAddFiles *fileAdd = new TFAddFiles(this);
			fileAdd->arcID = arcID;
			fileAdd->ShowModal();
			delete fileAdd;
			FillArcSG();
	}
	if(ACol == 12 && ARow > 0 && arcSG->GetImageIdx(12,ARow,aa) == true)
	{
			AnsiString arcID = arcSG->Cells[0][arcSG->Row];
			TFAlarmAdd *fAlarm = new TFAlarmAdd(this);
			fAlarm->arcID = arcID;
			fAlarm->ShowModal();
			delete fAlarm;
			FillArcSG();
	}

	if(ACol == 3 && ARow > 0 && arcSG->GetImageIdx(3,ARow,aa) == true)
	{
			AnsiString arcID = arcSG->Cells[0][arcSG->Row];
			TFProcAdd *fprocAdd = new TFProcAdd(this);
			fprocAdd->arcID = arcID;
			fprocAdd->ShowModal();
			delete fprocAdd;
			FillArcSG();
			FillProcSG();
	}
	if(ACol == 15 && ARow > 0 && arcSG->GetImageIdx(15,ARow,aa) == true)
	{
			AnsiString arcID = arcSG->Cells[0][arcSG->Row];
			TFArcDesc *arcDescribe = new TFArcDesc(this);
			arcDescribe->arcID = arcID;
			arcDescribe->ShowModal();
            delete arcDescribe;
	}
}
//---------------------------------------------------------------------------
void __fastcall TFArcMain::arcSGGetAlignment(TObject *Sender, int ARow, int ACol,
          TAlignment &HAlign, TVAlignment &VAlign)
{
	if(ACol == 0 || ACol == 4 || ACol == 10 || ACol == 11 || ACol == 13) HAlign = taCenter;
}
//---------------------------------------------------------------------------

void __fastcall TFArcMain::arcSGGetCellCursor(TObject *Sender, int ACol, int ARow,
          int X, int Y, TCursor &ACursor)
{
   int idx = 0;
   if(ARow == arcSG->Row && arcSG->Cells[0][1] != "")
   {
		if(ACol == 1  && arcSG->GetImageIdx(1, ARow, idx) == true ) ACursor = crHandPoint;
		if(ACol == 2  && arcSG->GetImageIdx(2, ARow, idx) == true ) ACursor = crHandPoint;
		if(ACol == 3  && arcSG->GetImageIdx(3, ARow, idx) == true ) ACursor = crHandPoint;
		if(ACol == 10  && arcSG->GetImageIdx(10, ARow, idx) == true ) ACursor = crHandPoint;
		if(ACol == 11  && arcSG->GetImageIdx(11, ARow, idx) == true ) ACursor = crHandPoint;
		if(ACol == 12  && arcSG->GetImageIdx(12, ARow, idx) == true ) ACursor = crHandPoint;
		if(ACol == 15  && arcSG->GetImageIdx(15, ARow, idx) == true ) ACursor = crHandPoint;
   }
   else
   {
		   ACursor = crDefault;
   }

}
//---------------------------------------------------------------------------
void __fastcall TFArcMain::arcSGGridHint(TObject *Sender, int ARow, int ACol, UnicodeString &hintstr)

{
   int idx = 0;
   if(ARow == arcSG->Row  && arcSG->Cells[0][1] != "")
   {
		if(ARow > 0 && ACol == 1 && arcSG->GetImageIdx(1, ARow, idx) == true)
		{
			hintstr = "Document delete";
		}
		if(ARow > 0 && ACol == 2 && arcSG->GetImageIdx(2, ARow, idx) == true)
		{
			hintstr = "Edit Document";
		}
		if(ARow > 0 && ACol == 10 && arcSG->GetImageIdx(10, ARow, idx) == true)
		{
			hintstr = "Attached Pictures count";
		}
		if(ARow > 0 && ACol == 11 && arcSG->GetImageIdx(11, ARow, idx) == true)
		{
			hintstr = "Attached Files count";
		}
		if(ARow > 0 && ACol == 3 && arcSG->GetImageIdx(3, ARow, idx) == true)
		{
			hintstr = "Add New Procedure";
		}
		if(ARow > 0 && ACol == 12  && arcSG->GetImageIdx(12, ARow, idx) == true)
		{
			hintstr = "Alarm Management";
		}
		if(ARow > 0 && ACol == 15 && arcSG->GetImageIdx(15, ARow, idx) == true)
		{
			hintstr = "Document description Show";
		}
		int idx = 0;
		if (ARow > 0 && ACol == 19 && arcSG->GetImageIdx(19, ARow, idx) == true)
		{
			AnsiString sql1 = "SELECT strftime(arcmain.arcPostDate) as da,u.userFullName AS aUser from arcmain ";
			sql1 = sql1 + "LEFT JOIN users u on arcmain.userID = u.userID ";
			sql1 = sql1 + " WHERE arcID = " + arcSG->Cells[0][ARow];
			TFDConnection *connDB = new TFDConnection(NULL);
			TFDQuery *Q = SelectQ(sql1, connDB);
			if(Q->RecordCount > 0)
			{
				hintstr = "Added : " + Q->FieldByName("aUser")->AsString + "\n"
						+ "Time : " + Q->FieldByName("da")->AsString;
			}
			else
			{
				hintstr = "";
			}
			Q->Close();
		}
	}
}
//---------------------------------------------------------------------------


void __fastcall TFArcMain::txtArcSearchKeyPress(TObject *Sender, System::WideChar &Key)

{
	if(Key == 13)
	{
		FillArcSG();
    }
}
//---------------------------------------------------------------------------


void __fastcall TFArcMain::btnArcAddClick(TObject *Sender)
{
	TFarcAdd *aAdd = new TFarcAdd(this);
	aAdd->ShowModal();


    FillArcSG();
	arcSG->Row = arcSG->RowCount - 1;

	   if(aAdd->idd != 0)
	   {

			if (Application->MessageBoxA(L"Do you want to add images and files to the document you just entered?",L"Alert",MB_YESNO | MB_ICONQUESTION ) == IDYES)
			{
				arcID = arcSG->Cells[0][arcSG->Row];
				TFAddImages *fimageAdd = new TFAddImages(Application);
				fimageAdd->arcID = arcID;
				fimageAdd->ShowModal();
				delete fimageAdd;
			}
       }
	delete aAdd;

}
//---------------------------------------------------------------------------

void __fastcall TFArcMain::arcSGRowChanging(TObject *Sender, int OldRow, int NewRow, bool &Allow)
{
	if(FMain->vPermArcDel == 1)
	{
		arcSG->RemoveImageIdx(1,OldRow);
		arcSG->AddImageIdx(1,NewRow,0,Advgrid::haLeft,Advgrid::vaCenter);
	}
	if(FMain->vPermArcEdit == 1)
	{
		arcSG->RemoveImageIdx(2,OldRow);
		arcSG->AddImageIdx(2,NewRow,2,Advgrid::haLeft,Advgrid::vaCenter);
	}

	if(FMain->vPermArcProcAdd == 1)
	{
		arcSG->RemoveImageIdx(3,OldRow);
		arcSG->AddImageIdx(3,NewRow,3,Advgrid::haLeft,Advgrid::vaCenter);
	}
	if(FMain->vPermArcImageAdd == 1)
	{
		arcSG->RemoveImageIdx(10,OldRow);
		arcSG->AddImageIdx(10,NewRow,8,Advgrid::haBeforeText,Advgrid::vaCenter);
		arcSG->RemoveImageIdx(11,OldRow);
		arcSG->AddImageIdx(11,NewRow,1,Advgrid::haBeforeText,Advgrid::vaCenter);
	}

	arcSG->RemoveImageIdx(12,OldRow);
	arcSG->AddImageIdx(12,NewRow,6,Advgrid::haLeft,Advgrid::vaCenter);

	arcSG->RemoveImageIdx(15,OldRow);
	arcSG->AddImageIdx(15,NewRow,4,Advgrid::haLeft,Advgrid::vaCenter);

	arcSG->RemoveImageIdx(19,OldRow);
	arcSG->AddImageIdx(19,NewRow,10,Advgrid::haLeft,Advgrid::vaCenter);

}
//---------------------------------------------------------------------------

void __fastcall TFArcMain::chkActiveDateClick(TObject *Sender)
{
	if(chkActiveDate->Checked == true)
	{
		dateGB->Enabled = true;
		if((int)dtpFrom->Date > (int)dtpTo->Date)
		{
			ShowMessage("Please register your start date less than the end date");
			return;
		}
		else
		{
            FillArcSG();
        }

	}
	if(chkActiveDate->Checked == false)
	{
		dateGB->Enabled = false;
		FillArcSG();
	}
}
//---------------------------------------------------------------------------

void __fastcall TFArcMain::dtpFromKeyPress(TObject *Sender, System::WideChar &Key)

{
	if(Key == 13)
	{
        dtpTo->SetFocus();
    }
}
//---------------------------------------------------------------------------

void __fastcall TFArcMain::dtpToKeyPress(TObject *Sender, System::WideChar &Key)
{
	if(Key == 13)
	{
        FillArcSG();
    }
}
//---------------------------------------------------------------------------

void __fastcall TFArcMain::Image2Click(TObject *Sender)
{
	FillArcSG();
}
//---------------------------------------------------------------------------

void __fastcall TFArcMain::cmbSubGroupChange(TObject *Sender)
{
	FillArcSG();
}
//---------------------------------------------------------------------------

void __fastcall TFArcMain::cmbTypesChange(TObject *Sender)
{
	FillArcSG();
}
//---------------------------------------------------------------------------

void __fastcall TFArcMain::cmbSecurityChange(TObject *Sender)
{
	FillArcSG();
}
//---------------------------------------------------------------------------
void __fastcall TFArcMain::cmbUsersChange(TObject *Sender)
{
	FillArcSG();
}
//---------------------------------------------------------------------------

void __fastcall TFArcMain::btnArcPrintClick(TObject *Sender)
{
TResourceStream* resFile = new TResourceStream((int)HInstance, L"rpArcPrint", L"RT_RCDATA");
ArcPrint->LoadFromStream(resFile);

	ArcDB->DataSet = Q;


	AnsiString strSql = "SELECT * FROM vars WHERE id=1";
	TFDConnection *connDB1 = new TFDConnection(NULL);
	TFDQuery *Q1 = SelectQ(strSql,connDB1);
	TStream *picLogo = Q1->CreateBlobStream((TBlobField *) Q1->FieldByName("logo"),bmRead);



   	ArcPrint->ScriptLanguage = "C++Script";

	if(FMain->DateType == 1)
	{

		((TfrxMemoView *)ArcPrint->FindObject("ArcDBarcDate"))->Memo->Text =
		((TfrxMemoView *)ArcPrint->FindObject("ArcDBarcDateA"))->Memo->Text;
	   //	Format("{0:MM/dd/yyyy hh:mm tt}", DateTime.Now)

	}
	if(FMain->DateType == 2)
	{

		((TfrxMemoView *)ArcPrint->FindObject("ArcDBarcDate"))->Memo->Text =
		((TfrxMemoView *)ArcPrint->FindObject("ArcDBarcDate1"))->Memo->Text;
	}
	  	((TfrxMemoView *)ArcPrint->FindObject("name1"))->Memo->Text = FMain->name1;
	 	((TfrxMemoView *)ArcPrint->FindObject("name2"))->Memo->Text = FMain->name2;
	((TfrxMemoView *)ArcPrint->FindObject("name3"))->Memo->Text = FMain->name3;
//
//
		if(FMain->reg == 1)
		{
			((TfrxPictureView *)ArcPrint->FindObject("picLogo"))->LoadPictureFromStream(picLogo,true);
		}

	if(ArcPrint->PrepareReport()==true)
	{
		ArcPrint->ShowPreparedReport();
	}
	if(Q->Connection->Connected == true)
	{
		Q->Close();
		connDB1->Close();
	}
}
//---------------------------------------------------------------------------

void __fastcall TFArcMain::arcSGGetCellColor(TObject *Sender, int ARow, int ACol,
          TGridDrawState AState, TBrush *ABrush, TFont *AFont)
{
	if (arcSG->Cells[14][ARow].Trim() != "3" && arcSG->Cells[14][ARow].Trim() != "4")
	{
		if (ACol == 13 && arcSG->Cells[13][ARow] >= "0")
		{
			AFont->Color = clGreen;
			AFont->Name = "Symbol";
			AFont->Style = TFontStyles();
			AFont->Style = Font->Style << fsBold; // << fsItalic;
			AFont->Size = 10;
		}
		else if (ACol == 13 && arcSG->Cells[13][ARow] < "0")
		{
			AFont->Color = clRed;
			AFont->Name = "Symbol";
			AFont->Style = TFontStyles();
			AFont->Style = Font->Style << fsBold; // << fsItalic;
			AFont->Size = 10;
		}
	}
	else
	{
		if (arcSG->Cells[14][ARow].Trim() == "3" || arcSG->Cells[14][ARow].Trim () == "4")
		{
			arcSG->Cells[14][ARow] = "";
		}
	}


	if (arcSG->Cells[16][ARow].Trim() != "" && ACol == 17 && ARow > 0)
	{
		if (arcSG->Cells[16][ARow].Trim() == "0")
		{
			ABrush->Color = clSilver;

		}
		else if (arcSG->Cells[16][ARow].Trim() == "1")
		{
			ABrush->Color = clYellow;
		}
		else if (arcSG->Cells[16][ARow].Trim() == "2")
		{
			ABrush->Color = static_cast<TColor>(RGB(255, 128, 64));;
		}
		else if (arcSG->Cells[16][ARow].Trim() == "3")
		{
			ABrush->Color = static_cast<TColor>(RGB(0, 190, 50));
		}
		else if (arcSG->Cells[16][ARow].Trim() == "0")
		{
			ABrush->Color = clSilver;
		}
	}
}
//---------------------------------------------------------------------------
void __fastcall TFArcMain::chkLateClick(TObject *Sender)
{
	txtDemands->Text = "";
	FillArcSG();
}
//---------------------------------------------------------------------------

void __fastcall TFArcMain::ProcSGGetAlignment(TObject *Sender, int ARow, int ACol,
		  TAlignment &HAlign, TVAlignment &VAlign)
{
	if(ACol == 0) HAlign = taCenter;
}
//---------------------------------------------------------------------------


void __fastcall TFArcMain::luClick(TObject *Sender)
{
   //	ShowMessage(lu->KeyValue);
}
//---------------------------------------------------------------------------



void __fastcall TFArcMain::cmbSubGroupClick(TObject *Sender)
{
	FillArcSG();
}
//---------------------------------------------------------------------------

void __fastcall TFArcMain::cmbTypesClick(TObject *Sender)
{
    FillArcSG();
}
//---------------------------------------------------------------------------

void __fastcall TFArcMain::cmbMainGroupChange(TObject *Sender)
{
		if(cmbMainGroup->Value == "0")
		{
			cmbSubGroup->Enabled = false;
			cmbSubGroup->Value = "0";

		}
		else
		{
			cmbSubGroup->Enabled = true;
			ComboFillA(cmbSubGroup,"SELECT * FROM subgroups WHERE sgroupMainGroupID = " + cmbMainGroup->Value,"sgroupName","sgroupID",true);
		}


		FillArcSG();
}
//---------------------------------------------------------------------------

void __fastcall TFArcMain::AeroButton1Click(TObject *Sender)
{
	txtDemands->Text = "";
   	FillArcSG();
}
//---------------------------------------------------------------------------

void __fastcall TFArcMain::ProcSGRowChanging(TObject *Sender, int OldRow, int NewRow,
          bool &Allow)
{
	ProcSG->RemoveImageIdx(14,OldRow);
	ProcSG->AddImageIdx(14,NewRow,14,Advgrid::haLeft,Advgrid::vaCenter);
}
//---------------------------------------------------------------------------

void __fastcall TFArcMain::ProcSGGridHint(TObject *Sender, int ARow, int ACol, UnicodeString &hintstr)

{
	if(ACol == 14 && ARow > 0)
	{
            procID = ProcSG->Cells[1][ProcSG->Row];
			AnsiString sql1 = "SELECT procmain.procPostDate,users.userFullName from procmain ";
			sql1 = sql1 + "LEFT JOIN users on procmain.userID = users.userID ";
			sql1 = sql1 + " WHERE procID = " + procID;

			TFDConnection *connDB1 = new TFDConnection(NULL);
			TFDQuery *Q1 = SelectQ(sql1,connDB1);
				hintstr = "����� : " + Q1->FieldByName("userFullName")->AsAnsiString;


			connDB1->Close();
    }
}
//---------------------------------------------------------------------------

void __fastcall TFArcMain::ProcSGClickCell(TObject *Sender, int ARow, int ACol)
{
	if (ProcSG->Cells[1][ProcSG->Row] != "" && ProcSG->Row > 0)
	{
		procID = ProcSG->Cells[1][ProcSG->Row];
		bool a2 = true;
		ProcSGRowChanging(Sender, -1, ProcSG->Row, a2);
	}
}
//---------------------------------------------------------------------------




void __fastcall TFArcMain::arcSGClickCell(TObject *Sender, int ARow, int ACol)
{
	if (arcSG->Cells[0][arcSG->Row] != "" && arcSG->Row != 0)
	{
		arcID = arcSG->Cells[0][arcSG->Row];
		bool a1 = true;
		arcSGRowChanging(Sender, -1, arcSG->Row,a1);
		FillProcSG();
	}
	else
	{
		ProcSG->RowCount = 2;
		ProcSG->Rows[1]->Clear();
	  //	lblCount->Caption = "0";
	}
}
//---------------------------------------------------------------------------

