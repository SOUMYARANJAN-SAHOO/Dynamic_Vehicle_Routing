#include <string> // for string class
using namespace std;

// Define data structures for nodes and edges
// defining the Nodes as places
class Place
{
private:
    int id;      //* Unique identifier
    string name; //* Name of the place
    /*
    Other properties or behaviour that can be added
        location
        address
        description
        category
        ratings
        hours
        contact_info
        photos=[]
        accessibility=[]
        amenities=[]
        special_events=[]
        social_media_links=[])
    */
public:
    //* Constructor
    Place(int id, std::string name) : id(id), name(name) {}

    // Getters to access private data
    int getId() const
    {
        return id;
    }

    string getName() const
    {
        return name;
    }
};