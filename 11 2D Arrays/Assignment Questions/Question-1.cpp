#include <iostream>
using namespace std;

/*
Question 1: Print the number of all 7’s that are in the 2D array. Example: Input: int arr[][]={{4,7,8},{8,8,7}}; n=2, m=3 Output: 2
*/

void count(int mat[2][3], int n, int m)
{
  int countNu = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (mat[i][j] == 7)
      {
        countNu++;
      }
    }
  }
  cout << countNu;
}

int main()
{
  int arr[2][3] = {{4, 7, 8},
                   {8, 8, 7}};

  count(arr, 2, 3);
  return 0;
}