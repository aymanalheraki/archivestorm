//---------------------------------------------------------------------------

#ifndef ArcFilesH
#define ArcFilesH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "AdvDataLabel.hpp"
#include "AdvEdit.hpp"
#include "AdvGrid.hpp"
#include "AdvObj.hpp"
#include "BaseGrid.hpp"
#include "CurvyControls.hpp"
#include "RzCmboBx.hpp"
#include "RzLabel.hpp"
#include "RzPanel.hpp"
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.ImgList.hpp>
#include <IdBaseComponent.hpp>
#include <IdComponent.hpp>
#include <IdHTTP.hpp>
#include <IdTCPClient.hpp>
#include <IdTCPConnection.hpp>
#include "RzShellDialogs.hpp"
#include "AeroButtons.hpp"
#include <Vcl.DBCtrls.hpp>
#include "AdvUtil.hpp"
#include <System.ImageList.hpp>
//---------------------------------------------------------------------------
class TFArcFiles : public TForm
{
__published:	// IDE-managed Components
	TPanel *TopPanel;
	TAdvDataLabel *AdvDataLabel1;
	TRzPanel *RzPanel5;
	TRzPanel *RzPanel3;
	TCurvyPanel *CurvyPanel2;
	TImage *Image2;
	TAdvEdit *txtImageSearch;
	TRzPanel *RzPanel1;
	TRzPanel *RzPanel2;
	TAdvStringGrid *fileSG;
	TPanel *servePanel;
	TRzLabel *lblCount;
	TImageList *ImageList1;
	TRzSaveDialog *RzSaveDialog1;
	TAeroButton *btnExpandAll;
	TAeroButton *btnCollapseAll;
	TLabel *Label1;
	TLabel *Label5;
	TLabel *Label4;
	TLabel *Label3;
	TRzComboBox *cmbSubGroup;
	TRzComboBox *cmbMainGroup;
	TRzComboBox *cmbTypes;
	TRzComboBox *cmbUsers;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall FillFileSG();
	void __fastcall fileSGGetAlignment(TObject *Sender, int ARow, int ACol, TAlignment &HAlign,
          TVAlignment &VAlign);
	void __fastcall fileSGDblClickCell(TObject *Sender, int ARow, int ACol);
	void __fastcall fileSGGetCellColor(TObject *Sender, int ARow, int ACol, TGridDrawState AState,
          TBrush *ABrush, TFont *AFont);
	void __fastcall fileSGGridHint(TObject *Sender, int ARow, int ACol, UnicodeString &hintstr);
	void __fastcall fileSGGetCellCursor(TObject *Sender, int ACol, int ARow, int X,
          int Y, TCursor &ACursor);
	void __fastcall txtImageSearchKeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall Image2Click(TObject *Sender);
	void __fastcall btnExpandAllClick(TObject *Sender);
	void __fastcall btnCollapseAllClick(TObject *Sender);
	void __fastcall cmbMainGroupChange(TObject *Sender);
	void __fastcall cmbSubGroupChange(TObject *Sender);
	void __fastcall cmbTypesChange(TObject *Sender);
	void __fastcall cmbUsersChange(TObject *Sender);





private:	// User declarations
public:		// User declarations
	__fastcall TFArcFiles(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFArcFiles *FArcFiles;
//---------------------------------------------------------------------------
#endif
