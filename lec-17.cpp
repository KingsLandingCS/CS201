#include <iostream>
// #include <conio.h>

using namespace std;

int main()
{
    char ch;
    for (int i = 0; i <= 255; i++)
    {
        ch = i;
        cout << " " << i << " " << ch << "\t";
    }

    cout << endl;

    return 0;

    // getch();
}