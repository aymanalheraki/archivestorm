//---------------------------------------------------------------------------
#define RT_RCDATA          MAKEINTRESOURCE(10)
#ifdef UNICODE
#define MAKEINTRESOURCE  MAKEINTRESOURCEW
#else
#define MAKEINTRESOURCE  MAKEINTRESOURCEA
#endif
#include <vcl.h>

#pragma hdrstop

#include "publicf.h"
#include "Main.h"
#include "login.h"
#include "splash.h"
#include "ArcMain.h"
#include "ArcFiles.h"
#include "ArcImages.h"
#include "Group.h"
#include "Types.h"
#include "RegisterPC.h"
#include "Vars.h"
#include "UsersForm.h"
#include "ChangePassword.h"
#include "Help.h"
#include "about.h"
#include "Support.h"
#include "wait.h"


//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "AdvDataLabel"
#pragma link "AdvMenus"
#pragma link "RzButton"
#pragma link "RzCommon"
#pragma link "RzPanel"
#pragma link "RzShellDialogs"
#pragma link "RzStatus"
#pragma link "RzTabs"


#pragma link "RzLabel"

#pragma link "ieview"
#pragma link "imageenview"
#pragma link "frxClass"
#pragma link "frxDBSet"
#pragma link "iesettings"
#pragma link "iexBitmaps"
#pragma link "hyiedefs"
#pragma link "hyieutils"

#pragma link "iexRulers"
#pragma link "AdvMetroTile"
#pragma link "AdvGrid"
#pragma link "AdvObj"
#pragma link "AdvUtil"
#pragma link "BaseGrid"
#pragma resource "*.dfm"
TFMain *FMain;
TRzTabSheet *TabArcMain;
TRzTabSheet *TabArcImages;
TRzTabSheet *TabArcFiles;
//---------------------------------------------------------------------------
__fastcall TFMain::TFMain(TComponent* Owner)
	: TForm(Owner)
{
	SetWindowLong(StatusBar->Handle,GWL_EXSTYLE, WS_EX_LAYOUTRTL);
	InvalidateRect(StatusBar->Handle,0,True);
}
//---------------------------------------------------------------------------
void __fastcall TFMain::FormCreate(TObject *Sender)
{
    vLogInStatus = 0;
	TOSVersion *ver;
	winver = ver->Major;
	PCM->Left = -5000;


}
//---------------------------------------------------------------------------
void __fastcall TFMain::FormShow(TObject *Sender)
{

	programVer = "2.0";

	this->Caption = this->Caption + " " + programVer;
	lblVer->Caption = "ArchiveStorm " + programVer;
    // Demo to git
	lblVer->Top = TopPanel->Height - 15;

		DataFile = ExtractFilePath(Application->ExeName) +  "\\arcdata.db";

		if(!FileExists(DataFile) || FileSizeByName(DataFile) == 0)
		{
			if (Application->MessageBoxA(L"There is no database file with the program - Would you like to create a new file?",L"Alert message",MB_YESNO | MB_ICONQUESTION ) == IDYES)
			{
				TResourceStream* resFile = new TResourceStream((int)HInstance, L"arcdata1", L"RT_RCDATA");

				resFile->SaveToFile(DataFile);
			}
			else
			{
				Application->Terminate();
			}
		}


	//------------------------------------- hdd protect ------------

	ComputerID = getHardDriveComputerID();

	AnsiString sn = StringToHex(AnsiString(ComputerID).c_str());

	AnsiString encc = myEncrypt(sn.c_str(), AnsiString("#radah99").c_str());

	AnsiString RegNum = encc.c_str();

	regKey = ReadRegistry("ArchiveStormKey");

	if(regKey == RegNum)
	{
	   reg = 1;
	   AnsiString sTitle =  "Documents Archiving System - ArchiveStorm " + programVer;
	   sTitle = sTitle + " (Registered) ";
	   this->Caption = sTitle;
	   N18->Visible = false;
	}
	else
	{
		AnsiString sTitle =  "Documents Archiving System - ArchiveStorm " + programVer;
		sTitle = sTitle + " (Trail) ";
		this->Caption = sTitle;

		reg = 0;
		N18->Visible = true;
	}

//----------------------------------------------------------------
	if(reg == 0)
	{

		AnsiString msError = "This Copy is not registered, you can use it as Limited Records addition. ";
		ShowMessage(msError);
	}

//---------------- end protect



//----------------------------------------------------------------------------
//
//		AnsiString tt = dateSystem;
//		const char *a = tt.c_str() ;
//		const char *b = "yyyy/MM/dd";
//		SetLocaleInfo(GetUserDefaultLCID(),LOCALE_ICALENDARTYPE,a);
//		SetLocaleInfo(GetUserDefaultLCID(),LOCALE_SSHORTDATE,b);
//		SendMessage(HWND_BROADCAST, WM_SETTINGCHANGE, 0, 0);

 getVars();

	TDateTime cDate = Now();
	AnsiString dd = " [ " + cDate.FormatString("yyyy/MM/dd") + " ] ";
  //	StatusDate->Caption = " ÇáÊÇÑíÎ : "  + dd;

//---------------------------------------------------------------------------
	TFsplash *splash = new TFsplash(this);
	splash->ShowModal();

	TFlogin *login1 = new TFlogin(this);
	login1->Parent = this;
	login1->ShowModal();
    delete login1;

	if(vLogInStatus == 1)
	{

		statusUsr->Caption = " User Name : " + vUserFullName;
		if(vPermUsers == 1){Menu1Users->Enabled = true;}else{Menu1Users->Enabled = false;}
		if(vPermVars == 1){Menu1Vars->Enabled = true;}else{Menu1Vars->Enabled = false;}

		if(vPermArcGroupAdd == 1){Menu2GroupsAdd->Enabled = true;}else{Menu2GroupsAdd->Enabled = false;}
		if(vPermArcTypeAdd == 1){Menu2TypeAdd->Enabled = true;}else{Menu2TypeAdd->Enabled = false;}

		if(vPermChangePassword == 1){Menu3ChangePassword->Enabled = true;}else{Menu3ChangePassword->Enabled = false;}
		if(vPermBackup == 1) {Menu1Backup->Enabled = true;}else{Menu1Backup->Enabled = false;}
		if(vPermRestore == 1) {Menu1Restore->Enabled = true;}else{Menu1Restore->Enabled = false;}

		if(vPermRepaire == 1) {Menu1Repaire->Enabled = true;}else{Menu1Repaire->Enabled = false;}


	}
	else
	{
		Application->Terminate();
	}

	AnsiString strSQL = "SELECT * FROM vars WHERE id=1";
	TFDConnection *connDB = new TFDConnection(NULL);
	TFDQuery *Q = SelectQ(strSQL,connDB);
	TMemoryStream *stImage1 = (TMemoryStream*)Q->CreateBlobStream((TBlobField *) Q->FieldByName("logo"),bmRead);

	if(reg==1)
	{
		if(stImage1->Size > 0)
		{
			MImage->Picture->Graphic->LoadFromStream(stImage1);
		}
	}

	AnsiString sql1 = "UPDATE vars set RunCounter = RunCounter + 1 WHERE id=1";

	CommandSQL(sql1);

	Q->Close();
	connDB->Close();
}
//---------------------------------------------------------------------------


