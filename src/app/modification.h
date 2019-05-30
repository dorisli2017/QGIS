#ifndef MODIFICATION_H
#define MODIFICATION_H
#include <set>
#include <vector>
#include <stdlib.h> 
#include <iostream>
#include "acstability.h" 
#include "qgsvectorlayerlabelprovider.h"
bool debugTrue = true;
namespace lt {
    class Modification
    {
        public:
            void modify(std::vector<int>& solutionIds){
                const std::vector<int>& featureIds = global ? featureQGSIDS : solutionIds;
                int size = featureIds.size();
                int enlargeSize = size* enlargePercentage;
                int shrinkSize = size * shrinkPercentage;
                int fixSize = size* fixPercentage;
                int randID;
                int number = 0;
                std::set<int> used;
                cout<< "fixSIZE "<< fixSize<< endl;
                cout<< "anlargeSIZE "<< enlargeSize<< endl;
                cout<< "shrinkSIZE "<< shrinkSize<< endl;
                for(int i = 0; i < fixSize; i++){
                    randID = rand()% size;
                    number = 0;
                    while(used.count(randID) != 0 && number < size) {
                        randID = randID+1% size;
                        number++;
                    }
                    if(number == size) return;
                    else{
                        fixIds.insert(randID);
                        used.insert(randID);
                    }
                }
                for(int i = 0; i < enlargeSize; i++){
                    randID = rand()% size;
                    number = 0;
                    while( used.count(randID) != 0&& number < size) {
                        randID = randID+1% size;
                        number++;
                    }
                    if(number == size) return;
                    else{
                        enlargeIds.insert(randID);
                         used.insert(randID);
                    }
                }
                for(int i = 0; i < shrinkSize; i++){
                    randID = rand()% size;
                    number = 0;
                    while( used.count(randID) != 0 && number < size) {
                        randID = randID+1% size;
                        number++;
                    }
                    if(number == size) return;
                    else{
                        shrinkIds.insert(randID);
                        used.insert(randID);
                    }
                }
                return;
            }; 
            void print(){
                std::cout<< "fixPercentage: "<< fixPercentage<< std::endl;
                std::cout<< "enlargePercentage: "<< enlargePercentage<< std::endl;
                std::cout<< "shrinkPercentage: "<<  shrinkPercentage<< std::endl;
                std::cout<<"global: "<< global<< std::endl; // 0: modification based on previou solution, 1: global modifiction 
                std::cout<< "time"<< time<< std::endl;
                if(debugTrue){
                    std::cout<< "the "<<(double)fixIds.size()/size << "fixIDs:"<<std:: endl;
                    for(auto ele : fixIds){
                        std::cout<< ele << " ";
                    }
                    std::cout<< std::endl;
                    std::cout<< "the " <<(double)enlargeIds.size()/size <<" enlargeIDs:"<< std::endl;
                    for(auto ele : enlargeIds){
                        std::cout<< ele << " ";
                    }
                    cout<< endl;
                    cout<< "the " <<(double)shrinkIds.size()/size <<" shrinkIDs:"<<std:: endl;
                    for(auto ele : shrinkIds){
                        std::cout<< ele << " ";
                    }
                    std::cout<< std::endl;

                }
            };
            bool isGlobal(){return global;};
            json convertJSON();
            void applyModification(QgsVectorLayerLabelProvider* provider){
                for(auto ele : fixIds){ 
                    provider->fixFeature(ele);
                }
                for(auto ele : enlargeIds){ 
                    provider->fitFeature(ele,enlargeF);
                }
                for(auto ele : shrinkIds){ 
                    provider->fitFeature(ele, shrinkF);
                }
            }
        private:
            int size =0 ;// featureID size
            double enlargePercentage = 0.0;
            double shrinkPercentage= 0.0;
            double fixPercentage= 1.0;
            bool global= true; // 0: modification based on previou solution, 1: global modifiction 
            double time= 0.0;
            double enlargeF = 1.2;
            double shrinkF= 0.8;
            std::set<int> enlargeIds;
            std::set<int> shrinkIds;
            std::set<int> fixIds;
    };
}
#endif