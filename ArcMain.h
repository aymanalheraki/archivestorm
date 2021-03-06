//---------------------------------------------------------------------------

#ifndef ArcMainH
#define ArcMainH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "AdvDataLabel.hpp"
#include "AdvDateTimePicker.hpp"
#include "AdvEdit.hpp"
#include "AdvGrid.hpp"
#include "AdvMenus.hpp"
#include "AdvObj.hpp"
#include "AeroButtons.hpp"
#include "BaseGrid.hpp"
#include "CurvyControls.hpp"

#include "RzButton.hpp"
#include "RzCmboBx.hpp"
#include "RzCommon.hpp"
#include "RzLabel.hpp"
#include "RzPanel.hpp"
#include "RzRadChk.hpp"
#include "RzShellDialogs.hpp"
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.Menus.hpp>
#include "RzDTP.hpp"
#include "frxClass.hpp"
#include "frxDBSet.hpp"
#include <Vcl.DBCtrls.hpp>
#include <Data.DB.hpp>
#include <FireDAC.Comp.Client.hpp>
#include <FireDAC.Comp.DataSet.hpp>
#include <FireDAC.DApt.hpp>
#include <FireDAC.DApt.Intf.hpp>
#include <FireDAC.DatS.hpp>
#include <FireDAC.Phys.hpp>
#include <FireDAC.Phys.Intf.hpp>
#include <FireDAC.Stan.Async.hpp>
#include <FireDAC.Stan.Def.hpp>
#include <FireDAC.Stan.Error.hpp>
#include <FireDAC.Stan.Intf.hpp>
#include <FireDAC.Stan.Option.hpp>
#include <FireDAC.Stan.Param.hpp>
#include <FireDAC.Stan.Pool.hpp>
#include <FireDAC.UI.Intf.hpp>
#include "AdvDBLookupComboBox.hpp"
#include <Datasnap.DBClient.hpp>
#include "frxChBox.hpp"
#include <System.ImageList.hpp>
#include "AdvUtil.hpp"
#include "fs_iinterpreter.hpp"


//---------------------------------------------------------------------------
class TFArcMain : public TForm
{
__published:	// IDE-managed Components
	TImageList *ImageList1;
	TImageList *ImageList2;
	TImageList *ImageList3;
	TPanel *TopPanel;
	TRzPanel *RzPanel5;
	TRzPanel *RzPanel3;
	TRzPanel *RzPanel4;
	TAdvStringGrid *ProcSG;
	TPanel *servePanel;
	TRzLabel *lblCount;
	TAeroButton *btnArcAdd;
	TAeroButton *btnArcPrint;
	TCurvyPanel *CurvyPanel2;
	TImage *Image2;
	TLabel *Label1;
	TLabel *Label5;
	TLabel *Label4;
	TLabel *Label3;
	TAdvEdit *txtArcSearch;
	TRzCheckBox *chkActiveDate;
	TRzGroupBox *dateGB;
	TAdvDateTimePicker *dtpTo;
	TAdvDateTimePicker *dtpFrom;
	TAdvStringGrid *arcSG;
	TRzCheckBox *chkLate;
	TAdvEdit *txtDemands;
	TfrxReport *ArcPrint;
	TfrxDBDataset *ArcDB;
	TRzComboBox *cmbMainGroup;
	TRzComboBox *cmbSubGroup;
	TRzComboBox *cmbTypes;
	TRzComboBox *cmbUsers;
	TAeroButton *AeroButton1;
	TRzComboBox *cmbDirection;
	TLabel *Label2;
	TfsScript *fsScript1;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall FillArcSG();
	void __fastcall FillProcSG();
	void __fastcall arcSGDblClickCell(TObject *Sender, int ARow, int ACol);
	void __fastcall arcSGGetAlignment(TObject *Sender, int ARow, int ACol, TAlignment &HAlign,
          TVAlignment &VAlign);
	void __fastcall arcSGGetCellCursor(TObject *Sender, int ACol, int ARow, int X, int Y,
          TCursor &ACursor);
	void __fastcall arcSGGridHint(TObject *Sender, int ARow, int ACol, UnicodeString &hintstr);
	void __fastcall txtArcSearchKeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall btnArcAddClick(TObject *Sender);
	void __fastcall arcSGRowChanging(TObject *Sender, int OldRow, int NewRow, bool &Allow);
	void __fastcall chkActiveDateClick(TObject *Sender);
	void __fastcall dtpFromKeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall dtpToKeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall Image2Click(TObject *Sender);
	void __fastcall cmbSubGroupChange(TObject *Sender);
	void __fastcall cmbTypesChange(TObject *Sender);
	void __fastcall cmbSecurityChange(TObject *Sender);
	void __fastcall cmbUsersChange(TObject *Sender);
	void __fastcall btnArcPrintClick(TObject *Sender);
	void __fastcall arcSGGetCellColor(TObject *Sender, int ARow, int ACol, TGridDrawState AState,
          TBrush *ABrush, TFont *AFont);
	void __fastcall chkLateClick(TObject *Sender);
	void __fastcall ProcSGGetAlignment(TObject *Sender, int ARow, int ACol, TAlignment &HAlign,
          TVAlignment &VAlign);
	void __fastcall luClick(TObject *Sender);
	void __fastcall cmbSubGroupClick(TObject *Sender);
	void __fastcall cmbTypesClick(TObject *Sender);
	void __fastcall cmbMainGroupChange(TObject *Sender);
	void __fastcall AeroButton1Click(TObject *Sender);
	void __fastcall ProcSGRowChanging(TObject *Sender, int OldRow, int NewRow, bool &Allow);
	void __fastcall ProcSGGridHint(TObject *Sender, int ARow, int ACol, UnicodeString &hintstr);
	void __fastcall ProcSGClickCell(TObject *Sender, int ARow, int ACol);
	void __fastcall arcSGClickCell(TObject *Sender, int ARow, int ACol);






private:	// User declarations
public:		// User declarations
	__fastcall TFArcMain(TComponent* Owner);
	AnsiString arcID,procID;
};
//---------------------------------------------------------------------------
extern PACKAGE TFArcMain *FArcMain;
//---------------------------------------------------------------------------
#endif
