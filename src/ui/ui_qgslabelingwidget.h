/********************************************************************************
** Form generated from reading UI file 'qgslabelingwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLABELINGWIDGET_H
#define UI_QGSLABELINGWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsLabelingWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *mLabelModeComboBox;
    QPushButton *mEngineSettingsButton;
    QStackedWidget *mStackedWidget;
    QHBoxLayout *horizontalLayout_2;

    void setupUi(QWidget *QgsLabelingWidget)
    {
        if (QgsLabelingWidget->objectName().isEmpty())
            QgsLabelingWidget->setObjectName(QStringLiteral("QgsLabelingWidget"));
        QgsLabelingWidget->resize(572, 300);
        verticalLayout = new QVBoxLayout(QgsLabelingWidget);
#ifndef Q_OS_MAC
        verticalLayout->setSpacing(6);
#endif
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mLabelModeComboBox = new QComboBox(QgsLabelingWidget);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/labelingNone.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mLabelModeComboBox->addItem(icon, QString());
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/labelingSingle.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mLabelModeComboBox->addItem(icon1, QString());
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/themes/default/labelingRuleBased.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mLabelModeComboBox->addItem(icon2, QString());
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/themes/default/labelingObstacle.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mLabelModeComboBox->addItem(icon3, QString());
        mLabelModeComboBox->setObjectName(QStringLiteral("mLabelModeComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mLabelModeComboBox->sizePolicy().hasHeightForWidth());
        mLabelModeComboBox->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(mLabelModeComboBox);

        mEngineSettingsButton = new QPushButton(QgsLabelingWidget);
        mEngineSettingsButton->setObjectName(QStringLiteral("mEngineSettingsButton"));
        mEngineSettingsButton->setEnabled(true);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/themes/default/mIconAutoPlacementSettings.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mEngineSettingsButton->setIcon(icon4);
        mEngineSettingsButton->setIconSize(QSize(24, 16));

        horizontalLayout->addWidget(mEngineSettingsButton);


        verticalLayout->addLayout(horizontalLayout);

        mStackedWidget = new QStackedWidget(QgsLabelingWidget);
        mStackedWidget->setObjectName(QStringLiteral("mStackedWidget"));

        verticalLayout->addWidget(mStackedWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(12);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);

        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(QgsLabelingWidget);

        QMetaObject::connectSlotsByName(QgsLabelingWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsLabelingWidget)
    {
        mLabelModeComboBox->setItemText(0, QApplication::translate("QgsLabelingWidget", "No labels", Q_NULLPTR));
        mLabelModeComboBox->setItemText(1, QApplication::translate("QgsLabelingWidget", "Single labels", Q_NULLPTR));
        mLabelModeComboBox->setItemText(2, QApplication::translate("QgsLabelingWidget", "Rule-based labeling", Q_NULLPTR));
        mLabelModeComboBox->setItemText(3, QApplication::translate("QgsLabelingWidget", "Blocking", Q_NULLPTR));

#ifndef QT_NO_TOOLTIP
        mEngineSettingsButton->setToolTip(QApplication::translate("QgsLabelingWidget", "Automated placement settings (applies to all layers)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        Q_UNUSED(QgsLabelingWidget);
    } // retranslateUi

};

namespace Ui {
    class QgsLabelingWidget: public Ui_QgsLabelingWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLABELINGWIDGET_H
