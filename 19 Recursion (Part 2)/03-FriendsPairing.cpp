#include <iostream>
using namespace std;

// Friends Pairing Problem
int friendsPair(int n)
{
  if (n == 1 || n == 2)
  {
    return n;
  }
  // method 1 using single and pair
  return friendsPair(n - 1) + (n - 1) * friendsPair(n - 2);

  // method 2 using single and pair
  // single
  int single = friendsPair(n - 1); // Recursive Case

  // Pair
  int pair = friendsPair(n - 1) * friendsPair(n - 2); // Recursive Case

  return single + pair; // Total Ways
}

int main()
{
  cout << friendsPair(4) << endl;
  return 0;
}

/*
Logic:
1. We have n friends and we need to find the number of ways to pair them up or leave them single.
2. We can use recursion to solve this problem.
3. If we leave the first friend single, then we are left with n - 1 friends. So, the number of ways to pair them up in this case is friendsPair(n - 1).
4. If we pair the first friend with any of the remaining n - 1 friends, then we are left with n - 2 friends. So, the number of ways to pair them up in this case is (n - 1) * friendsPair(n - 2).
5. Therefore, the total number of ways to pair up the friends is friendsPair(n - 1) + (n - 1) * friendsPair(n - 2).

*/