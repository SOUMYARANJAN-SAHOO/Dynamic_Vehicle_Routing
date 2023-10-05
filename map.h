#include <stdlib.h>
// Structure to represent a node in the adjacency list
struct Node
{
    int dest;   // Destination vertex
    int weight; // Weight of the edge
    struct Node *next;
};

// Structure to represent an adjacency list
struct List
{
    struct Node *head;
};

// Structure to represent a graph
struct Graph
{
    int V; // Number of vertices
    struct List *array;
};

// Function to create a new node
struct Node *newNode(int dest, int weight)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->dest = dest;
    newNode->weight = weight;
    newNode->next = NULL;
    return newNode;
}

// Function to create a graph with V vertices
struct Graph *createGraph(int V)
{
    struct Graph *graph = (struct Graph *)malloc(sizeof(struct Graph));
    graph->V = V;
    graph->array = (struct List *)malloc(V * sizeof(struct List));
    for (int i = 0; i < V; ++i)
    {
        graph->array[i].head = NULL;
    }
    return graph;
}

// Function to add an edge to the graph
void addEdge(struct Graph *graph, int src, int dest, int weight)
{
    struct Node *newnode = newNode(dest, weight);
    newnode->next = graph->array[src].head;
    graph->array[src].head = newnode;
}