#include <iostream>
using namespace std;

void Fun(int &a, int &b)
{
    cout << a + b << endl;
};

int main()
{
    int a = 10, b = 20;
    Fun(a, b); // Call By Reference
    return 0;
}