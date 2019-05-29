
#include "aclabeltester.h"
using namespace lt;
namespace lt
{
    const QString EXT_SHAPEFILE = ".shp";
    const QString EXT_IMAGE = ".png";

    const QSize MAP_SIZE(5000, 5000);
    const qint16 MAP_DPI = 300;

    const AlgorithmPair CHAIN = {"chain", QgsLabelingEngineSettings::Chain};
    const AlgorithmPair POPMUSIC_TABU = {"popmusic_tabu", QgsLabelingEngineSettings::Popmusic_Tabu};
    const AlgorithmPair  POPMUSIC_CHAIN = {"popmusic_chain", QgsLabelingEngineSettings:: Popmusic_Chain};
    const AlgorithmPair POPMUSIC_TABU_CHAIN  = {"popmusic_tabu_chain", QgsLabelingEngineSettings::Popmusic_Tabu_Chain};
    const AlgorithmPair FALP = {"falp", QgsLabelingEngineSettings::Falp};
//    our algorihtms 
    const AlgorithmPair SIMPLE = {"simple", QgsLabelingEngineSettings::SIMPLE};
    const AlgorithmPair MIS = {"mis", QgsLabelingEngineSettings::MIS};
    const AlgorithmPair MAXHS = {"maxhs", QgsLabelingEngineSettings::MAXHS};
    const AlgorithmPair KAMIS = {"kamis", QgsLabelingEngineSettings::KAMIS};
};
