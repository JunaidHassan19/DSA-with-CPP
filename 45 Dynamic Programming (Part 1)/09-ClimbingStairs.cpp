#include <iostream>
#include <vector>
using namespace std;

// Climbing Stairs problem using dynamic programming (tabulation) tc: O(n)
int climbingStairs(int n)
{
  // create a dp array to store the number of ways to climb stairs up to n
  vector<int> dp(n + 1, 0);
  dp[0] = 1; // base case: there is one way to climb 0 stairs (do nothing)
  dp[1] = 1; // base case: there is one way to climb 1 stair (take one step)

  // fill the dp array in a bottom-up manner
  for (int i = 2; i <= n; i++)
  {
    // the number of ways to climb i stairs is the sum of the ways to climb i-1 and i-2 stairs
    dp[i] = dp[i - 1] + dp[i - 2];
  }
  return dp[n];
}

int main()
{
  int n = 5;
  cout << climbingStairs(n) << endl;

  return 0;
}