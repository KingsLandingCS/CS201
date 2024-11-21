#include <iostream>
// #include <conio.h>
using namespace std;

main()
{
    int x = 10, y = 20;
    int *ptr1, *ptr2;
    ptr1 = &x;
    ptr2 = &y;

    *ptr1 = *ptr1 + *ptr2; // ptr1 = 30
    *ptr2 = *ptr1 - *ptr2; // ptr2 = 10
    *ptr1 = *ptr1 - *ptr2; // ptr1 = 20

    cout << "Value of x : " << *ptr1 << endl;
    cout << "Value of y : " << *ptr2 << endl;

    // getch();
    return 0;
}