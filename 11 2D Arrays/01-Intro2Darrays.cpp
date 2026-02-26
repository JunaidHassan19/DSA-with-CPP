#include <iostream>
using namespace std;
// Definition of 2D Arrays:
// A 2D array is a collection of elements arranged in rows and columns.
// Syntax: dataType arrayName[rows][columns];
// Example: int arr[3][3] means 3 rows and 3 columns
// Elements are stored in row-major order (row by row in memory)
// Access elements using: arrayName[rowIndex][columnIndex]

int main()
{
  int students[3][3] = {{98, 97, 96},
                        {88, 85, 89},
                        {94, 86, 87}};

  cout << students[1][1] << endl; // 85
  cout << students[0][1] << endl; // 97
  cout << students[2][2] << endl; // 87

  return 0;
}