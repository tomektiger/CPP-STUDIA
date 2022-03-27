#include <iostream>
using namespace std;

int main()
{
    double odsetki = 0.0;
    double suma = 0.0;
    double wyplata = 1000;
    double procent = 0.05 / 12;
    int miesiac = 0;
    do
    {
        suma += wyplata;
        odsetki = (suma * procent);
        suma += suma + odsetki;
        miesiac++;
    } while (suma <= 200000);

    cout << miesiac;
}