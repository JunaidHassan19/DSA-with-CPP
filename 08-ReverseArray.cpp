#include <iostream>
using namespace std;

// Function to reverse the elements of an array with space complexity O(1) and time complexity O(n)
void reverse(int *arr, int len)
{
  int start = 0;
  int end = len - 1;
  while (start < end)
  {
    // int temp = arr[start];
    // arr[start] = arr[end];
    // arr[end] = temp;
    swap(arr[start], arr[end]); // Using the built-in swap function to swap the elements at the start and end indices
    start++;
    end--;
  }
  cout << "Reversed array: ";
  for (int i = 0; i < len; i++)
  {
    cout << arr[i] << ", ";
  }
  cout << endl;
}

int main()
{
  int arr[] = {5, 4, 3, 9, 2};
  int len = sizeof(arr) / sizeof(int);

  reverse(arr, len);
  return 0;
}