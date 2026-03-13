#include <iostream>
using namespace std;

// Abstract class.
class Shape
{
public:
  virtual void draw() = 0; // Pure virtual function / Abstract function
};

// Derived class 1
class Circle
{
public:
  void draw() // Overriding the pure virtual function
  {
    cout << "Draw Circle..." << endl;
  }
};
// Derived class 2
class Square
{
public:
  void draw() // Overriding the pure virtual function
  {
    cout << "Draw Square..." << endl;
  }
};

int main()
{
  Circle c1;
  c1.draw();
  Square s1;
  s1.draw();

  return 0;
}

/*
Pure virtual function is a virtual function that has no implementation in the base class and must be overridden in derived classes. It is declared by assigning 0 to the function declaration in the base class. A class that contains at least one pure virtual function is called an abstract class, and it cannot be instantiated. Derived classes must provide an implementation for the pure virtual function to be instantiable.
*/