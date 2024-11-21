#include <iostream>
// #include <conio.h>
using namespace std;

main()
{
    int x = 10, y = 20;
    int *const ptr = &x;
    ptr = &y;

    // getch();
    return 0;
}