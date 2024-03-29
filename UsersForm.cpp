//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "publicf.h"

#include "UsersForm.h"
#include "UsersAdd.h"
#include "UsersEdit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "AdvGrid"
#pragma link "AdvObj"
#pragma link "BaseGrid"
#pragma link "RzPanel"
#pragma link "RzButton"
#pragma link "RzRadChk"
#pragma link "RzRadGrp"
#pragma link "RzLabel"
#pragma link "AdvOfficeButtons"
#pragma link "AeroButtons"
#pragma link "AdvUtil"
#pragma resource "*.dfm"
TFUsersForm *FUsersForm;
//---------------------------------------------------------------------------
__fastcall TFUsersForm::TFUsersForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFUsersForm::FormCreate(TObject *Sender)
{
		UsersSG->FixedCols = 0;
		UsersSG->FixedRows = 1;
		UsersSG->ColCount = 8;
		UsersSG->RowCount = 2;
		UsersSG->Cols[0]->Text = "ID";
		UsersSG->Cols[1]->Text = "UserName";
		UsersSG->Cols[2]->Text = "Log ID";
		UsersSG->Cols[3]->Text = "Addition Date";
		UsersSG->Cols[4]->Text = "Notes";
		UsersSG->Cols[5]->Text = "";
		UsersSG->Cols[6]->Text = "";
		UsersSG->Cols[7]->Text = "";

		UsersSG->DefaultRowHeight = 24;
		UsersSG->ColWidths[0] = 40;
		UsersSG->ColWidths[1] = 130;
		UsersSG->ColWidths[2] = 100;
		UsersSG->ColWidths[3] = 100;
		UsersSG->ColWidths[4] = 140;
		UsersSG->ColWidths[5] = 0;
		UsersSG->ColWidths[6] = 26;
		UsersSG->ColWidths[7] = 26;


		FillUsersSG();
}
//---------------------------------------------------------------------------
 void __fastcall TFUsersForm::FillUsersSG()
 {

	AnsiString strSql = "Select * FROM users";

	UsersSG->FixedRows = 1;


	TFDConnection *connDB = new TFDConnection(NULL);
	TFDQuery *Q = SelectQ(strSql,connDB);


	SendMessage(UsersSG->Handle, WM_SETREDRAW, FALSE, 0);
	if(Q->RecordCount > 0)
	{

	   UsersSG->RowCount = Q->RecordCount + 1;

	   Q->First();
	   for(int i=0;i < Q->RecordCount;i++)
	   {

		 UsersSG->Cells[0][i+1] = Q->FieldByName("userID")->AsInteger;
		 UsersSG->Cells[1][i+1] = Q->FieldByName("userFullName")->AsString;
		 UsersSG->Cells[2][i+1] = Q->FieldByName("userLogID")->AsString;
		 AnsiString OADate =  CDate(GetOADate( Q->FieldByName("userPostDate")->AsDateTime ));
		 if(FMain->DateType == 2)
		 {
			UsersSG->Cells[3][i+1] = Q->FieldByName("userPostDate")->AsDateTime.FormatString("YYYY-MM-DD");
		 }
		 else
		 {
			UsersSG->Cells[3][i+1] = OADate;
         }

		 UsersSG->Cells[4][i+1] = Q->FieldByName("userNotes")->AsString;
		 UsersSG->Cells[5][i+1] = Q->FieldByName("userActive")->AsInteger;
		 if(i>0)
		 {
			UsersSG->AddImageIdx(6,i+1,1,Advgrid::haLeft,Advgrid::vaCenter);
			UsersSG->AddImageIdx(7,i+1,0,Advgrid::haLeft,Advgrid::vaCenter);
         }
		 Q->Next();

	   }
	}
	else
	{
		UsersSG->RowCount = 2;
		UsersSG->Rows[1]->Clear();
	}
	connDB->Close();
	SendMessage(UsersSG->Handle, WM_SETREDRAW, TRUE, 0);
	UsersSG->Invalidate();

}
//---------------------------------------------------------------------------
void __fastcall TFUsersForm::btnNewUserAddClick(TObject *Sender)
{
	TFUsersAdd *uAdd = new TFUsersAdd(this);
	uAdd->ShowModal();
	FillUsersSG();
}
//---------------------------------------------------------------------------




