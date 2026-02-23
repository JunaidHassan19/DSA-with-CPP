#include <iostream>
using namespace std;

// Print Subarrays

// void printSubarrays(int *arr, int len)
// {
//   for (int start = 0; start < len; start++)
//   {
//     for (int end = start; end < len; end++)
//     {
//       for (int i = start; i <= end; i++)
//       {
//         cout << arr[i];
//       }
//       cout << ", ";
//     }
//     cout << endl;
//   }
// }

// void printSubarrays(int *arr, int len)
// {
//   for (int start = 0; start < len; start++)
//   {
//     for (int end = start; end < len; end++)
//     {
//       for (int i = start; i <= end; i++)
//       {
//         cout << arr[i];
//       }
//       cout << ", ";
//     }
//     cout << endl;
//   }
// }

// void printSubarrays(int *arr, int len)
// {
//   for (int start = 0; start < len; start++)
//   {
//     for (int end = start; end < len; end++)
//     {
//       for (int i = start; i <= end; i++)
//       {
//         cout << arr[i];
//       }
//       cout << ", ";
//     }
//     cout << endl;
//   }
// }

void printSubarrays(int *arr, int len)
{
  for (int start = 0; start < len; start++)
  {
    for (int end = start; end < len; end++)
    {
      for (int i = start; i <= end; i++)
      {
        cout << arr[i];
      }
      cout << ", ";
    }
    cout << endl;
  }
}
int main()
{
  int arr[5] = {1, 2, 3, 4, 5};
  int len = sizeof(arr) / sizeof(int);

  printSubarrays(arr, len);
  return 0;
}