#include <iostream>
using namespace std;

int main()
{
    // a++ post fix increment operator
    // ++a pre fix increment operator
    // a-- post fix decrement operator
    // --a pre fix decrement operator

    // overflow is when a value is stored in a variable more than its capacity

    int start = 1;
    int sum = 0;
    while (start <= 100) //===> note if start is 1 is true so the loop will run infinitely
    {
        if (start % 2 == 0) // ===> even value
        {
            sum += start;
        }
        start++;

        cout << "Sum is:" << sum << endl;
    }

    return 0;
}

// when you store a value in a variable more than its capacity is called overflow