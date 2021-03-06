//---------------------------------------------------------------------------

#ifndef ProcAddH
#define ProcAddH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "RzCmboBx.hpp"
#include "RzEdit.hpp"
#include <Vcl.Mask.hpp>
#include "RzPanel.hpp"
#include <Vcl.ExtCtrls.hpp>
#include "RzButton.hpp"
#include "RzDTP.hpp"
#include <Vcl.ComCtrls.hpp>
#include "AdvDateTimePicker.hpp"
#include "AeroButtons.hpp"
#include "RzLabel.hpp"
#include <System.ImageList.hpp>
#include <Vcl.ImgList.hpp>
//---------------------------------------------------------------------------
class TFProcAdd : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TLabel *Label2;
	TRzGroupBox *RzGroupBox1;
	TRzLabel *lblProcText;
	TRzMemo *txtprocDesc;
	TAeroButton *btnSave;
	TAeroButton *btnExit;
	TRzComboBox *cmbProcStatus;
	TImageList *ImageList3;
	void __fastcall btnSaveClick(TObject *Sender);
	void __fastcall btnExitClick(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFProcAdd(TComponent* Owner);
	AnsiString arcID;
};
//---------------------------------------------------------------------------
extern PACKAGE TFProcAdd *FProcAdd;
//---------------------------------------------------------------------------
#endif
