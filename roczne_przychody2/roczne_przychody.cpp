#include <iostream>
#include <random>

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

void wczytaj_dochody(float arr[]){
    cout << "WPISZ PO KOLEI KWOTY: " << endl;

    for (int i = 1; i <=12 ; i++) {
        cout<<i<<". ";
        cin >> arr[i-1];
    }
}

void wyswietl_dochody(float arr[], float n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i << "." << arr[i-1] << endl;
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
                decorate();
                wczytaj_dochody(monthTable);
                decorate();

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

int main() {
    choose_action();
}
