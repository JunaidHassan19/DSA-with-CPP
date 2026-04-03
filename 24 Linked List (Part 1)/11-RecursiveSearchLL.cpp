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

  // Recursive Search in LL

  // helper function to search in LL recursively
  int helper(Node *temp, int key) // temp is the head of the LL and key is the value to be searched
  {

    if (temp == NULL)
    {
      return -1;
    }
    if (temp->data == key)
    {
      return 0;
    }

    int idx = helper(temp->next, key); // recursive call to search in the rest of the LL
    if (idx == -1)
    {
      return -1;
    }
    return idx + 1;
  }

  // function to search in LL recursively
  int searchRec(int key) // key is the value to be searched
  {
    return helper(head, key); // calling the helper function with the head of the LL and the key to be searched
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

  cout << "KEY = " << ll.searchRec(4) << endl;
  return 0;
}