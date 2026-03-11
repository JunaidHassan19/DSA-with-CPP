#include <iostream>
#include <string>
using namespace std;

// Class: A blueprint for creating objects (a particular data structure), containing properties and methods.
class Student
{
  // Properties (also called attributes or member variables)
  string name;
  float cgpa;

  // Methods (also called member functions)
  void getPercentage()
  {
    cout << (cgpa * 10) << "%" << endl;
  }
};

// Object: An instance of a class. It contains real values instead of variables.
class user
{
  // Properties
  int id;
  string userName;
  string bio;
  string password;
  // Methods
  void deactivate()
  {
    cout << "Deleting Account" << endl;
  };

  void editBoi(string newBoi)
  {
    bio = newBoi;
  }
};

int main()
{
  // Creating an object of the Student class
  Student s1;
  cout << sizeof(s1) << endl;

  user u1;
  cout << sizeof(u1) << endl;

  return 0;
}

/*
Class & Object
=================
- Class: A blueprint for creating objects (a particular data structure), containing properties and methods.
- Object: An instance of a class. It contains real values instead of variables.
*/