#include <iostream>
using namespace std;

// Search in a row-wise and column-wise sorted matrix
bool search(int mat[][4], int n, int m, int key)
{
  int i = 0, j = m - 1; // top right corner

  while (i < n && j >= 0) // while we are in the matrix
  {
    if (mat[i][j] == key) // found
    {
      cout << "Found at cell (" << i << "," << j << ")" << endl;
      return true;
    }
    else if (mat[i][j] > key) // if the current element is greater than the key, then the key must be in the left side of the current element
    {
      // left side
      j--;
    }
    else
    {
      // down side
      i++;
    }
  }
  cout << "Key not found";
  return false;
}

int main()
{
  int matrix[4][4] = {{10, 20, 30, 40},
                      {15, 25, 35, 35},
                      {27, 29, 37, 48},
                      {32, 33, 39, 50}};

  search(matrix, 4, 4, 37);
  return 0;
}

/*
output:
Found at cell (2,2)

Time complexity: O(n + m) where n is the number of rows and m is the number of columns in the matrix.
logic: We start from the top right corner of the matrix. If the current element is equal to the key, we have found the key and we return true. If the current element is greater than the key, then the key must be in the left side of the current element, so we move left. If the current element is less than the key, then the key must be in the down side of the current element, so we move down. We repeat this process until we find the key or we go out of the matrix.

approach: We can also start from the bottom left corner of the matrix and apply the same logic. If the current element is equal to the key, we have found the key and we return true. If the current element is greater than the key, then the key must be in the up side of the current element, so we move up. If the current element is less than the key, then the key must be in the right side of the current element, so we move right. We repeat this process until we find the key or we go out of the matrix.
*/