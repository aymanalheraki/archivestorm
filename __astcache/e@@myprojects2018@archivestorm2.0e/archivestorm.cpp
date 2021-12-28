//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
#include <Vcl.Styles.hpp>
#include <Vcl.Themes.hpp>
USEFORM("ProcAdd.cpp", FProcAdd);
USEFORM("Main.cpp", FMain);
USEFORM("ImageShow.cpp", FImageShow);
USEFORM("Help.cpp", FHelp);
USEFORM("login.cpp", Flogin);
USEFORM("UsersForm.cpp", FUsersForm);
USEFORM("UsersEdit.cpp", FUsersEdit);
USEFORM("wait.cpp", Fwait);
USEFORM("Vars.cpp", FVars);
USEFORM("UsersAdd.cpp", FUsersAdd);
USEFORM("splash.cpp", Fsplash);
USEFORM("RegisterPC.cpp", FRegisterPC);
USEFORM("Types.cpp", FTypes);
USEFORM("Support.cpp", FSupport);
USEFORM("arcEdit.cpp", FarcEdit);
USEFORM("ArcDesc.cpp", FArcDesc);
USEFORM("ArcFiles.cpp", FArcFiles);
USEFORM("arcAdd.cpp", FarcAdd);
USEFORM("AddFiles.cpp", FAddFiles);
USEFORM("about.cpp", Fabout);
USEFORM("AlarmAdd.cpp", FAlarmAdd);
USEFORM("AddImages.cpp", FAddImages);
USEFORM("Group.cpp", FGroup);
USEFORM("ChangePassword.cpp", FChangePassword);
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