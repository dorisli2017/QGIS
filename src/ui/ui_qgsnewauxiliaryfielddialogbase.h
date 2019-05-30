/********************************************************************************
** Form generated from reading UI file 'qgsnewauxiliaryfielddialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSNEWAUXILIARYFIELDDIALOGBASE_H
#define UI_QGSNEWAUXILIARYFIELDDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsNewAuxiliaryFieldDialogBase
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *mType;
    QLabel *label_2;
    QLineEdit *mName;

    void setupUi(QDialog *QgsNewAuxiliaryFieldDialogBase)
    {
        if (QgsNewAuxiliaryFieldDialogBase->objectName().isEmpty())
            QgsNewAuxiliaryFieldDialogBase->setObjectName(QStringLiteral("QgsNewAuxiliaryFieldDialogBase"));
        QgsNewAuxiliaryFieldDialogBase->resize(397, 159);
        buttonBox = new QDialogButtonBox(QgsNewAuxiliaryFieldDialogBase);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(50, 120, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        verticalLayoutWidget = new QWidget(QgsNewAuxiliaryFieldDialogBase);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 381, 101));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label);

        mType = new QComboBox(verticalLayoutWidget);
        mType->setObjectName(QStringLiteral("mType"));

        formLayout->setWidget(2, QFormLayout::FieldRole, mType);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_2);

        mName = new QLineEdit(verticalLayoutWidget);
        mName->setObjectName(QStringLiteral("mName"));

        formLayout->setWidget(4, QFormLayout::FieldRole, mName);


        verticalLayout->addLayout(formLayout);


        retranslateUi(QgsNewAuxiliaryFieldDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsNewAuxiliaryFieldDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsNewAuxiliaryFieldDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsNewAuxiliaryFieldDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsNewAuxiliaryFieldDialogBase)
    {
        QgsNewAuxiliaryFieldDialogBase->setWindowTitle(QApplication::translate("QgsNewAuxiliaryFieldDialogBase", "Auxiliary Storage : New Auxiliary Field", Q_NULLPTR));
        label_3->setText(QApplication::translate("QgsNewAuxiliaryFieldDialogBase", "New auxiliary field parameters", Q_NULLPTR));
        label->setText(QApplication::translate("QgsNewAuxiliaryFieldDialogBase", "Type", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsNewAuxiliaryFieldDialogBase", "Name", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsNewAuxiliaryFieldDialogBase: public Ui_QgsNewAuxiliaryFieldDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSNEWAUXILIARYFIELDDIALOGBASE_H
