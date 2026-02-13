// WAP to show numbers entered by user except multiples of 10.

#include <iostream>
using namespace std;

int main()
{
  int n;
  do
  {
    cout << "Enter a Number: ";
    cin >> n;
    if (n % 10 == 0) // If the entered number is a multiple of 10, skip the rest of the loop body and continue with the next iteration
    {
      continue; // Skip the rest of the loop body when n is a multiple of 10
    }
    cout << "You Entered " << n << endl;
  } while (true); // The loop will continue indefinitely until a multiple of 10 is entered
  return 0;
}