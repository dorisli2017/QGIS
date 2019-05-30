/********************************************************************************
** Form generated from reading UI file 'qgsembeddedlayerselect.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSEMBEDDEDLAYERSELECT_H
#define UI_QGSEMBEDDEDLAYERSELECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QgsEmbeddedLayerSelectDialog
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *mLayers;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsEmbeddedLayerSelectDialog)
    {
        if (QgsEmbeddedLayerSelectDialog->objectName().isEmpty())
            QgsEmbeddedLayerSelectDialog->setObjectName(QStringLiteral("QgsEmbeddedLayerSelectDialog"));
        QgsEmbeddedLayerSelectDialog->resize(422, 366);
        verticalLayout = new QVBoxLayout(QgsEmbeddedLayerSelectDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        mLayers = new QListWidget(QgsEmbeddedLayerSelectDialog);
        mLayers->setObjectName(QStringLiteral("mLayers"));
        mLayers->setSelectionMode(QAbstractItemView::ExtendedSelection);
        mLayers->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout->addWidget(mLayers);

        buttonBox = new QDialogButtonBox(QgsEmbeddedLayerSelectDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(QgsEmbeddedLayerSelectDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsEmbeddedLayerSelectDialog, SLOT(reject()));
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsEmbeddedLayerSelectDialog, SLOT(accept()));
        QObject::connect(mLayers, SIGNAL(itemDoubleClicked(QListWidgetItem*)), QgsEmbeddedLayerSelectDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(QgsEmbeddedLayerSelectDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsEmbeddedLayerSelectDialog)
    {
        QgsEmbeddedLayerSelectDialog->setWindowTitle(QApplication::translate("QgsEmbeddedLayerSelectDialog", "Select Layers to Embed", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsEmbeddedLayerSelectDialog: public Ui_QgsEmbeddedLayerSelectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSEMBEDDEDLAYERSELECT_H
