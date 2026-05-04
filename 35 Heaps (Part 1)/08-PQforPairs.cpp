#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;

// priority_queue for pairs
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

  void heapify(int i) // tc = O(log n)
  {
    if (i >= vec.size())
    {
      return;
    }

    int l = 2 * i + 1;
    int r = 2 * i + 2;

    int maxIdx = i;
    if (l < vec.size() && vec[l] > vec[maxIdx])
    {
      maxIdx = l;
    }

    if (r < vec.size() && vec[r] > vec[maxIdx])
    {
      maxIdx = r;
    }

    swap(vec[i], vec[maxIdx]);
    if (maxIdx != i)
    {
      heapify(maxIdx);
    }
  }

  void pop()
  {
    swap(vec[0], vec[vec.size() - 1]);
    vec.pop_back();
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

// for pairs, we need to define a comparator
struct ComparePair
{
  bool operator()(pair<string, int> p1, pair<string, int> p2)
  {
    return p1.second < p2.second; // for max heap
    // return p1.second > p2.second; // for min heap
  }
};

int main()
{
  priority_queue<pair<string, int>, vector<pair<string, int>>, ComparePair> pq;

  pq.push(make_pair("Jay", 85));
  pq.push(make_pair("Sia", 92));
  pq.push(make_pair("John", 70));

  while (!pq.empty())
  {
    cout << "Top = " << pq.top().first << " -> " << pq.top().second << endl;
    pq.pop();
  }
  cout << endl;
  return 0;
}