//self-defined graph representation, building adjacency_list using array of set
//TODO: sparse graph may fit set of set
//TODO: a map of index of labelLabel could save more memory
//TODO: unordered set?
#include <assert.h>
#include <set>
#include <iostream>
using namespace std;
typedef set<int> edgeList;
class Graph{
    public:
        Graph(int numV);
        void debugGraph();
        void printGraph();
        void addEdge(int source, int target);
        void deleteEdge(int source, int target);
        bool searchEdge(int source, int target);

    private:
        int numV;
        edgeList* adList; 
};
