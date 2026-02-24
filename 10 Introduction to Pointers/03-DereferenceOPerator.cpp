#include <iostream>
using namespace std;

int main()
{
  int a = 10;    // Variable declaration and initialization
  int *ptr = &a; // Pointer declaration and assignment of the address of variable 'a' to pointer 'ptr'

  *ptr = 20; // Dereferencing the pointer 'ptr' to change the value of variable 'a' to 20

  cout << &a << endl;    // Output the address of variable 'a' using the address operator '&'
  cout << *(&a) << endl; // Output the value of variable 'a' by dereferencing its address, which is 20 after dereferencing
  cout << ptr << endl;   // Output the value stored in pointer 'ptr', which is the address of variable 'a'
  cout << *ptr << endl;  // Output the value pointed to by pointer 'ptr', which is the value of variable 'a' (20 after dereferencing)

  return 0;
}