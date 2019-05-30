/********************************************************************************
** Form generated from reading UI file 'qgsextentgroupboxwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSEXTENTGROUPBOXWIDGET_H
#define UI_QGSEXTENTGROUPBOXWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsExtentGroupBoxWidget
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_4;
    QLabel *mYMaxLabel;
    QLineEdit *mYMaxLineEdit;
    QLabel *mYMinLabel;
    QLineEdit *mYMinLineEdit;
    QLineEdit *mXMinLineEdit;
    QLabel *mXMinLabel;
    QLineEdit *mXMaxLineEdit;
    QLabel *mXMaxLabel;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QPushButton *mCurrentExtentButton;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *mButtonCalcFromLayer;
    QPushButton *mButtonDrawOnCanvas;
    QPushButton *mOriginalExtentButton;

    void setupUi(QWidget *QgsExtentGroupBoxWidget)
    {
        if (QgsExtentGroupBoxWidget->objectName().isEmpty())
            QgsExtentGroupBoxWidget->setObjectName(QStringLiteral("QgsExtentGroupBoxWidget"));
        QgsExtentGroupBoxWidget->resize(679, 163);
        verticalLayout = new QVBoxLayout(QgsExtentGroupBoxWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        mYMaxLabel = new QLabel(QgsExtentGroupBoxWidget);
        mYMaxLabel->setObjectName(QStringLiteral("mYMaxLabel"));
        mYMaxLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(mYMaxLabel, 0, 1, 1, 1);

        mYMaxLineEdit = new QLineEdit(QgsExtentGroupBoxWidget);
        mYMaxLineEdit->setObjectName(QStringLiteral("mYMaxLineEdit"));

        gridLayout_4->addWidget(mYMaxLineEdit, 0, 2, 1, 1);

        mYMinLabel = new QLabel(QgsExtentGroupBoxWidget);
        mYMinLabel->setObjectName(QStringLiteral("mYMinLabel"));
        mYMinLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(mYMinLabel, 2, 1, 1, 1);

        mYMinLineEdit = new QLineEdit(QgsExtentGroupBoxWidget);
        mYMinLineEdit->setObjectName(QStringLiteral("mYMinLineEdit"));

        gridLayout_4->addWidget(mYMinLineEdit, 2, 2, 1, 1);

        mXMinLineEdit = new QLineEdit(QgsExtentGroupBoxWidget);
        mXMinLineEdit->setObjectName(QStringLiteral("mXMinLineEdit"));

        gridLayout_4->addWidget(mXMinLineEdit, 1, 1, 1, 1);

        mXMinLabel = new QLabel(QgsExtentGroupBoxWidget);
        mXMinLabel->setObjectName(QStringLiteral("mXMinLabel"));
        mXMinLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(mXMinLabel, 1, 0, 1, 1);

        mXMaxLineEdit = new QLineEdit(QgsExtentGroupBoxWidget);
        mXMaxLineEdit->setObjectName(QStringLiteral("mXMaxLineEdit"));

        gridLayout_4->addWidget(mXMaxLineEdit, 1, 3, 1, 1);

        mXMaxLabel = new QLabel(QgsExtentGroupBoxWidget);
        mXMaxLabel->setObjectName(QStringLiteral("mXMaxLabel"));
        mXMaxLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(mXMaxLabel, 1, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_4);

        widget_2 = new QWidget(QgsExtentGroupBoxWidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mCurrentExtentButton = new QPushButton(widget_2);
        mCurrentExtentButton->setObjectName(QStringLiteral("mCurrentExtentButton"));
        mCurrentExtentButton->setMinimumSize(QSize(150, 0));

        gridLayout->addWidget(mCurrentExtentButton, 0, 6, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 5, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 10, 1, 1);

        mButtonCalcFromLayer = new QPushButton(widget_2);
        mButtonCalcFromLayer->setObjectName(QStringLiteral("mButtonCalcFromLayer"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mButtonCalcFromLayer->sizePolicy().hasHeightForWidth());
        mButtonCalcFromLayer->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mButtonCalcFromLayer, 0, 3, 1, 1);

        mButtonDrawOnCanvas = new QPushButton(widget_2);
        mButtonDrawOnCanvas->setObjectName(QStringLiteral("mButtonDrawOnCanvas"));
        sizePolicy.setHeightForWidth(mButtonDrawOnCanvas->sizePolicy().hasHeightForWidth());
        mButtonDrawOnCanvas->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mButtonDrawOnCanvas, 0, 11, 1, 1);

        mOriginalExtentButton = new QPushButton(widget_2);
        mOriginalExtentButton->setObjectName(QStringLiteral("mOriginalExtentButton"));
        mOriginalExtentButton->setMinimumSize(QSize(150, 0));

        gridLayout->addWidget(mOriginalExtentButton, 0, 0, 1, 1);


        verticalLayout->addWidget(widget_2);

        QWidget::setTabOrder(mYMaxLineEdit, mXMinLineEdit);
        QWidget::setTabOrder(mXMinLineEdit, mXMaxLineEdit);
        QWidget::setTabOrder(mXMaxLineEdit, mYMinLineEdit);
        QWidget::setTabOrder(mYMinLineEdit, mOriginalExtentButton);
        QWidget::setTabOrder(mOriginalExtentButton, mButtonCalcFromLayer);
        QWidget::setTabOrder(mButtonCalcFromLayer, mCurrentExtentButton);
        QWidget::setTabOrder(mCurrentExtentButton, mButtonDrawOnCanvas);

        retranslateUi(QgsExtentGroupBoxWidget);

        QMetaObject::connectSlotsByName(QgsExtentGroupBoxWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsExtentGroupBoxWidget)
    {
        QgsExtentGroupBoxWidget->setWindowTitle(QApplication::translate("QgsExtentGroupBoxWidget", "Form", Q_NULLPTR));
        mYMaxLabel->setText(QApplication::translate("QgsExtentGroupBoxWidget", "North", Q_NULLPTR));
        mYMaxLineEdit->setText(QString());
        mYMinLabel->setText(QApplication::translate("QgsExtentGroupBoxWidget", "South", Q_NULLPTR));
        mXMinLabel->setText(QApplication::translate("QgsExtentGroupBoxWidget", "West", Q_NULLPTR));
        mXMaxLabel->setText(QApplication::translate("QgsExtentGroupBoxWidget", "East", Q_NULLPTR));
        mCurrentExtentButton->setText(QApplication::translate("QgsExtentGroupBoxWidget", "Map Canvas Extent", Q_NULLPTR));
        mButtonCalcFromLayer->setText(QApplication::translate("QgsExtentGroupBoxWidget", "Calculate from Layer", Q_NULLPTR));
        mButtonDrawOnCanvas->setText(QApplication::translate("QgsExtentGroupBoxWidget", "Draw on Canvas", Q_NULLPTR));
        mOriginalExtentButton->setText(QApplication::translate("QgsExtentGroupBoxWidget", "Current Layer Extent", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsExtentGroupBoxWidget: public Ui_QgsExtentGroupBoxWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSEXTENTGROUPBOXWIDGET_H
