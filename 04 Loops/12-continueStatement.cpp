#include <iostream>
using namespace std;
int main()
{
  for (int i = 1; i <= 10; i++) // Loop from 1 to 10
  {
    if (i == 3) // If i is equal to 3, skip the rest of the loop body and continue with the next iteration
    {
      continue; // Skip the rest of the loop body when i is 3
    }
    cout << i << " ";
  }
  return 0;
}
/*
output:
1 2 4 5 6 7 8 9 10
*/