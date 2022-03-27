#include <iostream>
using namespace std;

int fun(int &suma, int &iloczyn)
{
    int number, ilosc = 0;
    iloczyn++;
    do
    {
        cout << "Wpisz liczbe: ";
        cin >> number;
        if (number > 0)
        {
            suma += number;
            iloczyn = iloczyn * number;

            if (number % 2 == 0)
            {
                ilosc++;
            }
        }
    } while (number != 0);
    return ilosc;
}

int main()
{
    int suma = 0, iloczyn = 0, ilosc = 0;
    ilosc = fun(suma, iloczyn);
    cout << "Czy byla parzysta ilosc? " << ilosc << endl;
    cout << "Suma liczb " << suma << endl;
    cout << "Iloczyn liczb " << iloczyn << endl;

    return 0;
}