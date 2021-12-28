#include "publicf.h"

AnsiString StringToHex(char *s) {
	AnsiString result = "";
	int si = strlen(s);
	for (int i = 0; i < si; i++) {
		result = result + IntToHex(Byte(s[i]), 2);
	}
	return result;
}

TFDQuery* SelectQ(AnsiString strSql,TFDConnection *connDB)
{
	try
	{
		connDB->DriverName = "Sqlite";
		connDB->Params->Values["Database"] = FMain->DataFile;

		connDB->Open();
		TFDQuery *stdQ = new TFDQuery(NULL);
		stdQ->Connection = connDB;
		stdQ->SQL->Text = strSql;
		stdQ->Open();

		return stdQ;

	 }
	 catch(Exception *e)
	 {
		ShowMessage("هناك مشكلة بالاتصال بقاعدة البيانات");
	 }
	 return 0;
}

long int CommandSQL(AnsiString strSql)
{
	try
	{

		TFDConnection *connDB = new TFDConnection(NULL);
		connDB->DriverName = "Sqlite";
		connDB->Params->Values["Database"] = FMain->DataFile;
		connDB->Open();

		TFDQuery *stdQ = new TFDQuery(NULL);
        stdQ->Connection = connDB;
		stdQ->SQL->Text = strSql;
		stdQ->ExecSQL();

		stdQ->SQL->Text = "SELECT LAST_INSERT_ROWID() AS rowid";
		stdQ->Open();
		long int clID;
		if(stdQ->FindFirst())
		{
			clID = stdQ->FieldByName("rowid")->AsLargeInt;
		}

		connDB->Connected = false;
	   	return clID;
	   }
	   catch(Exception *e)
	  {
		ShowMessage("هناك مشكلة بالاتصال بقاعدة البيانات");
	  }
      return 0;
}

//////////////////////////////////////////////////////////////////////////////
AnsiString CDate(AnsiString adate) {
	// ShowMessage(adate);
	AnsiString ayear = adate.SubString(0, 4);
	AnsiString amonth = adate.SubString(5, 2);
	AnsiString aday = adate.SubString(7, 2);
	AnsiString ff = aday + "\/ " + amonth + "\/ " + ayear;
	return ff;
}


AnsiString CDateTime(AnsiString adate) {
	// ShowMessage(adate);
	AnsiString ayear = adate.SubString(0, 4);
	AnsiString amonth = adate.SubString(5, 2);
	AnsiString aday = adate.SubString(7, 2);
	AnsiString aHour = adate.SubString(9, 2);
	AnsiString aMinute = adate.SubString(11, 2);
	AnsiString aSecond = adate.SubString(13, 2);
	AnsiString dStatus = "ص";
	int h1 = aHour.ToInt();
	if(aHour.ToInt() > 12)
	{
		h1 = aHour - 12;

		dStatus = "م";
    }


	AnsiString ff = aday + "\/ " + amonth + "\/ " + ayear + " " + AnsiString(h1) + ":" + aMinute + ":" + aSecond + " " + dStatus;
	return ff;
}

AnsiString CDate1(AnsiString adate) {
	// ShowMessage(adate);
	AnsiString ayear = adate.SubString(0, 4);
	AnsiString amonth = adate.SubString(5, 2);
	AnsiString aday = adate.SubString(7, 2);
	AnsiString ff = aday + "\/" + amonth + "\/" + ayear;
	return ff;
}

AnsiString CGregDate(AnsiString adate) {
	TCHAR S[2], I[2];
	GetLocaleInfo(LOCALE_USER_DEFAULT, LOCALE_SDATE, S, 2);
	GetLocaleInfo(LOCALE_USER_DEFAULT, LOCALE_IDATE, I, 2);
	AnsiString sep = S[0];

	AnsiString ayear = adate.SubString(0, 4);
	AnsiString amonth = adate.SubString(5, 2);
	AnsiString aday = adate.SubString(7, 2);
	AnsiString aHour = adate.SubString(9, 2);
	AnsiString aMinute = adate.SubString(11, 2);
	AnsiString aSecond = adate.SubString(13, 2);

	AnsiString ff;
	// AnsiString II = I[0];
	// if(II == "0")
	// {
	// ff = amonth + sep + aday + sep + ayear;
	// }
	// else if(II == "1")
	// {
	// ff = aday + sep + amonth + sep + ayear;
	// }
	// else if(II == "2")
	// {
	// ff = ayear + sep + amonth + sep + aday;
	// }
	// else
	// {
	// ff = aday + sep + amonth + sep + ayear;
	// }
	// =  aday + "\/" +  + "\/" + ayear;
	// yyyy/MM/dd
	// dd/MM/yyyy
	ff = aday + sep + amonth + sep + ayear + " " + aHour + ":" + aMinute + ":" + aSecond;
	return ff;
}

AnsiString CDateP(AnsiString adate) {
	// ShowMessage(adate);
	AnsiString ayear = adate.SubString(0, 4);
	AnsiString amonth = adate.SubString(5, 2);
	AnsiString aday = adate.SubString(7, 2);
	AnsiString ff = ayear + "\/ " + amonth + "\/ " + aday;
	return ff;
}

AnsiString CDateP1(AnsiString adate) {
	// ShowMessage(adate);
	AnsiString ayear = adate.SubString(0, 4);
	AnsiString amonth = adate.SubString(5, 2);
	AnsiString aday = adate.SubString(7, 2);
	AnsiString ff = ayear + "\/" + amonth + "\/" + aday;
	return ff;
}

