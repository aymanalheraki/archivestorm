//---------------------------------------------------------------------------

#ifndef ArcImagesH
#define ArcImagesH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "AdvDataLabel.hpp"
#include "AdvDateTimePicker.hpp"
#include "AdvEdit.hpp"
#include "AdvGrid.hpp"
#include "AdvObj.hpp"
#include "AeroButtons.hpp"
#include "BaseGrid.hpp"
#include "CurvyControls.hpp"
#include "frxClass.hpp"
#include "frxDBSet.hpp"
#include "RzButton.hpp"
#include "RzCmboBx.hpp"
#include "RzLabel.hpp"
#include "RzPanel.hpp"
#include "RzRadChk.hpp"
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.ImgList.hpp>
#include "ieview.hpp"
#include "imageenview.hpp"
#include "ievect.hpp"
#include <Vcl.DBCtrls.hpp>
#include "AdvUtil.hpp"
#include "hyiedefs.hpp"
#include "hyieutils.hpp"
#include "iesettings.hpp"
#include "iexBitmaps.hpp"
#include <System.ImageList.hpp>
#include "iexRulers.hpp"
#include <System.Contnrs.hpp>
#include "iexLayers.hpp"
#include "iexToolbars.hpp"
#include "iexUserInteractions.hpp"
#include "imageenio.hpp"
#include "imageenproc.hpp"
//---------------------------------------------------------------------------
class TFArcImages : public TForm
{
__published:	// IDE-managed Components
	TPanel *TopPanel;
	TAdvDataLabel *AdvDataLabel1;
	TRzPanel *RzPanel5;
	TRzPanel *RzPanel3;
	TPanel *servePanel;
	TCurvyPanel *CurvyPanel2;
	TImage *Image2;
	TAdvEdit *txtImageSearch;
	TRzPanel *RzPanel1;
	TRzPanel *RzPanel2;
	TPanel *Panel1;
	TPanel *Panel3;
	TImageEnVect *ImageEnVect1;
	TAdvStringGrid *imageSG;
	TAeroButton *btnExpandAll;
	TAeroButton *btnCollapseAll;
	TImageList *ImageList1;
	TRzComboBox *cmbSubGroup;
	TRzComboBox *cmbMainGroup;
	TRzComboBox *cmbTypes;
	TRzComboBox *cmbUsers;
	TRzLabel *lblCount;
	TRzLabel *lblFileDate;
	TLabel *Label5;
	TLabel *Label1;
	TLabel *Label4;
	TLabel *Label3;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall FillImageSG();
	void __fastcall txtImageSearchKeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall Image2Click(TObject *Sender);
	void __fastcall imageSGClick(TObject *Sender);
	void __fastcall ImageEnVect1DblClick(TObject *Sender);
	void __fastcall imageSGGetAlignment(TObject *Sender, int ARow, int ACol, TAlignment &HAlign,
          TVAlignment &VAlign);
	void __fastcall imageSGGetCellColor(TObject *Sender, int ARow, int ACol, TGridDrawState AState,
          TBrush *ABrush, TFont *AFont);
	void __fastcall imageSGDblClick(TObject *Sender);
	void __fastcall btnExpandAllClick(TObject *Sender);
	void __fastcall btnCollapseAllClick(TObject *Sender);
	void __fastcall cmbMainGroupChange(TObject *Sender);
	void __fastcall cmbSubGroupChange(TObject *Sender);
	void __fastcall cmbTypesChange(TObject *Sender);
	void __fastcall cmbUsersChange(TObject *Sender);


private:	// User declarations
public:		// User declarations
	__fastcall TFArcImages(TComponent* Owner);
	AnsiString imageID;
};
//---------------------------------------------------------------------------
extern PACKAGE TFArcImages *FArcImages;
//---------------------------------------------------------------------------
#endif
