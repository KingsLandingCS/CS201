#include <iostream>
// #include <conio.h>
using namespace std;

void convert(char *str) // char *str: Takes a pointer to the first character of the string. The string is passed by reference, so changes made here directly modify the original string.
{
    while (*str != '\0')  // Loop until we reach the end of the string
    {
        if (islower(*str))
        {
            *str = toupper(*str);
        }
        str++; // Move to the next character in the string
    }
}

main()
{
    char str[30] = "Welcome to Virtual University";
    convert(str);
    cout << str << endl;
    // getch();
    return 0;
}

// In the code, we use *str and str for different purposes because they refer to different aspects of the pointer and its usage. Let me explain in detail:

// 1. What Does str Represent?
// str is a pointer that stores the address of the current character in the string.
// When we use str by itself, it refers to the memory address of the character it points to.
// 2. What Does *str Represent?
// *str is the dereferenced value of the pointer. It gives us the actual character stored at the memory address str.
// Where and Why Are We Using *str and str?
// a. Using *str:
// We use *str when we want to access or modify the value (character) at the memory address the pointer is pointing to.
// Examples:

// Check if Character is Lowercase:

// c
// Copy code
// if (islower(*str))
// Here, *str retrieves the current character being pointed to by str.
// islower(*str) checks if the value (character) is a lowercase letter.
// Convert to Uppercase:

// c
// Copy code
// *str = toupper(*str);
// *str retrieves the character, and toupper(*str) converts it to uppercase.
// The result is stored back in the same location (*str), modifying the original string.
// b. Using str:
// We use str when we want to manipulate the pointer itself, not the value it points to.
// Examples:

// Increment the Pointer:

// c
// Copy code
// str++;
// Here, str is incremented to point to the next character in the string.
// This does not affect the value of the current character but changes the pointer to a new memory address.
// Condition in While Loop:

// c
// Copy code
// while (*str != '\0')
// We use *str to check the character value ('\0'), but the loop moves the pointer str to traverse the string.
// Summary Table:
// Code Usage	Meaning	Purpose
// str	The pointer itself (address of the current character).	Used to move the pointer to the next character.
// *str	The value (character) stored at the address str.	Used to read or modify the character at str.
// Why This Dual Usage?
// This pattern is common when working with pointers:
// The pointer (str) allows navigation through the string.
// The dereferenced pointer (*str) allows access to or modification of the data.
// By alternating between str and *str, the code can efficiently traverse and modify the string directly in memory.