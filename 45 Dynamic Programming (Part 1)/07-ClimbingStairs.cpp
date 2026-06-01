#include <iostream>
#include <vector>
using namespace std;

// Climbing Stairs problem using recursion -tc: O(2^n) exponential
int climbingStairs(int n)
{
  if (n == 0 || n == 1)
  {
    return 1;
  }
  // the number of ways to climb n stairs is the sum of the ways to climb n-1 and n-2 stairs
  return climbingStairs(n - 1) + climbingStairs(n - 2);
}

int main()
{
  int n = 4;

  cout << climbingStairs(n) << endl;
  return 0;
}