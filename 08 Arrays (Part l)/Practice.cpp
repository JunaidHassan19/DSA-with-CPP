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

// Arrays Passed by Reference -ll
/*
void fun(int arr[])
{
  arr[0] = 1000;
}

void fun2(int *ptr)
{
  ptr[2] = 500;
}

void printArr(int arr[], int len)
{
  // arr[0] = 100;
  for (int i = 0; i < len; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main()
{
  int arr[] = {1, 2, 3, 4, 5};
  int len = sizeof(arr) / sizeof(int);
  printArr(arr, len);
  cout << arr[2];
  return 0;
}
*/

// Linear Search
/*
int linearSearch(int *arr, int len, int key)
{
  for (int i = 0; i < len; i++)
  {
    if (arr[i] == key)
    {
      return i;
    }
  }
  return -1;
}

int main()
{
  int arr[] = {2, 4, 6, 8, 10, 12, 14, 18};
  int len = sizeof(arr) / sizeof(int);
  int key = 10;

  cout << linearSearch(arr, len, key);
}
*/

// Reverse Array
/*
void reverse(int *arr, int len)
{
  int start = 0;
  int end = len - 1;
  while (start < end)
  {
    swap(arr[start], arr[end]);
    start++;
    end--;
  }
  cout << "Reversed array ";
  for (int i = 0; i < len; i++)
  {
    cout << arr[i] << ", ";
  }
  cout << endl;
}

int main()
{
  int arr[] = {2, 4, 6, 8, 10, 12};
  int len = sizeof(arr) / sizeof(int);

  reverse(arr, len);
}
*/

// Binary Search

int binarySearch(int *arr, int len, int key)
{
  int st = 0;
  int end = len - 1;
  while (st <= end)
  {
    int mid = (st + end) / 2;
    if (arr[mid] == key)
    {
      return mid;
    }
    else if (arr[mid] < key)
    {
      st = mid + 1;
    }
    else
    {
      end = mid - 1;
    }
  }
  return -1;
}

int main()
{
  int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
  int len = sizeof(arr) / sizeof(int);
  int key = 12;

  cout << binarySearch(arr, len, key);
}