void __fastcall TFMain::getVars()
{
	AnsiString strSql = "SELECT * FROM vars WHERE id=1";
	TFDConnection *connDB = new TFDConnection(NULL);
	TFDQuery *Q = SelectQ(strSql,connDB);
	if(Q->FieldByName("RunCounter")->AsInteger == 0)
	{
		AnsiString sql1 = ";UPDATE users SET userPostDate = '" + Now().FormatString("YYYY-MM-DD HH:mm:ss") + "' WHERE userID=1";
        CommandSQL(sql1);
    }



	DateType = Q->FieldByName("dateC")->AsInteger;
	dateSystem = Q->FieldByName("dateSystem")->AsInteger;
	name1 = Q->FieldByName("name1")->AsString;
	name2 = Q->FieldByName("name2")->AsString;
	name3 = Q->FieldByName("name3")->AsString;
	vArcSGIndexes = Q->FieldByName("ArcSGIndexes")->AsString;
	Q->Close();
	connDB->Close();
}

//---------------------------------------------------------------------------

void __fastcall TFMain::PCMClose(TObject *Sender, bool &AllowClose)
{
	AllowClose = true;
	if(PCM->PageCount <= 1)
	{
		PCM->Align = alNone;
		PCM->Left = -2500;
	}
}
//---------------------------------------------------------------------------



void __fastcall TFMain::Menu2GroupsAddClick(TObject *Sender)
{
	TFGroup *sG = new TFGroup(Application);
	sG->ShowModal();
	delete sG;
}
//---------------------------------------------------------------------------

