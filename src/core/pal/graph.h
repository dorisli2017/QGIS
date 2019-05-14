//self-defined graph representation, building adjacency_list using array of set
//TODO: sparse graph may fit set of set
//TODO: a map of index of labelLabel could save more memory
//TODO: unordered set?
#include <assert.h>
#include <unordered_set>
#include <unordered_map>
#include <iostream>
#include <assert.h>
using namespace std;
typedef unordered_set<int> edgeList;
typedef unordered_map<int,edgeList> adjecencyList; 
class Graph{
    public:
        Graph();
        void debugGraph();
        void printGraph();
        void addVertex(int u);
        void addEdge(int source, int target);
        void deleteVertex(int u);
        void deleteEdge(int source, int target);
        bool containEdge(int source, int target);
        bool containVertex(int u);
    //******************vertex cover***********************
        void getVertexCover(int* vertexCover);
    //******************maxi. independent set************** 
        adjecencyList adList; 
};
