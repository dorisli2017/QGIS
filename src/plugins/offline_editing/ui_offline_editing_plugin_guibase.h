/********************************************************************************
** Form generated from reading UI file 'offline_editing_plugin_guibase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OFFLINE_EDITING_PLUGIN_GUIBASE_H
#define UI_OFFLINE_EDITING_PLUGIN_GUIBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "qgslayertreeview.h"

QT_BEGIN_NAMESPACE

class Ui_QgsOfflineEditingPluginGuiBase
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *selectDatatypeComboLabel;
    QComboBox *mSelectDatatypeCombo;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *mOfflineDataPathLineEdit;
    QPushButton *mBrowseButton;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QgsLayerTreeView *mLayerTree;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *mSelectAllButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *mDeselectAllButton;
    QCheckBox *mOnlySelectedCheckBox;
    QHBoxLayout *horizontalLayout_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsOfflineEditingPluginGuiBase)
    {
        if (QgsOfflineEditingPluginGuiBase->objectName().isEmpty())
            QgsOfflineEditingPluginGuiBase->setObjectName(QStringLiteral("QgsOfflineEditingPluginGuiBase"));
        QgsOfflineEditingPluginGuiBase->resize(590, 570);
        QIcon icon;
        icon.addFile(QStringLiteral("."), QSize(), QIcon::Normal, QIcon::Off);
        QgsOfflineEditingPluginGuiBase->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(QgsOfflineEditingPluginGuiBase);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        selectDatatypeComboLabel = new QLabel(QgsOfflineEditingPluginGuiBase);
        selectDatatypeComboLabel->setObjectName(QStringLiteral("selectDatatypeComboLabel"));
        selectDatatypeComboLabel->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_4->addWidget(selectDatatypeComboLabel);

        mSelectDatatypeCombo = new QComboBox(QgsOfflineEditingPluginGuiBase);
        mSelectDatatypeCombo->setObjectName(QStringLiteral("mSelectDatatypeCombo"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mSelectDatatypeCombo->sizePolicy().hasHeightForWidth());
        mSelectDatatypeCombo->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(mSelectDatatypeCombo);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(QgsOfflineEditingPluginGuiBase);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        mOfflineDataPathLineEdit = new QLineEdit(QgsOfflineEditingPluginGuiBase);
        mOfflineDataPathLineEdit->setObjectName(QStringLiteral("mOfflineDataPathLineEdit"));
        mOfflineDataPathLineEdit->setReadOnly(true);

        horizontalLayout->addWidget(mOfflineDataPathLineEdit);

        mBrowseButton = new QPushButton(QgsOfflineEditingPluginGuiBase);
        mBrowseButton->setObjectName(QStringLiteral("mBrowseButton"));

        horizontalLayout->addWidget(mBrowseButton);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(QgsOfflineEditingPluginGuiBase);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        mLayerTree = new QgsLayerTreeView(QgsOfflineEditingPluginGuiBase);
        mLayerTree->setObjectName(QStringLiteral("mLayerTree"));
        mLayerTree->setSelectionMode(QAbstractItemView::SingleSelection);

        verticalLayout->addWidget(mLayerTree);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        mSelectAllButton = new QPushButton(QgsOfflineEditingPluginGuiBase);
        mSelectAllButton->setObjectName(QStringLiteral("mSelectAllButton"));

        horizontalLayout_3->addWidget(mSelectAllButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        mDeselectAllButton = new QPushButton(QgsOfflineEditingPluginGuiBase);
        mDeselectAllButton->setObjectName(QStringLiteral("mDeselectAllButton"));

        horizontalLayout_3->addWidget(mDeselectAllButton);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(verticalLayout);

        mOnlySelectedCheckBox = new QCheckBox(QgsOfflineEditingPluginGuiBase);
        mOnlySelectedCheckBox->setObjectName(QStringLiteral("mOnlySelectedCheckBox"));

        verticalLayout_2->addWidget(mOnlySelectedCheckBox);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        buttonBox = new QDialogButtonBox(QgsOfflineEditingPluginGuiBase);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        horizontalLayout_2->addWidget(buttonBox);


        verticalLayout_2->addLayout(horizontalLayout_2);


        retranslateUi(QgsOfflineEditingPluginGuiBase);

        QMetaObject::connectSlotsByName(QgsOfflineEditingPluginGuiBase);
    } // setupUi

    void retranslateUi(QDialog *QgsOfflineEditingPluginGuiBase)
    {
        QgsOfflineEditingPluginGuiBase->setWindowTitle(QApplication::translate("QgsOfflineEditingPluginGuiBase", "Create Offline Project", Q_NULLPTR));
        selectDatatypeComboLabel->setText(QApplication::translate("QgsOfflineEditingPluginGuiBase", "Storage type", Q_NULLPTR));
        mSelectDatatypeCombo->clear();
        mSelectDatatypeCombo->insertItems(0, QStringList()
         << QApplication::translate("QgsOfflineEditingPluginGuiBase", "GeoPackage", Q_NULLPTR)
         << QApplication::translate("QgsOfflineEditingPluginGuiBase", "SpatiaLite", Q_NULLPTR)
        );
        label_2->setText(QApplication::translate("QgsOfflineEditingPluginGuiBase", "Offline data", Q_NULLPTR));
        mBrowseButton->setText(QApplication::translate("QgsOfflineEditingPluginGuiBase", "Browse\342\200\246", Q_NULLPTR));
        label->setText(QApplication::translate("QgsOfflineEditingPluginGuiBase", "Select remote layers", Q_NULLPTR));
        mSelectAllButton->setText(QApplication::translate("QgsOfflineEditingPluginGuiBase", "Select all", Q_NULLPTR));
        mDeselectAllButton->setText(QApplication::translate("QgsOfflineEditingPluginGuiBase", "Deselect all", Q_NULLPTR));
        mOnlySelectedCheckBox->setText(QApplication::translate("QgsOfflineEditingPluginGuiBase", "Only synchronize selected features if a selection is present", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsOfflineEditingPluginGuiBase: public Ui_QgsOfflineEditingPluginGuiBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OFFLINE_EDITING_PLUGIN_GUIBASE_H
