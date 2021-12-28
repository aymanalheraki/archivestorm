//---------------------------------------------------------------------------

#ifndef aboutH
#define aboutH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "RzLabel.hpp"
#include <Vcl.ExtCtrls.hpp>
#include "RzEdit.hpp"
#include <Vcl.ComCtrls.hpp>
#include "RzPanel.hpp"

#include <Vcl.Graphics.hpp>
#include <Vcl.Imaging.pngimage.hpp>
//---------------------------------------------------------------------------
class TFabout : public TForm
{
__published:	// IDE-managed Components
	TRzLabel *RzLabel1;
	TRzLabel *lblVer;
	TRzGroupBox *RzGroupBox1;
	TRzRichEdit *RV;
	TRzLabel *RzLabel2;
	TImage *Image1;
	void __fastcall Image1Click(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFabout(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFabout *Fabout;
//---------------------------------------------------------------------------
#endif
