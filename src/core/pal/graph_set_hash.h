//self-defined graph representation, building adjacency_list using array of set
//TODO: sparse graph may fit set of set
//TODO: a map of index of labelLabel could save more memory
//TODO: unordered set?
#ifndef GRAPH_SET_HASH
#define GRAPH_SET_HASH
#include <assert.h>
#include <set>
#include <iostream>
#include<fstream>
#include "debugger.h"
#include <unordered_set>
#include "priorityqueue.h"
#include "gpl_datastructure.h"
using namespace std;
typedef set<int> edgeList;
class Graph{
    public:
        Graph(int nblp, int all_nblp);
        void debugGraph();
        void printGraph();
        void addVertex(int u);
        void addEdge(int source, int target);
        void deleteEdge(int source, int target);
        bool containVertex(int u);
        bool containEdge(int source, int target);
        bool containEdge_label(int l1, int l2);
        void setPriorityQueue(pal::PriorityQueue * list);
        void outputDIMACS(string const &  fileName);
        void outputMetis(string const & fileName);
        unordered_set<int> getVertexCover(int nblp, int all_nblp);
        void debugVertexCover(unordered_set<int>& vertexCover);
        int numV;
        edgeList* adList;
        lookupTable* table; 
};
#endif
