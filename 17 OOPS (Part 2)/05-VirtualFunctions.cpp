#include <iostream>
#include <string>
using namespace std;

// Runtime Polymorphism: Virtual Functions
class Parent
{
public:
  virtual void show() // Virtual function allows for dynamic binding at runtime
  {
    cout << "Parent class show.." << endl;
  }
};

// Inheritance: Child class inherits from Parent class
class Child : public Parent
{
public:
  void show()
  {
    cout << "Child class show.." << endl;
  }
};

int main()
{
  Child child1; // Create an object of the Child class
  Parent *ptr;  // Create a pointer of the Parent class type

  ptr = &child1; // Point the Parent class pointer to the Child class object
  ptr->show();   // This will call the show function of the Child class, demonstrating function overriding and runtime polymorphism.
  return 0;
}

/*
Runtime Polymorphism: Virtual Functions
- Virtual functions allow for dynamic binding at runtime, enabling function overriding in derived classes.
- When a base class pointer points to a derived class object and calls a virtual function, the derived class's version of the function is executed, demonstrating runtime polymorphism.
- This allows for more flexible and extensible code, as the behavior of the program can be determined at runtime based on the actual object type, rather than the pointer type.

*/