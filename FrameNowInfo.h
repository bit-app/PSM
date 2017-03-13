//---------------------------------------------------------------------------

#ifndef FrameNowInfoH
#define FrameNowInfoH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Buttons.hpp>
#include "FrameTable.h"
//---------------------------------------------------------------------------
class TfrmNow : public TFrame
{
__published:	// IDE-managed Components
	TFlowPanel *FlowPanel1;
	TfrmTable *frmTable1;
	TfrmTable *frmTable2;
	TfrmTable *frmTable3;
	TfrmTable *frmTable4;
	TfrmTable *frmTable5;
	TfrmTable *frmTable6;
	TfrmTable *frmTable7;
	TfrmTable *frmTable8;
	TfrmTable *frmTable9;
	TfrmTable *frmTable10;
private:	// User declarations
public:		// User declarations
	__fastcall TfrmNow(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmNow *frmNow;
//---------------------------------------------------------------------------
#endif
