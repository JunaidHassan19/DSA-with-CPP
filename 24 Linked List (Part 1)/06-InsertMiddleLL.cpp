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
    Node *newNode = new Node(val); // Create a new node with the given value

    Node *temp = head;                // Start from the head of the linked list and traverse to the position where the new node needs to be inserted
    for (int i = 0; i < pos - 1; i++) // Traverse the linked list until the position before the desired insertion point is reached
    {
      temp = temp->next; // Move to the next node in the linked list
    }

    newNode->next = temp->next; // Set the next pointer of the new node to point to the next node of the current node (temp)
    temp->next = newNode;       // Update the next pointer of the current node (temp) to point to the new node, effectively inserting the new node at the desired position in the linked list
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

  ll.push_back(1);
  ll.push_back(2);
  ll.push_back(3);
  ll.push_back(4);
  ll.printList();

  ll.insert(100, 4);
  ll.printList();
  return 0;
}