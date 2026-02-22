#include <iostream>
using namespace std;

// Function to reverse the elements of an array with space complexity O(n) and time complexity O(n)
void reverse(int *arr, int len)
{
  int copyArr[len]; // Create a temporary array to store the reversed elements

  for (int i = 0; i < len; i++) // Loop through the original array from the beginning to the end
  {
    int j = len - i - 1; // Calculate the index of the element to be copied from the original   array (starting from the end)
    copyArr[i] = arr[j]; // Copy the element from the original array to the temporary array in reverse order
  }
  for (int i = 0; i < len; i++) // Loop through the temporary array and copy the reversed elements back to the original array
  {
    arr[i] = copyArr[i]; // Copy the reversed element from the temporary array back to the original array
  }
  for (int i = 0; i < len; i++) // Loop through the original array and print the reversed elements
  {
    cout << arr[i] << ", "; // Print the element followed by a comma and space
  }
}

int main()
{
  int arr[] = {5, 4, 3, 9, 2};
  int len = sizeof(arr) / sizeof(int);

  reverse(arr, len);
  return 0;
}