#include <iostream>
#include <vector>
using namespace std;

// Stack Implementation using Array
class Stack
{
  int *arr;
  int topIdx;
  int capacity;

public:
  // Constructor to initialize the stack
  Stack(int size)
  {
    arr = new int[size];
    topIdx = -1;
    capacity = size;
  }

  void push(int val)
  {
    if (topIdx == capacity - 1) // Check if the stack is full before pushing
    {
      cout << "Stack is Full" << endl;
      return;
    }
    topIdx++;
    arr[topIdx] = val;
  }
  void pop()
  {
    if (isEmpty()) // Check if the stack is empty before popping
    {
      cout << "Stack is Empty" << endl;
      return;
    }
    topIdx--;
  }

  int top()
  {
    if (isEmpty()) // Check if the stack is empty before accessing the top element
    {
      cout << "Stack is Empty" << endl;
      return -1;
    }
    return arr[topIdx];
  }

  bool isEmpty()
  {
    return topIdx == -1;
  }
};

int main()
{
  Stack s(5);

  s.push(3);
  s.push(2);
  s.push(1);

  // Print the elements of the stack
  while (!s.isEmpty())
  {
    cout << s.top() << " ";
    s.pop();
  }

  return 0;
}