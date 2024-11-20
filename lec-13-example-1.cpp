#include <iostream>
// #include <conio.h>

using namespace std;

main()
{
    const int row = 5;
    const int col = 5;

    int a[row][col];
    // take values from user

    cout << "Enter 5 *5 square matrix values: ";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> a[i][j];
        }
    }

    // Reverse col value
    cout << "5*5 values: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = col - 1; j >= 0; j--)
        {
            cout << " " << a[i][j];
        }
        cout << endl;
    }

    // getch();
    return 0;
}