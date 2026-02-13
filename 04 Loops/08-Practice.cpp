#include <iostream>
using namespace std;

// Q. Print the sum of digits of a number using while loop
// n = 10829

// int main()
// {
//   int n = 12345;
//   int sum = 0;

//   while (n > 0)
//   {
//     int lastDig = n % 10;
//     sum = sum + lastDig;
//     n /= 10;
//   }
//   cout << "sum is: " << sum;
//   return 0;
// }

// Q. Print the Sum of odd Digits of a number using while Loop.
// int main()
// {
//   int n = 123456;
//   int sum = 0;

//   while (n > 0)
//   {
//     int lastDig = n % 10;
//     if (lastDig % 2 != 0)
//     {
//       sum += lastDig;
//     }
//     n /= 10;
//   }
//   cout << "sum of add digits: " << sum;
// }

/*
    Qs: Print the digits of a given number in reverse using while loop
       n = 10829
 */

// int main()
// {
//   int n = 987654321;

//   while (n > 0)
//   {
//     int lastDig = n % 10;
//     cout << lastDig;
//     n /= 10;
//   }
//   return 0;
// }

/*
     Qs: Reverse a given number and print the result
  */

// int main()
// {
//    int n = 123456;
//    int res = 0;

//    while (n > 0)
//    {
//       int lastDig = n % 10;
//       res = res * 10 + lastDig;
//       n /= 10;
//    }
//    cout << "Result is: " << res;
//    return 0;
// }

// Qs Check if a number is prime or not

// int main()
// {
//    int n;
//    cout << "Enter the Number: ";
//    cin >> n;

//    bool isPrime = true;
//    for (int i = 2; i < n - 1; i++)
//    {
//       if (n % i == 0)
//       {
//          isPrime = false;
//          break;
//       }
//    }
//    if (isPrime)
//    {
//       cout << n << " IS PRIME " << endl;
//    }
//    else
//    {
//       cout << n << " IS NOT PRIME";
//    }
//    return 0;
// }

int main()
{
   int n;
   cout << "ENTER A NUMBER: ";
   cin >> n;

   bool isPrime = true;

   for (int i = 2; i < n - 1; i++)
   {
      if (n % i == 0)
      {
         isPrime = false;
         break;
      }
   }
   if (isPrime)
   {
      cout << n << " IS PRIME" << endl;
   }
   else
   {
      cout << n << " IS NOT PRIME";
   }
   return 0;
}