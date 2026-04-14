#include <iostream>
#include <deque>
#include <stack>
using namespace std;

// Stack using Deque
class Stack
{
  deque<int> deq;

public:
  void push(int data)
  {
    deq.push_front(data);
  }

  void pop()
  {
    deq.pop_front();
  }

  int top()
  {
    return deq.front();
  }

  bool empty()
  {
    return deq.empty();
  }
};

int main()
{
  Stack s;

  for (int i = 0; i <= 5; i++)
  {
    s.push(i);
  }

  for (int i = 0; i <= 5; i++)
  {
    cout << s.top() << " ";
    s.pop();
  }
  cout << endl;

  return 0;
}