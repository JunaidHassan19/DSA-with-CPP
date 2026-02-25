// =====================================================
// Topic: Passing Arguments to Functions
// This program demonstrates the difference between:
// 1. Pass by Value
// 2. Pass by Reference (using Pointers)
// =====================================================

#include <iostream>
using namespace std;

// =====================================================
// PASS BY VALUE
// - A COPY of the variable is passed to the function
// - Changes made inside the function do NOT affect
//   the original variable in main()
// =====================================================
void changeA(int a)
{
  a = 20; // Only changes the local copy, not the original

  cout << "Change function: " << a << endl; // Prints 20
}

// =====================================================
// PASS BY REFERENCE (using Pointers)
// - The ADDRESS of the variable is passed to the function
// - Changes made inside the function WILL affect
//   the original variable in main()
// - *ptr means "value at the address stored in ptr"
// =====================================================
void changeB(int *ptr) // ptr receives the address of variable
{
  *ptr = 20;                                     // Dereference: changes the value at that address
  cout << "ChangeA function = " << *ptr << endl; // Prints 20
}

int main()
{
  // =====================================================
  // EXAMPLE 1: Pass by Value
  // =====================================================
  int a = 10;
  changeA(a);                              // Only a copy of 'a' (value 10) is sent
  cout << "Main function : " << a << endl; // Still prints 10! (unchanged)

  // =====================================================
  // EXAMPLE 2: Pass by Reference (using Pointers)
  // =====================================================
  int b = 10;
  changeB(&b);                             // Address of 'b' is sent using & (address-of operator)
  cout << "Main function = " << b << endl; // Prints 20! (changed)

  return 0;
}

// =====================================================
// OUTPUT:
// Change function: 20
// Main function : 10      <-- 'a' unchanged (Pass by Value)
// ChangeA function = 20
// Main function = 20      <-- 'b' changed (Pass by Reference)
// =====================================================

// KEY TAKEAWAYS:
// 1. Pass by Value: Safe, but can't modify original variable
// 2. Pass by Reference: Can modify original, useful for:
//    - Returning multiple values from a function
//    - Avoiding copying large data structures
//    - Modifying variables directly
// =====================================================