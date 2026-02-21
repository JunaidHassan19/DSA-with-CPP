#include <iostream>
using namespace std;

// Function to perform linear search on the array
// The function takes a pointer to the array, the key to search for, and the length of the array as parameters
int searchKey(int *arr, int key, int len)
{
  for (int i = 0; i < len; i++)
  {
    if (arr[i] == key)
    {
      return i;
    }
  }
  return -1;
}

int main()
{
  int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
  int len = sizeof(arr) / sizeof(int);
  int key = 10; // The value we want to search for in the array

  cout << searchKey(arr, key, len);

  return 0;
}