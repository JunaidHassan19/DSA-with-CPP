#include <iostream>
using namespace std;

// Tiling Problem
/*
// int tiling(int n)
// {
//   if (n == 0 || n == 1)
//   {
//     return 1;
//   }
//   // vertical
//   int ver = tiling(n - 1);
//   // horizontal
//   int hor = tiling(n - 2);
//   return ver + hor;
// }

int tiling(int n)
{
  if (n == 0 || n == 1)
  {
    return 1;
  }

  // vertical
  int ver = tiling(n - 1);

  // horizontal
  int hor = tiling(n - 2);

  return ver + hor;
}

int main()
{
  int n = 4;
  cout << tiling(n);
  return 0;
}
*/
