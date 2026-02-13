// WAP where user can keep entering numbers till they enter a muntiple of 10.
#include <iostream>
using namespace std;

int main()
{
  int n; // Variable to store the user input number

  do
  {
    cout << "Enter a Number: "; // Prompt the user to enter a number
    cin >> n;                   // Read the user input and store it in variable n
    if (n % 10 == 0)            // Check if the entered number is a multiple of 10
    {
      break; // If n is a multiple of 10, break the loop
    }
    cout << "You entered: " << n << endl; // Print the entered number

  } while (true); // The loop will continue indefinitely until a multiple of 10 is entered
  return 0;
}