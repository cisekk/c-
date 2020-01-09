#include <iostream>
#include <cmath>
#include <cstdlib>
#include <conio.h>

using namespace std;

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
int main()
{
    int i;
    int wybor;
    int zakres;
    int ilosc;
    int n;
    int * tablica = new int[n];
                cout << "Program przedstawiajacy sortowanie grzebieniowe." << endl;
                cout << "Przygotowal Krzysztof Suski" << endl;
                cout << endl<< endl << "Nacisnij dowolny klawisz, aby wejsc do menu" << endl;
                getch();
    do
        {
                system ( "cls");
                cout << "Wybierz metode wprowadzania liczb:" << endl;
                cout << "[1] - wprowadz liczby recznie"  << endl;
                cout << "[2] - wygenerowanie liczb losowych"<< endl;
                cout << "[0] - wyjscie z programu" << endl << endl;
                cin >> wybor;
            if( wybor == 1 )
                {
                cout << "Ile liczb chcesz wprowadzic?" << endl;
                cin >> ilosc;
                    for (i=0; i<ilosc; i++)
                        {
                        cout <<  "Podaj liczbe nr " << i+1 << endl;
                        cin >> tablica[i];
                        }
                        system ( "cls");
                                    cout << "Podane liczby przed sortowaniem:" << endl << endl;
                                        for (i=0; i<ilosc; i++)
                                        {
                                            cout << tablica[i] << " ";
                                        }
                                    cout << endl << endl << "Nacisnij dowolny klawisz, aby rozpoczac sortowanie" << endl << endl;
                                    getch();
                                    sort (tablica, ilosc);

                                        cout << "Podane liczby po sortowaniu:" << endl << endl;
                                        for (i=0; i<ilosc; i++)
                                        {
                                        cout << tablica[i] << " ";
                                        }
                                                    cout << endl<< endl << "Nacisnij dowolny klawisz, aby wrocic do menu" << endl;
                                                    getch();
                }
            else if (wybor == 2)
                {
                cout << "Ile liczb losowych wygenerowac?" << endl;
                cin >> ilosc;
                cout << "Jaki ma byc gorny zakres generowanych liczb?" << endl;
                cin >> zakres;
                    for (i=0; i<ilosc; i++)
                        {
                        tablica[i] = rand () %zakres+1;
                        }
                        system ( "cls");
                                    cout << "Liczby przed sortowaniem:" << endl << endl;
                                        for (i=0; i<ilosc; i++)
                                        {
                                        cout << tablica[i] << " ";
                                        }
                                    cout << endl<< endl << "Nacisnij dowolny klawisz, aby rozpoczac sortowanie" << endl << endl;
                                    getch();
                                    sort (tablica, ilosc);

                                        cout << "Podane liczby po sortowaniu:" << endl << endl;
                                        for (i=0; i<ilosc; i++)
                                        {
                                        cout << tablica[i] << " ";
                                        }
                                                    cout << endl << endl << "Nacisnij dowolny klawisz, aby wrocic do menu" << endl;
                                                    getch();
                }
                else if (wybor == 0)
                {
                break;
                }
            else
                {
                system ( "cls");
                cout << endl << endl <<"Podana opcja nie istnieje";
                cout << endl << endl << "Nacisnij dowolny klawisz, aby wrocic do menu" << endl;
                getch();
                }
    } while( wybor != 0 );
    return 0;
}
