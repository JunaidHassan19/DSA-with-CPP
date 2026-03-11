#include <iostream>
#include <string>
using namespace std;

class student
{
public:
  string name;
  float cgpa;

  void getPercentage()
  {
    cout << (cgpa * 10) << " % " << endl;
  }
};

int main()
{
  student s1;
  s1.name = "Junni";
  s1.cgpa = 9.0;
  cout << s1.name << endl;
  cout << s1.cgpa << endl;
  s1.getPercentage();
  return 0;
}

/*
Access Modifiers in C++
========================
Access modifiers control the visibility/accessibility of class members
(properties and methods). There are 3 access modifiers:


1. public
---------
   - Members are accessible from ANYWHERE (inside class, outside class, derived class).
   - Example:
       class Car {
       public:
         string brand;   // accessible everywhere
       };

       Car c;
       c.brand = "BMW";  // ✓ Works


2. private
----------
   - Members are accessible ONLY inside the class.
   - Cannot be accessed from outside the class or from derived classes.
   - This is the DEFAULT access modifier in a class.
   - Example:
       class Car {
       private:
         int price;      // only accessible inside this class
       public:
         void setPrice(int p) { price = p; }   // ✓ can access price here
       };

       Car c;
       c.price = 5000;  // ✗ ERROR: price is private
       c.setPrice(5000); // ✓ Works (using public method)


3. protected
------------
   - Members are accessible inside the class AND in derived (child) classes.
   - Cannot be accessed from outside the class directly.
   - Example:
       class Vehicle {
       protected:
         int speed;      // accessible in child classes
       };

       class Car : public Vehicle {
       public:
         void setSpeed(int s) { speed = s; }  // ✓ Works (child class)
       };

       Vehicle v;
       v.speed = 100;   // ✗ ERROR: speed is protected


Summary Table:
--------------
  Modifier   | Inside Class | Derived Class | Outside Class
  -----------|--------------|---------------|---------------
  public     |     ✓        |      ✓        |      ✓
  private    |     ✓        |      ✗        |      ✗
  protected  |     ✓        |      ✓        |      ✗

Key Points:
-----------
- In a 'class', default access modifier is PRIVATE.
- In a 'struct', default access modifier is PUBLIC.
- Use private to hide data (Encapsulation).
- Use public for methods that interact with private data (getters/setters).
*/