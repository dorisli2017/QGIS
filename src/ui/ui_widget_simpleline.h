/********************************************************************************
** Form generated from reading UI file 'widget_simpleline.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_SIMPLELINE_H
#define UI_WIDGET_SIMPLELINE_H

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
#include <QtWidgets/QWidget>
#include "qgscolorbutton.h"
#include "qgsdoublespinbox.h"
#include "qgspenstylecombobox.h"
#include "qgspropertyoverridebutton.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_WidgetSimpleLine
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QgsPenCapStyleComboBox *cboCapStyle;
    QCheckBox *mDrawInsideCheckBox;
    QHBoxLayout *horizontalLayout_2;
    QgsDoubleSpinBox *spinWidth;
    QgsUnitSelectionWidget *mPenWidthUnitWidget;
    QLabel *label_4;
    QCheckBox *mCustomCheckBox;
    QgsPenStyleComboBox *cboPenStyle;
    QLabel *label_2;
    QgsPropertyOverrideButton *mPenWidthDDBtn;
    QSpacerItem *verticalSpacer;
    QgsPropertyOverrideButton *mOffsetDDBtn;
    QgsColorButton *btnChangeColor;
    QgsPropertyOverrideButton *mCapStyleDDBtn;
    QLabel *label_6;
    QgsPenJoinStyleComboBox *cboJoinStyle;
    QHBoxLayout *horizontalLayout_3;
    QgsDoubleSpinBox *spinOffset;
    QgsUnitSelectionWidget *mOffsetUnitWidget;
    QgsPropertyOverrideButton *mDashPatternDDBtn;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *mChangePatternButton;
    QgsUnitSelectionWidget *mDashPatternUnitWidget;
    QgsPropertyOverrideButton *mJoinStyleDDBtn;
    QgsPropertyOverrideButton *mPenStyleDDBtn;
    QLabel *label_3;
    QgsPropertyOverrideButton *mColorDDBtn;
    QLabel *mRingsLabel;
    QComboBox *mRingFilterComboBox;

    void setupUi(QWidget *WidgetSimpleLine)
    {
        if (WidgetSimpleLine->objectName().isEmpty())
            WidgetSimpleLine->setObjectName(QStringLiteral("WidgetSimpleLine"));
        WidgetSimpleLine->resize(300, 384);
        gridLayout = new QGridLayout(WidgetSimpleLine);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(WidgetSimpleLine);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        cboCapStyle = new QgsPenCapStyleComboBox(WidgetSimpleLine);
        cboCapStyle->setObjectName(QStringLiteral("cboCapStyle"));

        gridLayout->addWidget(cboCapStyle, 5, 2, 1, 1);

        mDrawInsideCheckBox = new QCheckBox(WidgetSimpleLine);
        mDrawInsideCheckBox->setObjectName(QStringLiteral("mDrawInsideCheckBox"));

        gridLayout->addWidget(mDrawInsideCheckBox, 8, 0, 1, 3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        spinWidth = new QgsDoubleSpinBox(WidgetSimpleLine);
        spinWidth->setObjectName(QStringLiteral("spinWidth"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(spinWidth->sizePolicy().hasHeightForWidth());
        spinWidth->setSizePolicy(sizePolicy);
        spinWidth->setDecimals(6);
        spinWidth->setMaximum(100000);
        spinWidth->setSingleStep(0.2);
        spinWidth->setValue(1);
        spinWidth->setProperty("showClearButton", QVariant(true));

        horizontalLayout_2->addWidget(spinWidth);

        mPenWidthUnitWidget = new QgsUnitSelectionWidget(WidgetSimpleLine);
        mPenWidthUnitWidget->setObjectName(QStringLiteral("mPenWidthUnitWidget"));
        mPenWidthUnitWidget->setMinimumSize(QSize(0, 0));
        mPenWidthUnitWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_2->addWidget(mPenWidthUnitWidget);


        gridLayout->addLayout(horizontalLayout_2, 1, 2, 1, 1);

        label_4 = new QLabel(WidgetSimpleLine);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        mCustomCheckBox = new QCheckBox(WidgetSimpleLine);
        mCustomCheckBox->setObjectName(QStringLiteral("mCustomCheckBox"));

        gridLayout->addWidget(mCustomCheckBox, 6, 0, 1, 3);

        cboPenStyle = new QgsPenStyleComboBox(WidgetSimpleLine);
        cboPenStyle->setObjectName(QStringLiteral("cboPenStyle"));

        gridLayout->addWidget(cboPenStyle, 3, 2, 1, 1);

        label_2 = new QLabel(WidgetSimpleLine);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        mPenWidthDDBtn = new QgsPropertyOverrideButton(WidgetSimpleLine);
        mPenWidthDDBtn->setObjectName(QStringLiteral("mPenWidthDDBtn"));

        gridLayout->addWidget(mPenWidthDDBtn, 1, 3, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 10, 0, 1, 1);

        mOffsetDDBtn = new QgsPropertyOverrideButton(WidgetSimpleLine);
        mOffsetDDBtn->setObjectName(QStringLiteral("mOffsetDDBtn"));

        gridLayout->addWidget(mOffsetDDBtn, 2, 3, 1, 1);

        btnChangeColor = new QgsColorButton(WidgetSimpleLine);
        btnChangeColor->setObjectName(QStringLiteral("btnChangeColor"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnChangeColor->sizePolicy().hasHeightForWidth());
        btnChangeColor->setSizePolicy(sizePolicy1);
        btnChangeColor->setMinimumSize(QSize(120, 0));
        btnChangeColor->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(btnChangeColor, 0, 2, 1, 1);

        mCapStyleDDBtn = new QgsPropertyOverrideButton(WidgetSimpleLine);
        mCapStyleDDBtn->setObjectName(QStringLiteral("mCapStyleDDBtn"));

        gridLayout->addWidget(mCapStyleDDBtn, 5, 3, 1, 1);

        label_6 = new QLabel(WidgetSimpleLine);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        cboJoinStyle = new QgsPenJoinStyleComboBox(WidgetSimpleLine);
        cboJoinStyle->setObjectName(QStringLiteral("cboJoinStyle"));

        gridLayout->addWidget(cboJoinStyle, 4, 2, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        spinOffset = new QgsDoubleSpinBox(WidgetSimpleLine);
        spinOffset->setObjectName(QStringLiteral("spinOffset"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(spinOffset->sizePolicy().hasHeightForWidth());
        spinOffset->setSizePolicy(sizePolicy2);
        spinOffset->setStyleSheet(QStringLiteral(""));
        spinOffset->setDecimals(6);
        spinOffset->setMinimum(-100000);
        spinOffset->setMaximum(100000);
        spinOffset->setSingleStep(0.2);

        horizontalLayout_3->addWidget(spinOffset);

        mOffsetUnitWidget = new QgsUnitSelectionWidget(WidgetSimpleLine);
        mOffsetUnitWidget->setObjectName(QStringLiteral("mOffsetUnitWidget"));
        mOffsetUnitWidget->setMinimumSize(QSize(0, 0));
        mOffsetUnitWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_3->addWidget(mOffsetUnitWidget);


        gridLayout->addLayout(horizontalLayout_3, 2, 2, 1, 1);

        mDashPatternDDBtn = new QgsPropertyOverrideButton(WidgetSimpleLine);
        mDashPatternDDBtn->setObjectName(QStringLiteral("mDashPatternDDBtn"));

        gridLayout->addWidget(mDashPatternDDBtn, 7, 3, 1, 1);

        label_5 = new QLabel(WidgetSimpleLine);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        mChangePatternButton = new QPushButton(WidgetSimpleLine);
        mChangePatternButton->setObjectName(QStringLiteral("mChangePatternButton"));
        sizePolicy1.setHeightForWidth(mChangePatternButton->sizePolicy().hasHeightForWidth());
        mChangePatternButton->setSizePolicy(sizePolicy1);

        horizontalLayout_12->addWidget(mChangePatternButton);

        mDashPatternUnitWidget = new QgsUnitSelectionWidget(WidgetSimpleLine);
        mDashPatternUnitWidget->setObjectName(QStringLiteral("mDashPatternUnitWidget"));
        mDashPatternUnitWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_12->addWidget(mDashPatternUnitWidget);


        gridLayout->addLayout(horizontalLayout_12, 7, 2, 1, 1);

        mJoinStyleDDBtn = new QgsPropertyOverrideButton(WidgetSimpleLine);
        mJoinStyleDDBtn->setObjectName(QStringLiteral("mJoinStyleDDBtn"));

        gridLayout->addWidget(mJoinStyleDDBtn, 4, 3, 1, 1);

        mPenStyleDDBtn = new QgsPropertyOverrideButton(WidgetSimpleLine);
        mPenStyleDDBtn->setObjectName(QStringLiteral("mPenStyleDDBtn"));

        gridLayout->addWidget(mPenStyleDDBtn, 3, 3, 1, 1);

        label_3 = new QLabel(WidgetSimpleLine);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        mColorDDBtn = new QgsPropertyOverrideButton(WidgetSimpleLine);
        mColorDDBtn->setObjectName(QStringLiteral("mColorDDBtn"));

        gridLayout->addWidget(mColorDDBtn, 0, 3, 1, 1);

        mRingsLabel = new QLabel(WidgetSimpleLine);
        mRingsLabel->setObjectName(QStringLiteral("mRingsLabel"));

        gridLayout->addWidget(mRingsLabel, 9, 0, 1, 1);

        mRingFilterComboBox = new QComboBox(WidgetSimpleLine);
        mRingFilterComboBox->setObjectName(QStringLiteral("mRingFilterComboBox"));

        gridLayout->addWidget(mRingFilterComboBox, 9, 2, 1, 2);

        QWidget::setTabOrder(btnChangeColor, mColorDDBtn);
        QWidget::setTabOrder(mColorDDBtn, spinWidth);
        QWidget::setTabOrder(spinWidth, mPenWidthUnitWidget);
        QWidget::setTabOrder(mPenWidthUnitWidget, mPenWidthDDBtn);
        QWidget::setTabOrder(mPenWidthDDBtn, spinOffset);
        QWidget::setTabOrder(spinOffset, mOffsetUnitWidget);
        QWidget::setTabOrder(mOffsetUnitWidget, mOffsetDDBtn);
        QWidget::setTabOrder(mOffsetDDBtn, cboPenStyle);
        QWidget::setTabOrder(cboPenStyle, mPenStyleDDBtn);
        QWidget::setTabOrder(mPenStyleDDBtn, cboJoinStyle);
        QWidget::setTabOrder(cboJoinStyle, mJoinStyleDDBtn);
        QWidget::setTabOrder(mJoinStyleDDBtn, cboCapStyle);
        QWidget::setTabOrder(cboCapStyle, mCapStyleDDBtn);
        QWidget::setTabOrder(mCapStyleDDBtn, mCustomCheckBox);
        QWidget::setTabOrder(mCustomCheckBox, mChangePatternButton);
        QWidget::setTabOrder(mChangePatternButton, mDashPatternUnitWidget);
        QWidget::setTabOrder(mDashPatternUnitWidget, mDashPatternDDBtn);
        QWidget::setTabOrder(mDashPatternDDBtn, mDrawInsideCheckBox);

        retranslateUi(WidgetSimpleLine);

        QMetaObject::connectSlotsByName(WidgetSimpleLine);
    } // setupUi

    void retranslateUi(QWidget *WidgetSimpleLine)
    {
        WidgetSimpleLine->setWindowTitle(QApplication::translate("WidgetSimpleLine", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("WidgetSimpleLine", "Color", Q_NULLPTR));
        mDrawInsideCheckBox->setText(QApplication::translate("WidgetSimpleLine", "Draw line only inside polygon", Q_NULLPTR));
        spinWidth->setSpecialValueText(QApplication::translate("WidgetSimpleLine", "Hairline", Q_NULLPTR));
        label_4->setText(QApplication::translate("WidgetSimpleLine", "Offset", Q_NULLPTR));
        mCustomCheckBox->setText(QApplication::translate("WidgetSimpleLine", "Use custom dash pattern", Q_NULLPTR));
        label_2->setText(QApplication::translate("WidgetSimpleLine", "Stroke width", Q_NULLPTR));
        mPenWidthDDBtn->setText(QApplication::translate("WidgetSimpleLine", "\342\200\246", Q_NULLPTR));
        mOffsetDDBtn->setText(QApplication::translate("WidgetSimpleLine", "\342\200\246", Q_NULLPTR));
        btnChangeColor->setText(QString());
        mCapStyleDDBtn->setText(QApplication::translate("WidgetSimpleLine", "\342\200\246", Q_NULLPTR));
        label_6->setText(QApplication::translate("WidgetSimpleLine", "Cap style", Q_NULLPTR));
        mDashPatternDDBtn->setText(QApplication::translate("WidgetSimpleLine", "\342\200\246", Q_NULLPTR));
        label_5->setText(QApplication::translate("WidgetSimpleLine", "Join style", Q_NULLPTR));
        mChangePatternButton->setText(QApplication::translate("WidgetSimpleLine", "Change", Q_NULLPTR));
        mJoinStyleDDBtn->setText(QApplication::translate("WidgetSimpleLine", "\342\200\246", Q_NULLPTR));
        mPenStyleDDBtn->setText(QApplication::translate("WidgetSimpleLine", "\342\200\246", Q_NULLPTR));
        label_3->setText(QApplication::translate("WidgetSimpleLine", "Stroke style", Q_NULLPTR));
        mColorDDBtn->setText(QApplication::translate("WidgetSimpleLine", "\342\200\246", Q_NULLPTR));
        mRingsLabel->setText(QApplication::translate("WidgetSimpleLine", "Rings", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class WidgetSimpleLine: public Ui_WidgetSimpleLine {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_SIMPLELINE_H
