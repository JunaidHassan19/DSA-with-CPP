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
/*
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
*/

// ===== Practice - Merge Sort on Linked List =====
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
public:
  Node *head;
  Node *tail;

  List()
  {
    head = NULL;
    tail = NULL;
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

  void push_front(int val)
  {
    Node *newNode = new Node(val);
    if (head == NULL)
    {
      head = tail = newNode;
    }
    else
    {
      newNode->next = head;
      head = newNode;
    }
  }
};

void printList(list<int> ll)
{
  list<int>::iterator itr; // Iterator to traverse the list
  for (itr = ll.begin(); itr != ll.end(); itr++)
  {
    cout << (*itr) << " -> ";
  }
  cout << "NULL" << endl;
}

int main() {
  List ll;
  ll.push_back(1);
  ll.push_back(2);
  ll.push_back(3);
  ll.push_back(4);
  ll.push_back(5);

  printList(ll.head);


}
*/

// ===== Practice - ZigZag Linked List =====

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
};

class List
{
public:
  Node *head;
  Node *tail;

  List()
  {
    head = NULL;
    tail = NULL;
  }

  void push_front(int val)
  {
    Node *newNode = new Node(val);
    if (head == NULL)
    {
      head = tail = newNode;
    }
    else
    {
      newNode->next = head;
      head = newNode;
    }
  }
};

void printLL(Node *head)
{
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << " -> ";
    temp = temp->next;
  }
  cout << "NULL" << endl;
}

Node *splitAtMid(Node *head)
{
  Node *slow = head;
  Node *fast = head;
  Node *prev = NULL;

  while (fast != NULL && fast->next != NULL)
  {
    prev = slow;
    slow = slow->next;
    fast = fast->next->next;
  }
  if (prev != NULL)
  {
    prev->next = NULL;
  }
  return slow;
}

Node *reverse(Node *head)
{
  Node *prev = NULL;
  Node *curr = head;
  Node *next = NULL;

  while (curr != NULL)
  {
    next = curr->next;
    curr->next = prev;

    prev = curr;
    curr = next;
  }
  return prev;
}

Node *zigZagLL(Node *head)
{
  Node *rightHead = splitAtMid(head);
  Node *rightHeadRev = reverse(rightHead);

  Node *left = head;
  Node *right = rightHeadRev;
  Node *tail = right;

  while (left != NULL && right != NULL)
  {
    Node *nextLeft = left->next;
    Node *nextRight = right->next;

    left->next = right;
    right->next = nextLeft;
    tail = right;
    left = nextLeft;
    right = nextRight;
  }
  if (right != NULL)
  {
    tail->next = right;
  }
  return head;
}

int main()
{
  List ll;
  ll.push_front(5);
  ll.push_front(4);
  ll.push_front(3);
  ll.push_front(2);
  ll.push_front(1);
  printLL(ll.head);

  ll.head = zigZagLL(ll.head);
  printLL(ll.head);
  return 0;
}