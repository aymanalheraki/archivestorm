//---------------------------------------------------------------------------

#ifndef VarsH
#define VarsH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "ieview.hpp"
#include "imageenview.hpp"
#include "RzButton.hpp"
#include "RzEdit.hpp"
#include "RzPanel.hpp"
#include "RzTabs.hpp"
#include <Vcl.ExtCtrls.hpp>
#include "AdvEdit.hpp"
#include "RzRadChk.hpp"
#include <Vcl.Dialogs.hpp>
#include <Vcl.ExtDlgs.hpp>
#include "RzCmboBx.hpp"
#include "AeroButtons.hpp"
#include <Vcl.ImgList.hpp>
#include "hyiedefs.hpp"
#include "hyieutils.hpp"
#include "iesettings.hpp"
#include "iexBitmaps.hpp"
#include <System.ImageList.hpp>
#include "AdvOfficeButtons.hpp"
#include "iexRulers.hpp"
#include <System.Contnrs.hpp>
#include "iexLayers.hpp"
#include "iexToolbars.hpp"
#include "iexUserInteractions.hpp"
#include "imageenio.hpp"
#include "imageenproc.hpp"
//---------------------------------------------------------------------------
class TFVars : public TForm
{
__published:	// IDE-managed Components
	TOpenPictureDialog *OpenPictureDialog1;
	TImageList *ImageList3;
	TRzPageControl *PCM;
	TRzTabSheet *TabSheet1;
	TRzGroupBox *RzGroupBox1;
	TRzGroupBox *RzGroupBox2;
	TLabel *Label2;
	TLabel *Label1;
	TRzMemo *txtName3;
	TAdvEdit *txtName1;
	TRzMemo *txtName2;
	TImageEnView *ImageEnView1;
	TButton *btnGetImage;
	TButton *btnDeleteImage;
	TAeroButton *btnExit;
	TAeroButton *btnSave;
	void __fastcall btnSaveClick(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall btnGetImageClick(TObject *Sender);
	void __fastcall btnDeleteImageClick(TObject *Sender);
	void __fastcall btnExitClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFVars(TComponent* Owner);
	AnsiString oldName1,oldName2,oldName3,oldDateC,oldSystemDate;
};
//---------------------------------------------------------------------------
extern PACKAGE TFVars *FVars;
//---------------------------------------------------------------------------
#endif
