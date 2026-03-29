#include <iostream>
#include <string>
using namespace std;

// Find Permutations of a String
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
    char ch = str[i]; // Current character to include in permutation
    // Form new string by excluding current character
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

/*
Recursion Tree / Call Flow (for str = "abc")
==============================================

At each level, we pick one character from the remaining string,
append it to ans, and recurse on the rest.

permutations("abc", "")
|- pick 'a' -> permutations("bc", "a")
|  |- pick 'b' -> permutations("c", "ab")
|  |  |- pick 'c' -> permutations("", "abc") -> prints: abc
|  |- pick 'c' -> permutations("b", "ac")
|     |- pick 'b' -> permutations("", "acb") -> prints: acb
|- pick 'b' -> permutations("ac", "b")
|  |- pick 'a' -> permutations("c", "ba")
|  |  |- pick 'c' -> permutations("", "bac") -> prints: bac
|  |- pick 'c' -> permutations("a", "bc")
|     |- pick 'a' -> permutations("", "bca") -> prints: bca
|- pick 'c' -> permutations("ab", "c")
   |- pick 'a' -> permutations("b", "ca")
   |  |- pick 'b' -> permutations("", "cab") -> prints: cab
   |- pick 'b' -> permutations("a", "cb")
      |- pick 'a' -> permutations("", "cba") -> prints: cba

Output order from this code for "abc":
abc
acb
bac
bca
cab
cba

Why n! permutations?
- First position: n choices
- Second position: (n - 1) choices
- Third position: (n - 2) choices
- ...
- Last position: 1 choice

Total = n * (n - 1) * (n - 2) * ... * 1 = n!
*/