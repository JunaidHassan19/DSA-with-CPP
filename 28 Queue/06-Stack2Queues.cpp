#include <iostream>
#include <queue>
#include <stack>
using namespace std;

// Stack using 2 Queues
class Stack
{
  queue<int> q1;
  queue<int> q2;

public:
  // push operation is costly tc: O(n) sc: O(n)
  void push(int data)
  {
    while (!q1.empty())
    {
      q2.push(q1.front());
      q1.pop();
    }

    q1.push(data);

    while (!q2.empty())
    {
      q1.push(q2.front());
      q2.pop();
    }
  }

  // pop operation is efficient tc: O(1) sc: O(n)
  void pop()
  {
    q1.pop();
  }

  // top operation is efficient tc: O(1) sc: O(n)
  int top()
  {
    return q1.front();
  }

  bool empty()
  {
    return q1.empty();
  }
};

int main()
{
  Stack s;

  s.push(1);
  s.push(2);
  s.push(3);
  s.push(4);

  while (!s.empty())
  {
    cout << s.top() << " ";
    s.pop();
  }
  cout << endl;

  return 0;
}