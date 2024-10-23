#include <iostream>
using namespace std;

int main()
{
    // a++ post fix increment operator
    // ++a pre fix increment operator
    // a-- post fix decrement operator
    // --a pre fix decrement operator

    int start = 1;
    int sum = 0;
    while (start <= 10)
    {
        sum += start;
        start++;
        cout << "Sum is : " << sum << endl;
    }

    return 0;
}

// when you store a value in a variable more than its capacity is called overflow