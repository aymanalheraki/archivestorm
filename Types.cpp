//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "publicf.h"

#include "Types.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "AdvEdit"
#pragma link "AdvGrid"
#pragma link "AdvObj"
#pragma link "BaseGrid"
#pragma link "AeroButtons"
#pragma link "AdvUtil"
#pragma resource "*.dfm"
TFTypes *FTypes;
//---------------------------------------------------------------------------
__fastcall TFTypes::TFTypes(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFTypes::FormCreate(TObject *Sender)
{
		tSG->FixedCols = 0;
		tSG->FixedRows = 1;
		tSG->ColCount = 3;
		tSG->RowCount = 2;
		tSG->Cols[0]->Text = "ID" ;
		tSG->Cols[1]->Text = "Document type";

		tSG->DefaultRowHeight = 22;
		tSG->ColWidths[0] = 0;
		tSG->ColWidths[1] = 120;
		tSG->ColWidths[2] = 22;

		tSG->ColumnSize->Stretch = true;
		tSG->ColumnSize->StretchColumn = 1;
		filltSG();
}
//---------------------------------------------------------------------------
void __fastcall TFTypes::filltSG()
 {
	AnsiString str1 = "Select * FROM arctypes Order By typeID";
	TFDConnection *connDB = new TFDConnection(NULL);
	TFDQuery *Q = SelectQ(str1,connDB);

	if(Q->RecordCount > 0)
	{
	   tSG->RowCount = Q->RecordCount + 1;
	   for(int i=0;i< Q->RecordCount;i++)
	   {
		 tSG->Cells[0][i+1] = Q->FieldByName("typeID")->AsAnsiString;
		 tSG->Cells[1][i+1] = Q->FieldByName("typeName")->AsAnsiString;

		 if(Q->FieldByName("typeID")->AsAnsiString != "1")
		 {
			tSG->AddImageIdx(2,i+1,0,Advgrid::haCenter,Advgrid::vaCenter);
         }

		 Q->Next();
	   }
	}
	else
	{
		tSG->RowCount = 2;
		tSG->Rows[1]->Clear();
	}
	tSG->Refresh();
	connDB->Close();
}
//---------------------------------------------------------------------------
void __fastcall TFTypes::btnAddNewClick(TObject *Sender)
{
	flagT = 0;
	txtName->Enabled = true;
	txtName->Text = "";
	txtName->SetFocus();
	btnSave->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TFTypes::btnSaveClick(TObject *Sender)
{
	if(txtName->Text.Trim() == "")
	{
		ShowMessage("Please enter type name then save");
		return;
    }


	AnsiString strS = "SELECT * FROM arctypes WHERE typeName = '" + txtName->Text.Trim() + "'";
	TFDConnection *connDB = new TFDConnection(NULL);
	TFDQuery *Q = SelectQ(strS,connDB);

	if(Q->RecordCount > 0)
	{
		ShowMessage("This type entered before");
		return;
	}
	AnsiString strSQL = "";
	if(flagT == 0)
	{
		strSQL = strSQL + "INSERT INTO arctypes(typeName) VALUES ('" + txtName->Text.Trim() + "')";
		CommandSQL(strSQL);

	}
	if(flagT == 1)
	{
	WideString aa = " Are you sure to change type " + oldName + " to " + txtName->Text;
		if (Application->MessageBoxA(aa.c_bstr() ,L"Edit Alert�",MB_YESNO | MB_ICONQUESTION ) == IDYES)
		{
			strSQL = strSQL + "UPDATE arctypes SET typeName ='" + txtName->Text.Trim();
			strSQL = strSQL + "' WHERE typeID=" + tID;
			CommandSQL(strSQL);
		}
	}
	txtName->Enabled = false;
    btnSave->Enabled = false;
	txtName->Text = "";

  filltSG();
	 tSG->Row = tSG->RowCount - 1;

}
//---------------------------------------------------------------------------
void __fastcall TFTypes::tSGDblClickCell(TObject *Sender, int ARow, int ACol)
{
	int aa = 0;
			AnsiString tID = tSG->Cells[0][tSG->Row];
			AnsiString tName = tSG->Cells[1][tSG->Row];
	if(ACol == 2 && ARow > 0 && tSG->GetImageIdx(2,ARow,aa) == true)
	{
		AnsiString strS = "SELECT * FROM arcmain WHERE arcType = " + tID;
		TFDConnection *connDB = new TFDConnection(NULL);
		TFDQuery *Q = SelectQ(strS,connDB);

		if(Q->RecordCount > 0)
		{
			ShowMessage("This type can not be deleted because it was used in archive data");
			return;
		}

		if (Application->MessageBoxA(L"This type will be deleted - are you sure?",L"Delete Alert",MB_YESNO | MB_ICONQUESTION ) == IDYES)
		{

			AnsiString strSQL = "DELETE FROM arctypes WHERE typeID = " + tID;
			CommandSQL(strSQL);
			filltSG();
			ShowMessage(" Type deleted  " + tName + " Successfully ");
			txtName->Text = "";
			txtName->Enabled = false;

		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TFTypes::tSGClick(TObject *Sender)
{
	flagT = 1;

	if (tSG->Cells[0][tSG->Row] != "" && tSG->Row != 0)
	{
		btnSave->Enabled = true;
		tID = tSG->Cells[0][tSG->Row];
		txtName->Enabled = true;
		txtName->Text = tSG->Cells[1][tSG->Row];
		oldName = txtName->Text;
		filltSG();
		vItemValue = tSG->Cells[0][tSG->Row].ToInt();
	}
}
//---------------------------------------------------------------------------
void __fastcall TFTypes::tSGGetCellCursor(TObject *Sender, int ACol, int ARow, int X,
          int Y, TCursor &ACursor)
{
if(ACol == 2) ACursor = crHandPoint;
}
//---------------------------------------------------------------------------
void __fastcall TFTypes::btnExitClick(TObject *Sender)
{
	Close();
}
//---------------------------------------------------------------------------

