/********************************************************************************
** Form generated from reading UI file 'qgsauthbasicedit.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSAUTHBASICEDIT_H
#define UI_QGSAUTHBASICEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsAuthBasicEdit
{
public:
    QGridLayout *gridLayout;
    QLineEdit *leRealm;
    QLineEdit *leUsername;
    QLabel *lblRealm;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lePassword;
    QCheckBox *chkPasswordShow;
    QLabel *lblUsername;
    QLabel *lblPassword;

    void setupUi(QWidget *QgsAuthBasicEdit)
    {
        if (QgsAuthBasicEdit->objectName().isEmpty())
            QgsAuthBasicEdit->setObjectName(QStringLiteral("QgsAuthBasicEdit"));
        QgsAuthBasicEdit->resize(400, 300);
        gridLayout = new QGridLayout(QgsAuthBasicEdit);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(6, 6, 6, 6);
        leRealm = new QLineEdit(QgsAuthBasicEdit);
        leRealm->setObjectName(QStringLiteral("leRealm"));

        gridLayout->addWidget(leRealm, 2, 1, 1, 1);

        leUsername = new QLineEdit(QgsAuthBasicEdit);
        leUsername->setObjectName(QStringLiteral("leUsername"));

        gridLayout->addWidget(leUsername, 0, 1, 1, 1);

        lblRealm = new QLabel(QgsAuthBasicEdit);
        lblRealm->setObjectName(QStringLiteral("lblRealm"));

        gridLayout->addWidget(lblRealm, 2, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 173, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 3, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lePassword = new QLineEdit(QgsAuthBasicEdit);
        lePassword->setObjectName(QStringLiteral("lePassword"));
        lePassword->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(lePassword);

        chkPasswordShow = new QCheckBox(QgsAuthBasicEdit);
        chkPasswordShow->setObjectName(QStringLiteral("chkPasswordShow"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(chkPasswordShow->sizePolicy().hasHeightForWidth());
        chkPasswordShow->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(chkPasswordShow);


        gridLayout->addLayout(horizontalLayout_2, 1, 1, 1, 1);

        lblUsername = new QLabel(QgsAuthBasicEdit);
        lblUsername->setObjectName(QStringLiteral("lblUsername"));

        gridLayout->addWidget(lblUsername, 0, 0, 1, 1);

        lblPassword = new QLabel(QgsAuthBasicEdit);
        lblPassword->setObjectName(QStringLiteral("lblPassword"));

        gridLayout->addWidget(lblPassword, 1, 0, 1, 1);

        QWidget::setTabOrder(leUsername, lePassword);
        QWidget::setTabOrder(lePassword, leRealm);
        QWidget::setTabOrder(leRealm, chkPasswordShow);

        retranslateUi(QgsAuthBasicEdit);

        QMetaObject::connectSlotsByName(QgsAuthBasicEdit);
    } // setupUi

    void retranslateUi(QWidget *QgsAuthBasicEdit)
    {
        leRealm->setPlaceholderText(QApplication::translate("QgsAuthBasicEdit", "Optional", Q_NULLPTR));
        leUsername->setPlaceholderText(QApplication::translate("QgsAuthBasicEdit", "Required", Q_NULLPTR));
        lblRealm->setText(QApplication::translate("QgsAuthBasicEdit", "Realm", Q_NULLPTR));
        lePassword->setText(QString());
        lePassword->setPlaceholderText(QApplication::translate("QgsAuthBasicEdit", "Optional", Q_NULLPTR));
        chkPasswordShow->setText(QApplication::translate("QgsAuthBasicEdit", "Show", Q_NULLPTR));
        lblUsername->setText(QApplication::translate("QgsAuthBasicEdit", "Username", Q_NULLPTR));
        lblPassword->setText(QApplication::translate("QgsAuthBasicEdit", "Password", Q_NULLPTR));
        Q_UNUSED(QgsAuthBasicEdit);
    } // retranslateUi

};

namespace Ui {
    class QgsAuthBasicEdit: public Ui_QgsAuthBasicEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSAUTHBASICEDIT_H
