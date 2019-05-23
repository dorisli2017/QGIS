# Hilabeling:<br /> 

## Our algorithms<br /> 
 simple[weighted/ stable]( corresponds to the algorithm Greedy in our paper)<br /> 
 mis [weighted/ stable]<br /> 
 kamis [unweighted/unstable] (see http://algo2.iti.kit.edu/kamis/)<br /> 
 maxHS [weighted/ stable]<br /> 
 
 (add more algorithms read pal/ReadMe_gpl)<br />  

## to discuss
weight of label l of feature f: InactiveCost(f) - cost(l) [may not proper]<br /> 
In qgis, point features normally have only one label candidate (8 positions for the regions) [may define our preferences ourselves]<br /> 


## further improvements<br /> 
reimplementation of pal (directed in qgis with qgsfeature and qgslabling)c
implements modification and update in problem (Now modification emits new layout and builds new problem)<br /> 

## Mey help for experiments
For labeling, qgis uses the QgsLabelingEngine class https://qgis.org/api/classQgsLabelingEngine.html#details <br /> 
The eigine uses function run()
* It builds the labeling problem p in pal (exactProblem).<br /> 
* The problem p then provides a labling using the searchMethod set in its eiginesetting (the seaarchMethod is implemented in *   pal/problem.cpp) .<br /> 
* The labeling is drawn in the end  <br /> 

