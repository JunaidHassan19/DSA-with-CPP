#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
  void eat()
  {
    cout << "Eats" << endl;
  }

  void breathe()
  {
    cout << "Breathes" << endl;
  }
};

class Bird : public Animal
{
public:
  void fly()
  {
    cout << "Flying..." << endl;
  }
};

class Fish : public Animal
{
public:
  void swim()
  {
    cout << "swimming" << endl;
  }
};

int main()
{
  Fish fi;
  fi.swim();
  fi.eat();
  fi.breathe();

  return 0;
}

/*
Hierarchical Inheritance in C++
===========================
- Hierarchical inheritance is a type of inheritance where multiple derived classes (child classes) inherit from a single base class (parent class).
- In this example, both Bird and Fish classes are derived from the Animal class. So they both inherit the eat() and breathe() methods from the Animal class.
- Each derived class can also have its own unique members (like fly() for Bird and swim() for Fish) in addition to the inherited members.
- Syntax: class DerivedClass1 : accessSpecifier BaseClass { }; class DerivedClass2 : accessSpecifier BaseClass { };
- This allows us to create a hierarchy of classes where multiple classes share common functionality from a single base class, while also having their own specific behaviors.

*/