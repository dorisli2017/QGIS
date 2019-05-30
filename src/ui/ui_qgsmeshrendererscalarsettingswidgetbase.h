/********************************************************************************
** Form generated from reading UI file 'qgsmeshrendererscalarsettingswidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMESHRENDERERSCALARSETTINGSWIDGETBASE_H
#define UI_QGSMESHRENDERERSCALARSETTINGSWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsopacitywidget.h"
#include "raster/qgscolorrampshaderwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsMeshRendererScalarSettingsWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *mOpacityLabel;
    QgsOpacityWidget *mOpacityWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *mScalarMinLabel;
    QLineEdit *mScalarMinLineEdit;
    QLabel *mScalarMaxLabel;
    QLineEdit *mScalarMaxLineEdit;
    QPushButton *mScalarRecalculateMinMaxButton;
    QgsColorRampShaderWidget *mScalarColorRampShaderWidget;

    void setupUi(QWidget *QgsMeshRendererScalarSettingsWidgetBase)
    {
        if (QgsMeshRendererScalarSettingsWidgetBase->objectName().isEmpty())
            QgsMeshRendererScalarSettingsWidgetBase->setObjectName(QStringLiteral("QgsMeshRendererScalarSettingsWidgetBase"));
        QgsMeshRendererScalarSettingsWidgetBase->resize(344, 267);
        verticalLayout = new QVBoxLayout(QgsMeshRendererScalarSettingsWidgetBase);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mOpacityLabel = new QLabel(QgsMeshRendererScalarSettingsWidgetBase);
        mOpacityLabel->setObjectName(QStringLiteral("mOpacityLabel"));

        horizontalLayout->addWidget(mOpacityLabel);

        mOpacityWidget = new QgsOpacityWidget(QgsMeshRendererScalarSettingsWidgetBase);
        mOpacityWidget->setObjectName(QStringLiteral("mOpacityWidget"));
        mOpacityWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout->addWidget(mOpacityWidget);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        mScalarMinLabel = new QLabel(QgsMeshRendererScalarSettingsWidgetBase);
        mScalarMinLabel->setObjectName(QStringLiteral("mScalarMinLabel"));

        horizontalLayout_2->addWidget(mScalarMinLabel);

        mScalarMinLineEdit = new QLineEdit(QgsMeshRendererScalarSettingsWidgetBase);
        mScalarMinLineEdit->setObjectName(QStringLiteral("mScalarMinLineEdit"));

        horizontalLayout_2->addWidget(mScalarMinLineEdit);

        mScalarMaxLabel = new QLabel(QgsMeshRendererScalarSettingsWidgetBase);
        mScalarMaxLabel->setObjectName(QStringLiteral("mScalarMaxLabel"));

        horizontalLayout_2->addWidget(mScalarMaxLabel);

        mScalarMaxLineEdit = new QLineEdit(QgsMeshRendererScalarSettingsWidgetBase);
        mScalarMaxLineEdit->setObjectName(QStringLiteral("mScalarMaxLineEdit"));

        horizontalLayout_2->addWidget(mScalarMaxLineEdit);

        mScalarRecalculateMinMaxButton = new QPushButton(QgsMeshRendererScalarSettingsWidgetBase);
        mScalarRecalculateMinMaxButton->setObjectName(QStringLiteral("mScalarRecalculateMinMaxButton"));

        horizontalLayout_2->addWidget(mScalarRecalculateMinMaxButton);


        verticalLayout->addLayout(horizontalLayout_2);

        mScalarColorRampShaderWidget = new QgsColorRampShaderWidget(QgsMeshRendererScalarSettingsWidgetBase);
        mScalarColorRampShaderWidget->setObjectName(QStringLiteral("mScalarColorRampShaderWidget"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mScalarColorRampShaderWidget->sizePolicy().hasHeightForWidth());
        mScalarColorRampShaderWidget->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(mScalarColorRampShaderWidget);


        retranslateUi(QgsMeshRendererScalarSettingsWidgetBase);

        QMetaObject::connectSlotsByName(QgsMeshRendererScalarSettingsWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsMeshRendererScalarSettingsWidgetBase)
    {
        QgsMeshRendererScalarSettingsWidgetBase->setWindowTitle(QApplication::translate("QgsMeshRendererScalarSettingsWidgetBase", "Form", Q_NULLPTR));
        mOpacityLabel->setText(QApplication::translate("QgsMeshRendererScalarSettingsWidgetBase", "Opacity", Q_NULLPTR));
        mScalarMinLabel->setText(QApplication::translate("QgsMeshRendererScalarSettingsWidgetBase", "Min", Q_NULLPTR));
        mScalarMinLineEdit->setText(QApplication::translate("QgsMeshRendererScalarSettingsWidgetBase", "0", Q_NULLPTR));
        mScalarMaxLabel->setText(QApplication::translate("QgsMeshRendererScalarSettingsWidgetBase", "Max", Q_NULLPTR));
        mScalarMaxLineEdit->setText(QApplication::translate("QgsMeshRendererScalarSettingsWidgetBase", "1", Q_NULLPTR));
        mScalarRecalculateMinMaxButton->setText(QApplication::translate("QgsMeshRendererScalarSettingsWidgetBase", "Load", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsMeshRendererScalarSettingsWidgetBase: public Ui_QgsMeshRendererScalarSettingsWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMESHRENDERERSCALARSETTINGSWIDGETBASE_H
