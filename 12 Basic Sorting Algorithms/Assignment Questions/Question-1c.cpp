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
// void insertSort(int arr[], int n)
// {
//   for (int i = 1; i < n; i++)
//   {
//     int curr = arr[i];
//     int prev = i - 1;
//     while (prev >= 0 && arr[prev] < curr)
//     {
//       swap(arr[prev], arr[prev + 1]);
//       prev--;
//     }
//     arr[prev + 1] = curr;
//   }
//   print(arr, n);
// }

// void insertSort(int arr[], int n)
// {
//   for (int i = 1; i < n; i++)
//   {
//     int curr = arr[i];
//     int prev = i - 1;
//     while (prev >= 0 && arr[prev] < curr)
//     {
//       swap(arr[prev], arr[prev + 1]);
//       prev--;
//     }
//     arr[prev + 1] = curr;
//   }
//   print(arr, n);
// }

// void insertSort(int arr[], int n)
// {
//   for (int i = 1; i < n; i++)
//   {
//     int curr = arr[i];
//     int prev = i - 1;
//     while (prev >= 0 && arr[prev] < curr)
//     {
//       swap(arr[prev], arr[prev + 1]);
//       prev--;
//     }
//     arr[prev + 1] = curr;
//   }
//   print(arr, n);
// }

void insertSort(int arr[], int n)
{
  for (int i = 1; i < n; i++)
  {
    int curr = arr[i];
    int prev = i - 1;
    while (prev >= 0 && arr[prev] < curr)
    {
      swap(arr[prev], arr[prev + 1]);
      prev--;
    }
    arr[prev + 1] = curr;
  }
  print(arr, n);
}

int main()
{
  int arr[] = {3, 6, 2, 1, 8, 7, 4, 5, 3, 1};
  int n = sizeof(arr) / sizeof(int);

  insertSort(arr, n);
  return 0;
}