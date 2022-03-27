#include <iostream>
using namespace std;

int silnia(int number)
{

    int silnia = 1;
    for (int i = number; i > 1; i--)
    {
        silnia = silnia * i;
    }
    return silnia;
}

int main()
{
    int number;
    int suma = 0;
    cout << "Wpisz liczbe: ";
    cin >> number;

    cout << silnia(number);
}