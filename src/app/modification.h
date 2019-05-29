#ifndef MODIFICTAION_H
#define MODIFICTAION_H
#include "acstability.h" 
#include <vector>
#include <set>
#include <stdlib.h> 
#include <iostream>
#include <QList>
#include "qgslabelfeature.h"
#include "qgsvectorlayerlabelprovider.h"
namespace lt {
    struct ModificationSettings{
        double enlargePercentage;
        double shrinkPercentage;
        double fixPercentage;
        bool global;
        double enlargeF;
        double shrinkF;
    };
    class Modification
    {
        public:
            Modification(ModificationSettings& settings);
            Modification(double enlargePercentage,double shrinkPercentage,double fixPercentage,bool global, double enlargeF, double shrinkF);
            void modify(vector<int>& featureIds);
            void print();
            bool isGlobal();
            json convertJSON();
            void applyModification(QgsVectorLayerLabelProvider* provider,QgsRenderContext& context);
        private:
            int size;// featureID size
            double enlargePercentage;
            double shrinkPercentage;
            double fixPercentage;
            bool global; // 0: modification based on previou solution, 1: global modifiction 
            double time;
            double enlargeF = 1.2;
            double shrinkF= 0.8;
            set<int> enlargeIds;
            set<int> shrinkIds;
            set<int> fixIds;
    };
}
#endif 