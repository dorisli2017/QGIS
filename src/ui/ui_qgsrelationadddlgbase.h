/********************************************************************************
** Form generated from reading UI file 'qgsrelationadddlgbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSRELATIONADDDLGBASE_H
#define UI_QGSRELATIONADDDLGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <qgsfieldcombobox.h>
#include <qgsmaplayercombobox.h>

QT_BEGIN_NAMESPACE

class Ui_QgsRelationAddDlgBase
{
public:
    QGridLayout *gridLayout;
    QgsMapLayerComboBox *mCbxReferencedLayer;
    QLabel *label_4;
    QgsFieldComboBox *mCbxReferencingField;
    QgsFieldComboBox *mCbxReferencedField;
    QLabel *label;
    QgsMapLayerComboBox *mCbxReferencingLayer;
    QLabel *label_7;
    QLineEdit *mTxtRelationName;
    QLabel *label_3;
    QLineEdit *mTxtRelationId;
    QDialogButtonBox *mButtonBox;
    QLabel *label_2;
    QLabel *label_6;
    QLabel *label_5;
    QComboBox *mCbxRelationStrength;

    void setupUi(QDialog *QgsRelationAddDlgBase)
    {
        if (QgsRelationAddDlgBase->objectName().isEmpty())
            QgsRelationAddDlgBase->setObjectName(QStringLiteral("QgsRelationAddDlgBase"));
        QgsRelationAddDlgBase->resize(581, 342);
        gridLayout = new QGridLayout(QgsRelationAddDlgBase);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mCbxReferencedLayer = new QgsMapLayerComboBox(QgsRelationAddDlgBase);
        mCbxReferencedLayer->setObjectName(QStringLiteral("mCbxReferencedLayer"));

        gridLayout->addWidget(mCbxReferencedLayer, 1, 2, 1, 1);

        label_4 = new QLabel(QgsRelationAddDlgBase);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 2);

        mCbxReferencingField = new QgsFieldComboBox(QgsRelationAddDlgBase);
        mCbxReferencingField->setObjectName(QStringLiteral("mCbxReferencingField"));

        gridLayout->addWidget(mCbxReferencingField, 4, 2, 1, 1);

        mCbxReferencedField = new QgsFieldComboBox(QgsRelationAddDlgBase);
        mCbxReferencedField->setObjectName(QStringLiteral("mCbxReferencedField"));

        gridLayout->addWidget(mCbxReferencedField, 2, 2, 1, 1);

        label = new QLabel(QgsRelationAddDlgBase);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 3, 0, 1, 2);

        mCbxReferencingLayer = new QgsMapLayerComboBox(QgsRelationAddDlgBase);
        mCbxReferencingLayer->setObjectName(QStringLiteral("mCbxReferencingLayer"));

        gridLayout->addWidget(mCbxReferencingLayer, 3, 2, 1, 1);

        label_7 = new QLabel(QgsRelationAddDlgBase);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 0, 0, 1, 1);

        mTxtRelationName = new QLineEdit(QgsRelationAddDlgBase);
        mTxtRelationName->setObjectName(QStringLiteral("mTxtRelationName"));

        gridLayout->addWidget(mTxtRelationName, 0, 2, 1, 1);

        label_3 = new QLabel(QgsRelationAddDlgBase);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 2);

        mTxtRelationId = new QLineEdit(QgsRelationAddDlgBase);
        mTxtRelationId->setObjectName(QStringLiteral("mTxtRelationId"));

        gridLayout->addWidget(mTxtRelationId, 5, 2, 2, 1);

        mButtonBox = new QDialogButtonBox(QgsRelationAddDlgBase);
        mButtonBox->setObjectName(QStringLiteral("mButtonBox"));
        mButtonBox->setOrientation(Qt::Horizontal);
        mButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(mButtonBox, 8, 2, 1, 1);

        label_2 = new QLabel(QgsRelationAddDlgBase);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 4, 0, 1, 2);

        label_6 = new QLabel(QgsRelationAddDlgBase);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 7, 0, 1, 2);

        label_5 = new QLabel(QgsRelationAddDlgBase);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 5, 0, 2, 2);

        mCbxRelationStrength = new QComboBox(QgsRelationAddDlgBase);
        mCbxRelationStrength->setObjectName(QStringLiteral("mCbxRelationStrength"));

        gridLayout->addWidget(mCbxRelationStrength, 7, 2, 1, 1);

        QWidget::setTabOrder(mTxtRelationName, mCbxReferencedLayer);
        QWidget::setTabOrder(mCbxReferencedLayer, mCbxReferencedField);
        QWidget::setTabOrder(mCbxReferencedField, mCbxReferencingLayer);
        QWidget::setTabOrder(mCbxReferencingLayer, mCbxReferencingField);
        QWidget::setTabOrder(mCbxReferencingField, mTxtRelationId);

        retranslateUi(QgsRelationAddDlgBase);
        QObject::connect(mButtonBox, SIGNAL(accepted()), QgsRelationAddDlgBase, SLOT(accept()));
        QObject::connect(mButtonBox, SIGNAL(rejected()), QgsRelationAddDlgBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsRelationAddDlgBase);
    } // setupUi

    void retranslateUi(QDialog *QgsRelationAddDlgBase)
    {
        QgsRelationAddDlgBase->setWindowTitle(QApplication::translate("QgsRelationAddDlgBase", "Add Relation", Q_NULLPTR));
        label_4->setText(QApplication::translate("QgsRelationAddDlgBase", "Referenced field", Q_NULLPTR));
        label->setText(QApplication::translate("QgsRelationAddDlgBase", "Referencing layer (Child)", Q_NULLPTR));
        label_7->setText(QApplication::translate("QgsRelationAddDlgBase", "Name", Q_NULLPTR));
        label_3->setText(QApplication::translate("QgsRelationAddDlgBase", "Referenced layer (Parent)", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsRelationAddDlgBase", "Referencing field", Q_NULLPTR));
        label_6->setText(QApplication::translate("QgsRelationAddDlgBase", "Relationship strength", Q_NULLPTR));
        label_5->setText(QApplication::translate("QgsRelationAddDlgBase", "Id", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsRelationAddDlgBase: public Ui_QgsRelationAddDlgBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSRELATIONADDDLGBASE_H
