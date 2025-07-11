#include <iostream>
using namespace std;

int main()
{
    int i = 100;
    // Pointer variable, pointer takes a separate block of memory as opposed to reference that works on the same block of memory, Pointer stores the address of another
    // variable's memory block
    int *ptr = &i;
    cout << i << endl;
    return 0;
}