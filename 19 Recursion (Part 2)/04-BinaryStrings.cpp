#include <iostream>
#include <string>
using namespace std;

// Binary Strings
void binaryString(int n, int lastPlace, string ans)
{
  if (n == 0) // Base Case
  {
    cout << ans << endl;
    return;
  }
  if (lastPlace != 1) // Recursive Case - If the last place is not 1, then we can place either 0 or 1 at the current place.
  {
    binaryString(n - 1, 0, ans + '0'); // Recursive Case - If the last place is not 1, then we can place either 0 or 1 at the current place.
    binaryString(n - 1, 1, ans + '1'); // Recursive Case - If the last place is not 1, then we can place either 0 or 1 at the current place.
  }
  else
  {
    binaryString(n - 1, 0, ans + '0'); // Recursive Case - If the last place is 1, then we can only place 0 at the current place.
  }
}

int main()
{
  string ans = "";
  binaryString(3, 0, ans);

  return 0;
}

/*
Logic:
1. We need to generate all binary strings of length n such that there are no consecutive 1's in the string.
2. We can use recursion to solve this problem.
3. We can keep track of the last place where we placed a 1 in the string. If the last place is not 1, then we can place either 0 or 1 at the current place. If the last place is 1, then we can only place 0 at the current place.

*/