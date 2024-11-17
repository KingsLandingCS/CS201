#include <iostream>
// #include <conio.h>
using namespace std;

int main()
{
    int a[5], b[5], equal = 0;
    cout << "Please Enter 5 Integer Values: ";
    for (int i = 0; i <= 4; i++)
    {
        cin >> a[i];
    }

    cout << "Enter 5 Integer Values: ";
    for (int i = 0; i <= 4; i++)
    {
        cin >> b[i];
    }

    for (int i = 0; i <= 4; i++)
    {
        if (a[i] != b[i])
        {
            cout << "Arrays are not equal" << endl;
            equal = 0;
            break;
        }
        else
        {
            equal = 1;
        }
    }

    if (equal == 1)
    {
        cout << "Arrays are Equal" << endl;
    }
    // getch();
    return 0;
}



// Step 4: Compare the Two Arrays
// cpp
// Copy code
// for (int i = 0; i <= 4; i++)
// {
//     if (a[i] != b[i])
//     {
//         cout << "Arrays are not equal" << endl;
//         equal = 0;
//         break;
//     }
//     else
//     {
//         equal = 1;
//     }
// }
// A for loop iterates through the indices of both arrays from 0 to 4.
// At each index i:
// Condition: if (a[i] != b[i])
// If the corresponding elements of the arrays are not equal, the program outputs "Arrays are not equal" and sets the equal variable to 0.
// The break statement terminates the loop immediately because one mismatch is sufficient to conclude that the arrays are not equal.
// Else Block: else { equal = 1; }
// If the elements are equal at the current index, the equal variable is set to 1. However, this does not guarantee the arrays are fully equal yet—it only checks up to the current index.
// Step 5: Output the Result
// cpp
// Copy code
// if (equal == 1)
// {
//     cout << "Arrays are Equal" << endl;
// }
// After the loop finishes, the program checks if the equal variable is 1 (indicating no mismatches were found in the previous loop).
// If equal == 1, the program outputs "Arrays are Equal".