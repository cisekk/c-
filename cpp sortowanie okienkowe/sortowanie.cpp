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
int wybor=0;
int zakres;
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
i=0;
Edit1->Clear();
LabMetoda -> Caption="Ile liczb chcesz wprowadziæ?";
ButLosowe -> Visible=false;
ButSam -> Visible=false;
ButOk -> Visible=true;
Edit1 -> Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ButOkClick(TObject *Sender) //PODANIE ILOSCI
{
LabMetoda->Caption ="Podaj liczbê nr "+IntToStr(i+1)+":";
ButOk -> Visible=false;
ilosc = Edit1->Text.ToInt();
Edit1->Clear();
ButOk2 -> Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ButOk2Click(TObject *Sender) //PODANIE LICZB
{
if (i<ilosc-1)
{
tablica[i] = Edit1->Text.ToInt();
Edit1->Clear();
LabMetoda->Caption ="Podaj liczbê nr "+IntToStr(i+2)+":";
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

void __fastcall TForm1::ButSortClick(TObject *Sender) //SORTOWANIE
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
Edit1->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ButPowrotClick(TObject *Sender) //POWROT DO MENU
{
a = "Podane liczby: ";
b = "Liczby po sortowaniu: "   ;
LabWprowadzone->Visible=false;
ButPowrot -> Visible = false;
LabMetoda -> Caption = "Metoda wprowadzania liczb:";
LabMetoda -> Visible = true;
ButSam -> Visible = true;
ButLosowe -> Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ButLosoweClick(TObject *Sender)   //LOSOWE LICZBY Z MENU
{
ButSam -> Visible = false;
ButLosowe -> Visible = false;
ButOk3 -> Visible = true;
LabMetoda -> Caption = "Ile liczb chcesz wygenerowaæ?";
Edit1 -> Visible=true;
wybor=0;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ButOk3Click(TObject *Sender) //WYBOR ZAKRESU I GENEROWANIE
{
if (wybor==0)
{
LabMetoda -> Caption="Jaki ma byæ górny zakres?";
ilosc = Edit1->Text.ToInt();
wybor=1;
i=0;
}
        else if (wybor==1)
        zakres = Edit1->Text.ToInt();
        {
        while (i<ilosc)
        {
        tablica[i] = rand ();
        a = a + tablica[i] + " ";
        i=i+1;
        }
        Edit1 -> Visible=false;
        LabWprowadzone->Caption=a;
        LabWprowadzone -> Visible=true;
        LabMetoda -> Visible=false;
        ButSort ->Visible=true;
        }
        ButOk3 -> Visible=false;
        sort (tablica, ilosc);
        ButSort ->Visible=true;
        i=0;
}
//---------------------------------------------------------------------------

