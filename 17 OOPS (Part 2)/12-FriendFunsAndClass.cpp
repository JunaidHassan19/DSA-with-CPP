#include <iostream>
using namespace std;

class A
{
  string secret = "Secret data";
  friend class B;                   // Beccomes a friend class of A
  friend void revealSecret(A &obj); // Beccomes a friend function of A
};

// Beccomes a friend class of A
class B
{
public:
  void showSecret(A &obj)
  {
    cout << obj.secret << endl;
  }
};

// Beccomes a friend function of A
void revealSecret(A &obj)
{
  cout << obj.secret << endl;
}

int main()
{
  A a1;
  B b1;

  b1.showSecret(a1); // Accessing private member 'secret' of class A through friend class B
  revealSecret(a1);  // Accessing private member 'secret' of class A through friend function revealSecret
  return 0;
}

/*
Logic:
1. The class A has a private member variable 'secret' which holds a string value "Secret data".
2. The class B is declared as a friend class of A, which means that B can access the private members of A.
3. The function 'revealSecret' is declared as a friend function of A, which means that it can also access the private members of A.
4. In the main function, an object 'a1' of class A and an object 'b1' of class B are created.
5. The member function 'showSecret' of class B is called with 'a1' as an argument, which allows it to access and print the private member 'secret' of class A.
6. The friend function 'revealSecret' is called with 'a1' as an argument, which also allows it to access and print the private member 'secret' of class A.
7. The output will show the value of 'secret' ("Secret data") printed twice, once through the friend class B and once through the friend function revealSecret.

*/