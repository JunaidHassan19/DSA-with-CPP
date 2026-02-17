#include <iostream>
using namespace std;

// 01
/*
void sayHello()
{
  cout << "Hello :)";
}

void hello2()
{
  sayHello();
  cout << "I'm hello2";
}

int main()
{
  hello2();
  return 0;
}
*/

// 02
/*
void sayHello();

int main()
{
  sayHello();
  return 0;
}
void sayHello()
{
  cout << "Helo :)";
}
*/

// 03
/*
int sum(int a, int b)
{
  return a + b;
}
int pro(int a, int b)
{
  return a * b;
}
int divide(int a, int b)
{
  return a / b;
}

int main()
{
  cout << sum(4, 2) << endl;
  cout << pro(4, 2) << endl;
  cout << divide(4, 2) << endl;
  return 0;
}
*/

// 04
/*
int pro(int a, int b)
{
  return a * b;
}

int main()
{
  cout << pro(4, 2);
  return 0;
}
*/

// 05
/*
bool isEven(int n)
{
  if (n % 2 == 0)
  {
    return true;
  }
  else
  {
    return false;
  }
}
int main()
{
  int n;
  cout << "Enter a number:";
  cin >> n;

  if (isEven(n))
  {
    cout << n << " is even" << endl;
  }
  else
  {
    cout << n << " is odd";
  }
  return 0;
}
*/

// 06
/*
int factorial(int n)
{
  int fact = 1;
  for (int i = 1; i <= n; i++)
  {
    fact *= i;
  }
  return fact;
}

int main()
{
  int n;
  cout << "Enter a number: ";
  cin >> n;

  cout << factorial(n) << endl;
}
*/

// 07
/*
bool isPrime(int n)
{
  if (n == 1)
  {
    return false;
  }
  for (int i = 2; i * i <= n; i++)
  {
    if (n % i == 0)
    {
      return false;
    }
  }
  return true;
}

int main()
{
  int n;
  cout << "Enter a number: ";
  cin >> n;

  if (isPrime(n))
  {
    cout << n << " Is prime" << endl;
  }
  else
  {
    cout << n << " Is Not Prime";
  }
  return 0;
}
*/

// 08
/*
int factorial(int n)
{
  int fact = 1;
  for (int i = 1; i <= n; i++)
  {
    fact *= i;
  }
  return fact;
}

int binoCoeff(int n, int r)
{
  int val1 = factorial(n);
  int val2 = factorial(r);
  int val3 = factorial(n - r);

  int result = val1 / (val2 * val3);
  return result;
}

int main()
{
  int n;
  cout << binoCoeff(4, 2);
  return 0;
}
*/

// 09