//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Child_NowInfo.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "FrameTable"
#pragma resource "*.dfm"
TNowInfoForm *NowInfoForm;
//---------------------------------------------------------------------------
__fastcall TNowInfoForm::TNowInfoForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
