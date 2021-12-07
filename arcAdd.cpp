//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "publicf.h"

#include "arcAdd.h"
#include "Group.h"
#include "Types.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "AdvEdit"
#pragma link "AeroButtons"
#pragma link "AdvGroupBox"
#pragma link "RzCmboBx"
#pragma link "AdvSmoothDatePicker"
#pragma link "AdvSmoothEdit"
#pragma link "AdvSmoothEditButton"
#pragma link "AdvDateTimePicker"
#pragma link "AdvOfficeButtons"
#pragma resource "*.dfm"
TFarcAdd *FarcAdd;
//---------------------------------------------------------------------------
__fastcall TFarcAdd::TFarcAdd(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFarcAdd::btnExitClick(TObject *Sender)
{
	idd = 0;
	Close();
}
//---------------------------------------------------------------------------

void __fastcall TFarcAdd::btnSaveClick(TObject *Sender)
{

	 if(cmbMainGroup->Value < 0)
	 {
		ShowMessage("Please select the main group for this transaction");
		return;
	 }
	 else
	 {
		vMGroup = cmbMainGroup->Value;
     }

	 if(cmbSubGroup->Value < 0)
	 {
		ShowMessage("Please select subgroup");
		return;
	 }
	 else
	 {
		vSGroup = cmbSubGroup->Value;
     }


	 if(cmbTypes->Value < 0)
	 {
		ShowMessage("Please select the document type");
		return;
	 }
	 else
	 {
		vType = 1;
	 }


 if(txtarcSubject->Text.Trim() == "")
 {
	 ShowMessage("Please enter the Document title and try again");
	 return;
 }

	TDateTime curDate = Now();
	AnsiString curHDate = GetOADate(dtpArcDate->DateTime);


	 AnsiString docHDate = GetOADate(dtpArcDate->Date);
	UnicodeString strSQL = "INSERT INTO arcmain (arcPostDate,arcDirection,arcSaveNo,arcDateA,arcDate,mgroupID,";
	strSQL = strSQL + "sgroupID,typeID,secID,arcSubject,arcDesc,userID) VALUES (";
	strSQL = strSQL + "'" + Now().DateTimeString() + "'," + cmbDirection->Value + ",'" + txtSaveNo->Text.Trim() + "','";
	strSQL = strSQL + curHDate + "','" + dtpArcDate->Date.FormatString("YYYY-MM-DD HH:mm:ss") + "',";
	strSQL = strSQL + cmbMainGroup->Value + "," + cmbSubGroup->Value + ",";
	strSQL = strSQL + cmbTypes->Value + "," + cmbSecurity->Value + ",'" + txtarcSubject->Text.Trim();
	strSQL = strSQL + "','" + txtarcDesc->Text.Trim() + "'," + FMain->vUserID + ")";

	idd = CommandSQL(strSQL);

	AnsiString vDesc = "Add the document to the system";
	strSQL = "INSERT INTO procmain (arcID,procPostDate,procDesc,userID) VALUES (";
	strSQL = strSQL + idd + ",'" + Now().FormatString("YYYY-MM-DD HH:mm:ss") + "','" + vDesc;
	strSQL = strSQL + "'," + FMain->vUserID + ")";

	CommandSQL(strSQL);



	Close();

}
//---------------------------------------------------------------------------
void __fastcall TFarcAdd::FormCreate(TObject *Sender)
{
	ComboFillA(cmbMainGroup,"SELECT * FROM maingroups","mgroupName","mgroupID",false);
	cmbMainGroup->Value = 1;
	cmbMainGroupChange(Sender);
	ComboFillA(cmbTypes,"SELECT * FROM arctypes","typeName","typeID",false);
	cmbTypes->Value = 1;
	ComboFillA(cmbSecurity,"SELECT * FROM arcsecurity","secName","secID",false);
	cmbSecurity->Value= 1;

	ComboFillA(cmbDirection,"SELECT * FROM arcDirection","dirName","dirID",false);
	cmbDirection->Value= 1;

     dtpArcDate->DateTime = Now();
	if(arcIndexGB->CheckBox->Checked == false)
	{
       cmbSubGroup->Enabled = false;
    }

}
//---------------------------------------------------------------------------





void __fastcall TFarcAdd::btnAddGroupsClick(TObject *Sender)
{
	TFGroup *sG = new TFGroup(Application);
	sG->ShowModal();

	ComboFillA(cmbMainGroup,"SELECT * FROM maingroups","mgroupName","mgroupID",false);
	delete sG;

}
//---------------------------------------------------------------------------




void __fastcall TFarcAdd::btnTyAddClick(TObject *Sender)
{
	TFTypes *tType = new TFTypes(Application);
	tType->ShowModal();


	ComboFillA(cmbTypes,"SELECT * FROM arctypes","typeName","typeID",false);
	delete tType;
}
//---------------------------------------------------------------------------


void __fastcall TFarcAdd::arcIndexGBCheckBoxClick(TObject *Sender)
{
	if(FMain->vPermManageClass == 0)
	{
		arcIndexGB->CheckBox->Checked = false;
		return;
	}
	else
	{
        //
    }
}
//---------------------------------------------------------------------------


void __fastcall TFarcAdd::cmbMainGroupChange(TObject *Sender)
{
	cmbSubGroup->Enabled = true;
	ComboFillA(cmbSubGroup,"SELECT * FROM subgroups WHERE sgroupMainGroupID = " + cmbMainGroup->Value,"sgroupName","sgroupID",false);
	cmbSubGroup->Value = 1;
}
//---------------------------------------------------------------------------


