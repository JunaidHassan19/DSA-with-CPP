#include <iostream>
using namespace std;

// Practice - LL Implementation
/*
// class Node
// {
//   int data;
//   Node *next;
// public:
//   Node(int val)
//   {
//     data = val;
//     next = NULL;
//   }
// };
// class List
// {
//   Node *head;
//   Node *tail;
// public:
//   List()
//   {
//     head = NULL;
//     tail = NULL;
//   }
// };

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
};

int main()
{
  List();
  return 0;
}
*/

// Practice - Push Front in LL
/*
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

  // void push_front(int val)
  // {
  //   Node *newNode = new Node(val);
  //   if (head == NULL)
  //   {
  //     head = tail = newNode;
  //   }
  //   else
  //   {
  //     // newNode->next = head;
  //     head = newNode;
  //   }
  // }

  void push_front(int val)
  {
    Node *newNode = new Node(val);
    if (head == NULL)
    {
      head = tail = newNode;
    }
    else
    {
      // newNode->next = head;
      head = newNode;
    }
  }
};

int main()
{
  List ll;

  ll.push_front(3);
  ll.push_front(2);
  ll.push_front(1);
  ll.push_front(0);

  return 0;
}
*/

// Practice - Push Back in LL
/*
// int List Class
void push_back(int val)
{
  Node *newNode = new Node(val);
  if (head = NULL)
  {
    head = tail = newNode;
  }
  else
  {
    tail->next = newNode;
    tail = newNode;
  }
};
*/

// Practice - Print LL
/*
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

  // Push_front
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

  // Practice - print ll

  // void printList()
  // {
  //   Node *temp = head;
  //   while (temp != NULL)
  //   {
  //     cout << temp->data << "->";
  //     temp = temp->next;
  //   }
  //   cout << "NULL" << endl;
  // }

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
};

int main()
{
  List ll;

  ll.push_front(3);
  ll.push_front(2);
  ll.push_front(1);
  ll.push_front(0);

  ll.printList();

  return 0;
}
*/

// Practice - Insert Middle in LL

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

  // Insert Middle
  void insert(int val, int pos)
  {
    Node *newNode = new Node(val);

    Node *temp = head;

    for (int i = 0; i < pos - 1; i++)
    {
      temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
  }
};

int main()
{
  List ll;
  ll.push_front(3);
  ll.push_front(2);
  ll.push_front(1);
  ll.printList();

  ll.push_back(4);
  ll.push_back(5);
  ll.push_back(6);
  ll.printList();

  ll.insert(100, 3);
  ll.printList();
}
