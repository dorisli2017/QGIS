/********************************************************************************
** Form generated from reading UI file 'qgsgeometrycheckerresulttab.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSGEOMETRYCHECKERRESULTTAB_H
#define UI_QGSGEOMETRYCHECKERRESULTTAB_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsGeometryCheckerResultTab
{
public:
    QGridLayout *gridLayout_4;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_3;
    QLabel *labelResultTitle;
    QGroupBox *groupBoxRowSelectionBehavior;
    QGridLayout *gridLayout_2;
    QRadioButton *radioButtonFeature;
    QRadioButton *radioButtonError;
    QRadioButton *radioButtonDontMove;
    QCheckBox *checkBoxHighlight;
    QWidget *widgetFix;
    QGridLayout *gridLayout;
    QPushButton *pushButtonErrorResolutionSettings;
    QPushButton *pushButtonFixWithPrompt;
    QPushButton *pushButtonFixWithDefault;
    QPushButton *pushButtonOpenAttributeTable;
    QLabel *labelFixWithDefault;
    QProgressBar *progressBarFixErrors;
    QLabel *labelFixWithPrompt;
    QLabel *labelErrorResolutionSettings;
    QLabel *labelOpenAttributeTable;
    QWidget *widgetMergeAttribute;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelMergeAttribute;
    QTableWidget *tableWidgetErrors;
    QTreeWidget *treeWidgetMergeAttribute;
    QWidget *widgetRowSelectionBehavior;
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButtonExport;
    QSpacerItem *horizontalSpacer;
    QLabel *labelErrorCount;
    QButtonGroup *buttonGroupSelectAction;

    void setupUi(QWidget *QgsGeometryCheckerResultTab)
    {
        if (QgsGeometryCheckerResultTab->objectName().isEmpty())
            QgsGeometryCheckerResultTab->setObjectName(QStringLiteral("QgsGeometryCheckerResultTab"));
        QgsGeometryCheckerResultTab->resize(587, 548);
        gridLayout_4 = new QGridLayout(QgsGeometryCheckerResultTab);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(QgsGeometryCheckerResultTab);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 587, 548));
        gridLayout_3 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        labelResultTitle = new QLabel(scrollAreaWidgetContents);
        labelResultTitle->setObjectName(QStringLiteral("labelResultTitle"));

        gridLayout_3->addWidget(labelResultTitle, 0, 0, 1, 1);

        groupBoxRowSelectionBehavior = new QGroupBox(scrollAreaWidgetContents);
        groupBoxRowSelectionBehavior->setObjectName(QStringLiteral("groupBoxRowSelectionBehavior"));
        groupBoxRowSelectionBehavior->setFlat(true);
        gridLayout_2 = new QGridLayout(groupBoxRowSelectionBehavior);
        gridLayout_2->setSpacing(4);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        radioButtonFeature = new QRadioButton(groupBoxRowSelectionBehavior);
        buttonGroupSelectAction = new QButtonGroup(QgsGeometryCheckerResultTab);
        buttonGroupSelectAction->setObjectName(QStringLiteral("buttonGroupSelectAction"));
        buttonGroupSelectAction->addButton(radioButtonFeature);
        radioButtonFeature->setObjectName(QStringLiteral("radioButtonFeature"));

        gridLayout_2->addWidget(radioButtonFeature, 0, 1, 1, 1);

        radioButtonError = new QRadioButton(groupBoxRowSelectionBehavior);
        buttonGroupSelectAction->addButton(radioButtonError);
        radioButtonError->setObjectName(QStringLiteral("radioButtonError"));
        radioButtonError->setCheckable(true);
        radioButtonError->setChecked(true);

        gridLayout_2->addWidget(radioButtonError, 0, 0, 1, 1);

        radioButtonDontMove = new QRadioButton(groupBoxRowSelectionBehavior);
        buttonGroupSelectAction->addButton(radioButtonDontMove);
        radioButtonDontMove->setObjectName(QStringLiteral("radioButtonDontMove"));

        gridLayout_2->addWidget(radioButtonDontMove, 0, 2, 1, 1);

        checkBoxHighlight = new QCheckBox(groupBoxRowSelectionBehavior);
        checkBoxHighlight->setObjectName(QStringLiteral("checkBoxHighlight"));
        checkBoxHighlight->setChecked(true);

        gridLayout_2->addWidget(checkBoxHighlight, 1, 0, 1, 3);


        gridLayout_3->addWidget(groupBoxRowSelectionBehavior, 3, 0, 1, 1);

        widgetFix = new QWidget(scrollAreaWidgetContents);
        widgetFix->setObjectName(QStringLiteral("widgetFix"));
        widgetFix->setEnabled(true);
        gridLayout = new QGridLayout(widgetFix);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonErrorResolutionSettings = new QPushButton(widgetFix);
        pushButtonErrorResolutionSettings->setObjectName(QStringLiteral("pushButtonErrorResolutionSettings"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButtonErrorResolutionSettings->sizePolicy().hasHeightForWidth());
        pushButtonErrorResolutionSettings->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/mActionOptions.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonErrorResolutionSettings->setIcon(icon);

        gridLayout->addWidget(pushButtonErrorResolutionSettings, 3, 1, 1, 1);

        pushButtonFixWithPrompt = new QPushButton(widgetFix);
        pushButtonFixWithPrompt->setObjectName(QStringLiteral("pushButtonFixWithPrompt"));
        pushButtonFixWithPrompt->setEnabled(true);
        sizePolicy.setHeightForWidth(pushButtonFixWithPrompt->sizePolicy().hasHeightForWidth());
        pushButtonFixWithPrompt->setSizePolicy(sizePolicy);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/mIconSuccess.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonFixWithPrompt->setIcon(icon1);

        gridLayout->addWidget(pushButtonFixWithPrompt, 2, 1, 1, 1);

        pushButtonFixWithDefault = new QPushButton(widgetFix);
        pushButtonFixWithDefault->setObjectName(QStringLiteral("pushButtonFixWithDefault"));
        pushButtonFixWithDefault->setEnabled(true);
        sizePolicy.setHeightForWidth(pushButtonFixWithDefault->sizePolicy().hasHeightForWidth());
        pushButtonFixWithDefault->setSizePolicy(sizePolicy);
        pushButtonFixWithDefault->setIcon(icon1);

        gridLayout->addWidget(pushButtonFixWithDefault, 1, 1, 1, 1);

        pushButtonOpenAttributeTable = new QPushButton(widgetFix);
        pushButtonOpenAttributeTable->setObjectName(QStringLiteral("pushButtonOpenAttributeTable"));
        pushButtonOpenAttributeTable->setEnabled(false);
        sizePolicy.setHeightForWidth(pushButtonOpenAttributeTable->sizePolicy().hasHeightForWidth());
        pushButtonOpenAttributeTable->setSizePolicy(sizePolicy);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/themes/default/mActionFromSelectedFeature.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonOpenAttributeTable->setIcon(icon2);

        gridLayout->addWidget(pushButtonOpenAttributeTable, 0, 1, 1, 1);

        labelFixWithDefault = new QLabel(widgetFix);
        labelFixWithDefault->setObjectName(QStringLiteral("labelFixWithDefault"));

        gridLayout->addWidget(labelFixWithDefault, 1, 2, 1, 1);

        progressBarFixErrors = new QProgressBar(widgetFix);
        progressBarFixErrors->setObjectName(QStringLiteral("progressBarFixErrors"));
        progressBarFixErrors->setValue(24);

        gridLayout->addWidget(progressBarFixErrors, 1, 3, 1, 1);

        labelFixWithPrompt = new QLabel(widgetFix);
        labelFixWithPrompt->setObjectName(QStringLiteral("labelFixWithPrompt"));

        gridLayout->addWidget(labelFixWithPrompt, 2, 2, 1, 2);

        labelErrorResolutionSettings = new QLabel(widgetFix);
        labelErrorResolutionSettings->setObjectName(QStringLiteral("labelErrorResolutionSettings"));

        gridLayout->addWidget(labelErrorResolutionSettings, 3, 2, 1, 2);

        labelOpenAttributeTable = new QLabel(widgetFix);
        labelOpenAttributeTable->setObjectName(QStringLiteral("labelOpenAttributeTable"));

        gridLayout->addWidget(labelOpenAttributeTable, 0, 2, 1, 2);


        gridLayout_3->addWidget(widgetFix, 5, 0, 1, 1);

        widgetMergeAttribute = new QWidget(scrollAreaWidgetContents);
        widgetMergeAttribute->setObjectName(QStringLiteral("widgetMergeAttribute"));
        horizontalLayout_2 = new QHBoxLayout(widgetMergeAttribute);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        labelMergeAttribute = new QLabel(widgetMergeAttribute);
        labelMergeAttribute->setObjectName(QStringLiteral("labelMergeAttribute"));

        horizontalLayout_2->addWidget(labelMergeAttribute);


        gridLayout_3->addWidget(widgetMergeAttribute, 6, 0, 1, 1);

        tableWidgetErrors = new QTableWidget(scrollAreaWidgetContents);
        if (tableWidgetErrors->columnCount() < 6)
            tableWidgetErrors->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetErrors->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetErrors->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetErrors->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetErrors->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidgetErrors->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidgetErrors->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        tableWidgetErrors->setObjectName(QStringLiteral("tableWidgetErrors"));
        tableWidgetErrors->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidgetErrors->setSelectionMode(QAbstractItemView::ExtendedSelection);
        tableWidgetErrors->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidgetErrors->setSortingEnabled(true);
        tableWidgetErrors->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        tableWidgetErrors->horizontalHeader()->setStretchLastSection(true);
        tableWidgetErrors->verticalHeader()->setVisible(false);

        gridLayout_3->addWidget(tableWidgetErrors, 1, 0, 1, 1);

        treeWidgetMergeAttribute = new QTreeWidget(scrollAreaWidgetContents);
        treeWidgetMergeAttribute->setObjectName(QStringLiteral("treeWidgetMergeAttribute"));

        gridLayout_3->addWidget(treeWidgetMergeAttribute, 7, 0, 1, 1);

        widgetRowSelectionBehavior = new QWidget(scrollAreaWidgetContents);
        widgetRowSelectionBehavior->setObjectName(QStringLiteral("widgetRowSelectionBehavior"));
        horizontalLayout = new QHBoxLayout(widgetRowSelectionBehavior);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);

        gridLayout_3->addWidget(widgetRowSelectionBehavior, 4, 0, 1, 1);

        widget = new QWidget(scrollAreaWidgetContents);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButtonExport = new QPushButton(widget);
        pushButtonExport->setObjectName(QStringLiteral("pushButtonExport"));

        horizontalLayout_3->addWidget(pushButtonExport);

        horizontalSpacer = new QSpacerItem(280, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        labelErrorCount = new QLabel(widget);
        labelErrorCount->setObjectName(QStringLiteral("labelErrorCount"));
        labelErrorCount->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(labelErrorCount);


        gridLayout_3->addWidget(widget, 2, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_4->addWidget(scrollArea, 0, 0, 1, 1);

        QWidget::setTabOrder(scrollArea, tableWidgetErrors);
        QWidget::setTabOrder(tableWidgetErrors, pushButtonExport);
        QWidget::setTabOrder(pushButtonExport, radioButtonError);
        QWidget::setTabOrder(radioButtonError, radioButtonFeature);
        QWidget::setTabOrder(radioButtonFeature, radioButtonDontMove);
        QWidget::setTabOrder(radioButtonDontMove, checkBoxHighlight);
        QWidget::setTabOrder(checkBoxHighlight, pushButtonOpenAttributeTable);
        QWidget::setTabOrder(pushButtonOpenAttributeTable, pushButtonFixWithDefault);
        QWidget::setTabOrder(pushButtonFixWithDefault, pushButtonFixWithPrompt);
        QWidget::setTabOrder(pushButtonFixWithPrompt, pushButtonErrorResolutionSettings);

        retranslateUi(QgsGeometryCheckerResultTab);

        QMetaObject::connectSlotsByName(QgsGeometryCheckerResultTab);
    } // setupUi

    void retranslateUi(QWidget *QgsGeometryCheckerResultTab)
    {
        QgsGeometryCheckerResultTab->setWindowTitle(QApplication::translate("QgsGeometryCheckerResultTab", "Form", Q_NULLPTR));
        labelResultTitle->setText(QApplication::translate("QgsGeometryCheckerResultTab", "<b>Geometry check result:</b>", Q_NULLPTR));
        groupBoxRowSelectionBehavior->setTitle(QApplication::translate("QgsGeometryCheckerResultTab", "When a row is selected, move canvas to", Q_NULLPTR));
        radioButtonFeature->setText(QApplication::translate("QgsGeometryCheckerResultTab", "Feature", Q_NULLPTR));
        radioButtonError->setText(QApplication::translate("QgsGeometryCheckerResultTab", "Error", Q_NULLPTR));
        radioButtonDontMove->setText(QApplication::translate("QgsGeometryCheckerResultTab", "Don't &move", Q_NULLPTR));
        checkBoxHighlight->setText(QApplication::translate("QgsGeometryCheckerResultTab", "Highlight contour of selected features", Q_NULLPTR));
        labelFixWithDefault->setText(QApplication::translate("QgsGeometryCheckerResultTab", "Fix selected errors using default resolution", Q_NULLPTR));
        labelFixWithPrompt->setText(QApplication::translate("QgsGeometryCheckerResultTab", "Fix selected errors, prompt for resolution method", Q_NULLPTR));
        labelErrorResolutionSettings->setText(QApplication::translate("QgsGeometryCheckerResultTab", "Error resolution settings", Q_NULLPTR));
        labelOpenAttributeTable->setText(QApplication::translate("QgsGeometryCheckerResultTab", "Show selected features in attribute table", Q_NULLPTR));
        labelMergeAttribute->setText(QApplication::translate("QgsGeometryCheckerResultTab", "Attribute to use when merging features by attribute value:", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetErrors->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("QgsGeometryCheckerResultTab", "Layer", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetErrors->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("QgsGeometryCheckerResultTab", "Object ID", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetErrors->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("QgsGeometryCheckerResultTab", "Error", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetErrors->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("QgsGeometryCheckerResultTab", "Coordinates", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidgetErrors->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("QgsGeometryCheckerResultTab", "Value", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidgetErrors->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("QgsGeometryCheckerResultTab", "Resolution", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = treeWidgetMergeAttribute->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("QgsGeometryCheckerResultTab", "Attribute", Q_NULLPTR));
        ___qtreewidgetitem->setText(0, QApplication::translate("QgsGeometryCheckerResultTab", "Layer", Q_NULLPTR));
        pushButtonExport->setText(QApplication::translate("QgsGeometryCheckerResultTab", "Export", Q_NULLPTR));
        labelErrorCount->setText(QApplication::translate("QgsGeometryCheckerResultTab", "Total errors: 0", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsGeometryCheckerResultTab: public Ui_QgsGeometryCheckerResultTab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSGEOMETRYCHECKERRESULTTAB_H
