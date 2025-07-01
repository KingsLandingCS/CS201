#include <iostream>
using namespace std;

void Test(int a, int b)
{
    cout << "sum of a and b: " << a + b << endl;
}

int main()
{
    Test(10, 20);
    return 0;
}


// 🔍 What's the difference between inline functions and normal functions in C++?
// Let’s break it down step-by-step for a beginner:

// ✅ 1. Normal Function
// A normal function is defined like this:

// cpp
// Copy
// Edit
// int add(int a, int b) {
//     return a + b;
// }
// When you call it:

// cpp
// Copy
// Edit
// int result = add(3, 5);
// 👉 What happens?
// The program jumps to the function definition (at runtime),

// Runs the code inside,

// Then comes back to where it was called.

// 📌 This involves function call overhead:

// Passing arguments,

// Pushing/popping stack frames,

// Jumping to another location in memory.

// ✅ 2. Inline Function
// An inline function looks similar, but it's suggested to the compiler like this:

// cpp
// Copy
// Edit
// inline int add(int a, int b) {
//     return a + b;
// }
// 👉 What happens?
// Instead of jumping to the function,

// The compiler replaces the function call with the function body.

// So this:

// cpp
// Copy
// Edit
// int result = add(3, 5);
// Becomes this at compile time:

// cpp
// Copy
// Edit
// int result = 3 + 5;
// ✅ No jump
// ✅ No overhead
// ✅ Faster for small functions

// ⚖️ Summary Table:
// Feature	Inline Function	Normal Function
// Function Call Overhead	❌ (eliminated)	✅ (has overhead)
// Performance	Faster (for small functions)	Slightly slower
// Compiler Control	Suggested, not guaranteed	Always called normally
// Best for	Short, frequent functions	Larger or complex functions
// Syntax	inline int add(int a, int b)	int add(int a, int b)