AnsiString CTime(AnsiString adate) {
	AnsiString aHour = adate.SubString(9, 2);
	AnsiString aMinutes = adate.SubString(11, 2);
	AnsiString aSeconds = adate.SubString(13, 2);
	AnsiString ff = aHour + ":" + aMinutes + ":" + aSeconds;
	return ff;
}

AnsiString FormatDBDate(AnsiString adate) {
	// ShowMessage(adate);
	AnsiString ayear = adate.SubString(0, 4);
	AnsiString amonth = adate.SubString(5, 2);
	AnsiString aday = adate.SubString(7, 2);

	AnsiString aHour = adate.SubString(9, 2);
	AnsiString aMinutes = adate.SubString(11, 2);
	AnsiString aSeconds = adate.SubString(13, 2);


	AnsiString ff = amonth + "\/" + aday + "\/" + ayear;

	return ff;
}


TDateTime StringToDateTime(AnsiString adate)
{
	// ShowMessage(adate);
	AnsiString ayear = adate.SubString(0, 4);
	AnsiString amonth = adate.SubString(5, 2);
	AnsiString aday = adate.SubString(7, 2);
	AnsiString aHour = adate.SubString(9, 2);
	AnsiString aMinutes = adate.SubString(11, 2);
	AnsiString aSeconds = adate.SubString(13, 2);
	UnicodeString  ff =  aday + "\/" + amonth + "\/" + ayear + " " + aHour + ":" + aMinutes + ":" + aSeconds;


	TFormatSettings fmt = TFormatSettings::Create("ar-SA");
//	fmt.LongDateFormat = L"dd/MM/yyyy";
//	fmt.DateSeparator = L'/';
//	fmt.LongTimeFormat = L"hh:mm:ss";
//	fmt.TimeSeparator = L':';
	GetLocaleFormatSettings(0x401, fmt);

	TDateTime dt = StrToDateTime(ff,fmt);

	return dt.DateTimeString();
}


AnsiString ToDate(AnsiString adate)
{
	AnsiString aday = adate.SubString(0, 4);
	AnsiString amonth = adate.SubString(5, 2);
	AnsiString ayear = adate.SubString(7, 2);
	AnsiString ff = ayear + amonth + aday;
	return ff;
}

AnsiString ToDBDate(AnsiString adate)
{
	AnsiString aday = adate.SubString(0, 2);
	AnsiString amonth = adate.SubString(3, 2);
	AnsiString ayear = adate.SubString(5, 4);
	AnsiString ff = ayear + amonth + aday;
	return ff;
}

AnsiString maskDate(AnsiString adate) {
	AnsiString ayear = adate.SubString(0, 4);
	AnsiString amonth = adate.SubString(5, 2);
	AnsiString aday = adate.SubString(7, 2);
	AnsiString ff = ayear + "\/" + amonth + "\/" + aday;
	return ff;
}

AnsiString ToDBGregDateTime(TDateTime Today) {
	unsigned short Y, M, D, Hours, Minutes, Seconds, ss;
	Today.DecodeDate(&Y, &M, &D);
	Today.DecodeTime(&Hours, &Minutes, &Seconds, &ss);

	AnsiString vYear, vMonth, vDay;
	if (Y < 10) {
		vYear = "0" + AnsiString(Y);
	}
	else {
		vYear = AnsiString(Y);
	}

	if (M < 10) {
		vMonth = "0" + AnsiString(M);
	}
	else {
		vMonth = AnsiString(M);
	}

	if (D < 10) {
		vDay = "0" + AnsiString(D);
	}
	else {
		vDay = AnsiString(D);
	}

	AnsiString vHours, vMinutes, vSeconds;
	if (Hours < 10) {
		vHours = "0" + AnsiString(Hours);
	}
	else {
		vHours = AnsiString(Hours);
	}

	if (Minutes < 10) {
		vMinutes = "0" + AnsiString(Minutes);
	}
	else {
		vMinutes = AnsiString(Minutes);
	}

	if (Seconds < 10) {
		vSeconds = "0" + AnsiString(Seconds);
	}
	else {
		vSeconds = AnsiString(Seconds);
	}

	return vYear + vMonth + vDay + vHours + vMinutes + vSeconds;
}
// ---------------------------------------------------------------------------

AnsiString ToDBGregDate(TDateTime Today) {
	unsigned short Y, M, D;
	Today.DecodeDate(&Y, &M, &D);

	AnsiString vYear, vMonth, vDay;
	if (Y < 10) {
		vYear = "0" + AnsiString(Y);
	}
	else {
		vYear = AnsiString(Y);
	}

	if (M < 10) {
		vMonth = "0" + AnsiString(M);
	}
	else {
		vMonth = AnsiString(M);
	}

	if (D < 10) {
		vDay = "0" + AnsiString(D);
	}
	else {
		vDay = AnsiString(D);
	}
	return vYear + vMonth + vDay;
}

