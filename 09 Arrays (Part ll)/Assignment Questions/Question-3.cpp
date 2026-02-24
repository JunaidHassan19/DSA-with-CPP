/*
Question 3: Given an integer array nums, find a subarray that has the largest product, and return the product.
The test cases are generated so that the answer will fit in a 32-bit integer.

Note - This Q might feel difficult as a beginner because it uses DP approach.

Examples:
Input: nums=[2,3,-2,4]
Output: 6
Explanation: [2,3] has the largest product 6.

Input: nums=[-2,0,-1]
Output: 0
Explanation: The result cannot be 2, because [-2,-1] is not a subarray.
*/

#include <iostream>
using namespace std;
// Function to find the maximum product of a subarray
int maxProduct(int *nums, int len)
{
  int maxProduct = nums[0]; // Initialize max product to the first element
  int minProduct = nums[0]; // Initialize min product to the first element
  int result = nums[0];     // Initialize result to the first element

  for (int i = 1; i < len; i++) // Loop through the array starting from the second element
  {
    if (nums[i] < 0) // If the current number is negative, swap max and min products
    {
      swap(maxProduct, minProduct);
    }

    maxProduct = max(nums[i], maxProduct * nums[i]); // Update max product
    minProduct = min(nums[i], minProduct * nums[i]); // Update min product

    result = max(result, maxProduct); // Update result with the maximum product found so far
  }
  return result; // Return the maximum product of a subarray
}

int main()
{
  int arr[] = {2, 3, -2, 4};
  int len = sizeof(arr) / sizeof(int);

  int result = maxProduct(arr, len);
  cout << "Result: " << result << endl;
  return 0;
}