/********************************************************************************
** Form generated from reading UI file 'qgsdualviewbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSDUALVIEWBASE_H
#define UI_QGSDUALVIEWBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "attributetable/qgsattributetableview.h"
#include "attributetable/qgsfeaturelistview.h"
#include "attributetable/qgsfieldconditionalformatwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsDualViewBase
{
public:
    QWidget *mPageTableView;
    QGridLayout *gridLayout_3;
    QSplitter *splitter;
    QgsAttributeTableView *mTableView;
    QgsFieldConditionalFormatWidget *mConditionalFormatWidget;
    QWidget *mPageAttributeEditor;
    QAction *mActionExpressionPreview;
    QAction *mActionPreviewColumnsMenu;
    QGridLayout *gridLayout_2;
    QSplitter *mAttributeEditorViewSplitter;
    QWidget *listViewWdg;
    QVBoxLayout *verticalLayout_2;
    QToolButton *mFeatureListPreviewButton;
    QgsFeatureListView *mFeatureList;
    QFrame *mAttributeEditor;
    QGridLayout *gridLayout;

    void setupUi(QStackedWidget *QgsDualViewBase)
    {
        if (QgsDualViewBase->objectName().isEmpty())
            QgsDualViewBase->setObjectName(QStringLiteral("QgsDualViewBase"));
        QgsDualViewBase->resize(495, 507);
        mPageTableView = new QWidget();
        mPageTableView->setObjectName(QStringLiteral("mPageTableView"));
        gridLayout_3 = new QGridLayout(mPageTableView);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        splitter = new QSplitter(mPageTableView);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        splitter->setChildrenCollapsible(false);
        mTableView = new QgsAttributeTableView(splitter);
        mTableView->setObjectName(QStringLiteral("mTableView"));
        mTableView->setAlternatingRowColors(true);
        splitter->addWidget(mTableView);
        mConditionalFormatWidget = new QgsFieldConditionalFormatWidget(splitter);
        mConditionalFormatWidget->setObjectName(QStringLiteral("mConditionalFormatWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mConditionalFormatWidget->sizePolicy().hasHeightForWidth());
        mConditionalFormatWidget->setSizePolicy(sizePolicy);
        splitter->addWidget(mConditionalFormatWidget);

        gridLayout_3->addWidget(splitter, 0, 0, 1, 1);

        QgsDualViewBase->addWidget(mPageTableView);
        mPageAttributeEditor = new QWidget();
        mPageAttributeEditor->setObjectName(QStringLiteral("mPageAttributeEditor"));
        mActionExpressionPreview = new QAction(mPageAttributeEditor);
        mActionExpressionPreview->setObjectName(QStringLiteral("mActionExpressionPreview"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/mActionFilter.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionExpressionPreview->setIcon(icon);
        mActionPreviewColumnsMenu = new QAction(mPageAttributeEditor);
        mActionPreviewColumnsMenu->setObjectName(QStringLiteral("mActionPreviewColumnsMenu"));
        gridLayout_2 = new QGridLayout(mPageAttributeEditor);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        mAttributeEditorViewSplitter = new QSplitter(mPageAttributeEditor);
        mAttributeEditorViewSplitter->setObjectName(QStringLiteral("mAttributeEditorViewSplitter"));
        mAttributeEditorViewSplitter->setOrientation(Qt::Horizontal);
        listViewWdg = new QWidget(mAttributeEditorViewSplitter);
        listViewWdg->setObjectName(QStringLiteral("listViewWdg"));
        verticalLayout_2 = new QVBoxLayout(listViewWdg);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        mFeatureListPreviewButton = new QToolButton(listViewWdg);
        mFeatureListPreviewButton->setObjectName(QStringLiteral("mFeatureListPreviewButton"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mFeatureListPreviewButton->sizePolicy().hasHeightForWidth());
        mFeatureListPreviewButton->setSizePolicy(sizePolicy1);
        mFeatureListPreviewButton->setPopupMode(QToolButton::InstantPopup);
        mFeatureListPreviewButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        mFeatureListPreviewButton->setAutoRaise(true);
        mFeatureListPreviewButton->setArrowType(Qt::NoArrow);

        verticalLayout_2->addWidget(mFeatureListPreviewButton);

        mFeatureList = new QgsFeatureListView(listViewWdg);
        mFeatureList->setObjectName(QStringLiteral("mFeatureList"));
        sizePolicy.setHeightForWidth(mFeatureList->sizePolicy().hasHeightForWidth());
        mFeatureList->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(mFeatureList);

        mAttributeEditorViewSplitter->addWidget(listViewWdg);
        mAttributeEditor = new QFrame(mAttributeEditorViewSplitter);
        mAttributeEditor->setObjectName(QStringLiteral("mAttributeEditor"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mAttributeEditor->sizePolicy().hasHeightForWidth());
        mAttributeEditor->setSizePolicy(sizePolicy2);
        mAttributeEditor->setFrameShape(QFrame::StyledPanel);
        mAttributeEditor->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(mAttributeEditor);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mAttributeEditorViewSplitter->addWidget(mAttributeEditor);

        gridLayout_2->addWidget(mAttributeEditorViewSplitter, 0, 0, 1, 1);

        QgsDualViewBase->addWidget(mPageAttributeEditor);

        retranslateUi(QgsDualViewBase);

        QgsDualViewBase->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(QgsDualViewBase);
    } // setupUi

    void retranslateUi(QStackedWidget *QgsDualViewBase)
    {
        mActionExpressionPreview->setText(QApplication::translate("QgsDualViewBase", "Expression", Q_NULLPTR));
        mActionPreviewColumnsMenu->setText(QApplication::translate("QgsDualViewBase", "Column Preview", Q_NULLPTR));
        mFeatureListPreviewButton->setText(QApplication::translate("QgsDualViewBase", "\342\200\246", Q_NULLPTR));
        Q_UNUSED(QgsDualViewBase);
    } // retranslateUi

};

namespace Ui {
    class QgsDualViewBase: public Ui_QgsDualViewBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSDUALVIEWBASE_H
