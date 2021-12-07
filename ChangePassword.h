//---------------------------------------------------------------------------

#ifndef ChangePasswordH
#define ChangePasswordH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "RzButton.hpp"
#include "AeroButtons.hpp"
#include <Vcl.ImgList.hpp>
#include <System.ImageList.hpp>
//---------------------------------------------------------------------------
class TFChangePassword : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TLabel *Label2;
	TEdit *txtCurrentPassword;
	TEdit *txtNewPassword;
	TAeroButton *btnSave;
	TAeroButton *btnExit;
	TImageList *ImageList3;
	void __fastcall btnSaveClick(TObject *Sender);
	void __fastcall btnExitClick(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFChangePassword(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFChangePassword *FChangePassword;
//---------------------------------------------------------------------------
#endif
