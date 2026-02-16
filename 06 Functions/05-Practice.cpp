// WAP to print the factorial of a number, n.
#include <iostream>
using namespace std;
// Factorial of a number n is the product of all positive integers from 1 to n
// Example: factorial(5) = 1 * 2 * 3 * 4 * 5 = 120
int factorial(int n)
{
  int fact = 1; // Initialize fact to 1 (since factorial of 0 is 1)
  for (int i = 1; i <= n; i++)
  {
    fact *= i; // fact = fact * i; This line multiplies fact by i in each iteration, effectively calculating the factorial
  }
  return fact; // Return the calculated factorial to the caller
}

int main()
{
  int n;
  cout << "Enter a Number: ";
  cin >> n;

  int f = factorial(n); // Call the factorial function with n as argument and store the result in variable f

  cout << "Factorial (" << n << " ) = " << f;
}