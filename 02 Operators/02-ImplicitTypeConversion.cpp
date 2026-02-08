/*
  Implicit Type Conversion (Type Coercion) in C++
  -------------------------------------------------

  Implicit conversion happens AUTOMATICALLY by the compiler when:
  - Different data types are mixed in an expression
  - A value is assigned to a variable of different type

  RULE: Smaller data type → Larger data type (to avoid data loss)

  ┌─────────────────────────────────────────────────────────────────┐
  │  TYPE HIERARCHY (Lower → Higher)                                │
  │                                                                 │
  │  bool → char → short → int → long → float → double → long double│
  │                                                                 │
  │  When mixed, smaller type is promoted to larger type            │
  └─────────────────────────────────────────────────────────────────┘

  Examples:
  - int + float   → float + float   → result is float
  - char + int    → int + int       → result is int
  - int / double  → double / double → result is double
*/

#include <iostream>
using namespace std;

int main()
{
  // ========== 1. INTEGER DIVISION vs FLOAT DIVISION ==========
  cout << "--- Integer vs Float Division ---" << endl;

  cout << "10 / 3     = " << (10 / 3) << endl;     // 3 (both int → int result)
  cout << "10 / 3.0   = " << (10 / 3.0) << endl;   // 3.33333 (int → double)
  cout << "10.0 / 3   = " << (10.0 / 3) << endl;   // 3.33333 (int → double)
  cout << "10.0 / 3.0 = " << (10.0 / 3.0) << endl; // 3.33333 (both double)

  // ========== 2. CHAR TO INT CONVERSION ==========
  cout << "\n--- Char to Int Conversion ---" << endl;

  // Characters are stored as ASCII values
  cout << "'A' + 1  = " << ('A' + 1) << endl; // 65 + 1 = 66 (ASCII of 'B')
  cout << "'B' + 1  = " << ('B' + 1) << endl; // 66 + 1 = 67
  cout << "'a' + 1  = " << ('a' + 1) << endl; // 97 + 1 = 98
  cout << "'0' + 5  = " << ('0' + 5) << endl; // 48 + 5 = 53 (ASCII of '5')

  // To get character result, store in char variable
  char nextChar = 'A' + 1;
  cout << "'A' + 1 as char = " << nextChar << endl; // 'B'

  // ========== 3. INT + FLOAT CONVERSION ==========
  cout << "\n--- Int + Float Conversion ---" << endl;

  int a = 5;
  float b = 2.5f;
  cout << "int 5 + float 2.5 = " << (a + b) << endl; // 7.5 (int promoted to float)

  int x = 10;
  double y = 3.0;
  cout << "int 10 / double 3.0 = " << (x / y) << endl; // 3.33333

  // ========== 4. ASSIGNMENT CONVERSION ==========
  cout << "\n--- Assignment Conversion ---" << endl;

  // Float to Int (loses decimal part - DATA LOSS!)
  int num = 9.99; // Implicit: 9.99 → 9 (truncated, not rounded)
  cout << "int num = 9.99  → " << num << endl;

  // Int to Float (safe, no data loss)
  float fnum = 100; // Implicit: 100 → 100.0
  cout << "float fnum = 100 → " << fnum << endl;

  // Char to Int
  int ascii = 'Z'; // Implicit: 'Z' → 90
  cout << "int ascii = 'Z' → " << ascii << endl;

  // Int to Char
  char ch = 65; // Implicit: 65 → 'A'
  cout << "char ch = 65 → " << ch << endl;

  // ========== 5. BOOL CONVERSION ==========
  cout << "\n--- Bool Conversion ---" << endl;

  bool flag1 = 100; // Non-zero → true (1)
  bool flag2 = 0;   // Zero → false (0)
  bool flag3 = -5;  // Non-zero → true (1)

  cout << "bool = 100 → " << flag1 << endl;
  cout << "bool = 0   → " << flag2 << endl;
  cout << "bool = -5  → " << flag3 << endl;

  // Bool in arithmetic (true=1, false=0)
  cout << "true + true = " << (true + true) << endl; // 1 + 1 = 2
  cout << "true + 5    = " << (true + 5) << endl;    // 1 + 5 = 6

  // ========== SUMMARY ==========
  cout << "\n--- Summary ---" << endl;
  cout << "• Compiler automatically converts smaller type to larger type" << endl;
  cout << "• int + float = float" << endl;
  cout << "• char + int = int" << endl;
  cout << "• Assigning larger to smaller may cause DATA LOSS" << endl;

  return 0;
}
