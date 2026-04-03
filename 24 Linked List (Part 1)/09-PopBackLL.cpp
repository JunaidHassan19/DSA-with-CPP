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

  // Pop Front in LL
  void pop_front()
  {
    if (head == NULL)
    {
      cout << "LL is empty";
      return;
    }
    Node *temp = head;
    head = head->next;
    temp->next = NULL;
    delete temp;
  }

  // Pop Back in LL
  void pop_back()
  {
    Node *temp = head; // Start from the head of the linked list

    while (temp->next->next != NULL) // Traverse the linked list until the second last node is reached (the node whose next's next is NULL)
    {
      temp = temp->next; // Move to the next node in the linked list
    }
    temp->next = NULL; // Set the next pointer of the second last node to NULL, effectively removing the last node from the linked list
    delete tail;       // Delete the last node (tail) to free memory
    tail = temp;       // Update the tail pointer to point to the second last node, which is now the new tail of the linked list
  }
};

int main()
{
  List ll;
  ll.push_front(4);
  ll.push_front(3);
  ll.push_front(2);
  ll.push_front(1);
  ll.printList();

  // ll.insert(100, 4);

  // ll.pop_front();
  // ll.printList();

  ll.pop_back();
  ll.printList();
  return 0;
}