#include <iostream>
#include <list>
using namespace std;

// ===== Practice -  Detect a Cycle =====
/*
class Node
{
public:
  int data;
  Node *next;

  Node(int val)
  {
    data = val;
    next = NULL;
  }

  ~Node()
  {
    if (next != NULL)
    {
      delete next;
      next = NULL;
    }
  }
};

class List
{
  Node *head;
  Node *tail;

public:
  List()
  {
    head = NULL;
    tail = NULL;
  }

  ~List()
  {
    if (head != NULL)
    {
      delete head;
      head = NULL;
    }
  }

  void push_back(int val)
  {
    Node *newNode = new Node(val);
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
  void printList()
  {
    Node *temp = head;
    while (temp != NULL)
    {
      cout << temp->data << " -> ";
      temp = temp->next;
    }
    cout << "NULL" << endl;
  }

  void makeCycle()
  {
    if (tail != NULL)
    {
      tail->next = head;
    }
  }

  bool isCycle()
  {
    Node *slow = head;
    Node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
      slow = slow->next;
      fast = fast->next->next;
      if (slow == fast)
      {
        cout << "Cycle exists" << endl;
        return true;
      }
    }
    cout << "Cycle doesn't exists" << endl;
    return false;
  }
*/

// ===== Practice - Remove a Cycle =====
/*
void removeCycle()
  {
    Node *slow = head;
    Node *fast = head;
    bool isCycle = false;

    while (fast != NULL && fast->next != NULL)
    {
      slow = slow->next;
      fast = fast->next->next;

      if (slow == fast)
      {
        cout << "Cycle exists" << endl;
        isCycle = true;
        break;
      }
    }
    if (!isCycle)
    {
      cout << "Cycle doesn't exists" << endl;
      return;
    }

    slow = head;
    if (slow == fast)
    {
      while (fast->next != slow)
      {
        fast = fast->next;
      }
      fast->next = NULL;
    }
    else
    {
      Node *prev = fast;
      while (slow != fast)
      {
        slow = slow->next;
        prev = fast;
        fast = fast->next;
      }
      prev->next = NULL;
    }
  }
};

int main()
{
  List ll;
  ll.push_back(1);
  ll.push_back(2);
  ll.push_back(3);
  ll.push_back(4);
  ll.push_back(5);

  ll.makeCycle();
  ll.removeCycle();
  ll.printList();
  return 0;
}
  */

// ===== Practice - List in STL =====

void printList(list<int> ll)
{
  list<int>::iterator itr;

  for (itr = ll.begin(); itr != ll.end(); itr++)
  {
    cout << (*itr) << " -> ";
  }
  cout << "NULL" << endl;
}

int main()
{
  list<int> ll;

  ll.push_front(2);
  ll.push_front(1);
  printList(ll);

  ll.push_back(3);
  ll.push_back(4);
  printList(ll);

  cout << "Size = " << ll.size() << endl;

  ll.push_back(5);
  ll.push_front(0);
  printList(ll);

  cout << ll.front() << endl;
  cout << ll.back() << endl;

  return 0;
}