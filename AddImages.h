//---------------------------------------------------------------------------

#ifndef AddImagesH
#define AddImagesH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "ieview.hpp"
#include "imageenview.hpp"
#include <Vcl.Dialogs.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ExtDlgs.hpp>
#include "iemview.hpp"
#include "ievect.hpp"
#include "AdvEdit.hpp"
#include "RzPanel.hpp"
#include <Vcl.ComCtrls.hpp>
#include "ieopensavedlg.hpp"
#include <Vcl.ImgList.hpp>
#include "AdvGrid.hpp"
#include "AdvObj.hpp"
#include "BaseGrid.hpp"
#include "RzShellDialogs.hpp"
#include "RzTabs.hpp"
#include <IdBaseComponent.hpp>
#include <IdComponent.hpp>
#include <IdHTTP.hpp>
#include <IdTCPClient.hpp>
#include <IdTCPConnection.hpp>
#include <Vcl.Grids.hpp>
#include "AeroButtons.hpp"
#include "iemio.hpp"
#include "RzLabel.hpp"
#include "RzCmboBx.hpp"
#include <Vcl.Graphics.hpp>
#include "imageenio.hpp"
#include "W7Labels.hpp"
#include "AdvUtil.hpp"
#include "hyiedefs.hpp"
#include "hyieutils.hpp"
#include "iesettings.hpp"
#include "iexBitmaps.hpp"
#include <System.ImageList.hpp>
#include <System.Contnrs.hpp>
#include "iexRulers.hpp"
#include "iexLayers.hpp"
#include "iexToolbars.hpp"
#include "iexUserInteractions.hpp"
#include "imageenproc.hpp"
//---------------------------------------------------------------------------
class TFAddImages : public TForm
{
__published:	// IDE-managed Components
	TOpenImageEnDialog *OpenImageEnDialog1;
	TSaveImageEnDialog *SaveImageEnDialog1;
	TImageList *ImageList1;
	TRzSaveDialog *RzSaveDialog1;
	TRzOpenDialog *RzOpenDialog1;
	TRzPanel *RzPanel2;
	TRzPanel *RzPanel5;
	TLabel *lblFilesSaved;
	TLabel *lblMSG;
	TRzPanel *RzPanel1;
	TImageEnVect *ImageEnVect1;
	TRzPanel *RzPanel3;
	TPanel *Panel1;
	TAeroButton *btnGetImageFromScanner;
	TAeroButton *btnPrint;
	TProgressBar *PB1;
	TAeroButton *btnGetImageFromFile;
	TAdvStringGrid *imageSG;
	TImageEnMView *ImageEnMView1;
	TImageEnVect *ImageEnVect2;
	TW7ActiveLabel *lblImageCount;
	TEdit *txtImageName;
	TLabel *Label1;
	void __fastcall btnGetImageFromFileClick(TObject *Sender);
	void __fastcall btnGetImageFromScannerClick(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall btnPrintClick(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall ImageEnVect1DblClick(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall ImageEnVect1Progress(TObject *Sender, int per);
	void __fastcall FillImagesSG();
    void __fastcall SaveImage();
	void __fastcall imageSGCanEditCell(TObject *Sender, int ARow, int ACol, bool &CanEdit);
	void __fastcall imageSGCellChanging(TObject *Sender, int OldRow, int OldCol, int NewRow,
          int NewCol, bool &Allow);
	void __fastcall imageSGClick(TObject *Sender);
	void __fastcall imageSGDblClickCell(TObject *Sender, int ARow, int ACol);
	void __fastcall imageSGEditChange(TObject *Sender, int ACol, int ARow, UnicodeString Value);
	void __fastcall imageSGGetAlignment(TObject *Sender, int ARow, int ACol, TAlignment &HAlign,
          TVAlignment &VAlign);
	void __fastcall imageSGGetCellCursor(TObject *Sender, int ACol, int ARow, int X,
          int Y, TCursor &ACursor);
	void __fastcall Image1Click(TObject *Sender);
	void __fastcall txtImageSearchKeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall imageSGKeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall imageSGRowChanging(TObject *Sender, int OldRow, int NewRow, bool &Allow);
	void __fastcall imageSGGridHint(TObject *Sender, int ARow, int ACol, UnicodeString &hintstr);










private:	// User declarations
public:		// User declarations
	__fastcall TFAddImages(TComponent* Owner);
	AnsiString arcID,fileID,imageID;
	int fileDescChange,imageDescChange;

	AnsiString vImageFileName;
	int scanFlag;
};
//---------------------------------------------------------------------------
extern PACKAGE TFAddImages *FAddImages;
//---------------------------------------------------------------------------
#endif
