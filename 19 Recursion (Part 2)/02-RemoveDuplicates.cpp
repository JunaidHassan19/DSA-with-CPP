#include <iostream>
#include <string>
using namespace std;

// Remove Duplicates from a String - With using index
void removeDup(string str, string ans, int i, int map[26])
{
  if (i == str.size()) // Base Case
  {
    cout << "Ans: " << ans << endl;
    return;
  }
  int mapIdx = (int)(str[i] - 'a'); // Map Index

  if (map[mapIdx]) // If the character is already present in the map, then we will not include it in the answer and move to the next character.
  {
    removeDup(str, ans, i + 1, map); // Recursive Case
  }
  else
  {
    map[mapIdx] = true;                       // Mark the character as present in the map.
    removeDup(str, ans + str[i], i + 1, map); // Recursive Case
  }
}

// Remove Duplicates from a String -Without using index
/*
void removeDup(string str, string ans, int map[26])
{
  if (str.size() == 0) // Base Case
  {
    cout << "Ans: " << ans << endl;
    return;
  }
  int n = str.size();
  char ch = str[n - 1];         // Last Character
  int mapIdx = (int)(ch - 'a'); // Map Index

  if (map[mapIdx]) // If the character is already present in the map, then we will not include it in the answer and move to the next character.
  {
    removeDup(str.substr(0, n - 1), ans, map); // Recursive Case
  }
  else
  {
    map[mapIdx] = true;
    removeDup(str.substr(0, n - 1), ch + ans, map); // Recursive Case
  }
}
  */

int main()
{
  string str = "apnacollege";
  string ans = "";
  int map[26] = {false};

  removeDup(str, ans, 0, map);
  return 0;
}

/*
Logic:
1. We have a string and we need to remove the duplicate characters from the string.
2. We can use a map to keep track of the characters that are already present in the answer string.
3. We can use recursion to iterate through the string and check if the character is already present in the map or not.
4. If the character is already present in the map, then we will not include it in the answer and move to the next character.
5. If the character is not present in the map, then we will include it in the answer and mark it as present in the map.
1. We can use an index to keep track of the current character in the string and pass it to the recursive function.
2. We can also use the substr function to get the substring of the string and pass it to the recursive function.

*/