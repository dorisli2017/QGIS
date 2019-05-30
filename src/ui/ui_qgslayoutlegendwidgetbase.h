/********************************************************************************
** Form generated from reading UI file 'qgslayoutlegendwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLAYOUTLEGENDWIDGETBASE_H
#define UI_QGSLAYOUTLEGENDWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qgscollapsiblegroupbox.h>
#include <qgslegendfilterbutton.h>
#include "qgscolorbutton.h"
#include "qgsdoublespinbox.h"
#include "qgsfontbutton.h"
#include "qgslayertreeview.h"
#include "qgslayoutitemcombobox.h"
#include "qgspropertyoverridebutton.h"
#include "qgsscrollarea.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLayoutLegendWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_11;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *mainLayout;
    QgsCollapsibleGroupBoxBasic *mMainPropertiesColGroupBox;
    QGridLayout *gridLayout_2;
    QLabel *mTitleLabel;
    QLabel *label_15;
    QLabel *mMapLabel;
    QCheckBox *mCheckboxResizeContents;
    QLabel *label;
    QLineEdit *mTitleLineEdit;
    QgsPropertyOverrideButton *mLegendTitleDDBtn;
    QComboBox *mTitleAlignCombo;
    QgsLayoutItemComboBox *mMapComboBox;
    QLineEdit *mWrapCharLineEdit;
    QgsCollapsibleGroupBoxBasic *mLegendItemColGroupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QCheckBox *mCheckBoxAutoUpdate;
    QSpacerItem *horizontalSpacer_3;
    QToolButton *mUpdateAllPushButton;
    QgsLayerTreeView *mItemTreeView;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *mMoveDownToolButton;
    QToolButton *mMoveUpToolButton;
    QToolButton *mAddGroupToolButton;
    QToolButton *mAddToolButton;
    QToolButton *mRemoveToolButton;
    QToolButton *mEditPushButton;
    QToolButton *mCountToolButton;
    QToolButton *mFilterByMapToolButton;
    QgsLegendFilterButton *mExpressionFilterButton;
    QSpacerItem *horizontalSpacer_4;
    QCheckBox *mFilterLegendByAtlasCheckBox;
    QgsCollapsibleGroupBoxBasic *mFontsColGroupBox;
    QVBoxLayout *verticalLayout_3;
    QgsFontButton *mTitleFontButton;
    QgsFontButton *mGroupFontButton;
    QgsFontButton *mLayerFontButton;
    QgsFontButton *mItemFontButton;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_16;
    QgsColorButton *mFontColorButton;
    QSpacerItem *horizontalSpacer;
    QgsCollapsibleGroupBoxBasic *mColumnsColGroupBox;
    QGridLayout *gridLayout_3;
    QgsSpinBox *mColumnCountSpinBox;
    QLabel *label_2;
    QgsPropertyOverrideButton *mColumnsDDBtn;
    QSpacerItem *horizontalSpacer_5;
    QCheckBox *mEqualColumnWidthCheckBox;
    QCheckBox *mSplitLayerCheckBox;
    QgsCollapsibleGroupBoxBasic *mSymbolsColGroupBox;
    QFormLayout *formLayout_3;
    QLabel *label_3;
    QgsDoubleSpinBox *mSymbolWidthSpinBox;
    QLabel *label_4;
    QgsDoubleSpinBox *mSymbolHeightSpinBox;
    QgsCollapsibleGroupBoxBasic *mRasterStrokeGroupBox;
    QGridLayout *gridLayout;
    QLabel *label_17;
    QHBoxLayout *horizontalLayout_6;
    QgsColorButton *mRasterStrokeColorButton;
    QSpacerItem *horizontalSpacer_2;
    QLabel *mStrokeWidthLabel;
    QgsDoubleSpinBox *mRasterStrokeWidthSpinBox;
    QgsCollapsibleGroupBoxBasic *mSymbolsColGroupBox_2;
    QFormLayout *formLayout_5;
    QLabel *label_13;
    QgsDoubleSpinBox *mWmsLegendWidthSpinBox;
    QLabel *label_14;
    QgsDoubleSpinBox *mWmsLegendHeightSpinBox;
    QgsCollapsibleGroupBoxBasic *mSpacingColGroupBox;
    QFormLayout *formLayout_4;
    QLabel *label_5;
    QgsDoubleSpinBox *mGroupSpaceSpinBox;
    QLabel *label_6;
    QgsDoubleSpinBox *mLayerSpaceSpinBox;
    QLabel *label_7;
    QgsDoubleSpinBox *mSymbolSpaceSpinBox;
    QLabel *label_8;
    QgsDoubleSpinBox *mIconLabelSpaceSpinBox;
    QLabel *label_9;
    QgsDoubleSpinBox *mBoxSpaceSpinBox;
    QLabel *label_12;
    QgsDoubleSpinBox *mColumnSpaceSpinBox;
    QLabel *label_121;
    QgsDoubleSpinBox *mLineSpacingSpinBox;
    QLabel *label_10;
    QgsDoubleSpinBox *mTitleSpaceBottomSpinBox;

    void setupUi(QWidget *QgsLayoutLegendWidgetBase)
    {
        if (QgsLayoutLegendWidgetBase->objectName().isEmpty())
            QgsLayoutLegendWidgetBase->setObjectName(QStringLiteral("QgsLayoutLegendWidgetBase"));
        QgsLayoutLegendWidgetBase->resize(393, 995);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsLayoutLegendWidgetBase->sizePolicy().hasHeightForWidth());
        QgsLayoutLegendWidgetBase->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(QgsLayoutLegendWidgetBase);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(QgsLayoutLegendWidgetBase);
        label_11->setObjectName(QStringLiteral("label_11"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy1);
        label_11->setStyleSheet(QStringLiteral("padding: 2px; font-weight: bold; background-color: rgb(200, 200, 200);"));

        verticalLayout->addWidget(label_11);

        scrollArea = new QgsScrollArea(QgsLayoutLegendWidgetBase);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setFrameShape(QFrame::StyledPanel);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 377, 1662));
        mainLayout = new QVBoxLayout(scrollAreaWidgetContents);
        mainLayout->setSpacing(6);
        mainLayout->setContentsMargins(11, 11, 11, 11);
        mainLayout->setObjectName(QStringLiteral("mainLayout"));
        mMainPropertiesColGroupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mMainPropertiesColGroupBox->setObjectName(QStringLiteral("mMainPropertiesColGroupBox"));
        mMainPropertiesColGroupBox->setFocusPolicy(Qt::StrongFocus);
        mMainPropertiesColGroupBox->setProperty("syncGroup", QVariant(QStringLiteral("composeritem")));
        mMainPropertiesColGroupBox->setProperty("collapsed", QVariant(false));
        gridLayout_2 = new QGridLayout(mMainPropertiesColGroupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        mTitleLabel = new QLabel(mMainPropertiesColGroupBox);
        mTitleLabel->setObjectName(QStringLiteral("mTitleLabel"));

        gridLayout_2->addWidget(mTitleLabel, 0, 0, 1, 1);

        label_15 = new QLabel(mMainPropertiesColGroupBox);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout_2->addWidget(label_15, 1, 0, 1, 1);

        mMapLabel = new QLabel(mMainPropertiesColGroupBox);
        mMapLabel->setObjectName(QStringLiteral("mMapLabel"));

        gridLayout_2->addWidget(mMapLabel, 2, 0, 1, 1);

        mCheckboxResizeContents = new QCheckBox(mMainPropertiesColGroupBox);
        mCheckboxResizeContents->setObjectName(QStringLiteral("mCheckboxResizeContents"));

        gridLayout_2->addWidget(mCheckboxResizeContents, 5, 0, 1, 2);

        label = new QLabel(mMainPropertiesColGroupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 3, 0, 1, 1);

        mTitleLineEdit = new QLineEdit(mMainPropertiesColGroupBox);
        mTitleLineEdit->setObjectName(QStringLiteral("mTitleLineEdit"));

        gridLayout_2->addWidget(mTitleLineEdit, 0, 1, 1, 1);

        mLegendTitleDDBtn = new QgsPropertyOverrideButton(mMainPropertiesColGroupBox);
        mLegendTitleDDBtn->setObjectName(QStringLiteral("mLegendTitleDDBtn"));

        gridLayout_2->addWidget(mLegendTitleDDBtn, 0, 2, 1, 1);

        mTitleAlignCombo = new QComboBox(mMainPropertiesColGroupBox);
        mTitleAlignCombo->setObjectName(QStringLiteral("mTitleAlignCombo"));

        gridLayout_2->addWidget(mTitleAlignCombo, 1, 1, 1, 2);

        mMapComboBox = new QgsLayoutItemComboBox(mMainPropertiesColGroupBox);
        mMapComboBox->setObjectName(QStringLiteral("mMapComboBox"));

        gridLayout_2->addWidget(mMapComboBox, 2, 1, 1, 2);

        mWrapCharLineEdit = new QLineEdit(mMainPropertiesColGroupBox);
        mWrapCharLineEdit->setObjectName(QStringLiteral("mWrapCharLineEdit"));
        mWrapCharLineEdit->setFrame(true);

        gridLayout_2->addWidget(mWrapCharLineEdit, 3, 1, 1, 2);


        mainLayout->addWidget(mMainPropertiesColGroupBox);

        mLegendItemColGroupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mLegendItemColGroupBox->setObjectName(QStringLiteral("mLegendItemColGroupBox"));
        mLegendItemColGroupBox->setFocusPolicy(Qt::StrongFocus);
        mLegendItemColGroupBox->setProperty("syncGroup", QVariant(QStringLiteral("composeritem")));
        mLegendItemColGroupBox->setProperty("collapsed", QVariant(false));
        verticalLayout_2 = new QVBoxLayout(mLegendItemColGroupBox);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mCheckBoxAutoUpdate = new QCheckBox(mLegendItemColGroupBox);
        mCheckBoxAutoUpdate->setObjectName(QStringLiteral("mCheckBoxAutoUpdate"));
        mCheckBoxAutoUpdate->setChecked(true);

        horizontalLayout->addWidget(mCheckBoxAutoUpdate);

        horizontalSpacer_3 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        mUpdateAllPushButton = new QToolButton(mLegendItemColGroupBox);
        mUpdateAllPushButton->setObjectName(QStringLiteral("mUpdateAllPushButton"));

        horizontalLayout->addWidget(mUpdateAllPushButton);


        verticalLayout_2->addLayout(horizontalLayout);

        mItemTreeView = new QgsLayerTreeView(mLegendItemColGroupBox);
        mItemTreeView->setObjectName(QStringLiteral("mItemTreeView"));
        mItemTreeView->setMinimumSize(QSize(0, 250));
        mItemTreeView->setSelectionMode(QAbstractItemView::ContiguousSelection);
        mItemTreeView->setHeaderHidden(true);
        mItemTreeView->header()->setVisible(false);

        verticalLayout_2->addWidget(mItemTreeView);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(3);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        mMoveDownToolButton = new QToolButton(mLegendItemColGroupBox);
        mMoveDownToolButton->setObjectName(QStringLiteral("mMoveDownToolButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mMoveDownToolButton->sizePolicy().hasHeightForWidth());
        mMoveDownToolButton->setSizePolicy(sizePolicy2);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/mActionArrowDown.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mMoveDownToolButton->setIcon(icon);
        mMoveDownToolButton->setIconSize(QSize(20, 20));

        horizontalLayout_2->addWidget(mMoveDownToolButton);

        mMoveUpToolButton = new QToolButton(mLegendItemColGroupBox);
        mMoveUpToolButton->setObjectName(QStringLiteral("mMoveUpToolButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/mActionArrowUp.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mMoveUpToolButton->setIcon(icon1);
        mMoveUpToolButton->setIconSize(QSize(20, 20));

        horizontalLayout_2->addWidget(mMoveUpToolButton);

        mAddGroupToolButton = new QToolButton(mLegendItemColGroupBox);
        mAddGroupToolButton->setObjectName(QStringLiteral("mAddGroupToolButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/themes/default/mActionAddGroup.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mAddGroupToolButton->setIcon(icon2);
        mAddGroupToolButton->setIconSize(QSize(20, 20));

        horizontalLayout_2->addWidget(mAddGroupToolButton);

        mAddToolButton = new QToolButton(mLegendItemColGroupBox);
        mAddToolButton->setObjectName(QStringLiteral("mAddToolButton"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mAddToolButton->setIcon(icon3);
        mAddToolButton->setIconSize(QSize(20, 20));

        horizontalLayout_2->addWidget(mAddToolButton);

        mRemoveToolButton = new QToolButton(mLegendItemColGroupBox);
        mRemoveToolButton->setObjectName(QStringLiteral("mRemoveToolButton"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mRemoveToolButton->setIcon(icon4);
        mRemoveToolButton->setIconSize(QSize(20, 20));

        horizontalLayout_2->addWidget(mRemoveToolButton);

        mEditPushButton = new QToolButton(mLegendItemColGroupBox);
        mEditPushButton->setObjectName(QStringLiteral("mEditPushButton"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/themes/default/symbologyEdit.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mEditPushButton->setIcon(icon5);
        mEditPushButton->setIconSize(QSize(20, 20));

        horizontalLayout_2->addWidget(mEditPushButton);

        mCountToolButton = new QToolButton(mLegendItemColGroupBox);
        mCountToolButton->setObjectName(QStringLiteral("mCountToolButton"));
        mCountToolButton->setEnabled(false);
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/themes/default/mActionSum.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mCountToolButton->setIcon(icon6);
        mCountToolButton->setIconSize(QSize(20, 20));
        mCountToolButton->setCheckable(true);

        horizontalLayout_2->addWidget(mCountToolButton);

        mFilterByMapToolButton = new QToolButton(mLegendItemColGroupBox);
        mFilterByMapToolButton->setObjectName(QStringLiteral("mFilterByMapToolButton"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images/themes/default/mActionFilter2.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mFilterByMapToolButton->setIcon(icon7);
        mFilterByMapToolButton->setIconSize(QSize(20, 20));
        mFilterByMapToolButton->setCheckable(true);

        horizontalLayout_2->addWidget(mFilterByMapToolButton);

        mExpressionFilterButton = new QgsLegendFilterButton(mLegendItemColGroupBox);
        mExpressionFilterButton->setObjectName(QStringLiteral("mExpressionFilterButton"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/images/themes/default/mIconExpressionFilter.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mExpressionFilterButton->setIcon(icon8);
        mExpressionFilterButton->setIconSize(QSize(20, 20));

        horizontalLayout_2->addWidget(mExpressionFilterButton);

        horizontalSpacer_4 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_2);

        mFilterLegendByAtlasCheckBox = new QCheckBox(mLegendItemColGroupBox);
        mFilterLegendByAtlasCheckBox->setObjectName(QStringLiteral("mFilterLegendByAtlasCheckBox"));

        verticalLayout_2->addWidget(mFilterLegendByAtlasCheckBox);


        mainLayout->addWidget(mLegendItemColGroupBox);

        mFontsColGroupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mFontsColGroupBox->setObjectName(QStringLiteral("mFontsColGroupBox"));
        mFontsColGroupBox->setFocusPolicy(Qt::StrongFocus);
        mFontsColGroupBox->setProperty("syncGroup", QVariant(QStringLiteral("composeritem")));
        mFontsColGroupBox->setProperty("collapsed", QVariant(true));
        verticalLayout_3 = new QVBoxLayout(mFontsColGroupBox);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        mTitleFontButton = new QgsFontButton(mFontsColGroupBox);
        mTitleFontButton->setObjectName(QStringLiteral("mTitleFontButton"));
        sizePolicy2.setHeightForWidth(mTitleFontButton->sizePolicy().hasHeightForWidth());
        mTitleFontButton->setSizePolicy(sizePolicy2);

        verticalLayout_3->addWidget(mTitleFontButton);

        mGroupFontButton = new QgsFontButton(mFontsColGroupBox);
        mGroupFontButton->setObjectName(QStringLiteral("mGroupFontButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mGroupFontButton->sizePolicy().hasHeightForWidth());
        mGroupFontButton->setSizePolicy(sizePolicy3);

        verticalLayout_3->addWidget(mGroupFontButton);

        mLayerFontButton = new QgsFontButton(mFontsColGroupBox);
        mLayerFontButton->setObjectName(QStringLiteral("mLayerFontButton"));
        sizePolicy3.setHeightForWidth(mLayerFontButton->sizePolicy().hasHeightForWidth());
        mLayerFontButton->setSizePolicy(sizePolicy3);

        verticalLayout_3->addWidget(mLayerFontButton);

        mItemFontButton = new QgsFontButton(mFontsColGroupBox);
        mItemFontButton->setObjectName(QStringLiteral("mItemFontButton"));
        sizePolicy3.setHeightForWidth(mItemFontButton->sizePolicy().hasHeightForWidth());
        mItemFontButton->setSizePolicy(sizePolicy3);

        verticalLayout_3->addWidget(mItemFontButton);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_16 = new QLabel(mFontsColGroupBox);
        label_16->setObjectName(QStringLiteral("label_16"));

        horizontalLayout_3->addWidget(label_16);

        mFontColorButton = new QgsColorButton(mFontsColGroupBox);
        mFontColorButton->setObjectName(QStringLiteral("mFontColorButton"));
        mFontColorButton->setMinimumSize(QSize(120, 0));
        mFontColorButton->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_3->addWidget(mFontColorButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout_3);


        mainLayout->addWidget(mFontsColGroupBox);

        mColumnsColGroupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mColumnsColGroupBox->setObjectName(QStringLiteral("mColumnsColGroupBox"));
        mColumnsColGroupBox->setFocusPolicy(Qt::StrongFocus);
        mColumnsColGroupBox->setProperty("syncGroup", QVariant(QStringLiteral("composeritem")));
        mColumnsColGroupBox->setProperty("collapsed", QVariant(true));
        gridLayout_3 = new QGridLayout(mColumnsColGroupBox);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        mColumnCountSpinBox = new QgsSpinBox(mColumnsColGroupBox);
        mColumnCountSpinBox->setObjectName(QStringLiteral("mColumnCountSpinBox"));
        mColumnCountSpinBox->setMinimum(1);
        mColumnCountSpinBox->setMaximum(1000);

        gridLayout_3->addWidget(mColumnCountSpinBox, 0, 1, 1, 1);

        label_2 = new QLabel(mColumnsColGroupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_3->addWidget(label_2, 0, 0, 1, 1);

        mColumnsDDBtn = new QgsPropertyOverrideButton(mColumnsColGroupBox);
        mColumnsDDBtn->setObjectName(QStringLiteral("mColumnsDDBtn"));

        gridLayout_3->addWidget(mColumnsDDBtn, 0, 2, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_5, 0, 3, 1, 1);

        mEqualColumnWidthCheckBox = new QCheckBox(mColumnsColGroupBox);
        mEqualColumnWidthCheckBox->setObjectName(QStringLiteral("mEqualColumnWidthCheckBox"));

        gridLayout_3->addWidget(mEqualColumnWidthCheckBox, 2, 0, 1, 4);

        mSplitLayerCheckBox = new QCheckBox(mColumnsColGroupBox);
        mSplitLayerCheckBox->setObjectName(QStringLiteral("mSplitLayerCheckBox"));

        gridLayout_3->addWidget(mSplitLayerCheckBox, 3, 0, 1, 4);


        mainLayout->addWidget(mColumnsColGroupBox);

        mSymbolsColGroupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mSymbolsColGroupBox->setObjectName(QStringLiteral("mSymbolsColGroupBox"));
        mSymbolsColGroupBox->setFocusPolicy(Qt::StrongFocus);
        mSymbolsColGroupBox->setProperty("syncGroup", QVariant(QStringLiteral("composeritem")));
        mSymbolsColGroupBox->setProperty("collapsed", QVariant(true));
        formLayout_3 = new QFormLayout(mSymbolsColGroupBox);
        formLayout_3->setSpacing(6);
        formLayout_3->setContentsMargins(11, 11, 11, 11);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        formLayout_3->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_3->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_3 = new QLabel(mSymbolsColGroupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_3);

        mSymbolWidthSpinBox = new QgsDoubleSpinBox(mSymbolsColGroupBox);
        mSymbolWidthSpinBox->setObjectName(QStringLiteral("mSymbolWidthSpinBox"));
        mSymbolWidthSpinBox->setProperty("showClearButton", QVariant(false));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, mSymbolWidthSpinBox);

        label_4 = new QLabel(mSymbolsColGroupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_4);

        mSymbolHeightSpinBox = new QgsDoubleSpinBox(mSymbolsColGroupBox);
        mSymbolHeightSpinBox->setObjectName(QStringLiteral("mSymbolHeightSpinBox"));
        mSymbolHeightSpinBox->setProperty("showClearButton", QVariant(false));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, mSymbolHeightSpinBox);

        mRasterStrokeGroupBox = new QgsCollapsibleGroupBoxBasic(mSymbolsColGroupBox);
        mRasterStrokeGroupBox->setObjectName(QStringLiteral("mRasterStrokeGroupBox"));
        mRasterStrokeGroupBox->setCheckable(true);
        mRasterStrokeGroupBox->setProperty("syncGroup", QVariant(QStringLiteral("composeritem")));
        mRasterStrokeGroupBox->setProperty("collapsed", QVariant(true));
        gridLayout = new QGridLayout(mRasterStrokeGroupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_17 = new QLabel(mRasterStrokeGroupBox);
        label_17->setObjectName(QStringLiteral("label_17"));

        gridLayout->addWidget(label_17, 0, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        mRasterStrokeColorButton = new QgsColorButton(mRasterStrokeGroupBox);
        mRasterStrokeColorButton->setObjectName(QStringLiteral("mRasterStrokeColorButton"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(mRasterStrokeColorButton->sizePolicy().hasHeightForWidth());
        mRasterStrokeColorButton->setSizePolicy(sizePolicy4);
        mRasterStrokeColorButton->setMinimumSize(QSize(120, 0));
        mRasterStrokeColorButton->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_6->addWidget(mRasterStrokeColorButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_6, 0, 1, 1, 1);

        mStrokeWidthLabel = new QLabel(mRasterStrokeGroupBox);
        mStrokeWidthLabel->setObjectName(QStringLiteral("mStrokeWidthLabel"));

        gridLayout->addWidget(mStrokeWidthLabel, 1, 0, 1, 1);

        mRasterStrokeWidthSpinBox = new QgsDoubleSpinBox(mRasterStrokeGroupBox);
        mRasterStrokeWidthSpinBox->setObjectName(QStringLiteral("mRasterStrokeWidthSpinBox"));
        sizePolicy3.setHeightForWidth(mRasterStrokeWidthSpinBox->sizePolicy().hasHeightForWidth());
        mRasterStrokeWidthSpinBox->setSizePolicy(sizePolicy3);
        mRasterStrokeWidthSpinBox->setSingleStep(0.1);
        mRasterStrokeWidthSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout->addWidget(mRasterStrokeWidthSpinBox, 1, 1, 1, 1);


        formLayout_3->setWidget(2, QFormLayout::SpanningRole, mRasterStrokeGroupBox);


        mainLayout->addWidget(mSymbolsColGroupBox);

        mSymbolsColGroupBox_2 = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mSymbolsColGroupBox_2->setObjectName(QStringLiteral("mSymbolsColGroupBox_2"));
        mSymbolsColGroupBox_2->setFocusPolicy(Qt::StrongFocus);
        mSymbolsColGroupBox_2->setProperty("syncGroup", QVariant(QStringLiteral("composeritem")));
        mSymbolsColGroupBox_2->setProperty("collapsed", QVariant(true));
        formLayout_5 = new QFormLayout(mSymbolsColGroupBox_2);
        formLayout_5->setSpacing(6);
        formLayout_5->setContentsMargins(11, 11, 11, 11);
        formLayout_5->setObjectName(QStringLiteral("formLayout_5"));
        formLayout_5->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_5->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_13 = new QLabel(mSymbolsColGroupBox_2);
        label_13->setObjectName(QStringLiteral("label_13"));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label_13);

        mWmsLegendWidthSpinBox = new QgsDoubleSpinBox(mSymbolsColGroupBox_2);
        mWmsLegendWidthSpinBox->setObjectName(QStringLiteral("mWmsLegendWidthSpinBox"));
        mWmsLegendWidthSpinBox->setMaximum(9999);
        mWmsLegendWidthSpinBox->setProperty("showClearButton", QVariant(false));

        formLayout_5->setWidget(0, QFormLayout::FieldRole, mWmsLegendWidthSpinBox);

        label_14 = new QLabel(mSymbolsColGroupBox_2);
        label_14->setObjectName(QStringLiteral("label_14"));

        formLayout_5->setWidget(1, QFormLayout::LabelRole, label_14);

        mWmsLegendHeightSpinBox = new QgsDoubleSpinBox(mSymbolsColGroupBox_2);
        mWmsLegendHeightSpinBox->setObjectName(QStringLiteral("mWmsLegendHeightSpinBox"));
        mWmsLegendHeightSpinBox->setMaximum(9999);
        mWmsLegendHeightSpinBox->setProperty("showClearButton", QVariant(false));

        formLayout_5->setWidget(1, QFormLayout::FieldRole, mWmsLegendHeightSpinBox);


        mainLayout->addWidget(mSymbolsColGroupBox_2);

        mSpacingColGroupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mSpacingColGroupBox->setObjectName(QStringLiteral("mSpacingColGroupBox"));
        mSpacingColGroupBox->setFocusPolicy(Qt::StrongFocus);
        mSpacingColGroupBox->setProperty("syncGroup", QVariant(QStringLiteral("composeritem")));
        mSpacingColGroupBox->setProperty("collapsed", QVariant(true));
        formLayout_4 = new QFormLayout(mSpacingColGroupBox);
        formLayout_4->setSpacing(6);
        formLayout_4->setContentsMargins(11, 11, 11, 11);
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));
        formLayout_4->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_4->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_5 = new QLabel(mSpacingColGroupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_5);

        mGroupSpaceSpinBox = new QgsDoubleSpinBox(mSpacingColGroupBox);
        mGroupSpaceSpinBox->setObjectName(QStringLiteral("mGroupSpaceSpinBox"));

        formLayout_4->setWidget(1, QFormLayout::FieldRole, mGroupSpaceSpinBox);

        label_6 = new QLabel(mSpacingColGroupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout_4->setWidget(2, QFormLayout::LabelRole, label_6);

        mLayerSpaceSpinBox = new QgsDoubleSpinBox(mSpacingColGroupBox);
        mLayerSpaceSpinBox->setObjectName(QStringLiteral("mLayerSpaceSpinBox"));

        formLayout_4->setWidget(2, QFormLayout::FieldRole, mLayerSpaceSpinBox);

        label_7 = new QLabel(mSpacingColGroupBox);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout_4->setWidget(3, QFormLayout::LabelRole, label_7);

        mSymbolSpaceSpinBox = new QgsDoubleSpinBox(mSpacingColGroupBox);
        mSymbolSpaceSpinBox->setObjectName(QStringLiteral("mSymbolSpaceSpinBox"));

        formLayout_4->setWidget(3, QFormLayout::FieldRole, mSymbolSpaceSpinBox);

        label_8 = new QLabel(mSpacingColGroupBox);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout_4->setWidget(4, QFormLayout::LabelRole, label_8);

        mIconLabelSpaceSpinBox = new QgsDoubleSpinBox(mSpacingColGroupBox);
        mIconLabelSpaceSpinBox->setObjectName(QStringLiteral("mIconLabelSpaceSpinBox"));

        formLayout_4->setWidget(4, QFormLayout::FieldRole, mIconLabelSpaceSpinBox);

        label_9 = new QLabel(mSpacingColGroupBox);
        label_9->setObjectName(QStringLiteral("label_9"));

        formLayout_4->setWidget(5, QFormLayout::LabelRole, label_9);

        mBoxSpaceSpinBox = new QgsDoubleSpinBox(mSpacingColGroupBox);
        mBoxSpaceSpinBox->setObjectName(QStringLiteral("mBoxSpaceSpinBox"));

        formLayout_4->setWidget(5, QFormLayout::FieldRole, mBoxSpaceSpinBox);

        label_12 = new QLabel(mSpacingColGroupBox);
        label_12->setObjectName(QStringLiteral("label_12"));

        formLayout_4->setWidget(6, QFormLayout::LabelRole, label_12);

        mColumnSpaceSpinBox = new QgsDoubleSpinBox(mSpacingColGroupBox);
        mColumnSpaceSpinBox->setObjectName(QStringLiteral("mColumnSpaceSpinBox"));

        formLayout_4->setWidget(6, QFormLayout::FieldRole, mColumnSpaceSpinBox);

        label_121 = new QLabel(mSpacingColGroupBox);
        label_121->setObjectName(QStringLiteral("label_121"));

        formLayout_4->setWidget(7, QFormLayout::LabelRole, label_121);

        mLineSpacingSpinBox = new QgsDoubleSpinBox(mSpacingColGroupBox);
        mLineSpacingSpinBox->setObjectName(QStringLiteral("mLineSpacingSpinBox"));

        formLayout_4->setWidget(7, QFormLayout::FieldRole, mLineSpacingSpinBox);

        label_10 = new QLabel(mSpacingColGroupBox);
        label_10->setObjectName(QStringLiteral("label_10"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_10);

        mTitleSpaceBottomSpinBox = new QgsDoubleSpinBox(mSpacingColGroupBox);
        mTitleSpaceBottomSpinBox->setObjectName(QStringLiteral("mTitleSpaceBottomSpinBox"));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, mTitleSpaceBottomSpinBox);


        mainLayout->addWidget(mSpacingColGroupBox);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

#ifndef QT_NO_SHORTCUT
        mTitleLabel->setBuddy(mTitleLineEdit);
        mStrokeWidthLabel->setBuddy(mRasterStrokeWidthSpinBox);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(scrollArea, mMainPropertiesColGroupBox);
        QWidget::setTabOrder(mMainPropertiesColGroupBox, mTitleLineEdit);
        QWidget::setTabOrder(mTitleLineEdit, mLegendTitleDDBtn);
        QWidget::setTabOrder(mLegendTitleDDBtn, mTitleAlignCombo);
        QWidget::setTabOrder(mTitleAlignCombo, mMapComboBox);
        QWidget::setTabOrder(mMapComboBox, mWrapCharLineEdit);
        QWidget::setTabOrder(mWrapCharLineEdit, mCheckboxResizeContents);
        QWidget::setTabOrder(mCheckboxResizeContents, mLegendItemColGroupBox);
        QWidget::setTabOrder(mLegendItemColGroupBox, mCheckBoxAutoUpdate);
        QWidget::setTabOrder(mCheckBoxAutoUpdate, mUpdateAllPushButton);
        QWidget::setTabOrder(mUpdateAllPushButton, mItemTreeView);
        QWidget::setTabOrder(mItemTreeView, mMoveDownToolButton);
        QWidget::setTabOrder(mMoveDownToolButton, mMoveUpToolButton);
        QWidget::setTabOrder(mMoveUpToolButton, mAddGroupToolButton);
        QWidget::setTabOrder(mAddGroupToolButton, mAddToolButton);
        QWidget::setTabOrder(mAddToolButton, mRemoveToolButton);
        QWidget::setTabOrder(mRemoveToolButton, mEditPushButton);
        QWidget::setTabOrder(mEditPushButton, mCountToolButton);
        QWidget::setTabOrder(mCountToolButton, mFilterByMapToolButton);
        QWidget::setTabOrder(mFilterByMapToolButton, mExpressionFilterButton);
        QWidget::setTabOrder(mExpressionFilterButton, mFilterLegendByAtlasCheckBox);
        QWidget::setTabOrder(mFilterLegendByAtlasCheckBox, mFontsColGroupBox);
        QWidget::setTabOrder(mFontsColGroupBox, mTitleFontButton);
        QWidget::setTabOrder(mTitleFontButton, mGroupFontButton);
        QWidget::setTabOrder(mGroupFontButton, mLayerFontButton);
        QWidget::setTabOrder(mLayerFontButton, mItemFontButton);
        QWidget::setTabOrder(mItemFontButton, mFontColorButton);
        QWidget::setTabOrder(mFontColorButton, mColumnsColGroupBox);
        QWidget::setTabOrder(mColumnsColGroupBox, mColumnsDDBtn);
        QWidget::setTabOrder(mColumnsDDBtn, mColumnCountSpinBox);
        QWidget::setTabOrder(mColumnCountSpinBox, mEqualColumnWidthCheckBox);
        QWidget::setTabOrder(mEqualColumnWidthCheckBox, mSplitLayerCheckBox);
        QWidget::setTabOrder(mSplitLayerCheckBox, mSymbolsColGroupBox);
        QWidget::setTabOrder(mSymbolsColGroupBox, mSymbolWidthSpinBox);
        QWidget::setTabOrder(mSymbolWidthSpinBox, mSymbolHeightSpinBox);
        QWidget::setTabOrder(mSymbolHeightSpinBox, mRasterStrokeGroupBox);
        QWidget::setTabOrder(mRasterStrokeGroupBox, mRasterStrokeColorButton);
        QWidget::setTabOrder(mRasterStrokeColorButton, mRasterStrokeWidthSpinBox);
        QWidget::setTabOrder(mRasterStrokeWidthSpinBox, mSymbolsColGroupBox_2);
        QWidget::setTabOrder(mSymbolsColGroupBox_2, mWmsLegendWidthSpinBox);
        QWidget::setTabOrder(mWmsLegendWidthSpinBox, mWmsLegendHeightSpinBox);
        QWidget::setTabOrder(mWmsLegendHeightSpinBox, mSpacingColGroupBox);
        QWidget::setTabOrder(mSpacingColGroupBox, mTitleSpaceBottomSpinBox);
        QWidget::setTabOrder(mTitleSpaceBottomSpinBox, mGroupSpaceSpinBox);
        QWidget::setTabOrder(mGroupSpaceSpinBox, mLayerSpaceSpinBox);
        QWidget::setTabOrder(mLayerSpaceSpinBox, mSymbolSpaceSpinBox);
        QWidget::setTabOrder(mSymbolSpaceSpinBox, mIconLabelSpaceSpinBox);
        QWidget::setTabOrder(mIconLabelSpaceSpinBox, mBoxSpaceSpinBox);
        QWidget::setTabOrder(mBoxSpaceSpinBox, mColumnSpaceSpinBox);
        QWidget::setTabOrder(mColumnSpaceSpinBox, mLineSpacingSpinBox);

        retranslateUi(QgsLayoutLegendWidgetBase);

        QMetaObject::connectSlotsByName(QgsLayoutLegendWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsLayoutLegendWidgetBase)
    {
        QgsLayoutLegendWidgetBase->setWindowTitle(QApplication::translate("QgsLayoutLegendWidgetBase", "Legend Options", Q_NULLPTR));
        label_11->setText(QApplication::translate("QgsLayoutLegendWidgetBase", "Legend", Q_NULLPTR));
        mMainPropertiesColGroupBox->setTitle(QApplication::translate("QgsLayoutLegendWidgetBase", "Main Properties", Q_NULLPTR));
        mTitleLabel->setText(QApplication::translate("QgsLayoutLegendWidgetBase", "&Title", Q_NULLPTR));
        label_15->setText(QApplication::translate("QgsLayoutLegendWidgetBase", "Title alignment", Q_NULLPTR));
        mMapLabel->setText(QApplication::translate("QgsLayoutLegendWidgetBase", "Map", Q_NULLPTR));
        mCheckboxResizeContents->setText(QApplication::translate("QgsLayoutLegendWidgetBase", "Resize to fit contents", Q_NULLPTR));
        label->setText(QApplication::translate("QgsLayoutLegendWidgetBase", "Wrap text on", Q_NULLPTR));
        mLegendTitleDDBtn->setText(QApplication::translate("QgsLayoutLegendWidgetBase", "\342\200\246", Q_NULLPTR));
        mTitleAlignCombo->clear();
        mTitleAlignCombo->insertItems(0, QStringList()
         << QApplication::translate("QgsLayoutLegendWidgetBase", "Left", Q_NULLPTR)
         << QApplication::translate("QgsLayoutLegendWidgetBase", "Center", Q_NULLPTR)
         << QApplication::translate("QgsLayoutLegendWidgetBase", "Right", Q_NULLPTR)
        );
        mLegendItemColGroupBox->setTitle(QApplication::translate("QgsLayoutLegendWidgetBase", "Legend Items", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mCheckBoxAutoUpdate->setToolTip(QApplication::translate("QgsLayoutLegendWidgetBase", "Keeps the legend contents synchronized with the main application legend. Customization is not possible and must be done in the main application.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mCheckBoxAutoUpdate->setText(QApplication::translate("QgsLayoutLegendWidgetBase", "Auto update", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mUpdateAllPushButton->setToolTip(QApplication::translate("QgsLayoutLegendWidgetBase", "Update whole legend. Layers are added/removed according to main application legend. User defined labels will be deleted.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mUpdateAllPushButton->setText(QApplication::translate("QgsLayoutLegendWidgetBase", "Update All", Q_NULLPTR));
        mMoveDownToolButton->setText(QString());
        mMoveUpToolButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        mAddGroupToolButton->setToolTip(QApplication::translate("QgsLayoutLegendWidgetBase", "Add group", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mAddGroupToolButton->setText(QApplication::translate("QgsLayoutLegendWidgetBase", "\342\200\246", Q_NULLPTR));
        mAddToolButton->setText(QString());
        mRemoveToolButton->setText(QString());
        mEditPushButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        mCountToolButton->setToolTip(QApplication::translate("QgsLayoutLegendWidgetBase", "Show feature count for each class of vector layer.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mCountToolButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        mFilterByMapToolButton->setToolTip(QApplication::translate("QgsLayoutLegendWidgetBase", "Filter Legend by Map Content", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mExpressionFilterButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        mFilterLegendByAtlasCheckBox->setToolTip(QApplication::translate("QgsLayoutLegendWidgetBase", "Filter out legend elements that lie outside the current atlas feature.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mFilterLegendByAtlasCheckBox->setText(QApplication::translate("QgsLayoutLegendWidgetBase", "Only show items inside current atlas feature", Q_NULLPTR));
        mFontsColGroupBox->setTitle(QApplication::translate("QgsLayoutLegendWidgetBase", "Fonts", Q_NULLPTR));
        mTitleFontButton->setText(QApplication::translate("QgsLayoutLegendWidgetBase", "Title font", Q_NULLPTR));
        mGroupFontButton->setText(QApplication::translate("QgsLayoutLegendWidgetBase", "Group font", Q_NULLPTR));
        mLayerFontButton->setText(QApplication::translate("QgsLayoutLegendWidgetBase", "Subgroup font", Q_NULLPTR));
        mItemFontButton->setText(QApplication::translate("QgsLayoutLegendWidgetBase", "Item font", Q_NULLPTR));
        label_16->setText(QApplication::translate("QgsLayoutLegendWidgetBase", "Font color", Q_NULLPTR));
        mFontColorButton->setText(QString());
        mColumnsColGroupBox->setTitle(QApplication::translate("QgsLayoutLegendWidgetBase", "Columns", Q_NULLPTR));
        mColumnCountSpinBox->setPrefix(QString());
        label_2->setText(QApplication::translate("QgsLayoutLegendWidgetBase", "Count", Q_NULLPTR));
        mColumnsDDBtn->setText(QApplication::translate("QgsLayoutLegendWidgetBase", "\342\200\246", Q_NULLPTR));
        mEqualColumnWidthCheckBox->setText(QApplication::translate("QgsLayoutLegendWidgetBase", "Equal column widths", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mSplitLayerCheckBox->setToolTip(QApplication::translate("QgsLayoutLegendWidgetBase", "Allow splitting layer items into multiple columns.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mSplitLayerCheckBox->setText(QApplication::translate("QgsLayoutLegendWidgetBase", "Split layers", Q_NULLPTR));
        mSymbolsColGroupBox->setTitle(QApplication::translate("QgsLayoutLegendWidgetBase", "Symbol", Q_NULLPTR));
        label_3->setText(QApplication::translate("QgsLayoutLegendWidgetBase", "Symbol width", Q_NULLPTR));
        mSymbolWidthSpinBox->setPrefix(QString());
        mSymbolWidthSpinBox->setSuffix(QApplication::translate("QgsLayoutLegendWidgetBase", " mm", Q_NULLPTR));
        label_4->setText(QApplication::translate("QgsLayoutLegendWidgetBase", "Symbol height", Q_NULLPTR));
        mSymbolHeightSpinBox->setPrefix(QString());
        mSymbolHeightSpinBox->setSuffix(QApplication::translate("QgsLayoutLegendWidgetBase", " mm", Q_NULLPTR));
        mRasterStrokeGroupBox->setTitle(QApplication::translate("QgsLayoutLegendWidgetBase", "Draw stroke for raster symbols", Q_NULLPTR));
        label_17->setText(QApplication::translate("QgsLayoutLegendWidgetBase", "Stroke color", Q_NULLPTR));
        mRasterStrokeColorButton->setText(QString());
        mStrokeWidthLabel->setText(QApplication::translate("QgsLayoutLegendWidgetBase", "Thickness", Q_NULLPTR));
        mRasterStrokeWidthSpinBox->setSpecialValueText(QApplication::translate("QgsLayoutLegendWidgetBase", "Hairline", Q_NULLPTR));
        mRasterStrokeWidthSpinBox->setSuffix(QApplication::translate("QgsLayoutLegendWidgetBase", " mm", Q_NULLPTR));
        mSymbolsColGroupBox_2->setTitle(QApplication::translate("QgsLayoutLegendWidgetBase", "WMS LegendGraphic", Q_NULLPTR));
        label_13->setText(QApplication::translate("QgsLayoutLegendWidgetBase", "Legend width", Q_NULLPTR));
        mWmsLegendWidthSpinBox->setPrefix(QString());
        mWmsLegendWidthSpinBox->setSuffix(QApplication::translate("QgsLayoutLegendWidgetBase", " mm", Q_NULLPTR));
        label_14->setText(QApplication::translate("QgsLayoutLegendWidgetBase", "Legend height", Q_NULLPTR));
        mWmsLegendHeightSpinBox->setPrefix(QString());
        mWmsLegendHeightSpinBox->setSuffix(QApplication::translate("QgsLayoutLegendWidgetBase", " mm", Q_NULLPTR));
        mSpacingColGroupBox->setTitle(QApplication::translate("QgsLayoutLegendWidgetBase", "Spacing", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_5->setToolTip(QApplication::translate("QgsLayoutLegendWidgetBase", "Space above text using group style.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_5->setText(QApplication::translate("QgsLayoutLegendWidgetBase", "Group space", Q_NULLPTR));
        mGroupSpaceSpinBox->setPrefix(QString());
        mGroupSpaceSpinBox->setSuffix(QApplication::translate("QgsLayoutLegendWidgetBase", " mm", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_6->setToolTip(QApplication::translate("QgsLayoutLegendWidgetBase", "Space above text using subgroup style.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_6->setText(QApplication::translate("QgsLayoutLegendWidgetBase", "Subgroup space", Q_NULLPTR));
        mLayerSpaceSpinBox->setPrefix(QString());
        mLayerSpaceSpinBox->setSuffix(QApplication::translate("QgsLayoutLegendWidgetBase", " mm", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_7->setToolTip(QApplication::translate("QgsLayoutLegendWidgetBase", "Space above symbol and symbol label.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_7->setText(QApplication::translate("QgsLayoutLegendWidgetBase", "Symbol space", Q_NULLPTR));
        mSymbolSpaceSpinBox->setPrefix(QString());
        mSymbolSpaceSpinBox->setSuffix(QApplication::translate("QgsLayoutLegendWidgetBase", " mm", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_8->setToolTip(QApplication::translate("QgsLayoutLegendWidgetBase", "Space between symbol icon and symbol label (symbol label left margin).", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_8->setText(QApplication::translate("QgsLayoutLegendWidgetBase", "Icon label space", Q_NULLPTR));
        mIconLabelSpaceSpinBox->setPrefix(QString());
        mIconLabelSpaceSpinBox->setSuffix(QApplication::translate("QgsLayoutLegendWidgetBase", " mm", Q_NULLPTR));
        label_9->setText(QApplication::translate("QgsLayoutLegendWidgetBase", "Box space", Q_NULLPTR));
        mBoxSpaceSpinBox->setPrefix(QString());
        mBoxSpaceSpinBox->setSuffix(QApplication::translate("QgsLayoutLegendWidgetBase", " mm", Q_NULLPTR));
        label_12->setText(QApplication::translate("QgsLayoutLegendWidgetBase", "Column space", Q_NULLPTR));
        mColumnSpaceSpinBox->setPrefix(QString());
        mColumnSpaceSpinBox->setSuffix(QApplication::translate("QgsLayoutLegendWidgetBase", " mm", Q_NULLPTR));
        label_121->setText(QApplication::translate("QgsLayoutLegendWidgetBase", "Line space", Q_NULLPTR));
        mLineSpacingSpinBox->setPrefix(QString());
        mLineSpacingSpinBox->setSuffix(QApplication::translate("QgsLayoutLegendWidgetBase", " mm", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_10->setToolTip(QApplication::translate("QgsLayoutLegendWidgetBase", "Space below title.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_10->setText(QApplication::translate("QgsLayoutLegendWidgetBase", "Title space", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mTitleSpaceBottomSpinBox->setToolTip(QApplication::translate("QgsLayoutLegendWidgetBase", "Space below title.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mTitleSpaceBottomSpinBox->setSuffix(QApplication::translate("QgsLayoutLegendWidgetBase", " mm", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsLayoutLegendWidgetBase: public Ui_QgsLayoutLegendWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLAYOUTLEGENDWIDGETBASE_H
