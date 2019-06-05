#ifndef ACLABELTESTER_H
#define ACLABELTESTER_H

#include <iostream>

#include "qgsproject.h"
#include "qgsdatasourceuri.h"
#include "qgsvectorlayer.h"
#include "qgsapplication.h"
#include "qgsvectorlayerlabelprovider.h"
#include "qgslabelfeature.h"
#include "qgsmaprenderersequentialjob.h"
#include "qgsfontutils.h"
#include "qgsvectorlayerlabeling.h"
#include "qgsvectorlayerlabelprovider.h"
#include "geometry/qgsrectangle.h"
#include "qgsauxiliarystorage.h"
#include <fstream>

#include <QMap>
#include <QDebug>
#include "modification.h"
using namespace std;
json node;
const QString END(" end"); 

namespace lt {
    QTextStream& qStdOut()
    {
        static QTextStream ts( stdout );
        return ts;
    }
//    typedef QPair<QString, QgsLabelingEngineSettings::Search> AlgorithmPair;
//    const AlgorithmPair FALP = {"falp", QgsLabelingEngineSettings::Falp};
//    const AlgorithmPair POPMUSIC = {"popmusic", QgsLabelingEngineSettings::Popmusic_Tabu_Chain};
//    extern const AlgorithmPair SIMPLE;
//    extern const AlgorithmPair MIS;
//    extern const AlgorithmPair KAMIS;
//    extern const AlgorithmPair MAXHS;

    class LabelTester
    {
        public:
              LabelTester(const QString& dataset, const QDir& base_path = QDir("/home/guangping/dev/cpp")) :
           // LabelTester(const QString& dataset, const QDir& base_path = QDir("/home/fabian/clean_home/research/HILabeling/hilabeling_experiments/")) :
                ext_shapefile(".shp"),
                ext_image(".png"),
                map_size(5000, 5000),
                map_dpi(300),
                dataset(dataset),
                base_path(base_path),
                statistics_path(base_path.filePath("statistics")),
                shapefile_path(base_path.filePath("shapefiles")),
                image_path(base_path.filePath("images"))
            {
                Q_ASSERT(base_path.exists());
                Q_ASSERT(statistics_path.exists());
                Q_ASSERT(shapefile_path.exists());
                Q_ASSERT(image_path.exists());

                dataset_path = shapefile_path.filePath(dataset + ext_shapefile);
                Q_ASSERT(QFile(dataset_path).exists());
            }

            template<typename AlgSequenceGenerator, typename ModSequenceGenerator>
            void run(AlgSequenceGenerator g_alg, ModSequenceGenerator g_mod)
            {
                QVector<QgsLabelingEngineSettings::Search> run_algorithms;
                g_alg(run_algorithms, 10);
                QVector<Modification> run_modifications;
                g_mod(run_modifications, 10);
                run_test(run_algorithms, run_modifications);
            }

        private:
            /*
             * One labeling with one algorithm for the given map and provider is created
             */
            QgsLabelingResults* create_labeling_with_algorithm(QgsLabelingEngine& engine, QgsRenderContext& context, const QgsLabelingEngineSettings::Search& algortihm,
                                                QgsMapSettings& map_settings, QgsVectorLayerLabelProvider* provider,int i)
            {
                // Run engine
                qStdOut() << "Running labeling engine..." << endl;
                test::Performance performance;
                engine.run(context,performance);
                node["Round " + std::to_string(i)] = performance.convertJSON();
                qStdOut() << "Labeled " << engine.results()->labelsWithinRect(map_settings.layers().first()->extent()).size() << " features" << endl;
                return engine.results();
            }

            bool setup_map(QgsMapSettings& map_settings, QgsVectorLayer* layer)
            {
                map_settings.setOutputSize(map_size);
                map_settings.setExtent(layer->extent());
                map_settings.setLayers(QList<QgsMapLayer *>() << layer);
                map_settings.setOutputDpi(map_dpi);

                return true;
            }

            bool setup_pal(QgsPalLayerSettings& pal_settings)
            {
                pal_settings.fieldName = QStringLiteral("name");

                QgsTextFormat format;
                format.setFont(QgsFontUtils::getStandardTestFont(QStringLiteral("Bold")).family());
                format.setSize(10);
                format.setNamedStyle(QStringLiteral("Bold"));
                format.setColor(QColor(200, 0, 200));
                pal_settings.setFormat(format);
                pal_settings.placement = QgsPalLayerSettings::OrderedPositionsAroundPoint;

                return true;
            }

            bool render_map(QImage& map_image, const QgsMapSettings& map_settings)
            {
                // Get rendering context
                qStdOut() << "Get rendering context" << endl;
                QgsMapRendererSequentialJob job(map_settings);
                job.start();
                job.waitForFinished();
                map_image = job.renderedImage();

                return true;
            }

