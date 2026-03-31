#include <iostream>
#include <vector>
using namespace std;

// N-Queens Variations - print any one solution.
void printBoard(vector<vector<char>> board)
{
  int n = 4;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << board[i][j] << " ";
    }
    cout << endl;
  }
  cout << "---------" << endl;
}

// Check if it's safe to place a queen at board[row][col]
bool isSafe(vector<vector<char>> board, int row, int col)
{
  int n = board.size();
  // Horizontal check
  for (int j = 0; j < n; j++)
  {
    if (board[row][j] == 'Q')
    {
      return false;
    }
  }

  // Vertical check
  for (int i = 0; i < row; i++)
  {
    if (board[i][col] == 'Q')
    {
      return false;
    }
  }

  // Diagonal left check
  for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
  {
    if (board[i][j] == 'Q')
    {

      return false;
    }
  }

  // Diagonal right check
  for (int i = row, j = col; i >= 0 && j < n; i--, j++)
  {
    if (board[i][j] == 'Q')
    {
      return false;
    }
  }
  return true;
}

bool nQueens(vector<vector<char>> board, int row)
{
  int n = board.size();
  if (row == n)
  {
    printBoard(board);
    return true;
  }
  for (int j = 0; j < n; j++)
  {
    if (isSafe(board, row, j))
    {
      board[row][j] = 'Q';
      if (nQueens(board, row + 1))
      {
        return true;
      }
      board[row][j] = '.';
    }
  }
  return false;
}

int main()
{
  vector<vector<char>> board;
  int n = 4;

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