/********************************************************************************
** Form generated from reading UI file 'qgsvaluerelationconfigdlgbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSVALUERELATIONCONFIGDLGBASE_H
#define UI_QGSVALUERELATIONCONFIGDLGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "qgsfieldcombobox.h"
#include "qgsmaplayercombobox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsValueRelationConfigDlgBase
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_19;
    QToolButton *mEditExpression;
    QSpacerItem *horizontalSpacer;
    QLabel *label_5;
    QLabel *label_8;
    QCheckBox *mAllowNull;
    QgsFieldComboBox *mKeyColumn;
    QgsFieldComboBox *mValueColumn;
    QCheckBox *mUseCompleter;
    QLabel *label_6;
    QLabel *label_7;
    QCheckBox *mOrderByValue;
    QgsMapLayerComboBox *mLayerName;
    QLabel *label_nofColumns;
    QTextEdit *mFilterExpression;
    QCheckBox *mAllowMulti;
    QSpinBox *mNofColumns;

    void setupUi(QWidget *QgsValueRelationConfigDlgBase)
    {
        if (QgsValueRelationConfigDlgBase->objectName().isEmpty())
            QgsValueRelationConfigDlgBase->setObjectName(QStringLiteral("QgsValueRelationConfigDlgBase"));
        QgsValueRelationConfigDlgBase->resize(427, 474);
        gridLayout = new QGridLayout(QgsValueRelationConfigDlgBase);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_19 = new QLabel(QgsValueRelationConfigDlgBase);
        label_19->setObjectName(QStringLiteral("label_19"));

        horizontalLayout->addWidget(label_19);

        mEditExpression = new QToolButton(QgsValueRelationConfigDlgBase);
        mEditExpression->setObjectName(QStringLiteral("mEditExpression"));
        mEditExpression->setLayoutDirection(Qt::RightToLeft);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/mIconExpression.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mEditExpression->setIcon(icon);

        horizontalLayout->addWidget(mEditExpression);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 12, 0, 1, 2);

        label_5 = new QLabel(QgsValueRelationConfigDlgBase);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        label_8 = new QLabel(QgsValueRelationConfigDlgBase);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 0, 0, 1, 2);

        mAllowNull = new QCheckBox(QgsValueRelationConfigDlgBase);
        mAllowNull->setObjectName(QStringLiteral("mAllowNull"));

        gridLayout->addWidget(mAllowNull, 4, 0, 1, 2);

        mKeyColumn = new QgsFieldComboBox(QgsValueRelationConfigDlgBase);
        mKeyColumn->setObjectName(QStringLiteral("mKeyColumn"));

        gridLayout->addWidget(mKeyColumn, 2, 1, 1, 1);

        mValueColumn = new QgsFieldComboBox(QgsValueRelationConfigDlgBase);
        mValueColumn->setObjectName(QStringLiteral("mValueColumn"));

        gridLayout->addWidget(mValueColumn, 3, 1, 1, 1);

        mUseCompleter = new QCheckBox(QgsValueRelationConfigDlgBase);
        mUseCompleter->setObjectName(QStringLiteral("mUseCompleter"));

        gridLayout->addWidget(mUseCompleter, 10, 0, 1, 2);

        label_6 = new QLabel(QgsValueRelationConfigDlgBase);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 2, 0, 1, 1);

        label_7 = new QLabel(QgsValueRelationConfigDlgBase);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 3, 0, 1, 1);

        mOrderByValue = new QCheckBox(QgsValueRelationConfigDlgBase);
        mOrderByValue->setObjectName(QStringLiteral("mOrderByValue"));

        gridLayout->addWidget(mOrderByValue, 6, 0, 1, 2);

        mLayerName = new QgsMapLayerComboBox(QgsValueRelationConfigDlgBase);
        mLayerName->setObjectName(QStringLiteral("mLayerName"));

        gridLayout->addWidget(mLayerName, 1, 1, 1, 1);

        label_nofColumns = new QLabel(QgsValueRelationConfigDlgBase);
        label_nofColumns->setObjectName(QStringLiteral("label_nofColumns"));

        gridLayout->addWidget(label_nofColumns, 8, 0, 1, 1);

        mFilterExpression = new QTextEdit(QgsValueRelationConfigDlgBase);
        mFilterExpression->setObjectName(QStringLiteral("mFilterExpression"));

        gridLayout->addWidget(mFilterExpression, 13, 0, 1, 2);

        mAllowMulti = new QCheckBox(QgsValueRelationConfigDlgBase);
        mAllowMulti->setObjectName(QStringLiteral("mAllowMulti"));

        gridLayout->addWidget(mAllowMulti, 7, 0, 1, 2);

        mNofColumns = new QSpinBox(QgsValueRelationConfigDlgBase);
        mNofColumns->setObjectName(QStringLiteral("mNofColumns"));

        gridLayout->addWidget(mNofColumns, 8, 1, 1, 1);

#ifndef QT_NO_SHORTCUT
        label_19->setBuddy(mValueColumn);
        label_5->setBuddy(mLayerName);
        label_6->setBuddy(mKeyColumn);
        label_7->setBuddy(mValueColumn);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(mLayerName, mKeyColumn);
        QWidget::setTabOrder(mKeyColumn, mValueColumn);
        QWidget::setTabOrder(mValueColumn, mAllowNull);
        QWidget::setTabOrder(mAllowNull, mOrderByValue);
        QWidget::setTabOrder(mOrderByValue, mAllowMulti);
        QWidget::setTabOrder(mAllowMulti, mUseCompleter);
        QWidget::setTabOrder(mUseCompleter, mEditExpression);
        QWidget::setTabOrder(mEditExpression, mFilterExpression);

        retranslateUi(QgsValueRelationConfigDlgBase);

        QMetaObject::connectSlotsByName(QgsValueRelationConfigDlgBase);
    } // setupUi

    void retranslateUi(QWidget *QgsValueRelationConfigDlgBase)
    {
        QgsValueRelationConfigDlgBase->setWindowTitle(QApplication::translate("QgsValueRelationConfigDlgBase", "Form", Q_NULLPTR));
        label_19->setText(QApplication::translate("QgsValueRelationConfigDlgBase", "Filter expression", Q_NULLPTR));
        label_5->setText(QApplication::translate("QgsValueRelationConfigDlgBase", "Layer", Q_NULLPTR));
        label_8->setText(QApplication::translate("QgsValueRelationConfigDlgBase", "Select layer, key column and value column", Q_NULLPTR));
        mAllowNull->setText(QApplication::translate("QgsValueRelationConfigDlgBase", "Allow NULL value", Q_NULLPTR));
        mUseCompleter->setText(QApplication::translate("QgsValueRelationConfigDlgBase", "Use completer", Q_NULLPTR));
        label_6->setText(QApplication::translate("QgsValueRelationConfigDlgBase", "Key column", Q_NULLPTR));
        label_7->setText(QApplication::translate("QgsValueRelationConfigDlgBase", "Value column", Q_NULLPTR));
        mOrderByValue->setText(QApplication::translate("QgsValueRelationConfigDlgBase", "Order by value", Q_NULLPTR));
        label_nofColumns->setText(QApplication::translate("QgsValueRelationConfigDlgBase", "Number of columns", Q_NULLPTR));
        mAllowMulti->setText(QApplication::translate("QgsValueRelationConfigDlgBase", "Allow multiple selections", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsValueRelationConfigDlgBase: public Ui_QgsValueRelationConfigDlgBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSVALUERELATIONCONFIGDLGBASE_H
