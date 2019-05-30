/********************************************************************************
** Form generated from reading UI file 'animation3dwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANIMATION3DWIDGET_H
#define UI_ANIMATION3DWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Animation3DWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *cboKeyframe;
    QToolButton *btnAddKeyframe;
    QToolButton *btnRemoveKeyframe;
    QToolButton *btnEditKeyframe;
    QToolButton *btnDuplicateKeyframe;
    QToolButton *btnExportAnimation;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QComboBox *cboInterpolation;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *btnPlayPause;
    QSlider *sliderTime;
    QToolButton *btnRepeat;

    void setupUi(QWidget *Animation3DWidget)
    {
        if (Animation3DWidget->objectName().isEmpty())
            Animation3DWidget->setObjectName(QStringLiteral("Animation3DWidget"));
        Animation3DWidget->resize(986, 129);
        verticalLayout = new QVBoxLayout(Animation3DWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(Animation3DWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        cboKeyframe = new QComboBox(Animation3DWidget);
        cboKeyframe->setObjectName(QStringLiteral("cboKeyframe"));

        horizontalLayout->addWidget(cboKeyframe);

        btnAddKeyframe = new QToolButton(Animation3DWidget);
        btnAddKeyframe->setObjectName(QStringLiteral("btnAddKeyframe"));

        horizontalLayout->addWidget(btnAddKeyframe);

        btnRemoveKeyframe = new QToolButton(Animation3DWidget);
        btnRemoveKeyframe->setObjectName(QStringLiteral("btnRemoveKeyframe"));

        horizontalLayout->addWidget(btnRemoveKeyframe);

        btnEditKeyframe = new QToolButton(Animation3DWidget);
        btnEditKeyframe->setObjectName(QStringLiteral("btnEditKeyframe"));

        horizontalLayout->addWidget(btnEditKeyframe);

        btnDuplicateKeyframe = new QToolButton(Animation3DWidget);
        btnDuplicateKeyframe->setObjectName(QStringLiteral("btnDuplicateKeyframe"));

        horizontalLayout->addWidget(btnDuplicateKeyframe);

        btnExportAnimation = new QToolButton(Animation3DWidget);
        btnExportAnimation->setObjectName(QStringLiteral("btnExportAnimation"));
        btnExportAnimation->setAcceptDrops(true);

        horizontalLayout->addWidget(btnExportAnimation);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_2 = new QLabel(Animation3DWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        cboInterpolation = new QComboBox(Animation3DWidget);
        cboInterpolation->setObjectName(QStringLiteral("cboInterpolation"));

        horizontalLayout->addWidget(cboInterpolation);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        btnPlayPause = new QToolButton(Animation3DWidget);
        btnPlayPause->setObjectName(QStringLiteral("btnPlayPause"));

        horizontalLayout_2->addWidget(btnPlayPause);

        sliderTime = new QSlider(Animation3DWidget);
        sliderTime->setObjectName(QStringLiteral("sliderTime"));
        sliderTime->setMaximum(100);
        sliderTime->setOrientation(Qt::Horizontal);
        sliderTime->setTickPosition(QSlider::TicksBothSides);
        sliderTime->setTickInterval(10);

        horizontalLayout_2->addWidget(sliderTime);

        btnRepeat = new QToolButton(Animation3DWidget);
        btnRepeat->setObjectName(QStringLiteral("btnRepeat"));

        horizontalLayout_2->addWidget(btnRepeat);


        verticalLayout->addLayout(horizontalLayout_2);

        QWidget::setTabOrder(cboKeyframe, btnAddKeyframe);
        QWidget::setTabOrder(btnAddKeyframe, btnRemoveKeyframe);
        QWidget::setTabOrder(btnRemoveKeyframe, btnEditKeyframe);
        QWidget::setTabOrder(btnEditKeyframe, btnDuplicateKeyframe);
        QWidget::setTabOrder(btnDuplicateKeyframe, cboInterpolation);
        QWidget::setTabOrder(cboInterpolation, btnPlayPause);
        QWidget::setTabOrder(btnPlayPause, sliderTime);
        QWidget::setTabOrder(sliderTime, btnRepeat);

        retranslateUi(Animation3DWidget);

        QMetaObject::connectSlotsByName(Animation3DWidget);
    } // setupUi

    void retranslateUi(QWidget *Animation3DWidget)
    {
        Animation3DWidget->setWindowTitle(QApplication::translate("Animation3DWidget", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("Animation3DWidget", "Keyframe", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnAddKeyframe->setToolTip(QApplication::translate("Animation3DWidget", "Add keyframe", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnAddKeyframe->setText(QApplication::translate("Animation3DWidget", " + ", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnRemoveKeyframe->setToolTip(QApplication::translate("Animation3DWidget", "Remove keyframe", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnRemoveKeyframe->setText(QApplication::translate("Animation3DWidget", " - ", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnEditKeyframe->setToolTip(QApplication::translate("Animation3DWidget", "Edit keyframe", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnEditKeyframe->setText(QApplication::translate("Animation3DWidget", "\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnDuplicateKeyframe->setToolTip(QApplication::translate("Animation3DWidget", "Duplicate keyframe", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnDuplicateKeyframe->setText(QApplication::translate("Animation3DWidget", "\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnExportAnimation->setToolTip(QApplication::translate("Animation3DWidget", "Export Animation Frames", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnExportAnimation->setText(QApplication::translate("Animation3DWidget", "\342\200\246", Q_NULLPTR));
        label_2->setText(QApplication::translate("Animation3DWidget", "Interpolation", Q_NULLPTR));
        cboInterpolation->clear();
        cboInterpolation->insertItems(0, QStringList()
         << QApplication::translate("Animation3DWidget", "Linear", Q_NULLPTR)
         << QApplication::translate("Animation3DWidget", "InQuad", Q_NULLPTR)
         << QApplication::translate("Animation3DWidget", "OutQuad", Q_NULLPTR)
         << QApplication::translate("Animation3DWidget", "InOutQuad", Q_NULLPTR)
         << QApplication::translate("Animation3DWidget", "OutInQuad", Q_NULLPTR)
         << QApplication::translate("Animation3DWidget", "InCubic", Q_NULLPTR)
         << QApplication::translate("Animation3DWidget", "OutCubic", Q_NULLPTR)
         << QApplication::translate("Animation3DWidget", "InOutCubic", Q_NULLPTR)
         << QApplication::translate("Animation3DWidget", "OutInCubic", Q_NULLPTR)
         << QApplication::translate("Animation3DWidget", "InQuart", Q_NULLPTR)
         << QApplication::translate("Animation3DWidget", "OutQuart", Q_NULLPTR)
         << QApplication::translate("Animation3DWidget", "InOutQuart", Q_NULLPTR)
         << QApplication::translate("Animation3DWidget", "OutInQuart", Q_NULLPTR)
         << QApplication::translate("Animation3DWidget", "InQuint", Q_NULLPTR)
         << QApplication::translate("Animation3DWidget", "OutQuint", Q_NULLPTR)
         << QApplication::translate("Animation3DWidget", "InOutQuint", Q_NULLPTR)
         << QApplication::translate("Animation3DWidget", "OutInQuint", Q_NULLPTR)
         << QApplication::translate("Animation3DWidget", "InSine", Q_NULLPTR)
         << QApplication::translate("Animation3DWidget", "OutSine", Q_NULLPTR)
         << QApplication::translate("Animation3DWidget", "InOutSine", Q_NULLPTR)
         << QApplication::translate("Animation3DWidget", "OutInSine", Q_NULLPTR)
         << QApplication::translate("Animation3DWidget", "InExpo", Q_NULLPTR)
         << QApplication::translate("Animation3DWidget", "OutExpo", Q_NULLPTR)
         << QApplication::translate("Animation3DWidget", "InOutExpo", Q_NULLPTR)
         << QApplication::translate("Animation3DWidget", "OutInExpo", Q_NULLPTR)
         << QApplication::translate("Animation3DWidget", "InCirc", Q_NULLPTR)
         << QApplication::translate("Animation3DWidget", "OutCirc", Q_NULLPTR)
         << QApplication::translate("Animation3DWidget", "InOutCirc", Q_NULLPTR)
         << QApplication::translate("Animation3DWidget", "OutInCirc", Q_NULLPTR)
        );
        btnPlayPause->setText(QApplication::translate("Animation3DWidget", ">", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnRepeat->setToolTip(QApplication::translate("Animation3DWidget", "Repeat", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnRepeat->setText(QApplication::translate("Animation3DWidget", "\342\200\246", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Animation3DWidget: public Ui_Animation3DWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANIMATION3DWIDGET_H
