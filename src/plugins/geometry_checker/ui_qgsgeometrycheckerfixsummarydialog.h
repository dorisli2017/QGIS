/********************************************************************************
** Form generated from reading UI file 'qgsgeometrycheckerfixsummarydialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSGEOMETRYCHECKERFIXSUMMARYDIALOG_H
#define UI_QGSGEOMETRYCHECKERFIXSUMMARYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QgsGeometryCheckerFixSummaryDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBoxFixedErrors;
    QVBoxLayout *verticalLayout_5;
    QTableWidget *tableWidgetFixedErrors;
    QGroupBox *groupBoxNotFixed;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *tableWidgetNotFixed;
    QGroupBox *groupBoxNewErrors;
    QVBoxLayout *verticalLayout_3;
    QTableWidget *tableWidgetNewErrors;
    QGroupBox *groupBoxObsoleteErrors;
    QVBoxLayout *verticalLayout_4;
    QTableWidget *tableWidgetObsoleteErrors;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBoxMessages;
    QHBoxLayout *horizontalLayout;
    QPlainTextEdit *plainTextEditMessages;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsGeometryCheckerFixSummaryDialog)
    {
        if (QgsGeometryCheckerFixSummaryDialog->objectName().isEmpty())
            QgsGeometryCheckerFixSummaryDialog->setObjectName(QStringLiteral("QgsGeometryCheckerFixSummaryDialog"));
        QgsGeometryCheckerFixSummaryDialog->resize(501, 547);
        verticalLayout = new QVBoxLayout(QgsGeometryCheckerFixSummaryDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBoxFixedErrors = new QGroupBox(QgsGeometryCheckerFixSummaryDialog);
        groupBoxFixedErrors->setObjectName(QStringLiteral("groupBoxFixedErrors"));
        verticalLayout_5 = new QVBoxLayout(groupBoxFixedErrors);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        tableWidgetFixedErrors = new QTableWidget(groupBoxFixedErrors);
        if (tableWidgetFixedErrors->columnCount() < 5)
            tableWidgetFixedErrors->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetFixedErrors->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetFixedErrors->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetFixedErrors->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetFixedErrors->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidgetFixedErrors->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidgetFixedErrors->setObjectName(QStringLiteral("tableWidgetFixedErrors"));
        tableWidgetFixedErrors->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidgetFixedErrors->horizontalHeader()->setStretchLastSection(true);
        tableWidgetFixedErrors->verticalHeader()->setVisible(false);

        verticalLayout_5->addWidget(tableWidgetFixedErrors);


        verticalLayout->addWidget(groupBoxFixedErrors);

        groupBoxNotFixed = new QGroupBox(QgsGeometryCheckerFixSummaryDialog);
        groupBoxNotFixed->setObjectName(QStringLiteral("groupBoxNotFixed"));
        verticalLayout_2 = new QVBoxLayout(groupBoxNotFixed);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        tableWidgetNotFixed = new QTableWidget(groupBoxNotFixed);
        if (tableWidgetNotFixed->columnCount() < 5)
            tableWidgetNotFixed->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidgetNotFixed->setHorizontalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidgetNotFixed->setHorizontalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidgetNotFixed->setHorizontalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidgetNotFixed->setHorizontalHeaderItem(3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidgetNotFixed->setHorizontalHeaderItem(4, __qtablewidgetitem9);
        tableWidgetNotFixed->setObjectName(QStringLiteral("tableWidgetNotFixed"));
        tableWidgetNotFixed->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidgetNotFixed->horizontalHeader()->setStretchLastSection(true);
        tableWidgetNotFixed->verticalHeader()->setVisible(false);

        verticalLayout_2->addWidget(tableWidgetNotFixed);


        verticalLayout->addWidget(groupBoxNotFixed);

        groupBoxNewErrors = new QGroupBox(QgsGeometryCheckerFixSummaryDialog);
        groupBoxNewErrors->setObjectName(QStringLiteral("groupBoxNewErrors"));
        verticalLayout_3 = new QVBoxLayout(groupBoxNewErrors);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        tableWidgetNewErrors = new QTableWidget(groupBoxNewErrors);
        if (tableWidgetNewErrors->columnCount() < 5)
            tableWidgetNewErrors->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidgetNewErrors->setHorizontalHeaderItem(0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidgetNewErrors->setHorizontalHeaderItem(1, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidgetNewErrors->setHorizontalHeaderItem(2, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidgetNewErrors->setHorizontalHeaderItem(3, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidgetNewErrors->setHorizontalHeaderItem(4, __qtablewidgetitem14);
        tableWidgetNewErrors->setObjectName(QStringLiteral("tableWidgetNewErrors"));
        tableWidgetNewErrors->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidgetNewErrors->horizontalHeader()->setStretchLastSection(true);
        tableWidgetNewErrors->verticalHeader()->setVisible(false);

        verticalLayout_3->addWidget(tableWidgetNewErrors);


        verticalLayout->addWidget(groupBoxNewErrors);

        groupBoxObsoleteErrors = new QGroupBox(QgsGeometryCheckerFixSummaryDialog);
        groupBoxObsoleteErrors->setObjectName(QStringLiteral("groupBoxObsoleteErrors"));
        verticalLayout_4 = new QVBoxLayout(groupBoxObsoleteErrors);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        tableWidgetObsoleteErrors = new QTableWidget(groupBoxObsoleteErrors);
        if (tableWidgetObsoleteErrors->columnCount() < 5)
            tableWidgetObsoleteErrors->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidgetObsoleteErrors->setHorizontalHeaderItem(0, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidgetObsoleteErrors->setHorizontalHeaderItem(1, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidgetObsoleteErrors->setHorizontalHeaderItem(2, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidgetObsoleteErrors->setHorizontalHeaderItem(3, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidgetObsoleteErrors->setHorizontalHeaderItem(4, __qtablewidgetitem19);
        tableWidgetObsoleteErrors->setObjectName(QStringLiteral("tableWidgetObsoleteErrors"));
        tableWidgetObsoleteErrors->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidgetObsoleteErrors->horizontalHeader()->setStretchLastSection(true);
        tableWidgetObsoleteErrors->verticalHeader()->setVisible(false);

        verticalLayout_4->addWidget(tableWidgetObsoleteErrors);


        verticalLayout->addWidget(groupBoxObsoleteErrors);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        groupBoxMessages = new QGroupBox(QgsGeometryCheckerFixSummaryDialog);
        groupBoxMessages->setObjectName(QStringLiteral("groupBoxMessages"));
        horizontalLayout = new QHBoxLayout(groupBoxMessages);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        plainTextEditMessages = new QPlainTextEdit(groupBoxMessages);
        plainTextEditMessages->setObjectName(QStringLiteral("plainTextEditMessages"));

        horizontalLayout->addWidget(plainTextEditMessages);


        verticalLayout->addWidget(groupBoxMessages);

        buttonBox = new QDialogButtonBox(QgsGeometryCheckerFixSummaryDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(QgsGeometryCheckerFixSummaryDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsGeometryCheckerFixSummaryDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsGeometryCheckerFixSummaryDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsGeometryCheckerFixSummaryDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsGeometryCheckerFixSummaryDialog)
    {
        QgsGeometryCheckerFixSummaryDialog->setWindowTitle(QApplication::translate("QgsGeometryCheckerFixSummaryDialog", "Summary", Q_NULLPTR));
        groupBoxFixedErrors->setTitle(QString());
        QTableWidgetItem *___qtablewidgetitem = tableWidgetFixedErrors->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("QgsGeometryCheckerFixSummaryDialog", "Layer", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetFixedErrors->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("QgsGeometryCheckerFixSummaryDialog", "Object ID", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetFixedErrors->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("QgsGeometryCheckerFixSummaryDialog", "Error", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetFixedErrors->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("QgsGeometryCheckerFixSummaryDialog", "Coordinates", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidgetFixedErrors->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("QgsGeometryCheckerFixSummaryDialog", "Value", Q_NULLPTR));
        groupBoxNotFixed->setTitle(QString());
        QTableWidgetItem *___qtablewidgetitem5 = tableWidgetNotFixed->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("QgsGeometryCheckerFixSummaryDialog", "Layer", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidgetNotFixed->horizontalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("QgsGeometryCheckerFixSummaryDialog", "Object ID", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidgetNotFixed->horizontalHeaderItem(2);
        ___qtablewidgetitem7->setText(QApplication::translate("QgsGeometryCheckerFixSummaryDialog", "Error", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidgetNotFixed->horizontalHeaderItem(3);
        ___qtablewidgetitem8->setText(QApplication::translate("QgsGeometryCheckerFixSummaryDialog", "Coordinates", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidgetNotFixed->horizontalHeaderItem(4);
        ___qtablewidgetitem9->setText(QApplication::translate("QgsGeometryCheckerFixSummaryDialog", "Value", Q_NULLPTR));
        groupBoxNewErrors->setTitle(QString());
        QTableWidgetItem *___qtablewidgetitem10 = tableWidgetNewErrors->horizontalHeaderItem(0);
        ___qtablewidgetitem10->setText(QApplication::translate("QgsGeometryCheckerFixSummaryDialog", "Layer", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidgetNewErrors->horizontalHeaderItem(1);
        ___qtablewidgetitem11->setText(QApplication::translate("QgsGeometryCheckerFixSummaryDialog", "Object ID", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidgetNewErrors->horizontalHeaderItem(2);
        ___qtablewidgetitem12->setText(QApplication::translate("QgsGeometryCheckerFixSummaryDialog", "Error", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidgetNewErrors->horizontalHeaderItem(3);
        ___qtablewidgetitem13->setText(QApplication::translate("QgsGeometryCheckerFixSummaryDialog", "Coordinates", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidgetNewErrors->horizontalHeaderItem(4);
        ___qtablewidgetitem14->setText(QApplication::translate("QgsGeometryCheckerFixSummaryDialog", "Value", Q_NULLPTR));
        groupBoxObsoleteErrors->setTitle(QString());
        QTableWidgetItem *___qtablewidgetitem15 = tableWidgetObsoleteErrors->horizontalHeaderItem(0);
        ___qtablewidgetitem15->setText(QApplication::translate("QgsGeometryCheckerFixSummaryDialog", "Layer", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidgetObsoleteErrors->horizontalHeaderItem(1);
        ___qtablewidgetitem16->setText(QApplication::translate("QgsGeometryCheckerFixSummaryDialog", "Object ID", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidgetObsoleteErrors->horizontalHeaderItem(2);
        ___qtablewidgetitem17->setText(QApplication::translate("QgsGeometryCheckerFixSummaryDialog", "Error", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidgetObsoleteErrors->horizontalHeaderItem(3);
        ___qtablewidgetitem18->setText(QApplication::translate("QgsGeometryCheckerFixSummaryDialog", "Coordinates", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidgetObsoleteErrors->horizontalHeaderItem(4);
        ___qtablewidgetitem19->setText(QApplication::translate("QgsGeometryCheckerFixSummaryDialog", "Value", Q_NULLPTR));
        groupBoxMessages->setTitle(QApplication::translate("QgsGeometryCheckerFixSummaryDialog", "The following checks reported errors:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsGeometryCheckerFixSummaryDialog: public Ui_QgsGeometryCheckerFixSummaryDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSGEOMETRYCHECKERFIXSUMMARYDIALOG_H
