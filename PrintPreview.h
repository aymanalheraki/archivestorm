//---------------------------------------------------------------------------

#ifndef PrintPreviewH
#define PrintPreviewH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "frxClass.hpp"
#include "frxPreview.hpp"
//---------------------------------------------------------------------------
class TFPrintPreview : public TForm
{
__published:	// IDE-managed Components
	TfrxPreview *PrintAll;
	void __fastcall FormShow(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFPrintPreview(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFPrintPreview *FPrintPreview;
//---------------------------------------------------------------------------
#endif
