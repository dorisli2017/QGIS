#include "graph_set.h"
Graph::Graph(int nblp, int all_nblp){
    numV = all_nblp;
    adList = new edgeList[numV+1];
}
void Graph::addVertex(int v){

};
void Graph::addEdge(int u, int v){
    assert(u<= numV);
    assert(v <= numV);
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
bool Graph::containVertex(int u){
    return u<= numV;
}
bool Graph::containEdge(int source, int target){
    return (adList[source].count(target) != 0);
};
bool Graph::containEdge_label(int source, int target){
    return (adList[source].count(target) != 0);
};
void Graph::debugGraph(){
    edgeList::iterator it;
    for(int i =0; i < numV;i++){
        it= adList[i].begin();
        while (it != adList[i].end()){
            //undirected graph (u,v)->(v,u)
            assert(containEdge(*it,i));
            //index < numV
            assert(*it <= numV);
            it++;
        }
    }
};
void Graph::printGraph(){
    for (int i = 1; i <= numV; ++i){  
        cout << endl << i<< ": " ; 
        for (auto itr = adList[i].begin(); itr != adList[i].end(); ++itr){ 
            cout << *itr << " "; 
        }
        cout << endl; 
    } 
}
void Graph::outputDIMACS(string const &  fileName){
  ofstream outdata;
  outdata.open (fileName.c_str());
  if(!outdata){
    // file couldn't be opened
    cerr << "Error: file could not be opened" << endl;
    exit(1);  
  }
  outdata << "c "<<fileName<<endl;
  int eSize= 0;
  for (int i =1 ; i < numV; i++) {
      eSize+=adList[i].size();
  }
  outdata<<"p edge"<< numV<<" "<< eSize/2;
  for (int i =1 ; i < numV; i++) {
    for(const auto &q : adList[i]){
        if(i < q){
            outdata <<std::endl<<"e "<<i<<" "<<q;
        }
    }
  }
  outdata.close();
}
void Graph::outputMetis(string const & fileName){
  ofstream outdata;
  outdata.open (fileName.c_str());
  if(!outdata){
    // file couldn't be opened
    cerr << "Error: file could not be opened" << endl;
    exit(1);  
  }
  outdata << "% "<<fileName<<endl;
  int eSize= 0;
  for (int i =1 ; i < numV+1; i++) {
      eSize+=adList[i].size();
  }
  outdata<< numV<<" "<< eSize/2<<endl;
  for (int i =1 ; i < numV+1; i++) {
    for(const auto &q : adList[i]){
        outdata<<q<<" ";
    }
    outdata<<endl;
  }
  outdata.close();
}
inline double getPriority(int degree){return degree;};

void Graph::setPriorityQueue(pal::PriorityQueue * list){
    int degree;
    for (int i =1 ; i < numV+1; i++) {
    degree = adList[i].size();
    if(degree == 0) continue;
    list->insert(i, getPriority(degree));
  }
  if(gplDebugger){
    list->print();
  }
}
unordered_set<int> Graph:: getVertexCover(int nblp, int all_nblp){
  pal::PriorityQueue *list = nullptr;
  list = new pal::PriorityQueue( nblp, all_nblp, false );
  int label;
  unordered_set<int> vertexCover;
  setPriorityQueue(list);
  unordered_set<int> covered;
  unsigned int size = list->getSize();
  while ( covered.size() != size){
      label = list->getBest(); 
      vertexCover.insert(label);
      covered.insert(label);
      if(covered.size() == size) break;
      for(const auto &p: adList[label]){
        if(list->decreaseKey_remove(p,0.0)){
          covered.insert(p);
          if(covered.size() == size) goto check_pointer;
        }
      }
  }
  check_pointer:{
    if(gplDebugger){
      debugVertexCover(vertexCover);
    }
    return vertexCover;
  }
} 
void Graph::debugVertexCover(unordered_set<int>& vertexCover){
  cout<< "***********&&&&&&&&&&&***********"<< endl;
  for(const auto &p : vertexCover){
      cout<< p << endl;
  }
  int label1,label2;
    for (int i =1; i < numV+1; i++) {
      label1 = i;
      if(adList[i].size() == 0 || vertexCover.find(label1) != vertexCover.end()) continue;
      for(const auto &q : adList[i]){
        label2 = q;
        assert(vertexCover.find(label2) != vertexCover.end());
      }
    }
}
/*int main (int argc, char *argv[]) {
  Graph graph(3);
  graph.addEdge(1,2);
  graph.addEdge(3,2);
  graph.addEdge(2,1);
  graph.printGraph();
  graph.debugGraph();
  graph.outputMetis("a.txt");
  return 0;
}*/