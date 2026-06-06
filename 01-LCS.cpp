#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Longest Common Substring -tc: O(n*m) sc: O(n*m)
int longestCommonSubstring(string str1, string str2)
{
  int n = str1.size();
  int m = str2.size();
  int ans = 0; // to store the length of longest common substring

  vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

  for (int i = 1; i < n + 1; i++)
  {
    for (int j = 1; j < m + 1; j++)
    {
      if (str1[i - 1] == str2[j - 1])
      {
        dp[i][j] = 1 + dp[i - 1][j - 1];
        ans = max(ans, dp[i][j]); // update the ans with the maximum length found so far
      }
      else
      {
        dp[i][j] = 0; // if characters do not match, reset the length of common substring to 0
      }
    }
  }
  return ans; // return the length of longest common substring
}

int main()
{
  string str1 = "abcde";
  string str2 = "abgce";

  cout << longestCommonSubstring(str1, str2) << endl;

  return 0;
}

/*
Logic is same as longest common subsequence but here we are checking for the longest common substring. So, if the characters match, we add 1 to the length of common substring found so far and if they do not match, we reset the length of common substring to 0. We also keep track of the maximum length of common substring found so far and return it at the end.
*/