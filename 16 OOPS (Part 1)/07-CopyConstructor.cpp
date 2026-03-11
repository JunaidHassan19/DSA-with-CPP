#include <iostream>
#include <string>
using namespace std;

class Car
{
public:
  string name;
  string color;

  // Parameterized constructor
  Car(string name, string color)
  {
    this->name = name;
    this->color = color;
  }
  // Copy constructor - creates a new object as a copy of an existing object
  Car(Car &original)
  {
    cout << "Custom copy constructor called!" << endl;
    name = original.name;
    color = original.color;
  }
};

int main()
{
  Car car1("Maruti 800", "while");

  Car car2(car1);

  // cout << "car1 name: " << car1.name << endl;
  // cout << "car1 color: " << car1.color << endl;

  cout << "car2 name: " << car2.name << endl;
  cout << "car2 color: " << car2.color << endl;

  return 0;
}

/*
copy constructor
======================
- A copy constructor is a special constructor in C++ that creates a new object as a copy of an existing object.
- C++ provides a default copy constructor if you don't write one, which performs a shallow copy (copies member variables as they are).
- You can define your own copy constructor to perform a deep copy (if your class has pointers or dynamic memory) or to add custom behavior when copying an object.
Syntax of copy constructor:
----------------------
class ClassName {
public:
  // Copy constructor
  ClassName(const ClassName &original) {
    // code to copy properties from original to this object
  }
};
*/