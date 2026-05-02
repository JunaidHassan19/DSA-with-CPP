#include <iostream>
#include <queue>
using namespace std;

// Practice -Priority Queue in STL
int main()
{
  // MAX HEAP by default, it prints elements in descending order
  priority_queue<int> pq;

  // MIN HEAP by specifying greater<int> as the third template parameter, it prints elements in ascending order
  priority_queue<int, vector<int>, greater<int>> pq;

  pq.push(5);
  pq.push(10);
  pq.push(8);

  while (!pq.empty())
  {
    cout << pq.top() << " ";
    pq.pop();
  }
  cout << endl;
}