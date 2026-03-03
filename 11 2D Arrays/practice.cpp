#include <iostream>
using namespace std;

// intro 2D arrays
/*
int main()
{
  int arr[3][3] = {{1, 2, 3},
                   {4, 5, 6},
                   {7, 8, 9}};

  cout << arr[0][0] << endl;
  cout << arr[0][2] << endl;
  cout << arr[2][1] << endl;
  cout << arr[1][2] << endl;

  return 0;
}
*/

// output & input

// int main()
// {
//   int students[3][3];
//   int n = 3, m = 3;
//   for (int i = 0; i < n; i++)
//   {
//     for (int j = 0; j < m; j++)
//     {
//       cin >> students[i][j];
//     }
//   }
//   for (int i = 0; i < n; i++)
//   {
//     for (int j = 0; j < m; j++)
//     {
//       cout << students[i][j] << " ";
//     }
//     cout << endl;
//   }
//   return 0;
// }

// int main()
// {
//   int arr[3][4];
//   int row = 3, col = 4;
//   cout << "Enter 2D Array Elements: ";
//   for (int i = 0; i < row; i++)
//   {
//     for (int j = 0; j < col; j++)
//     {
//       cin >> arr[i][j];
//     }
//   }
//   for (int i = 0; i < row; i++)
//   {
//     for (int j = 0; j < col; j++)
//     {
//       cout << arr[i][j] << " ";
//     }
//     cout << endl;
//   }
//   return 0;
// }

// int main()
// {
//   int arr[4][4];
//   int row = 4, col = 4;
//   for (int i = 0; i < row; i++)
//   {
//     for (int j = 0; j < col; j++)
//     {
//       cin >> arr[i][j];
//     }
//   }
//   for (int i = 0; i < row; i++)
//   {
//     for (int j = 0; j < col; j++)
//     {
//       cout << arr[i][j] << " ";
//     }
//     cout << endl;
//   }
//   return 0;
// }

int main()
{
  int arr[3][4];
  int n = 3, m = 4;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> arr[i][j];
    }
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}

