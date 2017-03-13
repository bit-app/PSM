//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "FrameNowInfo.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "FrameTable"
#pragma resource "*.dfm"
TfrmNow *frmNow;
//---------------------------------------------------------------------------
__fastcall TfrmNow::TfrmNow(TComponent* Owner)
	: TFrame(Owner)
{
}
//---------------------------------------------------------------------------
