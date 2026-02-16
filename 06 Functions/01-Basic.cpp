// ============================================
// INTRODUCTION TO FUNCTIONS IN C++
// ============================================
// A function is a reusable block of code that performs a specific task.
// Benefits of using functions:
// 1. Code Reusability - Write once, use multiple times
// 2. Modularity - Break complex problems into smaller parts
// 3. Easy Debugging - Easier to find and fix errors
// 4. Clean Code - Makes program organized and readable

#include <iostream>
using namespace std;

// ============================================
// FUNCTION 1: sayHello()
// ============================================
// Syntax: returnType functionName(parameters) { body }
//
// - void: This function doesn't return any value
// - sayHello: Name of the function (can be any valid identifier)
// - (): Empty parentheses mean no parameters/arguments needed
void sayHello()
{
  // Function body - the code that runs when function is called
  cout << "Hello Using Function" << endl;
}

// ============================================
// FUNCTION 2: Assistant()
// ============================================
// This function demonstrates that one function can call another function
// This is known as "function calling" or "nested function calls"
void Assistant()
{
  // Calling sayHello() function from inside Assistant()
  sayHello(); // First, this prints "Hello Using Function"

  // Then this line executes
  cout << "Work done" << endl;
}

// ============================================
// MAIN FUNCTION
// ============================================
// main() is a special function - program execution starts here
// Every C++ program must have exactly one main() function
// int: main() returns an integer value to the operating system
int main()
{
  // FUNCTION CALL 1: Calling sayHello() directly
  // Output: "Hello Using Function"
  sayHello();

  // FUNCTION CALL 2: Calling Assistant()
  // This will:
  // 1. First call sayHello() -> prints "Hello Using Function"
  // 2. Then print "Work done"
  Assistant();

  // return 0: Indicates the program executed successfully
  // 0 = success, non-zero = error (convention)
  return 0;
}

// ============================================
// EXPECTED OUTPUT:
// ============================================
// Hello Using Function    <- from sayHello() call in main()
// Hello Using Function    <- from sayHello() call inside Assistant()
// Work done               <- from Assistant()
// ============================================