#include <iostream>
using namespace std;

main()
{
    for (int i = 1; i <= 5; i++)
    {
        cout << "Hello World!" << endl;
        // break;    // break the loop
        continue; // continue the loop, skips the current iteration (it will also skip any code below it)
        cout << "i = " << i << endl;
    }
    return 0;
}