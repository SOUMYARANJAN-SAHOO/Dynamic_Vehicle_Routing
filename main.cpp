#include <iostream>
#include "Bhubaneswar.h"

using namespace std;

// TODO: Make a function to initialise the Bhubhneswar map in an object

int main()
{
    //! Initialize the map, input data, and call functions to find routes

    /*
    // Create places
    Place place1(0, "Place A");
    Place place2(1, "Place B");
    Place place3(2, "Place C");

    // Create edges
    Edge edge1(0, 1, 10); // Place A to Place B with distance 10
    Edge edge2(0, 2, 15); // Place A to Place C with distance 15
    Edge edge3(1, 2, 5);  // Place B to Place C with distance 5

    // Create a graph and add edges
    Graph graph(3);
    graph.addEdge(edge1);
    graph.addEdge(edge2);
    graph.addEdge(edge3);
    */

    Graph Bhubaneswar = initializer();
    // Find the shortest distance between two places
    float shortestDistance = Bhubaneswar.dijkstra(7, 30); // Find distance between Place A (0) and Place B (1)
    std::cout << "Shortest distance between Place A and Place B(in Km): " << shortestDistance << std::endl;

    return 0;
}
