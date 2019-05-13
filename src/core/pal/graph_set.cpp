#include "graph_set.h"
Graph::Graph(int n){
    numV = n;
    adList = new edgeList[numV];
}
void Graph::addEdge(int u, int v){
    assert(u< numV);
    assert(v < numV);
    adList[u].insert(v);
    adList[v].insert(u);
};
void Graph::deleteEdge(int u, int v){
    assert(u< numV);
    assert(v < numV);
    if(adList[u].erase(v)>0){
        adList[v].erase(u);
    }

};
bool Graph::searchEdge(int source, int target){
    return (adList[source].count(target) != 0);
};
void Graph::debugGraph(){
    edgeList::iterator it;
    for(int i =0; i < numV;i++){
        it= adList[i].begin();
        while (it != adList[i].end()){
            //undirected graph (u,v)->(v,u)
            assert(searchEdge(*it,i));
            //index < numV
            assert(*it < numV);
            it++;
        }
    }
};
void Graph::printGraph(){
    for (int i = 0; i < numV; ++i){  
        cout << endl << i<< ": " ; 
        for (auto itr = adList[i].begin(); itr != adList[i].end(); ++itr){ 
            cout << *itr << " "; 
        }
        cout << endl; 
    } 
}
/*
int main (int argc, char *argv[]) {
  Graph graph(3);
  graph.addEdge(0,1);
  graph.printGraph();
  return 0;
}
*/