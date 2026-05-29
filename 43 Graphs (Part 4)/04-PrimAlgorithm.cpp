#include <iostream>
#include <vector>
#include <list>
#include <queue>
#include <stack>
using namespace std;

// Prim's Algorithm for Minimum Spanning Tree in a Weighted Graph - tc: O(E log V) - sc: O(V)
class Graph
{
  int V;
  list<pair<int, int>> *l;
  bool isUndir;

public:
  Graph(int V, bool isUndir = true)
  {
    this->V = V;
    l = new list<pair<int, int>>[V];
    this->isUndir = isUndir;
  }

  void addEdge(int u, int v, int wt)
  {
    l[u].push_back(make_pair(v, wt));
    if (isUndir)
    {
      l[v].push_back(make_pair(u, wt));
    }
  }

  // tc: O(E log V) - sc: O(V)
  void primsAlgo(int src)
  {
    // Min-heap to store (weight, vertex) pairs for efficient retrieval of the next edge with the smallest weight
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    vector<bool> mst(V, false); // To keep track of vertices included in the MST

    pq.push(make_pair(0, src)); // Start with the source vertex and weight 0
    int ans = 0;

    // Process the priority queue until it's empty
    while (pq.size() > 0)
    {
      int u = pq.top().second;
      int wt = pq.top().first;
      pq.pop();

      // If the vertex u is not already included in the MST, include it and add its weight to the total cost
      if (!mst[u])
      {
        mst[u] = true;
        ans += wt;
        list<pair<int, int>> neighbors = l[u];
        // For each neighbor of vertex u, if it's not already included in the MST, add it to the priority queue with its weight
        for (pair<int, int> n : neighbors)
        {
          int v = n.first;
          int currWt = n.second;
          pq.push(make_pair(currWt, v));
        }
      }
    }
    cout << "Final cost of MST : " << ans << endl;
  }
};

int main()
{
  Graph graph(4);

  graph.addEdge(0, 1, 10);
  graph.addEdge(0, 2, 15);
  graph.addEdge(0, 3, 30);

  graph.addEdge(1, 3, 40);

  graph.addEdge(2, 3, 50);

  graph.primsAlgo(0);

  return 0;
}