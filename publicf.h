#ifndef __PUBLICF_H_
#define __PUBLICF_H_
#include <vcl.h>
#include <windows.h>
#include <Registry.hpp>
#include <System.DateUtils.hpp>
#include <StrUtils.hpp>
#include "RzCmboBx.hpp"
#include "RzLstBox.hpp"
#include "RzLabel.hpp"
#include "RzPanel.hpp"
#include "diskid32.h"
#include <Data.DB.hpp>
#include <Vcl.DBCtrls.hpp>
#include <Vcl.AxCtrls.hpp>
#include "AdvDateTimePicker.hpp"


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
#include <Vcl.DBCtrls.hpp>

#include "Main.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <windows.h>
#include <winioctl.h>

long getHardDriveComputerID();

AnsiString StringToHex(char *s);
TFDQuery* SelectQ(AnsiString strSql,TFDConnection *connDB);
long int CommandSQL(AnsiString strSql);
AnsiString CDate(AnsiString adate);
AnsiString CDateTime(AnsiString adate);
AnsiString CDate1(AnsiString adate);
AnsiString CGregDate(AnsiString adate);
AnsiString CDateP(AnsiString adate);
AnsiString CDateP1(AnsiString adate);
AnsiString CTime(AnsiString adate);
AnsiString FormatDBDate(AnsiString adate);
TDateTime StringToDateTime(AnsiString adate);
AnsiString ToDate(AnsiString adate);
AnsiString ToDBDate(AnsiString adate);
AnsiString maskDate(AnsiString adate);
AnsiString ToDBGregDateTime(TDateTime Today);
AnsiString ToDBGregDate(TDateTime Today);
AnsiString GregDateTime(TDateTime Today);
AnsiString GetTime(TDateTime Today);
int GetDBcount(AnsiString str1);
int getDBFieldID(AnsiString str1, AnsiString fName);
int getLastID(AnsiString str1, AnsiString fName);
void ShowMessageA(UnicodeString str1);
void ComboFillA(TRzComboBox *aa, AnsiString strSQL, AnsiString item1,AnsiString value1, bool a1);
void ComboFillB(TRzComboBox *aa, AnsiString strSQL, AnsiString item1,AnsiString value1, bool a1);
void ComboFill(TRzComboBox *aa, AnsiString strSQL, AnsiString item1,AnsiString value1);
void ChangeLanguage(AnsiString L);
void HijriCalendar();
void GregCalendar();
AnsiString myStr(float V);
long int cInt(float Num);
int GMDays(Byte M);
TDateTime HtoG(Byte D, Byte M, int Y);
AnsiString ReadRegistry(AnsiString Key1);
void UpdateRegKey(UnicodeString Key1, UnicodeString data1);
void UpdateRegKey2(UnicodeString k,UnicodeString Key1, UnicodeString data1);
AnsiString HexToAscii(char *pString);
bool __fastcall TryStrToDouble(AnsiString const &Str, int &Value);
bool isNumber(char *str);
AnsiString myEncrypt(char str[], char key[]);
AnsiString ComputerName();
AnsiString UserName();
// int SaveLog(AnsiString form1,AnsiString Type1,AnsiString vDesc,TStringList *strList);
AnsiString FormatByteSize(long double bytes);
AnsiString getUserID(AnsiString strCivilCard);
AnsiString checkUserInCommMembers(AnsiString strCivilCard, AnsiString commID);
int SendInternalEmail();
AnsiString getHijriDate(TAdvDateTimePicker *dtp,int db);
AnsiString GetOADate(TDateTime hd);
TDateTime GetOAToGregDate(AnsiString hd);
TDateTime GetGregToOADate(AnsiString hd);
AnsiString GetOAlQuraDateNow();
TDateTime GetOAToGregDateTime(AnsiString hd);
TDateTime GetGregToOADateTime(AnsiString hd);
TDateTime GetDateTime(AnsiString hd);
void Repaire();
#endif
