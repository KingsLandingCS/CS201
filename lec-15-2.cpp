#include <iostream>
// #include <conio.h>
using namespace std;

main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int *ptr1, *ptr2;
    ptr1 = &a[0];
    ptr2 = &a[1];
    cout << "Value of a[0] : " << *ptr1 << endl;
    cout << "Value of a[1] : " << *ptr2 << endl;
    cout << "Sum is a[0] & a[1] : " << *ptr1 + *ptr2 << endl;

    // getch();
    return 0;
}