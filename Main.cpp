//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Main.h"
#include "Child_NowInfo.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TMainForm *MainForm;
//---------------------------------------------------------------------------
__fastcall TMainForm::TMainForm(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------
void __fastcall TMainForm::SpeedButton1Click(TObject *Sender)
{
	String FormName = "NowInfoForm";

    if(CheckForm(FormName) == false)
    {
    	NowInfoForm = new TNowInfoForm(Application);
    }
}
//---------------------------------------------------------------------------

bool __fastcall TMainForm::CheckForm(String FormName)
{
    for (int i = 0; i < MDIChildCount; i++)
    {
        if(MDIChildren[i]->Name.SubString(1, 11) == FormName)
        {
            MDIChildren[i]->BringToFront();
            return true;
        }
    }
    return false;
}