// Spiral Matrix
/*
// void spiralMat(int mat[][4], int n, int m)
// {
//   int srow = 0, scol = 0;
//   int erow = n - 1, ecol = m - 1;
//   while (srow <= erow && scol <= ecol)
//   {
//     // Top
//     for (int j = scol; j <= ecol; j++)
//     {
//       cout << mat[srow][j] << " ";
//     }
//     // Right
//     for (int i = srow + 1; i <= erow; i++)
//     {
//       cout << mat[i][ecol] << " ";
//     }
//     // bottom
//     for (int j = ecol - 1; j >= scol; j--)
//     {
//       if (srow == erow)
//       {
//         break;
//       }
//       cout << mat[erow][j] << " ";
//     }
//     // left
//     for (int i = erow - 1; i >= srow + 1; i--)
//     {
//       if (scol == ecol)
//       {
//         break;
//       }
//       cout << mat[i][scol] << " ";
//     }
//     srow++;
//     scol++;
//     erow--;
//     ecol--;
//   }
//   cout << endl;
// }

// void spiralMat(int mat[][4], int n, int m)
// {
//   int srow = 0, scol = 0;
//   int erow = n - 1, ecol = m - 1;
//   while (srow <= erow && scol <= ecol)
//   {
//     // top
//     for (int j = scol; j <= ecol; j++)
//     {
//       cout << mat[srow][j] << " ";
//     }
//     // right
//     for (int i = srow + 1; i <= erow; i++)
//     {
//       cout << mat[i][ecol] << " ";
//     }
//     // bottom
//     for (int j = ecol - 1; j >= scol; j--)
//     {
//       cout << mat[erow][j] << " ";
//     }
//     // left
//     for (int i = erow - 1; i >= srow + 1; i--)
//     {
//       cout << mat[i][scol] << " ";
//     }
//     srow++;
//     scol++;
//     erow--;
//     ecol--;
//   }
// }

// void spiralMat(int mat[][4], int n, int m)
// {
//   int srow = 0, scol = 0;
//   int erow = n - 1, ecol = m - 1;
//   while (srow <= erow && scol <= ecol)
//   {
//     // Top
//     for (int i = scol; i <= ecol; i++)
//     {
//       cout << mat[srow][i] << " ";
//     }
//     // right
//     for (int j = srow + 1; j <= erow; j++)
//     {
//       cout << mat[j][ecol] << " ";
//     }
//     // bottom
//     for (int i = ecol - 1; i >= srow; i--)
//     {
//       if(srow == erow) {
//         break;
//       }
//       cout << mat[erow][i] << " ";
//     }
//     // left
//     for (int j = erow - 1; j >= srow + 1; j--)
//     {
//       if(scol == ecol) {
//         break;
//       }
//       cout << mat[j][scol] << " ";
//     }
//     srow++;
//     scol++;
//     erow--;
//     ecol--;
//   }
// }

void spiralMat(int mat[][4], int n, int m)
{
  int srow = 0, scol = 0;
  int erow = n - 1, ecol = m - 1;
  while (srow <= erow && scol <= ecol)
  {
    // Top
    for (int i = scol; i <= ecol; i++)
    {
      cout << mat[srow][i] << " ";
    }
    // Right
    for (int j = srow + 1; j <= erow; j++)
    {
      cout << mat[j][ecol] << " ";
    }
    // Bottom
    for (int i = ecol - 1; i >= scol; i--)
    {
      cout << mat[erow][i] << " ";
    }
    // left
    for (int j = erow - 1; j >= srow + 1; j--)
    {
      cout << mat[j][scol] << " ";
    }
    srow++;
    scol++;
    erow--;
    ecol--;
  }
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
/*

// int diagonal(int mat[][3], int n)
// {
//   int sum = 0;
//   for (int i = 0; i < n; i++)
//   {
//     sum += mat[i][i];
//     if (i != n - i - 1)
//     {
//       sum += mat[i][n - i - 1];
//     }
//   }
//   cout << "Sum = " << sum;
//   return sum;
// }

// int diagonal(int mat[][3], int n)
// {
//   int sum = 0;
//   for (int i = 0; i < n; i++)
//   {
//     sum += mat[i][n - i - 1];
//     if (i != n - i - 1)
//     {
//       sum += mat[i][n - i - 1];
//     }
//   }
//   cout << "Sum = " << sum;
//   return sum;
// }

int diagonal(int mat[][3], int n)
{
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum += mat[i][n - i - 1];
    if (i != n - i - 1)
    {
      sum += mat[i][n - i - 1];
    }
  }
  cout << "Sum = " << sum;
  return 0;
}

int main()
{
  int matrix[3][3] = {{1, 2, 3},
                      {4, 5, 6},
                      {7, 8, 9}};

  diagonal(matrix, 3);
  return 0;
}
  */

// Search Matrix - Brute force
/*
// void searchMatrix(int mat[][4], int n, int m, int key)
// {
//   for (int i = 0; i < n; i++)
//   {
//     for (int j = 0; j < m; j++)
//     {
//       if (mat[i][j] == key)
//       {
//         cout << "Found at cell (" << i << "," << j << ")" << endl;
//         return;
//       }
//     }
//   }
//   cout << "Key not found" << endl;
// }

void searchMatrix(int mat[][4], int n, int m, int key)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (mat[i][j] == key)
      {
        cout << "Found at cell (" << i << "," << j << ")" << endl;
        return;
      }
    }
  }
  cout << "Key not found" << endl;
}
int main()
{
  int matrix[4][4] = {{10, 20, 30, 40},
                      {15, 25, 35, 45},
                      {27, 29, 37, 48},
                      {32, 33, 39, 50}};

  searchMatrix(matrix, 4, 4, 37);
  return 0;
}
*/
