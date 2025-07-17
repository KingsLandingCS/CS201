#include <iostream>
using namespace std;
template <class T>

void Test(T a)
{
    cout << a << endl;
}

int main()
{
    Test(202.5);
    return 0;
}