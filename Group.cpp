//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "publicf.h"

#include "Group.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "AdvEdit"
#pragma link "AdvGrid"
#pragma link "AdvObj"
#pragma link "BaseGrid"
#pragma link "AeroButtons"
#pragma link "AdvUtil"
#pragma resource "*.dfm"
TFGroup *FGroup;
//---------------------------------------------------------------------------
__fastcall TFGroup::TFGroup(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFGroup::FormCreate(TObject *Sender)
{
		mSG->FixedCols = 0;
		mSG->FixedRows = 1;
		mSG->ColCount = 3;
		mSG->RowCount = 2;
		mSG->Cols[0]->Text = "ID" ;
		mSG->Cols[1]->Text = "MainGroup Name";

		mSG->DefaultRowHeight = 22;
		mSG->ColWidths[0] = 0;
		mSG->ColWidths[1] = 120;
		mSG->ColWidths[2] = 22;

		mSG->ColumnSize->Stretch = true;
		mSG->ColumnSize->StretchColumn = 1;

		sSG->FixedCols = 0;
		sSG->FixedRows = 1;
		sSG->ColCount = 3;
		sSG->RowCount = 2;
		sSG->Cols[0]->Text = "ID" ;
		sSG->Cols[1]->Text = "SubGroup Name";

		sSG->DefaultRowHeight = 22;
		sSG->ColWidths[0] = 0;
		sSG->ColWidths[1] = 120;
		sSG->ColWidths[2] = 22;

		sSG->ColumnSize->Stretch = true;
		sSG->ColumnSize->StretchColumn = 1;

       fillmSG();

}
//---------------------------------------------------------------------------
void __fastcall TFGroup::fillmSG()
 {

	AnsiString str1 = "Select * FROM maingroups Order By mgroupID";
	TFDConnection *connDB = new TFDConnection(NULL);
	TFDQuery *Q = SelectQ(str1,connDB);

	if(Q->RecordCount > 0)
	{
	   mSG->RowCount = Q->RecordCount + 1;
	   for(int i=0;i< Q->RecordCount;i++)
	   {
		 mSG->Cells[0][i+1] = Q->FieldByName("mgroupID")->AsAnsiString;
		 mSG->Cells[1][i+1] = Q->FieldByName("mgroupName")->AsAnsiString;
		 if(Q->FieldByName("mgroupID")->AsAnsiString != "1")
		 {
			mSG->AddImageIdx(2,i+1,0,Advgrid::haCenter,Advgrid::vaCenter);
		 }

		 Q->Next();
	   }
	   mSG->Row = mSG->RowCount - 1;
	}
	else
	{
		mSG->RowCount = 2;
		mSG->Rows[1]->Clear();
	}
	mSG->Refresh();
	connDB->Close();
}
//---------------------------------------------------------------------------
void __fastcall TFGroup::mSGClick(TObject *Sender)
{
	flagM = 1;

	if (mSG->Cells[0][mSG->Row] != "" && mSG->Row != 0)
	{
		btnSaveM->Enabled = true;
		mID = mSG->Cells[0][mSG->Row];
		txtNameM->Enabled = true;
		btnAddNewS->Enabled = true;
		txtNameM->Text = mSG->Cells[1][mSG->Row];
		oldNameM = txtNameM->Text;
		txtNameS->Text = "";
		txtNameS->Enabled = false;
		btnSaveS->Enabled = false;


		AnsiString sm = AnsiString("SubGroup ") + "[" + mSG->Cells[1][mSG->Row] + "]";
		lblSubGroup->Caption = sm;
		fillsSG();
         vItemValue = mSG->Cells[0][mSG->Row].ToInt();
	}
}
//---------------------------------------------------------------------------
void __fastcall TFGroup::fillsSG()
 {

	AnsiString str2 = "Select * FROM subgroups WHERE sgroupMainGroupID = " + mID;
	TFDConnection *connDB = new TFDConnection(NULL);
	TFDQuery *Q = SelectQ(str2,connDB);

	if(Q->RecordCount > 0)
	{
	   sSG->RowCount = Q->RecordCount + 1;
	   for(int i=0;i< Q->RecordCount;i++)
	   {
			sSG->Cells[0][i+1] = Q->FieldByName("sgroupID")->AsAnsiString;
			sSG->Cells[1][i+1] = Q->FieldByName("sgroupName")->AsAnsiString;

			if(Q->FieldByName("sgroupID")->AsAnsiString != "1")
			{
				sSG->AddImageIdx(2,i+1,0,Advgrid::haCenter,Advgrid::vaCenter);
            }
			Q->Next();
	   }
	}
	else
	{
		sSG->RowCount = 2;
		sSG->Rows[1]->Clear();
	}
	sSG->Refresh();
	connDB->Close();
}
//---------------------------------------------------------------------------
void __fastcall TFGroup::btnAddNewMClick(TObject *Sender)
{
	flagM = 0;
	txtNameM->Enabled = true;
	txtNameM->Text = "";
	txtNameM->SetFocus();
	btnSaveM->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TFGroup::btnSaveMClick(TObject *Sender)
{
	if(txtNameM->Text.Trim() == "")
	{
		ShowMessage("Please enter your maingroup name and save");
		return;
	}
	AnsiString strS = "SELECT * FROM MainGroups WHERE mgroupName = '" + txtNameM->Text.Trim() + "'";
	TFDConnection *connDB = new TFDConnection(NULL);
	TFDQuery *Q = SelectQ(strS,connDB);



	if(Q->RecordCount > 0)
	{
		ShowMessage("This category is already saved");
		return;
	}
	AnsiString strSQL = "";
	if(flagM == 0)
	{
		strSQL = strSQL + "INSERT INTO MainGroups(mgroupName)";
		strSQL = strSQL + " VALUES ('" + txtNameM->Text.Trim() + "')";
		CommandSQL(strSQL);
	}
	if(flagM == 1)
	{
	WideString aa = "Are you sure you want to modify the maingroup " + oldNameM + " To " + txtNameM->Text;
		if (Application->MessageBoxA(aa.c_bstr() ,L"Edit MainGroup",MB_YESNO | MB_ICONQUESTION ) == IDYES)
		{
			strSQL = strSQL + "UPDATE MainGroups SET mgroupName ='" + txtNameM->Text.Trim();
			strSQL = strSQL + "' WHERE mgroupID=" + mID;
			CommandSQL(strSQL);
		}
	}
	sSG->RowCount = 2;
	sSG->Rows[1]->Clear();
	txtNameM->Enabled = false;
	btnSaveM->Enabled = false;
	txtNameM->Text = "";
	fillmSG();
	 mSG->Row = mSG->RowCount - 1;

}
//---------------------------------------------------------------------------

void __fastcall TFGroup::mSGDblClickCell(TObject *Sender, int ARow, int ACol)
{
	int aa = 0;
	if(ACol == 2 && ARow > 0 && mSG->GetImageIdx(2,ARow,aa) == true)
	{
		AnsiString strS = "SELECT * FROM arcmain WHERE arcMainGroup = " + mID;
		TFDConnection *connDB = new TFDConnection(NULL);
		TFDQuery *Q = SelectQ(strS,connDB);

		if(Q->RecordCount > 0)
		{
			ShowMessage("This MainGroup can not be deleted for use in document data");
			return;
		}
		AnsiString strS2 = "SELECT * FROM SubGroups WHERE sgroupMainGroupID = " + mID;
		TFDConnection *connDB1 = new TFDConnection(NULL);
		TFDQuery *Q1 = SelectQ(strS2,connDB1);

		if(Q1->RecordCount > 0)
		{
			ShowMessage("Can not delete a maingroup that has subgroup - please delete its subgroup and then delete");
			return;
		}




		if (Application->MessageBoxA(L"This maingroup will be deleted - are you sure this process?",L"Delete Alert",MB_YESNO | MB_ICONQUESTION ) == IDYES)
		{
			AnsiString mID = mSG->Cells[0][mSG->Row];
			AnsiString mName = mSG->Cells[1][mSG->Row];
			AnsiString strSQL = "DELETE FROM maingroups WHERE mgroupID = " + mID;
			CommandSQL(strSQL);
			fillmSG();
			sSG->RowCount = 2;
			sSG->Rows[1]->Clear();
			ShowMessage(" Maingroup deletet " + mName + " ����� ");
			txtNameM->Text = "";
			txtNameM->Enabled = false;

		}
	}
}
//---------------------------------------------------------------------------


void __fastcall TFGroup::mSGGetCellCursor(TObject *Sender, int ACol, int ARow, int X,
          int Y, TCursor &ACursor)
{
	if(ACol == 2) ACursor = crHandPoint;
}
//---------------------------------------------------------------------------

void __fastcall TFGroup::sSGGetCellCursor(TObject *Sender, int ACol, int ARow, int X,
          int Y, TCursor &ACursor)
{
	if(ACol == 2) ACursor = crHandPoint;
}
//---------------------------------------------------------------------------

void __fastcall TFGroup::sSGClick(TObject *Sender)
{
	flagS = 1;

	if (sSG->Cells[0][sSG->Row] != "" && sSG->Row != 0)
	{
		btnSaveS->Enabled = true;
		sID = sSG->Cells[0][sSG->Row];
		txtNameS->Enabled = true;
		txtNameS->Text = sSG->Cells[1][sSG->Row];
		oldNameS = txtNameS->Text;
	}
}
//---------------------------------------------------------------------------

void __fastcall TFGroup::btnAddNewSClick(TObject *Sender)
{
	flagS = 0;
	txtNameS->Enabled = true;
	txtNameS->Text = "";
	txtNameS->SetFocus();
	btnSaveS->Enabled = true;
}
//---------------------------------------------------------------------------


void __fastcall TFGroup::btnSaveSClick(TObject *Sender)
{
	if(txtNameS->Text.Trim() == "")
	{
		ShowMessage("Please enter subgroup then try to save again");
		return;
	}
	AnsiString strS = "SELECT * FROM SubGroups WHERE sgroupName = '" + txtNameS->Text.Trim() + "'";
	TFDConnection *connDB = new TFDConnection(NULL);
	TFDQuery *Q = SelectQ(strS,connDB);


	if(Q->RecordCount > 0)
	{
		ShowMessage("this group entered to database before.");
		return;
	}
	AnsiString strSQL = "";
	if(flagS == 0)
	{
		strSQL = strSQL + "INSERT INTO SubGroups(sgroupMainGroupID,sgroupName)";
		strSQL = strSQL + " VALUES (" + mID + ",'" + txtNameS->Text.Trim() + "')";
		CommandSQL(strSQL);
	}
	if(flagS == 1)
	{
	WideString aa = " Are you sure to change subgroup  " + oldNameS + " To " + txtNameS->Text;
		if (Application->MessageBoxA(aa.c_bstr() ,L"Edit Alert",MB_YESNO | MB_ICONQUESTION ) == IDYES)
		{
			strSQL = strSQL + "UPDATE SubGroups SET sgroupName ='" + txtNameS->Text.Trim();
			strSQL = strSQL + "' WHERE SgroupID=" + sID;
			CommandSQL(strSQL);

		}
	}
	txtNameS->Enabled = false;
	btnSaveS->Enabled = false;
	txtNameS->Text = "";
  fillsSG();
}
//---------------------------------------------------------------------------

void __fastcall TFGroup::sSGDblClickCell(TObject *Sender, int ARow, int ACol)
{
	int aa = 0;
	if(ACol == 2 && ARow > 0 && sSG->GetImageIdx(2,ARow,aa) == true)
	{
		AnsiString strS = "SELECT * FROM arcmain WHERE arcSubGroup = " + sID;
		TFDConnection *connDB = new TFDConnection(NULL);
		TFDQuery *Q = SelectQ(strS,connDB);

		if(Q->RecordCount > 0)
		{
			ShowMessage("This subgroup can not be deleted for use in archive data");
			return;
		}

		if (Application->MessageBoxA(L"This subgroup will be permanently deleted - are you sure about this?",L"delete alert",MB_YESNO | MB_ICONQUESTION ) == IDYES)
		{
			AnsiString sID = sSG->Cells[0][sSG->Row];
			AnsiString sName = sSG->Cells[1][sSG->Row];
			AnsiString strSQL = "DELETE FROM subgroups WHERE sgroupID = " + sID;
			CommandSQL(strSQL);
			fillsSG();
			ShowMessage(" Subgroup Deleted  " + sName + " Successfully ");
			txtNameS->Text = "";
			txtNameS->Enabled = false;

		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TFGroup::btnClick(TObject *Sender)
{
	Close();
}
//---------------------------------------------------------------------------

void __fastcall TFGroup::btnExitClick(TObject *Sender)
{
	Close();
}
//---------------------------------------------------------------------------

