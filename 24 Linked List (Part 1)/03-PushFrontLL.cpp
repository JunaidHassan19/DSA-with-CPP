#include <iostream>
using namespace std;

// Push Front in Linked List
class Node
{
  int data;
  Node *next;

public:
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

  // Function to add a new node at the front of the linked list
  void push_front(int val)
  {
    Node *newNode = new Node(val); // Create a new node with the given value

    if (head == NULL) // If the linked list is empty, set both head and tail to the new node
    {
      head = tail = newNode; // Set head and tail to the new node
    }
    else // If the linked list is not empty, update the next pointer of the new node to point to the current head, and then update the head to the new node
    {
      newNode->next = head; // Set the next pointer of the new node to the current head
      head = newNode;       // Update the head to the new node
    }
  }
};

int main()
{
  List ll;

  ll.push_front(3);
  ll.push_front(2);
  ll.push_front(1);
  return 0;
}

/*
Logic:
1. Create a new node with the given value.
2. If the list is empty, set both head and tail to the new node.
3. If the list is not empty, update the next pointer of the new node to point to the current head, and then update the head to the new node.
Time Complexity: O(1) - The push_front operation takes constant time as it only involves updating a few pointers.
Space Complexity: O(1) - The space complexity is constant as we are only creating one new node regardless of the size of the linked list.
*/