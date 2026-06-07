#include <iostream>
#include <vector>
using namespace std;

// Matrix Chain Multiplication (MCM) problem using tabulation
int mcm(vector<int> arr) // tc:O(n^3) sc:O(n^2)
{
  int n = arr.size();
  vector<vector<int>> dp(n, vector<int>(n, 0));

  // Base case: If there is only one matrix, no multiplication is needed
  for (int i = 1; i < n; i++)
  {
    dp[i][i] = 0;
  }

  // Fill the dp table in a bottom-up manner
  for (int len = 2; len < n; len++)
  {
    // Try all possible splits of the matrix chain of length 'len'
    for (int i = 1; i <= n - len; i++)
    {
      int j = i + len - 1;
      dp[i][j] = INT_MAX;

      // Try all possible splits of the matrix chain from index 'i' to 'j'
      for (int k = i; k < j; k++)
      {
        int cost1 = dp[i][k];
        int cost2 = dp[k + 1][j];
        int currCost = cost1 + cost2 + (arr[i - 1] * arr[k] * arr[j]);
        dp[i][j] = min(dp[i][j], currCost);
      }
    }
  }

  return dp[1][n - 1];
}

int main()
{
  vector<int> arr = {1, 2, 3, 4, 3};
  int n = arr.size();

  vector<vector<int>> dp(n, vector<int>(n, 0));
  cout << mcm(arr) << endl;
  return 0;
}