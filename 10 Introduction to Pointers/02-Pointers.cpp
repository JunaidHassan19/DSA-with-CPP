#include <iostream>
using namespace std;
// This program demonstrates the use of pointers in C++. It shows how to declare pointers, assign addresses to them, and use double pointers to store the address of another pointer.
int main()
{
  int a = 10;                         // Variable declaration and initialization
  int *ptr = &a;                      // Pointer declaration and assignment of the address of variable 'a' to pointer 'ptr'
  cout << &a << " = " << ptr << endl; // same address of variable 'a' is stored in pointer 'ptr'

  float pi = 3.14;                      // Variable declaration and initialization
  float *ptr2 = &pi;                    // Pointer declaration and assignment of the address of variable 'pi' to pointer 'ptr2'
  cout << &pi << " = " << ptr2 << endl; // same address of variable 'pi' is stored in pointer 'ptr2'

  int **pptr = &ptr;                     // Double pointer declaration and assignment of the address of pointer 'ptr' to double pointer 'pptr'
  cout << &ptr << " = " << pptr << endl; // same address of pointer 'ptr' is stored in double pointer 'pptr'

  return 0;
}