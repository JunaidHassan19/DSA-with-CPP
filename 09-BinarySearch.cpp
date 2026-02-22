#include <iostream>
using namespace std;
// Binary Search Algorithm
int binarySearch(int arr[], int len, int key)
{
  int st = 0;        // Starting index
  int end = len - 1; // Ending index
  while (st <= end)  // Loop will run until the starting index is less than or equal to the ending index
  {
    int mid = (st + end) / 2; // Finding the middle index
    if (arr[mid] == key)      // If the middle element is equal to the key, return the middle index
    {
      return mid; // Return the index of the key
    }
    else if (arr[mid] < key) // If the middle element is less than the key, then the key must be in the right half of the array
    {
      st = mid + 1; // Update the starting index to be one more than the middle index
    }
    else
    {
      end = mid - 1; // If the middle element is greater than the key, then the key must be in the left half of the array, so we update the ending index to be one less than the middle index
    }
  }
  return -1; // If the key is not found in the array, return -1
}

int main()
{
  int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
  int len = sizeof(arr) / sizeof(int);
  int key = 12;

  cout << binarySearch(arr, len, key);
  return 0;
}