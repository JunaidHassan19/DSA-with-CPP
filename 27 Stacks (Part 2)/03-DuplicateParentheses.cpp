#include <iostream>
#include <stack>
#include <string>
using namespace std;

// Duplicate Parentheses
bool isDuplicate(string str)
{
  stack<char> s;

  for (int i = 0; i < str.size(); i++)
  {
    char ch = str[i];
    if (ch != ')')
    {
      s.push(ch);
    }
    else
    {
      if (s.top() == '(')
      {
        return true;
      }

      while (s.top() != '(')
      {
        s.pop();
      }
      s.pop();
    }
  }
  return false;
}

int main()
{
  string str1 = "((a+b))";   // invalid string with duplicate parentheses: false
  string str2 = "(a+(b+c))"; // valid string without duplicate parentheses: true

  cout << isDuplicate(str1) << endl; // 1 (true)
  cout << isDuplicate(str2) << endl; // 0 (false)
  return 0;
}