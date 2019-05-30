/********************************************************************************
** Form generated from reading UI file 'qgslightswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLIGHTSWIDGET_H
#define UI_QGSLIGHTSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscolorbutton.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLightsWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *cboLights;
    QToolButton *btnAddLight;
    QToolButton *btnRemoveLight;
    QGridLayout *gridLayout;
    QDoubleSpinBox *spinA0;
    QDoubleSpinBox *spinA1;
    QLabel *label;
    QLabel *label_3;
    QDoubleSpinBox *spinPositionX;
    QDoubleSpinBox *spinPositionY;
    QLabel *label_2;
    QDoubleSpinBox *spinPositionZ;
    QLabel *label_4;
    QDoubleSpinBox *spinIntensity;
    QLabel *label_6;
    QgsColorButton *btnColor;
    QLabel *label_5;
    QDoubleSpinBox *spinA2;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;

    void setupUi(QWidget *QgsLightsWidget)
    {
        if (QgsLightsWidget->objectName().isEmpty())
            QgsLightsWidget->setObjectName(QStringLiteral("QgsLightsWidget"));
        QgsLightsWidget->resize(400, 633);
        verticalLayout = new QVBoxLayout(QgsLightsWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        cboLights = new QComboBox(QgsLightsWidget);
        cboLights->setObjectName(QStringLiteral("cboLights"));

        horizontalLayout->addWidget(cboLights);

        btnAddLight = new QToolButton(QgsLightsWidget);
        btnAddLight->setObjectName(QStringLiteral("btnAddLight"));

        horizontalLayout->addWidget(btnAddLight);

        btnRemoveLight = new QToolButton(QgsLightsWidget);
        btnRemoveLight->setObjectName(QStringLiteral("btnRemoveLight"));

        horizontalLayout->addWidget(btnRemoveLight);


        verticalLayout->addLayout(horizontalLayout);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        spinA0 = new QDoubleSpinBox(QgsLightsWidget);
        spinA0->setObjectName(QStringLiteral("spinA0"));
        spinA0->setMaximum(9);
        spinA0->setSingleStep(0.1);

        gridLayout->addWidget(spinA0, 7, 1, 1, 1);

        spinA1 = new QDoubleSpinBox(QgsLightsWidget);
        spinA1->setObjectName(QStringLiteral("spinA1"));
        spinA1->setMaximum(9);
        spinA1->setSingleStep(0.1);

        gridLayout->addWidget(spinA1, 8, 1, 1, 1);

        label = new QLabel(QgsLightsWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_3 = new QLabel(QgsLightsWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        spinPositionX = new QDoubleSpinBox(QgsLightsWidget);
        spinPositionX->setObjectName(QStringLiteral("spinPositionX"));
        spinPositionX->setDecimals(1);
        spinPositionX->setMinimum(-1e+7);
        spinPositionX->setMaximum(1e+7);

        gridLayout->addWidget(spinPositionX, 0, 1, 1, 1);

        spinPositionY = new QDoubleSpinBox(QgsLightsWidget);
        spinPositionY->setObjectName(QStringLiteral("spinPositionY"));
        spinPositionY->setDecimals(1);
        spinPositionY->setMinimum(-1e+7);
        spinPositionY->setMaximum(1e+7);

        gridLayout->addWidget(spinPositionY, 1, 1, 2, 1);

        label_2 = new QLabel(QgsLightsWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 2, 1);

        spinPositionZ = new QDoubleSpinBox(QgsLightsWidget);
        spinPositionZ->setObjectName(QStringLiteral("spinPositionZ"));
        spinPositionZ->setDecimals(1);
        spinPositionZ->setMinimum(-1e+7);
        spinPositionZ->setMaximum(1e+7);

        gridLayout->addWidget(spinPositionZ, 3, 1, 1, 1);

        label_4 = new QLabel(QgsLightsWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 5, 0, 1, 1);

        spinIntensity = new QDoubleSpinBox(QgsLightsWidget);
        spinIntensity->setObjectName(QStringLiteral("spinIntensity"));
        spinIntensity->setDecimals(1);
        spinIntensity->setMaximum(999999);

        gridLayout->addWidget(spinIntensity, 5, 1, 1, 1);

        label_6 = new QLabel(QgsLightsWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 6, 0, 1, 2);

        btnColor = new QgsColorButton(QgsLightsWidget);
        btnColor->setObjectName(QStringLiteral("btnColor"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnColor->sizePolicy().hasHeightForWidth());
        btnColor->setSizePolicy(sizePolicy);
        btnColor->setMinimumSize(QSize(120, 0));

        gridLayout->addWidget(btnColor, 4, 1, 1, 1);

        label_5 = new QLabel(QgsLightsWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        spinA2 = new QDoubleSpinBox(QgsLightsWidget);
        spinA2->setObjectName(QStringLiteral("spinA2"));
        spinA2->setMaximum(9);
        spinA2->setSingleStep(0.1);

        gridLayout->addWidget(spinA2, 9, 1, 1, 1);

        label_7 = new QLabel(QgsLightsWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 7, 0, 1, 1);

        label_8 = new QLabel(QgsLightsWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 8, 0, 1, 1);

        label_9 = new QLabel(QgsLightsWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 9, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        QWidget::setTabOrder(cboLights, btnAddLight);
        QWidget::setTabOrder(btnAddLight, btnRemoveLight);
        QWidget::setTabOrder(btnRemoveLight, spinPositionX);
        QWidget::setTabOrder(spinPositionX, spinPositionY);
        QWidget::setTabOrder(spinPositionY, spinPositionZ);
        QWidget::setTabOrder(spinPositionZ, btnColor);
        QWidget::setTabOrder(btnColor, spinIntensity);

        retranslateUi(QgsLightsWidget);

        QMetaObject::connectSlotsByName(QgsLightsWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsLightsWidget)
    {
        QgsLightsWidget->setWindowTitle(QApplication::translate("QgsLightsWidget", "Form", Q_NULLPTR));
        btnAddLight->setText(QApplication::translate("QgsLightsWidget", "...", Q_NULLPTR));
        btnRemoveLight->setText(QApplication::translate("QgsLightsWidget", "...", Q_NULLPTR));
        label->setText(QApplication::translate("QgsLightsWidget", "X", Q_NULLPTR));
        label_3->setText(QApplication::translate("QgsLightsWidget", "Z", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsLightsWidget", "Y", Q_NULLPTR));
        label_4->setText(QApplication::translate("QgsLightsWidget", "Intensity", Q_NULLPTR));
        label_6->setText(QApplication::translate("QgsLightsWidget", "<html><head/><body><p>Attenuation (A<span style=\" vertical-align:sub;\">0</span>+A<span style=\" vertical-align:sub;\">1</span>*D+A<span style=\" vertical-align:sub;\">2</span>*D<span style=\" vertical-align:super;\">2</span>)</p></body></html>", Q_NULLPTR));
        label_5->setText(QApplication::translate("QgsLightsWidget", "Color", Q_NULLPTR));
        label_7->setText(QApplication::translate("QgsLightsWidget", "<html><head/><body><p>A<span style=\" vertical-align:sub;\">0</span></p></body></html>", Q_NULLPTR));
        label_8->setText(QApplication::translate("QgsLightsWidget", "<html><head/><body><p>A<span style=\" vertical-align:sub;\">1</span></p></body></html>", Q_NULLPTR));
        label_9->setText(QApplication::translate("QgsLightsWidget", "<html><head/><body><p>A<span style=\" vertical-align:sub;\">2</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsLightsWidget: public Ui_QgsLightsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLIGHTSWIDGET_H
