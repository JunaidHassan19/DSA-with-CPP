#include <iostream>
using namespace std;
// This program demonstrates the use of the address operator '&' in C++ to obtain the memory address of a variable.
int main()
{
  int a = 10; // Variable declaration and initialization

  cout << &a << endl; // Output the address of variable 'a' using the address operator '&'
  return 0;
}