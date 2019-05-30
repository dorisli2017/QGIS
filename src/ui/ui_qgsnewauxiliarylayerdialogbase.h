/********************************************************************************
** Form generated from reading UI file 'qgsnewauxiliarylayerdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSNEWAUXILIARYLAYERDIALOGBASE_H
#define UI_QGSNEWAUXILIARYLAYERDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsNewAuxiliaryLayerDialogBase
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QComboBox *comboBox;

    void setupUi(QDialog *QgsNewAuxiliaryLayerDialogBase)
    {
        if (QgsNewAuxiliaryLayerDialogBase->objectName().isEmpty())
            QgsNewAuxiliaryLayerDialogBase->setObjectName(QStringLiteral("QgsNewAuxiliaryLayerDialogBase"));
        QgsNewAuxiliaryLayerDialogBase->resize(400, 139);
        buttonBox = new QDialogButtonBox(QgsNewAuxiliaryLayerDialogBase);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(50, 100, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        verticalLayoutWidget = new QWidget(QgsNewAuxiliaryLayerDialogBase);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 381, 81));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        comboBox = new QComboBox(verticalLayoutWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        verticalLayout->addWidget(comboBox);


        retranslateUi(QgsNewAuxiliaryLayerDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsNewAuxiliaryLayerDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsNewAuxiliaryLayerDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsNewAuxiliaryLayerDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsNewAuxiliaryLayerDialogBase)
    {
        QgsNewAuxiliaryLayerDialogBase->setWindowTitle(QApplication::translate("QgsNewAuxiliaryLayerDialogBase", "Auxiliary Storage : Choose Primary Key", Q_NULLPTR));
        label->setText(QApplication::translate("QgsNewAuxiliaryLayerDialogBase", "Select the primary key to use for joining with internal data storage", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsNewAuxiliaryLayerDialogBase: public Ui_QgsNewAuxiliaryLayerDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSNEWAUXILIARYLAYERDIALOGBASE_H
