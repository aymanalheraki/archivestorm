//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "publicf.h"

#include "AlarmAdd.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "RzPanel"
#pragma link "RzButton"
#pragma link "AdvEdit"
#pragma link "AeroButtons"
#pragma link "AdvDateTimePicker"
#pragma link "AdvGroupBox"
#pragma resource "*.dfm"
TFAlarmAdd *FAlarmAdd;
//---------------------------------------------------------------------------
__fastcall TFAlarmAdd::TFAlarmAdd(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------
void __fastcall TFAlarmAdd::FormCreate(TObject *Sender)
{
	TDateTime cDate = Now();
	dtpAlarm->Date = Now();

	AnsiString hDate = GetOADate(cDate);
	if(FMain->DateType == 1)
	{
		lblCurrentDate->Caption =  CDate(hDate);
	}
	if(FMain->DateType == 2)
	{
		lblCurrentDate->Caption =  cDate.FormatString("dd / MM / yyyy");
    }

	curYear = cDate.FormatString("yyyy");
}
//---------------------------------------------------------------------------
void __fastcall TFAlarmAdd::btnExitClick(TObject *Sender)
{
	Close();
}
//---------------------------------------------------------------------------
void __fastcall TFAlarmAdd::btnSaveClick(TObject *Sender)
{
	TDateTime nowDate = Now();
	if(nowDate >= dtpAlarm->Date)
	{
		ShowMessage("Please choose a date that is larger than the current date - and try again");
		return;
	}
	AnsiString str1 = "UPDATE arcmain SET arcAlarm ='" + dtpAlarm->Date.FormatString("YYYY-MM-DD") + "' WHERE arcID=" + arcID;
   CommandSQL(str1);
	Close();
}
//---------------------------------------------------------------------------
void __fastcall TFAlarmAdd::FormShow(TObject *Sender)
{
	AnsiString str1 = "SELECT * FROM arcmain WHERE arcID = " + arcID;
	TFDConnection *connDB = new TFDConnection(NULL);
	TFDQuery *Q = SelectQ(str1,connDB);

	if(Q->FieldByName("arcAlarm")->AsAnsiString != "")
	{
			dtpAlarm->Date = Q->FieldByName("arcAlarm")->AsDateTime;
	}
}
//---------------------------------------------------------------------------

void __fastcall TFAlarmAdd::AeroButton1Click(TObject *Sender)
{
	AnsiString str1 = "UPDATE arcmain SET arcAlarm ='' WHERE arcID=" + arcID;
   CommandSQL(str1);
   Close();
}
//---------------------------------------------------------------------------

