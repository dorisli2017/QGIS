/********************************************************************************
** Form generated from reading UI file 'qgsauthesritokenedit.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSAUTHESRITOKENEDIT_H
#define UI_QGSAUTHESRITOKENEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsAuthEsriTokenEdit
{
public:
    QGridLayout *gridLayout;
    QLabel *lblToken;
    QSpacerItem *verticalSpacer_2;
    QPlainTextEdit *mTokenEdit;

    void setupUi(QWidget *QgsAuthEsriTokenEdit)
    {
        if (QgsAuthEsriTokenEdit->objectName().isEmpty())
            QgsAuthEsriTokenEdit->setObjectName(QStringLiteral("QgsAuthEsriTokenEdit"));
        QgsAuthEsriTokenEdit->resize(400, 300);
        gridLayout = new QGridLayout(QgsAuthEsriTokenEdit);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(6, 6, 6, 6);
        lblToken = new QLabel(QgsAuthEsriTokenEdit);
        lblToken->setObjectName(QStringLiteral("lblToken"));

        gridLayout->addWidget(lblToken, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 173, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 0, 1, 1);

        mTokenEdit = new QPlainTextEdit(QgsAuthEsriTokenEdit);
        mTokenEdit->setObjectName(QStringLiteral("mTokenEdit"));

        gridLayout->addWidget(mTokenEdit, 1, 1, 2, 1);


        retranslateUi(QgsAuthEsriTokenEdit);

        QMetaObject::connectSlotsByName(QgsAuthEsriTokenEdit);
    } // setupUi

    void retranslateUi(QWidget *QgsAuthEsriTokenEdit)
    {
        lblToken->setText(QApplication::translate("QgsAuthEsriTokenEdit", "Token", Q_NULLPTR));
        mTokenEdit->setPlaceholderText(QApplication::translate("QgsAuthEsriTokenEdit", "Required", Q_NULLPTR));
        Q_UNUSED(QgsAuthEsriTokenEdit);
    } // retranslateUi

};

namespace Ui {
    class QgsAuthEsriTokenEdit: public Ui_QgsAuthEsriTokenEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSAUTHESRITOKENEDIT_H
