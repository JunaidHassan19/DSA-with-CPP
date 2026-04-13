#include <iostream>
#include <queue> // Include the queue header for using STL queue
using namespace std;

// Implementation of Queue using STL
int main()
{
  queue<int> q; // Create a queue of integers

  q.push(1);
  q.push(2);
  q.push(3);
  q.push(4);
  q.push(5);

  while (!q.empty())
  {
    cout << q.front() << " ";
    q.pop();
  }
  cout << endl;

  return 0;
}