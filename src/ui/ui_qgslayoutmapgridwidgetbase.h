/********************************************************************************
** Form generated from reading UI file 'qgslayoutmapgridwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLAYOUTMAPGRIDWIDGETBASE_H
#define UI_QGSLAYOUTMAPGRIDWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsblendmodecombobox.h"
#include "qgscollapsiblegroupbox.h"
#include "qgscolorbutton.h"
#include "qgsdoublespinbox.h"
#include "qgsfontbutton.h"
#include "qgsscrollarea.h"
#include "qgsspinbox.h"
#include "qgssymbolbutton.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLayoutMapGridWidgetBase
{
public:
    QVBoxLayout *verticalLayout_2;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *mainLayout;
    QgsCollapsibleGroupBoxBasic *mGridCheckBox;
    QGridLayout *gridLayout_6;
    QLabel *mGridTypeLabel_2;
    QComboBox *mGridTypeComboBox;
    QLabel *mMapGridCRSLabel;
    QPushButton *mMapGridCRSButton;
    QLabel *mMapGridUnitLabel;
    QComboBox *mMapGridUnitComboBox;
    QLabel *mIntervalXLabel_2;
    QVBoxLayout *verticalLayout_9;
    QgsDoubleSpinBox *mIntervalXSpinBox;
    QgsDoubleSpinBox *mIntervalYSpinBox;
    QLabel *mOffsetXLabel_2;
    QVBoxLayout *verticalLayout_10;
    QgsDoubleSpinBox *mOffsetXSpinBox;
    QgsDoubleSpinBox *mOffsetYSpinBox;
    QLabel *mCrossWidthLabel;
    QgsDoubleSpinBox *mCrossWidthSpinBox;
    QLabel *mLineStyleLabel;
    QLabel *mMarkerStyleLabel;
    QLabel *mGridBlendLabel;
    QgsBlendModeComboBox *mGridBlendComboBox;
    QgsSymbolButton *mGridLineStyleButton;
    QgsSymbolButton *mGridMarkerStyleButton;
    QgsCollapsibleGroupBoxBasic *mGridFrameGroupBox;
    QGridLayout *gridLayout_3;
    QLabel *mFrameStyleLabel_2;
    QLabel *mFrameWidthLabel;
    QLabel *mFramePenLabel;
    QgsDoubleSpinBox *mGridFramePenSizeSpinBox;
    QgsColorButton *mGridFramePenColorButton;
    QLabel *mFrameFillLabel;
    QgsColorButton *mGridFrameFill1ColorButton;
    QgsColorButton *mGridFrameFill2ColorButton;
    QGridLayout *gridLayout_4;
    QCheckBox *mCheckGridLeftSide;
    QCheckBox *mCheckGridRightSide;
    QCheckBox *mCheckGridTopSide;
    QCheckBox *mCheckGridBottomSide;
    QComboBox *mFrameStyleComboBox;
    QgsDoubleSpinBox *mFrameWidthSpinBox;
    QLabel *mRightDivisionsLabel;
    QLabel *mLeftDivisionsLabel;
    QLabel *mTopDivisionsLabel;
    QLabel *mBottomDivisionsLabel;
    QComboBox *mFrameDivisionsLeftComboBox;
    QComboBox *mFrameDivisionsRightComboBox;
    QComboBox *mFrameDivisionsTopComboBox;
    QComboBox *mFrameDivisionsBottomComboBox;
    QLabel *mFrameMarginLabel;
    QgsDoubleSpinBox *mGridFrameMarginSpinBox;
    QgsCollapsibleGroupBoxBasic *mDrawAnnotationGroupBox;
    QGridLayout *gridLayout;
    QLabel *mAnnotationFormatLabel;
    QHBoxLayout *horizontalLayout_13;
    QComboBox *mAnnotationFormatComboBox;
    QToolButton *mAnnotationFormatButton;
    QLabel *mAnnotationPositionLabelLeft;
    QComboBox *mAnnotationDisplayLeftComboBox;
    QComboBox *mAnnotationPositionLeftComboBox;
    QComboBox *mAnnotationDirectionComboBoxLeft;
    QLabel *mAnnotationPositionLabelRight;
    QComboBox *mAnnotationDisplayRightComboBox;
    QComboBox *mAnnotationPositionRightComboBox;
    QComboBox *mAnnotationDirectionComboBoxRight;
    QLabel *mAnnotationPositionLabelTop;
    QComboBox *mAnnotationDisplayTopComboBox;
    QComboBox *mAnnotationPositionTopComboBox;
    QComboBox *mAnnotationDirectionComboBoxTop;
    QLabel *mAnnotationPositionLabelBottom;
    QComboBox *mAnnotationDisplayBottomComboBox;
    QComboBox *mAnnotationPositionBottomComboBox;
    QComboBox *mAnnotationDirectionComboBoxBottom;
    QLabel *label;
    QLabel *mFontColorLabel;
    QLabel *mDistanceToFrameLabel;
    QgsDoubleSpinBox *mDistanceToMapFrameSpinBox;
    QLabel *mCoordinatePrecisionLabel;
    QgsSpinBox *mCoordinatePrecisionSpinBox;
    QHBoxLayout *horizontalLayout;
    QgsColorButton *mAnnotationFontColorButton;
    QSpacerItem *horizontalSpacer;
    QgsFontButton *mAnnotationFontButton;

    void setupUi(QWidget *QgsLayoutMapGridWidgetBase)
    {
        if (QgsLayoutMapGridWidgetBase->objectName().isEmpty())
            QgsLayoutMapGridWidgetBase->setObjectName(QStringLiteral("QgsLayoutMapGridWidgetBase"));
        QgsLayoutMapGridWidgetBase->resize(403, 734);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsLayoutMapGridWidgetBase->sizePolicy().hasHeightForWidth());
        QgsLayoutMapGridWidgetBase->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(QgsLayoutMapGridWidgetBase);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QgsScrollArea(QgsLayoutMapGridWidgetBase);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 389, 1452));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(scrollAreaWidgetContents->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents->setSizePolicy(sizePolicy1);
        mainLayout = new QVBoxLayout(scrollAreaWidgetContents);
        mainLayout->setSpacing(0);
        mainLayout->setContentsMargins(11, 11, 11, 11);
        mainLayout->setObjectName(QStringLiteral("mainLayout"));
        mainLayout->setContentsMargins(0, 0, 0, 0);
        mGridCheckBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mGridCheckBox->setObjectName(QStringLiteral("mGridCheckBox"));
        gridLayout_6 = new QGridLayout(mGridCheckBox);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        mGridTypeLabel_2 = new QLabel(mGridCheckBox);
        mGridTypeLabel_2->setObjectName(QStringLiteral("mGridTypeLabel_2"));
        mGridTypeLabel_2->setWordWrap(false);

        gridLayout_6->addWidget(mGridTypeLabel_2, 0, 0, 1, 1);

        mGridTypeComboBox = new QComboBox(mGridCheckBox);
        mGridTypeComboBox->setObjectName(QStringLiteral("mGridTypeComboBox"));

        gridLayout_6->addWidget(mGridTypeComboBox, 0, 1, 1, 1);

        mMapGridCRSLabel = new QLabel(mGridCheckBox);
        mMapGridCRSLabel->setObjectName(QStringLiteral("mMapGridCRSLabel"));

        gridLayout_6->addWidget(mMapGridCRSLabel, 1, 0, 1, 1);

        mMapGridCRSButton = new QPushButton(mGridCheckBox);
        mMapGridCRSButton->setObjectName(QStringLiteral("mMapGridCRSButton"));

        gridLayout_6->addWidget(mMapGridCRSButton, 1, 1, 1, 1);

        mMapGridUnitLabel = new QLabel(mGridCheckBox);
        mMapGridUnitLabel->setObjectName(QStringLiteral("mMapGridUnitLabel"));

        gridLayout_6->addWidget(mMapGridUnitLabel, 2, 0, 1, 1);

        mMapGridUnitComboBox = new QComboBox(mGridCheckBox);
        mMapGridUnitComboBox->setObjectName(QStringLiteral("mMapGridUnitComboBox"));

        gridLayout_6->addWidget(mMapGridUnitComboBox, 2, 1, 1, 1);

        mIntervalXLabel_2 = new QLabel(mGridCheckBox);
        mIntervalXLabel_2->setObjectName(QStringLiteral("mIntervalXLabel_2"));
        mIntervalXLabel_2->setWordWrap(false);

        gridLayout_6->addWidget(mIntervalXLabel_2, 3, 0, 1, 1);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        mIntervalXSpinBox = new QgsDoubleSpinBox(mGridCheckBox);
        mIntervalXSpinBox->setObjectName(QStringLiteral("mIntervalXSpinBox"));
        mIntervalXSpinBox->setDecimals(12);
        mIntervalXSpinBox->setMaximum(1e+7);

        verticalLayout_9->addWidget(mIntervalXSpinBox);

        mIntervalYSpinBox = new QgsDoubleSpinBox(mGridCheckBox);
        mIntervalYSpinBox->setObjectName(QStringLiteral("mIntervalYSpinBox"));
        mIntervalYSpinBox->setDecimals(12);
        mIntervalYSpinBox->setMaximum(1e+7);

        verticalLayout_9->addWidget(mIntervalYSpinBox);


        gridLayout_6->addLayout(verticalLayout_9, 3, 1, 1, 1);

        mOffsetXLabel_2 = new QLabel(mGridCheckBox);
        mOffsetXLabel_2->setObjectName(QStringLiteral("mOffsetXLabel_2"));
        mOffsetXLabel_2->setWordWrap(false);

        gridLayout_6->addWidget(mOffsetXLabel_2, 4, 0, 1, 1);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        mOffsetXSpinBox = new QgsDoubleSpinBox(mGridCheckBox);
        mOffsetXSpinBox->setObjectName(QStringLiteral("mOffsetXSpinBox"));
        mOffsetXSpinBox->setDecimals(12);
        mOffsetXSpinBox->setMaximum(1e+7);

        verticalLayout_10->addWidget(mOffsetXSpinBox);

        mOffsetYSpinBox = new QgsDoubleSpinBox(mGridCheckBox);
        mOffsetYSpinBox->setObjectName(QStringLiteral("mOffsetYSpinBox"));
        mOffsetYSpinBox->setDecimals(12);
        mOffsetYSpinBox->setMaximum(1e+7);

        verticalLayout_10->addWidget(mOffsetYSpinBox);


        gridLayout_6->addLayout(verticalLayout_10, 4, 1, 1, 1);

        mCrossWidthLabel = new QLabel(mGridCheckBox);
        mCrossWidthLabel->setObjectName(QStringLiteral("mCrossWidthLabel"));
        mCrossWidthLabel->setWordWrap(false);

        gridLayout_6->addWidget(mCrossWidthLabel, 5, 0, 1, 1);

        mCrossWidthSpinBox = new QgsDoubleSpinBox(mGridCheckBox);
        mCrossWidthSpinBox->setObjectName(QStringLiteral("mCrossWidthSpinBox"));
        mCrossWidthSpinBox->setDecimals(2);
        mCrossWidthSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_6->addWidget(mCrossWidthSpinBox, 5, 1, 1, 1);

        mLineStyleLabel = new QLabel(mGridCheckBox);
        mLineStyleLabel->setObjectName(QStringLiteral("mLineStyleLabel"));
        mLineStyleLabel->setWordWrap(false);

        gridLayout_6->addWidget(mLineStyleLabel, 6, 0, 1, 1);

        mMarkerStyleLabel = new QLabel(mGridCheckBox);
        mMarkerStyleLabel->setObjectName(QStringLiteral("mMarkerStyleLabel"));
        mMarkerStyleLabel->setWordWrap(false);

        gridLayout_6->addWidget(mMarkerStyleLabel, 7, 0, 1, 1);

        mGridBlendLabel = new QLabel(mGridCheckBox);
        mGridBlendLabel->setObjectName(QStringLiteral("mGridBlendLabel"));

        gridLayout_6->addWidget(mGridBlendLabel, 8, 0, 1, 1);

        mGridBlendComboBox = new QgsBlendModeComboBox(mGridCheckBox);
        mGridBlendComboBox->setObjectName(QStringLiteral("mGridBlendComboBox"));

        gridLayout_6->addWidget(mGridBlendComboBox, 8, 1, 1, 1);

        mGridLineStyleButton = new QgsSymbolButton(mGridCheckBox);
        mGridLineStyleButton->setObjectName(QStringLiteral("mGridLineStyleButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mGridLineStyleButton->sizePolicy().hasHeightForWidth());
        mGridLineStyleButton->setSizePolicy(sizePolicy2);

        gridLayout_6->addWidget(mGridLineStyleButton, 6, 1, 1, 1);

        mGridMarkerStyleButton = new QgsSymbolButton(mGridCheckBox);
        mGridMarkerStyleButton->setObjectName(QStringLiteral("mGridMarkerStyleButton"));
        sizePolicy2.setHeightForWidth(mGridMarkerStyleButton->sizePolicy().hasHeightForWidth());
        mGridMarkerStyleButton->setSizePolicy(sizePolicy2);

        gridLayout_6->addWidget(mGridMarkerStyleButton, 7, 1, 1, 1);


        mainLayout->addWidget(mGridCheckBox);

        mGridFrameGroupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mGridFrameGroupBox->setObjectName(QStringLiteral("mGridFrameGroupBox"));
        mGridFrameGroupBox->setFocusPolicy(Qt::StrongFocus);
        mGridFrameGroupBox->setProperty("syncGroup", QVariant(QStringLiteral("composermapgrid")));
        gridLayout_3 = new QGridLayout(mGridFrameGroupBox);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        mFrameStyleLabel_2 = new QLabel(mGridFrameGroupBox);
        mFrameStyleLabel_2->setObjectName(QStringLiteral("mFrameStyleLabel_2"));
        mFrameStyleLabel_2->setWordWrap(false);

        gridLayout_3->addWidget(mFrameStyleLabel_2, 0, 0, 1, 1);

        mFrameWidthLabel = new QLabel(mGridFrameGroupBox);
        mFrameWidthLabel->setObjectName(QStringLiteral("mFrameWidthLabel"));
        mFrameWidthLabel->setWordWrap(false);

        gridLayout_3->addWidget(mFrameWidthLabel, 1, 0, 1, 1);

        mFramePenLabel = new QLabel(mGridFrameGroupBox);
        mFramePenLabel->setObjectName(QStringLiteral("mFramePenLabel"));

        gridLayout_3->addWidget(mFramePenLabel, 3, 0, 1, 1);

        mGridFramePenSizeSpinBox = new QgsDoubleSpinBox(mGridFrameGroupBox);
        mGridFramePenSizeSpinBox->setObjectName(QStringLiteral("mGridFramePenSizeSpinBox"));
        mGridFramePenSizeSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_3->addWidget(mGridFramePenSizeSpinBox, 3, 1, 1, 1);

        mGridFramePenColorButton = new QgsColorButton(mGridFrameGroupBox);
        mGridFramePenColorButton->setObjectName(QStringLiteral("mGridFramePenColorButton"));
        mGridFramePenColorButton->setMinimumSize(QSize(100, 0));
        mGridFramePenColorButton->setMaximumSize(QSize(100, 16777215));

        gridLayout_3->addWidget(mGridFramePenColorButton, 3, 2, 1, 1);

        mFrameFillLabel = new QLabel(mGridFrameGroupBox);
        mFrameFillLabel->setObjectName(QStringLiteral("mFrameFillLabel"));

        gridLayout_3->addWidget(mFrameFillLabel, 4, 0, 1, 1);

        mGridFrameFill1ColorButton = new QgsColorButton(mGridFrameGroupBox);
        mGridFrameFill1ColorButton->setObjectName(QStringLiteral("mGridFrameFill1ColorButton"));
        mGridFrameFill1ColorButton->setMinimumSize(QSize(100, 0));
        mGridFrameFill1ColorButton->setMaximumSize(QSize(100, 16777215));

        gridLayout_3->addWidget(mGridFrameFill1ColorButton, 4, 1, 1, 1);

        mGridFrameFill2ColorButton = new QgsColorButton(mGridFrameGroupBox);
        mGridFrameFill2ColorButton->setObjectName(QStringLiteral("mGridFrameFill2ColorButton"));
        mGridFrameFill2ColorButton->setMinimumSize(QSize(100, 0));
        mGridFrameFill2ColorButton->setMaximumSize(QSize(100, 16777215));

        gridLayout_3->addWidget(mGridFrameFill2ColorButton, 4, 2, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        mCheckGridLeftSide = new QCheckBox(mGridFrameGroupBox);
        mCheckGridLeftSide->setObjectName(QStringLiteral("mCheckGridLeftSide"));

        gridLayout_4->addWidget(mCheckGridLeftSide, 0, 0, 1, 1);

        mCheckGridRightSide = new QCheckBox(mGridFrameGroupBox);
        mCheckGridRightSide->setObjectName(QStringLiteral("mCheckGridRightSide"));

        gridLayout_4->addWidget(mCheckGridRightSide, 0, 1, 1, 1);

        mCheckGridTopSide = new QCheckBox(mGridFrameGroupBox);
        mCheckGridTopSide->setObjectName(QStringLiteral("mCheckGridTopSide"));

        gridLayout_4->addWidget(mCheckGridTopSide, 1, 0, 1, 1);

        mCheckGridBottomSide = new QCheckBox(mGridFrameGroupBox);
        mCheckGridBottomSide->setObjectName(QStringLiteral("mCheckGridBottomSide"));

        gridLayout_4->addWidget(mCheckGridBottomSide, 1, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_4, 9, 0, 1, 3);

        mFrameStyleComboBox = new QComboBox(mGridFrameGroupBox);
        mFrameStyleComboBox->setObjectName(QStringLiteral("mFrameStyleComboBox"));

        gridLayout_3->addWidget(mFrameStyleComboBox, 0, 1, 1, 2);

        mFrameWidthSpinBox = new QgsDoubleSpinBox(mGridFrameGroupBox);
        mFrameWidthSpinBox->setObjectName(QStringLiteral("mFrameWidthSpinBox"));
        mFrameWidthSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_3->addWidget(mFrameWidthSpinBox, 1, 1, 1, 2);

        mRightDivisionsLabel = new QLabel(mGridFrameGroupBox);
        mRightDivisionsLabel->setObjectName(QStringLiteral("mRightDivisionsLabel"));

        gridLayout_3->addWidget(mRightDivisionsLabel, 6, 0, 1, 1);

        mLeftDivisionsLabel = new QLabel(mGridFrameGroupBox);
        mLeftDivisionsLabel->setObjectName(QStringLiteral("mLeftDivisionsLabel"));

        gridLayout_3->addWidget(mLeftDivisionsLabel, 5, 0, 1, 1);

        mTopDivisionsLabel = new QLabel(mGridFrameGroupBox);
        mTopDivisionsLabel->setObjectName(QStringLiteral("mTopDivisionsLabel"));

        gridLayout_3->addWidget(mTopDivisionsLabel, 7, 0, 1, 1);

        mBottomDivisionsLabel = new QLabel(mGridFrameGroupBox);
        mBottomDivisionsLabel->setObjectName(QStringLiteral("mBottomDivisionsLabel"));

        gridLayout_3->addWidget(mBottomDivisionsLabel, 8, 0, 1, 1);

        mFrameDivisionsLeftComboBox = new QComboBox(mGridFrameGroupBox);
        mFrameDivisionsLeftComboBox->setObjectName(QStringLiteral("mFrameDivisionsLeftComboBox"));

        gridLayout_3->addWidget(mFrameDivisionsLeftComboBox, 5, 1, 1, 2);

        mFrameDivisionsRightComboBox = new QComboBox(mGridFrameGroupBox);
        mFrameDivisionsRightComboBox->setObjectName(QStringLiteral("mFrameDivisionsRightComboBox"));

        gridLayout_3->addWidget(mFrameDivisionsRightComboBox, 6, 1, 1, 2);

        mFrameDivisionsTopComboBox = new QComboBox(mGridFrameGroupBox);
        mFrameDivisionsTopComboBox->setObjectName(QStringLiteral("mFrameDivisionsTopComboBox"));

        gridLayout_3->addWidget(mFrameDivisionsTopComboBox, 7, 1, 1, 2);

        mFrameDivisionsBottomComboBox = new QComboBox(mGridFrameGroupBox);
        mFrameDivisionsBottomComboBox->setObjectName(QStringLiteral("mFrameDivisionsBottomComboBox"));

        gridLayout_3->addWidget(mFrameDivisionsBottomComboBox, 8, 1, 1, 2);

        mFrameMarginLabel = new QLabel(mGridFrameGroupBox);
        mFrameMarginLabel->setObjectName(QStringLiteral("mFrameMarginLabel"));

        gridLayout_3->addWidget(mFrameMarginLabel, 2, 0, 1, 1);

        mGridFrameMarginSpinBox = new QgsDoubleSpinBox(mGridFrameGroupBox);
        mGridFrameMarginSpinBox->setObjectName(QStringLiteral("mGridFrameMarginSpinBox"));
        mGridFrameMarginSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_3->addWidget(mGridFrameMarginSpinBox, 2, 1, 1, 2);

        gridLayout_3->setColumnStretch(1, 1);
        gridLayout_3->setColumnStretch(2, 1);

        mainLayout->addWidget(mGridFrameGroupBox);

        mDrawAnnotationGroupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mDrawAnnotationGroupBox->setObjectName(QStringLiteral("mDrawAnnotationGroupBox"));
        mDrawAnnotationGroupBox->setEnabled(true);
        mDrawAnnotationGroupBox->setCheckable(true);
        mDrawAnnotationGroupBox->setChecked(false);
        mDrawAnnotationGroupBox->setProperty("syncGroup", QVariant(QStringLiteral("composermapgrid")));
        mDrawAnnotationGroupBox->setProperty("collapsed", QVariant(false));
        gridLayout = new QGridLayout(mDrawAnnotationGroupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mAnnotationFormatLabel = new QLabel(mDrawAnnotationGroupBox);
        mAnnotationFormatLabel->setObjectName(QStringLiteral("mAnnotationFormatLabel"));

        gridLayout->addWidget(mAnnotationFormatLabel, 0, 0, 1, 1);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        mAnnotationFormatComboBox = new QComboBox(mDrawAnnotationGroupBox);
        mAnnotationFormatComboBox->setObjectName(QStringLiteral("mAnnotationFormatComboBox"));

        horizontalLayout_13->addWidget(mAnnotationFormatComboBox);

        mAnnotationFormatButton = new QToolButton(mDrawAnnotationGroupBox);
        mAnnotationFormatButton->setObjectName(QStringLiteral("mAnnotationFormatButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/mIconExpression.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mAnnotationFormatButton->setIcon(icon);

        horizontalLayout_13->addWidget(mAnnotationFormatButton);


        gridLayout->addLayout(horizontalLayout_13, 0, 1, 1, 1);

        mAnnotationPositionLabelLeft = new QLabel(mDrawAnnotationGroupBox);
        mAnnotationPositionLabelLeft->setObjectName(QStringLiteral("mAnnotationPositionLabelLeft"));
        mAnnotationPositionLabelLeft->setWordWrap(true);

        gridLayout->addWidget(mAnnotationPositionLabelLeft, 1, 0, 1, 1);

        mAnnotationDisplayLeftComboBox = new QComboBox(mDrawAnnotationGroupBox);
        mAnnotationDisplayLeftComboBox->setObjectName(QStringLiteral("mAnnotationDisplayLeftComboBox"));

        gridLayout->addWidget(mAnnotationDisplayLeftComboBox, 1, 1, 1, 1);

        mAnnotationPositionLeftComboBox = new QComboBox(mDrawAnnotationGroupBox);
        mAnnotationPositionLeftComboBox->setObjectName(QStringLiteral("mAnnotationPositionLeftComboBox"));

        gridLayout->addWidget(mAnnotationPositionLeftComboBox, 2, 1, 1, 1);

        mAnnotationDirectionComboBoxLeft = new QComboBox(mDrawAnnotationGroupBox);
        mAnnotationDirectionComboBoxLeft->setObjectName(QStringLiteral("mAnnotationDirectionComboBoxLeft"));

        gridLayout->addWidget(mAnnotationDirectionComboBoxLeft, 3, 1, 1, 1);

        mAnnotationPositionLabelRight = new QLabel(mDrawAnnotationGroupBox);
        mAnnotationPositionLabelRight->setObjectName(QStringLiteral("mAnnotationPositionLabelRight"));
        mAnnotationPositionLabelRight->setWordWrap(true);

        gridLayout->addWidget(mAnnotationPositionLabelRight, 4, 0, 1, 1);

        mAnnotationDisplayRightComboBox = new QComboBox(mDrawAnnotationGroupBox);
        mAnnotationDisplayRightComboBox->setObjectName(QStringLiteral("mAnnotationDisplayRightComboBox"));

        gridLayout->addWidget(mAnnotationDisplayRightComboBox, 4, 1, 1, 1);

        mAnnotationPositionRightComboBox = new QComboBox(mDrawAnnotationGroupBox);
        mAnnotationPositionRightComboBox->setObjectName(QStringLiteral("mAnnotationPositionRightComboBox"));

        gridLayout->addWidget(mAnnotationPositionRightComboBox, 5, 1, 1, 1);

        mAnnotationDirectionComboBoxRight = new QComboBox(mDrawAnnotationGroupBox);
        mAnnotationDirectionComboBoxRight->setObjectName(QStringLiteral("mAnnotationDirectionComboBoxRight"));

        gridLayout->addWidget(mAnnotationDirectionComboBoxRight, 6, 1, 1, 1);

        mAnnotationPositionLabelTop = new QLabel(mDrawAnnotationGroupBox);
        mAnnotationPositionLabelTop->setObjectName(QStringLiteral("mAnnotationPositionLabelTop"));
        mAnnotationPositionLabelTop->setWordWrap(true);

        gridLayout->addWidget(mAnnotationPositionLabelTop, 7, 0, 1, 1);

        mAnnotationDisplayTopComboBox = new QComboBox(mDrawAnnotationGroupBox);
        mAnnotationDisplayTopComboBox->setObjectName(QStringLiteral("mAnnotationDisplayTopComboBox"));

        gridLayout->addWidget(mAnnotationDisplayTopComboBox, 7, 1, 1, 1);

        mAnnotationPositionTopComboBox = new QComboBox(mDrawAnnotationGroupBox);
        mAnnotationPositionTopComboBox->setObjectName(QStringLiteral("mAnnotationPositionTopComboBox"));

        gridLayout->addWidget(mAnnotationPositionTopComboBox, 8, 1, 1, 1);

        mAnnotationDirectionComboBoxTop = new QComboBox(mDrawAnnotationGroupBox);
        mAnnotationDirectionComboBoxTop->setObjectName(QStringLiteral("mAnnotationDirectionComboBoxTop"));

        gridLayout->addWidget(mAnnotationDirectionComboBoxTop, 9, 1, 1, 1);

        mAnnotationPositionLabelBottom = new QLabel(mDrawAnnotationGroupBox);
        mAnnotationPositionLabelBottom->setObjectName(QStringLiteral("mAnnotationPositionLabelBottom"));
        mAnnotationPositionLabelBottom->setWordWrap(true);

        gridLayout->addWidget(mAnnotationPositionLabelBottom, 10, 0, 1, 1);

        mAnnotationDisplayBottomComboBox = new QComboBox(mDrawAnnotationGroupBox);
        mAnnotationDisplayBottomComboBox->setObjectName(QStringLiteral("mAnnotationDisplayBottomComboBox"));

        gridLayout->addWidget(mAnnotationDisplayBottomComboBox, 10, 1, 1, 1);

        mAnnotationPositionBottomComboBox = new QComboBox(mDrawAnnotationGroupBox);
        mAnnotationPositionBottomComboBox->setObjectName(QStringLiteral("mAnnotationPositionBottomComboBox"));

        gridLayout->addWidget(mAnnotationPositionBottomComboBox, 11, 1, 1, 1);

        mAnnotationDirectionComboBoxBottom = new QComboBox(mDrawAnnotationGroupBox);
        mAnnotationDirectionComboBoxBottom->setObjectName(QStringLiteral("mAnnotationDirectionComboBoxBottom"));

        gridLayout->addWidget(mAnnotationDirectionComboBoxBottom, 12, 1, 1, 1);

        label = new QLabel(mDrawAnnotationGroupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 13, 0, 1, 1);

        mFontColorLabel = new QLabel(mDrawAnnotationGroupBox);
        mFontColorLabel->setObjectName(QStringLiteral("mFontColorLabel"));

        gridLayout->addWidget(mFontColorLabel, 14, 0, 1, 1);

        mDistanceToFrameLabel = new QLabel(mDrawAnnotationGroupBox);
        mDistanceToFrameLabel->setObjectName(QStringLiteral("mDistanceToFrameLabel"));
        mDistanceToFrameLabel->setWordWrap(true);

        gridLayout->addWidget(mDistanceToFrameLabel, 15, 0, 1, 1);

        mDistanceToMapFrameSpinBox = new QgsDoubleSpinBox(mDrawAnnotationGroupBox);
        mDistanceToMapFrameSpinBox->setObjectName(QStringLiteral("mDistanceToMapFrameSpinBox"));

        gridLayout->addWidget(mDistanceToMapFrameSpinBox, 15, 1, 1, 1);

        mCoordinatePrecisionLabel = new QLabel(mDrawAnnotationGroupBox);
        mCoordinatePrecisionLabel->setObjectName(QStringLiteral("mCoordinatePrecisionLabel"));
        mCoordinatePrecisionLabel->setWordWrap(true);

        gridLayout->addWidget(mCoordinatePrecisionLabel, 16, 0, 1, 1);

        mCoordinatePrecisionSpinBox = new QgsSpinBox(mDrawAnnotationGroupBox);
        mCoordinatePrecisionSpinBox->setObjectName(QStringLiteral("mCoordinatePrecisionSpinBox"));
        mCoordinatePrecisionSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout->addWidget(mCoordinatePrecisionSpinBox, 16, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mAnnotationFontColorButton = new QgsColorButton(mDrawAnnotationGroupBox);
        mAnnotationFontColorButton->setObjectName(QStringLiteral("mAnnotationFontColorButton"));
        mAnnotationFontColorButton->setMinimumSize(QSize(120, 0));

        horizontalLayout->addWidget(mAnnotationFontColorButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 14, 1, 1, 1);

        mAnnotationFontButton = new QgsFontButton(mDrawAnnotationGroupBox);
        mAnnotationFontButton->setObjectName(QStringLiteral("mAnnotationFontButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mAnnotationFontButton->sizePolicy().hasHeightForWidth());
        mAnnotationFontButton->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(mAnnotationFontButton, 13, 1, 1, 1);


        mainLayout->addWidget(mDrawAnnotationGroupBox);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);

        QWidget::setTabOrder(scrollArea, mGridTypeComboBox);
        QWidget::setTabOrder(mGridTypeComboBox, mMapGridCRSButton);
        QWidget::setTabOrder(mMapGridCRSButton, mMapGridUnitComboBox);
        QWidget::setTabOrder(mMapGridUnitComboBox, mIntervalXSpinBox);
        QWidget::setTabOrder(mIntervalXSpinBox, mIntervalYSpinBox);
        QWidget::setTabOrder(mIntervalYSpinBox, mOffsetXSpinBox);
        QWidget::setTabOrder(mOffsetXSpinBox, mOffsetYSpinBox);
        QWidget::setTabOrder(mOffsetYSpinBox, mCrossWidthSpinBox);
        QWidget::setTabOrder(mCrossWidthSpinBox, mGridLineStyleButton);
        QWidget::setTabOrder(mGridLineStyleButton, mGridMarkerStyleButton);
        QWidget::setTabOrder(mGridMarkerStyleButton, mGridBlendComboBox);
        QWidget::setTabOrder(mGridBlendComboBox, mGridFrameGroupBox);
        QWidget::setTabOrder(mGridFrameGroupBox, mFrameStyleComboBox);
        QWidget::setTabOrder(mFrameStyleComboBox, mFrameWidthSpinBox);
        QWidget::setTabOrder(mFrameWidthSpinBox, mGridFrameMarginSpinBox);
        QWidget::setTabOrder(mGridFrameMarginSpinBox, mGridFramePenSizeSpinBox);
        QWidget::setTabOrder(mGridFramePenSizeSpinBox, mGridFramePenColorButton);
        QWidget::setTabOrder(mGridFramePenColorButton, mGridFrameFill1ColorButton);
        QWidget::setTabOrder(mGridFrameFill1ColorButton, mGridFrameFill2ColorButton);
        QWidget::setTabOrder(mGridFrameFill2ColorButton, mFrameDivisionsLeftComboBox);
        QWidget::setTabOrder(mFrameDivisionsLeftComboBox, mFrameDivisionsRightComboBox);
        QWidget::setTabOrder(mFrameDivisionsRightComboBox, mFrameDivisionsTopComboBox);
        QWidget::setTabOrder(mFrameDivisionsTopComboBox, mFrameDivisionsBottomComboBox);
        QWidget::setTabOrder(mFrameDivisionsBottomComboBox, mCheckGridLeftSide);
        QWidget::setTabOrder(mCheckGridLeftSide, mCheckGridRightSide);
        QWidget::setTabOrder(mCheckGridRightSide, mCheckGridTopSide);
        QWidget::setTabOrder(mCheckGridTopSide, mCheckGridBottomSide);
        QWidget::setTabOrder(mCheckGridBottomSide, mDrawAnnotationGroupBox);
        QWidget::setTabOrder(mDrawAnnotationGroupBox, mAnnotationFormatComboBox);
        QWidget::setTabOrder(mAnnotationFormatComboBox, mAnnotationFormatButton);
        QWidget::setTabOrder(mAnnotationFormatButton, mAnnotationDisplayLeftComboBox);
        QWidget::setTabOrder(mAnnotationDisplayLeftComboBox, mAnnotationPositionLeftComboBox);
        QWidget::setTabOrder(mAnnotationPositionLeftComboBox, mAnnotationDirectionComboBoxLeft);
        QWidget::setTabOrder(mAnnotationDirectionComboBoxLeft, mAnnotationDisplayRightComboBox);
        QWidget::setTabOrder(mAnnotationDisplayRightComboBox, mAnnotationPositionRightComboBox);
        QWidget::setTabOrder(mAnnotationPositionRightComboBox, mAnnotationDirectionComboBoxRight);
        QWidget::setTabOrder(mAnnotationDirectionComboBoxRight, mAnnotationDisplayTopComboBox);
        QWidget::setTabOrder(mAnnotationDisplayTopComboBox, mAnnotationPositionTopComboBox);
        QWidget::setTabOrder(mAnnotationPositionTopComboBox, mAnnotationDirectionComboBoxTop);
        QWidget::setTabOrder(mAnnotationDirectionComboBoxTop, mAnnotationDisplayBottomComboBox);
        QWidget::setTabOrder(mAnnotationDisplayBottomComboBox, mAnnotationPositionBottomComboBox);
        QWidget::setTabOrder(mAnnotationPositionBottomComboBox, mAnnotationDirectionComboBoxBottom);
        QWidget::setTabOrder(mAnnotationDirectionComboBoxBottom, mAnnotationFontButton);
        QWidget::setTabOrder(mAnnotationFontButton, mAnnotationFontColorButton);
        QWidget::setTabOrder(mAnnotationFontColorButton, mDistanceToMapFrameSpinBox);
        QWidget::setTabOrder(mDistanceToMapFrameSpinBox, mCoordinatePrecisionSpinBox);

        retranslateUi(QgsLayoutMapGridWidgetBase);

        QMetaObject::connectSlotsByName(QgsLayoutMapGridWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsLayoutMapGridWidgetBase)
    {
        QgsLayoutMapGridWidgetBase->setWindowTitle(QApplication::translate("QgsLayoutMapGridWidgetBase", "Map Options", Q_NULLPTR));
        mGridCheckBox->setTitle(QApplication::translate("QgsLayoutMapGridWidgetBase", "Appearance", Q_NULLPTR));
#ifndef QT_NO_ACCESSIBILITY
        mGridTypeLabel_2->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        mGridTypeLabel_2->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "Grid type", Q_NULLPTR));
        mMapGridCRSLabel->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "CRS", Q_NULLPTR));
        mMapGridCRSButton->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "Change\342\200\246", Q_NULLPTR));
        mMapGridUnitLabel->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "Interval units", Q_NULLPTR));
        mMapGridUnitComboBox->clear();
        mMapGridUnitComboBox->insertItems(0, QStringList()
         << QApplication::translate("QgsLayoutMapGridWidgetBase", "Map unit", Q_NULLPTR)
         << QApplication::translate("QgsLayoutMapGridWidgetBase", "Millimeter", Q_NULLPTR)
         << QApplication::translate("QgsLayoutMapGridWidgetBase", "Centimeter", Q_NULLPTR)
        );
        mIntervalXLabel_2->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "Interval", Q_NULLPTR));
        mIntervalXSpinBox->setPrefix(QApplication::translate("QgsLayoutMapGridWidgetBase", "X ", Q_NULLPTR));
        mIntervalYSpinBox->setPrefix(QApplication::translate("QgsLayoutMapGridWidgetBase", "Y ", Q_NULLPTR));
        mOffsetXLabel_2->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "Offset", Q_NULLPTR));
        mOffsetXSpinBox->setPrefix(QApplication::translate("QgsLayoutMapGridWidgetBase", "X ", Q_NULLPTR));
        mOffsetYSpinBox->setPrefix(QApplication::translate("QgsLayoutMapGridWidgetBase", "Y ", Q_NULLPTR));
        mCrossWidthLabel->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "Cross width", Q_NULLPTR));
        mCrossWidthSpinBox->setSuffix(QApplication::translate("QgsLayoutMapGridWidgetBase", " mm", Q_NULLPTR));
        mLineStyleLabel->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "Line style", Q_NULLPTR));
        mMarkerStyleLabel->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "Marker style", Q_NULLPTR));
        mGridBlendLabel->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "Blend mode", Q_NULLPTR));
        mGridLineStyleButton->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "Change\342\200\246", Q_NULLPTR));
        mGridMarkerStyleButton->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "Change\342\200\246", Q_NULLPTR));
        mGridFrameGroupBox->setTitle(QApplication::translate("QgsLayoutMapGridWidgetBase", "Frame", Q_NULLPTR));
        mFrameStyleLabel_2->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "Frame style", Q_NULLPTR));
        mFrameWidthLabel->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "Frame size", Q_NULLPTR));
        mFramePenLabel->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "Frame line thickness", Q_NULLPTR));
        mGridFramePenSizeSpinBox->setSuffix(QApplication::translate("QgsLayoutMapGridWidgetBase", " mm", Q_NULLPTR));
        mGridFramePenColorButton->setText(QString());
        mFrameFillLabel->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "Frame fill colors", Q_NULLPTR));
        mGridFrameFill1ColorButton->setText(QString());
        mGridFrameFill2ColorButton->setText(QString());
        mCheckGridLeftSide->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "Left side", Q_NULLPTR));
        mCheckGridRightSide->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "Right side", Q_NULLPTR));
        mCheckGridTopSide->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "Top side", Q_NULLPTR));
        mCheckGridBottomSide->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "Bottom side", Q_NULLPTR));
        mFrameWidthSpinBox->setSuffix(QApplication::translate("QgsLayoutMapGridWidgetBase", " mm", Q_NULLPTR));
        mRightDivisionsLabel->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "Right divisions", Q_NULLPTR));
        mLeftDivisionsLabel->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "Left divisions", Q_NULLPTR));
        mTopDivisionsLabel->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "Top divisions", Q_NULLPTR));
        mBottomDivisionsLabel->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "Bottom divisions", Q_NULLPTR));
        mFrameMarginLabel->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "Frame margin", Q_NULLPTR));
        mGridFrameMarginSpinBox->setSuffix(QApplication::translate("QgsLayoutMapGridWidgetBase", " mm", Q_NULLPTR));
        mDrawAnnotationGroupBox->setTitle(QApplication::translate("QgsLayoutMapGridWidgetBase", "Draw Coordinates", Q_NULLPTR));
        mAnnotationFormatLabel->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "Format", Q_NULLPTR));
        mAnnotationFormatButton->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "\342\200\246", Q_NULLPTR));
        mAnnotationPositionLabelLeft->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "Left", Q_NULLPTR));
        mAnnotationPositionLabelRight->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "Right", Q_NULLPTR));
        mAnnotationPositionLabelTop->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "Top", Q_NULLPTR));
        mAnnotationPositionLabelBottom->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "Bottom", Q_NULLPTR));
        label->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "Font", Q_NULLPTR));
        mFontColorLabel->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "Font color", Q_NULLPTR));
        mDistanceToFrameLabel->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "Distance to map frame", Q_NULLPTR));
        mDistanceToMapFrameSpinBox->setSuffix(QApplication::translate("QgsLayoutMapGridWidgetBase", " mm", Q_NULLPTR));
        mCoordinatePrecisionLabel->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "Coordinate precision", Q_NULLPTR));
        mAnnotationFontColorButton->setText(QString());
        mAnnotationFontButton->setText(QApplication::translate("QgsLayoutMapGridWidgetBase", "Font", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsLayoutMapGridWidgetBase: public Ui_QgsLayoutMapGridWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLAYOUTMAPGRIDWIDGETBASE_H
