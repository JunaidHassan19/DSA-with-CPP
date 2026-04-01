#include <iostream>
#include <string>
#include <vector>
using namespace std;

// 02 - Practice Backtracking
/*
// void printArr(int arr[], int n)
// {
//   for (int i = 0; i < n; i++)
//   {
//     cout << arr[i] << " ";
//   }
//   cout << endl;
// }
// void changeArr(int arr[], int n, int i)
// {
//   if (arr[i] == 5)
//   {
//     printArr(arr, n);
//     return;
//   }
//   arr[i] = i + 1;
//   changeArr(arr, n, i + 1);
//   arr[i] -= 2;
// }

void printArr(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void changeArr(int arr[], int n, int i)
{
  if (arr[i] == 5)
  {
    printArr(arr, n);
    return;
  }
  arr[i] = i + 1;
  changeArr(arr, n, i + 1);
  arr[i] -= 2;
}

int main()
{
  int arr[5] = {0};
  int n = 5;
  changeArr(arr, n, 0);
  printArr(arr, n);
  return 0;
}
  */

// 03 - Practice Find Subsets
/*
// void findSubsets(string str, string subSet)
// {
//   if (str.size() == 0)
//   {
//     cout << subSet << endl;
//     return;
//   }
//   char ch = str[0];
//   // Yes choice
//   findSubsets(str.substr(1, str.size() - 1), subSet + ch);
//   // NO choice
//   findSubsets(str.substr(1, str.size() - 1), subSet);
// }

void findSubsets(string str, string subSet)
{
  if (str.size() == 0)
  {
    cout << subSet << endl;
    return;
  }
  char ch = str[0];
  // No choice
  findSubsets(str.substr(1, str.size() - 1), subSet + ch);
  // Yes choice
  findSubsets(str.substr(1, str.size() - 1), subSet);
}

int main()
{
  string str = "abc";
  string subSet = "";

  findSubsets(str, subSet);
  return 0;
}
  */

// 04 - Practice Find Permutations
/*
// void permutations(string str, string ans)
// {
//   int n = str.size();
//   if (n == 0)
//   {
//     cout << ans << endl;
//   }
//   for (int i = 0; i < n; i++)
//   {
//     char ch = str[i];
//     string nextStr = str.substr(0, i) + str.substr(i + 1, n - i - 1);
//     permutations(nextStr, ans + ch);
//   }
// }

// void permutations(string str, string ans)
// {
//   int n = str.size();
//   if (n == 0)
//   {
//     cout << ans << endl;
//     return;
//   }
//   for (int i = 0; i < n; i++)
//   {
//     char ch = str[i];
//     string nextStr = str.substr(0, i) + str.substr(i + 1, n - i - 1);
//     permutations(nextStr, ans + ch);
//   }
// }

void permutations(string str, string ans)
{
  int n = str.size();
  if (n == 0)
  {
    cout << ans << endl;
    return;
  }
  for (int i = 0; i < n; i++)
  {
    char ch = str[i];
    string nextStr = str.substr(0, i) + str.substr(i + 1, n - i - 1);
    permutations(nextStr, ans + ch);
  }
}

int main()
{
  string str = "abc";
  string ans = "";

  permutations(str, ans);
  return 0;
}
*/

// 05 - Practice 2X2 N-Queens Problem
/*
// void printBoard(vector<vector<char>> board)
// {
//   int n = 2;
//   for (int i = 0; i < n; i++)
//   {
//     for (int j = 0; j < n; j++)
//     {
//       cout << board[i][j] << " ";
//     }
//     cout << endl;
//   }
//   cout << "-----" << endl;
// }
// void nQueens(vector<vector<char>> board, int row)
// {
//   int n = board.size();
//   if (row == n)
//   {
//     printBoard(board);
//     return;
//   }
//   for (int j = 0; j < n; j++)
//   {
//     board[row][j] = 'Q';
//     nQueens(board, row + 1);
//     board[row][j] = '.';
//   }
// }
// int main()
// {
//   vector<vector<char>> board;
//   int n = 2;
//   for (int i = 0; i < n; i++)
//   {
//     vector<char> newRow;
//     for (int j = 0; j < n; j++)
//     {
//       newRow.push_back('.');
//     }
//     board.push_back(newRow);
//   }
//   nQueens(board, 0);
//   return 0;
// }

// void printBoard(vector<vector<char>> board)
// {
//   int n = 2;
//   for (int i = 0; i < n; i++)
//   {
//     for (int j = 0; j < n; j++)
//     {
//       cout << board[i][j] << " ";
//     }
//     cout << endl;
//   }
//   cout << "-----" << endl;
// }
// void nQueens(vector<vector<char>> board, int row)
// {
//   int n = board.size();
//   if (row == n)
//   {
//     printBoard(board);
//     return;
//   }
//   for (int j = 0; j < n; j++)
//   {
//     board[row][j] = 'Q';
//     nQueens(board, row + 1);
//     board[row][j] = '.';
//   }
// }
// int main()
// {
//   vector<vector<char>> board;
//   int n = 2;
//   for (int i = 0; i < n; i++)
//   {
//     vector<char> newRow;
//     for (int j = 0; j < n; j++)
//     {
//       newRow.push_back('.');
//     }
//     board.push_back(newRow);
//   }
//   nQueens(board, 0);
//   return 0;
// }

void printBoard(vector<vector<char>> board)
{
  int n = 2;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << board[j][i] << " ";
    }
    cout << endl;
  }
  cout << "-----" << endl;
}

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
*/

