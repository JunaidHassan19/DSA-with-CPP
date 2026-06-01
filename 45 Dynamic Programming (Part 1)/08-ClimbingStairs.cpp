#include <iostream>
#include <vector>
using namespace std;

// Climbing Stairs problem using Memoization - tc: O(n) optimized using memoization
int climbingStairs(int n, vector<int> &dp)
{
  if (n == 0 || n == 1) // base case: there is one way to climb 0 or 1 stairs
  {
    return 1;
  }
  if (dp[n] != -1) // if the result for n stairs is already computed, return it from dp array
  {
    return dp[n];
  }

  // the number of ways to climb n stairs is the sum of the ways to climb n-1 and n-2 stairs
  dp[n] = climbingStairs(n - 1, dp) + climbingStairs(n - 2, dp);
  return dp[n];
}

int main()
{
  int n = 5;
  vector<int> dp(n + 1, -1);
  cout << climbingStairs(n, dp) << endl;
  return 0;
}