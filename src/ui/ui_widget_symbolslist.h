/********************************************************************************
** Form generated from reading UI file 'widget_symbolslist.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_SYMBOLSLIST_H
#define UI_WIDGET_SYMBOLSLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscolorbutton.h"
#include "qgsdoublespinbox.h"
#include "qgsopacitywidget.h"
#include "qgspropertyoverridebutton.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_SymbolsListWidget
{
public:
    QGridLayout *gridLayout_4;
    QFrame *line;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *groupsCombo;
    QToolButton *openStyleManagerButton;
    QStackedWidget *mSymbolViewStackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_2;
    QListView *viewSymbols;
    QWidget *page2;
    QVBoxLayout *verticalLayout_3;
    QTreeView *mSymbolTreeView;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_7;
    QToolButton *mButtonIconView;
    QToolButton *mButtonListView;
    QLabel *lblSymbolName;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnSaveSymbol;
    QPushButton *btnAdvanced;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *mTransparencyLabel;
    QLabel *mSymbolUnitLabel;
    QgsUnitSelectionWidget *mSymbolUnitWidget;
    QLabel *label_5;
    QgsOpacityWidget *mOpacityWidget;
    QgsColorButton *btnColor;
    QStackedWidget *stackedWidget;
    QWidget *pageMarker;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QgsDoubleSpinBox *spinSize;
    QgsPropertyOverrideButton *mSizeDDBtn;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_5;
    QgsDoubleSpinBox *spinAngle;
    QgsPropertyOverrideButton *mRotationDDBtn;
    QWidget *pageLine;
    QGridLayout *gridLayout_3;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_6;
    QgsDoubleSpinBox *spinWidth;
    QgsPropertyOverrideButton *mWidthDDBtn;
    QWidget *pageFill;
    QHBoxLayout *horizontalLayout_2;
    QButtonGroup *buttonGroup;

    void setupUi(QWidget *SymbolsListWidget)
    {
        if (SymbolsListWidget->objectName().isEmpty())
            SymbolsListWidget->setObjectName(QStringLiteral("SymbolsListWidget"));
        SymbolsListWidget->resize(386, 619);
        gridLayout_4 = new QGridLayout(SymbolsListWidget);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setVerticalSpacing(4);
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        line = new QFrame(SymbolsListWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(line, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        groupsCombo = new QComboBox(SymbolsListWidget);
        groupsCombo->setObjectName(QStringLiteral("groupsCombo"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupsCombo->sizePolicy().hasHeightForWidth());
        groupsCombo->setSizePolicy(sizePolicy);
        groupsCombo->setMinimumSize(QSize(50, 0));
        groupsCombo->setEditable(true);

        horizontalLayout_3->addWidget(groupsCombo);

        openStyleManagerButton = new QToolButton(SymbolsListWidget);
        openStyleManagerButton->setObjectName(QStringLiteral("openStyleManagerButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/mActionStyleManager.svg"), QSize(), QIcon::Normal, QIcon::Off);
        openStyleManagerButton->setIcon(icon);
        openStyleManagerButton->setAutoRaise(true);

        horizontalLayout_3->addWidget(openStyleManagerButton);


        gridLayout_4->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        mSymbolViewStackedWidget = new QStackedWidget(SymbolsListWidget);
        mSymbolViewStackedWidget->setObjectName(QStringLiteral("mSymbolViewStackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        verticalLayout_2 = new QVBoxLayout(page);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        viewSymbols = new QListView(page);
        viewSymbols->setObjectName(QStringLiteral("viewSymbols"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(2);
        sizePolicy1.setHeightForWidth(viewSymbols->sizePolicy().hasHeightForWidth());
        viewSymbols->setSizePolicy(sizePolicy1);
        viewSymbols->setIconSize(QSize(77, 70));
        viewSymbols->setTextElideMode(Qt::ElideNone);
        viewSymbols->setFlow(QListView::LeftToRight);
        viewSymbols->setResizeMode(QListView::Adjust);
        viewSymbols->setSpacing(5);
        viewSymbols->setViewMode(QListView::IconMode);
        viewSymbols->setUniformItemSizes(false);
        viewSymbols->setWordWrap(true);

        verticalLayout_2->addWidget(viewSymbols);

        mSymbolViewStackedWidget->addWidget(page);
        page2 = new QWidget();
        page2->setObjectName(QStringLiteral("page2"));
        verticalLayout_3 = new QVBoxLayout(page2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        mSymbolTreeView = new QTreeView(page2);
        mSymbolTreeView->setObjectName(QStringLiteral("mSymbolTreeView"));

        verticalLayout_3->addWidget(mSymbolTreeView);

        mSymbolViewStackedWidget->addWidget(page2);

        gridLayout_4->addWidget(mSymbolViewStackedWidget, 3, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 2, -1, -1);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(-1, -1, 0, -1);
        mButtonIconView = new QToolButton(SymbolsListWidget);
        buttonGroup = new QButtonGroup(SymbolsListWidget);
        buttonGroup->setObjectName(QStringLiteral("buttonGroup"));
        buttonGroup->addButton(mButtonIconView);
        mButtonIconView->setObjectName(QStringLiteral("mButtonIconView"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/mActionIconView.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonIconView->setIcon(icon1);
        mButtonIconView->setCheckable(true);
        mButtonIconView->setAutoRaise(true);

        horizontalLayout_7->addWidget(mButtonIconView);

        mButtonListView = new QToolButton(SymbolsListWidget);
        buttonGroup->addButton(mButtonListView);
        mButtonListView->setObjectName(QStringLiteral("mButtonListView"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/themes/default/mActionOpenTable.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonListView->setIcon(icon2);
        mButtonListView->setCheckable(true);
        mButtonListView->setAutoRaise(true);

        horizontalLayout_7->addWidget(mButtonListView);


        horizontalLayout_4->addLayout(horizontalLayout_7);

        lblSymbolName = new QLabel(SymbolsListWidget);
        lblSymbolName->setObjectName(QStringLiteral("lblSymbolName"));

        horizontalLayout_4->addWidget(lblSymbolName);

        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        btnSaveSymbol = new QPushButton(SymbolsListWidget);
        btnSaveSymbol->setObjectName(QStringLiteral("btnSaveSymbol"));

        horizontalLayout_4->addWidget(btnSaveSymbol);

        btnAdvanced = new QPushButton(SymbolsListWidget);
        btnAdvanced->setObjectName(QStringLiteral("btnAdvanced"));

        horizontalLayout_4->addWidget(btnAdvanced);


        gridLayout_4->addLayout(horizontalLayout_4, 4, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mTransparencyLabel = new QLabel(SymbolsListWidget);
        mTransparencyLabel->setObjectName(QStringLiteral("mTransparencyLabel"));

        gridLayout->addWidget(mTransparencyLabel, 1, 0, 1, 1);

        mSymbolUnitLabel = new QLabel(SymbolsListWidget);
        mSymbolUnitLabel->setObjectName(QStringLiteral("mSymbolUnitLabel"));

        gridLayout->addWidget(mSymbolUnitLabel, 0, 0, 1, 1);

        mSymbolUnitWidget = new QgsUnitSelectionWidget(SymbolsListWidget);
        mSymbolUnitWidget->setObjectName(QStringLiteral("mSymbolUnitWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mSymbolUnitWidget->sizePolicy().hasHeightForWidth());
        mSymbolUnitWidget->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(mSymbolUnitWidget, 0, 1, 1, 1);

        label_5 = new QLabel(SymbolsListWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        mOpacityWidget = new QgsOpacityWidget(SymbolsListWidget);
        mOpacityWidget->setObjectName(QStringLiteral("mOpacityWidget"));
        mOpacityWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(mOpacityWidget, 1, 1, 1, 1);

        btnColor = new QgsColorButton(SymbolsListWidget);
        btnColor->setObjectName(QStringLiteral("btnColor"));
        sizePolicy.setHeightForWidth(btnColor->sizePolicy().hasHeightForWidth());
        btnColor->setSizePolicy(sizePolicy);
        btnColor->setMinimumSize(QSize(0, 0));
        btnColor->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(btnColor, 3, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        stackedWidget = new QStackedWidget(SymbolsListWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy3);
        pageMarker = new QWidget();
        pageMarker->setObjectName(QStringLiteral("pageMarker"));
        gridLayout_2 = new QGridLayout(pageMarker);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(pageMarker);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy4);

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 5, -1, -1);
        spinSize = new QgsDoubleSpinBox(pageMarker);
        spinSize->setObjectName(QStringLiteral("spinSize"));
        spinSize->setDecimals(5);
        spinSize->setMaximum(1e+8);
        spinSize->setSingleStep(0.2);
        spinSize->setValue(1);
        spinSize->setProperty("showClearButton", QVariant(false));

        horizontalLayout->addWidget(spinSize);

        mSizeDDBtn = new QgsPropertyOverrideButton(pageMarker);
        mSizeDDBtn->setObjectName(QStringLiteral("mSizeDDBtn"));

        horizontalLayout->addWidget(mSizeDDBtn);


        gridLayout_2->addLayout(horizontalLayout, 0, 1, 1, 1);

        label_3 = new QLabel(pageMarker);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy4.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy4);

        gridLayout_2->addWidget(label_3, 1, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, 0, -1, -1);
        spinAngle = new QgsDoubleSpinBox(pageMarker);
        spinAngle->setObjectName(QStringLiteral("spinAngle"));
        spinAngle->setWrapping(true);
        spinAngle->setDecimals(2);
        spinAngle->setMinimum(-360);
        spinAngle->setMaximum(360);
        spinAngle->setSingleStep(1);

        horizontalLayout_5->addWidget(spinAngle);

        mRotationDDBtn = new QgsPropertyOverrideButton(pageMarker);
        mRotationDDBtn->setObjectName(QStringLiteral("mRotationDDBtn"));

        horizontalLayout_5->addWidget(mRotationDDBtn);


        gridLayout_2->addLayout(horizontalLayout_5, 1, 1, 1, 1);

        stackedWidget->addWidget(pageMarker);
        pageLine = new QWidget();
        pageLine->setObjectName(QStringLiteral("pageLine"));
        gridLayout_3 = new QGridLayout(pageLine);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(pageLine);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy4.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy4);

        gridLayout_3->addWidget(label_4, 0, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        spinWidth = new QgsDoubleSpinBox(pageLine);
        spinWidth->setObjectName(QStringLiteral("spinWidth"));
        spinWidth->setDecimals(5);
        spinWidth->setMaximum(99999);
        spinWidth->setSingleStep(0.2);
        spinWidth->setValue(1);
        spinWidth->setProperty("showClearButton", QVariant(false));

        horizontalLayout_6->addWidget(spinWidth);

        mWidthDDBtn = new QgsPropertyOverrideButton(pageLine);
        mWidthDDBtn->setObjectName(QStringLiteral("mWidthDDBtn"));

        horizontalLayout_6->addWidget(mWidthDDBtn);


        gridLayout_3->addLayout(horizontalLayout_6, 0, 1, 1, 1);

        stackedWidget->addWidget(pageLine);
        pageFill = new QWidget();
        pageFill->setObjectName(QStringLiteral("pageFill"));
        horizontalLayout_2 = new QHBoxLayout(pageFill);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        stackedWidget->addWidget(pageFill);

        verticalLayout->addWidget(stackedWidget);


        gridLayout_4->addLayout(verticalLayout, 0, 0, 1, 1);

        gridLayout_4->setRowStretch(3, 1);
#ifndef QT_NO_SHORTCUT
        label_5->setBuddy(btnColor);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(mOpacityWidget, btnColor);
        QWidget::setTabOrder(btnColor, spinSize);
        QWidget::setTabOrder(spinSize, mSizeDDBtn);
        QWidget::setTabOrder(mSizeDDBtn, spinAngle);
        QWidget::setTabOrder(spinAngle, mRotationDDBtn);
        QWidget::setTabOrder(mRotationDDBtn, spinWidth);
        QWidget::setTabOrder(spinWidth, mWidthDDBtn);
        QWidget::setTabOrder(mWidthDDBtn, groupsCombo);
        QWidget::setTabOrder(groupsCombo, openStyleManagerButton);
        QWidget::setTabOrder(openStyleManagerButton, btnSaveSymbol);
        QWidget::setTabOrder(btnSaveSymbol, btnAdvanced);
        QWidget::setTabOrder(btnAdvanced, spinSize);
        QWidget::setTabOrder(spinSize, mSizeDDBtn);
        QWidget::setTabOrder(mSizeDDBtn, spinAngle);
        QWidget::setTabOrder(spinAngle, mRotationDDBtn);
        QWidget::setTabOrder(mRotationDDBtn, spinWidth);
        QWidget::setTabOrder(spinWidth, mWidthDDBtn);

        retranslateUi(SymbolsListWidget);

        mSymbolViewStackedWidget->setCurrentIndex(1);
        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SymbolsListWidget);
    } // setupUi

    void retranslateUi(QWidget *SymbolsListWidget)
    {
        SymbolsListWidget->setWindowTitle(QApplication::translate("SymbolsListWidget", "Form", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        groupsCombo->setToolTip(QApplication::translate("SymbolsListWidget", "Filter Symbols", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        openStyleManagerButton->setToolTip(QApplication::translate("SymbolsListWidget", "Style Manager", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        openStyleManagerButton->setText(QApplication::translate("SymbolsListWidget", "Open Library\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mButtonIconView->setToolTip(QApplication::translate("SymbolsListWidget", "Icon View", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mButtonIconView->setText(QApplication::translate("SymbolsListWidget", "PushButton", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mButtonListView->setToolTip(QApplication::translate("SymbolsListWidget", "List View", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mButtonListView->setText(QApplication::translate("SymbolsListWidget", "PushButton", Q_NULLPTR));
        lblSymbolName->setText(QApplication::translate("SymbolsListWidget", "Symbol Name", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnSaveSymbol->setToolTip(QApplication::translate("SymbolsListWidget", "Save symbol", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnSaveSymbol->setText(QApplication::translate("SymbolsListWidget", "Save Symbol", Q_NULLPTR));
        btnAdvanced->setText(QApplication::translate("SymbolsListWidget", "Advanced", Q_NULLPTR));
        mTransparencyLabel->setText(QApplication::translate("SymbolsListWidget", "Opacity", Q_NULLPTR));
        mSymbolUnitLabel->setText(QApplication::translate("SymbolsListWidget", "Unit", Q_NULLPTR));
        label_5->setText(QApplication::translate("SymbolsListWidget", "Color", Q_NULLPTR));
        btnColor->setText(QString());
        label_2->setText(QApplication::translate("SymbolsListWidget", "Size", Q_NULLPTR));
        mSizeDDBtn->setText(QApplication::translate("SymbolsListWidget", "\342\200\246", Q_NULLPTR));
        label_3->setText(QApplication::translate("SymbolsListWidget", "Rotation", Q_NULLPTR));
        spinAngle->setSuffix(QApplication::translate("SymbolsListWidget", " \302\260", Q_NULLPTR));
        mRotationDDBtn->setText(QApplication::translate("SymbolsListWidget", "\342\200\246", Q_NULLPTR));
        label_4->setText(QApplication::translate("SymbolsListWidget", "Width", Q_NULLPTR));
        mWidthDDBtn->setText(QApplication::translate("SymbolsListWidget", "\342\200\246", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SymbolsListWidget: public Ui_SymbolsListWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_SYMBOLSLIST_H
