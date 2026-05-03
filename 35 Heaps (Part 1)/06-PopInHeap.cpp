#include <iostream>
#include <vector>
using namespace std;

class Heap
{
  vector<int> vec;

public:
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

  // Helpful function to maintain the heap property after popping the top element
  void heapify(int i) // tc = O(log n)
  {
    if (i >= vec.size())
    {
      return;
    }

    int l = 2 * i + 1; // left child index
    int r = 2 * i + 2; // right child index

    int maxIdx = i;                             // assume the current index is the maximum
    if (l < vec.size() && vec[l] > vec[maxIdx]) // compare left child with the current maximum
    {
      maxIdx = l;
    }

    if (r < vec.size() && vec[r] > vec[maxIdx]) // compare right child with the current maximum
    {
      maxIdx = r;
    }

    swap(vec[i], vec[maxIdx]); // swap the current index with the maximum index
    if (maxIdx != i)           // if the maximum index is not the current index, then we need to heapify the maximum index
    {
      heapify(maxIdx);
    }
  }

  void pop()
  {
    // Step 1
    swap(vec[0], vec[vec.size() - 1]);

    // Step 2
    vec.pop_back();

    // Step 3;
    heapify(0);
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

  heap.push(9);
  heap.push(4);
  heap.push(8);
  heap.push(1);
  heap.push(2);
  heap.push(5);

  // cout << "TOP = " << heap.top() << endl; // 9
  // heap.pop();
  // cout << "TOP = " << heap.top() << endl; // 8

  while (!heap.empty())
  {
    cout << "Top = " << heap.top() << endl;
    heap.pop();
  }

  return 0;
}