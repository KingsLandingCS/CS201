#include <iostream>
// #include <conio.h>
using namespace std;

int main()
{
    char str[30] = "RavenWood";
    char *ptr;
    ptr = str;
    while (*ptr != '\0')
    {
        cout << *ptr;
        ptr++;
    }

    // getch();
    return 0;
}