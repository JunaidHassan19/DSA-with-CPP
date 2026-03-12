#include <iostream>
#include <string>
using namespace std;

class print
{
public:
  void show(int x)
  {
    cout << "Value of x is: " << x << endl;
  }

  void show(string n)
  {
    cout << "Hey " << n << endl;
  }
};

int main()
{
  print pt;
  pt.show(20);
  pt.show("junni");
  return 0;
}

/*
compile time polymorphism: Function Overloading
Function Overloading: Same function name but different parameters (type or number)
- The compiler determines which function to call based on the arguments passed.
- This allows us to use the same function name for different purposes, improving code readability and organization.
Example:
void show(int x) { ... } // for integers
void show(string n) { ... } // for strings
In main():
pt.show(20); // calls show(int)
pt.show("junni"); // calls show(string)
*/