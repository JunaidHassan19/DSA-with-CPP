#include <iostream>
#include <string>
using namespace std;

// Operator Overloading: Same operator can be used for different types of operations
class Complex
{
  int real;
  int img;

public:
  // Constructor to initialize the complex number
  Complex(int r, int i)
  {
    img = i;
    real = r;
  }

  // Function to display the complex number
  void showNum()
  {
    cout << real << " + " << img << "i" << endl;
  }

  // Overloading the + operator to add two complex numbers
  void operator+(Complex &c2)
  {
    int resReal = this->real + c2.real; // 'this' pointer is used to refer to the current object
    int resImg = this->img + c2.img;
    Complex c3(resReal, resImg); // Create a new Complex object to store the result
    cout << "Result = ";         // Print the result
    c3.showNum();                // Display the result using the showNum function
  }
};

int main()
{
  Complex c1(2, 5);
  Complex c2(4, 9);

  c1.showNum();
  c2.showNum();

  c1 + c2; // This will call the overloaded + operator function to add c1 and c2
  return 0;
}

/*
Compile time polymorphism: Operator Overloading
Operator Overloading: Same operator can be used for different types of operations
- The compiler determines which operator function to call based on the operands.
- This allows us to use operators in a way that is intuitive for user-defined types, improving code readability and usability.
*/