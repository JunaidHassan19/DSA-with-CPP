// ============================================================
// FUNCTION SYNTAX, PARAMETERS & ARGUMENTS IN C++
// ============================================================
//
// FUNCTION SYNTAX:
// ----------------
// returnType functionName(parameter1, parameter2, ...) {
//     // function body
//     return value;  // if returnType is not void
// }
//
// ============================================================
// PARAMETERS vs ARGUMENTS - What's the Difference?
// ============================================================
//
// PARAMETERS (also called Formal Parameters):
// -------------------------------------------
// - Variables listed in the function DEFINITION
// - They act as placeholders/containers for values
// - They exist inside the function only
// - Example: int sum(int a, int b)  <- 'a' and 'b' are PARAMETERS
//
// ARGUMENTS (also called Actual Parameters):
// ------------------------------------------
// - The actual VALUES passed when CALLING the function
// - They are the real data given to the function
// - Example: sum(10, 19)  <- '10' and '19' are ARGUMENTS
//
// SIMPLE ANALOGY:
// Parameter = Empty box with a label (a, b)
// Argument  = Actual item you put in the box (10, 19)
//
// ============================================================
// DEFAULT PARAMETERS
// ============================================================
// - You can assign a default value to a parameter
// - If no argument is passed, the default value is used
// - Default parameters must be from RIGHT to LEFT
// - Example: int sum(int a, int b = 5)
//   - 'b' has default value 5
//   - If you call sum(2), it means sum(2, 5)
//
// ============================================================

#include <iostream>
using namespace std;

// ============================================================
// FUNCTION 1: sum()
// ============================================================
// Returns the sum of two integers
// Parameters: int a, int b (both are required)
// Return type: int
int sum(int a, int b) // 'a' and 'b' are PARAMETERS
{
  int sum = a + b; // Calculating sum of parameters

  return sum; // Returning the result to caller
}

// ============================================================
// FUNCTION 2: diff()
// ============================================================
// Returns the difference of two integers (a - b)
// Parameters: int a, int b (both are required)
// Return type: int
int diff(int a, int b) // 'a' and 'b' are PARAMETERS
{
  int diff = a - b; // Calculating difference

  return diff; // Returning the result to caller
}

// ============================================================
// FUNCTION 3: sum1() - With DEFAULT PARAMETER
// ============================================================
// Returns the sum of two integers
// Parameter 'b' has a DEFAULT VALUE of 5
// If you don't pass second argument, b = 5 automatically
int sum1(int a, int b = 5) // 'b = 5' means b has default value 5
{
  int sum1 = a + b;
  return sum1;
}

// ============================================================
// MAIN FUNCTION
// ============================================================
int main()
{
  // Calling sum() with ARGUMENTS 10 and 19
  // Here: 10 → goes to parameter 'a'
  //       19 → goes to parameter 'b'
  int sm = sum(10, 19);           // 10 and 19 are ARGUMENTS
  cout << "Sum = " << sm << endl; // Output: Sum = 29

  // Calling diff() with ARGUMENTS 19 and 10
  // 19 - 10 = 9
  int di = diff(19, 10);           // 19 and 10 are ARGUMENTS
  cout << "Diff = " << di << endl; // Output: Diff = 9

  // Calling sum1() with only ONE argument
  // Since we didn't pass second argument, b uses default value (5)
  // So it becomes: sum1(2, 5) = 2 + 5 = 7
  int sm1 = sum1(2);                // Only passing 1 argument, b = 5 (default)
  cout << "sum1 = " << sm1 << endl; // Output: sum1 = 7

  return 0;
}

// ============================================================
// EXPECTED OUTPUT:
// ============================================================
// Sum = 29
// Diff = 9
// sum1 = 7
// ============================================================
//
// KEY POINTS TO REMEMBER:
// -----------------------
// 1. Parameters = Variables in function definition (placeholders)
// 2. Arguments = Actual values passed during function call
// 3. Default Parameters = Pre-assigned values if no argument passed
// 4. Default parameters must be rightmost (from right to left)
// 5. Return type must match the type of value being returned
// ============================================================