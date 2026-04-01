#include <iostream>
using namespace std;

// Node class to represent each node in the linked list
class Node
{
  int data;
  Node *next;

  // Constructor to initialize the node with a value and set next to NULL
public:
  Node(int val)
  {
    data = val;
    next = NULL;
  }
};

// List class to represent the linked list itself, containing pointers to the head and tail nodes
class List
{
  Node *head;
  Node *tail;

  // Constructor to initialize the linked list with head and tail set to NULL
public:
  List()
  {
    head = NULL;
    tail = NULL;
  }
};

int main()
{
  List ll(); // This line is actually a function declaration, not an object instantiation. To create an object of the List class, you should remove the parentheses.
  return 0;
}

/*
Step 1: Define a Node class to represent each node in the linked list. Each node will contain an integer data and a pointer to the next node.
Step 2: Define a List class to represent the linked list itself. This class will contain pointers to the head and tail nodes of the list.
Step 3: Implement a constructor for the Node class to initialize the data and set the next pointer to NULL.
Step 4: Implement a constructor for the List class to initialize the head and tail pointers to NULL.
Step 5: In the main function, create an instance of the List class to represent the
*/