#include <iostream>
// #include <conio.h>
using namespace std;

main()
{
    int *ptr;   // Pointer
    int x = 10; // variable
    ptr = &x;

    // *ptr ==> value if the x
    // ptr  ==> address of the x
    // &ptr ==> address of the pointer

    cout << "Value of x: " << *ptr << endl;
    cout << "Address of x: " << ptr << endl;
    cout << "Address of Pointer: " << &ptr << endl;

    // getch();
    return 0;
}