#include <iostream>
using namespace std;

int main()
{
    const int row = 5;
    const int col = 5;
    int a[row][col];

    cout << " Enter 5 * 5 Square Matrix Values: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> a[i][j];
        }
    }

    // Reverse Column value
    for (int i = 0; i < row; i++)
    {
        for (int j = col - 1; j >= 0; j--)
        {
            cout << " " << a[i][j];
        }
        cout << endl;
    }

    return 0;
}