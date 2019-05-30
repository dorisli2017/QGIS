/********************************************************************************
** Form generated from reading UI file 'qgslayoutpicturewidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLAYOUTPICTUREWIDGETBASE_H
#define UI_QGSLAYOUTPICTUREWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgscolorbutton.h"
#include "qgsdoublespinbox.h"
#include "qgslayoutitemcombobox.h"
#include "qgspropertyoverridebutton.h"
#include "qgsscrollarea.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLayoutPictureWidgetBase
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *mainLayout;
    QgsCollapsibleGroupBoxBasic *mPreviewGroupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *mPictureLineEdit;
    QPushButton *mPictureBrowseButton;
    QgsPropertyOverrideButton *mSourceDDBtn;
    QLabel *label_4;
    QComboBox *mResizeModeComboBox;
    QLabel *label_5;
    QComboBox *mAnchorPointComboBox;
    QgsCollapsibleGroupBoxBasic *mSearchDirectoriesGroupBox;
    QVBoxLayout *verticalLayout;
    QLabel *mPreviewsLoadingLabel;
    QListWidget *mPreviewListWidget;
    QLabel *label_3;
    QComboBox *mSearchDirectoriesComboBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *mRemoveDirectoryButton;
    QPushButton *mAddDirectoryButton;
    QgsCollapsibleGroupBoxBasic *groupBox;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer;
    QgsDoubleSpinBox *mStrokeWidthSpinBox;
    QgsPropertyOverrideButton *mFillColorDDBtn;
    QLabel *mStrokeColorLabel;
    QgsColorButton *mFillColorButton;
    QLabel *mStrokeWidthLabel;
    QgsColorButton *mStrokeColorButton;
    QLabel *label_6;
    QgsPropertyOverrideButton *mStrokeColorDDBtn;
    QgsPropertyOverrideButton *mStrokeWidthDDBtn;
    QgsCollapsibleGroupBoxBasic *mRotationGroupBox;
    QGridLayout *gridLayout_2;
    QComboBox *mNorthTypeComboBox;
    QLabel *label_7;
    QCheckBox *mRotationFromComposerMapCheckBox;
    QgsLayoutItemComboBox *mComposerMapComboBox;
    QgsDoubleSpinBox *mPictureRotationSpinBox;
    QLabel *label_8;
    QgsDoubleSpinBox *mPictureRotationOffsetSpinBox;

    void setupUi(QWidget *QgsLayoutPictureWidgetBase)
    {
        if (QgsLayoutPictureWidgetBase->objectName().isEmpty())
            QgsLayoutPictureWidgetBase->setObjectName(QStringLiteral("QgsLayoutPictureWidgetBase"));
        QgsLayoutPictureWidgetBase->resize(334, 572);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsLayoutPictureWidgetBase->sizePolicy().hasHeightForWidth());
        QgsLayoutPictureWidgetBase->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(QgsLayoutPictureWidgetBase);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(QgsLayoutPictureWidgetBase);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setStyleSheet(QStringLiteral("padding: 2px; font-weight: bold; background-color: rgb(200, 200, 200);"));

        verticalLayout_2->addWidget(label_2);

        scrollArea = new QgsScrollArea(QgsLayoutPictureWidgetBase);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 318, 949));
        mainLayout = new QVBoxLayout(scrollAreaWidgetContents);
        mainLayout->setSpacing(6);
        mainLayout->setContentsMargins(11, 11, 11, 11);
        mainLayout->setObjectName(QStringLiteral("mainLayout"));
        mPreviewGroupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mPreviewGroupBox->setObjectName(QStringLiteral("mPreviewGroupBox"));
        mPreviewGroupBox->setFocusPolicy(Qt::StrongFocus);
        mPreviewGroupBox->setProperty("syncGroup", QVariant(QStringLiteral("composeritem")));
        mPreviewGroupBox->setProperty("collapsed", QVariant(false));
        gridLayout = new QGridLayout(mPreviewGroupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(mPreviewGroupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        mPictureLineEdit = new QLineEdit(mPreviewGroupBox);
        mPictureLineEdit->setObjectName(QStringLiteral("mPictureLineEdit"));

        horizontalLayout_2->addWidget(mPictureLineEdit);

        mPictureBrowseButton = new QPushButton(mPreviewGroupBox);
        mPictureBrowseButton->setObjectName(QStringLiteral("mPictureBrowseButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mPictureBrowseButton->sizePolicy().hasHeightForWidth());
        mPictureBrowseButton->setSizePolicy(sizePolicy2);
        mPictureBrowseButton->setMaximumSize(QSize(30, 32767));

        horizontalLayout_2->addWidget(mPictureBrowseButton);

        mSourceDDBtn = new QgsPropertyOverrideButton(mPreviewGroupBox);
        mSourceDDBtn->setObjectName(QStringLiteral("mSourceDDBtn"));

        horizontalLayout_2->addWidget(mSourceDDBtn);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        label_4 = new QLabel(mPreviewGroupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        mResizeModeComboBox = new QComboBox(mPreviewGroupBox);
        mResizeModeComboBox->setObjectName(QStringLiteral("mResizeModeComboBox"));

        gridLayout->addWidget(mResizeModeComboBox, 3, 0, 1, 1);

        label_5 = new QLabel(mPreviewGroupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        mAnchorPointComboBox = new QComboBox(mPreviewGroupBox);
        mAnchorPointComboBox->setObjectName(QStringLiteral("mAnchorPointComboBox"));

        gridLayout->addWidget(mAnchorPointComboBox, 5, 0, 1, 1);


        mainLayout->addWidget(mPreviewGroupBox);

        mSearchDirectoriesGroupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mSearchDirectoriesGroupBox->setObjectName(QStringLiteral("mSearchDirectoriesGroupBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mSearchDirectoriesGroupBox->sizePolicy().hasHeightForWidth());
        mSearchDirectoriesGroupBox->setSizePolicy(sizePolicy3);
        mSearchDirectoriesGroupBox->setFocusPolicy(Qt::StrongFocus);
        mSearchDirectoriesGroupBox->setProperty("syncGroup", QVariant(QStringLiteral("composeritem")));
        mSearchDirectoriesGroupBox->setProperty("collapsed", QVariant(true));
        verticalLayout = new QVBoxLayout(mSearchDirectoriesGroupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        mPreviewsLoadingLabel = new QLabel(mSearchDirectoriesGroupBox);
        mPreviewsLoadingLabel->setObjectName(QStringLiteral("mPreviewsLoadingLabel"));
        QFont font;
        font.setItalic(true);
        mPreviewsLoadingLabel->setFont(font);
        mPreviewsLoadingLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(mPreviewsLoadingLabel);

        mPreviewListWidget = new QListWidget(mSearchDirectoriesGroupBox);
        mPreviewListWidget->setObjectName(QStringLiteral("mPreviewListWidget"));
        mPreviewListWidget->setMinimumSize(QSize(0, 200));
        mPreviewListWidget->setProperty("showDropIndicator", QVariant(false));
        mPreviewListWidget->setDragDropMode(QAbstractItemView::DragDrop);
        mPreviewListWidget->setMovement(QListView::Free);
        mPreviewListWidget->setFlow(QListView::LeftToRight);
        mPreviewListWidget->setProperty("isWrapping", QVariant(true));
        mPreviewListWidget->setResizeMode(QListView::Adjust);
        mPreviewListWidget->setGridSize(QSize(30, 30));
        mPreviewListWidget->setViewMode(QListView::IconMode);
        mPreviewListWidget->setWordWrap(true);

        verticalLayout->addWidget(mPreviewListWidget);

        label_3 = new QLabel(mSearchDirectoriesGroupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        mSearchDirectoriesComboBox = new QComboBox(mSearchDirectoriesGroupBox);
        mSearchDirectoriesComboBox->setObjectName(QStringLiteral("mSearchDirectoriesComboBox"));
        mSearchDirectoriesComboBox->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLength);

        verticalLayout->addWidget(mSearchDirectoriesComboBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mRemoveDirectoryButton = new QPushButton(mSearchDirectoriesGroupBox);
        mRemoveDirectoryButton->setObjectName(QStringLiteral("mRemoveDirectoryButton"));

        horizontalLayout->addWidget(mRemoveDirectoryButton);

        mAddDirectoryButton = new QPushButton(mSearchDirectoriesGroupBox);
        mAddDirectoryButton->setObjectName(QStringLiteral("mAddDirectoryButton"));

        horizontalLayout->addWidget(mAddDirectoryButton);


        verticalLayout->addLayout(horizontalLayout);


        mainLayout->addWidget(mSearchDirectoriesGroupBox);

        groupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 0, 2, 1, 1);

        mStrokeWidthSpinBox = new QgsDoubleSpinBox(groupBox);
        mStrokeWidthSpinBox->setObjectName(QStringLiteral("mStrokeWidthSpinBox"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(1);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(mStrokeWidthSpinBox->sizePolicy().hasHeightForWidth());
        mStrokeWidthSpinBox->setSizePolicy(sizePolicy4);
        mStrokeWidthSpinBox->setDecimals(2);
        mStrokeWidthSpinBox->setMaximum(9999);
        mStrokeWidthSpinBox->setSingleStep(0.2);
        mStrokeWidthSpinBox->setValue(0.2);
        mStrokeWidthSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_3->addWidget(mStrokeWidthSpinBox, 2, 1, 1, 1);

        mFillColorDDBtn = new QgsPropertyOverrideButton(groupBox);
        mFillColorDDBtn->setObjectName(QStringLiteral("mFillColorDDBtn"));

        gridLayout_3->addWidget(mFillColorDDBtn, 0, 3, 1, 1);

        mStrokeColorLabel = new QLabel(groupBox);
        mStrokeColorLabel->setObjectName(QStringLiteral("mStrokeColorLabel"));
        QSizePolicy sizePolicy5(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(mStrokeColorLabel->sizePolicy().hasHeightForWidth());
        mStrokeColorLabel->setSizePolicy(sizePolicy5);

        gridLayout_3->addWidget(mStrokeColorLabel, 1, 0, 1, 1);

        mFillColorButton = new QgsColorButton(groupBox);
        mFillColorButton->setObjectName(QStringLiteral("mFillColorButton"));
        mFillColorButton->setMinimumSize(QSize(120, 0));
        mFillColorButton->setMaximumSize(QSize(120, 16777215));

        gridLayout_3->addWidget(mFillColorButton, 0, 1, 1, 1);

        mStrokeWidthLabel = new QLabel(groupBox);
        mStrokeWidthLabel->setObjectName(QStringLiteral("mStrokeWidthLabel"));

        gridLayout_3->addWidget(mStrokeWidthLabel, 2, 0, 1, 1);

        mStrokeColorButton = new QgsColorButton(groupBox);
        mStrokeColorButton->setObjectName(QStringLiteral("mStrokeColorButton"));
        mStrokeColorButton->setMinimumSize(QSize(120, 0));
        mStrokeColorButton->setMaximumSize(QSize(120, 16777215));

        gridLayout_3->addWidget(mStrokeColorButton, 1, 1, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy5.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy5);

        gridLayout_3->addWidget(label_6, 0, 0, 1, 1);

        mStrokeColorDDBtn = new QgsPropertyOverrideButton(groupBox);
        mStrokeColorDDBtn->setObjectName(QStringLiteral("mStrokeColorDDBtn"));

        gridLayout_3->addWidget(mStrokeColorDDBtn, 1, 3, 1, 1);

        mStrokeWidthDDBtn = new QgsPropertyOverrideButton(groupBox);
        mStrokeWidthDDBtn->setObjectName(QStringLiteral("mStrokeWidthDDBtn"));

        gridLayout_3->addWidget(mStrokeWidthDDBtn, 2, 3, 1, 1);


        mainLayout->addWidget(groupBox);

        mRotationGroupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mRotationGroupBox->setObjectName(QStringLiteral("mRotationGroupBox"));
        mRotationGroupBox->setFocusPolicy(Qt::StrongFocus);
        mRotationGroupBox->setProperty("syncGroup", QVariant(QStringLiteral("composeritem")));
        mRotationGroupBox->setProperty("collapsed", QVariant(false));
        gridLayout_2 = new QGridLayout(mRotationGroupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        mNorthTypeComboBox = new QComboBox(mRotationGroupBox);
        mNorthTypeComboBox->setObjectName(QStringLiteral("mNorthTypeComboBox"));

        gridLayout_2->addWidget(mNorthTypeComboBox, 2, 1, 1, 1);

        label_7 = new QLabel(mRotationGroupBox);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_2->addWidget(label_7, 2, 0, 1, 1);

        mRotationFromComposerMapCheckBox = new QCheckBox(mRotationGroupBox);
        mRotationFromComposerMapCheckBox->setObjectName(QStringLiteral("mRotationFromComposerMapCheckBox"));

        gridLayout_2->addWidget(mRotationFromComposerMapCheckBox, 1, 0, 1, 1);

        mComposerMapComboBox = new QgsLayoutItemComboBox(mRotationGroupBox);
        mComposerMapComboBox->setObjectName(QStringLiteral("mComposerMapComboBox"));

        gridLayout_2->addWidget(mComposerMapComboBox, 1, 1, 1, 1);

        mPictureRotationSpinBox = new QgsDoubleSpinBox(mRotationGroupBox);
        mPictureRotationSpinBox->setObjectName(QStringLiteral("mPictureRotationSpinBox"));
        mPictureRotationSpinBox->setWrapping(true);
        mPictureRotationSpinBox->setMinimum(-360);
        mPictureRotationSpinBox->setMaximum(360);

        gridLayout_2->addWidget(mPictureRotationSpinBox, 0, 0, 1, 2);

        label_8 = new QLabel(mRotationGroupBox);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_2->addWidget(label_8, 3, 0, 1, 1);

        mPictureRotationOffsetSpinBox = new QgsDoubleSpinBox(mRotationGroupBox);
        mPictureRotationOffsetSpinBox->setObjectName(QStringLiteral("mPictureRotationOffsetSpinBox"));
        mPictureRotationOffsetSpinBox->setWrapping(true);
        mPictureRotationOffsetSpinBox->setMinimum(-360);
        mPictureRotationOffsetSpinBox->setMaximum(360);

        gridLayout_2->addWidget(mPictureRotationOffsetSpinBox, 3, 1, 1, 1);

        gridLayout_2->setColumnStretch(1, 1);

        mainLayout->addWidget(mRotationGroupBox);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);

        QWidget::setTabOrder(scrollArea, mPreviewGroupBox);
        QWidget::setTabOrder(mPreviewGroupBox, mPictureLineEdit);
        QWidget::setTabOrder(mPictureLineEdit, mPictureBrowseButton);
        QWidget::setTabOrder(mPictureBrowseButton, mSourceDDBtn);
        QWidget::setTabOrder(mSourceDDBtn, mResizeModeComboBox);
        QWidget::setTabOrder(mResizeModeComboBox, mAnchorPointComboBox);
        QWidget::setTabOrder(mAnchorPointComboBox, mSearchDirectoriesGroupBox);
        QWidget::setTabOrder(mSearchDirectoriesGroupBox, mPreviewListWidget);
        QWidget::setTabOrder(mPreviewListWidget, mSearchDirectoriesComboBox);
        QWidget::setTabOrder(mSearchDirectoriesComboBox, mRemoveDirectoryButton);
        QWidget::setTabOrder(mRemoveDirectoryButton, mAddDirectoryButton);
        QWidget::setTabOrder(mAddDirectoryButton, mFillColorButton);
        QWidget::setTabOrder(mFillColorButton, mFillColorDDBtn);
        QWidget::setTabOrder(mFillColorDDBtn, mStrokeColorButton);
        QWidget::setTabOrder(mStrokeColorButton, mStrokeColorDDBtn);
        QWidget::setTabOrder(mStrokeColorDDBtn, mStrokeWidthSpinBox);
        QWidget::setTabOrder(mStrokeWidthSpinBox, mStrokeWidthDDBtn);
        QWidget::setTabOrder(mStrokeWidthDDBtn, mRotationGroupBox);
        QWidget::setTabOrder(mRotationGroupBox, mPictureRotationSpinBox);
        QWidget::setTabOrder(mPictureRotationSpinBox, mRotationFromComposerMapCheckBox);
        QWidget::setTabOrder(mRotationFromComposerMapCheckBox, mComposerMapComboBox);
        QWidget::setTabOrder(mComposerMapComboBox, mNorthTypeComboBox);
        QWidget::setTabOrder(mNorthTypeComboBox, mPictureRotationOffsetSpinBox);

        retranslateUi(QgsLayoutPictureWidgetBase);

        QMetaObject::connectSlotsByName(QgsLayoutPictureWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsLayoutPictureWidgetBase)
    {
        QgsLayoutPictureWidgetBase->setWindowTitle(QApplication::translate("QgsLayoutPictureWidgetBase", "Picture Options", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsLayoutPictureWidgetBase", "Picture", Q_NULLPTR));
        mPreviewGroupBox->setTitle(QApplication::translate("QgsLayoutPictureWidgetBase", "Main Properties", Q_NULLPTR));
        label->setText(QApplication::translate("QgsLayoutPictureWidgetBase", "Image source", Q_NULLPTR));
        mPictureBrowseButton->setText(QApplication::translate("QgsLayoutPictureWidgetBase", "\342\200\246", Q_NULLPTR));
        mSourceDDBtn->setText(QApplication::translate("QgsLayoutPictureWidgetBase", "\342\200\246", Q_NULLPTR));
        label_4->setText(QApplication::translate("QgsLayoutPictureWidgetBase", "Resize mode", Q_NULLPTR));
        mResizeModeComboBox->clear();
        mResizeModeComboBox->insertItems(0, QStringList()
         << QApplication::translate("QgsLayoutPictureWidgetBase", "Zoom", Q_NULLPTR)
         << QApplication::translate("QgsLayoutPictureWidgetBase", "Stretch", Q_NULLPTR)
         << QApplication::translate("QgsLayoutPictureWidgetBase", "Clip", Q_NULLPTR)
         << QApplication::translate("QgsLayoutPictureWidgetBase", "Zoom and resize frame", Q_NULLPTR)
         << QApplication::translate("QgsLayoutPictureWidgetBase", "Resize frame to image size", Q_NULLPTR)
        );
        label_5->setText(QApplication::translate("QgsLayoutPictureWidgetBase", "Placement", Q_NULLPTR));
        mAnchorPointComboBox->clear();
        mAnchorPointComboBox->insertItems(0, QStringList()
         << QApplication::translate("QgsLayoutPictureWidgetBase", "Top left", Q_NULLPTR)
         << QApplication::translate("QgsLayoutPictureWidgetBase", "Top center", Q_NULLPTR)
         << QApplication::translate("QgsLayoutPictureWidgetBase", "Top right", Q_NULLPTR)
         << QApplication::translate("QgsLayoutPictureWidgetBase", "Middle left", Q_NULLPTR)
         << QApplication::translate("QgsLayoutPictureWidgetBase", "Middle", Q_NULLPTR)
         << QApplication::translate("QgsLayoutPictureWidgetBase", "Middle right", Q_NULLPTR)
         << QApplication::translate("QgsLayoutPictureWidgetBase", "Bottom left", Q_NULLPTR)
         << QApplication::translate("QgsLayoutPictureWidgetBase", "Bottom center", Q_NULLPTR)
         << QApplication::translate("QgsLayoutPictureWidgetBase", "Bottom right", Q_NULLPTR)
        );
        mSearchDirectoriesGroupBox->setTitle(QApplication::translate("QgsLayoutPictureWidgetBase", "Search Directories", Q_NULLPTR));
        mPreviewsLoadingLabel->setText(QApplication::translate("QgsLayoutPictureWidgetBase", "Loading previews\342\200\246", Q_NULLPTR));
        label_3->setText(QApplication::translate("QgsLayoutPictureWidgetBase", "Image search paths", Q_NULLPTR));
        mRemoveDirectoryButton->setText(QApplication::translate("QgsLayoutPictureWidgetBase", "Remove", Q_NULLPTR));
        mAddDirectoryButton->setText(QApplication::translate("QgsLayoutPictureWidgetBase", "Add\342\200\246", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("QgsLayoutPictureWidgetBase", "SVG Parameters", Q_NULLPTR));
        mStrokeWidthSpinBox->setSuffix(QApplication::translate("QgsLayoutPictureWidgetBase", " mm", Q_NULLPTR));
        mFillColorDDBtn->setText(QApplication::translate("QgsLayoutPictureWidgetBase", "\342\200\246", Q_NULLPTR));
        mStrokeColorLabel->setText(QApplication::translate("QgsLayoutPictureWidgetBase", "Stroke color", Q_NULLPTR));
        mFillColorButton->setText(QString());
        mStrokeWidthLabel->setText(QApplication::translate("QgsLayoutPictureWidgetBase", "Stroke width", Q_NULLPTR));
        mStrokeColorButton->setText(QString());
        label_6->setText(QApplication::translate("QgsLayoutPictureWidgetBase", "Fill color", Q_NULLPTR));
        mStrokeColorDDBtn->setText(QApplication::translate("QgsLayoutPictureWidgetBase", "\342\200\246", Q_NULLPTR));
        mStrokeWidthDDBtn->setText(QApplication::translate("QgsLayoutPictureWidgetBase", "\342\200\246", Q_NULLPTR));
        mRotationGroupBox->setTitle(QApplication::translate("QgsLayoutPictureWidgetBase", "Image Rotation", Q_NULLPTR));
        label_7->setText(QApplication::translate("QgsLayoutPictureWidgetBase", "North alignment", Q_NULLPTR));
        mRotationFromComposerMapCheckBox->setText(QApplication::translate("QgsLayoutPictureWidgetBase", "Sync with map", Q_NULLPTR));
        mPictureRotationSpinBox->setSuffix(QApplication::translate("QgsLayoutPictureWidgetBase", " \302\260", Q_NULLPTR));
        label_8->setText(QApplication::translate("QgsLayoutPictureWidgetBase", "Offset", Q_NULLPTR));
        mPictureRotationOffsetSpinBox->setSuffix(QApplication::translate("QgsLayoutPictureWidgetBase", " \302\260", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsLayoutPictureWidgetBase: public Ui_QgsLayoutPictureWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLAYOUTPICTUREWIDGETBASE_H
