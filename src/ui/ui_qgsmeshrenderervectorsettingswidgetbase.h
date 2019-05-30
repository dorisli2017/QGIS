/********************************************************************************
** Form generated from reading UI file 'qgsmeshrenderervectorsettingswidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMESHRENDERERVECTORSETTINGSWIDGETBASE_H
#define UI_QGSMESHRENDERERVECTORSETTINGSWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscolorbutton.h"
#include "qgsdoublespinbox.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsMeshRendererVectorSettingsWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_3;
    QgsDoubleSpinBox *mLineWidthSpinBox;
    QgsColorButton *mColorWidget;
    QGroupBox *filterByMagGroupBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *minimumMagLabel;
    QLineEdit *mMinMagLineEdit;
    QLabel *maximumMagLabel;
    QLineEdit *mMaxMagLineEdit;
    QGroupBox *mDisplayVectorsOnGridGroupBox;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *xSpacingLabel;
    QLabel *ySpacingLabel;
    QgsSpinBox *mXSpacingSpinBox;
    QSpinBox *mYSpacingSpinBox;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *headOptionsGroupBox;
    QGridLayout *gridLayout_4;
    QLabel *headWidthLabel;
    QLineEdit *mHeadWidthLineEdit;
    QLabel *percShaftLenLabel;
    QLabel *headLengthLabel;
    QLineEdit *mHeadLengthLineEdit;
    QLabel *percShaftLenLabel_2;
    QGroupBox *generalOptionsGroupBox;
    QVBoxLayout *verticalLayout_2;
    QComboBox *mShaftLengthComboBox;
    QStackedWidget *mShaftOptionsStackedWidget;
    QWidget *page;
    QFormLayout *formLayout;
    QLabel *minimumShaftLabel;
    QLineEdit *mMinimumShaftLineEdit;
    QLabel *maximumShaftLabel;
    QLineEdit *mMaximumShaftLineEdit;
    QWidget *page_2;
    QFormLayout *formLayout_2;
    QLabel *scaleByFactorOfLabel;
    QLineEdit *mScaleShaftByFactorOfLineEdit;
    QWidget *page_3;
    QFormLayout *formLayout_3;
    QLabel *LengthLabel;
    QLineEdit *mShaftLengthLineEdit;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QgsMeshRendererVectorSettingsWidgetBase)
    {
        if (QgsMeshRendererVectorSettingsWidgetBase->objectName().isEmpty())
            QgsMeshRendererVectorSettingsWidgetBase->setObjectName(QStringLiteral("QgsMeshRendererVectorSettingsWidgetBase"));
        QgsMeshRendererVectorSettingsWidgetBase->resize(287, 520);
        verticalLayout = new QVBoxLayout(QgsMeshRendererVectorSettingsWidgetBase);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(QgsMeshRendererVectorSettingsWidgetBase);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout_3 = new QHBoxLayout(groupBox);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        mLineWidthSpinBox = new QgsDoubleSpinBox(groupBox);
        mLineWidthSpinBox->setObjectName(QStringLiteral("mLineWidthSpinBox"));

        horizontalLayout_3->addWidget(mLineWidthSpinBox);

        mColorWidget = new QgsColorButton(groupBox);
        mColorWidget->setObjectName(QStringLiteral("mColorWidget"));

        horizontalLayout_3->addWidget(mColorWidget);


        verticalLayout->addWidget(groupBox);

        filterByMagGroupBox = new QGroupBox(QgsMeshRendererVectorSettingsWidgetBase);
        filterByMagGroupBox->setObjectName(QStringLiteral("filterByMagGroupBox"));
        filterByMagGroupBox->setChecked(false);
        horizontalLayout_2 = new QHBoxLayout(filterByMagGroupBox);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        minimumMagLabel = new QLabel(filterByMagGroupBox);
        minimumMagLabel->setObjectName(QStringLiteral("minimumMagLabel"));

        horizontalLayout_2->addWidget(minimumMagLabel);

        mMinMagLineEdit = new QLineEdit(filterByMagGroupBox);
        mMinMagLineEdit->setObjectName(QStringLiteral("mMinMagLineEdit"));

        horizontalLayout_2->addWidget(mMinMagLineEdit);

        maximumMagLabel = new QLabel(filterByMagGroupBox);
        maximumMagLabel->setObjectName(QStringLiteral("maximumMagLabel"));

        horizontalLayout_2->addWidget(maximumMagLabel);

        mMaxMagLineEdit = new QLineEdit(filterByMagGroupBox);
        mMaxMagLineEdit->setObjectName(QStringLiteral("mMaxMagLineEdit"));

        horizontalLayout_2->addWidget(mMaxMagLineEdit);


        verticalLayout->addWidget(filterByMagGroupBox);

        mDisplayVectorsOnGridGroupBox = new QGroupBox(QgsMeshRendererVectorSettingsWidgetBase);
        mDisplayVectorsOnGridGroupBox->setObjectName(QStringLiteral("mDisplayVectorsOnGridGroupBox"));
        mDisplayVectorsOnGridGroupBox->setCheckable(true);
        mDisplayVectorsOnGridGroupBox->setChecked(false);
        gridLayout_2 = new QGridLayout(mDisplayVectorsOnGridGroupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        xSpacingLabel = new QLabel(mDisplayVectorsOnGridGroupBox);
        xSpacingLabel->setObjectName(QStringLiteral("xSpacingLabel"));

        gridLayout->addWidget(xSpacingLabel, 0, 0, 1, 1);

        ySpacingLabel = new QLabel(mDisplayVectorsOnGridGroupBox);
        ySpacingLabel->setObjectName(QStringLiteral("ySpacingLabel"));

        gridLayout->addWidget(ySpacingLabel, 1, 0, 1, 1);

        mXSpacingSpinBox = new QgsSpinBox(mDisplayVectorsOnGridGroupBox);
        mXSpacingSpinBox->setObjectName(QStringLiteral("mXSpacingSpinBox"));
        mXSpacingSpinBox->setMinimum(1);
        mXSpacingSpinBox->setMaximum(8000);
        mXSpacingSpinBox->setSingleStep(10);
        mXSpacingSpinBox->setValue(10);

        gridLayout->addWidget(mXSpacingSpinBox, 0, 1, 1, 1);

        mYSpacingSpinBox = new QSpinBox(mDisplayVectorsOnGridGroupBox);
        mYSpacingSpinBox->setObjectName(QStringLiteral("mYSpacingSpinBox"));
        mYSpacingSpinBox->setMinimum(1);
        mYSpacingSpinBox->setMaximum(5000);
        mYSpacingSpinBox->setSingleStep(10);
        mYSpacingSpinBox->setValue(10);

        gridLayout->addWidget(mYSpacingSpinBox, 1, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 2, 0, 1, 1);


        verticalLayout->addWidget(mDisplayVectorsOnGridGroupBox);

        headOptionsGroupBox = new QGroupBox(QgsMeshRendererVectorSettingsWidgetBase);
        headOptionsGroupBox->setObjectName(QStringLiteral("headOptionsGroupBox"));
        gridLayout_4 = new QGridLayout(headOptionsGroupBox);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        headWidthLabel = new QLabel(headOptionsGroupBox);
        headWidthLabel->setObjectName(QStringLiteral("headWidthLabel"));

        gridLayout_4->addWidget(headWidthLabel, 0, 0, 1, 1);

        mHeadWidthLineEdit = new QLineEdit(headOptionsGroupBox);
        mHeadWidthLineEdit->setObjectName(QStringLiteral("mHeadWidthLineEdit"));

        gridLayout_4->addWidget(mHeadWidthLineEdit, 0, 1, 1, 1);

        percShaftLenLabel = new QLabel(headOptionsGroupBox);
        percShaftLenLabel->setObjectName(QStringLiteral("percShaftLenLabel"));

        gridLayout_4->addWidget(percShaftLenLabel, 0, 2, 1, 1);

        headLengthLabel = new QLabel(headOptionsGroupBox);
        headLengthLabel->setObjectName(QStringLiteral("headLengthLabel"));

        gridLayout_4->addWidget(headLengthLabel, 1, 0, 1, 1);

        mHeadLengthLineEdit = new QLineEdit(headOptionsGroupBox);
        mHeadLengthLineEdit->setObjectName(QStringLiteral("mHeadLengthLineEdit"));

        gridLayout_4->addWidget(mHeadLengthLineEdit, 1, 1, 1, 1);

        percShaftLenLabel_2 = new QLabel(headOptionsGroupBox);
        percShaftLenLabel_2->setObjectName(QStringLiteral("percShaftLenLabel_2"));

        gridLayout_4->addWidget(percShaftLenLabel_2, 1, 2, 1, 1);


        verticalLayout->addWidget(headOptionsGroupBox);

        generalOptionsGroupBox = new QGroupBox(QgsMeshRendererVectorSettingsWidgetBase);
        generalOptionsGroupBox->setObjectName(QStringLiteral("generalOptionsGroupBox"));
        verticalLayout_2 = new QVBoxLayout(generalOptionsGroupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        mShaftLengthComboBox = new QComboBox(generalOptionsGroupBox);
        mShaftLengthComboBox->setObjectName(QStringLiteral("mShaftLengthComboBox"));
        mShaftLengthComboBox->setMinimumSize(QSize(0, 0));
        mShaftLengthComboBox->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        verticalLayout_2->addWidget(mShaftLengthComboBox);

        mShaftOptionsStackedWidget = new QStackedWidget(generalOptionsGroupBox);
        mShaftOptionsStackedWidget->setObjectName(QStringLiteral("mShaftOptionsStackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        formLayout = new QFormLayout(page);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        minimumShaftLabel = new QLabel(page);
        minimumShaftLabel->setObjectName(QStringLiteral("minimumShaftLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, minimumShaftLabel);

        mMinimumShaftLineEdit = new QLineEdit(page);
        mMinimumShaftLineEdit->setObjectName(QStringLiteral("mMinimumShaftLineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, mMinimumShaftLineEdit);

        maximumShaftLabel = new QLabel(page);
        maximumShaftLabel->setObjectName(QStringLiteral("maximumShaftLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, maximumShaftLabel);

        mMaximumShaftLineEdit = new QLineEdit(page);
        mMaximumShaftLineEdit->setObjectName(QStringLiteral("mMaximumShaftLineEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, mMaximumShaftLineEdit);

        mShaftOptionsStackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        formLayout_2 = new QFormLayout(page_2);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        scaleByFactorOfLabel = new QLabel(page_2);
        scaleByFactorOfLabel->setObjectName(QStringLiteral("scaleByFactorOfLabel"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, scaleByFactorOfLabel);

        mScaleShaftByFactorOfLineEdit = new QLineEdit(page_2);
        mScaleShaftByFactorOfLineEdit->setObjectName(QStringLiteral("mScaleShaftByFactorOfLineEdit"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, mScaleShaftByFactorOfLineEdit);

        mShaftOptionsStackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        formLayout_3 = new QFormLayout(page_3);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        LengthLabel = new QLabel(page_3);
        LengthLabel->setObjectName(QStringLiteral("LengthLabel"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, LengthLabel);

        mShaftLengthLineEdit = new QLineEdit(page_3);
        mShaftLengthLineEdit->setObjectName(QStringLiteral("mShaftLengthLineEdit"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, mShaftLengthLineEdit);

        mShaftOptionsStackedWidget->addWidget(page_3);

        verticalLayout_2->addWidget(mShaftOptionsStackedWidget);


        verticalLayout->addWidget(generalOptionsGroupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(QgsMeshRendererVectorSettingsWidgetBase);

        mShaftOptionsStackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(QgsMeshRendererVectorSettingsWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsMeshRendererVectorSettingsWidgetBase)
    {
        QgsMeshRendererVectorSettingsWidgetBase->setWindowTitle(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Form", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Line Width and Color", Q_NULLPTR));
        filterByMagGroupBox->setTitle(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Filter by Magnitude", Q_NULLPTR));
        minimumMagLabel->setText(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Min", Q_NULLPTR));
        maximumMagLabel->setText(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Max", Q_NULLPTR));
        mDisplayVectorsOnGridGroupBox->setTitle(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Display Vectors on User Grid", Q_NULLPTR));
        xSpacingLabel->setText(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "X Spacing", Q_NULLPTR));
        ySpacingLabel->setText(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Y Spacing", Q_NULLPTR));
        mXSpacingSpinBox->setSuffix(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", " px", Q_NULLPTR));
        mYSpacingSpinBox->setSuffix(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", " px", Q_NULLPTR));
        headOptionsGroupBox->setTitle(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Head Options", Q_NULLPTR));
        headWidthLabel->setText(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Width", Q_NULLPTR));
        percShaftLenLabel->setText(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "% of Shaft Length", Q_NULLPTR));
        headLengthLabel->setText(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Length", Q_NULLPTR));
        percShaftLenLabel_2->setText(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "% of Shaft Length", Q_NULLPTR));
        generalOptionsGroupBox->setTitle(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Arrow Length", Q_NULLPTR));
        mShaftLengthComboBox->clear();
        mShaftLengthComboBox->insertItems(0, QStringList()
         << QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Defined by Min and Max", Q_NULLPTR)
         << QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Scaled to Magnitude", Q_NULLPTR)
         << QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Fixed", Q_NULLPTR)
        );
        minimumShaftLabel->setText(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Minimum", Q_NULLPTR));
        maximumShaftLabel->setText(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Maximum", Q_NULLPTR));
        scaleByFactorOfLabel->setText(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Scale by a Factor of", Q_NULLPTR));
        LengthLabel->setText(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Length", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsMeshRendererVectorSettingsWidgetBase: public Ui_QgsMeshRendererVectorSettingsWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMESHRENDERERVECTORSETTINGSWIDGETBASE_H
