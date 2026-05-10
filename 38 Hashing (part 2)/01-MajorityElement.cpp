#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
#include <unordered_map>
using namespace std;

// Majority Element
void majorityElement(vector<int> nums)
{
  unordered_map<int, int> m; // element, count

  // count the frequency of each element
  for (int i = 0; i < nums.size(); i++)
  {
    if (m.count(nums[i]))
    {
      m[nums[i]]++;
    }
    else
    {
      m[nums[i]] = 1;
    }
  }

  // print the elements that appear more than n/3 times
  for (pair<int, int> p : m)
  {
    if (p.second > nums.size() / 3)
    {
      cout << p.first << " ";
    }
  }
  cout << endl;
}

int main()
{
  vector<int> nums = {1, 3, 2, 5, 1, 3, 1, 5, 1};
  vector<int> nums2 = {1, 2};

  majorityElement(nums2);
  return 0;
}