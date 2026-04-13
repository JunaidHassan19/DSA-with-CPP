#include <iostream>
#include <string>
#include <queue>
using namespace std;

// First Non-Repeating letter in a Stream
void firstNonRepeat(string str)
{
  queue<char> Q;
  int freq[26] = {0};

  for (int i = 0; i < str.size(); i++)
  {
    char ch = str[i];
    Q.push(ch);
    freq[ch - 'a']++;

    while (!Q.empty() && freq[Q.front() - 'a'] > 1)
    {
      Q.pop();
    }

    if (Q.empty())
    {
      cout << "-1" << endl;
    }
    else
    {
      cout << Q.front() << endl;
    }
  }
}

int main()
{
  string str = "aabccxb";

  firstNonRepeat(str);

  return 0;
}

/*
Step 1: Create a queue to store characters and an array to keep track of their frequencies.
Step 2: Iterate through each character in the input string:
  a. Push the current character into the queue.
  b. Increment the frequency of the current character in the frequency array.
  c. While the queue is not empty and the frequency of the front character is greater than 1, pop characters from the queue.
  d. If the queue is empty, print "-1". Otherwise, print the front character of the queue, which is the first non-repeating character at that point in the stream.
Time Complexity: O(n), where n is the length of the input string. Each character is processed once, and each character is pushed and popped from the queue at most once.
Space Complexity: O(1) for the frequency array (since it has a fixed size of 26 for lowercase letters) and O(k) for the queue, where k is the number of unique characters in the stream at any point in time.
*/