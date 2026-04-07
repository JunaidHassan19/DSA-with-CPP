#include <iostream>
#include <vector>
#include <string>
#include <list>
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
/*
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
*/

// Practice - Stack using Linked List and class template
template <class T>
class Node
{
public:
  T data;
  Node *next;

  Node(T val)
  {
    data = val;
    next = NULL;
  }
};

template <class T>
class Stack
{
public:
  // list<T> ll;
  Node<T> *head;

  Stack()
  {
    head = NULL;
  }
  void push(T val)
  {
    // ll.push_front(val);
    Node<T> *newNode = new Node<T>(val);
    if (head == NULL)
    {
      head = newNode;
    }
    else
    {
      newNode->next = head;
      head = newNode;
    }
  }

  void pop()
  {
    // ll.pop_front();
    Node<T> *temp = head;
    head = head->next;
    temp->next = NULL;
    delete temp;
  }

  T top()
  {
    // return ll.front();
    return head->data;
  }

  bool isEmpty()
  {
    // return ll.size() == 0;
    return head == NULL;
  }
};

int main()
{
  Stack<int> s;

  s.push(3);
  s.push(2);
  s.push(1);

  while (!s.isEmpty())
  {
    cout << s.top() << " ";
    s.pop();
  }
  cout << endl;

  return 0;
}