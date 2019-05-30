/********************************************************************************
** Form generated from reading UI file 'qgsmeshlayerpropertiesbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMESHLAYERPROPERTIESBASE_H
#define UI_QGSMESHLAYERPROPERTIESBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsfilterlineedit.h"
#include "qgsprojectionselectionwidget.h"
#include "qgsscrollarea.h"

QT_BEGIN_NAMESPACE

class Ui_QgsMeshLayerPropertiesBase
{
public:
    QVBoxLayout *verticalLayout;
    QSplitter *mOptionsSplitter;
    QFrame *mOptionsListFrame;
    QVBoxLayout *verticalLayout_2;
    QgsFilterLineEdit *mSearchLineEdit;
    QListWidget *mOptionsListWidget;
    QFrame *mOptionsFrame;
    QVBoxLayout *verticalLayout_3;
    QStackedWidget *mOptionsStackedWidget;
    QWidget *mOptsPage_Information;
    QVBoxLayout *verticalLayout_20;
    QTextBrowser *mInformationTextBrowser;
    QWidget *mOptsPage_Source;
    QVBoxLayout *verticalLayout_6;
    QgsScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_3;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_8;
    QLineEdit *mLayerOrigNameLineEd;
    QLabel *label_9;
    QLineEdit *leDisplayName;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_7;
    QgsProjectionSelectionWidget *mCrsSelector;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *mUriLabel;
    QPushButton *mAddDatasetButton;
    QSpacerItem *verticalSpacer_3;
    QWidget *mOptsPage_Style;
    QVBoxLayout *verticalLayout_14;
    QgsScrollArea *scrollArea;
    QWidget *mOptsPage_StyleContent;
    QVBoxLayout *verticalLayout_10;
    QWidget *mOptsPage_3DView;
    QFrame *mButtonBoxFrame;
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsMeshLayerPropertiesBase)
    {
        if (QgsMeshLayerPropertiesBase->objectName().isEmpty())
            QgsMeshLayerPropertiesBase->setObjectName(QStringLiteral("QgsMeshLayerPropertiesBase"));
        QgsMeshLayerPropertiesBase->resize(815, 777);
        QgsMeshLayerPropertiesBase->setMinimumSize(QSize(700, 0));
        verticalLayout = new QVBoxLayout(QgsMeshLayerPropertiesBase);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        mOptionsSplitter = new QSplitter(QgsMeshLayerPropertiesBase);
        mOptionsSplitter->setObjectName(QStringLiteral("mOptionsSplitter"));
        mOptionsSplitter->setOrientation(Qt::Horizontal);
        mOptionsSplitter->setChildrenCollapsible(false);
        mOptionsListFrame = new QFrame(mOptionsSplitter);
        mOptionsListFrame->setObjectName(QStringLiteral("mOptionsListFrame"));
        mOptionsListFrame->setMinimumSize(QSize(0, 0));
        mOptionsListFrame->setFrameShape(QFrame::NoFrame);
        mOptionsListFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(mOptionsListFrame);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        mSearchLineEdit = new QgsFilterLineEdit(mOptionsListFrame);
        mSearchLineEdit->setObjectName(QStringLiteral("mSearchLineEdit"));

        verticalLayout_2->addWidget(mSearchLineEdit);

        mOptionsListWidget = new QListWidget(mOptionsListFrame);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/propertyicons/metadata.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem->setIcon(icon);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/propertyicons/system.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem1->setIcon(icon1);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/themes/default/propertyicons/symbology.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem2->setIcon(icon2);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/themes/default/3d.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem3->setIcon(icon3);
        mOptionsListWidget->setObjectName(QStringLiteral("mOptionsListWidget"));
        mOptionsListWidget->setMinimumSize(QSize(58, 0));
        mOptionsListWidget->setMaximumSize(QSize(150, 16777215));
        mOptionsListWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        mOptionsListWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        mOptionsListWidget->setIconSize(QSize(32, 32));
        mOptionsListWidget->setTextElideMode(Qt::ElideNone);
        mOptionsListWidget->setResizeMode(QListView::Adjust);
        mOptionsListWidget->setWordWrap(true);

        verticalLayout_2->addWidget(mOptionsListWidget);

        mOptionsSplitter->addWidget(mOptionsListFrame);
        mOptionsFrame = new QFrame(mOptionsSplitter);
        mOptionsFrame->setObjectName(QStringLiteral("mOptionsFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mOptionsFrame->sizePolicy().hasHeightForWidth());
        mOptionsFrame->setSizePolicy(sizePolicy);
        mOptionsFrame->setFrameShape(QFrame::NoFrame);
        mOptionsFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(mOptionsFrame);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        mOptionsStackedWidget = new QStackedWidget(mOptionsFrame);
        mOptionsStackedWidget->setObjectName(QStringLiteral("mOptionsStackedWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mOptionsStackedWidget->sizePolicy().hasHeightForWidth());
        mOptionsStackedWidget->setSizePolicy(sizePolicy1);
        mOptsPage_Information = new QWidget();
        mOptsPage_Information->setObjectName(QStringLiteral("mOptsPage_Information"));
        verticalLayout_20 = new QVBoxLayout(mOptsPage_Information);
        verticalLayout_20->setObjectName(QStringLiteral("verticalLayout_20"));
        mInformationTextBrowser = new QTextBrowser(mOptsPage_Information);
        mInformationTextBrowser->setObjectName(QStringLiteral("mInformationTextBrowser"));

        verticalLayout_20->addWidget(mInformationTextBrowser);

        mOptionsStackedWidget->addWidget(mOptsPage_Information);
        mOptsPage_Source = new QWidget();
        mOptsPage_Source->setObjectName(QStringLiteral("mOptsPage_Source"));
        verticalLayout_6 = new QVBoxLayout(mOptsPage_Source);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        scrollArea_3 = new QgsScrollArea(mOptsPage_Source);
        scrollArea_3->setObjectName(QStringLiteral("scrollArea_3"));
        scrollArea_3->setFrameShape(QFrame::NoFrame);
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QStringLiteral("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 270, 175));
        verticalLayout_4 = new QVBoxLayout(scrollAreaWidgetContents_3);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label_8 = new QLabel(scrollAreaWidgetContents_3);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_14->addWidget(label_8);

        mLayerOrigNameLineEd = new QLineEdit(scrollAreaWidgetContents_3);
        mLayerOrigNameLineEd->setObjectName(QStringLiteral("mLayerOrigNameLineEd"));

        horizontalLayout_14->addWidget(mLayerOrigNameLineEd);

        label_9 = new QLabel(scrollAreaWidgetContents_3);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_14->addWidget(label_9);

        leDisplayName = new QLineEdit(scrollAreaWidgetContents_3);
        leDisplayName->setObjectName(QStringLiteral("leDisplayName"));
        leDisplayName->setStyleSheet(QLatin1String("color: #505050;\n"
"background-color: #F0F0F0;\n"
"border: 1px solid #B0B0B0;\n"
"border-radius: 2px;"));
        leDisplayName->setReadOnly(true);

        horizontalLayout_14->addWidget(leDisplayName);


        verticalLayout_4->addLayout(horizontalLayout_14);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(-1, 5, -1, -1);
        label_7 = new QLabel(scrollAreaWidgetContents_3);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_9->addWidget(label_7);


        verticalLayout_4->addLayout(horizontalLayout_9);

        mCrsSelector = new QgsProjectionSelectionWidget(scrollAreaWidgetContents_3);
        mCrsSelector->setObjectName(QStringLiteral("mCrsSelector"));
        mCrsSelector->setFocusPolicy(Qt::StrongFocus);

        verticalLayout_4->addWidget(mCrsSelector);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(scrollAreaWidgetContents_3);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        mUriLabel = new QLabel(scrollAreaWidgetContents_3);
        mUriLabel->setObjectName(QStringLiteral("mUriLabel"));

        horizontalLayout->addWidget(mUriLabel);


        verticalLayout_4->addLayout(horizontalLayout);

        mAddDatasetButton = new QPushButton(scrollAreaWidgetContents_3);
        mAddDatasetButton->setObjectName(QStringLiteral("mAddDatasetButton"));

        verticalLayout_4->addWidget(mAddDatasetButton);

        verticalSpacer_3 = new QSpacerItem(20, 415, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);

        scrollArea_3->setWidget(scrollAreaWidgetContents_3);

        verticalLayout_6->addWidget(scrollArea_3);

        mOptionsStackedWidget->addWidget(mOptsPage_Source);
        mOptsPage_Style = new QWidget();
        mOptsPage_Style->setObjectName(QStringLiteral("mOptsPage_Style"));
        verticalLayout_14 = new QVBoxLayout(mOptsPage_Style);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QgsScrollArea(mOptsPage_Style);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        mOptsPage_StyleContent = new QWidget();
        mOptsPage_StyleContent->setObjectName(QStringLiteral("mOptsPage_StyleContent"));
        mOptsPage_StyleContent->setGeometry(QRect(0, 0, 634, 711));
        verticalLayout_10 = new QVBoxLayout(mOptsPage_StyleContent);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        scrollArea->setWidget(mOptsPage_StyleContent);

        verticalLayout_14->addWidget(scrollArea);

        mOptionsStackedWidget->addWidget(mOptsPage_Style);
        mOptsPage_3DView = new QWidget();
        mOptsPage_3DView->setObjectName(QStringLiteral("mOptsPage_3DView"));
        mOptionsStackedWidget->addWidget(mOptsPage_3DView);

        verticalLayout_3->addWidget(mOptionsStackedWidget);

        mOptionsSplitter->addWidget(mOptionsFrame);

        verticalLayout->addWidget(mOptionsSplitter);

        mButtonBoxFrame = new QFrame(QgsMeshLayerPropertiesBase);
        mButtonBoxFrame->setObjectName(QStringLiteral("mButtonBoxFrame"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mButtonBoxFrame->sizePolicy().hasHeightForWidth());
        mButtonBoxFrame->setSizePolicy(sizePolicy2);
        mButtonBoxFrame->setFrameShape(QFrame::NoFrame);
        mButtonBoxFrame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(mButtonBoxFrame);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        buttonBox = new QDialogButtonBox(mButtonBoxFrame);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 0, 0, 1, 2);


        verticalLayout->addWidget(mButtonBoxFrame);

        QWidget::setTabOrder(mSearchLineEdit, mOptionsListWidget);
        QWidget::setTabOrder(mOptionsListWidget, mInformationTextBrowser);
        QWidget::setTabOrder(mInformationTextBrowser, scrollArea_3);
        QWidget::setTabOrder(scrollArea_3, mLayerOrigNameLineEd);
        QWidget::setTabOrder(mLayerOrigNameLineEd, leDisplayName);
        QWidget::setTabOrder(leDisplayName, mCrsSelector);
        QWidget::setTabOrder(mCrsSelector, scrollArea);

        retranslateUi(QgsMeshLayerPropertiesBase);
        QObject::connect(mOptionsListWidget, SIGNAL(currentRowChanged(int)), mOptionsStackedWidget, SLOT(setCurrentIndex(int)));

        mOptionsStackedWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(QgsMeshLayerPropertiesBase);
    } // setupUi

    void retranslateUi(QDialog *QgsMeshLayerPropertiesBase)
    {
        QgsMeshLayerPropertiesBase->setWindowTitle(QApplication::translate("QgsMeshLayerPropertiesBase", "Raster Layer Properties", Q_NULLPTR));

        const bool __sortingEnabled = mOptionsListWidget->isSortingEnabled();
        mOptionsListWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = mOptionsListWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("QgsMeshLayerPropertiesBase", "Information", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem1 = mOptionsListWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("QgsMeshLayerPropertiesBase", "Source", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem2 = mOptionsListWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("QgsMeshLayerPropertiesBase", "Symbology", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem2->setToolTip(QApplication::translate("QgsMeshLayerPropertiesBase", "Symbology", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem3 = mOptionsListWidget->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("QgsMeshLayerPropertiesBase", "3D View", Q_NULLPTR));
        mOptionsListWidget->setSortingEnabled(__sortingEnabled);

        label_8->setText(QApplication::translate("QgsMeshLayerPropertiesBase", "Layer name", Q_NULLPTR));
        label_9->setText(QApplication::translate("QgsMeshLayerPropertiesBase", "displayed as", Q_NULLPTR));
        label_7->setText(QApplication::translate("QgsMeshLayerPropertiesBase", "Set source coordinate reference system", Q_NULLPTR));
        label->setText(QApplication::translate("QgsMeshLayerPropertiesBase", "Uri", Q_NULLPTR));
        mUriLabel->setText(QString());
        mAddDatasetButton->setText(QApplication::translate("QgsMeshLayerPropertiesBase", "Assign Extra Dataset to Mesh", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsMeshLayerPropertiesBase: public Ui_QgsMeshLayerPropertiesBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMESHLAYERPROPERTIESBASE_H
