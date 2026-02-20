#include <iostream>
using namespace std;

// This program demonstrates how to output elements of an array.
int main()
{
  int arr[5] = {5, 8, 7, 6, 2};
  int len = sizeof(arr) / sizeof(int); // Calculate the number of elements in the array

  for (int idX = 0; idX < len; idX++)
  {
    cout << arr[idX] << " ";
  }
  return 0;
}

// This program demonstrates how to take input for an array from the user.
int main()
{
  int len;
  cout << "Enter Array Size: ";
  cin >> len;
  int arr2[len];
  cout << "Enter Array Elements: ";
  // Taking input for each element of the array
  for (int i = 0; i < len; i++)
  {
    cin >> arr2[i];
  }
  // Output the elements of the array
  for (int i = 0; i < len; i++)
  {
    cout << arr2[i] << ", ";
  }
  return 0;
}