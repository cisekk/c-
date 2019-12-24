#include <iostream>

using namespace std;

int main()
{
	int a, i, tablica[15];
	cout << "Podaj liczbe w systemie dziesietnym:" << endl;
	cin >> a;
    if(a > 0 && a < 32768)
    {
        for (int i=0; i<15; i++)

            {
            tablica[i] = a % 2;
			a = a / 2;
            }
        cout << "Twoja liczba w systemie binarnym:" <<endl;
        for(int i=14; i>=0; i--)
        {
        cout <<  tablica[i];
        }
    }
            else if(a>32767)
            {
            cout << "Liczba poza skala (32767)";
            }

                else
                {
                cout << "Tylko liczby calkowite dodatnie";
                }


	return 0;
}
