/********************************************************************************
** Form generated from reading UI file 'widget_gradientfill.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_GRADIENTFILL_H
#define UI_WIDGET_GRADIENTFILL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "qgscolorbutton.h"
#include "qgscolorrampbutton.h"
#include "qgsdoublespinbox.h"
#include "qgspropertyoverridebutton.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_WidgetGradientFill
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_7;
    QDoubleSpinBox *spinRefPoint1Y;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QDoubleSpinBox *spinRefPoint1X;
    QgsPropertyOverrideButton *mSpreadDDBtn;
    QgsColorButton *btnChangeColor2;
    QRadioButton *radioTwoColor;
    QLabel *label_6;
    QComboBox *cboCoordinateMode;
    QLabel *label_2;
    QLabel *label_8;
    QgsColorRampButton *btnColorRamp;
    QgsPropertyOverrideButton *mRefPoint1YDDBtn;
    QComboBox *cboGradientType;
    QgsColorButton *btnChangeColor;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_10;
    QDoubleSpinBox *spinRefPoint2Y;
    QgsPropertyOverrideButton *mAngleDDBtn;
    QgsPropertyOverrideButton *mCoordinateModeDDBtn;
    QLabel *label_3;
    QComboBox *cboGradientSpread;
    QgsPropertyOverrideButton *mGradientTypeDDBtn;
    QCheckBox *checkRefPoint1Centroid;
    QgsPropertyOverrideButton *mStartColorDDBtn;
    QgsPropertyOverrideButton *mRefPoint2YDDBtn;
    QgsPropertyOverrideButton *mRefPoint2CentroidDDBtn;
    QGridLayout *gridLayout_4;
    QLabel *label_13;
    QgsDoubleSpinBox *spinOffsetY;
    QLabel *label_12;
    QgsDoubleSpinBox *spinOffsetX;
    QgsUnitSelectionWidget *mOffsetUnitWidget;
    QRadioButton *radioColorRamp;
    QgsDoubleSpinBox *mSpinAngle;
    QCheckBox *checkRefPoint2Centroid;
    QLabel *label_4;
    QgsPropertyOverrideButton *mRefPoint1CentroidDDBtn;
    QgsPropertyOverrideButton *mEndColorDDBtn;
    QLabel *label;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_9;
    QDoubleSpinBox *spinRefPoint2X;
    QgsPropertyOverrideButton *mRefPoint1XDDBtn;
    QLabel *label_11;
    QgsPropertyOverrideButton *mRefPoint2XDDBtn;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *WidgetGradientFill)
    {
        if (WidgetGradientFill->objectName().isEmpty())
            WidgetGradientFill->setObjectName(QStringLiteral("WidgetGradientFill"));
        WidgetGradientFill->resize(358, 602);
        gridLayout = new QGridLayout(WidgetGradientFill);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_7 = new QLabel(WidgetGradientFill);
        label_7->setObjectName(QStringLiteral("label_7"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);

        horizontalLayout_11->addWidget(label_7);

        spinRefPoint1Y = new QDoubleSpinBox(WidgetGradientFill);
        spinRefPoint1Y->setObjectName(QStringLiteral("spinRefPoint1Y"));
        spinRefPoint1Y->setMaximum(1);
        spinRefPoint1Y->setSingleStep(0.2);

        horizontalLayout_11->addWidget(spinRefPoint1Y);


        gridLayout->addLayout(horizontalLayout_11, 8, 2, 2, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_5 = new QLabel(WidgetGradientFill);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);

        horizontalLayout_6->addWidget(label_5);

        spinRefPoint1X = new QDoubleSpinBox(WidgetGradientFill);
        spinRefPoint1X->setObjectName(QStringLiteral("spinRefPoint1X"));
        spinRefPoint1X->setMaximum(1);
        spinRefPoint1X->setSingleStep(0.2);
        spinRefPoint1X->setValue(0.5);

        horizontalLayout_6->addWidget(spinRefPoint1X);


        gridLayout->addLayout(horizontalLayout_6, 6, 2, 2, 1);

        mSpreadDDBtn = new QgsPropertyOverrideButton(WidgetGradientFill);
        mSpreadDDBtn->setObjectName(QStringLiteral("mSpreadDDBtn"));

        gridLayout->addWidget(mSpreadDDBtn, 5, 3, 1, 1);

        btnChangeColor2 = new QgsColorButton(WidgetGradientFill);
        btnChangeColor2->setObjectName(QStringLiteral("btnChangeColor2"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnChangeColor2->sizePolicy().hasHeightForWidth());
        btnChangeColor2->setSizePolicy(sizePolicy1);
        btnChangeColor2->setMinimumSize(QSize(120, 0));
        btnChangeColor2->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(btnChangeColor2, 1, 2, 1, 1);

        radioTwoColor = new QRadioButton(WidgetGradientFill);
        radioTwoColor->setObjectName(QStringLiteral("radioTwoColor"));

        gridLayout->addWidget(radioTwoColor, 0, 0, 2, 1);

        label_6 = new QLabel(WidgetGradientFill);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 18, 0, 1, 1);

        cboCoordinateMode = new QComboBox(WidgetGradientFill);
        cboCoordinateMode->setObjectName(QStringLiteral("cboCoordinateMode"));

        gridLayout->addWidget(cboCoordinateMode, 4, 2, 1, 1);

        label_2 = new QLabel(WidgetGradientFill);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        label_8 = new QLabel(WidgetGradientFill);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setWordWrap(true);

        gridLayout->addWidget(label_8, 12, 0, 3, 1);

        btnColorRamp = new QgsColorRampButton(WidgetGradientFill);
        btnColorRamp->setObjectName(QStringLiteral("btnColorRamp"));
        sizePolicy1.setHeightForWidth(btnColorRamp->sizePolicy().hasHeightForWidth());
        btnColorRamp->setSizePolicy(sizePolicy1);
        btnColorRamp->setMinimumSize(QSize(120, 0));
        btnColorRamp->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(btnColorRamp, 2, 2, 1, 1);

        mRefPoint1YDDBtn = new QgsPropertyOverrideButton(WidgetGradientFill);
        mRefPoint1YDDBtn->setObjectName(QStringLiteral("mRefPoint1YDDBtn"));

        gridLayout->addWidget(mRefPoint1YDDBtn, 8, 3, 2, 1);

        cboGradientType = new QComboBox(WidgetGradientFill);
        cboGradientType->setObjectName(QStringLiteral("cboGradientType"));

        gridLayout->addWidget(cboGradientType, 3, 2, 1, 1);

        btnChangeColor = new QgsColorButton(WidgetGradientFill);
        btnChangeColor->setObjectName(QStringLiteral("btnChangeColor"));
        sizePolicy1.setHeightForWidth(btnChangeColor->sizePolicy().hasHeightForWidth());
        btnChangeColor->setSizePolicy(sizePolicy1);
        btnChangeColor->setMinimumSize(QSize(120, 0));
        btnChangeColor->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(btnChangeColor, 0, 2, 1, 1);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_10 = new QLabel(WidgetGradientFill);
        label_10->setObjectName(QStringLiteral("label_10"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy2);

        horizontalLayout_12->addWidget(label_10);

        spinRefPoint2Y = new QDoubleSpinBox(WidgetGradientFill);
        spinRefPoint2Y->setObjectName(QStringLiteral("spinRefPoint2Y"));
        spinRefPoint2Y->setMaximum(1);
        spinRefPoint2Y->setSingleStep(0.2);
        spinRefPoint2Y->setValue(1);

        horizontalLayout_12->addWidget(spinRefPoint2Y);


        gridLayout->addLayout(horizontalLayout_12, 13, 2, 2, 1);

        mAngleDDBtn = new QgsPropertyOverrideButton(WidgetGradientFill);
        mAngleDDBtn->setObjectName(QStringLiteral("mAngleDDBtn"));

        gridLayout->addWidget(mAngleDDBtn, 17, 3, 1, 1);

        mCoordinateModeDDBtn = new QgsPropertyOverrideButton(WidgetGradientFill);
        mCoordinateModeDDBtn->setObjectName(QStringLiteral("mCoordinateModeDDBtn"));

        gridLayout->addWidget(mCoordinateModeDDBtn, 4, 3, 1, 1);

        label_3 = new QLabel(WidgetGradientFill);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        cboGradientSpread = new QComboBox(WidgetGradientFill);
        cboGradientSpread->setObjectName(QStringLiteral("cboGradientSpread"));

        gridLayout->addWidget(cboGradientSpread, 5, 2, 1, 1);

        mGradientTypeDDBtn = new QgsPropertyOverrideButton(WidgetGradientFill);
        mGradientTypeDDBtn->setObjectName(QStringLiteral("mGradientTypeDDBtn"));

        gridLayout->addWidget(mGradientTypeDDBtn, 3, 3, 1, 1);

        checkRefPoint1Centroid = new QCheckBox(WidgetGradientFill);
        checkRefPoint1Centroid->setObjectName(QStringLiteral("checkRefPoint1Centroid"));

        gridLayout->addWidget(checkRefPoint1Centroid, 10, 2, 1, 1);

        mStartColorDDBtn = new QgsPropertyOverrideButton(WidgetGradientFill);
        mStartColorDDBtn->setObjectName(QStringLiteral("mStartColorDDBtn"));

        gridLayout->addWidget(mStartColorDDBtn, 0, 3, 1, 1);

        mRefPoint2YDDBtn = new QgsPropertyOverrideButton(WidgetGradientFill);
        mRefPoint2YDDBtn->setObjectName(QStringLiteral("mRefPoint2YDDBtn"));

        gridLayout->addWidget(mRefPoint2YDDBtn, 13, 3, 2, 1);

        mRefPoint2CentroidDDBtn = new QgsPropertyOverrideButton(WidgetGradientFill);
        mRefPoint2CentroidDDBtn->setObjectName(QStringLiteral("mRefPoint2CentroidDDBtn"));

        gridLayout->addWidget(mRefPoint2CentroidDDBtn, 15, 3, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label_13 = new QLabel(WidgetGradientFill);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_4->addWidget(label_13, 1, 0, 1, 1);

        spinOffsetY = new QgsDoubleSpinBox(WidgetGradientFill);
        spinOffsetY->setObjectName(QStringLiteral("spinOffsetY"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(spinOffsetY->sizePolicy().hasHeightForWidth());
        spinOffsetY->setSizePolicy(sizePolicy3);
        spinOffsetY->setDecimals(6);
        spinOffsetY->setMinimum(-1e+9);
        spinOffsetY->setMaximum(1e+9);
        spinOffsetY->setSingleStep(0.2);

        gridLayout_4->addWidget(spinOffsetY, 1, 1, 1, 1);

        label_12 = new QLabel(WidgetGradientFill);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_4->addWidget(label_12, 0, 0, 1, 1);

        spinOffsetX = new QgsDoubleSpinBox(WidgetGradientFill);
        spinOffsetX->setObjectName(QStringLiteral("spinOffsetX"));
        sizePolicy3.setHeightForWidth(spinOffsetX->sizePolicy().hasHeightForWidth());
        spinOffsetX->setSizePolicy(sizePolicy3);
        spinOffsetX->setDecimals(6);
        spinOffsetX->setMinimum(-1e+9);
        spinOffsetX->setMaximum(1e+9);
        spinOffsetX->setSingleStep(0.2);

        gridLayout_4->addWidget(spinOffsetX, 0, 1, 1, 1);

        mOffsetUnitWidget = new QgsUnitSelectionWidget(WidgetGradientFill);
        mOffsetUnitWidget->setObjectName(QStringLiteral("mOffsetUnitWidget"));
        mOffsetUnitWidget->setMinimumSize(QSize(0, 0));

        gridLayout_4->addWidget(mOffsetUnitWidget, 0, 2, 2, 1);


        gridLayout->addLayout(gridLayout_4, 18, 2, 1, 1);

        radioColorRamp = new QRadioButton(WidgetGradientFill);
        radioColorRamp->setObjectName(QStringLiteral("radioColorRamp"));

        gridLayout->addWidget(radioColorRamp, 2, 0, 1, 1);

        mSpinAngle = new QgsDoubleSpinBox(WidgetGradientFill);
        mSpinAngle->setObjectName(QStringLiteral("mSpinAngle"));
        mSpinAngle->setWrapping(true);
        mSpinAngle->setMinimum(0);
        mSpinAngle->setMaximum(360);
        mSpinAngle->setSingleStep(0.5);

        gridLayout->addWidget(mSpinAngle, 17, 2, 1, 1);

        checkRefPoint2Centroid = new QCheckBox(WidgetGradientFill);
        checkRefPoint2Centroid->setObjectName(QStringLiteral("checkRefPoint2Centroid"));

        gridLayout->addWidget(checkRefPoint2Centroid, 15, 2, 1, 1);

        label_4 = new QLabel(WidgetGradientFill);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 5, 0, 1, 1);

        mRefPoint1CentroidDDBtn = new QgsPropertyOverrideButton(WidgetGradientFill);
        mRefPoint1CentroidDDBtn->setObjectName(QStringLiteral("mRefPoint1CentroidDDBtn"));

        gridLayout->addWidget(mRefPoint1CentroidDDBtn, 10, 3, 1, 1);

        mEndColorDDBtn = new QgsPropertyOverrideButton(WidgetGradientFill);
        mEndColorDDBtn->setObjectName(QStringLiteral("mEndColorDDBtn"));

        gridLayout->addWidget(mEndColorDDBtn, 1, 3, 1, 1);

        label = new QLabel(WidgetGradientFill);
        label->setObjectName(QStringLiteral("label"));
        label->setWordWrap(true);

        gridLayout->addWidget(label, 6, 0, 4, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_9 = new QLabel(WidgetGradientFill);
        label_9->setObjectName(QStringLiteral("label_9"));
        sizePolicy2.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy2);

        horizontalLayout_7->addWidget(label_9);

        spinRefPoint2X = new QDoubleSpinBox(WidgetGradientFill);
        spinRefPoint2X->setObjectName(QStringLiteral("spinRefPoint2X"));
        spinRefPoint2X->setMaximum(1);
        spinRefPoint2X->setSingleStep(0.2);
        spinRefPoint2X->setValue(0.5);

        horizontalLayout_7->addWidget(spinRefPoint2X);


        gridLayout->addLayout(horizontalLayout_7, 12, 2, 1, 1);

        mRefPoint1XDDBtn = new QgsPropertyOverrideButton(WidgetGradientFill);
        mRefPoint1XDDBtn->setObjectName(QStringLiteral("mRefPoint1XDDBtn"));

        gridLayout->addWidget(mRefPoint1XDDBtn, 6, 3, 2, 1);

        label_11 = new QLabel(WidgetGradientFill);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout->addWidget(label_11, 17, 0, 1, 1);

        mRefPoint2XDDBtn = new QgsPropertyOverrideButton(WidgetGradientFill);
        mRefPoint2XDDBtn->setObjectName(QStringLiteral("mRefPoint2XDDBtn"));

        gridLayout->addWidget(mRefPoint2XDDBtn, 12, 3, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 19, 0, 1, 4);

        btnChangeColor2->raise();
        btnColorRamp->raise();
        btnChangeColor->raise();
        checkRefPoint1Centroid->raise();
        checkRefPoint2Centroid->raise();
        label_6->raise();
        label_3->raise();
        radioColorRamp->raise();
        label_2->raise();
        label_8->raise();
        radioTwoColor->raise();
        label_4->raise();
        label_11->raise();
        mStartColorDDBtn->raise();
        mEndColorDDBtn->raise();
        mGradientTypeDDBtn->raise();
        mCoordinateModeDDBtn->raise();
        mSpreadDDBtn->raise();
        mAngleDDBtn->raise();
        mRefPoint2XDDBtn->raise();
        mRefPoint2YDDBtn->raise();
        label->raise();
        mRefPoint1CentroidDDBtn->raise();
        mRefPoint1XDDBtn->raise();
        mRefPoint1YDDBtn->raise();
        mRefPoint2CentroidDDBtn->raise();
        cboGradientType->raise();
        mSpinAngle->raise();
        cboGradientSpread->raise();
        cboCoordinateMode->raise();
        QWidget::setTabOrder(radioTwoColor, btnChangeColor);
        QWidget::setTabOrder(btnChangeColor, mStartColorDDBtn);
        QWidget::setTabOrder(mStartColorDDBtn, btnChangeColor2);
        QWidget::setTabOrder(btnChangeColor2, mEndColorDDBtn);
        QWidget::setTabOrder(mEndColorDDBtn, radioColorRamp);
        QWidget::setTabOrder(radioColorRamp, btnColorRamp);
        QWidget::setTabOrder(btnColorRamp, cboGradientType);
        QWidget::setTabOrder(cboGradientType, mGradientTypeDDBtn);
        QWidget::setTabOrder(mGradientTypeDDBtn, cboCoordinateMode);
        QWidget::setTabOrder(cboCoordinateMode, mCoordinateModeDDBtn);
        QWidget::setTabOrder(mCoordinateModeDDBtn, cboGradientSpread);
        QWidget::setTabOrder(cboGradientSpread, mSpreadDDBtn);
        QWidget::setTabOrder(mSpreadDDBtn, spinRefPoint1X);
        QWidget::setTabOrder(spinRefPoint1X, mRefPoint1XDDBtn);
        QWidget::setTabOrder(mRefPoint1XDDBtn, spinRefPoint1Y);
        QWidget::setTabOrder(spinRefPoint1Y, mRefPoint1YDDBtn);
        QWidget::setTabOrder(mRefPoint1YDDBtn, checkRefPoint1Centroid);
        QWidget::setTabOrder(checkRefPoint1Centroid, mRefPoint1CentroidDDBtn);
        QWidget::setTabOrder(mRefPoint1CentroidDDBtn, spinRefPoint2X);
        QWidget::setTabOrder(spinRefPoint2X, mRefPoint2XDDBtn);
        QWidget::setTabOrder(mRefPoint2XDDBtn, spinRefPoint2Y);
        QWidget::setTabOrder(spinRefPoint2Y, mRefPoint2YDDBtn);
        QWidget::setTabOrder(mRefPoint2YDDBtn, checkRefPoint2Centroid);
        QWidget::setTabOrder(checkRefPoint2Centroid, mRefPoint2CentroidDDBtn);
        QWidget::setTabOrder(mRefPoint2CentroidDDBtn, mSpinAngle);
        QWidget::setTabOrder(mSpinAngle, mAngleDDBtn);
        QWidget::setTabOrder(mAngleDDBtn, spinOffsetX);
        QWidget::setTabOrder(spinOffsetX, spinOffsetY);

        retranslateUi(WidgetGradientFill);
        QObject::connect(radioTwoColor, SIGNAL(toggled(bool)), btnChangeColor, SLOT(setEnabled(bool)));
        QObject::connect(radioTwoColor, SIGNAL(toggled(bool)), btnChangeColor2, SLOT(setEnabled(bool)));
        QObject::connect(radioColorRamp, SIGNAL(toggled(bool)), btnColorRamp, SLOT(setEnabled(bool)));
        QObject::connect(checkRefPoint1Centroid, SIGNAL(toggled(bool)), spinRefPoint1X, SLOT(setDisabled(bool)));
        QObject::connect(checkRefPoint1Centroid, SIGNAL(toggled(bool)), spinRefPoint1Y, SLOT(setDisabled(bool)));
        QObject::connect(checkRefPoint2Centroid, SIGNAL(toggled(bool)), spinRefPoint2X, SLOT(setDisabled(bool)));
        QObject::connect(checkRefPoint2Centroid, SIGNAL(toggled(bool)), spinRefPoint2Y, SLOT(setDisabled(bool)));

        QMetaObject::connectSlotsByName(WidgetGradientFill);
    } // setupUi

    void retranslateUi(QWidget *WidgetGradientFill)
    {
        WidgetGradientFill->setWindowTitle(QApplication::translate("WidgetGradientFill", "Form", Q_NULLPTR));
        label_7->setText(QApplication::translate("WidgetGradientFill", "y", Q_NULLPTR));
        label_5->setText(QApplication::translate("WidgetGradientFill", "x", Q_NULLPTR));
        mSpreadDDBtn->setText(QApplication::translate("WidgetGradientFill", "\342\200\246", Q_NULLPTR));
        btnChangeColor2->setText(QString());
        radioTwoColor->setText(QApplication::translate("WidgetGradientFill", "Two color", Q_NULLPTR));
        label_6->setText(QApplication::translate("WidgetGradientFill", "Offset", Q_NULLPTR));
        cboCoordinateMode->clear();
        cboCoordinateMode->insertItems(0, QStringList()
         << QApplication::translate("WidgetGradientFill", "Object", Q_NULLPTR)
         << QApplication::translate("WidgetGradientFill", "Viewport", Q_NULLPTR)
        );
        label_2->setText(QApplication::translate("WidgetGradientFill", "Gradient type", Q_NULLPTR));
        label_8->setText(QApplication::translate("WidgetGradientFill", "Reference point 2", Q_NULLPTR));
        mRefPoint1YDDBtn->setText(QApplication::translate("WidgetGradientFill", "\342\200\246", Q_NULLPTR));
        cboGradientType->clear();
        cboGradientType->insertItems(0, QStringList()
         << QApplication::translate("WidgetGradientFill", "Linear", Q_NULLPTR)
         << QApplication::translate("WidgetGradientFill", "Radial", Q_NULLPTR)
         << QApplication::translate("WidgetGradientFill", "Conical", Q_NULLPTR)
        );
        btnChangeColor->setText(QString());
        label_10->setText(QApplication::translate("WidgetGradientFill", "y", Q_NULLPTR));
        mAngleDDBtn->setText(QApplication::translate("WidgetGradientFill", "\342\200\246", Q_NULLPTR));
        mCoordinateModeDDBtn->setText(QApplication::translate("WidgetGradientFill", "\342\200\246", Q_NULLPTR));
        label_3->setText(QApplication::translate("WidgetGradientFill", "Coord mode", Q_NULLPTR));
        cboGradientSpread->clear();
        cboGradientSpread->insertItems(0, QStringList()
         << QApplication::translate("WidgetGradientFill", "Pad", Q_NULLPTR)
         << QApplication::translate("WidgetGradientFill", "Repeat", Q_NULLPTR)
         << QApplication::translate("WidgetGradientFill", "Reflect", Q_NULLPTR)
        );
        mGradientTypeDDBtn->setText(QApplication::translate("WidgetGradientFill", "\342\200\246", Q_NULLPTR));
        checkRefPoint1Centroid->setText(QApplication::translate("WidgetGradientFill", "Centroid", Q_NULLPTR));
        mStartColorDDBtn->setText(QApplication::translate("WidgetGradientFill", "\342\200\246", Q_NULLPTR));
        mRefPoint2YDDBtn->setText(QApplication::translate("WidgetGradientFill", "\342\200\246", Q_NULLPTR));
        mRefPoint2CentroidDDBtn->setText(QApplication::translate("WidgetGradientFill", "\342\200\246", Q_NULLPTR));
        label_13->setText(QApplication::translate("WidgetGradientFill", "y", Q_NULLPTR));
        label_12->setText(QApplication::translate("WidgetGradientFill", "x", Q_NULLPTR));
        radioColorRamp->setText(QApplication::translate("WidgetGradientFill", "Color ramp", Q_NULLPTR));
        mSpinAngle->setSuffix(QApplication::translate("WidgetGradientFill", " \302\260", Q_NULLPTR));
        checkRefPoint2Centroid->setText(QApplication::translate("WidgetGradientFill", "Centroid", Q_NULLPTR));
        label_4->setText(QApplication::translate("WidgetGradientFill", "Spread", Q_NULLPTR));
        mRefPoint1CentroidDDBtn->setText(QApplication::translate("WidgetGradientFill", "\342\200\246", Q_NULLPTR));
        mEndColorDDBtn->setText(QApplication::translate("WidgetGradientFill", "\342\200\246", Q_NULLPTR));
        label->setText(QApplication::translate("WidgetGradientFill", "Reference point 1", Q_NULLPTR));
        label_9->setText(QApplication::translate("WidgetGradientFill", "x", Q_NULLPTR));
        mRefPoint1XDDBtn->setText(QApplication::translate("WidgetGradientFill", "\342\200\246", Q_NULLPTR));
        label_11->setText(QApplication::translate("WidgetGradientFill", "Rotation", Q_NULLPTR));
        mRefPoint2XDDBtn->setText(QApplication::translate("WidgetGradientFill", "\342\200\246", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class WidgetGradientFill: public Ui_WidgetGradientFill {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_GRADIENTFILL_H
