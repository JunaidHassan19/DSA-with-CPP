#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Minimum Absolute Difference  of Pairs
int main()
{
  vector<int> A = {4, 1, 8};
  vector<int> B = {2, 6, 3};

  sort(A.begin(), A.end()); // Sort A in ascending order
  sort(B.begin(), B.end()); // Sort B in ascending order

  int absDiff = 0;

  for (int i = 0; i < A.size(); i++)
  {
    absDiff += abs(A[i] - B[i]);
  }

  cout << "Minimum absolute difference = " << absDiff << endl;
  return 0;
}