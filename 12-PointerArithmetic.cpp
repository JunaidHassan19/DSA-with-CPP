#include <iostream>
using namespace std;

void printArr(int *arr, int len)
{
  for (int i = 0; i < len; i++)
  {
    cout << *arr << ", ";
    arr = arr + 1;
  }
  cout << endl;
}
int main()
{
  // int a = 5;
  // int *ptr = &a;
  // cout << ptr << endl;
  // ptr += 3;
  // cout << ptr << endl;

  int arr[] = {1, 2, 3, 4, 5};
  int len = sizeof(arr) / sizeof(int);

  printArr(arr, len);

  return 0;
}