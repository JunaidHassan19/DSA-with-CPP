/*
Question 3: Write a program to Find Transpose of a Matrix.
What is Transpose?
Transpose of a matrix is the process of swapping the rows to columns. For a 2x3 matrix,
 Matrix a11 a12 a13
        a21 a22 a23

Transposed Matrix a11 a21
                  a12 a22
                  a13 a23

*/

#include <iostream>
using namespace std;

int main()
{
  int row = 2, collumn = 3;
  int mat[][collumn] = {{11, 22, 33}, {44, 55, 66}};

  int trans[collumn][row] = {{0}};

  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < collumn; j++)
    {
      trans[j][i] = mat[i][j];
    }
  }

  for (int i = 0; i < collumn; i++)
  {
    for (int j = 0; j < row; j++)
    {
      cout << trans[i][j] << " ";
    }
    cout << endl;
  }
}