#include <iostream>
// #include <conio.h>
using namespace std;

void test()
{
    int number;
    cout << " Enter Number : ";
    cin >> number;
    if (number % 2 == 0)
    {
        cout << "Number is even" << endl;
    }
    else
    {
        cout << "Number is odd" << endl;
    }
}

int main()
{
    test();
    // getch();
    return 0;
}