            bool run_test(const QVector<QgsLabelingEngineSettings::Search>& run_algorithms, const QVector<Modification>& run_modifications)
            {
                // Create layer & map
                qStdOut() << "Creating layer for dataset " << QFile(dataset_path).fileName() << endl;
                QgsVectorLayer *layer = new QgsVectorLayer(dataset_path, "", "ogr");
                QgsProject::instance()->addMapLayer(layer);

                Q_ASSERT(layer->isValid());

                qStdOut() << "Setting up map" << endl;
                QgsMapSettings map_settings;
                setup_map(map_settings, layer);

                // Setting up PAL
                qStdOut() << "Setting up PAL" << endl;
                QgsPalLayerSettings pal_settings;
                setup_pal(pal_settings);
                // Rendernig map once to save time later
                qStdOut() << "Rendering map" << endl;
                QImage map_image;
                render_map(map_image, map_settings);

                // Add field to track modifications
                // Test loop
                for(int i = 0; i < 10; ++i)
                {
//+++++++++++++++++++++++++++++++++MOdifucation+++++++++++++++++++++++++++++++++++++++++++++++++
                    if(i > 0){
                        Modification m;
                        std::vector<int> featureQGSIDS;
                        layer->cacheIDs(featureQGSIDS);
                        bool global = m.isGlobal();
                        vector<int> solutionIds;
                        for(auto ele: solution_prev){
                            solutionIds.push_back(ele.first);
                        }
                        m.modify(solutionIds,featureQGSIDS,layer);
                        m.applyModification(fixExpressions, sizeExpressions);
                        //m.print();
                        // +++++++++++++++++apply Modification to layer +++++++++++++++++
                        if(debugTrue){
                            //vl->printLayer();
                        }
                        //------------------apply Modification to palSettings------------------
                        //qStdOut() <<"fixExpressions: " <<fixExpressions<< endl;
                        //qStdOut() <<"sizeExpressions: " <<sizeExpressions<< endl;
                        pal_settings.dataDefinedProperties().setProperty(QgsPalLayerSettings::Show,
                                    QgsProperty::fromExpression( fixExpressions + " end"));
                        pal_settings.dataDefinedProperties().setProperty(QgsPalLayerSettings::Size,
                                    QgsProperty::fromExpression( sizeExpressions + " end"));
                    }

//-------------------------------Modification-----------------------------------------------------                    

                    // Setting up layer & creating provider
                    layer->setLabelsEnabled(true);
                    QgsVectorLayerLabelProvider *provider = new QgsVectorLayerLabelProvider(layer, "test", true, &pal_settings);
                    layer->setLabeling(new QgsVectorLayerSimpleLabeling(pal_settings));

//                    QgsLabelingEngineSettings::Search algorithm = run_algorithms[i];
                    QString algorithm = "bla";
                    qStdOut() << "Running test with algorithm " << algorithm << endl;

                    //Get rendering context
                    QImage labeled_image = map_image.copy();
                    QPainter p(&labeled_image);
                    QgsRenderContext context = QgsRenderContext::fromMapSettings(map_settings);
                    context.setPainter(&p);

                    // Configuring algorithm
                    qStdOut() << "Setting algorithm" << endl;
                    QgsLabelingEngineSettings engine_settings;
                    engine_settings.setFlag(QgsLabelingEngineSettings::UsePartialCandidates, false);
                    engine_settings.setSearchMethod(QgsLabelingEngineSettings::Falp);
                    map_settings.setLabelingEngineSettings(engine_settings);

                    // Create Labeling Engine
                    qStdOut() << "Creating labeling engine" << endl;
                    QgsLabelingEngine engine;
                    engine.setMapSettings(map_settings);
                    engine.addProvider(provider);

                    // Create one labeling with algorithm
                    create_labeling_with_algorithm(engine, context, QgsLabelingEngineSettings::Popmusic_Tabu_Chain, map_settings, provider,i);

                    p.end();

                    // Store image
                    QString save_to_image_path(image_path.filePath(dataset + "_" + algorithm + "_" + QString::number(i) +  ext_image));
                    qStdOut() << "Saving labeled map to: " << save_to_image_path << endl;
                    labeled_image.save(save_to_image_path);
                }
                QString save_to_statistic_path(image_path.filePath(dataset + ".json"));
                std::fstream fs;
                std::cout<< node<< endl;
                fs.open (save_to_statistic_path.toUtf8().constData(),std::fstream::out);
                if (fs.is_open()){
                        fs<< node;
                        fs.close();
                }
                else{
                    std::cout << "Error opening file";
                }
                return true;
            }
            QString sizeExpressions =" case ";
            QString fixExpressions = " case ";
            //QString sizeExpressions = QStringLiteral("case when \"name\"='Oberlaa' then 30");
            //QString fixExpressions = QStringLiteral( "case when \"name\"='Leopoldau' then '#eeeeee'" );
            QString ext_shapefile;
            QString ext_image;
            QSize map_size;
            qint16 map_dpi;

            QString dataset;
            QString dataset_path;

            QDir base_path;
            QDir statistics_path;
            QDir shapefile_path;
            QDir image_path;
    };

    int test(const QString& dataset)
    {
        LabelTester tester(dataset);
        tester.run([](QVector<QgsLabelingEngineSettings::Search>& algorithms, const int& length) {
            algorithms << QgsLabelingEngineSettings::Falp << QgsLabelingEngineSettings::Falp << QgsLabelingEngineSettings::Popmusic_Tabu;
        }, [](QVector<Modification>& modifications, const int& length) {return ;});

        return 0;
    }
}


#endif // ACLABELTESTER_H