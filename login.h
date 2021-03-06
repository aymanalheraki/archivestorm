//---------------------------------------------------------------------------

#ifndef loginH
#define loginH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include "RzLabel.hpp"
#include "RzPanel.hpp"
#include <Vcl.ImgList.hpp>
#include "RzEdit.hpp"
#include <Vcl.Mask.hpp>
#include <System.ImageList.hpp>
//---------------------------------------------------------------------------
class TFlogin : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label2;
	TEdit *txtUserID;
	TButton *btnLogIn;
	TButton *btnExit;
	TPanel *Panel1;
	TRzLabel *lblMemo;
	TLabel *Label1;
	TImageList *ImageList3;
	TRzEdit *txtUserPassword;
	void __fastcall btnLogInClick(TObject *Sender);
	void __fastcall txtUserIDKeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall txtUserPasswordKeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall btnExitClick(TObject *Sender);

private:	// User declarations
public:		// User declarations
	__fastcall TFlogin(TComponent* Owner);
	int errorFlag;
};
//---------------------------------------------------------------------------
extern PACKAGE TFlogin *Flogin;
//---------------------------------------------------------------------------
#endif
