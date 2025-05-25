#include <iostream>
using namespace std;

int main()
{
    const int row = 3;
    const int col = 3;
    int a[row][col];
    // Take Values From User
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter " << i << " " << j << " value: ";
            cin >> a[i][j];
        }
    }

    return 0;
}
