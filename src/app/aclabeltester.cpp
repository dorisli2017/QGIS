#include "aclabeltester.h"

namespace lt
{
    const QString EXT_SHAPEFILE = ".shp";
    const QString EXT_IMAGE = ".png";

    const QSize MAP_SIZE(5000, 5000);
    const qint16 MAP_DPI = 300;

    const AlgorithmPair FALP = {"falp", QgsLabelingEngineSettings::Falp};
    const AlgorithmPair POPMUSIC = {"popmusic", QgsLabelingEngineSettings::Popmusic_Tabu_Chain};
    const AlgorithmPair SIMPLE = {"simple", QgsLabelingEngineSettings::SIMPLE};
    const AlgorithmPair MIS = {"mis", QgsLabelingEngineSettings::MIS};
    const AlgorithmPair KAMIS = {"kamis", QgsLabelingEngineSettings::KAMIS};
    const AlgorithmPair MAXHS = {"maxhs", QgsLabelingEngineSettings::MAXHS};
}
