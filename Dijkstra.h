#include "map.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// Function to find the vertex with the minimum distance value
int minDistance(int dist[], int sptSet[], int V)
{
    int min = INT_MAX, min_index;

    for (int v = 0; v < V; v++)
    {
        if (!sptSet[v] && dist[v] <= min)
        {
            min = dist[v];
            min_index = v;
        }
    }

    return min_index;
}

// Function to implement Dijkstra's algorithm
int dijkstra(struct Graph *graph, int src, int dst)
{
    int V = graph->V;
    int dist[V];   // Array to store the shortest distance from the source
    int sptSet[V]; // Array to represent whether a vertex is in the shortest path tree

    // Initialize all distances as INFINITE and sptSet[] as false
    for (int i = 0; i < V; i++)
    {
        dist[i] = INT_MAX;
        sptSet[i] = 0;
    }

    // Distance of source vertex from itself is always 0
    dist[src] = 0;

    // Find shortest path for all vertices
    for (int count = 0; count < V - 1; count++)
    {
        int u = minDistance(dist, sptSet, V);
        sptSet[u] = 1;

        struct Node *node = graph->array[u].head;
        while (node != NULL)
        {
            int v = node->dest;
            if (!sptSet[v] && dist[u] != INT_MAX && (dist[u] + node->weight) < dist[v])
            {
                dist[v] = dist[u] + node->weight;
            }
            node = node->next;
        }

        // Early exit if the destination vertex has been reached
        if (u == dst)
        {
            break;
        }
    }

    // Print the final result
    printf("The distance between %d and %d points is :: %d\n", src, dst, dist[dst]);
    return dist[dst]; // Return the shortest distance to the destination
}
