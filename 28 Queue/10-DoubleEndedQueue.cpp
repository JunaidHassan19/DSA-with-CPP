#include <iostream>
#include <deque>
using namespace std;

// Double Ended Queue (Deque)
int main()
{
  deque<int> deq; // Create a double-ended queue (deque) of integers

  deq.push_front(2); // [2]
  deq.push_front(1); // [1, 2]

  deq.push_back(3); // [1, 2, 3]
  deq.push_back(4); // [1, 2, 3, 4]

  deq.pop_front(); // [2, 3, 4]
  deq.pop_back();  // [2, 3]

  cout << deq.front() << " "; // Output the front element of the deque (2)
  cout << deq.back();         // Output the back element of the deque (3)

  return 0;
}