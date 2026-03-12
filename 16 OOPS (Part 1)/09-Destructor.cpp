#include <iostream>
#include <string>
using namespace std;

class Car
{
public:
  string name;
  string color;
  int *mileage;

  Car(string name, string color)
  {
    this->name = name;
    this->color = color;
    mileage = new int;
    *mileage = 12;
  }
  Car(Car &original)
  {
    cout << "Custom copy constructor called!" << endl;
    name = original.name;
    color = original.color;
    mileage = new int;
    *mileage = *original.mileage;
  }

  // Destructor: A special method in a class that is automatically called when an object of the class is destroyed (goes out of scope or is deleted). It is used to perform cleanup tasks, such as releasing resources or memory.
  ~Car()
  {
    cout << "Object deletion.." << endl;
    if (mileage != NULL) // if mileage is not null, then delete the memory allocated for mileage
    {
      delete mileage; // free the memory allocated for mileage
      mileage = NULL; // set mileage to null to avoid dangling pointer
    }
  }
};

int main()
{
  Car c1("maruti 800", "white");

  cout << c1.name << endl;
  cout << c1.color << endl;
  cout << *c1.mileage << endl;

  return 0;
}

/*
Destructor in C++
======================
- A destructor is a special method in a class that is automatically called when an object of the class is destroyed (goes out of scope or is deleted). It is used to perform cleanup tasks, such as releasing resources or memory.
- The destructor has the same name as the class, but with a tilde (~) prefix.
- It takes no parameters and has no return type.
*/