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
#include <numeric>
#include <algorithm>
#include <string.h>
#include <stdlib.h>
using namespace std;
typedef set<int> edgeList;
class Graph{
    public:
        Graph(int nblp, int all_nblp);
        void debugGraph();
        void printGraph();
        void addVertex(int u, double wight);
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
        void getKAMIS(vector<int>& KAMIS);
        void debugMIS(vector<int>& vertexMIS);
        void readKAMIS(vector<int>& KAMIS,string const & fileName);
        void readWCNF(vector<int>& KAMIS,string const & fileName);
        void getMAXHS(vector<int>& KAMIS);
        void addCache(int l1);
        void adjustWeights();
        inline void increaseWeight(int v);
        void setE();
        void setTOP();
        int numV;
        vector<double> weights;
        edgeList* adList;
        lookupTable* table; 
        // nodes choosen before in solution
        set<int> solution_prev;
};
#endif
