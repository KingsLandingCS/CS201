#include <iostream>
// #include <conio.h>
using namespace std;

main()
{
    int a = 10, b = 25;
    int *ptr1, *ptr2;
    ptr1 = &a;
    ptr2 = &b;
    if (*ptr1 >= *ptr2)
    {
        cout << "Value of ptr1 is greater or equal" << endl;
    }
    else
    {
        cout << "Value of ptr2 is Greater Or equal" << endl;
    }

    // getch();
    return 0;
}