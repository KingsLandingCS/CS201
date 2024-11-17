#include <iostream>
// #include <conio.h>
using namespace std;

int main()
{
    int a[5], b[5];
    cout << "Please Enter 5 Integer Values: ";
    for (int i = 0; i < 5; i++)
        cin >> a[i];

    cout << "Enter 5 Integer Values: ";
    for (int i = 0; i < 5; i++)
        cin >> b[i];

    for (int i = 0; i < 5; i++)
    {
        if (a[i] != b[i])
        {
            cout << "Arrays are not equal" << endl;
            return 0;
        }
    }
    cout << "Arrays are Equal" << endl;
    return 0;
}