#include <iostream>
#include <list>
using namespace std;

// Merge Sort in Linked List
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
public:
  Node *head;
  Node *tail;

  List()
  {
    head = NULL;
    tail = NULL;
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
void printList(Node *head)
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

// Function to merge two sorted linked lists and return the head of the merged list
Node *merge(Node *left, Node *right)
{
  List ans;
  Node *i = left;
  Node *j = right;

  while (i != NULL && j != NULL)
  {
    if (i->data <= j->data)
    {
      ans.push_back(i->data);
      i = i->next;
    }
    else
    {
      ans.push_back(j->data);
      j = j->next;
    }
  }

  while (i != NULL)
  {
    ans.push_back(i->data);
    i = i->next;
  }

  while (j != NULL)
  {
    ans.push_back(j->data);
    j = j->next;
  }

  return ans.head;
}

// Function to perform merge sort on the linked list and return the head of the sorted list
Node *mergeSort(Node *head)
{
  if (head == NULL || head->next == NULL)
  {
    return head;
  }

  Node *rightHead = splitAtMid(head);

  Node *left = mergeSort(head);
  Node *right = mergeSort(rightHead);

  return merge(left, right);
}

int main()
{
  List ll;

  ll.push_back(5);
  ll.push_back(4);
  ll.push_back(3);
  ll.push_back(2);
  ll.push_back(1);
  printList(ll.head);

  ll.head = mergeSort(ll.head);
  printList(ll.head);

  return 0;
}