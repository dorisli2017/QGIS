//#include "aclabeltester.h"
#include "modification.h"
using namespace lt;

json Modification::convertJSON(){
    json node;
    node["enlargePercentage"] = enlargePercentage;
    node["shrinkPercentage"] = shrinkPercentage;
    node["global"] = global;
    node["time"] = time;
    return node;
}
// test modification
/*int main (int argc, char *argv[]){
  return 0;
}
*/