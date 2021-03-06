//---------------------------------------------------------------------------

#ifndef GroupH
#define GroupH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Grids.hpp>
#include "AdvEdit.hpp"
#include "AdvGrid.hpp"
#include "AdvObj.hpp"
#include "BaseGrid.hpp"
#include <Vcl.ImgList.hpp>
#include "AeroButtons.hpp"
#include "AdvUtil.hpp"
#include <System.ImageList.hpp>
//---------------------------------------------------------------------------
class TFGroup : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TPanel *Panel2;
	TPanel *Panel3;
	TPanel *Panel4;
	TLabel *Label3;
	TLabel *lblSubGroup;
	TAdvEdit *txtNameM;
	TAdvEdit *txtNameS;
	TAdvStringGrid *mSG;
	TImageList *ImageList1;
	TAdvStringGrid *sSG;
	TAeroButton *btnAddNewM;
	TAeroButton *btnExit;
	TAeroButton *btnSaveM;
	TAeroButton *btnSaveS;
	TAeroButton *btnAddNewS;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall fillmSG();
	void __fastcall fillsSG();
	void __fastcall mSGClick(TObject *Sender);
	void __fastcall btnAddNewMClick(TObject *Sender);
	void __fastcall btnSaveMClick(TObject *Sender);
	void __fastcall mSGDblClickCell(TObject *Sender, int ARow, int ACol);
	void __fastcall mSGGetCellCursor(TObject *Sender, int ACol, int ARow, int X, int Y,
          TCursor &ACursor);
	void __fastcall sSGGetCellCursor(TObject *Sender, int ACol, int ARow, int X, int Y,
          TCursor &ACursor);
	void __fastcall sSGClick(TObject *Sender);
	void __fastcall btnAddNewSClick(TObject *Sender);
	void __fastcall btnSaveSClick(TObject *Sender);
	void __fastcall sSGDblClickCell(TObject *Sender, int ARow, int ACol);
	void __fastcall btnClick(TObject *Sender);
	void __fastcall btnExitClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFGroup(TComponent* Owner);
	AnsiString mID,sID;
	AnsiString oldNameM,oldNameS;
	int vItemValue;
	int flagM,flagS;
};
//---------------------------------------------------------------------------
extern PACKAGE TFGroup *FGroup;
//---------------------------------------------------------------------------
#endif
