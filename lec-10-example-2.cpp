#include <iostream>
// #include <conio.h>
using namespace std;

void test(int a, char b, string c)
{
    int x = 10;
    cout << "Value of x : " << x + a << " " << b << " " << c << endl;
};

int main()
{
    // test(10, 'H', "Underwood"); call by Value/Argument

    int i = 10;
    char d = 'H';
    string e = "Underwood";

    test(i, d, e); // Call by variable
    // getch();
    return 0;
};