// Hybrid Inheritance — combination of two or more types of inheritance
//
// Here: Hierarchical + Multiple = Hybrid
//
//        Animal        (Base class)
//        /    \
//      Dog    Cat      (Hierarchical inheritance)
//        \    /
//         Pet          (Multiple inheritance — inherits from both Dog & Cat)
//
// Problem: "Diamond Problem" — Animal's members get inherited TWICE in Pet
// Solution: Use 'virtual' keyword to ensure only ONE copy of Animal exists

#include <iostream>
#include <string>
using namespace std;

// Base class
class Animal
{
public:
  string name;

  void eat()
  {
    cout << name << " eats food." << endl;
  }
};

// 'virtual' ensures only one copy of Animal is shared
class Dog : virtual public Animal
{
public:
  void bark()
  {
    cout << name << " barks!" << endl;
  }
};

// 'virtual' here too — both must use virtual
class Cat : virtual public Animal
{
public:
  void meow()
  {
    cout << name << " meows!" << endl;
  }
};

// Pet inherits from both Dog and Cat (Multiple Inheritance)
// Without 'virtual', Pet would have TWO copies of Animal — causing ambiguity
class Pet : public Dog, public Cat
{
public:
  void show()
  {
    cout << "Pet name: " << name << endl; // no ambiguity because of virtual
  }
};

int main()
{
  Pet p1;
  p1.name = "Buddy"; // only ONE copy of 'name' exists — no ambiguity

  p1.eat();  // inherited from Animal (through Dog & Cat)
  p1.bark(); // inherited from Dog
  p1.meow(); // inherited from Cat
  p1.show(); // Pet's own function

  return 0;
}