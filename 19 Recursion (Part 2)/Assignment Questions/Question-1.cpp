#include <iostream>
#include <string>
using namespace std;

/*
Question 1: Write a recursive function to perform Binary Search.
Input: arr[] = {1,2,3,4,5,6,7}, n = 7, key = 5
Output: 4 (index of key)

* Use the starting index & ending index logic used in rotated, sorted array Questions
*/

int binSearch(int arr[], int si, int ei, int key)
{
  if (si > ei)
  {
    return -1;
  }
  int mid = si + (ei - si) / 2;
  if (arr[mid] == key)
  {
    return mid;
  }
  else if (arr[mid] > key)
  {
    // left half call
    return binSearch(arr, si, mid - 1, key);
  }
  else
  {
    // right half call
    return binSearch(arr, mid + 1, ei, key);
  }
}

int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6, 7};
  int n = sizeof(arr) / sizeof(int);
  int key = 5;
  int result = binSearch(arr, 0, n - 1, key);
  std::cout << result << std::endl;

  return 0;
}