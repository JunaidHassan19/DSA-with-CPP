#include <iostream>
using namespace std;

// Push Back in Linked List
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

  // Function to add a new node at the end of the linked list
  void push_back(int val)
  {
    Node *newNode = new Node(val); // Create a new node with the given value
    if (head == NULL)              // If the linked list is empty, set both head and tail to the new node
    {
      head = tail = newNode; // Set head and tail to the new node
    }
    else
    {
      // tail->next = newNode; // Set the next pointer of the current tail to the new node
      tail = newNode; // Update the tail to the new node
    }
  }
};

int main()
{
  List ll;

  ll.push_back(1);
  ll.push_back(2);
  ll.push_back(3);

  return 0;
}

/*
Logic:
1. Create a new node with the given value.
2. If the list is empty, set both head and tail to the new node.
3. If the list is not empty, set the next pointer of the current tail to the new node, and then update the tail to the new node.
Time Complexity: O(1) - The push_back operation takes constant time as it only involves updating a few pointers.
Space Complexity: O(1) - The space complexity is constant as we are only creating one new node regardless of the size of the linked list.
*/