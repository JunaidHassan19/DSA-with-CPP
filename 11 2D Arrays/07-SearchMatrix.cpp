#include <iostream>
using namespace std;

// Search Matrix - Brute Force
void searchMat(int mat[][4], int n, int m, int key)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (mat[i][j] == key)
      {
        cout << "Found key at (" << i << ", " << j << ")" << endl;
      }
    }
  }
  cout << "Key not found";
}

int main()
{
  int matrix[4][4] = {{1, 2, 3, 4},
                      {5, 6, 7, 8},
                      {9, 10, 11, 12},
                      {13, 14, 15, 16}};

  searchMat(matrix, 4, 4, 15);

  return 0;
}

/*
output:
Found key at (3, 2)

Time complexity: O(n * m) where n is the number of rows and m is the number of columns in the matrix.
Logic: We traverse the entire matrix and check if the current element is equal to the key.
*/