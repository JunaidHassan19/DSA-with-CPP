#include <iostream>
#include <vector>
using namespace std;

// Rod Cutting Problem using Dynamic Programming -tc: O(n*rodLength) sc: O(n*rodLength)
int rodCutting(vector<int> price, vector<int> length, int rodLength)
{
  int n = length.size();

  // create a dp table to store the results of subproblems
  vector<vector<int>> dp(n + 1, vector<int>(rodLength + 1, 0));
  // fill the dp table
  for (int i = 1; i <= n; i++)
  {
    // for each length of the rod from 1 to rodLength
    for (int j = 1; j <= rodLength; j++)
    {
      // choice diagram
      if (length[i - 1] <= j)
      {
        // include the length
        dp[i][j] = max(dp[i][j - length[i - 1]] + price[i - 1], dp[i - 1][j]);
      }
      else
      // exclude the length
      {
        dp[i][j] = dp[i - 1][j];
      }
    }
  }
  return dp[n][rodLength];
}

int main()
{
  vector<int> price = {1, 5, 8, 9, 10, 17, 17, 20};
  vector<int> length = {1, 2, 3, 4, 5, 6, 7, 8};
  int rodLength = 8;

  cout << rodCutting(price, length, rodLength) << endl;

  return 0;
}