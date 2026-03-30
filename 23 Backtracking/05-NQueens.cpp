#include <iostream>
#include <vector>
using namespace std;

// 2X2 N-Queens Problem
void printBoard(vector<vector<char>> board)
{
  int n = 2;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << board[i][j] << " ";
    }
    cout << endl;
  }
  cout << "_____" << endl;
}

// place queens row by row without checking for safety (for simplicity)
void nQueens(vector<vector<char>> board, int row)
{
  int n = board.size();
  if (row == n)
  {
    printBoard(board);
    return;
  }

  for (int j = 0; j < n; j++)
  {
    board[row][j] = 'Q';
    nQueens(board, row + 1);
    board[row][j] = '.';
  }
}

int main()
{
  vector<vector<char>> board;
  int n = 2;

  for (int i = 0; i < n; i++)
  {
    vector<char> newRow;
    for (int j = 0; j < n; j++)
    {
      newRow.push_back('.');
    }
    board.push_back(newRow);
  }

  nQueens(board, 0);
  return 0;
}

/*
Recursion Tree / Call Flow (for n = 2, without safety checks)
==============================================================

The code places exactly one queen in each row.
For every row, it tries all columns (0 to n - 1).

nQueens(board, 0)
|- place at (0,0) -> nQueens(board, 1)
|  |- place at (1,0) -> nQueens(board, 2) -> print configuration
|  |- place at (1,1) -> nQueens(board, 2) -> print configuration
|- place at (0,1) -> nQueens(board, 1)
   |- place at (1,0) -> nQueens(board, 2) -> print configuration
   |- place at (1,1) -> nQueens(board, 2) -> print configuration

So this prints all row-wise placements for 2x2 board:
1) (0,0), (1,0)
2) (0,0), (1,1)
3) (0,1), (1,0)
4) (0,1), (1,1)

Important:
- This version does NOT check queen safety (column/diagonal attacks).
- Therefore, it prints all possible placements with one queen per row,
  not only valid N-Queens solutions.

Why n^n configurations here?
- There are n rows.
- For each row, n column choices are explored.
- Total recursive combinations = n * n * ... * n (n times) = n^n.
*/