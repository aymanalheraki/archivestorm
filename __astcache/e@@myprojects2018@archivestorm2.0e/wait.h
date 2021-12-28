//---------------------------------------------------------------------------

#ifndef waitH
#define waitH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "RzLabel.hpp"
#include "RzPanel.hpp"
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TFwait : public TForm
{
__published:	// IDE-managed Components
	TRzLabel *lblWait;
	TRzPanel *RzPanel1;
private:	// User declarations
public:		// User declarations
	__fastcall TFwait(TComponent* Owner);
	AnsiString vText;
};
//---------------------------------------------------------------------------
extern PACKAGE TFwait *Fwait;
//---------------------------------------------------------------------------
#endif
