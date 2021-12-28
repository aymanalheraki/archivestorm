// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AdvSmoothCalendar.pas' rev: 35.00 (Windows)

#ifndef AdvsmoothcalendarHPP
#define AdvsmoothcalendarHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Vcl.Forms.hpp>
#include <Winapi.Windows.hpp>
#include <System.SysUtils.hpp>
#include <Vcl.Graphics.hpp>
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Winapi.Messages.hpp>
#include <GDIPFill.hpp>
#include <System.Math.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <AdvStyleIF.hpp>
#include <AdvGDIP.hpp>
#include <Vcl.ComCtrls.hpp>
#include <System.DateUtils.hpp>
#include <System.Types.hpp>
#include <System.UITypes.hpp>
#include <Vcl.Themes.hpp>
#include <Vcl.Menus.hpp>

//-- user supplied -----------------------------------------------------------

namespace Advsmoothcalendar
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TWinCtrl;
class DELPHICLASS TAdvSmoothCalendarHeader;
class DELPHICLASS TAdvSmoothCalendarFooter;
class DELPHICLASS TAdvSmoothCalendarDateWeekNumbers;
class DELPHICLASS TAdvSmoothCalendarDateAppearance;
class DELPHICLASS TDisjunctDateTimeItem;
class DELPHICLASS TDisjunctDateTimeArray;
struct TDateStatus;
class DELPHICLASS TAdvSmoothCalendar;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TWinCtrl : public Vcl::Controls::TWinControl
{
	typedef Vcl::Controls::TWinControl inherited;
	
public:
	void __fastcall PaintCtrls(HDC DC, Vcl::Controls::TControl* First);
public:
	/* TWinControl.Create */ inline __fastcall virtual TWinCtrl(System::Classes::TComponent* AOwner) : Vcl::Controls::TWinControl(AOwner) { }
	/* TWinControl.CreateParented */ inline __fastcall TWinCtrl(HWND ParentWindow) : Vcl::Controls::TWinControl(ParentWindow) { }
	/* TWinControl.Destroy */ inline __fastcall virtual ~TWinCtrl() { }
	
};


enum DECLSPEC_DENUM TAdvSmoothCalendarCaptionLocation : unsigned char { cpTopLeft, cpTopRight, cpTopCenter, cpCenterLeft, cpCenterRight, cpCenterCenter, cpBottomLeft, cpBottomRight, cpBottomCenter, cpCustom };

class PASCALIMPLEMENTATION TAdvSmoothCalendarHeader : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	TAdvSmoothCalendar* FOwner;
	TAdvSmoothCalendarCaptionLocation FCaptionPosition;
	Vcl::Graphics::TFont* FFont;
	int FHeight;
	System::Classes::TNotifyEvent FOnChange;
	bool FVisible;
	int FCaptionTop;
	int FCaptionLeft;
	Gdipfill::TGDIPFill* FFill;
	bool FArrowsVisible;
	System::Uitypes::TColor FArrowColor;
	int FArrowSize;
	bool FUpDownVisible;
	void __fastcall SetCaptionLeft(const int Value);
	void __fastcall SetCaptionPosition(const TAdvSmoothCalendarCaptionLocation Value);
	void __fastcall SetCaptionTop(const int Value);
	void __fastcall SetFill(Gdipfill::TGDIPFill* const Value);
	void __fastcall SetFont(Vcl::Graphics::TFont* const Value);
	void __fastcall SetHeight(const int Value);
	void __fastcall SetVisible(const bool Value);
	void __fastcall SetArrowColor(const System::Uitypes::TColor Value);
	void __fastcall SetArrowsVisible(const bool Value);
	void __fastcall SetArrowSize(const int Value);
	void __fastcall SetUpDownVisible(const bool Value);
	
protected:
	void __fastcall Changed();
	void __fastcall FontChanged(System::TObject* Sender);
	void __fastcall FillChanged(System::TObject* Sender);
	int __fastcall GetHeight();
	
public:
	__fastcall TAdvSmoothCalendarHeader(TAdvSmoothCalendar* AOwner);
	__fastcall virtual ~TAdvSmoothCalendarHeader();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property Gdipfill::TGDIPFill* Fill = {read=FFill, write=SetFill};
	__property bool UpDownVisible = {read=FUpDownVisible, write=SetUpDownVisible, default=1};
	__property System::Uitypes::TColor ArrowColor = {read=FArrowColor, write=SetArrowColor, default=16777215};
	__property bool ArrowsVisible = {read=FArrowsVisible, write=SetArrowsVisible, default=1};
	__property int ArrowSize = {read=FArrowSize, write=SetArrowSize, default=10};
	__property int Height = {read=FHeight, write=SetHeight, default=25};
	__property TAdvSmoothCalendarCaptionLocation CaptionPosition = {read=FCaptionPosition, write=SetCaptionPosition, default=5};
	__property int CaptionLeft = {read=FCaptionLeft, write=SetCaptionLeft, default=0};
	__property int CaptionTop = {read=FCaptionTop, write=SetCaptionTop, default=0};
	__property Vcl::Graphics::TFont* Font = {read=FFont, write=SetFont};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property bool Visible = {read=FVisible, write=SetVisible, default=1};
};


class PASCALIMPLEMENTATION TAdvSmoothCalendarFooter : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	TAdvSmoothCalendar* FOwner;
	int FCaptionTop;
	int FCaptionLeft;
	TAdvSmoothCalendarCaptionLocation FCaptionPosition;
	Vcl::Graphics::TFont* FFont;
	bool FVisible;
	bool FCurrentDateCaption;
	System::UnicodeString FCurrentDateFormat;
	Gdipfill::TGDIPFill* FFill;
	int FHeight;
	System::Classes::TNotifyEvent FOnChange;
	System::UnicodeString FCaption;
	void __fastcall SetCaptionLeft(const int Value);
	void __fastcall SetCaptionPosition(const TAdvSmoothCalendarCaptionLocation Value);
	void __fastcall SetCaptionTop(const int Value);
	void __fastcall SetCurrentDateCaption(const bool Value);
	void __fastcall SetFill(Gdipfill::TGDIPFill* const Value);
	void __fastcall SetFont(Vcl::Graphics::TFont* const Value);
	void __fastcall SetHeight(const int Value);
	void __fastcall SetVisible(const bool Value);
	void __fastcall SetCaption(const System::UnicodeString Value);
	void __fastcall SetCurrentDateFormat(const System::UnicodeString Value);
	
protected:
	void __fastcall Changed();
	void __fastcall FontChanged(System::TObject* Sender);
	void __fastcall FillChanged(System::TObject* Sender);
	int __fastcall GetHeight();
	
public:
	__fastcall TAdvSmoothCalendarFooter(TAdvSmoothCalendar* AOwner);
	__fastcall virtual ~TAdvSmoothCalendarFooter();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property Gdipfill::TGDIPFill* Fill = {read=FFill, write=SetFill};
	__property int Height = {read=FHeight, write=SetHeight, default=25};
	__property System::UnicodeString Caption = {read=FCaption, write=SetCaption};
	__property TAdvSmoothCalendarCaptionLocation CaptionPosition = {read=FCaptionPosition, write=SetCaptionPosition, default=5};
	__property int CaptionLeft = {read=FCaptionLeft, write=SetCaptionLeft, default=0};
	__property int CaptionTop = {read=FCaptionTop, write=SetCaptionTop, default=0};
	__property Vcl::Graphics::TFont* Font = {read=FFont, write=SetFont};
	__property bool Visible = {read=FVisible, write=SetVisible, default=1};
	__property bool CurrentDateCaption = {read=FCurrentDateCaption, write=SetCurrentDateCaption, default=1};
	__property System::UnicodeString CurrentDateFormat = {read=FCurrentDateFormat, write=SetCurrentDateFormat};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
};


class PASCALIMPLEMENTATION TAdvSmoothCalendarDateWeekNumbers : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	TAdvSmoothCalendarDateAppearance* FOwner;
	Vcl::Graphics::TFont* FFont;
	bool FVisible;
	Gdipfill::TGDIPFill* FFill;
	System::Classes::TNotifyEvent FOnChange;
	int FWidth;
	void __fastcall SetFill(Gdipfill::TGDIPFill* const Value);
	void __fastcall SetFont(Vcl::Graphics::TFont* const Value);
	void __fastcall SetVisible(const bool Value);
	void __fastcall SetWidth(const int Value);
	
protected:
	void __fastcall Changed();
	void __fastcall FontChanged(System::TObject* Sender);
	void __fastcall FillChanged(System::TObject* Sender);
	
public:
	__fastcall TAdvSmoothCalendarDateWeekNumbers(TAdvSmoothCalendarDateAppearance* AOwner);
	__fastcall virtual ~TAdvSmoothCalendarDateWeekNumbers();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	void __fastcall AssignVisuals(System::Classes::TPersistent* Source);
	int __fastcall GetWidth();
	
__published:
	__property bool Visible = {read=FVisible, write=SetVisible, default=0};
	__property Vcl::Graphics::TFont* Font = {read=FFont, write=SetFont};
	__property Gdipfill::TGDIPFill* Fill = {read=FFill, write=SetFill};
	__property int Width = {read=FWidth, write=SetWidth, default=30};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
};


enum DECLSPEC_DENUM TAdvSmoothCalendarStartDay : unsigned char { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

class PASCALIMPLEMENTATION TAdvSmoothCalendarDateAppearance : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	TAdvSmoothCalendar* FOwner;
	Gdipfill::TGDIPFill* FDayOfWeekFill;
	Vcl::Graphics::TFont* FSelectedDateFont;
	Vcl::Graphics::TFont* FDateFont;
	Gdipfill::TGDIPFill* FSelectedDateFill;
	Vcl::Graphics::TFont* FCurrentDateFont;
	Vcl::Graphics::TFont* FHoverDateFont;
	Gdipfill::TGDIPFill* FDateFill;
	Gdipfill::TGDIPFill* FCurrentDateFill;
	Gdipfill::TGDIPFill* FHoverDateFill;
	Vcl::Graphics::TFont* FDayOfWeekFont;
	System::Classes::TNotifyEvent FOnChange;
	TAdvSmoothCalendarDateWeekNumbers* FWeekNumbers;
	Vcl::Graphics::TFont* FMonthFont;
	Vcl::Graphics::TFont* FYearFont;
	TAdvSmoothCalendarStartDay FStartDay;
	Vcl::Graphics::TFont* FDisabledDateFont;
	Gdipfill::TGDIPFill* FDisabledDateFill;
	Vcl::Graphics::TFont* FWeekendFont;
	Gdipfill::TGDIPFill* FWeekendFill;
	bool FShowDaysBefore;
	bool FShowDaysAfter;
	Gdipfill::TGDIPFill* FDateBeforeFill;
	Gdipfill::TGDIPFill* FDateAfterFill;
	Vcl::Graphics::TFont* FDateAfterFont;
	Vcl::Graphics::TFont* FDateBeforeFont;
	void __fastcall SetCurrentDateFill(Gdipfill::TGDIPFill* const Value);
	void __fastcall SetCurrentDateFont(Vcl::Graphics::TFont* const Value);
	void __fastcall SetDateFill(Gdipfill::TGDIPFill* const Value);
	void __fastcall SetDateFont(Vcl::Graphics::TFont* const Value);
	void __fastcall SetDayOfWeekFill(Gdipfill::TGDIPFill* const Value);
	void __fastcall SetDayOfWeekFont(Vcl::Graphics::TFont* const Value);
	void __fastcall SetHoverDateFill(Gdipfill::TGDIPFill* const Value);
	void __fastcall SetHoverDateFont(Vcl::Graphics::TFont* const Value);
	void __fastcall SetSelectedDateFill(Gdipfill::TGDIPFill* const Value);
	void __fastcall SetSelectedDateFont(Vcl::Graphics::TFont* const Value);
	void __fastcall SetWeekNumbers(TAdvSmoothCalendarDateWeekNumbers* const Value);
	void __fastcall SetMonthFont(Vcl::Graphics::TFont* const Value);
	void __fastcall SetYearFont(Vcl::Graphics::TFont* const Value);
	void __fastcall SetStartDay(const TAdvSmoothCalendarStartDay Value);
	void __fastcall SetDisabledDateFill(Gdipfill::TGDIPFill* const Value);
	void __fastcall SetDisabledDateFont(Vcl::Graphics::TFont* const Value);
	void __fastcall SetWeekendFill(Gdipfill::TGDIPFill* const Value);
	void __fastcall SetWeekendFont(Vcl::Graphics::TFont* const Value);
	void __fastcall SetShowDaysAfter(const bool Value);
	void __fastcall SetShowDaysBefore(const bool Value);
	void __fastcall SetDateAfterFill(Gdipfill::TGDIPFill* const Value);
	void __fastcall SetDateBeforeFill(Gdipfill::TGDIPFill* const Value);
	void __fastcall SetDateAfterFont(Vcl::Graphics::TFont* const Value);
	void __fastcall SetDateBeforeFont(Vcl::Graphics::TFont* const Value);
	
protected:
	void __fastcall Changed();
	void __fastcall FontChanged(System::TObject* Sender);
	void __fastcall FillChanged(System::TObject* Sender);
	void __fastcall WeekNumbersChanged(System::TObject* Sender);
	
public:
	__fastcall TAdvSmoothCalendarDateAppearance(TAdvSmoothCalendar* AOwner);
	__fastcall virtual ~TAdvSmoothCalendarDateAppearance();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	void __fastcall AssignVisuals(System::Classes::TPersistent* Source);
	
__published:
	__property Vcl::Graphics::TFont* DateFont = {read=FDateFont, write=SetDateFont};
	__property Gdipfill::TGDIPFill* DateFill = {read=FDateFill, write=SetDateFill};
	__property Vcl::Graphics::TFont* DayOfWeekFont = {read=FDayOfWeekFont, write=SetDayOfWeekFont};
	__property Gdipfill::TGDIPFill* DayOfWeekFill = {read=FDayOfWeekFill, write=SetDayOfWeekFill};
	__property Vcl::Graphics::TFont* SelectedDateFont = {read=FSelectedDateFont, write=SetSelectedDateFont};
	__property Gdipfill::TGDIPFill* SelectedDateFill = {read=FSelectedDateFill, write=SetSelectedDateFill};
	__property Vcl::Graphics::TFont* CurrentDateFont = {read=FCurrentDateFont, write=SetCurrentDateFont};
	__property Gdipfill::TGDIPFill* CurrentDateFill = {read=FCurrentDateFill, write=SetCurrentDateFill};
	__property Gdipfill::TGDIPFill* WeekendFill = {read=FWeekendFill, write=SetWeekendFill};
	__property Vcl::Graphics::TFont* WeekendFont = {read=FWeekendFont, write=SetWeekendFont};
	__property Vcl::Graphics::TFont* HoverDateFont = {read=FHoverDateFont, write=SetHoverDateFont};
	__property Gdipfill::TGDIPFill* HoverDateFill = {read=FHoverDateFill, write=SetHoverDateFill};
	__property Vcl::Graphics::TFont* MonthDateFont = {read=FMonthFont, write=SetMonthFont};
	__property Vcl::Graphics::TFont* YearDateFont = {read=FYearFont, write=SetYearFont};
	__property TAdvSmoothCalendarDateWeekNumbers* WeekNumbers = {read=FWeekNumbers, write=SetWeekNumbers};
	__property TAdvSmoothCalendarStartDay StartDay = {read=FStartDay, write=SetStartDay, default=0};
	__property Vcl::Graphics::TFont* DisabledDateFont = {read=FDisabledDateFont, write=SetDisabledDateFont};
	__property Gdipfill::TGDIPFill* DisabledDateFill = {read=FDisabledDateFill, write=SetDisabledDateFill};
	__property bool ShowDaysBefore = {read=FShowDaysBefore, write=SetShowDaysBefore, default=0};
	__property bool ShowDaysAfter = {read=FShowDaysAfter, write=SetShowDaysAfter, default=0};
	__property Gdipfill::TGDIPFill* DateBeforeFill = {read=FDateBeforeFill, write=SetDateBeforeFill};
	__property Gdipfill::TGDIPFill* DateAfterFill = {read=FDateAfterFill, write=SetDateAfterFill};
	__property Vcl::Graphics::TFont* DateBeforeFont = {read=FDateBeforeFont, write=SetDateBeforeFont};
	__property Vcl::Graphics::TFont* DateAfterFont = {read=FDateAfterFont, write=SetDateAfterFont};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
};


class PASCALIMPLEMENTATION TDisjunctDateTimeItem : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	System::TDateTime FDateTime;
	TAdvSmoothCalendar* FCalendar;
	
__published:
	__property System::TDateTime DateTime = {read=FDateTime, write=FDateTime};
	__property TAdvSmoothCalendar* Calendar = {read=FCalendar, write=FCalendar};
public:
	/* TCollectionItem.Create */ inline __fastcall virtual TDisjunctDateTimeItem(System::Classes::TCollection* Collection) : System::Classes::TCollectionItem(Collection) { }
	/* TCollectionItem.Destroy */ inline __fastcall virtual ~TDisjunctDateTimeItem() { }
	
};


class PASCALIMPLEMENTATION TDisjunctDateTimeArray : public System::Classes::TCollection
{
	typedef System::Classes::TCollection inherited;
	
public:
	TDisjunctDateTimeItem* operator[](int Index) { return this->Items[Index]; }
	
private:
	System::Classes::TNotifyEvent FOnDisjunctArrayChange;
	HIDESBASE TDisjunctDateTimeItem* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TDisjunctDateTimeItem* const Value);
	
public:
	__property TDisjunctDateTimeItem* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
	HIDESBASE TDisjunctDateTimeItem* __fastcall Add();
	HIDESBASE TDisjunctDateTimeItem* __fastcall Insert(int Index);
	HIDESBASE void __fastcall Delete(int Index);
	virtual void __fastcall EndUpdate();
	__property System::Classes::TNotifyEvent OnDisjunctArrayChange = {read=FOnDisjunctArrayChange, write=FOnDisjunctArrayChange};
public:
	/* TCollection.Create */ inline __fastcall TDisjunctDateTimeArray(System::Classes::TCollectionItemClass ItemClass) : System::Classes::TCollection(ItemClass) { }
	/* TCollection.Destroy */ inline __fastcall virtual ~TDisjunctDateTimeArray() { }
	
};


enum DECLSPEC_DENUM TAdvSmoothCalendarDateRange : unsigned char { drSingledate, drMultiDates };

enum DECLSPEC_DENUM TAdvSmoothCalendarDateKind : unsigned char { dkNormal, dkWeekend, dkCurrent, dkDisabled, dkHovered, dkSelected };

enum DECLSPEC_DENUM TAdvSmoothCalendarDateMode : unsigned char { dmDay, dmMonth, dmYear };

typedef void __fastcall (__closure *TAdvSmoothCalendarBeforeDateSelectedEvent)(System::TObject* Sender, TAdvSmoothCalendarDateMode Mode, System::TDateTime Date, bool &AllowChange);

typedef void __fastcall (__closure *TAdvSmoothCalendarDateSelectedEvent)(System::TObject* Sender, TAdvSmoothCalendarDateMode Mode, System::TDateTime Date);

typedef void __fastcall (__closure *TAdvSmoothCalendarMultiDateSelectedEvent)(System::TObject* Sender, TAdvSmoothCalendarDateMode Mode, System::TDateTime StartDate, System::TDateTime EndDate);

typedef void __fastcall (__closure *TAdvSmoothCalendarDisjunctDateSelectedEvent)(System::TObject* Sender, TAdvSmoothCalendarDateMode Mode, TDisjunctDateTimeArray* DisjunctDates);

typedef void __fastcall (__closure *TAdvSmoothCalendarDateModeChangedEvent)(System::TObject* Sender, TAdvSmoothCalendarDateMode Mode, TAdvSmoothCalendarDateMode ModeTo, bool &allow);

typedef void __fastcall (__closure *TAdvSmoothCalendarMonthChangedEvent)(System::TObject* Sender, int Month);

typedef void __fastcall (__closure *TAdvSmoothCalendarYearChangedEvent)(System::TObject* Sender, int Year);

typedef void __fastcall (__closure *TAdvSmoothCalendarYearRangeChangedEvent)(System::TObject* Sender, int YearFrom, int YearTo);

typedef void __fastcall (__closure *TAdvSmoothCalendarCurrentDayClickEvent)(System::TObject* Sender, bool &Allow);

typedef void __fastcall (__closure *TAdvSmoothCalendarDateHintEvent)(System::TObject* Sender, System::TDateTime Date, System::UnicodeString &hint);

typedef void __fastcall (__closure *TAdvSmoothCalendarDateFillEvent)(System::TObject* Sender, Gdipfill::TGDIPFill* AFill, Vcl::Graphics::TFont* AFont, System::TDateTime Date, TAdvSmoothCalendarDateKind DateKind);

typedef void __fastcall (__closure *TAdvSmoothCalendarNormalDateFillEvent)(System::TObject* Sender, Gdipfill::TGDIPFill* AFill, Vcl::Graphics::TFont* AFont, System::TDateTime Date, TAdvSmoothCalendarDateKind DateKind);

typedef void __fastcall (__closure *TAdvSmoothCalendarDateTextEvent)(System::TObject* Sender, System::TDateTime Date, Vcl::Graphics::TFont* AFont, System::UnicodeString &AText);

typedef void __fastcall (__closure *TAdvSmoothCalendarGetWeekDayNameEvent)(System::TObject* Sender, int WeekDay, System::UnicodeString &WeekDayName);

typedef void __fastcall (__closure *TAdvSmoothCalendarGetTextEvent)(System::TObject* Sender, System::UnicodeString &AText);

typedef void __fastcall (__closure *TAdvSmoothCalendarGetMonthNameEvent)(System::TObject* Sender, int Month, System::UnicodeString &MonthName);

typedef void __fastcall (__closure *TAdvSmoothCalendarGetYearNameEvent)(System::TObject* Sender, int Year, System::UnicodeString &YearName);

enum DECLSPEC_DENUM TAdvSmoothCalendarForceDateMode : unsigned char { fdNone, fdDay, fdMonth, fdYear };

typedef void __fastcall (__closure *TAdvSmoothCalendarGetDateStatusEvent)(System::TObject* Sender, System::TDateTime Date, System::UnicodeString &StatusMessage, Gdipfill::TGDIPStatus* Fill, int &OffsetX, int &OffsetY);

typedef void __fastcall (__closure *TAdvSmoothCalendarStatusClickEvent)(System::TObject* Sender, System::UnicodeString StatusMessage, System::TDateTime Date);

typedef void __fastcall (__closure *TAdvSmoothCalendarDrawDayEvent)(System::TObject* Sender, System::TDateTime Date, bool &Allow);

typedef void __fastcall (__closure *TAdvSmoothCalendarDateEvent)(System::TObject* Sender, System::TDateTime Date);

struct DECLSPEC_DRECORD TDateStatus
{
public:
	System::TDateTime Date;
	System::UnicodeString Text;
	bool Found;
};


class PASCALIMPLEMENTATION TAdvSmoothCalendar : public Vcl::Controls::TCustomControl
{
	typedef Vcl::Controls::TCustomControl inherited;
	
	
private:
	typedef System::DynamicArray<Advgdip::TGPRectF> _TAdvSmoothCalendar__1;
	
	
private:
	bool FBlockEvents;
	Advstyleif::TTMSStyle FTMSStyle;
	System::Classes::TShiftState FShift;
	bool FMetroStyle;
	unsigned FTick;
	bool FLoading;
	TDisjunctDateTimeArray* FDisjunctDays;
	Vcl::Comctrls::TUpDown* FUpDown;
	int FMx;
	int FMy;
	bool FMultiDateSet;
	bool FMouseDown;
	bool FFocused;
	bool FDesignTime;
	_TAdvSmoothCalendar__1 arrMulti;
	int FRows;
	TAdvSmoothCalendarDateMode FTempDateMode;
	TAdvSmoothCalendarDateMode FDateMode;
	bool FAnimateDateMode;
	bool FAnimateDayOpc;
	bool FAnimateOpacity;
	bool FAnimate;
	bool Fanimating;
	float FStartPos;
	float FCurrentPos;
	float FPosTo;
	System::Byte FYearOpc;
	System::Byte FYearOpcTo;
	System::Byte FDayOpc;
	System::Byte FDayOpcTo;
	System::Byte FMonthOpc;
	System::Byte FMonthOpcTo;
	System::Byte FWeekNumberOpc;
	System::Byte FWeekNumberOpcTo;
	Vcl::Extctrls::TTimer* FAnimateTimer;
	System::TDateTime FStartDate;
	System::TDateTime FEndDate;
	TAdvSmoothCalendarDateRange FSelectedDateRange;
	System::TDateTime FHoverDate;
	System::TDateTime FFocusDate;
	System::TDateTime FSelectedDate;
	System::TDateTime FCurrentDate;
	Gdipfill::TGDIPFill* FFill;
	bool FTransparent;
	TAdvSmoothCalendarHeader* FHeader;
	int FNextYearFrom;
	int FNextYearTo;
	int FCurrentYearFrom;
	int FCurrentYearTo;
	int FNextYear;
	int FCurrentYear;
	int FYear;
	int FNextMonth;
	int FCurrentMonth;
	int FMonth;
	int FCurrentDay;
	TAdvSmoothCalendarDateAppearance* FDateAppearance;
	TAdvSmoothCalendarFooter* FFooter;
	bool FAnimation;
	TAdvSmoothCalendarDateSelectedEvent FOnSelectDate;
	TAdvSmoothCalendarDateModeChangedEvent FOnDateModeChanged;
	TAdvSmoothCalendarYearChangedEvent FOnYearChanged;
	TAdvSmoothCalendarMonthChangedEvent FOnMonthChanged;
	TAdvSmoothCalendarYearRangeChangedEvent FOnYearRangeChanged;
	bool FShowFocus;
	System::Uitypes::TColor FFocusColor;
	bool FMultiSelect;
	TAdvSmoothCalendarMultiDateSelectedEvent FOnSelectMultiDate;
	bool FShowCurrentDate;
	bool FKeyBoardDateModeToggle;
	TAdvSmoothCalendarCurrentDayClickEvent FOnCurrentDayClick;
	System::TDate FMaxDate;
	System::TDate FMinDate;
	TAdvSmoothCalendarDateFillEvent FOnDateFill;
	TAdvSmoothCalendarDateHintEvent FOnDateHint;
	Gdipfill::TGDIPStatus* FStatusAppearance;
	TAdvSmoothCalendarGetDateStatusEvent FOnDateStatus;
	TAdvSmoothCalendarDateTextEvent FOnDateText;
	TAdvSmoothCalendarBeforeDateSelectedEvent FOnBeforeSelectDate;
	System::Classes::TNotifyEvent FOnChange;
	bool FDisjunctDaySelect;
	TAdvSmoothCalendarDisjunctDateSelectedEvent FOnSelectDisjunctDate;
	TAdvSmoothCalendarStatusClickEvent FOnDateStatusClick;
	bool FSingleFillSelection;
	TAdvSmoothCalendarGetWeekDayNameEvent FOnGetWeekDayName;
	TAdvSmoothCalendarGetMonthNameEvent FOnGetMonthName;
	TAdvSmoothCalendarGetTextEvent FOnGetHeaderText;
	TAdvSmoothCalendarGetTextEvent FOnGetFooterText;
	TAdvSmoothCalendarGetYearNameEvent FOnGetYearName;
	TAdvSmoothCalendarNormalDateFillEvent FOnMonthFill;
	TAdvSmoothCalendarNormalDateFillEvent FOnYearFill;
	System::Uitypes::TCursor FStatusCursor;
	int FOriginalMonth;
	bool FDisableInteraction;
	bool FArrowLeftVisible;
	bool FArrowRightVisible;
	System::Classes::TNotifyEvent FArrowLeftClick;
	System::Classes::TNotifyEvent FArrowRightClick;
	bool FAllowToggle;
	TAdvSmoothCalendarDateEvent FOnDateDblClick;
	MESSAGE void __fastcall WMLDblClk(Winapi::Messages::TWMMouse &Msg);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMHintShow(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMStyleChanged(Winapi::Messages::TMessage &Message);
	System::UnicodeString __fastcall GetVersion();
	void __fastcall SetVersion(const System::UnicodeString Value);
	void __fastcall SetFill(Gdipfill::TGDIPFill* const Value);
	void __fastcall SetTransparent(const bool Value);
	void __fastcall SetHeader(TAdvSmoothCalendarHeader* const Value);
	void __fastcall SetMonth(const int Value);
	void __fastcall SetYear(const int Value);
	void __fastcall SetDateAppearance(TAdvSmoothCalendarDateAppearance* const Value);
	void __fastcall SetFooter(TAdvSmoothCalendarFooter* const Value);
	void __fastcall SetAnimation(const bool Value);
	void __fastcall SetShowFocus(const bool Value);
	void __fastcall SetFocusColor(const System::Uitypes::TColor Value);
	void __fastcall SetMultiSelect(const bool Value);
	void __fastcall SetEndDate(const System::TDateTime Value);
	void __fastcall SetSelectedDate(const System::TDateTime Value);
	void __fastcall SetStartDate(const System::TDateTime Value);
	void __fastcall SetHoveredDate(const System::TDateTime Value);
	void __fastcall SetShowCurrentDate(const bool Value);
	void __fastcall SetKeyBoardDateModeToggle(const bool Value);
	bool __fastcall DoStoreMaxDate();
	bool __fastcall DoStoreMinDate();
	void __fastcall SetMaxDate(const System::TDate Value);
	void __fastcall SetMinDate(const System::TDate Value);
	void __fastcall SetStatusAppearance(Gdipfill::TGDIPStatus* const Value);
	int __fastcall GetMonth();
	int __fastcall GetYear();
	void __fastcall SetDisjunctDaySelect(const bool Value);
	void __fastcall SetSingleFillSelection(const bool Value);
	void __fastcall SetUIStyle(const Advstyleif::TTMSStyle Value);
	
protected:
	__property bool AllowToggle = {read=FAllowToggle, write=FAllowToggle, default=1};
	__property bool DisableInteraction = {read=FDisableInteraction, write=FDisableInteraction, nodefault};
	__property bool ArrowLeftVisible = {read=FArrowLeftVisible, write=FArrowLeftVisible, default=1};
	__property bool ArrowRightVisible = {read=FArrowRightVisible, write=FArrowRightVisible, default=1};
	virtual void __fastcall SetFocusDate(const System::TDateTime Value);
	void __fastcall DisjunctArrayChange(System::TObject* Sender);
	HIDESBASE void __fastcall Changed();
	void __fastcall UpDownChange(System::TObject* Sender, bool &AllowChange, int NewValue, Vcl::Comctrls::TUpDownDirection Direction);
	void __fastcall ReadTMSStyle(System::Classes::TReader* Reader);
	void __fastcall WriteTMSStyle(System::Classes::TWriter* Writer);
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	void __fastcall DoGetDayStatus(System::TObject* Sender, System::TDateTime Date, System::UnicodeString &StatusMessage, Gdipfill::TGDIPStatus* Fill, int &OffsetX, int &OffsetY);
	void __fastcall DoChangeMode(System::TObject* Sender, TAdvSmoothCalendarDateMode Mode, TAdvSmoothCalendarDateMode ModeTo, bool &allow);
	void __fastcall DoSelectDate(System::TObject* Sender, TAdvSmoothCalendarDateMode Mode, System::TDateTime Date);
	void __fastcall DoSelectMultiDate(System::TObject* Sender, TAdvSmoothCalendarDateMode Mode, System::TDateTime StartDate, System::TDateTime EndDate);
	void __fastcall DoSelectDisjunctDate(System::TObject* Sender, TAdvSmoothCalendarDateMode Mode, TDisjunctDateTimeArray* DisjunctDates);
	void __fastcall DoCurrentDateClick(System::TObject* Sender, bool &allow);
	virtual void __fastcall DoChangeMonth(System::TObject* Sender, int Month);
	virtual void __fastcall DoChangeYear(System::TObject* Sender, int Year);
	virtual void __fastcall DoChangeYearRange(System::TObject* Sender, int YearFrom, int YearTo);
	virtual void __fastcall DoDateDblClick(System::TDateTime ADate);
	void __fastcall FillChanged(System::TObject* Sender);
	void __fastcall HeaderChanged(System::TObject* Sender);
	void __fastcall FooterChanged(System::TObject* Sender);
	void __fastcall DateAppearanceChanged(System::TObject* Sender);
	void __fastcall StatusAppearanceChanged(System::TObject* Sender);
	void __fastcall AnimateCal(System::TObject* Sender);
	void __fastcall AnimateMode(System::Byte &opcModeStart, System::Byte opcModeStartTo);
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall CreateWnd();
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	DYNAMIC void __fastcall DoEnter();
	DYNAMIC void __fastcall DoExit();
	DYNAMIC void __fastcall Resize();
	virtual void __fastcall Loaded();
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TWMEraseBkgnd &Message);
	HIDESBASE MESSAGE void __fastcall WMPaint(Winapi::Messages::TWMPaint &Message);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyUp(System::Word &Key, System::Classes::TShiftState Shift);
	MESSAGE void __fastcall WMGetDlgCode(Winapi::Messages::TWMNoParams &Message);
	void __fastcall InitPreview();
	System::Types::TRect __fastcall InsideRect();
	Advgdip::TGPRectF __fastcall GetArrowRect(bool left);
	Advgdip::TGPRectF __fastcall GetDateValuesRect();
	Advgdip::TGPRectF __fastcall GetFooterCaptionRect();
	Advgdip::TGPRectF __fastcall GetWeekDaysRect();
	Advgdip::TGPRectF __fastcall GetHeaderCaptionRect();
	int __fastcall GetCountRows();
	int __fastcall GetVersionNr();
	double __fastcall GetCellWidth();
	double __fastcall GetCellHeight();
	int __fastcall GetShadowOffset();
	bool __fastcall IsWeekendDay(System::TDateTime date);
	System::TDateTime __fastcall GetDate(int day, int dim);
	bool __fastcall IsDisjunctDate(System::TDateTime Date);
	bool __fastcall RemoveDateIfSelect(System::TDateTime Date);
	TDateStatus __fastcall IndicatorAtXY(int X, int Y);
	__property System::Classes::TNotifyEvent ArrowLeftClick = {read=FArrowLeftClick, write=FArrowLeftClick};
	__property System::Classes::TNotifyEvent ArrowRightClick = {read=FArrowRightClick, write=FArrowRightClick};
	__property System::TDateTime Selectedd = {read=FSelectedDate, write=FSelectedDate};
	__property System::TDateTime Startd = {read=FStartDate, write=FStartDate};
	__property System::TDateTime Stopd = {read=FEndDate, write=FEndDate};
	__property System::Classes::TShiftState Shiftst = {read=FShift, write=FShift, nodefault};
	
public:
	__fastcall virtual TAdvSmoothCalendar(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TAdvSmoothCalendar();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	virtual void __fastcall Paint();
	void __fastcall DrawBackGround();
	void __fastcall DrawHeader();
	void __fastcall DrawFooter();
	void __fastcall DrawDayOfWeek();
	void __fastcall DrawWeekNumbers();
	void __fastcall DrawArrow(bool left);
	void __fastcall DrawDays(int Month, int Year, float XPos);
	void __fastcall DrawMonths(int Year, float XPos);
	void __fastcall DrawYears(int YearFrom, int YearTo, float XPos);
	void __fastcall PreviousDate();
	void __fastcall NextDate();
	void __fastcall ToggleMode();
	void __fastcall ChangeMode(TAdvSmoothCalendarDateMode ADateMode);
	void __fastcall SelectDate(System::Classes::TShiftState Shift, System::TDateTime Date);
	int __fastcall GetDayOfWeekColumn(System::TDateTime date);
	int __fastcall GetCurrentDay(System::Word year, System::Word month);
	System::TDateTime __fastcall XYToDate(int X, int Y);
	System::TDateTime __fastcall GetStartDate();
	System::TDateTime __fastcall GetEndDate();
	__property System::TDateTime HoveredDate = {read=FHoverDate, write=SetHoveredDate};
	__property System::TDateTime EndDate = {read=GetEndDate, write=SetEndDate};
	__property System::TDateTime StartDate = {read=GetStartDate, write=SetStartDate};
	__property System::TDateTime SelectedDate = {read=FSelectedDate, write=SetSelectedDate};
	__property bool KeyBoardDateModeToggle = {read=FKeyBoardDateModeToggle, write=SetKeyBoardDateModeToggle, default=1};
	void __fastcall SetComponentStyle(Advstyleif::TTMSStyle AStyle);
	Advstyleif::TTMSStyle __fastcall GetComponentStyle();
	void __fastcall SetColorTones(const Advstyleif::TColorTones &ATones);
	void __fastcall SaveToTheme(System::UnicodeString FileName);
	void __fastcall LoadFromTheme(System::UnicodeString FileName);
	System::UnicodeString __fastcall GetThemeId();
	int __fastcall CurrentDay();
	int __fastcall CurrentMonth();
	int __fastcall CurrentYear();
	__property TDisjunctDateTimeArray* DisjunctDates = {read=FDisjunctDays};
	void __fastcall SelectDisjunctDates(System::TDateTime *ADisjunctDates, const int ADisjunctDates_High);
	__property int OriginalMonth = {read=FOriginalMonth, write=FOriginalMonth, nodefault};
	__property System::TDateTime FocusDate = {read=FFocusDate, write=SetFocusDate};
	__property TAdvSmoothCalendarDateRange SelectedDateRange = {read=FSelectedDateRange, write=FSelectedDateRange, nodefault};
	
__published:
	__property System::Uitypes::TCursor StatusCursor = {read=FStatusCursor, write=FStatusCursor, default=-21};
	__property bool SingleFillSelection = {read=FSingleFillSelection, write=SetSingleFillSelection, default=0};
	__property bool Animation = {read=FAnimation, write=SetAnimation, default=1};
	__property int Year = {read=GetYear, write=SetYear, nodefault};
	__property int Month = {read=GetMonth, write=SetMonth, nodefault};
	__property System::TDate MaxDate = {read=FMaxDate, write=SetMaxDate, stored=DoStoreMaxDate};
	__property System::TDate MinDate = {read=FMinDate, write=SetMinDate, stored=DoStoreMinDate};
	__property Gdipfill::TGDIPFill* Fill = {read=FFill, write=SetFill};
	__property TAdvSmoothCalendarDateAppearance* DateAppearance = {read=FDateAppearance, write=SetDateAppearance};
	__property Gdipfill::TGDIPStatus* StatusAppearance = {read=FStatusAppearance, write=SetStatusAppearance};
	__property TAdvSmoothCalendarHeader* Header = {read=FHeader, write=SetHeader};
	__property TAdvSmoothCalendarFooter* Footer = {read=FFooter, write=SetFooter};
	__property bool Transparent = {read=FTransparent, write=SetTransparent, default=0};
	__property System::UnicodeString Version = {read=GetVersion, write=SetVersion};
	__property TAdvSmoothCalendarDateEvent OnDateDblClick = {read=FOnDateDblClick, write=FOnDateDblClick};
	__property TAdvSmoothCalendarDateHintEvent OnDateHint = {read=FOnDateHint, write=FOnDateHint};
	__property TAdvSmoothCalendarDateFillEvent OnDateFill = {read=FOnDateFill, write=FOnDateFill};
	__property TAdvSmoothCalendarNormalDateFillEvent OnMonthFill = {read=FOnMonthFill, write=FOnMonthFill};
	__property TAdvSmoothCalendarNormalDateFillEvent OnYearFill = {read=FOnYearFill, write=FOnYearFill};
	__property TAdvSmoothCalendarDateTextEvent OnGetDateText = {read=FOnDateText, write=FOnDateText};
	__property TAdvSmoothCalendarBeforeDateSelectedEvent OnBeforeSelectDate = {read=FOnBeforeSelectDate, write=FOnBeforeSelectDate};
	__property TAdvSmoothCalendarDateSelectedEvent OnSelectDate = {read=FOnSelectDate, write=FOnSelectDate};
	__property TAdvSmoothCalendarMultiDateSelectedEvent OnSelectMultiDate = {read=FOnSelectMultiDate, write=FOnSelectMultiDate};
	__property TAdvSmoothCalendarDisjunctDateSelectedEvent OnSelectDisjunctDate = {read=FOnSelectDisjunctDate, write=FOnSelectDisjunctDate};
	__property TAdvSmoothCalendarDateModeChangedEvent OnDateModeChanged = {read=FOnDateModeChanged, write=FOnDateModeChanged};
	__property TAdvSmoothCalendarMonthChangedEvent OnMonthChanged = {read=FOnMonthChanged, write=FOnMonthChanged};
	__property TAdvSmoothCalendarYearChangedEvent OnYearChanged = {read=FOnYearChanged, write=FOnYearChanged};
	__property TAdvSmoothCalendarYearRangeChangedEvent OnYearRangeChanged = {read=FOnYearRangeChanged, write=FOnYearRangeChanged};
	__property TAdvSmoothCalendarCurrentDayClickEvent OnCurrentDayClick = {read=FOnCurrentDayClick, write=FOnCurrentDayClick};
	__property TAdvSmoothCalendarGetDateStatusEvent OnDateStatus = {read=FOnDateStatus, write=FOnDateStatus};
	__property TAdvSmoothCalendarStatusClickEvent OnDateStatusClick = {read=FOnDateStatusClick, write=FOnDateStatusClick};
	__property bool ShowFocus = {read=FShowFocus, write=SetShowFocus, default=1};
	__property bool ShowCurrentDate = {read=FShowCurrentDate, write=SetShowCurrentDate, default=1};
	__property System::Uitypes::TColor FocusColor = {read=FFocusColor, write=SetFocusColor, default=0};
	__property bool MultiSelect = {read=FMultiSelect, write=SetMultiSelect, default=0};
	__property bool DisjunctDaySelect = {read=FDisjunctDaySelect, write=SetDisjunctDaySelect, default=0};
	__property TAdvSmoothCalendarGetTextEvent OnGetHeaderText = {read=FOnGetHeaderText, write=FOnGetHeaderText};
	__property TAdvSmoothCalendarGetTextEvent OnGetFooterText = {read=FOnGetFooterText, write=FOnGetFooterText};
	__property TAdvSmoothCalendarGetWeekDayNameEvent OnGetWeekDayName = {read=FOnGetWeekDayName, write=FOnGetWeekDayName};
	__property TAdvSmoothCalendarGetMonthNameEvent OnGetMonthName = {read=FOnGetMonthName, write=FOnGetMonthName};
	__property TAdvSmoothCalendarGetYearNameEvent OnGetYearName = {read=FOnGetYearName, write=FOnGetYearName};
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Visible = {default=1};
	__property ShowHint;
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property Constraints;
	__property DragMode = {default=0};
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property OnCanResize;
	__property OnConstrainedResize;
	__property OnContextPopup;
	__property OnDblClick;
	__property OnDockDrop;
	__property OnDockOver;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnGetSiteInfo;
	__property OnMouseActivate;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnResize;
	__property OnStartDock;
	__property OnStartDrag;
	__property OnUnDock;
	__property PopupMenu;
	__property StyleElements = {default=7};
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseDown;
	__property OnClick;
	__property OnKeyDown;
	__property OnKeyUp;
	__property OnKeyPress;
	__property OnGesture;
	__property Touch;
	__property Advstyleif::TTMSStyle UIStyle = {read=FTMSStyle, write=SetUIStyle, default=8};
public:
	/* TWinControl.CreateParented */ inline __fastcall TAdvSmoothCalendar(HWND ParentWindow) : Vcl::Controls::TCustomControl(ParentWindow) { }
	
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
static const System::Int8 MIN_VER = System::Int8(0x5);
static const System::Int8 REL_VER = System::Int8(0x2);
static const System::Int8 BLD_VER = System::Int8(0x3);
}	/* namespace Advsmoothcalendar */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ADVSMOOTHCALENDAR)
using namespace Advsmoothcalendar;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AdvsmoothcalendarHPP
