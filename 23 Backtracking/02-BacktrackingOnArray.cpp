#include <iostream>
#include <vector>
using namespace std;

// Backtracking on Array
void printArr(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void changeArr(int arr[], int n, int i)
{
  if (arr[i] == 5)
  {
    printArr(arr, n);
    return;
  }

  arr[i] = i + 1; // Assign value to current index
  changeArr(arr, n, i + 1);
  arr[i] -= 2; // Backtrack
}

int main()
{
  int arr[5] = {0};
  int n = 5;
  changeArr(arr, n, 0);
  printArr(arr, n);
  return 0;
}

/*
Recursion Tree / Call Flow (for changeArr(arr, 5, 0))
======================================================

Important note:
- In this code, base case is: if (arr[i] == 5)
- This is unsafe when i becomes 5 (out-of-bounds access: arr[5]).
- Intended safe base case should be: if (i == n)

Below tree shows intended flow (using base case i == n):

changeArr(i=0)  arr = [0,0,0,0,0]
  set arr[0]=1
  |
  +-- changeArr(i=1)  arr = [1,0,0,0,0]
    set arr[1]=2
    |
    +-- changeArr(i=2)  arr = [1,2,0,0,0]
      set arr[2]=3
      |
      +-- changeArr(i=3)  arr = [1,2,3,0,0]
        set arr[3]=4
        |
        +-- changeArr(i=4)  arr = [1,2,3,4,0]
          set arr[4]=5
          |
          +-- changeArr(i=5)  BASE CASE
            print: 1 2 3 4 5
            return
          backtrack arr[4]-=2 -> 3
        backtrack arr[3]-=2 -> 2
      backtrack arr[2]-=2 -> 1
    backtrack arr[1]-=2 -> 0
  backtrack arr[0]-=2 -> -1

Final array printed in main:
-1 0 1 2 3

What backtracking is doing here:
1) Go deep and assign values while moving forward.
2) After return, undo part of work (arr[i] -= 2) while unwinding stack.
*/
