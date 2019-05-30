/********************************************************************************
** Form generated from reading UI file 'widget_simplefill.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_SIMPLEFILL_H
#define UI_WIDGET_SIMPLEFILL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "qgsbrushstylecombobox.h"
#include "qgscolorbutton.h"
#include "qgsdoublespinbox.h"
#include "qgspenstylecombobox.h"
#include "qgspropertyoverridebutton.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_WidgetSimpleFill
{
public:
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QgsColorButton *btnChangeColor;
    QgsColorButton *btnChangeStrokeColor;
    QLabel *label_6;
    QgsPropertyOverrideButton *mStrokeStyleDDBtn;
    QgsPropertyOverrideButton *mJoinStyleDDBtn;
    QLabel *label_3;
    QGridLayout *gridLayout;
    QgsUnitSelectionWidget *mOffsetUnitWidget;
    QLabel *label;
    QgsDoubleSpinBox *spinOffsetX;
    QLabel *label_9;
    QgsDoubleSpinBox *spinOffsetY;
    QgsPropertyOverrideButton *mStrokeColorDDBtn;
    QSpacerItem *verticalSpacer;
    QLabel *label_8;
    QgsPenJoinStyleComboBox *cboJoinStyle;
    QLabel *label_4;
    QgsPropertyOverrideButton *mFillColorDDBtn;
    QgsPenStyleComboBox *cboStrokeStyle;
    QLabel *label_7;
    QgsBrushStyleComboBox *cboFillStyle;
    QgsPropertyOverrideButton *mFillStyleDDBtn;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_3;
    QgsDoubleSpinBox *spinStrokeWidth;
    QgsUnitSelectionWidget *mStrokeWidthUnitWidget;
    QgsPropertyOverrideButton *mStrokeWidthDDBtn;

    void setupUi(QWidget *WidgetSimpleFill)
    {
        if (WidgetSimpleFill->objectName().isEmpty())
            WidgetSimpleFill->setObjectName(QStringLiteral("WidgetSimpleFill"));
        WidgetSimpleFill->resize(573, 507);
        gridLayout_2 = new QGridLayout(WidgetSimpleFill);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_2 = new QLabel(WidgetSimpleFill);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        btnChangeColor = new QgsColorButton(WidgetSimpleFill);
        btnChangeColor->setObjectName(QStringLiteral("btnChangeColor"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnChangeColor->sizePolicy().hasHeightForWidth());
        btnChangeColor->setSizePolicy(sizePolicy);
        btnChangeColor->setMinimumSize(QSize(120, 0));
        btnChangeColor->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_2->addWidget(btnChangeColor, 0, 3, 1, 1);

        btnChangeStrokeColor = new QgsColorButton(WidgetSimpleFill);
        btnChangeStrokeColor->setObjectName(QStringLiteral("btnChangeStrokeColor"));
        sizePolicy.setHeightForWidth(btnChangeStrokeColor->sizePolicy().hasHeightForWidth());
        btnChangeStrokeColor->setSizePolicy(sizePolicy);
        btnChangeStrokeColor->setMinimumSize(QSize(120, 0));
        btnChangeStrokeColor->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_2->addWidget(btnChangeStrokeColor, 2, 3, 1, 1);

        label_6 = new QLabel(WidgetSimpleFill);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_6, 7, 0, 1, 1);

        mStrokeStyleDDBtn = new QgsPropertyOverrideButton(WidgetSimpleFill);
        mStrokeStyleDDBtn->setObjectName(QStringLiteral("mStrokeStyleDDBtn"));

        gridLayout_2->addWidget(mStrokeStyleDDBtn, 4, 5, 1, 1);

        mJoinStyleDDBtn = new QgsPropertyOverrideButton(WidgetSimpleFill);
        mJoinStyleDDBtn->setObjectName(QStringLiteral("mJoinStyleDDBtn"));

        gridLayout_2->addWidget(mJoinStyleDDBtn, 5, 5, 1, 1);

        label_3 = new QLabel(WidgetSimpleFill);
        label_3->setObjectName(QStringLiteral("label_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, -1, 0, -1);
        mOffsetUnitWidget = new QgsUnitSelectionWidget(WidgetSimpleFill);
        mOffsetUnitWidget->setObjectName(QStringLiteral("mOffsetUnitWidget"));
        mOffsetUnitWidget->setMinimumSize(QSize(0, 0));
        mOffsetUnitWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(mOffsetUnitWidget, 0, 2, 2, 1);

        label = new QLabel(WidgetSimpleFill);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        spinOffsetX = new QgsDoubleSpinBox(WidgetSimpleFill);
        spinOffsetX->setObjectName(QStringLiteral("spinOffsetX"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(spinOffsetX->sizePolicy().hasHeightForWidth());
        spinOffsetX->setSizePolicy(sizePolicy2);
        spinOffsetX->setDecimals(6);
        spinOffsetX->setMinimum(-1e+8);
        spinOffsetX->setMaximum(1e+8);
        spinOffsetX->setSingleStep(0.2);

        gridLayout->addWidget(spinOffsetX, 0, 1, 1, 1);

        label_9 = new QLabel(WidgetSimpleFill);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 1, 0, 1, 1);

        spinOffsetY = new QgsDoubleSpinBox(WidgetSimpleFill);
        spinOffsetY->setObjectName(QStringLiteral("spinOffsetY"));
        sizePolicy2.setHeightForWidth(spinOffsetY->sizePolicy().hasHeightForWidth());
        spinOffsetY->setSizePolicy(sizePolicy2);
        spinOffsetY->setDecimals(6);
        spinOffsetY->setMinimum(-1e+8);
        spinOffsetY->setMaximum(1e+8);
        spinOffsetY->setSingleStep(0.2);

        gridLayout->addWidget(spinOffsetY, 1, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 7, 3, 1, 1);

        mStrokeColorDDBtn = new QgsPropertyOverrideButton(WidgetSimpleFill);
        mStrokeColorDDBtn->setObjectName(QStringLiteral("mStrokeColorDDBtn"));

        gridLayout_2->addWidget(mStrokeColorDDBtn, 2, 5, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 8, 3, 1, 1);

        label_8 = new QLabel(WidgetSimpleFill);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_8, 5, 0, 1, 1);

        cboJoinStyle = new QgsPenJoinStyleComboBox(WidgetSimpleFill);
        cboJoinStyle->setObjectName(QStringLiteral("cboJoinStyle"));

        gridLayout_2->addWidget(cboJoinStyle, 5, 3, 1, 1);

        label_4 = new QLabel(WidgetSimpleFill);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_4, 4, 0, 1, 1);

        mFillColorDDBtn = new QgsPropertyOverrideButton(WidgetSimpleFill);
        mFillColorDDBtn->setObjectName(QStringLiteral("mFillColorDDBtn"));

        gridLayout_2->addWidget(mFillColorDDBtn, 0, 5, 1, 1);

        cboStrokeStyle = new QgsPenStyleComboBox(WidgetSimpleFill);
        cboStrokeStyle->setObjectName(QStringLiteral("cboStrokeStyle"));

        gridLayout_2->addWidget(cboStrokeStyle, 4, 3, 1, 1);

        label_7 = new QLabel(WidgetSimpleFill);
        label_7->setObjectName(QStringLiteral("label_7"));
        sizePolicy1.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy1);
        label_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_7, 0, 0, 1, 1);

        cboFillStyle = new QgsBrushStyleComboBox(WidgetSimpleFill);
        cboFillStyle->setObjectName(QStringLiteral("cboFillStyle"));

        gridLayout_2->addWidget(cboFillStyle, 1, 3, 1, 1);

        mFillStyleDDBtn = new QgsPropertyOverrideButton(WidgetSimpleFill);
        mFillStyleDDBtn->setObjectName(QStringLiteral("mFillStyleDDBtn"));

        gridLayout_2->addWidget(mFillStyleDDBtn, 1, 5, 1, 1);

        label_5 = new QLabel(WidgetSimpleFill);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_5, 3, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        spinStrokeWidth = new QgsDoubleSpinBox(WidgetSimpleFill);
        spinStrokeWidth->setObjectName(QStringLiteral("spinStrokeWidth"));
        sizePolicy2.setHeightForWidth(spinStrokeWidth->sizePolicy().hasHeightForWidth());
        spinStrokeWidth->setSizePolicy(sizePolicy2);
        spinStrokeWidth->setDecimals(6);
        spinStrokeWidth->setMaximum(1e+9);
        spinStrokeWidth->setSingleStep(0.2);
        spinStrokeWidth->setProperty("showClearButton", QVariant(true));

        horizontalLayout_3->addWidget(spinStrokeWidth);

        mStrokeWidthUnitWidget = new QgsUnitSelectionWidget(WidgetSimpleFill);
        mStrokeWidthUnitWidget->setObjectName(QStringLiteral("mStrokeWidthUnitWidget"));
        mStrokeWidthUnitWidget->setMinimumSize(QSize(0, 0));
        mStrokeWidthUnitWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_3->addWidget(mStrokeWidthUnitWidget);


        gridLayout_2->addLayout(horizontalLayout_3, 3, 3, 1, 1);

        mStrokeWidthDDBtn = new QgsPropertyOverrideButton(WidgetSimpleFill);
        mStrokeWidthDDBtn->setObjectName(QStringLiteral("mStrokeWidthDDBtn"));

        gridLayout_2->addWidget(mStrokeWidthDDBtn, 3, 5, 1, 1);

        QWidget::setTabOrder(btnChangeColor, mFillColorDDBtn);
        QWidget::setTabOrder(mFillColorDDBtn, cboFillStyle);
        QWidget::setTabOrder(cboFillStyle, mFillStyleDDBtn);
        QWidget::setTabOrder(mFillStyleDDBtn, btnChangeStrokeColor);
        QWidget::setTabOrder(btnChangeStrokeColor, mStrokeColorDDBtn);
        QWidget::setTabOrder(mStrokeColorDDBtn, spinStrokeWidth);
        QWidget::setTabOrder(spinStrokeWidth, mStrokeWidthUnitWidget);
        QWidget::setTabOrder(mStrokeWidthUnitWidget, mStrokeWidthDDBtn);
        QWidget::setTabOrder(mStrokeWidthDDBtn, cboStrokeStyle);
        QWidget::setTabOrder(cboStrokeStyle, mStrokeStyleDDBtn);
        QWidget::setTabOrder(mStrokeStyleDDBtn, cboJoinStyle);
        QWidget::setTabOrder(cboJoinStyle, mJoinStyleDDBtn);
        QWidget::setTabOrder(mJoinStyleDDBtn, spinOffsetX);
        QWidget::setTabOrder(spinOffsetX, spinOffsetY);
        QWidget::setTabOrder(spinOffsetY, mOffsetUnitWidget);

        retranslateUi(WidgetSimpleFill);

        QMetaObject::connectSlotsByName(WidgetSimpleFill);
    } // setupUi

    void retranslateUi(QWidget *WidgetSimpleFill)
    {
        WidgetSimpleFill->setWindowTitle(QApplication::translate("WidgetSimpleFill", "Form", Q_NULLPTR));
        label_2->setText(QApplication::translate("WidgetSimpleFill", "Fill style", Q_NULLPTR));
        btnChangeColor->setText(QString());
        btnChangeStrokeColor->setText(QString());
        label_6->setText(QApplication::translate("WidgetSimpleFill", "Offset", Q_NULLPTR));
        mStrokeStyleDDBtn->setText(QApplication::translate("WidgetSimpleFill", "\342\200\246", Q_NULLPTR));
        mJoinStyleDDBtn->setText(QApplication::translate("WidgetSimpleFill", "\342\200\246", Q_NULLPTR));
        label_3->setText(QApplication::translate("WidgetSimpleFill", "Stroke color", Q_NULLPTR));
        label->setText(QApplication::translate("WidgetSimpleFill", "x", Q_NULLPTR));
        label_9->setText(QApplication::translate("WidgetSimpleFill", "y", Q_NULLPTR));
        mStrokeColorDDBtn->setText(QApplication::translate("WidgetSimpleFill", "\342\200\246", Q_NULLPTR));
        label_8->setText(QApplication::translate("WidgetSimpleFill", "Join style", Q_NULLPTR));
        label_4->setText(QApplication::translate("WidgetSimpleFill", "Stroke style", Q_NULLPTR));
        mFillColorDDBtn->setText(QApplication::translate("WidgetSimpleFill", "\342\200\246", Q_NULLPTR));
        label_7->setText(QApplication::translate("WidgetSimpleFill", "Fill color", Q_NULLPTR));
        mFillStyleDDBtn->setText(QApplication::translate("WidgetSimpleFill", "\342\200\246", Q_NULLPTR));
        label_5->setText(QApplication::translate("WidgetSimpleFill", "Stroke width", Q_NULLPTR));
        spinStrokeWidth->setSpecialValueText(QApplication::translate("WidgetSimpleFill", "Hairline", Q_NULLPTR));
        mStrokeWidthDDBtn->setText(QApplication::translate("WidgetSimpleFill", "\342\200\246", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class WidgetSimpleFill: public Ui_WidgetSimpleFill {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_SIMPLEFILL_H
