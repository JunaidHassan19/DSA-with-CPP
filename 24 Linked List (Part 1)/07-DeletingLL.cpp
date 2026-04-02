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

  // Destructor to free memory when a node is deleted
  ~Node()
  {
    cout << "~Node" << data << endl;
    if (next != NULL) // If the next pointer is not NULL, delete the next node to free memory
    {
      delete next; // Recursively delete the next node in the linked list
      next = NULL; // Set the next pointer to NULL after deleting the next node to avoid dangling pointers
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
  // Destructor to free memory when the linked list is destroyed
  ~List()
  {
    cout << "~List" << endl;
    if (head != NULL) // If the head pointer is not NULL, delete the head node to free memory
    {
      delete head; // Delete the head node, which will trigger the destructor of the Node class to recursively delete all nodes in the linked list
      head = NULL; // Set the head pointer to NULL after deleting the head node to avoid dangling pointers
    }
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
    Node *temp = head;
    while (temp != NULL)
    {
      cout << temp->data << "->";
      temp = temp->next;
    }
    cout << "NULL" << endl;
  }

  // Insert Middle in LL
  void insert(int val, int pos)
  {
    Node *newNode = new Node(val);

    Node *temp = head;
    for (int i = 0; i < pos - 1; i++)
    {
      temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
  }
};

int main()
{
  List ll;
  ll.push_front(1);
  ll.push_front(2);
  ll.push_front(3);
  ll.push_front(4);
  ll.printList();

  ll.insert(100, 4);
  ll.printList();
  return 0;
}