void __fastcall TFUsersForm::UsersSGClick(TObject *Sender)
{
	AnsiString uid = UsersSG->Cells[0][UsersSG->Row];

	if(uid == "1")
	{
	   cPanel->Enabled = false;
	   lblMSG->Caption = "Note: You can not change the administrator privileges on the program";
	}
	else
	{
	   cPanel->Enabled = true;
	   lblMSG->Caption = "";
	}

	if(UsersSG->Row != 0 && UsersSG->Cells[0][UsersSG->Row] != "")
	{


		UserID = UsersSG->Cells[0][UsersSG->Row];

		AnsiString strSql = "Select * FROM usersperm WHERE permUserID = " + UserID;
		TFDConnection *connDB = new TFDConnection(NULL);
		TFDQuery *Q = SelectQ(strSql,connDB);

		chkUsers->Checked = Q->FieldByName("permUsers")->AsInteger;
		chkVars->Checked = Q->FieldByName("permVars")->AsInteger;
	   //	chkHijri->Checked = Q->FieldByName("permHijri")->AsInteger;
		chkArcAdd->Checked = Q->FieldByName("permArcAdd")->AsInteger;
		chkArcEdit->Checked = Q->FieldByName("permArcEdit")->AsInteger;
		chkArcDel->Checked = Q->FieldByName("permArcDel")->AsInteger;
		chkArcImageAdd->Checked = Q->FieldByName("permArcImageAdd")->AsInteger;
		chkArcImageDel->Checked = Q->FieldByName("permArcImageDel")->AsInteger;
		chkArcPrint->Checked = Q->FieldByName("permArcPrint")->AsInteger;
		chkArcProcAdd->Checked = Q->FieldByName("permArcProcAdd")->AsInteger;
		chkArcGroupAdd->Checked = Q->FieldByName("permArcGroupAdd")->AsInteger;
		chkArcTypeAdd->Checked = Q->FieldByName("permArcTypeAdd")->AsInteger;
		chkChangePassword->Checked = Q->FieldByName("permChangePassword")->AsInteger;
		chkBackup->Checked = Q->FieldByName("permBackup")->AsInteger;
		chkRestore->Checked = Q->FieldByName("permRestore")->AsInteger;
	  //	chkLogReport->Checked = Q->FieldByName("permLogReport")->AsInteger;
		chkSecret->Checked = Q->FieldByName("permSecret")->AsInteger;
		chkRepaire->Checked = Q->FieldByName("permRepaire")->AsInteger;
		chkPath->Checked = Q->FieldByName("permPath")->AsInteger;
		chkArcImageExport->Checked = Q->FieldByName("permArcImageExport")->AsInteger;
		chkManageClass->Checked = Q->FieldByName("permManageClass")->AsInteger;

		connDB->Close();
		if(UserID > 1)
		{
			cPanel->Enabled = true;
		}
		else
		{
			cPanel->Enabled = false;
        }
    }
}
//---------------------------------------------------------------------------

void __fastcall TFUsersForm::btnSaveClick(TObject *Sender)
{
//		AnsiString	strSQL = "Update usersperm SET permUsers = " + AnsiString((int)chkUsers->Checked);
//		strSQL = strSQL + " WHERE permUserID = " + UserID;
//		CommandSQL(strSQL);
//		AnsiString sss = "�� ��� ��������� �������� ";
//		sss = sss + "\n";
//		sss = sss + UsersSG->Cells[1][UsersSG->Row];
//		ShowMessage(sss);
}
//---------------------------------------------------------------------------


void __fastcall TFUsersForm::UsersSGDblClickCell(TObject *Sender, int ARow, int ACol)

