/********************************************************************************
** Form generated from reading UI file 'point3dsymbolwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POINT3DSYMBOLWIDGET_H
#define UI_POINT3DSYMBOLWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "qgsdoublespinbox.h"
#include "qgsphongmaterialwidget.h"

QT_BEGIN_NAMESPACE

class Ui_Point3DSymbolWidget
{
public:
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *cboShape;
    QLabel *labelRadius;
    QgsDoubleSpinBox *spinRadius;
    QLabel *labelMinorRadius;
    QgsDoubleSpinBox *spinMinorRadius;
    QLabel *labelTopRadius;
    QgsDoubleSpinBox *spinTopRadius;
    QLabel *labelBottomRadius;
    QgsDoubleSpinBox *spinBottomRadius;
    QLabel *labelSize;
    QgsDoubleSpinBox *spinSize;
    QLabel *labelLength;
    QgsDoubleSpinBox *spinLength;
    QLabel *labelModel;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEditModel;
    QToolButton *btnModel;
    QCheckBox *cbOverwriteMaterial;
    QLabel *labelAltClamping;
    QComboBox *cboAltClamping;
    QgsPhongMaterialWidget *widgetMaterial;
    QFrame *line;
    QFrame *line_2;
    QGridLayout *gridLayout;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_2;
    QgsDoubleSpinBox *spinTX;
    QgsDoubleSpinBox *spinTY;
    QgsDoubleSpinBox *spinTZ;
    QLabel *label_3;
    QgsDoubleSpinBox *spinSX;
    QgsDoubleSpinBox *spinSY;
    QgsDoubleSpinBox *spinSZ;
    QLabel *label_4;
    QgsDoubleSpinBox *spinRX;
    QgsDoubleSpinBox *spinRY;
    QgsDoubleSpinBox *spinRZ;

    void setupUi(QWidget *Point3DSymbolWidget)
    {
        if (Point3DSymbolWidget->objectName().isEmpty())
            Point3DSymbolWidget->setObjectName(QStringLiteral("Point3DSymbolWidget"));
        Point3DSymbolWidget->resize(573, 942);
        formLayout = new QFormLayout(Point3DSymbolWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(Point3DSymbolWidget);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        cboShape = new QComboBox(Point3DSymbolWidget);
        cboShape->setObjectName(QStringLiteral("cboShape"));

        formLayout->setWidget(0, QFormLayout::FieldRole, cboShape);

        labelRadius = new QLabel(Point3DSymbolWidget);
        labelRadius->setObjectName(QStringLiteral("labelRadius"));

        formLayout->setWidget(1, QFormLayout::LabelRole, labelRadius);

        spinRadius = new QgsDoubleSpinBox(Point3DSymbolWidget);
        spinRadius->setObjectName(QStringLiteral("spinRadius"));
        spinRadius->setMaximum(99999);
        spinRadius->setValue(10);

        formLayout->setWidget(1, QFormLayout::FieldRole, spinRadius);

        labelMinorRadius = new QLabel(Point3DSymbolWidget);
        labelMinorRadius->setObjectName(QStringLiteral("labelMinorRadius"));

        formLayout->setWidget(2, QFormLayout::LabelRole, labelMinorRadius);

        spinMinorRadius = new QgsDoubleSpinBox(Point3DSymbolWidget);
        spinMinorRadius->setObjectName(QStringLiteral("spinMinorRadius"));
        spinMinorRadius->setMaximum(99999);
        spinMinorRadius->setValue(5);

        formLayout->setWidget(2, QFormLayout::FieldRole, spinMinorRadius);

        labelTopRadius = new QLabel(Point3DSymbolWidget);
        labelTopRadius->setObjectName(QStringLiteral("labelTopRadius"));

        formLayout->setWidget(3, QFormLayout::LabelRole, labelTopRadius);

        spinTopRadius = new QgsDoubleSpinBox(Point3DSymbolWidget);
        spinTopRadius->setObjectName(QStringLiteral("spinTopRadius"));
        spinTopRadius->setMaximum(99999);

        formLayout->setWidget(3, QFormLayout::FieldRole, spinTopRadius);

        labelBottomRadius = new QLabel(Point3DSymbolWidget);
        labelBottomRadius->setObjectName(QStringLiteral("labelBottomRadius"));

        formLayout->setWidget(4, QFormLayout::LabelRole, labelBottomRadius);

        spinBottomRadius = new QgsDoubleSpinBox(Point3DSymbolWidget);
        spinBottomRadius->setObjectName(QStringLiteral("spinBottomRadius"));
        spinBottomRadius->setMaximum(99999);
        spinBottomRadius->setValue(10);

        formLayout->setWidget(4, QFormLayout::FieldRole, spinBottomRadius);

        labelSize = new QLabel(Point3DSymbolWidget);
        labelSize->setObjectName(QStringLiteral("labelSize"));

        formLayout->setWidget(5, QFormLayout::LabelRole, labelSize);

        spinSize = new QgsDoubleSpinBox(Point3DSymbolWidget);
        spinSize->setObjectName(QStringLiteral("spinSize"));
        spinSize->setMaximum(99999);
        spinSize->setValue(10);

        formLayout->setWidget(5, QFormLayout::FieldRole, spinSize);

        labelLength = new QLabel(Point3DSymbolWidget);
        labelLength->setObjectName(QStringLiteral("labelLength"));

        formLayout->setWidget(6, QFormLayout::LabelRole, labelLength);

        spinLength = new QgsDoubleSpinBox(Point3DSymbolWidget);
        spinLength->setObjectName(QStringLiteral("spinLength"));
        spinLength->setMaximum(99999);
        spinLength->setValue(10);

        formLayout->setWidget(6, QFormLayout::FieldRole, spinLength);

        labelModel = new QLabel(Point3DSymbolWidget);
        labelModel->setObjectName(QStringLiteral("labelModel"));

        formLayout->setWidget(7, QFormLayout::LabelRole, labelModel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lineEditModel = new QLineEdit(Point3DSymbolWidget);
        lineEditModel->setObjectName(QStringLiteral("lineEditModel"));

        horizontalLayout->addWidget(lineEditModel);

        btnModel = new QToolButton(Point3DSymbolWidget);
        btnModel->setObjectName(QStringLiteral("btnModel"));

        horizontalLayout->addWidget(btnModel);

        cbOverwriteMaterial = new QCheckBox(Point3DSymbolWidget);
        cbOverwriteMaterial->setObjectName(QStringLiteral("cbOverwriteMaterial"));

        horizontalLayout->addWidget(cbOverwriteMaterial);


        formLayout->setLayout(7, QFormLayout::FieldRole, horizontalLayout);

        labelAltClamping = new QLabel(Point3DSymbolWidget);
        labelAltClamping->setObjectName(QStringLiteral("labelAltClamping"));

        formLayout->setWidget(8, QFormLayout::LabelRole, labelAltClamping);

        cboAltClamping = new QComboBox(Point3DSymbolWidget);
        cboAltClamping->setObjectName(QStringLiteral("cboAltClamping"));

        formLayout->setWidget(8, QFormLayout::FieldRole, cboAltClamping);

        widgetMaterial = new QgsPhongMaterialWidget(Point3DSymbolWidget);
        widgetMaterial->setObjectName(QStringLiteral("widgetMaterial"));

        formLayout->setWidget(9, QFormLayout::SpanningRole, widgetMaterial);

        line = new QFrame(Point3DSymbolWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        formLayout->setWidget(10, QFormLayout::SpanningRole, line);

        line_2 = new QFrame(Point3DSymbolWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        formLayout->setWidget(11, QFormLayout::SpanningRole, line_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_5 = new QLabel(Point3DSymbolWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_5, 0, 1, 1, 1);

        label_6 = new QLabel(Point3DSymbolWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_6, 0, 2, 1, 1);

        label_7 = new QLabel(Point3DSymbolWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_7, 0, 3, 1, 1);

        label_2 = new QLabel(Point3DSymbolWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        spinTX = new QgsDoubleSpinBox(Point3DSymbolWidget);
        spinTX->setObjectName(QStringLiteral("spinTX"));
        spinTX->setMinimum(-99999.9);
        spinTX->setMaximum(99999.9);

        gridLayout->addWidget(spinTX, 1, 1, 1, 1);

        spinTY = new QgsDoubleSpinBox(Point3DSymbolWidget);
        spinTY->setObjectName(QStringLiteral("spinTY"));
        spinTY->setMinimum(-99999.9);
        spinTY->setMaximum(99999.9);

        gridLayout->addWidget(spinTY, 1, 2, 1, 1);

        spinTZ = new QgsDoubleSpinBox(Point3DSymbolWidget);
        spinTZ->setObjectName(QStringLiteral("spinTZ"));
        spinTZ->setMinimum(-99999.9);
        spinTZ->setMaximum(99999.9);

        gridLayout->addWidget(spinTZ, 1, 3, 1, 1);

        label_3 = new QLabel(Point3DSymbolWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        spinSX = new QgsDoubleSpinBox(Point3DSymbolWidget);
        spinSX->setObjectName(QStringLiteral("spinSX"));
        spinSX->setMinimum(-99999.9);
        spinSX->setMaximum(99999.9);
        spinSX->setValue(1);

        gridLayout->addWidget(spinSX, 2, 1, 1, 1);

        spinSY = new QgsDoubleSpinBox(Point3DSymbolWidget);
        spinSY->setObjectName(QStringLiteral("spinSY"));
        spinSY->setMinimum(-99999.9);
        spinSY->setMaximum(99999.9);
        spinSY->setValue(1);

        gridLayout->addWidget(spinSY, 2, 2, 1, 1);

        spinSZ = new QgsDoubleSpinBox(Point3DSymbolWidget);
        spinSZ->setObjectName(QStringLiteral("spinSZ"));
        spinSZ->setMinimum(-99999.9);
        spinSZ->setMaximum(99999.9);
        spinSZ->setValue(1);

        gridLayout->addWidget(spinSZ, 2, 3, 1, 1);

        label_4 = new QLabel(Point3DSymbolWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        spinRX = new QgsDoubleSpinBox(Point3DSymbolWidget);
        spinRX->setObjectName(QStringLiteral("spinRX"));
        spinRX->setDecimals(0);
        spinRX->setMaximum(360);

        gridLayout->addWidget(spinRX, 3, 1, 1, 1);

        spinRY = new QgsDoubleSpinBox(Point3DSymbolWidget);
        spinRY->setObjectName(QStringLiteral("spinRY"));
        spinRY->setDecimals(0);
        spinRY->setMaximum(360);

        gridLayout->addWidget(spinRY, 3, 2, 1, 1);

        spinRZ = new QgsDoubleSpinBox(Point3DSymbolWidget);
        spinRZ->setObjectName(QStringLiteral("spinRZ"));
        spinRZ->setDecimals(0);
        spinRZ->setMaximum(360);

        gridLayout->addWidget(spinRZ, 3, 3, 1, 1);


        formLayout->setLayout(12, QFormLayout::SpanningRole, gridLayout);

        QWidget::setTabOrder(spinRadius, spinMinorRadius);
        QWidget::setTabOrder(spinMinorRadius, spinTopRadius);
        QWidget::setTabOrder(spinTopRadius, spinBottomRadius);
        QWidget::setTabOrder(spinBottomRadius, spinSize);
        QWidget::setTabOrder(spinSize, spinLength);
        QWidget::setTabOrder(spinLength, spinTX);
        QWidget::setTabOrder(spinTX, spinTY);
        QWidget::setTabOrder(spinTY, spinTZ);
        QWidget::setTabOrder(spinTZ, spinSX);
        QWidget::setTabOrder(spinSX, spinSY);
        QWidget::setTabOrder(spinSY, spinSZ);
        QWidget::setTabOrder(spinSZ, spinRX);
        QWidget::setTabOrder(spinRX, spinRY);
        QWidget::setTabOrder(spinRY, spinRZ);

        retranslateUi(Point3DSymbolWidget);

        QMetaObject::connectSlotsByName(Point3DSymbolWidget);
    } // setupUi

    void retranslateUi(QWidget *Point3DSymbolWidget)
    {
        Point3DSymbolWidget->setWindowTitle(QApplication::translate("Point3DSymbolWidget", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("Point3DSymbolWidget", "Shape", Q_NULLPTR));
        labelRadius->setText(QApplication::translate("Point3DSymbolWidget", "Radius", Q_NULLPTR));
        labelMinorRadius->setText(QApplication::translate("Point3DSymbolWidget", "Minor radius", Q_NULLPTR));
        labelTopRadius->setText(QApplication::translate("Point3DSymbolWidget", "Top radius", Q_NULLPTR));
        labelBottomRadius->setText(QApplication::translate("Point3DSymbolWidget", "Bottom radius", Q_NULLPTR));
        labelSize->setText(QApplication::translate("Point3DSymbolWidget", "Size", Q_NULLPTR));
        labelLength->setText(QApplication::translate("Point3DSymbolWidget", "Length", Q_NULLPTR));
        labelModel->setText(QApplication::translate("Point3DSymbolWidget", "Model", Q_NULLPTR));
        btnModel->setText(QApplication::translate("Point3DSymbolWidget", "\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        cbOverwriteMaterial->setToolTip(QApplication::translate("Point3DSymbolWidget", "Overwrite model material", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        cbOverwriteMaterial->setText(QString());
        labelAltClamping->setText(QApplication::translate("Point3DSymbolWidget", "Altitude clamping", Q_NULLPTR));
        cboAltClamping->clear();
        cboAltClamping->insertItems(0, QStringList()
         << QApplication::translate("Point3DSymbolWidget", "Absolute", Q_NULLPTR)
         << QApplication::translate("Point3DSymbolWidget", "Relative", Q_NULLPTR)
         << QApplication::translate("Point3DSymbolWidget", "Terrain", Q_NULLPTR)
        );
        label_5->setText(QApplication::translate("Point3DSymbolWidget", "X", Q_NULLPTR));
        label_6->setText(QApplication::translate("Point3DSymbolWidget", "Y", Q_NULLPTR));
        label_7->setText(QApplication::translate("Point3DSymbolWidget", "Z", Q_NULLPTR));
        label_2->setText(QApplication::translate("Point3DSymbolWidget", "Translation", Q_NULLPTR));
        label_3->setText(QApplication::translate("Point3DSymbolWidget", "Scale", Q_NULLPTR));
        label_4->setText(QApplication::translate("Point3DSymbolWidget", "Rotation", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Point3DSymbolWidget: public Ui_Point3DSymbolWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POINT3DSYMBOLWIDGET_H
