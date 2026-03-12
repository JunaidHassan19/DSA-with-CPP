// Modes of Inheritance: public, protected, private

#include <iostream>
#include <string>
using namespace std;

// Base (Parent) class
class Animal
{
public:
  string color;

  void eat()
  {
    cout << "Eats.." << endl;
  }

  void breath()
  {
    cout << "Breathes.." << endl;
  }
};

// PUBLIC Inheritance: public → public, protected → protected
// Cat can access Animal's public members directly
// Outside code can also access Animal's public members through Cat objects
class Cat : public Animal
{
public:
  int legs;

  void walk()
  {
    cout << "Walking.." << endl;
  }
};

// PROTECTED Inheritance: public → protected, protected → protected
// Dog can access Animal's members inside its own functions
// But outside code CANNOT access Animal's members through Dog objects
class Dog : protected Animal
{
public:
  int legs;

  void walk()
  {
    breath(); // OK — accessible inside the class
    cout << "Walking.." << endl;
  }
};

// PRIVATE Inheritance: public → private, protected → private
// Cow can access Animal's members inside its own functions
// But outside code AND further derived classes CANNOT access them
class Cow : private Animal
{
public:
  int legs;

  void walk()
  {
    breath(); // OK — accessible inside the class
    cout << "Walking.." << endl;
  }
};

int main()
{
  // PUBLIC inheritance — all Animal members are accessible from outside
  Cat c1;
  c1.legs = 4;
  c1.color = "White"; // OK — color is public in Cat

  cout << c1.legs << endl;
  cout << c1.color << endl;

  c1.walk();
  c1.breath(); // OK — inherited as public
  c1.eat();    // OK — inherited as public

  // PROTECTED inheritance — Animal's members are NOT accessible from outside
  Dog d1;
  d1.legs = 4;
  // d1.color = "Black";  // ERROR — color became protected, can't access outside
  // d1.breath();          // ERROR — breath() became protected too

  cout << d1.legs << endl;
  // cout << d1.color << endl; // ERROR

  d1.walk(); // OK — walk() is Dog's own public function (it calls breath() internally)

  // PRIVATE inheritance — Animal's members are NOT accessible from outside
  Cow cow1;
  // cow1.color = "Black & White"; // ERROR — color became private, can't access outside
  cow1.legs = 4;

  // cout << cow1.color << endl; // ERROR
  cout << cow1.legs << endl;

  cow1.walk(); // OK — walk() is Cow's own public function (it calls breath() internally)
}