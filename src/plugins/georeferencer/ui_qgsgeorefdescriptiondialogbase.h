/********************************************************************************
** Form generated from reading UI file 'qgsgeorefdescriptiondialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSGEOREFDESCRIPTIONDIALOGBASE_H
#define UI_QGSGEOREFDESCRIPTIONDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_QgsGeorefDescriptionDialogBase
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QTextEdit *textEdit;
    QLabel *label;

    void setupUi(QDialog *QgsGeorefDescriptionDialogBase)
    {
        if (QgsGeorefDescriptionDialogBase->objectName().isEmpty())
            QgsGeorefDescriptionDialogBase->setObjectName(QStringLiteral("QgsGeorefDescriptionDialogBase"));
        QgsGeorefDescriptionDialogBase->resize(416, 268);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        QgsGeorefDescriptionDialogBase->setWindowIcon(icon);
        QgsGeorefDescriptionDialogBase->setModal(true);
        gridLayout = new QGridLayout(QgsGeorefDescriptionDialogBase);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        buttonBox = new QDialogButtonBox(QgsGeorefDescriptionDialogBase);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 2);

        textEdit = new QTextEdit(QgsGeorefDescriptionDialogBase);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setReadOnly(true);

        gridLayout->addWidget(textEdit, 0, 1, 1, 1);

        label = new QLabel(QgsGeorefDescriptionDialogBase);
        label->setObjectName(QStringLiteral("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/icons/default/mGeorefDescription.png")));
        label->setScaledContents(true);

        gridLayout->addWidget(label, 0, 0, 1, 1);


        retranslateUi(QgsGeorefDescriptionDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsGeorefDescriptionDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsGeorefDescriptionDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsGeorefDescriptionDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsGeorefDescriptionDialogBase)
    {
        QgsGeorefDescriptionDialogBase->setWindowTitle(QApplication::translate("QgsGeorefDescriptionDialogBase", "Description georeferencer", Q_NULLPTR));
        textEdit->setHtml(QApplication::translate("QgsGeorefDescriptionDialogBase", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Droid Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans Serif'; font-size:10pt;\"></p></body></html>", Q_NULLPTR));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QgsGeorefDescriptionDialogBase: public Ui_QgsGeorefDescriptionDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSGEOREFDESCRIPTIONDIALOGBASE_H
