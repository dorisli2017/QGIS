/********************************************************************************
** Form generated from reading UI file 'qgsrendererrasterpropswidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSRENDERERRASTERPROPSWIDGETBASE_H
#define UI_QGSRENDERERRASTERPROPSWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsblendmodecombobox.h"
#include "qgscolorbutton.h"

QT_BEGIN_NAMESPACE

class Ui_QgsRendererRasterPropsWidgetBase
{
public:
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QComboBox *cboRenderers;
    QStackedWidget *stackedWidget;
    QWidget *pageNoWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFrame *frame;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *mLayerRendering;
    QGridLayout *gridLayout;
    QLabel *mBlendTypeLabel;
    QgsBlendModeComboBox *mBlendModeComboBox;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_11;
    QSlider *mSliderBrightness;
    QSpinBox *mBrightnessSpinBox;
    QLabel *labelSaturation;
    QHBoxLayout *horizontalLayout_10;
    QSlider *sliderSaturation;
    QSpinBox *spinBoxSaturation;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_12;
    QSlider *mSliderContrast;
    QSpinBox *mContrastSpinBox;
    QLabel *labelGrayscale;
    QComboBox *comboGrayscale;
    QLabel *label_3;
    QFormLayout *formLayout_2;
    QHBoxLayout *horizontalLayout_8;
    QCheckBox *mColorizeCheck;
    QgsColorButton *btnColorizeColor;
    QLabel *labelColorizeStrength;
    QHBoxLayout *horizontalLayout_9;
    QSlider *sliderColorizeStrength;
    QSpinBox *spinColorizeStrength;
    QHBoxLayout *horizontalLayout_13;
    QToolButton *mResetColorRenderingBtn;
    QGroupBox *mResamplingBox;
    QGridLayout *gridLayout2;
    QLabel *mZoomedInResamplingLabel;
    QLabel *mZoomedOutResamplingLabel;
    QLabel *mMaximumOversamplingLabel;
    QComboBox *mZoomedInResamplingComboBox;
    QComboBox *mZoomedOutResamplingComboBox;
    QDoubleSpinBox *mMaximumOversamplingSpinBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QgsRendererRasterPropsWidgetBase)
    {
        if (QgsRendererRasterPropsWidgetBase->objectName().isEmpty())
            QgsRendererRasterPropsWidgetBase->setObjectName(QStringLiteral("QgsRendererRasterPropsWidgetBase"));
        QgsRendererRasterPropsWidgetBase->resize(386, 593);
        gridLayout_2 = new QGridLayout(QgsRendererRasterPropsWidgetBase);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        cboRenderers = new QComboBox(QgsRendererRasterPropsWidgetBase);
        cboRenderers->setObjectName(QStringLiteral("cboRenderers"));

        horizontalLayout->addWidget(cboRenderers);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        stackedWidget = new QStackedWidget(QgsRendererRasterPropsWidgetBase);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(4);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);
        pageNoWidget = new QWidget();
        pageNoWidget->setObjectName(QStringLiteral("pageNoWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pageNoWidget->sizePolicy().hasHeightForWidth());
        pageNoWidget->setSizePolicy(sizePolicy1);
        verticalLayout = new QVBoxLayout(pageNoWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(pageNoWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        stackedWidget->addWidget(pageNoWidget);

        gridLayout_2->addWidget(stackedWidget, 1, 0, 1, 1);

        frame = new QFrame(QgsRendererRasterPropsWidgetBase);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        mLayerRendering = new QGroupBox(frame);
        mLayerRendering->setObjectName(QStringLiteral("mLayerRendering"));
        gridLayout = new QGridLayout(mLayerRendering);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mBlendTypeLabel = new QLabel(mLayerRendering);
        mBlendTypeLabel->setObjectName(QStringLiteral("mBlendTypeLabel"));

        gridLayout->addWidget(mBlendTypeLabel, 0, 0, 1, 2);

        mBlendModeComboBox = new QgsBlendModeComboBox(mLayerRendering);
        mBlendModeComboBox->setObjectName(QStringLiteral("mBlendModeComboBox"));
        mBlendModeComboBox->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(mBlendModeComboBox, 0, 2, 1, 3);

        label_2 = new QLabel(mLayerRendering);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 2);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        mSliderBrightness = new QSlider(mLayerRendering);
        mSliderBrightness->setObjectName(QStringLiteral("mSliderBrightness"));
        mSliderBrightness->setMinimumSize(QSize(75, 0));
        mSliderBrightness->setMinimum(-255);
        mSliderBrightness->setMaximum(255);
        mSliderBrightness->setOrientation(Qt::Horizontal);
        mSliderBrightness->setTickPosition(QSlider::NoTicks);
        mSliderBrightness->setTickInterval(0);

        horizontalLayout_11->addWidget(mSliderBrightness);

        mBrightnessSpinBox = new QSpinBox(mLayerRendering);
        mBrightnessSpinBox->setObjectName(QStringLiteral("mBrightnessSpinBox"));
        mBrightnessSpinBox->setMinimum(-255);
        mBrightnessSpinBox->setMaximum(255);

        horizontalLayout_11->addWidget(mBrightnessSpinBox);


        gridLayout->addLayout(horizontalLayout_11, 1, 2, 1, 3);

        labelSaturation = new QLabel(mLayerRendering);
        labelSaturation->setObjectName(QStringLiteral("labelSaturation"));

        gridLayout->addWidget(labelSaturation, 2, 0, 1, 2);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        sliderSaturation = new QSlider(mLayerRendering);
        sliderSaturation->setObjectName(QStringLiteral("sliderSaturation"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(sliderSaturation->sizePolicy().hasHeightForWidth());
        sliderSaturation->setSizePolicy(sizePolicy2);
        sliderSaturation->setMinimumSize(QSize(75, 0));
        sliderSaturation->setMinimum(-100);
        sliderSaturation->setMaximum(100);
        sliderSaturation->setOrientation(Qt::Horizontal);

        horizontalLayout_10->addWidget(sliderSaturation);

        spinBoxSaturation = new QSpinBox(mLayerRendering);
        spinBoxSaturation->setObjectName(QStringLiteral("spinBoxSaturation"));
        spinBoxSaturation->setMinimum(-100);
        spinBoxSaturation->setMaximum(100);
        spinBoxSaturation->setValue(0);
        spinBoxSaturation->setProperty("decimals", QVariant(0));

        horizontalLayout_10->addWidget(spinBoxSaturation);


        gridLayout->addLayout(horizontalLayout_10, 2, 2, 1, 3);

        label_5 = new QLabel(mLayerRendering);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 3, 0, 1, 2);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        mSliderContrast = new QSlider(mLayerRendering);
        mSliderContrast->setObjectName(QStringLiteral("mSliderContrast"));
        mSliderContrast->setMinimumSize(QSize(75, 0));
        mSliderContrast->setMinimum(-100);
        mSliderContrast->setMaximum(100);
        mSliderContrast->setSingleStep(1);
        mSliderContrast->setOrientation(Qt::Horizontal);

        horizontalLayout_12->addWidget(mSliderContrast);

        mContrastSpinBox = new QSpinBox(mLayerRendering);
        mContrastSpinBox->setObjectName(QStringLiteral("mContrastSpinBox"));
        mContrastSpinBox->setMinimum(-100);
        mContrastSpinBox->setMaximum(100);

        horizontalLayout_12->addWidget(mContrastSpinBox);


        gridLayout->addLayout(horizontalLayout_12, 3, 2, 1, 3);

        labelGrayscale = new QLabel(mLayerRendering);
        labelGrayscale->setObjectName(QStringLiteral("labelGrayscale"));

        gridLayout->addWidget(labelGrayscale, 4, 0, 1, 2);

        comboGrayscale = new QComboBox(mLayerRendering);
        comboGrayscale->setObjectName(QStringLiteral("comboGrayscale"));

        gridLayout->addWidget(comboGrayscale, 4, 2, 1, 3);

        label_3 = new QLabel(mLayerRendering);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 5, 0, 1, 1);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        mColorizeCheck = new QCheckBox(mLayerRendering);
        mColorizeCheck->setObjectName(QStringLiteral("mColorizeCheck"));

        horizontalLayout_8->addWidget(mColorizeCheck);

        btnColorizeColor = new QgsColorButton(mLayerRendering);
        btnColorizeColor->setObjectName(QStringLiteral("btnColorizeColor"));
        btnColorizeColor->setMinimumSize(QSize(100, 0));
        btnColorizeColor->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_8->addWidget(btnColorizeColor);


        formLayout_2->setLayout(0, QFormLayout::SpanningRole, horizontalLayout_8);

        labelColorizeStrength = new QLabel(mLayerRendering);
        labelColorizeStrength->setObjectName(QStringLiteral("labelColorizeStrength"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, labelColorizeStrength);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        sliderColorizeStrength = new QSlider(mLayerRendering);
        sliderColorizeStrength->setObjectName(QStringLiteral("sliderColorizeStrength"));
        sliderColorizeStrength->setMaximum(100);
        sliderColorizeStrength->setValue(100);
        sliderColorizeStrength->setOrientation(Qt::Horizontal);

        horizontalLayout_9->addWidget(sliderColorizeStrength);

        spinColorizeStrength = new QSpinBox(mLayerRendering);
        spinColorizeStrength->setObjectName(QStringLiteral("spinColorizeStrength"));
        spinColorizeStrength->setMinimum(0);
        spinColorizeStrength->setMaximum(100);
        spinColorizeStrength->setValue(100);

        horizontalLayout_9->addWidget(spinColorizeStrength);


        formLayout_2->setLayout(1, QFormLayout::FieldRole, horizontalLayout_9);


        gridLayout->addLayout(formLayout_2, 5, 2, 1, 3);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        mResetColorRenderingBtn = new QToolButton(mLayerRendering);
        mResetColorRenderingBtn->setObjectName(QStringLiteral("mResetColorRenderingBtn"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/mActionUndo.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mResetColorRenderingBtn->setIcon(icon);
        mResetColorRenderingBtn->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_13->addWidget(mResetColorRenderingBtn);


        gridLayout->addLayout(horizontalLayout_13, 6, 2, 1, 3);


        verticalLayout_3->addWidget(mLayerRendering);

        mResamplingBox = new QGroupBox(frame);
        mResamplingBox->setObjectName(QStringLiteral("mResamplingBox"));
        gridLayout2 = new QGridLayout(mResamplingBox);
        gridLayout2->setObjectName(QStringLiteral("gridLayout2"));
        mZoomedInResamplingLabel = new QLabel(mResamplingBox);
        mZoomedInResamplingLabel->setObjectName(QStringLiteral("mZoomedInResamplingLabel"));

        gridLayout2->addWidget(mZoomedInResamplingLabel, 0, 0, 1, 1);

        mZoomedOutResamplingLabel = new QLabel(mResamplingBox);
        mZoomedOutResamplingLabel->setObjectName(QStringLiteral("mZoomedOutResamplingLabel"));

        gridLayout2->addWidget(mZoomedOutResamplingLabel, 1, 0, 1, 1);

        mMaximumOversamplingLabel = new QLabel(mResamplingBox);
        mMaximumOversamplingLabel->setObjectName(QStringLiteral("mMaximumOversamplingLabel"));

        gridLayout2->addWidget(mMaximumOversamplingLabel, 2, 0, 1, 1);

        mZoomedInResamplingComboBox = new QComboBox(mResamplingBox);
        mZoomedInResamplingComboBox->setObjectName(QStringLiteral("mZoomedInResamplingComboBox"));

        gridLayout2->addWidget(mZoomedInResamplingComboBox, 0, 2, 1, 1);

        mZoomedOutResamplingComboBox = new QComboBox(mResamplingBox);
        mZoomedOutResamplingComboBox->setObjectName(QStringLiteral("mZoomedOutResamplingComboBox"));

        gridLayout2->addWidget(mZoomedOutResamplingComboBox, 1, 2, 1, 1);

        mMaximumOversamplingSpinBox = new QDoubleSpinBox(mResamplingBox);
        mMaximumOversamplingSpinBox->setObjectName(QStringLiteral("mMaximumOversamplingSpinBox"));

        gridLayout2->addWidget(mMaximumOversamplingSpinBox, 2, 2, 1, 1);


        verticalLayout_3->addWidget(mResamplingBox);


        gridLayout_2->addWidget(frame, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 7, 0, 1, 1);

        QWidget::setTabOrder(cboRenderers, mBlendModeComboBox);
        QWidget::setTabOrder(mBlendModeComboBox, mSliderBrightness);
        QWidget::setTabOrder(mSliderBrightness, mBrightnessSpinBox);
        QWidget::setTabOrder(mBrightnessSpinBox, sliderSaturation);
        QWidget::setTabOrder(sliderSaturation, spinBoxSaturation);
        QWidget::setTabOrder(spinBoxSaturation, mSliderContrast);
        QWidget::setTabOrder(mSliderContrast, mContrastSpinBox);
        QWidget::setTabOrder(mContrastSpinBox, comboGrayscale);
        QWidget::setTabOrder(comboGrayscale, mColorizeCheck);
        QWidget::setTabOrder(mColorizeCheck, btnColorizeColor);
        QWidget::setTabOrder(btnColorizeColor, sliderColorizeStrength);
        QWidget::setTabOrder(sliderColorizeStrength, spinColorizeStrength);
        QWidget::setTabOrder(spinColorizeStrength, mResetColorRenderingBtn);
        QWidget::setTabOrder(mResetColorRenderingBtn, mZoomedInResamplingComboBox);
        QWidget::setTabOrder(mZoomedInResamplingComboBox, mZoomedOutResamplingComboBox);
        QWidget::setTabOrder(mZoomedOutResamplingComboBox, mMaximumOversamplingSpinBox);

        retranslateUi(QgsRendererRasterPropsWidgetBase);

        QMetaObject::connectSlotsByName(QgsRendererRasterPropsWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsRendererRasterPropsWidgetBase)
    {
        QgsRendererRasterPropsWidgetBase->setWindowTitle(QApplication::translate("QgsRendererRasterPropsWidgetBase", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("QgsRendererRasterPropsWidgetBase", "This renderer doesn't implement a graphical interface.", Q_NULLPTR));
        mLayerRendering->setTitle(QApplication::translate("QgsRendererRasterPropsWidgetBase", "Layer Rendering", Q_NULLPTR));
        mBlendTypeLabel->setText(QApplication::translate("QgsRendererRasterPropsWidgetBase", "Blending mode", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsRendererRasterPropsWidgetBase", "Brightness", Q_NULLPTR));
        labelSaturation->setText(QApplication::translate("QgsRendererRasterPropsWidgetBase", "Saturation", Q_NULLPTR));
        label_5->setText(QApplication::translate("QgsRendererRasterPropsWidgetBase", "Contrast", Q_NULLPTR));
        labelGrayscale->setText(QApplication::translate("QgsRendererRasterPropsWidgetBase", "Grayscale", Q_NULLPTR));
        comboGrayscale->clear();
        comboGrayscale->insertItems(0, QStringList()
         << QApplication::translate("QgsRendererRasterPropsWidgetBase", "Off", Q_NULLPTR)
         << QApplication::translate("QgsRendererRasterPropsWidgetBase", "By lightness", Q_NULLPTR)
         << QApplication::translate("QgsRendererRasterPropsWidgetBase", "By luminosity", Q_NULLPTR)
         << QApplication::translate("QgsRendererRasterPropsWidgetBase", "By average", Q_NULLPTR)
        );
        label_3->setText(QApplication::translate("QgsRendererRasterPropsWidgetBase", "Hue", Q_NULLPTR));
        mColorizeCheck->setText(QApplication::translate("QgsRendererRasterPropsWidgetBase", "Colorize", Q_NULLPTR));
        btnColorizeColor->setText(QString());
        labelColorizeStrength->setText(QApplication::translate("QgsRendererRasterPropsWidgetBase", "Strength", Q_NULLPTR));
        spinColorizeStrength->setSuffix(QApplication::translate("QgsRendererRasterPropsWidgetBase", "%", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mResetColorRenderingBtn->setToolTip(QApplication::translate("QgsRendererRasterPropsWidgetBase", "Reset all color rendering options to default", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mResetColorRenderingBtn->setText(QApplication::translate("QgsRendererRasterPropsWidgetBase", "Reset", Q_NULLPTR));
        mResamplingBox->setTitle(QApplication::translate("QgsRendererRasterPropsWidgetBase", "Resampling", Q_NULLPTR));
        mZoomedInResamplingLabel->setText(QApplication::translate("QgsRendererRasterPropsWidgetBase", "Zoomed in", Q_NULLPTR));
        mZoomedOutResamplingLabel->setText(QApplication::translate("QgsRendererRasterPropsWidgetBase", "Zoomed out", Q_NULLPTR));
        mMaximumOversamplingLabel->setText(QApplication::translate("QgsRendererRasterPropsWidgetBase", "Oversampling", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsRendererRasterPropsWidgetBase: public Ui_QgsRendererRasterPropsWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSRENDERERRASTERPROPSWIDGETBASE_H