// ---------------------------------------------------------------------------
AnsiString GregDateTime(TDateTime Today) {
	unsigned short Y, M, D, Hours, Minutes, Seconds, ss;
	Today.DecodeDate(&Y, &M, &D);
	Today.DecodeTime(&Hours, &Minutes, &Seconds, &ss);

	AnsiString vYear, vMonth, vDay;
	if (Y < 10) {
		vYear = "0" + AnsiString(Y);
	}
	else {
		vYear = AnsiString(Y);
	}

	if (M < 10) {
		vMonth = "0" + AnsiString(M);
	}
	else {
		vMonth = AnsiString(M);
	}

	if (D < 10) {
		vDay = "0" + AnsiString(D);
	}
	else {
		vDay = AnsiString(D);
	}

	AnsiString vHours, vMinutes, vSeconds;
	if (Hours < 10) {
		vHours = "0" + AnsiString(Hours);
	}
	else {
		vHours = AnsiString(Hours);
	}

	if (Minutes < 10) {
		vMinutes = "0" + AnsiString(Minutes);
	}
	else {
		vMinutes = AnsiString(Minutes);
	}

	if (Seconds < 10) {
		vSeconds = "0" + AnsiString(Seconds);
	}
	else {
		vSeconds = AnsiString(Seconds);
	}

	return vYear + vMonth + vDay + vHours + vMinutes + vSeconds;
}

// ---------------------------------------------------------------------------

// ----------------------------------------------------------------------------
AnsiString GetTime(TDateTime Today) {
	unsigned short Hr, Min, Second, Msecond;

	Today.DecodeTime(&Hr, &Min, &Second, &Msecond);

	AnsiString HrC, MinC, SecondC;

	if (Hr < 10) {
		HrC = "0" + AnsiString(Hr);
	}
	else {
		HrC = Hr;
	}

	if (Min < 10) {
		MinC = "0" + AnsiString(Min);
	}
	else {
		MinC = Min;
	}

	if (Second < 10) {
		SecondC = "0" + AnsiString(Second);
	}
	else {
		SecondC = Second;
	}

	AnsiString tt = "";
	tt = tt + HrC;
	tt = tt + MinC;
	tt = tt + SecondC;
	return tt;
}

// ----------------------------------------------------------------------------

int GetDBcount(AnsiString str1)
{
	TFDConnection *connDB = new TFDConnection(NULL);
	TFDQuery *Q = SelectQ(str1, connDB);
	int sss = Q->RecordCount;
	connDB->Close();
	return sss;
}

// ----------------------------------------------------------------------------

int getDBFieldID(AnsiString str1, AnsiString fName)
{
	TFDConnection *connDB = new TFDConnection(NULL);
	int fID;
	TFDQuery *Q = SelectQ(str1,connDB);
	try
	{
		fID = Q->FieldByName(fName)->AsInteger;
		connDB->Close();
		return fID + 1;
	}
	catch(Exception *e)
	{
		connDB->Close();
		return 1;
	}
}
//-----------------------------------------------------------------------------

int getLastID(AnsiString str1,AnsiString fName)
{
	TFDConnection *connDB = new TFDConnection(NULL);
	int fID;
	TFDQuery *Q = SelectQ(str1, connDB);
	try
	{
		fID = Q->FieldByName(fName)->AsInteger;
		connDB->Close();
		return fID + 1;
	}
	catch(Exception *e)
	{
		connDB->Close();
		return 1;
	}
}

// ----------------------------------------------------------------------------
void ShowMessageA(UnicodeString str1)
{
	Application->MessageBoxA(str1.w_str(), L"رسالة تنبيه",MB_ICONQUESTION);
}

// -----------------------------------------------------------------------

void ComboFillA(TRzComboBox *aa, AnsiString strSQL, AnsiString item1,AnsiString value1, bool a1)
{
	TFDConnection *connDB = new TFDConnection(NULL);
	TFDQuery *Qcmb = SelectQ(strSQL, connDB);
	aa->Items->Clear();

	if(Qcmb->RecordCount > 0)
	{
		if(a1 == true)
		{
			aa->AddItemValue("الكل", "0");
		}
		for (int i = 0; i < Qcmb->RecordCount; i++)
		{
			aa->AddItemValue(Qcmb->FieldByName(item1)->AsAnsiString,Qcmb->FieldByName(value1)->AsAnsiString);
			Qcmb->Next();
		}
		if (a1 == true)
		{
			aa->ItemIndex = 0;
		}
	}
	connDB->Close();
}

// -----------------------------------------------------------------------
void ComboFillB(TRzComboBox *aa, AnsiString strSQL, AnsiString item1,AnsiString value1, bool a1)
{
	TFDConnection *connDB = new TFDConnection(NULL);
	TFDQuery *Qcmb = SelectQ(strSQL, connDB);
	aa->Items->Clear();

	if (Qcmb->RecordCount > 0) {
		if (a1 == true) {
			aa->AddItemValue("الكل", "0");
		}
		for (int i = 0; i < Qcmb->RecordCount; i++) {
			aa->AddItemValue(Qcmb->FieldByName(value1)->AsAnsiString + " - " +
				Qcmb->FieldByName(item1)->AsAnsiString,
				Qcmb->FieldByName(value1)->AsAnsiString);
			Qcmb->Next();
		}
		if (a1 == true) {
			aa->ItemIndex = 0;
		}
	}
	connDB->Close();
}

