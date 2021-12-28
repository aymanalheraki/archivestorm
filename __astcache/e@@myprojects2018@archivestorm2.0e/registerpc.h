//---------------------------------------------------------------------------

#ifndef RegisterPCH
#define RegisterPCH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "RzCmboBx.hpp"
#include "RzPanel.hpp"
#include <Vcl.ExtCtrls.hpp>
#include <IdBaseComponent.hpp>
#include <IdComponent.hpp>
#include <IdExplicitTLSClientServerBase.hpp>
#include <IdMessageClient.hpp>
#include <IdSMTP.hpp>
#include <IdSMTPBase.hpp>
#include <IdTCPClient.hpp>
#include <IdTCPConnection.hpp>
#include <IdMessage.hpp>
#include "RzEdit.hpp"
#include "RzLabel.hpp"
#include <Vcl.Mask.hpp>
#include "AdvEdit.hpp"
#include "AeroButtons.hpp"
#include <Vcl.ImgList.hpp>
#include <System.ImageList.hpp>
//---------------------------------------------------------------------------
class TFRegisterPC : public TForm
{
__published:	// IDE-managed Components
	TRzGroupBox *RzGroupBox1;
	TRzGroupBox *RzGroupBox2;
	TLabel *Label2;
	TLabel *Label7;
	TRzMemo *txtMoneyInfo;
	TLabel *Label9;
	TRzEdit *txtRegisterKey;
	TAdvEdit *txtName;
	TAdvEdit *txtEmail;
	TAdvEdit *txtMobile;
	TAdvEdit *txtHDDSerial;
	TAeroButton *btnRegister;
	TAeroButton *btnExit;
	TAeroButton *btnSend;
	TImageList *ImageList3;
	TIdMessage *IdMessage1;
	TIdSMTP *IdSMTP1;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall btnRegisterClick(TObject *Sender);
	void __fastcall btnSendEmailClick(TObject *Sender);
	void __fastcall btnExitClick(TObject *Sender);

private:	// User declarations
public:		// User declarations
	__fastcall TFRegisterPC(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFRegisterPC *FRegisterPC;
//---------------------------------------------------------------------------
#endif
