/********************************************************************************
** Form generated from reading UI file 'checkDock.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECKDOCK_H
#define UI_CHECKDOCK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "qgsdockwidget.h"

QT_BEGIN_NAMESPACE

class Ui_checkDock
{
public:
    QAction *actionValidateAll;
    QAction *actionValidateExtent;
    QAction *actionConfigure;
    QWidget *dockWidgetContents;
    QGridLayout *gridLayout_2;
    QToolBar *mTopologyToolbar;
    QHBoxLayout *horizontalLayout;
    QTableView *mErrorTableView;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *mToggleRubberband;
    QLabel *mComment;
    QGridLayout *gridLayout;
    QComboBox *mFixBox;
    QPushButton *mFixButton;

    void setupUi(QgsDockWidget *checkDock)
    {
        if (checkDock->objectName().isEmpty())
            checkDock->setObjectName(QStringLiteral("checkDock"));
        checkDock->resize(382, 280);
        actionValidateAll = new QAction(checkDock);
        actionValidateAll->setObjectName(QStringLiteral("actionValidateAll"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/topology/mActionValidateAll.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionValidateAll->setIcon(icon);
        actionValidateExtent = new QAction(checkDock);
        actionValidateExtent->setObjectName(QStringLiteral("actionValidateExtent"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/topology/mActionValidateExtent.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionValidateExtent->setIcon(icon1);
        actionConfigure = new QAction(checkDock);
        actionConfigure->setObjectName(QStringLiteral("actionConfigure"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/topology/mActionConfigure.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionConfigure->setIcon(icon2);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        gridLayout_2 = new QGridLayout(dockWidgetContents);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        mTopologyToolbar = new QToolBar(dockWidgetContents);
        mTopologyToolbar->setObjectName(QStringLiteral("mTopologyToolbar"));
        mTopologyToolbar->setIconSize(QSize(16, 16));
        mTopologyToolbar->setFloatable(false);

        gridLayout_2->addWidget(mTopologyToolbar, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mErrorTableView = new QTableView(dockWidgetContents);
        mErrorTableView->setObjectName(QStringLiteral("mErrorTableView"));
        mErrorTableView->horizontalHeader()->setStretchLastSection(true);

        horizontalLayout->addWidget(mErrorTableView);


        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        mToggleRubberband = new QCheckBox(dockWidgetContents);
        mToggleRubberband->setObjectName(QStringLiteral("mToggleRubberband"));
        mToggleRubberband->setChecked(false);

        horizontalLayout_5->addWidget(mToggleRubberband);

        mComment = new QLabel(dockWidgetContents);
        mComment->setObjectName(QStringLiteral("mComment"));

        horizontalLayout_5->addWidget(mComment);


        gridLayout_2->addLayout(horizontalLayout_5, 2, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mFixBox = new QComboBox(dockWidgetContents);
        mFixBox->setObjectName(QStringLiteral("mFixBox"));

        gridLayout->addWidget(mFixBox, 0, 0, 1, 1);

        mFixButton = new QPushButton(dockWidgetContents);
        mFixButton->setObjectName(QStringLiteral("mFixButton"));

        gridLayout->addWidget(mFixButton, 0, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 3, 0, 1, 1);

        checkDock->setWidget(dockWidgetContents);

        mTopologyToolbar->addAction(actionValidateAll);
        mTopologyToolbar->addAction(actionValidateExtent);
        mTopologyToolbar->addAction(actionConfigure);

        retranslateUi(checkDock);

        QMetaObject::connectSlotsByName(checkDock);
    } // setupUi

    void retranslateUi(QgsDockWidget *checkDock)
    {
        checkDock->setWindowTitle(QApplication::translate("checkDock", "Topology Checker Panel", Q_NULLPTR));
        actionValidateAll->setText(QApplication::translate("checkDock", "Validate All", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionValidateAll->setToolTip(QApplication::translate("checkDock", "Validate All", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionValidateExtent->setText(QApplication::translate("checkDock", "Validate Extent", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionValidateExtent->setToolTip(QApplication::translate("checkDock", "Validate Extent", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionConfigure->setText(QApplication::translate("checkDock", "Configure", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionConfigure->setToolTip(QApplication::translate("checkDock", "Configure", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        mToggleRubberband->setToolTip(QApplication::translate("checkDock", "Show topology errors", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mToggleRubberband->setText(QApplication::translate("checkDock", "Show errors", Q_NULLPTR));
        mComment->setText(QApplication::translate("checkDock", "Topology not checked yet", Q_NULLPTR));
        mFixBox->clear();
        mFixBox->insertItems(0, QStringList()
         << QApplication::translate("checkDock", "Select automatic fix", Q_NULLPTR)
        );
        mFixButton->setText(QApplication::translate("checkDock", "Fix!", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class checkDock: public Ui_checkDock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECKDOCK_H
