#include <iostream>
#include <queue>
#include <stack>
using namespace std;

// Implementation of Queue using 2 Stacks
class Queue
{
  stack<int> s1;
  stack<int> s2;

public:
  // push operation is costly tc: O(n) sc: O(n)
  void push(int data)
  {
    while (!s1.empty()) // Move all elements from s1 to s2
    {
      s2.push(s1.top());
      s1.pop();
    }

    s1.push(data);

    while (!s2.empty()) // Move all elements back from s2 to s1
    {
      s1.push(s2.top());
      s2.pop();
    }
  }

  // pop operation is efficient tc: O(1) sc: O(n)
  void pop()
  {
    s1.pop();
  }

  // front operation is efficient tc: O(1) sc: O(n)
  int front()
  {
    return s1.top();
  }

  bool empty()
  {
    return s1.empty();
  }
};

int main()
{
  Queue q;

  q.push(1);
  q.push(2);
  q.push(3);
  q.push(4);

  while (!q.empty())
  {
    cout << q.front() << " ";
    q.pop();
  }
  cout << endl;

  return 0;
}