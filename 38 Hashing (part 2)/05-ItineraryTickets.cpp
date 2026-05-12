#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
#include <unordered_map>
using namespace std;

// Itinerary from Tickets
void printItinerary(unordered_map<string, string> tickets)
{
  unordered_set<string> to; // to store the destinations

  // insert all the destinations in the set
  for (pair<string, string> ticket : tickets) // tc = O(n)
  {
    to.insert(ticket.second);
  }

  string start = ""; // to store the starting point
  // find the starting point which is not present in the set of destinations
  for (pair<string, string> ticket : tickets) // tc = O(n)
  {
    if (to.find(ticket.first) == to.end())
    {
      start = ticket.first;
    }
  }

  cout << start << " -> "; // print the starting point
  // print the itinerary by following the tickets until we reach the destination which is not present in the map of tickets
  while (tickets.count(start)) // tc = O(n)
  {
    cout << tickets[start] << " -> ";
    start = tickets[start];
  }

  cout << "destination" << endl;
}

int main()
{
  unordered_map<string, string> tickets;
  tickets["Chennai"] = "Bangalore";
  tickets["Mumbai"] = "Delhi";
  tickets["Goa"] = "Chennai";
  tickets["Delhi"] = "Goa";

  printItinerary(tickets);
  return 0;
}