#include <iostream>
#include <vector>
#include <string>
#include <queue>
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

// priority queue for objects
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

  // we need to overload the "<" operator to compare two Student objects based on their marks or name
  //  "<" is used for max heap and ">" is used for min heap
  bool operator<(const Student &obj) const
  {
    // return this->marks < obj.marks;
    return this->name < obj.name;
  }
};

int main()
{
  priority_queue<Student> pq;

  pq.push(Student("Jay", 85));
  pq.push(Student("Sia", 92));
  pq.push(Student("John", 70));

  while (!pq.empty())
  {
    cout << "Top = " << pq.top().name << " -> " << pq.top().marks << endl;
    pq.pop();
  }
  cout << endl;
  return 0;
}