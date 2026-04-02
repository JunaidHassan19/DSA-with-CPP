#include <iostream>
using namespace std;

// Print Linked List
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
  Node *head;
  Node *tail;

public:
  List()
  {
    head = NULL;
    tail = NULL;
  }

  // push_front
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

  // push_back
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
  };

  // Print ll
  void printList()
  {
    Node *temp = head;   // Start from the head of the linked list
    while (temp != NULL) // Traverse the linked list until the end (NULL) is reached
    {
      cout << temp->data << "->";
      temp = temp->next; // Move to the next node in the linked list
    }
    cout << "NULL" << endl; // Print NULL at the end to indicate the end of the linked list
  }
};

int main()
{
  List ll;
  ll.push_front(1);
  ll.push_front(2);
  ll.push_front(3);
  ll.push_front(4);

  ll.push_back(1);
  ll.push_back(2);
  ll.push_back(3);
  ll.push_back(4);
  ll.printList();
  return 0;
}