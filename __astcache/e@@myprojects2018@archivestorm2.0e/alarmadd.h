//---------------------------------------------------------------------------

#ifndef AlarmAddH
#define AlarmAddH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "RzPanel.hpp"
#include <Vcl.ExtCtrls.hpp>
#include "RzButton.hpp"
#include "AdvEdit.hpp"
#include "AeroButtons.hpp"
#include <Vcl.ImgList.hpp>
#include "AdvDateTimePicker.hpp"
#include <Vcl.ComCtrls.hpp>
#include "AdvGroupBox.hpp"
#include <System.ImageList.hpp>
//---------------------------------------------------------------------------
class TFAlarmAdd : public TForm
{
__published:	// IDE-managed Components
	TRzGroupBox *RzGroupBox1;
	TLabel *lblCurrentDate;
	TImageList *ImageList3;
	TAeroButton *btnSave;
	TAeroButton *btnExit;
	TAeroButton *AeroButton1;
	TAdvGroupBox *AdvGroupBox1;
	TAdvDateTimePicker *dtpAlarm;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall btnExitClick(TObject *Sender);
	void __fastcall btnSaveClick(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall AeroButton1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFAlarmAdd(TComponent* Owner);
	AnsiString arcID,curYear;
};
//---------------------------------------------------------------------------
extern PACKAGE TFAlarmAdd *FAlarmAdd;
//---------------------------------------------------------------------------
#endif
