#include <iostream>
using namespace std;

int main()
{
    int num = 5;
    for (int i = 1; i <= 10; i++)
    {
        cout << i << " * " << num << " = " << i * num << endl;
    }
    cout << "Loop Terminated" << endl;

    return 0;
}

// 3rd structure in programming is loop, when we want to run a block of code multiple times

// Top testing loop (While loop), in while loop the condition gets checked first before execution of the block qoute (body)
// bottom testing loop, in do while loop the block qoute (body) will get executed atleast once before checking the condition