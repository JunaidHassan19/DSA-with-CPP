#include <iostream>
using namespace std;

// =====================================================
// REFERENCE VARIABLES
void changeA(int &a) // Reference variable 'a' is an alias for the original variable passed from main()
{
  a = 20; // Changes the original variable in main() because 'a' is a reference to it

  cout << a << endl; // Prints 20, showing that the change is reflected in the original variable
}

int main()
{
  int a = 10;
  // int &b = a;// Reference variable 'b' is an alias for 'a', so 'b' and 'a' refer to the same variable

  changeA(a); // Pass 'a' by reference to the function, allowing it to modify the original variable

  cout << "A variable = " << a << endl;
  // cout << "b variable = " << b << endl;

  return 0;
}

/*
output:
20
A variable = 20
b variable = 20
*/