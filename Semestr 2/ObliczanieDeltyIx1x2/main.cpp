#include <iostream>
#include <cmath>
using namespace std;

void CalculateDeltaX1X2 (double a, double b, double c) {
    double delta = (b * b) - (4 * a * c);
    double x1 = (-b - sqrt(delta)) / (2 * a);
    double x2 = (-b + sqrt(delta)) / (2 * a);

    if (delta < 0) {
        cout<<"---------------------------------------------------------------------"<<endl;
        cout << "Delta wynosi: " << delta << " ,gdy jest ujemna to nie ma x1, x2"<<endl;
        cout<<"---------------------------------------------------------------------"<<endl;
    } else if (delta == 0) {
        cout<<"----------------------------------------"<<endl;
        cout << "Delta wynosi: " << delta << endl;
        cout << "X wynosi: " << x1 << endl;
        cout<<"----------------------------------------"<<endl;
    } else if (delta > 0) {
        cout<<"----------------------------------------"<<endl;
        cout << "Delta wynosi: " << delta << endl;
        cout << "X1 wynosi: " << x1 << endl;
        cout << "X2 wynosi: " << x2 << endl;
        cout<<"----------------------------------------"<<endl;
    }
}

int main()
{
    //Ax2 + Bx + C = 0;
    double a,b,c;

    cout<<"----------------------------------------"<<endl;
    cout<<"PROGRAM DO WYLICZANIA DELTY ORAZ X1 I X2"<<endl;
    cout<<"----------------------------------------"<<endl;

    while (true) {
        cout << "Wpisz liczbe a: ";
        if (cin >> a && a!= 0)
        {
            break;
        }
        else
        {
            cout << "Wpisz poprawna liczbe (A niepoprawne lub 0) !\n";
            cin.clear();
            cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
        }
    }
    while (true) {
        cout << "Wpisz liczbe b: ";
        if (cin >> b) {
            break;
        } else {
            cout << "Wpisz poprawna liczbe !\n";
            cin.clear();
            cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
        }
    }
    while (true) {
        cout << "Wpisz liczbe c: ";
        if (cin >> c) {
            break;
        } else {
            cout << "Wpisz poprawna liczbe !\n";
            cin.clear();
            cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
        }
    }
    //Obliczanie delty
    //Delta = b2 - 4ac
    CalculateDeltaX1X2(a,b,c);

    return 0;
}
