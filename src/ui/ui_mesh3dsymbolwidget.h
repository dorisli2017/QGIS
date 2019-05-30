/********************************************************************************
** Form generated from reading UI file 'mesh3dsymbolwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESH3DSYMBOLWIDGET_H
#define UI_MESH3DSYMBOLWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include "qgsdoublespinbox.h"
#include "qgsphongmaterialwidget.h"
#include "qgspropertyoverridebutton.h"

QT_BEGIN_NAMESPACE

class Ui_Mesh3DSymbolWidget
{
public:
    QGridLayout *gridLayout;
    QgsPhongMaterialWidget *widgetMaterial;
    QLabel *label;
    QFrame *line;
    QLabel *label_3;
    QComboBox *cboAltClamping;
    QgsPropertyOverrideButton *btnHeightDD;
    QgsDoubleSpinBox *spinHeight;
    QCheckBox *chkAddBackFaces;

    void setupUi(QWidget *Mesh3DSymbolWidget)
    {
        if (Mesh3DSymbolWidget->objectName().isEmpty())
            Mesh3DSymbolWidget->setObjectName(QStringLiteral("Mesh3DSymbolWidget"));
        Mesh3DSymbolWidget->resize(561, 452);
        gridLayout = new QGridLayout(Mesh3DSymbolWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        widgetMaterial = new QgsPhongMaterialWidget(Mesh3DSymbolWidget);
        widgetMaterial->setObjectName(QStringLiteral("widgetMaterial"));

        gridLayout->addWidget(widgetMaterial, 4, 0, 1, 3);

        label = new QLabel(Mesh3DSymbolWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        line = new QFrame(Mesh3DSymbolWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 3, 0, 1, 3);

        label_3 = new QLabel(Mesh3DSymbolWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        cboAltClamping = new QComboBox(Mesh3DSymbolWidget);
        cboAltClamping->setObjectName(QStringLiteral("cboAltClamping"));

        gridLayout->addWidget(cboAltClamping, 1, 1, 1, 1);

        btnHeightDD = new QgsPropertyOverrideButton(Mesh3DSymbolWidget);
        btnHeightDD->setObjectName(QStringLiteral("btnHeightDD"));

        gridLayout->addWidget(btnHeightDD, 0, 2, 1, 1);

        spinHeight = new QgsDoubleSpinBox(Mesh3DSymbolWidget);
        spinHeight->setObjectName(QStringLiteral("spinHeight"));
        spinHeight->setMinimum(-99999);
        spinHeight->setMaximum(99999);

        gridLayout->addWidget(spinHeight, 0, 1, 1, 1);

        chkAddBackFaces = new QCheckBox(Mesh3DSymbolWidget);
        chkAddBackFaces->setObjectName(QStringLiteral("chkAddBackFaces"));

        gridLayout->addWidget(chkAddBackFaces, 2, 0, 1, 1);

        QWidget::setTabOrder(spinHeight, btnHeightDD);
        QWidget::setTabOrder(btnHeightDD, cboAltClamping);
        QWidget::setTabOrder(cboAltClamping, chkAddBackFaces);

        retranslateUi(Mesh3DSymbolWidget);

        QMetaObject::connectSlotsByName(Mesh3DSymbolWidget);
    } // setupUi

    void retranslateUi(QWidget *Mesh3DSymbolWidget)
    {
        Mesh3DSymbolWidget->setWindowTitle(QApplication::translate("Mesh3DSymbolWidget", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("Mesh3DSymbolWidget", "Height", Q_NULLPTR));
        label_3->setText(QApplication::translate("Mesh3DSymbolWidget", "Altitude clamping", Q_NULLPTR));
        cboAltClamping->clear();
        cboAltClamping->insertItems(0, QStringList()
         << QApplication::translate("Mesh3DSymbolWidget", "Absolute", Q_NULLPTR)
         << QApplication::translate("Mesh3DSymbolWidget", "Relative", Q_NULLPTR)
         << QApplication::translate("Mesh3DSymbolWidget", "Terrain", Q_NULLPTR)
        );
        btnHeightDD->setText(QApplication::translate("Mesh3DSymbolWidget", "\342\200\246", Q_NULLPTR));
        chkAddBackFaces->setText(QApplication::translate("Mesh3DSymbolWidget", "Add back faces", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Mesh3DSymbolWidget: public Ui_Mesh3DSymbolWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESH3DSYMBOLWIDGET_H
