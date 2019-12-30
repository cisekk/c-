//---------------------------------------------------------------------------
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <sstream>
#include <string>
#include <vcl.h>

#pragma hdrstop

#include "sortowanie.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
int n;
int i=0;
int ilosc=0;
AnsiString a = "Podane liczby: ";
AnsiString b = "Liczby po sortowaniu: "   ;
int * tablica = new int[n];

void sort(int * tab, int y)
    {
	int space = y; int temp = 0;
	bool next_i = true;
	while (space > 1 || next_i)
        {
        space = space / 1.3;
        if(space==0)
        space=1;
        next_i = false;
            for (int i=0; i + space < y; ++i)
            {
			if (tab[i + space] < tab[i])
                {
				temp = tab[i];
				tab[i] = tab[i + space];
				tab[i + space] = temp;
				next_i = true;
                }
            }
        }
    }

TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ButMenuClick(TObject *Sender) //WEJSCIE DO MENU
{
 ButMenu -> Visible = false;
 LabMetoda -> Caption="Metoda wprowadzania liczb:";
 ButSam -> Visible = true;
 ButLosowe -> Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ButSamClick(TObject *Sender)  //WYBOR LICZB SAMEMU
{
LabMetoda -> Caption="Ile liczb chcesz wprowadzi�?";
ButLosowe -> Visible=false;
ButSam -> Visible=false;
ButOk -> Visible=true;
Edit1 -> Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ButOkClick(TObject *Sender)
{
LabMetoda->Caption ="Podaj liczb� nr "+IntToStr(i+1)+":";
ButOk -> Visible=false;
ilosc = Edit1->Text.ToInt();
ButOk2 -> Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ButOk2Click(TObject *Sender)
{
if (i<ilosc-1)
{
tablica[i] = Edit1->Text.ToInt();
LabMetoda->Caption ="Podaj liczb� nr "+IntToStr(i+2)+":";
a = a + tablica[i] + " ";
i=i+1;
LabWprowadzone->Caption=a;
}
else
{
tablica[i] = Edit1->Text.ToInt();
a = a + tablica[i] + " ";
LabWprowadzone->Caption=a;
LabWprowadzone -> Visible=true;
LabMetoda -> Visible=false;
ButOk2 -> Visible=false;
Edit1 -> Visible=false;
ButSort ->Visible=true;
i=0;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ButSortClick(TObject *Sender)
{
sort (tablica, ilosc);
b=b + tablica[i];
while (i<ilosc-1)
{
i=i+1;
b = b + " " +tablica[i];
LabWprowadzone->Caption=b;
}
ButPowrot->Visible=True;

ButSort->Visible=false;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::ButPowrotClick(TObject *Sender)
{
LabWprowadzone->Visible=false;
ButMenu -> Visible = false;
LabMetoda -> Caption = "Metoda wprowadzania liczb:";
LabMetoda -> Visible = true;
ButSam -> Visible = true;
ButLosowe -> Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ButLosoweClick(TObject *Sender)
{
ButSam -> Visible = false;
ButLosowe -> Visible = false;
ButOk3 -> Visible = true;
LabMetoda -> Caption = "Ile liczb wylosowa�?";
Edit1 -> Visible=true;
//ilosc = Edit1->Text.ToInt();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ButOk3Click(TObject *Sender)
{
.
}
//---------------------------------------------------------------------------

