#include "graph_set_hash.h"
//bool gplDebugger = true;
Graph::Graph(int nblp, int all_nblp){
    numV = nblp+1;
    adList = new edgeList[numV];
    table = new lookupTable(nblp);
}
void Graph::addVertex(int label){
  table->insert(label);
};
void Graph::addEdge(int l1, int l2){
    int v1 = table->lookUpVID(l1);
    int v2 = table->lookUpVID(l2);
    assert(v1 != -1);
    assert(v2 != -1);
    assert(v1< numV);
    assert(v2 < numV);
    adList[v1].insert(v2);
    adList[v2].insert(v1);
};
void Graph::deleteEdge(int l1, int l2){
    int v1 = table->lookUpVID(l1);
    int v2 = table->lookUpVID(l2);
    assert(v1 != -1);
    assert(v2 != -1);
    assert(v1< numV);
    assert(v2 < numV);
    if(adList[v1].erase(v2)>0){
        adList[v2].erase(v1);
    }

};
bool Graph::containVertex(int label){
    int u = table->lookUpVID(label);
    return (u> 0 && u<= numV);
}
bool Graph::containEdge_label(int l1, int l2){
    int v1 = table->lookUpVID(l1);
    int v2 = table->lookUpVID(l2);
    assert(v1 != -1);
    assert(v2 != -1);
    assert(v1< numV);
    assert(v2 < numV);
    return containEdge(v1, v2);
};
bool Graph::containEdge(int v1, int v2){
    return (adList[v1].count(v2) != 0);
};

void Graph::debugGraph(){
    table->debug();
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
    table->print();
    for (int i = 1; i < numV; ++i){  
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
  for (int i =1 ; i < numV; i++) {
      eSize+=adList[i].size();
  }
  outdata<< numV<<" "<< eSize/2<<endl;
  for (int i =1 ; i < numV; i++) {
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
    for (int i =1 ; i < numV; i++) {
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
  list = new pal::PriorityQueue( nblp, nblp, false );
  int label;
  unordered_set<int> vertexCover;
  unordered_set<int> labelCover;
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
  }
  for (const auto& elem: vertexCover){ 
    labelCover.insert(table->lookUpLID(elem));
  }
    return labelCover;
} 
void Graph::debugVertexCover(unordered_set<int>& vertexCover){
  cout<< "***********&&&&&&&&&&& debugVertexCover***********"<< endl;
  for(const auto &p : vertexCover){
      cout<< p << endl;
  }
  int label1,label2;
    for (int i =1; i < numV; i++) {
      label1 = i;
      if(adList[i].size() == 0 || vertexCover.find(label1) != vertexCover.end()) continue;
      for(const auto &q : adList[i]){
        label2 = q;
        assert(vertexCover.find(label2) != vertexCover.end());
      }
    }
}
void Graph::readKAMIS(vector<int>& KAMIS,string const & fileName){
  vector<int> vertexMIS;
  ifstream indata;
  indata.open(fileName.c_str());
  if(!indata){
  // file couldn't be opened
  cerr << "Error: file could not be opened" << endl;
  exit(1);  
  }
  int line = 1;
  int in;
  while (indata>>in){
    if(in ==1){
      vertexMIS.push_back(line);
    }
    line++;
  }
  if(gplDebugger){
    debugMIS(vertexMIS);
  }
  for(const auto elem: vertexMIS){
        KAMIS.push_back(table->lookUpLID(elem));
  }
}
void Graph::debugMIS(vector<int>& vertexMIS){
  cout<< "***********&&&&&&&&&&&debugMIS***********"<< endl;
  for(const auto & elem : vertexMIS){
    cout<< elem << " ";
  }
  cout<< endl;
  std::vector<int> f(numV);
  std::iota(f.begin(), f.end(), 1);
  vector<int> cover;
  std::set_intersection(f.begin(),f.end(),vertexMIS.begin(), vertexMIS.end(), back_inserter(cover));
  std::unordered_set<int> Cover(cover.begin(), cover.end());
  debugVertexCover(Cover);
  for(int i =0; i < vertexMIS.size(); i++){
    for(int j = 0; j < i; j++){
      assert(!containEdge(i,j));
    }
  }
}
void Graph::getKAMIS(vector<int>& KAMIS){
  system("../../../../KaMIS/deploy/redumis a_set_map.txt --output=b_set_map.txt");
  readKAMIS(KAMIS, "b_map.txt");
}
/*int main (int argc, char *argv[]) {
  Graph graph(3,3);
  graph.addVertex(100);
  graph.addVertex(200);
  graph.addVertex(300);
  graph.addEdge(100,200);
  graph.addEdge(300,200);
  graph.addEdge(200,100);
  graph.printGraph();
  graph.debugGraph();
  graph.outputMetis("a_set_map.txt");
  vector<int> KAMIS;
  graph.getKAMIS(KAMIS);
  cout<< "KAMIS"<< endl;
  for(const auto elem: KAMIS){
    cout<< elem<< " ";
  }
  cout<<endl;
  return 0;
}
*/