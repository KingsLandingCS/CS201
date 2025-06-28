#include <iostream>
using namespace std;
// #define PI 3.142

int main()
{
#ifdef PI
    for (int i = 1; i <= 5; i++)
    {
        cout << "Hello World!" << endl;
    }
#endif

#ifndef PI
    cout << "Sorry PI Not Defined" << endl;
#endif

    return 0;
}