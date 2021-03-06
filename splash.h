//---------------------------------------------------------------------------

#ifndef splashH
#define splashH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "RzLabel.hpp"
#include <Vcl.ExtCtrls.hpp>
#include "RzPanel.hpp"
#include <Vcl.Imaging.jpeg.hpp>
#include <Vcl.Imaging.pngimage.hpp>
//---------------------------------------------------------------------------
class TFsplash : public TForm
{
__published:	// IDE-managed Components
	TTimer *Timer1;
	TImage *Image1;
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall Image1Click(TObject *Sender);
	void __fastcall FormKeyPress(TObject *Sender, System::WideChar &Key);
private:	// User declarations
public:		// User declarations
	__fastcall TFsplash(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFsplash *Fsplash;
//---------------------------------------------------------------------------
#endif
