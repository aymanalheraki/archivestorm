//---------------------------------------------------------------------------

#ifndef UsersEditH
#define UsersEditH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "RzButton.hpp"
#include "RzPanel.hpp"
#include "RzRadChk.hpp"
#include <Vcl.ExtCtrls.hpp>
#include "RzCmboBx.hpp"
#include "AeroButtons.hpp"
#include <Vcl.ImgList.hpp>
#include <System.ImageList.hpp>
//---------------------------------------------------------------------------
class TFUsersEdit : public TForm
{
__published:	// IDE-managed Components
	TRzGroupBox *RzGroupBox1;
	TLabel *Label7;
	TLabel *Label4;
	TLabel *Label8;
	TLabel *Label9;
	TLabel *Label1;
	TEdit *txtuserFullName;
	TEdit *txtuserLogID;
	TEdit *txtuserLogPassword;
	TMemo *txtuserNotes;
	TEdit *txtuserID;
	TAeroButton *btnSave;
	TAeroButton *btnExit;
	TImageList *ImageList3;
	TRzCheckBox *chkuserActive;
	void __fastcall FormShow(TObject *Sender);
	void __fastcall btnExitClick(TObject *Sender);
	void __fastcall btnSaveClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFUsersEdit(TComponent* Owner);
	AnsiString UserID,oldUserName,oldLogID;
};
//---------------------------------------------------------------------------
extern PACKAGE TFUsersEdit *FUsersEdit;
//---------------------------------------------------------------------------
#endif
