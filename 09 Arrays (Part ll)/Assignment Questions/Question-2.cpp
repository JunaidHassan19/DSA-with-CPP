/*
Question 2: There is an integer array nums sorted in ascending order (with distinct values).
Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k
(1 <= k < nums.length) such that the resulting array is
[nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed).
For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].
Given the array nums after the possible rotation and an integer target, return the index of target
if it is in nums, or -1 if it is not in nums.
You must write an algorithm with O(log n) runtime complexity.

Examples:
Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4

Input: nums = [4,5,6,7,0,1,2], target = 3
Output: -1
*/

#include <iostream>
using namespace std;
// Function to search for the target value in the rotated sorted array
int searchTarget(int *nums, int len, int target)
{
  int left = 0;        // Initialize left pointer
  int right = len - 1; // Initialize right pointer

  while (left <= right) // Loop until the pointers meet
  {
    int mid = left + (right - left) / 2; // Calculate the middle index

    if (nums[mid] == target) // If the target is found, return its index
    {
      return mid; // Target Found
    }

    // Check if the left half is sorted
    if (nums[left] <= nums[mid])
    {
      // If the target is in the left half, move the right pointer to mid - 1
      if (target >= nums[left] && target < nums[mid])
      {
        right = mid - 1;
      }
      else // Otherwise, move the left pointer to mid + 1
      {
        left = mid + 1;
      }
    }
    else // If the right half is sorted
    {
      // If the target is in the right half, move the left pointer to mid + 1
      if (target > nums[mid] && target <= nums[right])
      {
        left = mid + 1;
      }
      else // Otherwise, move the right pointer to mid - 1
      {
        right = mid - 1;
      }
    }
  }
  return -1; // Target Not Found
}

int main()
{
  int arr[] = {4, 5, 6, 7, 0, 1, 2};
  int len = sizeof(arr) / sizeof(int);
  int target = 0;

  int result = searchTarget(arr, len, target);
  cout << "Result: " << result << endl;
  return 0;
}
