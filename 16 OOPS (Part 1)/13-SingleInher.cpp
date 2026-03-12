#include <iostream>
using namespace std;

class Animal
{
public:
  string color;

  void eat()
  {
    cout << "Eats..." << endl;
  }

  void breath()
  {
    cout << "breathes.." << endl;
  }
};

class Cat : public Animal
{
public:
  int legs;

  void walk()
  {
    cout << "Walking.." << endl;
  }
};

int main()
{
  Cat c1;
  c1.breath();
  c1.eat();
  c1.walk();

  return 0;
}

/*
Single Inheritance in C++
===========================
- Single inheritance is a type of inheritance where a derived class (child class) inherits from a single base class (parent class).
- The derived class can access the public and protected members of the base class, but not the private members.
- The derived class can also have its own members (properties and methods) in addition to the inherited members.
- Syntax: class DerivedClass : public BaseClass { };
*/