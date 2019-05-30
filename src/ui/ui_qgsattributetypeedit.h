/********************************************************************************
** Form generated from reading UI file 'qgsattributetypeedit.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSATTRIBUTETYPEEDIT_H
#define UI_QGSATTRIBUTETYPEEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgsexpressionlineedit.h"
#include "qgsfieldexpressionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsAttributeTypeDialog
{
public:
    QVBoxLayout *verticalLayout;
    QgsCollapsibleGroupBox *groupBox_4;
    QGridLayout *gridLayout;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *leAlias;
    QLabel *laComment;
    QCheckBox *isFieldEditableCheckBox;
    QCheckBox *labelOnTopCheckBox;
    QgsCollapsibleGroupBox *groupBox_3;
    QGridLayout *gridLayout_5;
    QStackedWidget *stackedWidget;
    QComboBox *mWidgetTypeComboBox;
    QgsCollapsibleGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QCheckBox *mUniqueCheckBox;
    QCheckBox *notNullCheckBox;
    QCheckBox *mCheckBoxEnforceUnique;
    QgsFieldExpressionWidget *constraintExpressionWidget;
    QLabel *label_2;
    QLineEdit *leConstraintExpressionDescription;
    QCheckBox *mCheckBoxEnforceNotNull;
    QLabel *label;
    QCheckBox *mCheckBoxEnforceExpression;
    QgsCollapsibleGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QLabel *mDefaultPreviewLabel;
    QgsExpressionLineEdit *mExpressionWidget;
    QLabel *label_4;
    QCheckBox *mApplyDefaultValueOnUpdateCheckBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QgsAttributeTypeDialog)
    {
        if (QgsAttributeTypeDialog->objectName().isEmpty())
            QgsAttributeTypeDialog->setObjectName(QStringLiteral("QgsAttributeTypeDialog"));
        QgsAttributeTypeDialog->resize(751, 620);
        verticalLayout = new QVBoxLayout(QgsAttributeTypeDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox_4 = new QgsCollapsibleGroupBox(QgsAttributeTypeDialog);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        gridLayout = new QGridLayout(groupBox_4);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_5 = new QLabel(groupBox_4);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 0, 0, 1, 1);

        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 1, 0, 1, 1);

        leAlias = new QLineEdit(groupBox_4);
        leAlias->setObjectName(QStringLiteral("leAlias"));

        gridLayout->addWidget(leAlias, 0, 2, 1, 1);

        laComment = new QLabel(groupBox_4);
        laComment->setObjectName(QStringLiteral("laComment"));
        laComment->setWordWrap(true);

        gridLayout->addWidget(laComment, 1, 2, 1, 1);

        isFieldEditableCheckBox = new QCheckBox(groupBox_4);
        isFieldEditableCheckBox->setObjectName(QStringLiteral("isFieldEditableCheckBox"));
        isFieldEditableCheckBox->setChecked(true);

        gridLayout->addWidget(isFieldEditableCheckBox, 2, 0, 1, 1);

        labelOnTopCheckBox = new QCheckBox(groupBox_4);
        labelOnTopCheckBox->setObjectName(QStringLiteral("labelOnTopCheckBox"));
        labelOnTopCheckBox->setChecked(false);

        gridLayout->addWidget(labelOnTopCheckBox, 2, 2, 1, 1);


        verticalLayout->addWidget(groupBox_4);

        groupBox_3 = new QgsCollapsibleGroupBox(QgsAttributeTypeDialog);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout_5 = new QGridLayout(groupBox_3);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        stackedWidget = new QStackedWidget(groupBox_3);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));

        gridLayout_5->addWidget(stackedWidget, 1, 1, 1, 1);

        mWidgetTypeComboBox = new QComboBox(groupBox_3);
        mWidgetTypeComboBox->setObjectName(QStringLiteral("mWidgetTypeComboBox"));

        gridLayout_5->addWidget(mWidgetTypeComboBox, 0, 1, 1, 1);


        verticalLayout->addWidget(groupBox_3);

        groupBox = new QgsCollapsibleGroupBox(QgsAttributeTypeDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setFocusPolicy(Qt::NoFocus);
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        mUniqueCheckBox = new QCheckBox(groupBox);
        mUniqueCheckBox->setObjectName(QStringLiteral("mUniqueCheckBox"));

        gridLayout_3->addWidget(mUniqueCheckBox, 1, 0, 1, 1);

        notNullCheckBox = new QCheckBox(groupBox);
        notNullCheckBox->setObjectName(QStringLiteral("notNullCheckBox"));

        gridLayout_3->addWidget(notNullCheckBox, 0, 0, 1, 1);

        mCheckBoxEnforceUnique = new QCheckBox(groupBox);
        mCheckBoxEnforceUnique->setObjectName(QStringLiteral("mCheckBoxEnforceUnique"));
        mCheckBoxEnforceUnique->setEnabled(false);

        gridLayout_3->addWidget(mCheckBoxEnforceUnique, 1, 1, 1, 1);

        constraintExpressionWidget = new QgsFieldExpressionWidget(groupBox);
        constraintExpressionWidget->setObjectName(QStringLiteral("constraintExpressionWidget"));
        constraintExpressionWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_3->addWidget(constraintExpressionWidget, 2, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_3->addWidget(label_2, 3, 0, 1, 1);

        leConstraintExpressionDescription = new QLineEdit(groupBox);
        leConstraintExpressionDescription->setObjectName(QStringLiteral("leConstraintExpressionDescription"));

        gridLayout_3->addWidget(leConstraintExpressionDescription, 3, 1, 1, 1);

        mCheckBoxEnforceNotNull = new QCheckBox(groupBox);
        mCheckBoxEnforceNotNull->setObjectName(QStringLiteral("mCheckBoxEnforceNotNull"));
        mCheckBoxEnforceNotNull->setEnabled(false);

        gridLayout_3->addWidget(mCheckBoxEnforceNotNull, 0, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_3->addWidget(label, 2, 0, 1, 1);

        mCheckBoxEnforceExpression = new QCheckBox(groupBox);
        mCheckBoxEnforceExpression->setObjectName(QStringLiteral("mCheckBoxEnforceExpression"));

        gridLayout_3->addWidget(mCheckBoxEnforceExpression, 4, 0, 1, 2);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QgsCollapsibleGroupBox(QgsAttributeTypeDialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 1, 0, 1, 1);

        mDefaultPreviewLabel = new QLabel(groupBox_2);
        mDefaultPreviewLabel->setObjectName(QStringLiteral("mDefaultPreviewLabel"));

        gridLayout_2->addWidget(mDefaultPreviewLabel, 3, 1, 1, 1);

        mExpressionWidget = new QgsExpressionLineEdit(groupBox_2);
        mExpressionWidget->setObjectName(QStringLiteral("mExpressionWidget"));
        mExpressionWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_2->addWidget(mExpressionWidget, 1, 1, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 3, 0, 1, 1);

        mApplyDefaultValueOnUpdateCheckBox = new QCheckBox(groupBox_2);
        mApplyDefaultValueOnUpdateCheckBox->setObjectName(QStringLiteral("mApplyDefaultValueOnUpdateCheckBox"));

        gridLayout_2->addWidget(mApplyDefaultValueOnUpdateCheckBox, 4, 0, 1, 2);

        gridLayout_2->setColumnStretch(1, 1);

        verticalLayout->addWidget(groupBox_2);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        QWidget::setTabOrder(leAlias, isFieldEditableCheckBox);
        QWidget::setTabOrder(isFieldEditableCheckBox, labelOnTopCheckBox);
        QWidget::setTabOrder(labelOnTopCheckBox, mWidgetTypeComboBox);
        QWidget::setTabOrder(mWidgetTypeComboBox, notNullCheckBox);
        QWidget::setTabOrder(notNullCheckBox, mCheckBoxEnforceNotNull);
        QWidget::setTabOrder(mCheckBoxEnforceNotNull, mUniqueCheckBox);
        QWidget::setTabOrder(mUniqueCheckBox, mCheckBoxEnforceUnique);
        QWidget::setTabOrder(mCheckBoxEnforceUnique, constraintExpressionWidget);
        QWidget::setTabOrder(constraintExpressionWidget, leConstraintExpressionDescription);
        QWidget::setTabOrder(leConstraintExpressionDescription, mCheckBoxEnforceExpression);
        QWidget::setTabOrder(mCheckBoxEnforceExpression, mExpressionWidget);
        QWidget::setTabOrder(mExpressionWidget, mApplyDefaultValueOnUpdateCheckBox);

        retranslateUi(QgsAttributeTypeDialog);

        QMetaObject::connectSlotsByName(QgsAttributeTypeDialog);
    } // setupUi

    void retranslateUi(QWidget *QgsAttributeTypeDialog)
    {
        QgsAttributeTypeDialog->setWindowTitle(QApplication::translate("QgsAttributeTypeDialog", "Edit Widget Properties", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("QgsAttributeTypeDialog", "General", Q_NULLPTR));
        label_5->setText(QApplication::translate("QgsAttributeTypeDialog", "Alias", Q_NULLPTR));
        label_6->setText(QApplication::translate("QgsAttributeTypeDialog", "Comment", Q_NULLPTR));
        leAlias->setText(QString());
        laComment->setText(QString());
        isFieldEditableCheckBox->setText(QApplication::translate("QgsAttributeTypeDialog", "Editable", Q_NULLPTR));
        labelOnTopCheckBox->setText(QApplication::translate("QgsAttributeTypeDialog", "Label on top", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("QgsAttributeTypeDialog", "Widget Type", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("QgsAttributeTypeDialog", "Constraints", Q_NULLPTR));
        mUniqueCheckBox->setText(QApplication::translate("QgsAttributeTypeDialog", "Unique", Q_NULLPTR));
        notNullCheckBox->setText(QApplication::translate("QgsAttributeTypeDialog", "Not null", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mCheckBoxEnforceUnique->setToolTip(QApplication::translate("QgsAttributeTypeDialog", "<p>Enforcing the unique constraint prevents committing features which do not meet the constraint.</p><p>Unenforced constraints display a warning to users, but do not prevent committing the feature.</p>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mCheckBoxEnforceUnique->setText(QApplication::translate("QgsAttributeTypeDialog", "Enforce unique constraint", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsAttributeTypeDialog", "Expression description", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        leConstraintExpressionDescription->setToolTip(QApplication::translate("QgsAttributeTypeDialog", "Optional descriptive name for expression constraint", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        mCheckBoxEnforceNotNull->setToolTip(QApplication::translate("QgsAttributeTypeDialog", "<p>Enforcing the not null constraint prevents committing features which do not meet the constraint.</p><p>Unenforced constraints display a warning to users, but do not prevent committing the feature.</p>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mCheckBoxEnforceNotNull->setText(QApplication::translate("QgsAttributeTypeDialog", "Enforce not null constraint", Q_NULLPTR));
        label->setText(QApplication::translate("QgsAttributeTypeDialog", "Expression", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mCheckBoxEnforceExpression->setToolTip(QApplication::translate("QgsAttributeTypeDialog", "<p>Enforcing the expression constraint prevents committing features which do not meet the constraint.</p><p>Unenforced constraints display a warning to users, but do not prevent committing the feature.</p>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mCheckBoxEnforceExpression->setText(QApplication::translate("QgsAttributeTypeDialog", "Enforce expression constraint", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("QgsAttributeTypeDialog", "Defaults", Q_NULLPTR));
        label_3->setText(QApplication::translate("QgsAttributeTypeDialog", "Default value", Q_NULLPTR));
        mDefaultPreviewLabel->setText(QString());
        label_4->setText(QApplication::translate("QgsAttributeTypeDialog", "Preview", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mApplyDefaultValueOnUpdateCheckBox->setToolTip(QApplication::translate("QgsAttributeTypeDialog", "<p>With this option checked, the default value will not only be used when the feature is first created, but also whenever a feature's attribute or geometry is changed.</p><p>This is often useful for a last_modified timestamp or to record the username that last modified the feature.</p>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mApplyDefaultValueOnUpdateCheckBox->setText(QApplication::translate("QgsAttributeTypeDialog", "Apply default value on update", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsAttributeTypeDialog: public Ui_QgsAttributeTypeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSATTRIBUTETYPEEDIT_H
