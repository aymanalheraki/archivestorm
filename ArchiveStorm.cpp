//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
#include <Vcl.Styles.hpp>
#include <Vcl.Themes.hpp>
USEFORM("ProcAdd.cpp", FProcAdd);
USEFORM("RegisterPC.cpp", FRegisterPC);
USEFORM("ImageShow.cpp", FImageShow);
USEFORM("login.cpp", Flogin);
USEFORM("Main.cpp", FMain);
USEFORM("UsersEdit.cpp", FUsersEdit);
USEFORM("UsersForm.cpp", FUsersForm);
USEFORM("Vars.cpp", FVars);
USEFORM("wait.cpp", Fwait);
USEFORM("splash.cpp", Fsplash);
USEFORM("Support.cpp", FSupport);
USEFORM("Types.cpp", FTypes);
USEFORM("UsersAdd.cpp", FUsersAdd);
USEFORM("Help.cpp", FHelp);
USEFORM("arcAdd.cpp", FarcAdd);
USEFORM("ArcDesc.cpp", FArcDesc);
USEFORM("arcEdit.cpp", FarcEdit);
USEFORM("ArcFiles.cpp", FArcFiles);
USEFORM("about.cpp", Fabout);
USEFORM("AddFiles.cpp", FAddFiles);
USEFORM("AddImages.cpp", FAddImages);
USEFORM("AlarmAdd.cpp", FAlarmAdd);
USEFORM("ChangePassword.cpp", FChangePassword);
USEFORM("Group.cpp", FGroup);
USEFORM("ArcImages.cpp", FArcImages);
USEFORM("ArcMain.cpp", FArcMain);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{

//ShowMessage(System::ParamStr(0));
//ShowMessage(System::ParamStr(1));

AnsiString mutexname="ArchiveStormAr";
HANDLE mutex = CreateMutex(NULL, TRUE, mutexname.c_str());
if( mutex )
{
  if( GetLastError() != ERROR_ALREADY_EXISTS )
  {
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(TFMain), &FMain);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
   }
   else
   {
		ShowMessage("Program is already running");
		CloseHandle(mutex);
	}
  }
	return 0;
}
//---------------------------------------------------------------------------
