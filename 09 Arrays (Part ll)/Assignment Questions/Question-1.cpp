/*
Question 1: Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct

Examples:
Input: nums=[1,2,3,4] Output: false
Input: nums=[1,1,1,3,3,4,3,2,4,2] Output: true
*/

#include <iostream>
using namespace std;
// Function to check for duplicate values in the array
bool duplicateValues(int *nums, int len)
{
  for (int i = 0; i < len - 1; i++) // Loop through each element in the array
  {
    for (int j = i + 1; j < len; j++) // Compare the current element with the rest of the elements in the array
    {
      if (nums[i] == nums[j]) // If a duplicate is found, return true
      {
        return true; // Duplicate Found
      }
    }
  }
  return false; // No Duplicates Found
}

int main()
{
  int arr[] = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
  int len = sizeof(arr) / sizeof(int);

  bool result = duplicateValues(arr, len);
  cout << "Result: " << result << endl;
  return 0;
}