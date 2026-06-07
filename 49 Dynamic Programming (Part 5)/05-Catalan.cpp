#include <iostream>
#include <vector>
using namespace std;

// Nth catalan using tabulation - tc: O(n^2) sc: O(n)
int catalan(int n)
{
  // Base case: C0 = 1, C1 = 1
  if (n == 1 || n == 0)
    return 1;

  // Create a dp array to store the catalan numbers up to n
  vector<int> dp(n + 1, 0);
  dp[0] = dp[1] = 1; // Base cases

  // Fill the dp array using the recursive relation
  for (int i = 2; i <= n; i++)
  {
    // Cn = C0 * Cn-1 + C1 * Cn-2 + ... + Cn-1 * C0
    for (int j = 0; j < i; j++)
    {
      // dp[i] += C0 * Cn-i-1
      dp[i] += dp[j] * dp[i - j - 1];
    }
  }
  return dp[n];
}

int main()
{
  int n = 6;

  for (int i = 0; i <= n; i++)
  {
    cout << "Catalan(" << i << ") = " << catalan(i) << endl;
  }
  cout << endl;
  return 0;
}