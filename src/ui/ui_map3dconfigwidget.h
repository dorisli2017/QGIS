/********************************************************************************
** Form generated from reading UI file 'map3dconfigwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAP3DCONFIGWIDGET_H
#define UI_MAP3DCONFIGWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgsdoublespinbox.h"
#include "qgslightswidget.h"
#include "qgsmaplayercombobox.h"
#include "qgsphongmaterialwidget.h"
#include "qgsscrollarea.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_Map3DConfigWidget
{
public:
    QVBoxLayout *verticalLayout;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalInnerLayout;
    QgsCollapsibleGroupBox *cameraTerrain;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QgsSpinBox *spinCameraFieldOfView;
    QgsCollapsibleGroupBox *groupTerrain;
    QGridLayout *gridLayout1;
    QLabel *labelTerrainLayer;
    QLabel *labelTerrainSkirtHeight;
    QgsMapLayerComboBox *cboTerrainLayer;
    QgsDoubleSpinBox *spinTerrainSkirtHeight;
    QLabel *labelTerrainResolution;
    QgsSpinBox *spinTerrainResolution;
    QLabel *labelTerrainMapTheme;
    QLabel *labelTerrainScale;
    QgsDoubleSpinBox *spinTerrainScale;
    QComboBox *cboTerrainMapTheme;
    QLabel *labelTerrainType;
    QComboBox *cboTerrainType;
    QgsCollapsibleGroupBox *groupTerrainShading;
    QVBoxLayout *verticalLayout_2;
    QgsPhongMaterialWidget *widgetTerrainMaterial;
    QgsCollapsibleGroupBox *groupLights;
    QVBoxLayout *verticalLayout_3;
    QgsLightsWidget *widgetLights;
    QGridLayout *gridLayout_2;
    QLabel *label_6;
    QLabel *label_4;
    QgsSpinBox *spinMapResolution;
    QLabel *label_5;
    QgsDoubleSpinBox *spinGroundError;
    QLabel *label_7;
    QLabel *labelZoomLevels;
    QgsDoubleSpinBox *spinScreenError;
    QCheckBox *chkShowLabels;
    QCheckBox *chkShowTileInfo;
    QCheckBox *chkShowBoundingBoxes;
    QCheckBox *chkShowCameraViewCenter;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Map3DConfigWidget)
    {
        if (Map3DConfigWidget->objectName().isEmpty())
            Map3DConfigWidget->setObjectName(QStringLiteral("Map3DConfigWidget"));
        Map3DConfigWidget->resize(623, 661);
        verticalLayout = new QVBoxLayout(Map3DConfigWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        scrollArea = new QgsScrollArea(Map3DConfigWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 557, 1298));
        verticalInnerLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalInnerLayout->setObjectName(QStringLiteral("verticalInnerLayout"));
        cameraTerrain = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        cameraTerrain->setObjectName(QStringLiteral("cameraTerrain"));
        gridLayout = new QGridLayout(cameraTerrain);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_3 = new QLabel(cameraTerrain);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        spinCameraFieldOfView = new QgsSpinBox(cameraTerrain);
        spinCameraFieldOfView->setObjectName(QStringLiteral("spinCameraFieldOfView"));
        spinCameraFieldOfView->setMaximum(180);

        gridLayout->addWidget(spinCameraFieldOfView, 1, 1, 1, 2);


        verticalInnerLayout->addWidget(cameraTerrain);

        groupTerrain = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        groupTerrain->setObjectName(QStringLiteral("groupTerrain"));
        gridLayout1 = new QGridLayout(groupTerrain);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        labelTerrainLayer = new QLabel(groupTerrain);
        labelTerrainLayer->setObjectName(QStringLiteral("labelTerrainLayer"));

        gridLayout1->addWidget(labelTerrainLayer, 1, 0, 1, 1);

        labelTerrainSkirtHeight = new QLabel(groupTerrain);
        labelTerrainSkirtHeight->setObjectName(QStringLiteral("labelTerrainSkirtHeight"));

        gridLayout1->addWidget(labelTerrainSkirtHeight, 4, 0, 1, 1);

        cboTerrainLayer = new QgsMapLayerComboBox(groupTerrain);
        cboTerrainLayer->setObjectName(QStringLiteral("cboTerrainLayer"));

        gridLayout1->addWidget(cboTerrainLayer, 1, 1, 1, 2);

        spinTerrainSkirtHeight = new QgsDoubleSpinBox(groupTerrain);
        spinTerrainSkirtHeight->setObjectName(QStringLiteral("spinTerrainSkirtHeight"));
        spinTerrainSkirtHeight->setDecimals(1);
        spinTerrainSkirtHeight->setMaximum(10000);
        spinTerrainSkirtHeight->setSingleStep(10);

        gridLayout1->addWidget(spinTerrainSkirtHeight, 4, 1, 1, 2);

        labelTerrainResolution = new QLabel(groupTerrain);
        labelTerrainResolution->setObjectName(QStringLiteral("labelTerrainResolution"));

        gridLayout1->addWidget(labelTerrainResolution, 3, 0, 1, 1);

        spinTerrainResolution = new QgsSpinBox(groupTerrain);
        spinTerrainResolution->setObjectName(QStringLiteral("spinTerrainResolution"));
        spinTerrainResolution->setMaximum(4096);

        gridLayout1->addWidget(spinTerrainResolution, 3, 1, 1, 2);

        labelTerrainMapTheme = new QLabel(groupTerrain);
        labelTerrainMapTheme->setObjectName(QStringLiteral("labelTerrainMapTheme"));

        gridLayout1->addWidget(labelTerrainMapTheme, 5, 0, 1, 1);

        labelTerrainScale = new QLabel(groupTerrain);
        labelTerrainScale->setObjectName(QStringLiteral("labelTerrainScale"));

        gridLayout1->addWidget(labelTerrainScale, 2, 0, 1, 1);

        spinTerrainScale = new QgsDoubleSpinBox(groupTerrain);
        spinTerrainScale->setObjectName(QStringLiteral("spinTerrainScale"));
        spinTerrainScale->setValue(1);

        gridLayout1->addWidget(spinTerrainScale, 2, 1, 1, 2);

        cboTerrainMapTheme = new QComboBox(groupTerrain);
        cboTerrainMapTheme->setObjectName(QStringLiteral("cboTerrainMapTheme"));
        cboTerrainMapTheme->setEditable(false);

        gridLayout1->addWidget(cboTerrainMapTheme, 5, 1, 1, 2);

        labelTerrainType = new QLabel(groupTerrain);
        labelTerrainType->setObjectName(QStringLiteral("labelTerrainType"));

        gridLayout1->addWidget(labelTerrainType, 0, 0, 1, 1);

        cboTerrainType = new QComboBox(groupTerrain);
        cboTerrainType->setObjectName(QStringLiteral("cboTerrainType"));

        gridLayout1->addWidget(cboTerrainType, 0, 1, 1, 2);


        verticalInnerLayout->addWidget(groupTerrain);

        groupTerrainShading = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        groupTerrainShading->setObjectName(QStringLiteral("groupTerrainShading"));
        groupTerrainShading->setCheckable(true);
        verticalLayout_2 = new QVBoxLayout(groupTerrainShading);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        widgetTerrainMaterial = new QgsPhongMaterialWidget(groupTerrainShading);
        widgetTerrainMaterial->setObjectName(QStringLiteral("widgetTerrainMaterial"));

        verticalLayout_2->addWidget(widgetTerrainMaterial);


        verticalInnerLayout->addWidget(groupTerrainShading);

        groupLights = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        groupLights->setObjectName(QStringLiteral("groupLights"));
        verticalLayout_3 = new QVBoxLayout(groupLights);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        widgetLights = new QgsLightsWidget(groupLights);
        widgetLights->setObjectName(QStringLiteral("widgetLights"));

        verticalLayout_3->addWidget(widgetLights);


        verticalInnerLayout->addWidget(groupLights);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_6 = new QLabel(scrollAreaWidgetContents);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_2->addWidget(label_6, 2, 0, 1, 1);

        label_4 = new QLabel(scrollAreaWidgetContents);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        spinMapResolution = new QgsSpinBox(scrollAreaWidgetContents);
        spinMapResolution->setObjectName(QStringLiteral("spinMapResolution"));
        spinMapResolution->setMaximum(4096);

        gridLayout_2->addWidget(spinMapResolution, 0, 1, 1, 1);

        label_5 = new QLabel(scrollAreaWidgetContents);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_2->addWidget(label_5, 1, 0, 1, 1);

        spinGroundError = new QgsDoubleSpinBox(scrollAreaWidgetContents);
        spinGroundError->setObjectName(QStringLiteral("spinGroundError"));
        spinGroundError->setDecimals(1);
        spinGroundError->setMinimum(0.1);
        spinGroundError->setMaximum(1000);
        spinGroundError->setValue(1);

        gridLayout_2->addWidget(spinGroundError, 2, 1, 1, 1);

        label_7 = new QLabel(scrollAreaWidgetContents);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_2->addWidget(label_7, 3, 0, 1, 1);

        labelZoomLevels = new QLabel(scrollAreaWidgetContents);
        labelZoomLevels->setObjectName(QStringLiteral("labelZoomLevels"));

        gridLayout_2->addWidget(labelZoomLevels, 3, 1, 1, 1);

        spinScreenError = new QgsDoubleSpinBox(scrollAreaWidgetContents);
        spinScreenError->setObjectName(QStringLiteral("spinScreenError"));
        spinScreenError->setDecimals(1);

        gridLayout_2->addWidget(spinScreenError, 1, 1, 1, 1);


        verticalInnerLayout->addLayout(gridLayout_2);

        chkShowLabels = new QCheckBox(scrollAreaWidgetContents);
        chkShowLabels->setObjectName(QStringLiteral("chkShowLabels"));

        verticalInnerLayout->addWidget(chkShowLabels);

        chkShowTileInfo = new QCheckBox(scrollAreaWidgetContents);
        chkShowTileInfo->setObjectName(QStringLiteral("chkShowTileInfo"));

        verticalInnerLayout->addWidget(chkShowTileInfo);

        chkShowBoundingBoxes = new QCheckBox(scrollAreaWidgetContents);
        chkShowBoundingBoxes->setObjectName(QStringLiteral("chkShowBoundingBoxes"));

        verticalInnerLayout->addWidget(chkShowBoundingBoxes);

        chkShowCameraViewCenter = new QCheckBox(scrollAreaWidgetContents);
        chkShowCameraViewCenter->setObjectName(QStringLiteral("chkShowCameraViewCenter"));

        verticalInnerLayout->addWidget(chkShowCameraViewCenter);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalInnerLayout->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        QWidget::setTabOrder(scrollArea, spinCameraFieldOfView);
        QWidget::setTabOrder(spinCameraFieldOfView, cboTerrainType);
        QWidget::setTabOrder(cboTerrainType, cboTerrainLayer);
        QWidget::setTabOrder(cboTerrainLayer, spinTerrainScale);
        QWidget::setTabOrder(spinTerrainScale, spinTerrainResolution);
        QWidget::setTabOrder(spinTerrainResolution, spinTerrainSkirtHeight);
        QWidget::setTabOrder(spinTerrainSkirtHeight, cboTerrainMapTheme);
        QWidget::setTabOrder(cboTerrainMapTheme, groupTerrainShading);
        QWidget::setTabOrder(groupTerrainShading, spinMapResolution);
        QWidget::setTabOrder(spinMapResolution, spinScreenError);
        QWidget::setTabOrder(spinScreenError, spinGroundError);
        QWidget::setTabOrder(spinGroundError, chkShowLabels);
        QWidget::setTabOrder(chkShowLabels, chkShowTileInfo);
        QWidget::setTabOrder(chkShowTileInfo, chkShowBoundingBoxes);
        QWidget::setTabOrder(chkShowBoundingBoxes, chkShowCameraViewCenter);

        retranslateUi(Map3DConfigWidget);

        QMetaObject::connectSlotsByName(Map3DConfigWidget);
    } // setupUi

    void retranslateUi(QWidget *Map3DConfigWidget)
    {
        Map3DConfigWidget->setWindowTitle(QApplication::translate("Map3DConfigWidget", "Configure 3D Map Rendering", Q_NULLPTR));
        cameraTerrain->setTitle(QApplication::translate("Map3DConfigWidget", "Camera", Q_NULLPTR));
        label_3->setText(QApplication::translate("Map3DConfigWidget", "Field of View", Q_NULLPTR));
        spinCameraFieldOfView->setSuffix(QApplication::translate("Map3DConfigWidget", "\302\260", Q_NULLPTR));
        groupTerrain->setTitle(QApplication::translate("Map3DConfigWidget", "Terrain", Q_NULLPTR));
        labelTerrainLayer->setText(QApplication::translate("Map3DConfigWidget", "Elevation", Q_NULLPTR));
        labelTerrainSkirtHeight->setText(QApplication::translate("Map3DConfigWidget", "Skirt height", Q_NULLPTR));
        spinTerrainSkirtHeight->setSuffix(QApplication::translate("Map3DConfigWidget", " map units", Q_NULLPTR));
        labelTerrainResolution->setText(QApplication::translate("Map3DConfigWidget", "Tile resolution", Q_NULLPTR));
        spinTerrainResolution->setSuffix(QApplication::translate("Map3DConfigWidget", " px", Q_NULLPTR));
        labelTerrainMapTheme->setText(QApplication::translate("Map3DConfigWidget", "Map theme", Q_NULLPTR));
        labelTerrainScale->setText(QApplication::translate("Map3DConfigWidget", "Vertical scale", Q_NULLPTR));
        labelTerrainType->setText(QApplication::translate("Map3DConfigWidget", "Type", Q_NULLPTR));
        groupTerrainShading->setTitle(QApplication::translate("Map3DConfigWidget", "Terrain shading", Q_NULLPTR));
        groupLights->setTitle(QApplication::translate("Map3DConfigWidget", "Lights", Q_NULLPTR));
        label_6->setText(QApplication::translate("Map3DConfigWidget", "Max. ground error", Q_NULLPTR));
        label_4->setText(QApplication::translate("Map3DConfigWidget", "Map tile resolution", Q_NULLPTR));
        spinMapResolution->setSuffix(QApplication::translate("Map3DConfigWidget", " px", Q_NULLPTR));
        label_5->setText(QApplication::translate("Map3DConfigWidget", "Max. screen error", Q_NULLPTR));
        spinGroundError->setSuffix(QApplication::translate("Map3DConfigWidget", " map units", Q_NULLPTR));
        label_7->setText(QApplication::translate("Map3DConfigWidget", "Zoom levels", Q_NULLPTR));
        labelZoomLevels->setText(QApplication::translate("Map3DConfigWidget", "0", Q_NULLPTR));
        spinScreenError->setSuffix(QApplication::translate("Map3DConfigWidget", " px", Q_NULLPTR));
        chkShowLabels->setText(QApplication::translate("Map3DConfigWidget", "Show labels", Q_NULLPTR));
        chkShowTileInfo->setText(QApplication::translate("Map3DConfigWidget", "Show map tile info", Q_NULLPTR));
        chkShowBoundingBoxes->setText(QApplication::translate("Map3DConfigWidget", "Show bounding boxes", Q_NULLPTR));
        chkShowCameraViewCenter->setText(QApplication::translate("Map3DConfigWidget", "Show camera's view center", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Map3DConfigWidget: public Ui_Map3DConfigWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAP3DCONFIGWIDGET_H
