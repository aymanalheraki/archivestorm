//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "publicf.h"

#include "arcEdit.h"
#include "Main.h"
#include "Types.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "AdvEdit"
#pragma link "arcAdd"
#pragma link "AeroButtons"
#pragma link "AdvGroupBox"
#pragma link "RzCmboBx"
#pragma link "AdvSmoothDatePicker"
#pragma link "AdvSmoothEdit"
#pragma link "AdvSmoothEditButton"
#pragma link "AdvDateTimePicker"
#pragma link "AdvOfficeButtons"
#pragma resource "*.dfm"
TFarcEdit *FarcEdit;

//---------------------------------------------------------------------------
__fastcall TFarcEdit::TFarcEdit(TComponent* Owner)
	: TFarcAdd(Owner)
{

}
//---------------------------------------------------------------------------
void __fastcall TFarcEdit::btnSaveClick(TObject *Sender)
{

 if(cmbMainGroup->Value < 0)
 {
	ShowMessage("Please select the main group for this transaction");
	return;
 }

 if(cmbSubGroup->Value < 0)
 {
	ShowMessage("Please select subgrou");
	return;
 }

 if(txtarcSubject->Text.Trim() == "")
 {
	 ShowMessage("Please select the document type");
	 return;
 }
	 AnsiString curHDate = GetOADate(dtpArcDate->DateTime);
	AnsiString strSQL = "UPDATE arcmain SET arcDirection=" + cmbDirection->Value;
	strSQL += ",arcSubject='" + txtarcSubject->Text.Trim();
	strSQL += "',arcSaveNo='" + txtSaveNo->Text.Trim();
	strSQL += "',arcDateA='" + curHDate;
	strSQL += "',arcDate='" + dtpArcDate->Date.FormatString("YYYY-MM-DD HH:mm:ss");
	strSQL += "',arcDesc='" + txtarcDesc->Text.Trim();
	strSQL += "',mgroupID=" + cmbMainGroup->Value;
	strSQL += ",sgroupID=" + cmbSubGroup->Value;
	strSQL += ",typeID=" + cmbTypes->Value;
	strSQL += ",secID=" + cmbSecurity->Value;
	strSQL += ",userID=" + FMain->vUserID;
	strSQL += " WHERE arcID = " + arcID;
	CommandSQL(strSQL);



	varcMainGroup = cmbMainGroup->Text;
	varcSubGroup = cmbSubGroup->Text;
	varcType = cmbTypes->Text;
	varcSecurity = cmbSecurity->Text;
	varcSubject = txtarcSubject->Text;
	varcDesc = txtarcDesc->Text;

	Close();
}
//---------------------------------------------------------------------------
void __fastcall TFarcEdit::FormShow(TObject *Sender)
{
	AnsiString strSQL = "SELECT * FROM arcmain WHERE arcID=" + arcID;
	TLiteConnection *connDB1 = new TLiteConnection(NULL);
	TLiteQuery *Q1 = SelectQ(strSQL,connDB1);

	cmbDirection->Value = Q1->FieldByName("arcDirection")->AsAnsiString;
	dtpArcDate->Date = Q1->FieldByName("arcDate")->AsDateTime;
	txtSaveNo->Text =  Q1->FieldByName("arcSaveNo")->AsAnsiString;
	cmbMainGroup->Value = Q1->FieldByName("mgroupID")->AsAnsiString;
	cmbMainGroupClick(Sender);
	cmbSubGroup->Value = Q1->FieldByName("sgroupID")->AsAnsiString;
	cmbTypes->Value = Q1->FieldByName("typeID")->AsAnsiString;
	cmbSecurity->Value = Q1->FieldByName("secID")->AsAnsiString;
	txtarcSubject->Text = Q1->FieldByName("arcSubject")->AsAnsiString;
	txtarcDesc->Text = Q1->FieldByName("arcDesc")->AsAnsiString;

	varcMainGroup = cmbMainGroup->Value;
	varcSubGroup = cmbSubGroup->Value;
	varcType = cmbTypes->Value;
	varcSecurity = cmbSecurity->Value;
	varcSubject = txtarcSubject->Text;
	varcDesc = txtarcDesc->Text;


	if(arcIndexGB->CheckBox->Checked == false)
	{
       cmbSubGroup->Enabled = false;
    }

}
//---------------------------------------------------------------------------

void __fastcall TFarcEdit::FormCreate(TObject *Sender)
{
	ComboFillA(cmbMainGroup,"SELECT * FROM maingroups","mgroupName","mgroupID",true);
	cmbMainGroupClick(Sender);
	ComboFillA(cmbTypes,"SELECT * FROM arctypes","typeName","typeID",true);
	ComboFillA(cmbSecurity,"SELECT * FROM arcsecurity","secName","secID",true);

}
//---------------------------------------------------------------------------

void __fastcall TFarcEdit::arcIndexGBCheckBoxClick(TObject *Sender)
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

void __fastcall TFarcEdit::cmbMainGroupClick(TObject *Sender)
{
	cmbSubGroup->Enabled = true;
	ComboFillA(cmbSubGroup,"SELECT * FROM subgroups WHERE sgroupMainGroupID = " + cmbMainGroup->Value,"sgroupName","sgroupID",false);
}
//---------------------------------------------------------------------------

