#include <iostream>
using namespace std;

void spiralMatrix(int mat[][4], int n, int m)
{
  int srow = 0, scol = 0;
  int erow = n - 1, ecol = m - 1;

  while (srow <= erow && scol <= ecol)
  {
    // Top row
    for (int j = scol; j <= ecol; j++)
    {
      cout << mat[srow][j] << " ";
    }
    // Right column
    for (int i = srow + 1; i <= erow; i++)
    {
      cout << mat[i][ecol] << " ";
    }
    // Bottom row
    for (int j = ecol - 1; j >= scol; j--)
    {
      if (srow == erow) // single row left
        break;
      cout << mat[erow][j] << " ";
    }
    // left column
    for (int i = erow - 1; i >= srow + 1; i--)
    {
      if (scol == ecol) // single column left
        break;
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

  spiralMatrix(arr, 4, 4);
  return 0;
}

/*
output:
1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10

approach:
1. We maintain four variables to keep track of the current boundaries of the matrix:
   - srow (starting row)
   - scol (starting column)
   - erow (ending row)
   - ecol (ending column)
2. We use a while loop that continues until the starting row is less than or equal to the ending row and the starting column is less than or equal to the ending column.
3. Inside the loop, we traverse the matrix in four steps:
    - Traverse the top row from left to right and print the elements.
    - Traverse the rightmost column from top to bottom and print the elements.
    - Traverse the bottom row from right to left and print the elements (only if there are multiple rows).
    - Traverse the leftmost column from bottom to top and print the elements (only if there are multiple columns).
4. After traversing the current layer, we update the boundaries to move inward for the next layer of the spiral.

*/