void __fastcall TFMain::Menu2TypeAddClick(TObject *Sender)
{
	TFTypes *tType = new TFTypes(Application);
	tType->ShowModal();
	delete tType;

}
//---------------------------------------------------------------------------

void __fastcall TFMain::N18Click(TObject *Sender)
{
	TFRegisterPC *regP = new TFRegisterPC(Application);
	regP->ShowModal();
	delete regP;
}
//---------------------------------------------------------------------------

void __fastcall TFMain::Menu1VarsClick(TObject *Sender)
{
	TFVars *varsA = new TFVars(Application);
	varsA->ShowModal();
	delete varsA;
	getVars();
	ShowMessage("Please, close the program then reopen it to use the changes.");

  //	Application->Terminate();

	//FMain->FillArcSG();

}
//---------------------------------------------------------------------------

void __fastcall TFMain::Menu1UsersClick(TObject *Sender)
{
	TFUsersForm *sForm = new TFUsersForm(Application);
	sForm->ShowModal();
	delete sForm;
}
//---------------------------------------------------------------------------


void __fastcall TFMain::Menu2ManageArchiveClick(TObject *Sender)
{
	btnDocuManagementClick(Sender);
}
//---------------------------------------------------------------------------

void __fastcall TFMain::Menu2ShowImagesClick(TObject *Sender)
{
	AdvMetroTile1Click(Sender);
}
//---------------------------------------------------------------------------

void __fastcall TFMain::Menu2ShowFilesClick(TObject *Sender)
{
	AdvMetroTile2Click(Sender);
}
//---------------------------------------------------------------------------


void __fastcall TFMain::Menu3ChangePasswordClick(TObject *Sender)
{
	TFChangePassword *cPass = new TFChangePassword(Application);
	cPass->ShowModal();
	delete cPass;
}
//---------------------------------------------------------------------------

void __fastcall TFMain::N14Click(TObject *Sender)
{
	TFHelp *tHelp = new TFHelp(Application);
	tHelp->ShowModal();
	delete tHelp;
}
//---------------------------------------------------------------------------

void __fastcall TFMain::N19Click(TObject *Sender)
{
	TFSupport *aSupport = new TFSupport(Application);
	aSupport->ShowModal();
	delete aSupport;
}
//---------------------------------------------------------------------------

void __fastcall TFMain::N20Click(TObject *Sender)
{
	TFabout *ab = new TFabout(Application);
	ab->ShowModal();
	delete ab;
}
//---------------------------------------------------------------------------

void __fastcall TFMain::Menu1BackupClick(TObject *Sender)
{
	SaveDialog1->FileName = "arcdata" + GregDateTime(Now());
	if(SaveDialog1->Execute())
	{
     	TFwait *ww = new TFwait(Application);
		ww->Show();

		AnsiString exeFile=Application->ExeName;
		AnsiString exePath=ExtractFilePath(exeFile);
		AnsiString ssssss = exePath + "\\arcdata.db";
		const char*  fileFrom = DataFile.c_str(); //For example
	  //	SaveDialog1->FileName
		AnsiString sName = "";

	try{



			if(SaveDialog1->FileName.SubString(SaveDialog1->FileName.Length()-3,4) != ".bak")
			{
				sName = SaveDialog1->FileName + ".bak";
			}
			else
			{
				sName = SaveDialog1->FileName;
			}


			const char* fileTo = AnsiString(sName).c_str();
			CopyFile(fileFrom ,fileTo, true);

            ww->Close();
			ShowMessage("The Backup file Completed");


		}catch(Exception &e)
		{
			ShowMessage(e.Message);
		}


	}
}
//---------------------------------------------------------------------------

void __fastcall TFMain::Menu1RestoreClick(TObject *Sender)
{
	if(OpenDialog1->Execute())
	{
		const char*  filesrc = DataFile.c_str();
		AnsiString sName = "";
		AnsiString filebak = OpenDialog1->FileName;
		if (Application->MessageBoxA(L"Alert - The program will delete current database the restore a backup file you choose it - Are you sure ?",L"Alert",MB_YESNO | MB_ICONQUESTION ) == IDYES)
		{
			AnsiString bak = filesrc + AnsiString("_LastRestore") + ".bak";
			CopyFile(filesrc ,bak.c_str(), true);



			if(CopyFile(filebak.c_str() ,filesrc, false) == 0)
			{
				ShowMessage("Failed to restore a backup file");
			}
			else
			{
			  ShowMessage("Restore completed, please close the program then run it again.");

				AnsiString VChanges = "";
				VChanges = VChanges + "Restore a backup file : " + "[[" + filebak + "]]";


			  //FillArcSG();
			}
		}
	}
}
//---------------------------------------------------------------------------



