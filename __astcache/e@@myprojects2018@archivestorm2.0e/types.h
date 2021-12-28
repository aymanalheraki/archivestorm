//---------------------------------------------------------------------------

#ifndef TypesH
#define TypesH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "AdvEdit.hpp"
#include "AdvGrid.hpp"
#include "AdvObj.hpp"
#include "BaseGrid.hpp"
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.ImgList.hpp>
#include "AeroButtons.hpp"
#include "AdvUtil.hpp"
#include <System.ImageList.hpp>
//---------------------------------------------------------------------------
class TFTypes : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TAdvEdit *txtName;
	TPanel *Panel2;
	TAdvStringGrid *tSG;
	TImageList *ImageList1;
	TAeroButton *btnSave;
	TAeroButton *btnAddNew;
	TAeroButton *btnExit;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall filltSG();
	void __fastcall btnAddNewClick(TObject *Sender);
	void __fastcall btnSaveClick(TObject *Sender);
	void __fastcall tSGDblClickCell(TObject *Sender, int ARow, int ACol);
	void __fastcall tSGClick(TObject *Sender);
	void __fastcall tSGGetCellCursor(TObject *Sender, int ACol, int ARow, int X, int Y,
          TCursor &ACursor);
	void __fastcall btnExitClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFTypes(TComponent* Owner);
	AnsiString tID;
	AnsiString oldName;
	int vItemValue;
	int flagT;
};
//---------------------------------------------------------------------------
extern PACKAGE TFTypes *FTypes;
//---------------------------------------------------------------------------
#endif
