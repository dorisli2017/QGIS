/********************************************************************************
** Form generated from reading UI file 'qgsattributerelationedit.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSATTRIBUTERELATIONEDIT_H
#define UI_QGSATTRIBUTERELATIONEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsAttributeRelationEdit
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *coCardinality;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QgsAttributeRelationEdit)
    {
        if (QgsAttributeRelationEdit->objectName().isEmpty())
            QgsAttributeRelationEdit->setObjectName(QStringLiteral("QgsAttributeRelationEdit"));
        QgsAttributeRelationEdit->resize(400, 300);
        gridLayout = new QGridLayout(QgsAttributeRelationEdit);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox = new QGroupBox(QgsAttributeRelationEdit);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        coCardinality = new QComboBox(groupBox);
        coCardinality->setObjectName(QStringLiteral("coCardinality"));

        horizontalLayout->addWidget(coCardinality);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);


        retranslateUi(QgsAttributeRelationEdit);

        QMetaObject::connectSlotsByName(QgsAttributeRelationEdit);
    } // setupUi

    void retranslateUi(QWidget *QgsAttributeRelationEdit)
    {
        QgsAttributeRelationEdit->setWindowTitle(QApplication::translate("QgsAttributeRelationEdit", "Form", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("QgsAttributeRelationEdit", "Relation", Q_NULLPTR));
        label->setText(QApplication::translate("QgsAttributeRelationEdit", "Cardinality", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsAttributeRelationEdit: public Ui_QgsAttributeRelationEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSATTRIBUTERELATIONEDIT_H
