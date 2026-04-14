#include <iostream>
#include <deque>
#include <queue>
using namespace std;

// Queue using Deque
class Queue
{
  deque<int> deq;

public:
  void push(int data)
  {
    deq.push_back(data);
  }

  void pop()
  {
    deq.pop_front();
  }

  int front()
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

  Queue q;

  for (int i = 0; i <= 5; i++)
  {
    q.push(i);
  }

  for (int i = 0; i <= 5; i++)
  {
    cout << q.front() << " ";
    q.pop();
  }
  cout << endl;

  return 0;
}