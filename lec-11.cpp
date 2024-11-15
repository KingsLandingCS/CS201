#include <iostream>
// #include <conio.h>
using namespace std;

int main()
{

    int a[5];
    for (int i = 0; i <= 4; i++)
    {
        cout << "Enter Value of a Index " << i << ": ";
        cin >> a[i];
    }

    for (int i = 0; i <= 4; i++)
    {
        cout << "Index of " << i << ": " << a[i] << endl;
    }

    // getch();
    return 0;
}
