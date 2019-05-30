/********************************************************************************
** Form generated from reading UI file 'qgsgpsdevicedialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSGPSDEVICEDIALOGBASE_H
#define UI_QGSGPSDEVICEDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QgsGpsDeviceDialogBase
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QPushButton *pbnDeleteDevice;
    QPushButton *pbnNewDevice;
    QPushButton *pbnUpdateDevice;
    QListWidget *lbDeviceList;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *hboxLayout;
    QLabel *textLabel3;
    QLineEdit *leDeviceName;
    QGroupBox *groupBox;
    QGridLayout *gridLayout1;
    QLabel *textLabel1_2_5;
    QLabel *textLabel1_2_4;
    QLabel *textLabel1_2;
    QLineEdit *leRteDown;
    QLabel *textLabel1_2_3;
    QLineEdit *leWptUp;
    QLabel *textLabel1_2_5_2;
    QLineEdit *leTrkDown;
    QLineEdit *leRteUp;
    QLineEdit *leWptDown;
    QLineEdit *leTrkUp;
    QLabel *textLabel1_2_2;
    QTextEdit *textEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsGpsDeviceDialogBase)
    {
        if (QgsGpsDeviceDialogBase->objectName().isEmpty())
            QgsGpsDeviceDialogBase->setObjectName(QStringLiteral("QgsGpsDeviceDialogBase"));
        QgsGpsDeviceDialogBase->resize(700, 450);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsGpsDeviceDialogBase->sizePolicy().hasHeightForWidth());
        QgsGpsDeviceDialogBase->setSizePolicy(sizePolicy);
        QgsGpsDeviceDialogBase->setModal(true);
        gridLayout_2 = new QGridLayout(QgsGpsDeviceDialogBase);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        groupBox_2 = new QGroupBox(QgsGpsDeviceDialogBase);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy1);
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pbnDeleteDevice = new QPushButton(groupBox_2);
        pbnDeleteDevice->setObjectName(QStringLiteral("pbnDeleteDevice"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pbnDeleteDevice->sizePolicy().hasHeightForWidth());
        pbnDeleteDevice->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(pbnDeleteDevice, 1, 1, 1, 1);

        pbnNewDevice = new QPushButton(groupBox_2);
        pbnNewDevice->setObjectName(QStringLiteral("pbnNewDevice"));
        sizePolicy2.setHeightForWidth(pbnNewDevice->sizePolicy().hasHeightForWidth());
        pbnNewDevice->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(pbnNewDevice, 1, 0, 1, 1);

        pbnUpdateDevice = new QPushButton(groupBox_2);
        pbnUpdateDevice->setObjectName(QStringLiteral("pbnUpdateDevice"));
        sizePolicy2.setHeightForWidth(pbnUpdateDevice->sizePolicy().hasHeightForWidth());
        pbnUpdateDevice->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(pbnUpdateDevice, 1, 2, 1, 1);

        lbDeviceList = new QListWidget(groupBox_2);
        lbDeviceList->setObjectName(QStringLiteral("lbDeviceList"));
        sizePolicy1.setHeightForWidth(lbDeviceList->sizePolicy().hasHeightForWidth());
        lbDeviceList->setSizePolicy(sizePolicy1);
        lbDeviceList->setMinimumSize(QSize(150, 0));

        gridLayout->addWidget(lbDeviceList, 0, 0, 1, 3);


        gridLayout_2->addWidget(groupBox_2, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        textLabel3 = new QLabel(QgsGpsDeviceDialogBase);
        textLabel3->setObjectName(QStringLiteral("textLabel3"));
        sizePolicy1.setHeightForWidth(textLabel3->sizePolicy().hasHeightForWidth());
        textLabel3->setSizePolicy(sizePolicy1);

        hboxLayout->addWidget(textLabel3);

        leDeviceName = new QLineEdit(QgsGpsDeviceDialogBase);
        leDeviceName->setObjectName(QStringLiteral("leDeviceName"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(2);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(leDeviceName->sizePolicy().hasHeightForWidth());
        leDeviceName->setSizePolicy(sizePolicy3);

        hboxLayout->addWidget(leDeviceName);


        verticalLayout->addLayout(hboxLayout);

        groupBox = new QGroupBox(QgsGpsDeviceDialogBase);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        gridLayout1 = new QGridLayout(groupBox);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(9, 9, 9, 9);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        textLabel1_2_5 = new QLabel(groupBox);
        textLabel1_2_5->setObjectName(QStringLiteral("textLabel1_2_5"));

        gridLayout1->addWidget(textLabel1_2_5, 4, 0, 1, 1);

        textLabel1_2_4 = new QLabel(groupBox);
        textLabel1_2_4->setObjectName(QStringLiteral("textLabel1_2_4"));

        gridLayout1->addWidget(textLabel1_2_4, 3, 0, 1, 1);

        textLabel1_2 = new QLabel(groupBox);
        textLabel1_2->setObjectName(QStringLiteral("textLabel1_2"));

        gridLayout1->addWidget(textLabel1_2, 0, 0, 1, 1);

        leRteDown = new QLineEdit(groupBox);
        leRteDown->setObjectName(QStringLiteral("leRteDown"));

        gridLayout1->addWidget(leRteDown, 2, 1, 1, 1);

        textLabel1_2_3 = new QLabel(groupBox);
        textLabel1_2_3->setObjectName(QStringLiteral("textLabel1_2_3"));

        gridLayout1->addWidget(textLabel1_2_3, 2, 0, 1, 1);

        leWptUp = new QLineEdit(groupBox);
        leWptUp->setObjectName(QStringLiteral("leWptUp"));

        gridLayout1->addWidget(leWptUp, 1, 1, 1, 1);

        textLabel1_2_5_2 = new QLabel(groupBox);
        textLabel1_2_5_2->setObjectName(QStringLiteral("textLabel1_2_5_2"));

        gridLayout1->addWidget(textLabel1_2_5_2, 5, 0, 1, 1);

        leTrkDown = new QLineEdit(groupBox);
        leTrkDown->setObjectName(QStringLiteral("leTrkDown"));

        gridLayout1->addWidget(leTrkDown, 4, 1, 1, 1);

        leRteUp = new QLineEdit(groupBox);
        leRteUp->setObjectName(QStringLiteral("leRteUp"));

        gridLayout1->addWidget(leRteUp, 3, 1, 1, 1);

        leWptDown = new QLineEdit(groupBox);
        leWptDown->setObjectName(QStringLiteral("leWptDown"));

        gridLayout1->addWidget(leWptDown, 0, 1, 1, 1);

        leTrkUp = new QLineEdit(groupBox);
        leTrkUp->setObjectName(QStringLiteral("leTrkUp"));

        gridLayout1->addWidget(leTrkUp, 5, 1, 1, 1);

        textLabel1_2_2 = new QLabel(groupBox);
        textLabel1_2_2->setObjectName(QStringLiteral("textLabel1_2_2"));

        gridLayout1->addWidget(textLabel1_2_2, 1, 0, 1, 1);


        verticalLayout->addWidget(groupBox);

        textEdit = new QTextEdit(QgsGpsDeviceDialogBase);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy4);
        textEdit->setAcceptDrops(false);
        textEdit->setReadOnly(true);
        textEdit->setTextInteractionFlags(Qt::NoTextInteraction);

        verticalLayout->addWidget(textEdit);


        gridLayout_2->addLayout(verticalLayout, 0, 1, 1, 1);

        buttonBox = new QDialogButtonBox(QgsGpsDeviceDialogBase);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        gridLayout_2->addWidget(buttonBox, 1, 0, 1, 2);

#ifndef QT_NO_SHORTCUT
        textLabel3->setBuddy(leDeviceName);
        textLabel1_2_5->setBuddy(leTrkDown);
        textLabel1_2_4->setBuddy(leRteUp);
        textLabel1_2->setBuddy(leWptDown);
        textLabel1_2_3->setBuddy(leRteDown);
        textLabel1_2_5_2->setBuddy(leTrkUp);
        textLabel1_2_2->setBuddy(leWptUp);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(lbDeviceList, pbnNewDevice);
        QWidget::setTabOrder(pbnNewDevice, pbnDeleteDevice);
        QWidget::setTabOrder(pbnDeleteDevice, pbnUpdateDevice);
        QWidget::setTabOrder(pbnUpdateDevice, leDeviceName);
        QWidget::setTabOrder(leDeviceName, leWptDown);
        QWidget::setTabOrder(leWptDown, leWptUp);
        QWidget::setTabOrder(leWptUp, leRteDown);
        QWidget::setTabOrder(leRteDown, leRteUp);
        QWidget::setTabOrder(leRteUp, leTrkDown);
        QWidget::setTabOrder(leTrkDown, leTrkUp);
        QWidget::setTabOrder(leTrkUp, textEdit);
        QWidget::setTabOrder(textEdit, buttonBox);

        retranslateUi(QgsGpsDeviceDialogBase);
        QObject::connect(buttonBox, SIGNAL(clicked(QAbstractButton*)), QgsGpsDeviceDialogBase, SLOT(accept()));

        QMetaObject::connectSlotsByName(QgsGpsDeviceDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsGpsDeviceDialogBase)
    {
        QgsGpsDeviceDialogBase->setWindowTitle(QApplication::translate("QgsGpsDeviceDialogBase", "GPS Device Editor", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("QgsGpsDeviceDialogBase", "Devices", Q_NULLPTR));
        pbnDeleteDevice->setText(QApplication::translate("QgsGpsDeviceDialogBase", "Delete", Q_NULLPTR));
        pbnNewDevice->setText(QApplication::translate("QgsGpsDeviceDialogBase", "New", Q_NULLPTR));
        pbnUpdateDevice->setText(QApplication::translate("QgsGpsDeviceDialogBase", "Update", Q_NULLPTR));
        textLabel3->setText(QApplication::translate("QgsGpsDeviceDialogBase", "Device name", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        leDeviceName->setToolTip(QApplication::translate("QgsGpsDeviceDialogBase", "This is the name of the device as it will appear in the lists", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        groupBox->setTitle(QApplication::translate("QgsGpsDeviceDialogBase", "Commands", Q_NULLPTR));
        textLabel1_2_5->setText(QApplication::translate("QgsGpsDeviceDialogBase", "Track download", Q_NULLPTR));
        textLabel1_2_4->setText(QApplication::translate("QgsGpsDeviceDialogBase", "Route upload", Q_NULLPTR));
        textLabel1_2->setText(QApplication::translate("QgsGpsDeviceDialogBase", "Waypoint download", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        leRteDown->setToolTip(QApplication::translate("QgsGpsDeviceDialogBase", "The command that is used to download routes from the device", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        textLabel1_2_3->setText(QApplication::translate("QgsGpsDeviceDialogBase", "Route download", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        leWptUp->setToolTip(QApplication::translate("QgsGpsDeviceDialogBase", "The command that is used to upload waypoints to the device", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        textLabel1_2_5_2->setText(QApplication::translate("QgsGpsDeviceDialogBase", "Track upload", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        leTrkDown->setToolTip(QApplication::translate("QgsGpsDeviceDialogBase", "The command that is used to download tracks from the device", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        leRteUp->setToolTip(QApplication::translate("QgsGpsDeviceDialogBase", "The command that is used to upload routes to the device", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        leWptDown->setToolTip(QApplication::translate("QgsGpsDeviceDialogBase", "The command that is used to download waypoints from the device", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        leTrkUp->setToolTip(QApplication::translate("QgsGpsDeviceDialogBase", "The command that is used to upload tracks to the device", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        textLabel1_2_2->setText(QApplication::translate("QgsGpsDeviceDialogBase", "Waypoint upload", Q_NULLPTR));
        textEdit->setHtml(QApplication::translate("QgsGpsDeviceDialogBase", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt;\">In the download and upload commands there can be special words that will be replaced by QGIS when the commands are used. These words are:</span><span style=\" font-family:'Sans Serif'; font-size:9pt; font-style:italic;\">%babel</span><span style=\" font-family:'Sans Serif'; font-size:9pt;\"> - the path to GPSBabel<br /></span><span style=\" font-family:'Sans Serif'; font-size:9pt; font-style:italic;\">%in</span><span style=\" font-family:'Sans Serif'; font-size:9pt;\"> - the GPX filename when up"
                        "loading or the port when downloading<br /></span><span style=\" font-family:'Sans Serif'; font-size:9pt; font-style:italic;\">%out</span><span style=\" font-family:'Sans Serif'; font-size:9pt;\"> - the port when uploading or the GPX filename when downloading</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsGpsDeviceDialogBase: public Ui_QgsGpsDeviceDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSGPSDEVICEDIALOGBASE_H
