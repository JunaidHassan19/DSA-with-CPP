#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
#include <algorithm>
using namespace std;

// Longest Increasing Subsequence -tc: O(n*m) sc: O(n*m)
int LIS(vector<int> arr)
{
  unordered_set<int> s(arr.begin(), arr.end()); // unique -O(n)

  vector<int> arr2(s.begin(), s.end());
  // sort the unique elements to find the longest increasing subsequence
  sort(arr2.begin(), arr2.end()); // tc: O(nlogn)

  int n = arr.size();
  int m = arr2.size();
  vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

  // fill the dp table using the logic of longest common subsequence
  for (int i = 1; i < n + 1; i++) // tc: O(n*m)
  {
    for (int j = 1; j < m + 1; j++)
    {
      if (arr[i - 1] == arr2[j - 1])
      {
        dp[i][j] = 1 + dp[i - 1][j - 1];
      }
      else
      {
        dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
      }
    }
  }

  return dp[n][m];
}

int main()
{
  vector<int> arr = {50, 30, 10, 7, 40, 80};

  cout << LIS(arr) << endl;
  return 0;
}

// https://leetcode.com/problems/longest-increasing-subsequence/submissions/2024370730