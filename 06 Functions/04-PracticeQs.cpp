#include <iostream>
using namespace std;

// WAP to find the product of 2 numbers - a & b.

int prod(int a, int b) // a and b are PARAMETERS (placeholders for values)
{
  return a * b; // This function takes two integers and returns their product
}

int main()
{
  int p = prod(2, 5); // 2 and 5 are ARGUMENTS (actual values passed to the function)

  cout << "Product = " << p << endl;
  return 0;
}

// WAP to print if a number is ODD or EVEN

bool isEven(int a) // This function takes an integer 'a' and returns true if it's even, false if it's odd
{
  if (a % 2 == 0) // If 'a' is divisible by 2 with no remainder, it's even
  {
    return true; // Return true for even numbers
  }
  else
  {
    return false; // Return false for odd numbers
  }
}

int main()
{
  int n;
  cout << "Enter a Number: ";
  cin >> n;

  cout << isEven(n); // This will print 1 (true) if n is even, 0 (false) if n is odd
  return 0;
}