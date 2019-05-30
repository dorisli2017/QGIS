/********************************************************************************
** Form generated from reading UI file 'qgspdfexportoptions.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPDFEXPORTOPTIONS_H
#define UI_QGSPDFEXPORTOPTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <qgscollapsiblegroupbox.h>

QT_BEGIN_NAMESPACE

class Ui_QgsPdfExportOptionsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QgsCollapsibleGroupBoxBasic *groupBox;
    QGridLayout *gridLayout;
    QComboBox *mTextRenderFormatComboBox;
    QCheckBox *mForceVectorCheckBox;
    QLabel *label_6;
    QCheckBox *mIncludeMetadataCheckbox;
    QgsCollapsibleGroupBoxBasic *groupBox_2;
    QGridLayout *gridLayout_2;
    QCheckBox *mDisableRasterTilingCheckBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsPdfExportOptionsDialog)
    {
        if (QgsPdfExportOptionsDialog->objectName().isEmpty())
            QgsPdfExportOptionsDialog->setObjectName(QStringLiteral("QgsPdfExportOptionsDialog"));
        QgsPdfExportOptionsDialog->resize(489, 276);
        verticalLayout = new QVBoxLayout(QgsPdfExportOptionsDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QgsCollapsibleGroupBoxBasic(QgsPdfExportOptionsDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mTextRenderFormatComboBox = new QComboBox(groupBox);
        mTextRenderFormatComboBox->setObjectName(QStringLiteral("mTextRenderFormatComboBox"));

        gridLayout->addWidget(mTextRenderFormatComboBox, 3, 1, 1, 1);

        mForceVectorCheckBox = new QCheckBox(groupBox);
        mForceVectorCheckBox->setObjectName(QStringLiteral("mForceVectorCheckBox"));

        gridLayout->addWidget(mForceVectorCheckBox, 0, 0, 1, 2);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 3, 0, 1, 1);

        mIncludeMetadataCheckbox = new QCheckBox(groupBox);
        mIncludeMetadataCheckbox->setObjectName(QStringLiteral("mIncludeMetadataCheckbox"));
        mIncludeMetadataCheckbox->setChecked(true);

        gridLayout->addWidget(mIncludeMetadataCheckbox, 1, 0, 1, 2);

        gridLayout->setColumnStretch(1, 1);

        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QgsCollapsibleGroupBoxBasic(QgsPdfExportOptionsDialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        mDisableRasterTilingCheckBox = new QCheckBox(groupBox_2);
        mDisableRasterTilingCheckBox->setObjectName(QStringLiteral("mDisableRasterTilingCheckBox"));
        mDisableRasterTilingCheckBox->setChecked(false);

        gridLayout_2->addWidget(mDisableRasterTilingCheckBox, 0, 0, 1, 2);


        verticalLayout->addWidget(groupBox_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(QgsPdfExportOptionsDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(mForceVectorCheckBox, mIncludeMetadataCheckbox);
        QWidget::setTabOrder(mIncludeMetadataCheckbox, mTextRenderFormatComboBox);

        retranslateUi(QgsPdfExportOptionsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsPdfExportOptionsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsPdfExportOptionsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsPdfExportOptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsPdfExportOptionsDialog)
    {
        QgsPdfExportOptionsDialog->setWindowTitle(QApplication::translate("QgsPdfExportOptionsDialog", "PDF Export Options", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("QgsPdfExportOptionsDialog", "Export Options", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mForceVectorCheckBox->setToolTip(QApplication::translate("QgsPdfExportOptionsDialog", "If checked, the layout will always be kept as vector objects when exported to a compatible format, even if the appearance of the resultant file does not match the layouts settings. If unchecked, some elements in the layout may be rasterized in order to keep their appearance intact.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mForceVectorCheckBox->setText(QApplication::translate("QgsPdfExportOptionsDialog", "Always export as vectors", Q_NULLPTR));
        label_6->setText(QApplication::translate("QgsPdfExportOptionsDialog", "Text export", Q_NULLPTR));
        mIncludeMetadataCheckbox->setText(QApplication::translate("QgsPdfExportOptionsDialog", "Export RDF metadata", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("QgsPdfExportOptionsDialog", "Advanced Options", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mDisableRasterTilingCheckBox->setToolTip(QApplication::translate("QgsPdfExportOptionsDialog", "Disables tiled rendering of raster layers. This setting may improve the export quality in some circumstances, at the cost of much greater memory usage during exports.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mDisableRasterTilingCheckBox->setText(QApplication::translate("QgsPdfExportOptionsDialog", "Disable tiled raster layer exports", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsPdfExportOptionsDialog: public Ui_QgsPdfExportOptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPDFEXPORTOPTIONS_H
