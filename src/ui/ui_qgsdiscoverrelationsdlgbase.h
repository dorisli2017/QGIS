/********************************************************************************
** Form generated from reading UI file 'qgsdiscoverrelationsdlgbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSDISCOVERRELATIONSDLGBASE_H
#define UI_QGSDISCOVERRELATIONSDLGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QgsDiscoverRelationsDlgBase
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *mRelationsTable;
    QDialogButtonBox *mButtonBox;

    void setupUi(QDialog *QgsDiscoverRelationsDlgBase)
    {
        if (QgsDiscoverRelationsDlgBase->objectName().isEmpty())
            QgsDiscoverRelationsDlgBase->setObjectName(QStringLiteral("QgsDiscoverRelationsDlgBase"));
        QgsDiscoverRelationsDlgBase->resize(700, 267);
        verticalLayout = new QVBoxLayout(QgsDiscoverRelationsDlgBase);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        mRelationsTable = new QTableWidget(QgsDiscoverRelationsDlgBase);
        if (mRelationsTable->columnCount() < 6)
            mRelationsTable->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        mRelationsTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        mRelationsTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        mRelationsTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        mRelationsTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        mRelationsTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        mRelationsTable->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        mRelationsTable->setObjectName(QStringLiteral("mRelationsTable"));
        mRelationsTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        mRelationsTable->setSelectionMode(QAbstractItemView::MultiSelection);
        mRelationsTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        mRelationsTable->setSortingEnabled(true);
        mRelationsTable->horizontalHeader()->setStretchLastSection(true);
        mRelationsTable->verticalHeader()->setVisible(false);
        mRelationsTable->verticalHeader()->setProperty("showSortIndicator", QVariant(true));

        verticalLayout->addWidget(mRelationsTable);

        mButtonBox = new QDialogButtonBox(QgsDiscoverRelationsDlgBase);
        mButtonBox->setObjectName(QStringLiteral("mButtonBox"));
        mButtonBox->setOrientation(Qt::Horizontal);
        mButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(mButtonBox);


        retranslateUi(QgsDiscoverRelationsDlgBase);
        QObject::connect(mButtonBox, SIGNAL(accepted()), QgsDiscoverRelationsDlgBase, SLOT(accept()));
        QObject::connect(mButtonBox, SIGNAL(rejected()), QgsDiscoverRelationsDlgBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsDiscoverRelationsDlgBase);
    } // setupUi

    void retranslateUi(QDialog *QgsDiscoverRelationsDlgBase)
    {
        QgsDiscoverRelationsDlgBase->setWindowTitle(QApplication::translate("QgsDiscoverRelationsDlgBase", "Discover Relations", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = mRelationsTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("QgsDiscoverRelationsDlgBase", "Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = mRelationsTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("QgsDiscoverRelationsDlgBase", "Referencing Layer", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = mRelationsTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("QgsDiscoverRelationsDlgBase", "Referencing Field", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = mRelationsTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("QgsDiscoverRelationsDlgBase", "Referenced Layer", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = mRelationsTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("QgsDiscoverRelationsDlgBase", "Referenced Field", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = mRelationsTable->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("QgsDiscoverRelationsDlgBase", "Strength", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsDiscoverRelationsDlgBase: public Ui_QgsDiscoverRelationsDlgBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSDISCOVERRELATIONSDLGBASE_H
