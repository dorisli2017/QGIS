#ifndef ACSTABILITY_H
#define ACSTABILITY_H
#include <stdio.h>
#include <iostream>
#include "fifo_map.hpp"
#include "json.hpp"
#include <unordered_map>
template<class K, class V, class dummy_compare, class A> using json_fifo_map = nlohmann::fifo_map<K, V, nlohmann::fifo_map_compare<K>, A>; 
using json = nlohmann::basic_json<json_fifo_map>;
using namespace std;
inline bool init;
inline unordered_map<int, int> solution_prev; 
namespace test{
    struct Performance{
        string name;
        int time;
        int solutionSize;
        int remainingLabels;
        double solutionWeight;
        //+++++++++++++++++++++++++debug code++++++++++++++++++++++++++++++++++++
        void print(){
            cout<< "time: "<< time << endl; 
            cout<< "solutionSize: "<< solutionSize<< endl; 
            cout<< "remainingLables: "<< remainingLabels << endl; 
            cout<< "solutionWeight: "<< solutionWeight << endl; 
        }
        json convertJSON(){
            json node;
            return node;
        }
        //-----------------------debug code--------------------------------------
    };
}
#endif