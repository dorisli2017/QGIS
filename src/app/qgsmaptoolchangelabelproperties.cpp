/***************************************************************************
                          qgsmaptoolchangelabelproperties.cpp
                          ---------------------------------
    begin                : 2010-11-11
    copyright            : (C) 2010 by Marco Hugentobler
    email                : marco dot hugentobler at sourcepole dot ch
***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#include "qgsmaptoolchangelabelproperties.h"
#include "qgslabelpropertydialog.h"
#include "qgsmapcanvas.h"
#include "qgsrubberband.h"
#include "qgsvectorlayer.h"
#include "qgsmapmouseevent.h"
#include <iostream>
#include <stdio.h>
QTextStream& qStdOut()
{
    static QTextStream ts( stdout );
    return ts;
}
QgsMapToolChangeLabelProperties::QgsMapToolChangeLabelProperties( QgsMapCanvas *canvas ): QgsMapToolLabel( canvas )
{
  std:: cout<< "in QgsMapToolChangeLabelProperties::construction"<< std::endl;
  mPalProperties << QgsPalLayerSettings::PositionX;
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
  mPalProperties << QgsPalLayerSettings::AlwaysShow;
  std:: cout<< "out QgsMapToolChangeLabelProperties::construction"<< std::endl;
}

void QgsMapToolChangeLabelProperties::canvasPressEvent( QgsMapMouseEvent *e )
{
  std:: cout<< "in QgsMapToolChangeLabelProperties::canvasPressEvent"<< std::endl;
  deleteRubberBands();

  QgsLabelPosition labelPos;
  if ( !labelAtPosition( e, labelPos ) || labelPos.isDiagram )
  {
    std::cout<< "!labelAtPosition( e, labelPos ) || labelPos.isDiagram "<< std::endl;
    mCurrentLabel = LabelDetails();
    return;
  }

  mCurrentLabel = LabelDetails( labelPos );
  if ( !mCurrentLabel.valid || !mCurrentLabel.layer )
  {
    std::cout<< "!mCurrentLabel.valid || !mCurrentLabel.layer"<< std::endl;
    return;
  }

  createRubberBands();

  if ( !mCurrentLabel.layer->isEditable() )
  {
    std::cout<< "!mCurrentLabel.layer->isEditable()"<< std::endl;
    std::cout<< "layer->auxiliaryLayer() "<<mCurrentLabel.layer->auxiliaryLayer() << std::endl;
    QgsPalIndexes indexes;
    bool newAuxiliaryLayer = createAuxiliaryFields( indexes );
    // to understand
      qDebug()<< indexes;
    //to understand
    if ( !newAuxiliaryLayer && !mCurrentLabel.layer->auxiliaryLayer() )
    {
      std::cout<< "!newAuxiliaryLayer && !mCurrentLabel.layer->auxiliaryLayer()"<< std::endl;
      std::cout<< "layer->auxiliaryLayer() "<<mCurrentLabel.layer->auxiliaryLayer() << std::endl;
      deleteRubberBands();
      return;
    }

    // in case of a new auxiliary layer, a dialog window is displayed and the
    // canvas release event is lost.
    if ( newAuxiliaryLayer )
    {
      std::cout<< "newAuxiliaryLayer"<< std::endl;
      std::cout<< "layer->auxiliaryLayer() "<<mCurrentLabel.layer->auxiliaryLayer() << std::endl;
      canvasReleaseEvent( e );
    }
  }
  std::cout<< "layer->auxiliaryLayer() "<<mCurrentLabel.layer->auxiliaryLayer() << std::endl;
  std:: cout<< "out QgsMapToolChangeLabelProperties::canvasPressEvent"<< std::endl;
}

void QgsMapToolChangeLabelProperties::canvasReleaseEvent( QgsMapMouseEvent *e )
{
  std:: cout<< "in QgsMapToolChangeLabelProperties::canvasReleaseEvent"<< std::endl;
  Q_UNUSED( e );
  if ( mLabelRubberBand && mCurrentLabel.valid )
  {
    QString labeltext = QString(); // NULL QString signifies no expression
    if ( mCurrentLabel.settings.isExpression )
    {
      labeltext = mCurrentLabel.pos.labelText;
    }

    QgsLabelPropertyDialog d( mCurrentLabel.pos.layerID,
                              mCurrentLabel.pos.providerID,
                              mCurrentLabel.pos.featureId,
                              mCurrentLabel.pos.labelFont,
                              labeltext, nullptr );
    d.setMapCanvas( canvas() );

    connect( &d, &QgsLabelPropertyDialog::applied, this, &QgsMapToolChangeLabelProperties::dialogPropertiesApplied );
    if ( d.exec() == QDialog::Accepted )
    {
      applyChanges( d.changedProperties() );
    }

    deleteRubberBands();
  }
  std:: cout<< "out QgsMapToolChangeLabelProperties::canvasReleaseEvent"<< std::endl;
}

void QgsMapToolChangeLabelProperties::applyChanges( const QgsAttributeMap &changes )
{
  std::cout<< "in QgsMapToolChangeLabelProperties::applyChanges"<< std::endl;
  QgsVectorLayer *vlayer = mCurrentLabel.layer;
  std::cout<<"change size is "<< changes.size()<<std:: endl;
  if ( !vlayer )
    return;

  if ( !changes.isEmpty() )
  {
    vlayer->beginEditCommand( tr( "Changed properties for label" ) + QStringLiteral( " '%1'" ).arg( currentLabelText( 24 ) ) );

    QgsAttributeMap::const_iterator changeIt = changes.constBegin();
    for ( ; changeIt != changes.constEnd(); ++changeIt )
    {
      // print each change
      std:: cout<<"key "<<  changeIt.key()<<std:: endl;
      //std:: cout<<"values"<<  changeIt.value().toString().toUtf8().constData()<< endl;
      //std:: cout<<"values "<<  changeIt.value().toSizeF().width()<< endl;
      //std:: cout<<"values "<<  changeIt.value().toSizeF().height()<< endl;
      vlayer->changeAttributeValue( mCurrentLabel.pos.featureId, changeIt.key(), changeIt.value() );
    }

    vlayer->endEditCommand();
    vlayer->triggerRepaint();
  }
  std::cout<< "out QgsMapToolChangeLabelProperties::applyChanges"<< std::endl;
}

void QgsMapToolChangeLabelProperties::dialogPropertiesApplied()
{
  std::cout<< "in QgsMapToolChangeLabelProperties::dialogPropertiesApplied"<< std::endl;
  QgsLabelPropertyDialog *dlg = qobject_cast<QgsLabelPropertyDialog *>( sender() );
  if ( !dlg )
    return;
  applyChanges( dlg->changedProperties() );
  std::cout<< "out QgsMapToolChangeLabelProperties::dialogPropertiesApplied"<< std::endl;
}