// ----------------------------------------------------------------------------------
void ComboFill(TRzComboBox *aa, AnsiString strSQL, AnsiString item1,AnsiString value1)
{
	TFDConnection *connDB = new TFDConnection(NULL);
	TFDQuery *Qcmb = SelectQ(strSQL, connDB);
	aa->Items->Clear();

	if (Qcmb->RecordCount > 0) {
		for (int i = 0; i < Qcmb->RecordCount; i++) {
			aa->AddItemValue(Qcmb->FieldByName(item1)->AsAnsiString,
				Qcmb->FieldByName(value1)->AsAnsiString);
			Qcmb->Next();
		}
	}
	connDB->Close();
}

// ------------------------ كلاس التفقيط -------------------------------------------
class MoneyToString {
	// مصفوفات الكلمات
	AnsiString ahad[13];
	AnsiString ahad2[13];
	AnsiString asharat[11];
	AnsiString meat[11];
	AnsiString melion[5];
	AnsiString alf[5];
	AnsiString bcur[4];

public:

	String NumToStr(double P_Num) {
		ahad[0] = "";
		ahad[1] = "واحد";
		ahad[2] = "إثنين";
		ahad[3] = " ثلاثة";
		ahad[4] = " أربعة";
		ahad[5] = " خمسة";
		ahad[6] = " ستة";
		ahad[7] = " سبعة";
		ahad[8] = " ثمانية";
		ahad[9] = " تسعة";
		ahad[10] = " عشرة";
		ahad[11] = " أحد";
		ahad[12] = " اثنى";
		ahad2[0] = "";
		ahad2[1] = " واحد";
		ahad2[2] = " إثنين";
		ahad2[3] = " ثلاثة";
		ahad2[4] = " أربعة";
		ahad2[5] = " خمسة";
		ahad2[6] = " ستة";
		ahad2[7] = " سبعة";
		ahad2[8] = " ثمانية";
		ahad2[9] = " تسعة";
		ahad2[10] = " عشر";
		ahad2[11] = " أحد";
		ahad2[12] = " اثنى";
		asharat[0] = "";
		asharat[1] = "واحد";
		asharat[2] = "عشرون";
		asharat[3] = "ثلاثون";
		asharat[4] = "أربعون";
		asharat[5] = "خمسون";
		asharat[6] = "ستون";
		asharat[7] = "سبعون";
		asharat[8] = "ثمانون";
		asharat[9] = "تسعون";
		meat[0] = "";
		meat[1] = "مائة";
		meat[2] = "مائتين";
		meat[3] = "ثلاثمائة";
		meat[4] = "أربعمائة";
		meat[5] = "خمسمائة";
		meat[6] = "ستمائة";
		meat[7] = "سبعمائة";
		meat[8] = "ثمانمائة";
		meat[9] = "تسعمائة";
		melion[0] = "";
		melion[1] = " مليون";
		melion[2] = " مليونان";
		melion[3] = " ملايين";
		alf[0] = "";
		alf[1] = " ألف";
		alf[2] = " ألفين";
		alf[3] = " آلاف";
		alf[4] = " ألفي";
		bcur[0] = " ريال";
		bcur[1] = " ريالان";
		bcur[2] = " ريالات";

		double rv;
		String accum = "";
		// الملايين
		rv = (int)(P_Num / 1000000);

		if (rv > 2) {
			accum = NumToStr1(rv, accum);
		}

		if (rv >= 3 && rv < 10) {
			accum = accum + melion[3];
		}
		else if (rv == 2) {
			accum = accum + melion[2];
		}
		else if ((rv == 1) || (rv >= 10 && rv <= 999)) {
			accum = accum + melion[1];
		}

		// الآلاف

		rv = P_Num - (int)(P_Num / 1000000) * 1000000;

		rv = (int)(rv / 1000);

		if ((P_Num != ((int)(P_Num / 1000000)) * 1000000) && (P_Num > 1000000))
		{
			accum = accum + " و";

		}
		if (rv > 2) {
			accum = NumToStr1(rv, accum);

		}
		if (rv >= 3 && rv <= 10) {
			accum = accum + alf[3];
		}
		else if (rv == 2) {
			accum = accum + alf[2];
		}
		else if ((rv == 1) || (rv >= 10 && rv <= 999)) {
			accum = accum + alf[1];
		}

		// الباقي

		rv = P_Num - ((int)(P_Num / 1000)) * 1000;
		rv = (int)(rv + 0.0001);

		if ((P_Num != ((int)(P_Num / 1000)) * 1000) && (P_Num > 1000) &&
			(rv != 0)) {
			accum = accum + " و ";
		}

		if ((rv >= 2) && (P_Num != 2)) {
			accum = NumToStr1(rv, accum);

		}

		if (P_Num > 0.999) {
			if ((P_Num < 11) && (rv > 2)) {
				accum = accum + bcur[2];
			}
			else if (P_Num == 2) {
				accum = accum + bcur[1];
			}
			else {
				accum = accum + bcur[0];
			}
		}
		// الهللات
		rv = P_Num - ((int)(P_Num + 0.0001)) + 0.0001;
		rv = (int)(rv * 1000);
		rv = rv / 10;

		if ((rv >= 1) && (P_Num > 0.99)) {
			accum = accum + " و";

		}

		if (rv > 2.9) {
			accum = NumToStr1(rv, accum);
		}

		if (rv >= 1) {
			if ((rv == 2)) {
				accum = accum + " هللتين";
			}
			else if ((rv < 11) && (rv > 2.9)) {
				accum = accum + " هللات";
			}
			else {
				accum = accum + " هلله";
			}
			// return accum;
		}
		return accum;
	}

	// ******************* NumToStr1 *************************
	// used by NmToStr
	String NumToStr1(double rv, AnsiString accum) {
		int b, c;
		if (rv >= 100) {
			b = (int)(rv / 100);
			accum = accum + meat[b];
		}

		b = (int)(rv - ((int)(rv / 100) * 100));

		if ((b != 0) && (rv > 99)) {
			accum = accum + " و";
		}

		c = b - ((int)(b / 10) * 10);
		if ((b < 13) && (b != 0)) {
			accum = accum + ahad[b];
		}

		if ((b > 12) && (c != 0)) {
			accum = accum + ahad2[c];
		}
		if ((b > 10) && (b < 20)) {
			accum = accum + ahad2[10];

		}

		if (b > 19) {
			if (c != 0) {
				accum = accum + " و";
			}
			accum = accum + asharat[b / 10];

		}
		return accum;
	}
};

// --------------------------------ضبط اللغة في حقول الكتابة---------------------------------

void ChangeLanguage(AnsiString L) {
	TOSVersion *ver;

	if (ver->Name == "Windows 7") {
		if (L == "A") {
			PostMessage(GetForegroundWindow(), WM_INPUTLANGCHANGEREQUEST,
				INPUTLANGCHANGE_SYSCHARSET, 0x00000401);
		}
		if (L == "E") {
			PostMessage(GetForegroundWindow(), WM_INPUTLANGCHANGEREQUEST,
				INPUTLANGCHANGE_SYSCHARSET, 0x00000409);
		}
	}
	else {
		if (L == "A") {
			LoadKeyboardLayout("00000401", KLF_ACTIVATE);
		}
		if (L == "E") {
			LoadKeyboardLayout("00000409", KLF_ACTIVATE);
		}
	}

}

// ------------------------------ضبط التاريخ إلى هجري -------------------------

void HijriCalendar() {
	TOSVersion *ver;
	//

	MAKELANGID("AR", "SA");
	if (ver->Major >= 6) {
		const char *a = "23";
		const char *b = "dd/MM/yyyy";
		SetLocaleInfo(GetUserDefaultLCID(), LOCALE_ICALENDARTYPE, a);
		SetLocaleInfo(GetUserDefaultLCID(), LOCALE_SSHORTDATE, b);
		SendMessage(HWND_BROADCAST, WM_SETTINGCHANGE, 0, 0);

	}
	else {
		const char *a = "6";
		const char *b = "dd/MM/yyyy";
		SetLocaleInfo(LOCALE_SYSTEM_DEFAULT, LOCALE_ICALENDARTYPE, a);
		SetLocaleInfo(LOCALE_SYSTEM_DEFAULT, LOCALE_SSHORTDATE, b);
		SendMessage(HWND_BROADCAST, WM_SETTINGCHANGE, 0, 0);

	}

}

// --------------------------------

void GregCalendar() {
	const char *a = "1";
	const char *b = "yyyy/MM/dd";
	SetLocaleInfo(GetUserDefaultLCID(), LOCALE_ICALENDARTYPE, a);
	SetLocaleInfo(GetUserDefaultLCID(), LOCALE_SSHORTDATE, b);
	SendMessage(HWND_BROADCAST, WM_SETTINGCHANGE, 0, 0);
}
// ----------------------------------

AnsiString myStr(float V) {
	AnsiString N_;
	int Len, Code;
	Byte K;
	// Str(V:0:12,N_);
	N_ = FormatFloat("0.1", V);
	while (N_.SubString(N_.Length(), 1) == "0") {
		N_ = N_.SubString(N_.Length(), 1);
	}
	if (N_.SubString(N_.Length(), 1) == ".") {
		N_ = N_.SubString(N_.Length(), 1);
	}
	return N_.SubString(0, N_.Length() - 1);
}

/*** {------------------------------------------ */

long int cInt(float Num) {
	if (Num < 0) {
		Num = Num - 1;
	}
	return (long int)Num;

}

/*** {------------------------------------------ */

int GMDays(Byte M) {
	const double Gms = 30.6;
	M = M % 12;
	if (M > 2) {
		return (long int)((M - 2) * Gms) + 60;
	}
	else {
		return (long int)(M * Gms) - (long int)(M / 2);
	}
}

/*** {------------------------------------------ */

TDateTime HtoG(Byte D, Byte M, int Y) {

	const double Hys = 354.3667, Gys = 365.25;
	int DM, YY;
	long int DY, Days;
	Byte Cut, DD, MM;

	DY = (long int)((Y - 1291) * Hys);
	DM = (long int)((M - 1) * 29.51);
	Days = DY + DM + D - 9814;

	YY = cInt(Days / Gys);
	if (cInt(YY * Gys) > Days - 1)
		YY = YY - 1;
	Days = Days - cInt(YY * Gys);
	YY = YY + 1901;
	Cut = 0;
	if ((Days > 59) && (YY % 4 != 0))
		Cut = 1;
	MM = System::Int((Days + Cut - 1) / 30);
	if (MM > 11)
		MM = 11;
	if (GMDays(MM) - Cut > (Days - 1))
		MM = MM - 1;
	DD = Days - (GMDays(MM) - Cut);
	MM = MM + 1;

	AnsiString vYY, vMM, vDD;

	vDD = myStr(DD);
	vMM = myStr(MM);

	if (vDD.Trim().Length() == 1)
		vDD = "0" + vDD;
	if (vMM.Trim().Length() == 1)
		vMM = "0" + vMM;
	vYY = myStr(YY);

	unsigned short Y1, M1, D1;
	D1 = vDD.ToInt();
	M1 = vMM.ToInt();
	Y1 = vYY.ToInt();
	return IncDay(EncodeDate(Y1, M1, D1), 1); ;

}

