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
    mileage = new int;            // allocate new memory for mileage
    *mileage = *original.mileage; // copy the value of mileage from original to this object
  }
};

int main()
{
  Car c1("maruti 800", "white");
  Car c2(c1);

  cout << c2.name << endl;
  cout << c2.color << endl;
  cout << *c2.mileage << endl;
  *c2.mileage = 10; // change mileage of c2 to 10

  cout << *c1.mileage << endl;

  return 0;
}

/*
logic:
- When we create c1, the parameterized constructor is called, which initializes name, color, and allocates memory for mileage and sets it to 12.
- When we create c2 as a copy of c1, the custom copy constructor is called, which copies name and color, but also allocates new memory for mileage and copies the value of mileage from c1 to c2. This is a deep copy.
- If we had used the default copy constructor (which does a shallow copy), c2.mileage would point to the same memory location as c1.mileage. So when we change *c2.mileage, it would also change *c1.mileage, which is not what we want.
- By defining our own copy constructor, we ensure that c2 has its own separate copy of mileage, so changing c2's mileage does not affect c1's mileage.
*/