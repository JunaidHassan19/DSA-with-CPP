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

  // Parctice - Iterative search in LL

  int searchItr(int key)
  {
    Node *temp = head;

    int idx = 0;
    while (temp != NULL)
    {
      if (temp->data == key)
      {
        return idx;
      }
      temp = temp->next;
      idx++;
    }
    return -1;
  }

  // Practice - Pop Front in LL
  void pop_front()
  {
    if (head == NULL)
    {
      cout << "LL is empty";
      return;
    }
    Node *temp = head;
    head = head->next;
    temp->next = NULL;
    delete temp;
  }

  // Practice - Pop Back in LL
  void pop_back()
  {
    Node *temp = head;

    while (temp->next->next != NULL)
    {
      temp = temp->next;
    }
    temp->next = NULL;
    delete tail;
    tail = temp;
  }
};

int main()
{
  List ll;
  ll.push_front(5);
  ll.push_front(4);
  ll.push_front(3);
  ll.push_front(2);
  ll.push_front(1);
  ll.printList();

  // ll.push_back(4);
  // ll.push_back(5);
  // ll.push_back(6);
  // ll.printList();

  // ll.insert(100, 3);
  // ll.printList();

  cout << "Key = " << ll.searchItr(4) << endl;
  return 0;
}
