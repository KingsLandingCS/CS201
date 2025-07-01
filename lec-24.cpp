#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int numberOfStudent, totalAges = 0, *ptr1, *ptr2;
    cout << "How many students ages you want to store? ";
    cin >> numberOfStudent;
    ptr1 = (int *)malloc(numberOfStudent * sizeof(int)); // You're multiplying: numberOfStudent → total number of integers you want to store (e.g., 5 students), sizeof(int) → size (in bytes) of one integer (typically 4 bytes on most systems)
    // returns a void* → a generic pointer (doesn’t know what type of data it’s pointing to).But you want to store int values in that memory.So you cast the pointer to the right type
    // Hey, treat this generic block of memory as an int* — a pointer to integers
    if (ptr1 == NULL)
    {
        cout << "Dynamic Memory Not Allocated" << endl;
        return 1;
    }

    // 📌 What is ptr2?
    // ptr2 is a pointer to an int, which means it stores the address of a memory location where an int lives.

    //     🧠 What is *ptr2?
    // *ptr2 is the value stored at the memory location that ptr2 points to.
    // This is called dereferencing the pointer.
    ptr2 = ptr1;
    for (int i = 1; i <= numberOfStudent; i++) //Why don’t we start the loop with i = numberOfStudent? This loop runs from student 1 to student n, forward, like: But if you write: for (int i = numberOfStudent; i <= ???; i++), Then you have a problem: The loop starts at the last student, e.g., i = 5, But i <= numberOfStudent is only true for one time
    {
        cout << "Enter Age of Student " << i << ": ";
        cin >> *ptr2;
        totalAges = totalAges + *ptr2;
        ptr2++;
    }

    //     ▶️ Loop Iteration Breakdown
    // Let’s go step-by-step through what happens inside the loop.

    // ✅ First Iteration: i = 1
    // cout << "Enter Age of Student " << i << ": ";
    // cin >> *ptr2;
    // totalAges = totalAges + *ptr2;
    // ptr2++;
    // *ptr2 means: store the age at the memory address ptr2 is pointing to

    // Let’s say user inputs 18
    // So *ptr2 = 18

    // totalAges = 0 + 18 = 18

    // ptr2++ now moves to the next memory address, i.e., [1]

    // Calculates the average age by dividing the sum (totalAges) by the number of students.
    // Then, it prints the result to the screen.
    // 🚨 Note: Since both totalAges and numberOfStudent are int, this does integer division (e.g., 35 / 4 = 8).
    cout << "Average Age: " << totalAges / numberOfStudent;

    // Releases the dynamically allocated memory created by malloc.
    //  You must do this to prevent memory leaks in C/C++.
    //  If you forget this, the memory stays allocated until your program ends. In larger programs, this can eat up memory over time.
    free(ptr1);

    // After freeing the memory, we make ptr2 point to NULL (i.e., nowhere).
    // This is good practice to avoid dangling pointers (i.e., pointers pointing to deleted memory).
    ptr2 = NULL;

    return 0;
}

// ⚠️ 2. What is a Memory Leak?
// ❗ Definition:
// A memory leak happens when you allocate memory on the heap but never free it, and you also lose the pointer to it.
// 📌 Why it's bad:
// Over time, memory leaks can use up all available RAM.
// Your program becomes slow or even crashes in large applications.

// ⚠️ 3. What is a Dangling Pointer?
// ❗ Definition:
// A dangling pointer is a pointer that still points to memory that has already been freed.
// 📌 Why it's dangerous:
// Accessing it may cause your program to crash or corrupt data.
// It's like pointing to a house that has been demolished.
// Even though ptr still exists, the memory it pointed to no longer belongs to your program.
// ✅ To fix: Always set the pointer to NULL after free.

// 🧠 Imagine Your Program is a Kitchen 🍳
// When you're cooking:

// You use a counter (temporary space) to prepare food.

// You also have a storage cabinet (long-term space) to store ingredients.

// In your program:

// The counter is like the stack — fast, temporary memory.

// The cabinet is like the heap — slower, flexible memory.

// 💡 What is the Heap in Programming?
// The heap is a part of your computer's memory where your program can store things while it's running, but you decide how much and when to clean up.

// Why use the heap?
// When you don’t know the size of data at compile time.

// When you want to store large or flexible data.

// When you want the data to last even after a function ends.

// 📦 Stack vs Heap (Simple Table)
// Feature	Stack	Heap
// Speed	Fast	Slower
// Lifetime	Automatic (cleans itself)	Manual (you must clean it up)
// Size	Fixed, small	Large, flexible
// Syntax	Regular variable	new / malloc📦 Stack vs Heap (Simple Table)
// Feature	Stack	Heap
// Speed	Fast	Slower
// Lifetime	Automatic (cleans itself)	Manual (you must clean it up)
// Size	Fixed, small	Large, flexible
// Syntax	Regular variable	new / malloc

// ❓ Why Not Just Use Normal Variables?
// Because normal variables:
// disappear when the function ends.
// can’t handle unknown sizes at runtime.
// The heap is useful when you want:
// memory to stay even after the function ends.
// to create arrays, lists, or objects with flexible sizes.

// ✅ Heap and Stack are both inside RAM
// When you run a program, your operating system gives it some memory from RAM. This memory is divided into different regions:

// sql
// Copy
// Edit
// +-----------------------------+ <-- High memory address
// |     Stack (local vars)     |
// |----------------------------|
// |     Heap (dynamic memory)  |
// |----------------------------|
// |     Data Segment           |
// |----------------------------|
// |     Code Segment (program) |
// +-----------------------------+ <-- Low memory address
// 💡 Summary:
// Stack: Automatically managed memory (local variables, function calls).

// Heap: Manually managed memory (using new, delete, or malloc, free).

// 🛠️ 1. Compile-Time
// Definition:
// The phase when your code is translated from C++ (or any language) into machine code (executable .exe, .out, etc.) by a compiler.
// 🔍 What happens at compile-time:
// Syntax checking (;, {}, variable declarations)
// Type checking (int, string, etc.)
// Converting human-readable code into binary
// Memory layout for static and global variables
// Detects many kinds of errors (like missing ;, undeclared variables)
// 📌 Example:
// int a = "hello"; // ❌ Type mismatch error caught at compile-time
// This will give an error before the program runs.

// 🚀 2. Run-Time
// Definition:
// The phase when the compiled program is executed by the computer — you’re actually running the app.
// 🔍 What happens at run-time:
// Input/output operations
// Logic execution (loops, conditions)
// Memory allocation (new, malloc)
// Interaction with the operating system
// Run-time errors (like divide by zero, null pointer access)
// 📌 Example:
// int a = 5, b = 0;
// int c = a / b; // ❌ Run-time error: division by zero
// This compiles fine, but crashes while running.

// 🧠 Key Differences:
// Feature	Compile-Time	Run-Time
// When it happens	Before program runs	While program runs
// Who handles it	Compiler	CPU + OS
// Errors detected	Syntax, type, missing variables	Division by zero, null pointer, etc.
// Examples	int a = "text";	int x = 10/0;


// 🧪 Analogy:
// Imagine you’re baking a cake:
// Compile-time = Reading the recipe, preparing ingredients (you check if you have everything).
// Run-time = Actually baking the cake (you find out if the oven breaks, or the cake burns).