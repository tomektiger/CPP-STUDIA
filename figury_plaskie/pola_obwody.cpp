#include <iostream>
#include <random>
using namespace std;

float pole_prostokata(float a, float b)
{
    return a * b;
}

float obwod_prostokata(float a, float b)
{
    return (a * 2) + (b * 2);
}

float pole_kwadratu(float a)
{
    return a * a;
}

float obwod_kwadratu(float a)
{
    return a * 4;
}

float pole_kola(float r)
{
    return 3.14 * r * r;
}

float obwod_kola(float r)
{
    return 2 * 3.14 * r;
}
float pole_trojkata(float a, float h)
{
    return a * h / 2;
}

float obwod_trojkata(float a)
{
    return a * 3;
}

float obwod_trapezu(float a, float b, float c, float d)
{
    return a + b + c + d;
}
float pole_trapezu(float a, float b, float h)
{
    return ((a + b) * h) / 2;
}

int main()
{
    int input;
    cout << "FIGURY: " << endl;
    cout << "1. KWADRAT" << endl;
    cout << "2. TROJKAT" << endl;
    cout << "3. PROSTOKAT" << endl;
    cout << "4. TRAPEZ" << endl;
    cout << "5. KOLO" << endl;
    cout << "WYBRANA FIGURA >>>>: ";
    cin >> input;

    switch (input)
    {
    case 1:
        int wybor;
        cout << "CO CHCESZ OBLICZYC ?: " << endl;
        cout << "1.POLE" << endl;
        cout << "2.OBWOD" << endl;
        cout << "WYBOR >>>: ";
        cin >> wybor;
        if (wybor == 1)
        {
            float bok_kwadratu;
            cout << "PODAJ BOK: >>>";
            cin >> bok_kwadratu;
            cout << "POLE WYNOSI: " << pole_kwadratu(bok_kwadratu) << endl;
        }
        else if (wybor == 2)
        {
            float bok_kwadratu;
            cout << "PODAJ BOK: >>>";
            cin >> bok_kwadratu;
            cout << "OBWOD WYNOSI: " << pole_kwadratu(bok_kwadratu) << endl;
        }
        break;

    case 2:
        int wybor1;
        cout << "CO CHCESZ OBLICZYC ?: " << endl;
        cout << "1.POLE" << endl;
        cout << "2.OBWOD" << endl;
        cout << "WYBOR >>>: ";
        cin >> wybor1;
        if (wybor1 == 1)
        {
            float bok_trojkata;
            float wysokosc_trojkata;
            cout << "PODAJ BOK: >>>";
            cin >> bok_trojkata;
            cout << "PODAJ WYSOKOSC: >>>";
            cin >> wysokosc_trojkata;
            cout << "POLE WYNOSI: " << pole_trojkata(bok_trojkata, wysokosc_trojkata) << endl;
        }
        else if (wybor1 == 2)
        {
            float bok_trojkata;
            cout << "PODAJ BOK: >>>";
            cin >> bok_trojkata;
            cout << "OBWOD WYNOSI: " << obwod_trojkata(bok_trojkata) << endl;
        }
        break;

    case 3:
        int wybor2;
        cout << "CO CHCESZ OBLICZYC ?: " << endl;
        cout << "1.POLE" << endl;
        cout << "2.OBWOD" << endl;
        cout << "WYBOR >>>: ";
        cin >> wybor2;
        if (wybor2 == 1)
        {
            float bok_prostokata_1;
            float bok_prostokata_2;
            cout << "PODAJ 1 BOK: >>>";
            cin >> bok_prostokata_1;
            cout << "PODAJ 2 BOK: >>>";
            cin >> bok_prostokata_2;
            cout << "POLE WYNOSI: " << pole_prostokata(bok_prostokata_1, bok_prostokata_2) << endl;
        }
        else if (wybor2 == 2)
        {
            float bok_prostokata_1;
            float bok_prostokata_2;
            cout << "PODAJ 1 BOK: >>>";
            cin >> bok_prostokata_1;
            cout << "PODAJ 2 BOK: >>>";
            cin >> bok_prostokata_2;
            cout << "OBWOD WYNOSI: " << obwod_prostokata(bok_prostokata_1, bok_prostokata_2) << endl;
        }
        break;

    case 4:
        int wybor3;
        cout << "CO CHCESZ OBLICZYC ?: " << endl;
        cout << "1.POLE" << endl;
        cout << "2.OBWOD" << endl;
        cout << "WYBOR >>>: ";
        cin >> wybor3;
        if (wybor3 == 1)
        {
            float bok_trapezu_1;
            float bok_trapezu_2;
            float wysokosc;
            cout << "PODAJ 1 BOK: >>>";
            cin >> bok_trapezu_1;
            cout << "PODAJ 2 BOK: >>>";
            cin >> bok_trapezu_2;
            cout << "PODAJ WYSOKOSC: >>>";
            cin >> wysokosc;
            cout << "POLE WYNOSI: " << pole_trapezu(bok_trapezu_1, bok_trapezu_2, wysokosc) << endl;
        }
        else if (wybor3 == 2)
        {
            float bok_trapezu_1;
            float bok_trapezu_2;
            float bok_trapezu_3;
            float bok_trapezu_4;

            cout << "PODAJ 1 BOK: >>>";
            cin >> bok_trapezu_1;
            cout << "PODAJ 2 BOK: >>>";
            cin >> bok_trapezu_2;
            cout << "PODAJ 3 BOK: >>>";
            cin >> bok_trapezu_3;
            cout << "PODAJ 4 BOK: >>>";
            cin >> bok_trapezu_4;
            cout << "OBWOD WYNOSI: " << obwod_trapezu(bok_trapezu_1, bok_trapezu_2, bok_trapezu_3, bok_trapezu_4) << endl;
        }
        break;

    case 5:
        int wybor4;
        cout << "CO CHCESZ OBLICZYC ?: " << endl;
        cout << "1.POLE" << endl;
        cout << "2.OBWOD" << endl;
        cout << "WYBOR >>>: ";
        cin >> wybor4;
        if (wybor4 == 1)
        {
            float promien;
            cout << "PODAJ PROMIEN: >>>";
            cin >> promien;
            cout << "POLE WYNOSI: " << pole_kola(promien) << endl;
        }
        else if (wybor4 == 2)
        {
            float promien;
            cout << "PODAJ PROMIEN: >>>";
            cin >> promien;
            cout << "OBWOD WYNOSI: " << obwod_kola(promien) << endl;
        }
        break;
    }
}
