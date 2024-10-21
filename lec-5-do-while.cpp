#include <iostream>
using namespace std;

int main()
{
    int i = 0;
    do
    {
        cout << "Hello World!" << endl;
        i++;
    } while (i < 0);

    cout << "Loop Terminated" << endl;
    return 0;
}

// 3rd structure in programming is loop, when we want to run a block of code multiple times

// Top testing loop (While loop), in while loop the condition gets checked first before execution of the block qoute (body)
// bottom testing loop, in do while loop the block qoute (body) will get executed atleast once before checking the condition (even if the condition is false)