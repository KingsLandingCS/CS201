#include <iostream>
// #include <conio.h>
using namespace std;

int test(int a, int b) // ==> child function
{
    int sum = 0;
    sum = a + b;
    return sum;
};

int main() // ==> parent function
{

    int a = 10, b = 20, z = 0;
    z = test(a, b);
    cout << "Sum is : " << z << endl;
    // getch();
    return 0;
};