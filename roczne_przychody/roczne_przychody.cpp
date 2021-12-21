#include <iostream>
#include <random>
#include <numeric>
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

int main()
{
    float month_1, month_2, month_3, month_4, month_5, month_6, month_7, month_8, month_9, month_10, month_11, month_12;

    cout << "PROGRAM OBLICZAJACY SUME/SREDNIE/MIN/MAX ZAROBKI\n"
         << endl;
    cout << "1.: ";
    cin >> month_1;
    cout << "2.: ";
    cin >> month_2;
    cout << "3.: ";
    cin >> month_3;
    cout << "4.: ";
    cin >> month_4;
    cout << "5.: ";
    cin >> month_5;
    cout << "6.: ";
    cin >> month_6;
    cout << "7.: ";
    cin >> month_7;
    cout << "8.: ";
    cin >> month_8;
    cout << "9.: ";
    cin >> month_9;
    cout << "10.: ";
    cin >> month_10;
    cout << "11.: ";
    cin >> month_11;
    cout << "12.: ";
    cin >> month_12;

    float monthTable[] = {month_1, month_2, month_3, month_4, month_5, month_6, month_7, month_8, month_9,
                          month_10, month_11, month_12};

    float n = sizeof(monthTable) / sizeof(monthTable[0]);

    cout << "SUM: " << calculate_sum(monthTable, n) << endl;
    cout << "AVG: " << calculate_average(monthTable, n) << endl;
    cout << "MIN: " << calculate_min(monthTable, n) << endl;
    cout << "MAX: " << calculate_max(monthTable, n) << endl;
}