// 06 - Practice 4X4 N-Queens Problem (with safety checks)
/*
// void printBoard(vector<vector<char>> board)
// {
//   int n = 4;
//   for (int i = 0; i < n; i++)
//   {
//     for (int j = 0; j < n; j++)
//     {
//       cout << board[j][i] << " ";
//     }
//     cout << endl;
//   }
//   cout << "-----" << endl;
// }
// bool isSafe(vector<vector<char>> board, int row, int col)
// {
//   int n = board.size();
//   // horizontal;
//   for (int j = 0; j < n; j++)
//   {
//     if (board[row][j] == 'Q')
//     {
//       return false;
//     }
//   }
//   // vertical
//   for (int i = 0; i < row; i++)
//   {
//     if (board[i][col] == 'Q')
//     {
//       return false;
//     }
//   }
//   // diagonal left;
//   for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
//   {
//     if (board[i][j] == 'Q')
//     {
//       return false;
//     }
//   }
//   // diagonal right
//   for (int i = row, j = col; i >= 0 && j < n; i--, j++)
//   {
//     if (board[i][j] == 'Q')
//     {
//       return false;
//     }
//   }
//   return true;
// }
// void nQueens(vector<vector<char>> board, int row)
// {
//   int n = board.size();
//   if (row == n)
//   {
//     printBoard(board);
//     return;
//   }
//   for (int j = 0; j < n; j++)
//   {
//     if (isSafe(board, row, j))
//     {
//       board[row][j] = 'Q';
//       nQueens(board, row + 1);
//       board[row][j] = '.';
//     }
//   }
// }
// int main()
// {
//   vector<vector<char>> board;
//   int n = 4;
//   for (int i = 0; i < n; i++)
//   {
//     vector<char> newRow;
//     for (int j = 0; j < n; j++)
//     {
//       newRow.push_back('.');
//     }
//     board.push_back(newRow);
//   }
//   nQueens(board, 0);
//   return 0;
// }

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
  cout << "-------" << endl;
}

bool isSafe(vector<vector<char>> board, int row, int col)
{
  int n = board.size();
  // Horizontal
  for (int j = 0; j < n; j++)
  {
    if (board[row][j] == 'Q')
    {
      return false;
    }
  }
  // Vertical;
  for (int i = 0; i < row; i++)
  {
    if (board[col][i] == 'Q')
    {
      return false;
    }
  }
  // diagonal left
  for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
  {
    if (board[i][j] == 'Q')
    {
      return false;
    }
  }
  // vertical right
  for (int i = row, j = col; i >= 0 && j < n; i--, j++)
  {
    if (board[i][j] == 'Q')
    {
      return false;
    }
  }
  return true;
}

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
    if (isSafe(board, row, j))
    {
      board[row][j] = 'Q';
      nQueens(board, row + 1);
      board[row][j] = '.';
    }
  }
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
  */

// 07 - Practice Grid Ways - Count of all paths from top-left to bottom-right in a grid (only right and down moves allowed)

// int gridWays(int row, int col, int n, int m, string path)
// {
//   if (row == n - 1 && col == m - 1)
//   {
//     cout << path << endl;
//     return 1;
//   }
//   if (col >= m || row >= n)
//   {
//     return 0;
//   }
//   int lev1 = gridWays(row, col + 1, n, m, path);
//   int lev2 = gridWays(row + 1, col, n, m, path);
//   return lev1 + lev2;
// }

int gridWays(int row, int col, int n, int m)
{
  if (row == n - 1 && col == m - 1)
  {
    return 1;
  }
  if (col >= m || row >= n)
  {
    return 0;
  }

  int vol1 = gridWays(row, col + 1, n, m);
  int vol2 = gridWays(row + 1, col, n, m);
  return vol1 + vol2;
}

int main()
{
  int n = 10;
  int m = 10;
  string path = "";

  int res = gridWays(0, 0, n, m);
  cout << res << endl;
  return 0;
}