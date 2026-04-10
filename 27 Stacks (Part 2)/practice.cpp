#include <iostream>
#include <stack>
#include <vector>
using namespace std;

// Practice - Next Greater Element
/*
void nextGreater(vector<int> arr, vector<int> ans)
{
  stack<int> s;
  int idx = arr.size() - 1;
  ans[idx] = -1;
  s.push(arr[idx]);

  for (idx = idx - 1; idx >= 0; idx--)
  {
    int curr = arr[idx];

    while (!s.empty() && curr >= s.top())
    {
      s.pop();
    }

    if (s.empty())
    {
      ans[idx] = -1;
    }
    else
    {
      ans[idx] = s.top();
    }
    s.push(curr);
  }

  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i] << " ";
  }
  cout << endl;
}

int main()
{
  vector<int> arr = {6, 8, 0, 1, 3};
  vector<int> ans = {0, 0, 0, 0, 0};

  nextGreater(arr, ans);

  return 0;
}
*/

// Practice - Valid Parentheses
/*
bool isValid(string str)
{
  stack<char> s;

  for (int i = 0; i < str.size(); i++)
  {
    char ch = str[i];
    if (ch == '(' || ch == '[' || ch == '{')
    {
      s.push(ch);
    }
    else
    {
      if (s.empty())
      {
        return false;
      }
      int top = s.top();
      if ((top == '(' && ch == ')') ||
          (top == '[' && ch == ']') ||
          (top == '{' && ch == '}'))
      {
        s.pop();
      }
      else
      {
        return false;
      }
    }
  }
  return s.empty();
}

int main()
{
  string str2 = "({[})";
  string str1 = "({[]})";

  cout << isValid(str1) << endl; // 1 (true)
  cout << isValid(str2) << endl; // 0 (false)

  return 0;
}
*/

// Practice - Duplicate Parentheses

// bool isDuplicate(string str)
// {
//   stack<char> s;
//   for (int i = 0; i < str.size(); i++)
//   {
//     char ch = str[i];
//     if (ch != ')')
//     {
//       s.push(ch);
//     }
//     else
//     {
//       if (s.top() == '(')
//       {
//         return true;
//       }
//       while (s.top() != '(')
//       {
//         s.pop();
//       }
//       s.pop();
//     }
//   }
//   return false;
// }

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