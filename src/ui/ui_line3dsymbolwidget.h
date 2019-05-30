/********************************************************************************
** Form generated from reading UI file 'line3dsymbolwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LINE3DSYMBOLWIDGET_H
#define UI_LINE3DSYMBOLWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsdoublespinbox.h"
#include "qgsphongmaterialwidget.h"

QT_BEGIN_NAMESPACE

class Ui_Line3DSymbolWidget
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QgsDoubleSpinBox *spinHeight;
    QLabel *label_2;
    QgsDoubleSpinBox *spinExtrusion;
    QLabel *label_3;
    QComboBox *cboAltClamping;
    QLabel *label_4;
    QComboBox *cboAltBinding;
    QLabel *label_5;
    QgsDoubleSpinBox *spinWidth;
    QCheckBox *chkSimpleLines;
    QFrame *line;
    QgsPhongMaterialWidget *widgetMaterial;

    void setupUi(QWidget *Line3DSymbolWidget)
    {
        if (Line3DSymbolWidget->objectName().isEmpty())
            Line3DSymbolWidget->setObjectName(QStringLiteral("Line3DSymbolWidget"));
        Line3DSymbolWidget->resize(538, 547);
        verticalLayout = new QVBoxLayout(Line3DSymbolWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(Line3DSymbolWidget);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        spinHeight = new QgsDoubleSpinBox(Line3DSymbolWidget);
        spinHeight->setObjectName(QStringLiteral("spinHeight"));
        spinHeight->setMinimum(-99999);
        spinHeight->setMaximum(99999);

        formLayout->setWidget(1, QFormLayout::FieldRole, spinHeight);

        label_2 = new QLabel(Line3DSymbolWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        spinExtrusion = new QgsDoubleSpinBox(Line3DSymbolWidget);
        spinExtrusion->setObjectName(QStringLiteral("spinExtrusion"));
        spinExtrusion->setMaximum(99999);

        formLayout->setWidget(2, QFormLayout::FieldRole, spinExtrusion);

        label_3 = new QLabel(Line3DSymbolWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);

        cboAltClamping = new QComboBox(Line3DSymbolWidget);
        cboAltClamping->setObjectName(QStringLiteral("cboAltClamping"));

        formLayout->setWidget(3, QFormLayout::FieldRole, cboAltClamping);

        label_4 = new QLabel(Line3DSymbolWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_4);

        cboAltBinding = new QComboBox(Line3DSymbolWidget);
        cboAltBinding->setObjectName(QStringLiteral("cboAltBinding"));

        formLayout->setWidget(4, QFormLayout::FieldRole, cboAltBinding);

        label_5 = new QLabel(Line3DSymbolWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_5);

        spinWidth = new QgsDoubleSpinBox(Line3DSymbolWidget);
        spinWidth->setObjectName(QStringLiteral("spinWidth"));
        spinWidth->setMaximum(99999);

        formLayout->setWidget(0, QFormLayout::FieldRole, spinWidth);


        verticalLayout->addLayout(formLayout);

        chkSimpleLines = new QCheckBox(Line3DSymbolWidget);
        chkSimpleLines->setObjectName(QStringLiteral("chkSimpleLines"));

        verticalLayout->addWidget(chkSimpleLines);

        line = new QFrame(Line3DSymbolWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        widgetMaterial = new QgsPhongMaterialWidget(Line3DSymbolWidget);
        widgetMaterial->setObjectName(QStringLiteral("widgetMaterial"));

        verticalLayout->addWidget(widgetMaterial);

        QWidget::setTabOrder(spinWidth, spinHeight);
        QWidget::setTabOrder(spinHeight, spinExtrusion);
        QWidget::setTabOrder(spinExtrusion, cboAltClamping);
        QWidget::setTabOrder(cboAltClamping, cboAltBinding);

        retranslateUi(Line3DSymbolWidget);

        QMetaObject::connectSlotsByName(Line3DSymbolWidget);
    } // setupUi

    void retranslateUi(QWidget *Line3DSymbolWidget)
    {
        Line3DSymbolWidget->setWindowTitle(QApplication::translate("Line3DSymbolWidget", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("Line3DSymbolWidget", "Height", Q_NULLPTR));
        label_2->setText(QApplication::translate("Line3DSymbolWidget", "Extrusion", Q_NULLPTR));
        label_3->setText(QApplication::translate("Line3DSymbolWidget", "Altitude clamping", Q_NULLPTR));
        cboAltClamping->clear();
        cboAltClamping->insertItems(0, QStringList()
         << QApplication::translate("Line3DSymbolWidget", "Absolute", Q_NULLPTR)
         << QApplication::translate("Line3DSymbolWidget", "Relative", Q_NULLPTR)
         << QApplication::translate("Line3DSymbolWidget", "Terrain", Q_NULLPTR)
        );
        label_4->setText(QApplication::translate("Line3DSymbolWidget", "Altitude binding", Q_NULLPTR));
        cboAltBinding->clear();
        cboAltBinding->insertItems(0, QStringList()
         << QApplication::translate("Line3DSymbolWidget", "Vertex", Q_NULLPTR)
         << QApplication::translate("Line3DSymbolWidget", "Centroid", Q_NULLPTR)
        );
        label_5->setText(QApplication::translate("Line3DSymbolWidget", "Width", Q_NULLPTR));
        chkSimpleLines->setText(QApplication::translate("Line3DSymbolWidget", "Render as simple 3D lines", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Line3DSymbolWidget: public Ui_Line3DSymbolWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LINE3DSYMBOLWIDGET_H
