#include <iostream>
using namespace std;
// This program demonstrates the concept of null pointers in C++. It shows how an uninitialized pointer may contain a garbage value and how a pointer initialized to NULL (or nullptr) behaves when dereferenced.
int main()
{
  int *ptr;            // Uninitialized pointer declaration
  cout << ptr << endl; // Output the value of uninitialized pointer 'ptr', which may contain a garbage value (undefined behavior)

  int *ptr2 = NULL;      // Pointer declaration and initialization to NULL (nullptr in C++11 and later)
  cout << ptr2 << endl;  // Output the value of pointer 'ptr2', which is NULL (0 or nullptr)
  cout << *ptr2 << endl; // Dereferencing a NULL pointer 'ptr2' will lead to undefined behavior (likely a runtime error or crash)

  return 0;
}

/*
output:
0x7ffee3bff5c8
0
Segmentation fault: 11
*/