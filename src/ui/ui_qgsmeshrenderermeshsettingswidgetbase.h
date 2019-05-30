/********************************************************************************
** Form generated from reading UI file 'qgsmeshrenderermeshsettingswidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMESHRENDERERMESHSETTINGSWIDGETBASE_H
#define UI_QGSMESHRENDERERMESHSETTINGSWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>
#include "qgscolorbutton.h"
#include "qgsdoublespinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsMeshRendererMeshSettingsWidgetBase
{
public:
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QgsDoubleSpinBox *mLineWidthSpinBox;
    QgsColorButton *mColorWidget;

    void setupUi(QWidget *QgsMeshRendererMeshSettingsWidgetBase)
    {
        if (QgsMeshRendererMeshSettingsWidgetBase->objectName().isEmpty())
            QgsMeshRendererMeshSettingsWidgetBase->setObjectName(QStringLiteral("QgsMeshRendererMeshSettingsWidgetBase"));
        QgsMeshRendererMeshSettingsWidgetBase->resize(279, 84);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsMeshRendererMeshSettingsWidgetBase->sizePolicy().hasHeightForWidth());
        QgsMeshRendererMeshSettingsWidgetBase->setSizePolicy(sizePolicy);
        horizontalLayout_2 = new QHBoxLayout(QgsMeshRendererMeshSettingsWidgetBase);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        groupBox = new QGroupBox(QgsMeshRendererMeshSettingsWidgetBase);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mLineWidthSpinBox = new QgsDoubleSpinBox(groupBox);
        mLineWidthSpinBox->setObjectName(QStringLiteral("mLineWidthSpinBox"));
        sizePolicy.setHeightForWidth(mLineWidthSpinBox->sizePolicy().hasHeightForWidth());
        mLineWidthSpinBox->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(mLineWidthSpinBox);

        mColorWidget = new QgsColorButton(groupBox);
        mColorWidget->setObjectName(QStringLiteral("mColorWidget"));
        sizePolicy.setHeightForWidth(mColorWidget->sizePolicy().hasHeightForWidth());
        mColorWidget->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(mColorWidget);


        horizontalLayout_2->addWidget(groupBox);


        retranslateUi(QgsMeshRendererMeshSettingsWidgetBase);

        QMetaObject::connectSlotsByName(QgsMeshRendererMeshSettingsWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsMeshRendererMeshSettingsWidgetBase)
    {
        QgsMeshRendererMeshSettingsWidgetBase->setWindowTitle(QApplication::translate("QgsMeshRendererMeshSettingsWidgetBase", "Form", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("QgsMeshRendererMeshSettingsWidgetBase", "Line Width and Color", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsMeshRendererMeshSettingsWidgetBase: public Ui_QgsMeshRendererMeshSettingsWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMESHRENDERERMESHSETTINGSWIDGETBASE_H
