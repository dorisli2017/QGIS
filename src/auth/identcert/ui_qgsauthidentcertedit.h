/********************************************************************************
** Form generated from reading UI file 'qgsauthidentcertedit.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSAUTHIDENTCERTEDIT_H
#define UI_QGSAUTHIDENTCERTEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsAuthIdentCertEdit
{
public:
    QGridLayout *gridLayout;
    QLabel *lblIdentityCert;
    QComboBox *cmbIdentityCert;
    QSpacerItem *verticalSpacer_5;

    void setupUi(QWidget *QgsAuthIdentCertEdit)
    {
        if (QgsAuthIdentCertEdit->objectName().isEmpty())
            QgsAuthIdentCertEdit->setObjectName(QStringLiteral("QgsAuthIdentCertEdit"));
        QgsAuthIdentCertEdit->resize(400, 300);
        gridLayout = new QGridLayout(QgsAuthIdentCertEdit);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(6, 6, 6, 6);
        lblIdentityCert = new QLabel(QgsAuthIdentCertEdit);
        lblIdentityCert->setObjectName(QStringLiteral("lblIdentityCert"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblIdentityCert->sizePolicy().hasHeightForWidth());
        lblIdentityCert->setSizePolicy(sizePolicy);

        gridLayout->addWidget(lblIdentityCert, 0, 0, 1, 1);

        cmbIdentityCert = new QComboBox(QgsAuthIdentCertEdit);
        cmbIdentityCert->setObjectName(QStringLiteral("cmbIdentityCert"));

        gridLayout->addWidget(cmbIdentityCert, 0, 1, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 255, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 1, 1, 1, 1);


        retranslateUi(QgsAuthIdentCertEdit);

        QMetaObject::connectSlotsByName(QgsAuthIdentCertEdit);
    } // setupUi

    void retranslateUi(QWidget *QgsAuthIdentCertEdit)
    {
        lblIdentityCert->setText(QApplication::translate("QgsAuthIdentCertEdit", "Identity", Q_NULLPTR));
        Q_UNUSED(QgsAuthIdentCertEdit);
    } // retranslateUi

};

namespace Ui {
    class QgsAuthIdentCertEdit: public Ui_QgsAuthIdentCertEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSAUTHIDENTCERTEDIT_H
