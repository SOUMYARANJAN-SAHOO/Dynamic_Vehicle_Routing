// Class to represent an edge in a graph
class Edge
{
private:
    int from;       //* Starting node of the edge
    int to;         //* Ending node of the edge
    float distance; //* Distance between the nodes
public:
    // Constructor to initialize the edge
    Edge(int from, int to, float distance) : from(from), to(to), distance(distance) {}

    // Getter to access the starting node of the edge
    int getFrom() const
    {
        return from;
    }

    // Getter to access the ending node of the edge
    int getTo() const
    {
        return to;
    }

    // Getter to access the distance between the nodes of the edge
    float getDistance() const
    {
        return distance;
    }
};