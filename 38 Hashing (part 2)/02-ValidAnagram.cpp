#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
#include <unordered_map>
using namespace std;

// Valid Anagram
bool validAnagram(string s, string t)
{
  // if the strings have different lengths, they cannot be anagrams
  if (s.size() != t.size())
  {
    return false;
  }

  unordered_map<char, int> freq; // character, frequency
  // count the frequency of each character in the first string
  for (int i = 0; i < s.size(); i++)
  {
    if (freq.count(s[i]))
    {
      freq[s[i]]++;
    }
    else
    {
      freq[s[i]] = 1;
    }
  }

  // check the frequency of each character in the second string
  for (int i = 0; i < t.size(); i++)
  {
    if (freq.count(t[i]))
    {
      freq[t[i]]--;
      if (freq[t[i]] == 0)
      {
        freq.erase(t[i]);
      }
    }
    else
    {
      return false;
    }
  }

  return freq.size() == 0;
}

int main()
{
  string s = "race";
  string t = "care";

  cout << validAnagram(s, t);

  return 0;
}