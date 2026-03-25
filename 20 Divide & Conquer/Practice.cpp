#include <iostream>
#include <vector>
using namespace std;

// Merge sort Practice
/*

// Merge sort implementation with ascending order printing

// void merge(int arr[], int si, int mid, int ei)
// {
//   vector<int> temp;
//   int i = si;
//   int j = mid + 1;
//   while (i <= mid && j <= ei)
//   {
//     if (arr[i] <= arr[j])
//     {
//       temp.push_back(arr[i++]);
//     }
//     else
//     {
//       temp.push_back(arr[j++]);
//     }
//   }
//   while (i <= mid)
//   {
//     temp.push_back(arr[i++]);
//   }
//   while (j <= ei)
//   {
//     temp.push_back(arr[j++]);
//   }
//   // copy to original
//   for (int idx = si, x = 0; idx <= ei; idx++)
//   {
//     arr[idx] = temp[x++];
//   }
// }
// void mergeSort(int arr[], int si, int ei)
// {
//   if (si >= ei)
//   {
//     return;
//   }
//   int mid = (si + ei) / 2;
//   mergeSort(arr, si, mid);     // left
//   mergeSort(arr, mid + 1, ei); // right
//   merge(arr, si, mid, ei);
// }
// void printArray(int arr[], int n)
// {
//   for (int i = 0; i < n; i++)
//   {
//     cout << arr[i] << " ";
//   }
//   cout << endl;
// }

// Merge sort implementation with descending order printing

void merge(int arr[], int si, int mid, int ei)
{
  vector<int> temp;
  int i = si;
  int j = mid + 1;

  while (i <= mid && j <= ei)
  {
    if (arr[i] >= arr[j])
    {
      temp.push_back(arr[i++]);
    }
    else
    {
      temp.push_back(arr[j++]);
    }
  }
  while (i <= mid)
  {
    temp.push_back(arr[i++]);
  }
  while (j <= ei)
  {
    temp.push_back(arr[j++]);
  }

  // to original array

  for (int idx = si, x = 0; idx <= ei; idx++)
  {
    arr[idx] = temp[x++];
  }
}

void mergeSort(int arr[], int si, int ei)
{
  if (si >= ei)
  {
    return;
  }
  int mid = (si + ei) / 2;
  mergeSort(arr, si, mid);     // left
  mergeSort(arr, mid + 1, ei); // right
  merge(arr, si, mid, ei);
}

void printArray(int arr[], int n)
{
  for (int i = n - 1; i >= 0; i--)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main()
{
  int arr[6] = {2, 5, 3, 6, 4, 1};
  int n = 6;

  mergeSort(arr, 0, n - 1);
  printArray(arr, n);
  return 0;
}
*/

// Quick Sort Practice

// Quick Sort implementation with ascending order printing

// int partition(int arr[], int si, int ei)
// {
//   int i = si - 1;
//   int pivot = arr[ei];
//   for (int j = si; j < ei; j++)
//   {
//     if (arr[j] <= pivot)
//     {
//       i++;
//       swap(arr[i], arr[j]);
//     }
//   }
//   i++;
//   swap(arr[i], arr[ei]);
//   return i;
// }
// void quickSort(int arr[], int si, int ei)
// {
//   if (si >= ei)
//     return;
//   int pivotIdx = partition(arr, si, ei);
//   quickSort(arr, si, pivotIdx - 1);
//   quickSort(arr, pivotIdx + 1, ei);
// }
// void printArr(int arr[], int n)
// {
//   for (int i = 0; i < n; i++)
//   {
//     cout << arr[i] << " ";
//   }
//   cout << endl;
// }

// Quick Sort implementation with decending order printing
int partition(int arr[], int si, int ei)
{
  int i = si - 1;
  int pivot = arr[ei];
  for (int j = si; j < ei; j++)
  {
    if (arr[j] <= pivot)
    {
      i++;
      swap(arr[i], arr[j]);
    }
  }
  i++;
  swap(arr[i], arr[ei]);
  return i;
}

void quickSort(int arr[], int si, int ei)
{
  if (si >= ei)
  {
    return;
  }

  int pivotIdx = partition(arr, si, ei);
  quickSort(arr, si, pivotIdx - 1);
  quickSort(arr, pivotIdx + 1, ei);
}

void printArr(int arr[], int n)
{
  for (int i = n; i >= 0; i--)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main()
{
  int arr[6] = {3, 6, 7, 5, 2, 4};
  int n = 6;
  quickSort(arr, 0, n - 1);
  printArr(arr, n - 1);
  return 0;
}