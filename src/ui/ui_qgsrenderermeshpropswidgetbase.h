/********************************************************************************
** Form generated from reading UI file 'qgsrenderermeshpropswidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSRENDERERMESHPROPSWIDGETBASE_H
#define UI_QGSRENDERERMESHPROPSWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "mesh/qgsmeshrendereractivedatasetwidget.h"
#include "mesh/qgsmeshrenderermeshsettingswidget.h"
#include "mesh/qgsmeshrendererscalarsettingswidget.h"
#include "mesh/qgsmeshrenderervectorsettingswidget.h"
#include "qgsblendmodecombobox.h"
#include "qgscollapsiblegroupbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsRendererMeshPropsWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *mStyleOptionsTab;
    QWidget *mActiveDatasetTab;
    QVBoxLayout *verticalLayout_11;
    QgsMeshRendererActiveDatasetWidget *mMeshRendererActiveDatasetWidget;
    QgsCollapsibleGroupBox *mActiveDatasetBlendingMode;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QgsBlendModeComboBox *mBlendModeComboBox;
    QSpacerItem *verticalSpacer_3;
    QWidget *mContoursTab;
    QVBoxLayout *verticalLayout_10;
    QGroupBox *mContoursGroupBox;
    QVBoxLayout *verticalLayout_6;
    QgsMeshRendererScalarSettingsWidget *mMeshRendererScalarSettingsWidget;
    QSpacerItem *verticalSpacer_4;
    QWidget *mVectorsTab;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *mVectorsGroupBox;
    QVBoxLayout *verticalLayout_5;
    QgsMeshRendererVectorSettingsWidget *mMeshRendererVectorSettingsWidget;
    QSpacerItem *verticalSpacer_5;
    QWidget *mMeshTab;
    QVBoxLayout *verticalLayout_12;
    QGroupBox *mNativeMeshGroup;
    QVBoxLayout *verticalLayout_4;
    QgsMeshRendererMeshSettingsWidget *mNativeMeshSettingsWidget;
    QGroupBox *mTriangularMeshGroup;
    QVBoxLayout *verticalLayout_3;
    QgsMeshRendererMeshSettingsWidget *mTriangularMeshSettingsWidget;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QgsRendererMeshPropsWidgetBase)
    {
        if (QgsRendererMeshPropsWidgetBase->objectName().isEmpty())
            QgsRendererMeshPropsWidgetBase->setObjectName(QStringLiteral("QgsRendererMeshPropsWidgetBase"));
        QgsRendererMeshPropsWidgetBase->resize(774, 593);
        verticalLayout = new QVBoxLayout(QgsRendererMeshPropsWidgetBase);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        mStyleOptionsTab = new QTabWidget(QgsRendererMeshPropsWidgetBase);
        mStyleOptionsTab->setObjectName(QStringLiteral("mStyleOptionsTab"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mStyleOptionsTab->sizePolicy().hasHeightForWidth());
        mStyleOptionsTab->setSizePolicy(sizePolicy);
        mStyleOptionsTab->setTabPosition(QTabWidget::North);
        mStyleOptionsTab->setTabShape(QTabWidget::Rounded);
        mStyleOptionsTab->setIconSize(QSize(20, 20));
        mStyleOptionsTab->setElideMode(Qt::ElideNone);
        mStyleOptionsTab->setDocumentMode(true);
        mStyleOptionsTab->setTabsClosable(false);
        mActiveDatasetTab = new QWidget();
        mActiveDatasetTab->setObjectName(QStringLiteral("mActiveDatasetTab"));
        verticalLayout_11 = new QVBoxLayout(mActiveDatasetTab);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        mMeshRendererActiveDatasetWidget = new QgsMeshRendererActiveDatasetWidget(mActiveDatasetTab);
        mMeshRendererActiveDatasetWidget->setObjectName(QStringLiteral("mMeshRendererActiveDatasetWidget"));
        mMeshRendererActiveDatasetWidget->setEnabled(true);
        mMeshRendererActiveDatasetWidget->setMinimumSize(QSize(0, 0));

        verticalLayout_11->addWidget(mMeshRendererActiveDatasetWidget);

        mActiveDatasetBlendingMode = new QgsCollapsibleGroupBox(mActiveDatasetTab);
        mActiveDatasetBlendingMode->setObjectName(QStringLiteral("mActiveDatasetBlendingMode"));
        horizontalLayout = new QHBoxLayout(mActiveDatasetBlendingMode);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(mActiveDatasetBlendingMode);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        mBlendModeComboBox = new QgsBlendModeComboBox(mActiveDatasetBlendingMode);
        mBlendModeComboBox->setObjectName(QStringLiteral("mBlendModeComboBox"));
        mBlendModeComboBox->setMinimumSize(QSize(0, 0));

        horizontalLayout->addWidget(mBlendModeComboBox);


        verticalLayout_11->addWidget(mActiveDatasetBlendingMode);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_11->addItem(verticalSpacer_3);

        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/propertyicons/general.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mStyleOptionsTab->addTab(mActiveDatasetTab, icon, QString());
        mContoursTab = new QWidget();
        mContoursTab->setObjectName(QStringLiteral("mContoursTab"));
        verticalLayout_10 = new QVBoxLayout(mContoursTab);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        mContoursGroupBox = new QGroupBox(mContoursTab);
        mContoursGroupBox->setObjectName(QStringLiteral("mContoursGroupBox"));
        mContoursGroupBox->setCheckable(true);
        mContoursGroupBox->setChecked(false);
        verticalLayout_6 = new QVBoxLayout(mContoursGroupBox);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        mMeshRendererScalarSettingsWidget = new QgsMeshRendererScalarSettingsWidget(mContoursGroupBox);
        mMeshRendererScalarSettingsWidget->setObjectName(QStringLiteral("mMeshRendererScalarSettingsWidget"));

        verticalLayout_6->addWidget(mMeshRendererScalarSettingsWidget);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_4);


        verticalLayout_10->addWidget(mContoursGroupBox);

        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/propertyicons/meshcontours.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mStyleOptionsTab->addTab(mContoursTab, icon1, QString());
        mVectorsTab = new QWidget();
        mVectorsTab->setObjectName(QStringLiteral("mVectorsTab"));
        verticalLayout_2 = new QVBoxLayout(mVectorsTab);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        mVectorsGroupBox = new QGroupBox(mVectorsTab);
        mVectorsGroupBox->setObjectName(QStringLiteral("mVectorsGroupBox"));
        mVectorsGroupBox->setCheckable(true);
        mVectorsGroupBox->setChecked(false);
        verticalLayout_5 = new QVBoxLayout(mVectorsGroupBox);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        mMeshRendererVectorSettingsWidget = new QgsMeshRendererVectorSettingsWidget(mVectorsGroupBox);
        mMeshRendererVectorSettingsWidget->setObjectName(QStringLiteral("mMeshRendererVectorSettingsWidget"));
        sizePolicy.setHeightForWidth(mMeshRendererVectorSettingsWidget->sizePolicy().hasHeightForWidth());
        mMeshRendererVectorSettingsWidget->setSizePolicy(sizePolicy);

        verticalLayout_5->addWidget(mMeshRendererVectorSettingsWidget);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_5);


        verticalLayout_2->addWidget(mVectorsGroupBox);

        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/themes/default/propertyicons/meshvectors.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mStyleOptionsTab->addTab(mVectorsTab, icon2, QString());
        mMeshTab = new QWidget();
        mMeshTab->setObjectName(QStringLiteral("mMeshTab"));
        verticalLayout_12 = new QVBoxLayout(mMeshTab);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        mNativeMeshGroup = new QGroupBox(mMeshTab);
        mNativeMeshGroup->setObjectName(QStringLiteral("mNativeMeshGroup"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mNativeMeshGroup->sizePolicy().hasHeightForWidth());
        mNativeMeshGroup->setSizePolicy(sizePolicy1);
        mNativeMeshGroup->setCheckable(true);
        verticalLayout_4 = new QVBoxLayout(mNativeMeshGroup);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        mNativeMeshSettingsWidget = new QgsMeshRendererMeshSettingsWidget(mNativeMeshGroup);
        mNativeMeshSettingsWidget->setObjectName(QStringLiteral("mNativeMeshSettingsWidget"));
        sizePolicy1.setHeightForWidth(mNativeMeshSettingsWidget->sizePolicy().hasHeightForWidth());
        mNativeMeshSettingsWidget->setSizePolicy(sizePolicy1);

        verticalLayout_4->addWidget(mNativeMeshSettingsWidget);


        verticalLayout_12->addWidget(mNativeMeshGroup);

        mTriangularMeshGroup = new QGroupBox(mMeshTab);
        mTriangularMeshGroup->setObjectName(QStringLiteral("mTriangularMeshGroup"));
        sizePolicy1.setHeightForWidth(mTriangularMeshGroup->sizePolicy().hasHeightForWidth());
        mTriangularMeshGroup->setSizePolicy(sizePolicy1);
        mTriangularMeshGroup->setCheckable(true);
        mTriangularMeshGroup->setChecked(false);
        verticalLayout_3 = new QVBoxLayout(mTriangularMeshGroup);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        mTriangularMeshSettingsWidget = new QgsMeshRendererMeshSettingsWidget(mTriangularMeshGroup);
        mTriangularMeshSettingsWidget->setObjectName(QStringLiteral("mTriangularMeshSettingsWidget"));
        sizePolicy1.setHeightForWidth(mTriangularMeshSettingsWidget->sizePolicy().hasHeightForWidth());
        mTriangularMeshSettingsWidget->setSizePolicy(sizePolicy1);

        verticalLayout_3->addWidget(mTriangularMeshSettingsWidget);


        verticalLayout_12->addWidget(mTriangularMeshGroup);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_12->addItem(verticalSpacer_2);

        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/themes/default/propertyicons/meshframe.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mStyleOptionsTab->addTab(mMeshTab, icon3, QString());

        verticalLayout->addWidget(mStyleOptionsTab);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(QgsRendererMeshPropsWidgetBase);

        mStyleOptionsTab->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsRendererMeshPropsWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsRendererMeshPropsWidgetBase)
    {
        QgsRendererMeshPropsWidgetBase->setWindowTitle(QApplication::translate("QgsRendererMeshPropsWidgetBase", "Form", Q_NULLPTR));
        mActiveDatasetBlendingMode->setTitle(QApplication::translate("QgsRendererMeshPropsWidgetBase", "Layer Rendering", Q_NULLPTR));
        label->setText(QApplication::translate("QgsRendererMeshPropsWidgetBase", "Blending mode", Q_NULLPTR));
        mStyleOptionsTab->setTabText(mStyleOptionsTab->indexOf(mActiveDatasetTab), QString());
        mContoursGroupBox->setTitle(QApplication::translate("QgsRendererMeshPropsWidgetBase", "Show Contours", Q_NULLPTR));
        mStyleOptionsTab->setTabText(mStyleOptionsTab->indexOf(mContoursTab), QString());
        mVectorsGroupBox->setTitle(QApplication::translate("QgsRendererMeshPropsWidgetBase", "Show Vectors", Q_NULLPTR));
        mStyleOptionsTab->setTabText(mStyleOptionsTab->indexOf(mVectorsTab), QString());
        mNativeMeshGroup->setTitle(QApplication::translate("QgsRendererMeshPropsWidgetBase", "Native Mesh Rendering", Q_NULLPTR));
        mTriangularMeshGroup->setTitle(QApplication::translate("QgsRendererMeshPropsWidgetBase", "Triangular Mesh Rendering", Q_NULLPTR));
        mStyleOptionsTab->setTabText(mStyleOptionsTab->indexOf(mMeshTab), QString());
    } // retranslateUi

};

namespace Ui {
    class QgsRendererMeshPropsWidgetBase: public Ui_QgsRendererMeshPropsWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSRENDERERMESHPROPSWIDGETBASE_H
