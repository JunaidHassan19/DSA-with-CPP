#include <iostream>
#include <stack>
#include <vector>
using namespace std;

// Next Greater Element
void nextGreater(vector<int> arr, vector<int> ans)
{
  stack<int> s;
  int idx = arr.size() - 1; // last index
  ans[idx] = -1;            // last element has no greater element to its right
  s.push(arr[idx]);         // push last element to stack

  for (idx = idx - 1; idx >= 0; idx--) // traverse from second last element to first element
  {
    int curr = arr[idx];                  // current element
    while (!s.empty() && curr >= s.top()) // pop elements from stack until we find a greater element or stack becomes empty
    {
      s.pop(); // pop elements that are smaller than or equal to current element
    }

    if (s.empty()) // if stack is empty, then there is no greater element to the right of current element
    {
      ans[idx] = -1; // set answer for current element to -1
    }
    else // if stack is not empty, then the top element of stack is the next greater element for current element
    {
      ans[idx] = s.top();
    }
    s.push(curr);
  }

  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i] << " ";
  }
  cout << endl;
}

int main()
{
  vector<int> arr = {6, 8, 0, 1, 3};
  vector<int> ans = {0, 0, 0, 0, 0};

  nextGreater(arr, ans);
  return 0;
}

/*
time complexity: O(n) - each element is pushed and popped at most once
space complexity: O(n) - in worst case, all elements are in stack
*/