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
      cout << board[i][j] << " ";
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