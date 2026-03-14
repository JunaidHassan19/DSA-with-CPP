#include <iostream>
using namespace std;
// Predict the output.
class Base
{
public:
  virtual void print() // Virtual function to enable dynamic dispatch
  {
    cout << "Base class" << endl;
  }
};

// Derived class inheriting from Base class
class Derived : public Base
{
public:
  void print() // Overriding the print function of Base class
  {
    cout << "Derived class" << endl;
  }
};

int main()
{
  Base *b = new Derived();
  b->print();

  delete b;
  return 0;
}

/*
Output:
Derived class.

logic:
1. The program starts and the main function is executed.
2. A pointer 'b' of type Base* is created and assigned a new object of type Derived. This is an example of polymorphism where a base class pointer points to a derived class object.
3. The print() function is called using the pointer 'b'. Since print() is a virtual function in the Base class, the program uses dynamic dispatch to determine which version of print() to call at runtime.
4. The print() function of the Derived class is called, which outputs "Derived class".
5. The object pointed to by 'b' is deleted, which calls the destructor of the Derived class followed by the destructor of the Base class (if they were defined). However, since we have not defined destructors in this example, there will be no output from destructors.
6. The program ends, and the output is "Derived class".
*/