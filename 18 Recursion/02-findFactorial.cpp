#include <iostream>
using namespace std;

// Basic recursion function to find factorial of n
int factorial(int n)
{
  if (n == 0 || n == 1)
  {
    return 1; // base case
  }

  return n * factorial(n - 1); // recursive case
}

int main()
{
  int n;
  cout << "Enter a number: ";
  cin >> n;

  if (n < 0)
  {
    cout << "Factorial is not defined for negative numbers." << endl;
  }
  else
  {
    cout << "Factorial of " << n << " is " << factorial(n) << endl;
  }

  return 0;
}

/*
logic:
1. The function `factorial` takes an integer `n` as input.
2. It checks if `n` is 0 or 1, which are the base cases for factorial. If so, it returns 1.
3. If `n` is greater than 1, it returns `n` multiplied by the result of `factorial(n - 1)`, which is the recursive case.
4. In the `main` function, it prompts the user to enter a number and reads it into variable `n`.
5. It checks if `n` is negative. If it is, it prints a message indicating that factorial is not defined for negative numbers.
6. If `n` is non-negative, it calls the `factorial` function and prints the result.

*/