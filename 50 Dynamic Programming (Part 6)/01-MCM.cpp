#include <iostream>
#include <vector>
using namespace std;

// Matrix Chain Multiplication (MCM) problem using recursion
int mcm(vector<int> arr, int i, int j)
{
  // Base case: If there is only one matrix, no multiplication is needed
  if (i == j)
  {
    return 0;
  }

  // Initialize the answer to a large value
  int ans = INT_MAX;

  // Try all possible splits of the matrix chain
  for (int k = i; k < j; k++)
  {
    // Calculate the cost of multiplying the left and right subchains
    int cost1 = mcm(arr, i, k);

    // Calculate the cost of multiplying the right subchain
    int cost2 = mcm(arr, k + 1, j);

    // Calculate the cost of multiplying the two resulting matrices
    int currCost = cost1 + cost2 + (arr[i - 1] * arr[k] * arr[j]);
    // Update the answer if the current cost is less than the previously recorded minimum cost
    ans = min(ans, currCost);
  }

  return ans;
}

int main()
{
  vector<int> arr = {1, 2, 3, 4, 3};
  int n = arr.size();

  cout << mcm(arr, 1, n - 1) << endl;
  return 0;
}