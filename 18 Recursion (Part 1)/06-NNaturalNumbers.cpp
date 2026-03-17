#include <iostream>
using namespace std;

// Function to calculate the sum of first n natural numbers
int sum(int n)
{
  if (n == 1) // base case
  {
    return 1;
  }
  return n + sum(n - 1); // recursive case
}

int main()
{
  int n;
  cout << "Enter a number: ";
  cin >> n;
  cout << "Sum of first " << n << " Natural numbers is " << sum(n) << endl;
  return 0;
}

/*
logic:
1. The function `sum` takes an integer `n` as input.
2. It checks if `n` is 1, which is the base case for the recursion. If so, it returns 1, since the sum of the first 1 natural number is 1.
3. If `n` is greater than 1, it returns `n` added to the result of `sum(n - 1)`, which is the recursive case.
4. In the `main` function, it prompts the user to enter a number and reads it into variable `n`.
5. It then calls the `sum` function with `n` and prints the result, which is the sum of the first `n` natural numbers.

*/