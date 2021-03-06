//---------------------------------------------------------------------------

#ifndef MainH
#define MainH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "AdvDataLabel.hpp"
#include "AdvMenus.hpp"
#include "RzButton.hpp"
#include "RzCommon.hpp"
#include "RzPanel.hpp"
#include "RzShellDialogs.hpp"
#include "RzStatus.hpp"
#include "RzTabs.hpp"
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.Menus.hpp>
#include "RzLabel.hpp"
#include "ieview.hpp"
#include "imageenview.hpp"
#include <System.ImageList.hpp>
#include "frxClass.hpp"
#include "frxDBSet.hpp"
#include "hyiedefs.hpp"
#include "hyieutils.hpp"
#include "iesettings.hpp"
#include "iexBitmaps.hpp"
#include "hyiedefs.hpp"
#include "hyieutils.hpp"
#include "iexRulers.hpp"
#include <System.Contnrs.hpp>
#include "AdvMetroTile.hpp"
#include <Data.DB.hpp>
#include <FireDAC.Comp.Client.hpp>
#include <FireDAC.Comp.DataSet.hpp>
#include <FireDAC.DApt.hpp>
#include <FireDAC.DApt.Intf.hpp>
#include <FireDAC.DatS.hpp>
#include <FireDAC.Phys.hpp>
#include <FireDAC.Phys.Intf.hpp>
#include <FireDAC.Phys.SQLite.hpp>
#include <FireDAC.Phys.SQLiteDef.hpp>
#include <FireDAC.Phys.SQLiteWrapper.Stat.hpp>
#include <FireDAC.Stan.Async.hpp>
#include <FireDAC.Stan.Def.hpp>
#include <FireDAC.Stan.Error.hpp>
#include <FireDAC.Stan.ExprFuncs.hpp>
#include <FireDAC.Stan.Intf.hpp>
#include <FireDAC.Stan.Option.hpp>
#include <FireDAC.Stan.Param.hpp>
#include <FireDAC.Stan.Pool.hpp>
#include <FireDAC.UI.Intf.hpp>
#include <FireDAC.VCLUI.Wait.hpp>
#include "AdvGrid.hpp"
#include "AdvObj.hpp"
#include "AdvUtil.hpp"
#include "BaseGrid.hpp"
#include <Vcl.Grids.hpp>



//---------------------------------------------------------------------------
class TFMain : public TForm
{
__published:	// IDE-managed Components
	TAdvMainMenu *AdvMainMenu1;
	TMenuItem *N1;
	TMenuItem *Menu1Vars;
	TMenuItem *Menu1Users;
	TMenuItem *N2;
	TMenuItem *Menu1Backup;
	TMenuItem *Menu1Restore;
	TMenuItem *N3;
	TMenuItem *Menu1Repaire;
	TMenuItem *N10;
	TMenuItem *Menu2GroupsAdd;
	TMenuItem *Menu2TypeAdd;
	TMenuItem *N13;
	TMenuItem *N14;
	TMenuItem *Menu3ChangePassword;
	TMenuItem *N18;
	TMenuItem *N19;
	TMenuItem *N20;
	TMenuItem *Menu3Exit;
	TImageList *ImageList1;
	TImageList *ImageList2;
	TImageList *ImageList3;
	TImageList *imageListTab;
	TRzOpenDialog *OpenDialog1;
	TRzMenuController *RzMenuController1;
	TRzSaveDialog *SaveDialog1;
	TRzStatusBar *StatusBar;
	TRzStatusPane *StatusDate;
	TRzStatusPane *RzStatusPane1;
	TRzStatusPane *statusUsr;
	TRzStatusPane *statusDateType;
	TImageList *toolsImageList;
	TMenuItem *N4;
	TMenuItem *Menu2ManageArchive;
	TMenuItem *Menu2ShowImages;
	TMenuItem *Menu2ShowFiles;
	TPanel *TopPanel;
	TImage *MImage;
	TRzLabel *lblVer;
	TRzPageControl *PCM;
	TPanel *Panel1;
	TAdvMetroTile *btnDocuManagement;
	TAdvMetroTile *AdvMetroTile1;
	TAdvMetroTile *AdvMetroTile2;
	TButton *btnExit;
	TFDPhysSQLiteDriverLink *FDPhysSQLiteDriverLink1;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall getVars();
	void __fastcall PCMClose(TObject *Sender, bool &AllowClose);
	void __fastcall Menu2GroupsAddClick(TObject *Sender);
	void __fastcall Menu2TypeAddClick(TObject *Sender);
	void __fastcall N18Click(TObject *Sender);
	void __fastcall Menu1VarsClick(TObject *Sender);
	void __fastcall Menu1UsersClick(TObject *Sender);
	void __fastcall Menu2ManageArchiveClick(TObject *Sender);
	void __fastcall Menu2ShowImagesClick(TObject *Sender);
	void __fastcall Menu2ShowFilesClick(TObject *Sender);
	void __fastcall Menu3ChangePasswordClick(TObject *Sender);
	void __fastcall N14Click(TObject *Sender);
	void __fastcall N19Click(TObject *Sender);
	void __fastcall N20Click(TObject *Sender);
	void __fastcall Menu1BackupClick(TObject *Sender);
	void __fastcall Menu1RestoreClick(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall Menu1RepaireClick(TObject *Sender);
	void __fastcall FormDestroy(TObject *Sender);
	void __fastcall btnDocuManagementClick(TObject *Sender);
	void __fastcall AdvMetroTile1Click(TObject *Sender);
	void __fastcall AdvMetroTile2Click(TObject *Sender);
	void __fastcall btnExitClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFMain(TComponent* Owner);

	AnsiString programVer;

	int DateType,vDateC,dateSystem;
	AnsiString name1,name2,name3,vArcSGIndexes;
	AnsiString vServer;
	AnsiString vUserID,vUserFullName,vUserLogID,vUserPassword;
	TDateTime tempDate;
	int reg;
	long ComputerID;
	AnsiString regKey;
	AnsiString DataFile,ArcPath,ArcFile;
	char CalendarType[4],ShortDate[20];
	int vLogInStatus;
	int winver;
	AnsiString vPermUsers,vPermVars,vPermHijri,vPermArcAdd,vPermArcEdit,vPermArcDel,vPermArcImageAdd,vPermArcImageDel,vPermArcImageExport;
	AnsiString vPermArcPrint,vPermArcProcAdd,vPermArcGroupAdd,vPermArcTypeAdd,vPermChangePassword,vPermBackup,vPermRestore;
	AnsiString vPermLogReport,vPermSecret,vPermRepaire,vPermPath,vPermManageClass;
};
//---------------------------------------------------------------------------
extern PACKAGE TFMain *FMain;
//---------------------------------------------------------------------------
#endif
