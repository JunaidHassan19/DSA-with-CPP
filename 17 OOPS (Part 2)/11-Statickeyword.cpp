#include <iostream>
using namespace std;

// Static keyword example -Static objects and their constructors/destructors
class Example
{
public:
  Example() // Constructor to demonstrate when it is called for static objects
  {
    cout << "Constructor.." << endl;
  }

  ~Example() // Destructor to demonstrate when it is called for static objects
  {
    cout << "Destructor.." << endl;
  }
};

int main()
{
  int a = 0;
  if (a == 0)
  {
    static Example eg1; // Static object - Constructor will be called only once when the control first enters this block
    cout << "Inside if block.." << endl;
  }

  cout << "Code Ending.." << endl; // Destructor will be called only once when the program ends, not when the control leaves the if block
  return 0;
}

/*
Logic:
1. When the program starts, the main function is executed.
2. The variable 'a' is initialized to 0.
3. The if condition (a == 0) is true, so the control enters the if block.
4. The static object 'eg1' of class 'Example' is created. Since it is a static object, its constructor is called only once when the control first enters this block, and it will not be created again if the control re-enters this block.
5. The message "Inside if block.." is printed.
6. The control leaves the if block.
7. The program continues executing.
8. When the program ends, the static object 'eg1' is destroyed, and its destructor is called.
9. The message "Code Ending.." is printed before the destructor message.
10. The output will show the constructor message once, the "Inside if block.." message, the "Code Ending.." message, and finally the destructor message once when the program ends.

*/