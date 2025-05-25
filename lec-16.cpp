#include <iostream>
// #include <conio.h>
using namespace std;

main()
{
    int a[2][3] = {{10, 20, 30}, {40, 50, 60}};
    int *ptr = a[0]; // it implies that since the array is a multi dimensional, so, it assigns an address the first row and first column of the arry, in order to access next location we increment by 1.
    cout << "print values According to Index \n\n";

    for (int row = 0; row <= 1; row++)
    {
        for (int col = 0; col <= 2; col++)
        {
            cout << a[row][col] << endl;
        }
    }
    cout << endl;

    cout << "print values According to Pointer\n\n";
    for (int i = 0; i <= 5; i++)
    {
        cout << *ptr << endl; // pointer with asterisk prints the value stored in the variable, and pointer without asterisk prints the address
        ptr++;
    }
    

    // getch();
    return 0;
}