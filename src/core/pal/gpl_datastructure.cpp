// customized bidirected hashing table. 
#include "gpl_datastructure.h"
lookupTable::lookupTable(int n){
  numV = n+1;
  labelID.reserve(numV);
  labelID.push_back(-1);
  vertexID.insert({-1,0});
};
void lookupTable::insert(int lID){
  int vID = labelID.size();
  labelID.push_back(lID);
  vertexID.insert({lID,vID});
};
int lookupTable::lookUpLID(int vID){
  if(vID < labelID.size()){
    return labelID[vID];
  }
  else return -1;
};
int lookupTable::lookUpVID(int lID){
  unordered_map<int,int>::const_iterator it = vertexID.find (lID);
  if(it != vertexID.end()){
    return it->second;
  }
  return -1;  

};
void lookupTable::debug(){
  assert(labelID.size() == numV);
  assert(vertexID.size() == numV);
  assert(vertexID.size() == labelID.size());
  for(auto vID: vertexID){
    assert(lookUpVID(vID.first) == vID.second);
  }
  for(int i = 1; i < labelID.size(); i++){
    int lID = labelID[i];
    if(lookUpLID(lookUpVID(lID)) != lID){
      cout<< lID<< endl;
      cout<< lookUpVID(lID)<< endl;
      cout<< lookUpLID(lookUpVID(lID))<< endl;

    }
    assert(lookUpLID(lookUpVID(lID)) == lID);
  }
};
void lookupTable::print(){
  cout<<"numV "<< numV<< endl;
  cout<<"labelID "<< labelID.size()<< endl;
  cout<<"vertexID "<< vertexID.size()<< endl;
  cout<< "VID"<< endl;
  for(auto vID: vertexID){
    cout<< vID.first<< " "<< vID.second << endl;
  }
  for(int i = 1; i < labelID.size(); i++){
    int lID = labelID[i];
    cout<< i<< " "<< lID << endl;
  }
};
/*
int main (int argc, char *argv[]) {
    lookupTable test(3);
    test.insert(100);
    test.insert(320);
    test.insert(640);
    test.print();
    test.debug();
  return 0;
}
*/