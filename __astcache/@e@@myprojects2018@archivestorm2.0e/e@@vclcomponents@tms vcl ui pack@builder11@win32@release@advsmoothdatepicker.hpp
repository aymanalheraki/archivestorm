// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AdvSmoothDatePicker.pas' rev: 35.00 (Windows)

#ifndef AdvsmoothdatepickerHPP
#define AdvsmoothdatepickerHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <AdvSmoothEditButton.hpp>
#include <AdvSmoothCalendar.hpp>
#include <AdvStyleIF.hpp>
#include <GDIPFill.hpp>
#include <System.Variants.hpp>
#include <System.Types.hpp>
#include <Vcl.Themes.hpp>
#include <System.UITypes.hpp>
#include <AdvSmoothEdit.hpp>
#include <Vcl.Mask.hpp>

//-- user supplied -----------------------------------------------------------

namespace Advsmoothdatepicker
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TAdvSmoothDatePickerCalendar;
class DELPHICLASS TDropDownForm;
class DELPHICLASS TAdvSmoothDatePicker;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TAdvSmoothDatePickerCalendar : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	TAdvSmoothDatePicker* FOwner;
	Advsmoothcalendar::TAdvSmoothCalendarHeader* FHeader;
	Advsmoothcalendar::TAdvSmoothCalendarDateAppearance* FDateAppearance;
	Advsmoothcalendar::TAdvSmoothCalendarFooter* FFooter;
	Gdipfill::TGDIPFill* FFill;
	int FWidth;
	int FHeight;
	System::TDate FMaxDate;
	bool FAnimation;
	System::TDate FMinDate;
	bool FShowCurrentDate;
	Gdipfill::TGDIPStatus* FStatusAppearance;
	bool FShowHint;
	
protected:
	void __fastcall DateAppearanceChanged(System::TObject* Sender);
	void __fastcall FillChanged(System::TObject* Sender);
	void __fastcall FooterChanged(System::TObject* Sender);
	void __fastcall HeaderChanged(System::TObject* Sender);
	void __fastcall WidthChanged(System::TObject* Sender);
	void __fastcall HeightChanged(System::TObject* Sender);
	void __fastcall ShowCurrentDateChanged(System::TObject* Sender);
	void __fastcall StatusAppearanceChanged(System::TObject* Sender);
	void __fastcall AnimationChanged(System::TObject* Sender);
	void __fastcall MaxDateChanged(System::TObject* Sender);
	void __fastcall MinDateChanged(System::TObject* Sender);
	void __fastcall ShowHintChanged(System::TObject* Sender);
	void __fastcall Update();
	
public:
	__fastcall TAdvSmoothDatePickerCalendar(TAdvSmoothDatePicker* AOwner);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__fastcall virtual ~TAdvSmoothDatePickerCalendar();
	
__published:
	__property Gdipfill::TGDIPFill* Fill = {read=FFill, write=FFill};
	__property System::TDate MinDate = {read=FMinDate, write=FMinDate};
	__property System::TDate MaxDate = {read=FMaxDate, write=FMaxDate};
	__property bool Animation = {read=FAnimation, write=FAnimation, nodefault};
	__property bool ShowCurrentDate = {read=FShowCurrentDate, write=FShowCurrentDate, nodefault};
	__property Advsmoothcalendar::TAdvSmoothCalendarDateAppearance* DateAppearance = {read=FDateAppearance, write=FDateAppearance};
	__property Gdipfill::TGDIPStatus* StatusAppearance = {read=FStatusAppearance, write=FStatusAppearance};
	__property Advsmoothcalendar::TAdvSmoothCalendarFooter* Footer = {read=FFooter, write=FFooter};
	__property Advsmoothcalendar::TAdvSmoothCalendarHeader* Header = {read=FHeader, write=FHeader};
	__property int Width = {read=FWidth, write=FWidth, nodefault};
	__property int Height = {read=FHeight, write=FHeight, nodefault};
	__property bool ShowHint = {read=FShowHint, write=FShowHint, nodefault};
};


class PASCALIMPLEMENTATION TDropDownForm : public Vcl::Forms::TForm
{
	typedef Vcl::Forms::TForm inherited;
	
protected:
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
public:
	/* TCustomForm.Create */ inline __fastcall virtual TDropDownForm(System::Classes::TComponent* AOwner) : Vcl::Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TDropDownForm(System::Classes::TComponent* AOwner, int Dummy) : Vcl::Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TDropDownForm() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TDropDownForm(HWND ParentWindow) : Vcl::Forms::TForm(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TAdvSmoothDatePicker : public Advsmootheditbutton::TAdvSmoothEditBtn
{
	typedef Advsmootheditbutton::TAdvSmoothEditBtn inherited;
	
private:
	Advstyleif::TTMSStyle FTMSStyle;
	Vcl::Extctrls::TTimer* FTimer;
	System::TDateTime FTime;
	bool FDesignTime;
	Advsmoothcalendar::TAdvSmoothCalendar* FCal;
	bool FDeactivating;
	bool FIgnoreSelect;
	TDropDownForm* CalParent;
	bool CancelThisBtnClick;
	bool FHideCalendarAfterSelection;
	Advsmoothcalendar::TAdvSmoothCalendarDateSelectedEvent FOnDaySelect;
	TAdvSmoothDatePickerCalendar* FCalendar;
	Advsmoothcalendar::TAdvSmoothCalendarDateFillEvent FOnDateFill;
	Advsmoothcalendar::TAdvSmoothCalendarGetDateStatusEvent FOnDateStatus;
	Advsmoothcalendar::TAdvSmoothCalendarDateHintEvent FOnDateHint;
	Advsmoothcalendar::TAdvSmoothCalendarYearRangeChangedEvent FOnYearRangeChanged;
	Advsmoothcalendar::TAdvSmoothCalendarYearChangedEvent FOnYearChanged;
	Advsmoothcalendar::TAdvSmoothCalendarCurrentDayClickEvent FOnCurrentDayClick;
	Advsmoothcalendar::TAdvSmoothCalendarDateModeChangedEvent FOnDateModeChanged;
	Advsmoothcalendar::TAdvSmoothCalendarMonthChangedEvent FOnMonthChanged;
	System::UnicodeString FFormat;
	Advsmoothcalendar::TAdvSmoothCalendarGetYearNameEvent FOnGetYearName;
	Advsmoothcalendar::TAdvSmoothCalendarGetWeekDayNameEvent FOnGetWeekDayName;
	Advsmoothcalendar::TAdvSmoothCalendarGetTextEvent FOnGetHeaderText;
	Advsmoothcalendar::TAdvSmoothCalendarNormalDateFillEvent FOnMonthFill;
	Advsmoothcalendar::TAdvSmoothCalendarGetMonthNameEvent FOnGetMonthName;
	Advsmoothcalendar::TAdvSmoothCalendarGetTextEvent FOnGetFooterText;
	Advsmoothcalendar::TAdvSmoothCalendarNormalDateFillEvent FOnYearFill;
	MESSAGE void __fastcall WMGetDlgCode(Winapi::Messages::TWMNoParams &Message);
	MESSAGE void __fastcall CMStyleChanged(Winapi::Messages::TMessage &Message);
	void __fastcall HideParent();
	void __fastcall InitEvents();
	Vcl::Controls::TWinControl* __fastcall GetParentEx();
	void __fastcall SetParentEx(Vcl::Controls::TWinControl* const Value);
	System::TDateTime __fastcall GetDate();
	void __fastcall SetDate(const System::TDateTime Value);
	void __fastcall SetCalendar(TAdvSmoothDatePickerCalendar* const Value);
	void __fastcall SetFormat(const System::UnicodeString Value);
	void __fastcall SetUIStyle(const Advstyleif::TTMSStyle Value);
	
protected:
	void __fastcall ReadTMSStyle(System::Classes::TReader* Reader);
	void __fastcall WriteTMSStyle(System::Classes::TWriter* Writer);
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual int __fastcall GetVersionNr();
	virtual void __fastcall BtnClick(System::TObject* Sender);
	void __fastcall CalParentDeactivate(System::TObject* Sender);
	void __fastcall CalendarDateFill(System::TObject* Sender, Gdipfill::TGDIPFill* AFill, Vcl::Graphics::TFont* AFont, System::TDateTime Date, Advsmoothcalendar::TAdvSmoothCalendarDateKind DateKind);
	void __fastcall CalendarDateHint(System::TObject* Sender, System::TDateTime Date, System::UnicodeString &hint);
	void __fastcall CalendarDateStatus(System::TObject* Sender, System::TDateTime Date, System::UnicodeString &StatusMessage, Gdipfill::TGDIPStatus* Fill, int &OffsetX, int &OffsetY);
	void __fastcall CalendarGetHeaderText(System::TObject* Sender, System::UnicodeString &AText);
	void __fastcall CalendarGetFooterText(System::TObject* Sender, System::UnicodeString &AText);
	void __fastcall CalendarGetWeekDayName(System::TObject* Sender, int WeekDay, System::UnicodeString &WeekDayName);
	void __fastcall CalendarGetMonthName(System::TObject* Sender, int Month, System::UnicodeString &MonthName);
	void __fastcall CalendarGetYearName(System::TObject* Sender, int Year, System::UnicodeString &YearName);
	void __fastcall CalendarMonthFill(System::TObject* Sender, Gdipfill::TGDIPFill* AFill, Vcl::Graphics::TFont* AFont, System::TDateTime Date, Advsmoothcalendar::TAdvSmoothCalendarDateKind DateKind);
	void __fastcall CalendarYearFill(System::TObject* Sender, Gdipfill::TGDIPFill* AFill, Vcl::Graphics::TFont* AFont, System::TDateTime Date, Advsmoothcalendar::TAdvSmoothCalendarDateKind DateKind);
	void __fastcall CalendarCurrentDateClick(System::TObject* Sender, bool &allow);
	void __fastcall CalendarChangeMonth(System::TObject* Sender, int Month);
	void __fastcall CalendarChangeYear(System::TObject* Sender, int Year);
	void __fastcall CalendarChangeYearRange(System::TObject* Sender, int YearFrom, int YearTo);
	void __fastcall CalendarChangeMode(System::TObject* Sender, Advsmoothcalendar::TAdvSmoothCalendarDateMode Mode, Advsmoothcalendar::TAdvSmoothCalendarDateMode ModeTo, bool &allow);
	virtual void __fastcall CalendarDaySelect(System::TObject* Sender, Advsmoothcalendar::TAdvSmoothCalendarDateMode Mode, System::TDateTime Date);
	void __fastcall CalendarKeyPress(System::TObject* Sender, System::WideChar &Key);
	void __fastcall CalendarKeyDown(System::TObject* Sender, System::Word &Key, System::Classes::TShiftState Shift);
	void __fastcall CalendarKeyUp(System::TObject* Sender, System::Word &Key, System::Classes::TShiftState Shift);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Winapi::Messages::TWMSetFocus &Message);
	virtual void __fastcall Loaded();
	DYNAMIC void __fastcall Change();
	DYNAMIC void __fastcall DoExit();
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall CreateWnd();
	void __fastcall TimerEvent(System::TObject* Sender);
	__property Advsmoothcalendar::TAdvSmoothCalendar* Cal = {read=FCal, write=FCal};
	
public:
	__fastcall virtual TAdvSmoothDatePicker(System::Classes::TComponent* AOwner);
	void __fastcall CancelBtnClick();
	__fastcall virtual ~TAdvSmoothDatePicker();
	virtual void __fastcall DropDown();
	virtual void __fastcall CloseDropDown();
	__property Vcl::Controls::TWinControl* Parent = {read=GetParentEx, write=SetParentEx};
	void __fastcall SetComponentStyle(Advstyleif::TTMSStyle AStyle);
	Advstyleif::TTMSStyle __fastcall GetComponentStyle();
	void __fastcall SetColorTones(const Advstyleif::TColorTones &ATones);
	void __fastcall SaveToTheme(System::UnicodeString FileName);
	void __fastcall LoadFromTheme(System::UnicodeString FileName);
	System::UnicodeString __fastcall GetThemeID();
	virtual bool __fastcall IsDropDownVisible();
	
__published:
	__property StyleElements = {default=7};
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property bool HideCalendarAfterSelection = {read=FHideCalendarAfterSelection, write=FHideCalendarAfterSelection, nodefault};
	__property Advsmoothcalendar::TAdvSmoothCalendarDateSelectedEvent OnSelectDate = {read=FOnDaySelect, write=FOnDaySelect};
	__property Advsmoothcalendar::TAdvSmoothCalendarDateFillEvent OnDateFill = {read=FOnDateFill, write=FOnDateFill};
	__property Advsmoothcalendar::TAdvSmoothCalendarGetDateStatusEvent OnDateStatus = {read=FOnDateStatus, write=FOnDateStatus};
	__property Advsmoothcalendar::TAdvSmoothCalendarDateHintEvent OnDateHint = {read=FOnDateHint, write=FOnDateHint};
	__property Advsmoothcalendar::TAdvSmoothCalendarDateModeChangedEvent OnDateModeChanged = {read=FOnDateModeChanged, write=FOnDateModeChanged};
	__property Advsmoothcalendar::TAdvSmoothCalendarMonthChangedEvent OnMonthChanged = {read=FOnMonthChanged, write=FOnMonthChanged};
	__property Advsmoothcalendar::TAdvSmoothCalendarYearChangedEvent OnYearChanged = {read=FOnYearChanged, write=FOnYearChanged};
	__property Advsmoothcalendar::TAdvSmoothCalendarYearRangeChangedEvent OnYearRangeChanged = {read=FOnYearRangeChanged, write=FOnYearRangeChanged};
	__property Advsmoothcalendar::TAdvSmoothCalendarCurrentDayClickEvent OnCurrentDayClick = {read=FOnCurrentDayClick, write=FOnCurrentDayClick};
	__property Advsmoothcalendar::TAdvSmoothCalendarGetTextEvent OnGetHeaderText = {read=FOnGetHeaderText, write=FOnGetHeaderText};
	__property Advsmoothcalendar::TAdvSmoothCalendarGetTextEvent OnGetFooterText = {read=FOnGetFooterText, write=FOnGetFooterText};
	__property Advsmoothcalendar::TAdvSmoothCalendarGetWeekDayNameEvent OnGetWeekDayName = {read=FOnGetWeekDayName, write=FOnGetWeekDayName};
	__property Advsmoothcalendar::TAdvSmoothCalendarGetMonthNameEvent OnGetMonthName = {read=FOnGetMonthName, write=FOnGetMonthName};
	__property Advsmoothcalendar::TAdvSmoothCalendarGetYearNameEvent OnGetYearName = {read=FOnGetYearName, write=FOnGetYearName};
	__property Advsmoothcalendar::TAdvSmoothCalendarNormalDateFillEvent OnMonthFill = {read=FOnMonthFill, write=FOnMonthFill};
	__property Advsmoothcalendar::TAdvSmoothCalendarNormalDateFillEvent OnYearFill = {read=FOnYearFill, write=FOnYearFill};
	__property System::UnicodeString Format = {read=FFormat, write=SetFormat};
	__property TAdvSmoothDatePickerCalendar* Calendar = {read=FCalendar, write=SetCalendar};
	__property System::TDateTime Date = {read=GetDate, write=SetDate};
	__property Advstyleif::TTMSStyle UIStyle = {read=FTMSStyle, write=SetUIStyle, default=8};
public:
	/* TWinControl.CreateParented */ inline __fastcall TAdvSmoothDatePicker(HWND ParentWindow) : Advsmootheditbutton::TAdvSmoothEditBtn(ParentWindow) { }
	
private:
	void *__ITMSTones;	// Advstyleif::ITMSTones 
	void *__ITMSStyle;	// Advstyleif::ITMSStyle 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {1F492643-6699-4F25-8B34-3233FA735036}
	operator Advstyleif::_di_ITMSTones()
	{
		Advstyleif::_di_ITMSTones intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Advstyleif::ITMSTones*(void) { return (Advstyleif::ITMSTones*)&__ITMSTones; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {11AC2DDC-C087-4298-AB6E-EA1B5017511B}
	operator Advstyleif::_di_ITMSStyle()
	{
		Advstyleif::_di_ITMSStyle intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Advstyleif::ITMSStyle*(void) { return (Advstyleif::ITMSStyle*)&__ITMSStyle; }
	#endif
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::Int8 MAJ_VER = System::Int8(0x2);
static const System::Int8 MIN_VER = System::Int8(0x6);
static const System::Int8 REL_VER = System::Int8(0x2);
static const System::Int8 BLD_VER = System::Int8(0x0);
}	/* namespace Advsmoothdatepicker */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ADVSMOOTHDATEPICKER)
using namespace Advsmoothdatepicker;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AdvsmoothdatepickerHPP
