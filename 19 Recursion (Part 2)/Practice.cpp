#include <iostream>
#include <string>
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

// Remove Duplicates in string
/*
// void removeDup(string str, string ans, int i, int map[26])
// {
//   if (i == str.size())
//   {
//     cout << "Ans: " << ans << endl;
//     return;
//   }
//   int mapIdx = (int)(str[i] - 'a');
//   if (map[mapIdx])
//   {
//     removeDup(str, ans, i + 1, map);
//   }
//   else
//   {
//     map[mapIdx] = true;
//     removeDup(str, ans + str[i], i + 1, map);
//   }
// }

void removeDup(string str, string ans, int i, int map[26])
{
  if (i == str.size())
  {
    cout << "Ans: " << ans << endl;
  }
  int mapIdx = (int)(str[i] - 'a');
  if (map[mapIdx])
  {
    removeDup(str, ans, i + 1, map);
  }
  else
  {
    map[mapIdx] = true;
    removeDup(str, ans + str[i], i + 1, map);
  }
}

int main()
{
  string str = "apnacollege";
  string ans = "";
  int map[26] = {false};

  removeDup(str, ans, 0, map);
  return 0;
}
*/
