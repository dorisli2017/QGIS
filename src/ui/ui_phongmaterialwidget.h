/********************************************************************************
** Form generated from reading UI file 'phongmaterialwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PHONGMATERIALWIDGET_H
#define UI_PHONGMATERIALWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include "qgscolorbutton.h"
#include "qgsdoublespinbox.h"

QT_BEGIN_NAMESPACE

class Ui_PhongMaterialWidget
{
public:
    QFormLayout *formLayout;
    QLabel *label;
    QgsColorButton *btnDiffuse;
    QLabel *label_2;
    QgsColorButton *btnAmbient;
    QLabel *label_3;
    QgsColorButton *btnSpecular;
    QLabel *label_4;
    QgsDoubleSpinBox *spinShininess;

    void setupUi(QWidget *PhongMaterialWidget)
    {
        if (PhongMaterialWidget->objectName().isEmpty())
            PhongMaterialWidget->setObjectName(QStringLiteral("PhongMaterialWidget"));
        PhongMaterialWidget->resize(334, 252);
        formLayout = new QFormLayout(PhongMaterialWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(PhongMaterialWidget);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        btnDiffuse = new QgsColorButton(PhongMaterialWidget);
        btnDiffuse->setObjectName(QStringLiteral("btnDiffuse"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnDiffuse->sizePolicy().hasHeightForWidth());
        btnDiffuse->setSizePolicy(sizePolicy);
        btnDiffuse->setMinimumSize(QSize(120, 0));

        formLayout->setWidget(0, QFormLayout::FieldRole, btnDiffuse);

        label_2 = new QLabel(PhongMaterialWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        btnAmbient = new QgsColorButton(PhongMaterialWidget);
        btnAmbient->setObjectName(QStringLiteral("btnAmbient"));
        sizePolicy.setHeightForWidth(btnAmbient->sizePolicy().hasHeightForWidth());
        btnAmbient->setSizePolicy(sizePolicy);
        btnAmbient->setMinimumSize(QSize(120, 0));

        formLayout->setWidget(1, QFormLayout::FieldRole, btnAmbient);

        label_3 = new QLabel(PhongMaterialWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        btnSpecular = new QgsColorButton(PhongMaterialWidget);
        btnSpecular->setObjectName(QStringLiteral("btnSpecular"));
        sizePolicy.setHeightForWidth(btnSpecular->sizePolicy().hasHeightForWidth());
        btnSpecular->setSizePolicy(sizePolicy);
        btnSpecular->setMinimumSize(QSize(120, 0));

        formLayout->setWidget(2, QFormLayout::FieldRole, btnSpecular);

        label_4 = new QLabel(PhongMaterialWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        spinShininess = new QgsDoubleSpinBox(PhongMaterialWidget);
        spinShininess->setObjectName(QStringLiteral("spinShininess"));
        spinShininess->setMaximum(1000);

        formLayout->setWidget(3, QFormLayout::FieldRole, spinShininess);


        retranslateUi(PhongMaterialWidget);

        QMetaObject::connectSlotsByName(PhongMaterialWidget);
    } // setupUi

    void retranslateUi(QWidget *PhongMaterialWidget)
    {
        PhongMaterialWidget->setWindowTitle(QApplication::translate("PhongMaterialWidget", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("PhongMaterialWidget", "Diffuse", Q_NULLPTR));
        label_2->setText(QApplication::translate("PhongMaterialWidget", "Ambient", Q_NULLPTR));
        label_3->setText(QApplication::translate("PhongMaterialWidget", "Specular", Q_NULLPTR));
        label_4->setText(QApplication::translate("PhongMaterialWidget", "Shininess", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PhongMaterialWidget: public Ui_PhongMaterialWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PHONGMATERIALWIDGET_H
