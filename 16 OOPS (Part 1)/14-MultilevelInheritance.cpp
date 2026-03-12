#include <iostream>
using namespace std;

// Base class
class Animal
{
public:
  string color;

  void eat()
  {
    cout << "Eats..." << endl;
  }

  void breathe()
  {
    cout << "breathes.." << endl;
  }
};

// Derived class 1
class Mammal : public Animal
{
public:
  string bloodType;
  Mammal()
  {
    bloodType = "Warm";
  }
};

// Derived class 2 (derived from Mammal, which is derived from Animal)
class Cat : public Mammal
{
public:
  void taikWag()
  {
    cout << "A cat wags its tail.." << endl;
  }
};

int main()
{
  Cat c1;
  c1.breathe();
  c1.eat();
  c1.taikWag();

  cout << c1.bloodType << endl;

  return 0;
}

/*
Multilevel Inheritance in C++
===========================
- Multilevel inheritance is a type of inheritance where a derived class (child class) inherits from another derived class (which is also a child of a base class).
- In this example, Mammal is derived from Animal, and Cat is derived from Mammal. So Cat inherits from Mammal, which in turn inherits from Animal.
- The Cat class can access the members of both Mammal and Animal classes, demonstrating multilevel inheritance.
*/