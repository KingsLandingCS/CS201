#include <iostream>
// #include <conio.h>
using namespace std;

void sum()
{
    int a, b;
    cout << "Enter 1st Value : " << endl;
    cin >> a;
    cout << "Enter 2nd Value :" << endl;
    cin >> b;
    cout << "Sum is : " << a + b << endl;
}

void sub()
{
    int a, b;
    cout << "Enter 1st Value : " << endl;
    cin >> a;
    cout << "Enter 2nd Value :" << endl;
    cin >> b;
    cout << "Sub is : " << a - b << endl;
}

int main()
{
    sum();
    sub();
    // getch();
    return 0;
}