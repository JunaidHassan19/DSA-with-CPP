#include <iostream>
using namespace std;

// In a 2D array, the name of the array (mat) is a pointer to the first row of the array (mat[0]).
// Therefore, mat is equivalent to &mat[0][0], which is the address of the first element of the first row of the array.
int main()
{
  int mat[4][4] = {{1, 2, 3, 4},
                   {5, 6, 7, 8},
                   {9, 10, 11, 12},
                   {13, 14, 15, 16}};

  cout << mat << " = " << &mat[0][0] << endl;        // mat is equivalent to &mat[0][0]
  cout << mat + 1 << " != " << &mat[0][1] << endl;   // mat + 1 is equivalent to &mat[1][0], not &mat[0][1]
  cout << mat + 1 << " = " << &mat[1][0] << endl;    // mat + 1 is equivalent to &mat[1][0]
  cout << mat[0] << " = " << &mat[0][0] << endl;     // mat[0] is equivalent to &mat[0][0]
  cout << mat[0] + 1 << " = " << &mat[0][1] << endl; // mat[0] + 1 is equivalent to &mat[0][1]
  return 0;
}
