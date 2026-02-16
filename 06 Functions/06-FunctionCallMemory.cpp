// ============================================================
// FUNCTION CALL IN MEMORY (Stack Memory)
// ============================================================
//
// When a C++ program runs, memory is divided into different sections:
//
// +-------------------+
// |   CODE SEGMENT    |  <- Where your program code is stored
// +-------------------+
// |   DATA SEGMENT    |  <- Global/Static variables
// +-------------------+
// |       HEAP        |  <- Dynamic memory (new, malloc)
// |         ↓         |
// |                   |
// |         ↑         |
// |       STACK       |  <- Function calls, local variables
// +-------------------+
//
// ============================================================
// WHAT IS THE STACK?
// ============================================================
// - Stack is a region of memory used for function calls
// - It follows LIFO (Last In, First Out) principle
// - Each function call creates a new "STACK FRAME"
// - When function ends, its stack frame is removed (popped)
//
// ============================================================
// WHAT IS A STACK FRAME?
// ============================================================
// When a function is called, a STACK FRAME is created containing:
// 1. Return address (where to go back after function ends)
// 2. Parameters passed to the function
// 3. Local variables of the function
// 4. Some bookkeeping information
//
// ============================================================
// HOW FUNCTION CALLS WORK IN MEMORY
// ============================================================
//
// STEP BY STEP EXAMPLE:
// When we call: add(5, 3) from main()
//
// STEP 1: main() starts executing
// +-------------------+
// |   main()          |  <- Stack frame for main
// |   - x = 5         |
// |   - y = 3         |
// |   - result        |
// +-------------------+
//
// STEP 2: add(5, 3) is called
// +-------------------+
// |   add()           |  <- Stack frame for add (PUSHED on top)
// |   - a = 5         |     (copy of x)
// |   - b = 3         |     (copy of y)
// |   - return addr   |
// +-------------------+
// |   main()          |  <- main is PAUSED, waiting for add()
// |   - x = 5         |
// |   - y = 3         |
// |   - result        |
// +-------------------+
//
// STEP 3: add() finishes, returns 8
// +-------------------+
// |   main()          |  <- add() stack frame is POPPED (removed)
// |   - x = 5         |     main() resumes execution
// |   - y = 3         |     result = 8 (value returned from add)
// |   - result = 8    |
// +-------------------+
//
// STEP 4: main() finishes
// Stack is empty, program ends
//
// ============================================================

#include <iostream>
using namespace std;

// ============================================================
// FUNCTION: add()
// ============================================================
// When this function is called:
// 1. A new stack frame is created
// 2. Parameters 'a' and 'b' get COPIES of the arguments
// 3. Local variable 'sum' is created in this stack frame
// 4. When function returns, this entire frame is destroyed
int add(int a, int b)
{
  // 'a', 'b', and 'sum' all live in add()'s stack frame
  int sum = a + b;
  return sum; // Return value, then destroy stack frame
}

// ============================================================
// FUNCTION: multiply()
// ============================================================
int multiply(int a, int b)
{
  // This function has its OWN stack frame
  // 'a' and 'b' here are DIFFERENT from add()'s 'a' and 'b'
  int product = a * b;
  return product;
}

// ============================================================
// FUNCTION: calculate()
// ============================================================
// This function calls other functions (nested calls)
// Each call creates a new stack frame on top
int calculate(int x, int y)
{
  // Stack: main -> calculate
  int sum = add(x, y); // Stack: main -> calculate -> add
                       // add() returns, its frame is removed
                       // Stack: main -> calculate

  int prod = multiply(x, y); // Stack: main -> calculate -> multiply
                             // multiply() returns, its frame is removed
                             // Stack: main -> calculate

  return sum + prod;
}

// ============================================================
// MAIN FUNCTION
// ============================================================
int main()
{
  // main()'s stack frame is created first
  // Variables x, y, result are stored in main's stack frame

  int x = 5;
  int y = 3;

  // When we call add(), a NEW stack frame is created on top of main's
  // The values 5 and 3 are COPIED to add()'s parameters
  int result = add(x, y);
  cout << "Sum: " << result << endl; // Output: Sum: 8

  // Calling calculate() - demonstrates nested function calls
  int calcResult = calculate(4, 2);
  cout << "Calculate result: " << calcResult << endl; // Output: 14
  // (4+2) + (4*2) = 6 + 8 = 14

  return 0;
  // main() ends, its stack frame is removed
  // Program terminates
}

// ============================================================
// EXPECTED OUTPUT:
// ============================================================
// Sum: 8
// Calculate result: 14
// ============================================================
//
// ============================================================
// KEY POINTS TO REMEMBER:
// ============================================================
// 1. STACK = Memory region for function calls (LIFO - Last In First Out)
//
// 2. STACK FRAME = Memory block for each function containing:
//    - Parameters
//    - Local variables
//    - Return address
//
// 3. When function is CALLED:
//    - New stack frame is PUSHED (added on top)
//    - Arguments are COPIED to parameters
//
// 4. When function RETURNS:
//    - Stack frame is POPPED (removed from top)
//    - All local variables are DESTROYED
//    - Control returns to the calling function
//
// 5. STACK OVERFLOW: If too many function calls (deep recursion),
//    stack runs out of space → "Stack Overflow Error"
//
// 6. Each function call is INDEPENDENT - local variables in one
//    function don't affect variables with same name in another
//
// ============================================================
// VISUAL CALL STACK for calculate(4, 2):
// ============================================================
//
// TIME →
//
// [main]  →  [main]      →  [main]      →  [main]      →  [main]
//            [calculate]    [calculate]    [calculate]
//                           [add]          [multiply]
//
// (start)    (call calc)   (calc calls   (calc calls   (all done)
//                           add)          multiply)
//
// ============================================================