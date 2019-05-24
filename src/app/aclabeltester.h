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
#include <QDebug>

using namespace std;

int labeltester(const QString& db_path)
{
    qDebug() << "Getting QGis App";
    QString table = "points";
    QString geom_column = "geometry";
    QgsDataSourceUri uri;
    uri.setDatabase(db_path);
    uri.setDataSource("", table, geom_column);
    qDebug() << uri.uri();

    qDebug() << "Creating layer";
    QgsVectorLayer *layer = new QgsVectorLayer(uri.uri(), "ka", "spatialite");
    QgsProject::instance()->addMapLayer(layer);
    qDebug() << layer->isValid();

    qDebug() << "Creating map";
    QSize size(1000, 1000);
    QgsMapSettings mapSettings;
    mapSettings.setOutputSize(size);
    mapSettings.setExtent(layer->extent());
    qDebug() << layer->extent().area();
    mapSettings.setLayers(QList<QgsMapLayer *>() << layer);
    mapSettings.setOutputDpi(96);

    qDebug() << "Get rendering context";
    QgsMapRendererSequentialJob job(mapSettings);
    job.start();
    job.waitForFinished();

    QImage imgM = job.renderedImage();
    qDebug() << imgM.save("test_map.png");

    QImage img = job.renderedImage();
    QPainter p(&img);
    QgsRenderContext context = QgsRenderContext::fromMapSettings(mapSettings);
    context.setPainter(&p);

    qDebug() << "Setting up pal";
    QgsPalLayerSettings pal_settings;
    pal_settings.fieldName = QStringLiteral("name");

    QgsTextFormat format;
    format.setFont(QgsFontUtils::getStandardTestFont(QStringLiteral("Bold")).family());
    format.setSize(12);
    format.setNamedStyle(QStringLiteral("Bold"));
    format.setColor(QColor(200, 0, 200));
    pal_settings.setFormat(format);

    layer->setLabeling(new QgsVectorLayerSimpleLabeling(pal_settings));
    layer->setLabelsEnabled(true);

    qDebug() << "Setting up label provider";
    QgsVectorLayerLabelProvider *provider = new QgsVectorLayerLabelProvider(layer,
                                                                            "",
                                                                            true,
                                                                            &pal_settings);
    qDebug() << layer->labelsEnabled();
    qDebug() << layer->isValid();
    qDebug() << provider->name();

    qDebug() << "Setting up labeling engine";
    QgsLabelingEngineSettings engine_settings;
    engine_settings.setSearchMethod(QgsLabelingEngineSettings::Falp);

    QgsLabelingEngine engine;
    engine.setMapSettings( mapSettings );
    engine.addProvider(provider);

    qDebug() << "Running labeling engine";
    engine.run(context);
    img.save("test_labeling.png");

    qDebug() << engine.results()->labelsWithinRect(mapSettings.extent()).size();

//    app.exitQgis();
    QgsApplication::exitQgis();

    qDebug() << "Reached end";

    return 0;
}


#endif // ACLABELTESTER_H
