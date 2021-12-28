//---------------------------------------------------------------------------

#ifndef ArcDescH
#define ArcDescH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "RzEdit.hpp"
#include "AdvEdit.hpp"
//---------------------------------------------------------------------------
class TFArcDesc : public TForm
{
__published:	// IDE-managed Components
	TRzMemo *txtDesc;
	TLabel *Label3;
	TLabel *lblArcSubject;
	TLabel *Label2;
	void __fastcall FormShow(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFArcDesc(TComponent* Owner);
	AnsiString arcID;
};
//---------------------------------------------------------------------------
extern PACKAGE TFArcDesc *FArcDesc;
//---------------------------------------------------------------------------
#endif
