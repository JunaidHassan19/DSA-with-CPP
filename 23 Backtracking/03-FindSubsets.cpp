#include <iostream>
#include <string>
using namespace std;

// Find Subsets of a String
void printSubsets(string str, string subSet)
{
  if (str.size() == 0)
  {
    cout << subSet << endl;
    return;
  }

  char ch = str[0];
  // Yes Choice: Include the first character
  printSubsets(str.substr(1, str.size() - 1), subSet + ch);
  // No Choice: Exclude the first character
  printSubsets(str.substr(1, str.size() - 1), subSet);
}

int main()
{
  string str = "abc"; // Input string
  string subSet = ""; // To store current subset

  printSubsets(str, subSet);
  return 0;
}

/*
Recursion Tree / Call Flow (for str = "abc")
==============================================

At each level, we have 2 choices for current character:
1) Include it in subSet
2) Exclude it from subSet

So tree is binary (2 branches at each step):

printSubsets("abc", "")
|- include 'a' -> printSubsets("bc", "a")
|  |- include 'b' -> printSubsets("c", "ab")
|  |  |- include 'c' -> printSubsets("", "abc") -> prints: abc
|  |  |- exclude 'c' -> printSubsets("", "ab")  -> prints: ab
|  |- exclude 'b' -> printSubsets("c", "a")
|     |- include 'c' -> printSubsets("", "ac")  -> prints: ac
|     |- exclude 'c' -> printSubsets("", "a")   -> prints: a
|- exclude 'a' -> printSubsets("bc", "")
   |- include 'b' -> printSubsets("c", "b")
   |  |- include 'c' -> printSubsets("", "bc")  -> prints: bc
   |  |- exclude 'c' -> printSubsets("", "b")   -> prints: b
   |- exclude 'b' -> printSubsets("c", "")
      |- include 'c' -> printSubsets("", "c")   -> prints: c
      |- exclude 'c' -> printSubsets("", "")    -> prints: "" (empty subset)

Output order from this code for "abc":
abc
ab
ac
a
bc
b
c
<empty line>

Why 2^n subsets?
- For each character, 2 choices (include/exclude)
- For n characters: 2 * 2 * ... * 2 = 2^n subsets
*/