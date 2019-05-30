/********************************************************************************
** Form generated from reading UI file 'qgsmeshrendereractivedatasetwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMESHRENDERERACTIVEDATASETWIDGETBASE_H
#define UI_QGSMESHRENDERERACTIVEDATASETWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "mesh/qgsmeshdatasetgrouptreeview.h"
#include "qgscollapsiblegroupbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsMeshRendererActiveDatasetWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QgsMeshDatasetGroupTreeView *mDatasetGroupTreeView;
    QLabel *label_2;
    QGridLayout *mTimeLayout;
    QComboBox *mTimeComboBox;
    QToolButton *mNextDatasetButton;
    QToolButton *mPreviousDatasetButton;
    QToolButton *mLastDatasetButton;
    QToolButton *mFirstDatasetButton;
    QToolButton *mTimeFormatButton;
    QSlider *mDatasetSlider;
    QgsCollapsibleGroupBox *mActiveDatasetMetadataGroup;
    QVBoxLayout *verticalLayout_2;
    QLabel *mActiveDatasetMetadata;

    void setupUi(QWidget *QgsMeshRendererActiveDatasetWidgetBase)
    {
        if (QgsMeshRendererActiveDatasetWidgetBase->objectName().isEmpty())
            QgsMeshRendererActiveDatasetWidgetBase->setObjectName(QStringLiteral("QgsMeshRendererActiveDatasetWidgetBase"));
        QgsMeshRendererActiveDatasetWidgetBase->setEnabled(true);
        QgsMeshRendererActiveDatasetWidgetBase->resize(292, 337);
        verticalLayout = new QVBoxLayout(QgsMeshRendererActiveDatasetWidgetBase);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        mDatasetGroupTreeView = new QgsMeshDatasetGroupTreeView(QgsMeshRendererActiveDatasetWidgetBase);
        mDatasetGroupTreeView->setObjectName(QStringLiteral("mDatasetGroupTreeView"));
        mDatasetGroupTreeView->setMinimumSize(QSize(0, 100));

        verticalLayout->addWidget(mDatasetGroupTreeView);

        label_2 = new QLabel(QgsMeshRendererActiveDatasetWidgetBase);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        mTimeLayout = new QGridLayout();
        mTimeLayout->setObjectName(QStringLiteral("mTimeLayout"));
        mTimeComboBox = new QComboBox(QgsMeshRendererActiveDatasetWidgetBase);
        mTimeComboBox->setObjectName(QStringLiteral("mTimeComboBox"));
        mTimeComboBox->setEditable(true);
        mTimeComboBox->setInsertPolicy(QComboBox::NoInsert);

        mTimeLayout->addWidget(mTimeComboBox, 2, 0, 1, 2);

        mNextDatasetButton = new QToolButton(QgsMeshRendererActiveDatasetWidgetBase);
        mNextDatasetButton->setObjectName(QStringLiteral("mNextDatasetButton"));
        mNextDatasetButton->setAutoRaise(true);

        mTimeLayout->addWidget(mNextDatasetButton, 2, 5, 1, 1);

        mPreviousDatasetButton = new QToolButton(QgsMeshRendererActiveDatasetWidgetBase);
        mPreviousDatasetButton->setObjectName(QStringLiteral("mPreviousDatasetButton"));
        mPreviousDatasetButton->setAutoRaise(true);

        mTimeLayout->addWidget(mPreviousDatasetButton, 2, 4, 1, 1);

        mLastDatasetButton = new QToolButton(QgsMeshRendererActiveDatasetWidgetBase);
        mLastDatasetButton->setObjectName(QStringLiteral("mLastDatasetButton"));
        mLastDatasetButton->setAutoRaise(true);

        mTimeLayout->addWidget(mLastDatasetButton, 2, 6, 1, 1);

        mFirstDatasetButton = new QToolButton(QgsMeshRendererActiveDatasetWidgetBase);
        mFirstDatasetButton->setObjectName(QStringLiteral("mFirstDatasetButton"));
        mFirstDatasetButton->setAutoRaise(true);

        mTimeLayout->addWidget(mFirstDatasetButton, 2, 3, 1, 1);

        mTimeFormatButton = new QToolButton(QgsMeshRendererActiveDatasetWidgetBase);
        mTimeFormatButton->setObjectName(QStringLiteral("mTimeFormatButton"));
        mTimeFormatButton->setText(QStringLiteral(""));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/console/iconSettingsConsole.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mTimeFormatButton->setIcon(icon);
        mTimeFormatButton->setAutoRaise(true);

        mTimeLayout->addWidget(mTimeFormatButton, 2, 2, 1, 1);

        mDatasetSlider = new QSlider(QgsMeshRendererActiveDatasetWidgetBase);
        mDatasetSlider->setObjectName(QStringLiteral("mDatasetSlider"));
        mDatasetSlider->setOrientation(Qt::Horizontal);
        mDatasetSlider->setTickPosition(QSlider::TicksBelow);
        mDatasetSlider->setTickInterval(1);

        mTimeLayout->addWidget(mDatasetSlider, 1, 0, 1, 7);


        verticalLayout->addLayout(mTimeLayout);

        mActiveDatasetMetadataGroup = new QgsCollapsibleGroupBox(QgsMeshRendererActiveDatasetWidgetBase);
        mActiveDatasetMetadataGroup->setObjectName(QStringLiteral("mActiveDatasetMetadataGroup"));
        verticalLayout_2 = new QVBoxLayout(mActiveDatasetMetadataGroup);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        mActiveDatasetMetadata = new QLabel(mActiveDatasetMetadataGroup);
        mActiveDatasetMetadata->setObjectName(QStringLiteral("mActiveDatasetMetadata"));
        mActiveDatasetMetadata->setTextFormat(Qt::RichText);

        verticalLayout_2->addWidget(mActiveDatasetMetadata);


        verticalLayout->addWidget(mActiveDatasetMetadataGroup);


        retranslateUi(QgsMeshRendererActiveDatasetWidgetBase);

        QMetaObject::connectSlotsByName(QgsMeshRendererActiveDatasetWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsMeshRendererActiveDatasetWidgetBase)
    {
        QgsMeshRendererActiveDatasetWidgetBase->setWindowTitle(QApplication::translate("QgsMeshRendererActiveDatasetWidgetBase", "Form", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsMeshRendererActiveDatasetWidgetBase", "Dataset in Selected Group(s)", Q_NULLPTR));
        mNextDatasetButton->setText(QApplication::translate("QgsMeshRendererActiveDatasetWidgetBase", ">", Q_NULLPTR));
        mPreviousDatasetButton->setText(QApplication::translate("QgsMeshRendererActiveDatasetWidgetBase", "<", Q_NULLPTR));
        mLastDatasetButton->setText(QApplication::translate("QgsMeshRendererActiveDatasetWidgetBase", ">|", Q_NULLPTR));
        mFirstDatasetButton->setText(QApplication::translate("QgsMeshRendererActiveDatasetWidgetBase", "|<", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mTimeFormatButton->setToolTip(QApplication::translate("QgsMeshRendererActiveDatasetWidgetBase", "Time Format Options", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mActiveDatasetMetadataGroup->setTitle(QApplication::translate("QgsMeshRendererActiveDatasetWidgetBase", "Metadata", Q_NULLPTR));
        mActiveDatasetMetadata->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QgsMeshRendererActiveDatasetWidgetBase: public Ui_QgsMeshRendererActiveDatasetWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMESHRENDERERACTIVEDATASETWIDGETBASE_H
