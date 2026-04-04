#include <iostream>
#include <list>
using namespace std;

// List in STL

// print a list
void printList(list<int> ll)
{
  list<int>::iterator itr; // Iterator to traverse the list
  for (itr = ll.begin(); itr != ll.end(); itr++)
  {
    cout << (*itr) << " -> ";
  }
  cout << "NULL" << endl;
}
int main()
{
  list<int> ll;

  ll.push_front(2); // Insert 2 at the front of the list
  ll.push_front(1); // Insert 1 at the front of the list

  ll.push_back(3); // Insert 3 at the back of the list
  ll.push_back(4); // Insert 4 at the back of the list

  printList(ll);
  cout << "Size = " << ll.size() << endl; // Print the size of the list

  cout << "Head = " << ll.front() << endl; // Print the head of the list
  cout << "Tail = " << ll.back() << endl;  // Print the tail of the list

  ll.pop_front(); // Remove the front element of the list
  printList(ll);
  ll.pop_back(); // Remove the back element of the list
  printList(ll);

  ll.insert(ll.begin(), 0); // Insert 0 at the beginning of the list
  ll.insert(ll.end(), 5);   // Insert 5 at the end of the list
  printList(ll);

  return 0;
}