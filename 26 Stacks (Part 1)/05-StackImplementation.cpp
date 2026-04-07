#include <iostream>
#include <vector>
#include <string>
// #include <list>
using namespace std;

// Stack Implementation using Linked List
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