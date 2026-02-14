#include <iostream>
using namespace std;

// Question 1: WAP to fine the Factorial of a Number by the user
/*
int main()
{
  int n;
  cout << "Enter a Number: ";
  cin >> n;
  long long sol = 1;

  // int sol = 1;
  // for (int i = n; i > 0; i--)
  // {
  //   sol *= i;
  // }
  // cout << n << " Factorial " << sol << endl;
  // return 0;

  // for (int i = n; i > 0; i--)
  // {
  //   sol *= i;
  // }
  // cout << sol;
  // return 0;

  // using while loop
  // while (n > 0)
  // {
  //   sol *= n;
  //   n--;
  // }
  // cout << sol;

  // while (n > 0)
  // {
  //   sol *= n;
  //   n--;
  // }
  // cout << sol;

  for (int i = n; i > 0; i--)
  {
    sol *= i;
  }
  cout << sol;
  return 0;
}
*/

// Question 2: WAP to print the Multiplication table of a number, entered by the user
/*
int main()
{
  int n;
  cout << "Enter a number: ";
  cin >> n;
  long mul = 1;

  // for (int i = 1; i <= 10; i++)
  // {
  //   mul = n * i;
  //   cout << n << " X " << i << " =" << mul << endl;
  // }
  // return 0;

  // for (int i = 1; i <= 10; i++)
  // {
  //   mul = n * i;
  //   cout << n << " X " << i << " = " << mul << endl;
  // }
  // return 0;

  // int i = 1;
  // while (i <= 10)
  // {
  //   mul = n * i;
  //   i <= 10;
  //   cout << mul << endl;
  //   i++;
  // }

  int i = 1;
  while (i <= 10)
  {
    mul = n * i;
    cout << mul << endl;
    i++;
  }

  return 0;
}
*/

// Question 3: WAP to input a number and check whether the number is an Armstrong number or not.An Armstrong number is a number that is equal to the sum of cubes of its digits
/*
int main()
{
  int n;
  cout << "Enter a 3 Digit number: ";
  cin >> n;
  int num = n;
  int cubeSum = 0;

  // while (n > 0)
  // {
  //   int lastDig = n % 10;
  //   cubeSum += lastDig * lastDig * lastDig;
  //   n /= 10;
  // }
  // if (cubeSum == num)
  // {
  //   cout << "IS ARMSTRONG" << endl;
  // }
  // else
  // {
  //   cout << "IS NOT ARMSTRONG" << endl;
  // }

  // while (num > 0)
  // {
  //   int lastDig = num % 10;
  //   cubeSum += lastDig * lastDig * lastDig;
  //   num /= 10;
  // }
  // if (cubeSum == n)
  // {
  //   cout << "YES" << endl;
  // }
  // else
  // {
  //   cout << "NOT";
  // }

  while (num > 0)
  {
    int lastDig = num % 10;
    cubeSum += lastDig * lastDig * lastDig;
    num /= 10;
  }
  if (cubeSum == n)
  {
    cout << "YES" << endl;
  }
  else
  {
    cout << "NOT";
  }

  return 0;
}
*/

// Question 4: For a Positive N, WAP that prints all the prime numbers from 2 to N.
/*
int main()
{
  // int n;
  // cout << "Enter a number: ";
  // cin >> n;

  // for (int i = 2; i <= n; i++)
  // {
  //   int curr = i;
  //   bool isPrime = true;

  //   for (int j = 2; j * j <= i; j++)
  //   {
  //     if (curr % 2 == 0)
  //     {
  //       isPrime = false;
  //     }
  //   }
  //   if (isPrime)
  //   {
  //     cout << curr << " ";
  //   }
  // }
  // cout << endl;

  int n;
  cout << "Enter a number: ";
  cin >> n;

  for (int i = 2; i <= n; i++)
  {
    int curr = i;
    bool isPrime = true;

    for (int j = 2; j * j <= i; j++)
    {
      if (curr % j == 0)
      {
        isPrime = false;
        break;
      }
    }
    if (isPrime)
    {
      cout << curr << " ";
    }
  }
  return 0;
}
*/

// Question 5: For a positive N, WAP that prints the first N Fibonacci numbers.(Assume N >= 2)Fibonacci series: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...This is a series where each number is a sum of previous 2 numbers in the series.Eg: 1 = 0+1, 2 = 1+1, 3 = 1+2, 5 = 2+3, 8 = 3+5 & so on
/*
int main()
{
  // int n;
  // cout << "Enter the number: ";
  // cin >> n;
  // int p1, p2;
  // p1 = 0;
  // p2 = 1;
  // for (int i = 2; i <= n; i++)
  // {
  //   int curr = p1 + p2;
  //   p1 = p2;
  //   p2 = curr;
  // }
  // cout << p2;

  int n;
  cout << "Enter a number: ";
  cin >> n;

  int p1, p2;
  p1 = 0;
  p2 = 1;

  for (int i = 2; i <= n; i++)
  {
    int curr = p1 + p2;
    p1 = p2;
    p2 = curr;
  }
  cout << p2;

  return 0;
}
  */
