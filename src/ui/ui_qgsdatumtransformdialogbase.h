/********************************************************************************
** Form generated from reading UI file 'qgsdatumtransformdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSDATUMTRANSFORMDIALOGBASE_H
#define UI_QGSDATUMTRANSFORMDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsprojectionselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsDatumTransformDialogBase
{
public:
    QGridLayout *gridLayout;
    QLabel *mLabelSrcDescription;
    QDialogButtonBox *mButtonBox;
    QStackedWidget *mCrsStackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_4;
    QLabel *label;
    QgsProjectionSelectionWidget *mSourceProjectionSelectionWidget;
    QLabel *label_2;
    QgsProjectionSelectionWidget *mDestinationProjectionSelectionWidget;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_5;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *mDestCrsLabel;
    QLabel *mSourceCrsLabel;
    QHBoxLayout *horizontalLayout;
    QCheckBox *mMakeDefaultCheckBox;
    QSpacerItem *horizontalSpacer;
    QCheckBox *mHideDeprecatedCheckBox;
    QTableWidget *mDatumTransformTableWidget;
    QLabel *mLabelDstDescription;

    void setupUi(QDialog *QgsDatumTransformDialogBase)
    {
        if (QgsDatumTransformDialogBase->objectName().isEmpty())
            QgsDatumTransformDialogBase->setObjectName(QStringLiteral("QgsDatumTransformDialogBase"));
        QgsDatumTransformDialogBase->resize(620, 508);
        gridLayout = new QGridLayout(QgsDatumTransformDialogBase);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mLabelSrcDescription = new QLabel(QgsDatumTransformDialogBase);
        mLabelSrcDescription->setObjectName(QStringLiteral("mLabelSrcDescription"));
        mLabelSrcDescription->setText(QStringLiteral("Description"));
        mLabelSrcDescription->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        mLabelSrcDescription->setWordWrap(true);

        gridLayout->addWidget(mLabelSrcDescription, 2, 0, 1, 1);

        mButtonBox = new QDialogButtonBox(QgsDatumTransformDialogBase);
        mButtonBox->setObjectName(QStringLiteral("mButtonBox"));
        mButtonBox->setOrientation(Qt::Horizontal);
        mButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(mButtonBox, 4, 0, 1, 2);

        mCrsStackedWidget = new QStackedWidget(QgsDatumTransformDialogBase);
        mCrsStackedWidget->setObjectName(QStringLiteral("mCrsStackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        verticalLayout = new QVBoxLayout(page);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label = new QLabel(page);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_4->addWidget(label, 0, 0, 1, 1);

        mSourceProjectionSelectionWidget = new QgsProjectionSelectionWidget(page);
        mSourceProjectionSelectionWidget->setObjectName(QStringLiteral("mSourceProjectionSelectionWidget"));

        gridLayout_4->addWidget(mSourceProjectionSelectionWidget, 0, 1, 1, 1);

        label_2 = new QLabel(page);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_4->addWidget(label_2, 1, 0, 1, 1);

        mDestinationProjectionSelectionWidget = new QgsProjectionSelectionWidget(page);
        mDestinationProjectionSelectionWidget->setObjectName(QStringLiteral("mDestinationProjectionSelectionWidget"));

        gridLayout_4->addWidget(mDestinationProjectionSelectionWidget, 1, 1, 1, 1);

        gridLayout_4->setColumnStretch(1, 1);

        verticalLayout->addLayout(gridLayout_4);

        mCrsStackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        verticalLayout_2 = new QVBoxLayout(page_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        label_3 = new QLabel(page_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_5->addWidget(label_3, 0, 0, 1, 1);

        label_4 = new QLabel(page_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_5->addWidget(label_4, 1, 0, 1, 1);

        mDestCrsLabel = new QLabel(page_2);
        mDestCrsLabel->setObjectName(QStringLiteral("mDestCrsLabel"));

        gridLayout_5->addWidget(mDestCrsLabel, 1, 1, 1, 1);

        mSourceCrsLabel = new QLabel(page_2);
        mSourceCrsLabel->setObjectName(QStringLiteral("mSourceCrsLabel"));

        gridLayout_5->addWidget(mSourceCrsLabel, 0, 1, 1, 1);

        gridLayout_5->setColumnStretch(1, 1);

        verticalLayout_2->addLayout(gridLayout_5);

        mCrsStackedWidget->addWidget(page_2);

        gridLayout->addWidget(mCrsStackedWidget, 0, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mMakeDefaultCheckBox = new QCheckBox(QgsDatumTransformDialogBase);
        mMakeDefaultCheckBox->setObjectName(QStringLiteral("mMakeDefaultCheckBox"));

        horizontalLayout->addWidget(mMakeDefaultCheckBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        mHideDeprecatedCheckBox = new QCheckBox(QgsDatumTransformDialogBase);
        mHideDeprecatedCheckBox->setObjectName(QStringLiteral("mHideDeprecatedCheckBox"));

        horizontalLayout->addWidget(mHideDeprecatedCheckBox);


        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 2);

        mDatumTransformTableWidget = new QTableWidget(QgsDatumTransformDialogBase);
        mDatumTransformTableWidget->setObjectName(QStringLiteral("mDatumTransformTableWidget"));
        mDatumTransformTableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        mDatumTransformTableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);

        gridLayout->addWidget(mDatumTransformTableWidget, 1, 0, 1, 2);

        mLabelDstDescription = new QLabel(QgsDatumTransformDialogBase);
        mLabelDstDescription->setObjectName(QStringLiteral("mLabelDstDescription"));
        mLabelDstDescription->setText(QStringLiteral("Description"));
        mLabelDstDescription->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        mLabelDstDescription->setWordWrap(true);

        gridLayout->addWidget(mLabelDstDescription, 2, 1, 1, 1);

        gridLayout->setRowStretch(1, 3);
        gridLayout->setRowStretch(2, 1);
        QWidget::setTabOrder(mDatumTransformTableWidget, mMakeDefaultCheckBox);
        QWidget::setTabOrder(mMakeDefaultCheckBox, mHideDeprecatedCheckBox);

        retranslateUi(QgsDatumTransformDialogBase);
        QObject::connect(mButtonBox, SIGNAL(accepted()), QgsDatumTransformDialogBase, SLOT(accept()));
        QObject::connect(mButtonBox, SIGNAL(rejected()), QgsDatumTransformDialogBase, SLOT(reject()));

        mCrsStackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsDatumTransformDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsDatumTransformDialogBase)
    {
        QgsDatumTransformDialogBase->setWindowTitle(QApplication::translate("QgsDatumTransformDialogBase", "Select Datum Transformations", Q_NULLPTR));
        label->setText(QApplication::translate("QgsDatumTransformDialogBase", "Source CRS", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsDatumTransformDialogBase", "Destination CRS", Q_NULLPTR));
        label_3->setText(QApplication::translate("QgsDatumTransformDialogBase", "Source CRS", Q_NULLPTR));
        label_4->setText(QApplication::translate("QgsDatumTransformDialogBase", "Destination CRS", Q_NULLPTR));
        mDestCrsLabel->setText(QString());
        mSourceCrsLabel->setText(QString());
#ifndef QT_NO_TOOLTIP
        mMakeDefaultCheckBox->setToolTip(QApplication::translate("QgsDatumTransformDialogBase", "If checked, the selected transformation will become the default choice in all new projects", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mMakeDefaultCheckBox->setText(QApplication::translate("QgsDatumTransformDialogBase", "Make default", Q_NULLPTR));
        mHideDeprecatedCheckBox->setText(QApplication::translate("QgsDatumTransformDialogBase", "Hide deprecated transformations", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsDatumTransformDialogBase: public Ui_QgsDatumTransformDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSDATUMTRANSFORMDIALOGBASE_H
