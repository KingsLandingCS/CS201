#include <iostream>
// #include <conio.h>
using namespace std;

main()
{
    int a = 10;
    int *ptr1 = &a;
    int *ptr2 = ptr1;
    cout << "Value of a : " << a << endl;
    cout << "Value of a : " << *ptr1 << endl;
    cout << "Value of a : " << *ptr2 << endl;

    // getch();
    return 0;
}