/********************************************************************************
** Form generated from reading UI file 'qgshistogramwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSHISTOGRAMWIDGETBASE_H
#define UI_QGSHISTOGRAMWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qwt_plot.h"

QT_BEGIN_NAMESPACE

class Ui_QgsHistogramWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *mLoadValuesButton;
    QSpacerItem *horizontalSpacer;
    QwtPlot *mpPlot;
    QFormLayout *formLayout;
    QLabel *label_12;
    QSpinBox *mBinsSpinBox;
    QCheckBox *mMeanCheckBox;
    QCheckBox *mStdevCheckBox;

    void setupUi(QWidget *QgsHistogramWidgetBase)
    {
        if (QgsHistogramWidgetBase->objectName().isEmpty())
            QgsHistogramWidgetBase->setObjectName(QStringLiteral("QgsHistogramWidgetBase"));
        QgsHistogramWidgetBase->resize(285, 245);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsHistogramWidgetBase->sizePolicy().hasHeightForWidth());
        QgsHistogramWidgetBase->setSizePolicy(sizePolicy);
        QgsHistogramWidgetBase->setMinimumSize(QSize(0, 60));
        verticalLayout = new QVBoxLayout(QgsHistogramWidgetBase);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, -1);
        mLoadValuesButton = new QPushButton(QgsHistogramWidgetBase);
        mLoadValuesButton->setObjectName(QStringLiteral("mLoadValuesButton"));

        horizontalLayout->addWidget(mLoadValuesButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        mpPlot = new QwtPlot(QgsHistogramWidgetBase);
        mpPlot->setObjectName(QStringLiteral("mpPlot"));
        sizePolicy.setHeightForWidth(mpPlot->sizePolicy().hasHeightForWidth());
        mpPlot->setSizePolicy(sizePolicy);
        mpPlot->setMinimumSize(QSize(0, 30));

        verticalLayout->addWidget(mpPlot);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_12 = new QLabel(QgsHistogramWidgetBase);
        label_12->setObjectName(QStringLiteral("label_12"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_12);

        mBinsSpinBox = new QSpinBox(QgsHistogramWidgetBase);
        mBinsSpinBox->setObjectName(QStringLiteral("mBinsSpinBox"));
        mBinsSpinBox->setMinimum(1);
        mBinsSpinBox->setMaximum(999);
        mBinsSpinBox->setValue(50);

        formLayout->setWidget(0, QFormLayout::FieldRole, mBinsSpinBox);

        mMeanCheckBox = new QCheckBox(QgsHistogramWidgetBase);
        mMeanCheckBox->setObjectName(QStringLiteral("mMeanCheckBox"));

        formLayout->setWidget(1, QFormLayout::FieldRole, mMeanCheckBox);

        mStdevCheckBox = new QCheckBox(QgsHistogramWidgetBase);
        mStdevCheckBox->setObjectName(QStringLiteral("mStdevCheckBox"));

        formLayout->setWidget(2, QFormLayout::FieldRole, mStdevCheckBox);


        verticalLayout->addLayout(formLayout);

        verticalLayout->setStretch(1, 1);

        retranslateUi(QgsHistogramWidgetBase);

        QMetaObject::connectSlotsByName(QgsHistogramWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsHistogramWidgetBase)
    {
        QgsHistogramWidgetBase->setWindowTitle(QApplication::translate("QgsHistogramWidgetBase", "Form", Q_NULLPTR));
        mLoadValuesButton->setText(QApplication::translate("QgsHistogramWidgetBase", "Load Values", Q_NULLPTR));
        label_12->setText(QApplication::translate("QgsHistogramWidgetBase", "Histogram bins", Q_NULLPTR));
        mMeanCheckBox->setText(QApplication::translate("QgsHistogramWidgetBase", "Show mean value", Q_NULLPTR));
        mStdevCheckBox->setText(QApplication::translate("QgsHistogramWidgetBase", "Show standard deviation", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsHistogramWidgetBase: public Ui_QgsHistogramWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSHISTOGRAMWIDGETBASE_H
