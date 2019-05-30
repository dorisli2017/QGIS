/********************************************************************************
** Form generated from reading UI file 'qgsfieldconditionalformatwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSFIELDCONDITIONALFORMATWIDGET_H
#define UI_QGSFIELDCONDITIONALFORMATWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscolorbutton.h"
#include "qgsfieldcombobox.h"
#include "qgssymbolbutton.h"

QT_BEGIN_NAMESPACE

class Ui_QgsFieldConditionalWidget
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QStackedWidget *pages;
    QWidget *page;
    QGridLayout *gridLayout;
    QListView *listView;
    QGridLayout *gridLayout_4;
    QPushButton *mNewButton;
    QHBoxLayout *horizontalLayout;
    QgsFieldComboBox *mFieldCombo;
    QRadioButton *fieldRadio;
    QRadioButton *rowRadio;
    QWidget *page_2;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *mRuleEdit;
    QToolButton *btnBuildExpression;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *mSaveRule;
    QPushButton *mCancelButton;
    QSpacerItem *horizontalSpacer;
    QToolButton *mDeleteButton;
    QSpacerItem *verticalSpacer;
    QFrame *horizontalFrame_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QgsColorButton *btnBackgroundColor;
    QLabel *label_6;
    QgsColorButton *btnTextColor;
    QHBoxLayout *horizontalLayout_6;
    QCheckBox *checkIcon;
    QgsSymbolButton *btnChangeIcon;
    QHBoxLayout *horizontalLayout_13;
    QToolButton *mFontBoldBtn;
    QToolButton *mFontItalicBtn;
    QToolButton *mFontUnderlineBtn;
    QToolButton *mFontStrikethroughBtn;
    QFontComboBox *mFontFamilyCmbBx;
    QLabel *label_2;
    QLineEdit *mNameEdit;
    QLabel *label_3;
    QComboBox *mPresetsList;
    QButtonGroup *mFontButtons;

    void setupUi(QWidget *QgsFieldConditionalWidget)
    {
        if (QgsFieldConditionalWidget->objectName().isEmpty())
            QgsFieldConditionalWidget->setObjectName(QStringLiteral("QgsFieldConditionalWidget"));
        QgsFieldConditionalWidget->resize(335, 376);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsFieldConditionalWidget->sizePolicy().hasHeightForWidth());
        QgsFieldConditionalWidget->setSizePolicy(sizePolicy);
        QgsFieldConditionalWidget->setMaximumSize(QSize(400, 16777215));
        verticalLayout = new QVBoxLayout(QgsFieldConditionalWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(3, 0, 3, 0);
        label_4 = new QLabel(QgsFieldConditionalWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_4);

        pages = new QStackedWidget(QgsFieldConditionalWidget);
        pages->setObjectName(QStringLiteral("pages"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        gridLayout = new QGridLayout(page);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        listView = new QListView(page);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listView->setIconSize(QSize(64, 32));

        gridLayout->addWidget(listView, 1, 0, 1, 2);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout_4->setContentsMargins(-1, 0, -1, -1);
        mNewButton = new QPushButton(page);
        mNewButton->setObjectName(QStringLiteral("mNewButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mNewButton->sizePolicy().hasHeightForWidth());
        mNewButton->setSizePolicy(sizePolicy1);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mNewButton->setIcon(icon);

        gridLayout_4->addWidget(mNewButton, 0, 3, 2, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, -1);
        mFieldCombo = new QgsFieldComboBox(page);
        mFieldCombo->setObjectName(QStringLiteral("mFieldCombo"));

        horizontalLayout->addWidget(mFieldCombo);


        gridLayout_4->addLayout(horizontalLayout, 0, 2, 1, 1);

        fieldRadio = new QRadioButton(page);
        fieldRadio->setObjectName(QStringLiteral("fieldRadio"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(fieldRadio->sizePolicy().hasHeightForWidth());
        fieldRadio->setSizePolicy(sizePolicy2);
        fieldRadio->setChecked(true);

        gridLayout_4->addWidget(fieldRadio, 0, 0, 1, 1);

        rowRadio = new QRadioButton(page);
        rowRadio->setObjectName(QStringLiteral("rowRadio"));
        sizePolicy2.setHeightForWidth(rowRadio->sizePolicy().hasHeightForWidth());
        rowRadio->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(rowRadio, 1, 0, 1, 1);

        gridLayout_4->setColumnStretch(3, 2);

        gridLayout->addLayout(gridLayout_4, 0, 0, 1, 2);

        pages->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        gridLayout_3 = new QGridLayout(page_2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        mRuleEdit = new QLineEdit(page_2);
        mRuleEdit->setObjectName(QStringLiteral("mRuleEdit"));

        horizontalLayout_5->addWidget(mRuleEdit);

        btnBuildExpression = new QToolButton(page_2);
        btnBuildExpression->setObjectName(QStringLiteral("btnBuildExpression"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/mIconExpression.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnBuildExpression->setIcon(icon1);

        horizontalLayout_5->addWidget(btnBuildExpression);


        gridLayout_3->addLayout(horizontalLayout_5, 3, 0, 1, 1);

        label = new QLabel(page_2);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy3);

        gridLayout_3->addWidget(label, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        mSaveRule = new QPushButton(page_2);
        mSaveRule->setObjectName(QStringLiteral("mSaveRule"));

        horizontalLayout_2->addWidget(mSaveRule);

        mCancelButton = new QPushButton(page_2);
        mCancelButton->setObjectName(QStringLiteral("mCancelButton"));

        horizontalLayout_2->addWidget(mCancelButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        mDeleteButton = new QToolButton(page_2);
        mDeleteButton->setObjectName(QStringLiteral("mDeleteButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/themes/default/mActionDeleteSelected.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mDeleteButton->setIcon(icon2);
        mDeleteButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_2->addWidget(mDeleteButton);


        gridLayout_3->addLayout(horizontalLayout_2, 8, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 7, 0, 1, 1);

        horizontalFrame_2 = new QFrame(page_2);
        horizontalFrame_2->setObjectName(QStringLiteral("horizontalFrame_2"));
        verticalLayout_2 = new QVBoxLayout(horizontalFrame_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 5, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_5 = new QLabel(horizontalFrame_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(label_5);

        btnBackgroundColor = new QgsColorButton(horizontalFrame_2);
        btnBackgroundColor->setObjectName(QStringLiteral("btnBackgroundColor"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(btnBackgroundColor->sizePolicy().hasHeightForWidth());
        btnBackgroundColor->setSizePolicy(sizePolicy4);
        btnBackgroundColor->setMinimumSize(QSize(10, 0));
        btnBackgroundColor->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_4->addWidget(btnBackgroundColor);

        label_6 = new QLabel(horizontalFrame_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(label_6);

        btnTextColor = new QgsColorButton(horizontalFrame_2);
        btnTextColor->setObjectName(QStringLiteral("btnTextColor"));
        sizePolicy4.setHeightForWidth(btnTextColor->sizePolicy().hasHeightForWidth());
        btnTextColor->setSizePolicy(sizePolicy4);
        btnTextColor->setMinimumSize(QSize(10, 0));
        btnTextColor->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_4->addWidget(btnTextColor);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        checkIcon = new QCheckBox(horizontalFrame_2);
        checkIcon->setObjectName(QStringLiteral("checkIcon"));
        sizePolicy2.setHeightForWidth(checkIcon->sizePolicy().hasHeightForWidth());
        checkIcon->setSizePolicy(sizePolicy2);

        horizontalLayout_6->addWidget(checkIcon);

        btnChangeIcon = new QgsSymbolButton(horizontalFrame_2);
        btnChangeIcon->setObjectName(QStringLiteral("btnChangeIcon"));
        btnChangeIcon->setEnabled(false);
        sizePolicy4.setHeightForWidth(btnChangeIcon->sizePolicy().hasHeightForWidth());
        btnChangeIcon->setSizePolicy(sizePolicy4);
        btnChangeIcon->setMinimumSize(QSize(10, 0));
        btnChangeIcon->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_6->addWidget(btnChangeIcon);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        mFontBoldBtn = new QToolButton(horizontalFrame_2);
        mFontButtons = new QButtonGroup(QgsFieldConditionalWidget);
        mFontButtons->setObjectName(QStringLiteral("mFontButtons"));
        mFontButtons->setExclusive(false);
        mFontButtons->addButton(mFontBoldBtn);
        mFontBoldBtn->setObjectName(QStringLiteral("mFontBoldBtn"));
        mFontBoldBtn->setEnabled(true);
        mFontBoldBtn->setMinimumSize(QSize(24, 24));
        mFontBoldBtn->setMaximumSize(QSize(24, 24));
        QFont font;
        font.setPointSize(13);
        mFontBoldBtn->setFont(font);
        mFontBoldBtn->setCheckable(true);

        horizontalLayout_13->addWidget(mFontBoldBtn);

        mFontItalicBtn = new QToolButton(horizontalFrame_2);
        mFontButtons->addButton(mFontItalicBtn);
        mFontItalicBtn->setObjectName(QStringLiteral("mFontItalicBtn"));
        mFontItalicBtn->setEnabled(true);
        mFontItalicBtn->setMinimumSize(QSize(24, 24));
        mFontItalicBtn->setMaximumSize(QSize(24, 24));
        QFont font1;
        font1.setPointSize(13);
        font1.setItalic(true);
        mFontItalicBtn->setFont(font1);
        mFontItalicBtn->setCheckable(true);

        horizontalLayout_13->addWidget(mFontItalicBtn);

        mFontUnderlineBtn = new QToolButton(horizontalFrame_2);
        mFontButtons->addButton(mFontUnderlineBtn);
        mFontUnderlineBtn->setObjectName(QStringLiteral("mFontUnderlineBtn"));
        mFontUnderlineBtn->setEnabled(true);
        mFontUnderlineBtn->setMinimumSize(QSize(24, 24));
        mFontUnderlineBtn->setMaximumSize(QSize(24, 24));
        QFont font2;
        font2.setPointSize(13);
        font2.setUnderline(true);
        mFontUnderlineBtn->setFont(font2);
        mFontUnderlineBtn->setCheckable(true);

        horizontalLayout_13->addWidget(mFontUnderlineBtn);

        mFontStrikethroughBtn = new QToolButton(horizontalFrame_2);
        mFontButtons->addButton(mFontStrikethroughBtn);
        mFontStrikethroughBtn->setObjectName(QStringLiteral("mFontStrikethroughBtn"));
        mFontStrikethroughBtn->setEnabled(true);
        mFontStrikethroughBtn->setMinimumSize(QSize(24, 24));
        mFontStrikethroughBtn->setMaximumSize(QSize(24, 24));
        QFont font3;
        font3.setPointSize(13);
        font3.setStrikeOut(true);
        mFontStrikethroughBtn->setFont(font3);
        mFontStrikethroughBtn->setCheckable(true);

        horizontalLayout_13->addWidget(mFontStrikethroughBtn);

        mFontFamilyCmbBx = new QFontComboBox(horizontalFrame_2);
        mFontFamilyCmbBx->setObjectName(QStringLiteral("mFontFamilyCmbBx"));
        mFontFamilyCmbBx->setEditable(false);

        horizontalLayout_13->addWidget(mFontFamilyCmbBx);


        verticalLayout_2->addLayout(horizontalLayout_13);


        gridLayout_3->addWidget(horizontalFrame_2, 6, 0, 1, 1);

        label_2 = new QLabel(page_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy3.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy3);

        gridLayout_3->addWidget(label_2, 0, 0, 1, 1);

        mNameEdit = new QLineEdit(page_2);
        mNameEdit->setObjectName(QStringLiteral("mNameEdit"));

        gridLayout_3->addWidget(mNameEdit, 1, 0, 1, 1);

        label_3 = new QLabel(page_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_3->addWidget(label_3, 4, 0, 1, 1);

        mPresetsList = new QComboBox(page_2);
        mPresetsList->setObjectName(QStringLiteral("mPresetsList"));

        gridLayout_3->addWidget(mPresetsList, 5, 0, 1, 1);

        pages->addWidget(page_2);

        verticalLayout->addWidget(pages);

        QWidget::setTabOrder(fieldRadio, mFieldCombo);
        QWidget::setTabOrder(mFieldCombo, rowRadio);
        QWidget::setTabOrder(rowRadio, mNewButton);
        QWidget::setTabOrder(mNewButton, listView);
        QWidget::setTabOrder(listView, mNameEdit);
        QWidget::setTabOrder(mNameEdit, mRuleEdit);
        QWidget::setTabOrder(mRuleEdit, btnBuildExpression);
        QWidget::setTabOrder(btnBuildExpression, mPresetsList);
        QWidget::setTabOrder(mPresetsList, btnBackgroundColor);
        QWidget::setTabOrder(btnBackgroundColor, btnTextColor);
        QWidget::setTabOrder(btnTextColor, checkIcon);
        QWidget::setTabOrder(checkIcon, btnChangeIcon);
        QWidget::setTabOrder(btnChangeIcon, mFontBoldBtn);
        QWidget::setTabOrder(mFontBoldBtn, mFontItalicBtn);
        QWidget::setTabOrder(mFontItalicBtn, mFontUnderlineBtn);
        QWidget::setTabOrder(mFontUnderlineBtn, mFontStrikethroughBtn);
        QWidget::setTabOrder(mFontStrikethroughBtn, mFontFamilyCmbBx);
        QWidget::setTabOrder(mFontFamilyCmbBx, mSaveRule);
        QWidget::setTabOrder(mSaveRule, mCancelButton);
        QWidget::setTabOrder(mCancelButton, mDeleteButton);

        retranslateUi(QgsFieldConditionalWidget);
        QObject::connect(fieldRadio, SIGNAL(toggled(bool)), mFieldCombo, SLOT(setEnabled(bool)));
        QObject::connect(checkIcon, SIGNAL(toggled(bool)), btnChangeIcon, SLOT(setEnabled(bool)));

        pages->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsFieldConditionalWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsFieldConditionalWidget)
    {
        QgsFieldConditionalWidget->setWindowTitle(QApplication::translate("QgsFieldConditionalWidget", "Form", Q_NULLPTR));
        label_4->setText(QApplication::translate("QgsFieldConditionalWidget", "Conditional Format Rules", Q_NULLPTR));
        mNewButton->setText(QApplication::translate("QgsFieldConditionalWidget", "New Rule", Q_NULLPTR));
        fieldRadio->setText(QApplication::translate("QgsFieldConditionalWidget", "Field", Q_NULLPTR));
        rowRadio->setText(QApplication::translate("QgsFieldConditionalWidget", "Full row", Q_NULLPTR));
        mRuleEdit->setText(QApplication::translate("QgsFieldConditionalWidget", "@value", Q_NULLPTR));
        btnBuildExpression->setText(QApplication::translate("QgsFieldConditionalWidget", "\342\200\246", Q_NULLPTR));
        label->setText(QApplication::translate("QgsFieldConditionalWidget", "Condition", Q_NULLPTR));
        mSaveRule->setText(QApplication::translate("QgsFieldConditionalWidget", "Done", Q_NULLPTR));
        mCancelButton->setText(QApplication::translate("QgsFieldConditionalWidget", "Cancel", Q_NULLPTR));
        mDeleteButton->setText(QApplication::translate("QgsFieldConditionalWidget", "Delete", Q_NULLPTR));
        label_5->setText(QApplication::translate("QgsFieldConditionalWidget", "Background", Q_NULLPTR));
        btnBackgroundColor->setText(QString());
        label_6->setText(QApplication::translate("QgsFieldConditionalWidget", "Text", Q_NULLPTR));
        btnTextColor->setText(QString());
        checkIcon->setText(QApplication::translate("QgsFieldConditionalWidget", "Icon", Q_NULLPTR));
        btnChangeIcon->setText(QString());
#ifndef QT_NO_TOOLTIP
        mFontBoldBtn->setToolTip(QApplication::translate("QgsFieldConditionalWidget", "Bold text\n"
"(data defined only, overrides Style)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mFontBoldBtn->setText(QApplication::translate("QgsFieldConditionalWidget", "B", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mFontItalicBtn->setToolTip(QApplication::translate("QgsFieldConditionalWidget", "Italic text\n"
"(data defined only, overrides Style)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mFontItalicBtn->setText(QApplication::translate("QgsFieldConditionalWidget", "I", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mFontUnderlineBtn->setToolTip(QApplication::translate("QgsFieldConditionalWidget", "Underlined text", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mFontUnderlineBtn->setText(QApplication::translate("QgsFieldConditionalWidget", "U", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mFontStrikethroughBtn->setToolTip(QApplication::translate("QgsFieldConditionalWidget", "Strikeout text", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mFontStrikethroughBtn->setText(QApplication::translate("QgsFieldConditionalWidget", "S", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsFieldConditionalWidget", "Name", Q_NULLPTR));
        mNameEdit->setText(QString());
        label_3->setText(QApplication::translate("QgsFieldConditionalWidget", "Preset", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsFieldConditionalWidget: public Ui_QgsFieldConditionalWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSFIELDCONDITIONALFORMATWIDGET_H
