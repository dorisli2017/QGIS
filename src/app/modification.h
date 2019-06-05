#ifndef MODIFICATION_H
#define MODIFICATION_H
#include <set>
#include <vector>
#include <stdlib.h> 
#include <iostream>
#include "qgsvectorlayer.h"
#include "acstability.h" 
#include "qgsvectorlayerlabelprovider.h"
#include "qgsauxiliarystorage.h"
#include "qgsvectorlayer.h"
#include "qgsdiagramrenderer.h"
const QString AS_JOINPREFIX = "auxiliary_storage_";
typedef QMap<QgsPalLayerSettings::Property, int> QgsPalIndexes;
bool debugTrue = true;
const QString ID("when \"osm_id\"='");
const QString VALUE("' then '");
const QString mEND("' ");
    QTextStream& qStdOut()
    {
        static QTextStream ts( stdout );
        return ts;
    }
class Modification
{
    public:
        Modification(){
               /* mPalProperties << QgsPalLayerSettings::PositionX;
                mPalProperties << QgsPalLayerSettings::PositionY;
                mPalProperties << QgsPalLayerSettings::Show;
                mPalProperties << QgsPalLayerSettings::LabelRotation;
                mPalProperties << QgsPalLayerSettings::Family;
                mPalProperties << QgsPalLayerSettings::FontStyle;
                mPalProperties << QgsPalLayerSettings::Size;
                mPalProperties << QgsPalLayerSettings::Bold;
                mPalProperties << QgsPalLayerSettings::Italic;
                mPalProperties << QgsPalLayerSettings::Underline;
                mPalProperties << QgsPalLayerSettings::Color;
                mPalProperties << QgsPalLayerSettings::Strikeout;
                mPalProperties << QgsPalLayerSettings::BufferSize;
                mPalProperties << QgsPalLayerSettings::BufferColor;
                mPalProperties << QgsPalLayerSettings::LabelDistance;
                mPalProperties << QgsPalLayerSettings::Hali;
                mPalProperties << QgsPalLayerSettings::Vali;
                mPalProperties << QgsPalLayerSettings::ScaleVisibility;
                mPalProperties << QgsPalLayerSettings::MinScale;
                mPalProperties << QgsPalLayerSettings::MaxScale;
                mPalProperties << QgsPalLayerSettings::AlwaysShow;*/
        };
        void modify(std::vector<int>& solutionIds,std::vector<int>& featureQGSIDS,QgsVectorLayer *layer){
            if(true){
                QgsFeature feat;
                QgsFeatureIterator it = layer-> getFeatures();
            }
            //const std::vector<int>& featureIds = global ? featureQGSIDS : solutionIds;
            const std::vector<int>& featureIDs = global ? featureQGSIDS : solutionIds;// qgsFeaturreIDS
            // osm_ids
            QgsFeature feat;
            QgsFeatureIterator it = layer-> getFeatures();
            while(it.nextFeature(feat)){
                featureIds.push_back(feat.attribute("osm_id").toInt());
            }
            int size = featureIds.size();
            int enlargeSize = size* enlargePercentage;
            int shrinkSize = size * shrinkPercentage;
            int fixSize = size* fixPercentage;
            int randID;
            int number = 0;
            std::set<int> used;
            cout<< "fixSIZE "<< fixSize<< endl;
            cout<< "anlargeSIZE "<< enlargeSize<< endl;
            cout<< "shrinkSIZE "<< shrinkSize<< endl;
            for(int i = 0; i < fixSize; i++){
                randID = rand()% size;
                number = 0;
                while(used.count(randID) != 0 && number < size) {
                    randID = randID+1% size;
                    number++;
                }
                if(number == size) return;
                else{
                    fixIds.insert(randID);
                    used.insert(randID);
                }
            }
            for(int i = 0; i < enlargeSize; i++){
                randID = rand()% size;
                number = 0;
                while( used.count(randID) != 0&& number < size) {
                    randID = randID+1% size;
                    number++;
                }
                if(number == size) return;
                else{
                    enlargeIds.insert(randID);
                        used.insert(randID);
                }
            }
            for(int i = 0; i < shrinkSize; i++){
                randID = rand()% size;
                number = 0;
                while( used.count(randID) != 0 && number < size) {
                    randID = randID+1% size;
                    number++;
                }
                if(number == size) return;
                else{
                    shrinkIds.insert(randID);
                    used.insert(randID);
                }
            }
            return;
        }; 
        void print(){
            std::cout<< "fixPercentage: "<< fixPercentage<< std::endl;
            std::cout<< "enlargePercentage: "<< enlargePercentage<< std::endl;
            std::cout<< "shrinkPercentage: "<<  shrinkPercentage<< std::endl;
            std::cout<<"global: "<< global<< std::endl; // 0: modification based on previou solution, 1: global modifiction 
            std::cout<< "time"<< time<< std::endl;
            if(debugTrue){
                std::cout<< "the "<<(double)fixIds.size()/size << "fixIDs:"<<std:: endl;
                for(auto ele : fixIds){
                    std::cout<< ele << " ";
                }
                std::cout<< std::endl;
                std::cout<< "the " <<(double)enlargeIds.size()/size <<" enlargeIDs:"<< std::endl;
                for(auto ele : enlargeIds){
                    std::cout<< ele << " ";
                }
                cout<< endl;
                cout<< "the " <<(double)shrinkIds.size()/size <<" shrinkIDs:"<<std:: endl;
                for(auto ele : shrinkIds){
                    std::cout<< ele << " ";
                }
                std::cout<< std::endl;

            }
        };
        bool isGlobal(){return global;};
        json convertJSON(){
            json node;
            node["enlargePercentage"] = enlargePercentage;
            node["shrinkPercentage"] = shrinkPercentage;
            node["global"] = global;
            node["time"] = time;
            return node;
        }
        void applyModification(QString& fixExpressions, QString& sizeExpressions){
            QString expression = QString(" ");
            for(auto ele : fixIds){
                expression = ID+QString::number(featureIds[ele])+VALUE+"0"+ mEND;   
                fixExpressions.append(expression);             
            }
            for(auto ele : enlargeIds){ 
                                //set enlargeExpression
                expression = QString(ID+QString::number(featureIds[ele])+VALUE+ "30"+mEND);
                //expression = QString(ID+"2018072722"+VALUE+ "30"+mEND);
                                // append them in sizeExpressions
                sizeExpressions.append(expression);
            }
            for(auto ele : shrinkIds){ 
                                // set shrinkExpression
                expression = QString(ID+QString::number(featureIds[ele])+VALUE+ "5"+mEND);
                                // append them in sizeExpressions           
                sizeExpressions.append(expression);
     
            }
        }
        /*void applyModification(QgsVectorLayer * layer){
            //layer->beginEditCommand( tr( "Changed properties for label" ) + QStringLiteral( " '%1'" ).arg( currentLabelText( 24 ) ) );
            QString hello("hello");
            layer->beginEditCommand( hello );
            //layer->startEditing();
            std::string str_size = "auxiliary_storage_labeling_size";
            QString size = QString::fromStdString(str_size);
            std::string str_fix = "auxiliary_storage_labeling_alwaysshow";
            QString fix = QString::fromStdString(str_fix);
            for(auto ele : fixIds){ 
                //std::cout<< "filedNameIndex" <<layer->getFeature(ele).fieldNameIndex(fix) << std::endl;
                layer->changeAttributeValue(ele,layer->getFeature(ele).fieldNameIndex(fix), 1);                    
            }
            for(auto ele : enlargeIds){ 
                //std::cout<< "filedNameIndex" <<layer->getFeature(ele).fieldNameIndex(size) << std::endl;
               // layer->changeAttributeValue(ele,layer->getFeature(ele).fieldNameIndex(size), 100);
            }
            for(auto ele : shrinkIds){ 
                //std::cout<< "filedNameIndex" <<layer->getFeature(ele).fieldNameIndex(size) << std::endl;
                //layer->changeAttributeValue(ele,layer->getFeature(ele).fieldNameIndex(size), 6);
                
            }
            assert(layer->getFeature(43).isValid());
            layer->changeAttributeValue(43,69, 30);
            layer->commitChanges();
            //layer->endEditCommand();
            //layer->updatedFields();
            //layer->triggerRepaint();
        }
        QString nameFromProperty( const QgsPropertyDefinition &def, bool joined )
        {
            std::cout<< "in Modification::nameFromProperty" << std::endl;
            QString fieldName = def.origin();
            std::cout<< "** filedName "<< fieldName.toUtf8().constData() << std::endl;
            if ( !def.name().isEmpty() )
                fieldName =  QString( "%1_%2" ).arg( fieldName, def.name().toLower() );

            if ( !def.comment().isEmpty() )
                fieldName = QString( "%1_%2" ).arg( fieldName, def.comment() );

            if (joined)
                fieldName = QString( "%1%2" ).arg( AS_JOINPREFIX, fieldName );
            std::cout<< "out Modification::nameFromProperty" << std::endl;
            return fieldName;
        }
        void creatProperties(QgsVectorLayer *layer){
            for(auto property: mPalProperties){
                createProperty(property,layer);
            }
            qDebug()<< indexes;
        }
        void createProperty( QgsPalLayerSettings::Property property, QgsVectorLayer *layer)
        {
            std::cout<< "in Modification::pal::createProperty" << std::endl;
            std::cout<< "layer "<<layer << std::endl;
            std::cout<< "layer->labeling() "<<layer->labeling() << std::endl;
            std::cout<< "layer->auxiliaryLayer() "<<layer->auxiliaryLayer() << std::endl;
            int index = -1;
            if ( layer && layer->labeling() && layer->auxiliaryLayer() ){
                std::cout<< "if 1" << std::endl;
                // property definition are identical whatever the provider id
                const QgsPropertyDefinition def = layer->labeling()->settings().propertyDefinitions()[property];
                const QString fieldName = nameFromProperty( def, true );
                layer->auxiliaryLayer()->addAuxiliaryField( def );
                if ( layer->auxiliaryLayer()->indexOfPropertyDefinition( def ) >= 0 )
                {
                std::cout<< "if 2" << std::endl;
                const QgsProperty prop = QgsProperty::fromField( fieldName );

                const QStringList subProviderIds = layer->labeling()->subProviders();
                for ( const QString &providerId : subProviderIds )
                {
                    std::cout<< "for 1" << std::endl;
                    QgsPalLayerSettings *settings = new QgsPalLayerSettings( layer->labeling()->settings( providerId ) );

                    QgsPropertyCollection c = settings->dataDefinedProperties();
                    c.setProperty( property, prop );
                    settings->setDataDefinedProperties( c );

                    layer->labeling()->setSettings( settings, providerId );
                }

                emit layer->styleChanged();
                }

                index = layer->fields().lookupField( fieldName );
            }
            std::cout<< "out Modification::pal::createProperty" << std::endl;
            indexes[property] = index;
        }
    protected:
          QList<QgsPalLayerSettings::Property> mPalProperties;
          QgsPalIndexes indexes;
    */
    private:
        std::vector<int> featureIds;// osm_ids
        int size =0 ;// featureID size
        double enlargePercentage = 0.1;
        double shrinkPercentage= 0.1;
        double fixPercentage= 0.1;
        bool global= true; // 0: modification based on previou solution, 1: global modifiction 
        double time= 0.0;
        double enlargeF = 1.2;
        double shrinkF= 0.8;
        std::set<int> enlargeIds;
        std::set<int> shrinkIds;
        std::set<int> fixIds;
};
#endif
