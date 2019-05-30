/********************************************************************************
** Form generated from reading UI file 'qgsmeasurebase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMEASUREBASE_H
#define UI_QGSMEASUREBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include "qgscollapsiblegroupbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsMeasureBase
{
public:
    QGridLayout *gridLayout;
    QLabel *textLabel2;
    QLineEdit *editTotal;
    QSpacerItem *spacerItem;
    QComboBox *mUnitsCombo;
    QTreeWidget *mTable;
    QDialogButtonBox *buttonBox;
    QgsCollapsibleGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLabel *mNotesLabel;
    QRadioButton *mCartesian;
    QRadioButton *mEllipsoidal;

    void setupUi(QDialog *QgsMeasureBase)
    {
        if (QgsMeasureBase->objectName().isEmpty())
            QgsMeasureBase->setObjectName(QStringLiteral("QgsMeasureBase"));
        QgsMeasureBase->resize(359, 301);
        QgsMeasureBase->setBaseSize(QSize(150, 200));
        QIcon icon;
        icon.addFile(QStringLiteral("."), QSize(), QIcon::Normal, QIcon::Off);
        QgsMeasureBase->setWindowIcon(icon);
        gridLayout = new QGridLayout(QgsMeasureBase);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(9, 9, 9, 9);
        textLabel2 = new QLabel(QgsMeasureBase);
        textLabel2->setObjectName(QStringLiteral("textLabel2"));

        gridLayout->addWidget(textLabel2, 4, 0, 1, 1);

        editTotal = new QLineEdit(QgsMeasureBase);
        editTotal->setObjectName(QStringLiteral("editTotal"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        editTotal->setFont(font);
        editTotal->setAlignment(Qt::AlignRight);
        editTotal->setReadOnly(true);

        gridLayout->addWidget(editTotal, 4, 2, 1, 1);

        spacerItem = new QSpacerItem(41, 25, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 4, 1, 1, 1);

        mUnitsCombo = new QComboBox(QgsMeasureBase);
        mUnitsCombo->setObjectName(QStringLiteral("mUnitsCombo"));

        gridLayout->addWidget(mUnitsCombo, 4, 3, 1, 1);

        mTable = new QTreeWidget(QgsMeasureBase);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setTextAlignment(0, Qt::AlignTrailing|Qt::AlignVCenter);
        mTable->setHeaderItem(__qtreewidgetitem);
        mTable->setObjectName(QStringLiteral("mTable"));
        mTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        mTable->setRootIsDecorated(false);
        mTable->setColumnCount(1);

        gridLayout->addWidget(mTable, 2, 0, 1, 4);

        buttonBox = new QDialogButtonBox(QgsMeasureBase);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Help);

        gridLayout->addWidget(buttonBox, 7, 0, 1, 4);

        groupBox = new QgsCollapsibleGroupBox(QgsMeasureBase);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        mNotesLabel = new QLabel(groupBox);
        mNotesLabel->setObjectName(QStringLiteral("mNotesLabel"));
        mNotesLabel->setWordWrap(true);

        verticalLayout->addWidget(mNotesLabel);


        gridLayout->addWidget(groupBox, 6, 0, 1, 4);

        mCartesian = new QRadioButton(QgsMeasureBase);
        mCartesian->setObjectName(QStringLiteral("mCartesian"));
        mCartesian->setChecked(false);

        gridLayout->addWidget(mCartesian, 5, 0, 1, 1);

        mEllipsoidal = new QRadioButton(QgsMeasureBase);
        mEllipsoidal->setObjectName(QStringLiteral("mEllipsoidal"));
        mEllipsoidal->setChecked(true);

        gridLayout->addWidget(mEllipsoidal, 5, 2, 1, 1);

#ifndef QT_NO_SHORTCUT
        textLabel2->setBuddy(editTotal);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(mTable, editTotal);

        retranslateUi(QgsMeasureBase);

        QMetaObject::connectSlotsByName(QgsMeasureBase);
    } // setupUi

    void retranslateUi(QDialog *QgsMeasureBase)
    {
        QgsMeasureBase->setWindowTitle(QApplication::translate("QgsMeasureBase", "Measure", Q_NULLPTR));
        textLabel2->setText(QApplication::translate("QgsMeasureBase", "Total", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = mTable->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("QgsMeasureBase", "Segments", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("QgsMeasureBase", "Info", Q_NULLPTR));
        mNotesLabel->setText(QString());
        mCartesian->setText(QApplication::translate("QgsMeasureBase", "Cartesian", Q_NULLPTR));
        mEllipsoidal->setText(QApplication::translate("QgsMeasureBase", "Ellipsoidal", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsMeasureBase: public Ui_QgsMeasureBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMEASUREBASE_H
