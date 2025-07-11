#include <iostream>
using namespace std;

int main()
{
    int i = 100;
    // Pointer variable, pointer takes a separate block of memory as opposed to reference that works on the same block of memory, Pointer stores the address of another
    // variable's memory block
    int *ptr = &i;
    cout << ptr << endl; // ==> this will show the address in the console
    // cout << *ptr << endl;  ==> and this will show the value that is represent in the memory block also known as Dereferencing
    // cout << &ptr << endl;  ==> &ptr is known as address operator with '&' that shows the address of the pointer in the console
    return 0;
}