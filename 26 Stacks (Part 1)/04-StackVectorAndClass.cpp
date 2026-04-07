#include <iostream>
#include <vector>
using namespace std;

// Stack Implementation using Vector
template <class T> // Template class to make the stack generic
class Stack
{
  vector<T> vec; // Vector to hold the elements of the stack

public:
  // Push an element onto the stack
  void push(T val)
  {
    vec.push_back(val);
  }

  // Pop an element from the stack
  void pop()
  {
    // if (isEmpty()) // Check if the stack is empty before popping
    // {
    //   cout << "Stack is Empty" << endl;
    //   return;
    // }
    vec.pop_back();
  }

  // Get the top element of the stack
  T top()
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
  // Stack<int> s;
  // Stack<float> s;
  Stack<char> s;

  s.push('J');
  s.push('S');
  s.push('H');

  // Print the elements of the stack
  while (!s.isEmpty())
  {
    cout << s.top() << " ";
    s.pop();
  }
  cout << endl;
  return 0;
}

/*
Template classes allow us to create a stack that can hold any data type, making our stack implementation more flexible and reusable. In this example, we can create stacks of integers, floats, characters, or any other data type by simply specifying the type when declaring the stack object. This eliminates the need for multiple stack implementations for different data types and promotes code reusability.
*/