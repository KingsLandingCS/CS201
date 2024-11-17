#include <iostream>
// #include <conio.h>
using namespace std;

// binary search

void getValues(int a[], int n)
{
    cout << " Enter 5 Values: ";
    for (int i = 0; i <= n; i++)
    {
        cin >> a[i];
    }
}

int main()
{
    int a[5];
    getValues(a, 5);
    for (int i = 0; i <= 4; i++)
    {
        cout << a[i] << endl;
    }
    // getch();
    return 0;
}
