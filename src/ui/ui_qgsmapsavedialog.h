/********************************************************************************
** Form generated from reading UI file 'qgsmapsavedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMAPSAVEDIALOG_H
#define UI_QGSMAPSAVEDIALOG_H

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
#include <QtWidgets/QVBoxLayout>
#include "qgscollapsiblegroupbox.h"
#include "qgsextentgroupbox.h"
#include "qgsratiolockbutton.h"
#include "qgsscalewidget.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsMapSaveDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *mInfo;
    QCheckBox *mSaveAsRaster;
    QCheckBox *mSaveWorldFile;
    QCheckBox *mDrawAnnotations;
    QCheckBox *mDrawDecorations;
    QLabel *label_4;
    QLabel *label_3;
    QGridLayout *gridLayout_4;
    QgsSpinBox *mOutputWidthSpinBox;
    QHBoxLayout *hboxLayout;
    QgsRatioLockButton *mLockAspectRatio;
    QgsSpinBox *mOutputHeightSpinBox;
    QLabel *label_2;
    QgsSpinBox *mResolutionSpinBox;
    QLabel *label_1;
    QgsScaleWidget *mScaleWidget;
    QgsExtentGroupBox *mExtentGroupBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsMapSaveDialog)
    {
        if (QgsMapSaveDialog->objectName().isEmpty())
            QgsMapSaveDialog->setObjectName(QStringLiteral("QgsMapSaveDialog"));
        QgsMapSaveDialog->resize(600, 318);
        verticalLayout = new QVBoxLayout(QgsMapSaveDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mInfo = new QLabel(QgsMapSaveDialog);
        mInfo->setObjectName(QStringLiteral("mInfo"));
        mInfo->setEnabled(false);

        gridLayout->addWidget(mInfo, 9, 0, 1, 2);

        mSaveAsRaster = new QCheckBox(QgsMapSaveDialog);
        mSaveAsRaster->setObjectName(QStringLiteral("mSaveAsRaster"));
        mSaveAsRaster->setVisible(false);
        mSaveAsRaster->setChecked(false);

        gridLayout->addWidget(mSaveAsRaster, 8, 0, 1, 2);

        mSaveWorldFile = new QCheckBox(QgsMapSaveDialog);
        mSaveWorldFile->setObjectName(QStringLiteral("mSaveWorldFile"));
        mSaveWorldFile->setChecked(true);

        gridLayout->addWidget(mSaveWorldFile, 7, 0, 1, 2);

        mDrawAnnotations = new QCheckBox(QgsMapSaveDialog);
        mDrawAnnotations->setObjectName(QStringLiteral("mDrawAnnotations"));
        mDrawAnnotations->setChecked(true);

        gridLayout->addWidget(mDrawAnnotations, 6, 0, 1, 2);

        mDrawDecorations = new QCheckBox(QgsMapSaveDialog);
        mDrawDecorations->setObjectName(QStringLiteral("mDrawDecorations"));
        mDrawDecorations->setChecked(true);

        gridLayout->addWidget(mDrawDecorations, 5, 0, 1, 2);

        label_4 = new QLabel(QgsMapSaveDialog);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        label_3 = new QLabel(QgsMapSaveDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setHorizontalSpacing(0);
        gridLayout_4->setVerticalSpacing(6);
        mOutputWidthSpinBox = new QgsSpinBox(QgsMapSaveDialog);
        mOutputWidthSpinBox->setObjectName(QStringLiteral("mOutputWidthSpinBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mOutputWidthSpinBox->sizePolicy().hasHeightForWidth());
        mOutputWidthSpinBox->setSizePolicy(sizePolicy);
        mOutputWidthSpinBox->setMinimum(1);
        mOutputWidthSpinBox->setMaximum(99999);
        mOutputWidthSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_4->addWidget(mOutputWidthSpinBox, 0, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        hboxLayout->setContentsMargins(2, 2, 0, 2);
        mLockAspectRatio = new QgsRatioLockButton(QgsMapSaveDialog);
        mLockAspectRatio->setObjectName(QStringLiteral("mLockAspectRatio"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mLockAspectRatio->sizePolicy().hasHeightForWidth());
        mLockAspectRatio->setSizePolicy(sizePolicy1);
        mLockAspectRatio->setContentsMargins(13, -1, -1, -1);

        hboxLayout->addWidget(mLockAspectRatio);


        gridLayout_4->addLayout(hboxLayout, 0, 1, 2, 1);

        mOutputHeightSpinBox = new QgsSpinBox(QgsMapSaveDialog);
        mOutputHeightSpinBox->setObjectName(QStringLiteral("mOutputHeightSpinBox"));
        mOutputHeightSpinBox->setMinimum(1);
        mOutputHeightSpinBox->setMaximum(99999);
        mOutputHeightSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_4->addWidget(mOutputHeightSpinBox, 1, 0, 1, 1);


        gridLayout->addLayout(gridLayout_4, 3, 1, 2, 1);

        label_2 = new QLabel(QgsMapSaveDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        mResolutionSpinBox = new QgsSpinBox(QgsMapSaveDialog);
        mResolutionSpinBox->setObjectName(QStringLiteral("mResolutionSpinBox"));
        mResolutionSpinBox->setMinimum(1);
        mResolutionSpinBox->setMaximum(3000);
        mResolutionSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout->addWidget(mResolutionSpinBox, 2, 1, 1, 1);

        label_1 = new QLabel(QgsMapSaveDialog);
        label_1->setObjectName(QStringLiteral("label_1"));

        gridLayout->addWidget(label_1, 1, 0, 1, 1);

        mScaleWidget = new QgsScaleWidget(QgsMapSaveDialog);
        mScaleWidget->setObjectName(QStringLiteral("mScaleWidget"));

        gridLayout->addWidget(mScaleWidget, 1, 1, 1, 1);

        mExtentGroupBox = new QgsExtentGroupBox(QgsMapSaveDialog);
        mExtentGroupBox->setObjectName(QStringLiteral("mExtentGroupBox"));

        gridLayout->addWidget(mExtentGroupBox, 0, 0, 1, 2);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(QgsMapSaveDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Save);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(mExtentGroupBox, mDrawAnnotations);
        QWidget::setTabOrder(mDrawAnnotations, mDrawDecorations);

        retranslateUi(QgsMapSaveDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsMapSaveDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsMapSaveDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsMapSaveDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsMapSaveDialog)
    {
        QgsMapSaveDialog->setWindowTitle(QApplication::translate("QgsMapSaveDialog", "Save Map as Image", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mSaveAsRaster->setToolTip(QApplication::translate("QgsMapSaveDialog", "Advanced effects such as blend modes or vector layer transparency cannot be exported as vectors.\n"
"Rasterizing the map is recommended when such effects are used.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mSaveAsRaster->setText(QApplication::translate("QgsMapSaveDialog", "Rasterize map", Q_NULLPTR));
        mSaveWorldFile->setText(QApplication::translate("QgsMapSaveDialog", "Save world file", Q_NULLPTR));
        mDrawAnnotations->setText(QApplication::translate("QgsMapSaveDialog", "Draw annotations", Q_NULLPTR));
        mDrawDecorations->setText(QApplication::translate("QgsMapSaveDialog", "Draw active decorations", Q_NULLPTR));
        label_4->setText(QApplication::translate("QgsMapSaveDialog", "Output height", Q_NULLPTR));
        label_3->setText(QApplication::translate("QgsMapSaveDialog", "Output width", Q_NULLPTR));
        mOutputWidthSpinBox->setSuffix(QApplication::translate("QgsMapSaveDialog", " px", Q_NULLPTR));
        mOutputWidthSpinBox->setPrefix(QString());
#ifndef QT_NO_TOOLTIP
        mLockAspectRatio->setToolTip(QApplication::translate("QgsMapSaveDialog", "Lock aspect ratio (including while drawing extent onto canvas)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mOutputHeightSpinBox->setSuffix(QApplication::translate("QgsMapSaveDialog", " px", Q_NULLPTR));
        mOutputHeightSpinBox->setPrefix(QString());
        label_2->setText(QApplication::translate("QgsMapSaveDialog", "Resolution", Q_NULLPTR));
        mResolutionSpinBox->setSuffix(QApplication::translate("QgsMapSaveDialog", " dpi", Q_NULLPTR));
        mResolutionSpinBox->setPrefix(QString());
        label_1->setText(QApplication::translate("QgsMapSaveDialog", "Scale", Q_NULLPTR));
        mExtentGroupBox->setTitle(QApplication::translate("QgsMapSaveDialog", "Extent", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsMapSaveDialog: public Ui_QgsMapSaveDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMAPSAVEDIALOG_H
