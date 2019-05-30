/********************************************************************************
** Form generated from reading UI file 'evisdatabaselayerfieldselectionguibase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVISDATABASELAYERFIELDSELECTIONGUIBASE_H
#define UI_EVISDATABASELAYERFIELDSELECTIONGUIBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_eVisDatabaseLayerFieldSelectionGuiBase
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QComboBox *cboxYCoordinate;
    QComboBox *cboxXCoordinate;
    QLineEdit *leLayerName;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label;

    void setupUi(QDialog *eVisDatabaseLayerFieldSelectionGuiBase)
    {
        if (eVisDatabaseLayerFieldSelectionGuiBase->objectName().isEmpty())
            eVisDatabaseLayerFieldSelectionGuiBase->setObjectName(QStringLiteral("eVisDatabaseLayerFieldSelectionGuiBase"));
        eVisDatabaseLayerFieldSelectionGuiBase->setWindowModality(Qt::WindowModal);
        eVisDatabaseLayerFieldSelectionGuiBase->resize(319, 185);
        QIcon icon;
        icon.addFile(QStringLiteral(":/evis/eVisDatabaseConnection.png"), QSize(), QIcon::Normal, QIcon::Off);
        eVisDatabaseLayerFieldSelectionGuiBase->setWindowIcon(icon);
        gridLayout = new QGridLayout(eVisDatabaseLayerFieldSelectionGuiBase);
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(9, 9, 9, 9);
        buttonBox = new QDialogButtonBox(eVisDatabaseLayerFieldSelectionGuiBase);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 3, 0, 1, 2);

        cboxYCoordinate = new QComboBox(eVisDatabaseLayerFieldSelectionGuiBase);
        cboxYCoordinate->setObjectName(QStringLiteral("cboxYCoordinate"));

        gridLayout->addWidget(cboxYCoordinate, 2, 1, 1, 1);

        cboxXCoordinate = new QComboBox(eVisDatabaseLayerFieldSelectionGuiBase);
        cboxXCoordinate->setObjectName(QStringLiteral("cboxXCoordinate"));

        gridLayout->addWidget(cboxXCoordinate, 1, 1, 1, 1);

        leLayerName = new QLineEdit(eVisDatabaseLayerFieldSelectionGuiBase);
        leLayerName->setObjectName(QStringLiteral("leLayerName"));

        gridLayout->addWidget(leLayerName, 0, 1, 1, 1);

        label_3 = new QLabel(eVisDatabaseLayerFieldSelectionGuiBase);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_2 = new QLabel(eVisDatabaseLayerFieldSelectionGuiBase);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(eVisDatabaseLayerFieldSelectionGuiBase);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        QWidget::setTabOrder(leLayerName, cboxXCoordinate);
        QWidget::setTabOrder(cboxXCoordinate, cboxYCoordinate);

        retranslateUi(eVisDatabaseLayerFieldSelectionGuiBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), eVisDatabaseLayerFieldSelectionGuiBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), eVisDatabaseLayerFieldSelectionGuiBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(eVisDatabaseLayerFieldSelectionGuiBase);
    } // setupUi

    void retranslateUi(QDialog *eVisDatabaseLayerFieldSelectionGuiBase)
    {
        eVisDatabaseLayerFieldSelectionGuiBase->setWindowTitle(QApplication::translate("eVisDatabaseLayerFieldSelectionGuiBase", "Database File Selection", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        cboxYCoordinate->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        cboxYCoordinate->setWhatsThis(QApplication::translate("eVisDatabaseLayerFieldSelectionGuiBase", "The name of the field that contains the Y coordinate of the points.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        cboxXCoordinate->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        cboxXCoordinate->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        cboxXCoordinate->setWhatsThis(QApplication::translate("eVisDatabaseLayerFieldSelectionGuiBase", "The name of the field that contains the X coordinate of the points.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        leLayerName->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        leLayerName->setWhatsThis(QApplication::translate("eVisDatabaseLayerFieldSelectionGuiBase", "Enter the name for the new layer that will be created and displayed in QGIS.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        label_3->setText(QApplication::translate("eVisDatabaseLayerFieldSelectionGuiBase", "Y Coordinate", Q_NULLPTR));
        label_2->setText(QApplication::translate("eVisDatabaseLayerFieldSelectionGuiBase", "X Coordinate", Q_NULLPTR));
        label->setText(QApplication::translate("eVisDatabaseLayerFieldSelectionGuiBase", "Name of New Layer", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class eVisDatabaseLayerFieldSelectionGuiBase: public Ui_eVisDatabaseLayerFieldSelectionGuiBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVISDATABASELAYERFIELDSELECTIONGUIBASE_H
