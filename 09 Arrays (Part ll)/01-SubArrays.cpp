#include <iostream>
using namespace std;
void printSubarrays(int *arr, int len)
{
  for (int start = 0; start < len; start++)
  {
    for (int end = start; end < len; end++)
    {
      // cout << "(" << start << "," << end << ") ";
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
  int len = 5;

  printSubarrays(arr, len);

  return 0;
}