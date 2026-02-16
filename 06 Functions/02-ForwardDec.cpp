// ============================================================
// FORWARD DECLARATION IN C++
// ============================================================
//
// WHAT IS FORWARD DECLARATION?
// ----------------------------
// Forward Declaration is a way to tell the compiler that a function
// exists BEFORE we actually define it. It's like giving a "preview"
// or "promise" to the compiler that the function will be defined later.
//
// WHY DO WE NEED IT?
// ------------------
// In C++, the compiler reads code from TOP to BOTTOM.
// If you call a function before defining it, the compiler won't
// know what that function is and will give an ERROR!
// Forward declaration solves this problem.
//
// ============================================================
// DECLARATION vs DEFINITION - What's the Difference?
// ============================================================
//
// DECLARATION (also called PROTOTYPE):
// ------------------------------------
// - Tells the compiler the function's NAME, RETURN TYPE, and PARAMETERS
// - Does NOT contain the function body (code)
// - Ends with a semicolon (;)
// - Example: int add(int a, int b);  <-- This is a DECLARATION
//
// DEFINITION:
// -----------
// - Contains the ACTUAL CODE (body) of the function
// - Has curly braces { } with the implementation inside
// - Example:
//   int add(int a, int b) {     <-- This is a DEFINITION
//       return a + b;
//   }
//
// SIMPLE ANALOGY:
// Declaration = "I promise there will be a function called add()"
// Definition  = "Here is the actual function add() with its code"
//
// ============================================================

#include <iostream>
using namespace std;

// ============================================================
// FORWARD DECLARATION (Function Prototype)
// ============================================================
// This is the DECLARATION of sayHello() function
// - Tells compiler: "A function named sayHello will exist"
// - No function body here, just the signature
// - Ends with semicolon (;)
void sayHello();

// ============================================================
// MAIN FUNCTION
// ============================================================
int main()
{
  // We can call sayHello() here even though its DEFINITION is below
  // This works because we DECLARED it above (forward declaration)
  // Without the declaration above, this would give an error!
  sayHello();

  return 0;
}

// ============================================================
// FUNCTION DEFINITION
// ============================================================
// This is the DEFINITION of sayHello() function
// - Contains the actual code (body) inside { }
// - This is where the function's work is actually written
void sayHello()
{
  cout << "Hello :)";
}

// ============================================================
// EXPECTED OUTPUT:
// ============================================================
// Hello :)
// ============================================================