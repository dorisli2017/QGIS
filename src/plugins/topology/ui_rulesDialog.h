/********************************************************************************
** Form generated from reading UI file 'rulesDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RULESDIALOG_H
#define UI_RULESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_rulesDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QComboBox *mLayer1Box;
    QComboBox *mRuleBox;
    QComboBox *mLayer2Box;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *mAddTestButton;
    QPushButton *mDeleteTestButton;
    QTableWidget *mRulesTable;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *rulesDialog)
    {
        if (rulesDialog->objectName().isEmpty())
            rulesDialog->setObjectName(QStringLiteral("rulesDialog"));
        rulesDialog->resize(620, 416);
        gridLayout = new QGridLayout(rulesDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(rulesDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mLayer1Box = new QComboBox(rulesDialog);
        mLayer1Box->setObjectName(QStringLiteral("mLayer1Box"));
        mLayer1Box->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout->addWidget(mLayer1Box);

        mRuleBox = new QComboBox(rulesDialog);
        mRuleBox->setObjectName(QStringLiteral("mRuleBox"));
        mRuleBox->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout->addWidget(mRuleBox);

        mLayer2Box = new QComboBox(rulesDialog);
        mLayer2Box->setObjectName(QStringLiteral("mLayer2Box"));
        mLayer2Box->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout->addWidget(mLayer2Box);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        mAddTestButton = new QPushButton(rulesDialog);
        mAddTestButton->setObjectName(QStringLiteral("mAddTestButton"));

        horizontalLayout_5->addWidget(mAddTestButton);

        mDeleteTestButton = new QPushButton(rulesDialog);
        mDeleteTestButton->setObjectName(QStringLiteral("mDeleteTestButton"));

        horizontalLayout_5->addWidget(mDeleteTestButton);


        gridLayout->addLayout(horizontalLayout_5, 2, 0, 1, 2);

        mRulesTable = new QTableWidget(rulesDialog);
        if (mRulesTable->columnCount() < 5)
            mRulesTable->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        mRulesTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        mRulesTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        mRulesTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        mRulesTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        mRulesTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        mRulesTable->setObjectName(QStringLiteral("mRulesTable"));

        gridLayout->addWidget(mRulesTable, 3, 0, 1, 2);

        buttonBox = new QDialogButtonBox(rulesDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 4, 0, 1, 2);

        QWidget::setTabOrder(mLayer1Box, mRuleBox);
        QWidget::setTabOrder(mRuleBox, mLayer2Box);
        QWidget::setTabOrder(mLayer2Box, mAddTestButton);
        QWidget::setTabOrder(mAddTestButton, mDeleteTestButton);
        QWidget::setTabOrder(mDeleteTestButton, mRulesTable);

        retranslateUi(rulesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), rulesDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), rulesDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(rulesDialog);
    } // setupUi

    void retranslateUi(QDialog *rulesDialog)
    {
        rulesDialog->setWindowTitle(QApplication::translate("rulesDialog", "Topology Rule Settings", Q_NULLPTR));
        label->setText(QApplication::translate("rulesDialog", "Current Rules", Q_NULLPTR));
        mLayer1Box->clear();
        mLayer1Box->insertItems(0, QStringList()
         << QApplication::translate("rulesDialog", "No layer", Q_NULLPTR)
        );
        mLayer2Box->clear();
        mLayer2Box->insertItems(0, QStringList()
         << QApplication::translate("rulesDialog", "No layer", Q_NULLPTR)
        );
        mAddTestButton->setText(QApplication::translate("rulesDialog", "Add Rule", Q_NULLPTR));
        mDeleteTestButton->setText(QApplication::translate("rulesDialog", "Delete Rule", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = mRulesTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("rulesDialog", "Rule", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = mRulesTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("rulesDialog", "Layer #1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = mRulesTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("rulesDialog", "Layer #2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = mRulesTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("rulesDialog", "Layer1ID", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = mRulesTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("rulesDialog", "Layer2ID", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class rulesDialog: public Ui_rulesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RULESDIALOG_H
