#include "Dijkstra.h"
#include "Bhubaneswar.h"

// To measure the execution time
#include <time.h>

int main()
{
    // Calculate the time taken by fun()
    clock_t t;
    t = clock();

    struct Graph *graph = initializer();

    int src = 7;   // Source vertex
    int dest = 30; // Destination vertex
    dijkstra(graph, src, dest);

    t = clock() - t;
    double time_taken = ((float)t); // in seconds
    printf("program took %f milliseconds to execute \n", time_taken);

    return 0;
}