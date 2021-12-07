//---------------------------------------------------------------------------

#ifndef HelpH
#define HelpH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Graphics.hpp>
#include "RzEdit.hpp"
#include <Vcl.ComCtrls.hpp>
#include "HTMLText.hpp"
//---------------------------------------------------------------------------
class TFHelp : public TForm
{
__published:	// IDE-managed Components
	TRzRichEdit *RV;
	void __fastcall FormShow(TObject *Sender);
	void __fastcall FormResize(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFHelp(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFHelp *FHelp;
//---------------------------------------------------------------------------
#endif
