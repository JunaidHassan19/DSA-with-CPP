#include <iostream>
#include <vector>
using namespace std;

// Practice - Stack using vector
/*
class Stack
{
  vector<int> vec;

public:
  void push(int val)
  {
    vec.push_back(val);
  }

  void pop()
  {
    if (isEmpty())
    {
      cout << "Stack is Empty" << endl;
      return;
    }
    vec.pop_back();
  }

  int top()
  {
    if (isEmpty())
    {
      cout << "Stack is Empty" << endl;
      return -1;
    }
    int lastIdx = vec.size() - 1;
    return vec[lastIdx];
  }

  bool isEmpty()
  {
    return vec.size() == 0;
  }
};

int main()
{
  Stack s;

  s.push(3);
  s.push(2);
  s.push(1);

  while (!s.isEmpty())
  {
    cout << s.top() << " ";
    s.pop();
  }
  return 0;
}
*/

// Practice - Stack using vector and class template
template <class T>
class Stack
{
  vector<T> vec;

public:
  void push(T val)
  {
    vec.push_back(val);
  }

  void pop()
  {
    if (isEmpty())
    {
      cout << "Stack is Empty" << endl;
      return;
    }
    vec.pop_back();
  }

  T top()
  {
    if (isEmpty())
    {
      cout << "Stack is Empty" << endl;
      return -1;
    }
    int lastIdx = vec.size() - 1;
    return vec[lastIdx];
  }

  bool isEmpty()
  {
    return vec.size() == 0;
  }
};

int main()
{
  // Stack<int> s;
  // Stack<float> s;
  Stack<char> s;

  s.push('J');
  s.push('S');
  s.push('H');

  while (!s.isEmpty())
  {
    cout << s.top() << " ";
    s.pop();
  }

  return 0;
}