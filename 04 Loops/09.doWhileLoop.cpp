#include <iostream>
using namespace std;

int main()
{
  /*
  int i = 1;
  do
  {
    cout << i << " ";
    i++;
  } while (i <= 5);
  */

  int val = 1; // This value is less than 5, so the do-while loop will execute at least once, while the while loop will not execute at all. The output will be:
  do
  {
    cout << "This is do-while";
  } while (val > 5); // Output: This is do-while

  while (val > 5) // Output: (No output, as the condition is false from the beginning)
  {
    cout << "This is while Loop";
  }

  /*
  output
  This is do-while, do-while loop runs once but no output from the while loop because the condition is false from the beginning.
  */
  return 0;
}