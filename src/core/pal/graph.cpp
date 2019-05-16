#include "graph.h"
//bool gplDebugger = true;
Graph::Graph(int nblp, int all_nblp){
}
void Graph::addVertex(int u){
    adList[u];
}
void Graph::addEdge(int u, int v){
    adList[u].insert(v);
    adList[v].insert(u);
};
void Graph:: deleteVertex(int u){
    adList.erase(u);
    /*for (const auto &p : adList) {
        adList[p.first].erase(u);
    }
    */

}
void Graph::deleteEdge(int u, int v){
    assert(adList.find(u) != adList.end());
    assert(adList.find(v) != adList.end());

    adList[u].erase(v);
    adList[v].erase(u);
};
bool Graph::containEdge(int source, int target){
    return (adList[source].count(target) != 0);
};
bool Graph::containEdge_label(int source, int target){
    return (adList[source].count(target) != 0);
};
bool Graph::containVertex(int u){
    return adList.find(u) != adList.end();
};
void Graph::debugGraph(){
        for (const auto &p : adList) {
            for(const auto &q : p.second){
                assert(containEdge(q,p.first));
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
void Graph::outputDIMACS(string const &  fileName){
  ofstream outdata;
  outdata.open (fileName.c_str());
  if(!outdata){
    // file couldn't be opened
    cerr << "Error: file could not be opened" << endl;
    exit(1);  
  }
  outdata << "c "<<fileName<<endl;
  int vSize= 0;
  int eSize= 0;
  vSize = adList.size();
  for (const auto &p : adList){
      eSize+=p.second.size();
  }
  outdata<<"p edge"<< vSize<<" "<< eSize/2<<endl;
  for (const auto &p : adList) {
    outdata<<endl;
    for(const auto &q : p.second){
        if(p.first < q){
            outdata <<std::endl<<"e "<<p.first<<" "<<q;
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
  int vSize= 0;
  int eSize= 0;
  vSize = adList.size();
  for (const auto &p : adList){
      eSize+=p.second.size();
  }
  outdata<< vSize<<" "<< eSize/2<<endl;
  for (int i = 1; i <= vSize; i++) {
    edgeList& elist = adList.at(i);
    for(const auto &q : elist){
        outdata<<q<<" ";
    }
    outdata<<endl;
  }
  outdata.close();
}
inline double getPriority(int degree){return degree;};

void Graph::setPriorityQueue(pal::PriorityQueue * list){
    int label, degree;
    for (const auto &p : adList) {
    label = p.first;
    degree = p.second.size();
    if(degree == 0) continue;
    list->insert(label, getPriority(degree));
  }
  if(gplDebugger){
    list->print();
  }
}
unordered_set<int> Graph:: getVertexCover(int nblp, int all_nblp){
  pal::PriorityQueue *list = nullptr;
  list = new pal::PriorityQueue( nblp, all_nblp, false );
  int label;
  int degree;
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
    for (const auto &p : adList) {
      label1 = p.first;
      if(p.second.size() == 0 || vertexCover.find(label1) != vertexCover.end()) continue;
      for(const auto &q : p.second){
        label2 = q;
        assert(vertexCover.find(label2) != vertexCover.end());
      }
    }
}
/*int main (int argc, char *argv[]) {
  Graph graph(3,3);
  graph.addEdge(1,2);
  graph.addEdge(3,2);
  graph.addEdge(2,1);
  graph.printGraph();
  graph.debugGraph();
  graph.outputMetis("a_graph.txt");
  return 0;
}*/