#include <iostream>
using namespace std;

/*
Question 1: Use the following sorting algorithms to sort an array in DESCENDING order:
a. Bubble Sort
b.Selection Sort
c.Insertion Sort
d.Counting Sort
You can use this array as an example: [3,6,2,1,8,7,4,5,3,1]
*/

void print(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << ", ";
  }
}
// Practice 1
/*
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
  for (int i = maxVal, j = 0; i >= minVal; i--)
  {
    while (freq[i] > 0)
    {
      arr[j++] = i;
      freq[i]--;
    }
  }
  print(arr, n);
}
*/

// Practice 2
/*
void countSort(int arr[], int n)
{
  int freq[100000] = {0};
  int minVal = INT_MAX, maxVal = INT_MIN;
  for (int i = 0; i < n; i++)
  {
    minVal = min(minVal, arr[i]);
    maxVal = max(maxVal, arr[i]);
  }
  // step 1
  for (int i = 0; i < n; i++)
  {
    freq[arr[i]]++;
  }
  // step 2
  for (int i = maxVal, j = 0; i >= minVal; i--)
  {
    while (freq[i] > 0)
    {
      arr[j++] = i;
      freq[i]--;
    }
  }
  print(arr, n);
}
*/

// Practice 3
/*
void countSort(int arr[], int n)
{
  int freq[100000] = {0};
  int minVal = INT_MAX, maxVal = INT_MIN;
  for (int i = 0; i < n; i++)
  {
    minVal = min(minVal, arr[i]);
    maxVal = max(maxVal, arr[i]);
  }
  // step 1
  for (int i = 0; i < n; i++)
  {
    freq[arr[i]]++;
  }
  // step 2
  for (int i = maxVal, j = 0; i >= minVal; i--)
  {
    while (freq[i] > 0)
    {
      arr[j++] = i;
      freq[i]--;
    }
  }
  print(arr, n);
}
*/

// Practice 4
void countSort(int arr[], int n)
{
  int freq[10000] = {0};
  int minVal = INT_MAX, maxVal = INT_MIN;
  for (int i = 0; i < n; i++)
  {
    minVal = min(minVal, arr[i]);
    maxVal = max(maxVal, arr[i]);
  }
  // step 1
  for (int i = 0; i < n; i++)
  {
    freq[arr[i]]++;
  }
  // step 2
  for (int i = maxVal, j = 0; i >= minVal; i--)
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
  int arr[] = {3, 6, 2, 1, 8, 7, 4, 5, 3, 1};
  int n = sizeof(arr) / sizeof(int);

  countSort(arr, n);
  return 0;
}