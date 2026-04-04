#include <iostream>
using namespace std;

// Remove a Cycle
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

  // Function to create a cycle in the linked list
  void makeCycle()
  {
    if (tail != NULL)
    {
      tail->next = head;
    }
  }

  // Function to remove a cycle from the linked list
  void removeCycle()
  {
    Node *slow = head;    // Slow pointer moves one step at a time
    Node *fast = head;    // Fast pointer moves two steps at a time
    bool isCycle = false; // Flag to indicate if a cycle exists

    // Detect if a cycle exists using Floyd’s Tortoise and Hare algorithm
    while (fast != NULL && fast->next != NULL) // Check if fast pointer and its next are not NULL
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
    // If no cycle exists, return
    if (!isCycle)
    {
      cout << "Cycle doesn't exists" << endl;
      return;
    }

    // If the cycle is at the head, find the last node in the cycle and set its next to NULL
    slow = head;
    if (slow == fast)
    {
      while (fast->next != slow)
      {
        fast = fast->next;
      }
      fast->next = NULL; // Remove the cycle by setting the next of the last node to NULL
    }
    // If the cycle is not at the head, find the start of the cycle
    else
    {
      Node *prev = fast;
      while (slow != fast)
      {
        slow = slow->next;
        prev = fast;
        fast = fast->next;
      }
      prev->next = NULL; // Remove the cycle by setting the next of the last node to NULL
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
