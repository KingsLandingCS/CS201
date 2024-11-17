#include <iostream>
// #include <conio.h>
using namespace std;

int main()
{
    int a[5] = {15, 2, 7, 4, 1};
    for (int i = 0; i <= 4; i++)
    {
        for (int j = 0; j <= 3; j++)
        {
            if (a[j] > a[j + 1])
            {
                a[j] = a[j] + a[j + 1];
                a[j + 1] = a[j] - a[j + 1];
                a[j] = a[j] - a[j + 1];
            }
        }
    }
    for (int i = 0; i <= 4; i++)
    {
        cout << " " << a[i] << endl;
    }

    // getch();
    return 0;
}