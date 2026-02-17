// Qs: WAP to fine the binomial coefficient for given n & r.

#include <iostream>
using namespace std;

// A function to calculate the factorial of a number.
int Factorial(int n)
{
  int fact = 1;
  for (int i = 1; i <= n; i++)
  {
    fact *= i;
  }
  return fact;
}
// A function to calculate the binomial coefficient for given n & r.
int binCoeff(int n, int r)
{
  int val1 = Factorial(n);     // n! = n * (n-1) * (n-2) * ... * 1
  int val2 = Factorial(r);     // r! = r * (r-1) * (r-2) * ... * 1
  int val3 = Factorial(n - r); // (n-r)! = (n-r) * ((n-r)-1) * ((n-r)-2) * ... * 1

  int result = val1 / (val2 * val3); // nCr = n! / (r! * (n-r)!)
  return result;
}

int main()
{
  cout << binCoeff(4, 2) << endl;
  return 0;
}

/*
Logic:
1. The binomial coefficient for given n & r is calculated using the formula: nCr = n! / (r! * (n-r)!)
2. We first calculate the factorial of n, r and (n-r) using the Factorial function.
3. Finally, we calculate the binomial coefficient using the formula and return the result.
output:
6
*/