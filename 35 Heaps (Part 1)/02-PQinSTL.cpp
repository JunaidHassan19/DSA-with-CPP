#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main()
{
  // MAX HEAP by default, it prints elements in descending order
  priority_queue<int> pq;

  pq.push(5);
  pq.push(10);
  pq.push(15);
  pq.push(6);
  pq.push(25);
  pq.push(4);

  while (!pq.empty())
  {
    cout << "Top : " << pq.top() << endl;
    pq.pop();
  }

  cout << endl;

  // MIN HEAP by specifying greater<int> as the third template parameter, it prints elements in ascending order
  priority_queue<int, vector<int>, greater<int>> pq2;

  pq2.push(5);
  pq2.push(10);
  pq2.push(15);
  pq2.push(6);
  pq2.push(25);
  pq2.push(4);

  while (!pq2.empty())
  {
    cout << "Top : " << pq2.top() << endl;
    pq2.pop();
  }

  cout << endl;

  // MAX HEAP for strings, it prints elements in descending order
  priority_queue<string> pq3;
  pq3.push("Apple");
  pq3.push("Banana");
  pq3.push("Cherry");
  pq3.push("Date");
  pq3.push("Elderberry");
  while (!pq3.empty())
  {
    cout << "Top : " << pq3.top() << endl;
    pq3.pop();
  }
  cout << endl;

  //  MIN HEAP for strings, it prints elements in ascending order
  priority_queue<string, vector<string>, greater<string>> pq4;
  pq4.push("Apple");
  pq4.push("Banana");
  pq4.push("Cherry");
  pq4.push("Date");
  pq4.push("Elderberry");
  while (!pq4.empty())
  {
    cout << "Top : " << pq4.top() << endl;
    pq4.pop();
  }

  return 0;
}