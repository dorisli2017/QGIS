/********************************************************************************
** Form generated from reading UI file 'widget_centroidfill.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_CENTROIDFILL_H
#define UI_WIDGET_CENTROIDFILL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WidgetCentroidFill
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_1;
    QCheckBox *mDrawInsideCheckBox;
    QHBoxLayout *horizontalLayout;
    QCheckBox *mDrawAllPartsCheckBox;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *WidgetCentroidFill)
    {
        if (WidgetCentroidFill->objectName().isEmpty())
            WidgetCentroidFill->setObjectName(QStringLiteral("WidgetCentroidFill"));
        WidgetCentroidFill->resize(368, 242);
        verticalLayout = new QVBoxLayout(WidgetCentroidFill);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_1 = new QHBoxLayout();
        horizontalLayout_1->setObjectName(QStringLiteral("horizontalLayout_1"));
        mDrawInsideCheckBox = new QCheckBox(WidgetCentroidFill);
        mDrawInsideCheckBox->setObjectName(QStringLiteral("mDrawInsideCheckBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mDrawInsideCheckBox->sizePolicy().hasHeightForWidth());
        mDrawInsideCheckBox->setSizePolicy(sizePolicy);

        horizontalLayout_1->addWidget(mDrawInsideCheckBox);


        verticalLayout->addLayout(horizontalLayout_1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mDrawAllPartsCheckBox = new QCheckBox(WidgetCentroidFill);
        mDrawAllPartsCheckBox->setObjectName(QStringLiteral("mDrawAllPartsCheckBox"));

        horizontalLayout->addWidget(mDrawAllPartsCheckBox);


        verticalLayout->addLayout(horizontalLayout);

        spacerItem = new QSpacerItem(350, 81, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(spacerItem);


        retranslateUi(WidgetCentroidFill);

        QMetaObject::connectSlotsByName(WidgetCentroidFill);
    } // setupUi

    void retranslateUi(QWidget *WidgetCentroidFill)
    {
        WidgetCentroidFill->setWindowTitle(QApplication::translate("WidgetCentroidFill", "Form", Q_NULLPTR));
        mDrawInsideCheckBox->setText(QApplication::translate("WidgetCentroidFill", "Force point inside polygon", Q_NULLPTR));
        mDrawAllPartsCheckBox->setText(QApplication::translate("WidgetCentroidFill", "Draw point on every part of multi-part features", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mDrawAllPartsCheckBox->setToolTip(QApplication::translate("WidgetCentroidFill", "When unchecked, a single point will be drawn on the biggest part of multi-part features", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class WidgetCentroidFill: public Ui_WidgetCentroidFill {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_CENTROIDFILL_H
