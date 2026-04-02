#include <iostream>
using namespace std;

// Practice - LL Implementation

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