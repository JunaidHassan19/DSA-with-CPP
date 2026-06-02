#include <iostream>
#include <vector>
using namespace std;

// Variation of Climbing Stairs problem where you can climb 1, 2, or 3 stairs at a time tc: O(n)
int climbingStairs(int n)
{
  vector<int> dp(n + 1, 0);
  dp[0] = 1;
  dp[1] = 1;
  dp[2] = 2;

  for (int i = 3; i <= n; i++)
  {
    dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
  }
  return dp[n];
}

int main()
{
  int n = 4;
  cout << climbingStairs(n) << endl;

  return 0;
}