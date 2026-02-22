#include <iostream>
using namespace std;

// This program finds the largest and smallest values in an array.
int main()
{
  int arr[5] = {4, 6, 8, 7, 5};
  int len = sizeof(arr) / sizeof(int); // Calculate the number of elements in the array

  int max = arr[0]; // Initialize max to the first element of the array
  int min = arr[0]; // Initialize min to the first element of the array
  for (int i = 0; i < len; i++)
  {
    if (arr[i] > max) // Update max if the current element is greater than max
    {
      max = arr[i]; // Update max to the current element
    }
    if (arr[i] < min) // Update min if the current element is less than min
    {
      min = arr[i]; // Update min to the current element
    }
  }
  cout << max << " Is the Largest value" << endl;
  cout << min << " Is the lowest value";
  return 0;
}