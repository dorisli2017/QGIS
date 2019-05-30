#include "aclabeltester.h"
using namespace lt;
bool debugTrue = true;
void Modification::modify(vector<int>& featureIds){
    int size = featureIds.size();
    int enlargeSize = size* enlargePercentage;
    int shrinkSize = size * shrinkPercentage;
    int fixSize = size* fixPercentage;
    int randID;
    int number = 0;
    for(int i = 0; i < fixSize; i++){
        randID = rand()% size;
        while(featureIds[randID] == -1 && number < size) {
            randID = randID+1% size;
            number++;
        }
        if(number == size) return;
        else{
            fixIds.insert(randID);
            featureIds[randID] = -1;
        }
    }
    for(int i = 0; i < enlargeSize; i++){
        randID = rand()% size;
        while(featureIds[randID] == -1 && number < size) {
            randID = randID+1% size;
            number++;
        }
        if(number == size) return;
        else{
            enlargeIds.insert(randID);
            featureIds[randID] = -1;
        }
    }
    for(int i = 0; i < shrinkSize; i++){
        randID = rand()% size;
        while(featureIds[randID] == -1 && number < size) {
            randID = randID+1% size;
            number++;
        }
        if(number == size) return;
        else{
            shrinkIds.insert(randID);
            featureIds[randID] = -1;
        }
    }
    return;
}; 

void Modification::print(){
    cout<< "enlargePercentage: "<< enlargePercentage<< endl;
    cout<< "shrinkPercentage: "<<  shrinkPercentage<< endl;
    cout<<"global: "<< global<< endl; // 0: modification based on previou solution, 1: global modifiction 
    cout<< "time"<< time<< endl;
    if(debugTrue){
        cout<< "the "<<(double)fixIds.size()/size << "fixIDs:"<< endl;
        for(auto ele : fixIds){
            cout<< ele << " ";
        }
        cout<< endl;
        cout<< "the " <<(double)enlargeIds.size()/size <<" enlargeIDs:"<< endl;
        for(auto ele : enlargeIds){
            cout<< ele << " ";
        }
        cout<< endl;
        cout<< "the " <<(double)shrinkIds.size()/size <<" shrinkIDs:"<< endl;
        for(auto ele : shrinkIds){
            cout<< ele << " ";
        }
        cout<< endl;

    }
};
json Modification::convertJSON(){
    json node;
    node["enlargePercentage"] = enlargePercentage;
    node["shrinkPercentage"] = shrinkPercentage;
    node["global"] = global;
    node["time"] = time;
    return node;
}
bool Modification::isGlobal(){
    return global;
}
void Modification::applyModification(QgsVectorLayerLabelProvider* provider,QgsRenderContext& context){
  /*  for(auto ele : fixIds){ 
        provider->fixFeature(ele);
    }
    for(auto ele : enlargeIds){ 
        provider->fitFeature(ele,enlargeF);
    }
    for(auto ele : shrinkIds){ 
        provider->fitFeature(ele, shrinkF);
    }
*/
}
// test modification
/*int main (int argc, char *argv[]){
  return 0;
}
*/