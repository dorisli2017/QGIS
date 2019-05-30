/********************************************************************************
** Form generated from reading UI file 'qgsdecorationgriddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSDECORATIONGRIDDIALOG_H
#define UI_QGSDECORATIONGRIDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include "qgsfontbutton.h"
#include "qgssymbolbutton.h"

QT_BEGIN_NAMESPACE

class Ui_QgsDecorationGridDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *grpEnable;
    QGridLayout *gridLayout_3;
    QGroupBox *mDrawAnnotationCheckBox;
    QGridLayout *gridLayout;
    QLabel *mAnnotationDirectionLabel;
    QComboBox *mAnnotationDirectionComboBox;
    QLabel *mDistanceToFrameLabel;
    QDoubleSpinBox *mDistanceToMapFrameSpinBox;
    QLabel *mCoordinatePrecisionLabel;
    QSpinBox *mCoordinatePrecisionSpinBox;
    QgsFontButton *mAnnotationFontButton;
    QSpacerItem *horizontalSpacer;
    QLabel *mIntervalYLabel;
    QLineEdit *mIntervalYEdit;
    QFrame *line_2;
    QLabel *mGridTypeLabel;
    QComboBox *mGridTypeComboBox;
    QLabel *mLineSymbolLabel;
    QLabel *mMarkerSymbolLabel;
    QFrame *line_3;
    QLabel *mOffsetXLabel;
    QLineEdit *mOffsetXEdit;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QPushButton *mPbtnUpdateFromExtents;
    QPushButton *mPbtnUpdateFromLayer;
    QLabel *mOffsetYLabel;
    QLineEdit *mOffsetYEdit;
    QLineEdit *mIntervalXEdit;
    QLabel *mIntervalXLabel;
    QgsSymbolButton *mLineSymbolButton;
    QgsSymbolButton *mMarkerSymbolButton;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsDecorationGridDialog)
    {
        if (QgsDecorationGridDialog->objectName().isEmpty())
            QgsDecorationGridDialog->setObjectName(QStringLiteral("QgsDecorationGridDialog"));
        QgsDecorationGridDialog->resize(603, 365);
        verticalLayout = new QVBoxLayout(QgsDecorationGridDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        grpEnable = new QGroupBox(QgsDecorationGridDialog);
        grpEnable->setObjectName(QStringLiteral("grpEnable"));
        grpEnable->setCheckable(true);
        grpEnable->setChecked(false);
        gridLayout_3 = new QGridLayout(grpEnable);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        mDrawAnnotationCheckBox = new QGroupBox(grpEnable);
        mDrawAnnotationCheckBox->setObjectName(QStringLiteral("mDrawAnnotationCheckBox"));
        mDrawAnnotationCheckBox->setFlat(false);
        mDrawAnnotationCheckBox->setCheckable(true);
        mDrawAnnotationCheckBox->setChecked(false);
        gridLayout = new QGridLayout(mDrawAnnotationCheckBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMinimumSize);
        mAnnotationDirectionLabel = new QLabel(mDrawAnnotationCheckBox);
        mAnnotationDirectionLabel->setObjectName(QStringLiteral("mAnnotationDirectionLabel"));
        mAnnotationDirectionLabel->setFrameShape(QFrame::NoFrame);
        mAnnotationDirectionLabel->setWordWrap(true);

        gridLayout->addWidget(mAnnotationDirectionLabel, 0, 0, 1, 1);

        mAnnotationDirectionComboBox = new QComboBox(mDrawAnnotationCheckBox);
        mAnnotationDirectionComboBox->setObjectName(QStringLiteral("mAnnotationDirectionComboBox"));

        gridLayout->addWidget(mAnnotationDirectionComboBox, 0, 1, 1, 1);

        mDistanceToFrameLabel = new QLabel(mDrawAnnotationCheckBox);
        mDistanceToFrameLabel->setObjectName(QStringLiteral("mDistanceToFrameLabel"));
        mDistanceToFrameLabel->setWordWrap(true);

        gridLayout->addWidget(mDistanceToFrameLabel, 2, 0, 1, 1);

        mDistanceToMapFrameSpinBox = new QDoubleSpinBox(mDrawAnnotationCheckBox);
        mDistanceToMapFrameSpinBox->setObjectName(QStringLiteral("mDistanceToMapFrameSpinBox"));

        gridLayout->addWidget(mDistanceToMapFrameSpinBox, 2, 1, 1, 1);

        mCoordinatePrecisionLabel = new QLabel(mDrawAnnotationCheckBox);
        mCoordinatePrecisionLabel->setObjectName(QStringLiteral("mCoordinatePrecisionLabel"));
        mCoordinatePrecisionLabel->setWordWrap(true);

        gridLayout->addWidget(mCoordinatePrecisionLabel, 3, 0, 1, 1);

        mCoordinatePrecisionSpinBox = new QSpinBox(mDrawAnnotationCheckBox);
        mCoordinatePrecisionSpinBox->setObjectName(QStringLiteral("mCoordinatePrecisionSpinBox"));

        gridLayout->addWidget(mCoordinatePrecisionSpinBox, 3, 1, 1, 1);

        mAnnotationFontButton = new QgsFontButton(mDrawAnnotationCheckBox);
        mAnnotationFontButton->setObjectName(QStringLiteral("mAnnotationFontButton"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mAnnotationFontButton->sizePolicy().hasHeightForWidth());
        mAnnotationFontButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mAnnotationFontButton, 1, 0, 1, 2);


        gridLayout_3->addWidget(mDrawAnnotationCheckBox, 0, 3, 8, 1);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 1, 2, 1, 1);

        mIntervalYLabel = new QLabel(grpEnable);
        mIntervalYLabel->setObjectName(QStringLiteral("mIntervalYLabel"));
        mIntervalYLabel->setWordWrap(true);

        gridLayout_3->addWidget(mIntervalYLabel, 2, 0, 1, 1);

        mIntervalYEdit = new QLineEdit(grpEnable);
        mIntervalYEdit->setObjectName(QStringLiteral("mIntervalYEdit"));

        gridLayout_3->addWidget(mIntervalYEdit, 2, 1, 1, 1);

        line_2 = new QFrame(grpEnable);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line_2, 3, 0, 1, 2);

        mGridTypeLabel = new QLabel(grpEnable);
        mGridTypeLabel->setObjectName(QStringLiteral("mGridTypeLabel"));
        mGridTypeLabel->setWordWrap(true);

        gridLayout_3->addWidget(mGridTypeLabel, 4, 0, 1, 1);

        mGridTypeComboBox = new QComboBox(grpEnable);
        mGridTypeComboBox->setObjectName(QStringLiteral("mGridTypeComboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mGridTypeComboBox->sizePolicy().hasHeightForWidth());
        mGridTypeComboBox->setSizePolicy(sizePolicy1);
        mGridTypeComboBox->setMinimumSize(QSize(100, 0));

        gridLayout_3->addWidget(mGridTypeComboBox, 4, 1, 1, 1);

        mLineSymbolLabel = new QLabel(grpEnable);
        mLineSymbolLabel->setObjectName(QStringLiteral("mLineSymbolLabel"));
        mLineSymbolLabel->setWordWrap(true);

        gridLayout_3->addWidget(mLineSymbolLabel, 5, 0, 1, 1);

        mMarkerSymbolLabel = new QLabel(grpEnable);
        mMarkerSymbolLabel->setObjectName(QStringLiteral("mMarkerSymbolLabel"));

        gridLayout_3->addWidget(mMarkerSymbolLabel, 6, 0, 1, 1);

        line_3 = new QFrame(grpEnable);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line_3, 7, 0, 1, 2);

        mOffsetXLabel = new QLabel(grpEnable);
        mOffsetXLabel->setObjectName(QStringLiteral("mOffsetXLabel"));
        mOffsetXLabel->setWordWrap(true);

        gridLayout_3->addWidget(mOffsetXLabel, 8, 0, 1, 1);

        mOffsetXEdit = new QLineEdit(grpEnable);
        mOffsetXEdit->setObjectName(QStringLiteral("mOffsetXEdit"));

        gridLayout_3->addWidget(mOffsetXEdit, 8, 1, 1, 1);

        groupBox = new QGroupBox(grpEnable);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        mPbtnUpdateFromExtents = new QPushButton(groupBox);
        mPbtnUpdateFromExtents->setObjectName(QStringLiteral("mPbtnUpdateFromExtents"));

        gridLayout_2->addWidget(mPbtnUpdateFromExtents, 0, 0, 1, 1);

        mPbtnUpdateFromLayer = new QPushButton(groupBox);
        mPbtnUpdateFromLayer->setObjectName(QStringLiteral("mPbtnUpdateFromLayer"));

        gridLayout_2->addWidget(mPbtnUpdateFromLayer, 0, 1, 1, 1);


        gridLayout_3->addWidget(groupBox, 8, 3, 2, 1);

        mOffsetYLabel = new QLabel(grpEnable);
        mOffsetYLabel->setObjectName(QStringLiteral("mOffsetYLabel"));
        mOffsetYLabel->setWordWrap(true);

        gridLayout_3->addWidget(mOffsetYLabel, 9, 0, 1, 1);

        mOffsetYEdit = new QLineEdit(grpEnable);
        mOffsetYEdit->setObjectName(QStringLiteral("mOffsetYEdit"));

        gridLayout_3->addWidget(mOffsetYEdit, 9, 1, 1, 1);

        mIntervalXEdit = new QLineEdit(grpEnable);
        mIntervalXEdit->setObjectName(QStringLiteral("mIntervalXEdit"));

        gridLayout_3->addWidget(mIntervalXEdit, 0, 1, 2, 1);

        mIntervalXLabel = new QLabel(grpEnable);
        mIntervalXLabel->setObjectName(QStringLiteral("mIntervalXLabel"));
        mIntervalXLabel->setWordWrap(true);

        gridLayout_3->addWidget(mIntervalXLabel, 0, 0, 2, 1);

        mLineSymbolButton = new QgsSymbolButton(grpEnable);
        mLineSymbolButton->setObjectName(QStringLiteral("mLineSymbolButton"));
        mLineSymbolButton->setEnabled(false);
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mLineSymbolButton->sizePolicy().hasHeightForWidth());
        mLineSymbolButton->setSizePolicy(sizePolicy2);
        mLineSymbolButton->setMinimumSize(QSize(100, 0));

        gridLayout_3->addWidget(mLineSymbolButton, 5, 1, 1, 1);

        mMarkerSymbolButton = new QgsSymbolButton(grpEnable);
        mMarkerSymbolButton->setObjectName(QStringLiteral("mMarkerSymbolButton"));
        mMarkerSymbolButton->setEnabled(false);
        sizePolicy2.setHeightForWidth(mMarkerSymbolButton->sizePolicy().hasHeightForWidth());
        mMarkerSymbolButton->setSizePolicy(sizePolicy2);
        mMarkerSymbolButton->setMinimumSize(QSize(100, 0));

        gridLayout_3->addWidget(mMarkerSymbolButton, 6, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 10, 0, 1, 2);

        mOffsetYEdit->raise();
        mOffsetXEdit->raise();
        mDrawAnnotationCheckBox->raise();
        mLineSymbolLabel->raise();
        groupBox->raise();
        mLineSymbolButton->raise();
        mMarkerSymbolButton->raise();
        mMarkerSymbolLabel->raise();
        mIntervalXEdit->raise();
        line_2->raise();
        line_3->raise();
        mIntervalYEdit->raise();
        mIntervalXLabel->raise();
        mOffsetXLabel->raise();
        mGridTypeComboBox->raise();
        mGridTypeLabel->raise();
        mIntervalYLabel->raise();
        mOffsetYLabel->raise();

        verticalLayout->addWidget(grpEnable);

        buttonBox = new QDialogButtonBox(QgsDecorationGridDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(grpEnable, mIntervalXEdit);
        QWidget::setTabOrder(mIntervalXEdit, mIntervalYEdit);
        QWidget::setTabOrder(mIntervalYEdit, mGridTypeComboBox);
        QWidget::setTabOrder(mGridTypeComboBox, mLineSymbolButton);
        QWidget::setTabOrder(mLineSymbolButton, mMarkerSymbolButton);
        QWidget::setTabOrder(mMarkerSymbolButton, mOffsetXEdit);
        QWidget::setTabOrder(mOffsetXEdit, mOffsetYEdit);
        QWidget::setTabOrder(mOffsetYEdit, mDrawAnnotationCheckBox);
        QWidget::setTabOrder(mDrawAnnotationCheckBox, mAnnotationDirectionComboBox);
        QWidget::setTabOrder(mAnnotationDirectionComboBox, mAnnotationFontButton);
        QWidget::setTabOrder(mAnnotationFontButton, mDistanceToMapFrameSpinBox);
        QWidget::setTabOrder(mDistanceToMapFrameSpinBox, mCoordinatePrecisionSpinBox);
        QWidget::setTabOrder(mCoordinatePrecisionSpinBox, mPbtnUpdateFromExtents);
        QWidget::setTabOrder(mPbtnUpdateFromExtents, mPbtnUpdateFromLayer);
        QWidget::setTabOrder(mPbtnUpdateFromLayer, buttonBox);

        retranslateUi(QgsDecorationGridDialog);

        QMetaObject::connectSlotsByName(QgsDecorationGridDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsDecorationGridDialog)
    {
        QgsDecorationGridDialog->setWindowTitle(QApplication::translate("QgsDecorationGridDialog", "Grid Properties", Q_NULLPTR));
        grpEnable->setTitle(QApplication::translate("QgsDecorationGridDialog", "Enable Grid", Q_NULLPTR));
        mDrawAnnotationCheckBox->setTitle(QApplication::translate("QgsDecorationGridDialog", "Draw Annotation", Q_NULLPTR));
        mAnnotationDirectionLabel->setText(QApplication::translate("QgsDecorationGridDialog", "Annotation direction", Q_NULLPTR));
        mDistanceToFrameLabel->setText(QApplication::translate("QgsDecorationGridDialog", "Distance to map frame", Q_NULLPTR));
        mCoordinatePrecisionLabel->setText(QApplication::translate("QgsDecorationGridDialog", "Coordinate precision", Q_NULLPTR));
        mAnnotationFontButton->setText(QApplication::translate("QgsDecorationGridDialog", "Font", Q_NULLPTR));
        mIntervalYLabel->setText(QApplication::translate("QgsDecorationGridDialog", "Interval Y", Q_NULLPTR));
#ifndef QT_NO_ACCESSIBILITY
        mGridTypeLabel->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        mGridTypeLabel->setText(QApplication::translate("QgsDecorationGridDialog", "Grid type", Q_NULLPTR));
        mLineSymbolLabel->setText(QApplication::translate("QgsDecorationGridDialog", "Line symbol", Q_NULLPTR));
        mMarkerSymbolLabel->setText(QApplication::translate("QgsDecorationGridDialog", "Marker symbol", Q_NULLPTR));
        mOffsetXLabel->setText(QApplication::translate("QgsDecorationGridDialog", "Offset X", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("QgsDecorationGridDialog", "Update Interval / Offset from", Q_NULLPTR));
        mPbtnUpdateFromExtents->setText(QApplication::translate("QgsDecorationGridDialog", "Canvas Extents", Q_NULLPTR));
        mPbtnUpdateFromLayer->setText(QApplication::translate("QgsDecorationGridDialog", "Active Raster Layer", Q_NULLPTR));
        mOffsetYLabel->setText(QApplication::translate("QgsDecorationGridDialog", "Offset Y", Q_NULLPTR));
        mIntervalXLabel->setText(QApplication::translate("QgsDecorationGridDialog", "Interval X", Q_NULLPTR));
        mLineSymbolButton->setText(QString());
        mMarkerSymbolButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QgsDecorationGridDialog: public Ui_QgsDecorationGridDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSDECORATIONGRIDDIALOG_H
