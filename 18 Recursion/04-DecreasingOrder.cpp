#include <iostream>
using namespace std;

// Function to print numbers from n to 1 in decreasing order
void print(int n)
{
  if (n == 0)
  {
    return;
  }
  cout << n << " ";
  print(n - 1); // Recursive call with n-1
}

int main()
{
  int n = 5;
  print(n);
  return 0;
}

/*
Logic:
1. The function `print` takes an integer `n` as input.
2. It checks if `n` is 0, which is the base case for the recursion. If so, it returns without doing anything.
3. If `n` is greater than 0, it prints the value of `n` followed by a space.
4. It then makes a recursive call to `print` with `n - 1`, which will print the next number in decreasing order.
5. In the `main` function, it initializes `n` to 5 and calls the `print` function, which will print the numbers from 5 down to 1 in decreasing order.
*/