#include "graph.h"
Graph::Graph(){
}
void Graph::addEdge(int u, int v){
    adList[u].insert(v);
    adList[v].insert(u);
};
void Graph:: deleteVertex(int u){
    adList.erase(u);
    for (const auto &p : adList) {
        adList[p.first].erase(u);
    }

}
void Graph::deleteEdge(int u, int v){
    assert(adList.find(u) != adList.end());
    assert(adList.find(v) != adList.end());

    adList[u].erase(v);
    adList[v].erase(u);
};
bool Graph::searchEdge(int source, int target){
    return (adList[source].count(target) != 0);
};
void Graph::debugGraph(){
        for (const auto &p : adList) {
            for(const auto &q : p.second){
                assert(searchEdge(q,p.first));
            }
    }
};
void Graph::printGraph(){
    for (const auto &p : adList) {
            std::cout << p.first << " => ";
            for(const auto &q : p.second){
                        std::cout << q << " ";
            }
            cout<<'\n';
    }
}
int main (int argc, char *argv[]) {
  Graph graph;
  //graph.addEdge(0,1);
  graph.deleteVertex(3);
  graph.addEdge(2,1);
    graph.addEdge(2,0);
 graph.deleteEdge(0,1);
  graph.printGraph();
  graph.debugGraph();
  return 0;
}