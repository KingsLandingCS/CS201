#include <iostream>
using namespace std;

int main()
{
    int i = 100;
    // reference variable
    int &j = i;
    j = 129;

    cout << i << endl;
    return 0;
}