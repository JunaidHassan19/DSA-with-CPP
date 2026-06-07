#include <iostream>
#include <vector>
using namespace std;

// Nth catalan using memoization -tc: O(n^2) sc: O(n)
int catalan(int n, vector<int> &dp)
{
  if (n == 0 || n == 1)
  {
    return 1;
  }

  // If the value is already computed, return it from the dp array
  if (dp[n] != -1)
  {
    return dp[n];
  }

  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    ans += catalan(i, dp) * catalan(n - i - 1, dp);
  }

  return dp[n] = ans; // Store the computed value in the dp array before returning
}

int main()
{
  int n = 6;
  vector<int> dp(n + 1, -1); // Initialize dp array with -1 to indicate uncomputed values
  for (int i = 0; i <= 6; i++)
  {
    cout << "Catalan(" << i << ") = " << catalan(i, dp) << endl;
  }
  cout << endl;
  return 0;
}