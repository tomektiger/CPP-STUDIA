#include <iostream>
#include <random>
#include <numeric>
using namespace std;

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

float calculate_average(float arr[], float n)
{
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return float(sum / n);
}

int main()
{
    cout << "PROGRAM SEDZIOWSKI :) " << endl;
    int sedzia1, sedzia2, sedzia3, sedzia4, sedzia5, sedzia6, sedzia7, sedzia8, sedzia9, sedzia10;
    while (true)
    {
        cout << "1.: ";
        cin >> sedzia1;
        if (sedzia1 >= 0 && sedzia1 <= 10)
            break;
        else
        {
            cout << "PODAJ LICZBE Z ZAKRESU OD 1-10" << endl;
        }
    }
    while (true)
    {
        cout << "2.: ";
        cin >> sedzia2;
        if (sedzia2 >= 0 && sedzia2 <= 10)
            break;
        else
        {
            cout << "PODAJ LICZBE Z ZAKRESU OD 1-10" << endl;
        }
    }
    while (true)
    {
        cout << "3.: ";
        cin >> sedzia3;
        if (sedzia3 >= 0 && sedzia3 <= 10)
            break;
        else
        {
            cout << "PODAJ LICZBE Z ZAKRESU OD 1-10" << endl;
        }
    }
    while (true)
    {
        cout << "4.: ";
        cin >> sedzia4;
        if (sedzia4 >= 0 && sedzia4 <= 10)
            break;
        else
        {
            cout << "PODAJ LICZBE Z ZAKRESU OD 1-10" << endl;
        }
    }
    while (true)
    {
        cout << "5.: ";
        cin >> sedzia5;
        if (sedzia5 >= 0 && sedzia5 <= 10)
            break;
        else
        {
            cout << "PODAJ LICZBE Z ZAKRESU OD 1-10" << endl;
        }
    }
    while (true)
    {
        cout << "6.: ";
        cin >> sedzia6;
        if (sedzia6 >= 0 && sedzia6 <= 10)
            break;
        else
        {
            cout << "PODAJ LICZBE Z ZAKRESU OD 1-10" << endl;
        }
    }
    while (true)
    {
        cout << "7.: ";
        cin >> sedzia7;
        if (sedzia7 >= 0 && sedzia7 <= 10)
            break;
        else
        {
            cout << "PODAJ LICZBE Z ZAKRESU OD 1-10" << endl;
        }
    }
    while (true)
    {
        cout << "8.: ";
        cin >> sedzia8;
        if (sedzia8 >= 0 && sedzia8 <= 10)
            break;
        else
        {
            cout << "PODAJ LICZBE Z ZAKRESU OD 1-10" << endl;
        }
    }
    while (true)
    {
        cout << "9.: ";
        cin >> sedzia9;
        if (sedzia9 >= 0 && sedzia9 <= 10)
            break;
        else
        {
            cout << "PODAJ LICZBE Z ZAKRESU OD 1-10" << endl;
        }
    }
    while (true)
    {
        cout << "10.: ";
        cin >> sedzia10;
        if (sedzia10 >= 0 && sedzia10 <= 10)
            break;
        else
        {
            cout << "PODAJ LICZBE Z ZAKRESU OD 1-10" << endl;
        }
    }

    float pointsTable[] = {sedzia1, sedzia2, sedzia3, sedzia4, sedzia5, sedzia6, sedzia7, sedzia8, sedzia9, sedzia10};

    float min = calculate_min(pointsTable, 10);
    float max = calculate_max(pointsTable, 10);

    for (int i = 0; i < 10; i++)
    {
        if (pointsTable[i] == min)
        {
            pointsTable[i] = 0;
        }
        else if (pointsTable[i] == max)
        {
            pointsTable[i] = 0;
        }
    }

    cout << "AVG: " << calculate_average(pointsTable, 10) << endl;
}