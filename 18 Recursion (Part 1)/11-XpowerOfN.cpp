#include <iostream>
using namespace std;

// Function to calculate x raised to the power n using recursion
int pow(int x, int n)
{
  if (n == 0) // base case: any number raised to the power of 0 is 1
  {
    return 1;
  }
  int halfPow = pow(x, n / 2);           // recursive case: calculate the half power
  int halfPowSquare = halfPow * halfPow; // square the half power to get the full power for even n

  if (n % 2 != 0) // if n is odd, we need to multiply by x one more time to account for the odd exponent
  {
    return x * halfPowSquare; // return x multiplied by the squared half power for odd n
  }

  return halfPowSquare; // return the squared half power for even n
}

int main()
{
  cout << pow(2, 5);
  return 0;
}

// int pow(int x, int n)
// {
//   if (n == 0) // base case: any number raised to the power of 0 is 1
//   {
//     return 1;
//   }
//   int halfPow = pow(x, n / 2);           // recursive case: calculate the half power
//   int halfPowSquare = halfPow * halfPow; // square the half power to get the full power for even n
//   if (n % 2 != 0) // if n is odd, we need to multiply by x one more time to account for the odd exponent
//   {
//     return x * halfPowSquare; // return x multiplied by the squared half power for odd n
//   }
//   return halfPowSquare; // return the squared half power for even n
// }
// int main()
// {
//   cout << pow(2, 5);
//   return 0;
// }

/*

logic:
1. The function `pow` takes two integers `x` and `n` as input.
2. It checks if `n` is 0, which is the base case for the recursion. If so, it returns 1, since any number raised to the power of 0 is 1.
3. It calculates the half power by making a recursive call to `pow` with `n / 2`.
4. It then squares the half power to get the full power for even `n`.

*/