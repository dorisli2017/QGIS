/********************************************************************************
** Form generated from reading UI file 'qgslayoutscalebarwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLAYOUTSCALEBARWIDGETBASE_H
#define UI_QGSLAYOUTSCALEBARWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgscolorbutton.h"
#include "qgsdoublespinbox.h"
#include "qgsfontbutton.h"
#include "qgslayoutitemcombobox.h"
#include "qgspenstylecombobox.h"
#include "qgspropertyoverridebutton.h"
#include "qgsscrollarea.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLayoutScaleBarWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *mainLayout;
    QgsCollapsibleGroupBoxBasic *groupBox;
    QGridLayout *gridLayout;
    QgsLayoutItemComboBox *mMapItemComboBox;
    QComboBox *mStyleComboBox;
    QLabel *mStyleLabel;
    QLabel *mMapLabel;
    QgsCollapsibleGroupBoxBasic *mGroupBoxUnits;
    QGridLayout *gridLayout_2;
    QLabel *label_12;
    QLabel *mUnitLabelLabel;
    QgsDoubleSpinBox *mMapUnitsPerBarUnitSpinBox;
    QLineEdit *mUnitLabelLineEdit;
    QComboBox *mUnitsComboBox;
    QLabel *mMapUnitsPerBarUnitLabel;
    QgsCollapsibleGroupBoxBasic *mGroupBoxSegments;
    QGridLayout *gridLayout_3;
    QLabel *mSegmentLabel;
    QgsDoubleSpinBox *mSegmentSizeSpinBox;
    QLabel *label;
    QgsSpinBox *mNumberOfSegmentsSpinBox;
    QgsSpinBox *mSegmentsLeftSpinBox;
    QRadioButton *mFixedSizeRadio;
    QRadioButton *mFitWidthRadio;
    QgsDoubleSpinBox *mHeightSpinBox;
    QgsDoubleSpinBox *mMinWidthSpinBox;
    QgsDoubleSpinBox *mMaxWidthSpinBox;
    QgsCollapsibleGroupBoxBasic *groupBox_5;
    QGridLayout *gridLayout_4;
    QgsDoubleSpinBox *mLineWidthSpinBox;
    QLabel *label_4;
    QLabel *mAlignmentLabel;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *label_8;
    QgsPropertyOverrideButton *mLineWidthDDBtn;
    QgsDoubleSpinBox *mLabelBarSpaceSpinBox;
    QgsDoubleSpinBox *mBoxSizeSpinBox;
    QgsPenJoinStyleComboBox *mLineJoinStyleCombo;
    QgsPenCapStyleComboBox *mLineCapStyleCombo;
    QComboBox *mAlignmentComboBox;
    QgsCollapsibleGroupBoxBasic *groupBox_4;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout_5;
    QgsColorButton *mStrokeColorButton;
    QgsPropertyOverrideButton *mLineColorDDBtn;
    QSpacerItem *horizontalSpacer_4;
    QgsFontButton *mFontButton;
    QLabel *label_9;
    QLabel *label_11;
    QHBoxLayout *horizontalLayout_3;
    QgsColorButton *mFillColorButton;
    QgsPropertyOverrideButton *mFillColorDDBtn;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout_4;
    QgsColorButton *mFillColor2Button;
    QgsPropertyOverrideButton *mFillColor2DDBtn;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *QgsLayoutScaleBarWidgetBase)
    {
        if (QgsLayoutScaleBarWidgetBase->objectName().isEmpty())
            QgsLayoutScaleBarWidgetBase->setObjectName(QStringLiteral("QgsLayoutScaleBarWidgetBase"));
        QgsLayoutScaleBarWidgetBase->resize(456, 662);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsLayoutScaleBarWidgetBase->sizePolicy().hasHeightForWidth());
        QgsLayoutScaleBarWidgetBase->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(QgsLayoutScaleBarWidgetBase);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(QgsLayoutScaleBarWidgetBase);
        label_5->setObjectName(QStringLiteral("label_5"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);
        label_5->setStyleSheet(QStringLiteral("padding: 2px; font-weight: bold; background-color: rgb(200, 200, 200);"));

        verticalLayout->addWidget(label_5);

        scrollArea = new QgsScrollArea(QgsLayoutScaleBarWidgetBase);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, -337, 440, 973));
        mainLayout = new QVBoxLayout(scrollAreaWidgetContents);
        mainLayout->setSpacing(6);
        mainLayout->setContentsMargins(11, 11, 11, 11);
        mainLayout->setObjectName(QStringLiteral("mainLayout"));
        groupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setFocusPolicy(Qt::StrongFocus);
        groupBox->setProperty("syncGroup", QVariant(QStringLiteral("composeritem")));
        groupBox->setProperty("collapsed", QVariant(false));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mMapItemComboBox = new QgsLayoutItemComboBox(groupBox);
        mMapItemComboBox->setObjectName(QStringLiteral("mMapItemComboBox"));

        gridLayout->addWidget(mMapItemComboBox, 0, 1, 1, 2);

        mStyleComboBox = new QComboBox(groupBox);
        mStyleComboBox->setObjectName(QStringLiteral("mStyleComboBox"));

        gridLayout->addWidget(mStyleComboBox, 1, 1, 1, 2);

        mStyleLabel = new QLabel(groupBox);
        mStyleLabel->setObjectName(QStringLiteral("mStyleLabel"));

        gridLayout->addWidget(mStyleLabel, 1, 0, 1, 1);

        mMapLabel = new QLabel(groupBox);
        mMapLabel->setObjectName(QStringLiteral("mMapLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mMapLabel->sizePolicy().hasHeightForWidth());
        mMapLabel->setSizePolicy(sizePolicy2);
        mMapLabel->setWordWrap(true);

        gridLayout->addWidget(mMapLabel, 0, 0, 1, 1);

        gridLayout->setColumnStretch(1, 1);

        mainLayout->addWidget(groupBox);

        mGroupBoxUnits = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mGroupBoxUnits->setObjectName(QStringLiteral("mGroupBoxUnits"));
        mGroupBoxUnits->setFocusPolicy(Qt::StrongFocus);
        mGroupBoxUnits->setProperty("syncGroup", QVariant(QStringLiteral("composeritem")));
        mGroupBoxUnits->setProperty("collapsed", QVariant(false));
        gridLayout_2 = new QGridLayout(mGroupBoxUnits);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_12 = new QLabel(mGroupBoxUnits);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_2->addWidget(label_12, 0, 0, 1, 1);

        mUnitLabelLabel = new QLabel(mGroupBoxUnits);
        mUnitLabelLabel->setObjectName(QStringLiteral("mUnitLabelLabel"));
        mUnitLabelLabel->setWordWrap(true);

        gridLayout_2->addWidget(mUnitLabelLabel, 2, 0, 1, 1);

        mMapUnitsPerBarUnitSpinBox = new QgsDoubleSpinBox(mGroupBoxUnits);
        mMapUnitsPerBarUnitSpinBox->setObjectName(QStringLiteral("mMapUnitsPerBarUnitSpinBox"));
        mMapUnitsPerBarUnitSpinBox->setDecimals(6);
        mMapUnitsPerBarUnitSpinBox->setMaximum(1e+13);
        mMapUnitsPerBarUnitSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_2->addWidget(mMapUnitsPerBarUnitSpinBox, 1, 1, 1, 1);

        mUnitLabelLineEdit = new QLineEdit(mGroupBoxUnits);
        mUnitLabelLineEdit->setObjectName(QStringLiteral("mUnitLabelLineEdit"));

        gridLayout_2->addWidget(mUnitLabelLineEdit, 2, 1, 1, 1);

        mUnitsComboBox = new QComboBox(mGroupBoxUnits);
        mUnitsComboBox->setObjectName(QStringLiteral("mUnitsComboBox"));

        gridLayout_2->addWidget(mUnitsComboBox, 0, 1, 1, 1);

        mMapUnitsPerBarUnitLabel = new QLabel(mGroupBoxUnits);
        mMapUnitsPerBarUnitLabel->setObjectName(QStringLiteral("mMapUnitsPerBarUnitLabel"));
        mMapUnitsPerBarUnitLabel->setWordWrap(false);

        gridLayout_2->addWidget(mMapUnitsPerBarUnitLabel, 1, 0, 1, 1);


        mainLayout->addWidget(mGroupBoxUnits);

        mGroupBoxSegments = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mGroupBoxSegments->setObjectName(QStringLiteral("mGroupBoxSegments"));
        mGroupBoxSegments->setFocusPolicy(Qt::StrongFocus);
        mGroupBoxSegments->setProperty("syncGroup", QVariant(QStringLiteral("composeritem")));
        mGroupBoxSegments->setProperty("collapsed", QVariant(false));
        gridLayout_3 = new QGridLayout(mGroupBoxSegments);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        mSegmentLabel = new QLabel(mGroupBoxSegments);
        mSegmentLabel->setObjectName(QStringLiteral("mSegmentLabel"));

        gridLayout_3->addWidget(mSegmentLabel, 0, 0, 1, 1);

        mSegmentSizeSpinBox = new QgsDoubleSpinBox(mGroupBoxSegments);
        mSegmentSizeSpinBox->setObjectName(QStringLiteral("mSegmentSizeSpinBox"));
        mSegmentSizeSpinBox->setDecimals(6);
        mSegmentSizeSpinBox->setMaximum(1e+13);
        mSegmentSizeSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_3->addWidget(mSegmentSizeSpinBox, 2, 2, 1, 1);

        label = new QLabel(mGroupBoxSegments);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_3->addWidget(label, 5, 0, 1, 2);

        mNumberOfSegmentsSpinBox = new QgsSpinBox(mGroupBoxSegments);
        mNumberOfSegmentsSpinBox->setObjectName(QStringLiteral("mNumberOfSegmentsSpinBox"));
        mNumberOfSegmentsSpinBox->setValue(0);

        gridLayout_3->addWidget(mNumberOfSegmentsSpinBox, 1, 2, 1, 1);

        mSegmentsLeftSpinBox = new QgsSpinBox(mGroupBoxSegments);
        mSegmentsLeftSpinBox->setObjectName(QStringLiteral("mSegmentsLeftSpinBox"));

        gridLayout_3->addWidget(mSegmentsLeftSpinBox, 0, 2, 1, 1);

        mFixedSizeRadio = new QRadioButton(mGroupBoxSegments);
        mFixedSizeRadio->setObjectName(QStringLiteral("mFixedSizeRadio"));
        mFixedSizeRadio->setChecked(true);

        gridLayout_3->addWidget(mFixedSizeRadio, 2, 0, 1, 2);

        mFitWidthRadio = new QRadioButton(mGroupBoxSegments);
        mFitWidthRadio->setObjectName(QStringLiteral("mFitWidthRadio"));

        gridLayout_3->addWidget(mFitWidthRadio, 3, 0, 1, 2);

        mHeightSpinBox = new QgsDoubleSpinBox(mGroupBoxSegments);
        mHeightSpinBox->setObjectName(QStringLiteral("mHeightSpinBox"));
        mHeightSpinBox->setMaximum(999.99);

        gridLayout_3->addWidget(mHeightSpinBox, 5, 2, 1, 1);

        mMinWidthSpinBox = new QgsDoubleSpinBox(mGroupBoxSegments);
        mMinWidthSpinBox->setObjectName(QStringLiteral("mMinWidthSpinBox"));
        mMinWidthSpinBox->setEnabled(false);
        mMinWidthSpinBox->setMaximum(999.99);

        gridLayout_3->addWidget(mMinWidthSpinBox, 3, 2, 1, 1);

        mMaxWidthSpinBox = new QgsDoubleSpinBox(mGroupBoxSegments);
        mMaxWidthSpinBox->setObjectName(QStringLiteral("mMaxWidthSpinBox"));
        mMaxWidthSpinBox->setEnabled(false);
        mMaxWidthSpinBox->setMaximum(999.99);

        gridLayout_3->addWidget(mMaxWidthSpinBox, 4, 2, 1, 1);


        mainLayout->addWidget(mGroupBoxSegments);

        groupBox_5 = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setFocusPolicy(Qt::StrongFocus);
        groupBox_5->setProperty("syncGroup", QVariant(QStringLiteral("composeritem")));
        groupBox_5->setProperty("collapsed", QVariant(true));
        gridLayout_4 = new QGridLayout(groupBox_5);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        mLineWidthSpinBox = new QgsDoubleSpinBox(groupBox_5);
        mLineWidthSpinBox->setObjectName(QStringLiteral("mLineWidthSpinBox"));
        sizePolicy2.setHeightForWidth(mLineWidthSpinBox->sizePolicy().hasHeightForWidth());
        mLineWidthSpinBox->setSizePolicy(sizePolicy2);
        mLineWidthSpinBox->setMinimum(0.01);
        mLineWidthSpinBox->setSingleStep(0.1);
        mLineWidthSpinBox->setValue(0.2);
        mLineWidthSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_4->addWidget(mLineWidthSpinBox, 2, 1, 1, 1);

        label_4 = new QLabel(groupBox_5);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_4->addWidget(label_4, 0, 0, 1, 1);

        mAlignmentLabel = new QLabel(groupBox_5);
        mAlignmentLabel->setObjectName(QStringLiteral("mAlignmentLabel"));

        gridLayout_4->addWidget(mAlignmentLabel, 5, 0, 1, 1);

        label_2 = new QLabel(groupBox_5);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_4->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(groupBox_5);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_4->addWidget(label_3, 2, 0, 1, 1);

        label_6 = new QLabel(groupBox_5);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_4->addWidget(label_6, 4, 0, 1, 1);

        label_8 = new QLabel(groupBox_5);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_4->addWidget(label_8, 3, 0, 1, 1);

        mLineWidthDDBtn = new QgsPropertyOverrideButton(groupBox_5);
        mLineWidthDDBtn->setObjectName(QStringLiteral("mLineWidthDDBtn"));

        gridLayout_4->addWidget(mLineWidthDDBtn, 2, 2, 1, 1);

        mLabelBarSpaceSpinBox = new QgsDoubleSpinBox(groupBox_5);
        mLabelBarSpaceSpinBox->setObjectName(QStringLiteral("mLabelBarSpaceSpinBox"));

        gridLayout_4->addWidget(mLabelBarSpaceSpinBox, 1, 1, 1, 2);

        mBoxSizeSpinBox = new QgsDoubleSpinBox(groupBox_5);
        mBoxSizeSpinBox->setObjectName(QStringLiteral("mBoxSizeSpinBox"));

        gridLayout_4->addWidget(mBoxSizeSpinBox, 0, 1, 1, 2);

        mLineJoinStyleCombo = new QgsPenJoinStyleComboBox(groupBox_5);
        mLineJoinStyleCombo->setObjectName(QStringLiteral("mLineJoinStyleCombo"));

        gridLayout_4->addWidget(mLineJoinStyleCombo, 3, 1, 1, 2);

        mLineCapStyleCombo = new QgsPenCapStyleComboBox(groupBox_5);
        mLineCapStyleCombo->setObjectName(QStringLiteral("mLineCapStyleCombo"));

        gridLayout_4->addWidget(mLineCapStyleCombo, 4, 1, 1, 2);

        mAlignmentComboBox = new QComboBox(groupBox_5);
        mAlignmentComboBox->setObjectName(QStringLiteral("mAlignmentComboBox"));

        gridLayout_4->addWidget(mAlignmentComboBox, 5, 1, 1, 2);

        gridLayout_4->setColumnStretch(1, 1);

        mainLayout->addWidget(groupBox_5);

        groupBox_4 = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setFocusPolicy(Qt::StrongFocus);
        groupBox_4->setProperty("syncGroup", QVariant(QStringLiteral("composeritem")));
        groupBox_4->setProperty("collapsed", QVariant(true));
        gridLayout_5 = new QGridLayout(groupBox_4);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        mStrokeColorButton = new QgsColorButton(groupBox_4);
        mStrokeColorButton->setObjectName(QStringLiteral("mStrokeColorButton"));
        mStrokeColorButton->setMinimumSize(QSize(120, 0));
        mStrokeColorButton->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_5->addWidget(mStrokeColorButton);

        mLineColorDDBtn = new QgsPropertyOverrideButton(groupBox_4);
        mLineColorDDBtn->setObjectName(QStringLiteral("mLineColorDDBtn"));

        horizontalLayout_5->addWidget(mLineColorDDBtn);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);


        gridLayout_5->addLayout(horizontalLayout_5, 3, 1, 1, 1);

        mFontButton = new QgsFontButton(groupBox_4);
        mFontButton->setObjectName(QStringLiteral("mFontButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mFontButton->sizePolicy().hasHeightForWidth());
        mFontButton->setSizePolicy(sizePolicy3);

        gridLayout_5->addWidget(mFontButton, 0, 0, 1, 2);

        label_9 = new QLabel(groupBox_4);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_5->addWidget(label_9, 1, 0, 1, 1);

        label_11 = new QLabel(groupBox_4);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_5->addWidget(label_11, 3, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        mFillColorButton = new QgsColorButton(groupBox_4);
        mFillColorButton->setObjectName(QStringLiteral("mFillColorButton"));
        mFillColorButton->setMinimumSize(QSize(120, 0));
        mFillColorButton->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_3->addWidget(mFillColorButton);

        mFillColorDDBtn = new QgsPropertyOverrideButton(groupBox_4);
        mFillColorDDBtn->setObjectName(QStringLiteral("mFillColorDDBtn"));

        horizontalLayout_3->addWidget(mFillColorDDBtn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        gridLayout_5->addLayout(horizontalLayout_3, 1, 1, 1, 1);

        label_10 = new QLabel(groupBox_4);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_5->addWidget(label_10, 2, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        mFillColor2Button = new QgsColorButton(groupBox_4);
        mFillColor2Button->setObjectName(QStringLiteral("mFillColor2Button"));
        mFillColor2Button->setMinimumSize(QSize(120, 0));
        mFillColor2Button->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_4->addWidget(mFillColor2Button);

        mFillColor2DDBtn = new QgsPropertyOverrideButton(groupBox_4);
        mFillColor2DDBtn->setObjectName(QStringLiteral("mFillColor2DDBtn"));

        horizontalLayout_4->addWidget(mFillColor2DDBtn);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        gridLayout_5->addLayout(horizontalLayout_4, 2, 1, 1, 1);


        mainLayout->addWidget(groupBox_4);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

#ifndef QT_NO_SHORTCUT
        mStyleLabel->setBuddy(mStyleComboBox);
        mMapLabel->setBuddy(mMapItemComboBox);
        mUnitLabelLabel->setBuddy(mUnitLabelLineEdit);
        mMapUnitsPerBarUnitLabel->setBuddy(mMapUnitsPerBarUnitSpinBox);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(scrollArea, groupBox);
        QWidget::setTabOrder(groupBox, mMapItemComboBox);
        QWidget::setTabOrder(mMapItemComboBox, mStyleComboBox);
        QWidget::setTabOrder(mStyleComboBox, mGroupBoxUnits);
        QWidget::setTabOrder(mGroupBoxUnits, mUnitsComboBox);
        QWidget::setTabOrder(mUnitsComboBox, mMapUnitsPerBarUnitSpinBox);
        QWidget::setTabOrder(mMapUnitsPerBarUnitSpinBox, mUnitLabelLineEdit);
        QWidget::setTabOrder(mUnitLabelLineEdit, mGroupBoxSegments);
        QWidget::setTabOrder(mGroupBoxSegments, mSegmentsLeftSpinBox);
        QWidget::setTabOrder(mSegmentsLeftSpinBox, mNumberOfSegmentsSpinBox);
        QWidget::setTabOrder(mNumberOfSegmentsSpinBox, mFixedSizeRadio);
        QWidget::setTabOrder(mFixedSizeRadio, mSegmentSizeSpinBox);
        QWidget::setTabOrder(mSegmentSizeSpinBox, mFitWidthRadio);
        QWidget::setTabOrder(mFitWidthRadio, mMinWidthSpinBox);
        QWidget::setTabOrder(mMinWidthSpinBox, mMaxWidthSpinBox);
        QWidget::setTabOrder(mMaxWidthSpinBox, mHeightSpinBox);
        QWidget::setTabOrder(mHeightSpinBox, groupBox_5);
        QWidget::setTabOrder(groupBox_5, mBoxSizeSpinBox);
        QWidget::setTabOrder(mBoxSizeSpinBox, mLabelBarSpaceSpinBox);
        QWidget::setTabOrder(mLabelBarSpaceSpinBox, mLineWidthSpinBox);
        QWidget::setTabOrder(mLineWidthSpinBox, mLineWidthDDBtn);
        QWidget::setTabOrder(mLineWidthDDBtn, mLineJoinStyleCombo);
        QWidget::setTabOrder(mLineJoinStyleCombo, mLineCapStyleCombo);
        QWidget::setTabOrder(mLineCapStyleCombo, mAlignmentComboBox);
        QWidget::setTabOrder(mAlignmentComboBox, groupBox_4);
        QWidget::setTabOrder(groupBox_4, mFontButton);
        QWidget::setTabOrder(mFontButton, mFillColorButton);
        QWidget::setTabOrder(mFillColorButton, mFillColorDDBtn);
        QWidget::setTabOrder(mFillColorDDBtn, mFillColor2Button);
        QWidget::setTabOrder(mFillColor2Button, mFillColor2DDBtn);
        QWidget::setTabOrder(mFillColor2DDBtn, mStrokeColorButton);
        QWidget::setTabOrder(mStrokeColorButton, mLineColorDDBtn);

        retranslateUi(QgsLayoutScaleBarWidgetBase);

        QMetaObject::connectSlotsByName(QgsLayoutScaleBarWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsLayoutScaleBarWidgetBase)
    {
        QgsLayoutScaleBarWidgetBase->setWindowTitle(QApplication::translate("QgsLayoutScaleBarWidgetBase", "Scalebar Options", Q_NULLPTR));
        label_5->setText(QApplication::translate("QgsLayoutScaleBarWidgetBase", "Scalebar", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("QgsLayoutScaleBarWidgetBase", "Main Properties", Q_NULLPTR));
        mStyleLabel->setText(QApplication::translate("QgsLayoutScaleBarWidgetBase", "St&yle", Q_NULLPTR));
        mMapLabel->setText(QApplication::translate("QgsLayoutScaleBarWidgetBase", "&Map", Q_NULLPTR));
        mGroupBoxUnits->setTitle(QApplication::translate("QgsLayoutScaleBarWidgetBase", "Units", Q_NULLPTR));
        label_12->setText(QApplication::translate("QgsLayoutScaleBarWidgetBase", "Scalebar units", Q_NULLPTR));
        mUnitLabelLabel->setText(QApplication::translate("QgsLayoutScaleBarWidgetBase", "&Label for units", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mMapUnitsPerBarUnitSpinBox->setToolTip(QApplication::translate("QgsLayoutScaleBarWidgetBase", "Specifies how many scalebar units per labeled unit. For example, if your scalebar units are set to \"meters\", a multiplier of 1000 will result in the scalebar labels in kilometers.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        mUnitLabelLineEdit->setToolTip(QApplication::translate("QgsLayoutScaleBarWidgetBase", "Text used for labeling the scalebar units, e.g., \"m\" or \"km\". This should be matched to reflect the multiplier above.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        mUnitsComboBox->setToolTip(QApplication::translate("QgsLayoutScaleBarWidgetBase", "Specifies the underlying units used for scalebar calculations, e.g., \"meters\" or \"feet\"", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mMapUnitsPerBarUnitLabel->setText(QApplication::translate("QgsLayoutScaleBarWidgetBase", "Label unit multiplier", Q_NULLPTR));
        mGroupBoxSegments->setTitle(QApplication::translate("QgsLayoutScaleBarWidgetBase", "Segments", Q_NULLPTR));
        mSegmentLabel->setText(QApplication::translate("QgsLayoutScaleBarWidgetBase", "Segments", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mSegmentSizeSpinBox->setToolTip(QApplication::translate("QgsLayoutScaleBarWidgetBase", "Number of scalebar units per scalebar segment", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mSegmentSizeSpinBox->setSuffix(QApplication::translate("QgsLayoutScaleBarWidgetBase", " units", Q_NULLPTR));
        label->setText(QApplication::translate("QgsLayoutScaleBarWidgetBase", "Height", Q_NULLPTR));
        mNumberOfSegmentsSpinBox->setSuffix(QString());
        mNumberOfSegmentsSpinBox->setPrefix(QApplication::translate("QgsLayoutScaleBarWidgetBase", "right ", Q_NULLPTR));
        mSegmentsLeftSpinBox->setSuffix(QString());
        mSegmentsLeftSpinBox->setPrefix(QApplication::translate("QgsLayoutScaleBarWidgetBase", "left ", Q_NULLPTR));
        mFixedSizeRadio->setText(QApplication::translate("QgsLayoutScaleBarWidgetBase", "Fi&xed width", Q_NULLPTR));
        mFitWidthRadio->setText(QApplication::translate("QgsLayoutScaleBarWidgetBase", "Fit segment width", Q_NULLPTR));
        mHeightSpinBox->setSuffix(QApplication::translate("QgsLayoutScaleBarWidgetBase", " mm", Q_NULLPTR));
        mMinWidthSpinBox->setSuffix(QApplication::translate("QgsLayoutScaleBarWidgetBase", " mm", Q_NULLPTR));
        mMaxWidthSpinBox->setSuffix(QApplication::translate("QgsLayoutScaleBarWidgetBase", " mm", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("QgsLayoutScaleBarWidgetBase", "Display", Q_NULLPTR));
        mLineWidthSpinBox->setPrefix(QString());
        mLineWidthSpinBox->setSuffix(QApplication::translate("QgsLayoutScaleBarWidgetBase", " mm", Q_NULLPTR));
        label_4->setText(QApplication::translate("QgsLayoutScaleBarWidgetBase", "Box margin", Q_NULLPTR));
        mAlignmentLabel->setText(QApplication::translate("QgsLayoutScaleBarWidgetBase", "Alignment", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsLayoutScaleBarWidgetBase", "Labels margin", Q_NULLPTR));
        label_3->setText(QApplication::translate("QgsLayoutScaleBarWidgetBase", "Line width", Q_NULLPTR));
        label_6->setText(QApplication::translate("QgsLayoutScaleBarWidgetBase", "Cap style", Q_NULLPTR));
        label_8->setText(QApplication::translate("QgsLayoutScaleBarWidgetBase", "Join style", Q_NULLPTR));
        mLineWidthDDBtn->setText(QApplication::translate("QgsLayoutScaleBarWidgetBase", "\342\200\246", Q_NULLPTR));
        mLabelBarSpaceSpinBox->setPrefix(QString());
        mLabelBarSpaceSpinBox->setSuffix(QApplication::translate("QgsLayoutScaleBarWidgetBase", " mm", Q_NULLPTR));
        mBoxSizeSpinBox->setPrefix(QString());
        mBoxSizeSpinBox->setSuffix(QApplication::translate("QgsLayoutScaleBarWidgetBase", " mm", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("QgsLayoutScaleBarWidgetBase", "Fonts and Colors", Q_NULLPTR));
        mStrokeColorButton->setText(QString());
        mLineColorDDBtn->setText(QApplication::translate("QgsLayoutScaleBarWidgetBase", "\342\200\246", Q_NULLPTR));
        mFontButton->setText(QApplication::translate("QgsLayoutScaleBarWidgetBase", "Font", Q_NULLPTR));
        label_9->setText(QApplication::translate("QgsLayoutScaleBarWidgetBase", "Fill color", Q_NULLPTR));
        label_11->setText(QApplication::translate("QgsLayoutScaleBarWidgetBase", "Line color", Q_NULLPTR));
        mFillColorButton->setText(QString());
        mFillColorDDBtn->setText(QApplication::translate("QgsLayoutScaleBarWidgetBase", "\342\200\246", Q_NULLPTR));
        label_10->setText(QApplication::translate("QgsLayoutScaleBarWidgetBase", "Secondary fill color", Q_NULLPTR));
        mFillColor2Button->setText(QString());
        mFillColor2DDBtn->setText(QApplication::translate("QgsLayoutScaleBarWidgetBase", "\342\200\246", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsLayoutScaleBarWidgetBase: public Ui_QgsLayoutScaleBarWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLAYOUTSCALEBARWIDGETBASE_H
