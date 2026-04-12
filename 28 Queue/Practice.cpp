#include <iostream>
#include <list>
using namespace std;

// Practice of Queue using Linked List
/*
class Node
{
public:
  int data;
  Node *next;

  Node(int data)
  {
    this->data = data;
    this->next = next;
  }
};

class Queue
{
  Node *head;
  Node *tail;

public:
  Queue()
  {

    head = tail = NULL;
  }

  void push(int data)
  {
    Node *newNode = new Node(data);
    if (head == NULL)
    {
      head = tail = newNode;
    }
    else
    {
      tail->next = newNode;
      tail = newNode;
    }
  }

  void pop()
  {
    if (empty())
    {
      cout << "Queue is Empty" << endl;
      return;
    }
    Node *temp = head;
    head = head->next;
    delete temp;
  }

  int front()
  {
    if (empty())
    {
      cout << "Queue id Empty" << endl;
      return -1;
    }
    return head->data;
  }

  bool empty()
  {
    return head == NULL;
  }
};

int main()
{
  Queue q;

  q.push(1);
  q.push(2);
  q.push(3);
  q.push(4);

  while (!q.empty())
  {
    cout << q.front() << " ";
    q.pop();
  }
  return 0;
}
*/

// Practice circular queue using array
class Queue
{
  int *arr;

  int capacity;
  int currSize;

  int f, r;

public:
  Queue(int capacity)
  {
    this->capacity = capacity;
    arr = new int[capacity];

    currSize = 0;
    f = 0;
    r = -1;
  }

  void push(int data)
  {
    if (currSize == capacity)
    {
      cout << "Queue is FULL" << endl;
      return;
    }

    r = (r + 1) % capacity;
    arr[r] = data;
    currSize++;
  }

  void pop()
  {
    if (empty())
    {
      cout << "Queue is Empty" << endl;
      return;
    }
    f = (f + 1) % capacity;
    currSize--;
  }

  int front()
  {
    if (empty())
    {
      cout << "Queue is Empty" << endl;
      return -1;
    }
    return arr[f];
  }

  bool empty()
  {
    return currSize == 0;
  }
};

int main()
{
  Queue q(5);

  q.push(1);
  q.push(2);
  q.push(3);
  q.push(4);
  q.push(5);

  cout << q.front() << endl;
  q.pop();

  cout << q.front() << endl;
  q.pop();

  cout << q.front() << endl;
  q.push(6);

  cout << q.front() << endl;
  return 0;
}