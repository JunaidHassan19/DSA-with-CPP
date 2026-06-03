#include <iostream>
#include <vector>
using namespace std;

// 0-1 Knapsack Problem using Memoization -tc: O(n*W) sc: O(n*W)
int knapsack(vector<int> val, vector<int> wt, int W, int n, vector<vector<int>> &dp) // tc: O(n*W) sc: O(n*W)
{
  // Base case
  if (n == 0 || W == 0)
  {
    return 0;
  }

  // check if the value is already computed
  if (dp[n][W] != -1)
  {
    return dp[n][W];
  }

  int itemWt = wt[n - 1];
  int itemVal = val[n - 1];

  //  choice diagram
  if (itemWt <= W)
  {
    // include the item
    int ans1 = knapsack(val, wt, W - itemWt, n - 1, dp) + itemVal;

    // exclude the item
    int ans2 = knapsack(val, wt, W, n - 1, dp);

    dp[n][W] = max(ans1, ans2);
  }
  else // exclude the item
  {
    dp[n][W] = knapsack(val, wt, W, n - 1, dp);
  }

  return dp[n][W];
}

int main()
{
  vector<int> val = {15, 14, 10, 45, 30};
  vector<int> wt = {2, 5, 1, 3, 4};
  int W = 7;
  int n = 5;

  // create a dp table to store the results of subproblems
  vector<vector<int>> dp(n + 1, vector<int>(W + 1, -1));
  cout << knapsack(val, wt, W, n, dp) << endl;

  // print the dp table
  cout << "DP Table: " << endl;
  for (int i = 0; i <= n; i++)
  {
    for (int j = 0; j <= W; j++)
    {
      cout << dp[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}