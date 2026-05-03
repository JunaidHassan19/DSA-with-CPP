#include <iostream>
#include <queue>
#include <vector>
using namespace std;

// Practice -Priority Queue in STL
/*
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
*/

// Practice -Push in Heap
class Heap
{
  vector<int> vec;

public:
  // Practice -Push in Heap
  // void push(int val)
  // {
  //   vec.push_back(val);
  //   int x = vec.size() - 1;
  //   int parI = (x - 1) / 2;
  //   while (parI >= 0 && vec[x] > vec[parI])
  //   {
  //     swap(vec[x], vec[parI]);
  //     x = parI;
  //     parI = (x - 1) / 2;
  //   }
  // }
  void push(int val)
  {
    vec.push_back(val);

    int x = vec.size() - 1;
    int parI = (x - 1) / 2;

    while (parI >= 0 && vec[x] > vec[parI])
    {
      swap(vec[x], vec[parI]);
      x = parI;
      parI = (x - 1) / 2;
    }
  }

  int top()
  {
    return vec[0];
  }

  bool empty()
  {
    return vec.size() == 0;
  }
};

int main()
{
  Heap heap;

  heap.push(5);
  heap.push(50);
  heap.push(500);

  cout << "top = " << heap.top() << endl;

  return 0;
}