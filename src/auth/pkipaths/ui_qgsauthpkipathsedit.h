/********************************************************************************
** Form generated from reading UI file 'qgsauthpkipathsedit.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSAUTHPKIPATHSEDIT_H
#define UI_QGSAUTHPKIPATHSEDIT_H

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

class Ui_QgsAuthPkiPathsEdit
{
public:
    QGridLayout *gridLayout;
    QLabel *lblPkiPathsCert;
    QLineEdit *lePkiPathsCert;
    QLineEdit *lePkiPathsMsg;
    QLabel *lblCas;
    QTreeWidget *twCas;
    QLabel *lblPkiPathsKey;
    QLineEdit *lePkiPathsKey;
    QLineEdit *lePkiPathsKeyPass;
    QSpacerItem *verticalSpacer;
    QToolButton *btnPkiPathsCert;
    QToolButton *btnPkiPathsKey;
    QCheckBox *chkPkiPathsPassShow;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *cbAddCas;
    QCheckBox *cbAddRootCa;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *QgsAuthPkiPathsEdit)
    {
        if (QgsAuthPkiPathsEdit->objectName().isEmpty())
            QgsAuthPkiPathsEdit->setObjectName(QStringLiteral("QgsAuthPkiPathsEdit"));
        QgsAuthPkiPathsEdit->resize(415, 268);
        gridLayout = new QGridLayout(QgsAuthPkiPathsEdit);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lblPkiPathsCert = new QLabel(QgsAuthPkiPathsEdit);
        lblPkiPathsCert->setObjectName(QStringLiteral("lblPkiPathsCert"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblPkiPathsCert->sizePolicy().hasHeightForWidth());
        lblPkiPathsCert->setSizePolicy(sizePolicy);

        gridLayout->addWidget(lblPkiPathsCert, 0, 0, 1, 1);

        lePkiPathsCert = new QLineEdit(QgsAuthPkiPathsEdit);
        lePkiPathsCert->setObjectName(QStringLiteral("lePkiPathsCert"));
        lePkiPathsCert->setReadOnly(true);

        gridLayout->addWidget(lePkiPathsCert, 0, 1, 1, 1);

        lePkiPathsMsg = new QLineEdit(QgsAuthPkiPathsEdit);
        lePkiPathsMsg->setObjectName(QStringLiteral("lePkiPathsMsg"));
        lePkiPathsMsg->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 0);"));
        lePkiPathsMsg->setReadOnly(true);

        gridLayout->addWidget(lePkiPathsMsg, 1, 1, 1, 1);

        lblCas = new QLabel(QgsAuthPkiPathsEdit);
        lblCas->setObjectName(QStringLiteral("lblCas"));

        gridLayout->addWidget(lblCas, 2, 0, 1, 1);

        twCas = new QTreeWidget(QgsAuthPkiPathsEdit);
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

        lblPkiPathsKey = new QLabel(QgsAuthPkiPathsEdit);
        lblPkiPathsKey->setObjectName(QStringLiteral("lblPkiPathsKey"));
        sizePolicy.setHeightForWidth(lblPkiPathsKey->sizePolicy().hasHeightForWidth());
        lblPkiPathsKey->setSizePolicy(sizePolicy);

        gridLayout->addWidget(lblPkiPathsKey, 4, 0, 1, 1);

        lePkiPathsKey = new QLineEdit(QgsAuthPkiPathsEdit);
        lePkiPathsKey->setObjectName(QStringLiteral("lePkiPathsKey"));
        lePkiPathsKey->setReadOnly(true);

        gridLayout->addWidget(lePkiPathsKey, 4, 1, 1, 1);

        lePkiPathsKeyPass = new QLineEdit(QgsAuthPkiPathsEdit);
        lePkiPathsKeyPass->setObjectName(QStringLiteral("lePkiPathsKeyPass"));
        lePkiPathsKeyPass->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lePkiPathsKeyPass, 5, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 6, 1, 1, 3);

        btnPkiPathsCert = new QToolButton(QgsAuthPkiPathsEdit);
        btnPkiPathsCert->setObjectName(QStringLiteral("btnPkiPathsCert"));
        btnPkiPathsCert->setPopupMode(QToolButton::InstantPopup);

        gridLayout->addWidget(btnPkiPathsCert, 0, 2, 1, 1);

        btnPkiPathsKey = new QToolButton(QgsAuthPkiPathsEdit);
        btnPkiPathsKey->setObjectName(QStringLiteral("btnPkiPathsKey"));
        btnPkiPathsKey->setPopupMode(QToolButton::InstantPopup);

        gridLayout->addWidget(btnPkiPathsKey, 4, 2, 1, 1);

        chkPkiPathsPassShow = new QCheckBox(QgsAuthPkiPathsEdit);
        chkPkiPathsPassShow->setObjectName(QStringLiteral("chkPkiPathsPassShow"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(chkPkiPathsPassShow->sizePolicy().hasHeightForWidth());
        chkPkiPathsPassShow->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(chkPkiPathsPassShow, 5, 2, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        cbAddCas = new QCheckBox(QgsAuthPkiPathsEdit);
        cbAddCas->setObjectName(QStringLiteral("cbAddCas"));

        verticalLayout_2->addWidget(cbAddCas);

        cbAddRootCa = new QCheckBox(QgsAuthPkiPathsEdit);
        cbAddRootCa->setObjectName(QStringLiteral("cbAddRootCa"));

        verticalLayout_2->addWidget(cbAddRootCa);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        gridLayout->addLayout(verticalLayout_2, 2, 2, 2, 1);

        QWidget::setTabOrder(lePkiPathsCert, btnPkiPathsCert);
        QWidget::setTabOrder(btnPkiPathsCert, twCas);
        QWidget::setTabOrder(twCas, cbAddCas);
        QWidget::setTabOrder(cbAddCas, cbAddRootCa);
        QWidget::setTabOrder(cbAddRootCa, lePkiPathsKey);
        QWidget::setTabOrder(lePkiPathsKey, btnPkiPathsKey);
        QWidget::setTabOrder(btnPkiPathsKey, lePkiPathsKeyPass);
        QWidget::setTabOrder(lePkiPathsKeyPass, chkPkiPathsPassShow);
        QWidget::setTabOrder(chkPkiPathsPassShow, lePkiPathsMsg);

        retranslateUi(QgsAuthPkiPathsEdit);

        QMetaObject::connectSlotsByName(QgsAuthPkiPathsEdit);
    } // setupUi

    void retranslateUi(QWidget *QgsAuthPkiPathsEdit)
    {
        lblPkiPathsCert->setText(QApplication::translate("QgsAuthPkiPathsEdit", "Cert", Q_NULLPTR));
        lePkiPathsCert->setPlaceholderText(QApplication::translate("QgsAuthPkiPathsEdit", "Required", Q_NULLPTR));
        lblCas->setText(QApplication::translate("QgsAuthPkiPathsEdit", "CAs", Q_NULLPTR));
        lblPkiPathsKey->setText(QApplication::translate("QgsAuthPkiPathsEdit", "Key", Q_NULLPTR));
        lePkiPathsKey->setPlaceholderText(QApplication::translate("QgsAuthPkiPathsEdit", "Required", Q_NULLPTR));
        lePkiPathsKeyPass->setPlaceholderText(QApplication::translate("QgsAuthPkiPathsEdit", "Optional passphrase", Q_NULLPTR));
        btnPkiPathsCert->setText(QApplication::translate("QgsAuthPkiPathsEdit", "\342\200\246", Q_NULLPTR));
        btnPkiPathsKey->setText(QApplication::translate("QgsAuthPkiPathsEdit", "\342\200\246", Q_NULLPTR));
        chkPkiPathsPassShow->setText(QApplication::translate("QgsAuthPkiPathsEdit", "Show", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        cbAddCas->setToolTip(QApplication::translate("QgsAuthPkiPathsEdit", "Add bundle CAs to the connection", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        cbAddCas->setText(QApplication::translate("QgsAuthPkiPathsEdit", "Add", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        cbAddRootCa->setToolTip(QApplication::translate("QgsAuthPkiPathsEdit", "Add also root (self-signed) CA", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        cbAddRootCa->setText(QApplication::translate("QgsAuthPkiPathsEdit", "Root", Q_NULLPTR));
        Q_UNUSED(QgsAuthPkiPathsEdit);
    } // retranslateUi

};

namespace Ui {
    class QgsAuthPkiPathsEdit: public Ui_QgsAuthPkiPathsEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSAUTHPKIPATHSEDIT_H
