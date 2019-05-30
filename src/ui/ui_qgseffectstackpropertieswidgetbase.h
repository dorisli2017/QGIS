/********************************************************************************
** Form generated from reading UI file 'qgseffectstackpropertieswidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSEFFECTSTACKPROPERTIESWIDGETBASE_H
#define UI_QGSEFFECTSTACKPROPERTIESWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsEffectStackPropertiesWidgetBase
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QListView *mEffectsList;
    QLabel *lblPreview;
    QHBoxLayout *pushBtnBox;
    QPushButton *mAddButton;
    QPushButton *mRemoveButton;
    QPushButton *mUpButton;
    QPushButton *mDownButton;
    QSpacerItem *horizontalSpacer;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *page_2;

    void setupUi(QWidget *QgsEffectStackPropertiesWidgetBase)
    {
        if (QgsEffectStackPropertiesWidgetBase->objectName().isEmpty())
            QgsEffectStackPropertiesWidgetBase->setObjectName(QStringLiteral("QgsEffectStackPropertiesWidgetBase"));
        QgsEffectStackPropertiesWidgetBase->resize(347, 402);
        verticalLayout_3 = new QVBoxLayout(QgsEffectStackPropertiesWidgetBase);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mEffectsList = new QListView(QgsEffectStackPropertiesWidgetBase);
        mEffectsList->setObjectName(QStringLiteral("mEffectsList"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mEffectsList->sizePolicy().hasHeightForWidth());
        mEffectsList->setSizePolicy(sizePolicy);
        mEffectsList->setMaximumSize(QSize(16777215, 150));
        mEffectsList->setEditTriggers(QAbstractItemView::NoEditTriggers);

        horizontalLayout->addWidget(mEffectsList);

        lblPreview = new QLabel(QgsEffectStackPropertiesWidgetBase);
        lblPreview->setObjectName(QStringLiteral("lblPreview"));
        sizePolicy.setHeightForWidth(lblPreview->sizePolicy().hasHeightForWidth());
        lblPreview->setSizePolicy(sizePolicy);
        lblPreview->setMinimumSize(QSize(150, 150));
        lblPreview->setMaximumSize(QSize(16777215, 150));
        lblPreview->setFrameShape(QFrame::NoFrame);
        lblPreview->setFrameShadow(QFrame::Sunken);
        lblPreview->setLineWidth(1);
        lblPreview->setMidLineWidth(0);
        lblPreview->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(lblPreview);


        verticalLayout_3->addLayout(horizontalLayout);

        pushBtnBox = new QHBoxLayout();
        pushBtnBox->setSpacing(6);
        pushBtnBox->setObjectName(QStringLiteral("pushBtnBox"));
        mAddButton = new QPushButton(QgsEffectStackPropertiesWidgetBase);
        mAddButton->setObjectName(QStringLiteral("mAddButton"));
        mAddButton->setMaximumSize(QSize(50, 16777215));

        pushBtnBox->addWidget(mAddButton);

        mRemoveButton = new QPushButton(QgsEffectStackPropertiesWidgetBase);
        mRemoveButton->setObjectName(QStringLiteral("mRemoveButton"));
        mRemoveButton->setMaximumSize(QSize(50, 16777215));

        pushBtnBox->addWidget(mRemoveButton);

        mUpButton = new QPushButton(QgsEffectStackPropertiesWidgetBase);
        mUpButton->setObjectName(QStringLiteral("mUpButton"));
        mUpButton->setMaximumSize(QSize(50, 16777215));

        pushBtnBox->addWidget(mUpButton);

        mDownButton = new QPushButton(QgsEffectStackPropertiesWidgetBase);
        mDownButton->setObjectName(QStringLiteral("mDownButton"));
        mDownButton->setMaximumSize(QSize(50, 16777215));

        pushBtnBox->addWidget(mDownButton);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        pushBtnBox->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(pushBtnBox);

        frame = new QFrame(QgsEffectStackPropertiesWidgetBase);
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
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        stackedWidget = new QStackedWidget(frame);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(2);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy2);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        stackedWidget->addWidget(page_2);

        verticalLayout_2->addWidget(stackedWidget);


        verticalLayout_3->addWidget(frame);


        retranslateUi(QgsEffectStackPropertiesWidgetBase);

        QMetaObject::connectSlotsByName(QgsEffectStackPropertiesWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsEffectStackPropertiesWidgetBase)
    {
        QgsEffectStackPropertiesWidgetBase->setWindowTitle(QApplication::translate("QgsEffectStackPropertiesWidgetBase", "Effects", Q_NULLPTR));
        lblPreview->setText(QString());
#ifndef QT_NO_TOOLTIP
        mAddButton->setToolTip(QApplication::translate("QgsEffectStackPropertiesWidgetBase", "Add new effect", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        mRemoveButton->setToolTip(QApplication::translate("QgsEffectStackPropertiesWidgetBase", "Remove effect", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        mUpButton->setToolTip(QApplication::translate("QgsEffectStackPropertiesWidgetBase", "Move up", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        mDownButton->setToolTip(QApplication::translate("QgsEffectStackPropertiesWidgetBase", "Move down", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class QgsEffectStackPropertiesWidgetBase: public Ui_QgsEffectStackPropertiesWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSEFFECTSTACKPROPERTIESWIDGETBASE_H
