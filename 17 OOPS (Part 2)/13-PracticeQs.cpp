#include <iostream>
using namespace std;

// Predict the output.
class A
{
public:
  A()
  {
    cout << "A constructor.." << endl;
  }
  ~A()
  {
    cout << "A Destructor.." << endl;
  }
};

class B : public A
{
public:
  B()
  {
    cout << "B Constructor.." << endl;
  }
  ~B()
  {
    cout << "B Destructor.." << endl;
  }
};

int main()
{
  B obj;

  return 0;
}
/*
Output:
A constructor..
B Constructor..
B Destructor..
A Destructor..

Logic:
1. When the program starts, the main function is executed.
2. An object 'obj' of class B is created.
3. The constructor of class A is called first because class B inherits from class A. This is why "A constructor.." is printed first.
4. After the constructor of class A finishes executing, the constructor of class B is called, which is why "B Constructor.." is printed next.
5. When the main function ends, the destructor of class B is called first, which is why "B Destructor.." is printed before the destructor of class A.
6. Finally, the destructor of class A is called, which is why "A Destructor.." is printed last.
*/