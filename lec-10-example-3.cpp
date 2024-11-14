#include <iostream>
// #include <conio.h>
using namespace std;

void test(int &i, char &d, string &e)
{
    int x = 10;
    cout << "Value of x : " << x + i << " " << d << " " << e << endl;
};

int main()
{
    // test(10, 'H', "Underwood"); call by Value/Argument

    int i = 10;
    char d = 'H';
    string e = "Underwood";

    //  test(i, d, e); // Call by variable
    test(i, d, e); // Call by reference  ===> efficient
    // getch();
    return 0;
};