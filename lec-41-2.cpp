#include <iostream>
using namespace std;

template <class T>
void Test(T a)
{
    cout << a << endl;
}

template <class T>
void Test(T a, T b)
{
    cout << a << " " << b << endl;
}

template <class T>
void Test(T a, T b, T c)
{
    cout << a << " " << b << " " << c << endl;
}

int main()
{
    Test(33);         // Calls 1-argument template
    Test(23, 77);     // Calls 2-argument template
    Test(23, 77, 88); // Calls 3-argument template

    return 0;
}