{
    int aa = 0;
	AnsiString uID = UsersSG->Cells[0][UsersSG->Row];
	if(ACol == 6 && ARow > 0 && UsersSG->GetImageIdx(6,ARow,aa) == true)
	{
		TFUsersEdit *uEdit = new TFUsersEdit(this);
		uEdit->UserID = UserID;
		uEdit->ShowModal();
		FillUsersSG();
	}

	if(ACol == 7 && ARow > 0 && UsersSG->GetImageIdx(7,ARow,aa) == true)
	{
		if (Application->MessageBoxA(L"Warning - this user will be permanently deleted Do you agree?",L"Delete User",MB_YESNO | MB_ICONQUESTION ) == IDYES)
		{
			AnsiString strSQL1 = "DELETE FROM users WHERE users.userID = " + uID;
			CommandSQL(strSQL1);
			strSQL1 = "DELETE FROM usersperm WHERE permUserID = " + uID;
			CommandSQL(strSQL1);
			FillUsersSG();
			cPanel->Enabled = false;
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TFUsersForm::UsersSGGetCellCursor(TObject *Sender, int ACol, int ARow,
		  int X, int Y, TCursor &ACursor)
{
   if(ARow == UsersSG->Row)
   {
		if(ACol == 6 || ACol == 7) ACursor = crHandPoint;
   }
}
//---------------------------------------------------------------------------

void __fastcall TFUsersForm::rbSelectAllClick(TObject *Sender)
{
		chkUsers->Checked = true;
		chkVars->Checked = true;
	 //	chkHijri->Checked = true;
		chkArcAdd->Checked = true;
		chkArcEdit->Checked = true;
		chkArcDel->Checked = true;
		chkArcImageAdd->Checked = true;
		chkArcImageDel->Checked = true;
		chkArcPrint->Checked = true;
		chkArcProcAdd->Checked = true;
		chkArcGroupAdd->Checked = true;
		chkArcTypeAdd->Checked = true;
		chkChangePassword->Checked = true;
		chkBackup->Checked = true;
		chkRestore->Checked = true;
	  //	chkLogReport->Checked = true;
		chkSecret->Checked = true;
		chkRepaire->Checked = true;
		chkPath->Checked = true;
		chkArcImageExport->Checked = true;
		chkManageClass->Checked = true;

		AnsiString strSQL = "UPDATE UsersPerm SET permUsers = 1,permVars = 1,permHijri = 1,permArcAdd = 1,permArcEdit = 1,";
		strSQL = strSQL + "permArcDel = 1,permArcImageAdd = 1,	permArcImageDel = 1,permArcPrint = 1,permArcProcAdd = 1,";
		strSQL = strSQL + "permArcGroupAdd = 1,permArcTypeAdd = 1,permChangePassword = 1,permBackup = 1,permRestore = 1,";
		strSQL = strSQL + "permLogReport = 1,permSecret = 1,permRepaire = 1,	permPath = 1,permArcImageExport = 1,permManageClass = 1 ";
		strSQL = strSQL + " WHERE permUserID = " + UserID;
		CommandSQL(strSQL);


}
//---------------------------------------------------------------------------

void __fastcall TFUsersForm::rbUnSelectAllClick(TObject *Sender)
{
		chkUsers->Checked = false;
		chkVars->Checked = false;
	 //	chkHijri->Checked = false;
		chkArcAdd->Checked = false;
		chkArcEdit->Checked = false;
		chkArcDel->Checked = false;
		chkArcImageAdd->Checked = false;
		chkArcImageDel->Checked = false;
		chkArcPrint->Checked = false;
		chkArcProcAdd->Checked = false;
		chkArcGroupAdd->Checked = false;
		chkArcTypeAdd->Checked = false;
		chkChangePassword->Checked = false;
		chkBackup->Checked = false;
		chkRestore->Checked = false;
	 //	chkLogReport->Checked = false;
		chkSecret->Checked = false;
		chkRepaire->Checked = false;
		chkPath->Checked = false;
		chkArcImageExport->Checked = false;
		chkManageClass->Checked = false;

		AnsiString strSQL = "UPDATE UsersPerm SET permUsers = 0,permVars = 0,permHijri = 0,permArcAdd = 0,permArcEdit = 0,";
		strSQL = strSQL + "permArcDel = 0,permArcImageAdd = 0,	permArcImageDel = 0,permArcPrint = 0,permArcProcAdd = 0,";
		strSQL = strSQL + "permArcGroupAdd = 0,permArcTypeAdd = 0,permChangePassword = 0,permBackup = 0,permRestore = 0,";
		strSQL = strSQL + "permLogReport = 0,permSecret = 0,permRepaire = 0, permPath = 0,permArcImageExport = 0,permManageClass = 0 ";
		strSQL = strSQL + " WHERE permUserID = " + UserID;
		CommandSQL(strSQL);

}
//---------------------------------------------------------------------------

void __fastcall TFUsersForm::chkBackupClick(TObject *Sender)
{
	WideString strSQL = "";


	if(chkBackup->Checked == true)
	{
		strSQL = "UPDATE UsersPerm SET permBackup=1 WHERE permUserID = " + UserID;
	}
	else
	{
		strSQL = "UPDATE UsersPerm SET permBackup=0 WHERE permUserID = " + UserID;
	}
	CommandSQL(strSQL);
}
//---------------------------------------------------------------------------
void __fastcall TFUsersForm::chkVarsClick(TObject *Sender)
{
	WideString strSQL = "";

	if(chkVars->Checked == true)
	{
		strSQL = "UPDATE UsersPerm SET permVars=1 WHERE permUserID = " + UserID;
	}
	else
	{
		strSQL = "UPDATE UsersPerm SET permVars=0 WHERE permUserID = " + UserID;
	}
	CommandSQL(strSQL);
}
//---------------------------------------------------------------------------

void __fastcall TFUsersForm::chkUsersClick(TObject *Sender)
{
	WideString strSQL = "";

	if(chkUsers->Checked == true)
	{
		strSQL = "UPDATE UsersPerm SET permUsers=1 WHERE permUserID = " + UserID;
	}
	else
	{
		strSQL = "UPDATE UsersPerm SET permUsers=0 WHERE permUserID = " + UserID;
	}
	CommandSQL(strSQL);
}
//---------------------------------------------------------------------------


void __fastcall TFUsersForm::chkArcAddClick(TObject *Sender)
{
	WideString strSQL = "";
	if(chkArcAdd->Checked == true)
	{
		strSQL = "UPDATE UsersPerm SET permArcAdd=1 WHERE permUserID = " + UserID;
	}
	else
	{
		strSQL = "UPDATE UsersPerm SET permArcAdd=0 WHERE permUserID = " + UserID;
	}
	CommandSQL(strSQL);
}
//---------------------------------------------------------------------------

void __fastcall TFUsersForm::chkArcEditClick(TObject *Sender)
{
	WideString strSQL = "";

	if(chkArcEdit->Checked == true)
	{
		strSQL = "UPDATE UsersPerm SET permArcEdit=1 WHERE permUserID = " + UserID;
	}
	else
	{
		strSQL = "UPDATE UsersPerm SET permArcEdit=0 WHERE permUserID = " + UserID;
	}
	CommandSQL(strSQL);
}
//---------------------------------------------------------------------------

void __fastcall TFUsersForm::chkArcDelClick(TObject *Sender)
{
	WideString strSQL = "";

	if(chkArcDel->Checked == true)
	{
		strSQL = "UPDATE UsersPerm SET permArcDel=1 WHERE permUserID = " + UserID;
	}
	else
	{
		strSQL = "UPDATE UsersPerm SET permArcDel=0 WHERE permUserID = " + UserID;
	}
	CommandSQL(strSQL);
}
//---------------------------------------------------------------------------

void __fastcall TFUsersForm::chkArcImageAddClick(TObject *Sender)
{
	WideString strSQL = "";

	if(chkArcImageAdd->Checked == true)
	{
		strSQL = "UPDATE UsersPerm SET permArcImageAdd=1 WHERE permUserID = " + UserID;
	}
	else
	{
		strSQL = "UPDATE UsersPerm SET permArcImageAdd=0 WHERE permUserID = " + UserID;
	}
	CommandSQL(strSQL);
}
//---------------------------------------------------------------------------

void __fastcall TFUsersForm::chkArcImageDelClick(TObject *Sender)
{
	WideString strSQL = "";

	if(chkArcImageDel->Checked == true)
	{
		strSQL = "UPDATE UsersPerm SET permArcImageDel=1 WHERE permUserID = " + UserID;
	}
	else
	{
		strSQL = "UPDATE UsersPerm SET permArcImageDel=0 WHERE permUserID = " + UserID;
	}
	CommandSQL(strSQL);
}
//---------------------------------------------------------------------------

void __fastcall TFUsersForm::chkArcPrintClick(TObject *Sender)
{
	WideString strSQL = "";

	if(chkArcPrint->Checked == true)
	{
		strSQL = "UPDATE UsersPerm SET permArcPrint=1 WHERE permUserID = " + UserID;
	}
	else
	{
		strSQL = "UPDATE UsersPerm SET permArcPrint=0 WHERE permUserID = " + UserID;
	}
	CommandSQL(strSQL);
}
//---------------------------------------------------------------------------

void __fastcall TFUsersForm::chkArcProcAddClick(TObject *Sender)
{
	WideString strSQL = "";

	if(chkArcProcAdd->Checked == true)
	{
		strSQL = "UPDATE UsersPerm SET permArcProcAdd=1 WHERE permUserID = " + UserID;
	}
	else
	{
		strSQL = "UPDATE UsersPerm SET permArcProcAdd=0 WHERE permUserID = " + UserID;
	}
	CommandSQL(strSQL);
}
//---------------------------------------------------------------------------

void __fastcall TFUsersForm::chkArcGroupAddClick(TObject *Sender)
{
	WideString strSQL = "";

	if(chkArcGroupAdd->Checked == true)
	{
		strSQL = "UPDATE UsersPerm SET permArcGroupAdd=1 WHERE permUserID = " + UserID;
	}
	else
	{
		strSQL = "UPDATE UsersPerm SET permArcGroupAdd=0 WHERE permUserID = " + UserID;
	}
	CommandSQL(strSQL);
}
//---------------------------------------------------------------------------

void __fastcall TFUsersForm::chkArcTypeAddClick(TObject *Sender)
{
	WideString strSQL = "";

	if(chkArcTypeAdd->Checked == true)
	{
		strSQL = "UPDATE UsersPerm SET permArcTypeAdd=1 WHERE permUserID = " + UserID;
	}
	else
	{
		strSQL = "UPDATE UsersPerm SET permArcTypeAdd=0 WHERE permUserID = " + UserID;
	}
	CommandSQL(strSQL);
}
//---------------------------------------------------------------------------


void __fastcall TFUsersForm::chkChangePasswordClick(TObject *Sender)
{
	WideString strSQL = "";

	if(chkChangePassword->Checked == true)
	{
		strSQL = "UPDATE UsersPerm SET permChangePassword=1 WHERE permUserID = " + UserID;
	}
	else
	{
		strSQL = "UPDATE UsersPerm SET permChangePassword=0 WHERE permUserID = " + UserID;
	}
	CommandSQL(strSQL);
}
//---------------------------------------------------------------------------
void __fastcall TFUsersForm::chkRestoreClick(TObject *Sender)
{
	WideString strSQL = "";

	if(chkRestore->Checked == true)
	{
		strSQL = "UPDATE UsersPerm SET permRestore=1 WHERE permUserID = " + UserID;
	}
	else
	{
		strSQL = "UPDATE UsersPerm SET permRestore=0 WHERE permUserID = " + UserID;
	}
	CommandSQL(strSQL);
}
//---------------------------------------------------------------------------


void __fastcall TFUsersForm::chkSecretClick(TObject *Sender)
{
	WideString strSQL = "";

	if(chkSecret->Checked == true)
	{
		strSQL = "UPDATE UsersPerm SET permSecret=1 WHERE permUserID = " + UserID;
	}
	else
	{
		strSQL = "UPDATE UsersPerm SET permSecret=0 WHERE permUserID = " + UserID;
	}
	CommandSQL(strSQL);

}
//---------------------------------------------------------------------------

void __fastcall TFUsersForm::chkRepaireClick(TObject *Sender)
{
	WideString strSQL = "";

	if(chkRepaire->Checked == true)
	{
		strSQL = "UPDATE UsersPerm SET permRepaire=1 WHERE permUserID = " + UserID;
	}
	else
	{
		strSQL = "UPDATE UsersPerm SET permRepaire=0 WHERE permUserID = " + UserID;
	}
	CommandSQL(strSQL);
}
//---------------------------------------------------------------------------

void __fastcall TFUsersForm::chkPathClick(TObject *Sender)
{
	WideString strSQL = "";

	if(chkPath->Checked == true)
	{
		strSQL = "UPDATE UsersPerm SET permPath=1 WHERE permUserID = " + UserID;
	}
	else
	{
		strSQL = "UPDATE UsersPerm SET permPath=0 WHERE permUserID = " + UserID;
	}
	CommandSQL(strSQL);

}
//---------------------------------------------------------------------------

void __fastcall TFUsersForm::chkArcImageExportClick(TObject *Sender)
{
	WideString strSQL = "";

	if(chkArcImageExport->Checked == true)
	{
		strSQL = "UPDATE UsersPerm SET permArcImageExport=1 WHERE permUserID = " + UserID;
	}
	else
	{
		strSQL = "UPDATE UsersPerm SET permArcImageExport=0 WHERE permUserID = " + UserID;
	}
	CommandSQL(strSQL);
}
//---------------------------------------------------------------------------

void __fastcall TFUsersForm::chkManageClassClick(TObject *Sender)
{
	WideString strSQL = "";

	if(chkManageClass->Checked == true)
	{
		strSQL = "UPDATE UsersPerm SET permManageClass=1 WHERE permUserID = " + UserID;
	}
	else
	{
		strSQL = "UPDATE UsersPerm SET permManageClass=0 WHERE permUserID = " + UserID;
	}
	CommandSQL(strSQL);
}
//---------------------------------------------------------------------------

