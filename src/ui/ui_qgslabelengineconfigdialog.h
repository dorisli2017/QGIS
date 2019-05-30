/********************************************************************************
** Form generated from reading UI file 'qgslabelengineconfigdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLABELENGINECONFIGDIALOG_H
#define UI_QGSLABELENGINECONFIGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QgsLabelEngineConfigDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *cboSearchMethod;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QSpinBox *spinCandPoint;
    QLabel *label_3;
    QSpinBox *spinCandLine;
    QLabel *label_4;
    QSpinBox *spinCandPolygon;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout_2;
    QLabel *label_5;
    QComboBox *mTextRenderFormatComboBox;
    QCheckBox *chkShowPartialsLabels;
    QCheckBox *chkShowAllLabels;
    QCheckBox *chkShowCandidates;
    QSpacerItem *verticalSpacer_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsLabelEngineConfigDialog)
    {
        if (QgsLabelEngineConfigDialog->objectName().isEmpty())
            QgsLabelEngineConfigDialog->setObjectName(QStringLiteral("QgsLabelEngineConfigDialog"));
        QgsLabelEngineConfigDialog->resize(444, 358);
        verticalLayout = new QVBoxLayout(QgsLabelEngineConfigDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(QgsLabelEngineConfigDialog);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label);

        cboSearchMethod = new QComboBox(QgsLabelEngineConfigDialog);
        cboSearchMethod->setObjectName(QStringLiteral("cboSearchMethod"));

        horizontalLayout->addWidget(cboSearchMethod);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        groupBox = new QGroupBox(QgsLabelEngineConfigDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        groupBox->setMaximumSize(QSize(16777215, 16777215));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        spinCandPoint = new QSpinBox(groupBox);
        spinCandPoint->setObjectName(QStringLiteral("spinCandPoint"));
        spinCandPoint->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinCandPoint->setMinimum(1);
        spinCandPoint->setMaximum(999);

        gridLayout->addWidget(spinCandPoint, 0, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        spinCandLine = new QSpinBox(groupBox);
        spinCandLine->setObjectName(QStringLiteral("spinCandLine"));
        spinCandLine->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinCandLine->setMinimum(1);
        spinCandLine->setMaximum(999);

        gridLayout->addWidget(spinCandLine, 1, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        spinCandPolygon = new QSpinBox(groupBox);
        spinCandPolygon->setObjectName(QStringLiteral("spinCandPolygon"));
        spinCandPolygon->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinCandPolygon->setMinimum(1);
        spinCandPolygon->setMaximum(999);

        gridLayout->addWidget(spinCandPolygon, 2, 1, 1, 1);


        horizontalLayout_2->addWidget(groupBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_5 = new QLabel(QgsLabelEngineConfigDialog);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_2->addWidget(label_5, 0, 0, 1, 1);

        mTextRenderFormatComboBox = new QComboBox(QgsLabelEngineConfigDialog);
        mTextRenderFormatComboBox->setObjectName(QStringLiteral("mTextRenderFormatComboBox"));

        gridLayout_2->addWidget(mTextRenderFormatComboBox, 0, 1, 1, 1);

        chkShowPartialsLabels = new QCheckBox(QgsLabelEngineConfigDialog);
        chkShowPartialsLabels->setObjectName(QStringLiteral("chkShowPartialsLabels"));

        gridLayout_2->addWidget(chkShowPartialsLabels, 1, 0, 1, 2);

        chkShowAllLabels = new QCheckBox(QgsLabelEngineConfigDialog);
        chkShowAllLabels->setObjectName(QStringLiteral("chkShowAllLabels"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(chkShowAllLabels->sizePolicy().hasHeightForWidth());
        chkShowAllLabels->setSizePolicy(sizePolicy2);
        chkShowAllLabels->setInputMethodHints(Qt::ImhNone);

        gridLayout_2->addWidget(chkShowAllLabels, 2, 0, 1, 2);

        chkShowCandidates = new QCheckBox(QgsLabelEngineConfigDialog);
        chkShowCandidates->setObjectName(QStringLiteral("chkShowCandidates"));

        gridLayout_2->addWidget(chkShowCandidates, 3, 0, 1, 2);

        gridLayout_2->setColumnStretch(1, 1);

        verticalLayout->addLayout(gridLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        buttonBox = new QDialogButtonBox(QgsLabelEngineConfigDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok|QDialogButtonBox::RestoreDefaults);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(cboSearchMethod, spinCandPoint);
        QWidget::setTabOrder(spinCandPoint, spinCandLine);
        QWidget::setTabOrder(spinCandLine, spinCandPolygon);
        QWidget::setTabOrder(spinCandPolygon, mTextRenderFormatComboBox);
        QWidget::setTabOrder(mTextRenderFormatComboBox, chkShowPartialsLabels);
        QWidget::setTabOrder(chkShowPartialsLabels, chkShowAllLabels);
        QWidget::setTabOrder(chkShowAllLabels, chkShowCandidates);

        retranslateUi(QgsLabelEngineConfigDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsLabelEngineConfigDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsLabelEngineConfigDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsLabelEngineConfigDialog)
    {
        QgsLabelEngineConfigDialog->setWindowTitle(QApplication::translate("QgsLabelEngineConfigDialog", "Automated Placement Engine", Q_NULLPTR));
        label->setText(QApplication::translate("QgsLabelEngineConfigDialog", "Search method", Q_NULLPTR));
        cboSearchMethod->clear();
        cboSearchMethod->insertItems(0, QStringList()
         << QApplication::translate("QgsLabelEngineConfigDialog", "Chain (fast)", Q_NULLPTR)
         << QApplication::translate("QgsLabelEngineConfigDialog", "Popmusic Tabu", Q_NULLPTR)
         << QApplication::translate("QgsLabelEngineConfigDialog", "Popmusic Chain", Q_NULLPTR)
         << QApplication::translate("QgsLabelEngineConfigDialog", "Popmusic Tabu Chain", Q_NULLPTR)
         << QApplication::translate("QgsLabelEngineConfigDialog", "FALP (fastest)", Q_NULLPTR)
         << QApplication::translate("QgsLabelEngineConfigDialog", "SIMPLE", Q_NULLPTR)
         << QApplication::translate("QgsLabelEngineConfigDialog", "MIS", Q_NULLPTR)
         << QApplication::translate("QgsLabelEngineConfigDialog", "MAXHS", Q_NULLPTR)
         << QApplication::translate("QgsLabelEngineConfigDialog", "KAMIS", Q_NULLPTR)
        );
        groupBox->setTitle(QApplication::translate("QgsLabelEngineConfigDialog", "Number of candidates", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsLabelEngineConfigDialog", "Point", Q_NULLPTR));
        label_3->setText(QApplication::translate("QgsLabelEngineConfigDialog", "Line", Q_NULLPTR));
        label_4->setText(QApplication::translate("QgsLabelEngineConfigDialog", "Polygon", Q_NULLPTR));
        label_5->setText(QApplication::translate("QgsLabelEngineConfigDialog", "Text rendering", Q_NULLPTR));
        chkShowPartialsLabels->setText(QApplication::translate("QgsLabelEngineConfigDialog", "Allow truncated labels on edges of map", Q_NULLPTR));
        chkShowAllLabels->setText(QApplication::translate("QgsLabelEngineConfigDialog", "Show all labels for all layers (i.e. including colliding objects)", Q_NULLPTR));
        chkShowCandidates->setText(QApplication::translate("QgsLabelEngineConfigDialog", "Show candidates (for debugging)", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsLabelEngineConfigDialog: public Ui_QgsLabelEngineConfigDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLABELENGINECONFIGDIALOG_H
