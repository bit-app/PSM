//---------------------------------------------------------------------------

#ifndef FrameTableH
#define FrameTableH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TfrmTable : public TFrame
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TPanel *Panel2;
	TSpeedButton *SpeedButton1;
private:	// User declarations
public:		// User declarations
	__fastcall TfrmTable(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmTable *frmTable;
//---------------------------------------------------------------------------
#endif
