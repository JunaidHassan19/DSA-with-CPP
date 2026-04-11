#include <iostream>
#include <queue>
using namespace std;

// Implementation of Queue using Array (Circular Queue)
class Queue
{
  int *arr; // Array to store queue elements

  int capacity; // Maximum capacity of the queue
  int currSize; // Current size of the queue

  int f, r; // Front and rear indices

public:
  Queue(int capacity)
  {
    this->capacity = capacity; // Set the capacity
    arr = new int[capacity];   // Create an array of given capacity
    currSize = 0;              // Initialize current size to 0
    f = 0;                     // Initialize front to 0
    r = -1;                    // Initialize rear to -1
  }

  // Function to add an item to the queue
  void push(int data)
  {
    if (currSize == capacity)
    {
      cout << "Queue is Full" << endl;
      return;
    }

    // Circular increment of rear index
    r = (r + 1) % capacity;
    arr[r] = data;
    currSize++;
  }

  // Function to remove an item from the queue
  void pop()
  {
    if (empty())
    {
      cout << "Queue is Empty" << endl;
      return;
    }
    // Circular increment of front index
    f = (f + 1) % capacity;
    currSize--;
  }

  // Function to get the front item from the queue
  int front()
  {
    if (empty())
    {
      cout << "Queue is Empty" << endl;
      return -1;
    }
    return arr[f];
  }

  // Function to check if the queue is empty
  bool empty()
  {
    return currSize == 0;
  }
};

int main()
{
  Queue q(4);

  q.push(1);
  q.push(2);
  q.push(3);
  q.push(4);
  q.push(5);

  cout << q.front() << endl;
  q.pop();

  cout << q.front() << endl;
  q.push(6);

  cout << q.front() << endl;
  return 0;
}