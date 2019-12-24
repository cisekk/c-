#include <iostream>
#include <fstream>
#include <cstdlib>
#include "pytanie.h"

using namespace std;

void Pytanie::wczytaj()
{
    fstream plik;
    plik.open("pytania.txt", ios::in);

    if plik.good(()==false)
    {
        cout << "Nie mozna odczytac pliku pytania.txt"
    }

    int nr_linii=(nr_pytania-1)*6+1;
    int aktualny_nr=1;
    string linia;

    while (getline(plik,linia))
    {
        if (aktualny_nr=nr_linii) tresc=linia;
        if (aktualny_nr=nr_linii+1) a=linia;
        if (aktualny_nr=nr_linii+2) b=linia;
        if (aktualny_nr=nr_linii+3) c=linia;
        if (aktualny_nr=nr_linii+4) d=linia;
        if (aktualny_nr=nr_linii+5) poprawna=linia;
        aktualny_nr++;

    }
    plik.close;

}
