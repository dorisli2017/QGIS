/********************************************************************************
** Form generated from reading UI file 'qgsvectorlayerloadstyledialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSVECTORLAYERLOADSTYLEDIALOG_H
#define UI_QGSVECTORLAYERLOADSTYLEDIALOG_H

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
#include <QtWidgets/QListView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>
#include "qgsfilewidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsVectorLayerLoadStyleDialog
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QComboBox *mStyleTypeComboBox;
    QWidget *mFromFileWidget;
    QGridLayout *gridLayout_3;
    QLabel *label_3;
    QgsFileWidget *mFileWidget;
    QLabel *mModeLabel;
    QLabel *label_4;
    QListView *mStyleCategoriesListView;
    QWidget *mFromDbWidget;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QTableWidget *mRelatedTable;
    QLabel *label_2;
    QTableWidget *mOthersTable;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *mButtonBox;

    void setupUi(QDialog *QgsVectorLayerLoadStyleDialog)
    {
        if (QgsVectorLayerLoadStyleDialog->objectName().isEmpty())
            QgsVectorLayerLoadStyleDialog->setObjectName(QStringLiteral("QgsVectorLayerLoadStyleDialog"));
        QgsVectorLayerLoadStyleDialog->resize(475, 546);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsVectorLayerLoadStyleDialog->sizePolicy().hasHeightForWidth());
        QgsVectorLayerLoadStyleDialog->setSizePolicy(sizePolicy);
        QgsVectorLayerLoadStyleDialog->setModal(true);
        gridLayout = new QGridLayout(QgsVectorLayerLoadStyleDialog);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 0, 1, 1);

        mStyleTypeComboBox = new QComboBox(QgsVectorLayerLoadStyleDialog);
        mStyleTypeComboBox->setObjectName(QStringLiteral("mStyleTypeComboBox"));

        gridLayout->addWidget(mStyleTypeComboBox, 0, 1, 1, 1);

        mFromFileWidget = new QWidget(QgsVectorLayerLoadStyleDialog);
        mFromFileWidget->setObjectName(QStringLiteral("mFromFileWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mFromFileWidget->sizePolicy().hasHeightForWidth());
        mFromFileWidget->setSizePolicy(sizePolicy1);
        gridLayout_3 = new QGridLayout(mFromFileWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(mFromFileWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_3->addWidget(label_3, 0, 0, 1, 1);

        mFileWidget = new QgsFileWidget(mFromFileWidget);
        mFileWidget->setObjectName(QStringLiteral("mFileWidget"));

        gridLayout_3->addWidget(mFileWidget, 0, 1, 1, 1);


        gridLayout->addWidget(mFromFileWidget, 2, 0, 1, 2);

        mModeLabel = new QLabel(QgsVectorLayerLoadStyleDialog);
        mModeLabel->setObjectName(QStringLiteral("mModeLabel"));

        gridLayout->addWidget(mModeLabel, 0, 0, 1, 1);

        label_4 = new QLabel(QgsVectorLayerLoadStyleDialog);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        mStyleCategoriesListView = new QListView(QgsVectorLayerLoadStyleDialog);
        mStyleCategoriesListView->setObjectName(QStringLiteral("mStyleCategoriesListView"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mStyleCategoriesListView->sizePolicy().hasHeightForWidth());
        mStyleCategoriesListView->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(mStyleCategoriesListView, 1, 1, 1, 1);

        mFromDbWidget = new QWidget(QgsVectorLayerLoadStyleDialog);
        mFromDbWidget->setObjectName(QStringLiteral("mFromDbWidget"));
        gridLayout_2 = new QGridLayout(mFromDbWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(mFromDbWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        mRelatedTable = new QTableWidget(mFromDbWidget);
        mRelatedTable->setObjectName(QStringLiteral("mRelatedTable"));
        mRelatedTable->setSortingEnabled(true);

        gridLayout_2->addWidget(mRelatedTable, 1, 0, 1, 1);

        label_2 = new QLabel(mFromDbWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 2, 0, 1, 1);

        mOthersTable = new QTableWidget(mFromDbWidget);
        mOthersTable->setObjectName(QStringLiteral("mOthersTable"));
        mOthersTable->setSortingEnabled(true);

        gridLayout_2->addWidget(mOthersTable, 3, 0, 1, 1);


        gridLayout->addWidget(mFromDbWidget, 3, 0, 1, 2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 5, 0, 1, 1);

        mButtonBox = new QDialogButtonBox(QgsVectorLayerLoadStyleDialog);
        mButtonBox->setObjectName(QStringLiteral("mButtonBox"));
        mButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Close|QDialogButtonBox::Help|QDialogButtonBox::Open);

        gridLayout->addWidget(mButtonBox, 5, 1, 1, 1);


        retranslateUi(QgsVectorLayerLoadStyleDialog);

        QMetaObject::connectSlotsByName(QgsVectorLayerLoadStyleDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsVectorLayerLoadStyleDialog)
    {
        QgsVectorLayerLoadStyleDialog->setWindowTitle(QApplication::translate("QgsVectorLayerLoadStyleDialog", "Load Layer Style", Q_NULLPTR));
        label_3->setText(QApplication::translate("QgsVectorLayerLoadStyleDialog", "File", Q_NULLPTR));
        mModeLabel->setText(QApplication::translate("QgsVectorLayerLoadStyleDialog", "Load style", Q_NULLPTR));
        label_4->setText(QApplication::translate("QgsVectorLayerLoadStyleDialog", "Categories", Q_NULLPTR));
        label->setText(QApplication::translate("QgsVectorLayerLoadStyleDialog", "Styles related to the layer", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsVectorLayerLoadStyleDialog", "Other styles on the database", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsVectorLayerLoadStyleDialog: public Ui_QgsVectorLayerLoadStyleDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSVECTORLAYERLOADSTYLEDIALOG_H
