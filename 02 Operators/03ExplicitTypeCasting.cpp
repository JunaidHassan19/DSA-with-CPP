/*
  Explicit Type Casting (Type Conversion) in C++
  ------------------------------------------------

  Explicit conversion is done MANUALLY by the programmer.
  We tell the compiler to convert one data type to another.

  WHY USE IT?
  - To force a specific type conversion
  - To avoid data loss or get desired results
  - To convert between incompatible types

  SYNTAX - Two Ways:
  ┌─────────────────────────────────────────────────────────┐
  │  1. C-style casting:     (dataType) expression          │
  │     Example: (int) 3.14  → 3                            │
  │                                                         │
  │  2. Function-style casting: dataType(expression)        │
  │     Example: int(3.14)   → 3                            │
  └─────────────────────────────────────────────────────────┘

  Both produce the same result, but function-style is cleaner.
*/

#include <iostream>
using namespace std;

int main()
{
  // ========== 1. CHAR + INT → Result as INT then CAST to CHAR ==========
  cout << "--- Char to Int Casting ---" << endl;

  // 'A' = 65 in ASCII, 'A' + 1 = 66, int(66) = 66
  cout << "int('A' + 1) = " << int('A' + 1) << endl; // Output: 66

  // To get character 'B', cast result back to char
  cout << "char('A' + 1) = " << char('A' + 1) << endl; // Output: B

  // Using C-style casting
  cout << "(char)('A' + 1) = " << (char)('A' + 1) << endl; // Output: B

  // ========== 2. FLOAT TO INT (Truncation - removes decimal) ==========
  cout << "\n--- Float to Int Casting ---" << endl;

  float PI = 3.141;
  cout << "PI = " << PI << endl;
  cout << "int(PI) = " << int(PI) << endl; // Output: 3 (decimal removed)

  float price = 99.99;
  cout << "price = " << price << endl;
  cout << "(int)price = " << (int)price << endl; // Output: 99

  // ========== 3. INT TO FLOAT (For correct division) ==========
  cout << "\n--- Int to Float Casting ---" << endl;

  // Without casting: integer division
  cout << "10 / 3 = " << (10 / 3) << endl; // Output: 3 (wrong!)

  // With casting: float division
  cout << "(float)10 / 3 = " << ((float)10 / 3) << endl; // Output: 3.33333

  // Alternative: function-style
  cout << "float(10) / 3 = " << (float(10) / 3) << endl; // Output: 3.33333

  // ========== 4. INT TO CHAR (ASCII Conversion) ==========
  cout << "\n--- Int to Char Casting ---" << endl;

  int asciiValue = 65;
  cout << "asciiValue = " << asciiValue << endl;
  cout << "char(65) = " << char(asciiValue) << endl; // Output: A

  cout << "(char)66 = " << (char)66 << endl; // Output: B
  cout << "(char)97 = " << (char)97 << endl; // Output: a

  // ========== 5. DOUBLE TO INT ==========
  cout << "\n--- Double to Int Casting ---" << endl;

  double temperature = 36.6;
  int roundedTemp = (int)temperature; // 36.6 → 36
  cout << "temperature = " << temperature << endl;
  cout << "(int)temperature = " << roundedTemp << endl;

  // ========== 6. PRACTICAL EXAMPLE - Average Calculation ==========
  cout << "\n--- Practical Example ---" << endl;

  int marks1 = 85, marks2 = 90, marks3 = 78;
  int total = marks1 + marks2 + marks3;

  // Without casting (wrong - integer division)
  cout << "Average (int): " << (total / 3) << endl; // 84

  // With casting (correct - float division)
  cout << "Average (float): " << ((float)total / 3) << endl; // 84.3333

  // ========== SUMMARY ==========
  cout << "\n--- Summary ---" << endl;
  cout << "(int)3.99 = " << (int)3.99 << " (truncates, not rounds)" << endl;
  cout << "(float)5 = " << (float)5 << " (adds .0)" << endl;
  cout << "(char)65 = " << (char)65 << " (ASCII to character)" << endl;

  return 0;
}
