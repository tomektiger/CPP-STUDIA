#include <iostream>
#include <math.h>
using namespace std;

bool czyPierwsza(int a)
{
    if (a % 2 == 0)
        return (a == 2);
    for (int i = 3; i <= sqrt(a); i += 2)
    {
        if (a % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    for (int i = 2; i <= 100; i++)
    {
        if (czyPierwsza(i))
        {
            cout << i << endl;
        }
    }
}