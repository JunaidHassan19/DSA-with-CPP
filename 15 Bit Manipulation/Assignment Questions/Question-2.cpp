#include <iostream>
#include <vector>
using namespace std;

// https://leetcode.com/problems/single-number/submissions/1944712030

int singleNumber(vector<int> &nums)
{
  int ans = 0;
  for (int i = 0; i < nums.size(); i++)
  {
    ans = ans ^ nums[i];
  }
  return ans;
}

int main()
{
  vector<int> nums = {2, 2, 1};
  cout << singleNumber(nums) << endl;
  return 0;
}