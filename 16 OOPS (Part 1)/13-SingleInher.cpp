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