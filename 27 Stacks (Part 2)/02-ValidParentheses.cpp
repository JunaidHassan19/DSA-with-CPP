#include <iostream>
#include <stack>
#include <string>
using namespace std;

// Valid Parentheses
bool isValid(string str)
{
  stack<char> s;

  for (int i = 0; i < str.size(); i++)
  {
    char ch = str[i];                        // current character in string
    if (ch == '(' || ch == '[' || ch == '{') // if current character is an opening bracket, push it to stack
    {
      s.push(ch);
    }
    else
    {
      if (s.empty())
      {
        return false;
      }

      // check if the top element of stack is the corresponding opening bracket for the current closing bracket
      int top = s.top();
      if ((top == '(' && ch == ')') ||
          (top == '[' && ch == ']') ||
          (top == '{' && ch == '}'))
      {
        s.pop(); // pop the top element of stack if it is the corresponding opening bracket
      }
      else // if the top element of stack is not the corresponding opening bracket for the current closing bracket, then the string is not valid
      {
        return false;
      }
    }
  }
  return s.empty(); // if stack is empty at the end, then the string is valid, otherwise it is not valid
}

int main()
{
  string str2 = "({[})";
  string str1 = "({[]})";

  cout << isValid(str1) << endl; // 1 (true)
  cout << isValid(str2) << endl; // 0 (false)

  return 0;
}