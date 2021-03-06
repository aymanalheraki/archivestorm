//---------------------------------------------------------------------------

#ifndef arcEditH
#define arcEditH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "AdvEdit.hpp"
#include "arcAdd.h"
#include <Vcl.ExtCtrls.hpp>
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
class TFarcEdit : public TFarcAdd
{
__published:	// IDE-managed Components
	void __fastcall btnSaveClick(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall arcIndexGBCheckBoxClick(TObject *Sender);
	void __fastcall cmbMainGroupClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFarcEdit(TComponent* Owner);
	AnsiString arcID;
	int oldSNo;

AnsiString varcSaveNo,varcMainGroup,varcSubGroup,varcType,varcSecurity,varcSubject,varcDesc;


};
//---------------------------------------------------------------------------
extern PACKAGE TFarcEdit *FarcEdit;
//---------------------------------------------------------------------------
#endif
