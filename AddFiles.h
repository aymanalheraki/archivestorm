//---------------------------------------------------------------------------

#ifndef AddFilesH
#define AddFilesH
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
#include "AdvUtil.hpp"
#include "hyiedefs.hpp"
#include "hyieutils.hpp"
#include "iesettings.hpp"
#include "iexBitmaps.hpp"
#include <System.ImageList.hpp>
#include "iexRulers.hpp"
#include "iexLayers.hpp"
#include "iexToolbars.hpp"
//---------------------------------------------------------------------------
class TFAddFiles : public TForm
{
__published:	// IDE-managed Components
	TOpenImageEnDialog *OpenImageEnDialog1;
	TSaveImageEnDialog *SaveImageEnDialog1;
	TImageList *ImageList1;
	TRzSaveDialog *RzSaveDialog1;
	TRzOpenDialog *RzOpenDialog1;
	TPanel *Panel2;
	TRzLabel *lblFilesCount;
	TAeroButton *btnAddFile;
	TAdvStringGrid *fileSG;
	TRzPanel *RzPanel4;
	TImage *Image2;
	TLabel *lblFilesSaved2;
	TLabel *lblMSG2;
	TAdvEdit *txtArcSearch;
	void __fastcall FormShow(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall btnAddFileClick(TObject *Sender);
	void __fastcall FillFilesSG();
	void __fastcall fileSGCanEditCell(TObject *Sender, int ARow, int ACol, bool &CanEdit);
	void __fastcall fileSGGetCellCursor(TObject *Sender, int ACol, int ARow, int X,
          int Y, TCursor &ACursor);
	void __fastcall fileSGDblClickCell(TObject *Sender, int ARow, int ACol);
	void __fastcall fileSGClick(TObject *Sender);
	void __fastcall fileSGGetAlignment(TObject *Sender, int ARow, int ACol, TAlignment &HAlign,
          TVAlignment &VAlign);
	void __fastcall fileSGCellChanging(TObject *Sender, int OldRow, int OldCol, int NewRow,
          int NewCol, bool &Allow);
	void __fastcall fileSGEditChange(TObject *Sender, int ACol, int ARow, UnicodeString Value);
	void __fastcall imageSGEditChange(TObject *Sender, int ACol, int ARow, UnicodeString Value);
	void __fastcall Image2Click(TObject *Sender);
	void __fastcall txtArcSearchKeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall fileSGKeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall fileSGRowChanging(TObject *Sender, int OldRow, int NewRow, bool &Allow);







private:	// User declarations
public:		// User declarations
	__fastcall TFAddFiles(TComponent* Owner);
	AnsiString arcID,fileID,imageID;
	int fileDescChange,imageDescChange;

	AnsiString vImageFileName;
	int scanFlag;
};
//---------------------------------------------------------------------------
extern PACKAGE TFAddFiles *FAddFiles;
//---------------------------------------------------------------------------
#endif
