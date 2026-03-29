#include <iostream>
#include <string>
using namespace std;

// 02 - Practice Backtracking
/*
// void printArr(int arr[], int n)
// {
//   for (int i = 0; i < n; i++)
//   {
//     cout << arr[i] << " ";
//   }
//   cout << endl;
// }
// void changeArr(int arr[], int n, int i)
// {
//   if (arr[i] == 5)
//   {
//     printArr(arr, n);
//     return;
//   }
//   arr[i] = i + 1;
//   changeArr(arr, n, i + 1);
//   arr[i] -= 2;
// }

void printArr(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void changeArr(int arr[], int n, int i)
{
  if (arr[i] == 5)
  {
    printArr(arr, n);
    return;
  }
  arr[i] = i + 1;
  changeArr(arr, n, i + 1);
  arr[i] -= 2;
}

int main()
{
  int arr[5] = {0};
  int n = 5;
  changeArr(arr, n, 0);
  printArr(arr, n);
  return 0;
}
  */

// 03 - Practice Find Subsets

// void findSubsets(string str, string subSet)
// {
//   if (str.size() == 0)
//   {
//     cout << subSet << endl;
//     return;
//   }
//   char ch = str[0];
//   // Yes choice
//   findSubsets(str.substr(1, str.size() - 1), subSet + ch);
//   // NO choice
//   findSubsets(str.substr(1, str.size() - 1), subSet);
// }

void findSubsets(string str, string subSet)
{
  if (str.size() == 0)
  {
    cout << subSet << endl;
    return;
  }
  char ch = str[0];
  // No choice
  findSubsets(str.substr(1, str.size() - 1), subSet + ch);
  // Yes choice
  findSubsets(str.substr(1, str.size() - 1), subSet);
}

int main()
{
  string str = "abc";
  string subSet = "";

  findSubsets(str, subSet);
  return 0;
}