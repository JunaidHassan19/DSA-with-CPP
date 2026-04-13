#include <iostream>
#include <list>
#include <queue>
#include <stack>
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
/*
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
*/

// Practice Queue using 2 Stacks
/*
class Queue
{
  stack<int> s1;
  stack<int> s2;

public:
  void push(int data)
  {
    while (!s1.empty())
    {
      s2.push(s1.top());
      s1.pop();
    }

    s1.push(data);

    while (!s2.empty())
    {
      s1.push(s2.top());
      s2.pop();
    }
  }

  void pop()
  {
    s1.pop();
  }

  int front()
  {
    return s1.top();
  }

  bool empty()
  {
    return s1.empty();
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
  cout << endl;
  return 0;
}
*/

// Practice Stack using 2 Queues
/*
class Stack
{
  queue<int> q1;
  queue<int> q2;

public:
  void push(int data)
  {
    while (!q1.empty())
    {
      q2.push(q1.front());
      q1.pop();
    }
    q1.push(data);

    while (!q2.empty())
    {
      q1.push(q2.front());
      q2.pop();
    }
  }

  void pop()
  {
    q1.pop();
  }

  int top()
  {
    return q1.front();
  }

  bool empty()
  {
    return q1.empty();
  }
};

int main()
{
  Stack s;

  s.push(1);
  s.push(2);
  s.push(3);

  while (!s.empty())
  {
    cout << s.top() << " ";
    s.pop();
  }

  cout << endl;
  return 0;
}
*/

// Practice First Non-Repeating letter in a Stream
/*
void firstNonRepeat(string str)
{
  queue<char> Q;
  int freq[26] = {0};

  for (int i = 0; i < str.size(); i++)
  {
    char ch = str[i];
    Q.push(ch);
    freq[ch - 'a']++;

    while (!Q.empty() && freq[Q.front() - 'a'] > 1)
    {
      Q.pop();
    }

    if (Q.empty())
    {
      cout << "-1" << endl;
    }
    else
    {
      cout << Q.front() << endl;
    }
  }
}

int main()
{
  string str = "aabccxb";

  firstNonRepeat(str);
  return 0;
}
*/

// Practice Interleave 2 Queues
void interleave(queue<int> &org)
{
  int n = org.size();
  queue<int> first;

  for (int i = 0; i < n / 2; i++)
  {
    first.push(org.front());
    org.pop();
  }

  while (!first.empty())
  {
    org.push(first.front());
    first.pop();

    org.push(org.front());
    org.pop();
  }
}

int main()
{
  queue<int> org;

  for (int i = 1; i <= 10; i++)
  {
    org.push(i);
  }

  interleave(org);

  while (!org.empty())
  {
    cout << org.front() << " ";
    org.pop();
  }
  cout << endl;
  return 0;
}