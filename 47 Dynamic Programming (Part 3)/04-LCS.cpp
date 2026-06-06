#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Longest Common Subsequence using Memoization -tc: O(n*m) sc: O(n*m)
int lcsMen(string str1, string str2, vector<vector<int>> dp)
{
  // Base case
  if (str1.size() == 0 || str2.size() == 0)
  {
    return 0;
  }

  int n = str1.size();
  int m = str2.size();

  // check if the value is already computed
  if (dp[n][m] != -1)
  {
    return dp[n][m]; // return the value from the dp table
  }

  // choice diagram
  if (str1[n - 1] == str2[m - 1])
  {
    // include the character
    dp[n][m] = 1 + lcsMen(str1.substr(0, n - 1), str2.substr(0, m - 1), dp);
  }
  else // exclude the character
  {
    int ans1 = lcsMen(str1.substr(0, n - 1), str2, dp);
    int ans2 = lcsMen(str1, str2.substr(0, m - 1), dp);
    dp[n][m] = max(ans1, ans2);
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
  cout << lcsMen(str1, str2, dp) << endl;
  return 0;
}