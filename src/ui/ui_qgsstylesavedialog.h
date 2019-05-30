/********************************************************************************
** Form generated from reading UI file 'qgsstylesavedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSSTYLESAVEDIALOG_H
#define UI_QGSSTYLESAVEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QgsStyleSaveDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_1;
    QLineEdit *mName;
    QCheckBox *mFavorite;
    QLabel *label_101;
    QLineEdit *mTags;
    QLabel *label_10;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsStyleSaveDialog)
    {
        if (QgsStyleSaveDialog->objectName().isEmpty())
            QgsStyleSaveDialog->setObjectName(QStringLiteral("QgsStyleSaveDialog"));
        QgsStyleSaveDialog->resize(489, 225);
        verticalLayout = new QVBoxLayout(QgsStyleSaveDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_1 = new QLabel(QgsStyleSaveDialog);
        label_1->setObjectName(QStringLiteral("label_1"));

        gridLayout->addWidget(label_1, 0, 0, 1, 1);

        mName = new QLineEdit(QgsStyleSaveDialog);
        mName->setObjectName(QStringLiteral("mName"));

        gridLayout->addWidget(mName, 0, 1, 1, 1);

        mFavorite = new QCheckBox(QgsStyleSaveDialog);
        mFavorite->setObjectName(QStringLiteral("mFavorite"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mFavorite->sizePolicy().hasHeightForWidth());
        mFavorite->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mFavorite, 3, 0, 1, 2);

        label_101 = new QLabel(QgsStyleSaveDialog);
        label_101->setObjectName(QStringLiteral("label_101"));

        gridLayout->addWidget(label_101, 1, 0, 1, 1);

        mTags = new QLineEdit(QgsStyleSaveDialog);
        mTags->setObjectName(QStringLiteral("mTags"));

        gridLayout->addWidget(mTags, 1, 1, 1, 1);

        label_10 = new QLabel(QgsStyleSaveDialog);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout->addWidget(label_10, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(QgsStyleSaveDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(mName, mTags);
        QWidget::setTabOrder(mTags, mFavorite);

        retranslateUi(QgsStyleSaveDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsStyleSaveDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsStyleSaveDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsStyleSaveDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsStyleSaveDialog)
    {
        QgsStyleSaveDialog->setWindowTitle(QApplication::translate("QgsStyleSaveDialog", "Save New Style", Q_NULLPTR));
        label_1->setText(QApplication::translate("QgsStyleSaveDialog", "Name", Q_NULLPTR));
        mFavorite->setText(QApplication::translate("QgsStyleSaveDialog", "Add to favorites", Q_NULLPTR));
        label_101->setText(QApplication::translate("QgsStyleSaveDialog", "Tag(s)", Q_NULLPTR));
        label_10->setText(QApplication::translate("QgsStyleSaveDialog", "Tip: separate multiple tags with commas", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsStyleSaveDialog: public Ui_QgsStyleSaveDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSSTYLESAVEDIALOG_H
