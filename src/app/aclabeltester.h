#ifndef ACLABELTESTER_H
#define ACLABELTESTER_H

#include <iostream>
#include <fstream>   
#include <iomanip>
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
#include <QMap>
#include <QDebug>
#include "acstability.h"
#include "modification.h"
using namespace std;


namespace lt {
    QTextStream& qStdOut()
    {
        static QTextStream ts( stdout );
        return ts;
    }

 typedef QPair<QString, QgsLabelingEngineSettings::Search> AlgorithmPair;

    extern const AlgorithmPair CHAIN;
    extern const AlgorithmPair POPMUSIC_TABU;
    extern const AlgorithmPair  POPMUSIC_CHAIN;
    extern const AlgorithmPair POPMUSIC_TABU_CHAIN;
    extern const AlgorithmPair FALP;
//    our algorihtms 
    extern const AlgorithmPair SIMPLE;
    extern const AlgorithmPair MIS;
    extern const AlgorithmPair MAXHS;
    extern const AlgorithmPair KAMIS;

   struct Tracker{
        string name;
        int numOfFeatures;
        int runs;
        QVector<ModificationSettings> modifications;
        //conflictsNumbers[0]= Initial number of conflicts
        QVector<int> conflictsNumbers;
        QVector<test::Performance> algorithmPerformances;
        void print(){
            cout<<"name: "<< name << endl;
            cout<< "numOfFeatures: "<<numOfFeatures << endl; 
            cout<< "runs: "<< runs << endl;
            for(int i = 0; i < runs; i++){
                //modifications[i].print();
                cout<< "conflictsNumber: "<< conflictsNumbers[i]<< endl;
                algorithmPerformances[i].print();
            }
        }
        void print_JSON(std::ofstream o){
            json node; 
            node["name"]  = name;
            node["numOfFeatures"] = numOfFeatures; 
            node["runs"] = runs;
            for(int i = 0; i < runs; i++){
               // node["modifications"].push_back(modifications[i].convertJSON());
                node["conflictsNumber"].push_back(conflictsNumbers[i]);
                node["algorithms"].push_back(algorithmPerformances[i].convertJSON());
            }
            o << std::setw(4) << node << std::endl;
        }
    };
    class LabelTester
    {
        public:                                                          
        LabelTester(const QString& dataset, const QDir& base_path = QDir("/home/guangping/dev/cpp/GIT/QGIS/test_hilabling")) :
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
                cout<< "NOW THE DATAset IS "<< dataset.toLocal8Bit().constData()<<endl;
                cout<< "NOW THE DATApath IS "<< dataset_path.toLocal8Bit().constData()<< endl;
                QVector<AlgorithmPair> run_algorithms;
               // g_alg(run_algorithms, 10);
                QVector<ModificationSettings> run_modifications;
               // g_mod(run_modifications, 10);
                run_test(run_algorithms, run_modifications);
            }

        private:
            // One labeling with one algorithm for the given map and provider is created
             
            bool create_labeling_with_algorithm(QgsRenderContext& context, const QgsLabelingEngineSettings::Search& algortihm,
                                                QgsMapSettings& map_settings, QgsVectorLayerLabelProvider* provider,test::Performance performance)
            {
                // Configuring algorithm
                qStdOut() << "Setting algorithm" << endl;
                QgsLabelingEngineSettings engine_settings;
                engine_settings.setSearchMethod(algortihm);
                map_settings.setLabelingEngineSettings(engine_settings);

                // Create Labeling Engine
                qStdOut() << "Creating labeling engine" << endl;
                QgsLabelingEngine engine;
                engine.setMapSettings(map_settings);
                engine.addProvider(provider);

                // Run engine
                qStdOut() << "Running labeling engine..." << endl;
                engine.run(context,performance);
                qStdOut() << "Labeled " << engine.results()->labelsWithinRect(map_settings.layers().first()->extent()).size() << " features" << endl;
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

            bool run_test(const QVector<AlgorithmPair>& run_algorithms, QVector<ModificationSettings>& run_modifications)
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

                // Setting up layer & creating provider
                layer->setLabelsEnabled(true);
                QgsVectorLayerLabelProvider *provider = new QgsVectorLayerLabelProvider(layer, "", true, &pal_settings);

                // Rendernig map once to save time later
                qStdOut() << "Rendering map" << endl;
                QImage map_image;
                render_map(map_image, map_settings);
                // add Tracker 
                Tracker tracker;
                // Test loop
                init = true;
                for(int i = 0; i < run_algorithms.length(); ++i)
                {
                    const AlgorithmPair& algorithm = run_algorithms[i];

                    qStdOut() << "Running test with algorithm " << algorithm.first << endl;
                    layer->setLabeling(new QgsVectorLayerSimpleLabeling(pal_settings));

                    //Get rendering context
                    QImage labeled_image(map_image);
                    QPainter p(&labeled_image);
                    QgsRenderContext context = QgsRenderContext::fromMapSettings(map_settings);
                    context.setPainter(&p);

                    // Create one labeling with algorithm
                    test::Performance performance;
                    create_labeling_with_algorithm(context, algorithm.second, map_settings, provider,performance);
                    tracker.algorithmPerformances.push_back(performance);

                    p.end();

                    // Store image
                    QString save_to_image_path(image_path.filePath(dataset + "_" + algorithm.first + "_" + i + ext_image));
                    save_to_image_path.replace(".shp", ".png");
                    qStdOut() << "Saving labeled map to: " << save_to_image_path << endl;
                    labeled_image.save(save_to_image_path);
                    //++++++++++++++++++++++++++++++++ print all the feature 
                    //---------------------------------
                    // randomly choose features for modification
                    vector<int> featureIds;
                    provider->getFeatureIds(featureIds);
                    vector<int> solutionIds;
                    for(auto ele: solution_prev){
                        solutionIds.push_back(ele.first);
                    }
                    Modification m(run_modifications[i]);
                    bool global = m.isGlobal();
                    if(global) m.modify(featureIds);
                    else m.modify(solutionIds);
                    m.applyModification(provider,context);
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
            // track the performance of the whole test process
            Tracker tracker;
    };

    int test(const QString& dataset)
    {
        cout<< "test starts"<< endl;
        LabelTester tester(dataset);
        //tester.run([](QVector<AlgorithmPair>& algorithms, const int& length) {return ;}, [](QVector<ModificationSettings>& algorithms, const int& length) {return ;});

        return 0;
    }
}


#endif // ACLABELTESTER_H
