#include <iostream>
using namespace std;

int main()
{
  int i = 1;      // Initialize i to 1
  while (i <= 10) // Loop will run until i is less than or equal to 10
  {
    if (i == 5) // If i is equal to 5, break the loop
    {
      break; // Break statement will exit the loop immediately when i is 5
    }
    cout << i << " "; // Print the current value of i followed by a space
    i++;              // Increment i by 1 in each iteration
  }
  cout << "Loop Break" << endl; // Print "Loop Break" after the loop is exited
  return 0;
}