// --------------------------- Registry Read ---------------------------------

AnsiString ReadRegistry(AnsiString Key1) {
	AnsiString Key("Software\\HaramDB");
	AnsiString regString;
	TRegistry *Reg = new TRegistry(KEY_READ);
	Reg->RootKey = HKEY_CURRENT_USER;
	Reg->Access = KEY_SET_VALUE;

	if (Reg->OpenKeyReadOnly("Software\\HaramDB") == true) {
		regString = Reg->ReadString(Key1);
		Reg->CloseKey();
		return regString;
	}
	else {
		return 0;
	}

}

// --------------------------- Writing String --------------------------------

// --------------------------------------------------------------------------

void UpdateRegKey(UnicodeString Key1, UnicodeString data1) {
	TRegistry *Reg = new TRegistry(KEY_WRITE);
	AnsiString temp;

	Reg->RootKey = HKEY_CURRENT_USER;
	Reg->Access = KEY_SET_VALUE;
	if (Reg->KeyExists("Software\\HaramDB")) {
		try {
			if (Reg->OpenKey("Software\\HaramDB", FALSE)) {
				Reg->WriteString(Key1, data1);
				Reg->CloseKey();
			}
			else {
				// ShowMessage("Can not open program serial key .");
				Reg->CloseKey();
			}
		}
		catch (ERegistryException &E) {
			ShowMessage(E.Message);
			delete Reg;
			return;
		}
	}
	else {
		Reg->CreateKey("Software\\HaramDB");
		try {
			if (Reg->OpenKey("Software\\HaramDB", FALSE)) {
				Reg->WriteString(Key1, data1);
				Reg->CloseKey();
			}
			else {
				// ShowMessage("Can not open program serial key .");
				Reg->CloseKey();
			}
		}
		catch (ERegistryException &E) {
			ShowMessage(E.Message);
			delete Reg;
			return;
		}
	}
	delete Reg;
}

//-------------------------------------------------------------------------

void UpdateRegKey2(UnicodeString k,UnicodeString Key1, UnicodeString data1)
{
	TRegistry *Reg = new TRegistry(KEY_WRITE);
	AnsiString temp;

	Reg->RootKey = HKEY_CURRENT_USER;
	Reg->Access = KEY_SET_VALUE;
	if (Reg->KeyExists(k)) {
		try {
			if (Reg->OpenKey(k, FALSE)) {
				Reg->WriteString(Key1, data1);
				Reg->CloseKey();
			}
			else {
				// ShowMessage("Can not open program serial key .");
				Reg->CloseKey();
			}
		}
		catch (ERegistryException &E) {
			ShowMessage(E.Message);
			delete Reg;
			return;
		}
	}
	else {
		Reg->CreateKey(k);
		try {
			if (Reg->OpenKey(k, FALSE)) {
				Reg->WriteString(Key1, data1);
				Reg->CloseKey();
			}
			else {
				// ShowMessage("Can not open program serial key .");
				Reg->CloseKey();
			}
		}
		catch (ERegistryException &E) {
			ShowMessage(E.Message);
			delete Reg;
			return;
		}
	}
	delete Reg;
}

// ---------------------------- strings functions --------------------------

// ------------------------------------------------------------------------
AnsiString HexToAscii(char *pString) {
	char ch;
	AnsiString bb = "";
	for (unsigned int i = 0; i < strlen(pString); i = i + 2) {
		ch = (pString[i] >= 'A' ? ((pString[i] & 0xDF) - 'A') + 10 :
			(pString[i] - '0')) * 16;
		ch += (pString[i + 1] >= 'A' ? ((pString[i + 1] & 0xDF) - 'A') + 10 :
			(pString[i + 1] - '0'));
		bb = bb + ch;
	}
	return bb;

}

// ------------------------------------------------------------------------
bool __fastcall TryStrToDouble(AnsiString const &Str, int &Value) {
	try {
		Value = Str.ToInt();
	}
	catch (EConvertError const &E) {
		return false;
	}
	return true;
}

// ------------------------------------------------------------------------
bool isNumber(char *str)
{
	while (*str)
	{
		if (!isdigit(*str) && *str != '.' && *str != '-') return false;
		str++;
	}
	return true;
}
// ------------------------------------------------------------------------

AnsiString myEncrypt(char str[], char key[])
{
	AnsiString Enc = "";
	unsigned int i = 0;
	for (unsigned int x = 0; x < strlen(str); x++)
	{
		if (i > strlen(key)) i = 0;
		str[x] = str[x] + key[i];
		Enc = Enc + IntToHex(Byte(str[x]), 2);
		i++;
	}
	return Enc;
}

// ------------------------------------------------------------------------
AnsiString ComputerName()
{
	DWORD size;

	char computername[MAX_COMPUTERNAME_LENGTH];
	size = MAX_COMPUTERNAME_LENGTH;
	GetComputerName(computername, &size);
	return AnsiString(computername);
}

// ------------------------------------------------------------------------
AnsiString UserName()
{
	DWORD size;
	// get user
	char name[MAX_PATH];
	size = MAX_PATH;
	GetUserName(name, &size);
	return AnsiString(name);
}

