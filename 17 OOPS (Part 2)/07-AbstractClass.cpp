/*
ABSTRACT CLASS (C++)

An abstract class is a class that cannot be instantiated (you cannot create its object directly).
It is mainly used to define a common interface (contract) for derived classes.

How to make a class abstract:
- Add at least one pure virtual function.
- Pure virtual function syntax:
	virtual return_type functionName(parameters) = 0;

Key Points:
1. Object of abstract class cannot be created.
2. Abstract class can have:
	 - normal member functions
	 - constructors
	 - data members
	 - pure virtual functions
3. If a derived class does not override all pure virtual functions,
	 then that derived class also becomes abstract.
4. We usually use base class pointers/references to achieve runtime polymorphism.

Why use abstract class?
- To enforce a common structure in child classes.
- To achieve abstraction (show what to do, hide how it is done).
- To write flexible and extensible code.

Example:
*/

#include <iostream>
using namespace std;

class Shape
{
public:
	// pure virtual function -> makes class abstract
	virtual double area() = 0;

	// normal function is also allowed
	void info()
	{
		cout << "This is a shape" << endl;
	}

	virtual ~Shape() {} // good practice for base classes
};

class Circle : public Shape
{
	double r;

public:
	Circle(double radius) : r(radius) {}

	double area() override
	{
		return 3.14159 * r * r;
	}
};

class Rectangle : public Shape
{
	double l, b;

public:
	Rectangle(double length, double breadth) : l(length), b(breadth) {}

	double area() override
	{
		return l * b;
	}
};

int main()
{
	// Shape s;  // Error: cannot create object of abstract class

	Shape *s1 = new Circle(5);
	Shape *s2 = new Rectangle(4, 6);

	cout << "Circle area: " << s1->area() << endl;
	cout << "Rectangle area: " << s2->area() << endl;

	delete s1;
	delete s2;

	return 0;
}

/*
Output:
Circle area: 78.5397
Rectangle area: 24

Difference: Abstract Class vs Interface-like design in C++
- C++ does not have a separate "interface" keyword like Java.
- A class with only pure virtual functions is commonly used as an interface.
- Abstract class can still contain implemented methods and data.
*/