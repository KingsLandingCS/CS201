#include <iostream>
using namespace std;

int main()
{
    int *ptr;
    ptr = new int; // Dynamic Memory Allocation
    delete ptr;    // Release Dynamic Memory
    return 0;
}