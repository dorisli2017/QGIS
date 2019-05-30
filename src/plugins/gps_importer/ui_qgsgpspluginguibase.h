/********************************************************************************
** Form generated from reading UI file 'qgsgpspluginguibase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSGPSPLUGINGUIBASE_H
#define UI_QGSGPSPLUGINGUIBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsfilewidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsGpsPluginGuiBase
{
public:
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab1;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_2;
    QgsFileWidget *mFileWidget;
    QLabel *lblGPXFile;
    QGridLayout *gridLayout_3;
    QLabel *lblGPXFeatureTypes;
    QCheckBox *cbGPXWaypoints;
    QCheckBox *cbGPXRoutes;
    QCheckBox *cbGPXTracks;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;
    QWidget *tab2;
    QGridLayout *gridLayout;
    QLabel *textLabel1_5;
    QLineEdit *leIMPInput;
    QPushButton *pbnIMPInput;
    QLabel *textLabel2_3;
    QComboBox *cmbIMPFeature;
    QLabel *textLabel1_6;
    QLineEdit *leIMPLayer;
    QLabel *textLabel3_3;
    QLineEdit *leIMPOutput;
    QPushButton *pbnIMPOutput;
    QSpacerItem *verticalSpacer;
    QLabel *textLabel2_6;
    QWidget *tab3;
    QGridLayout *gridLayout_4;
    QLabel *textLabel1;
    QComboBox *cmbDLDevice;
    QPushButton *pbDLEditDevices;
    QLabel *textLabel2_5;
    QComboBox *cmbDLPort;
    QPushButton *pbnRefresh;
    QLabel *textLabel1_3;
    QComboBox *cmbDLFeatureType;
    QLabel *textLabel1_2;
    QLineEdit *leDLBasename;
    QLabel *textLabel2;
    QLineEdit *leDLOutput;
    QPushButton *pbnDLOutput;
    QSpacerItem *horizontalSpacer_3;
    QWidget *tab4;
    QGridLayout *gridLayout_5;
    QLabel *textLabel2_2;
    QComboBox *cmbULLayer;
    QLabel *textLabel2_4;
    QComboBox *cmbULDevice;
    QPushButton *pbULEditDevices;
    QLabel *textLabel3;
    QComboBox *cmbULPort;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer_2;
    QWidget *tab5;
    QGridLayout *gridLayout_6;
    QLabel *textLabel5_4;
    QLineEdit *leCONVInput;
    QPushButton *pbnCONVInput;
    QLabel *textLabel5_3;
    QComboBox *cmbCONVType;
    QLabel *textLabel5_2;
    QLineEdit *leCONVOutput;
    QLabel *textLabel5_1;
    QLineEdit *leCONVLayer;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_5;
    QPushButton *pbnCONVOutput;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsGpsPluginGuiBase)
    {
        if (QgsGpsPluginGuiBase->objectName().isEmpty())
            QgsGpsPluginGuiBase->setObjectName(QStringLiteral("QgsGpsPluginGuiBase"));
        QgsGpsPluginGuiBase->resize(1217, 504);
        QIcon icon;
        icon.addFile(QStringLiteral("."), QSize(), QIcon::Normal, QIcon::Off);
        QgsGpsPluginGuiBase->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(QgsGpsPluginGuiBase);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        tabWidget = new QTabWidget(QgsGpsPluginGuiBase);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab1 = new QWidget();
        tab1->setObjectName(QStringLiteral("tab1"));
        verticalLayout = new QVBoxLayout(tab1);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        mFileWidget = new QgsFileWidget(tab1);
        mFileWidget->setObjectName(QStringLiteral("mFileWidget"));

        gridLayout_2->addWidget(mFileWidget, 0, 1, 1, 1);

        lblGPXFile = new QLabel(tab1);
        lblGPXFile->setObjectName(QStringLiteral("lblGPXFile"));

        gridLayout_2->addWidget(lblGPXFile, 0, 0, 1, 1);

        gridLayout_2->setColumnStretch(1, 1);

        verticalLayout->addLayout(gridLayout_2);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        lblGPXFeatureTypes = new QLabel(tab1);
        lblGPXFeatureTypes->setObjectName(QStringLiteral("lblGPXFeatureTypes"));

        gridLayout_3->addWidget(lblGPXFeatureTypes, 0, 0, 1, 1);

        cbGPXWaypoints = new QCheckBox(tab1);
        cbGPXWaypoints->setObjectName(QStringLiteral("cbGPXWaypoints"));
        cbGPXWaypoints->setEnabled(false);
        cbGPXWaypoints->setChecked(false);

        gridLayout_3->addWidget(cbGPXWaypoints, 0, 1, 1, 1);

        cbGPXRoutes = new QCheckBox(tab1);
        cbGPXRoutes->setObjectName(QStringLiteral("cbGPXRoutes"));
        cbGPXRoutes->setEnabled(false);
        cbGPXRoutes->setChecked(false);

        gridLayout_3->addWidget(cbGPXRoutes, 1, 1, 1, 1);

        cbGPXTracks = new QCheckBox(tab1);
        cbGPXTracks->setObjectName(QStringLiteral("cbGPXTracks"));
        cbGPXTracks->setEnabled(false);
        cbGPXTracks->setChecked(false);

        gridLayout_3->addWidget(cbGPXTracks, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 1, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        tabWidget->addTab(tab1, QString());
        tab2 = new QWidget();
        tab2->setObjectName(QStringLiteral("tab2"));
        gridLayout = new QGridLayout(tab2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        textLabel1_5 = new QLabel(tab2);
        textLabel1_5->setObjectName(QStringLiteral("textLabel1_5"));

        gridLayout->addWidget(textLabel1_5, 0, 0, 1, 1);

        leIMPInput = new QLineEdit(tab2);
        leIMPInput->setObjectName(QStringLiteral("leIMPInput"));
        leIMPInput->setEnabled(false);

        gridLayout->addWidget(leIMPInput, 0, 1, 1, 1);

        pbnIMPInput = new QPushButton(tab2);
        pbnIMPInput->setObjectName(QStringLiteral("pbnIMPInput"));

        gridLayout->addWidget(pbnIMPInput, 0, 2, 1, 1);

        textLabel2_3 = new QLabel(tab2);
        textLabel2_3->setObjectName(QStringLiteral("textLabel2_3"));

        gridLayout->addWidget(textLabel2_3, 1, 0, 1, 1);

        cmbIMPFeature = new QComboBox(tab2);
        cmbIMPFeature->setObjectName(QStringLiteral("cmbIMPFeature"));
        cmbIMPFeature->setMinimumSize(QSize(130, 0));

        gridLayout->addWidget(cmbIMPFeature, 1, 1, 1, 1);

        textLabel1_6 = new QLabel(tab2);
        textLabel1_6->setObjectName(QStringLiteral("textLabel1_6"));

        gridLayout->addWidget(textLabel1_6, 3, 0, 1, 1);

        leIMPLayer = new QLineEdit(tab2);
        leIMPLayer->setObjectName(QStringLiteral("leIMPLayer"));

        gridLayout->addWidget(leIMPLayer, 3, 1, 1, 1);

        textLabel3_3 = new QLabel(tab2);
        textLabel3_3->setObjectName(QStringLiteral("textLabel3_3"));

        gridLayout->addWidget(textLabel3_3, 4, 0, 1, 1);

        leIMPOutput = new QLineEdit(tab2);
        leIMPOutput->setObjectName(QStringLiteral("leIMPOutput"));

        gridLayout->addWidget(leIMPOutput, 4, 1, 1, 1);

        pbnIMPOutput = new QPushButton(tab2);
        pbnIMPOutput->setObjectName(QStringLiteral("pbnIMPOutput"));

        gridLayout->addWidget(pbnIMPOutput, 4, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 1, 1, 1);

        textLabel2_6 = new QLabel(tab2);
        textLabel2_6->setObjectName(QStringLiteral("textLabel2_6"));

        gridLayout->addWidget(textLabel2_6, 2, 1, 1, 1);

        tabWidget->addTab(tab2, QString());
        tab3 = new QWidget();
        tab3->setObjectName(QStringLiteral("tab3"));
        gridLayout_4 = new QGridLayout(tab3);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        textLabel1 = new QLabel(tab3);
        textLabel1->setObjectName(QStringLiteral("textLabel1"));

        gridLayout_4->addWidget(textLabel1, 0, 0, 1, 1);

        cmbDLDevice = new QComboBox(tab3);
        cmbDLDevice->setObjectName(QStringLiteral("cmbDLDevice"));
        cmbDLDevice->setMinimumSize(QSize(120, 0));

        gridLayout_4->addWidget(cmbDLDevice, 0, 1, 1, 1);

        pbDLEditDevices = new QPushButton(tab3);
        pbDLEditDevices->setObjectName(QStringLiteral("pbDLEditDevices"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pbDLEditDevices->sizePolicy().hasHeightForWidth());
        pbDLEditDevices->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(pbDLEditDevices, 0, 2, 1, 1);

        textLabel2_5 = new QLabel(tab3);
        textLabel2_5->setObjectName(QStringLiteral("textLabel2_5"));

        gridLayout_4->addWidget(textLabel2_5, 1, 0, 1, 1);

        cmbDLPort = new QComboBox(tab3);
        cmbDLPort->setObjectName(QStringLiteral("cmbDLPort"));
        cmbDLPort->setMinimumSize(QSize(90, 0));

        gridLayout_4->addWidget(cmbDLPort, 1, 1, 1, 1);

        pbnRefresh = new QPushButton(tab3);
        pbnRefresh->setObjectName(QStringLiteral("pbnRefresh"));
        sizePolicy.setHeightForWidth(pbnRefresh->sizePolicy().hasHeightForWidth());
        pbnRefresh->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(pbnRefresh, 1, 2, 1, 1);

        textLabel1_3 = new QLabel(tab3);
        textLabel1_3->setObjectName(QStringLiteral("textLabel1_3"));

        gridLayout_4->addWidget(textLabel1_3, 2, 0, 1, 1);

        cmbDLFeatureType = new QComboBox(tab3);
        cmbDLFeatureType->setObjectName(QStringLiteral("cmbDLFeatureType"));
        cmbDLFeatureType->setMinimumSize(QSize(100, 0));

        gridLayout_4->addWidget(cmbDLFeatureType, 2, 1, 1, 1);

        textLabel1_2 = new QLabel(tab3);
        textLabel1_2->setObjectName(QStringLiteral("textLabel1_2"));

        gridLayout_4->addWidget(textLabel1_2, 3, 0, 1, 1);

        leDLBasename = new QLineEdit(tab3);
        leDLBasename->setObjectName(QStringLiteral("leDLBasename"));

        gridLayout_4->addWidget(leDLBasename, 3, 1, 1, 1);

        textLabel2 = new QLabel(tab3);
        textLabel2->setObjectName(QStringLiteral("textLabel2"));

        gridLayout_4->addWidget(textLabel2, 4, 0, 1, 1);

        leDLOutput = new QLineEdit(tab3);
        leDLOutput->setObjectName(QStringLiteral("leDLOutput"));

        gridLayout_4->addWidget(leDLOutput, 4, 1, 1, 1);

        pbnDLOutput = new QPushButton(tab3);
        pbnDLOutput->setObjectName(QStringLiteral("pbnDLOutput"));

        gridLayout_4->addWidget(pbnDLOutput, 4, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_3, 5, 1, 1, 1);

        tabWidget->addTab(tab3, QString());
        tab4 = new QWidget();
        tab4->setObjectName(QStringLiteral("tab4"));
        gridLayout_5 = new QGridLayout(tab4);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        textLabel2_2 = new QLabel(tab4);
        textLabel2_2->setObjectName(QStringLiteral("textLabel2_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textLabel2_2->sizePolicy().hasHeightForWidth());
        textLabel2_2->setSizePolicy(sizePolicy1);

        gridLayout_5->addWidget(textLabel2_2, 0, 0, 1, 1);

        cmbULLayer = new QComboBox(tab4);
        cmbULLayer->setObjectName(QStringLiteral("cmbULLayer"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(cmbULLayer->sizePolicy().hasHeightForWidth());
        cmbULLayer->setSizePolicy(sizePolicy2);
        cmbULLayer->setMinimumSize(QSize(90, 0));

        gridLayout_5->addWidget(cmbULLayer, 0, 1, 1, 2);

        textLabel2_4 = new QLabel(tab4);
        textLabel2_4->setObjectName(QStringLiteral("textLabel2_4"));
        sizePolicy1.setHeightForWidth(textLabel2_4->sizePolicy().hasHeightForWidth());
        textLabel2_4->setSizePolicy(sizePolicy1);

        gridLayout_5->addWidget(textLabel2_4, 1, 0, 1, 1);

        cmbULDevice = new QComboBox(tab4);
        cmbULDevice->setObjectName(QStringLiteral("cmbULDevice"));
        sizePolicy2.setHeightForWidth(cmbULDevice->sizePolicy().hasHeightForWidth());
        cmbULDevice->setSizePolicy(sizePolicy2);
        cmbULDevice->setMinimumSize(QSize(120, 0));

        gridLayout_5->addWidget(cmbULDevice, 1, 1, 1, 2);

        pbULEditDevices = new QPushButton(tab4);
        pbULEditDevices->setObjectName(QStringLiteral("pbULEditDevices"));

        gridLayout_5->addWidget(pbULEditDevices, 1, 3, 1, 1);

        textLabel3 = new QLabel(tab4);
        textLabel3->setObjectName(QStringLiteral("textLabel3"));
        sizePolicy1.setHeightForWidth(textLabel3->sizePolicy().hasHeightForWidth());
        textLabel3->setSizePolicy(sizePolicy1);

        gridLayout_5->addWidget(textLabel3, 2, 0, 1, 1);

        cmbULPort = new QComboBox(tab4);
        cmbULPort->setObjectName(QStringLiteral("cmbULPort"));
        sizePolicy2.setHeightForWidth(cmbULPort->sizePolicy().hasHeightForWidth());
        cmbULPort->setSizePolicy(sizePolicy2);
        cmbULPort->setMinimumSize(QSize(100, 0));

        gridLayout_5->addWidget(cmbULPort, 2, 1, 1, 2);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_4, 4, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_2, 3, 1, 1, 1);

        tabWidget->addTab(tab4, QString());
        tab5 = new QWidget();
        tab5->setObjectName(QStringLiteral("tab5"));
        gridLayout_6 = new QGridLayout(tab5);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        textLabel5_4 = new QLabel(tab5);
        textLabel5_4->setObjectName(QStringLiteral("textLabel5_4"));

        gridLayout_6->addWidget(textLabel5_4, 0, 0, 1, 1);

        leCONVInput = new QLineEdit(tab5);
        leCONVInput->setObjectName(QStringLiteral("leCONVInput"));
        leCONVInput->setEnabled(false);

        gridLayout_6->addWidget(leCONVInput, 0, 1, 1, 1);

        pbnCONVInput = new QPushButton(tab5);
        pbnCONVInput->setObjectName(QStringLiteral("pbnCONVInput"));

        gridLayout_6->addWidget(pbnCONVInput, 0, 2, 1, 1);

        textLabel5_3 = new QLabel(tab5);
        textLabel5_3->setObjectName(QStringLiteral("textLabel5_3"));

        gridLayout_6->addWidget(textLabel5_3, 1, 0, 1, 1);

        cmbCONVType = new QComboBox(tab5);
        cmbCONVType->setObjectName(QStringLiteral("cmbCONVType"));
        cmbCONVType->setMinimumSize(QSize(10, 0));

        gridLayout_6->addWidget(cmbCONVType, 1, 1, 1, 1);

        textLabel5_2 = new QLabel(tab5);
        textLabel5_2->setObjectName(QStringLiteral("textLabel5_2"));

        gridLayout_6->addWidget(textLabel5_2, 2, 0, 1, 1);

        leCONVOutput = new QLineEdit(tab5);
        leCONVOutput->setObjectName(QStringLiteral("leCONVOutput"));

        gridLayout_6->addWidget(leCONVOutput, 2, 1, 1, 1);

        textLabel5_1 = new QLabel(tab5);
        textLabel5_1->setObjectName(QStringLiteral("textLabel5_1"));

        gridLayout_6->addWidget(textLabel5_1, 3, 0, 1, 1);

        leCONVLayer = new QLineEdit(tab5);
        leCONVLayer->setObjectName(QStringLiteral("leCONVLayer"));

        gridLayout_6->addWidget(leCONVLayer, 3, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_4, 4, 1, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_5, 5, 1, 1, 1);

        pbnCONVOutput = new QPushButton(tab5);
        pbnCONVOutput->setObjectName(QStringLiteral("pbnCONVOutput"));

        gridLayout_6->addWidget(pbnCONVOutput, 2, 2, 1, 1);

        tabWidget->addTab(tab5, QString());

        verticalLayout_2->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(QgsGpsPluginGuiBase);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);

#ifndef QT_NO_SHORTCUT
        lblGPXFeatureTypes->setBuddy(cbGPXWaypoints);
        textLabel1_5->setBuddy(pbnIMPInput);
        textLabel2_3->setBuddy(cmbIMPFeature);
        textLabel1_6->setBuddy(leIMPLayer);
        textLabel3_3->setBuddy(leIMPOutput);
        textLabel1->setBuddy(cmbDLDevice);
        textLabel2_5->setBuddy(cmbDLPort);
        textLabel1_3->setBuddy(cmbDLFeatureType);
        textLabel1_2->setBuddy(leDLBasename);
        textLabel2->setBuddy(leDLOutput);
        textLabel2_2->setBuddy(cmbULLayer);
        textLabel2_4->setBuddy(cmbULDevice);
        textLabel3->setBuddy(cmbULPort);
        textLabel5_4->setBuddy(pbnCONVInput);
        textLabel5_3->setBuddy(cmbCONVType);
        textLabel5_2->setBuddy(leCONVOutput);
        textLabel5_1->setBuddy(leCONVLayer);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(tabWidget, cbGPXWaypoints);
        QWidget::setTabOrder(cbGPXWaypoints, cbGPXRoutes);
        QWidget::setTabOrder(cbGPXRoutes, cbGPXTracks);
        QWidget::setTabOrder(cbGPXTracks, leIMPInput);
        QWidget::setTabOrder(leIMPInput, pbnIMPInput);
        QWidget::setTabOrder(pbnIMPInput, cmbIMPFeature);
        QWidget::setTabOrder(cmbIMPFeature, leIMPLayer);
        QWidget::setTabOrder(leIMPLayer, leIMPOutput);
        QWidget::setTabOrder(leIMPOutput, pbnIMPOutput);
        QWidget::setTabOrder(pbnIMPOutput, cmbDLDevice);
        QWidget::setTabOrder(cmbDLDevice, pbDLEditDevices);
        QWidget::setTabOrder(pbDLEditDevices, cmbDLPort);
        QWidget::setTabOrder(cmbDLPort, pbnRefresh);
        QWidget::setTabOrder(pbnRefresh, cmbDLFeatureType);
        QWidget::setTabOrder(cmbDLFeatureType, leDLBasename);
        QWidget::setTabOrder(leDLBasename, leDLOutput);
        QWidget::setTabOrder(leDLOutput, pbnDLOutput);
        QWidget::setTabOrder(pbnDLOutput, cmbULLayer);
        QWidget::setTabOrder(cmbULLayer, cmbULDevice);
        QWidget::setTabOrder(cmbULDevice, pbULEditDevices);
        QWidget::setTabOrder(pbULEditDevices, cmbULPort);
        QWidget::setTabOrder(cmbULPort, leCONVInput);
        QWidget::setTabOrder(leCONVInput, pbnCONVInput);
        QWidget::setTabOrder(pbnCONVInput, cmbCONVType);
        QWidget::setTabOrder(cmbCONVType, leCONVOutput);
        QWidget::setTabOrder(leCONVOutput, pbnCONVOutput);
        QWidget::setTabOrder(pbnCONVOutput, leCONVLayer);
        QWidget::setTabOrder(leCONVLayer, buttonBox);

        retranslateUi(QgsGpsPluginGuiBase);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsGpsPluginGuiBase);
    } // setupUi

    void retranslateUi(QDialog *QgsGpsPluginGuiBase)
    {
        QgsGpsPluginGuiBase->setWindowTitle(QApplication::translate("QgsGpsPluginGuiBase", "GPS Tools", Q_NULLPTR));
        lblGPXFile->setText(QApplication::translate("QgsGpsPluginGuiBase", "File", Q_NULLPTR));
        lblGPXFeatureTypes->setText(QApplication::translate("QgsGpsPluginGuiBase", "Feature types", Q_NULLPTR));
        cbGPXWaypoints->setText(QApplication::translate("QgsGpsPluginGuiBase", "Waypoints", Q_NULLPTR));
        cbGPXRoutes->setText(QApplication::translate("QgsGpsPluginGuiBase", "Routes", Q_NULLPTR));
        cbGPXTracks->setText(QApplication::translate("QgsGpsPluginGuiBase", "Tracks", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab1), QApplication::translate("QgsGpsPluginGuiBase", "Load GPX file", Q_NULLPTR));
        textLabel1_5->setText(QApplication::translate("QgsGpsPluginGuiBase", "File to import", Q_NULLPTR));
        pbnIMPInput->setText(QApplication::translate("QgsGpsPluginGuiBase", "Browse\342\200\246", Q_NULLPTR));
        textLabel2_3->setText(QApplication::translate("QgsGpsPluginGuiBase", "Feature type", Q_NULLPTR));
        textLabel1_6->setText(QApplication::translate("QgsGpsPluginGuiBase", "Layer name", Q_NULLPTR));
        textLabel3_3->setText(QApplication::translate("QgsGpsPluginGuiBase", "GPX output file", Q_NULLPTR));
        pbnIMPOutput->setText(QApplication::translate("QgsGpsPluginGuiBase", "Save As\342\200\246", Q_NULLPTR));
        textLabel2_6->setText(QApplication::translate("QgsGpsPluginGuiBase", "(Note: Selecting correct file type in browser dialog important!)", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab2), QApplication::translate("QgsGpsPluginGuiBase", "Import other file", Q_NULLPTR));
        textLabel1->setText(QApplication::translate("QgsGpsPluginGuiBase", "GPS device", Q_NULLPTR));
        pbDLEditDevices->setText(QApplication::translate("QgsGpsPluginGuiBase", "Edit devices\342\200\246", Q_NULLPTR));
        textLabel2_5->setText(QApplication::translate("QgsGpsPluginGuiBase", "Port", Q_NULLPTR));
        pbnRefresh->setText(QApplication::translate("QgsGpsPluginGuiBase", "Refresh", Q_NULLPTR));
        textLabel1_3->setText(QApplication::translate("QgsGpsPluginGuiBase", "Feature type", Q_NULLPTR));
        cmbDLFeatureType->clear();
        cmbDLFeatureType->insertItems(0, QStringList()
         << QApplication::translate("QgsGpsPluginGuiBase", "Waypoints", Q_NULLPTR)
         << QApplication::translate("QgsGpsPluginGuiBase", "Routes", Q_NULLPTR)
         << QApplication::translate("QgsGpsPluginGuiBase", "Tracks", Q_NULLPTR)
        );
        textLabel1_2->setText(QApplication::translate("QgsGpsPluginGuiBase", "Layer name", Q_NULLPTR));
        textLabel2->setText(QApplication::translate("QgsGpsPluginGuiBase", "Output file", Q_NULLPTR));
        pbnDLOutput->setText(QApplication::translate("QgsGpsPluginGuiBase", "Save As\342\200\246", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab3), QApplication::translate("QgsGpsPluginGuiBase", "Download from GPS", Q_NULLPTR));
        textLabel2_2->setText(QApplication::translate("QgsGpsPluginGuiBase", "Data layer", Q_NULLPTR));
        textLabel2_4->setText(QApplication::translate("QgsGpsPluginGuiBase", "GPS device", Q_NULLPTR));
        pbULEditDevices->setText(QApplication::translate("QgsGpsPluginGuiBase", "Edit devices", Q_NULLPTR));
        textLabel3->setText(QApplication::translate("QgsGpsPluginGuiBase", "Port", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab4), QApplication::translate("QgsGpsPluginGuiBase", "Upload to GPS", Q_NULLPTR));
        textLabel5_4->setText(QApplication::translate("QgsGpsPluginGuiBase", "GPX input file", Q_NULLPTR));
        pbnCONVInput->setText(QApplication::translate("QgsGpsPluginGuiBase", "Browse\342\200\246", Q_NULLPTR));
        textLabel5_3->setText(QApplication::translate("QgsGpsPluginGuiBase", "Conversion", Q_NULLPTR));
        textLabel5_2->setText(QApplication::translate("QgsGpsPluginGuiBase", "GPX output file", Q_NULLPTR));
        textLabel5_1->setText(QApplication::translate("QgsGpsPluginGuiBase", "Layer name", Q_NULLPTR));
        pbnCONVOutput->setText(QApplication::translate("QgsGpsPluginGuiBase", "Save As\342\200\246", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab5), QApplication::translate("QgsGpsPluginGuiBase", "GPX Conversions", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsGpsPluginGuiBase: public Ui_QgsGpsPluginGuiBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSGPSPLUGINGUIBASE_H
