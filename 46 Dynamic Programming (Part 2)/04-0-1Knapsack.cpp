#include <iostream>
#include <vector>
using namespace std;

// 0-1 Knapsack Problem using Tabulation -tc: O(n*W) sc: O(n*W)
int knapsack(vector<int> val, vector<int> wt, int W, int n)
{
  vector<vector<int>> dp(n + 1, vector<int>(W + 1, 0));

  // Base case: dp[0][j] = 0 for all j and dp[i][0] = 0 for all i
  for (int i = 1; i < n + 1; i++)
  {
    // fill the dp table in a bottom-up manner
    for (int j = 1; j < W + 1; j++)
    {
      int itemWt = wt[i - 1];   // weight of the current item
      int itemVal = val[i - 1]; // value of the current item

      // choice diagram
      if (itemWt <= j)
      {
        dp[i][j] = max(itemVal + dp[i - 1][j - itemWt], dp[i - 1][j]);
      }
      else // exclude the item
      {
        dp[i][j] = dp[i - 1][j];
      }
    }
  }

  // print the dp table
  cout << "DP Table: " << endl;
  for (int i = 0; i < n + 1; i++)
  {
    for (int j = 0; j < W + 1; j++)
    {
      cout << dp[i][j] << " ";
    }
    cout << endl;
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
  cout << knapsack(val, wt, W, n) << endl;

  return 0;
}