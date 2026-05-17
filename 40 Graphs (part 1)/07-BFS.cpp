#include <iostream>
#include <vector>
#include <list>
#include <queue>
using namespace std;

// Breadth First Search (BFS) implementation for a graph represented as an adjacency list
class Graph
{
  int V;
  list<int> *l;

public:
  Graph(int V)
  {
    this->V = V;
    l = new list<int>[V];
  }

  void addEdge(int u, int v)
  {
    l[u].push_back(v);
    l[v].push_back(u);
  }

  // Function to perform BFS traversal of the graph - tc=O(V+E) and sc=O(V)
  void bfs()
  {
    queue<int> q;
    vector<bool> vis(V, false);
    q.push(0);
    vis[0] = true;

    // Continue the BFS traversal until the queue is empty
    while (q.size() > 0)
    {
      int u = q.front(); // Get the front element of the queue (current vertex)
      q.pop();           // Remove the front element from the queue
      cout << u << " ";  // Print the current vertex

      list<int> neighbors = l[u]; // Get the neighbors of vertex u
      // Iterate through the neighbors of vertex u
      for (int v : neighbors)
      {
        // If the neighbor vertex v has not been visited, mark it as visited and add it to the queue
        if (!vis[v])
        {
          vis[v] = true; // Mark vertex v as visited
          q.push(v);     // Add vertex v to the queue for further exploration
        }
      }
    }
  }
};

int main()
{
  Graph graph(7);

  graph.addEdge(0, 1);
  graph.addEdge(0, 2);
  graph.addEdge(1, 3);
  graph.addEdge(2, 4);
  graph.addEdge(3, 4);
  graph.addEdge(3, 5);
  graph.addEdge(4, 5);
  graph.addEdge(5, 6);

  graph.bfs();
  return 0;
}