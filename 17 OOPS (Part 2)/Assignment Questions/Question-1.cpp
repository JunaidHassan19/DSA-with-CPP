#include <iostream>
using namespace std;
/*
Question 1: Create a class to store Complex numbers. Using operator overloading, create the logic to subtract one complex number from another.

Note: In Complex numbers, the real part of 1st gets subtracted from the real part of 2nd number. Same goes for the imaginary part.

*/

class Complex
{
public:
  int real;
  int img;

  Complex(int r = 0, int i = 0)
  {
    real = r;
    img = i;
  }

  Complex operator-(const Complex &obj)
  {
    return Complex(real - obj.real, img - obj.img);
  }

  void display()
  {
    cout << real << " + " << img << "i" << endl;
  }
};

int main()
{
  Complex c1(5, 3);
  Complex c2(2, 1);

  Complex result = c1 - c2; // Using operator overloading to subtract two complex numbers

  cout << "Result of subtraction: ";
  result.display(); // Displaying the result

  return 0;
}