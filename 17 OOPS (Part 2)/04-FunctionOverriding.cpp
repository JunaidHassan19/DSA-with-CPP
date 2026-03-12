#include <iostream>
#include <string>
using namespace std;

// Function Overloading: Same function name but different parameters (type or number)
class Parent
{
public:
  void show()
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
  Child c1;
  c1.show(); // This will call the show function of the Child class, demonstrating function overriding.
  return 0;
}

/*
Runtime Polymorphism: Function Overriding
Function Overriding: Same function name and same parameters in both parent and child class
- The function in the child class overrides the function in the parent class.
- The function to be called is determined at runtime based on the type of the object (parent or child).
*/