void __fastcall TFMain::FormClose(TObject *Sender, TCloseAction &Action)
{
    Action = Vcl::Forms::caNone;
	if (Application->MessageBoxA(L"the program will quit . Are you sure?",L"Message alarm",MB_YESNO | MB_ICONQUESTION) == IDYES)
	{

		this->Free();
		PCM->Free();

		Application->Terminate();
	}
	else
	{
	   //	return;
//		Action = Vcl::Forms::caNone;
//		Application->Minimize();
//		FMain->WindowState = wsMinimized;
	}

}
//---------------------------------------------------------------------------

void __fastcall TFMain::Menu1RepaireClick(TObject *Sender)
{
	TFwait *ww = new TFwait(Application);

	ww->Show();
	ww->Refresh();
	Repaire();

	ww->Close();

}
//---------------------------------------------------------------------------

void __fastcall TFMain::FormDestroy(TObject *Sender)
{
	this->FreeOnRelease();
}
//---------------------------------------------------------------------------


void __fastcall TFMain::btnDocuManagementClick(TObject *Sender)
{
	PCM->Align = alClient;
	bool found = false;
	for(int i = 0;i< PCM->PageCount;i++)
	{
		if (PCM->Pages[i]->Name == "TabArcMain")
		{
			PCM->ActivePage = TabArcMain;
			found = true;
			break;
		}
		else
		{
			found = false;
		}
	}

	if (found == false)
	{
	   TabArcMain = new TRzTabSheet(PCM);
	   TabArcMain->ImageIndex = 0;
	   TabArcMain->Parent = PCM;
	   TabArcMain->Name = "TabArcMain";
	   TabArcMain->Caption = "Documents Management";
	   TabArcMain->PageControl = PCM;
	   TFArcMain *arcM = new TFArcMain(Application);
	   arcM->Parent = TabArcMain;
	   arcM->Show();
	   PCM->ActivePage = TabArcMain;

	}
}
//---------------------------------------------------------------------------

void __fastcall TFMain::AdvMetroTile1Click(TObject *Sender)
{
	PCM->Align = alClient;
	bool found = false;
	for(int i = 0;i< PCM->PageCount;i++)
	{
		if (PCM->Pages[i]->Name == "TabArcImages")
		{
			PCM->ActivePage = TabArcImages;
			found = true;
			break;
		}
		else
		{
			found = false;
		}
	}

	if (found == false)
	{
	   TabArcImages = new TRzTabSheet(PCM);
	   TabArcImages->ImageIndex = 1;
	   TabArcImages->Parent = PCM;
	   TabArcImages->Name = "TabArcImages";
	   TabArcImages->Caption = "Attached Pictures System";
	   TabArcImages->PageControl = PCM;
	   TFArcImages *imageM = new TFArcImages(Application);
	   imageM->Parent = TabArcImages;
	   imageM->Show();
	   PCM->ActivePage = TabArcImages;

	}
}
//---------------------------------------------------------------------------

void __fastcall TFMain::AdvMetroTile2Click(TObject *Sender)
{
	PCM->Align = alClient;
	bool found = false;
	for(int i = 0;i< PCM->PageCount;i++)
	{
		if (PCM->Pages[i]->Name == "TabArcFiles")
		{
			PCM->ActivePage = TabArcFiles;
			found = true;
			break;
		}
		else
		{
			found = false;
		}
	}

	if (found == false)
	{
	   TabArcFiles = new TRzTabSheet(PCM);
	   TabArcFiles->ImageIndex = 2;
	   TabArcFiles->Parent = PCM;
	   TabArcFiles->Name = "TabArcFiles";
	   TabArcFiles->Caption = "Attached Files System";
	   TabArcFiles->PageControl = PCM;
	   TFArcFiles *fileM = new TFArcFiles(Application);
	   fileM->Parent = TabArcFiles;
	   fileM->Show();
	   PCM->ActivePage = TabArcFiles;

	}
}
//---------------------------------------------------------------------------

void __fastcall TFMain::btnExitClick(TObject *Sender)
{

	Application->Terminate();
}
//---------------------------------------------------------------------------

