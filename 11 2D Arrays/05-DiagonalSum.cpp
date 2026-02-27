/*
 * ===========================================
 * DIAGONAL SUM OF A SQUARE MATRIX
 * ===========================================
 *
 * In a square matrix (n x n), there are two diagonals:
 *
 * 1. PRIMARY DIAGONAL: Elements where row index == column index (i == j)
 *    Example for 3x3 matrix:
 *    [1]  2   3
 *     4  [5]  6
 *     7   8  [9]
 *    Primary diagonal elements: 1, 5, 9
 *
 * 2. SECONDARY DIAGONAL: Elements where column index = n - row index - 1 (j == n - i - 1)
 *    Example for 3x3 matrix:
 *     1   2  [3]
 *     4  [5]  6
 *    [7]  8   9
 *    Secondary diagonal elements: 3, 5, 7
 *
 * NOTE: In odd-sized matrices, the CENTER element belongs to BOTH diagonals
 *       So we must avoid counting it twice!
 */

#include <iostream>
using namespace std;

// ============================================
// METHOD 1: BRUTE FORCE APPROACH - O(n²)
// ============================================
// This method uses nested loops to check every element
// Time Complexity: O(n²) - Not efficient

int diagolanSumBruteForce(int mat[][3], int n)
{
  int sum = 0;

  // Traverse through each element of the matrix
  for (int i = 0; i < n; i++) // Loop through rows
  {
    for (int j = 0; j < n; j++) // Loop through columns
    {
      // Check if element is on PRIMARY diagonal
      // Primary diagonal: row index equals column index
      if (i == j)
      {
        sum += mat[i][j]; // Add to sum
      }
      // Check if element is on SECONDARY diagonal (but not already counted)
      // Secondary diagonal: j = n - i - 1
      // Using 'else if' ensures center element isn't counted twice
      else if (j == n - i - 1)
      {
        sum += mat[i][j]; // Add to sum
      }
    }
  }
  cout << "Sum (Brute Force) = " << sum;
  return sum;
}

// ============================================
// METHOD 2: OPTIMIZED APPROACH - O(n)
// ============================================
// This method uses a single loop - much more efficient!
// Time Complexity: O(n) - Optimal solution

int diagolanSum(int mat[][3], int n)
{
  int sum = 0;

  // Single loop - we know exactly where diagonal elements are
  for (int i = 0; i < n; i++)
  {
    // Add PRIMARY diagonal element
    // mat[i][i] gives elements at positions (0,0), (1,1), (2,2), etc.
    sum += mat[i][i];

    // Add SECONDARY diagonal element
    // mat[i][n-i-1] gives elements at positions (0,n-1), (1,n-2), etc.
    //
    // IMPORTANT: Check if it's NOT the center element to avoid double counting
    // Center element exists when i == n - i - 1 (only in odd-sized matrices)
    // Example: In 3x3 matrix, element at (1,1) is on both diagonals
    if (i != n - i - 1)
    {
      sum += mat[i][n - i - 1];
    }
  }
  cout << " Sum (Optimized) = " << sum;
  return sum;
}

int main()
{
  // 4x4 Matrix (Even-sized - no overlapping center element)
  /*
   * Matrix layout:
   * [1]   2    3   [4]    <- Primary: 1, Secondary: 4
   *  5   [6]  [7]   8     <- Primary: 6, Secondary: 7
   *  9   [10] [11]  12    <- Primary: 11, Secondary: 10
   * [13]  14   15  [16]   <- Primary: 16, Secondary: 13
   *
   * Primary diagonal sum: 1 + 6 + 11 + 16 = 34
   * Secondary diagonal sum: 4 + 7 + 10 + 13 = 34
   * Total = 68
   */
  int matrix[4][4] = {{1, 2, 3, 4},
                      {5, 6, 7, 8},
                      {9, 10, 11, 12},
                      {13, 14, 15, 16}};

  // 3x3 Matrix (Odd-sized - has overlapping center element at (1,1))
  /*
   * Matrix layout:
   * [1]  2  [3]    <- Primary: 1, Secondary: 3
   *  4  [5]  6     <- Primary: 5, Secondary: 5 (SAME - center element!)
   * [7]  8  [9]    <- Primary: 9, Secondary: 7
   *
   * Primary diagonal sum: 1 + 5 + 9 = 15
   * Secondary diagonal sum: 3 + 5 + 7 = 15
   * Total (without double counting 5) = 15 + 15 - 5 = 25
   */
  int matrix2[3][3] = {{1, 2, 3},
                       {4, 5, 6},
                       {7, 8, 9}};

  // Call the optimized function
  diagolanSum(matrix2, 3); // Output: Sum = 25

  return 0;
}