//
// ------------------------------------------------------------------------
//
int SaveLog(AnsiString form1, AnsiString Type1, AnsiString vDesc,AnsiString userID)
{
	TDateTime curDate = Now();
	AnsiString curHDate = GetOADate(curDate);

	AnsiString sql1 = "INSERT INTO logmain (logPostDateA,logPostDateE,logPostComputer,logPostUserName,";
	sql1 = sql1 + "logPostForm,logPostType,logDesc,logUserID) VALUES ('" + curHDate + "','";
	sql1 = sql1 + ToDBGregDateTime(curDate) + "','" + ComputerName() + "','" + UserName();
	sql1 = sql1 + "'," + form1 + "," + Type1 + ",'" + vDesc + "'," + userID + ")";
	CommandSQL(sql1);

	return 0;
}
// ------------------------------------------------------------------------

AnsiString FormatByteSize(long double bytes)
{
	const long B = 1; // byte
	const long KB = 1024 * B; // kilobyte
	const long MB = 1024 * KB; // megabyte
	const long GB = 1024 * MB; // gigabyte
	if (bytes > GB)
	{
		return FormatFloat("#.##GB ", bytes / GB);
	}
	else if (bytes > MB)
	{
		return FormatFloat("#.##MB", bytes / MB);
	}
	else
	{
		if (bytes > KB)
		{
			WideString fmt = "#.##KB";
			return FormatFloat(fmt, bytes / KB);
		}
		else
		{
			WideString fmt = "#.##Bytes ";
			return FormatFloat(fmt, bytes);
		}
		//return 0;
	}
}

// -------------------------------------------------------------------------
AnsiString getUserID(AnsiString strCivilCard)
{
	AnsiString str1 = "SELECT userID FROM users WHERE userLogID = '" + strCivilCard + "'";
	TFDConnection *connDB = new TFDConnection(NULL);
	TFDQuery *Q = SelectQ(str1, connDB);
	if (Q->RecordCount > 0)
	{
		AnsiString ID = Q->FieldByName("userID")->AsString;
		return ID;
	}
	return 0;
}

// -------------------------------------------------------------------------
AnsiString checkUserInCommMembers(AnsiString strCivilCard, AnsiString commID)
{

	AnsiString str1 = "SELECT users.userLogID FROM meetingCommMembers ";
	str1 += "LEFT JOIN users ON users.userID = meetingCommMembers.userID ";
	str1 += "WHERE users.userLogID = '" + strCivilCard + "' AND commID=" + commID;
	TFDConnection *connDB = new TFDConnection(NULL);
	TFDQuery *Q = SelectQ(str1, connDB);
	if (Q->RecordCount > 0) {
		AnsiString ID = Q->FieldByName("userLogID")->AsString;
		return ID;
	}
	return 0;
}

int SendInternalEmail() {
	// IdSMTP1->Username = "a.alheraki@alharam.com";
	// IdSMTP1->Password = "#Amsco999";
	// IdSMTP1->Host = "mail-server.alharam.com";
	// IdSMTP1->Port = 25;
	//
	// TIdMessage *IdMessage1 = new TIdMessage(NULL);
	//
	// AnsiString msg1 = "";
	// msg1 = "مرحبا بك في بنظام الأعمال و الوثائق من قسم التطوير الإداري";
	//
	// IdMessage1->ContentType = "text/html";
	// IdMessage1->Encoding = meMIME;
	//
	// IdMessage1->CharSet = "windows-1256";
	// IdMessage1->Subject = "تسجيل في البرنامج";
	// IdMessage1->Body->Add(msg1);
	//
	// IdMessage1->From->Text = "a.alheraki@alharam.com";
	// IdMessage1->From->Name = "برنامج حفظ و أرشفة الوثائق";
	// IdMessage1->Recipients->EMailAddresses = "albara@alharam.com";
	// try {
	//
	// IdSMTP1->Authenticate();
	// IdSMTP1->Connect();
	// IdSMTP1->Send(IdMessage1);
	// IdSMTP1->Disconnect();
	// this->Cursor = crDefault;
	// }
	// catch (Exception &e) {
	// ShowMessage(
	// "حدثت مشكلة أثناء الاتصال بالإنترنت - الرجاء التأكد من اتصالك بالإنترنت ثم أعد المحاولة");
	// this->Cursor = crDefault;
	// return;
	// }
	return 0;
}

//---------------------------------------------------------------------------

