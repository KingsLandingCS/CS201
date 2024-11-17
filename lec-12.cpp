#include <iostream>
// #include <conio.h>
using namespace std;

int main()
{

    char a[100] = {'j', 'n'};

    for (int i = 0; i <= 99; i++)
    {
        if (a[i] == '\0')
        {
            break;
        }
        cout << " " << a[i] << endl;
    }

    // getch();
    return 0;
}
