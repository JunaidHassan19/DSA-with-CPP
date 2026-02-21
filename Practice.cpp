#include <iostream>
using namespace std;

// Creating an Array
/*
int main()
{
  int arr[5] = {1, 2, 3, 4, 5};
  int arr[5] = {1, 2};
  int arr[] = {1, 2, 3, 4, 5};
  int arr[5];

  cout << arr[0] << endl;
  cout << arr[1] << endl;
  cout << arr[2] << endl;
  cout << arr[4] << endl;

  return 0;
}
*/

// output and Input
/*

int main()
{
  // output

  int arr[5] = {1, 2, 3, 4, 5};
  int len = sizeof(arr) / sizeof(int);

  for (int i = 0; i < len; i++)
  {
    cout << arr[i] << ", ";
  }

  //Input

  int len;
  cout << "Enter the Array size: ";
  cin >> len;

  int arr[len];
  cout << "Enter the Array Elements: ";

  for (int i = 0; i < len; i++)
  {
    cin >> arr[i];
  }
  for (int i = 0; i < len; i++)
  {
    cout << arr[i] << ", ";
  }

  return 0;
}
*/

// Array Passed by Reference -l
/*
int main()
{
  int a = 10;
  int *ptr = &a;

  cout << a << endl;
  cout << ptr << endl;
  cout << *ptr << endl;
  cout << &a << endl;

  int arr[5] = {1, 2, 3, 4, 5};

  cout << *arr << endl;
  cout << *(arr + 1) << endl;
  cout << *(arr + 2) << endl;
  cout << *(arr + 3) << endl;

  return 0;
}
*/
