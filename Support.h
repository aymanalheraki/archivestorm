//---------------------------------------------------------------------------

#ifndef SupportH
#define SupportH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "RzCmboBx.hpp"
#include "RzPanel.hpp"
#include <Vcl.ExtCtrls.hpp>
#include "RzEdit.hpp"
#include <Vcl.Mask.hpp>
#include <IdBaseComponent.hpp>
#include <IdComponent.hpp>
#include <IdExplicitTLSClientServerBase.hpp>
#include <IdMessageClient.hpp>
#include <IdSMTP.hpp>
#include <IdSMTPBase.hpp>
#include <IdTCPClient.hpp>
#include <IdTCPConnection.hpp>
#include "AdvEdit.hpp"
#include "AeroButtons.hpp"
#include <Vcl.ImgList.hpp>
#include <System.ImageList.hpp>
//---------------------------------------------------------------------------
class TFSupport : public TForm
{
__published:	// IDE-managed Components
	TRzGroupBox *RzGroupBox1;
	TLabel *Label2;
	TRzMemo *txtComment;
	TIdSMTP *IdSMTP1;
	TAdvEdit *txtMobile;
	TAdvEdit *txtName;
	TAdvEdit *txtEmail;
	TAeroButton *btnSend;
	TAeroButton *btnExit;
	TImageList *ImageList3;
	void __fastcall btnSendClick(TObject *Sender);
	void __fastcall btnExitClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFSupport(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFSupport *FSupport;
//---------------------------------------------------------------------------
#endif
