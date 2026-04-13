#include <iostream>
#include <stack>
#include <queue>
using namespace std;

// Interleave 2 Queues
void interleave(queue<int> &org)
{
  int n = org.size(); // Get the size of the original queue
  queue<int> first;   // Create a queue to hold the first half of the elements

  for (int i = 0; i < n / 2; i++) // Move the first half of the elements to the 'first' queue
  {
    first.push(org.front());
    org.pop();
  }

  while (!first.empty()) // Interleave the elements from the 'first' queue and the original queue back into the original queue
  {
    org.push(first.front());
    first.pop();

    org.push(org.front());
    org.pop();
  }
}

int main()
{
  queue<int> org;

  for (int i = 1; i <= 10; i++)
  {
    org.push(i);
  }

  interleave(org);
  // for (int i = 1; i <= 10; i++)
  // {
  //   cout << org.front() << " ";
  //   org.pop();
  // }
  while (!org.empty())
  {
    cout << org.front() << " ";
    org.pop();
  }
  return 0;
}