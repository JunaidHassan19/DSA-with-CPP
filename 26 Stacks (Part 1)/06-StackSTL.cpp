#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <list>
using namespace std;

// Stack Implementation using STL stack
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
};

int main()
{
  // Stack Implementation using STL stack
  stack<int> s;

  s.push(3);
  s.push(2);
  s.push(1);

  while (!s.empty()) // Check if the stack is empty before accessing the top element
  {
    cout << s.top() << " ";
    s.pop();
  }
  {
    cout << s.top() << " ";
    s.pop();
  }
  cout << endl;

  return 0;
}