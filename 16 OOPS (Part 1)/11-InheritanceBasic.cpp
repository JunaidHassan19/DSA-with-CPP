#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
  string color;

  void eat()
  {
    cout << "Eats.." << endl;
  }

  void breathe()
  {
    cout << "Breathes.." << endl;
  }
};

class cat : public Animal
{
  int legs;

  void walk()
  {
    cout << "Walking.." << endl;
  }
};