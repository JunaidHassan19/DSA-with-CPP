#include <iostream>
#include <vector>
using namespace std;

int main()
{
  // Create a vector and initialize it with some values
  vector<int> vec = {1, 2, 3, 4, 5};
  cout << vec.size() << endl;
  cout << vec.capacity() << endl;

  // Add an element to the vector
  vec.push_back(6);
  cout << vec.size() << endl;
  cout << vec.capacity() << endl;

  // Remove the last element from the vector
  vec.pop_back();
  cout << vec.size() << endl;
  cout << vec.capacity() << endl;
}

/*
to add an element to the vector, we use the push_back() function. This function adds the element to the end of the vector and increases the size of the vector by 1. If the size of the vector exceeds its capacity, the vector will automatically resize itself to accommodate the new element. The capacity of the vector is the amount of memory allocated for the vector, which may be greater than the size of the vector. When the vector resizes itself, it typically doubles its capacity to reduce the number of resizes needed in the future. The pop_back() function removes the last element from the vector and decreases the size of the vector by 1. However, it does not change the capacity of the vector. The capacity remains the same until the vector is resized again, either by adding more elements or by explicitly calling the shrink_to_fit() function to reduce the capacity to match the size of the vector.
*/