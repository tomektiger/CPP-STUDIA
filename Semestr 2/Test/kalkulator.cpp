#include <iostream>
#include <math.h>
using namespace std;

float add(float num1, float num2)
{
    return num1 + num2;
}
float multiply(float num1, float num2)
{
    return num1 * num2;
}
float subtract(float num1, float num2)
{
    return num1 - num2;
}
float divide(float num1, float num2)
{
    return num1 / num2;
}
float pierwiastek(float num)
{
    return sqrt(num);
}
float procent(float procent, float num)
{
    return num * (procent / 100);
}
int reszta(int num1, int num2)
{
    return num1 % num2;
}

void printMenu()
{
    cout << "\n\n1. Dodaj dwie liczby" << endl;
    cout << "2. Odejmij dwie liczby" << endl;
    cout << "3. Podziel dwie liczby" << endl;
    cout << "4. Pomnoz dwie liczby" << endl;
    cout << "5. Pierwiastek z liczby" << endl;
    cout << "6. Procent z liczby" << endl;
    cout << "7. Reszta z dzielenia dwoch liczb" << endl;
    cout << "8. Potega danej liczby" << endl;
}
int main()
{
    int choice = 0;
    printMenu();
    do
    {
        cout << "\nWybierz dowolna opcje lub 0 by przerwac: ";
        cin >> choice;

        float num1, num2, num;
        switch (choice)
        {
        case 1:
            cout << "Podaj num1: ";
            cin >> num1;
            cout << "Podaj num2: ";
            cin >> num2;
            cout << "Wynik: " << add(num1, num2);
            system("clear");
            printMenu();
            break;
        case 2:
            cout << "Podaj num1: ";
            cin >> num1;
            cout << "Podaj num2: ";
            cin >> num2;
            cout << "Wynik: " << subtract(num1, num2);
            system("clear");
            printMenu();
            break;
        case 3:
            cout << "Podaj num1: ";
            cin >> num1;
            cout << "Podaj num2: ";
            cin >> num2;
            cout << "Wynik: " << divide(num1, num2);
            system("clear");
            printMenu();
            break;
        case 4:
            cout << "Podaj num1: ";
            cin >> num1;
            cout << "Podaj num2: ";
            cin >> num2;
            cout << "Wynik: " << multiply(num1, num2);
            system("clear");
            printMenu();
            break;
        case 5:
            cout << "Podaj num: ";
            cin >> num;
            cout << "Wynik: " << pierwiastek(num);
            system("clear");
            printMenu();
            break;
        case 6:
            float proc;
            cout << "Podaj procent: ";
            cin >> proc;
            cout << "Podaj num: ";
            cin >> num;
            cout << "Wynik: " << procent(proc, num);
            system("clear");
            printMenu();
            break;
        case 7:
            cout << "Podaj num1: ";
            cin >> num1;
            cout << "Podaj num2: ";
            cin >> num2;
            cout << "Wynik: " << reszta(num1, num2);
            system("clear");
            printMenu();
            break;

        case 8:
            float potega;
            cout << "Podaj potege: ";
            cin >> potega;
            cout << "Podaj num:  ";
            cin >> num;
            cout << "Wynik: " << pow(num, potega);
            system("clear");
            printMenu();
            break;
        }
    } while (choice != 0);
}
