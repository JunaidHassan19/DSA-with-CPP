/*
  Constants and Macros in C++
  ----------------------------

  CONSTANT:
  ---------
  A constant is a variable whose value cannot be changed once assigned.
  Used when you want to protect a value from accidental modification.

  Two ways to create constants:
  1. Using 'const' keyword   → const dataType name = value;
  2. Using '#define' (Macro) → #define NAME value

  MACRO:
  ------
  A macro is a preprocessor directive that replaces a name with a value
  BEFORE the code is compiled. It does not take memory like variables.

  ┌──────────────────────────────────────────────────────────────────┐
  │  DIFFERENCE: const vs #define (Macro)                            │
  ├──────────────────────────────────────────────────────────────────┤
  │  const                      │  #define (Macro)                   │
  ├─────────────────────────────┼────────────────────────────────────┤
  │  Handled by compiler        │  Handled by preprocessor           │
  │  Has a data type            │  No data type                      │
  │  Uses memory                │  No memory (just text replacement) │
  │  Follows scope rules        │  Global (no scope)                 │
  │  Safer and type-checked     │  No type checking                  │
  │  Example: const int x = 5;  │  Example: #define X 5              │
  └─────────────────────────────┴────────────────────────────────────┘
*/

#include <iostream>
using namespace std;

// ========== MACROS (defined before main, no semicolon!) ==========
#define PI 3.14159            // Macro for PI value
#define MAX_SIZE 100          // Macro for maximum size
#define GREETING "Hello!"     // Macro for string
#define SQUARE(x) ((x) * (x)) // Macro with parameter (function-like)

int main()
{
  // ========== 1. USING const KEYWORD ==========
  cout << "--- Using const keyword ---" << endl;

  const int MAX_MARKS = 100;    // Integer constant
  const float GRAVITY = 9.8f;   // Float constant
  const char GRADE = 'A';       // Character constant
  const string COLLEGE = "IIT"; // String constant

  cout << "MAX_MARKS = " << MAX_MARKS << endl;
  cout << "GRAVITY   = " << GRAVITY << endl;
  cout << "GRADE     = " << GRADE << endl;
  cout << "COLLEGE   = " << COLLEGE << endl;

  // MAX_MARKS = 200;  // ERROR! Cannot modify a constant

  // ========== 2. USING #define (MACROS) ==========
  cout << "\n--- Using #define (Macros) ---" << endl;

  cout << "PI       = " << PI << endl;
  cout << "MAX_SIZE = " << MAX_SIZE << endl;
  cout << "GREETING = " << GREETING << endl;

  // ========== 3. PRACTICAL EXAMPLE - Area of Circle ==========
  cout << "\n--- Practical Example ---" << endl;

  float radius = 5.0;
  float area = PI * radius * radius;
  cout << "Radius = " << radius << endl;
  cout << "Area of Circle = " << area << endl;

  // ========== 4. MACRO WITH PARAMETER (Function-like Macro) ==========
  cout << "\n--- Function-like Macro ---" << endl;

  int num = 4;
  cout << "SQUARE(" << num << ") = " << SQUARE(num) << endl;
  cout << "SQUARE(7) = " << SQUARE(7) << endl;
  cout << "SQUARE(2+3) = " << SQUARE(2 + 3) << endl; // (2+3)*(2+3) = 25

  // ========== 5. WHEN TO USE WHAT? ==========
  /*
    Use 'const' when:
    - You need type safety
    - You want scope-limited constants
    - Working with complex data types

    Use '#define' when:
    - Defining simple numeric/string constants
    - Creating function-like macros for simple operations
    - Conditional compilation (#ifdef, #ifndef)
  */

  cout << "\n--- Summary ---" << endl;
  cout << "const: Type-safe, scoped, uses memory" << endl;
  cout << "#define: No type, global, no memory (text replacement)" << endl;

  return 0;
}
