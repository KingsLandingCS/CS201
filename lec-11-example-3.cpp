#include <iostream>
// #include <conio.h>
using namespace std;

int main()
{
    int a[5], b[5];

    for (int i = 0; i <= 4; i++)
    {
        a[i] = i + 1;
        b[i] = a[i]; // the vairable in which we want to store the value, it is written at left side of the equal sign and from the variable we want to store the value is written on the right side of the equal

        // Print current value of a and b
        cout << "Value of a at " << i << " : " << a[i] << endl;
        cout << "Value of b at " << i << " : " << b[i] << endl;
    }

    // getch();
    return 0;
}
