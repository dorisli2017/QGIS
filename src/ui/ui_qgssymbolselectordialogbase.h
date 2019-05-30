/********************************************************************************
** Form generated from reading UI file 'qgssymbolselectordialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSSYMBOLSELECTORDIALOGBASE_H
#define UI_QGSSYMBOLSELECTORDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsSymbolSelectorDialogBase
{
public:
    QGridLayout *gridLayout_2;
    QHBoxLayout *pushBtnBox;
    QPushButton *btnAddLayer;
    QPushButton *btnRemoveLayer;
    QPushButton *btnLock;
    QPushButton *btnDuplicate;
    QPushButton *btnUp;
    QPushButton *btnDown;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QTreeView *layersTree;
    QLabel *lblPreview;
    QFrame *line;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *page_2;

    void setupUi(QWidget *QgsSymbolSelectorDialogBase)
    {
        if (QgsSymbolSelectorDialogBase->objectName().isEmpty())
            QgsSymbolSelectorDialogBase->setObjectName(QStringLiteral("QgsSymbolSelectorDialogBase"));
        QgsSymbolSelectorDialogBase->resize(356, 616);
        gridLayout_2 = new QGridLayout(QgsSymbolSelectorDialogBase);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        pushBtnBox = new QHBoxLayout();
        pushBtnBox->setSpacing(6);
        pushBtnBox->setObjectName(QStringLiteral("pushBtnBox"));
        btnAddLayer = new QPushButton(QgsSymbolSelectorDialogBase);
        btnAddLayer->setObjectName(QStringLiteral("btnAddLayer"));
        btnAddLayer->setMaximumSize(QSize(50, 16777215));

        pushBtnBox->addWidget(btnAddLayer);

        btnRemoveLayer = new QPushButton(QgsSymbolSelectorDialogBase);
        btnRemoveLayer->setObjectName(QStringLiteral("btnRemoveLayer"));
        btnRemoveLayer->setMaximumSize(QSize(50, 16777215));

        pushBtnBox->addWidget(btnRemoveLayer);

        btnLock = new QPushButton(QgsSymbolSelectorDialogBase);
        btnLock->setObjectName(QStringLiteral("btnLock"));
        btnLock->setMaximumSize(QSize(50, 16777215));
        btnLock->setCheckable(true);

        pushBtnBox->addWidget(btnLock);

        btnDuplicate = new QPushButton(QgsSymbolSelectorDialogBase);
        btnDuplicate->setObjectName(QStringLiteral("btnDuplicate"));
        btnDuplicate->setMaximumSize(QSize(50, 16777215));

        pushBtnBox->addWidget(btnDuplicate);

        btnUp = new QPushButton(QgsSymbolSelectorDialogBase);
        btnUp->setObjectName(QStringLiteral("btnUp"));
        btnUp->setMaximumSize(QSize(50, 16777215));

        pushBtnBox->addWidget(btnUp);

        btnDown = new QPushButton(QgsSymbolSelectorDialogBase);
        btnDown->setObjectName(QStringLiteral("btnDown"));
        btnDown->setMaximumSize(QSize(50, 16777215));

        pushBtnBox->addWidget(btnDown);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        pushBtnBox->addItem(horizontalSpacer);


        gridLayout_2->addLayout(pushBtnBox, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        layersTree = new QTreeView(QgsSymbolSelectorDialogBase);
        layersTree->setObjectName(QStringLiteral("layersTree"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(layersTree->sizePolicy().hasHeightForWidth());
        layersTree->setSizePolicy(sizePolicy);
        layersTree->setMaximumSize(QSize(16777215, 100));
        layersTree->setEditTriggers(QAbstractItemView::NoEditTriggers);

        horizontalLayout->addWidget(layersTree);

        lblPreview = new QLabel(QgsSymbolSelectorDialogBase);
        lblPreview->setObjectName(QStringLiteral("lblPreview"));
        sizePolicy.setHeightForWidth(lblPreview->sizePolicy().hasHeightForWidth());
        lblPreview->setSizePolicy(sizePolicy);
        lblPreview->setMinimumSize(QSize(100, 100));
        lblPreview->setFrameShape(QFrame::NoFrame);
        lblPreview->setFrameShadow(QFrame::Sunken);
        lblPreview->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(lblPreview);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        line = new QFrame(QgsSymbolSelectorDialogBase);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 2, 0, 1, 1);

        frame = new QFrame(QgsSymbolSelectorDialogBase);
        frame->setObjectName(QStringLiteral("frame"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(4);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Sunken);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);

        gridLayout_2->addWidget(frame, 4, 0, 1, 1);

        scrollArea = new QScrollArea(QgsSymbolSelectorDialogBase);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 332, 413));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, -1, -1);
        stackedWidget = new QStackedWidget(scrollAreaWidgetContents);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(2);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy2);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        stackedWidget->addWidget(page_2);

        verticalLayout->addWidget(stackedWidget);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_2->addWidget(scrollArea, 3, 0, 1, 1);


        retranslateUi(QgsSymbolSelectorDialogBase);

        QMetaObject::connectSlotsByName(QgsSymbolSelectorDialogBase);
    } // setupUi

    void retranslateUi(QWidget *QgsSymbolSelectorDialogBase)
    {
        QgsSymbolSelectorDialogBase->setWindowTitle(QApplication::translate("QgsSymbolSelectorDialogBase", "Form", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnAddLayer->setToolTip(QApplication::translate("QgsSymbolSelectorDialogBase", "Add symbol layer", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        btnRemoveLayer->setToolTip(QApplication::translate("QgsSymbolSelectorDialogBase", "Remove symbol layer", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        btnLock->setToolTip(QApplication::translate("QgsSymbolSelectorDialogBase", "Lock layer's color", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        btnDuplicate->setToolTip(QApplication::translate("QgsSymbolSelectorDialogBase", "Duplicates the current layer", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnDuplicate->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnUp->setToolTip(QApplication::translate("QgsSymbolSelectorDialogBase", "Move up", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        btnDown->setToolTip(QApplication::translate("QgsSymbolSelectorDialogBase", "Move down", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        lblPreview->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QgsSymbolSelectorDialogBase: public Ui_QgsSymbolSelectorDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSSYMBOLSELECTORDIALOGBASE_H
