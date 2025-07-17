#include <iostream>
using namespace std;

template <class T, class S>
T Test(S var)
{
    cout << var << endl;
    return "Hello World\n"; // Value 20
}

int main()
{
    cout << Test<string, int>(20);
    return 0;
}
