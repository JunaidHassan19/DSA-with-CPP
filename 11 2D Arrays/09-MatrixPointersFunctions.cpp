#include <iostream>
using namespace std;

// In C++, when we pass a 2D array to a function, we can use either of the following two ways to declare the parameter:
void func(int mat[0][4], int n, int m) // Here, mat is a pointer to an array of 4 integers (i.e., a pointer to a row of the 2D array).
{
  cout << "0th row ptr " << mat << endl;     // mat is a pointer to the first row of the array (i.e., &mat[0][0])
  cout << "1st row ptr " << mat + 1 << endl; // mat + 1 is a pointer to the second row of the array (i.e., &mat[1][0])
  cout << "2nd row ptr " << mat + 2 << endl; // mat + 2 is a pointer to the third row of the array (i.e., &mat[2][0])
  cout << "3rd row ptr " << mat + 3 << endl; // mat + 3 is a pointer to the fourth row of the array (i.e., &mat[3][0])

  cout << "0th row value " << *mat << endl;       // *mat is the value at the address pointed to by mat, which is the first element of the first row of the array (i.e., mat[0][0])
  cout << "2nd row value " << *(mat + 2) << endl; // *(mat + 2) is the value at the address pointed to by mat + 2, which is the first element of the third row of the array (i.e., mat[2][0])
  cout << "3rd row value " << *(mat + 3) << endl; // *(mat + 3) is the value at the address pointed to by mat + 3, which is the first element of the fourth row of the array (i.e., mat[3][0])
  cout << "1st row value " << *(mat + 1) << endl; // *(mat + 1) is the value at the address pointed to by mat + 1, which is the first element of the second row of the array (i.e., mat[1][0])

  cout << *(*(mat + 2) + 2) << endl; // *(*(mat + 2) + 2) is the value at the address pointed to by *(mat + 2) + 2, which is the third element of the third row of the array (i.e., mat[2][2])
}

void func2(int (*mat)[4], int n, int m) // Here, mat is a pointer to an array of 4 integers (i.e., a pointer to a row of the 2D array).
{
  cout << "0th row ptr " << mat << endl;     // mat is a pointer to the first row of the array (i.e., &mat[0][0])
  cout << "1st row ptr " << mat + 1 << endl; // mat + 1 is a pointer to the second row of the array (i.e., &mat[1][0])
  cout << "2nd row ptr " << mat + 2 << endl; // mat + 2 is a pointer to the third row of the array (i.e., &mat[2][0])
  cout << "3rd row ptr " << mat + 3 << endl; // mat + 3 is a pointer to the fourth row of the array (i.e., &mat[3][0])
}

int main()
{
  int mat[4][4] = {{1, 2, 3, 4},
                   {5, 6, 7, 8},
                   {9, 10, 11, 12},
                   {13, 14, 15, 16}};

  func(mat, 4, 4);
  func2(mat, 4, 4);

  return 0;
}

/*
Approach 1: Using a pointer to an array of 4 integers (i.e., a pointer to a row of the 2D array)
Approach 2: Using a pointer to an array of 4 integers (i.e., a pointer to a row of the 2D array)
In both approaches, the parameter mat is a pointer to an array of 4 integers, which means it is a pointer to a row of the 2D array. Therefore, we can use mat to access the elements of the 2D array by using pointer arithmetic and dereferencing.

formula for accessing elements in a 2D array using pointers:
To access the element at the i-th row and j-th column of a 2D array using a pointer to an array of 4 integers, we can use the following formula:
*(*(mat + i) + j)
i = row index (0-based)
j = column index (0-based)
*/