AnsiString getHijriDate(TAdvDateTimePicker *dtp,int db)
{
	wchar_t cTime[95];
	AnsiString t = dtp->GetTextBuf(cTime,95);
	AnsiString time = dtp->Time.TimeString();
	AnsiString All = AnsiString(cTime) + " " + time;
	return All;
}
//--------------------------------------------------------------
AnsiString GetOAlQuraDateNow()
{
	TAdvDateTimePicker *dtp = new TAdvDateTimePicker(Application);
	dtp->DateTime = Now();
	AnsiString ss;
	wchar_t *pp;
	pp = StrAlloc(20);
	dtp->GetTextBuf(pp,20);
	ss = pp ;
	AnsiString dd1 = StringReplace(ss,"/","",TReplaceFlags() << rfReplaceAll);
	dd1 = StringReplace(dd1," ","",TReplaceFlags() << rfReplaceAll);
	return dd1 + GetTime(dtp->Time);
}
//---------------------------------------------------------------------------
AnsiString GetOADate(TDateTime hd)
{

	const int MAX_STR = 30;
	char strDate[MAX_STR];
	char strTime[MAX_STR];

	SYSTEMTIME SystemTime;
	unsigned short Y,M,D,Hours,Minutes,Seconds,ss;
	hd.DecodeDate(&Y, &M, &D);
	hd.DecodeTime(&Hours, &Minutes, &Seconds,&ss);

	SystemTime.wYear = Y;
	SystemTime.wMonth = M;
	SystemTime.wDay = D;
	SystemTime.wHour = Hours;
	SystemTime.wMinute = Minutes;
	SystemTime.wSecond = Seconds;
	SystemTime.wMilliseconds = ss;


	GetDateFormat(0x0401, 0,&SystemTime,"yyyy/MM/dd",strDate,MAX_STR);
	GetTimeFormat(0x0401, 0,&SystemTime,"HH:mm:ss",strTime,MAX_STR);
	AnsiString r = strDate;
	r = r + strTime;
	r = StringReplace(r,"/","",TReplaceFlags() << rfReplaceAll);
	r = StringReplace(r," ","",TReplaceFlags() << rfReplaceAll);
	r = StringReplace(r,":","",TReplaceFlags() << rfReplaceAll);
	return r;
}

TDateTime GetOAToGregDate(AnsiString hd)
{

	AnsiString d1 = hd.SubString(0,4) + "-" + hd.SubString(7,2) + "-" + hd.SubString(5,2);
   AnsiString sqlStr = " SELECT convert(date,'" + d1 + "', 131) gd FROM users ";
   TFDConnection *connDB = new TFDConnection(NULL);
   TFDQuery *Q = SelectQ(sqlStr, connDB);
   Q->First();
	TDateTime ddd = Q->FieldByName("gd")->AsDateTime;
	connDB->Close();
	return ddd;

}


TDateTime GetGregToOADate(AnsiString hd)
{
	TFDConnection *connDB = new TFDConnection(NULL);
	AnsiString d1 = hd.SubString(0,4) + "-" + hd.SubString(7,2) + "-" + hd.SubString(5,2);
   AnsiString sqlStr = " SELECT convert(date,'" + d1 + "', 131) gd FROM users ";
   TFDQuery *Q = SelectQ(sqlStr, connDB);
   Q->First();
	TDateTime ddd = Q->FieldByName("gd")->AsDateTime;
	connDB->Close();
	return ddd.DateString();

}


TDateTime GetOAToGregDateTime(AnsiString hd)
{
	TFDConnection *connDB = new TFDConnection(NULL);
	AnsiString d1 = hd.SubString(7,2) + "-" + hd.SubString(5,2) + "-" + hd.SubString(0,4) + " ";
			d1 = d1 + hd.SubString(9,2) + ":" + hd.SubString(11,2) + ":" + hd.SubString(13,2);
   AnsiString sqlStr = "SELECT top 1 (Format(convert(datetime,'" + d1 + "', 131),'dd/MM/yyyy HH:MM', 'en-us')) gd FROM users  ";

	TFDQuery *Q1 = SelectQ(sqlStr, connDB);
	TDateTime ddd = Q1->FieldByName("gd")->AsDateTime;
    connDB->Close();
	return ddd.DateString();

}


TDateTime GetGregToOADateTime(AnsiString hd)
{
	TFDConnection *connDB = new TFDConnection(NULL);
	AnsiString d1 = hd.SubString(7,2) + "-" + hd.SubString(5,2) + "-" + hd.SubString(0,4) + " ";
			d1 = d1 + hd.SubString(9,2) + ":" + hd.SubString(11,2) + ":" + hd.SubString(13,2);
   AnsiString sqlStr = "SELECT top 1 (Format(convert(datetime,'" + d1 + "', 131),'dd/MM/yyyy HH:MM', 'ar-sa')) gd FROM users  ";
   TFDQuery *Q1 = SelectQ(sqlStr, connDB);

	TDateTime ddd = Q1->FieldByName("gd")->AsDateTime;
    connDB->Close();
	return ddd.DateString();

}

TDateTime GetDateTime(AnsiString hd)
{
	TFDConnection *connDB = new TFDConnection(NULL);
	UnicodeString d1 = hd.SubString(0,4) + hd.SubString(5,2) + hd.SubString(7,2) + " ";
			d1 = d1 + hd.SubString(9,2) + ":" + hd.SubString(11,2) + ":" + hd.SubString(13,2);
   AnsiString sqlStr = "SELECT top 1 CONVERT(varchar, CONVERT(datetime, '" + d1 + "'), 120) gd FROM users  ";

	TFDQuery *Q1 = SelectQ(sqlStr, connDB);
	TDateTime ddd = StrToDateTime(Q1->FieldByName("gd")->AsAnsiString);
    connDB->Close();
	return ddd.DateTimeString();

}

//==============================================================================

void Repaire()
{
  try
  {
	TFDConnection *connDB = new TFDConnection(NULL);
	connDB->Params->Database = FMain->DataFile;
	connDB->Open();
	connDB->ExecSQL("PRAGMA page_size=16384");
	connDB->ExecSQL("VACUUM");
	connDB->Close();

  }catch(Exception &e)
  {
	  ShowMessage(e.Message);
  }
}
