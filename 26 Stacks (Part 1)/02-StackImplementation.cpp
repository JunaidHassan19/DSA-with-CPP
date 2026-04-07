#include <iostream>
#include <vector>
using namespace std;

// Stack Implementation using Vector
class Stack
{
  vector<int> vec;

public:
  // Push an element onto the stack
  void push(int val)
  {
    vec.push_back(val);
  }

  // Pop an element from the stack
  void pop()
  {
    if (isEmpty()) // Check if the stack is empty before popping
    {
      cout << "Stack is Empty" << endl;
      return;
    }
    vec.pop_back();
  }

  // Get the top element of the stack
  int top()
  {
    if (isEmpty()) // Check if the stack is empty before accessing the top element
    {
      cout << "Stack is Empty" << endl;
      return -1;
    }

    int lastIdx = vec.size() - 1;
    return vec[lastIdx];
  }

  // Check if the stack is empty
  bool isEmpty()
  {
    return vec.size() == 0;
  }
};

int main()
{
  Stack s;

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