/********************************************************************************
** Form generated from reading UI file 'offline_editing_progress_dialog_base.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OFFLINE_EDITING_PROGRESS_DIALOG_BASE_H
#define UI_OFFLINE_EDITING_PROGRESS_DIALOG_BASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QgsOfflineEditingProgressDialogBase
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QProgressBar *progressBar;

    void setupUi(QDialog *QgsOfflineEditingProgressDialogBase)
    {
        if (QgsOfflineEditingProgressDialogBase->objectName().isEmpty())
            QgsOfflineEditingProgressDialogBase->setObjectName(QStringLiteral("QgsOfflineEditingProgressDialogBase"));
        QgsOfflineEditingProgressDialogBase->resize(400, 55);
        QgsOfflineEditingProgressDialogBase->setContextMenuPolicy(Qt::NoContextMenu);
        verticalLayout = new QVBoxLayout(QgsOfflineEditingProgressDialogBase);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(QgsOfflineEditingProgressDialogBase);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        progressBar = new QProgressBar(QgsOfflineEditingProgressDialogBase);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(24);

        verticalLayout->addWidget(progressBar);


        retranslateUi(QgsOfflineEditingProgressDialogBase);

        QMetaObject::connectSlotsByName(QgsOfflineEditingProgressDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsOfflineEditingProgressDialogBase)
    {
        QgsOfflineEditingProgressDialogBase->setWindowTitle(QApplication::translate("QgsOfflineEditingProgressDialogBase", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("QgsOfflineEditingProgressDialogBase", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsOfflineEditingProgressDialogBase: public Ui_QgsOfflineEditingProgressDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OFFLINE_EDITING_PROGRESS_DIALOG_BASE_H
