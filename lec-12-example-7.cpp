#include <iostream>
// #include <conio.h>
using namespace std;

int main()
{
    int a[5][3] = {{10, 20, 30}, {40, 50, 60}};

    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            cout << " " << a[i][j];
        }
        }
    cout << endl;
    // getch();
    return 0;
}
