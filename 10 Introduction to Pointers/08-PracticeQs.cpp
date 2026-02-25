/*
Q 1: What is the type of a & b:
float* a, b;
*/

#include <iostream>
using namespace std;

int main()
{
  float *a, b; // The type of 'a' is 'float*' (pointer to float), while the type of 'b' is 'float' (a regular float variable). This is because in C++, when declaring multiple variables in a single statement, the pointer symbol '*' only applies to the variable it directly precedes. Therefore, 'a' is a pointer to a float, while 'b' is just a float variable.

  return 0;
}

// Q 2: Can we initialize a pointer with value 0?

int main()
{
  int *ptr = 0; // Yes, we can initialize a pointer with value 0, which is equivalent to NULL or nullptr in C++. It indicates that the pointer does not point to any valid memory location.

  cout << ptr; // Output will be 0 or nullptr, indicating that the pointer is not pointing to any valid memory location.

  return 0;
}

/*
output:
0
*/