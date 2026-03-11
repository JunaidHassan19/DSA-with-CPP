#include <iostream>
using namespace std;

// Qs. WAP to calculate x^n using fast exponentiation method.
void fastExpo(int x, int n)
{
  int ans = 1;

  while (n > 0)
  {
    int lastBit = n & 1; // Get the last bit of n (1 if it's odd, 0 if it's even)
    if (lastBit)         // If the last bit is 1, it means n is odd, so we multiply ans by x
    {
      ans = ans * x; // Update ans by multiplying it with x
    }
    x = x * x;  // Square x to prepare for the next iteration (this is the key step in fast exponentiation)
    n = n >> 1; // Right shift n by 1 to check the next bit in the next iteration (this effectively divides n by 2)
  }
  cout << ans << endl;
}

int main()
{
  fastExpo(3, 5);
  return 0;
}

/*
idea:
x^n can be calculated using the following properties:
1. If n is even, then x^n = (x^(n/2))^2
2. If n is odd, then x^n = x * (x^(n-1))
This method reduces the number of multiplications needed, making it much faster than the naive approach, especially for large values of n.
*/