#include <iostream>
#include <string>
using namespace std;

class car
{
  string name;
  string color;

public:
  // Default constructor (no parameters)
  car()
  {
    cout << "constructor without params" << endl;
  }

  // Parameterized constructor
  car(string name, string color)
  {
    cout << "Constructor with params" << endl;
    // name = nameVal;
    // color = colorVal;
    this->name = name; // this is a pointer that points to the current object
    this->color = color;
  }
  void start()
  {
    cout << "Car has started" << endl;
  }
  void stop()
  {
    cout << "Car has Stopped" << endl;
  }

  // Getters to access private properties
  string getName()
  {
    return name;
  }

  string getColor()
  {
    return color;
  }
};

int main()
{
  car c0;                        // Default constructor is called
  car c1("maruti 800", "White"); // Parameterized constructor is called
  cout << c1.getName() << endl;
  cout << c1.getColor() << endl;

  return 0;
}

/*

Constructors in C++
====================
A constructor is a special method that is automatically called
when an object of the class is created. It is used to initialize
the properties of the object.

Rules of Constructors:
----------------------
1. Constructor name must be the SAME as the class name.
2. It has NO return type (not even void).
3. It is called AUTOMATICALLY when an object is created.
4. It can be overloaded (multiple constructors with different parameters).


Types of Constructors:
-----------------------

1. Default Constructor (No parameters)
   - Takes no arguments.
   - If you don't write any constructor, C++ provides one automatically (does nothing).
   - Example:
       car() {
         cout << "Default constructor called" << endl;
       }
       car c0;  // Default constructor is called automatically


2. Parameterized Constructor (With parameters)
   - Takes arguments to initialize properties with custom values.
   - Example:
       car(string name, string color) {
         this->name = name;
         this->color = color;
       }
       car c1("Maruti 800", "White");  // Parameterized constructor called


3. Copy Constructor
   - Creates a new object as a copy of an existing object.
   - C++ provides a default copy constructor if you don't write one.
   - Example:
       car c2(c1);   // c2 is a copy of c1
       car c3 = c1;  // same thing


=========================================================

'this' Pointer in C++
======================
'this' is a special pointer available inside every non-static method
of a class. It points to the CURRENT OBJECT that called the method.

Why do we need 'this'?
-----------------------
When the parameter name and the property name are THE SAME,
the compiler gets confused. 'this' helps to distinguish between them.

Without 'this' (Problem):
--------------------------
  car(string name, string color) {
    name = name;     // ✗ Assigns parameter to itself! Property not set.
    color = color;   // ✗ Same problem.
  }

With 'this' (Solution):
-------------------------
  car(string name, string color) {
    this->name = name;   // ✓ this->name = property, name = parameter
    this->color = color; // ✓ this->color = property, color = parameter
  }

How 'this' works:
-----------------
  - 'this' is a pointer, so we use -> (arrow operator) to access members.
  - this->name  means "the name property of the current object"
  - name        means "the local parameter"

Example:
--------
  car c1("Maruti 800", "White");
  // Inside the constructor, 'this' points to c1
  // this->name = "Maruti 800"  → c1's name is set
  // this->color = "White"      → c1's color is set

  car c2("Honda City", "Black");
  // Inside the constructor, 'this' points to c2
  // this->name = "Honda City"  → c2's name is set


Key Points:
-----------
1. 'this' is a pointer to the current object → type is ClassName*
2. 'this' is available in all non-static member functions.
3. 'this' is passed implicitly by the compiler — you don't pass it manually.
4. Use this-> when parameter names conflict with property names.
5. *this gives the actual object (dereferencing the pointer).

*/