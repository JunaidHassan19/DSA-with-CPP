#include <iostream>
using namespace std;

// Find & Remove the Nth Node from the end of a Linked List
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

  // Find & Remove the Nth Node

  // Calculate size of LL
  int size()
  {
    int sz = 0;
    Node *temp = head;
    while (temp != NULL)
    {
      temp = temp->next;
      sz++;
    }
    return sz;
  }

  void removeNth(int n)
  {
    int sz = size();
    Node *prev = head;

    for (int i = 1; i < (sz - n); i++) // prev will point to (sz-n-1)th node
    {
      prev = prev->next; // prev will point to (sz-n-1)th node
    }
    Node *toDel = prev->next;
    cout << "Going to Delete: " << toDel->data << endl;
    prev->next = prev->next->next; // prev will point to (sz-n+1)th node
    delete toDel;
  }
};

int main()
{
  List ll;
  ll.push_back(1);
  ll.push_back(2);
  ll.push_back(3);
  ll.printList();

  ll.removeNth(2);
  ll.printList();
  return 0;
}