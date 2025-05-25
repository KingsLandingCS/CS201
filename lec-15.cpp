#include <iostream>
// #include <conio.h>
using namespace std;

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int *ptr;
    ptr = a;
    cout << "Value of a[0] : " << *ptr << endl;
    cout << "Value of a[1] : " << *(ptr + 1) << endl;
    cout << "Value of a[2] : " << *(ptr + 2) << endl;
    cout << "Value of a[3] : " << *(ptr + 3) << endl;
    cout << "Value of a[4] : " << *(ptr + 4) << endl;

    // getch();
    return 0;
}