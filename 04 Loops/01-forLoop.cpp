#include <iostream>
using namespace std;

// Main function - entry point of the program
int main()
{
  // For loop with loop variable declared inside the loop
  // Loop runs from 1 to 5, incrementing i by 1 each iteration
  for (int i = 1; i <= 5; i++)
  {
    cout << i << " "; // Print current value of i
  }
  cout << endl; // Print newline

  // Loop variable declared outside the loop
  int j;
  // For loop using pre-declared variable j
  // Loop runs from 1 to 5, incrementing j by 1 each iteration
  for (j = 1; j <= 5; j++)
  {
    cout << j << " "; // Print current value of j
  }
  cout << endl; // Print newline

  // Print final value of j (will be 6, as loop condition j <= 5 fails when j becomes 6)
  cout << "Value of j is " << j << endl;

  return 0;
}