#include <iostream>
using namespace std;

int main() // main is the main function, int is the return type
{          // squiggly brackets are used to define a block of function, function body

    int x = 20; // int is a data type, x (name of variable) is a variable, 20 is a value, '=' is an assignment operator
    int c;
    short y;
    long z; // variables declaration
    y = 10;
    c = 20;    // When we store a value in a variable the very first time it is known as initialization
    z = x + y; // Arithmetic operation
    cout << z << endl;
    cout << "Hello World!\n"; // ';' is a delimiter

    return 0;
}

// in high level programming languages the code we right, is called as source code
// then we compile it into machine code / binary,
// which is called as object code
// during programming we need to store data in memory and we use variables to store it, which are user defined variables
// data types in C++ are int, short, long float, double, char, bool, string, etc
// int takes 4 bytes of memory   ==> 32 bits
// short takes 2 bytes of memory ==> 16 bits
// long takes 8 bytes of memory  ==> 64 bits
// float takes 4 bytes of memory for real numbers
// double takes 8 bytes of memory
// char takes 1 byte of memory
// bool takes 1 byte of memory
// string takes 4 bytes of memory
// we can store -32,768 to 32,767 in short
// we can store −2,147,483,648 to 2,147,483,647 in int
// we can store -2,147,483,648 to 2,147,483,647 in long
// float range -3.4e38 to 3.4e38
// double range -1.7e308 to 1.7e308
