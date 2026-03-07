#include <iostream>
using namespace std;

// Counting Sort Algorithm
void print(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}

void countSort(int arr[], int n) // works only for non-negative integers
{
  int freq[100000] = {0};
  int minVal = INT_MAX, maxVal = INT_MIN;
  for (int i = 0; i < n; i++)
  {
    minVal = min(minVal, arr[i]);
    maxVal = max(maxVal, arr[i]);
  }
  // 1st step - time complexity O(n)
  for (int i = 0; i < n; i++)
  {
    freq[arr[i]]++;
  }

  // 2nd step - time complexity O(n + k) where k is the range of the input elements
  for (int i = minVal, j = 0; i <= maxVal; i++)
  {
    while (freq[i] > 0)
    {
      arr[j++] = i;
      freq[i]--;
    }
  }
  print(arr, n);
}

int main()
{
  int arr[] = {1, 4, 1, 3, 2, 4, 3, 7};
  int n = sizeof(arr) / sizeof(int);

  countSort(arr, n);
  return 0;
}

/*
logic:
1. Find the minimum and maximum values in the input array to determine the range of the elements.
2. Create a frequency array (freq) of size equal to the range of the input elements and initialize it with zeros.
3. Count the frequency of each element in the input array and store it in the freq array.
4. Reconstruct the sorted array from the frequency array. Iterate through the freq array and for each index i, if freq[i] is greater than 0, add the value i to the output array freq[i] times.
Time Complexity: O(n + k), where n is the number of elements in the input array and k is the range of the input elements (maxVal - minVal + 1).
Space Complexity: O(k) for the frequency array, where k is the range of the input elements. The output array can be considered O(1) if we sort the input array in place.
*/