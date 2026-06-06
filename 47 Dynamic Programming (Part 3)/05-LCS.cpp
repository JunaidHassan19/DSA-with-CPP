#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Longest Common Subsequence using Tabulation -tc: O(n*m) sc: O(n*m)
int lcsTab(string str1, string str2)
{
  int n = str1.size();
  int m = str2.size();

  // create a dp table to store the results of subproblems
  vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

  // fill the dp table
  for (int i = 1; i < n + 1; i++)
  {
    // for each character of str2 from 1 to m
    for (int j = 1; j < m + 1; j++)
    {
      // choice diagram
      if (str1[i - 1] == str2[j - 1])
      {
        // include the character
        dp[i][j] = dp[i - 1][j - 1] + 1;
      }
      else // exclude the character
      {
        dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
      }
    }
  }

  return dp[n][m];
}

int main()
{
  string str1 = "abcdge";
  string str2 = "abedg";
  int n = str1.size();
  int m = str2.size();

  vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
  cout << lcsTab(str1, str2) << endl;
  return 0;
}

// leetcode 1143. Longest Common Subsequence
//  https://leetcode.com/problems/longest-common-subsequence/submissions/2023885407