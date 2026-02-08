/*
  Binary Arithmetic Operators in C++
  ------------------------------------

  Binary operators require 2 operands to perform operations.

  ┌──────────┬────────────────────┬─────────────────────┐
  │ Operator │ Name               │ Example             │
  ├──────────┼────────────────────┼─────────────────────┤
  │    +     │ Addition           │ a + b               │
  │    -     │ Subtraction        │ a - b               │
  │    *     │ Multiplication     │ a * b               │
  │    /     │ Division           │ a / b               │
  │    %     │ Modulus (Remainder)│ a % b               │
  └──────────┴────────────────────┴─────────────────────┘
*/

#include <iostream>
using namespace std;

int main()
{
  int a = 15, b = 4;
  cout << "a = " << a << ", b = " << b << endl
       << endl;

  // 1. Addition (+)
  cout << "a + b = " << (a + b) << endl; // 15 + 4 = 19

  // 2. Subtraction (-)
  cout << "a - b = " << (a - b) << endl; // 15 - 4 = 11

  // 3. Multiplication (*)
  cout << "a * b = " << (a * b) << endl; // 15 * 4 = 60

  // 4. Division (/)
  cout << "a / b = " << (a / b) << endl; // 15 / 4 = 3 (integer division)

  // For decimal result, use float
  cout << "(float)a / b = " << ((float)a / b) << endl; // 15 / 4 = 3.75

  // 5. Modulus (%) - Gives remainder
  cout << "a % b = " << (a % b) << endl; // 15 % 4 = 3 (remainder)

  // More modulus examples
  cout << "\n--- Modulus Examples ---" << endl;
  cout << "10 % 3 = " << (10 % 3) << endl; // 1
  cout << "20 % 5 = " << (20 % 5) << endl; // 0 (perfectly divisible)
  cout << "7 % 2 = " << (7 % 2) << endl;   // 1 (odd number check)

  return 0;
}
