#include <iostream>
#include <random>
#include <numeric>
#include <algorithm>

using namespace std;

float calculate_sum(float arr[], float n)
{
    float sum = 0;

    for (int i = 0; i < n; i++)
        sum += arr[i];

    return float(sum);
}

float calculate_average(float arr[], float n)
{
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return float(sum / n);
}

float calculate_max(float arr[], float n)
{
    float max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}

float calculate_min(float arr[], float n)
{
    float min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}

void maksymalny_minimalny_dochod(float arr[], float n)
{
    cout << "Najmniejszy przychod: " << calculate_min(arr, n) << endl;
    cout << "Najwiekszy przychod: " << calculate_max(arr, n) << endl;
}

void wyswietl_dochody(float arr[], float n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i << "." << arr[i] << endl;
    }
}

void wyswietl_menu()
{
    cout << "Co chcesz zrobić ? " << endl;
    cout << "1. Wczytaj dochody" << endl;
    cout << "2. Wyswietl dochody" << endl;
    cout << "3. Zsumuj dochody" << endl;
    cout << "4. Pokaz max i min przychod" << endl;
    cout << "5. Posortuj i wyswietl" << endl;
    cout << "6. Wyswietl dochody ponad srednia i pod srednia" << endl;
    cout << "\nWCIŚNIJ \"Z\"<< BY ZAKOŃCZYĆ PROGRAM" << endl;
}

void decorate()
{
    cout << "-----------------------------------" << endl;
}

void sortuj(float arr[])
{
    sort(arr, arr + 12);

    for (int i = 1; i <= 12; i++)
    {
        cout << i << "." << arr[i] << endl;
    }
}

void pod_nad_srednim_dochodem(float arr[], float n)

{
    float avg = calculate_average(arr, n);

    cout << "Średnia przychodow: " << avg << endl;

    cout << "\nDochody większe od średniej: " << endl;

    for (int i = 1; i <= n; i++)
    {
        if (arr[i] > avg)
        {
            cout << i << "." << arr[i] << endl;
        }
    }

    cout << "\nDochody mniejsze od średniej: " << endl;
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] < avg)
        {
            cout << i << "." << arr[i] << endl;
        }
    }
}

void choose_action()
{
    int klawisz;
    float monthTable[12];
    float n = sizeof(monthTable) / sizeof(monthTable[0]);
    for (int i = 0; i <= n; i++)
    {
        monthTable[i] = 0;
    }
    puts("Analiza rocznych dochodow");
    do
    {
        decorate();
        wyswietl_menu();
        decorate();
        klawisz = getchar();
        fflush(stdin);

        switch (klawisz)
        {
        case '1':
            float month_1, month_2, month_3, month_4, month_5, month_6, month_7, month_8, month_9, month_10, month_11, month_12;
            decorate();
            cout << "WPISZ PO KOLEI KWOTY: " << endl;
            decorate();
            cout << "1.: ";
            cin >> month_1;
            monthTable[0] = month_1;
            cout << "2.: ";
            cin >> month_2;
            monthTable[1] = month_2;
            cout << "3.: ";
            cin >> month_3;
            monthTable[2] = month_3;
            cout << "4.: ";
            cin >> month_4;
            monthTable[3] = month_4;
            cout << "5.: ";
            cin >> month_5;
            monthTable[4] = month_5;
            cout << "6.: ";
            cin >> month_6;
            monthTable[5] = month_6;
            cout << "7.: ";
            cin >> month_7;
            monthTable[6] = month_7;
            cout << "8.: ";
            cin >> month_8;
            monthTable[7] = month_8;
            cout << "9.: ";
            cin >> month_9;
            monthTable[8] = month_9;
            cout << "10.: ";
            cin >> month_10;
            monthTable[9] = month_10;
            cout << "11.: ";
            cin >> month_11;
            monthTable[10] = month_11;
            cout << "12.: ";
            cin >> month_12;
            monthTable[11] = month_12;
            decorate();
            break;
        case '2':
            decorate();
            wyswietl_dochody(monthTable, 12);
            decorate();
            break;
        case '3':
            decorate();
            cout << "Suma dochodow: " << calculate_sum(monthTable, 12) << endl;
            decorate();
            break;
        case '4':
            decorate();
            maksymalny_minimalny_dochod(monthTable, 12);
            decorate();
            break;
        case '5':
            decorate();
            sortuj(monthTable);
            decorate();
            break;
        case '6':
            decorate();
            pod_nad_srednim_dochodem(monthTable, n);
            decorate();
            break;
        }
    } while (tolower(klawisz) != 'z');
}

int main()
{
    choose_action();
}
