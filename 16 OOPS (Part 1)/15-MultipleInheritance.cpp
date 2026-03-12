#include <iostream>
#include <string>
using namespace std;

// Base class
class Teacher
{
public:
  int salary;
  string subject;
};

// Base class
class Student
{
public:
  int rollNo;
  float cgpa;
};

// Derived class inheriting from both Teacher and Student
class TA : public Teacher, public Student
{
public:
  string name;
};

int main()
{
  TA tal;
  tal.name = "junni";
  tal.salary = 50000;
  tal.cgpa = 9.1;
  tal.rollNo = 130;
  tal.subject = "Computer";

  cout << tal.name << endl;
  cout << tal.subject << endl;
  cout << tal.rollNo << endl;
  cout << tal.salary << endl;
  cout << tal.cgpa << endl;
  return 0;
}

/*
Multiple Inheritance in C++
===========================
- Multiple inheritance is a type of inheritance where a derived class (child class) inherits from more than one base class (parent classes).
- In this example, TA inherits from both Teacher and Student classes, so it has access to the members of both classes.
- The TA class can have its own members (like name) in addition to the inherited members (like salary, subject from Teacher and rollNo, cgpa from Student).
- Syntax: class DerivedClass : accessSpecifier BaseClass1, accessSpecifier BaseClass2 { };
- Note: Multiple inheritance can lead to ambiguity if both base classes have members with the same name. In such cases, you need to specify which base class's member you want to access using the scope resolution operator (::).
*/