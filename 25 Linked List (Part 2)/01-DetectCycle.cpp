#include <iostream>
using namespace std;

// Detect a Cycle
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

  // Function to detect if a cycle exists in the linked list
  bool isCycle()
  {
    Node *slow = head; // Slow pointer moves one step at a time
    Node *fast = head; // Fast pointer moves two steps at a time

    while (fast != NULL && fast->next != NULL) // Check if fast pointer and its next are not NULL
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

  ll.isCycle();

  return 0;
}
/*
Steps:
1. We define a Node class to represent each node in the linked list, which contains an integer data and a pointer to the next node.
2. We define a List class to manage the linked list, which contains pointers to the head and tail of the list, and methods to add nodes, print the list, create a cycle, and detect a cycle.
3. The push_back method adds a new node to the end of the list.
4. The makeCycle method creates a cycle by pointing the next of the tail node to the head node.
5. The isCycle method uses the Floyd’s Tortoise and Hare algorithm to detect if a cycle exists in the linked list. It uses two pointers (slow and fast) to traverse the list. If they meet, a cycle exists; if fast reaches the end of the list, there is no cycle.

Time Complexity: O(n) - In the worst case, we may need to traverse the entire list to detect a cycle.
Space Complexity: O(1) - We are using only a constant amount of extra space for the two pointers.
*/