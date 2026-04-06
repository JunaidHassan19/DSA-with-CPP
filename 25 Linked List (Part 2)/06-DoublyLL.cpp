#include <iostream>
#include <list>
using namespace std;

// Doubly Linked List
class Node
{
public:
  int data;
  Node *next;
  Node *prev;

  Node(int val)
  {
    data = val;
    next = prev = nullptr;
  }
};

// Doubly Linked List
class DoublyList
{
public:
  Node *head;
  Node *tail;

  DoublyList()
  {
    head = tail = NULL;
  }

  // Function to insert a new node at the end of the linked list
  void push_front(int val)
  {
    Node *newNode = new Node(val);

    if (head == NULL)
    {
      head = tail = newNode;
    }
    else
    {
      newNode->next = head; // Link the new node to the current head
      head->prev = newNode;
      head = newNode;
    }
  }

  // Function to remove the first node of the linked list
  void pop_front()
  {
    Node *temp = head;
    head = head->next; // Update the head to the next node
    if (head != NULL)
    {
      head->prev = NULL;
    }

    temp->next = NULL; // Unlink the node to be deleted from the linked list
    delete temp;
  }

  void printList()
  {
    Node *temp = head;
    while (temp != NULL)
    {
      cout << temp->data << " <=> ";
      temp = temp->next;
    }
    cout << "NULL" << endl;
  }
};

int main()
{
  DoublyList dbll;

  dbll.push_front(4);
  dbll.push_front(3);
  dbll.push_front(2);
  dbll.push_front(1);

  dbll.printList();

  dbll.pop_front();
  dbll.printList();
  return 0;
}
