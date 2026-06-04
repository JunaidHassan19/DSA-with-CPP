#include <iostream>
#include <vector>
using namespace std;

// Unbounded Knapsack Problem using Dynamic Programming -tc: O(n*W) sc: O(n*W)
int unboundedKnapsack(vector<int> val, vector<int> wt, int W, int n)
{
  vector<vector<int>> dp(n + 1, vector<int>(W + 1, 0));

  // Base case: when W = 0, the maximum value is 0
  for (int i = 1; i < n + 1; i++)
  {
    // Base case: when W = 0, the maximum value is 0
    for (int j = 1; j < W + 1; j++)
    {
      int itemVal = val[i - 1];
      int itemWt = wt[i - 1];

      // choice diagram
      if (itemWt <= j)
      {
        // include the item or exclude the item
        dp[i][j] = max(itemVal + dp[i][j - itemWt], dp[i - 1][j]);
      }
      else // exclude the item
      {
        dp[i][j] = dp[i - 1][j];
      }
    }
  }

  return dp[n][W];
}

int main()
{
  vector<int> val = {15, 14, 10, 45, 30};
  vector<int> wt = {2, 5, 1, 3, 4};
  int W = 7;
  int n = 5;

  cout << unboundedKnapsack(val, wt, W, n) << endl;
  return 0;
}