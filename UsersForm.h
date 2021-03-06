//---------------------------------------------------------------------------

#ifndef UsersFormH
#define UsersFormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "AdvGrid.hpp"
#include "AdvObj.hpp"
#include "BaseGrid.hpp"
#include "RzPanel.hpp"
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Grids.hpp>
#include "RzButton.hpp"
#include "RzRadChk.hpp"
#include "RzRadGrp.hpp"
#include "RzLabel.hpp"
#include <Vcl.ImgList.hpp>
#include "AdvOfficeButtons.hpp"
#include "AeroButtons.hpp"
#include "AdvUtil.hpp"
#include <System.ImageList.hpp>
//---------------------------------------------------------------------------
class TFUsersForm : public TForm
{
__published:	// IDE-managed Components
	TRzPanel *RzPanel2;
	TAdvStringGrid *UsersSG;
	TRzPanel *RzPanel1;
	TRzPanel *cPanel;
	TRzCheckGroup *permGB;
	TImageList *ImageList2;
	TAdvOfficeCheckBox *chkVars;
	TAdvOfficeCheckBox *chkUsers;
	TAdvOfficeCheckBox *chkArcGroupAdd;
	TAdvOfficeCheckBox *chkArcTypeAdd;
	TAdvOfficeCheckBox *chkArcAdd;
	TAdvOfficeCheckBox *chkArcEdit;
	TAdvOfficeCheckBox *chkArcImageAdd;
	TAdvOfficeCheckBox *chkArcImageDel;
	TAdvOfficeCheckBox *chkArcProcAdd;
	TAdvOfficeCheckBox *chkArcPrint;
	TAdvOfficeCheckBox *chkChangePassword;
	TAdvOfficeCheckBox *chkArcDel;
	TLabel *lblMSG;
	TAdvOfficeCheckBox *chkBackup;
	TAdvOfficeCheckBox *chkRestore;
	TRzPanel *RzPanel3;
	TRzRadioButton *rbSelectAll;
	TRzRadioButton *rbUnSelectAll;
	TAdvOfficeCheckBox *chkSecret;
	TAdvOfficeCheckBox *chkRepaire;
	TAdvOfficeCheckBox *chkPath;
	TAdvOfficeCheckBox *chkArcImageExport;
	TAeroButton *btnNewUserAdd;
	TAdvOfficeCheckBox *chkManageClass;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall btnNewUserAddClick(TObject *Sender);
	void __fastcall FillUsersSG();
	void __fastcall UsersSGClick(TObject *Sender);
	void __fastcall btnSaveClick(TObject *Sender);
	void __fastcall chkVarsClick(TObject *Sender);
	void __fastcall chkUsersClick(TObject *Sender);
	void __fastcall chkArcAddClick(TObject *Sender);
	void __fastcall chkArcEditClick(TObject *Sender);
	void __fastcall chkArcDelClick(TObject *Sender);
	void __fastcall chkArcImageAddClick(TObject *Sender);
	void __fastcall chkArcImageDelClick(TObject *Sender);
	void __fastcall chkArcPrintClick(TObject *Sender);
	void __fastcall chkArcProcAddClick(TObject *Sender);
	void __fastcall chkArcGroupAddClick(TObject *Sender);
	void __fastcall chkArcTypeAddClick(TObject *Sender);
	void __fastcall chkChangePasswordClick(TObject *Sender);
	void __fastcall UsersSGDblClickCell(TObject *Sender, int ARow, int ACol);
	void __fastcall UsersSGGetCellCursor(TObject *Sender, int ACol, int ARow, int X,
          int Y, TCursor &ACursor);
	void __fastcall rbSelectAllClick(TObject *Sender);
	void __fastcall rbUnSelectAllClick(TObject *Sender);
	void __fastcall chkBackupClick(TObject *Sender);
	void __fastcall chkRestoreClick(TObject *Sender);
	void __fastcall chkSecretClick(TObject *Sender);
	void __fastcall chkRepaireClick(TObject *Sender);
	void __fastcall chkPathClick(TObject *Sender);
	void __fastcall chkArcImageExportClick(TObject *Sender);
	void __fastcall chkManageClassClick(TObject *Sender);

private:	// User declarations
public:		// User declarations
	__fastcall TFUsersForm(TComponent* Owner);
	AnsiString UserID;
};
//---------------------------------------------------------------------------
extern PACKAGE TFUsersForm *FUsersForm;
//---------------------------------------------------------------------------
#endif
