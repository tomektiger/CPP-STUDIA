#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int main()
{
    int n, i, szukana, *tab;
    bool znaleziono;

    cout << "Jaki rozmiar tablicy ?: ";
    cin >> n;
    tab = new int[n];

    srand(time(NULL));
    for (i = 0; i < n; i++)
    {
        cout << "Podaj element o indeksie " << i << ": ";
        cin >> tab[i];
    }

    cout << "Nacisnij dowolny klawisz zeby rozpoczac" << endl;
    system("pause");

    // ponizej badany algorytm
    znaleziono = 0;
    cout << "Czego szukasz?: ";
    cin >> szukana;

    for (i = 0; i < n; i++)
    {
        if (tab[i] == szukana)
        {
            cout << "Znaleziono pod indeksem " << i << endl;
            znaleziono = 1;
        }
    }

    if (!znaleziono)
    {
        cout << "Niczego nie znaleziono";
    }
    else
    {
        cout << "Znaleziono";
    }
    system("Pause");
}
