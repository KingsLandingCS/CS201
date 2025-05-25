#include <iostream>
// #include <conio.h>
using namespace std;

int main()
{

    int x = 10, y = 20;
    int *ptr1, *ptr2;

    ptr1 = &x;
    ptr2 = &y;

    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    cout << "value of x: " << *ptr1 << endl;
    cout << "value of y: " << *ptr2 << endl;

    // getch();
    return 0;
}