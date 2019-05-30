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
#include "acstability.h" 
#include <vector>
#include <set>
#include <stdlib.h> 
#include <iostream>
#include <QList>
#include "qgslabelfeature.h"
#include "qgsvectorlayerlabelprovider.h"
#include <QMap>
#include <QDebug>
#include <fstream>
#include "modification.h"
using namespace std;

namespace lt {
    QTextStream& qStdOut()
    {
        static QTextStream ts( stdout );
        return ts;
    }
    typedef QPair<QString, QgsLabelingEngineSettings::Search> AlgorithmPair;
    const AlgorithmPair FALP = {"falp", QgsLabelingEngineSettings::Falp};
    const AlgorithmPair POPMUSIC = {"popmusic", QgsLabelingEngineSettings::Popmusic_Tabu_Chain};
    const AlgorithmPair SIMPLE = {"simple", QgsLabelingEngineSettings::SIMPLE};
    const AlgorithmPair MIS = {"mis", QgsLabelingEngineSettings::MIS};
    const AlgorithmPair KAMIS = {"kamis", QgsLabelingEngineSettings::KAMIS};
    const AlgorithmPair MAXHS = {"maxhs", QgsLabelingEngineSettings::MAXHS};

    class LabelTester
    {
        public:
            LabelTester(const QString& dataset, const QDir& base_path = QDir("/home/guangping/dev/cpp")) :
            //LabelTester(const QString& dataset, const QDir& base_path = QDir("/home/fabian/clean_home/research/HILabeling/hilabeling_experiments/")) :
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
                QVector<AlgorithmPair> run_algorithms;
                g_alg(run_algorithms, 10);
                QVector<Modification> run_modifications;
                g_mod(run_modifications, 10);
                run_test(run_algorithms, run_modifications);
            }

        private:
            /*
             * One labeling with one algorithm for the given map and provider is created
             */
            bool create_labeling_with_algorithm(QgsLabelingEngine& engine, QgsRenderContext& context,  const AlgorithmPair& algorithm,
                                                QgsMapSettings& map_settings, QgsVectorLayerLabelProvider* provider, QImage& labeled_image, json node,int i )
            {
                // Configuring algorithm
                qStdOut() << "Setting algorithm" << endl;
                QgsLabelingEngineSettings engine_settings;
                engine_settings.setSearchMethod(algorithm.second);
                map_settings.setLabelingEngineSettings(engine_settings);

                // Create Labeling Engine
                qStdOut() << "Creating labeling engine" << endl;
                engine.setMapSettings(map_settings);
                engine.addProvider(provider);

                // Run engine
                qStdOut() << "Running labeling engine..." << endl;
                test::Performance performance;
                engine.run(context,performance);
                qStdOut() << "Labeled " << engine.results()->labelsWithinRect(map_settings.layers().first()->extent()).size() << " features" << endl;
                performance.appendJSON(node, "Round " + std::to_string(i));
                return true;
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
                format.setSize(12);
                format.setNamedStyle(QStringLiteral("Bold"));
                format.setColor(QColor(200, 0, 200));
                pal_settings.setFormat(format);

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

            bool run_test(const QVector<AlgorithmPair>& run_algorithms, const QVector<Modification>& run_modifications)
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
                layer->setLabelsEnabled(true);
                // Rendernig map once to save time later
                qStdOut() << "Rendering map" << endl;
                QImage map_image;
                render_map(map_image, map_settings);
                vector<int> featureIds;
                QgsVectorLayerLabelProvider *provider = new QgsVectorLayerLabelProvider(layer, "", true, &pal_settings);
                json node;
                // Test loop
               for(int i = 0; i < run_algorithms.length(); ++i)
               {
                  // Setting up layer & creating provider
                   const AlgorithmPair& algorithm = run_algorithms[i];
                   // const AlgorithmPair& algorithm = run_algorithms[0];
                    qStdOut() << "Running test with algorithm " << algorithm.first << endl;
                    layer->setLabeling(new QgsVectorLayerSimpleLabeling(pal_settings));
                    //Get rendering context
                    QImage labeled_image(map_image);
                    QPainter p(&labeled_image);
                    QgsRenderContext context = QgsRenderContext::fromMapSettings(map_settings);
                    context.setPainter(&p);

                    // Create one labeling with algorithm
                    QgsLabelingEngine engine;
                    create_labeling_with_algorithm(engine, context, FALP, map_settings, provider,labeled_image,node,i);
                    p.end();
                    for(QgsLabelFeature* feature : provider->labelFeatures(context))
                    {
                       // qStdOut() << feature->id() << endl;
                    }

                    // Store image
                    QString save_to_image_path(image_path.filePath(QString(dataset + "_" + algorithm.first + "_%1" + ext_image).arg(i)));
                    save_to_image_path.replace(".shp", ".png");
                    qStdOut() << "Saving labeled map to: " << save_to_image_path << endl;
                    labeled_image.save(save_to_image_path);
                   /* for(auto ele: featureIds){
                        cout<< ele << endl;
                    }*/
                    vector<int> solutionIds;
                    for(auto ele: solution_prev){
                        solutionIds.push_back(ele.first);
                    }
                    provider = new QgsVectorLayerLabelProvider(layer, "", true, &pal_settings);
                    /*
                    Modification m(run_modifications[i]);
                    bool global = m.isGlobal();
                    if(global) m.modify(featureIds);
                    else m.modify(solutionIds);*/
                   // m.applyModification(provider,context);
                }
                std::fstream fs;
                fs.open ("test.txt",std::fstream::out);
                if (fs.is_open()){
                        fs<< node;
                        fs.close();
                }
                else{
                    std::cout << "Error opening file";
                }
                return true;
            }

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
    void algoGen(QVector<AlgorithmPair>& run_algorithms, const int& length){
        for(int i = 0; i < length; i++){
            //AlgorithmPair initA = {"simple", QgsLabelingEngineSettings::SIMPLE};
            // AlgorithmPair initA ={"falp", QgsLabelingEngineSettings::Falp};
           // AlgorithmPair initA =  {"popmusic", QgsLabelingEngineSettings::Popmusic_Tabu_Chain};
           //AlgorithmPair initA   = {"mis", QgsLabelingEngineSettings::MIS};
           // AlgorithmPair initA =  {"kamis", QgsLabelingEngineSettings::KAMIS};
           AlgorithmPair initA = {"maxhs", QgsLabelingEngineSettings::MAXHS};
    /*
    AlgorithmPair initA = {"maxhs", QgsLabelingEngineSettings::MAXHS};*/
            run_algorithms.push_back(initA);
        }
        return;
    }
    void modGen(QVector<Modification>& run_modification, const int& length){
        for(int i = 0; i < length; i++){
            Modification m;
            run_modification.push_back(m);
        }
        return;
    }
    int test(const QString& dataset)
    {
        cout<< "in test"<< endl;
        LabelTester tester(dataset);
        tester.run(algoGen, modGen);
        //tester.run([](QVector<AlgorithmPair>& algorithms, const int& length) {return ;}, [](QVector<Modification>& algorithms, const int& length) {return ;});
        cout<< "out test"<< endl;
        return 0;
    }
}


#endif // ACLABELTESTER_H
