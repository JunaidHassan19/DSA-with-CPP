#include <iostream>
#include <queue>
#include <vector>
#include <string>
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

  // Practice -Pop in heap

  void heapify(int i)
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

// Practice -Priority Queue for objects
class Student
{
public:
  string name;
  int marks;

  Student(string name, int marks)
  {
    this->name = name;
    this->marks = marks;
  }

  bool operator<(const Student &obj) const
  {
    // return this->marks < obj.marks;
    // return this->marks > obj.marks;
    return this->name < obj.name;
  }
};

int main()
{
  /*
  Heap heap;

  heap.push(9);
  heap.push(4);
  heap.push(8);
  heap.push(1);
  heap.push(2);
  heap.push(5);

  while (!heap.empty())
  {
    cout << heap.top() << " ";
    heap.pop();
  }
*/

  priority_queue<Student> pq;

  pq.push(Student("jai", 50));
  pq.push(Student("sia", 45));
  pq.push(Student("lio", 49));

  while (!pq.empty())
  {
    cout << "Top = " << pq.top().name << " -> " << pq.top().marks << endl;
    pq.pop();
  }
  cout << endl;

  return 0;
}