#include <iostream>
#include <vector>
using namespace std;

// Disjoint Set (Union-Find) data structure - tc: O(a(n)) per op, sc: O(n)
class DisjointSet
{
public:
  int n;
  vector<int> par;
  vector<int> rank;

  // constructor
  DisjointSet(int n)
  {
    this->n = n;

    // initialize parent and rank vectors
    for (int i = 0; i < n; i++)
    {
      par.push_back(i);
      rank.push_back(0);
    }
  }

  // find with path compression
  int find(int x)
  {
    // base case: if x is the parent of itself, return x
    if (par[x] == x)
    {
      return x;
    }

    // recursive case: find the parent of x and compress the path
    return par[x] = find(par[x]); // path compression
  }

  // union by rank
  void unionByRank(int a, int b)
  {
    int parA = find(a); // find the parents of a and b
    int parB = find(b); // if they are already in the same set, do nothing

    // if they are in different sets, merge them based on rank
    if (rank[parA] == rank[parB])
    {
      par[parB] = parA;
      rank[parA]++;
    }
    // if parA has higher rank, make parA the parent of parB
    else if (rank[parA] > rank[parB])
    {
      par[parB] = parA;
    }
    // if parB has higher rank, make parB the parent of parA
    else
    {
      par[parA] = parB;
    }
  }
};

int main()
{
  DisjointSet dj(6);

  dj.unionByRank(0, 2);
  cout << dj.find(2) << endl; // should print 0, as 0 is the parent of 2
  dj.unionByRank(1, 3);
  dj.unionByRank(2, 5);
  dj.unionByRank(0, 3);
  cout << dj.find(2) << endl; // should print 0, as 0 is the parent of 2
  dj.unionByRank(0, 4);

  return 0;
}