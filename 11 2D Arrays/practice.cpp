#include <iostream>
using namespace std;

// Spiral Matrix
/*
void spiralMat(int mat[][4], int n, int m)
{
  int srow = 0, scol = 0;
  int erow = n - 1, ecol = m - 1;
  while (srow <= erow && scol <= ecol)
  {
    // Top
    for (int j = scol; j <= ecol; j++)
    {
      cout << mat[srow][j] << " ";
    }
    // Right
    for (int i = srow + 1; i <= erow; i++)
    {
      cout << mat[i][ecol] << " ";
    }
    // bottom
    for (int j = ecol - 1; j >= scol; j--)
    {
      if (srow == erow)
      {
        break;
      }
      cout << mat[erow][j] << " ";
    }
    // left
    for (int i = erow - 1; i >= srow + 1; i--)
    {
      if (scol == ecol)
      {
        break;
      }
      cout << mat[i][scol] << " ";
    }
    srow++;
    scol++;
    erow--;
    ecol--;
  }
  cout << endl;
}
int main()
{
  int arr[4][4] = {{1, 2, 3, 4},
                   {5, 6, 7, 8},
                   {9, 10, 11, 12},
                   {13, 14, 15, 16}};
  spiralMat(arr, 4, 4);
  return 0;
}
*/

// Diagonal Sum

int diagonal(int mat[][3], int n)
{
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum += mat[i][i];
    if (i != n - i - 1)
    {
      sum += mat[i][n - i - 1];
    }
  }
  cout << "Sum = " << sum;
  return sum;
}

int main()
{
  int matrix[3][3] = {{1, 2, 3},
                      {4, 5, 6},
                      {7, 8, 9}};

  diagonal(matrix, 3);
  return 0;
}