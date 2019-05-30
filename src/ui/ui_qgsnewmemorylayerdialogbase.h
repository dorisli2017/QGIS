/********************************************************************************
** Form generated from reading UI file 'qgsnewmemorylayerdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSNEWMEMORYLAYERDIALOGBASE_H
#define UI_QGSNEWMEMORYLAYERDIALOGBASE_H

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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <qgsprojectionselectionwidget.h>

QT_BEGIN_NAMESPACE

class Ui_QgsNewMemoryLayerDialogBase
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QCheckBox *mGeometryWithMCheckBox;
    QLabel *label_3;
    QLabel *label;
    QCheckBox *mGeometryWithZCheckBox;
    QComboBox *mGeometryTypeBox;
    QLineEdit *mNameLineEdit;
    QgsProjectionSelectionWidget *mCrsSelector;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *mButtonBox;

    void setupUi(QDialog *QgsNewMemoryLayerDialogBase)
    {
        if (QgsNewMemoryLayerDialogBase->objectName().isEmpty())
            QgsNewMemoryLayerDialogBase->setObjectName(QStringLiteral("QgsNewMemoryLayerDialogBase"));
        QgsNewMemoryLayerDialogBase->resize(444, 246);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsNewMemoryLayerDialogBase->sizePolicy().hasHeightForWidth());
        QgsNewMemoryLayerDialogBase->setSizePolicy(sizePolicy);
        QgsNewMemoryLayerDialogBase->setModal(true);
        verticalLayout = new QVBoxLayout(QgsNewMemoryLayerDialogBase);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mGeometryWithMCheckBox = new QCheckBox(QgsNewMemoryLayerDialogBase);
        mGeometryWithMCheckBox->setObjectName(QStringLiteral("mGeometryWithMCheckBox"));

        gridLayout->addWidget(mGeometryWithMCheckBox, 2, 2, 1, 1);

        label_3 = new QLabel(QgsNewMemoryLayerDialogBase);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label = new QLabel(QgsNewMemoryLayerDialogBase);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        mGeometryWithZCheckBox = new QCheckBox(QgsNewMemoryLayerDialogBase);
        mGeometryWithZCheckBox->setObjectName(QStringLiteral("mGeometryWithZCheckBox"));

        gridLayout->addWidget(mGeometryWithZCheckBox, 2, 1, 1, 1);

        mGeometryTypeBox = new QComboBox(QgsNewMemoryLayerDialogBase);
        mGeometryTypeBox->setObjectName(QStringLiteral("mGeometryTypeBox"));

        gridLayout->addWidget(mGeometryTypeBox, 1, 1, 1, 2);

        mNameLineEdit = new QLineEdit(QgsNewMemoryLayerDialogBase);
        mNameLineEdit->setObjectName(QStringLiteral("mNameLineEdit"));

        gridLayout->addWidget(mNameLineEdit, 0, 1, 1, 2);

        mCrsSelector = new QgsProjectionSelectionWidget(QgsNewMemoryLayerDialogBase);
        mCrsSelector->setObjectName(QStringLiteral("mCrsSelector"));
        mCrsSelector->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(mCrsSelector, 3, 1, 1, 2);


        verticalLayout->addLayout(gridLayout);

        label_2 = new QLabel(QgsNewMemoryLayerDialogBase);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setTextFormat(Qt::AutoText);
        label_2->setWordWrap(true);

        verticalLayout->addWidget(label_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        mButtonBox = new QDialogButtonBox(QgsNewMemoryLayerDialogBase);
        mButtonBox->setObjectName(QStringLiteral("mButtonBox"));
        mButtonBox->setOrientation(Qt::Horizontal);
        mButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        verticalLayout->addWidget(mButtonBox);

        QWidget::setTabOrder(mNameLineEdit, mGeometryTypeBox);
        QWidget::setTabOrder(mGeometryTypeBox, mGeometryWithZCheckBox);
        QWidget::setTabOrder(mGeometryWithZCheckBox, mGeometryWithMCheckBox);
        QWidget::setTabOrder(mGeometryWithMCheckBox, mCrsSelector);

        retranslateUi(QgsNewMemoryLayerDialogBase);
        QObject::connect(mButtonBox, SIGNAL(accepted()), QgsNewMemoryLayerDialogBase, SLOT(accept()));
        QObject::connect(mButtonBox, SIGNAL(rejected()), QgsNewMemoryLayerDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsNewMemoryLayerDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsNewMemoryLayerDialogBase)
    {
        QgsNewMemoryLayerDialogBase->setWindowTitle(QApplication::translate("QgsNewMemoryLayerDialogBase", "New Temporary Scratch Layer", Q_NULLPTR));
        mGeometryWithMCheckBox->setText(QApplication::translate("QgsNewMemoryLayerDialogBase", "Include M values", Q_NULLPTR));
        label_3->setText(QApplication::translate("QgsNewMemoryLayerDialogBase", "Geometry type", Q_NULLPTR));
        label->setText(QApplication::translate("QgsNewMemoryLayerDialogBase", "Layer name", Q_NULLPTR));
        mGeometryWithZCheckBox->setText(QApplication::translate("QgsNewMemoryLayerDialogBase", "Include Z dimension", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsNewMemoryLayerDialogBase", "<i><b>Warning:</b> Temporary scratch layers are not saved and will be discarded when QGIS is closed.</i>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsNewMemoryLayerDialogBase: public Ui_QgsNewMemoryLayerDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSNEWMEMORYLAYERDIALOGBASE_H
