#include <iostream>
#include <vector>
using namespace std;

// Target Sum Subset Problem using Dynamic Programming -tc: O(n*target) sc: O(n*target)
bool targetSum(vector<int> nums, int target)
{
  int n = nums.size();
  vector<vector<int>> dp(n + 1, vector<int>(target + 1, 0));

  // Base case: target sum of 0 can be achieved with an empty subset
  for (int i = 1; i <= n; i++)
  {
    // Base case: target sum of 0 can be achieved with an empty subset
    for (int j = 1; j <= target; j++)
    {
      // choice diagram
      if (nums[i - 1] <= j)
      {
        // include the number or exclude the number
        dp[i][j] = max(nums[i - 1] + dp[i - 1][j - nums[i - 1]], dp[i - 1][j]);
      }
      else // exclude the number
      {
        dp[i][j] = dp[i - 1][j];
      }
    }
  }

  // print the dp table
  for (int i = 0; i <= n; i++)
  {
    for (int j = 0; j <= target; j++)
    {
      cout << dp[i][j] << " ";
    }
    cout << endl;
  }

  // check if the target sum can be achieved
  return dp[n][target] == target;
}

int main()
{
  vector<int> nums = {4, 2, 7, 1, 3};
  int target = 10;

  cout << targetSum(nums, target) << endl;
  return 0;
}