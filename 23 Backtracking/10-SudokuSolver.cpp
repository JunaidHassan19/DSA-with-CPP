#include <iostream>
#include <string>
using namespace std;

// Sudoku Solver
void printSudoku(int arr[][9])
{
  for (int i = 0; i < 9; i++)
  {
    for (int j = 0; j < 9; j++)
    {

      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}

// Check if it's safe to place 'digit' at position (row, col) in the Sudoku board
bool isSafe(int sudoku[9][9], int row, int col, int digit)
{
  // Vertical check
  for (int i = 0; i <= 8; i++)
  {
    if (sudoku[i][col] == digit)
    {
      return false;
    }
  }
  // horizontal check
  for (int j = 0; j <= 8; j++)
  {
    if (sudoku[row][j] == digit)
    {
      return false;
    }
  }
  // 3X3 grid check
  int startRow = (row / 3) * 3; // Calculate starting row index of the 3x3 grid
  int startCol = (col / 3) * 3; // Calculate starting column index of the 3x3 grid

  for (int i = startRow; i <= startRow + 2; i++)
  {
    for (int j = startCol; j <= startCol + 2; j++)
    {
      if (sudoku[i][j] == digit)
      {
        return false;
      }
    }
  }
  return true;
}

// Recursive function to solve the Sudoku board using backtracking
bool sudokuSolver(int sudoku[9][9], int row, int col)
{
  if (row == 9)
  {
    printSudoku(sudoku);
    return true;
  }
  int nextRow = row;
  int nextCol = col + 1;
  if (col + 1 == 9) // Move to next row if we reach end of current row
  {
    nextRow = row + 1;
    nextCol = 0;
  }

  if (sudoku[row][col] != 0) // If cell is already filled, move to next cell
  {
    return sudokuSolver(sudoku, nextRow, nextCol);
  }

  for (int digit = 1; digit <= 9; digit++) // Try digits 1 to 9 in the current cell
  {
    if (isSafe(sudoku, row, col, digit)) // If it's safe to place the digit, do so and recurse for next cells
    {
      sudoku[row][col] = digit;
      if (sudokuSolver(sudoku, nextRow, nextCol)) // If recursion returns true, we found a solution, so return true
      {
        return true;
      }
      sudoku[row][col] = 0;
    }
  }
  return false;
}

int main()
{
  int sudoku[9][9] = {{0, 0, 8, 0, 0, 0, 0, 0, 0},
                      {4, 9, 0, 1, 5, 7, 0, 0, 2},
                      {0, 0, 3, 0, 0, 4, 1, 9, 0},
                      {1, 8, 5, 0, 6, 0, 0, 2, 0},
                      {0, 0, 0, 0, 2, 0, 0, 6, 0},
                      {9, 6, 0, 4, 0, 5, 3, 0, 0},
                      {0, 3, 0, 0, 7, 2, 0, 0, 4},
                      {0, 4, 9, 0, 3, 0, 0, 5, 7},
                      {8, 2, 7, 0, 0, 9, 0, 1, 3}};

  sudokuSolver(sudoku, 0, 0);

  return 0;
}

/*
PSEUDO CODE:
1. Create a function to print the Sudoku board.
2. Create a function to check if it's safe to place a digit at a given position.
3. Create a recursive function to solve the Sudoku board using backtracking:
   a. If we have filled all cells, print the solution and return true.
   b. If the current cell is already filled, move to the next cell.
   c. Try placing digits 1-9 in the current cell:
      i. If it's safe to place the digit, do so and recursively solve for the next cell.
      ii. If the recursive call returns true, we found a solution, so return true.
      iii. If not, backtrack by resetting the cell and trying the next digit.
   d. If no digit works, return false.
4. In main(), initialize the Sudoku board and call the solver function.
TIME COMPLEXITY:
- In the worst case, the time complexity can be O(9^(N*N)) where N is the size of the Sudoku board (9 in this case). This is because in the worst case, we may have to try all digits (1-9) for each cell in the 9x9 grid.
- However, with the backtracking and safety checks, the actual time taken is usually much less than the worst case, especially for well-formed Sudoku puzzles.
SPACE COMPLEXITY:
- The space complexity is O(N*N) where N is the size of the Sudoku board (9 in this case). This is due to the recursive call stack and the storage of the Sudoku board.
*/