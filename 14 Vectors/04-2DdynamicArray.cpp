#include <iostream>
using namespace std;

int main()
{
  int rows, cols;
  cout << "Enter rows: ";
  cin >> rows;
  cout << "Enter Cols: ";
  cin >> cols;

  int **matrix = new int *[rows]; // Step 1: Create an array of pointers (for rows)

  for (int i = 0; i < rows; i++)
  {
    matrix[i] = new int[cols]; // Step 2: For each row, create an array of integers (for columns)
  }

  int x = 1;
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      matrix[i][j] = x++; // Step 3: Fill the matrix with sequential values
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}

/*
Logic:
1. We first take the number of rows and columns as input from the user.
2. We create a pointer to a pointer (int **matrix) to represent a 2D array.
3. We allocate memory for an array of pointers (one for each row) using new int*[rows].
4. For each row, we allocate memory for an array of integers (one for each column) using new int[cols].
5. We then fill the matrix with sequential values starting from 1 and print the matrix.
Note:
- This code demonstrates dynamic memory allocation for a 2D array in C++.
- Memory allocated with new should be freed using delete to prevent memory leaks. In this case, we should add code to delete the allocated memory for each row and then delete the array of pointers after we are done using the matrix.

*/