#include <iostream>
#include <vector>
#include <list>
using namespace std;

// Building a graph using an adjacency list representation
class Graph
{
  int V;        // number of vertices
  list<int> *l; // pointer to an array containing adjacency lists

public:
  // Constructor to initialize the graph with V vertices
  Graph(int V)
  {
    this->V = V;
    l = new list<int>[V]; // create an array of lists of size V
  }

  // Function to add an edge between vertices u and v
  void addEdge(int u, int v)
  {
    l[u].push_back(v); // add v to the adjacency list of u
    l[v].push_back(u); // add u to the adjacency list of v (since the graph is undirected)
  }

  // Function to print the adjacency list representation of the graph
  void print()
  {
    // Iterate through each vertex and print its neighbors
    for (int u = 0; u < V; u++)
    {
      // Get the list of neighbors for vertex u
      list<int> neighbors = l[u];
      cout << u << " : ";
      // Print the neighbors of vertex u
      for (int v : neighbors)
      {
        cout << v << " ";
      }
      cout << endl;
    }
  }
};

int main()
{
  Graph graph(5);

  graph.addEdge(0, 1);
  graph.addEdge(1, 2);
  graph.addEdge(1, 3);
  graph.addEdge(2, 3);
  graph.addEdge(2, 4);

  graph.print();

  return 0;
}