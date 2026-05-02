#include <iostream>
#include <queue>
#include <vector>
using namespace std;

// Max Heap implementation using vector
class Heap
{
  vector<int> vec;

public:
  void push(int val) // O(log n)
  {
    // step 1- add element to the end of the vector
    vec.push_back(val);

    // fix heap - compare the newly added element with its parent and swap if it is greater than the parent
    int x = vec.size() - 1;
    int parI = (x - 1) / 2;

    // step 2- keep swapping until the newly added element is greater than its parent
    // ">" is used for max heap and "<" is used for min heap
    // "<" is used for min heap and ">" is used for max heap
    while (parI >= 0 && vec[x] > vec[parI])
    {
      swap(vec[x], vec[parI]);
      x = parI;
      parI = (x - 1) / 2;
    }
  }

  void pop()
  {
  }

  int top() // O(1)
  {
    return vec[0];
  }

  bool empty() // O(1)
  {
    return vec.size() == 0;
  }
};

int main()
{
  Heap heap;

  heap.push(80);
  heap.push(40);
  heap.push(50);
  heap.push(10);
  heap.push(20);

  cout << "Top : " << heap.top() << endl;

  return 0;
}