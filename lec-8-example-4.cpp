#include <iostream>
using namespace std;

main()
{
p: // label for goto statement redirects here
    cout << "Hello World" << endl;
    goto p; // goto statement
    return 0;
}