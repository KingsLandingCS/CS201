#include <iostream>
// #include <conio.h>

using namespace std;

main()
{
    const int row = 3;
    const int col = 3;

    int a[row][col];
    // take values from user
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter " << i << " " << j << " Value: ";
            cin >> a[i][j];
        }
    }

    // getch();
    return 0;
}