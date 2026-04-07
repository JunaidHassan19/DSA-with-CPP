#include <iostream>
#include <stack>
using namespace std;

// Push an element at the bottom of the stacks
void pushAtBottom(stack<int> &s, int val)
{
  if (s.empty())
  {
    s.push(val);
    return;
  }

  int temp = s.top();
  s.pop();
  pushAtBottom(s, val);
  s.push(temp);
}

int main()
{
  stack<int> s;

  s.push(3);
  s.push(2);
  s.push(1);

  pushAtBottom(s, 4); // Push 4 at the bottom of the stack

  while (!s.empty())
  {
    cout << s.top() << " ";
    s.pop();
  }
  cout << endl;
  return 0;
}