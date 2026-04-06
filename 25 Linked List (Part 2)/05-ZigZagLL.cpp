#include <iostream>
#include <list>
using namespace std;

// ZigZag Linked List
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
public:
  Node *head;
  Node *tail;

  List()
  {
    head = NULL;
    tail = NULL;
  }

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
};

void printLL(Node *head)
{
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << " -> ";
    temp = temp->next;
  }
  cout << "NULL" << endl;
}

// Function to split the linked list into two halves and return the head of the second half
Node *splitAtMid(Node *head)
{
  Node *slow = head;
  Node *fast = head;
  Node *prev = NULL;

  while (fast != NULL && fast->next != NULL)
  {
    prev = slow;
    slow = slow->next;
    fast = fast->next->next;
  }

  if (prev != NULL)
  {
    prev->next = NULL;
  }
  return slow;
}

// Function to reverse a linked list and return the new head
Node *reverse(Node *head)
{
  Node *prev = NULL;
  Node *curr = head;
  Node *next = NULL;

  while (curr != NULL)
  {
    next = curr->next;
    curr->next = prev;

    prev = curr;
    curr = next;
  }
  return prev;
}

// Function to rearrange the linked list in zigzag manner and return the head of the modified list
Node *zigZagLL(Node *head)
{
  Node *rightHead = splitAtMid(head);      // Split the linked list into two halves and get the head of the second half
  Node *rightHeadRev = reverse(rightHead); // Reverse the right half of the linked list

  Node *left = head;          // Left half of the linked list
  Node *right = rightHeadRev; // Reversed right half of the linked list
  Node *tail = right;         // Tail of the modified linked list

  while (left != NULL && right != NULL) // Traverse both halves of the linked list until one of them becomes NULL
  {
    Node *nextLeft = left->next;   // Store the next node of the left half
    Node *nextRight = right->next; // Store the next node of the right half

    left->next = right;     // Link the current node of the left half to the current node of the right half
    right->next = nextLeft; // Link the current node of the right half to the next node of the left half
    tail = right;           // Update the tail of the modified linked list

    left = nextLeft;   // Move to the next node in the left half
    right = nextRight; // Move to the next node in the right half
  }

  if (right != NULL) // If there are remaining nodes in the right half, link the tail to the remaining nodes
  {
    tail->next = right; // Link the tail to the remaining nodes in the right half
  }

  return head;
}

int main()
{
  List ll;
  ll.push_front(5);
  ll.push_front(4);
  ll.push_front(3);
  ll.push_front(2);
  ll.push_front(1);
  printLL(ll.head);

  ll.head = zigZagLL(ll.head);
  printLL(ll.head);
  return 0;
}

/*
Logic:
1. Split the linked list into two halves using the slow and fast pointer technique.
2. Reverse the second half of the linked list.
3. Merge the two halves of the linked list in zigzag manner by alternating nodes from both halves.
4. If there are remaining nodes in the right half, link the tail of the modified linked list to the remaining nodes.
Time Complexity: O(n) - The algorithm traverses the linked list a few times (for splitting, reversing, and merging), resulting in a linear time complexity.
Space Complexity: O(1) - The algorithm uses a constant amount of extra space for pointers and variables, regardless of the size of the linked list.
*/