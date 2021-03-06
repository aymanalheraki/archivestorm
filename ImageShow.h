//---------------------------------------------------------------------------

#ifndef ImageShowH
#define ImageShowH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "AdvEdit.hpp"
#include "ievect.hpp"
#include "ieview.hpp"
#include "imageenview.hpp"
#include "RzPanel.hpp"
#include <Vcl.ExtCtrls.hpp>
#include "AeroButtons.hpp"
#include <Vcl.ComCtrls.hpp>
#include "ieopensavedlg.hpp"
#include "RzLabel.hpp"
#include <Vcl.ImgList.hpp>
#include "RzButton.hpp"
#include "RzRadChk.hpp"
#include "hyiedefs.hpp"
#include "hyieutils.hpp"
#include "iesettings.hpp"
#include "iexBitmaps.hpp"
#include "iexRulers.hpp"
#include <System.Contnrs.hpp>
#include <System.ImageList.hpp>
#include "iexLayers.hpp"
#include "iexToolbars.hpp"
#include "iexUserInteractions.hpp"
#include "imageenio.hpp"
#include "imageenproc.hpp"
//---------------------------------------------------------------------------
class TFImageShow : public TForm
{
__published:	// IDE-managed Components
	TImageEnVect *ImageEnVect1;
	TPanel *Panel1;
	TAeroButton *btnPrint;
	TAeroButton *btnSaveAs;
	TSaveImageEnDialog *SaveImageEnDialog1;
	TRzLabel *lblImageDesc;
	TRzLabel *lblImageSize;
	TRzLabel *lblImageName;
	TImageList *ImageList1;
	TRzPanel *RzPanel1;
	TRzRadioButton *rbAutoShrink;
	TRzRadioButton *rbAutoFit;
	void __fastcall FormShow(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall btnPrintClick(TObject *Sender);
	void __fastcall btnSaveAsClick(TObject *Sender);
	void __fastcall ImageEnVect1DblClick(TObject *Sender);
	void __fastcall rbAutoShrinkClick(TObject *Sender);
	void __fastcall rbAutoFitClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFImageShow(TComponent* Owner);
	AnsiString imageID;
};
//---------------------------------------------------------------------------
extern PACKAGE TFImageShow *FImageShow;
//---------------------------------------------------------------------------
#endif
