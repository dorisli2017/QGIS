/********************************************************************************
** Form generated from reading UI file 'qgsfeatureselectiondlg.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSFEATURESELECTIONDLG_H
#define UI_QGSFEATURESELECTIONDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsdualview.h"

QT_BEGIN_NAMESPACE

class Ui_QgsFeatureSelectionDlg
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QgsDualView *mDualView;
    QWidget *page;
    QWidget *page_2;
    QDialogButtonBox *mButtonBox;

    void setupUi(QDialog *QgsFeatureSelectionDlg)
    {
        if (QgsFeatureSelectionDlg->objectName().isEmpty())
            QgsFeatureSelectionDlg->setObjectName(QStringLiteral("QgsFeatureSelectionDlg"));
        QgsFeatureSelectionDlg->resize(468, 496);
        verticalLayout = new QVBoxLayout(QgsFeatureSelectionDlg);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        scrollArea = new QScrollArea(QgsFeatureSelectionDlg);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 448, 444));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        mDualView = new QgsDualView(scrollAreaWidgetContents);
        mDualView->setObjectName(QStringLiteral("mDualView"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        mDualView->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        mDualView->addWidget(page_2);

        verticalLayout_2->addWidget(mDualView);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        mButtonBox = new QDialogButtonBox(QgsFeatureSelectionDlg);
        mButtonBox->setObjectName(QStringLiteral("mButtonBox"));
        mButtonBox->setOrientation(Qt::Horizontal);
        mButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(mButtonBox);


        retranslateUi(QgsFeatureSelectionDlg);
        QObject::connect(mButtonBox, SIGNAL(accepted()), QgsFeatureSelectionDlg, SLOT(accept()));
        QObject::connect(mButtonBox, SIGNAL(rejected()), QgsFeatureSelectionDlg, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsFeatureSelectionDlg);
    } // setupUi

    void retranslateUi(QDialog *QgsFeatureSelectionDlg)
    {
        QgsFeatureSelectionDlg->setWindowTitle(QApplication::translate("QgsFeatureSelectionDlg", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsFeatureSelectionDlg: public Ui_QgsFeatureSelectionDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSFEATURESELECTIONDLG_H
