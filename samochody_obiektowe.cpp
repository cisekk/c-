#include <iostream>
#include <cstdlib>
#include <conio.h>

using namespace std;

class Samochod
{
    public:
string marka;
string model;
int rocznik;
int przebieg;

void wczytaj()
{
    cout << "DODAWANIE SAMOCHODU" << endl;
    cout << "Podaj marke samochodu:" << endl;
    cin >> marka;
    cout << "Podaj model samochodu" << endl;
    cin >> model;
    cout << "Podaj rocznik samochodu" << endl;
    cin >> rocznik;
    cout << "Podaj przebieg samochodu" << endl;
    cin >> przebieg;
}
void wypisz()
{
    system ("cls");
    cout << "Twoj samochod jest marki: " << marka << endl;
    cout << "Model: " << model << endl;
    cout << "Zostal wyprodukowany w " << rocznik << " roku" << endl << "i ma przebieg " << przebieg << " km" << endl << endl;
    cout << "Nacisnij dowolny klawisz aby kontynuowac";
    getch();
    system ("cls");
}
};


int main()
{

Samochod s1;
s1.wczytaj();
s1.wypisz();
Samochod s2;
s2.wczytaj();
s2.wypisz();

    return 0;
}
