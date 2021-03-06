//---------------------------------------------------------------------------

#ifndef arcAddH
#define arcAddH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "AdvEdit.hpp"
#include <Vcl.ExtCtrls.hpp>
#include "RzEdit.hpp"
#include "AeroButtons.hpp"
#include <Vcl.ImgList.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.DBCtrls.hpp>
#include "AdvGroupBox.hpp"
#include <Vcl.ComCtrls.hpp>
#include "RzCmboBx.hpp"
#include <System.ImageList.hpp>
#include "AdvSmoothDatePicker.hpp"
#include "AdvSmoothEdit.hpp"
#include "AdvSmoothEditButton.hpp"
#include <Vcl.Mask.hpp>
#include "AdvDateTimePicker.hpp"
#include "AdvOfficeButtons.hpp"

//---------------------------------------------------------------------------
class TFarcAdd : public TForm
{
__published:	// IDE-managed Components
	TAeroButton *btnSave;
	TImageList *ImageList3;
	TAeroButton *btnExit;
	TAdvGroupBox *arcIndexGB;
	TLabel *Label4;
	TLabel *Label5;
	TSpeedButton *btnAddGroups;
	TLabel *Label2;
	TLabel *Label6;
	TSpeedButton *btnTyAdd;
	TAdvGroupBox *AdvGroupBox1;
	TLabel *Label3;
	TAdvEdit *txtarcSubject;
	TRzComboBox *cmbSubGroup;
	TRzComboBox *cmbMainGroup;
	TRzComboBox *cmbTypes;
	TRzComboBox *cmbSecurity;
	TAdvDateTimePicker *dtpArcDate;
	TRichEdit *txtarcDesc;
	TAdvEdit *txtSaveNo;
	TRzComboBox *cmbDirection;
	TLabel *Label1;
	void __fastcall btnExitClick(TObject *Sender);
	void __fastcall btnSaveClick(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall btnAddGroupsClick(TObject *Sender);
	void __fastcall btnTyAddClick(TObject *Sender);
	void __fastcall arcIndexGBCheckBoxClick(TObject *Sender);
	void __fastcall cmbMainGroupChange(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFarcAdd(TComponent* Owner);
	  AnsiString vMGroup,vSGroup,vType,vSec;
	  AnsiString aID;
	  int idd;

};
//---------------------------------------------------------------------------
extern PACKAGE TFarcAdd *FarcAdd;
//---------------------------------------------------------------------------
#endif
