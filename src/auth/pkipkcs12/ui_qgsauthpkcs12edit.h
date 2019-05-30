/********************************************************************************
** Form generated from reading UI file 'qgsauthpkcs12edit.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSAUTHPKCS12EDIT_H
#define UI_QGSAUTHPKCS12EDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsAuthPkcs12Edit
{
public:
    QGridLayout *gridLayout;
    QLabel *lblPkcs12Bundle;
    QLineEdit *lePkcs12Bundle;
    QToolButton *btnPkcs12Bundle;
    QLineEdit *lePkcs12Msg;
    QLabel *lblCas;
    QTreeWidget *twCas;
    QLabel *lblPkcs12Key;
    QLineEdit *lePkcs12KeyPass;
    QCheckBox *chkPkcs12PassShow;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *cbAddCas;
    QCheckBox *cbAddRootCa;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *QgsAuthPkcs12Edit)
    {
        if (QgsAuthPkcs12Edit->objectName().isEmpty())
            QgsAuthPkcs12Edit->setObjectName(QStringLiteral("QgsAuthPkcs12Edit"));
        QgsAuthPkcs12Edit->resize(397, 202);
        gridLayout = new QGridLayout(QgsAuthPkcs12Edit);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lblPkcs12Bundle = new QLabel(QgsAuthPkcs12Edit);
        lblPkcs12Bundle->setObjectName(QStringLiteral("lblPkcs12Bundle"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblPkcs12Bundle->sizePolicy().hasHeightForWidth());
        lblPkcs12Bundle->setSizePolicy(sizePolicy);

        gridLayout->addWidget(lblPkcs12Bundle, 0, 0, 1, 1);

        lePkcs12Bundle = new QLineEdit(QgsAuthPkcs12Edit);
        lePkcs12Bundle->setObjectName(QStringLiteral("lePkcs12Bundle"));
        lePkcs12Bundle->setReadOnly(true);

        gridLayout->addWidget(lePkcs12Bundle, 0, 1, 1, 1);

        btnPkcs12Bundle = new QToolButton(QgsAuthPkcs12Edit);
        btnPkcs12Bundle->setObjectName(QStringLiteral("btnPkcs12Bundle"));
        btnPkcs12Bundle->setPopupMode(QToolButton::InstantPopup);

        gridLayout->addWidget(btnPkcs12Bundle, 0, 3, 1, 1);

        lePkcs12Msg = new QLineEdit(QgsAuthPkcs12Edit);
        lePkcs12Msg->setObjectName(QStringLiteral("lePkcs12Msg"));
        lePkcs12Msg->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 0);"));
        lePkcs12Msg->setReadOnly(true);

        gridLayout->addWidget(lePkcs12Msg, 1, 1, 1, 1);

        lblCas = new QLabel(QgsAuthPkcs12Edit);
        lblCas->setObjectName(QStringLiteral("lblCas"));

        gridLayout->addWidget(lblCas, 2, 0, 1, 1);

        twCas = new QTreeWidget(QgsAuthPkcs12Edit);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        twCas->setHeaderItem(__qtreewidgetitem);
        twCas->setObjectName(QStringLiteral("twCas"));
        twCas->setEditTriggers(QAbstractItemView::NoEditTriggers);
        twCas->setSelectionMode(QAbstractItemView::NoSelection);
        twCas->setRootIsDecorated(true);
        twCas->setColumnCount(1);
        twCas->header()->setVisible(false);

        gridLayout->addWidget(twCas, 2, 1, 2, 1);

        lblPkcs12Key = new QLabel(QgsAuthPkcs12Edit);
        lblPkcs12Key->setObjectName(QStringLiteral("lblPkcs12Key"));
        sizePolicy.setHeightForWidth(lblPkcs12Key->sizePolicy().hasHeightForWidth());
        lblPkcs12Key->setSizePolicy(sizePolicy);

        gridLayout->addWidget(lblPkcs12Key, 4, 0, 1, 1);

        lePkcs12KeyPass = new QLineEdit(QgsAuthPkcs12Edit);
        lePkcs12KeyPass->setObjectName(QStringLiteral("lePkcs12KeyPass"));
        lePkcs12KeyPass->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lePkcs12KeyPass, 4, 1, 1, 1);

        chkPkcs12PassShow = new QCheckBox(QgsAuthPkcs12Edit);
        chkPkcs12PassShow->setObjectName(QStringLiteral("chkPkcs12PassShow"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(chkPkcs12PassShow->sizePolicy().hasHeightForWidth());
        chkPkcs12PassShow->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(chkPkcs12PassShow, 4, 3, 1, 1);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 1, 1, 2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        cbAddCas = new QCheckBox(QgsAuthPkcs12Edit);
        cbAddCas->setObjectName(QStringLiteral("cbAddCas"));

        verticalLayout_2->addWidget(cbAddCas);

        cbAddRootCa = new QCheckBox(QgsAuthPkcs12Edit);
        cbAddRootCa->setObjectName(QStringLiteral("cbAddRootCa"));

        verticalLayout_2->addWidget(cbAddRootCa);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        gridLayout->addLayout(verticalLayout_2, 2, 2, 2, 2);

        QWidget::setTabOrder(lePkcs12Bundle, btnPkcs12Bundle);
        QWidget::setTabOrder(btnPkcs12Bundle, twCas);
        QWidget::setTabOrder(twCas, cbAddCas);
        QWidget::setTabOrder(cbAddCas, cbAddRootCa);
        QWidget::setTabOrder(cbAddRootCa, lePkcs12KeyPass);
        QWidget::setTabOrder(lePkcs12KeyPass, chkPkcs12PassShow);
        QWidget::setTabOrder(chkPkcs12PassShow, lePkcs12Msg);

        retranslateUi(QgsAuthPkcs12Edit);

        QMetaObject::connectSlotsByName(QgsAuthPkcs12Edit);
    } // setupUi

    void retranslateUi(QWidget *QgsAuthPkcs12Edit)
    {
        lblPkcs12Bundle->setText(QApplication::translate("QgsAuthPkcs12Edit", "Bundle", Q_NULLPTR));
        lePkcs12Bundle->setPlaceholderText(QApplication::translate("QgsAuthPkcs12Edit", "Required", Q_NULLPTR));
        btnPkcs12Bundle->setText(QApplication::translate("QgsAuthPkcs12Edit", "\342\200\246", Q_NULLPTR));
        lblCas->setText(QApplication::translate("QgsAuthPkcs12Edit", "CAs", Q_NULLPTR));
        lblPkcs12Key->setText(QApplication::translate("QgsAuthPkcs12Edit", "Key", Q_NULLPTR));
        lePkcs12KeyPass->setPlaceholderText(QApplication::translate("QgsAuthPkcs12Edit", "Optional passphrase", Q_NULLPTR));
        chkPkcs12PassShow->setText(QApplication::translate("QgsAuthPkcs12Edit", "Show", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        cbAddCas->setToolTip(QApplication::translate("QgsAuthPkcs12Edit", "Add bundle CAs to the connection", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        cbAddCas->setText(QApplication::translate("QgsAuthPkcs12Edit", "Add", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        cbAddRootCa->setToolTip(QApplication::translate("QgsAuthPkcs12Edit", "Add also root (self-signed) CA", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        cbAddRootCa->setText(QApplication::translate("QgsAuthPkcs12Edit", "Root", Q_NULLPTR));
        Q_UNUSED(QgsAuthPkcs12Edit);
    } // retranslateUi

};

namespace Ui {
    class QgsAuthPkcs12Edit: public Ui_QgsAuthPkcs12Edit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSAUTHPKCS12EDIT_H
