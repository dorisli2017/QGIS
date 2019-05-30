/********************************************************************************
** Form generated from reading UI file 'qgsmeshtimeformatdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMESHTIMEFORMATDIALOG_H
#define UI_QGSMESHTIMEFORMATDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsMeshTimeFormatDialog
{
public:
    QVBoxLayout *verticalLayout_4;
    QComboBox *mUseTimeComboBox;
    QGroupBox *mAbsoluteTimeGroupBox;
    QVBoxLayout *verticalLayout_2;
    QLabel *refLabel;
    QDateTimeEdit *mReferenceDateTimeEdit;
    QLabel *label;
    QComboBox *mAbsoluteTimeFormatComboBox;
    QGroupBox *mRelativeTimeGroupBox;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QDoubleSpinBox *mOffsetHoursSpinBox;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QComboBox *mRelativeTimeFormatComboBox;

    void setupUi(QDialog *QgsMeshTimeFormatDialog)
    {
        if (QgsMeshTimeFormatDialog->objectName().isEmpty())
            QgsMeshTimeFormatDialog->setObjectName(QStringLiteral("QgsMeshTimeFormatDialog"));
        QgsMeshTimeFormatDialog->resize(271, 382);
        verticalLayout_4 = new QVBoxLayout(QgsMeshTimeFormatDialog);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        mUseTimeComboBox = new QComboBox(QgsMeshTimeFormatDialog);
        mUseTimeComboBox->setObjectName(QStringLiteral("mUseTimeComboBox"));

        verticalLayout_4->addWidget(mUseTimeComboBox);

        mAbsoluteTimeGroupBox = new QGroupBox(QgsMeshTimeFormatDialog);
        mAbsoluteTimeGroupBox->setObjectName(QStringLiteral("mAbsoluteTimeGroupBox"));
        mAbsoluteTimeGroupBox->setEnabled(true);
        mAbsoluteTimeGroupBox->setFlat(false);
        mAbsoluteTimeGroupBox->setCheckable(false);
        mAbsoluteTimeGroupBox->setChecked(false);
        verticalLayout_2 = new QVBoxLayout(mAbsoluteTimeGroupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        refLabel = new QLabel(mAbsoluteTimeGroupBox);
        refLabel->setObjectName(QStringLiteral("refLabel"));

        verticalLayout_2->addWidget(refLabel);

        mReferenceDateTimeEdit = new QDateTimeEdit(mAbsoluteTimeGroupBox);
        mReferenceDateTimeEdit->setObjectName(QStringLiteral("mReferenceDateTimeEdit"));
        mReferenceDateTimeEdit->setDateTime(QDateTime(QDate(2019, 1, 1), QTime(0, 0, 0)));
        mReferenceDateTimeEdit->setCalendarPopup(true);

        verticalLayout_2->addWidget(mReferenceDateTimeEdit);

        label = new QLabel(mAbsoluteTimeGroupBox);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        mAbsoluteTimeFormatComboBox = new QComboBox(mAbsoluteTimeGroupBox);
        mAbsoluteTimeFormatComboBox->setObjectName(QStringLiteral("mAbsoluteTimeFormatComboBox"));
        mAbsoluteTimeFormatComboBox->setEditable(false);

        verticalLayout_2->addWidget(mAbsoluteTimeFormatComboBox);


        verticalLayout_4->addWidget(mAbsoluteTimeGroupBox);

        mRelativeTimeGroupBox = new QGroupBox(QgsMeshTimeFormatDialog);
        mRelativeTimeGroupBox->setObjectName(QStringLiteral("mRelativeTimeGroupBox"));
        verticalLayout_3 = new QVBoxLayout(mRelativeTimeGroupBox);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        widget = new QWidget(mRelativeTimeGroupBox);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        mOffsetHoursSpinBox = new QDoubleSpinBox(widget);
        mOffsetHoursSpinBox->setObjectName(QStringLiteral("mOffsetHoursSpinBox"));
        mOffsetHoursSpinBox->setDecimals(1);
        mOffsetHoursSpinBox->setMinimum(-100000);
        mOffsetHoursSpinBox->setMaximum(100000);

        horizontalLayout->addWidget(mOffsetHoursSpinBox);


        verticalLayout_3->addWidget(widget);

        widget_2 = new QWidget(mRelativeTimeGroupBox);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        verticalLayout = new QVBoxLayout(widget_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_4 = new QLabel(widget_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        mRelativeTimeFormatComboBox = new QComboBox(widget_2);
        mRelativeTimeFormatComboBox->setObjectName(QStringLiteral("mRelativeTimeFormatComboBox"));
        mRelativeTimeFormatComboBox->setEditable(false);

        verticalLayout->addWidget(mRelativeTimeFormatComboBox);


        verticalLayout_3->addWidget(widget_2);


        verticalLayout_4->addWidget(mRelativeTimeGroupBox);


        retranslateUi(QgsMeshTimeFormatDialog);

        mUseTimeComboBox->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(QgsMeshTimeFormatDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsMeshTimeFormatDialog)
    {
        QgsMeshTimeFormatDialog->setWindowTitle(QApplication::translate("QgsMeshTimeFormatDialog", "Time Display Options", Q_NULLPTR));
        mUseTimeComboBox->clear();
        mUseTimeComboBox->insertItems(0, QStringList()
         << QApplication::translate("QgsMeshTimeFormatDialog", "Use absolute time", Q_NULLPTR)
         << QApplication::translate("QgsMeshTimeFormatDialog", "Use relative time", Q_NULLPTR)
        );
        mAbsoluteTimeGroupBox->setTitle(QApplication::translate("QgsMeshTimeFormatDialog", "Use absolute time ", Q_NULLPTR));
        refLabel->setText(QApplication::translate("QgsMeshTimeFormatDialog", "Reference date/time", Q_NULLPTR));
        label->setText(QApplication::translate("QgsMeshTimeFormatDialog", "Date/time Format", Q_NULLPTR));
        mAbsoluteTimeFormatComboBox->clear();
        mAbsoluteTimeFormatComboBox->insertItems(0, QStringList()
         << QApplication::translate("QgsMeshTimeFormatDialog", "dd.MM.yyyy hh:mm:ss", Q_NULLPTR)
         << QApplication::translate("QgsMeshTimeFormatDialog", "dd.MM.yyyy hh:mm", Q_NULLPTR)
         << QApplication::translate("QgsMeshTimeFormatDialog", "dd.MM.yyyy hh", Q_NULLPTR)
         << QApplication::translate("QgsMeshTimeFormatDialog", "dd.MM.yyyy", Q_NULLPTR)
         << QApplication::translate("QgsMeshTimeFormatDialog", "dd/MM/yyyy hh:mm:ss", Q_NULLPTR)
         << QApplication::translate("QgsMeshTimeFormatDialog", "dd/MM/yyyy hh:mm", Q_NULLPTR)
         << QApplication::translate("QgsMeshTimeFormatDialog", "dd/MM/yyyy hh", Q_NULLPTR)
         << QApplication::translate("QgsMeshTimeFormatDialog", "dd/MM/yyyy", Q_NULLPTR)
         << QApplication::translate("QgsMeshTimeFormatDialog", "MM/dd/yyyy hh:mm:ss", Q_NULLPTR)
         << QApplication::translate("QgsMeshTimeFormatDialog", "MM/dd/yyyy hh:mm", Q_NULLPTR)
         << QApplication::translate("QgsMeshTimeFormatDialog", "MM/dd/yyyy hh", Q_NULLPTR)
         << QApplication::translate("QgsMeshTimeFormatDialog", "MM/dd/yyyy", Q_NULLPTR)
        );
        mRelativeTimeGroupBox->setTitle(QApplication::translate("QgsMeshTimeFormatDialog", "Use relative time", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsMeshTimeFormatDialog", "Offset by", Q_NULLPTR));
        mOffsetHoursSpinBox->setSuffix(QApplication::translate("QgsMeshTimeFormatDialog", " hours", Q_NULLPTR));
        label_4->setText(QApplication::translate("QgsMeshTimeFormatDialog", "Time Format", Q_NULLPTR));
        mRelativeTimeFormatComboBox->clear();
        mRelativeTimeFormatComboBox->insertItems(0, QStringList()
         << QApplication::translate("QgsMeshTimeFormatDialog", "hh:mm:ss", Q_NULLPTR)
         << QApplication::translate("QgsMeshTimeFormatDialog", "hh:mm:ss.zzz", Q_NULLPTR)
         << QApplication::translate("QgsMeshTimeFormatDialog", "hh", Q_NULLPTR)
         << QApplication::translate("QgsMeshTimeFormatDialog", "d hh:mm:ss", Q_NULLPTR)
         << QApplication::translate("QgsMeshTimeFormatDialog", "d hh", Q_NULLPTR)
         << QApplication::translate("QgsMeshTimeFormatDialog", "d", Q_NULLPTR)
         << QApplication::translate("QgsMeshTimeFormatDialog", "ss", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class QgsMeshTimeFormatDialog: public Ui_QgsMeshTimeFormatDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMESHTIMEFORMATDIALOG_H
