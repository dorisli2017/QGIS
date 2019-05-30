/********************************************************************************
** Form generated from reading UI file 'evisdatabaseconnectionguibase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVISDATABASECONNECTIONGUIBASE_H
#define UI_EVISDATABASECONNECTIONGUIBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_eVisDatabaseConnectionGuiBase
{
public:
    QGridLayout *gridLayout;
    QToolBox *databaseConnectionToolBox;
    QWidget *PredefinedQueries;
    QGridLayout *gridLayout1;
    QPushButton *pbtnLoadPredefinedQueries;
    QLabel *lblPredefinedQueryFilename;
    QTextEdit *teditQueryDescription;
    QComboBox *cboxPredefinedQueryList;
    QSpacerItem *spacerItem;
    QSpacerItem *spacerItem1;
    QWidget *databaseConnection;
    QGridLayout *gridLayout2;
    QLabel *lblConnectionStatus;
    QLabel *label_7;
    QLabel *lblDatabaseHost;
    QLineEdit *leDatabaseHost;
    QLineEdit *leDatabasePassword;
    QLineEdit *leDatabaseName;
    QSpacerItem *spacerItem2;
    QLabel *lblDatabaseUsername;
    QLineEdit *leDatabasePort;
    QPushButton *pbtnConnect;
    QLineEdit *leDatabaseUsername;
    QComboBox *cboxDatabaseType;
    QSpacerItem *spacerItem3;
    QLabel *lblDatabaseName;
    QLabel *lblDatabasePassword;
    QLabel *label_8;
    QLabel *lblDatabasePort;
    QSpacerItem *spacerItem4;
    QPushButton *pbtnOpenFile;
    QWidget *sqlQuery;
    QGridLayout *gridLayout3;
    QSpacerItem *spacerItem5;
    QPushButton *pbtnRunQuery;
    QTextEdit *teditSqlStatement;
    QDialogButtonBox *buttonBox;
    QSpacerItem *spacerItem6;
    QFrame *line;
    QTextEdit *teditConsole;
    QSpacerItem *spacerItem7;
    QLabel *label;
    QSpacerItem *spacerItem8;
    QSpacerItem *spacerItem9;

    void setupUi(QDialog *eVisDatabaseConnectionGuiBase)
    {
        if (eVisDatabaseConnectionGuiBase->objectName().isEmpty())
            eVisDatabaseConnectionGuiBase->setObjectName(QStringLiteral("eVisDatabaseConnectionGuiBase"));
        eVisDatabaseConnectionGuiBase->resize(478, 548);
        QIcon icon;
        icon.addFile(QStringLiteral(":/evis/eVisDatabaseConnection.png"), QSize(), QIcon::Normal, QIcon::Off);
        eVisDatabaseConnectionGuiBase->setWindowIcon(icon);
        gridLayout = new QGridLayout(eVisDatabaseConnectionGuiBase);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        databaseConnectionToolBox = new QToolBox(eVisDatabaseConnectionGuiBase);
        databaseConnectionToolBox->setObjectName(QStringLiteral("databaseConnectionToolBox"));
        databaseConnectionToolBox->setFrameShape(QFrame::Panel);
        databaseConnectionToolBox->setFrameShadow(QFrame::Sunken);
        PredefinedQueries = new QWidget();
        PredefinedQueries->setObjectName(QStringLiteral("PredefinedQueries"));
        PredefinedQueries->setGeometry(QRect(0, 0, 470, 237));
        gridLayout1 = new QGridLayout(PredefinedQueries);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(9, 9, 9, 9);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        pbtnLoadPredefinedQueries = new QPushButton(PredefinedQueries);
        pbtnLoadPredefinedQueries->setObjectName(QStringLiteral("pbtnLoadPredefinedQueries"));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pbtnLoadPredefinedQueries->sizePolicy().hasHeightForWidth());
        pbtnLoadPredefinedQueries->setSizePolicy(sizePolicy);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/mActionFolder.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbtnLoadPredefinedQueries->setIcon(icon1);

        gridLayout1->addWidget(pbtnLoadPredefinedQueries, 1, 0, 1, 1);

        lblPredefinedQueryFilename = new QLabel(PredefinedQueries);
        lblPredefinedQueryFilename->setObjectName(QStringLiteral("lblPredefinedQueryFilename"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lblPredefinedQueryFilename->sizePolicy().hasHeightForWidth());
        lblPredefinedQueryFilename->setSizePolicy(sizePolicy1);

        gridLayout1->addWidget(lblPredefinedQueryFilename, 1, 1, 1, 1);

        teditQueryDescription = new QTextEdit(PredefinedQueries);
        teditQueryDescription->setObjectName(QStringLiteral("teditQueryDescription"));

        gridLayout1->addWidget(teditQueryDescription, 3, 0, 1, 2);

        cboxPredefinedQueryList = new QComboBox(PredefinedQueries);
        cboxPredefinedQueryList->setObjectName(QStringLiteral("cboxPredefinedQueryList"));

        gridLayout1->addWidget(cboxPredefinedQueryList, 2, 0, 1, 2);

        spacerItem = new QSpacerItem(45, 0, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem, 0, 0, 1, 1);

        spacerItem1 = new QSpacerItem(401, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem1, 0, 1, 1, 1);

        databaseConnectionToolBox->addItem(PredefinedQueries, QStringLiteral("Predefined Queries"));
        databaseConnection = new QWidget();
        databaseConnection->setObjectName(QStringLiteral("databaseConnection"));
        databaseConnection->setGeometry(QRect(0, 0, 446, 237));
        gridLayout2 = new QGridLayout(databaseConnection);
        gridLayout2->setSpacing(6);
        gridLayout2->setContentsMargins(9, 9, 9, 9);
        gridLayout2->setObjectName(QStringLiteral("gridLayout2"));
        lblConnectionStatus = new QLabel(databaseConnection);
        lblConnectionStatus->setObjectName(QStringLiteral("lblConnectionStatus"));
        lblConnectionStatus->setTextFormat(Qt::AutoText);

        gridLayout2->addWidget(lblConnectionStatus, 5, 3, 1, 4);

        label_7 = new QLabel(databaseConnection);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout2->addWidget(label_7, 5, 1, 1, 2);

        lblDatabaseHost = new QLabel(databaseConnection);
        lblDatabaseHost->setObjectName(QStringLiteral("lblDatabaseHost"));

        gridLayout2->addWidget(lblDatabaseHost, 1, 0, 1, 1);

        leDatabaseHost = new QLineEdit(databaseConnection);
        leDatabaseHost->setObjectName(QStringLiteral("leDatabaseHost"));

        gridLayout2->addWidget(leDatabaseHost, 1, 1, 1, 1);

        leDatabasePassword = new QLineEdit(databaseConnection);
        leDatabasePassword->setObjectName(QStringLiteral("leDatabasePassword"));
        leDatabasePassword->setEchoMode(QLineEdit::Password);

        gridLayout2->addWidget(leDatabasePassword, 1, 6, 1, 1);

        leDatabaseName = new QLineEdit(databaseConnection);
        leDatabaseName->setObjectName(QStringLiteral("leDatabaseName"));

        gridLayout2->addWidget(leDatabaseName, 3, 1, 1, 1);

        spacerItem2 = new QSpacerItem(20, 51, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout2->addItem(spacerItem2, 4, 0, 1, 1);

        lblDatabaseUsername = new QLabel(databaseConnection);
        lblDatabaseUsername->setObjectName(QStringLiteral("lblDatabaseUsername"));

        gridLayout2->addWidget(lblDatabaseUsername, 0, 5, 1, 1);

        leDatabasePort = new QLineEdit(databaseConnection);
        leDatabasePort->setObjectName(QStringLiteral("leDatabasePort"));

        gridLayout2->addWidget(leDatabasePort, 2, 1, 1, 1);

        pbtnConnect = new QPushButton(databaseConnection);
        pbtnConnect->setObjectName(QStringLiteral("pbtnConnect"));

        gridLayout2->addWidget(pbtnConnect, 5, 0, 1, 1);

        leDatabaseUsername = new QLineEdit(databaseConnection);
        leDatabaseUsername->setObjectName(QStringLiteral("leDatabaseUsername"));

        gridLayout2->addWidget(leDatabaseUsername, 0, 6, 1, 1);

        cboxDatabaseType = new QComboBox(databaseConnection);
        cboxDatabaseType->setObjectName(QStringLiteral("cboxDatabaseType"));

        gridLayout2->addWidget(cboxDatabaseType, 0, 1, 1, 1);

        spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem3, 0, 4, 1, 1);

        lblDatabaseName = new QLabel(databaseConnection);
        lblDatabaseName->setObjectName(QStringLiteral("lblDatabaseName"));

        gridLayout2->addWidget(lblDatabaseName, 3, 0, 1, 1);

        lblDatabasePassword = new QLabel(databaseConnection);
        lblDatabasePassword->setObjectName(QStringLiteral("lblDatabasePassword"));

        gridLayout2->addWidget(lblDatabasePassword, 1, 5, 1, 1);

        label_8 = new QLabel(databaseConnection);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout2->addWidget(label_8, 0, 0, 1, 1);

        lblDatabasePort = new QLabel(databaseConnection);
        lblDatabasePort->setObjectName(QStringLiteral("lblDatabasePort"));

        gridLayout2->addWidget(lblDatabasePort, 2, 0, 1, 1);

        spacerItem4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem4, 0, 2, 1, 2);

        pbtnOpenFile = new QPushButton(databaseConnection);
        pbtnOpenFile->setObjectName(QStringLiteral("pbtnOpenFile"));
        pbtnOpenFile->setIcon(icon1);

        gridLayout2->addWidget(pbtnOpenFile, 3, 2, 1, 2);

        databaseConnectionToolBox->addItem(databaseConnection, QStringLiteral("Database Connection"));
        sqlQuery = new QWidget();
        sqlQuery->setObjectName(QStringLiteral("sqlQuery"));
        sqlQuery->setGeometry(QRect(0, 0, 470, 237));
        gridLayout3 = new QGridLayout(sqlQuery);
        gridLayout3->setSpacing(6);
        gridLayout3->setContentsMargins(9, 9, 9, 9);
        gridLayout3->setObjectName(QStringLiteral("gridLayout3"));
        spacerItem5 = new QSpacerItem(341, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout3->addItem(spacerItem5, 1, 1, 1, 1);

        pbtnRunQuery = new QPushButton(sqlQuery);
        pbtnRunQuery->setObjectName(QStringLiteral("pbtnRunQuery"));

        gridLayout3->addWidget(pbtnRunQuery, 1, 0, 1, 1);

        teditSqlStatement = new QTextEdit(sqlQuery);
        teditSqlStatement->setObjectName(QStringLiteral("teditSqlStatement"));

        gridLayout3->addWidget(teditSqlStatement, 0, 0, 1, 2);

        databaseConnectionToolBox->addItem(sqlQuery, QStringLiteral("SQL Query"));

        gridLayout->addWidget(databaseConnectionToolBox, 0, 1, 1, 1);

        buttonBox = new QDialogButtonBox(eVisDatabaseConnectionGuiBase);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 4, 1, 1, 1);

        spacerItem6 = new QSpacerItem(0, 53, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem6, 3, 2, 2, 1);

        line = new QFrame(eVisDatabaseConnectionGuiBase);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 3, 1, 1, 1);

        teditConsole = new QTextEdit(eVisDatabaseConnectionGuiBase);
        teditConsole->setObjectName(QStringLiteral("teditConsole"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Ignored);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(teditConsole->sizePolicy().hasHeightForWidth());
        teditConsole->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(teditConsole, 2, 1, 1, 1);

        spacerItem7 = new QSpacerItem(0, 125, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(spacerItem7, 2, 2, 1, 1);

        label = new QLabel(eVisDatabaseConnectionGuiBase);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 1, 1, 1);

        spacerItem8 = new QSpacerItem(0, 314, QSizePolicy::Minimum, QSizePolicy::Maximum);

        gridLayout->addItem(spacerItem8, 0, 2, 1, 1);

        spacerItem9 = new QSpacerItem(0, 530, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem9, 0, 0, 5, 1);

        QWidget::setTabOrder(teditConsole, cboxDatabaseType);
        QWidget::setTabOrder(cboxDatabaseType, leDatabaseHost);
        QWidget::setTabOrder(leDatabaseHost, leDatabasePort);
        QWidget::setTabOrder(leDatabasePort, leDatabaseName);
        QWidget::setTabOrder(leDatabaseName, leDatabaseUsername);
        QWidget::setTabOrder(leDatabaseUsername, leDatabasePassword);
        QWidget::setTabOrder(leDatabasePassword, pbtnConnect);
        QWidget::setTabOrder(pbtnConnect, teditSqlStatement);
        QWidget::setTabOrder(teditSqlStatement, pbtnRunQuery);
        QWidget::setTabOrder(pbtnRunQuery, buttonBox);

        retranslateUi(eVisDatabaseConnectionGuiBase);

        databaseConnectionToolBox->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(eVisDatabaseConnectionGuiBase);
    } // setupUi

    void retranslateUi(QDialog *eVisDatabaseConnectionGuiBase)
    {
        eVisDatabaseConnectionGuiBase->setWindowTitle(QApplication::translate("eVisDatabaseConnectionGuiBase", "Database Connection", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pbtnLoadPredefinedQueries->setToolTip(QApplication::translate("eVisDatabaseConnectionGuiBase", "Load predefined queries", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        pbtnLoadPredefinedQueries->setWhatsThis(QApplication::translate("eVisDatabaseConnectionGuiBase", "Loads an XML file with predefined queries. Use the Open File window to locate the XML file that contains one or more predefined queries using the format described in the user guide.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        pbtnLoadPredefinedQueries->setText(QString());
        lblPredefinedQueryFilename->setText(QString());
#ifndef QT_NO_TOOLTIP
        teditQueryDescription->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        teditQueryDescription->setWhatsThis(QApplication::translate("eVisDatabaseConnectionGuiBase", "The description of the selected query.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        cboxPredefinedQueryList->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        cboxPredefinedQueryList->setWhatsThis(QApplication::translate("eVisDatabaseConnectionGuiBase", "Select the predefined query you want to use from the drop-down list containing queries identified from the file loaded using the Open File icon above. To run the query you need to click on the SQL Query tab. The query will be automatically entered in the query window.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        databaseConnectionToolBox->setItemText(databaseConnectionToolBox->indexOf(PredefinedQueries), QApplication::translate("eVisDatabaseConnectionGuiBase", "Predefined Queries", Q_NULLPTR));
        lblConnectionStatus->setText(QApplication::translate("eVisDatabaseConnectionGuiBase", "not connected", Q_NULLPTR));
        label_7->setText(QApplication::translate("eVisDatabaseConnectionGuiBase", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal; text-decoration:none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-style:italic;\">Connection Status: </span></p></body></html>", Q_NULLPTR));
        lblDatabaseHost->setText(QApplication::translate("eVisDatabaseConnectionGuiBase", "Database Host", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        leDatabaseHost->setWhatsThis(QApplication::translate("eVisDatabaseConnectionGuiBase", "Enter the database host. If the database resides on your desktop you should enter \302\250localhost\302\250. If you selected \302\250MSAccess\302\250 as the database type this option will not be available. ", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        leDatabasePassword->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        leDatabasePassword->setWhatsThis(QApplication::translate("eVisDatabaseConnectionGuiBase", "Password to access the database.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        leDatabaseName->setWhatsThis(QApplication::translate("eVisDatabaseConnectionGuiBase", "Enter the name of the database.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        lblDatabaseUsername->setText(QApplication::translate("eVisDatabaseConnectionGuiBase", "Username", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        leDatabasePort->setWhatsThis(QApplication::translate("eVisDatabaseConnectionGuiBase", "Enter the port through which the database must be accessed if a MYSQL database is used.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        pbtnConnect->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        pbtnConnect->setWhatsThis(QApplication::translate("eVisDatabaseConnectionGuiBase", "Connect to the database using the parameters selected above. If the connection was successful a message will be displayed in the Output Console below saying the connection was established. ", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        pbtnConnect->setText(QApplication::translate("eVisDatabaseConnectionGuiBase", "Connect", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        leDatabaseUsername->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        leDatabaseUsername->setWhatsThis(QApplication::translate("eVisDatabaseConnectionGuiBase", "User name to access the database.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        cboxDatabaseType->setWhatsThis(QApplication::translate("eVisDatabaseConnectionGuiBase", "Select the type of database from the list of supported databases in the drop-down menu.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        lblDatabaseName->setText(QApplication::translate("eVisDatabaseConnectionGuiBase", "Database Name", Q_NULLPTR));
        lblDatabasePassword->setText(QApplication::translate("eVisDatabaseConnectionGuiBase", "Password", Q_NULLPTR));
        label_8->setText(QApplication::translate("eVisDatabaseConnectionGuiBase", "Database Type", Q_NULLPTR));
        lblDatabasePort->setText(QApplication::translate("eVisDatabaseConnectionGuiBase", "Port", Q_NULLPTR));
        pbtnOpenFile->setText(QString());
        databaseConnectionToolBox->setItemText(databaseConnectionToolBox->indexOf(databaseConnection), QApplication::translate("eVisDatabaseConnectionGuiBase", "Database Connection", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        pbtnRunQuery->setWhatsThis(QApplication::translate("eVisDatabaseConnectionGuiBase", "Run the query entered above. The status of the query will be displayed in the Output Console below.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        pbtnRunQuery->setText(QApplication::translate("eVisDatabaseConnectionGuiBase", "Run Query", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        teditSqlStatement->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        teditSqlStatement->setWhatsThis(QApplication::translate("eVisDatabaseConnectionGuiBase", "Enter the query you want to run in this window.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        databaseConnectionToolBox->setItemText(databaseConnectionToolBox->indexOf(sqlQuery), QApplication::translate("eVisDatabaseConnectionGuiBase", "SQL Query", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        teditConsole->setWhatsThis(QApplication::translate("eVisDatabaseConnectionGuiBase", "A window for status messages to be displayed.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        label->setText(QApplication::translate("eVisDatabaseConnectionGuiBase", "Output Console", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class eVisDatabaseConnectionGuiBase: public Ui_eVisDatabaseConnectionGuiBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVISDATABASECONNECTIONGUIBASE_H
