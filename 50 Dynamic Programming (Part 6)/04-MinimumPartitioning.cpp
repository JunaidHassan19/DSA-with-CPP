#include <iostream>
#include <vector>
using namespace std;

// Minimum Partitioning problem using tabulation
int getMin(vector<int> nums)
{
  int totSum = 0;
  // Calculate the total sum of all elements in the input vector 'nums'
  for (int el : nums)
  {
    totSum += el;
  }

  int n = nums.size();
  int w = totSum / 2;

  vector<vector<int>> dp(n + 1, vector<int>(w + 1, 0));

  // Fill the dp table in a bottom-up manner
  for (int i = 1; i < n + 1; i++)
  {
    // Try all possible sums from 1 to 'w' for the current index 'i'
    for (int j = 1; j < w + 1; j++)
    {
      // If the current element 'nums[i - 1]' can be included in the current sum 'j', then we have two choices:
      if (nums[i - 1] <= j)
      {
        // Update the dp table by taking the maximum of including the current element and excluding it
        dp[i][j] = max(nums[i - 1] + dp[i - 1][j - nums[i - 1]], dp[i - 1][j]);
      }
      else // If the current element cannot be included, then we simply carry forward the value from the previous index
      {
        dp[i][j] = dp[i - 1][j];
      }
    }
  }

  int grp1Sum = dp[n][w];
  int grp2Sum = totSum - grp1Sum;
  return abs(grp1Sum - grp2Sum);
}

int main()
{
  vector<int> nums = {1, 6, 11, 5};

  cout << getMin(nums) << endl;

  return 0;
}
