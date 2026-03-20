#include <iostream>
#include <vector>
using namespace std;

// Question: https://leetcode.com/problems/set-mismatch/submissions/1943671519

// vector<int> findErrorNums(vector<int> &nums)
// {
//   vector<int> ans;
//   int n = nums.size();
//   vector<bool> isPresent(n + 1, false);
//   for (int i = 0; i < n; i++)
//   {
//     if (isPresent[nums[i]])
//     {
//       ans.push_back(nums[i]);
//     }
//     isPresent[nums[i]] = true;
//   }
//   for (int i = 1; i < isPresent.size(); i++)
//   {
//     if (!isPresent[i])
//     {
//       ans.push_back(i);
//       break;
//     }
//   }
//   return ans;
// }

// vector<int> findErrorNums(vector<int> &nums)
// {
//   vector<int> ans;
//   int n = nums.size();
//   vector<bool> isPresent(n + 1, false);
//   for (int i = 0; i < n; i++)
//   {
//     if (isPresent[nums[i]])
//     {
//       ans.push_back(nums[i]);
//     }
//     isPresent[nums[i]] = true;
//   }
//   for (int i = 1; i < isPresent.size(); i++)
//   {
//     if (!isPresent[i])
//     {
//       ans.push_back(i);
//       break;
//     }
//   }
//   return ans;
// }

// vector<int> findErrorNums(vector<int> &nums)
// {
//   vector<int> ans;
//   int n = nums.size();
//   vector<bool> isPresent(n + 1, false);
//   for (int i = 0; i < n; i++)
//   {
//     if (isPresent[nums[i]])
//     {
//       ans.push_back(nums[i]);
//     }
//     isPresent[nums[i]] = true;
//   }
//   for (int i = 1; i < isPresent.size(); i++)
//   {
//     if (!isPresent[i])
//     {
//       ans.push_back(i);
//       break;
//     }
//   }
//   return ans;
// }

vector<int> findErrorNums(vector<int> &nums)
{
  vector<int> ans;
  int n = nums.size();
  vector<bool> isPresent(n + 1, false);

  for (int i = 0; i < n; i++)
  {
    if (isPresent[nums[i]])
    {
      ans.push_back(nums[i]);
    }
    isPresent[nums[i]] = true;
  }

  for (int i = 1; i < isPresent.size(); i++)
  {
    if (!isPresent[i])
    {
      ans.push_back(i);
      break;
    }
  }
  return ans;
}
int main()
{
  vector<int> nums = {1, 2, 2, 4};

  vector<int> ans = findErrorNums(nums);

  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i] << " ";
  }
  return 0;
}
/*
Logic:
1. We create a boolean vector isPresent of size n+1 to keep track of which numbers are present in the input vector nums. We initialize all values to false.
2. We iterate through the input vector nums and for each number, we check if it is already marked as present in the isPresent vector. If it is, then we have found the duplicate number and we add it to our answer vector ans. If it is not, we mark it as present in the isPresent vector.
3. After processing all numbers in nums, we iterate through the isPresent vector starting from index 1 to n. We check for the first index that is not marked as present, which indicates the missing number. We add this missing number to our answer vector ans and break out of the loop.
4. Finally, we return the answer vector ans which contains the duplicate number and the missing number.
Time Complexity: O(n) - We traverse the input vector nums once and the isPresent vector once, resulting in a linear time complexity.
Space Complexity: O(n) - We use an additional boolean vector isPresent of size n+1 to keep track of the presence of numbers, resulting in linear space complexity.
*/