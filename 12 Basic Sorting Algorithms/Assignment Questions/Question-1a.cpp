#include <iostream>
using namespace std;

/*
Question 1: Use the following sorting algorithms to sort an array in DESCENDING order:
a. Bubble Sort
b.Selection Sort
c.InsertionSort
d.Counting Sort
You can use this array as an example: [3,6,2,1,8,7,4,5,3,1]
*/

// Bubble Sort

void print(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << ", ";
  }
}

// void bubbleSort(int arr[], int n)
// {
//   for (int i = 0; i < n - 1; i++)
//   {
//     for (int j = 0; j < n - i - 1; j++)
//     {
//       if (arr[j] < arr[j + 1])
//       {
//         swap(arr[j], arr[j + 1]);
//       }
//     }
//   }
//   print(arr, n);
// }

// void bubbleSort(int arr[], int n)
// {
//   for (int i = 0; i < n - 1; i++)
//   {
//     for (int j = 0; j < n - i - 1; j++)
//     {
//       if (arr[j] < arr[j + 1])
//       {
//         swap(arr[j], arr[j + 1]);
//       }
//     }
//   }
//   print(arr, n);
// }

void bubbleSort(int arr[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      if (arr[j] < arr[j + 1])
      {
        swap(arr[j], arr[j + 1]);
      }
    }
  }
  print(arr, n);
}

int main()
{
  int arr[] = {3, 6, 2, 1, 8, 7, 4, 5, 3, 1};
  int n = sizeof(arr) / sizeof(int);

  bubbleSort(arr, n);
  return 0;
}