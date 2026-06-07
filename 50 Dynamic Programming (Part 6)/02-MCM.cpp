#include <iostream>
#include <vector>
using namespace std;

// Matrix Chain Multiplication (MCM) problem using recursion with memoization
int mcm(vector<int> arr, int i, int j, vector<vector<int>> &dp)
{
  if (i == j)
  {
    return 0;
  }

  // Check if the result for the current subproblem is already computed and stored in the dp table
  if (dp[i][j] != -1)
  {
    return dp[i][j];
  }

  int ans = INT_MAX;

  for (int k = i; k < j; k++)
  {
    int cost1 = mcm(arr, i, k, dp);

    int cost2 = mcm(arr, k + 1, j, dp);

    int currCost = cost1 + cost2 + (arr[i - 1] * arr[k] * arr[j]);
    ans = min(ans, currCost);
  }

  return dp[i][j] = ans;
}

int main()
{
  vector<int> arr = {1, 2, 3, 4, 3};
  int n = arr.size();

  vector<vector<int>> dp(n, vector<int>(n, -1));
  cout << mcm(arr, 1, n - 1, dp) << endl;
  return 0;
}