/********************************************************************************
** Form generated from reading UI file 'qgsgeometrycheckersetuptab.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSGEOMETRYCHECKERSETUPTAB_H
#define UI_QGSGEOMETRYCHECKERSETUPTAB_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgsvscrollarea.h"

QT_BEGIN_NAMESPACE

class Ui_QgsGeometryCheckerSetupTab
{
public:
    QGridLayout *gridLayout_7;
    QgsVScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_4;
    QWidget *widgetInputs;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBoxInputLayers;
    QVBoxLayout *verticalLayout;
    QListWidget *listWidgetInputLayers;
    QCheckBox *checkBoxInputSelectedOnly;
    QFrame *line;
    QgsCollapsibleGroupBox *groupBoxGeometryTypes;
    QGridLayout *gridLayout;
    QCheckBox *checkBoxPoint;
    QCheckBox *checkBoxMultipoint;
    QCheckBox *checkBoxLine;
    QCheckBox *checkBoxMultiline;
    QCheckBox *checkBoxPolygon;
    QCheckBox *checkBoxMultipolygon;
    QgsCollapsibleGroupBox *groupBox_2;
    QGridLayout *gridLayout_8;
    QCheckBox *checkBoxSelfIntersections;
    QCheckBox *checkBoxDuplicateNodes;
    QCheckBox *checkBoxDegeneratePolygon;
    QCheckBox *checkBoxSelfContacts;
    QgsCollapsibleGroupBox *groupBoxGeometryProperties;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *checkBoxNoHoles;
    QCheckBox *checkBoxMultipart;
    QCheckBox *checkBoxDangle;
    QgsCollapsibleGroupBox *groupBoxGeometryConditions;
    QGridLayout *gridLayout_2;
    QDoubleSpinBox *doubleSpinBoxAngle;
    QCheckBox *checkBoxAngle;
    QCheckBox *checkBoxSegmentLength;
    QDoubleSpinBox *doubleSpinBoxArea;
    QDoubleSpinBox *doubleSpinBoxSegmentLength;
    QCheckBox *checkBoxArea;
    QCheckBox *checkBoxSliverPolygons;
    QWidget *widgetSliverThreshold;
    QGridLayout *gridLayout_6;
    QDoubleSpinBox *doubleSpinBoxSliverArea;
    QLabel *labelSliverThinness;
    QLabel *labelSliverThinnessHelp;
    QDoubleSpinBox *doubleSpinBoxSliverThinness;
    QCheckBox *checkBoxSliverArea;
    QgsCollapsibleGroupBox *groupBoxTopology;
    QGridLayout *gridLayout_3;
    QCheckBox *checkBoxDuplicates;
    QDoubleSpinBox *doubleSpinBoxGapArea;
    QComboBox *comboLineLayerIntersection;
    QCheckBox *checkLineIntersection;
    QCheckBox *checkBoxGaps;
    QDoubleSpinBox *doubleSpinBoxOverlapArea;
    QCheckBox *checkBoxCovered;
    QCheckBox *checkPointCoveredByLine;
    QCheckBox *checkLineLayerIntersection;
    QCheckBox *checkBoxOverlaps;
    QCheckBox *checkPointInPolygon;
    QLabel *label;
    QCheckBox *checkBoxFollowBoundaries;
    QComboBox *comboBoxFollowBoundaries;
    QFrame *line_2;
    QGridLayout *gridLayout_10;
    QSpinBox *spinBoxTolerance;
    QLabel *labelTolerance;
    QFrame *line_3;
    QGroupBox *groupBoxOutputLayers;
    QGridLayout *gridLayout_5;
    QRadioButton *radioButtonOutputNew;
    QRadioButton *radioButtonOutputModifyInput;
    QFrame *frameOutput;
    QGridLayout *gridLayout_9;
    QLabel *labelOutputFormat;
    QLabel *labelOutputDirectory;
    QLineEdit *lineEditOutputDirectory;
    QPushButton *pushButtonOutputDirectory;
    QComboBox *comboBoxOutputFormat;
    QLabel *labelFilenamePrefix;
    QLineEdit *lineEditFilenamePrefix;
    QWidget *widgetProgress;
    QHBoxLayout *horizontalLayout;
    QProgressBar *progressBar;
    QLabel *labelStatus;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;
    QButtonGroup *buttonGroupOutput;

    void setupUi(QWidget *QgsGeometryCheckerSetupTab)
    {
        if (QgsGeometryCheckerSetupTab->objectName().isEmpty())
            QgsGeometryCheckerSetupTab->setObjectName(QStringLiteral("QgsGeometryCheckerSetupTab"));
        QgsGeometryCheckerSetupTab->resize(640, 726);
        gridLayout_7 = new QGridLayout(QgsGeometryCheckerSetupTab);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QgsVScrollArea(QgsGeometryCheckerSetupTab);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setLineWidth(1);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 656, 960));
        gridLayout_4 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        widgetInputs = new QWidget(scrollAreaWidgetContents);
        widgetInputs->setObjectName(QStringLiteral("widgetInputs"));
        verticalLayout_5 = new QVBoxLayout(widgetInputs);
        verticalLayout_5->setSpacing(2);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 2, 0, 2);
        groupBoxInputLayers = new QGroupBox(widgetInputs);
        groupBoxInputLayers->setObjectName(QStringLiteral("groupBoxInputLayers"));
        groupBoxInputLayers->setFlat(true);
        verticalLayout = new QVBoxLayout(groupBoxInputLayers);
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        listWidgetInputLayers = new QListWidget(groupBoxInputLayers);
        listWidgetInputLayers->setObjectName(QStringLiteral("listWidgetInputLayers"));

        verticalLayout->addWidget(listWidgetInputLayers);

        checkBoxInputSelectedOnly = new QCheckBox(groupBoxInputLayers);
        checkBoxInputSelectedOnly->setObjectName(QStringLiteral("checkBoxInputSelectedOnly"));

        verticalLayout->addWidget(checkBoxInputSelectedOnly);


        verticalLayout_5->addWidget(groupBoxInputLayers);

        line = new QFrame(widgetInputs);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(line);

        groupBoxGeometryTypes = new QgsCollapsibleGroupBox(widgetInputs);
        groupBoxGeometryTypes->setObjectName(QStringLiteral("groupBoxGeometryTypes"));
        groupBoxGeometryTypes->setProperty("flat", QVariant(true));
        gridLayout = new QGridLayout(groupBoxGeometryTypes);
        gridLayout->setSpacing(2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(2, 2, 2, 2);
        checkBoxPoint = new QCheckBox(groupBoxGeometryTypes);
        checkBoxPoint->setObjectName(QStringLiteral("checkBoxPoint"));

        gridLayout->addWidget(checkBoxPoint, 0, 0, 1, 1);

        checkBoxMultipoint = new QCheckBox(groupBoxGeometryTypes);
        checkBoxMultipoint->setObjectName(QStringLiteral("checkBoxMultipoint"));

        gridLayout->addWidget(checkBoxMultipoint, 1, 0, 1, 1);

        checkBoxLine = new QCheckBox(groupBoxGeometryTypes);
        checkBoxLine->setObjectName(QStringLiteral("checkBoxLine"));

        gridLayout->addWidget(checkBoxLine, 0, 1, 1, 1);

        checkBoxMultiline = new QCheckBox(groupBoxGeometryTypes);
        checkBoxMultiline->setObjectName(QStringLiteral("checkBoxMultiline"));

        gridLayout->addWidget(checkBoxMultiline, 1, 1, 1, 1);

        checkBoxPolygon = new QCheckBox(groupBoxGeometryTypes);
        checkBoxPolygon->setObjectName(QStringLiteral("checkBoxPolygon"));

        gridLayout->addWidget(checkBoxPolygon, 0, 2, 1, 1);

        checkBoxMultipolygon = new QCheckBox(groupBoxGeometryTypes);
        checkBoxMultipolygon->setObjectName(QStringLiteral("checkBoxMultipolygon"));

        gridLayout->addWidget(checkBoxMultipolygon, 1, 2, 1, 1);


        verticalLayout_5->addWidget(groupBoxGeometryTypes);

        groupBox_2 = new QgsCollapsibleGroupBox(widgetInputs);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setProperty("flat", QVariant(true));
        gridLayout_8 = new QGridLayout(groupBox_2);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        gridLayout_8->setContentsMargins(2, 2, 2, 2);
        checkBoxSelfIntersections = new QCheckBox(groupBox_2);
        checkBoxSelfIntersections->setObjectName(QStringLiteral("checkBoxSelfIntersections"));
        checkBoxSelfIntersections->setChecked(true);

        gridLayout_8->addWidget(checkBoxSelfIntersections, 0, 0, 1, 1);

        checkBoxDuplicateNodes = new QCheckBox(groupBox_2);
        checkBoxDuplicateNodes->setObjectName(QStringLiteral("checkBoxDuplicateNodes"));
        checkBoxDuplicateNodes->setChecked(true);

        gridLayout_8->addWidget(checkBoxDuplicateNodes, 1, 0, 1, 1);

        checkBoxDegeneratePolygon = new QCheckBox(groupBox_2);
        checkBoxDegeneratePolygon->setObjectName(QStringLiteral("checkBoxDegeneratePolygon"));
        checkBoxDegeneratePolygon->setChecked(true);

        gridLayout_8->addWidget(checkBoxDegeneratePolygon, 1, 1, 1, 1);

        checkBoxSelfContacts = new QCheckBox(groupBox_2);
        checkBoxSelfContacts->setObjectName(QStringLiteral("checkBoxSelfContacts"));
        checkBoxSelfContacts->setChecked(true);

        gridLayout_8->addWidget(checkBoxSelfContacts, 0, 1, 1, 1);


        verticalLayout_5->addWidget(groupBox_2);

        groupBoxGeometryProperties = new QgsCollapsibleGroupBox(widgetInputs);
        groupBoxGeometryProperties->setObjectName(QStringLiteral("groupBoxGeometryProperties"));
        groupBoxGeometryProperties->setProperty("flat", QVariant(true));
        verticalLayout_2 = new QVBoxLayout(groupBoxGeometryProperties);
        verticalLayout_2->setSpacing(2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(2, 2, 2, 2);
        checkBoxNoHoles = new QCheckBox(groupBoxGeometryProperties);
        checkBoxNoHoles->setObjectName(QStringLiteral("checkBoxNoHoles"));

        verticalLayout_2->addWidget(checkBoxNoHoles);

        checkBoxMultipart = new QCheckBox(groupBoxGeometryProperties);
        checkBoxMultipart->setObjectName(QStringLiteral("checkBoxMultipart"));

        verticalLayout_2->addWidget(checkBoxMultipart);

        checkBoxDangle = new QCheckBox(groupBoxGeometryProperties);
        checkBoxDangle->setObjectName(QStringLiteral("checkBoxDangle"));

        verticalLayout_2->addWidget(checkBoxDangle);


        verticalLayout_5->addWidget(groupBoxGeometryProperties);

        groupBoxGeometryConditions = new QgsCollapsibleGroupBox(widgetInputs);
        groupBoxGeometryConditions->setObjectName(QStringLiteral("groupBoxGeometryConditions"));
        groupBoxGeometryConditions->setProperty("flat", QVariant(true));
        gridLayout_2 = new QGridLayout(groupBoxGeometryConditions);
        gridLayout_2->setSpacing(2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(2, 2, 2, 2);
        doubleSpinBoxAngle = new QDoubleSpinBox(groupBoxGeometryConditions);
        doubleSpinBoxAngle->setObjectName(QStringLiteral("doubleSpinBoxAngle"));
        doubleSpinBoxAngle->setDecimals(6);
        doubleSpinBoxAngle->setMaximum(360);

        gridLayout_2->addWidget(doubleSpinBoxAngle, 1, 2, 1, 1);

        checkBoxAngle = new QCheckBox(groupBoxGeometryConditions);
        checkBoxAngle->setObjectName(QStringLiteral("checkBoxAngle"));

        gridLayout_2->addWidget(checkBoxAngle, 1, 0, 1, 1);

        checkBoxSegmentLength = new QCheckBox(groupBoxGeometryConditions);
        checkBoxSegmentLength->setObjectName(QStringLiteral("checkBoxSegmentLength"));

        gridLayout_2->addWidget(checkBoxSegmentLength, 0, 0, 1, 1);

        doubleSpinBoxArea = new QDoubleSpinBox(groupBoxGeometryConditions);
        doubleSpinBoxArea->setObjectName(QStringLiteral("doubleSpinBoxArea"));
        doubleSpinBoxArea->setDecimals(6);
        doubleSpinBoxArea->setMaximum(1e+9);

        gridLayout_2->addWidget(doubleSpinBoxArea, 2, 2, 1, 1);

        doubleSpinBoxSegmentLength = new QDoubleSpinBox(groupBoxGeometryConditions);
        doubleSpinBoxSegmentLength->setObjectName(QStringLiteral("doubleSpinBoxSegmentLength"));
        doubleSpinBoxSegmentLength->setDecimals(6);
        doubleSpinBoxSegmentLength->setMaximum(1e+9);

        gridLayout_2->addWidget(doubleSpinBoxSegmentLength, 0, 2, 1, 1);

        checkBoxArea = new QCheckBox(groupBoxGeometryConditions);
        checkBoxArea->setObjectName(QStringLiteral("checkBoxArea"));

        gridLayout_2->addWidget(checkBoxArea, 2, 0, 1, 1);

        checkBoxSliverPolygons = new QCheckBox(groupBoxGeometryConditions);
        checkBoxSliverPolygons->setObjectName(QStringLiteral("checkBoxSliverPolygons"));

        gridLayout_2->addWidget(checkBoxSliverPolygons, 3, 0, 1, 1);

        widgetSliverThreshold = new QWidget(groupBoxGeometryConditions);
        widgetSliverThreshold->setObjectName(QStringLiteral("widgetSliverThreshold"));
        widgetSliverThreshold->setEnabled(false);
        gridLayout_6 = new QGridLayout(widgetSliverThreshold);
        gridLayout_6->setSpacing(0);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        doubleSpinBoxSliverArea = new QDoubleSpinBox(widgetSliverThreshold);
        doubleSpinBoxSliverArea->setObjectName(QStringLiteral("doubleSpinBoxSliverArea"));
        doubleSpinBoxSliverArea->setEnabled(false);
        doubleSpinBoxSliverArea->setDecimals(6);
        doubleSpinBoxSliverArea->setMaximum(1000);

        gridLayout_6->addWidget(doubleSpinBoxSliverArea, 1, 2, 1, 1);

        labelSliverThinness = new QLabel(widgetSliverThreshold);
        labelSliverThinness->setObjectName(QStringLiteral("labelSliverThinness"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelSliverThinness->sizePolicy().hasHeightForWidth());
        labelSliverThinness->setSizePolicy(sizePolicy);

        gridLayout_6->addWidget(labelSliverThinness, 0, 0, 1, 1);

        labelSliverThinnessHelp = new QLabel(widgetSliverThreshold);
        labelSliverThinnessHelp->setObjectName(QStringLiteral("labelSliverThinnessHelp"));
        labelSliverThinnessHelp->setPixmap(QPixmap(QString::fromUtf8(":/geometrychecker/icons/tooltip.png")));
        labelSliverThinnessHelp->setScaledContents(false);

        gridLayout_6->addWidget(labelSliverThinnessHelp, 0, 1, 1, 1);

        doubleSpinBoxSliverThinness = new QDoubleSpinBox(widgetSliverThreshold);
        doubleSpinBoxSliverThinness->setObjectName(QStringLiteral("doubleSpinBoxSliverThinness"));
        doubleSpinBoxSliverThinness->setDecimals(0);
        doubleSpinBoxSliverThinness->setMinimum(1);
        doubleSpinBoxSliverThinness->setMaximum(10000);
        doubleSpinBoxSliverThinness->setValue(20);

        gridLayout_6->addWidget(doubleSpinBoxSliverThinness, 0, 2, 1, 1);

        checkBoxSliverArea = new QCheckBox(widgetSliverThreshold);
        checkBoxSliverArea->setObjectName(QStringLiteral("checkBoxSliverArea"));

        gridLayout_6->addWidget(checkBoxSliverArea, 1, 0, 1, 2);


        gridLayout_2->addWidget(widgetSliverThreshold, 3, 2, 1, 1);


        verticalLayout_5->addWidget(groupBoxGeometryConditions);

        groupBoxTopology = new QgsCollapsibleGroupBox(widgetInputs);
        groupBoxTopology->setObjectName(QStringLiteral("groupBoxTopology"));
        groupBoxTopology->setProperty("flat", QVariant(true));
        gridLayout_3 = new QGridLayout(groupBoxTopology);
        gridLayout_3->setSpacing(2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(2, 2, 2, 2);
        checkBoxDuplicates = new QCheckBox(groupBoxTopology);
        checkBoxDuplicates->setObjectName(QStringLiteral("checkBoxDuplicates"));

        gridLayout_3->addWidget(checkBoxDuplicates, 0, 0, 1, 1);

        doubleSpinBoxGapArea = new QDoubleSpinBox(groupBoxTopology);
        doubleSpinBoxGapArea->setObjectName(QStringLiteral("doubleSpinBoxGapArea"));
        doubleSpinBoxGapArea->setDecimals(6);
        doubleSpinBoxGapArea->setMaximum(1e+9);

        gridLayout_3->addWidget(doubleSpinBoxGapArea, 3, 1, 1, 1);

        comboLineLayerIntersection = new QComboBox(groupBoxTopology);
        comboLineLayerIntersection->setObjectName(QStringLiteral("comboLineLayerIntersection"));
        comboLineLayerIntersection->setEnabled(false);

        gridLayout_3->addWidget(comboLineLayerIntersection, 7, 1, 1, 1);

        checkLineIntersection = new QCheckBox(groupBoxTopology);
        checkLineIntersection->setObjectName(QStringLiteral("checkLineIntersection"));

        gridLayout_3->addWidget(checkLineIntersection, 6, 0, 1, 1);

        checkBoxGaps = new QCheckBox(groupBoxTopology);
        checkBoxGaps->setObjectName(QStringLiteral("checkBoxGaps"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(checkBoxGaps->sizePolicy().hasHeightForWidth());
        checkBoxGaps->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(checkBoxGaps, 3, 0, 1, 1);

        doubleSpinBoxOverlapArea = new QDoubleSpinBox(groupBoxTopology);
        doubleSpinBoxOverlapArea->setObjectName(QStringLiteral("doubleSpinBoxOverlapArea"));
        doubleSpinBoxOverlapArea->setDecimals(6);
        doubleSpinBoxOverlapArea->setMaximum(1e+9);

        gridLayout_3->addWidget(doubleSpinBoxOverlapArea, 2, 1, 1, 1);

        checkBoxCovered = new QCheckBox(groupBoxTopology);
        checkBoxCovered->setObjectName(QStringLiteral("checkBoxCovered"));

        gridLayout_3->addWidget(checkBoxCovered, 1, 0, 1, 1);

        checkPointCoveredByLine = new QCheckBox(groupBoxTopology);
        checkPointCoveredByLine->setObjectName(QStringLiteral("checkPointCoveredByLine"));

        gridLayout_3->addWidget(checkPointCoveredByLine, 4, 0, 1, 1);

        checkLineLayerIntersection = new QCheckBox(groupBoxTopology);
        checkLineLayerIntersection->setObjectName(QStringLiteral("checkLineLayerIntersection"));

        gridLayout_3->addWidget(checkLineLayerIntersection, 7, 0, 1, 1);

        checkBoxOverlaps = new QCheckBox(groupBoxTopology);
        checkBoxOverlaps->setObjectName(QStringLiteral("checkBoxOverlaps"));
        sizePolicy1.setHeightForWidth(checkBoxOverlaps->sizePolicy().hasHeightForWidth());
        checkBoxOverlaps->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(checkBoxOverlaps, 2, 0, 1, 1);

        checkPointInPolygon = new QCheckBox(groupBoxTopology);
        checkPointInPolygon->setObjectName(QStringLiteral("checkPointInPolygon"));

        gridLayout_3->addWidget(checkPointInPolygon, 5, 0, 1, 1);

        label = new QLabel(groupBoxTopology);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_3->addWidget(label, 10, 0, 1, 2);

        checkBoxFollowBoundaries = new QCheckBox(groupBoxTopology);
        checkBoxFollowBoundaries->setObjectName(QStringLiteral("checkBoxFollowBoundaries"));

        gridLayout_3->addWidget(checkBoxFollowBoundaries, 8, 0, 1, 1);

        comboBoxFollowBoundaries = new QComboBox(groupBoxTopology);
        comboBoxFollowBoundaries->setObjectName(QStringLiteral("comboBoxFollowBoundaries"));
        comboBoxFollowBoundaries->setEnabled(false);

        gridLayout_3->addWidget(comboBoxFollowBoundaries, 8, 1, 1, 1);


        verticalLayout_5->addWidget(groupBoxTopology);

        line_2 = new QFrame(widgetInputs);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(line_2);

        gridLayout_10 = new QGridLayout();
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        gridLayout_10->setContentsMargins(2, 2, 2, 2);
        spinBoxTolerance = new QSpinBox(widgetInputs);
        spinBoxTolerance->setObjectName(QStringLiteral("spinBoxTolerance"));
        spinBoxTolerance->setPrefix(QStringLiteral("1E-"));
        spinBoxTolerance->setMinimum(3);
        spinBoxTolerance->setMaximum(16);
        spinBoxTolerance->setValue(8);

        gridLayout_10->addWidget(spinBoxTolerance, 0, 1, 1, 1);

        labelTolerance = new QLabel(widgetInputs);
        labelTolerance->setObjectName(QStringLiteral("labelTolerance"));

        gridLayout_10->addWidget(labelTolerance, 0, 0, 1, 1);


        verticalLayout_5->addLayout(gridLayout_10);

        line_3 = new QFrame(widgetInputs);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(line_3);

        groupBoxOutputLayers = new QGroupBox(widgetInputs);
        groupBoxOutputLayers->setObjectName(QStringLiteral("groupBoxOutputLayers"));
        groupBoxOutputLayers->setFlat(true);
        gridLayout_5 = new QGridLayout(groupBoxOutputLayers);
        gridLayout_5->setSpacing(2);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(2, 2, 2, 2);
        radioButtonOutputNew = new QRadioButton(groupBoxOutputLayers);
        buttonGroupOutput = new QButtonGroup(QgsGeometryCheckerSetupTab);
        buttonGroupOutput->setObjectName(QStringLiteral("buttonGroupOutput"));
        buttonGroupOutput->addButton(radioButtonOutputNew);
        radioButtonOutputNew->setObjectName(QStringLiteral("radioButtonOutputNew"));
        radioButtonOutputNew->setChecked(true);

        gridLayout_5->addWidget(radioButtonOutputNew, 1, 0, 1, 1);

        radioButtonOutputModifyInput = new QRadioButton(groupBoxOutputLayers);
        buttonGroupOutput->addButton(radioButtonOutputModifyInput);
        radioButtonOutputModifyInput->setObjectName(QStringLiteral("radioButtonOutputModifyInput"));

        gridLayout_5->addWidget(radioButtonOutputModifyInput, 0, 0, 1, 3);

        frameOutput = new QFrame(groupBoxOutputLayers);
        frameOutput->setObjectName(QStringLiteral("frameOutput"));
        frameOutput->setFrameShape(QFrame::StyledPanel);
        frameOutput->setFrameShadow(QFrame::Raised);
        gridLayout_9 = new QGridLayout(frameOutput);
        gridLayout_9->setSpacing(2);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        gridLayout_9->setContentsMargins(2, 2, 2, 2);
        labelOutputFormat = new QLabel(frameOutput);
        labelOutputFormat->setObjectName(QStringLiteral("labelOutputFormat"));

        gridLayout_9->addWidget(labelOutputFormat, 0, 0, 1, 1);

        labelOutputDirectory = new QLabel(frameOutput);
        labelOutputDirectory->setObjectName(QStringLiteral("labelOutputDirectory"));

        gridLayout_9->addWidget(labelOutputDirectory, 1, 0, 1, 1);

        lineEditOutputDirectory = new QLineEdit(frameOutput);
        lineEditOutputDirectory->setObjectName(QStringLiteral("lineEditOutputDirectory"));
        lineEditOutputDirectory->setReadOnly(true);

        gridLayout_9->addWidget(lineEditOutputDirectory, 1, 1, 1, 1);

        pushButtonOutputDirectory = new QPushButton(frameOutput);
        pushButtonOutputDirectory->setObjectName(QStringLiteral("pushButtonOutputDirectory"));

        gridLayout_9->addWidget(pushButtonOutputDirectory, 1, 2, 1, 1);

        comboBoxOutputFormat = new QComboBox(frameOutput);
        comboBoxOutputFormat->setObjectName(QStringLiteral("comboBoxOutputFormat"));

        gridLayout_9->addWidget(comboBoxOutputFormat, 0, 1, 1, 2);

        labelFilenamePrefix = new QLabel(frameOutput);
        labelFilenamePrefix->setObjectName(QStringLiteral("labelFilenamePrefix"));

        gridLayout_9->addWidget(labelFilenamePrefix, 2, 0, 1, 1);

        lineEditFilenamePrefix = new QLineEdit(frameOutput);
        lineEditFilenamePrefix->setObjectName(QStringLiteral("lineEditFilenamePrefix"));

        gridLayout_9->addWidget(lineEditFilenamePrefix, 2, 1, 1, 2);


        gridLayout_5->addWidget(frameOutput, 1, 1, 1, 1);


        verticalLayout_5->addWidget(groupBoxOutputLayers);

        groupBoxInputLayers->raise();
        groupBox_2->raise();
        groupBoxGeometryConditions->raise();
        line->raise();
        groupBoxGeometryProperties->raise();
        groupBoxTopology->raise();
        groupBoxOutputLayers->raise();
        line_2->raise();
        line_3->raise();
        groupBoxGeometryTypes->raise();

        gridLayout_4->addWidget(widgetInputs, 0, 0, 1, 1);

        widgetProgress = new QWidget(scrollAreaWidgetContents);
        widgetProgress->setObjectName(QStringLiteral("widgetProgress"));
        horizontalLayout = new QHBoxLayout(widgetProgress);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        progressBar = new QProgressBar(widgetProgress);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(24);

        horizontalLayout->addWidget(progressBar);

        labelStatus = new QLabel(widgetProgress);
        labelStatus->setObjectName(QStringLiteral("labelStatus"));

        horizontalLayout->addWidget(labelStatus);

        buttonBox = new QDialogButtonBox(widgetProgress);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::NoButton);

        horizontalLayout->addWidget(buttonBox);


        gridLayout_4->addWidget(widgetProgress, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 2, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_7->addWidget(scrollArea, 0, 0, 1, 1);

        QWidget::setTabOrder(scrollArea, listWidgetInputLayers);
        QWidget::setTabOrder(listWidgetInputLayers, checkBoxInputSelectedOnly);
        QWidget::setTabOrder(checkBoxInputSelectedOnly, checkBoxPoint);
        QWidget::setTabOrder(checkBoxPoint, checkBoxMultipoint);
        QWidget::setTabOrder(checkBoxMultipoint, checkBoxLine);
        QWidget::setTabOrder(checkBoxLine, checkBoxMultiline);
        QWidget::setTabOrder(checkBoxMultiline, checkBoxPolygon);
        QWidget::setTabOrder(checkBoxPolygon, checkBoxMultipolygon);
        QWidget::setTabOrder(checkBoxMultipolygon, checkBoxSelfIntersections);
        QWidget::setTabOrder(checkBoxSelfIntersections, checkBoxDuplicateNodes);
        QWidget::setTabOrder(checkBoxDuplicateNodes, checkBoxSelfContacts);
        QWidget::setTabOrder(checkBoxSelfContacts, checkBoxDegeneratePolygon);
        QWidget::setTabOrder(checkBoxDegeneratePolygon, checkBoxNoHoles);
        QWidget::setTabOrder(checkBoxNoHoles, checkBoxMultipart);
        QWidget::setTabOrder(checkBoxMultipart, checkBoxDangle);
        QWidget::setTabOrder(checkBoxDangle, checkBoxSegmentLength);
        QWidget::setTabOrder(checkBoxSegmentLength, doubleSpinBoxSegmentLength);
        QWidget::setTabOrder(doubleSpinBoxSegmentLength, checkBoxAngle);
        QWidget::setTabOrder(checkBoxAngle, doubleSpinBoxAngle);
        QWidget::setTabOrder(doubleSpinBoxAngle, checkBoxArea);
        QWidget::setTabOrder(checkBoxArea, doubleSpinBoxArea);
        QWidget::setTabOrder(doubleSpinBoxArea, checkBoxSliverPolygons);
        QWidget::setTabOrder(checkBoxSliverPolygons, doubleSpinBoxSliverThinness);
        QWidget::setTabOrder(doubleSpinBoxSliverThinness, checkBoxSliverArea);
        QWidget::setTabOrder(checkBoxSliverArea, doubleSpinBoxSliverArea);
        QWidget::setTabOrder(doubleSpinBoxSliverArea, checkBoxDuplicates);
        QWidget::setTabOrder(checkBoxDuplicates, checkBoxCovered);
        QWidget::setTabOrder(checkBoxCovered, checkBoxOverlaps);
        QWidget::setTabOrder(checkBoxOverlaps, doubleSpinBoxOverlapArea);
        QWidget::setTabOrder(doubleSpinBoxOverlapArea, checkBoxGaps);
        QWidget::setTabOrder(checkBoxGaps, doubleSpinBoxGapArea);
        QWidget::setTabOrder(doubleSpinBoxGapArea, checkPointCoveredByLine);
        QWidget::setTabOrder(checkPointCoveredByLine, checkPointInPolygon);
        QWidget::setTabOrder(checkPointInPolygon, checkLineIntersection);
        QWidget::setTabOrder(checkLineIntersection, checkLineLayerIntersection);
        QWidget::setTabOrder(checkLineLayerIntersection, comboLineLayerIntersection);
        QWidget::setTabOrder(comboLineLayerIntersection, checkBoxFollowBoundaries);
        QWidget::setTabOrder(checkBoxFollowBoundaries, comboBoxFollowBoundaries);
        QWidget::setTabOrder(comboBoxFollowBoundaries, spinBoxTolerance);
        QWidget::setTabOrder(spinBoxTolerance, radioButtonOutputModifyInput);
        QWidget::setTabOrder(radioButtonOutputModifyInput, radioButtonOutputNew);
        QWidget::setTabOrder(radioButtonOutputNew, comboBoxOutputFormat);
        QWidget::setTabOrder(comboBoxOutputFormat, lineEditOutputDirectory);
        QWidget::setTabOrder(lineEditOutputDirectory, pushButtonOutputDirectory);
        QWidget::setTabOrder(pushButtonOutputDirectory, lineEditFilenamePrefix);

        retranslateUi(QgsGeometryCheckerSetupTab);

        QMetaObject::connectSlotsByName(QgsGeometryCheckerSetupTab);
    } // setupUi

    void retranslateUi(QWidget *QgsGeometryCheckerSetupTab)
    {
        QgsGeometryCheckerSetupTab->setWindowTitle(QApplication::translate("QgsGeometryCheckerSetupTab", "Form", Q_NULLPTR));
        groupBoxInputLayers->setTitle(QApplication::translate("QgsGeometryCheckerSetupTab", "Input vector layers", Q_NULLPTR));
        checkBoxInputSelectedOnly->setText(QApplication::translate("QgsGeometryCheckerSetupTab", "Only selected features", Q_NULLPTR));
        groupBoxGeometryTypes->setProperty("title", QVariant(QApplication::translate("QgsGeometryCheckerSetupTab", "Allowed geometry types", Q_NULLPTR)));
        checkBoxPoint->setText(QApplication::translate("QgsGeometryCheckerSetupTab", "Point", Q_NULLPTR));
        checkBoxMultipoint->setText(QApplication::translate("QgsGeometryCheckerSetupTab", "Multipoint", Q_NULLPTR));
        checkBoxLine->setText(QApplication::translate("QgsGeometryCheckerSetupTab", "Line", Q_NULLPTR));
        checkBoxMultiline->setText(QApplication::translate("QgsGeometryCheckerSetupTab", "Multiline", Q_NULLPTR));
        checkBoxPolygon->setText(QApplication::translate("QgsGeometryCheckerSetupTab", "Polygon", Q_NULLPTR));
        checkBoxMultipolygon->setText(QApplication::translate("QgsGeometryCheckerSetupTab", "Multipolygon", Q_NULLPTR));
        groupBox_2->setProperty("title", QVariant(QApplication::translate("QgsGeometryCheckerSetupTab", "Geometry validity", Q_NULLPTR)));
        checkBoxSelfIntersections->setText(QApplication::translate("QgsGeometryCheckerSetupTab", "Self intersections", Q_NULLPTR));
        checkBoxDuplicateNodes->setText(QApplication::translate("QgsGeometryCheckerSetupTab", "Duplicate nodes", Q_NULLPTR));
        checkBoxDegeneratePolygon->setText(QApplication::translate("QgsGeometryCheckerSetupTab", "Polygon with less than 3 nodes", Q_NULLPTR));
        checkBoxSelfContacts->setText(QApplication::translate("QgsGeometryCheckerSetupTab", "Self contacts", Q_NULLPTR));
        groupBoxGeometryProperties->setProperty("title", QVariant(QApplication::translate("QgsGeometryCheckerSetupTab", "Geometry properties", Q_NULLPTR)));
        checkBoxNoHoles->setText(QApplication::translate("QgsGeometryCheckerSetupTab", "Polygons and multipolygons may not contain any holes", Q_NULLPTR));
        checkBoxMultipart->setText(QApplication::translate("QgsGeometryCheckerSetupTab", "Multipart objects must consist of more that one part", Q_NULLPTR));
        checkBoxDangle->setText(QApplication::translate("QgsGeometryCheckerSetupTab", "Lines must not have dangles", Q_NULLPTR));
        groupBoxGeometryConditions->setProperty("title", QVariant(QApplication::translate("QgsGeometryCheckerSetupTab", "Geometry conditions", Q_NULLPTR)));
        checkBoxAngle->setText(QApplication::translate("QgsGeometryCheckerSetupTab", "Minimum angle between segments (deg)", Q_NULLPTR));
        checkBoxSegmentLength->setText(QApplication::translate("QgsGeometryCheckerSetupTab", "Minimal segment length (map units)", Q_NULLPTR));
        checkBoxArea->setText(QApplication::translate("QgsGeometryCheckerSetupTab", "Minimal polygon area (map units sqr.)", Q_NULLPTR));
        checkBoxSliverPolygons->setText(QApplication::translate("QgsGeometryCheckerSetupTab", "No sliver polygons", Q_NULLPTR));
        labelSliverThinness->setText(QApplication::translate("QgsGeometryCheckerSetupTab", "Maximum thinness", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelSliverThinnessHelp->setToolTip(QApplication::translate("QgsGeometryCheckerSetupTab", "<html><head/><body><p>Thinness is the ratio between the area of the minimum square containing the polygon and the area of the polygon itself. A square has thinness 1. Default: 20.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        checkBoxSliverArea->setText(QApplication::translate("QgsGeometryCheckerSetupTab", "Max. area (map units sqr.)", Q_NULLPTR));
        groupBoxTopology->setProperty("title", QVariant(QApplication::translate("QgsGeometryCheckerSetupTab", "Topology checks", Q_NULLPTR)));
        checkBoxDuplicates->setText(QApplication::translate("QgsGeometryCheckerSetupTab", "Check for duplicates", Q_NULLPTR));
        checkLineIntersection->setText(QApplication::translate("QgsGeometryCheckerSetupTab", "Lines must not intersect any other lines", Q_NULLPTR));
        checkBoxGaps->setText(QApplication::translate("QgsGeometryCheckerSetupTab", "Check for gaps smaller than (map units sqr.)", Q_NULLPTR));
        checkBoxCovered->setText(QApplication::translate("QgsGeometryCheckerSetupTab", "Check for features within other features", Q_NULLPTR));
        checkPointCoveredByLine->setText(QApplication::translate("QgsGeometryCheckerSetupTab", "Points must be covered by lines", Q_NULLPTR));
        checkLineLayerIntersection->setText(QApplication::translate("QgsGeometryCheckerSetupTab", "Lines must not intersect with features of layer", Q_NULLPTR));
        checkBoxOverlaps->setText(QApplication::translate("QgsGeometryCheckerSetupTab", "Check for overlaps smaller than (map units sqr.)", Q_NULLPTR));
        checkPointInPolygon->setText(QApplication::translate("QgsGeometryCheckerSetupTab", "Points must properly lie inside a polygon", Q_NULLPTR));
        label->setText(QApplication::translate("QgsGeometryCheckerSetupTab", "<i>Note: Topology checks are performed in the current map CRS.</i>", Q_NULLPTR));
        checkBoxFollowBoundaries->setText(QApplication::translate("QgsGeometryCheckerSetupTab", "Polygons must follow boundaries of layer", Q_NULLPTR));
        labelTolerance->setText(QApplication::translate("QgsGeometryCheckerSetupTab", "Tolerance", Q_NULLPTR));
        groupBoxOutputLayers->setTitle(QApplication::translate("QgsGeometryCheckerSetupTab", "Output vector layers", Q_NULLPTR));
        radioButtonOutputNew->setText(QApplication::translate("QgsGeometryCheckerSetupTab", "Create &new layers", Q_NULLPTR));
        radioButtonOutputModifyInput->setText(QApplication::translate("QgsGeometryCheckerSetupTab", "&Modify input layers", Q_NULLPTR));
        labelOutputFormat->setText(QApplication::translate("QgsGeometryCheckerSetupTab", "Format", Q_NULLPTR));
        labelOutputDirectory->setText(QApplication::translate("QgsGeometryCheckerSetupTab", "Output directory", Q_NULLPTR));
        pushButtonOutputDirectory->setText(QApplication::translate("QgsGeometryCheckerSetupTab", "Browse", Q_NULLPTR));
        labelFilenamePrefix->setText(QApplication::translate("QgsGeometryCheckerSetupTab", "Filename prefix", Q_NULLPTR));
        lineEditFilenamePrefix->setText(QString());
        labelStatus->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QgsGeometryCheckerSetupTab: public Ui_QgsGeometryCheckerSetupTab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSGEOMETRYCHECKERSETUPTAB_H
