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

// Selection Sort
void print(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << ", ";
  }
}

// void selectSort(int arr[], int n)
// {
//   for (int i = 0; i < n - 1; i++)
//   {
//     int minIdx = i;
//     for (int j = i + 1; j < n; j++)
//     {
//       if (arr[j] > arr[minIdx])
//       {
//         swap(arr[j], arr[minIdx]);
//       }
//     }
//   }
//   print(arr, n);
// }

// void selectSort(int arr[], int n)
// {
//   for (int i = 0; i < n; i++)
//   {
//     int minIdx = i;
//     for (int j = i + 1; j < n; j++)
//     {
//       if (arr[j] > arr[minIdx])
//       {
//         swap(arr[j], arr[minIdx]);
//       }
//     }
//   }
//   print(arr, n);
// }

// void selectSort(int arr[], int n) {
//   for(int i = 0; i < n; i ++) {
//     int minIdx = i;
//     for(int j = i + 1; j < n; j ++) {
//       if(arr[j]> arr[minIdx]){
//         swap(arr[j], arr[minIdx]);
//       }
//     }
//   }
//   print(arr, n);
// }

// void selectSort(int arr[], int n)
// {
//   for (int i = 0; i < n; i++)
//   {
//     int minIdx = i;
//     for (int j = i + 1; j < n; j++)
//     {
//       if (arr[j] > arr[minIdx])
//       {
//         swap(arr[j], arr[minIdx]);
//       }
//     }
//   }
//   print(arr, n);
// }

void selectSort(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    int minIdx = i;
    for (int j = i + 1; j < n; j++)
    {
      if (arr[j] > arr[minIdx])
      {
        swap(arr[j], arr[minIdx]);
      }
    }
  }
  print(arr, n);
}

int main()
{
  int arr[] = {3, 6, 2, 1, 8, 7, 4, 5, 3, 1};
  int n = sizeof(arr) / sizeof(int);

  selectSort(arr, n);
  return 0;
}