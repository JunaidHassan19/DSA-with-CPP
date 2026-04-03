#include <iostream>
using namespace std;

// Reverse a Linked List
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

  // Reverse a Linked List
  void reverse()
  {
    Node *curr = head; // current node
    Node *prev = NULL; // previous node

    while (curr != NULL) // till we reach the end of the list
    {
      Node *next = curr->next; // next node
      curr->next = prev;       // reverse the link by pointing current node to previous node
      prev = curr;             // move prev to curr
      curr = next;             // move curr to next
    }
    head = prev; // update head to the new first node (prev will be at the last node after the loop)
  }
};

int main()
{
  List ll;
  ll.push_back(1);
  ll.push_back(2);
  ll.push_back(3);
  ll.printList();

  ll.reverse();
  ll.printList();
  return 0;
}