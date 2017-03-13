//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "FrameTable.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmTable *frmTable;
//---------------------------------------------------------------------------
__fastcall TfrmTable::TfrmTable(TComponent* Owner)
	: TFrame(Owner)
{
}
//---------------------------------------------------------------------------
