// ============================================================
// SCOPE IN C++
// ============================================================
//
// WHAT IS SCOPE?
// --------------
// Scope defines WHERE a variable can be accessed in your code.
// A variable only exists within the block { } where it's declared.
//
// TWO TYPES OF SCOPE:
// -------------------
// 1. LOCAL SCOPE  - Variable declared inside a function/block
//                   Can only be used within that function/block
//
// 2. GLOBAL SCOPE - Variable declared outside all functions
//                   Can be accessed from anywhere in the program
//
// ============================================================

#include <iostream>
using namespace std;

// GLOBAL VARIABLE - Declared outside all functions
// Can be accessed from ANY function
int globalVar = 100;

void showScope()
{
  // LOCAL VARIABLE - Only exists inside this function
  int localVar = 50;

  cout << "Inside showScope():" << endl;
  cout << "  Global Variable = " << globalVar << endl; // ✓ Accessible
  cout << "  Local Variable = " << localVar << endl;   // ✓ Accessible
}

int main()
{
  // LOCAL VARIABLE - Only exists inside main()
  int mainVar = 25;

  cout << "Inside main():" << endl;
  cout << "  Global Variable = " << globalVar << endl;     // ✓ Accessible
  cout << "  Main's Local Variable = " << mainVar << endl; // ✓ Accessible
  // cout << localVar;  // ✗ ERROR! localVar doesn't exist here

  cout << endl;
  showScope();

  return 0;
}

// ============================================================
// EXPECTED OUTPUT:
// ============================================================
// Inside main():
//   Global Variable = 100
//   Main's Local Variable = 25
//
// Inside showScope():
//   Global Variable = 100
//   Local Variable = 50
// ============================================================
//
// KEY POINTS:
// -----------
// • Local variables exist only inside their { } block
// • Global variables can be accessed from anywhere
// • Local variables are destroyed when function ends
// • Global variables exist throughout program execution
// ============================================================