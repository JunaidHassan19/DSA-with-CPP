

#include <iostream>
using namespace std;

class Shape
{
public:
	// Function declaration inside class
	// (definition can be written outside the class)
	void draw();
};

int main()
{

	return 0;
}

/*
Abstract class is a class that cannot be instantiated. It is designed to be inherited by other classes. An abstract class typically contains at least one pure virtual function, which is a function that has no implementation in the base class and must be overridden in derived classes.
*/